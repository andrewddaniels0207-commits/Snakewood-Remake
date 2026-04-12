# 1 "data/maps/FallarborTown_Mart/scripts.pory"

# 2 "data/maps/FallarborTown_Mart/scripts.pory"
FallarborTown_Mart_MapScripts::
# 3 "data/maps/FallarborTown_Mart/scripts.pory"
	.byte 0
# 4 "data/maps/FallarborTown_Mart/scripts.pory"

# 5 "data/maps/FallarborTown_Mart/scripts.pory"

# 6 "data/maps/FallarborTown_Mart/scripts.pory"
FallarborTown_Mart_EventScript_Clerk::
# 7 "data/maps/FallarborTown_Mart/scripts.pory"
# 4 "data/maps/FallarborTown_Mart/scripts.pory"
# 8 "data/maps/FallarborTown_Mart/scripts.pory"
	lock
# 9 "data/maps/FallarborTown_Mart/scripts.pory"
# 5 "data/maps/FallarborTown_Mart/scripts.pory"
# 10 "data/maps/FallarborTown_Mart/scripts.pory"
	faceplayer
# 11 "data/maps/FallarborTown_Mart/scripts.pory"
# 6 "data/maps/FallarborTown_Mart/scripts.pory"
# 12 "data/maps/FallarborTown_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 13 "data/maps/FallarborTown_Mart/scripts.pory"
# 7 "data/maps/FallarborTown_Mart/scripts.pory"
# 14 "data/maps/FallarborTown_Mart/scripts.pory"
	waitmessage
# 15 "data/maps/FallarborTown_Mart/scripts.pory"
# 8 "data/maps/FallarborTown_Mart/scripts.pory"
# 16 "data/maps/FallarborTown_Mart/scripts.pory"
	pokemart FallarborTown_Mart_Pokemart
# 17 "data/maps/FallarborTown_Mart/scripts.pory"
# 9 "data/maps/FallarborTown_Mart/scripts.pory"
# 18 "data/maps/FallarborTown_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 19 "data/maps/FallarborTown_Mart/scripts.pory"
# 10 "data/maps/FallarborTown_Mart/scripts.pory"
# 20 "data/maps/FallarborTown_Mart/scripts.pory"
	release
# 21 "data/maps/FallarborTown_Mart/scripts.pory"
	end
# 22 "data/maps/FallarborTown_Mart/scripts.pory"

# 23 "data/maps/FallarborTown_Mart/scripts.pory"

# 24 "data/maps/FallarborTown_Mart/scripts.pory"
FallarborTown_Mart_Pokemart::
# 25 "data/maps/FallarborTown_Mart/scripts.pory"
# 15 "data/maps/FallarborTown_Mart/scripts.pory"
# 26 "data/maps/FallarborTown_Mart/scripts.pory"
	pokemartlistend
# 27 "data/maps/FallarborTown_Mart/scripts.pory"
	return
# 28 "data/maps/FallarborTown_Mart/scripts.pory"

# 29 "data/maps/FallarborTown_Mart/scripts.pory"

# 30 "data/maps/FallarborTown_Mart/scripts.pory"
FallarborTown_Mart_EventScript_Woman::
# 31 "data/maps/FallarborTown_Mart/scripts.pory"
# 19 "data/maps/FallarborTown_Mart/scripts.pory"
# 32 "data/maps/FallarborTown_Mart/scripts.pory"
	msgbox FallarborTown_Mart_Text_DecidingSkittyEvolve, MSGBOX_NPC
# 33 "data/maps/FallarborTown_Mart/scripts.pory"
	end
# 34 "data/maps/FallarborTown_Mart/scripts.pory"

# 35 "data/maps/FallarborTown_Mart/scripts.pory"

# 36 "data/maps/FallarborTown_Mart/scripts.pory"
FallarborTown_Mart_EventScript_PokefanM::
# 37 "data/maps/FallarborTown_Mart/scripts.pory"
# 24 "data/maps/FallarborTown_Mart/scripts.pory"
# 38 "data/maps/FallarborTown_Mart/scripts.pory"
	msgbox FallarborTown_Mart_Text_SellNuggetIFound, MSGBOX_NPC
# 39 "data/maps/FallarborTown_Mart/scripts.pory"
	end
# 40 "data/maps/FallarborTown_Mart/scripts.pory"

# 41 "data/maps/FallarborTown_Mart/scripts.pory"

