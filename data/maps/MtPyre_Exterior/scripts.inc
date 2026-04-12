MtPyre_Exterior_MapScripts::
# 2 "data/maps/MtPyre_Exterior/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MtPyre_Exterior_OnTransition
	.byte 0


MtPyre_Exterior_OnTransition::
# 6 "data/maps/MtPyre_Exterior/scripts.pory"
	call MtPyre_Exterior_EventScript_CheckEnterFromSummit
	end


MtPyre_Exterior_EventScript_CheckEnterFromSummit::
# 11 "data/maps/MtPyre_Exterior/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 12 "data/maps/MtPyre_Exterior/scripts.pory"
	compare VAR_TEMP_1, 12
	goto_if_lt MtPyre_Exterior_EventScript_CheckEnterFromSummit_2
MtPyre_Exterior_EventScript_CheckEnterFromSummit_1:
	return

MtPyre_Exterior_EventScript_CheckEnterFromSummit_2:
# 13 "data/maps/MtPyre_Exterior/scripts.pory"
	goto MtPyre_Exterior_EventScript_EnterFromSummit
	goto MtPyre_Exterior_EventScript_CheckEnterFromSummit_1


MtPyre_Exterior_EventScript_EnterFromSummit::
# 19 "data/maps/MtPyre_Exterior/scripts.pory"
	setweather WEATHER_FOG_HORIZONTAL
	return


MtPyre_Exterior_EventScript_FogTrigger::
# 24 "data/maps/MtPyre_Exterior/scripts.pory"
	setweather WEATHER_FOG_HORIZONTAL
# 25 "data/maps/MtPyre_Exterior/scripts.pory"
	doweather
	end


MtPyre_Exterior_EventScript_SunTrigger::
# 30 "data/maps/MtPyre_Exterior/scripts.pory"
	setweather WEATHER_SUNNY
# 31 "data/maps/MtPyre_Exterior/scripts.pory"
	doweather
	end

