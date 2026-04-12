# 1 "data/maps/OldaleTown_Mart/scripts.pory"

# 2 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_Mart_MapScripts::
# 3 "data/maps/OldaleTown_Mart/scripts.pory"
	.byte 0
# 4 "data/maps/OldaleTown_Mart/scripts.pory"

# 5 "data/maps/OldaleTown_Mart/scripts.pory"

# 6 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_Mart_EventScript_Clerk::
# 7 "data/maps/OldaleTown_Mart/scripts.pory"
# 4 "data/maps/OldaleTown_Mart/scripts.pory"
# 8 "data/maps/OldaleTown_Mart/scripts.pory"
	lock
# 9 "data/maps/OldaleTown_Mart/scripts.pory"
# 5 "data/maps/OldaleTown_Mart/scripts.pory"
# 10 "data/maps/OldaleTown_Mart/scripts.pory"
	faceplayer
# 11 "data/maps/OldaleTown_Mart/scripts.pory"
# 6 "data/maps/OldaleTown_Mart/scripts.pory"
# 12 "data/maps/OldaleTown_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 13 "data/maps/OldaleTown_Mart/scripts.pory"
# 7 "data/maps/OldaleTown_Mart/scripts.pory"
# 14 "data/maps/OldaleTown_Mart/scripts.pory"
	waitmessage
# 15 "data/maps/OldaleTown_Mart/scripts.pory"
# 8 "data/maps/OldaleTown_Mart/scripts.pory"
# 16 "data/maps/OldaleTown_Mart/scripts.pory"
	goto_if_set FLAG_ADVENTURE_STARTED, OldaleTown_Mart_EventScript_Clerk_2
# 17 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_Mart_EventScript_Clerk_1:
# 18 "data/maps/OldaleTown_Mart/scripts.pory"
# 11 "data/maps/OldaleTown_Mart/scripts.pory"
# 19 "data/maps/OldaleTown_Mart/scripts.pory"
	pokemart OldaleTown_Mart_Pokemart_Basic
# 20 "data/maps/OldaleTown_Mart/scripts.pory"
# 12 "data/maps/OldaleTown_Mart/scripts.pory"
# 21 "data/maps/OldaleTown_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 22 "data/maps/OldaleTown_Mart/scripts.pory"
# 13 "data/maps/OldaleTown_Mart/scripts.pory"
# 23 "data/maps/OldaleTown_Mart/scripts.pory"
	release
# 24 "data/maps/OldaleTown_Mart/scripts.pory"
	end
# 25 "data/maps/OldaleTown_Mart/scripts.pory"

# 26 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_Mart_EventScript_Clerk_2:
# 27 "data/maps/OldaleTown_Mart/scripts.pory"
# 9 "data/maps/OldaleTown_Mart/scripts.pory"
# 28 "data/maps/OldaleTown_Mart/scripts.pory"
	goto OldaleTown_Mart_ExpandedItems
# 29 "data/maps/OldaleTown_Mart/scripts.pory"
	goto OldaleTown_Mart_EventScript_Clerk_1
# 30 "data/maps/OldaleTown_Mart/scripts.pory"

# 31 "data/maps/OldaleTown_Mart/scripts.pory"

# 32 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_Mart_Pokemart_Basic::
# 33 "data/maps/OldaleTown_Mart/scripts.pory"
# 18 "data/maps/OldaleTown_Mart/scripts.pory"
# 34 "data/maps/OldaleTown_Mart/scripts.pory"
	pokemartlistend
# 35 "data/maps/OldaleTown_Mart/scripts.pory"
	return
# 36 "data/maps/OldaleTown_Mart/scripts.pory"

# 37 "data/maps/OldaleTown_Mart/scripts.pory"

# 38 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_Mart_ExpandedItems::
# 39 "data/maps/OldaleTown_Mart/scripts.pory"
# 22 "data/maps/OldaleTown_Mart/scripts.pory"
# 40 "data/maps/OldaleTown_Mart/scripts.pory"
	pokemart OldaleTown_Mart_Pokemart_Expanded
# 41 "data/maps/OldaleTown_Mart/scripts.pory"
# 23 "data/maps/OldaleTown_Mart/scripts.pory"
# 42 "data/maps/OldaleTown_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 43 "data/maps/OldaleTown_Mart/scripts.pory"
# 24 "data/maps/OldaleTown_Mart/scripts.pory"
# 44 "data/maps/OldaleTown_Mart/scripts.pory"
	release
# 45 "data/maps/OldaleTown_Mart/scripts.pory"
	end
# 46 "data/maps/OldaleTown_Mart/scripts.pory"

# 47 "data/maps/OldaleTown_Mart/scripts.pory"

# 48 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_Mart_Pokemart_Expanded::
# 49 "data/maps/OldaleTown_Mart/scripts.pory"
# 29 "data/maps/OldaleTown_Mart/scripts.pory"
# 50 "data/maps/OldaleTown_Mart/scripts.pory"
	pokemartlistend
# 51 "data/maps/OldaleTown_Mart/scripts.pory"
	return
# 52 "data/maps/OldaleTown_Mart/scripts.pory"

