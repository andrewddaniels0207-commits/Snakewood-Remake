AbandonedShip_Corridors_1F_MapScripts::
	.byte 0


AbandonedShip_Corridors_1F_EventScript_Youngster::
# 5 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"
	msgbox AbandonedShip_Corridors_1F_Text_IsntItFunHere, MSGBOX_NPC
	end


AbandonedShip_Corridors_1F_EventScript_Charlie::
# 11 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"
	trainerbattle_single TRAINER_CHARLIE, AbandonedShip_Corridors_1F_Text_CharlieIntro, AbandonedShip_Corridors_1F_Text_CharlieDefeat
# 13 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"
	msgbox AbandonedShip_Corridors_1F_Text_CharliePostBattle, MSGBOX_AUTOCLOSE
	end


AbandonedShip_Corridors_1F_Text_CharlieIntro::
# 17 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"
	.string "What's so funny about having my inner\n"
	.string "tube aboard the ship?$"

AbandonedShip_Corridors_1F_Text_CharlieDefeat::
# 22 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"
	.string "Whoa, you overwhelmed me!$"

AbandonedShip_Corridors_1F_Text_CharliePostBattle::
# 26 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"
	.string "It's not easy throwing POKé BALLS\n"
	.string "while hanging on to an inner tube!$"

AbandonedShip_Corridors_1F_Text_IsntItFunHere::
# 31 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"
	.string "Isn't it fun here?\n"
	.string "I get excited just being here!$"
