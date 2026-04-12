# 1 "data/maps/MtPyre_6F/scripts.pory"

# 2 "data/maps/MtPyre_6F/scripts.pory"
MtPyre_6F_MapScripts::
# 3 "data/maps/MtPyre_6F/scripts.pory"
	.byte 0
# 4 "data/maps/MtPyre_6F/scripts.pory"

# 5 "data/maps/MtPyre_6F/scripts.pory"

# 6 "data/maps/MtPyre_6F/scripts.pory"
MtPyre_6F_EventScript_Valerie::
# 7 "data/maps/MtPyre_6F/scripts.pory"
# 4 "data/maps/MtPyre_6F/scripts.pory"
# 8 "data/maps/MtPyre_6F/scripts.pory"
	trainerbattle_single TRAINER_VALERIE_1, MtPyre_6F_Text_ValerieIntro, MtPyre_6F_Text_ValerieDefeat, MtPyre_6F_EventScript_RegisterValerie
# 9 "data/maps/MtPyre_6F/scripts.pory"
# 5 "data/maps/MtPyre_6F/scripts.pory"
# 10 "data/maps/MtPyre_6F/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 11 "data/maps/MtPyre_6F/scripts.pory"
# 6 "data/maps/MtPyre_6F/scripts.pory"
# 12 "data/maps/MtPyre_6F/scripts.pory"
	compare VAR_RESULT, TRUE
# 13 "data/maps/MtPyre_6F/scripts.pory"
	goto_if_eq MtPyre_6F_EventScript_Valerie_2
# 14 "data/maps/MtPyre_6F/scripts.pory"
MtPyre_6F_EventScript_Valerie_1:
# 15 "data/maps/MtPyre_6F/scripts.pory"
# 9 "data/maps/MtPyre_6F/scripts.pory"
# 16 "data/maps/MtPyre_6F/scripts.pory"
	msgbox MtPyre_6F_Text_ValeriePostBattle, MSGBOX_DEFAULT
# 17 "data/maps/MtPyre_6F/scripts.pory"
# 10 "data/maps/MtPyre_6F/scripts.pory"
# 18 "data/maps/MtPyre_6F/scripts.pory"
	release
# 19 "data/maps/MtPyre_6F/scripts.pory"
	end
# 20 "data/maps/MtPyre_6F/scripts.pory"

# 21 "data/maps/MtPyre_6F/scripts.pory"
MtPyre_6F_EventScript_Valerie_2:
# 22 "data/maps/MtPyre_6F/scripts.pory"
# 7 "data/maps/MtPyre_6F/scripts.pory"
# 23 "data/maps/MtPyre_6F/scripts.pory"
	goto MtPyre_6F_EventScript_RematchValerie
# 24 "data/maps/MtPyre_6F/scripts.pory"
	goto MtPyre_6F_EventScript_Valerie_1
# 25 "data/maps/MtPyre_6F/scripts.pory"

# 26 "data/maps/MtPyre_6F/scripts.pory"

# 27 "data/maps/MtPyre_6F/scripts.pory"
MtPyre_6F_EventScript_RegisterValerie::
# 28 "data/maps/MtPyre_6F/scripts.pory"
# 15 "data/maps/MtPyre_6F/scripts.pory"
# 29 "data/maps/MtPyre_6F/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 30 "data/maps/MtPyre_6F/scripts.pory"
# 16 "data/maps/MtPyre_6F/scripts.pory"
# 31 "data/maps/MtPyre_6F/scripts.pory"
	waitmovement 0
# 32 "data/maps/MtPyre_6F/scripts.pory"
# 17 "data/maps/MtPyre_6F/scripts.pory"
# 33 "data/maps/MtPyre_6F/scripts.pory"
	msgbox MtPyre_6F_Text_ValerieRegister, MSGBOX_DEFAULT
# 34 "data/maps/MtPyre_6F/scripts.pory"
# 18 "data/maps/MtPyre_6F/scripts.pory"
# 35 "data/maps/MtPyre_6F/scripts.pory"
	register_matchcall TRAINER_VALERIE_1
