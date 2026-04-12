# 1 "data/maps/FortreeCity_DecorationShop/scripts.pory"

# 2 "data/maps/FortreeCity_DecorationShop/scripts.pory"
FortreeCity_DecorationShop_MapScripts::
# 3 "data/maps/FortreeCity_DecorationShop/scripts.pory"
	.byte 0
# 4 "data/maps/FortreeCity_DecorationShop/scripts.pory"

# 5 "data/maps/FortreeCity_DecorationShop/scripts.pory"

# 6 "data/maps/FortreeCity_DecorationShop/scripts.pory"
FortreeCity_DecorationShop_EventScript_PokefanM::
# 7 "data/maps/FortreeCity_DecorationShop/scripts.pory"
# 4 "data/maps/FortreeCity_DecorationShop/scripts.pory"
# 8 "data/maps/FortreeCity_DecorationShop/scripts.pory"
	msgbox FortreeCity_DecorationShop_Text_MerchandiseSentToPC, MSGBOX_NPC
# 9 "data/maps/FortreeCity_DecorationShop/scripts.pory"
	end
# 10 "data/maps/FortreeCity_DecorationShop/scripts.pory"

# 11 "data/maps/FortreeCity_DecorationShop/scripts.pory"

# 12 "data/maps/FortreeCity_DecorationShop/scripts.pory"
FortreeCity_DecorationShop_EventScript_Girl::
# 13 "data/maps/FortreeCity_DecorationShop/scripts.pory"
# 9 "data/maps/FortreeCity_DecorationShop/scripts.pory"
# 14 "data/maps/FortreeCity_DecorationShop/scripts.pory"
	msgbox FortreeCity_DecorationShop_Text_BuyingDeskForDolls, MSGBOX_NPC
# 15 "data/maps/FortreeCity_DecorationShop/scripts.pory"
	end
# 16 "data/maps/FortreeCity_DecorationShop/scripts.pory"

# 17 "data/maps/FortreeCity_DecorationShop/scripts.pory"

# 18 "data/maps/FortreeCity_DecorationShop/scripts.pory"
FortreeCity_DecorationShop_EventScript_ClerkDesks::
# 19 "data/maps/FortreeCity_DecorationShop/scripts.pory"
# 14 "data/maps/FortreeCity_DecorationShop/scripts.pory"
# 20 "data/maps/FortreeCity_DecorationShop/scripts.pory"
	lock
# 21 "data/maps/FortreeCity_DecorationShop/scripts.pory"
# 15 "data/maps/FortreeCity_DecorationShop/scripts.pory"
# 22 "data/maps/FortreeCity_DecorationShop/scripts.pory"
	faceplayer
# 23 "data/maps/FortreeCity_DecorationShop/scripts.pory"
# 16 "data/maps/FortreeCity_DecorationShop/scripts.pory"
# 24 "data/maps/FortreeCity_DecorationShop/scripts.pory"
	message gText_HowMayIServeYou
# 25 "data/maps/FortreeCity_DecorationShop/scripts.pory"
# 17 "data/maps/FortreeCity_DecorationShop/scripts.pory"
# 26 "data/maps/FortreeCity_DecorationShop/scripts.pory"
	waitmessage
# 27 "data/maps/FortreeCity_DecorationShop/scripts.pory"
# 18 "data/maps/FortreeCity_DecorationShop/scripts.pory"
# 28 "data/maps/FortreeCity_DecorationShop/scripts.pory"
	pokemartdecoration FortreeCity_DecorationShop_PokemartDecor_Desks
# 29 "data/maps/FortreeCity_DecorationShop/scripts.pory"
# 19 "data/maps/FortreeCity_DecorationShop/scripts.pory"
# 30 "data/maps/FortreeCity_DecorationShop/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 31 "data/maps/FortreeCity_DecorationShop/scripts.pory"
# 20 "data/maps/FortreeCity_DecorationShop/scripts.pory"
# 32 "data/maps/FortreeCity_DecorationShop/scripts.pory"
	release
# 33 "data/maps/FortreeCity_DecorationShop/scripts.pory"
	end
# 34 "data/maps/FortreeCity_DecorationShop/scripts.pory"

# 35 "data/maps/FortreeCity_DecorationShop/scripts.pory"

# 36 "data/maps/FortreeCity_DecorationShop/scripts.pory"
FortreeCity_DecorationShop_PokemartDecor_Desks::
# 37 "data/maps/FortreeCity_DecorationShop/scripts.pory"
# 25 "data/maps/FortreeCity_DecorationShop/scripts.pory"
# 38 "data/maps/FortreeCity_DecorationShop/scripts.pory"
	pokemartlistend
# 39 "data/maps/FortreeCity_DecorationShop/scripts.pory"
	return
# 40 "data/maps/FortreeCity_DecorationShop/scripts.pory"

