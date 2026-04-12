# 1 "data/maps/FarawayIsland_Entrance/scripts.pory"

# 2 "data/maps/FarawayIsland_Entrance/scripts.pory"
FarawayIsland_Entrance_MapScripts::
# 3 "data/maps/FarawayIsland_Entrance/scripts.pory"
# 2 "data/maps/FarawayIsland_Entrance/scripts.pory"
# 4 "data/maps/FarawayIsland_Entrance/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, FarawayIsland_Entrance_OnTransition
# 5 "data/maps/FarawayIsland_Entrance/scripts.pory"
	.byte 0
# 6 "data/maps/FarawayIsland_Entrance/scripts.pory"

# 7 "data/maps/FarawayIsland_Entrance/scripts.pory"

# 8 "data/maps/FarawayIsland_Entrance/scripts.pory"
FarawayIsland_Entrance_OnTransition::
# 9 "data/maps/FarawayIsland_Entrance/scripts.pory"
# 6 "data/maps/FarawayIsland_Entrance/scripts.pory"
# 10 "data/maps/FarawayIsland_Entrance/scripts.pory"
	setflag FLAG_ARRIVED_ON_FARAWAY_ISLAND
# 11 "data/maps/FarawayIsland_Entrance/scripts.pory"
	end
# 12 "data/maps/FarawayIsland_Entrance/scripts.pory"

# 13 "data/maps/FarawayIsland_Entrance/scripts.pory"

# 14 "data/maps/FarawayIsland_Entrance/scripts.pory"
FarawayIsland_Entrance_EventScript_SetCloudsWeather::
# 15 "data/maps/FarawayIsland_Entrance/scripts.pory"
# 11 "data/maps/FarawayIsland_Entrance/scripts.pory"
# 16 "data/maps/FarawayIsland_Entrance/scripts.pory"
	setweather WEATHER_SUNNY_CLOUDS
# 17 "data/maps/FarawayIsland_Entrance/scripts.pory"
# 12 "data/maps/FarawayIsland_Entrance/scripts.pory"
# 18 "data/maps/FarawayIsland_Entrance/scripts.pory"
	doweather
# 19 "data/maps/FarawayIsland_Entrance/scripts.pory"
	end
# 20 "data/maps/FarawayIsland_Entrance/scripts.pory"

# 21 "data/maps/FarawayIsland_Entrance/scripts.pory"

# 22 "data/maps/FarawayIsland_Entrance/scripts.pory"
FarawayIsland_Entrance_EventScript_ClearWeather::
# 23 "data/maps/FarawayIsland_Entrance/scripts.pory"
# 17 "data/maps/FarawayIsland_Entrance/scripts.pory"
# 24 "data/maps/FarawayIsland_Entrance/scripts.pory"
	setweather WEATHER_NONE
# 25 "data/maps/FarawayIsland_Entrance/scripts.pory"
# 18 "data/maps/FarawayIsland_Entrance/scripts.pory"
# 26 "data/maps/FarawayIsland_Entrance/scripts.pory"
	doweather
# 27 "data/maps/FarawayIsland_Entrance/scripts.pory"
	end
# 28 "data/maps/FarawayIsland_Entrance/scripts.pory"

# 29 "data/maps/FarawayIsland_Entrance/scripts.pory"

# 30 "data/maps/FarawayIsland_Entrance/scripts.pory"
FarawayIsland_Entrance_EventScript_Sailor::
# 31 "data/maps/FarawayIsland_Entrance/scripts.pory"
# 23 "data/maps/FarawayIsland_Entrance/scripts.pory"
# 32 "data/maps/FarawayIsland_Entrance/scripts.pory"
	lock
# 33 "data/maps/FarawayIsland_Entrance/scripts.pory"
# 24 "data/maps/FarawayIsland_Entrance/scripts.pory"
# 34 "data/maps/FarawayIsland_Entrance/scripts.pory"
	faceplayer
# 35 "data/maps/FarawayIsland_Entrance/scripts.pory"
# 25 "data/maps/FarawayIsland_Entrance/scripts.pory"
# 36 "data/maps/FarawayIsland_Entrance/scripts.pory"
	msgbox FarawayIsland_Entrance_Text_SailorReturn, MSGBOX_YESNO
# 37 "data/maps/FarawayIsland_Entrance/scripts.pory"
# 26 "data/maps/FarawayIsland_Entrance/scripts.pory"
# 38 "data/maps/FarawayIsland_Entrance/scripts.pory"
	compare VAR_RESULT, NO
# 39 "data/maps/FarawayIsland_Entrance/scripts.pory"
	goto_if_eq FarawayIsland_Entrance_EventScript_Sailor_2
# 40 "data/maps/FarawayIsland_Entrance/scripts.pory"
FarawayIsland_Entrance_EventScript_Sailor_1:
# 41 "data/maps/FarawayIsland_Entrance/scripts.pory"
# 29 "data/maps/FarawayIsland_Entrance/scripts.pory"
# 42 "data/maps/FarawayIsland_Entrance/scripts.pory"
	msgbox EventTicket_Text_SailHome, MSGBOX_DEFAULT
