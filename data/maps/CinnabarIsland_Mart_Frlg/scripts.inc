# 1 "data/maps/CinnabarIsland_Mart_Frlg/scripts.pory"

# 2 "data/maps/CinnabarIsland_Mart_Frlg/scripts.pory"
CinnabarIsland_Mart_Frlg_MapScripts::
# 3 "data/maps/CinnabarIsland_Mart_Frlg/scripts.pory"
	.byte 0
# 4 "data/maps/CinnabarIsland_Mart_Frlg/scripts.pory"

# 5 "data/maps/CinnabarIsland_Mart_Frlg/scripts.pory"

# 6 "data/maps/CinnabarIsland_Mart_Frlg/scripts.pory"
CinnabarIsland_Mart_EventScript_Woman::
# 7 "data/maps/CinnabarIsland_Mart_Frlg/scripts.pory"
# 4 "data/maps/CinnabarIsland_Mart_Frlg/scripts.pory"
# 8 "data/maps/CinnabarIsland_Mart_Frlg/scripts.pory"
	msgbox CinnabarIsland_Mart_Text_DontTheyHaveXAttack, MSGBOX_NPC
# 9 "data/maps/CinnabarIsland_Mart_Frlg/scripts.pory"
	end
# 10 "data/maps/CinnabarIsland_Mart_Frlg/scripts.pory"

# 11 "data/maps/CinnabarIsland_Mart_Frlg/scripts.pory"

# 12 "data/maps/CinnabarIsland_Mart_Frlg/scripts.pory"
CinnabarIsland_Mart_EventScript_Scientist::
# 13 "data/maps/CinnabarIsland_Mart_Frlg/scripts.pory"
# 9 "data/maps/CinnabarIsland_Mart_Frlg/scripts.pory"
# 14 "data/maps/CinnabarIsland_Mart_Frlg/scripts.pory"
	msgbox CinnabarIsland_Mart_Text_ExtraItemsNeverHurt, MSGBOX_NPC
# 15 "data/maps/CinnabarIsland_Mart_Frlg/scripts.pory"
	end
# 16 "data/maps/CinnabarIsland_Mart_Frlg/scripts.pory"

# 17 "data/maps/CinnabarIsland_Mart_Frlg/scripts.pory"

# 18 "data/maps/CinnabarIsland_Mart_Frlg/scripts.pory"
CinnabarIsland_Mart_EventScript_Clerk::
# 19 "data/maps/CinnabarIsland_Mart_Frlg/scripts.pory"
# 14 "data/maps/CinnabarIsland_Mart_Frlg/scripts.pory"
# 20 "data/maps/CinnabarIsland_Mart_Frlg/scripts.pory"
	lock
# 21 "data/maps/CinnabarIsland_Mart_Frlg/scripts.pory"
# 15 "data/maps/CinnabarIsland_Mart_Frlg/scripts.pory"
# 22 "data/maps/CinnabarIsland_Mart_Frlg/scripts.pory"
	faceplayer
# 23 "data/maps/CinnabarIsland_Mart_Frlg/scripts.pory"
# 16 "data/maps/CinnabarIsland_Mart_Frlg/scripts.pory"
# 24 "data/maps/CinnabarIsland_Mart_Frlg/scripts.pory"
	message gText_HowMayIServeYou
# 25 "data/maps/CinnabarIsland_Mart_Frlg/scripts.pory"
# 17 "data/maps/CinnabarIsland_Mart_Frlg/scripts.pory"
# 26 "data/maps/CinnabarIsland_Mart_Frlg/scripts.pory"
	waitmessage
# 27 "data/maps/CinnabarIsland_Mart_Frlg/scripts.pory"
# 18 "data/maps/CinnabarIsland_Mart_Frlg/scripts.pory"
# 28 "data/maps/CinnabarIsland_Mart_Frlg/scripts.pory"
	pokemart CinnabarIsland_Mart_Items
# 29 "data/maps/CinnabarIsland_Mart_Frlg/scripts.pory"
# 19 "data/maps/CinnabarIsland_Mart_Frlg/scripts.pory"
# 30 "data/maps/CinnabarIsland_Mart_Frlg/scripts.pory"
	msgbox gText_PleaseComeAgain
# 31 "data/maps/CinnabarIsland_Mart_Frlg/scripts.pory"
# 20 "data/maps/CinnabarIsland_Mart_Frlg/scripts.pory"
# 32 "data/maps/CinnabarIsland_Mart_Frlg/scripts.pory"
	release
# 33 "data/maps/CinnabarIsland_Mart_Frlg/scripts.pory"
	end
# 34 "data/maps/CinnabarIsland_Mart_Frlg/scripts.pory"

# 35 "data/maps/CinnabarIsland_Mart_Frlg/scripts.pory"

# 36 "data/maps/CinnabarIsland_Mart_Frlg/scripts.pory"
CinnabarIsland_Mart_Items::
# 37 "data/maps/CinnabarIsland_Mart_Frlg/scripts.pory"
# 25 "data/maps/CinnabarIsland_Mart_Frlg/scripts.pory"
# 38 "data/maps/CinnabarIsland_Mart_Frlg/scripts.pory"
	release
# 39 "data/maps/CinnabarIsland_Mart_Frlg/scripts.pory"
	end
# 40 "data/maps/CinnabarIsland_Mart_Frlg/scripts.pory"

# 41 "data/maps/CinnabarIsland_Mart_Frlg/scripts.pory"

# 42 "data/maps/CinnabarIsland_Mart_Frlg/scripts.pory"
CinnabarIsland_Mart_Text_DontTheyHaveXAttack::
# 43 "data/maps/CinnabarIsland_Mart_Frlg/scripts.pory"
# 29 "data/maps/CinnabarIsland_Mart_Frlg/scripts.pory"
# 44 "data/maps/CinnabarIsland_Mart_Frlg/scripts.pory"
	.string "Don't they have X ATTACK?\p"
# 45 "data/maps/CinnabarIsland_Mart_Frlg/scripts.pory"
	.string "I like it because it raises the\n"
# 46 "data/maps/CinnabarIsland_Mart_Frlg/scripts.pory"
	.string "ATTACK stat in battle.$"
# 47 "data/maps/CinnabarIsland_Mart_Frlg/scripts.pory"

# 48 "data/maps/CinnabarIsland_Mart_Frlg/scripts.pory"
CinnabarIsland_Mart_Text_ExtraItemsNeverHurt::
# 49 "data/maps/CinnabarIsland_Mart_Frlg/scripts.pory"
# 35 "data/maps/CinnabarIsland_Mart_Frlg/scripts.pory"
# 50 "data/maps/CinnabarIsland_Mart_Frlg/scripts.pory"
	.string "It never hurts to have extra items.\n"
# 51 "data/maps/CinnabarIsland_Mart_Frlg/scripts.pory"
	.string "You never know what might happen.$"
