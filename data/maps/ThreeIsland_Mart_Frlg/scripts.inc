# 1 "data/maps/ThreeIsland_Mart_Frlg/scripts.pory"

# 2 "data/maps/ThreeIsland_Mart_Frlg/scripts.pory"
ThreeIsland_Mart_Frlg_MapScripts::
# 3 "data/maps/ThreeIsland_Mart_Frlg/scripts.pory"
	.byte 0
# 4 "data/maps/ThreeIsland_Mart_Frlg/scripts.pory"

# 5 "data/maps/ThreeIsland_Mart_Frlg/scripts.pory"

# 6 "data/maps/ThreeIsland_Mart_Frlg/scripts.pory"
ThreeIsland_Mart_EventScript_Clerk::
# 7 "data/maps/ThreeIsland_Mart_Frlg/scripts.pory"
# 4 "data/maps/ThreeIsland_Mart_Frlg/scripts.pory"
# 8 "data/maps/ThreeIsland_Mart_Frlg/scripts.pory"
	lock
# 9 "data/maps/ThreeIsland_Mart_Frlg/scripts.pory"
# 5 "data/maps/ThreeIsland_Mart_Frlg/scripts.pory"
# 10 "data/maps/ThreeIsland_Mart_Frlg/scripts.pory"
	faceplayer
# 11 "data/maps/ThreeIsland_Mart_Frlg/scripts.pory"
# 6 "data/maps/ThreeIsland_Mart_Frlg/scripts.pory"
# 12 "data/maps/ThreeIsland_Mart_Frlg/scripts.pory"
	message gText_HowMayIServeYou
# 13 "data/maps/ThreeIsland_Mart_Frlg/scripts.pory"
# 7 "data/maps/ThreeIsland_Mart_Frlg/scripts.pory"
# 14 "data/maps/ThreeIsland_Mart_Frlg/scripts.pory"
	waitmessage
# 15 "data/maps/ThreeIsland_Mart_Frlg/scripts.pory"
# 8 "data/maps/ThreeIsland_Mart_Frlg/scripts.pory"
# 16 "data/maps/ThreeIsland_Mart_Frlg/scripts.pory"
	pokemart ThreeIsland_Mart_Items
# 17 "data/maps/ThreeIsland_Mart_Frlg/scripts.pory"
# 9 "data/maps/ThreeIsland_Mart_Frlg/scripts.pory"
# 18 "data/maps/ThreeIsland_Mart_Frlg/scripts.pory"
	msgbox gText_PleaseComeAgain
# 19 "data/maps/ThreeIsland_Mart_Frlg/scripts.pory"
# 10 "data/maps/ThreeIsland_Mart_Frlg/scripts.pory"
# 20 "data/maps/ThreeIsland_Mart_Frlg/scripts.pory"
	release
# 21 "data/maps/ThreeIsland_Mart_Frlg/scripts.pory"
	end
# 22 "data/maps/ThreeIsland_Mart_Frlg/scripts.pory"

# 23 "data/maps/ThreeIsland_Mart_Frlg/scripts.pory"

# 24 "data/maps/ThreeIsland_Mart_Frlg/scripts.pory"
ThreeIsland_Mart_Items::
# 25 "data/maps/ThreeIsland_Mart_Frlg/scripts.pory"
# 15 "data/maps/ThreeIsland_Mart_Frlg/scripts.pory"
# 26 "data/maps/ThreeIsland_Mart_Frlg/scripts.pory"
	release
# 27 "data/maps/ThreeIsland_Mart_Frlg/scripts.pory"
	end
# 28 "data/maps/ThreeIsland_Mart_Frlg/scripts.pory"

# 29 "data/maps/ThreeIsland_Mart_Frlg/scripts.pory"

# 30 "data/maps/ThreeIsland_Mart_Frlg/scripts.pory"
ThreeIsland_Mart_EventScript_Picnicker::
# 31 "data/maps/ThreeIsland_Mart_Frlg/scripts.pory"
# 20 "data/maps/ThreeIsland_Mart_Frlg/scripts.pory"
# 32 "data/maps/ThreeIsland_Mart_Frlg/scripts.pory"
	msgbox ThreeIsland_Mart_Text_TrueThatCeldadonDeptStoreBigger, MSGBOX_NPC
# 33 "data/maps/ThreeIsland_Mart_Frlg/scripts.pory"
	end
# 34 "data/maps/ThreeIsland_Mart_Frlg/scripts.pory"

