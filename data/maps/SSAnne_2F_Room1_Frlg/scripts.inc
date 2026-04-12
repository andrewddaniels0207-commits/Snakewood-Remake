# 1 "data/maps/SSAnne_2F_Room1_Frlg/scripts.pory"

# 2 "data/maps/SSAnne_2F_Room1_Frlg/scripts.pory"
SSAnne_2F_Room1_Frlg_MapScripts::
# 3 "data/maps/SSAnne_2F_Room1_Frlg/scripts.pory"
	.byte 0
# 4 "data/maps/SSAnne_2F_Room1_Frlg/scripts.pory"

# 5 "data/maps/SSAnne_2F_Room1_Frlg/scripts.pory"

# 6 "data/maps/SSAnne_2F_Room1_Frlg/scripts.pory"
SSAnne_2F_Room1_EventScript_Gentleman::
# 7 "data/maps/SSAnne_2F_Room1_Frlg/scripts.pory"
# 4 "data/maps/SSAnne_2F_Room1_Frlg/scripts.pory"
# 8 "data/maps/SSAnne_2F_Room1_Frlg/scripts.pory"
	lock
# 9 "data/maps/SSAnne_2F_Room1_Frlg/scripts.pory"
# 5 "data/maps/SSAnne_2F_Room1_Frlg/scripts.pory"
# 10 "data/maps/SSAnne_2F_Room1_Frlg/scripts.pory"
	faceplayer
# 11 "data/maps/SSAnne_2F_Room1_Frlg/scripts.pory"
# 6 "data/maps/SSAnne_2F_Room1_Frlg/scripts.pory"
# 12 "data/maps/SSAnne_2F_Room1_Frlg/scripts.pory"
	message SSAnne_2F_Room1_Text_SleepingMonLookedLikeThis
# 13 "data/maps/SSAnne_2F_Room1_Frlg/scripts.pory"
# 7 "data/maps/SSAnne_2F_Room1_Frlg/scripts.pory"
# 14 "data/maps/SSAnne_2F_Room1_Frlg/scripts.pory"
	waitmessage
# 15 "data/maps/SSAnne_2F_Room1_Frlg/scripts.pory"
# 8 "data/maps/SSAnne_2F_Room1_Frlg/scripts.pory"
# 16 "data/maps/SSAnne_2F_Room1_Frlg/scripts.pory"
	setvar VAR_0x8004, SPECIES_SNORLAX
# 17 "data/maps/SSAnne_2F_Room1_Frlg/scripts.pory"
# 9 "data/maps/SSAnne_2F_Room1_Frlg/scripts.pory"
# 18 "data/maps/SSAnne_2F_Room1_Frlg/scripts.pory"
	special SetSeenMon
# 19 "data/maps/SSAnne_2F_Room1_Frlg/scripts.pory"
# 10 "data/maps/SSAnne_2F_Room1_Frlg/scripts.pory"
# 20 "data/maps/SSAnne_2F_Room1_Frlg/scripts.pory"
	showmonpic SPECIES_SNORLAX, 10, 3
# 21 "data/maps/SSAnne_2F_Room1_Frlg/scripts.pory"
# 11 "data/maps/SSAnne_2F_Room1_Frlg/scripts.pory"
# 22 "data/maps/SSAnne_2F_Room1_Frlg/scripts.pory"
	waitbuttonpress
# 23 "data/maps/SSAnne_2F_Room1_Frlg/scripts.pory"
# 12 "data/maps/SSAnne_2F_Room1_Frlg/scripts.pory"
# 24 "data/maps/SSAnne_2F_Room1_Frlg/scripts.pory"
	hidemonpic
# 25 "data/maps/SSAnne_2F_Room1_Frlg/scripts.pory"
# 13 "data/maps/SSAnne_2F_Room1_Frlg/scripts.pory"
# 26 "data/maps/SSAnne_2F_Room1_Frlg/scripts.pory"
	release
# 27 "data/maps/SSAnne_2F_Room1_Frlg/scripts.pory"
	end
# 28 "data/maps/SSAnne_2F_Room1_Frlg/scripts.pory"

# 29 "data/maps/SSAnne_2F_Room1_Frlg/scripts.pory"

# 30 "data/maps/SSAnne_2F_Room1_Frlg/scripts.pory"
SSAnne_2F_Room1_Text_SleepingMonLookedLikeThis::
# 31 "data/maps/SSAnne_2F_Room1_Frlg/scripts.pory"
# 17 "data/maps/SSAnne_2F_Room1_Frlg/scripts.pory"
# 32 "data/maps/SSAnne_2F_Room1_Frlg/scripts.pory"
	.string "I've journeyed far and wide, but in\n"
# 33 "data/maps/SSAnne_2F_Room1_Frlg/scripts.pory"
	.string "all my travels I've never seen\l"
# 34 "data/maps/SSAnne_2F_Room1_Frlg/scripts.pory"
	.string "any POKéMON sleep like this one!\p"
# 35 "data/maps/SSAnne_2F_Room1_Frlg/scripts.pory"
	.string "It was something like this!$"