# 53 "data/maps/OldaleTown_Mart/scripts.pory"

# 54 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_Mart_EventScript_Woman::
# 55 "data/maps/OldaleTown_Mart/scripts.pory"
# 33 "data/maps/OldaleTown_Mart/scripts.pory"
# 56 "data/maps/OldaleTown_Mart/scripts.pory"
	lock
# 57 "data/maps/OldaleTown_Mart/scripts.pory"
# 34 "data/maps/OldaleTown_Mart/scripts.pory"
# 58 "data/maps/OldaleTown_Mart/scripts.pory"
	faceplayer
# 59 "data/maps/OldaleTown_Mart/scripts.pory"
# 35 "data/maps/OldaleTown_Mart/scripts.pory"
# 60 "data/maps/OldaleTown_Mart/scripts.pory"
	goto_if_set FLAG_ADVENTURE_STARTED, OldaleTown_Mart_EventScript_Woman_2
# 61 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_Mart_EventScript_Woman_1:
# 62 "data/maps/OldaleTown_Mart/scripts.pory"
# 38 "data/maps/OldaleTown_Mart/scripts.pory"
# 63 "data/maps/OldaleTown_Mart/scripts.pory"
	msgbox OldaleTown_Mart_Text_PokeBallsAreSoldOut, MSGBOX_DEFAULT
# 64 "data/maps/OldaleTown_Mart/scripts.pory"
# 39 "data/maps/OldaleTown_Mart/scripts.pory"
# 65 "data/maps/OldaleTown_Mart/scripts.pory"
	release
# 66 "data/maps/OldaleTown_Mart/scripts.pory"
	end
# 67 "data/maps/OldaleTown_Mart/scripts.pory"

# 68 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_Mart_EventScript_Woman_2:
# 69 "data/maps/OldaleTown_Mart/scripts.pory"
# 36 "data/maps/OldaleTown_Mart/scripts.pory"
# 70 "data/maps/OldaleTown_Mart/scripts.pory"
	goto OldaleTown_Mart_EventScript_PokeBallsInStock
# 71 "data/maps/OldaleTown_Mart/scripts.pory"
	goto OldaleTown_Mart_EventScript_Woman_1
# 72 "data/maps/OldaleTown_Mart/scripts.pory"

# 73 "data/maps/OldaleTown_Mart/scripts.pory"

# 74 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_Mart_EventScript_PokeBallsInStock::
# 75 "data/maps/OldaleTown_Mart/scripts.pory"
# 44 "data/maps/OldaleTown_Mart/scripts.pory"
# 76 "data/maps/OldaleTown_Mart/scripts.pory"
	msgbox OldaleTown_Mart_Text_ImGoingToBuyPokeBalls, MSGBOX_DEFAULT
# 77 "data/maps/OldaleTown_Mart/scripts.pory"
# 45 "data/maps/OldaleTown_Mart/scripts.pory"
# 78 "data/maps/OldaleTown_Mart/scripts.pory"
	release
# 79 "data/maps/OldaleTown_Mart/scripts.pory"
	end
# 80 "data/maps/OldaleTown_Mart/scripts.pory"

# 81 "data/maps/OldaleTown_Mart/scripts.pory"

# 82 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_Mart_EventScript_Boy::
# 83 "data/maps/OldaleTown_Mart/scripts.pory"
# 50 "data/maps/OldaleTown_Mart/scripts.pory"
# 84 "data/maps/OldaleTown_Mart/scripts.pory"
	msgbox OldaleTown_Mart_Text_RestoreHPWithPotion, MSGBOX_NPC
# 85 "data/maps/OldaleTown_Mart/scripts.pory"
	end
# 86 "data/maps/OldaleTown_Mart/scripts.pory"

# 87 "data/maps/OldaleTown_Mart/scripts.pory"

# 88 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_Mart_Text_PokeBallsAreSoldOut::
# 89 "data/maps/OldaleTown_Mart/scripts.pory"
# 54 "data/maps/OldaleTown_Mart/scripts.pory"
# 90 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "The clerk says they're all sold out.\n"
# 91 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "I can't buy any POKé BALLS.$"
# 92 "data/maps/OldaleTown_Mart/scripts.pory"

# 93 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_Mart_Text_ImGoingToBuyPokeBalls::
# 94 "data/maps/OldaleTown_Mart/scripts.pory"
# 59 "data/maps/OldaleTown_Mart/scripts.pory"
# 95 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "I'm going to buy a bunch of POKé BALLS\n"
# 96 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "and catch a bunch of POKéMON!$"
# 97 "data/maps/OldaleTown_Mart/scripts.pory"

# 98 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_Mart_Text_RestoreHPWithPotion::
# 99 "data/maps/OldaleTown_Mart/scripts.pory"
# 64 "data/maps/OldaleTown_Mart/scripts.pory"
# 100 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "If a POKéMON gets hurt and loses its HP\n"
# 101 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "and faints, it won't be able to battle.\p"
# 102 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "To prevent your POKéMON from fainting,\n"
# 103 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "restore its HP with a POTION.$"
