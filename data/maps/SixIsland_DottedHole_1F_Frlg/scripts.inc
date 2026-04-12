SixIsland_DottedHole_1F_Frlg_MapScripts::
# 2 "data/maps/SixIsland_DottedHole_1F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SixIsland_DottedHole_1F_OnTransition
	.byte 0


SixIsland_DottedHole_1F_OnTransition::
# 6 "data/maps/SixIsland_DottedHole_1F_Frlg/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_SIX_ISLAND_DOTTED_HOLE_1F
	end


SixIsland_DottedHole_B1F_EventScript_BrailleUp::
# 11 "data/maps/SixIsland_DottedHole_1F_Frlg/scripts.pory"
	lockall
# 12 "data/maps/SixIsland_DottedHole_1F_Frlg/scripts.pory"
	braillemsgbox Braille_Text_Up
# 13 "data/maps/SixIsland_DottedHole_1F_Frlg/scripts.pory"
	releaseall
	end


SixIsland_DottedHole_B4F_EventScript_BrailleDown::
# 18 "data/maps/SixIsland_DottedHole_1F_Frlg/scripts.pory"
	lockall
# 19 "data/maps/SixIsland_DottedHole_1F_Frlg/scripts.pory"
	braillemsgbox Braille_Text_Down
# 20 "data/maps/SixIsland_DottedHole_1F_Frlg/scripts.pory"
	releaseall
	end


SixIsland_DottedHole_B3F_EventScript_BrailleRight::
# 25 "data/maps/SixIsland_DottedHole_1F_Frlg/scripts.pory"
	lockall
# 26 "data/maps/SixIsland_DottedHole_1F_Frlg/scripts.pory"
	braillemsgbox Braille_Text_Right
# 27 "data/maps/SixIsland_DottedHole_1F_Frlg/scripts.pory"
	releaseall
	end


SixIsland_DottedHole_B2F_EventScript_BrailleLeft::
# 32 "data/maps/SixIsland_DottedHole_1F_Frlg/scripts.pory"
	lockall
# 33 "data/maps/SixIsland_DottedHole_1F_Frlg/scripts.pory"
	braillemsgbox Braille_Text_Left
# 34 "data/maps/SixIsland_DottedHole_1F_Frlg/scripts.pory"
	releaseall
	end

