# 1 "data/maps/RustboroCity_House3/scripts.pory"

# 2 "data/maps/RustboroCity_House3/scripts.pory"
RustboroCity_House3_MapScripts::
# 3 "data/maps/RustboroCity_House3/scripts.pory"
	.byte 0
# 4 "data/maps/RustboroCity_House3/scripts.pory"

# 5 "data/maps/RustboroCity_House3/scripts.pory"

# 6 "data/maps/RustboroCity_House3/scripts.pory"
RustboroCity_House3_EventScript_OldMan::
# 7 "data/maps/RustboroCity_House3/scripts.pory"
# 4 "data/maps/RustboroCity_House3/scripts.pory"
# 8 "data/maps/RustboroCity_House3/scripts.pory"
	msgbox RustboroCity_House3_Text_IGivePerfectlySuitedNicknames, MSGBOX_NPC
# 9 "data/maps/RustboroCity_House3/scripts.pory"
	end
# 10 "data/maps/RustboroCity_House3/scripts.pory"

# 11 "data/maps/RustboroCity_House3/scripts.pory"

# 12 "data/maps/RustboroCity_House3/scripts.pory"
RustboroCity_House3_EventScript_OldWoman::
# 13 "data/maps/RustboroCity_House3/scripts.pory"
# 9 "data/maps/RustboroCity_House3/scripts.pory"
# 14 "data/maps/RustboroCity_House3/scripts.pory"
	msgbox RustboroCity_House3_Text_NamingPikachuPekachu, MSGBOX_NPC
# 15 "data/maps/RustboroCity_House3/scripts.pory"
	end
# 16 "data/maps/RustboroCity_House3/scripts.pory"

# 17 "data/maps/RustboroCity_House3/scripts.pory"

# 18 "data/maps/RustboroCity_House3/scripts.pory"
RustboroCity_House3_EventScript_Pekachu::
# 19 "data/maps/RustboroCity_House3/scripts.pory"
# 14 "data/maps/RustboroCity_House3/scripts.pory"
# 20 "data/maps/RustboroCity_House3/scripts.pory"
	lock
# 21 "data/maps/RustboroCity_House3/scripts.pory"
# 15 "data/maps/RustboroCity_House3/scripts.pory"
# 22 "data/maps/RustboroCity_House3/scripts.pory"
	faceplayer
# 23 "data/maps/RustboroCity_House3/scripts.pory"
# 16 "data/maps/RustboroCity_House3/scripts.pory"
# 24 "data/maps/RustboroCity_House3/scripts.pory"
	waitse
# 25 "data/maps/RustboroCity_House3/scripts.pory"
# 17 "data/maps/RustboroCity_House3/scripts.pory"
# 26 "data/maps/RustboroCity_House3/scripts.pory"
	playmoncry SPECIES_PIKACHU, CRY_MODE_NORMAL
# 27 "data/maps/RustboroCity_House3/scripts.pory"
# 18 "data/maps/RustboroCity_House3/scripts.pory"
# 28 "data/maps/RustboroCity_House3/scripts.pory"
	msgbox RustboroCity_House3_Text_Pekachu, MSGBOX_DEFAULT
# 29 "data/maps/RustboroCity_House3/scripts.pory"
# 19 "data/maps/RustboroCity_House3/scripts.pory"
# 30 "data/maps/RustboroCity_House3/scripts.pory"
	waitmoncry
# 31 "data/maps/RustboroCity_House3/scripts.pory"
# 20 "data/maps/RustboroCity_House3/scripts.pory"
# 32 "data/maps/RustboroCity_House3/scripts.pory"
	release
# 33 "data/maps/RustboroCity_House3/scripts.pory"
	end
# 34 "data/maps/RustboroCity_House3/scripts.pory"

# 35 "data/maps/RustboroCity_House3/scripts.pory"

# 36 "data/maps/RustboroCity_House3/scripts.pory"
RustboroCity_House3_Text_IGivePerfectlySuitedNicknames::
# 37 "data/maps/RustboroCity_House3/scripts.pory"
# 24 "data/maps/RustboroCity_House3/scripts.pory"
# 38 "data/maps/RustboroCity_House3/scripts.pory"
	.string "For my own POKéMON, I give them\n"
# 39 "data/maps/RustboroCity_House3/scripts.pory"
	.string "perfectly suited nicknames!\p"
# 40 "data/maps/RustboroCity_House3/scripts.pory"
	.string "It's my expression of, uh…\n"
# 41 "data/maps/RustboroCity_House3/scripts.pory"
	.string "originality, yes, that's it!$"
# 42 "data/maps/RustboroCity_House3/scripts.pory"

# 43 "data/maps/RustboroCity_House3/scripts.pory"
RustboroCity_House3_Text_NamingPikachuPekachu::
# 44 "data/maps/RustboroCity_House3/scripts.pory"
# 31 "data/maps/RustboroCity_House3/scripts.pory"
# 45 "data/maps/RustboroCity_House3/scripts.pory"
	.string "But giving the name PEKACHU to\n"
# 46 "data/maps/RustboroCity_House3/scripts.pory"
	.string "a PIKACHU? It seems pointless.\p"
# 47 "data/maps/RustboroCity_House3/scripts.pory"
	.string "I suppose it is good to use a name\n"
# 48 "data/maps/RustboroCity_House3/scripts.pory"
	.string "that's easy to understand, but…$"
# 49 "data/maps/RustboroCity_House3/scripts.pory"

# 50 "data/maps/RustboroCity_House3/scripts.pory"
RustboroCity_House3_Text_Pekachu::
# 51 "data/maps/RustboroCity_House3/scripts.pory"
# 38 "data/maps/RustboroCity_House3/scripts.pory"
# 52 "data/maps/RustboroCity_House3/scripts.pory"
	.string "PEKACHU: Peka!$"