# 41 "data/maps/FortreeCity_DecorationShop/scripts.pory"

# 42 "data/maps/FortreeCity_DecorationShop/scripts.pory"
FortreeCity_DecorationShop_EventScript_ClerkChairs::
# 43 "data/maps/FortreeCity_DecorationShop/scripts.pory"
# 29 "data/maps/FortreeCity_DecorationShop/scripts.pory"
# 44 "data/maps/FortreeCity_DecorationShop/scripts.pory"
	lock
# 45 "data/maps/FortreeCity_DecorationShop/scripts.pory"
# 30 "data/maps/FortreeCity_DecorationShop/scripts.pory"
# 46 "data/maps/FortreeCity_DecorationShop/scripts.pory"
	faceplayer
# 47 "data/maps/FortreeCity_DecorationShop/scripts.pory"
# 31 "data/maps/FortreeCity_DecorationShop/scripts.pory"
# 48 "data/maps/FortreeCity_DecorationShop/scripts.pory"
	message gText_HowMayIServeYou
# 49 "data/maps/FortreeCity_DecorationShop/scripts.pory"
# 32 "data/maps/FortreeCity_DecorationShop/scripts.pory"
# 50 "data/maps/FortreeCity_DecorationShop/scripts.pory"
	waitmessage
# 51 "data/maps/FortreeCity_DecorationShop/scripts.pory"
# 33 "data/maps/FortreeCity_DecorationShop/scripts.pory"
# 52 "data/maps/FortreeCity_DecorationShop/scripts.pory"
	pokemartdecoration FortreeCity_DecorationShop_PokemartDecor_Chairs
# 53 "data/maps/FortreeCity_DecorationShop/scripts.pory"
# 34 "data/maps/FortreeCity_DecorationShop/scripts.pory"
# 54 "data/maps/FortreeCity_DecorationShop/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 55 "data/maps/FortreeCity_DecorationShop/scripts.pory"
# 35 "data/maps/FortreeCity_DecorationShop/scripts.pory"
# 56 "data/maps/FortreeCity_DecorationShop/scripts.pory"
	release
# 57 "data/maps/FortreeCity_DecorationShop/scripts.pory"
	end
# 58 "data/maps/FortreeCity_DecorationShop/scripts.pory"

# 59 "data/maps/FortreeCity_DecorationShop/scripts.pory"

# 60 "data/maps/FortreeCity_DecorationShop/scripts.pory"
FortreeCity_DecorationShop_PokemartDecor_Chairs::
# 61 "data/maps/FortreeCity_DecorationShop/scripts.pory"
# 40 "data/maps/FortreeCity_DecorationShop/scripts.pory"
# 62 "data/maps/FortreeCity_DecorationShop/scripts.pory"
	pokemartlistend
# 63 "data/maps/FortreeCity_DecorationShop/scripts.pory"
	return
# 64 "data/maps/FortreeCity_DecorationShop/scripts.pory"

# 65 "data/maps/FortreeCity_DecorationShop/scripts.pory"

# 66 "data/maps/FortreeCity_DecorationShop/scripts.pory"
FortreeCity_DecorationShop_Text_MerchandiseSentToPC::
# 67 "data/maps/FortreeCity_DecorationShop/scripts.pory"
# 43 "data/maps/FortreeCity_DecorationShop/scripts.pory"
# 68 "data/maps/FortreeCity_DecorationShop/scripts.pory"
	.string "Merchandise you buy here is sent to\n"
# 69 "data/maps/FortreeCity_DecorationShop/scripts.pory"
	.string "your own PC.\p"
# 70 "data/maps/FortreeCity_DecorationShop/scripts.pory"
	.string "That's fantastic! I wish they could\n"
# 71 "data/maps/FortreeCity_DecorationShop/scripts.pory"
	.string "also deliver me home like that.$"
# 72 "data/maps/FortreeCity_DecorationShop/scripts.pory"

# 73 "data/maps/FortreeCity_DecorationShop/scripts.pory"
FortreeCity_DecorationShop_Text_BuyingDeskForDolls::
# 74 "data/maps/FortreeCity_DecorationShop/scripts.pory"
# 50 "data/maps/FortreeCity_DecorationShop/scripts.pory"
# 75 "data/maps/FortreeCity_DecorationShop/scripts.pory"
	.string "I'm buying a pretty desk and I'm\n"
# 76 "data/maps/FortreeCity_DecorationShop/scripts.pory"
	.string "putting my cute DOLLS on it.\p"
# 77 "data/maps/FortreeCity_DecorationShop/scripts.pory"
	.string "If I don't, when I decorate my\n"
# 78 "data/maps/FortreeCity_DecorationShop/scripts.pory"
	.string "SECRET BASE, my DOLLS will get\l"
# 79 "data/maps/FortreeCity_DecorationShop/scripts.pory"
	.string "dirty or poked with splinters.$"
