FourIsland_LoreleisHouse_Frlg_MapScripts::
# 2 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, FourIsland_LoreleisHouse_OnTransition
	.byte 0


FourIsland_LoreleisHouse_OnTransition::
# 6 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"
	special UpdateLoreleiDollCollection
	end


FourIsland_LoreleisHouse_EventScript_Lorelei::
# 11 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"
	lock
# 12 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"
	faceplayer
# 13 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"
	goto_if_set FLAG_TALKED_TO_LORELEI_AFTER_WAREHOUSE, FourIsland_LoreleisHouse_EventScript_Lorelei_2
FourIsland_LoreleisHouse_EventScript_Lorelei_1:
# 16 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"
	goto_if_set FLAG_DEFEATED_ROCKETS_IN_WAREHOUSE, FourIsland_LoreleisHouse_EventScript_Lorelei_5
FourIsland_LoreleisHouse_EventScript_Lorelei_4:
# 19 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"
	msgbox FourIsland_LoreleisHouse_Text_IfAnythingWereToHappenToIsland
# 20 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"
	release
	end

FourIsland_LoreleisHouse_EventScript_Lorelei_2:
# 14 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"
	goto FourIsland_LoreleisHouse_EventScript_Lorelei3
	goto FourIsland_LoreleisHouse_EventScript_Lorelei_1

FourIsland_LoreleisHouse_EventScript_Lorelei_5:
# 17 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"
	goto FourIsland_LoreleisHouse_EventScript_Lorelei2
	goto FourIsland_LoreleisHouse_EventScript_Lorelei_4


FourIsland_LoreleisHouse_EventScript_Lorelei2::
# 25 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"
	setflag FLAG_TALKED_TO_LORELEI_AFTER_WAREHOUSE
# 26 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"
	msgbox FourIsland_LoreleisHouse_Text_IllReturnToLeagueInShortWhile
# 27 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"
	release
	end


FourIsland_LoreleisHouse_EventScript_Lorelei3::
# 32 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"
	msgbox FourIsland_LoreleisHouse_Text_WillDoWhatICanHereAndNow
# 33 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"
	release
	end


FourIsland_LoreleisHouse_EventScript_Doll::
# 38 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"
	lock
# 39 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"
	msgbox FourIsland_LoreleisHouse_Text_StuffedMonDollsGalore
# 40 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"
	release
	end


FourIsland_LoreleisHouse_Text_IfAnythingWereToHappenToIsland::
# 44 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"
	.string "LORELEI: There's something weighing\n"
	.string "heavily on my mind.\p"
	.string "If anything were to happen on\n"
	.string "the island where I was born…\p"
	.string "I wouldn't know about it if I were\n"
	.string "in the POKéMON LEAGUE.\p"
	.string "I wonder if that would make me\n"
	.string "irresponsible to my home…$"

FourIsland_LoreleisHouse_Text_IllReturnToLeagueInShortWhile::
# 55 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"
	.string "LORELEI: So, you managed to solve\n"
	.string "all the problems here?\p"
	.string "That's wonderful.\p"
	.string "That means there isn't any reason\n"
	.string "for me to be here all the time.\p"
	.string "Thank you…\p"
	.string "I'll return to the POKéMON LEAGUE\n"
	.string "in a short while.$"

FourIsland_LoreleisHouse_Text_WillDoWhatICanHereAndNow::
# 66 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"
	.string "I don't know what will happen in\n"
	.string "the future, but…\p"
	.string "I will do what I can here and now.\n"
	.string "That's all I can do.$"

FourIsland_LoreleisHouse_Text_StuffedMonDollsGalore::
# 73 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"
	.string "Stuffed POKéMON dolls galore!$"