# 35 "data/maps/ThreeIsland_Mart_Frlg/scripts.pory"

# 36 "data/maps/ThreeIsland_Mart_Frlg/scripts.pory"
ThreeIsland_Mart_EventScript_BugCatcher::
# 37 "data/maps/ThreeIsland_Mart_Frlg/scripts.pory"
# 25 "data/maps/ThreeIsland_Mart_Frlg/scripts.pory"
# 38 "data/maps/ThreeIsland_Mart_Frlg/scripts.pory"
	msgbox ThreeIsland_Mart_Text_PeopleHealWithBerriesFromForest, MSGBOX_NPC
# 39 "data/maps/ThreeIsland_Mart_Frlg/scripts.pory"
	end
# 40 "data/maps/ThreeIsland_Mart_Frlg/scripts.pory"

# 41 "data/maps/ThreeIsland_Mart_Frlg/scripts.pory"

# 42 "data/maps/ThreeIsland_Mart_Frlg/scripts.pory"
ThreeIsland_Mart_EventScript_Youngster::
# 43 "data/maps/ThreeIsland_Mart_Frlg/scripts.pory"
# 30 "data/maps/ThreeIsland_Mart_Frlg/scripts.pory"
# 44 "data/maps/ThreeIsland_Mart_Frlg/scripts.pory"
	msgbox ThreeIsland_Mart_Text_BikersWereAboutToTrashMart, MSGBOX_NPC
# 45 "data/maps/ThreeIsland_Mart_Frlg/scripts.pory"
	end
# 46 "data/maps/ThreeIsland_Mart_Frlg/scripts.pory"

# 47 "data/maps/ThreeIsland_Mart_Frlg/scripts.pory"

# 48 "data/maps/ThreeIsland_Mart_Frlg/scripts.pory"
ThreeIsland_Mart_Text_TrueThatCeldadonDeptStoreBigger::
# 49 "data/maps/ThreeIsland_Mart_Frlg/scripts.pory"
# 34 "data/maps/ThreeIsland_Mart_Frlg/scripts.pory"
# 50 "data/maps/ThreeIsland_Mart_Frlg/scripts.pory"
	.string "Is it true?\p"
# 51 "data/maps/ThreeIsland_Mart_Frlg/scripts.pory"
	.string "CELADON DEPT. STORE is several\n"
# 52 "data/maps/ThreeIsland_Mart_Frlg/scripts.pory"
	.string "times bigger than this shop?$"
# 53 "data/maps/ThreeIsland_Mart_Frlg/scripts.pory"

# 54 "data/maps/ThreeIsland_Mart_Frlg/scripts.pory"
ThreeIsland_Mart_Text_PeopleHealWithBerriesFromForest::
# 55 "data/maps/ThreeIsland_Mart_Frlg/scripts.pory"
# 40 "data/maps/ThreeIsland_Mart_Frlg/scripts.pory"
# 56 "data/maps/ThreeIsland_Mart_Frlg/scripts.pory"
	.string "I sometimes buy medicine here.\p"
# 57 "data/maps/ThreeIsland_Mart_Frlg/scripts.pory"
	.string "But a lot of people heal POKéMON\n"
# 58 "data/maps/ThreeIsland_Mart_Frlg/scripts.pory"
	.string "with BERRIES from BERRY FOREST.\p"
# 59 "data/maps/ThreeIsland_Mart_Frlg/scripts.pory"
	.string "After all, BERRIES are free and\n"
# 60 "data/maps/ThreeIsland_Mart_Frlg/scripts.pory"
	.string "they never run out.$"
# 61 "data/maps/ThreeIsland_Mart_Frlg/scripts.pory"

# 62 "data/maps/ThreeIsland_Mart_Frlg/scripts.pory"
ThreeIsland_Mart_Text_BikersWereAboutToTrashMart::
# 63 "data/maps/ThreeIsland_Mart_Frlg/scripts.pory"
# 48 "data/maps/ThreeIsland_Mart_Frlg/scripts.pory"
# 64 "data/maps/ThreeIsland_Mart_Frlg/scripts.pory"
	.string "Those BIKERS were about to trash\n"
# 65 "data/maps/ThreeIsland_Mart_Frlg/scripts.pory"
	.string "this POKéMON MART.\p"
# 66 "data/maps/ThreeIsland_Mart_Frlg/scripts.pory"
	.string "Am I glad they decided to leave!$"
