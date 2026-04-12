SevenIsland_Frlg_MapScripts::
# 2 "data/maps/SevenIsland_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SevenIsland_OnTransition
	.byte 0


SevenIsland_OnTransition::
# 6 "data/maps/SevenIsland_Frlg/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_SEVEN_ISLAND
	end


SevenIsland_EventScript_IslandSign::
# 11 "data/maps/SevenIsland_Frlg/scripts.pory"
	msgbox SevenIsland_Text_IslandSign, MSGBOX_SIGN
	end


SevenIsland_EventScript_OldWoman::
# 16 "data/maps/SevenIsland_Frlg/scripts.pory"
	msgbox SevenIsland_Text_IslandsMadeInSevenDays, MSGBOX_NPC
	end


SevenIsland_EventScript_Scientist::
# 21 "data/maps/SevenIsland_Frlg/scripts.pory"
	msgbox SevenIsland_Text_IslandVirtuallyUntouched, MSGBOX_NPC
	end


Text_SwordsDanceTeach::
# 25 "data/maps/SevenIsland_Frlg/scripts.pory"
	.string "Not many people come out here.\p"
	.string "If I train here, I'm convinced that\n"
	.string "I'll get stronger and stronger.\p"
	.string "Yep, stronger and stronger…\p"
	.string "How would you like to learn a move\n"
	.string "like that? It's SWORDS DANCE.$"

Text_SwordsDanceDeclined::
# 34 "data/maps/SevenIsland_Frlg/scripts.pory"
	.string "Well, that's fine, too.$"

Text_SwordsDanceWhichMon::
# 38 "data/maps/SevenIsland_Frlg/scripts.pory"
	.string "All right, pick which POKéMON\n"
	.string "I should teach it to.$"

Text_SwordsDanceTaught::
# 43 "data/maps/SevenIsland_Frlg/scripts.pory"
	.string "If only we could keep getting\n"
	.string "stronger and stronger, eh?$"

SevenIsland_Text_IslandSign::
# 48 "data/maps/SevenIsland_Frlg/scripts.pory"
	.string "SEVEN ISLAND\n"
	.string "Quest Island of Infinity$"

SevenIsland_Text_IslandsMadeInSevenDays::
# 53 "data/maps/SevenIsland_Frlg/scripts.pory"
	.string "These islands are called the SEVII\n"
	.string "ISLANDS because there are seven.\p"
	.string "…Or at least that's what the young\n"
	.string "people believe.\p"
	.string "The truth is, these islands are so\n"
	.string "named because they are said to\l"
	.string "have been made in seven days.$"

SevenIsland_Text_IslandVirtuallyUntouched::
# 63 "data/maps/SevenIsland_Frlg/scripts.pory"
	.string "This island has been left virtually\n"
	.string "untouched in its natural state.\p"
	.string "It could be a little difficult to\n"
	.string "hike around because of that.$"
