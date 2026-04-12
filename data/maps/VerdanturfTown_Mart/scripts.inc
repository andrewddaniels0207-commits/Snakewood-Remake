# 1 "data/maps/VerdanturfTown_Mart/scripts.pory"

# 2 "data/maps/VerdanturfTown_Mart/scripts.pory"
VerdanturfTown_Mart_MapScripts::
# 3 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.byte 0
# 4 "data/maps/VerdanturfTown_Mart/scripts.pory"

# 5 "data/maps/VerdanturfTown_Mart/scripts.pory"

# 6 "data/maps/VerdanturfTown_Mart/scripts.pory"
VerdanturfTown_Mart_EventScript_Clerk::
# 7 "data/maps/VerdanturfTown_Mart/scripts.pory"
# 4 "data/maps/VerdanturfTown_Mart/scripts.pory"
# 8 "data/maps/VerdanturfTown_Mart/scripts.pory"
	lock
# 9 "data/maps/VerdanturfTown_Mart/scripts.pory"
# 5 "data/maps/VerdanturfTown_Mart/scripts.pory"
# 10 "data/maps/VerdanturfTown_Mart/scripts.pory"
	faceplayer
# 11 "data/maps/VerdanturfTown_Mart/scripts.pory"
# 6 "data/maps/VerdanturfTown_Mart/scripts.pory"
# 12 "data/maps/VerdanturfTown_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 13 "data/maps/VerdanturfTown_Mart/scripts.pory"
# 7 "data/maps/VerdanturfTown_Mart/scripts.pory"
# 14 "data/maps/VerdanturfTown_Mart/scripts.pory"
	waitmessage
# 15 "data/maps/VerdanturfTown_Mart/scripts.pory"
# 8 "data/maps/VerdanturfTown_Mart/scripts.pory"
# 16 "data/maps/VerdanturfTown_Mart/scripts.pory"
	pokemart VerdanturfTown_Mart_Pokemart
# 17 "data/maps/VerdanturfTown_Mart/scripts.pory"
# 9 "data/maps/VerdanturfTown_Mart/scripts.pory"
# 18 "data/maps/VerdanturfTown_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 19 "data/maps/VerdanturfTown_Mart/scripts.pory"
# 10 "data/maps/VerdanturfTown_Mart/scripts.pory"
# 20 "data/maps/VerdanturfTown_Mart/scripts.pory"
	release
# 21 "data/maps/VerdanturfTown_Mart/scripts.pory"
	end
# 22 "data/maps/VerdanturfTown_Mart/scripts.pory"

# 23 "data/maps/VerdanturfTown_Mart/scripts.pory"

# 24 "data/maps/VerdanturfTown_Mart/scripts.pory"
VerdanturfTown_Mart_Pokemart::
# 25 "data/maps/VerdanturfTown_Mart/scripts.pory"
# 15 "data/maps/VerdanturfTown_Mart/scripts.pory"
# 26 "data/maps/VerdanturfTown_Mart/scripts.pory"
	pokemartlistend
# 27 "data/maps/VerdanturfTown_Mart/scripts.pory"
	return
# 28 "data/maps/VerdanturfTown_Mart/scripts.pory"

# 29 "data/maps/VerdanturfTown_Mart/scripts.pory"

# 30 "data/maps/VerdanturfTown_Mart/scripts.pory"
VerdanturfTown_Mart_EventScript_Boy::
# 31 "data/maps/VerdanturfTown_Mart/scripts.pory"
# 19 "data/maps/VerdanturfTown_Mart/scripts.pory"
# 32 "data/maps/VerdanturfTown_Mart/scripts.pory"
	msgbox VerdanturfTown_Mart_Text_XSpecialIsCrucial, MSGBOX_NPC
# 33 "data/maps/VerdanturfTown_Mart/scripts.pory"
	end
# 34 "data/maps/VerdanturfTown_Mart/scripts.pory"

# 35 "data/maps/VerdanturfTown_Mart/scripts.pory"

# 36 "data/maps/VerdanturfTown_Mart/scripts.pory"
VerdanturfTown_Mart_EventScript_ExpertF::
# 37 "data/maps/VerdanturfTown_Mart/scripts.pory"
# 24 "data/maps/VerdanturfTown_Mart/scripts.pory"
# 38 "data/maps/VerdanturfTown_Mart/scripts.pory"
	msgbox VerdanturfTown_Mart_Text_NoStrategyGuidesForBattleTent, MSGBOX_NPC
# 39 "data/maps/VerdanturfTown_Mart/scripts.pory"
	end
# 40 "data/maps/VerdanturfTown_Mart/scripts.pory"

# 41 "data/maps/VerdanturfTown_Mart/scripts.pory"

# 42 "data/maps/VerdanturfTown_Mart/scripts.pory"
VerdanturfTown_Mart_EventScript_Lass::
# 43 "data/maps/VerdanturfTown_Mart/scripts.pory"
# 29 "data/maps/VerdanturfTown_Mart/scripts.pory"
# 44 "data/maps/VerdanturfTown_Mart/scripts.pory"
	msgbox VerdanturfTown_Mart_Text_NestBallOnWeakenedPokemon, MSGBOX_NPC
# 45 "data/maps/VerdanturfTown_Mart/scripts.pory"
	end
# 46 "data/maps/VerdanturfTown_Mart/scripts.pory"

# 47 "data/maps/VerdanturfTown_Mart/scripts.pory"

# 48 "data/maps/VerdanturfTown_Mart/scripts.pory"
VerdanturfTown_Mart_Text_XSpecialIsCrucial::
# 49 "data/maps/VerdanturfTown_Mart/scripts.pory"
# 33 "data/maps/VerdanturfTown_Mart/scripts.pory"
# 50 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.string "For any POKéMON match, X SPECIAL\n"
# 51 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.string "is crucial.\p"
# 52 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.string "It jacks up the power of some moves\n"
# 53 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.string "even though it's only for one battle.$"
# 54 "data/maps/VerdanturfTown_Mart/scripts.pory"

# 55 "data/maps/VerdanturfTown_Mart/scripts.pory"
VerdanturfTown_Mart_Text_NoStrategyGuidesForBattleTent::
# 56 "data/maps/VerdanturfTown_Mart/scripts.pory"
# 40 "data/maps/VerdanturfTown_Mart/scripts.pory"
# 57 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.string "They don't seem to sell any winning\n"
# 58 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.string "strategy guides for the BATTLE TENT…\p"
# 59 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.string "It seems one must rely on one's\n"
# 60 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.string "own wits after all…$"
# 61 "data/maps/VerdanturfTown_Mart/scripts.pory"

# 62 "data/maps/VerdanturfTown_Mart/scripts.pory"
VerdanturfTown_Mart_Text_NestBallOnWeakenedPokemon::
# 63 "data/maps/VerdanturfTown_Mart/scripts.pory"
# 47 "data/maps/VerdanturfTown_Mart/scripts.pory"
# 64 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.string "The NEST BALL works better on\n"
# 65 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.string "weakened POKéMON.\p"
# 66 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.string "VERDANTURF is the only place you can\n"
# 67 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.string "buy it.$"
