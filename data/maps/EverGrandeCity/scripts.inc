# 1 "data/maps/EverGrandeCity/scripts.pory"

# 2 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_MapScripts::
# 3 "data/maps/EverGrandeCity/scripts.pory"
# 2 "data/maps/EverGrandeCity/scripts.pory"
# 4 "data/maps/EverGrandeCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, EverGrandeCity_OnTransition
# 5 "data/maps/EverGrandeCity/scripts.pory"
	.byte 0
# 6 "data/maps/EverGrandeCity/scripts.pory"

# 7 "data/maps/EverGrandeCity/scripts.pory"

# 8 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_OnTransition::
# 9 "data/maps/EverGrandeCity/scripts.pory"
# 6 "data/maps/EverGrandeCity/scripts.pory"
# 10 "data/maps/EverGrandeCity/scripts.pory"
	goto_if_set FLAG_SYS_WEATHER_CTRL, EverGrandeCity_OnTransition_2
# 11 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_OnTransition_1:
# 12 "data/maps/EverGrandeCity/scripts.pory"
	end
# 13 "data/maps/EverGrandeCity/scripts.pory"

# 14 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_OnTransition_2:
# 15 "data/maps/EverGrandeCity/scripts.pory"
# 7 "data/maps/EverGrandeCity/scripts.pory"
# 16 "data/maps/EverGrandeCity/scripts.pory"
	call Common_EventScript_SetAbnormalWeather
# 17 "data/maps/EverGrandeCity/scripts.pory"
	goto EverGrandeCity_OnTransition_1
# 18 "data/maps/EverGrandeCity/scripts.pory"

# 19 "data/maps/EverGrandeCity/scripts.pory"

# 20 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_VictoryRoadSign::
# 21 "data/maps/EverGrandeCity/scripts.pory"
# 13 "data/maps/EverGrandeCity/scripts.pory"
# 22 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_EnteringVictoryRoad, MSGBOX_SIGN
# 23 "data/maps/EverGrandeCity/scripts.pory"
	end
# 24 "data/maps/EverGrandeCity/scripts.pory"

# 25 "data/maps/EverGrandeCity/scripts.pory"

# 26 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_CitySign::
# 27 "data/maps/EverGrandeCity/scripts.pory"
# 18 "data/maps/EverGrandeCity/scripts.pory"
# 28 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_CitySign, MSGBOX_SIGN
# 29 "data/maps/EverGrandeCity/scripts.pory"
	end
# 30 "data/maps/EverGrandeCity/scripts.pory"

# 31 "data/maps/EverGrandeCity/scripts.pory"

# 32 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_PokemonLeagueSign::
# 33 "data/maps/EverGrandeCity/scripts.pory"
# 23 "data/maps/EverGrandeCity/scripts.pory"
# 34 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_EnteringPokemonLeague, MSGBOX_SIGN
# 35 "data/maps/EverGrandeCity/scripts.pory"
	end
# 36 "data/maps/EverGrandeCity/scripts.pory"

# 37 "data/maps/EverGrandeCity/scripts.pory"

# 38 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_SetVisitedEverGrande::
# 39 "data/maps/EverGrandeCity/scripts.pory"
# 28 "data/maps/EverGrandeCity/scripts.pory"
# 40 "data/maps/EverGrandeCity/scripts.pory"
	setflag FLAG_VISITED_EVER_GRANDE_CITY
# 41 "data/maps/EverGrandeCity/scripts.pory"
# 29 "data/maps/EverGrandeCity/scripts.pory"
# 42 "data/maps/EverGrandeCity/scripts.pory"
	setvar VAR_TEMP_1, 1
# 43 "data/maps/EverGrandeCity/scripts.pory"
	end
# 44 "data/maps/EverGrandeCity/scripts.pory"

# 45 "data/maps/EverGrandeCity/scripts.pory"

# 46 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_Text_EnteringVictoryRoad::
# 47 "data/maps/EverGrandeCity/scripts.pory"
# 33 "data/maps/EverGrandeCity/scripts.pory"
# 48 "data/maps/EverGrandeCity/scripts.pory"
	.string "ENTERING VICTORY ROAD$"
# 49 "data/maps/EverGrandeCity/scripts.pory"

# 50 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_Text_EnteringPokemonLeague::
# 51 "data/maps/EverGrandeCity/scripts.pory"
# 37 "data/maps/EverGrandeCity/scripts.pory"
# 52 "data/maps/EverGrandeCity/scripts.pory"
	.string "ENTERING POKéMON LEAGUE\n"
# 53 "data/maps/EverGrandeCity/scripts.pory"
	.string "CENTER GATE$"
# 54 "data/maps/EverGrandeCity/scripts.pory"

# 55 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_Text_CitySign::
# 56 "data/maps/EverGrandeCity/scripts.pory"
# 42 "data/maps/EverGrandeCity/scripts.pory"
# 57 "data/maps/EverGrandeCity/scripts.pory"
	.string "EVER GRANDE CITY\p"
# 58 "data/maps/EverGrandeCity/scripts.pory"
	.string "“The paradise of flowers, the sea,\n"
# 59 "data/maps/EverGrandeCity/scripts.pory"
	.string "and POKéMON.”$"
