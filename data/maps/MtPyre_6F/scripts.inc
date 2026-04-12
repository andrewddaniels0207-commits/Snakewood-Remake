MtPyre_6F_MapScripts::
	.byte 0


MtPyre_6F_EventScript_Valerie::
# 4 "data/maps/MtPyre_6F/scripts.pory"
	trainerbattle_single TRAINER_VALERIE_1, MtPyre_6F_Text_ValerieIntro, MtPyre_6F_Text_ValerieDefeat, MtPyre_6F_EventScript_RegisterValerie
# 5 "data/maps/MtPyre_6F/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 6 "data/maps/MtPyre_6F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq MtPyre_6F_EventScript_Valerie_2
MtPyre_6F_EventScript_Valerie_1:
# 9 "data/maps/MtPyre_6F/scripts.pory"
	msgbox MtPyre_6F_Text_ValeriePostBattle, MSGBOX_DEFAULT
# 10 "data/maps/MtPyre_6F/scripts.pory"
	release
	end

MtPyre_6F_EventScript_Valerie_2:
# 7 "data/maps/MtPyre_6F/scripts.pory"
	goto MtPyre_6F_EventScript_RematchValerie
	goto MtPyre_6F_EventScript_Valerie_1


MtPyre_6F_EventScript_RegisterValerie::
# 15 "data/maps/MtPyre_6F/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 16 "data/maps/MtPyre_6F/scripts.pory"
	waitmovement 0
# 17 "data/maps/MtPyre_6F/scripts.pory"
	msgbox MtPyre_6F_Text_ValerieRegister, MSGBOX_DEFAULT
# 18 "data/maps/MtPyre_6F/scripts.pory"
	register_matchcall TRAINER_VALERIE_1
# 19 "data/maps/MtPyre_6F/scripts.pory"
	release
	end


MtPyre_6F_EventScript_RematchValerie::
# 24 "data/maps/MtPyre_6F/scripts.pory"
	trainerbattle_rematch TRAINER_VALERIE_1, MtPyre_6F_Text_ValerieRematchIntro, MtPyre_6F_Text_ValerieRematchDefeat
# 25 "data/maps/MtPyre_6F/scripts.pory"
	msgbox MtPyre_6F_Text_ValeriePostRematch, MSGBOX_AUTOCLOSE
	end


MtPyre_6F_EventScript_Cedric::
# 30 "data/maps/MtPyre_6F/scripts.pory"
	trainerbattle_single TRAINER_CEDRIC, MtPyre_6F_Text_CedricIntro, MtPyre_6F_Text_CedricDefeat
# 31 "data/maps/MtPyre_6F/scripts.pory"
	msgbox MtPyre_6F_Text_CedricPostBattle, MSGBOX_AUTOCLOSE
	end


MtPyre_6F_Text_ValerieIntro::
# 35 "data/maps/MtPyre_6F/scripts.pory"
	.string "When I'm here…\n"
	.string "A curious power flows into me…$"

MtPyre_6F_Text_ValerieDefeat::
# 40 "data/maps/MtPyre_6F/scripts.pory"
	.string "The power is ebbing away…$"

MtPyre_6F_Text_ValeriePostBattle::
# 44 "data/maps/MtPyre_6F/scripts.pory"
	.string "Perhaps the power is from the spirits\n"
	.string "of POKéMON in fitful sleep here…$"

MtPyre_6F_Text_ValerieRegister::
# 49 "data/maps/MtPyre_6F/scripts.pory"
	.string "Fufufu… I lost the match, but…\n"
	.string "I have this little ability…\p"
	.string "Without ever laying my hands on\n"
	.string "your POKéNAV… Hiyah!$"

MtPyre_6F_Text_ValerieRematchIntro::
# 56 "data/maps/MtPyre_6F/scripts.pory"
	.string "Behind you…\n"
	.string "What is it…$"

MtPyre_6F_Text_ValerieRematchDefeat::
# 61 "data/maps/MtPyre_6F/scripts.pory"
	.string "Something faded away…$"

MtPyre_6F_Text_ValeriePostRematch::
# 65 "data/maps/MtPyre_6F/scripts.pory"
	.string "The POKéMON at rest here…\n"
	.string "Sometimes, they play…$"

MtPyre_6F_Text_CedricIntro::
# 70 "data/maps/MtPyre_6F/scripts.pory"
	.string "Have you lost your bearings?\n"
	.string "Have no fear for I am here!$"

MtPyre_6F_Text_CedricDefeat::
# 75 "data/maps/MtPyre_6F/scripts.pory"
	.string "Weren't you lost?$"

MtPyre_6F_Text_CedricPostBattle::
# 79 "data/maps/MtPyre_6F/scripts.pory"
	.string "I had this feeling that a lost TRAINER\n"
	.string "would be panicked and easy to beat.\p"
	.string "It's dirty and I won't try it again…$"
