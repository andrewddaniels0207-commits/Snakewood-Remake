# 1 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 2 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_MapScripts::
# 3 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.byte 0
# 4 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 5 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 6 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_EventScript_Nicolas::
# 7 "data/maps/MeteorFalls_1F_2R/scripts.pory"
# 4 "data/maps/MeteorFalls_1F_2R/scripts.pory"
# 8 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	trainerbattle_single TRAINER_NICOLAS_1, MeteorFalls_1F_2R_Text_NicolasIntro, MeteorFalls_1F_2R_Text_NicolasDefeat, MeteorFalls_1F_2R_EventScript_RegisterNicolas
# 9 "data/maps/MeteorFalls_1F_2R/scripts.pory"
# 5 "data/maps/MeteorFalls_1F_2R/scripts.pory"
# 10 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 11 "data/maps/MeteorFalls_1F_2R/scripts.pory"
# 6 "data/maps/MeteorFalls_1F_2R/scripts.pory"
# 12 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	compare VAR_RESULT, TRUE
# 13 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	goto_if_eq MeteorFalls_1F_2R_EventScript_Nicolas_2
# 14 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_EventScript_Nicolas_1:
# 15 "data/maps/MeteorFalls_1F_2R/scripts.pory"
# 9 "data/maps/MeteorFalls_1F_2R/scripts.pory"
# 16 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	msgbox MeteorFalls_1F_2R_Text_NicolasPostBattle, MSGBOX_DEFAULT
# 17 "data/maps/MeteorFalls_1F_2R/scripts.pory"
# 10 "data/maps/MeteorFalls_1F_2R/scripts.pory"
# 18 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	release
# 19 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	end
# 20 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 21 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_EventScript_Nicolas_2:
# 22 "data/maps/MeteorFalls_1F_2R/scripts.pory"
# 7 "data/maps/MeteorFalls_1F_2R/scripts.pory"
# 23 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	goto MeteorFalls_1F_2R_EventScript_RematchNicolas
# 24 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	goto MeteorFalls_1F_2R_EventScript_Nicolas_1
# 25 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 26 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 27 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_EventScript_RegisterNicolas::
# 28 "data/maps/MeteorFalls_1F_2R/scripts.pory"
# 15 "data/maps/MeteorFalls_1F_2R/scripts.pory"
# 29 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 30 "data/maps/MeteorFalls_1F_2R/scripts.pory"
# 16 "data/maps/MeteorFalls_1F_2R/scripts.pory"
# 31 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	waitmovement 0
# 32 "data/maps/MeteorFalls_1F_2R/scripts.pory"
# 17 "data/maps/MeteorFalls_1F_2R/scripts.pory"
# 33 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	msgbox MeteorFalls_1F_2R_Text_NicolasRegister, MSGBOX_DEFAULT
# 34 "data/maps/MeteorFalls_1F_2R/scripts.pory"
# 18 "data/maps/MeteorFalls_1F_2R/scripts.pory"
# 35 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	register_matchcall TRAINER_NICOLAS_1
# 36 "data/maps/MeteorFalls_1F_2R/scripts.pory"
# 19 "data/maps/MeteorFalls_1F_2R/scripts.pory"
# 37 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	release
# 38 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	end
# 39 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 40 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 41 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_EventScript_RematchNicolas::
# 42 "data/maps/MeteorFalls_1F_2R/scripts.pory"
# 24 "data/maps/MeteorFalls_1F_2R/scripts.pory"
# 43 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	trainerbattle_rematch TRAINER_NICOLAS_1, MeteorFalls_1F_2R_Text_NicolasRematchIntro, MeteorFalls_1F_2R_Text_NicolasRematchDefeat
# 44 "data/maps/MeteorFalls_1F_2R/scripts.pory"
# 25 "data/maps/MeteorFalls_1F_2R/scripts.pory"
# 45 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	msgbox MeteorFalls_1F_2R_Text_NicolasPostRematch, MSGBOX_AUTOCLOSE
# 46 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	end
# 47 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 48 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 49 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_EventScript_John::
# 50 "data/maps/MeteorFalls_1F_2R/scripts.pory"
# 30 "data/maps/MeteorFalls_1F_2R/scripts.pory"
# 51 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	trainerbattle_double TRAINER_JOHN_AND_JAY_1, MeteorFalls_1F_2R_Text_JohnIntro, MeteorFalls_1F_2R_Text_JohnDefeat, MeteorFalls_1F_2R_Text_JohnNotEnoughMons, MeteorFalls_1F_2R_EventScript_RegisterJohn
# 52 "data/maps/MeteorFalls_1F_2R/scripts.pory"
# 31 "data/maps/MeteorFalls_1F_2R/scripts.pory"
# 53 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 54 "data/maps/MeteorFalls_1F_2R/scripts.pory"
# 32 "data/maps/MeteorFalls_1F_2R/scripts.pory"
# 55 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	compare VAR_RESULT, TRUE
# 56 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	goto_if_eq MeteorFalls_1F_2R_EventScript_John_2
# 57 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_EventScript_John_1:
# 58 "data/maps/MeteorFalls_1F_2R/scripts.pory"
# 35 "data/maps/MeteorFalls_1F_2R/scripts.pory"
# 59 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	msgbox MeteorFalls_1F_2R_Text_JohnPostBattle, MSGBOX_DEFAULT
# 60 "data/maps/MeteorFalls_1F_2R/scripts.pory"
# 36 "data/maps/MeteorFalls_1F_2R/scripts.pory"
# 61 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	release
# 62 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	end
# 63 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 64 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_EventScript_John_2:
# 65 "data/maps/MeteorFalls_1F_2R/scripts.pory"
# 33 "data/maps/MeteorFalls_1F_2R/scripts.pory"
# 66 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	goto MeteorFalls_1F_2R_EventScript_RematchJohn
# 67 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	goto MeteorFalls_1F_2R_EventScript_John_1
# 68 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 69 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 70 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_EventScript_RegisterJohn::
# 71 "data/maps/MeteorFalls_1F_2R/scripts.pory"
# 41 "data/maps/MeteorFalls_1F_2R/scripts.pory"
# 72 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	msgbox MeteorFalls_1F_2R_Text_JohnRegister, MSGBOX_DEFAULT
# 73 "data/maps/MeteorFalls_1F_2R/scripts.pory"
# 42 "data/maps/MeteorFalls_1F_2R/scripts.pory"
# 74 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	register_matchcall TRAINER_JOHN_AND_JAY_1
# 75 "data/maps/MeteorFalls_1F_2R/scripts.pory"
# 43 "data/maps/MeteorFalls_1F_2R/scripts.pory"
# 76 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	release
# 77 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	end
# 78 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 79 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 80 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_EventScript_RematchJohn::
# 81 "data/maps/MeteorFalls_1F_2R/scripts.pory"
# 48 "data/maps/MeteorFalls_1F_2R/scripts.pory"
# 82 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	trainerbattle_rematch_double TRAINER_JOHN_AND_JAY_1, MeteorFalls_1F_2R_Text_JohnRematchIntro, MeteorFalls_1F_2R_Text_JohnRematchDefeat, MeteorFalls_1F_2R_Text_JohnRematchNotEnoughMons
# 83 "data/maps/MeteorFalls_1F_2R/scripts.pory"
# 49 "data/maps/MeteorFalls_1F_2R/scripts.pory"
# 84 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	msgbox MeteorFalls_1F_2R_Text_JohnPostRematch, MSGBOX_AUTOCLOSE
# 85 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	end
# 86 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 87 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 88 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_EventScript_Jay::
# 89 "data/maps/MeteorFalls_1F_2R/scripts.pory"
# 54 "data/maps/MeteorFalls_1F_2R/scripts.pory"
# 90 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	trainerbattle_double TRAINER_JOHN_AND_JAY_1, MeteorFalls_1F_2R_Text_JayIntro, MeteorFalls_1F_2R_Text_JayDefeat, MeteorFalls_1F_2R_Text_JayNotEnoughMons, MeteorFalls_1F_2R_EventScript_RegisterJay
# 91 "data/maps/MeteorFalls_1F_2R/scripts.pory"
# 55 "data/maps/MeteorFalls_1F_2R/scripts.pory"
# 92 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 93 "data/maps/MeteorFalls_1F_2R/scripts.pory"
# 56 "data/maps/MeteorFalls_1F_2R/scripts.pory"
# 94 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	compare VAR_RESULT, TRUE
# 95 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	goto_if_eq MeteorFalls_1F_2R_EventScript_Jay_2
# 96 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_EventScript_Jay_1:
# 97 "data/maps/MeteorFalls_1F_2R/scripts.pory"
# 59 "data/maps/MeteorFalls_1F_2R/scripts.pory"
# 98 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	msgbox MeteorFalls_1F_2R_Text_JayPostBattle, MSGBOX_DEFAULT
# 99 "data/maps/MeteorFalls_1F_2R/scripts.pory"
# 60 "data/maps/MeteorFalls_1F_2R/scripts.pory"
# 100 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	release
# 101 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	end
# 102 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 103 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_EventScript_Jay_2:
# 104 "data/maps/MeteorFalls_1F_2R/scripts.pory"
# 57 "data/maps/MeteorFalls_1F_2R/scripts.pory"
# 105 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	goto MeteorFalls_1F_2R_EventScript_RematchJay
# 106 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	goto MeteorFalls_1F_2R_EventScript_Jay_1
# 107 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 108 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 109 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_EventScript_RegisterJay::
# 110 "data/maps/MeteorFalls_1F_2R/scripts.pory"
# 65 "data/maps/MeteorFalls_1F_2R/scripts.pory"
# 111 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	msgbox MeteorFalls_1F_2R_Text_JohnRegister, MSGBOX_DEFAULT
# 112 "data/maps/MeteorFalls_1F_2R/scripts.pory"
# 66 "data/maps/MeteorFalls_1F_2R/scripts.pory"
# 113 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	register_matchcall TRAINER_JOHN_AND_JAY_1
# 114 "data/maps/MeteorFalls_1F_2R/scripts.pory"
# 67 "data/maps/MeteorFalls_1F_2R/scripts.pory"
# 115 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	release
# 116 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	end
# 117 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 118 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 119 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_EventScript_RematchJay::
# 120 "data/maps/MeteorFalls_1F_2R/scripts.pory"
# 72 "data/maps/MeteorFalls_1F_2R/scripts.pory"
# 121 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	trainerbattle_rematch_double TRAINER_JOHN_AND_JAY_1, MeteorFalls_1F_2R_Text_JayRematchIntro, MeteorFalls_1F_2R_Text_JayRematchDefeat, MeteorFalls_1F_2R_Text_JayRematchNotEnoughMons
# 122 "data/maps/MeteorFalls_1F_2R/scripts.pory"
# 73 "data/maps/MeteorFalls_1F_2R/scripts.pory"
# 123 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	msgbox MeteorFalls_1F_2R_Text_JayPostRematch, MSGBOX_AUTOCLOSE
# 124 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	end
# 125 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 126 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 127 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_Text_NicolasIntro::
# 128 "data/maps/MeteorFalls_1F_2R/scripts.pory"
# 77 "data/maps/MeteorFalls_1F_2R/scripts.pory"
# 129 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "This is where we DRAGON users do our\n"
# 130 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "training.\p"
# 131 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "The CHAMPION even visits.\n"
# 132 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "Now do you see how special it is here?$"
# 133 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 134 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_Text_NicolasDefeat::
# 135 "data/maps/MeteorFalls_1F_2R/scripts.pory"
# 84 "data/maps/MeteorFalls_1F_2R/scripts.pory"
# 136 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "Urgh!\n"
# 137 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "I didn't expect you to be so strong!$"
# 138 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 139 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_Text_NicolasPostBattle::
# 140 "data/maps/MeteorFalls_1F_2R/scripts.pory"
# 89 "data/maps/MeteorFalls_1F_2R/scripts.pory"
# 141 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "The road ahead remains long and harsh.\p"
# 142 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "When will my POKéMON and I become\n"
# 143 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "the best?$"
# 144 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 145 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_Text_NicolasRegister::
# 146 "data/maps/MeteorFalls_1F_2R/scripts.pory"
# 95 "data/maps/MeteorFalls_1F_2R/scripts.pory"
# 147 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "I want to know more about your power.\n"
# 148 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "Let me register you in my POKéNAV.$"
# 149 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 150 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_Text_NicolasRematchIntro::
# 151 "data/maps/MeteorFalls_1F_2R/scripts.pory"
# 100 "data/maps/MeteorFalls_1F_2R/scripts.pory"
# 152 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "Since we met, we have trained hard\n"
# 153 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "with our sights on number one.\p"
# 154 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "Help us see how much stronger we've\n"
# 155 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "become!$"
# 156 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 157 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_Text_NicolasRematchDefeat::
# 158 "data/maps/MeteorFalls_1F_2R/scripts.pory"
# 107 "data/maps/MeteorFalls_1F_2R/scripts.pory"
# 159 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "Urgh!\n"
# 160 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "I didn't expect you to be so strong!$"
# 161 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 162 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_Text_NicolasPostRematch::
# 163 "data/maps/MeteorFalls_1F_2R/scripts.pory"
# 112 "data/maps/MeteorFalls_1F_2R/scripts.pory"
# 164 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "You've obviously kept up your\n"
# 165 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "POKéMON training.\p"
# 166 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "So long as you remain strong, I, too,\n"
# 167 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "can become stronger!$"
# 168 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 169 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_Text_JohnIntro::
# 170 "data/maps/MeteorFalls_1F_2R/scripts.pory"
# 119 "data/maps/MeteorFalls_1F_2R/scripts.pory"
# 171 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "JOHN: We've always battled POKéMON\n"
# 172 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "together as a twosome.\l"
# 173 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "We've confidence in ourselves.$"
# 174 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 175 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_Text_JohnDefeat::
# 176 "data/maps/MeteorFalls_1F_2R/scripts.pory"
# 125 "data/maps/MeteorFalls_1F_2R/scripts.pory"
# 177 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "JOHN: Oh, my.\n"
# 178 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "We've lost, dear wife.$"
# 179 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 180 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_Text_JohnPostBattle::
# 181 "data/maps/MeteorFalls_1F_2R/scripts.pory"
# 130 "data/maps/MeteorFalls_1F_2R/scripts.pory"
# 182 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "JOHN: We've been married for\n"
# 183 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "fifty years.\p"
# 184 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "Come to think of it, I've yet to beat\n"
# 185 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "my dear wife in a battle.$"
# 186 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 187 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_Text_JohnNotEnoughMons::
# 188 "data/maps/MeteorFalls_1F_2R/scripts.pory"
# 137 "data/maps/MeteorFalls_1F_2R/scripts.pory"
# 189 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "JOHN: Well, well, what a young TRAINER!\p"
# 190 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "Will you battle with us? If so, you'll\n"
# 191 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "have to return with more POKéMON.$"
# 192 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 193 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_Text_JohnRegister::
# 194 "data/maps/MeteorFalls_1F_2R/scripts.pory"
# 143 "data/maps/MeteorFalls_1F_2R/scripts.pory"
# 195 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "JOHN: Young TRAINER, if the chance\n"
# 196 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "arises, will you battle with us again?$"
# 197 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 198 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_Text_JayIntro::
# 199 "data/maps/MeteorFalls_1F_2R/scripts.pory"
# 148 "data/maps/MeteorFalls_1F_2R/scripts.pory"
# 200 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "JAY: We've been married for\n"
# 201 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "fifty years.\p"
# 202 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "The bond we share as a couple could\n"
# 203 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "never be broken.$"
# 204 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 205 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_Text_JayDefeat::
# 206 "data/maps/MeteorFalls_1F_2R/scripts.pory"
# 155 "data/maps/MeteorFalls_1F_2R/scripts.pory"
# 207 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "JAY: Oh, dear.\n"
# 208 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "We've lost, my dear husband.$"
# 209 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 210 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_Text_JayPostBattle::
# 211 "data/maps/MeteorFalls_1F_2R/scripts.pory"
# 160 "data/maps/MeteorFalls_1F_2R/scripts.pory"
# 212 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "JAY: Fifty years of marriage…\p"
# 213 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "If we ever argued, we always settled\n"
# 214 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "it with a POKéMON battle…$"
# 215 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 216 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_Text_JayNotEnoughMons::
# 217 "data/maps/MeteorFalls_1F_2R/scripts.pory"
# 166 "data/maps/MeteorFalls_1F_2R/scripts.pory"
# 218 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "JAY: Well, well, aren't you a young\n"
# 219 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "TRAINER?\p"
# 220 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "If you'd care to battle with us, you'll\n"
# 221 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "have to come back with more POKéMON.$"
# 222 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 223 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_Text_JohnRematchIntro::
# 224 "data/maps/MeteorFalls_1F_2R/scripts.pory"
# 173 "data/maps/MeteorFalls_1F_2R/scripts.pory"
# 225 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "JOHN: We've always battled POKéMON\n"
# 226 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "together as a twosome.\l"
# 227 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "We've confidence in ourselves.$"
# 228 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 229 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_Text_JohnRematchDefeat::
# 230 "data/maps/MeteorFalls_1F_2R/scripts.pory"
# 179 "data/maps/MeteorFalls_1F_2R/scripts.pory"
# 231 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "JOHN: Oh, my.\n"
# 232 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "We've lost, dear wife.$"
# 233 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 234 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_Text_JohnPostRematch::
# 235 "data/maps/MeteorFalls_1F_2R/scripts.pory"
# 184 "data/maps/MeteorFalls_1F_2R/scripts.pory"
# 236 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "JOHN: Married for fifty years…\p"
# 237 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "On reflection, the dear wife and I,\n"
# 238 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "we battled day in and day out…$"
# 239 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 240 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_Text_JohnRematchNotEnoughMons::
# 241 "data/maps/MeteorFalls_1F_2R/scripts.pory"
# 190 "data/maps/MeteorFalls_1F_2R/scripts.pory"
# 242 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "JOHN: Well, well, what a young TRAINER!\p"
# 243 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "Will you battle with us? If so, you'll\n"
# 244 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "have to return with more POKéMON.$"
# 245 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 246 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_Text_JayRematchIntro::
# 247 "data/maps/MeteorFalls_1F_2R/scripts.pory"
# 196 "data/maps/MeteorFalls_1F_2R/scripts.pory"
# 248 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "JAY: We've been married for\n"
# 249 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "fifty years.\p"
# 250 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "We've supported each other all that\n"
# 251 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "time. We've made ourselves strong.$"
# 252 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 253 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_Text_JayRematchDefeat::
# 254 "data/maps/MeteorFalls_1F_2R/scripts.pory"
# 203 "data/maps/MeteorFalls_1F_2R/scripts.pory"
# 255 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "JAY: Oh, dear.\n"
# 256 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "We've lost, my dear husband.$"
# 257 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 258 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_Text_JayPostRematch::
# 259 "data/maps/MeteorFalls_1F_2R/scripts.pory"
# 208 "data/maps/MeteorFalls_1F_2R/scripts.pory"
# 260 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "JAY: Fifty years of marriage…\n"
# 261 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "Many things have happened.\p"
# 262 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "I hope that we will continue to make\n"
# 263 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "happy memories together.$"
# 264 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 265 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_Text_JayRematchNotEnoughMons::
# 266 "data/maps/MeteorFalls_1F_2R/scripts.pory"
# 215 "data/maps/MeteorFalls_1F_2R/scripts.pory"
# 267 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "JAY: Well, well, aren't you a young\n"
# 268 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "TRAINER?\p"
# 269 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "If you'd care to battle with us, you'll\n"
# 270 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "have to come back with more POKéMON.$"
