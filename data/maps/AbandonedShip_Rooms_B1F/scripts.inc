# 1 "data/maps/AbandonedShip_Rooms_B1F/scripts.pory"

# 2 "data/maps/AbandonedShip_Rooms_B1F/scripts.pory"
AbandonedShip_Rooms_B1F_MapScripts::
# 3 "data/maps/AbandonedShip_Rooms_B1F/scripts.pory"
# 2 "data/maps/AbandonedShip_Rooms_B1F/scripts.pory"
# 4 "data/maps/AbandonedShip_Rooms_B1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, AbandonedShip_Rooms_B1F_OnResume
# 5 "data/maps/AbandonedShip_Rooms_B1F/scripts.pory"
	.byte 0
# 6 "data/maps/AbandonedShip_Rooms_B1F/scripts.pory"

# 7 "data/maps/AbandonedShip_Rooms_B1F/scripts.pory"

# 8 "data/maps/AbandonedShip_Rooms_B1F/scripts.pory"
AbandonedShip_Rooms_B1F_OnResume::
# 9 "data/maps/AbandonedShip_Rooms_B1F/scripts.pory"
# 7 "data/maps/AbandonedShip_Rooms_B1F/scripts.pory"
# 10 "data/maps/AbandonedShip_Rooms_B1F/scripts.pory"
	setdivewarp MAP_ABANDONED_SHIP_UNDERWATER2, 17, 4
# 11 "data/maps/AbandonedShip_Rooms_B1F/scripts.pory"
	end
# 12 "data/maps/AbandonedShip_Rooms_B1F/scripts.pory"

# 13 "data/maps/AbandonedShip_Rooms_B1F/scripts.pory"

# 14 "data/maps/AbandonedShip_Rooms_B1F/scripts.pory"
AbandonedShip_Rooms_B1F_EventScript_FatMan::
# 15 "data/maps/AbandonedShip_Rooms_B1F/scripts.pory"
# 13 "data/maps/AbandonedShip_Rooms_B1F/scripts.pory"
# 16 "data/maps/AbandonedShip_Rooms_B1F/scripts.pory"
	msgbox AbandonedShip_Rooms_B1F_Text_GettingQueasy, MSGBOX_NPC
# 17 "data/maps/AbandonedShip_Rooms_B1F/scripts.pory"
	end
# 18 "data/maps/AbandonedShip_Rooms_B1F/scripts.pory"

# 19 "data/maps/AbandonedShip_Rooms_B1F/scripts.pory"

# 20 "data/maps/AbandonedShip_Rooms_B1F/scripts.pory"
AbandonedShip_Rooms_B1F_Text_GettingQueasy::
# 21 "data/maps/AbandonedShip_Rooms_B1F/scripts.pory"
# 17 "data/maps/AbandonedShip_Rooms_B1F/scripts.pory"
# 22 "data/maps/AbandonedShip_Rooms_B1F/scripts.pory"
	.string "Urrrrppp…\p"
# 23 "data/maps/AbandonedShip_Rooms_B1F/scripts.pory"
	.string "I'm getting queasy just being aboard\n"
# 24 "data/maps/AbandonedShip_Rooms_B1F/scripts.pory"
	.string "this ship…\p"
# 25 "data/maps/AbandonedShip_Rooms_B1F/scripts.pory"
	.string "It's not even moving, but…$"