# 36 "data/maps/MtPyre_6F/scripts.pory"
# 19 "data/maps/MtPyre_6F/scripts.pory"
# 37 "data/maps/MtPyre_6F/scripts.pory"
	release
# 38 "data/maps/MtPyre_6F/scripts.pory"
	end
# 39 "data/maps/MtPyre_6F/scripts.pory"

# 40 "data/maps/MtPyre_6F/scripts.pory"

# 41 "data/maps/MtPyre_6F/scripts.pory"
MtPyre_6F_EventScript_RematchValerie::
# 42 "data/maps/MtPyre_6F/scripts.pory"
# 24 "data/maps/MtPyre_6F/scripts.pory"
# 43 "data/maps/MtPyre_6F/scripts.pory"
	trainerbattle_rematch TRAINER_VALERIE_1, MtPyre_6F_Text_ValerieRematchIntro, MtPyre_6F_Text_ValerieRematchDefeat
# 44 "data/maps/MtPyre_6F/scripts.pory"
# 25 "data/maps/MtPyre_6F/scripts.pory"
# 45 "data/maps/MtPyre_6F/scripts.pory"
	msgbox MtPyre_6F_Text_ValeriePostRematch, MSGBOX_AUTOCLOSE
# 46 "data/maps/MtPyre_6F/scripts.pory"
	end
# 47 "data/maps/MtPyre_6F/scripts.pory"

# 48 "data/maps/MtPyre_6F/scripts.pory"

# 49 "data/maps/MtPyre_6F/scripts.pory"
MtPyre_6F_EventScript_Cedric::
# 50 "data/maps/MtPyre_6F/scripts.pory"
# 30 "data/maps/MtPyre_6F/scripts.pory"
# 51 "data/maps/MtPyre_6F/scripts.pory"
	trainerbattle_single TRAINER_CEDRIC, MtPyre_6F_Text_CedricIntro, MtPyre_6F_Text_CedricDefeat
# 52 "data/maps/MtPyre_6F/scripts.pory"
# 31 "data/maps/MtPyre_6F/scripts.pory"
# 53 "data/maps/MtPyre_6F/scripts.pory"
	msgbox MtPyre_6F_Text_CedricPostBattle, MSGBOX_AUTOCLOSE
# 54 "data/maps/MtPyre_6F/scripts.pory"
	end
# 55 "data/maps/MtPyre_6F/scripts.pory"

# 56 "data/maps/MtPyre_6F/scripts.pory"

# 57 "data/maps/MtPyre_6F/scripts.pory"
MtPyre_6F_Text_ValerieIntro::
# 58 "data/maps/MtPyre_6F/scripts.pory"
# 35 "data/maps/MtPyre_6F/scripts.pory"
# 59 "data/maps/MtPyre_6F/scripts.pory"
	.string "When I'm here…\n"
# 60 "data/maps/MtPyre_6F/scripts.pory"
	.string "A curious power flows into me…$"
# 61 "data/maps/MtPyre_6F/scripts.pory"

# 62 "data/maps/MtPyre_6F/scripts.pory"
MtPyre_6F_Text_ValerieDefeat::
# 63 "data/maps/MtPyre_6F/scripts.pory"
# 40 "data/maps/MtPyre_6F/scripts.pory"
# 64 "data/maps/MtPyre_6F/scripts.pory"
	.string "The power is ebbing away…$"
# 65 "data/maps/MtPyre_6F/scripts.pory"

# 66 "data/maps/MtPyre_6F/scripts.pory"
MtPyre_6F_Text_ValeriePostBattle::
# 67 "data/maps/MtPyre_6F/scripts.pory"
# 44 "data/maps/MtPyre_6F/scripts.pory"
# 68 "data/maps/MtPyre_6F/scripts.pory"
	.string "Perhaps the power is from the spirits\n"
# 69 "data/maps/MtPyre_6F/scripts.pory"
	.string "of POKéMON in fitful sleep here…$"
