FallarborTown_Mart_MapScripts::
	.byte 0


FallarborTown_Mart_EventScript_Clerk::
# 4 "data/maps/FallarborTown_Mart/scripts.pory"
	lock
# 5 "data/maps/FallarborTown_Mart/scripts.pory"
	faceplayer
# 6 "data/maps/FallarborTown_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 7 "data/maps/FallarborTown_Mart/scripts.pory"
	waitmessage
# 8 "data/maps/FallarborTown_Mart/scripts.pory"
	pokemart FallarborTown_Mart_Pokemart
# 9 "data/maps/FallarborTown_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 10 "data/maps/FallarborTown_Mart/scripts.pory"
	release
	end


FallarborTown_Mart_Pokemart::
# 15 "data/maps/FallarborTown_Mart/scripts.pory"
	pokemartlistend
	return


FallarborTown_Mart_EventScript_Woman::
# 19 "data/maps/FallarborTown_Mart/scripts.pory"
	msgbox FallarborTown_Mart_Text_DecidingSkittyEvolve, MSGBOX_NPC
	end


FallarborTown_Mart_EventScript_PokefanM::
# 24 "data/maps/FallarborTown_Mart/scripts.pory"
	msgbox FallarborTown_Mart_Text_SellNuggetIFound, MSGBOX_NPC
	end


FallarborTown_Mart_EventScript_Skitty::
# 29 "data/maps/FallarborTown_Mart/scripts.pory"
	lock
# 30 "data/maps/FallarborTown_Mart/scripts.pory"
	faceplayer
# 31 "data/maps/FallarborTown_Mart/scripts.pory"
	waitse
# 32 "data/maps/FallarborTown_Mart/scripts.pory"
	playmoncry SPECIES_SKITTY, CRY_MODE_NORMAL
# 33 "data/maps/FallarborTown_Mart/scripts.pory"
	msgbox FallarborTown_Mart_Text_Skitty, MSGBOX_DEFAULT
# 34 "data/maps/FallarborTown_Mart/scripts.pory"
	waitmoncry
# 35 "data/maps/FallarborTown_Mart/scripts.pory"
	release
	end


FallarborTown_Mart_Text_DecidingSkittyEvolve::
# 39 "data/maps/FallarborTown_Mart/scripts.pory"
	.string "I'm having a hard time deciding if I\n"
	.string "should make my SKITTY evolve or not.\p"
	.string "I only have to use this MOON STONE,\n"
	.string "but it's so hard to decide…\p"
	.string "If I make it evolve, it will become\n"
	.string "much stronger.\p"
	.string "But it will look so different, too.$"

FallarborTown_Mart_Text_Skitty::
# 49 "data/maps/FallarborTown_Mart/scripts.pory"
	.string "SKITTY: Miyao?$"

FallarborTown_Mart_Text_SellNuggetIFound::
# 53 "data/maps/FallarborTown_Mart/scripts.pory"
	.string "This NUGGET I found here…\n"
	.string "I suppose I'll have to sell it, seeing\l"
	.string "as how it has no other use.$"
