SevenIsland_TanobyRuins_WeepthChamber_Frlg_MapScripts::
# 2 "data/maps/SevenIsland_TanobyRuins_WeepthChamber_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SevenIsland_TanobyRuins_WeepthChamber_OnTransition
	.byte 0


SevenIsland_TanobyRuins_WeepthChamber_OnTransition::
# 6 "data/maps/SevenIsland_TanobyRuins_WeepthChamber_Frlg/scripts.pory"
	call EventScript_TryDarkenRuins
	end

