AbandonedShip_Rooms2_1F_MapScripts::
	.byte 0


AbandonedShip_Rooms2_1F_EventScript_Dan::
# 5 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	trainerbattle_double TRAINER_KIRA_AND_DAN_1, AbandonedShip_Rooms2_1F_Text_DanIntro, AbandonedShip_Rooms2_1F_Text_DanDefeat, AbandonedShip_Rooms2_1F_Text_DanNotEnoughMons, AbandonedShip_Rooms2_1F_EventScript_RegisterDan
# 7 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 9 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	compare VAR_RESULT, TRUE
# 10 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	goto_if_eq AbandonedShip_Rooms2_1F_EventScript_Dan_2
	return


AbandonedShip_Rooms2_1F_EventScript_Dan_1::
# 15 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	msgbox AbandonedShip_Rooms2_1F_Text_DanPostBattle, MSGBOX_DEFAULT
# 17 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	release
	end


AbandonedShip_Rooms2_1F_EventScript_Dan_2::
# 23 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	goto AbandonedShip_Rooms2_1F_EventScript_DanRematch
# 24 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	goto AbandonedShip_Rooms2_1F_EventScript_Dan_1
	return


AbandonedShip_Rooms2_1F_EventScript_RegisterDan::
# 29 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	msgbox AbandonedShip_Rooms2_1F_Text_KiraRegister, MSGBOX_DEFAULT
# 31 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	register_matchcall TRAINER_KIRA_AND_DAN_1
# 33 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	release
	end


AbandonedShip_Rooms2_1F_EventScript_DanRematch::
# 39 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	trainerbattle_rematch_double TRAINER_KIRA_AND_DAN_1, AbandonedShip_Rooms2_1F_Text_DanRematchIntro, AbandonedShip_Rooms2_1F_Text_DanRematchDefeat, AbandonedShip_Rooms2_1F_Text_DanRematchNotEnoughMons
# 41 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	msgbox AbandonedShip_Rooms2_1F_Text_DanPostRematch, MSGBOX_AUTOCLOSE
	end


AbandonedShip_Rooms2_1F_EventScript_Kira::
# 47 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	trainerbattle_double TRAINER_KIRA_AND_DAN_1, AbandonedShip_Rooms2_1F_Text_KiraIntro, AbandonedShip_Rooms2_1F_Text_KiraDefeat, AbandonedShip_Rooms2_1F_Text_KiraNotEnoughMons, AbandonedShip_Rooms2_1F_EventScript_RegisterKira
# 49 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 51 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	compare VAR_RESULT, TRUE
# 52 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	goto_if_eq AbandonedShip_Rooms2_1F_EventScript_Kira_2
	return


AbandonedShip_Rooms2_1F_EventScript_Kira_1::
# 57 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	msgbox AbandonedShip_Rooms2_1F_Text_KiraPostBattle, MSGBOX_DEFAULT
# 59 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	release
	end


AbandonedShip_Rooms2_1F_EventScript_Kira_2::
# 65 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	goto AbandonedShip_Rooms2_1F_EventScript_KiraRematch
# 66 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	goto AbandonedShip_Rooms2_1F_EventScript_Kira_1
	return


AbandonedShip_Rooms2_1F_EventScript_RegisterKira::
# 71 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	msgbox AbandonedShip_Rooms2_1F_Text_KiraRegister, MSGBOX_DEFAULT
# 73 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	register_matchcall TRAINER_KIRA_AND_DAN_1
# 75 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	release
	end


AbandonedShip_Rooms2_1F_EventScript_KiraRematch::
# 81 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	trainerbattle_rematch_double TRAINER_KIRA_AND_DAN_1, AbandonedShip_Rooms2_1F_Text_KiraRematchIntro, AbandonedShip_Rooms2_1F_Text_KiraRematchDefeat, AbandonedShip_Rooms2_1F_Text_KiraRematchNotEnoughMons
# 83 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	msgbox AbandonedShip_Rooms2_1F_Text_KiraPostRematch, MSGBOX_AUTOCLOSE
	end


AbandonedShip_Rooms2_1F_EventScript_Jani::
# 89 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	trainerbattle_single TRAINER_JANI, AbandonedShip_Rooms2_1F_Text_JaniIntro, AbandonedShip_Rooms2_1F_Text_JaniDefeat
# 91 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	msgbox AbandonedShip_Rooms2_1F_Text_JaniPostBattle, MSGBOX_AUTOCLOSE
	end


