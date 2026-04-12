# 1 "data/maps/SevenIsland_Frlg/scripts.pory"

# 2 "data/maps/SevenIsland_Frlg/scripts.pory"
SevenIsland_Frlg_MapScripts::
# 3 "data/maps/SevenIsland_Frlg/scripts.pory"
# 2 "data/maps/SevenIsland_Frlg/scripts.pory"
# 4 "data/maps/SevenIsland_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SevenIsland_OnTransition
# 5 "data/maps/SevenIsland_Frlg/scripts.pory"
	.byte 0
# 6 "data/maps/SevenIsland_Frlg/scripts.pory"

# 7 "data/maps/SevenIsland_Frlg/scripts.pory"

# 8 "data/maps/SevenIsland_Frlg/scripts.pory"
SevenIsland_OnTransition::
# 9 "data/maps/SevenIsland_Frlg/scripts.pory"
# 6 "data/maps/SevenIsland_Frlg/scripts.pory"
# 10 "data/maps/SevenIsland_Frlg/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_SEVEN_ISLAND
# 11 "data/maps/SevenIsland_Frlg/scripts.pory"
	end
# 12 "data/maps/SevenIsland_Frlg/scripts.pory"

# 13 "data/maps/SevenIsland_Frlg/scripts.pory"

# 14 "data/maps/SevenIsland_Frlg/scripts.pory"
SevenIsland_EventScript_IslandSign::
# 15 "data/maps/SevenIsland_Frlg/scripts.pory"
# 11 "data/maps/SevenIsland_Frlg/scripts.pory"
# 16 "data/maps/SevenIsland_Frlg/scripts.pory"
	msgbox SevenIsland_Text_IslandSign, MSGBOX_SIGN
# 17 "data/maps/SevenIsland_Frlg/scripts.pory"
	end
# 18 "data/maps/SevenIsland_Frlg/scripts.pory"

# 19 "data/maps/SevenIsland_Frlg/scripts.pory"

# 20 "data/maps/SevenIsland_Frlg/scripts.pory"
SevenIsland_EventScript_OldWoman::
# 21 "data/maps/SevenIsland_Frlg/scripts.pory"
# 16 "data/maps/SevenIsland_Frlg/scripts.pory"
# 22 "data/maps/SevenIsland_Frlg/scripts.pory"
	msgbox SevenIsland_Text_IslandsMadeInSevenDays, MSGBOX_NPC
# 23 "data/maps/SevenIsland_Frlg/scripts.pory"
	end
# 24 "data/maps/SevenIsland_Frlg/scripts.pory"

# 25 "data/maps/SevenIsland_Frlg/scripts.pory"

# 26 "data/maps/SevenIsland_Frlg/scripts.pory"
SevenIsland_EventScript_Scientist::
# 27 "data/maps/SevenIsland_Frlg/scripts.pory"
# 21 "data/maps/SevenIsland_Frlg/scripts.pory"
# 28 "data/maps/SevenIsland_Frlg/scripts.pory"
	msgbox SevenIsland_Text_IslandVirtuallyUntouched, MSGBOX_NPC
# 29 "data/maps/SevenIsland_Frlg/scripts.pory"
	end
# 30 "data/maps/SevenIsland_Frlg/scripts.pory"

# 31 "data/maps/SevenIsland_Frlg/scripts.pory"

# 32 "data/maps/SevenIsland_Frlg/scripts.pory"
Text_SwordsDanceTeach::
# 33 "data/maps/SevenIsland_Frlg/scripts.pory"
# 25 "data/maps/SevenIsland_Frlg/scripts.pory"
# 34 "data/maps/SevenIsland_Frlg/scripts.pory"
	.string "Not many people come out here.\p"
# 35 "data/maps/SevenIsland_Frlg/scripts.pory"
	.string "If I train here, I'm convinced that\n"
# 36 "data/maps/SevenIsland_Frlg/scripts.pory"
	.string "I'll get stronger and stronger.\p"
# 37 "data/maps/SevenIsland_Frlg/scripts.pory"
	.string "Yep, stronger and stronger…\p"
# 38 "data/maps/SevenIsland_Frlg/scripts.pory"
	.string "How would you like to learn a move\n"
# 39 "data/maps/SevenIsland_Frlg/scripts.pory"
	.string "like that? It's SWORDS DANCE.$"
