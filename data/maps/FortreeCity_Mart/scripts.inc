# 1 "data/maps/FortreeCity_Mart/scripts.pory"

# 2 "data/maps/FortreeCity_Mart/scripts.pory"
FortreeCity_Mart_MapScripts::
# 3 "data/maps/FortreeCity_Mart/scripts.pory"
	.byte 0
# 4 "data/maps/FortreeCity_Mart/scripts.pory"

# 5 "data/maps/FortreeCity_Mart/scripts.pory"

# 6 "data/maps/FortreeCity_Mart/scripts.pory"
FortreeCity_Mart_EventScript_Clerk::
# 7 "data/maps/FortreeCity_Mart/scripts.pory"
# 4 "data/maps/FortreeCity_Mart/scripts.pory"
# 8 "data/maps/FortreeCity_Mart/scripts.pory"
	lock
# 9 "data/maps/FortreeCity_Mart/scripts.pory"
# 5 "data/maps/FortreeCity_Mart/scripts.pory"
# 10 "data/maps/FortreeCity_Mart/scripts.pory"
	faceplayer
# 11 "data/maps/FortreeCity_Mart/scripts.pory"
# 6 "data/maps/FortreeCity_Mart/scripts.pory"
# 12 "data/maps/FortreeCity_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 13 "data/maps/FortreeCity_Mart/scripts.pory"
# 7 "data/maps/FortreeCity_Mart/scripts.pory"
# 14 "data/maps/FortreeCity_Mart/scripts.pory"
	waitmessage
# 15 "data/maps/FortreeCity_Mart/scripts.pory"
# 8 "data/maps/FortreeCity_Mart/scripts.pory"
# 16 "data/maps/FortreeCity_Mart/scripts.pory"
	pokemart FortreeCity_Mart_Pokemart
# 17 "data/maps/FortreeCity_Mart/scripts.pory"
# 9 "data/maps/FortreeCity_Mart/scripts.pory"
# 18 "data/maps/FortreeCity_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 19 "data/maps/FortreeCity_Mart/scripts.pory"
# 10 "data/maps/FortreeCity_Mart/scripts.pory"
# 20 "data/maps/FortreeCity_Mart/scripts.pory"
	release
# 21 "data/maps/FortreeCity_Mart/scripts.pory"
	end
# 22 "data/maps/FortreeCity_Mart/scripts.pory"

# 23 "data/maps/FortreeCity_Mart/scripts.pory"

# 24 "data/maps/FortreeCity_Mart/scripts.pory"
FortreeCity_Mart_Pokemart::
# 25 "data/maps/FortreeCity_Mart/scripts.pory"
# 15 "data/maps/FortreeCity_Mart/scripts.pory"
# 26 "data/maps/FortreeCity_Mart/scripts.pory"
	pokemartlistend
# 27 "data/maps/FortreeCity_Mart/scripts.pory"
	return
# 28 "data/maps/FortreeCity_Mart/scripts.pory"

# 29 "data/maps/FortreeCity_Mart/scripts.pory"

# 30 "data/maps/FortreeCity_Mart/scripts.pory"
FortreeCity_Mart_EventScript_Woman::
# 31 "data/maps/FortreeCity_Mart/scripts.pory"
# 19 "data/maps/FortreeCity_Mart/scripts.pory"
# 32 "data/maps/FortreeCity_Mart/scripts.pory"
	msgbox FortreeCity_Mart_Text_SuperRepelBetter, MSGBOX_NPC
# 33 "data/maps/FortreeCity_Mart/scripts.pory"
	end
# 34 "data/maps/FortreeCity_Mart/scripts.pory"

# 35 "data/maps/FortreeCity_Mart/scripts.pory"

# 36 "data/maps/FortreeCity_Mart/scripts.pory"
FortreeCity_Mart_EventScript_Girl::
# 37 "data/maps/FortreeCity_Mart/scripts.pory"
# 24 "data/maps/FortreeCity_Mart/scripts.pory"
# 38 "data/maps/FortreeCity_Mart/scripts.pory"
	msgbox FortreeCity_Mart_Text_StockUpOnItems, MSGBOX_NPC
# 39 "data/maps/FortreeCity_Mart/scripts.pory"
	end
# 40 "data/maps/FortreeCity_Mart/scripts.pory"

# 41 "data/maps/FortreeCity_Mart/scripts.pory"

# 42 "data/maps/FortreeCity_Mart/scripts.pory"
FortreeCity_Mart_EventScript_Boy::
# 43 "data/maps/FortreeCity_Mart/scripts.pory"
# 29 "data/maps/FortreeCity_Mart/scripts.pory"
# 44 "data/maps/FortreeCity_Mart/scripts.pory"
	msgbox FortreeCity_Mart_Text_RareCandyMakesMonGrow, MSGBOX_NPC
# 45 "data/maps/FortreeCity_Mart/scripts.pory"
	end
# 46 "data/maps/FortreeCity_Mart/scripts.pory"

# 47 "data/maps/FortreeCity_Mart/scripts.pory"

# 48 "data/maps/FortreeCity_Mart/scripts.pory"
FortreeCity_Mart_Text_SuperRepelBetter::
# 49 "data/maps/FortreeCity_Mart/scripts.pory"
# 33 "data/maps/FortreeCity_Mart/scripts.pory"
# 50 "data/maps/FortreeCity_Mart/scripts.pory"
	.string "SUPER REPEL lasts a long time,\n"
# 51 "data/maps/FortreeCity_Mart/scripts.pory"
	.string "and it gets the job done.\p"
# 52 "data/maps/FortreeCity_Mart/scripts.pory"
	.string "It's much better than an ordinary\n"
# 53 "data/maps/FortreeCity_Mart/scripts.pory"
	.string "REPEL.$"
# 54 "data/maps/FortreeCity_Mart/scripts.pory"

# 55 "data/maps/FortreeCity_Mart/scripts.pory"
FortreeCity_Mart_Text_StockUpOnItems::
# 56 "data/maps/FortreeCity_Mart/scripts.pory"
# 40 "data/maps/FortreeCity_Mart/scripts.pory"
# 57 "data/maps/FortreeCity_Mart/scripts.pory"
	.string "I always stock up on more items than\n"
# 58 "data/maps/FortreeCity_Mart/scripts.pory"
	.string "I'm sure I'll need.\p"
# 59 "data/maps/FortreeCity_Mart/scripts.pory"
	.string "You never know what might happen.\n"
# 60 "data/maps/FortreeCity_Mart/scripts.pory"
	.string "Better to be safe than sorry!$"
# 61 "data/maps/FortreeCity_Mart/scripts.pory"

# 62 "data/maps/FortreeCity_Mart/scripts.pory"
FortreeCity_Mart_Text_RareCandyMakesMonGrow::
# 63 "data/maps/FortreeCity_Mart/scripts.pory"
# 47 "data/maps/FortreeCity_Mart/scripts.pory"
# 64 "data/maps/FortreeCity_Mart/scripts.pory"
	.string "A RARE CANDY makes a POKéMON grow\n"
# 65 "data/maps/FortreeCity_Mart/scripts.pory"
	.string "immediately by one level.$"