# 70 "data/maps/MtPyre_6F/scripts.pory"

# 71 "data/maps/MtPyre_6F/scripts.pory"
MtPyre_6F_Text_ValerieRegister::
# 72 "data/maps/MtPyre_6F/scripts.pory"
# 49 "data/maps/MtPyre_6F/scripts.pory"
# 73 "data/maps/MtPyre_6F/scripts.pory"
	.string "Fufufu… I lost the match, but…\n"
# 74 "data/maps/MtPyre_6F/scripts.pory"
	.string "I have this little ability…\p"
# 75 "data/maps/MtPyre_6F/scripts.pory"
	.string "Without ever laying my hands on\n"
# 76 "data/maps/MtPyre_6F/scripts.pory"
	.string "your POKéNAV… Hiyah!$"
# 77 "data/maps/MtPyre_6F/scripts.pory"

# 78 "data/maps/MtPyre_6F/scripts.pory"
MtPyre_6F_Text_ValerieRematchIntro::
# 79 "data/maps/MtPyre_6F/scripts.pory"
# 56 "data/maps/MtPyre_6F/scripts.pory"
# 80 "data/maps/MtPyre_6F/scripts.pory"
	.string "Behind you…\n"
# 81 "data/maps/MtPyre_6F/scripts.pory"
	.string "What is it…$"
# 82 "data/maps/MtPyre_6F/scripts.pory"

# 83 "data/maps/MtPyre_6F/scripts.pory"
MtPyre_6F_Text_ValerieRematchDefeat::
# 84 "data/maps/MtPyre_6F/scripts.pory"
# 61 "data/maps/MtPyre_6F/scripts.pory"
# 85 "data/maps/MtPyre_6F/scripts.pory"
	.string "Something faded away…$"
# 86 "data/maps/MtPyre_6F/scripts.pory"

# 87 "data/maps/MtPyre_6F/scripts.pory"
MtPyre_6F_Text_ValeriePostRematch::
# 88 "data/maps/MtPyre_6F/scripts.pory"
# 65 "data/maps/MtPyre_6F/scripts.pory"
# 89 "data/maps/MtPyre_6F/scripts.pory"
	.string "The POKéMON at rest here…\n"
# 90 "data/maps/MtPyre_6F/scripts.pory"
	.string "Sometimes, they play…$"
# 91 "data/maps/MtPyre_6F/scripts.pory"

# 92 "data/maps/MtPyre_6F/scripts.pory"
MtPyre_6F_Text_CedricIntro::
# 93 "data/maps/MtPyre_6F/scripts.pory"
# 70 "data/maps/MtPyre_6F/scripts.pory"
# 94 "data/maps/MtPyre_6F/scripts.pory"
	.string "Have you lost your bearings?\n"
# 95 "data/maps/MtPyre_6F/scripts.pory"
	.string "Have no fear for I am here!$"
# 96 "data/maps/MtPyre_6F/scripts.pory"

# 97 "data/maps/MtPyre_6F/scripts.pory"
MtPyre_6F_Text_CedricDefeat::
# 98 "data/maps/MtPyre_6F/scripts.pory"
# 75 "data/maps/MtPyre_6F/scripts.pory"
# 99 "data/maps/MtPyre_6F/scripts.pory"
	.string "Weren't you lost?$"
# 100 "data/maps/MtPyre_6F/scripts.pory"

# 101 "data/maps/MtPyre_6F/scripts.pory"
MtPyre_6F_Text_CedricPostBattle::
# 102 "data/maps/MtPyre_6F/scripts.pory"
# 79 "data/maps/MtPyre_6F/scripts.pory"
# 103 "data/maps/MtPyre_6F/scripts.pory"
	.string "I had this feeling that a lost TRAINER\n"
# 104 "data/maps/MtPyre_6F/scripts.pory"
	.string "would be panicked and easy to beat.\p"
# 105 "data/maps/MtPyre_6F/scripts.pory"
	.string "It's dirty and I won't try it again…$"
