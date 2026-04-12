# 1 "data/maps/PewterCity_Mart_Frlg/scripts.pory"

# 2 "data/maps/PewterCity_Mart_Frlg/scripts.pory"
PewterCity_Mart_Frlg_MapScripts::
# 3 "data/maps/PewterCity_Mart_Frlg/scripts.pory"
	.byte 0
# 4 "data/maps/PewterCity_Mart_Frlg/scripts.pory"

# 5 "data/maps/PewterCity_Mart_Frlg/scripts.pory"

# 6 "data/maps/PewterCity_Mart_Frlg/scripts.pory"
PewterCity_Mart_EventScript_Youngster::
# 7 "data/maps/PewterCity_Mart_Frlg/scripts.pory"
# 4 "data/maps/PewterCity_Mart_Frlg/scripts.pory"
# 8 "data/maps/PewterCity_Mart_Frlg/scripts.pory"
	msgbox PewterCity_Mart_Text_BoughtWeirdFishFromShadyGuy, MSGBOX_NPC
# 9 "data/maps/PewterCity_Mart_Frlg/scripts.pory"
	end
# 10 "data/maps/PewterCity_Mart_Frlg/scripts.pory"

# 11 "data/maps/PewterCity_Mart_Frlg/scripts.pory"

# 12 "data/maps/PewterCity_Mart_Frlg/scripts.pory"
PewterCity_Mart_EventScript_Boy::
# 13 "data/maps/PewterCity_Mart_Frlg/scripts.pory"
# 9 "data/maps/PewterCity_Mart_Frlg/scripts.pory"
# 14 "data/maps/PewterCity_Mart_Frlg/scripts.pory"
	msgbox PewterCity_Mart_Text_GoodThingsIfRaiseMonsDiligently, MSGBOX_NPC
# 15 "data/maps/PewterCity_Mart_Frlg/scripts.pory"
	end
# 16 "data/maps/PewterCity_Mart_Frlg/scripts.pory"

# 17 "data/maps/PewterCity_Mart_Frlg/scripts.pory"

# 18 "data/maps/PewterCity_Mart_Frlg/scripts.pory"
PewterCity_Mart_EventScript_Clerk::
# 19 "data/maps/PewterCity_Mart_Frlg/scripts.pory"
# 14 "data/maps/PewterCity_Mart_Frlg/scripts.pory"
# 20 "data/maps/PewterCity_Mart_Frlg/scripts.pory"
	lock
# 21 "data/maps/PewterCity_Mart_Frlg/scripts.pory"
# 15 "data/maps/PewterCity_Mart_Frlg/scripts.pory"
# 22 "data/maps/PewterCity_Mart_Frlg/scripts.pory"
	faceplayer
# 23 "data/maps/PewterCity_Mart_Frlg/scripts.pory"
# 16 "data/maps/PewterCity_Mart_Frlg/scripts.pory"
# 24 "data/maps/PewterCity_Mart_Frlg/scripts.pory"
	message gText_HowMayIServeYou
# 25 "data/maps/PewterCity_Mart_Frlg/scripts.pory"
# 17 "data/maps/PewterCity_Mart_Frlg/scripts.pory"
# 26 "data/maps/PewterCity_Mart_Frlg/scripts.pory"
	waitmessage
# 27 "data/maps/PewterCity_Mart_Frlg/scripts.pory"
# 18 "data/maps/PewterCity_Mart_Frlg/scripts.pory"
# 28 "data/maps/PewterCity_Mart_Frlg/scripts.pory"
	pokemart PewterCity_Mart_Items
# 29 "data/maps/PewterCity_Mart_Frlg/scripts.pory"
# 19 "data/maps/PewterCity_Mart_Frlg/scripts.pory"
# 30 "data/maps/PewterCity_Mart_Frlg/scripts.pory"
	msgbox gText_PleaseComeAgain
# 31 "data/maps/PewterCity_Mart_Frlg/scripts.pory"
# 20 "data/maps/PewterCity_Mart_Frlg/scripts.pory"
# 32 "data/maps/PewterCity_Mart_Frlg/scripts.pory"
	release
# 33 "data/maps/PewterCity_Mart_Frlg/scripts.pory"
	end
# 34 "data/maps/PewterCity_Mart_Frlg/scripts.pory"

# 35 "data/maps/PewterCity_Mart_Frlg/scripts.pory"

# 36 "data/maps/PewterCity_Mart_Frlg/scripts.pory"
PewterCity_Mart_Items::
# 37 "data/maps/PewterCity_Mart_Frlg/scripts.pory"
# 25 "data/maps/PewterCity_Mart_Frlg/scripts.pory"
# 38 "data/maps/PewterCity_Mart_Frlg/scripts.pory"
	release
# 39 "data/maps/PewterCity_Mart_Frlg/scripts.pory"
	end
# 40 "data/maps/PewterCity_Mart_Frlg/scripts.pory"

# 41 "data/maps/PewterCity_Mart_Frlg/scripts.pory"

# 42 "data/maps/PewterCity_Mart_Frlg/scripts.pory"
PewterCity_Mart_Text_BoughtWeirdFishFromShadyGuy::
# 43 "data/maps/PewterCity_Mart_Frlg/scripts.pory"
# 29 "data/maps/PewterCity_Mart_Frlg/scripts.pory"
# 44 "data/maps/PewterCity_Mart_Frlg/scripts.pory"
	.string "A shady old guy sucked me into\n"
# 45 "data/maps/PewterCity_Mart_Frlg/scripts.pory"
	.string "buying this weird fish POKéMON!\p"
# 46 "data/maps/PewterCity_Mart_Frlg/scripts.pory"
	.string "It's totally weak and it cost ¥500!$"
# 47 "data/maps/PewterCity_Mart_Frlg/scripts.pory"

# 48 "data/maps/PewterCity_Mart_Frlg/scripts.pory"
PewterCity_Mart_Text_GoodThingsIfRaiseMonsDiligently::
# 49 "data/maps/PewterCity_Mart_Frlg/scripts.pory"
# 35 "data/maps/PewterCity_Mart_Frlg/scripts.pory"
# 50 "data/maps/PewterCity_Mart_Frlg/scripts.pory"
	.string "Good things can happen if you raise\n"
# 51 "data/maps/PewterCity_Mart_Frlg/scripts.pory"
	.string "POKéMON diligently.\p"
# 52 "data/maps/PewterCity_Mart_Frlg/scripts.pory"
	.string "Even the weak ones can surprise\n"
# 53 "data/maps/PewterCity_Mart_Frlg/scripts.pory"
	.string "you if you don't give up on them.$"
