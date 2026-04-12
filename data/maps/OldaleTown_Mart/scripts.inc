OldaleTown_Mart_MapScripts::
	.byte 0


OldaleTown_Mart_EventScript_Clerk::
# 4 "data/maps/OldaleTown_Mart/scripts.pory"
	lock
# 5 "data/maps/OldaleTown_Mart/scripts.pory"
	faceplayer
# 6 "data/maps/OldaleTown_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 7 "data/maps/OldaleTown_Mart/scripts.pory"
	waitmessage
# 8 "data/maps/OldaleTown_Mart/scripts.pory"
	goto_if_set FLAG_ADVENTURE_STARTED, OldaleTown_Mart_EventScript_Clerk_2
OldaleTown_Mart_EventScript_Clerk_1:
# 11 "data/maps/OldaleTown_Mart/scripts.pory"
	pokemart OldaleTown_Mart_Pokemart_Basic
# 12 "data/maps/OldaleTown_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 13 "data/maps/OldaleTown_Mart/scripts.pory"
	release
	end

OldaleTown_Mart_EventScript_Clerk_2:
# 9 "data/maps/OldaleTown_Mart/scripts.pory"
	goto OldaleTown_Mart_ExpandedItems
	goto OldaleTown_Mart_EventScript_Clerk_1


OldaleTown_Mart_Pokemart_Basic::
# 18 "data/maps/OldaleTown_Mart/scripts.pory"
	pokemartlistend
	return


OldaleTown_Mart_ExpandedItems::
# 22 "data/maps/OldaleTown_Mart/scripts.pory"
	pokemart OldaleTown_Mart_Pokemart_Expanded
# 23 "data/maps/OldaleTown_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 24 "data/maps/OldaleTown_Mart/scripts.pory"
	release
	end


OldaleTown_Mart_Pokemart_Expanded::
# 29 "data/maps/OldaleTown_Mart/scripts.pory"
	pokemartlistend
	return


OldaleTown_Mart_EventScript_Woman::
# 33 "data/maps/OldaleTown_Mart/scripts.pory"
	lock
# 34 "data/maps/OldaleTown_Mart/scripts.pory"
	faceplayer
# 35 "data/maps/OldaleTown_Mart/scripts.pory"
	goto_if_set FLAG_ADVENTURE_STARTED, OldaleTown_Mart_EventScript_Woman_2
OldaleTown_Mart_EventScript_Woman_1:
# 38 "data/maps/OldaleTown_Mart/scripts.pory"
	msgbox OldaleTown_Mart_Text_PokeBallsAreSoldOut, MSGBOX_DEFAULT
# 39 "data/maps/OldaleTown_Mart/scripts.pory"
	release
	end

OldaleTown_Mart_EventScript_Woman_2:
# 36 "data/maps/OldaleTown_Mart/scripts.pory"
	goto OldaleTown_Mart_EventScript_PokeBallsInStock
	goto OldaleTown_Mart_EventScript_Woman_1


OldaleTown_Mart_EventScript_PokeBallsInStock::
# 44 "data/maps/OldaleTown_Mart/scripts.pory"
	msgbox OldaleTown_Mart_Text_ImGoingToBuyPokeBalls, MSGBOX_DEFAULT
# 45 "data/maps/OldaleTown_Mart/scripts.pory"
	release
	end


OldaleTown_Mart_EventScript_Boy::
# 50 "data/maps/OldaleTown_Mart/scripts.pory"
	msgbox OldaleTown_Mart_Text_RestoreHPWithPotion, MSGBOX_NPC
	end


OldaleTown_Mart_Text_PokeBallsAreSoldOut::
# 54 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "The clerk says they're all sold out.\n"
	.string "I can't buy any POKé BALLS.$"

OldaleTown_Mart_Text_ImGoingToBuyPokeBalls::
# 59 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "I'm going to buy a bunch of POKé BALLS\n"
	.string "and catch a bunch of POKéMON!$"

OldaleTown_Mart_Text_RestoreHPWithPotion::
# 64 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "If a POKéMON gets hurt and loses its HP\n"
	.string "and faints, it won't be able to battle.\p"
	.string "To prevent your POKéMON from fainting,\n"
	.string "restore its HP with a POTION.$"
