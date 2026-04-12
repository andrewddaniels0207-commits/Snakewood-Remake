VerdanturfTown_Mart_MapScripts::
	.byte 0


VerdanturfTown_Mart_EventScript_Clerk::
# 4 "data/maps/VerdanturfTown_Mart/scripts.pory"
	lock
# 5 "data/maps/VerdanturfTown_Mart/scripts.pory"
	faceplayer
# 6 "data/maps/VerdanturfTown_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 7 "data/maps/VerdanturfTown_Mart/scripts.pory"
	waitmessage
# 8 "data/maps/VerdanturfTown_Mart/scripts.pory"
	pokemart VerdanturfTown_Mart_Pokemart
# 9 "data/maps/VerdanturfTown_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 10 "data/maps/VerdanturfTown_Mart/scripts.pory"
	release
	end


VerdanturfTown_Mart_Pokemart::
# 15 "data/maps/VerdanturfTown_Mart/scripts.pory"
	pokemartlistend
	return


VerdanturfTown_Mart_EventScript_Boy::
# 19 "data/maps/VerdanturfTown_Mart/scripts.pory"
	msgbox VerdanturfTown_Mart_Text_XSpecialIsCrucial, MSGBOX_NPC
	end


VerdanturfTown_Mart_EventScript_ExpertF::
# 24 "data/maps/VerdanturfTown_Mart/scripts.pory"
	msgbox VerdanturfTown_Mart_Text_NoStrategyGuidesForBattleTent, MSGBOX_NPC
	end


VerdanturfTown_Mart_EventScript_Lass::
# 29 "data/maps/VerdanturfTown_Mart/scripts.pory"
	msgbox VerdanturfTown_Mart_Text_NestBallOnWeakenedPokemon, MSGBOX_NPC
	end


VerdanturfTown_Mart_Text_XSpecialIsCrucial::
# 33 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.string "For any POKéMON match, X SPECIAL\n"
	.string "is crucial.\p"
	.string "It jacks up the power of some moves\n"
	.string "even though it's only for one battle.$"

VerdanturfTown_Mart_Text_NoStrategyGuidesForBattleTent::
# 40 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.string "They don't seem to sell any winning\n"
	.string "strategy guides for the BATTLE TENT…\p"
	.string "It seems one must rely on one's\n"
	.string "own wits after all…$"

VerdanturfTown_Mart_Text_NestBallOnWeakenedPokemon::
# 47 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.string "The NEST BALL works better on\n"
	.string "weakened POKéMON.\p"
	.string "VERDANTURF is the only place you can\n"
	.string "buy it.$"
