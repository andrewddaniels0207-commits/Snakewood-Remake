# 1 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"

# 2 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
AbandonedShip_Rooms_1F_MapScripts::
# 3 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	.byte 0
# 4 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"

# 5 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"

# 6 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
AbandonedShip_Rooms_1F_EventScript_Gentleman::
# 7 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
# 5 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
# 8 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	msgbox AbandonedShip_Rooms_1F_Text_TakingALookAround, MSGBOX_NPC
# 9 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	end
# 10 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"

# 11 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"

# 12 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
AbandonedShip_Rooms_1F_EventScript_Demetrius::
# 13 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
# 11 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
# 14 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	trainerbattle_single TRAINER_DEMETRIUS, AbandonedShip_Rooms_1F_Text_DemetriusIntro, AbandonedShip_Rooms_1F_Text_DemetriusDefeat
# 15 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
# 13 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
# 16 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	msgbox AbandonedShip_Rooms_1F_Text_DemetriusPostBattle, MSGBOX_AUTOCLOSE
# 17 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	end
# 18 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"

# 19 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"

# 20 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
AbandonedShip_Rooms_1F_EventScript_Thalia::
# 21 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
# 19 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
# 22 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	trainerbattle_single TRAINER_THALIA_1, AbandonedShip_Rooms_1F_Text_ThaliaIntro, AbandonedShip_Rooms_1F_Text_ThaliaDefeat, AbandonedShip_Rooms_1F_EventScript_RegisterThalia
# 23 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
# 21 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
# 24 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 25 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
# 23 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
# 26 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	compare VAR_RESULT, TRUE
# 27 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
# 24 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
# 28 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	goto_if_eq AbandonedShip_Rooms_1F_EventScript_Thalia_2
# 29 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	return
# 30 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"

# 31 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"

# 32 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
AbandonedShip_Rooms_1F_EventScript_Thalia_1::
# 33 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
# 29 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
# 34 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	msgbox AbandonedShip_Rooms_1F_Text_ThaliaPostBattle, MSGBOX_DEFAULT
# 35 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
# 31 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
# 36 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	release
# 37 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	end
# 38 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"

# 39 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"

# 40 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
AbandonedShip_Rooms_1F_EventScript_Thalia_2::
# 41 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
# 37 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
# 42 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	goto AbandonedShip_Rooms_1F_EventScript_ThaliaRematch
# 43 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
# 38 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
# 44 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	goto AbandonedShip_Rooms_1F_EventScript_Thalia_1
# 45 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	return
# 46 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"

# 47 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"

# 48 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
AbandonedShip_Rooms_1F_EventScript_RegisterThalia::
# 49 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
# 43 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
# 50 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 51 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
# 45 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
# 52 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	waitmovement 0
# 53 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
# 47 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
# 54 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	msgbox AbandonedShip_Rooms_1F_Text_ThaliaRegister, MSGBOX_DEFAULT
# 55 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
# 49 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
# 56 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	register_matchcall TRAINER_THALIA_1
# 57 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
# 51 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
# 58 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	release
# 59 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	end
# 60 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"

# 61 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"

# 62 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
AbandonedShip_Rooms_1F_EventScript_ThaliaRematch::
# 63 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
# 57 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
# 64 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	trainerbattle_rematch TRAINER_THALIA_1, AbandonedShip_Rooms_1F_Text_ThaliaRematchIntro, AbandonedShip_Rooms_1F_Text_ThaliaRematchDefeat
# 65 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
# 59 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
# 66 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	msgbox AbandonedShip_Rooms_1F_Text_ThaliaPostRematch, MSGBOX_AUTOCLOSE
# 67 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	end
# 68 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"

# 69 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"

# 70 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
AbandonedShip_Rooms_1F_Text_TakingALookAround::
# 71 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
# 63 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
# 72 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	.string "Ships of this sort are rare, so I'm\n"
# 73 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	.string "taking a look around.\p"
# 74 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	.string "Hmhm…\n"
# 75 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	.string "There appear to be other cabins…$"
# 76 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"

# 77 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
AbandonedShip_Rooms_1F_Text_ThaliaIntro::
# 78 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
# 70 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
# 79 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	.string "What on earth would compel you to\n"
# 80 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	.string "come here? You must be curious!$"
# 81 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"

# 82 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
AbandonedShip_Rooms_1F_Text_ThaliaDefeat::
# 83 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
# 75 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
# 84 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	.string "Not just curious, but also strong…$"
# 85 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"

# 86 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
AbandonedShip_Rooms_1F_Text_ThaliaPostBattle::
# 87 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
# 79 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
# 88 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	.string "The man next door…\p"
# 89 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	.string "He says he's just sightseeing,\n"
# 90 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	.string "but I don't know about that.$"
# 91 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"

# 92 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
AbandonedShip_Rooms_1F_Text_ThaliaRegister::
# 93 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
# 85 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
# 94 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	.string "You're such a tough TRAINER!\n"
# 95 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	.string "Let me register you as a memento!$"
# 96 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"

# 97 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
AbandonedShip_Rooms_1F_Text_ThaliaRematchIntro::
# 98 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
# 90 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
# 99 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	.string "What on earth would compel you to\n"
# 100 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	.string "come back? You must really be curious!$"
# 101 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"

# 102 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
AbandonedShip_Rooms_1F_Text_ThaliaRematchDefeat::
# 103 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
# 95 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
# 104 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	.string "Aren't you too strong?$"
# 105 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"

# 106 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
AbandonedShip_Rooms_1F_Text_ThaliaPostRematch::
# 107 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
# 99 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
# 108 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	.string "I'm sure that man's up to something!\n"
# 109 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	.string "He just acts so suspiciously!$"
# 110 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"

# 111 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
AbandonedShip_Rooms_1F_Text_DemetriusIntro::
# 112 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
# 104 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
# 113 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	.string "Waaah!\n"
# 114 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	.string "I've been found! …Huh?$"
# 115 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"

# 116 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
AbandonedShip_Rooms_1F_Text_DemetriusDefeat::
# 117 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
# 109 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
# 118 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	.string "Oh, you're not my mom.$"
# 119 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"

# 120 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
AbandonedShip_Rooms_1F_Text_DemetriusPostBattle::
# 121 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
# 113 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
# 122 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	.string "I'm in trouble with my mom, so I ran.\n"
# 123 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	.string "Keep it a secret where I am!$"
