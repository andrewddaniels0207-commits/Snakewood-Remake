ThreeIsland_Harbor_Frlg_MapScripts::
	.byte 0


ThreeIsland_Harbor_EventScript_Sailor::
# 4 "data/maps/ThreeIsland_Harbor_Frlg/scripts.pory"
	lock
# 5 "data/maps/ThreeIsland_Harbor_Frlg/scripts.pory"
	faceplayer
# 6 "data/maps/ThreeIsland_Harbor_Frlg/scripts.pory"
	message Text_WhereDoYouWantToSail
# 7 "data/maps/ThreeIsland_Harbor_Frlg/scripts.pory"
	waitmessage
# 8 "data/maps/ThreeIsland_Harbor_Frlg/scripts.pory"
	setvar VAR_0x8004, SEAGALLOP_THREE_ISLAND
# 9 "data/maps/ThreeIsland_Harbor_Frlg/scripts.pory"
	goto EventScript_ChooseDestFromIsland
	end