AbandonedShip_Rooms2_1F_EventScript_Garrison::
# 97 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	trainerbattle_single TRAINER_GARRISON, AbandonedShip_Rooms2_1F_Text_GarrisonIntro, AbandonedShip_Rooms2_1F_Text_GarrisonDefeat
# 99 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	msgbox AbandonedShip_Rooms2_1F_Text_GarrisonPostBattle, MSGBOX_AUTOCLOSE
	end


AbandonedShip_Rooms2_1F_Text_DanIntro::
# 103 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "DAN: While searching for treasures,\n"
	.string "we discovered a TRAINER!$"

AbandonedShip_Rooms2_1F_Text_DanDefeat::
# 108 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "DAN: We couldn't win even though\n"
	.string "we worked together…$"

AbandonedShip_Rooms2_1F_Text_DanPostBattle::
# 113 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "DAN: We can't find any treasures…\n"
	.string "I wonder if someone got them already?$"

AbandonedShip_Rooms2_1F_Text_DanNotEnoughMons::
# 118 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "DAN: You don't even have two POKéMON.\n"
	.string "You can't expect to beat us like that.$"

AbandonedShip_Rooms2_1F_Text_KiraIntro::
# 123 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "KIRA: Oh?\n"
	.string "We were searching for treasures.\l"
	.string "But we discovered a TRAINER instead!$"

AbandonedShip_Rooms2_1F_Text_KiraDefeat::
# 129 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "KIRA: Ooh, so strong!$"

AbandonedShip_Rooms2_1F_Text_KiraPostBattle::
# 133 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "KIRA: Where could the treasures be?\p"
	.string "I've already decided what I'm buying\n"
	.string "when we find the treasures!$"

AbandonedShip_Rooms2_1F_Text_KiraNotEnoughMons::
# 139 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "KIRA: Oh, you don't have two POKéMON?\n"
	.string "We'll have to battle some other time!$"

AbandonedShip_Rooms2_1F_Text_KiraRegister::
# 144 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "KIRA: Oh, you make me so angry!\n"
	.string "I'm going to register you for that!$"

AbandonedShip_Rooms2_1F_Text_DanRematchIntro::
# 149 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "DAN: We've been searching for\n"
	.string "treasures all this time.\p"
	.string "Our POKéMON have grown stronger, too.\n"
	.string "Let us show you, okay?$"

AbandonedShip_Rooms2_1F_Text_DanRematchDefeat::
# 156 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "DAN: You're strong, as usual!$"

AbandonedShip_Rooms2_1F_Text_DanPostRematch::
# 160 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "DAN: We can't find any treasures,\n"
	.string "we lose at POKéMON…\p"
	.string "I want to go home… But if I say that,\n"
	.string "she gets all angry with me…$"

AbandonedShip_Rooms2_1F_Text_DanRematchNotEnoughMons::
# 167 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "DAN: You don't even have two POKéMON.\n"
	.string "You can't expect to beat us like that.$"

AbandonedShip_Rooms2_1F_Text_KiraRematchIntro::
# 172 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "KIRA: Oh? We meet again!\p"
	.string "Just like us, you still haven't given up\n"
	.string "searching for treasures, have you?\p"
	.string "Want to make it so the loser has\n"
	.string "to give up searching?$"

AbandonedShip_Rooms2_1F_Text_KiraRematchDefeat::
# 180 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "KIRA: Oh, we lost again…$"

AbandonedShip_Rooms2_1F_Text_KiraPostRematch::
# 184 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "KIRA: We're not leaving until we raise\n"
	.string "our POKéMON some more and we find\l"
	.string "the treasures here!$"

AbandonedShip_Rooms2_1F_Text_KiraRematchNotEnoughMons::
# 190 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "KIRA: Oh, you don't have two POKéMON?\n"
	.string "We'll have to battle some other time!$"

AbandonedShip_Rooms2_1F_Text_JaniIntro::
# 195 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "I'm not good at swimming,\n"
	.string "but I am good at battles!$"

AbandonedShip_Rooms2_1F_Text_JaniDefeat::
# 200 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "Oops.\n"
	.string "That didn't go very well.$"

AbandonedShip_Rooms2_1F_Text_JaniPostBattle::
# 205 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "Walking around barefoot in this ship\n"
	.string "is kind of gross.$"

AbandonedShip_Rooms2_1F_Text_GarrisonIntro::
# 210 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "Strength and compassion…\n"
	.string "Those are a TRAINER's treasures!$"

AbandonedShip_Rooms2_1F_Text_GarrisonDefeat::
# 215 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "Ah, there is something about you\n"
	.string "that sparkles.$"

AbandonedShip_Rooms2_1F_Text_GarrisonPostBattle::
# 220 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "In a cabin somewhere on board,\n"
	.string "I saw something sparkle.$"
