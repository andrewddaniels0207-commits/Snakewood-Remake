# 1 "data/maps/Underwater_Route105/scripts.pory"

# 2 "data/maps/Underwater_Route105/scripts.pory"
Underwater_Route105_MapScripts::
# 3 "data/maps/Underwater_Route105/scripts.pory"
# 2 "data/maps/Underwater_Route105/scripts.pory"
# 4 "data/maps/Underwater_Route105/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Underwater_Route105_OnResume
# 5 "data/maps/Underwater_Route105/scripts.pory"
	.byte 0
# 6 "data/maps/Underwater_Route105/scripts.pory"

# 7 "data/maps/Underwater_Route105/scripts.pory"

# 8 "data/maps/Underwater_Route105/scripts.pory"
Underwater_Route105_OnResume::
# 9 "data/maps/Underwater_Route105/scripts.pory"
# 6 "data/maps/Underwater_Route105/scripts.pory"
# 10 "data/maps/Underwater_Route105/scripts.pory"
	call AbnormalWeather_Underwater_SetupEscapeWarp
# 11 "data/maps/Underwater_Route105/scripts.pory"
	end
