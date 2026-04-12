# 1 "data/maps/LavaridgeTown_HerbShop/scripts.pory"

# 2 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
LavaridgeTown_HerbShop_MapScripts::
# 3 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.byte 0
# 4 "data/maps/LavaridgeTown_HerbShop/scripts.pory"

# 5 "data/maps/LavaridgeTown_HerbShop/scripts.pory"

# 6 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
LavaridgeTown_HerbShop_EventScript_Clerk::
# 7 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
# 4 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
# 8 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	lock
# 9 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
# 5 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
# 10 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	faceplayer
# 11 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
# 6 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
# 12 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	message LavaridgeTown_HerbShop_Text_WelcomeToHerbShop
# 13 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
# 7 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
# 14 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	waitmessage
# 15 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
# 8 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
# 16 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	pokemart LavaridgeTown_HerbShop_Pokemart
# 17 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
# 9 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
# 18 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 19 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
# 10 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
# 20 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	release
# 21 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	end
# 22 "data/maps/LavaridgeTown_HerbShop/scripts.pory"

# 23 "data/maps/LavaridgeTown_HerbShop/scripts.pory"

# 24 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
LavaridgeTown_HerbShop_Pokemart::
# 25 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
# 15 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
# 26 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	pokemartlistend
# 27 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	return
# 28 "data/maps/LavaridgeTown_HerbShop/scripts.pory"

# 29 "data/maps/LavaridgeTown_HerbShop/scripts.pory"

# 30 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
LavaridgeTown_HerbShop_EventScript_ExpertM::
# 31 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
# 19 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
# 32 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	msgbox LavaridgeTown_HerbShop_Text_HerbalMedicineWorksButMonWillDislike, MSGBOX_NPC
# 33 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	end
# 34 "data/maps/LavaridgeTown_HerbShop/scripts.pory"

# 35 "data/maps/LavaridgeTown_HerbShop/scripts.pory"

# 36 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
LavaridgeTown_HerbShop_EventScript_OldMan::
# 37 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
# 24 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
# 38 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	lock
# 39 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
# 25 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
# 40 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	faceplayer
# 41 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
# 26 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
# 42 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	goto_if_set FLAG_RECEIVED_CHARCOAL, LavaridgeTown_HerbShop_EventScript_OldMan_2
# 43 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
LavaridgeTown_HerbShop_EventScript_OldMan_1:
# 44 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
# 29 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
# 45 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	msgbox LavaridgeTown_HerbShop_Text_YouveComeToLookAtHerbalMedicine, MSGBOX_DEFAULT
# 46 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
# 30 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
# 47 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	giveitem ITEM_CHARCOAL
# 48 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
# 31 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
# 49 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	compare VAR_RESULT, FALSE
# 50 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	goto_if_eq LavaridgeTown_HerbShop_EventScript_OldMan_5
# 51 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
LavaridgeTown_HerbShop_EventScript_OldMan_4:
# 52 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
# 34 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
# 53 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	setflag FLAG_RECEIVED_CHARCOAL
# 54 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
# 35 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
# 55 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	release
# 56 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	end
# 57 "data/maps/LavaridgeTown_HerbShop/scripts.pory"

# 58 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
LavaridgeTown_HerbShop_EventScript_OldMan_2:
# 59 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
# 27 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
# 60 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	goto LavaridgeTown_HerbShop_EventScript_ExplainCharcoal
# 61 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	goto LavaridgeTown_HerbShop_EventScript_OldMan_1
# 62 "data/maps/LavaridgeTown_HerbShop/scripts.pory"

# 63 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
LavaridgeTown_HerbShop_EventScript_OldMan_5:
# 64 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
# 32 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
# 65 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
# 66 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	goto LavaridgeTown_HerbShop_EventScript_OldMan_4
# 67 "data/maps/LavaridgeTown_HerbShop/scripts.pory"

# 68 "data/maps/LavaridgeTown_HerbShop/scripts.pory"

# 69 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
LavaridgeTown_HerbShop_EventScript_ExplainCharcoal::
# 70 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
# 40 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
# 71 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	msgbox LavaridgeTown_HerbShop_Text_ExplainCharcoal, MSGBOX_DEFAULT
# 72 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
# 41 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
# 73 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	release
# 74 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	end
# 75 "data/maps/LavaridgeTown_HerbShop/scripts.pory"

# 76 "data/maps/LavaridgeTown_HerbShop/scripts.pory"

# 77 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
LavaridgeTown_HerbShop_Text_WelcomeToHerbShop::
# 78 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
# 45 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
# 79 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.string "Welcome to the HERB SHOP, home of\n"
# 80 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.string "effective and inexpensive medicine!$"
# 81 "data/maps/LavaridgeTown_HerbShop/scripts.pory"

# 82 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
LavaridgeTown_HerbShop_Text_YouveComeToLookAtHerbalMedicine::
# 83 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
# 50 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
# 84 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.string "You've come to look at herbal medicine\n"
# 85 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.string "in LAVARIDGE?\p"
# 86 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.string "That's rather commendable.\p"
# 87 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.string "I like you! Take this!$"
# 88 "data/maps/LavaridgeTown_HerbShop/scripts.pory"

# 89 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
LavaridgeTown_HerbShop_Text_ExplainCharcoal::
# 90 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
# 57 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
# 91 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.string "That CHARCOAL I gave you, it's used\n"
# 92 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.string "for making herbal medicine.\p"
# 93 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.string "It also does wonders when held by\n"
# 94 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.string "a POKéMON.\p"
# 95 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.string "It intensifies the power of FIRE-type\n"
# 96 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.string "moves.$"
# 97 "data/maps/LavaridgeTown_HerbShop/scripts.pory"

# 98 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
LavaridgeTown_HerbShop_Text_HerbalMedicineWorksButMonWillDislike::
# 99 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
# 66 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
# 100 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.string "Herbal medicine works impressively well.\n"
# 101 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.string "But your POKéMON will dislike you for it.\l"
# 102 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.string "It must be horribly bitter!$"