# 40 "data/maps/SevenIsland_Frlg/scripts.pory"

# 41 "data/maps/SevenIsland_Frlg/scripts.pory"
Text_SwordsDanceDeclined::
# 42 "data/maps/SevenIsland_Frlg/scripts.pory"
# 34 "data/maps/SevenIsland_Frlg/scripts.pory"
# 43 "data/maps/SevenIsland_Frlg/scripts.pory"
	.string "Well, that's fine, too.$"
# 44 "data/maps/SevenIsland_Frlg/scripts.pory"

# 45 "data/maps/SevenIsland_Frlg/scripts.pory"
Text_SwordsDanceWhichMon::
# 46 "data/maps/SevenIsland_Frlg/scripts.pory"
# 38 "data/maps/SevenIsland_Frlg/scripts.pory"
# 47 "data/maps/SevenIsland_Frlg/scripts.pory"
	.string "All right, pick which POKéMON\n"
# 48 "data/maps/SevenIsland_Frlg/scripts.pory"
	.string "I should teach it to.$"
# 49 "data/maps/SevenIsland_Frlg/scripts.pory"

# 50 "data/maps/SevenIsland_Frlg/scripts.pory"
Text_SwordsDanceTaught::
# 51 "data/maps/SevenIsland_Frlg/scripts.pory"
# 43 "data/maps/SevenIsland_Frlg/scripts.pory"
# 52 "data/maps/SevenIsland_Frlg/scripts.pory"
	.string "If only we could keep getting\n"
# 53 "data/maps/SevenIsland_Frlg/scripts.pory"
	.string "stronger and stronger, eh?$"
# 54 "data/maps/SevenIsland_Frlg/scripts.pory"

# 55 "data/maps/SevenIsland_Frlg/scripts.pory"
SevenIsland_Text_IslandSign::
# 56 "data/maps/SevenIsland_Frlg/scripts.pory"
# 48 "data/maps/SevenIsland_Frlg/scripts.pory"
# 57 "data/maps/SevenIsland_Frlg/scripts.pory"
	.string "SEVEN ISLAND\n"
# 58 "data/maps/SevenIsland_Frlg/scripts.pory"
	.string "Quest Island of Infinity$"
# 59 "data/maps/SevenIsland_Frlg/scripts.pory"

# 60 "data/maps/SevenIsland_Frlg/scripts.pory"
SevenIsland_Text_IslandsMadeInSevenDays::
# 61 "data/maps/SevenIsland_Frlg/scripts.pory"
# 53 "data/maps/SevenIsland_Frlg/scripts.pory"
# 62 "data/maps/SevenIsland_Frlg/scripts.pory"
	.string "These islands are called the SEVII\n"
# 63 "data/maps/SevenIsland_Frlg/scripts.pory"
	.string "ISLANDS because there are seven.\p"
# 64 "data/maps/SevenIsland_Frlg/scripts.pory"
	.string "…Or at least that's what the young\n"
# 65 "data/maps/SevenIsland_Frlg/scripts.pory"
	.string "people believe.\p"
# 66 "data/maps/SevenIsland_Frlg/scripts.pory"
	.string "The truth is, these islands are so\n"
# 67 "data/maps/SevenIsland_Frlg/scripts.pory"
	.string "named because they are said to\l"
# 68 "data/maps/SevenIsland_Frlg/scripts.pory"
	.string "have been made in seven days.$"
# 69 "data/maps/SevenIsland_Frlg/scripts.pory"

# 70 "data/maps/SevenIsland_Frlg/scripts.pory"
SevenIsland_Text_IslandVirtuallyUntouched::
# 71 "data/maps/SevenIsland_Frlg/scripts.pory"
# 63 "data/maps/SevenIsland_Frlg/scripts.pory"
# 72 "data/maps/SevenIsland_Frlg/scripts.pory"
	.string "This island has been left virtually\n"
# 73 "data/maps/SevenIsland_Frlg/scripts.pory"
	.string "untouched in its natural state.\p"
# 74 "data/maps/SevenIsland_Frlg/scripts.pory"
	.string "It could be a little difficult to\n"
# 75 "data/maps/SevenIsland_Frlg/scripts.pory"
	.string "hike around because of that.$"
