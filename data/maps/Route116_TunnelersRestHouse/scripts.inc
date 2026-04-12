# 1 "data/maps/Route116_TunnelersRestHouse/scripts.pory"

# 2 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
Route116_TunnelersRestHouse_MapScripts::
# 3 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
# 2 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
# 4 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route116_TunnelersRestHouse_OnTransition
# 5 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.byte 0
# 6 "data/maps/Route116_TunnelersRestHouse/scripts.pory"

# 7 "data/maps/Route116_TunnelersRestHouse/scripts.pory"

# 8 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
Route116_TunnelersRestHouse_OnTransition::
# 9 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
# 6 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
# 10 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	setflag FLAG_LANDMARK_TUNNELERS_REST_HOUSE
# 11 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	end
# 12 "data/maps/Route116_TunnelersRestHouse/scripts.pory"

# 13 "data/maps/Route116_TunnelersRestHouse/scripts.pory"

# 14 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
Route116_TunnelersRestHouse_EventScript_Tunneler1::
# 15 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
# 11 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
# 16 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_WeHadToStopBoring, MSGBOX_NPC
# 17 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	end
# 18 "data/maps/Route116_TunnelersRestHouse/scripts.pory"

# 19 "data/maps/Route116_TunnelersRestHouse/scripts.pory"

# 20 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
Route116_TunnelersRestHouse_EventScript_Tunneler2::
# 21 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
# 16 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
# 22 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_ManDiggingHisWayToVerdanturf, MSGBOX_NPC
# 23 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	end
# 24 "data/maps/Route116_TunnelersRestHouse/scripts.pory"

# 25 "data/maps/Route116_TunnelersRestHouse/scripts.pory"

# 26 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
Route116_TunnelersRestHouse_EventScript_Tunneler3::
# 27 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
# 21 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
# 28 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	lock
# 29 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
# 22 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
# 30 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	faceplayer
# 31 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
# 23 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
# 32 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	goto_if_set FLAG_RUSTURF_TUNNEL_OPENED, Route116_TunnelersRestHouse_EventScript_Tunneler3_2
# 33 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
Route116_TunnelersRestHouse_EventScript_Tunneler3_1:
# 34 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
# 26 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
# 35 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_GetToVerdanturfWithoutTunnel, MSGBOX_DEFAULT
# 36 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
# 27 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
# 37 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	release
# 38 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	end
# 39 "data/maps/Route116_TunnelersRestHouse/scripts.pory"

# 40 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
Route116_TunnelersRestHouse_EventScript_Tunneler3_2:
# 41 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
# 24 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
# 42 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	goto Route116_TunnelersRestHouse_EventScript_TunnelOpened
# 43 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	goto Route116_TunnelersRestHouse_EventScript_Tunneler3_1
# 44 "data/maps/Route116_TunnelersRestHouse/scripts.pory"

# 45 "data/maps/Route116_TunnelersRestHouse/scripts.pory"

# 46 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
Route116_TunnelersRestHouse_EventScript_TunnelOpened::
# 47 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
# 32 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
# 48 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_TunnelHasGoneThrough, MSGBOX_DEFAULT
# 49 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
# 33 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
# 50 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	release
# 51 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	end
# 52 "data/maps/Route116_TunnelersRestHouse/scripts.pory"

# 53 "data/maps/Route116_TunnelersRestHouse/scripts.pory"

# 54 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
Route116_TunnelersRestHouse_Text_WeHadToStopBoring::
# 55 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
# 37 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
# 56 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "That RUSTURF TUNNEL there…\p"
# 57 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "At first, we had a huge work crew boring\n"
# 58 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "through rock with the latest machinery.\l"
# 59 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "But, we had to stop.\p"
# 60 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "It turns out that we would have had\n"
# 61 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "a negative effect on wild POKéMON in\l"
# 62 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "the area.\p"
# 63 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "So, we've got nothing to do but loll\n"
# 64 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "around here doing nothing.$"
# 65 "data/maps/Route116_TunnelersRestHouse/scripts.pory"

# 66 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
Route116_TunnelersRestHouse_Text_ManDiggingHisWayToVerdanturf::
# 67 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
# 49 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
# 68 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "There's a man digging his way to\n"
# 69 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "VERDANTURF all by his lonesome.\l"
# 70 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "He's desperate to get through.\p"
# 71 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "He says that if he digs little by little\n"
# 72 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "without using machines, he won't\l"
# 73 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "disturb POKéMON, and he'll avoid\l"
# 74 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "harming the natural environment.\p"
# 75 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "I wonder if he made it through yet.$"
# 76 "data/maps/Route116_TunnelersRestHouse/scripts.pory"

# 77 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
Route116_TunnelersRestHouse_Text_GetToVerdanturfWithoutTunnel::
# 78 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
# 60 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
# 79 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "To get to VERDANTURF without using\n"
# 80 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "this TUNNEL, you'd have to cross the\l"
# 81 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "sea to DEWFORD, sail on to SLATEPORT,\l"
# 82 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "then travel through MAUVILLE.$"
# 83 "data/maps/Route116_TunnelersRestHouse/scripts.pory"

# 84 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
Route116_TunnelersRestHouse_Text_TunnelHasGoneThrough::
# 85 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
# 67 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
# 86 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Did you hear? The TUNNEL to VERDANTURF\n"
# 87 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "has gone through!\p"
# 88 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Sometimes, if you hope strongly enough,\n"
# 89 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "dreams do come true.$"
