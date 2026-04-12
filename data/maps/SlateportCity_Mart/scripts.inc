# 1 "data/maps/SlateportCity_Mart/scripts.pory"

# 2 "data/maps/SlateportCity_Mart/scripts.pory"
SlateportCity_Mart_MapScripts::
# 3 "data/maps/SlateportCity_Mart/scripts.pory"
	.byte 0
# 4 "data/maps/SlateportCity_Mart/scripts.pory"

# 5 "data/maps/SlateportCity_Mart/scripts.pory"

# 6 "data/maps/SlateportCity_Mart/scripts.pory"
SlateportCity_Mart_EventScript_Clerk::
# 7 "data/maps/SlateportCity_Mart/scripts.pory"
# 4 "data/maps/SlateportCity_Mart/scripts.pory"
# 8 "data/maps/SlateportCity_Mart/scripts.pory"
	lock
# 9 "data/maps/SlateportCity_Mart/scripts.pory"
# 5 "data/maps/SlateportCity_Mart/scripts.pory"
# 10 "data/maps/SlateportCity_Mart/scripts.pory"
	faceplayer
# 11 "data/maps/SlateportCity_Mart/scripts.pory"
# 6 "data/maps/SlateportCity_Mart/scripts.pory"
# 12 "data/maps/SlateportCity_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 13 "data/maps/SlateportCity_Mart/scripts.pory"
# 7 "data/maps/SlateportCity_Mart/scripts.pory"
# 14 "data/maps/SlateportCity_Mart/scripts.pory"
	waitmessage
# 15 "data/maps/SlateportCity_Mart/scripts.pory"
# 8 "data/maps/SlateportCity_Mart/scripts.pory"
# 16 "data/maps/SlateportCity_Mart/scripts.pory"
	pokemart SlateportCity_Mart_Pokemart
# 17 "data/maps/SlateportCity_Mart/scripts.pory"
# 9 "data/maps/SlateportCity_Mart/scripts.pory"
# 18 "data/maps/SlateportCity_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 19 "data/maps/SlateportCity_Mart/scripts.pory"
# 10 "data/maps/SlateportCity_Mart/scripts.pory"
# 20 "data/maps/SlateportCity_Mart/scripts.pory"
	release
# 21 "data/maps/SlateportCity_Mart/scripts.pory"
	end
# 22 "data/maps/SlateportCity_Mart/scripts.pory"

# 23 "data/maps/SlateportCity_Mart/scripts.pory"

# 24 "data/maps/SlateportCity_Mart/scripts.pory"
SlateportCity_Mart_Pokemart::
# 25 "data/maps/SlateportCity_Mart/scripts.pory"
# 15 "data/maps/SlateportCity_Mart/scripts.pory"
# 26 "data/maps/SlateportCity_Mart/scripts.pory"
	pokemartlistend
# 27 "data/maps/SlateportCity_Mart/scripts.pory"
	return
# 28 "data/maps/SlateportCity_Mart/scripts.pory"

# 29 "data/maps/SlateportCity_Mart/scripts.pory"

# 30 "data/maps/SlateportCity_Mart/scripts.pory"
SlateportCity_Mart_EventScript_BlackBelt::
# 31 "data/maps/SlateportCity_Mart/scripts.pory"
# 19 "data/maps/SlateportCity_Mart/scripts.pory"
# 32 "data/maps/SlateportCity_Mart/scripts.pory"
	msgbox SlateportCity_Mart_Text_SomeItemsOnlyAtMart, MSGBOX_NPC
# 33 "data/maps/SlateportCity_Mart/scripts.pory"
	end
# 34 "data/maps/SlateportCity_Mart/scripts.pory"

# 35 "data/maps/SlateportCity_Mart/scripts.pory"

# 36 "data/maps/SlateportCity_Mart/scripts.pory"
SlateportCity_Mart_EventScript_Man::
# 37 "data/maps/SlateportCity_Mart/scripts.pory"
# 24 "data/maps/SlateportCity_Mart/scripts.pory"
# 38 "data/maps/SlateportCity_Mart/scripts.pory"
	msgbox SlateportCity_Mart_Text_GreatBallIsBetter, MSGBOX_NPC
# 39 "data/maps/SlateportCity_Mart/scripts.pory"
	end
# 40 "data/maps/SlateportCity_Mart/scripts.pory"

# 41 "data/maps/SlateportCity_Mart/scripts.pory"

# 42 "data/maps/SlateportCity_Mart/scripts.pory"
SlateportCity_Mart_Text_SomeItemsOnlyAtMart::
# 43 "data/maps/SlateportCity_Mart/scripts.pory"
# 28 "data/maps/SlateportCity_Mart/scripts.pory"
# 44 "data/maps/SlateportCity_Mart/scripts.pory"
	.string "The MARKET does have some interesting\n"
# 45 "data/maps/SlateportCity_Mart/scripts.pory"
	.string "merchandise.\p"
# 46 "data/maps/SlateportCity_Mart/scripts.pory"
	.string "But there are some items you can only\n"
# 47 "data/maps/SlateportCity_Mart/scripts.pory"
	.string "get at a POKéMON MART.$"
# 48 "data/maps/SlateportCity_Mart/scripts.pory"

# 49 "data/maps/SlateportCity_Mart/scripts.pory"
SlateportCity_Mart_Text_GreatBallIsBetter::
# 50 "data/maps/SlateportCity_Mart/scripts.pory"
# 35 "data/maps/SlateportCity_Mart/scripts.pory"
# 51 "data/maps/SlateportCity_Mart/scripts.pory"
	.string "A GREAT BALL is better than a POKé BALL\n"
# 52 "data/maps/SlateportCity_Mart/scripts.pory"
	.string "at catching POKéMON.\p"
# 53 "data/maps/SlateportCity_Mart/scripts.pory"
	.string "With this, I should be able to get that\n"
# 54 "data/maps/SlateportCity_Mart/scripts.pory"
	.string "elusive POKéMON…$"