# 42 "data/maps/FallarborTown_Mart/scripts.pory"
FallarborTown_Mart_EventScript_Skitty::
# 43 "data/maps/FallarborTown_Mart/scripts.pory"
# 29 "data/maps/FallarborTown_Mart/scripts.pory"
# 44 "data/maps/FallarborTown_Mart/scripts.pory"
	lock
# 45 "data/maps/FallarborTown_Mart/scripts.pory"
# 30 "data/maps/FallarborTown_Mart/scripts.pory"
# 46 "data/maps/FallarborTown_Mart/scripts.pory"
	faceplayer
# 47 "data/maps/FallarborTown_Mart/scripts.pory"
# 31 "data/maps/FallarborTown_Mart/scripts.pory"
# 48 "data/maps/FallarborTown_Mart/scripts.pory"
	waitse
# 49 "data/maps/FallarborTown_Mart/scripts.pory"
# 32 "data/maps/FallarborTown_Mart/scripts.pory"
# 50 "data/maps/FallarborTown_Mart/scripts.pory"
	playmoncry SPECIES_SKITTY, CRY_MODE_NORMAL
# 51 "data/maps/FallarborTown_Mart/scripts.pory"
# 33 "data/maps/FallarborTown_Mart/scripts.pory"
# 52 "data/maps/FallarborTown_Mart/scripts.pory"
	msgbox FallarborTown_Mart_Text_Skitty, MSGBOX_DEFAULT
# 53 "data/maps/FallarborTown_Mart/scripts.pory"
# 34 "data/maps/FallarborTown_Mart/scripts.pory"
# 54 "data/maps/FallarborTown_Mart/scripts.pory"
	waitmoncry
# 55 "data/maps/FallarborTown_Mart/scripts.pory"
# 35 "data/maps/FallarborTown_Mart/scripts.pory"
# 56 "data/maps/FallarborTown_Mart/scripts.pory"
	release
# 57 "data/maps/FallarborTown_Mart/scripts.pory"
	end
# 58 "data/maps/FallarborTown_Mart/scripts.pory"

# 59 "data/maps/FallarborTown_Mart/scripts.pory"

# 60 "data/maps/FallarborTown_Mart/scripts.pory"
FallarborTown_Mart_Text_DecidingSkittyEvolve::
# 61 "data/maps/FallarborTown_Mart/scripts.pory"
# 39 "data/maps/FallarborTown_Mart/scripts.pory"
# 62 "data/maps/FallarborTown_Mart/scripts.pory"
	.string "I'm having a hard time deciding if I\n"
# 63 "data/maps/FallarborTown_Mart/scripts.pory"
	.string "should make my SKITTY evolve or not.\p"
# 64 "data/maps/FallarborTown_Mart/scripts.pory"
	.string "I only have to use this MOON STONE,\n"
# 65 "data/maps/FallarborTown_Mart/scripts.pory"
	.string "but it's so hard to decide…\p"
# 66 "data/maps/FallarborTown_Mart/scripts.pory"
	.string "If I make it evolve, it will become\n"
# 67 "data/maps/FallarborTown_Mart/scripts.pory"
	.string "much stronger.\p"
# 68 "data/maps/FallarborTown_Mart/scripts.pory"
	.string "But it will look so different, too.$"
# 69 "data/maps/FallarborTown_Mart/scripts.pory"

# 70 "data/maps/FallarborTown_Mart/scripts.pory"
FallarborTown_Mart_Text_Skitty::
# 71 "data/maps/FallarborTown_Mart/scripts.pory"
# 49 "data/maps/FallarborTown_Mart/scripts.pory"
# 72 "data/maps/FallarborTown_Mart/scripts.pory"
	.string "SKITTY: Miyao?$"
# 73 "data/maps/FallarborTown_Mart/scripts.pory"

# 74 "data/maps/FallarborTown_Mart/scripts.pory"
FallarborTown_Mart_Text_SellNuggetIFound::
# 75 "data/maps/FallarborTown_Mart/scripts.pory"
# 53 "data/maps/FallarborTown_Mart/scripts.pory"
# 76 "data/maps/FallarborTown_Mart/scripts.pory"
	.string "This NUGGET I found here…\n"
# 77 "data/maps/FallarborTown_Mart/scripts.pory"
	.string "I suppose I'll have to sell it, seeing\l"
# 78 "data/maps/FallarborTown_Mart/scripts.pory"
	.string "as how it has no other use.$"
