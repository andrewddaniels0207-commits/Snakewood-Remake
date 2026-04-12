# 1 "data/maps/LavenderTown_Mart_Frlg/scripts.pory"

# 2 "data/maps/LavenderTown_Mart_Frlg/scripts.pory"
LavenderTown_Mart_Frlg_MapScripts::
# 3 "data/maps/LavenderTown_Mart_Frlg/scripts.pory"
	.byte 0
# 4 "data/maps/LavenderTown_Mart_Frlg/scripts.pory"

# 5 "data/maps/LavenderTown_Mart_Frlg/scripts.pory"

# 6 "data/maps/LavenderTown_Mart_Frlg/scripts.pory"
LavenderTown_Mart_EventScript_BaldingMan::
# 7 "data/maps/LavenderTown_Mart_Frlg/scripts.pory"
# 4 "data/maps/LavenderTown_Mart_Frlg/scripts.pory"
# 8 "data/maps/LavenderTown_Mart_Frlg/scripts.pory"
	msgbox LavenderTown_Mart_Text_SearchingForStatRaiseItems, MSGBOX_NPC
# 9 "data/maps/LavenderTown_Mart_Frlg/scripts.pory"
	end
# 10 "data/maps/LavenderTown_Mart_Frlg/scripts.pory"

# 11 "data/maps/LavenderTown_Mart_Frlg/scripts.pory"

# 12 "data/maps/LavenderTown_Mart_Frlg/scripts.pory"
LavenderTown_Mart_EventScript_Rocker::
# 13 "data/maps/LavenderTown_Mart_Frlg/scripts.pory"
# 9 "data/maps/LavenderTown_Mart_Frlg/scripts.pory"
# 14 "data/maps/LavenderTown_Mart_Frlg/scripts.pory"
	msgbox LavenderTown_Mart_Text_DidYouBuyRevives, MSGBOX_NPC
# 15 "data/maps/LavenderTown_Mart_Frlg/scripts.pory"
	end
# 16 "data/maps/LavenderTown_Mart_Frlg/scripts.pory"

# 17 "data/maps/LavenderTown_Mart_Frlg/scripts.pory"

# 18 "data/maps/LavenderTown_Mart_Frlg/scripts.pory"
LavenderTown_Mart_EventScript_Youngster::
# 19 "data/maps/LavenderTown_Mart_Frlg/scripts.pory"
# 14 "data/maps/LavenderTown_Mart_Frlg/scripts.pory"
# 20 "data/maps/LavenderTown_Mart_Frlg/scripts.pory"
	msgbox LavenderTown_Mart_Text_TrainerDuosCanChallengeYou, MSGBOX_NPC
# 21 "data/maps/LavenderTown_Mart_Frlg/scripts.pory"
	end
# 22 "data/maps/LavenderTown_Mart_Frlg/scripts.pory"

# 23 "data/maps/LavenderTown_Mart_Frlg/scripts.pory"

# 24 "data/maps/LavenderTown_Mart_Frlg/scripts.pory"
LavenderTown_Mart_EventScript_Clerk::
# 25 "data/maps/LavenderTown_Mart_Frlg/scripts.pory"
# 19 "data/maps/LavenderTown_Mart_Frlg/scripts.pory"
# 26 "data/maps/LavenderTown_Mart_Frlg/scripts.pory"
	lock
# 27 "data/maps/LavenderTown_Mart_Frlg/scripts.pory"
# 20 "data/maps/LavenderTown_Mart_Frlg/scripts.pory"
# 28 "data/maps/LavenderTown_Mart_Frlg/scripts.pory"
	faceplayer
# 29 "data/maps/LavenderTown_Mart_Frlg/scripts.pory"
# 21 "data/maps/LavenderTown_Mart_Frlg/scripts.pory"
# 30 "data/maps/LavenderTown_Mart_Frlg/scripts.pory"
	message gText_HowMayIServeYou
# 31 "data/maps/LavenderTown_Mart_Frlg/scripts.pory"
# 22 "data/maps/LavenderTown_Mart_Frlg/scripts.pory"
# 32 "data/maps/LavenderTown_Mart_Frlg/scripts.pory"
	waitmessage
# 33 "data/maps/LavenderTown_Mart_Frlg/scripts.pory"
# 23 "data/maps/LavenderTown_Mart_Frlg/scripts.pory"
# 34 "data/maps/LavenderTown_Mart_Frlg/scripts.pory"
	pokemart LavenderTown_Mart_Items
# 35 "data/maps/LavenderTown_Mart_Frlg/scripts.pory"
# 24 "data/maps/LavenderTown_Mart_Frlg/scripts.pory"
# 36 "data/maps/LavenderTown_Mart_Frlg/scripts.pory"
	msgbox gText_PleaseComeAgain
# 37 "data/maps/LavenderTown_Mart_Frlg/scripts.pory"
# 25 "data/maps/LavenderTown_Mart_Frlg/scripts.pory"
# 38 "data/maps/LavenderTown_Mart_Frlg/scripts.pory"
	release
