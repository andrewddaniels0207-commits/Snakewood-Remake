# 1 "data/maps/SSTidalLowerDeck/scripts.pory"

# 2 "data/maps/SSTidalLowerDeck/scripts.pory"
SSTidalLowerDeck_MapScripts::
# 3 "data/maps/SSTidalLowerDeck/scripts.pory"
	.byte 0
# 4 "data/maps/SSTidalLowerDeck/scripts.pory"

# 5 "data/maps/SSTidalLowerDeck/scripts.pory"

# 6 "data/maps/SSTidalLowerDeck/scripts.pory"
SSTidalLowerDeck_EventScript_Phillip::
# 7 "data/maps/SSTidalLowerDeck/scripts.pory"
# 4 "data/maps/SSTidalLowerDeck/scripts.pory"
# 8 "data/maps/SSTidalLowerDeck/scripts.pory"
	trainerbattle_single TRAINER_PHILLIP, SSTidalLowerDeck_Text_PhillipIntro, SSTidalLowerDeck_Text_PhillipDefeat
# 9 "data/maps/SSTidalLowerDeck/scripts.pory"
# 5 "data/maps/SSTidalLowerDeck/scripts.pory"
# 10 "data/maps/SSTidalLowerDeck/scripts.pory"
	msgbox SSTidalLowerDeck_Text_PhillipPostBattle, MSGBOX_AUTOCLOSE
# 11 "data/maps/SSTidalLowerDeck/scripts.pory"
	end
# 12 "data/maps/SSTidalLowerDeck/scripts.pory"

# 13 "data/maps/SSTidalLowerDeck/scripts.pory"

# 14 "data/maps/SSTidalLowerDeck/scripts.pory"
SSTidalLowerDeck_EventScript_Leonard::
# 15 "data/maps/SSTidalLowerDeck/scripts.pory"
# 10 "data/maps/SSTidalLowerDeck/scripts.pory"
# 16 "data/maps/SSTidalLowerDeck/scripts.pory"
	trainerbattle_single TRAINER_LEONARD, SSTidalLowerDeck_Text_LeonardIntro, SSTidalLowerDeck_Text_LeonardDefeat
# 17 "data/maps/SSTidalLowerDeck/scripts.pory"
# 11 "data/maps/SSTidalLowerDeck/scripts.pory"
# 18 "data/maps/SSTidalLowerDeck/scripts.pory"
	msgbox SSTidalLowerDeck_Text_LeonardPostBattle, MSGBOX_AUTOCLOSE
# 19 "data/maps/SSTidalLowerDeck/scripts.pory"
	end
# 20 "data/maps/SSTidalLowerDeck/scripts.pory"

# 21 "data/maps/SSTidalLowerDeck/scripts.pory"

# 22 "data/maps/SSTidalLowerDeck/scripts.pory"
SSTidalLowerDeck_Text_PhillipIntro::
# 23 "data/maps/SSTidalLowerDeck/scripts.pory"
# 15 "data/maps/SSTidalLowerDeck/scripts.pory"
# 24 "data/maps/SSTidalLowerDeck/scripts.pory"
	.string "Arrrgh! I'm fed up and dog-tired of\n"
# 25 "data/maps/SSTidalLowerDeck/scripts.pory"
	.string "cleaning this huge place!\p"
# 26 "data/maps/SSTidalLowerDeck/scripts.pory"
	.string "Let's have a quick battle!$"
# 27 "data/maps/SSTidalLowerDeck/scripts.pory"

# 28 "data/maps/SSTidalLowerDeck/scripts.pory"
SSTidalLowerDeck_Text_PhillipDefeat::
# 29 "data/maps/SSTidalLowerDeck/scripts.pory"
# 21 "data/maps/SSTidalLowerDeck/scripts.pory"
# 30 "data/maps/SSTidalLowerDeck/scripts.pory"
	.string "Little bro, I lost!$"
# 31 "data/maps/SSTidalLowerDeck/scripts.pory"

# 32 "data/maps/SSTidalLowerDeck/scripts.pory"
SSTidalLowerDeck_Text_PhillipPostBattle::
# 33 "data/maps/SSTidalLowerDeck/scripts.pory"
# 25 "data/maps/SSTidalLowerDeck/scripts.pory"
# 34 "data/maps/SSTidalLowerDeck/scripts.pory"
	.string "We're the CLEANUP BROTHERS!\p"
# 35 "data/maps/SSTidalLowerDeck/scripts.pory"
	.string "The old one dumps the detergent,\n"
# 36 "data/maps/SSTidalLowerDeck/scripts.pory"
	.string "and the young one does the scrubbing!$"
# 37 "data/maps/SSTidalLowerDeck/scripts.pory"

# 38 "data/maps/SSTidalLowerDeck/scripts.pory"
SSTidalLowerDeck_Text_LeonardIntro::
# 39 "data/maps/SSTidalLowerDeck/scripts.pory"
# 31 "data/maps/SSTidalLowerDeck/scripts.pory"
# 40 "data/maps/SSTidalLowerDeck/scripts.pory"
	.string "This is the bottom of the ship's hull.\n"
# 41 "data/maps/SSTidalLowerDeck/scripts.pory"
	.string "There's plenty of room.\l"
# 42 "data/maps/SSTidalLowerDeck/scripts.pory"
	.string "It'll be alright for a POKéMON battle.$"
# 43 "data/maps/SSTidalLowerDeck/scripts.pory"

# 44 "data/maps/SSTidalLowerDeck/scripts.pory"
SSTidalLowerDeck_Text_LeonardDefeat::
# 45 "data/maps/SSTidalLowerDeck/scripts.pory"
# 37 "data/maps/SSTidalLowerDeck/scripts.pory"
# 46 "data/maps/SSTidalLowerDeck/scripts.pory"
	.string "Big bro, I lost!$"
# 47 "data/maps/SSTidalLowerDeck/scripts.pory"

# 48 "data/maps/SSTidalLowerDeck/scripts.pory"
SSTidalLowerDeck_Text_LeonardPostBattle::
# 49 "data/maps/SSTidalLowerDeck/scripts.pory"
# 41 "data/maps/SSTidalLowerDeck/scripts.pory"
# 50 "data/maps/SSTidalLowerDeck/scripts.pory"
	.string "We're the CLEANUP BROTHERS!\p"
# 51 "data/maps/SSTidalLowerDeck/scripts.pory"
	.string "The old one dumps the detergent,\n"
# 52 "data/maps/SSTidalLowerDeck/scripts.pory"
	.string "and the young one does the scrubbing!$"