# 43 "data/maps/FarawayIsland_Entrance/scripts.pory"
# 30 "data/maps/FarawayIsland_Entrance/scripts.pory"
# 44 "data/maps/FarawayIsland_Entrance/scripts.pory"
	closemessage
# 45 "data/maps/FarawayIsland_Entrance/scripts.pory"
# 31 "data/maps/FarawayIsland_Entrance/scripts.pory"
# 46 "data/maps/FarawayIsland_Entrance/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceFasterDown
# 47 "data/maps/FarawayIsland_Entrance/scripts.pory"
# 32 "data/maps/FarawayIsland_Entrance/scripts.pory"
# 48 "data/maps/FarawayIsland_Entrance/scripts.pory"
	waitmovement 0
# 49 "data/maps/FarawayIsland_Entrance/scripts.pory"
# 33 "data/maps/FarawayIsland_Entrance/scripts.pory"
# 50 "data/maps/FarawayIsland_Entrance/scripts.pory"
	delay 30
# 51 "data/maps/FarawayIsland_Entrance/scripts.pory"
# 34 "data/maps/FarawayIsland_Entrance/scripts.pory"
# 52 "data/maps/FarawayIsland_Entrance/scripts.pory"
	hideobjectat LOCALID_FARAWAY_ISLAND_SAILOR, MAP_FARAWAY_ISLAND_ENTRANCE
# 53 "data/maps/FarawayIsland_Entrance/scripts.pory"
# 35 "data/maps/FarawayIsland_Entrance/scripts.pory"
# 54 "data/maps/FarawayIsland_Entrance/scripts.pory"
	setvar VAR_0x8004, LOCALID_FARAWAY_ISLAND_SS_TIDAL
# 55 "data/maps/FarawayIsland_Entrance/scripts.pory"
# 36 "data/maps/FarawayIsland_Entrance/scripts.pory"
# 56 "data/maps/FarawayIsland_Entrance/scripts.pory"
	call Common_EventScript_FerryDepartIsland
# 57 "data/maps/FarawayIsland_Entrance/scripts.pory"
# 37 "data/maps/FarawayIsland_Entrance/scripts.pory"
# 58 "data/maps/FarawayIsland_Entrance/scripts.pory"
	warp MAP_LILYCOVE_CITY_HARBOR, 8, 11
# 59 "data/maps/FarawayIsland_Entrance/scripts.pory"
# 38 "data/maps/FarawayIsland_Entrance/scripts.pory"
# 60 "data/maps/FarawayIsland_Entrance/scripts.pory"
	waitstate
# 61 "data/maps/FarawayIsland_Entrance/scripts.pory"
# 39 "data/maps/FarawayIsland_Entrance/scripts.pory"
# 62 "data/maps/FarawayIsland_Entrance/scripts.pory"
	release
# 63 "data/maps/FarawayIsland_Entrance/scripts.pory"
	end
# 64 "data/maps/FarawayIsland_Entrance/scripts.pory"

# 65 "data/maps/FarawayIsland_Entrance/scripts.pory"
FarawayIsland_Entrance_EventScript_Sailor_2:
# 66 "data/maps/FarawayIsland_Entrance/scripts.pory"
# 27 "data/maps/FarawayIsland_Entrance/scripts.pory"
# 67 "data/maps/FarawayIsland_Entrance/scripts.pory"
	goto FarawayIsland_Entrance_EventScript_AsYouLike
# 68 "data/maps/FarawayIsland_Entrance/scripts.pory"
	goto FarawayIsland_Entrance_EventScript_Sailor_1
# 69 "data/maps/FarawayIsland_Entrance/scripts.pory"

# 70 "data/maps/FarawayIsland_Entrance/scripts.pory"

# 71 "data/maps/FarawayIsland_Entrance/scripts.pory"
FarawayIsland_Entrance_EventScript_AsYouLike::
# 72 "data/maps/FarawayIsland_Entrance/scripts.pory"
# 44 "data/maps/FarawayIsland_Entrance/scripts.pory"
# 73 "data/maps/FarawayIsland_Entrance/scripts.pory"
	msgbox EventTicket_Text_AsYouLike, MSGBOX_DEFAULT
# 74 "data/maps/FarawayIsland_Entrance/scripts.pory"
# 45 "data/maps/FarawayIsland_Entrance/scripts.pory"
# 75 "data/maps/FarawayIsland_Entrance/scripts.pory"
	release
# 76 "data/maps/FarawayIsland_Entrance/scripts.pory"
	end
# 77 "data/maps/FarawayIsland_Entrance/scripts.pory"

# 78 "data/maps/FarawayIsland_Entrance/scripts.pory"

# 79 "data/maps/FarawayIsland_Entrance/scripts.pory"
FarawayIsland_Entrance_EventScript_Sign::
# 80 "data/maps/FarawayIsland_Entrance/scripts.pory"
# 50 "data/maps/FarawayIsland_Entrance/scripts.pory"
# 81 "data/maps/FarawayIsland_Entrance/scripts.pory"
	msgbox FarawayIsland_Entrance_Text_Sign, MSGBOX_SIGN
# 82 "data/maps/FarawayIsland_Entrance/scripts.pory"
	end
