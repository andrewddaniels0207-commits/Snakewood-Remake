# 1 "data/maps/ThreeIsland_House5_Frlg/scripts.pory"

# 2 "data/maps/ThreeIsland_House5_Frlg/scripts.pory"
ThreeIsland_House5_Frlg_MapScripts::
# 3 "data/maps/ThreeIsland_House5_Frlg/scripts.pory"
	.byte 0
# 4 "data/maps/ThreeIsland_House5_Frlg/scripts.pory"

# 5 "data/maps/ThreeIsland_House5_Frlg/scripts.pory"

# 6 "data/maps/ThreeIsland_House5_Frlg/scripts.pory"
ThreeIsland_House5_EventScript_LittleGirl::
# 7 "data/maps/ThreeIsland_House5_Frlg/scripts.pory"
# 4 "data/maps/ThreeIsland_House5_Frlg/scripts.pory"
# 8 "data/maps/ThreeIsland_House5_Frlg/scripts.pory"
	lock
# 9 "data/maps/ThreeIsland_House5_Frlg/scripts.pory"
# 5 "data/maps/ThreeIsland_House5_Frlg/scripts.pory"
# 10 "data/maps/ThreeIsland_House5_Frlg/scripts.pory"
	faceplayer
# 11 "data/maps/ThreeIsland_House5_Frlg/scripts.pory"
# 6 "data/maps/ThreeIsland_House5_Frlg/scripts.pory"
# 12 "data/maps/ThreeIsland_House5_Frlg/scripts.pory"
	goto_if_set FLAG_RESCUED_LOSTELLE, ThreeIsland_House5_EventScript_LittleGirl_2
# 13 "data/maps/ThreeIsland_House5_Frlg/scripts.pory"
ThreeIsland_House5_EventScript_LittleGirl_1:
# 14 "data/maps/ThreeIsland_House5_Frlg/scripts.pory"
# 9 "data/maps/ThreeIsland_House5_Frlg/scripts.pory"
# 15 "data/maps/ThreeIsland_House5_Frlg/scripts.pory"
	msgbox ThreeIsland_House5_Text_ImNotLostelle
# 16 "data/maps/ThreeIsland_House5_Frlg/scripts.pory"
# 10 "data/maps/ThreeIsland_House5_Frlg/scripts.pory"
# 17 "data/maps/ThreeIsland_House5_Frlg/scripts.pory"
	release
# 18 "data/maps/ThreeIsland_House5_Frlg/scripts.pory"
	end
# 19 "data/maps/ThreeIsland_House5_Frlg/scripts.pory"

# 20 "data/maps/ThreeIsland_House5_Frlg/scripts.pory"
ThreeIsland_House5_EventScript_LittleGirl_2:
# 21 "data/maps/ThreeIsland_House5_Frlg/scripts.pory"
# 7 "data/maps/ThreeIsland_House5_Frlg/scripts.pory"
# 22 "data/maps/ThreeIsland_House5_Frlg/scripts.pory"
	goto ThreeIsland_House5_EventScript_LittleGirlLostelleFound
# 23 "data/maps/ThreeIsland_House5_Frlg/scripts.pory"
	goto ThreeIsland_House5_EventScript_LittleGirl_1
# 24 "data/maps/ThreeIsland_House5_Frlg/scripts.pory"

# 25 "data/maps/ThreeIsland_House5_Frlg/scripts.pory"

# 26 "data/maps/ThreeIsland_House5_Frlg/scripts.pory"
ThreeIsland_House5_EventScript_LittleGirlLostelleFound::
# 27 "data/maps/ThreeIsland_House5_Frlg/scripts.pory"
# 15 "data/maps/ThreeIsland_House5_Frlg/scripts.pory"
# 28 "data/maps/ThreeIsland_House5_Frlg/scripts.pory"
	msgbox ThreeIsland_House5_Text_IllGoPlayWithLostelle
# 29 "data/maps/ThreeIsland_House5_Frlg/scripts.pory"
# 16 "data/maps/ThreeIsland_House5_Frlg/scripts.pory"
# 30 "data/maps/ThreeIsland_House5_Frlg/scripts.pory"
	release
# 31 "data/maps/ThreeIsland_House5_Frlg/scripts.pory"
	end
# 32 "data/maps/ThreeIsland_House5_Frlg/scripts.pory"

# 33 "data/maps/ThreeIsland_House5_Frlg/scripts.pory"

# 34 "data/maps/ThreeIsland_House5_Frlg/scripts.pory"
ThreeIsland_House5_Text_ImNotLostelle::
# 35 "data/maps/ThreeIsland_House5_Frlg/scripts.pory"
# 20 "data/maps/ThreeIsland_House5_Frlg/scripts.pory"
# 36 "data/maps/ThreeIsland_House5_Frlg/scripts.pory"
	.string "Me?\n"
# 37 "data/maps/ThreeIsland_House5_Frlg/scripts.pory"
	.string "I'm not LOSTELLE.\p"
# 38 "data/maps/ThreeIsland_House5_Frlg/scripts.pory"
	.string "She's probably gone to the\n"
# 39 "data/maps/ThreeIsland_House5_Frlg/scripts.pory"
	.string "BERRY FOREST, I think.\p"
# 40 "data/maps/ThreeIsland_House5_Frlg/scripts.pory"
	.string "She picks BERRIES there for making\n"
# 41 "data/maps/ThreeIsland_House5_Frlg/scripts.pory"
	.string "lunch.$"
# 42 "data/maps/ThreeIsland_House5_Frlg/scripts.pory"

# 43 "data/maps/ThreeIsland_House5_Frlg/scripts.pory"
ThreeIsland_House5_Text_IllGoPlayWithLostelle::
# 44 "data/maps/ThreeIsland_House5_Frlg/scripts.pory"
# 29 "data/maps/ThreeIsland_House5_Frlg/scripts.pory"
# 45 "data/maps/ThreeIsland_House5_Frlg/scripts.pory"
	.string "I think I'll go play with LOSTELLE\n"
# 46 "data/maps/ThreeIsland_House5_Frlg/scripts.pory"
	.string "today.$"