# 39 "data/maps/LavenderTown_Mart_Frlg/scripts.pory"
	end
# 40 "data/maps/LavenderTown_Mart_Frlg/scripts.pory"

# 41 "data/maps/LavenderTown_Mart_Frlg/scripts.pory"

# 42 "data/maps/LavenderTown_Mart_Frlg/scripts.pory"
LavenderTown_Mart_Items::
# 43 "data/maps/LavenderTown_Mart_Frlg/scripts.pory"
# 30 "data/maps/LavenderTown_Mart_Frlg/scripts.pory"
# 44 "data/maps/LavenderTown_Mart_Frlg/scripts.pory"
	release
# 45 "data/maps/LavenderTown_Mart_Frlg/scripts.pory"
	end
# 46 "data/maps/LavenderTown_Mart_Frlg/scripts.pory"

# 47 "data/maps/LavenderTown_Mart_Frlg/scripts.pory"

# 48 "data/maps/LavenderTown_Mart_Frlg/scripts.pory"
LavenderTown_Mart_Text_SearchingForStatRaiseItems::
# 49 "data/maps/LavenderTown_Mart_Frlg/scripts.pory"
# 34 "data/maps/LavenderTown_Mart_Frlg/scripts.pory"
# 50 "data/maps/LavenderTown_Mart_Frlg/scripts.pory"
	.string "I'm searching for items that raise\n"
# 51 "data/maps/LavenderTown_Mart_Frlg/scripts.pory"
	.string "the stats of POKéMON.\p"
# 52 "data/maps/LavenderTown_Mart_Frlg/scripts.pory"
	.string "They're effective over the course\n"
# 53 "data/maps/LavenderTown_Mart_Frlg/scripts.pory"
	.string "of a single battle.\p"
# 54 "data/maps/LavenderTown_Mart_Frlg/scripts.pory"
	.string "X ATTACK, X DEFEND, X SPEED, \n"
# 55 "data/maps/LavenderTown_Mart_Frlg/scripts.pory"
	.string "and X SPECIAL are what I'm after.\p"
# 56 "data/maps/LavenderTown_Mart_Frlg/scripts.pory"
	.string "Do you know where I can get them?$"
# 57 "data/maps/LavenderTown_Mart_Frlg/scripts.pory"

# 58 "data/maps/LavenderTown_Mart_Frlg/scripts.pory"
LavenderTown_Mart_Text_DidYouBuyRevives::
# 59 "data/maps/LavenderTown_Mart_Frlg/scripts.pory"
# 44 "data/maps/LavenderTown_Mart_Frlg/scripts.pory"
# 60 "data/maps/LavenderTown_Mart_Frlg/scripts.pory"
	.string "Did you buy some REVIVES?\n"
# 61 "data/maps/LavenderTown_Mart_Frlg/scripts.pory"
	.string "They revive any fainted POKéMON!$"
# 62 "data/maps/LavenderTown_Mart_Frlg/scripts.pory"

# 63 "data/maps/LavenderTown_Mart_Frlg/scripts.pory"
LavenderTown_Mart_Text_TrainerDuosCanChallengeYou::
# 64 "data/maps/LavenderTown_Mart_Frlg/scripts.pory"
# 49 "data/maps/LavenderTown_Mart_Frlg/scripts.pory"
# 65 "data/maps/LavenderTown_Mart_Frlg/scripts.pory"
	.string "Sometimes, a TRAINER duo will\n"
# 66 "data/maps/LavenderTown_Mart_Frlg/scripts.pory"
	.string "challenge you with two POKéMON\l"
# 67 "data/maps/LavenderTown_Mart_Frlg/scripts.pory"
	.string "at the same time.\p"
# 68 "data/maps/LavenderTown_Mart_Frlg/scripts.pory"
	.string "If that happens, you have to send\n"
# 69 "data/maps/LavenderTown_Mart_Frlg/scripts.pory"
	.string "out two POKéMON to battle, too.$"
# 70 "data/maps/LavenderTown_Mart_Frlg/scripts.pory"

# 71 "data/maps/LavenderTown_Mart_Frlg/scripts.pory"
LavenderTown_Mart_Text_SoldNuggetFromMountainsFor5000::
# 72 "data/maps/LavenderTown_Mart_Frlg/scripts.pory"
# 57 "data/maps/LavenderTown_Mart_Frlg/scripts.pory"
# 73 "data/maps/LavenderTown_Mart_Frlg/scripts.pory"
	.string "この　あいだ　やまおくで\n"
# 74 "data/maps/LavenderTown_Mart_Frlg/scripts.pory"
	.string "きんのたまを　ひろい　ましてね！\p"
# 75 "data/maps/LavenderTown_Mart_Frlg/scripts.pory"
	.string "つかえない　しなもの　ですが\n"
# 76 "data/maps/LavenderTown_Mart_Frlg/scripts.pory"
	.string "うったら　なんと　5000¥でした$"
