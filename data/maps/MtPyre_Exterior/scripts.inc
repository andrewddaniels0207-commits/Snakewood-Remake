# 1 "data/maps/MtPyre_Exterior/scripts.pory"

# 2 "data/maps/MtPyre_Exterior/scripts.pory"
MtPyre_Exterior_MapScripts::
# 3 "data/maps/MtPyre_Exterior/scripts.pory"
# 2 "data/maps/MtPyre_Exterior/scripts.pory"
# 4 "data/maps/MtPyre_Exterior/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MtPyre_Exterior_OnTransition
# 5 "data/maps/MtPyre_Exterior/scripts.pory"
	.byte 0
# 6 "data/maps/MtPyre_Exterior/scripts.pory"

# 7 "data/maps/MtPyre_Exterior/scripts.pory"

# 8 "data/maps/MtPyre_Exterior/scripts.pory"
MtPyre_Exterior_OnTransition::
# 9 "data/maps/MtPyre_Exterior/scripts.pory"
# 6 "data/maps/MtPyre_Exterior/scripts.pory"
# 10 "data/maps/MtPyre_Exterior/scripts.pory"
	call MtPyre_Exterior_EventScript_CheckEnterFromSummit
# 11 "data/maps/MtPyre_Exterior/scripts.pory"
	end
# 12 "data/maps/MtPyre_Exterior/scripts.pory"

# 13 "data/maps/MtPyre_Exterior/scripts.pory"

# 14 "data/maps/MtPyre_Exterior/scripts.pory"
MtPyre_Exterior_EventScript_CheckEnterFromSummit::
# 15 "data/maps/MtPyre_Exterior/scripts.pory"
# 11 "data/maps/MtPyre_Exterior/scripts.pory"
# 16 "data/maps/MtPyre_Exterior/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 17 "data/maps/MtPyre_Exterior/scripts.pory"
# 12 "data/maps/MtPyre_Exterior/scripts.pory"
# 18 "data/maps/MtPyre_Exterior/scripts.pory"
	compare VAR_TEMP_1, 12
# 19 "data/maps/MtPyre_Exterior/scripts.pory"
	goto_if_lt MtPyre_Exterior_EventScript_CheckEnterFromSummit_2
# 20 "data/maps/MtPyre_Exterior/scripts.pory"
MtPyre_Exterior_EventScript_CheckEnterFromSummit_1:
# 21 "data/maps/MtPyre_Exterior/scripts.pory"
	return
# 22 "data/maps/MtPyre_Exterior/scripts.pory"

# 23 "data/maps/MtPyre_Exterior/scripts.pory"
MtPyre_Exterior_EventScript_CheckEnterFromSummit_2:
# 24 "data/maps/MtPyre_Exterior/scripts.pory"
# 13 "data/maps/MtPyre_Exterior/scripts.pory"
# 25 "data/maps/MtPyre_Exterior/scripts.pory"
	goto MtPyre_Exterior_EventScript_EnterFromSummit
# 26 "data/maps/MtPyre_Exterior/scripts.pory"
	goto MtPyre_Exterior_EventScript_CheckEnterFromSummit_1
# 27 "data/maps/MtPyre_Exterior/scripts.pory"

# 28 "data/maps/MtPyre_Exterior/scripts.pory"

# 29 "data/maps/MtPyre_Exterior/scripts.pory"
MtPyre_Exterior_EventScript_EnterFromSummit::
# 30 "data/maps/MtPyre_Exterior/scripts.pory"
# 19 "data/maps/MtPyre_Exterior/scripts.pory"
# 31 "data/maps/MtPyre_Exterior/scripts.pory"
	setweather WEATHER_FOG_HORIZONTAL
# 32 "data/maps/MtPyre_Exterior/scripts.pory"
	return
# 33 "data/maps/MtPyre_Exterior/scripts.pory"

# 34 "data/maps/MtPyre_Exterior/scripts.pory"

# 35 "data/maps/MtPyre_Exterior/scripts.pory"
MtPyre_Exterior_EventScript_FogTrigger::
# 36 "data/maps/MtPyre_Exterior/scripts.pory"
# 24 "data/maps/MtPyre_Exterior/scripts.pory"
# 37 "data/maps/MtPyre_Exterior/scripts.pory"
	setweather WEATHER_FOG_HORIZONTAL
# 38 "data/maps/MtPyre_Exterior/scripts.pory"
# 25 "data/maps/MtPyre_Exterior/scripts.pory"
# 39 "data/maps/MtPyre_Exterior/scripts.pory"
	doweather
# 40 "data/maps/MtPyre_Exterior/scripts.pory"
	end
# 41 "data/maps/MtPyre_Exterior/scripts.pory"

# 42 "data/maps/MtPyre_Exterior/scripts.pory"

# 43 "data/maps/MtPyre_Exterior/scripts.pory"
MtPyre_Exterior_EventScript_SunTrigger::
# 44 "data/maps/MtPyre_Exterior/scripts.pory"
# 30 "data/maps/MtPyre_Exterior/scripts.pory"
# 45 "data/maps/MtPyre_Exterior/scripts.pory"
	setweather WEATHER_SUNNY
# 46 "data/maps/MtPyre_Exterior/scripts.pory"
# 31 "data/maps/MtPyre_Exterior/scripts.pory"
# 47 "data/maps/MtPyre_Exterior/scripts.pory"
	doweather
# 48 "data/maps/MtPyre_Exterior/scripts.pory"
	end
