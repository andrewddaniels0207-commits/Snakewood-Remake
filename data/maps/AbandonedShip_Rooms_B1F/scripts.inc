AbandonedShip_Rooms_B1F_MapScripts::
# 2 "data/maps/AbandonedShip_Rooms_B1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, AbandonedShip_Rooms_B1F_OnResume
	.byte 0


AbandonedShip_Rooms_B1F_OnResume::
# 7 "data/maps/AbandonedShip_Rooms_B1F/scripts.pory"
	setdivewarp MAP_ABANDONED_SHIP_UNDERWATER2, 17, 4
	end


AbandonedShip_Rooms_B1F_EventScript_FatMan::
# 13 "data/maps/AbandonedShip_Rooms_B1F/scripts.pory"
	msgbox AbandonedShip_Rooms_B1F_Text_GettingQueasy, MSGBOX_NPC
	end


AbandonedShip_Rooms_B1F_Text_GettingQueasy::
# 17 "data/maps/AbandonedShip_Rooms_B1F/scripts.pory"
	.string "Urrrrppp…\p"
	.string "I'm getting queasy just being aboard\n"
	.string "this ship…\p"
	.string "It's not even moving, but…$"
