# 1 "data/maps/VermilionCity_Mart_Frlg/scripts.pory"

# 2 "data/maps/VermilionCity_Mart_Frlg/scripts.pory"
VermilionCity_Mart_Frlg_MapScripts::
# 3 "data/maps/VermilionCity_Mart_Frlg/scripts.pory"
	.byte 0
# 4 "data/maps/VermilionCity_Mart_Frlg/scripts.pory"

# 5 "data/maps/VermilionCity_Mart_Frlg/scripts.pory"

# 6 "data/maps/VermilionCity_Mart_Frlg/scripts.pory"
VermilionCity_Mart_EventScript_CooltrainerF::
# 7 "data/maps/VermilionCity_Mart_Frlg/scripts.pory"
# 4 "data/maps/VermilionCity_Mart_Frlg/scripts.pory"
# 8 "data/maps/VermilionCity_Mart_Frlg/scripts.pory"
	msgbox VermilionCity_Mart_Text_MonsGoodOrBadDependingOnTrainer, MSGBOX_NPC
# 9 "data/maps/VermilionCity_Mart_Frlg/scripts.pory"
	end
# 10 "data/maps/VermilionCity_Mart_Frlg/scripts.pory"

# 11 "data/maps/VermilionCity_Mart_Frlg/scripts.pory"

# 12 "data/maps/VermilionCity_Mart_Frlg/scripts.pory"
VermilionCity_Mart_EventScript_BaldingMan::
# 13 "data/maps/VermilionCity_Mart_Frlg/scripts.pory"
# 9 "data/maps/VermilionCity_Mart_Frlg/scripts.pory"
# 14 "data/maps/VermilionCity_Mart_Frlg/scripts.pory"
	msgbox VermilionCity_Mart_Text_TeamRocketAreWickedPeople, MSGBOX_NPC
# 15 "data/maps/VermilionCity_Mart_Frlg/scripts.pory"
	end
# 16 "data/maps/VermilionCity_Mart_Frlg/scripts.pory"

# 17 "data/maps/VermilionCity_Mart_Frlg/scripts.pory"

# 18 "data/maps/VermilionCity_Mart_Frlg/scripts.pory"
VermilionCity_Mart_EventScript_Clerk::
# 19 "data/maps/VermilionCity_Mart_Frlg/scripts.pory"
# 14 "data/maps/VermilionCity_Mart_Frlg/scripts.pory"
# 20 "data/maps/VermilionCity_Mart_Frlg/scripts.pory"
	lock
# 21 "data/maps/VermilionCity_Mart_Frlg/scripts.pory"
# 15 "data/maps/VermilionCity_Mart_Frlg/scripts.pory"
# 22 "data/maps/VermilionCity_Mart_Frlg/scripts.pory"
	faceplayer
# 23 "data/maps/VermilionCity_Mart_Frlg/scripts.pory"
# 16 "data/maps/VermilionCity_Mart_Frlg/scripts.pory"
# 24 "data/maps/VermilionCity_Mart_Frlg/scripts.pory"
	message gText_HowMayIServeYou
# 25 "data/maps/VermilionCity_Mart_Frlg/scripts.pory"
# 17 "data/maps/VermilionCity_Mart_Frlg/scripts.pory"
# 26 "data/maps/VermilionCity_Mart_Frlg/scripts.pory"
	waitmessage
# 27 "data/maps/VermilionCity_Mart_Frlg/scripts.pory"
# 18 "data/maps/VermilionCity_Mart_Frlg/scripts.pory"
# 28 "data/maps/VermilionCity_Mart_Frlg/scripts.pory"
	pokemart VermilionCity_Mart_Items
# 29 "data/maps/VermilionCity_Mart_Frlg/scripts.pory"
# 19 "data/maps/VermilionCity_Mart_Frlg/scripts.pory"
# 30 "data/maps/VermilionCity_Mart_Frlg/scripts.pory"
	msgbox gText_PleaseComeAgain
# 31 "data/maps/VermilionCity_Mart_Frlg/scripts.pory"
# 20 "data/maps/VermilionCity_Mart_Frlg/scripts.pory"
# 32 "data/maps/VermilionCity_Mart_Frlg/scripts.pory"
	release
# 33 "data/maps/VermilionCity_Mart_Frlg/scripts.pory"
	end
# 34 "data/maps/VermilionCity_Mart_Frlg/scripts.pory"

# 35 "data/maps/VermilionCity_Mart_Frlg/scripts.pory"

# 36 "data/maps/VermilionCity_Mart_Frlg/scripts.pory"
VermilionCity_Mart_Items::
# 37 "data/maps/VermilionCity_Mart_Frlg/scripts.pory"
# 25 "data/maps/VermilionCity_Mart_Frlg/scripts.pory"
# 38 "data/maps/VermilionCity_Mart_Frlg/scripts.pory"
	release
# 39 "data/maps/VermilionCity_Mart_Frlg/scripts.pory"
	end
# 40 "data/maps/VermilionCity_Mart_Frlg/scripts.pory"

# 41 "data/maps/VermilionCity_Mart_Frlg/scripts.pory"

# 42 "data/maps/VermilionCity_Mart_Frlg/scripts.pory"
VermilionCity_Mart_Text_TeamRocketAreWickedPeople::
# 43 "data/maps/VermilionCity_Mart_Frlg/scripts.pory"
# 29 "data/maps/VermilionCity_Mart_Frlg/scripts.pory"
# 44 "data/maps/VermilionCity_Mart_Frlg/scripts.pory"
	.string "There are wicked people who will\n"
# 45 "data/maps/VermilionCity_Mart_Frlg/scripts.pory"
	.string "use POKéMON for criminal acts.\p"
# 46 "data/maps/VermilionCity_Mart_Frlg/scripts.pory"
	.string "TEAM ROCKET traffics in rare\n"
# 47 "data/maps/VermilionCity_Mart_Frlg/scripts.pory"
	.string "POKéMON, for example.\p"
# 48 "data/maps/VermilionCity_Mart_Frlg/scripts.pory"
	.string "They also abandon POKéMON that\n"
# 49 "data/maps/VermilionCity_Mart_Frlg/scripts.pory"
	.string "they consider unpopular or useless.\p"
# 50 "data/maps/VermilionCity_Mart_Frlg/scripts.pory"
	.string "That's the sort of horrid people\n"
# 51 "data/maps/VermilionCity_Mart_Frlg/scripts.pory"
	.string "they are, TEAM ROCKET.$"
# 52 "data/maps/VermilionCity_Mart_Frlg/scripts.pory"

# 53 "data/maps/VermilionCity_Mart_Frlg/scripts.pory"
VermilionCity_Mart_Text_MonsGoodOrBadDependingOnTrainer::
# 54 "data/maps/VermilionCity_Mart_Frlg/scripts.pory"
# 40 "data/maps/VermilionCity_Mart_Frlg/scripts.pory"
# 55 "data/maps/VermilionCity_Mart_Frlg/scripts.pory"
	.string "I think POKéMON can be good or\n"
# 56 "data/maps/VermilionCity_Mart_Frlg/scripts.pory"
	.string "bad. It depends on the TRAINER.$"
