Underwater_Route127_MapScripts::
# 2 "data/maps/Underwater_Route127/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Underwater_Route127_OnResume
	.byte 0


Underwater_Route127_OnResume::
# 6 "data/maps/Underwater_Route127/scripts.pory"
	call AbnormalWeather_Underwater_SetupEscapeWarp
	end

