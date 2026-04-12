# 1 "data/maps/FiveIsland_Harbor_Frlg/scripts.pory"

# 2 "data/maps/FiveIsland_Harbor_Frlg/scripts.pory"
FiveIsland_Harbor_Frlg_MapScripts::
# 3 "data/maps/FiveIsland_Harbor_Frlg/scripts.pory"
	.byte 0
# 4 "data/maps/FiveIsland_Harbor_Frlg/scripts.pory"

# 5 "data/maps/FiveIsland_Harbor_Frlg/scripts.pory"

# 6 "data/maps/FiveIsland_Harbor_Frlg/scripts.pory"
FiveIsland_Harbor_EventScript_Sailor::
# 7 "data/maps/FiveIsland_Harbor_Frlg/scripts.pory"
# 4 "data/maps/FiveIsland_Harbor_Frlg/scripts.pory"
# 8 "data/maps/FiveIsland_Harbor_Frlg/scripts.pory"
	lock
# 9 "data/maps/FiveIsland_Harbor_Frlg/scripts.pory"
# 5 "data/maps/FiveIsland_Harbor_Frlg/scripts.pory"
# 10 "data/maps/FiveIsland_Harbor_Frlg/scripts.pory"
	faceplayer
# 11 "data/maps/FiveIsland_Harbor_Frlg/scripts.pory"
# 6 "data/maps/FiveIsland_Harbor_Frlg/scripts.pory"
# 12 "data/maps/FiveIsland_Harbor_Frlg/scripts.pory"
	message Text_WhereDoYouWantToSail
# 13 "data/maps/FiveIsland_Harbor_Frlg/scripts.pory"
# 7 "data/maps/FiveIsland_Harbor_Frlg/scripts.pory"
# 14 "data/maps/FiveIsland_Harbor_Frlg/scripts.pory"
	waitmessage
# 15 "data/maps/FiveIsland_Harbor_Frlg/scripts.pory"
# 8 "data/maps/FiveIsland_Harbor_Frlg/scripts.pory"
# 16 "data/maps/FiveIsland_Harbor_Frlg/scripts.pory"
	setvar VAR_0x8004, SEAGALLOP_FIVE_ISLAND
# 17 "data/maps/FiveIsland_Harbor_Frlg/scripts.pory"
# 9 "data/maps/FiveIsland_Harbor_Frlg/scripts.pory"
# 18 "data/maps/FiveIsland_Harbor_Frlg/scripts.pory"
	goto EventScript_ChooseDestFromIsland
# 19 "data/maps/FiveIsland_Harbor_Frlg/scripts.pory"
	end
