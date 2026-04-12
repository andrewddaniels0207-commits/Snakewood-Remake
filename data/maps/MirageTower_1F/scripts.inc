# 1 "data/maps/MirageTower_1F/scripts.pory"

# 2 "data/maps/MirageTower_1F/scripts.pory"
MirageTower_1F_MapScripts::
# 3 "data/maps/MirageTower_1F/scripts.pory"
# 2 "data/maps/MirageTower_1F/scripts.pory"
# 4 "data/maps/MirageTower_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MirageTower_1F_OnTransition
# 5 "data/maps/MirageTower_1F/scripts.pory"
	.byte 0
# 6 "data/maps/MirageTower_1F/scripts.pory"

# 7 "data/maps/MirageTower_1F/scripts.pory"

# 8 "data/maps/MirageTower_1F/scripts.pory"
MirageTower_1F_OnTransition::
# 9 "data/maps/MirageTower_1F/scripts.pory"
# 6 "data/maps/MirageTower_1F/scripts.pory"
# 10 "data/maps/MirageTower_1F/scripts.pory"
	setflag FLAG_ENTERED_MIRAGE_TOWER
# 11 "data/maps/MirageTower_1F/scripts.pory"
# 7 "data/maps/MirageTower_1F/scripts.pory"
# 12 "data/maps/MirageTower_1F/scripts.pory"
	setflag FLAG_FORCE_MIRAGE_TOWER_VISIBLE
# 13 "data/maps/MirageTower_1F/scripts.pory"
# 8 "data/maps/MirageTower_1F/scripts.pory"
# 14 "data/maps/MirageTower_1F/scripts.pory"
	setflag FLAG_LANDMARK_MIRAGE_TOWER
# 15 "data/maps/MirageTower_1F/scripts.pory"
	end
