# 1 "data/maps/SevenIsland_TanobyRuins_MoneanChamber_Frlg/scripts.pory"

# 2 "data/maps/SevenIsland_TanobyRuins_MoneanChamber_Frlg/scripts.pory"
SevenIsland_TanobyRuins_MoneanChamber_Frlg_MapScripts::
# 3 "data/maps/SevenIsland_TanobyRuins_MoneanChamber_Frlg/scripts.pory"
# 2 "data/maps/SevenIsland_TanobyRuins_MoneanChamber_Frlg/scripts.pory"
# 4 "data/maps/SevenIsland_TanobyRuins_MoneanChamber_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SevenIsland_TanobyRuins_MoneanChamber_OnTransition
# 5 "data/maps/SevenIsland_TanobyRuins_MoneanChamber_Frlg/scripts.pory"
	.byte 0
# 6 "data/maps/SevenIsland_TanobyRuins_MoneanChamber_Frlg/scripts.pory"

# 7 "data/maps/SevenIsland_TanobyRuins_MoneanChamber_Frlg/scripts.pory"

# 8 "data/maps/SevenIsland_TanobyRuins_MoneanChamber_Frlg/scripts.pory"
SevenIsland_TanobyRuins_MoneanChamber_OnTransition::
# 9 "data/maps/SevenIsland_TanobyRuins_MoneanChamber_Frlg/scripts.pory"
# 6 "data/maps/SevenIsland_TanobyRuins_MoneanChamber_Frlg/scripts.pory"
# 10 "data/maps/SevenIsland_TanobyRuins_MoneanChamber_Frlg/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_SEVEN_ISLAND_TANOBY_RUINS_MONEAN_CHAMBER
# 11 "data/maps/SevenIsland_TanobyRuins_MoneanChamber_Frlg/scripts.pory"
# 7 "data/maps/SevenIsland_TanobyRuins_MoneanChamber_Frlg/scripts.pory"
# 12 "data/maps/SevenIsland_TanobyRuins_MoneanChamber_Frlg/scripts.pory"
	call EventScript_TryDarkenRuins
# 13 "data/maps/SevenIsland_TanobyRuins_MoneanChamber_Frlg/scripts.pory"
	end
