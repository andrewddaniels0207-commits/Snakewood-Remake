SSAnne_2F_Room1_Frlg_MapScripts::
	.byte 0


SSAnne_2F_Room1_EventScript_Gentleman::
# 4 "data/maps/SSAnne_2F_Room1_Frlg/scripts.pory"
	lock
# 5 "data/maps/SSAnne_2F_Room1_Frlg/scripts.pory"
	faceplayer
# 6 "data/maps/SSAnne_2F_Room1_Frlg/scripts.pory"
	message SSAnne_2F_Room1_Text_SleepingMonLookedLikeThis
# 7 "data/maps/SSAnne_2F_Room1_Frlg/scripts.pory"
	waitmessage
# 8 "data/maps/SSAnne_2F_Room1_Frlg/scripts.pory"
	setvar VAR_0x8004, SPECIES_SNORLAX
# 9 "data/maps/SSAnne_2F_Room1_Frlg/scripts.pory"
	special SetSeenMon
# 10 "data/maps/SSAnne_2F_Room1_Frlg/scripts.pory"
	showmonpic SPECIES_SNORLAX, 10, 3
# 11 "data/maps/SSAnne_2F_Room1_Frlg/scripts.pory"
	waitbuttonpress
# 12 "data/maps/SSAnne_2F_Room1_Frlg/scripts.pory"
	hidemonpic
# 13 "data/maps/SSAnne_2F_Room1_Frlg/scripts.pory"
	release
	end


SSAnne_2F_Room1_Text_SleepingMonLookedLikeThis::
# 17 "data/maps/SSAnne_2F_Room1_Frlg/scripts.pory"
	.string "I've journeyed far and wide, but in\n"
	.string "all my travels I've never seen\l"
	.string "any POKéMON sleep like this one!\p"
	.string "It was something like this!$"
