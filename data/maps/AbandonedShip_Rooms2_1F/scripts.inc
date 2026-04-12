# 1 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 2 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_MapScripts::
# 3 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.byte 0
# 4 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 5 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 6 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_EventScript_Dan::
# 7 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
# 5 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
# 8 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	trainerbattle_double TRAINER_KIRA_AND_DAN_1, AbandonedShip_Rooms2_1F_Text_DanIntro, AbandonedShip_Rooms2_1F_Text_DanDefeat, AbandonedShip_Rooms2_1F_Text_DanNotEnoughMons, AbandonedShip_Rooms2_1F_EventScript_RegisterDan
# 9 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
# 7 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
# 10 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 11 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
# 9 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
# 12 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	compare VAR_RESULT, TRUE
# 13 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
# 11 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
# 14 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	goto_if_eq AbandonedShip_Rooms2_1F_EventScript_Dan_2
# 15 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	return
# 16 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 17 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 18 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_EventScript_Dan_1::
# 19 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
# 17 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
# 20 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	msgbox AbandonedShip_Rooms2_1F_Text_DanPostBattle, MSGBOX_DEFAULT
# 21 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
# 19 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
# 22 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	release
# 23 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	end
# 24 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 25 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 26 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_EventScript_Dan_2::
# 27 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
# 25 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
# 28 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	goto AbandonedShip_Rooms2_1F_EventScript_DanRematch
# 29 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
# 27 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
# 30 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	goto AbandonedShip_Rooms2_1F_EventScript_Dan_1
# 31 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	return
# 32 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 33 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 34 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_EventScript_RegisterDan::
# 35 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
# 33 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
# 36 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	msgbox AbandonedShip_Rooms2_1F_Text_KiraRegister, MSGBOX_DEFAULT
# 37 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
# 35 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
# 38 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	register_matchcall TRAINER_KIRA_AND_DAN_1
# 39 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
# 37 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
# 40 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	release
# 41 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	end
# 42 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 43 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 44 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_EventScript_DanRematch::
# 45 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
# 43 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
# 46 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	trainerbattle_rematch_double TRAINER_KIRA_AND_DAN_1, AbandonedShip_Rooms2_1F_Text_DanRematchIntro, AbandonedShip_Rooms2_1F_Text_DanRematchDefeat, AbandonedShip_Rooms2_1F_Text_DanRematchNotEnoughMons
# 47 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
# 45 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
# 48 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	msgbox AbandonedShip_Rooms2_1F_Text_DanPostRematch, MSGBOX_AUTOCLOSE
# 49 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	end
# 50 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 51 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 52 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_EventScript_Kira::
# 53 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
# 51 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
# 54 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	trainerbattle_double TRAINER_KIRA_AND_DAN_1, AbandonedShip_Rooms2_1F_Text_KiraIntro, AbandonedShip_Rooms2_1F_Text_KiraDefeat, AbandonedShip_Rooms2_1F_Text_KiraNotEnoughMons, AbandonedShip_Rooms2_1F_EventScript_RegisterKira
# 55 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
# 53 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
# 56 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 57 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
# 55 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
# 58 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	compare VAR_RESULT, TRUE
# 59 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
# 57 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
# 60 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	goto_if_eq AbandonedShip_Rooms2_1F_EventScript_Kira_2
# 61 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	return
# 62 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 63 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 64 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_EventScript_Kira_1::
# 65 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
# 63 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
# 66 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	msgbox AbandonedShip_Rooms2_1F_Text_KiraPostBattle, MSGBOX_DEFAULT
# 67 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
# 65 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
# 68 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	release
# 69 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	end
# 70 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 71 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 72 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_EventScript_Kira_2::
# 73 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
# 71 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
# 74 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	goto AbandonedShip_Rooms2_1F_EventScript_KiraRematch
# 75 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
# 73 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
# 76 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	goto AbandonedShip_Rooms2_1F_EventScript_Kira_1
# 77 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	return
# 78 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 79 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 80 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_EventScript_RegisterKira::
# 81 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
# 79 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
# 82 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	msgbox AbandonedShip_Rooms2_1F_Text_KiraRegister, MSGBOX_DEFAULT
# 83 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
# 81 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
# 84 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	register_matchcall TRAINER_KIRA_AND_DAN_1
# 85 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
# 83 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
# 86 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	release
# 87 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	end
# 88 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 89 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 90 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_EventScript_KiraRematch::
# 91 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
# 89 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
# 92 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	trainerbattle_rematch_double TRAINER_KIRA_AND_DAN_1, AbandonedShip_Rooms2_1F_Text_KiraRematchIntro, AbandonedShip_Rooms2_1F_Text_KiraRematchDefeat, AbandonedShip_Rooms2_1F_Text_KiraRematchNotEnoughMons
# 93 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
# 91 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
# 94 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	msgbox AbandonedShip_Rooms2_1F_Text_KiraPostRematch, MSGBOX_AUTOCLOSE
# 95 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	end
# 96 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 97 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 98 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_EventScript_Jani::
# 99 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
# 97 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
# 100 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	trainerbattle_single TRAINER_JANI, AbandonedShip_Rooms2_1F_Text_JaniIntro, AbandonedShip_Rooms2_1F_Text_JaniDefeat
# 101 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
# 99 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
# 102 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	msgbox AbandonedShip_Rooms2_1F_Text_JaniPostBattle, MSGBOX_AUTOCLOSE
# 103 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	end
# 104 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 105 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 106 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_EventScript_Garrison::
# 107 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
# 105 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
# 108 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	trainerbattle_single TRAINER_GARRISON, AbandonedShip_Rooms2_1F_Text_GarrisonIntro, AbandonedShip_Rooms2_1F_Text_GarrisonDefeat
# 109 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
# 107 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
# 110 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	msgbox AbandonedShip_Rooms2_1F_Text_GarrisonPostBattle, MSGBOX_AUTOCLOSE
# 111 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	end
# 112 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 113 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 114 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_Text_DanIntro::
# 115 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
# 111 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
# 116 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "DAN: While searching for treasures,\n"
# 117 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "we discovered a TRAINER!$"
# 118 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 119 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_Text_DanDefeat::
# 120 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
# 116 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
# 121 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "DAN: We couldn't win even though\n"
# 122 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "we worked together…$"
# 123 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 124 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_Text_DanPostBattle::
# 125 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
# 121 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
# 126 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "DAN: We can't find any treasures…\n"
# 127 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "I wonder if someone got them already?$"
# 128 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 129 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_Text_DanNotEnoughMons::
# 130 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
# 126 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
# 131 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "DAN: You don't even have two POKéMON.\n"
# 132 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "You can't expect to beat us like that.$"
# 133 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 134 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_Text_KiraIntro::
# 135 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
# 131 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
# 136 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "KIRA: Oh?\n"
# 137 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "We were searching for treasures.\l"
# 138 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "But we discovered a TRAINER instead!$"
# 139 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 140 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_Text_KiraDefeat::
# 141 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
# 137 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
# 142 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "KIRA: Ooh, so strong!$"
# 143 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 144 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_Text_KiraPostBattle::
# 145 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
# 141 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
# 146 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "KIRA: Where could the treasures be?\p"
# 147 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "I've already decided what I'm buying\n"
# 148 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "when we find the treasures!$"
# 149 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 150 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_Text_KiraNotEnoughMons::
# 151 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
# 147 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
# 152 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "KIRA: Oh, you don't have two POKéMON?\n"
# 153 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "We'll have to battle some other time!$"
# 154 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 155 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_Text_KiraRegister::
# 156 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
# 152 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
# 157 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "KIRA: Oh, you make me so angry!\n"
# 158 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "I'm going to register you for that!$"
# 159 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 160 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_Text_DanRematchIntro::
# 161 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
# 157 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
# 162 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "DAN: We've been searching for\n"
# 163 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "treasures all this time.\p"
# 164 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "Our POKéMON have grown stronger, too.\n"
# 165 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "Let us show you, okay?$"
# 166 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 167 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_Text_DanRematchDefeat::
# 168 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
# 164 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
# 169 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "DAN: You're strong, as usual!$"
# 170 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 171 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_Text_DanPostRematch::
# 172 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
# 168 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
# 173 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "DAN: We can't find any treasures,\n"
# 174 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "we lose at POKéMON…\p"
# 175 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "I want to go home… But if I say that,\n"
# 176 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "she gets all angry with me…$"
# 177 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 178 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_Text_DanRematchNotEnoughMons::
# 179 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
# 175 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
# 180 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "DAN: You don't even have two POKéMON.\n"
# 181 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "You can't expect to beat us like that.$"
# 182 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 183 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_Text_KiraRematchIntro::
# 184 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
# 180 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
# 185 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "KIRA: Oh? We meet again!\p"
# 186 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "Just like us, you still haven't given up\n"
# 187 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "searching for treasures, have you?\p"
# 188 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "Want to make it so the loser has\n"
# 189 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "to give up searching?$"
# 190 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 191 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_Text_KiraRematchDefeat::
# 192 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
# 188 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
# 193 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "KIRA: Oh, we lost again…$"
# 194 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 195 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_Text_KiraPostRematch::
# 196 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
# 192 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
# 197 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "KIRA: We're not leaving until we raise\n"
# 198 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "our POKéMON some more and we find\l"
# 199 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "the treasures here!$"
# 200 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 201 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_Text_KiraRematchNotEnoughMons::
# 202 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
# 198 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
# 203 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "KIRA: Oh, you don't have two POKéMON?\n"
# 204 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "We'll have to battle some other time!$"
# 205 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 206 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_Text_JaniIntro::
# 207 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
# 203 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
# 208 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "I'm not good at swimming,\n"
# 209 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "but I am good at battles!$"
# 210 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 211 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_Text_JaniDefeat::
# 212 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
# 208 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
# 213 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "Oops.\n"
# 214 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "That didn't go very well.$"
# 215 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 216 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_Text_JaniPostBattle::
# 217 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
# 213 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
# 218 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "Walking around barefoot in this ship\n"
# 219 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "is kind of gross.$"
# 220 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 221 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_Text_GarrisonIntro::
# 222 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
# 218 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
# 223 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "Strength and compassion…\n"
# 224 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "Those are a TRAINER's treasures!$"
# 225 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 226 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_Text_GarrisonDefeat::
# 227 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
# 223 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
# 228 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "Ah, there is something about you\n"
# 229 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "that sparkles.$"
# 230 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 231 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_Text_GarrisonPostBattle::
# 232 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
# 228 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
# 233 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "In a cabin somewhere on board,\n"
# 234 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "I saw something sparkle.$"
