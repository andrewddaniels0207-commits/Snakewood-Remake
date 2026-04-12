AbandonedShip_Corridors_1F_MapScripts::
	.byte 0


AbandonedShip_Corridors_1F_EventScript_Youngster::
# 4 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"
	msgbox AbandonedShip_Corridors_1F_Text_IsntItFunHere, MSGBOX_NPC
	end


AbandonedShip_Corridors_1F_EventScript_Charlie::
# 9 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"
	trainerbattle_single TRAINER_CHARLIE, AbandonedShip_Corridors_1F_Text_CharlieIntro, AbandonedShip_Corridors_1F_Text_CharlieDefeat
# 10 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"
	msgbox AbandonedShip_Corridors_1F_Text_CharliePostBattle, MSGBOX_AUTOCLOSE
	end


AbandonedShip_Corridors_1F_Text_CharlieIntro::
# 14 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"
	.string "What's so funny about having my inner\n"
	.string "tube aboard the ship?$"

AbandonedShip_Corridors_1F_Text_CharlieDefeat::
# 19 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"
	.string "Whoa, you overwhelmed me!$"

AbandonedShip_Corridors_1F_Text_CharliePostBattle::
# 23 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"
	.string "It's not easy throwing POKé BALLS\n"
	.string "while hanging on to an inner tube!$"

AbandonedShip_Corridors_1F_Text_IsntItFunHere::
# 28 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"
	.string "Isn't it fun here?\n"
	.string "I get excited just being here!$"
