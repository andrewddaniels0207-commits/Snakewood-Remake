# 1 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"

# 2 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
LilycoveCity_DepartmentStore_4F_MapScripts::
# 3 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.byte 0
# 4 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"

# 5 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"

# 6 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
LilycoveCity_DepartmentStore_4F_EventScript_Gentleman::
# 7 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
# 4 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
# 8 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_4F_Text_AttackOrDefenseTM, MSGBOX_NPC
# 9 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	end
# 10 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"

# 11 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"

# 12 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
LilycoveCity_DepartmentStore_4F_EventScript_Woman::
# 13 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
# 9 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
# 14 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_4F_Text_FiftyDifferentTMs, MSGBOX_NPC
# 15 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	end
# 16 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"

# 17 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"

# 18 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
LilycoveCity_DepartmentStore_4F_EventScript_Youngster::
# 19 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
# 14 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
# 20 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_4F_Text_PokemonOnlyHaveFourMoves, MSGBOX_NPC
# 21 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	end
# 22 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"

# 23 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"

# 24 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
LilycoveCity_DepartmentStore_4F_EventScript_ClerkLeft::
# 25 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
# 19 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
# 26 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	lock
# 27 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
# 20 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
# 28 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	faceplayer
# 29 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
# 21 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
# 30 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	message gText_HowMayIServeYou
# 31 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
# 22 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
# 32 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	waitmessage
# 33 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
# 23 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
# 34 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	pokemart LilycoveCity_DepartmentStore_4F_Pokemart_AttackTMs
# 35 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
# 24 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
# 36 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 37 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
# 25 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
# 38 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	release
# 39 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	end
# 40 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"

# 41 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"

# 42 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
LilycoveCity_DepartmentStore_4F_Pokemart_AttackTMs::
# 43 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
# 30 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
# 44 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	pokemartlistend
# 45 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	return
# 46 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"

# 47 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"

# 48 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
LilycoveCity_DepartmentStore_4F_EventScript_ClerkRight::
# 49 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
# 34 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
# 50 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	lock
# 51 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
# 35 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
# 52 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	faceplayer
# 53 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
# 36 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
# 54 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	message gText_HowMayIServeYou
# 55 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
# 37 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
# 56 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	waitmessage
# 57 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
# 38 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
# 58 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	pokemart LilycoveCity_DepartmentStore_4F_Pokemart_DefenseTMs
# 59 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
# 39 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
# 60 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 61 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
# 40 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
# 62 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	release
# 63 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	end
# 64 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"

# 65 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"

# 66 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
LilycoveCity_DepartmentStore_4F_Pokemart_DefenseTMs::
# 67 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
# 45 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
# 68 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	pokemartlistend
# 69 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	return
# 70 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"

# 71 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"

# 72 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
LilycoveCity_DepartmentStore_4F_Text_AttackOrDefenseTM::
# 73 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
# 48 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
# 74 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.string "Hmm…\p"
# 75 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.string "An attacking move…\n"
# 76 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.string "Or a defensive move…\p"
# 77 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.string "It's no easy matter to decide which TM\n"
# 78 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.string "moves should be taught to POKéMON…$"
# 79 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"

# 80 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
LilycoveCity_DepartmentStore_4F_Text_FiftyDifferentTMs::
# 81 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
# 56 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
# 82 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.string "There are so many different kinds of\n"
# 83 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.string "TM moves.\p"
# 84 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.string "A catalog I read said there are fifty\n"
# 85 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.string "different kinds.$"
# 86 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"

# 87 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
LilycoveCity_DepartmentStore_4F_Text_PokemonOnlyHaveFourMoves::
# 88 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
# 63 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
# 89 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.string "I'd like to get all the different TMs,\n"
# 90 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.string "but a POKéMON learns only four moves.$"
