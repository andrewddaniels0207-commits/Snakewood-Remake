# 1 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"

# 2 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"
FourIsland_LoreleisHouse_Frlg_MapScripts::
# 3 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"
# 2 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"
# 4 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, FourIsland_LoreleisHouse_OnTransition
# 5 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"
	.byte 0
# 6 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"

# 7 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"

# 8 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"
FourIsland_LoreleisHouse_OnTransition::
# 9 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"
# 6 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"
# 10 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"
	special UpdateLoreleiDollCollection
# 11 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"
	end
# 12 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"

# 13 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"

# 14 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"
FourIsland_LoreleisHouse_EventScript_Lorelei::
# 15 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"
# 11 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"
# 16 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"
	lock
# 17 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"
# 12 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"
# 18 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"
	faceplayer
# 19 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"
# 13 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"
# 20 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"
	goto_if_set FLAG_TALKED_TO_LORELEI_AFTER_WAREHOUSE, FourIsland_LoreleisHouse_EventScript_Lorelei_2
# 21 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"
FourIsland_LoreleisHouse_EventScript_Lorelei_1:
# 22 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"
# 16 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"
# 23 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"
	goto_if_set FLAG_DEFEATED_ROCKETS_IN_WAREHOUSE, FourIsland_LoreleisHouse_EventScript_Lorelei_5
# 24 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"
FourIsland_LoreleisHouse_EventScript_Lorelei_4:
# 25 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"
# 19 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"
# 26 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"
	msgbox FourIsland_LoreleisHouse_Text_IfAnythingWereToHappenToIsland
# 27 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"
# 20 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"
# 28 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"
	release
# 29 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"
	end
# 30 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"

# 31 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"
FourIsland_LoreleisHouse_EventScript_Lorelei_2:
# 32 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"
# 14 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"
# 33 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"
	goto FourIsland_LoreleisHouse_EventScript_Lorelei3
# 34 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"
	goto FourIsland_LoreleisHouse_EventScript_Lorelei_1
# 35 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"

# 36 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"
FourIsland_LoreleisHouse_EventScript_Lorelei_5:
# 37 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"
# 17 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"
# 38 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"
	goto FourIsland_LoreleisHouse_EventScript_Lorelei2
# 39 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"
	goto FourIsland_LoreleisHouse_EventScript_Lorelei_4
# 40 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"

# 41 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"

# 42 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"
FourIsland_LoreleisHouse_EventScript_Lorelei2::
# 43 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"
# 25 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"
# 44 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"
	setflag FLAG_TALKED_TO_LORELEI_AFTER_WAREHOUSE
# 45 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"
# 26 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"
# 46 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"
	msgbox FourIsland_LoreleisHouse_Text_IllReturnToLeagueInShortWhile
# 47 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"
# 27 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"
# 48 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"
	release
# 49 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"
	end
# 50 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"

# 51 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"

# 52 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"
FourIsland_LoreleisHouse_EventScript_Lorelei3::
# 53 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"
# 32 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"
# 54 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"
	msgbox FourIsland_LoreleisHouse_Text_WillDoWhatICanHereAndNow
# 55 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"
# 33 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"
# 56 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"
	release
# 57 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"
	end
# 58 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"

# 59 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"

# 60 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"
FourIsland_LoreleisHouse_EventScript_Doll::
# 61 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"
# 38 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"
# 62 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"
	lock
# 63 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"
# 39 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"
# 64 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"
	msgbox FourIsland_LoreleisHouse_Text_StuffedMonDollsGalore
# 65 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"
# 40 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"
# 66 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"
	release
# 67 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"
	end
# 68 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"

# 69 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"

# 70 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"
FourIsland_LoreleisHouse_Text_IfAnythingWereToHappenToIsland::
# 71 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"
# 44 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"
# 72 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"
	.string "LORELEI: There's something weighing\n"
# 73 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"
	.string "heavily on my mind.\p"
# 74 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"
	.string "If anything were to happen on\n"
# 75 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"
	.string "the island where I was born…\p"
# 76 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"
	.string "I wouldn't know about it if I were\n"
# 77 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"
	.string "in the POKéMON LEAGUE.\p"
# 78 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"
	.string "I wonder if that would make me\n"
# 79 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"
	.string "irresponsible to my home…$"
# 80 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"

# 81 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"
FourIsland_LoreleisHouse_Text_IllReturnToLeagueInShortWhile::
# 82 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"
# 55 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"
# 83 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"
	.string "LORELEI: So, you managed to solve\n"
# 84 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"
	.string "all the problems here?\p"
# 85 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"
	.string "That's wonderful.\p"
# 86 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"
	.string "That means there isn't any reason\n"
# 87 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"
	.string "for me to be here all the time.\p"
# 88 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"
	.string "Thank you…\p"
# 89 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"
	.string "I'll return to the POKéMON LEAGUE\n"
# 90 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"
	.string "in a short while.$"
# 91 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"

# 92 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"
FourIsland_LoreleisHouse_Text_WillDoWhatICanHereAndNow::
# 93 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"
# 66 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"
# 94 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"
	.string "I don't know what will happen in\n"
# 95 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"
	.string "the future, but…\p"
# 96 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"
	.string "I will do what I can here and now.\n"
# 97 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"
	.string "That's all I can do.$"
# 98 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"

# 99 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"
FourIsland_LoreleisHouse_Text_StuffedMonDollsGalore::
# 100 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"
# 73 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"
# 101 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"
	.string "Stuffed POKéMON dolls galore!$"
