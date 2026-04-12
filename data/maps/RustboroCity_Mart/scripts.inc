# 1 "data/maps/RustboroCity_Mart/scripts.pory"

# 2 "data/maps/RustboroCity_Mart/scripts.pory"
RustboroCity_Mart_MapScripts::
# 3 "data/maps/RustboroCity_Mart/scripts.pory"
	.byte 0
# 4 "data/maps/RustboroCity_Mart/scripts.pory"

# 5 "data/maps/RustboroCity_Mart/scripts.pory"

# 6 "data/maps/RustboroCity_Mart/scripts.pory"
RustboroCity_Mart_EventScript_Clerk::
# 7 "data/maps/RustboroCity_Mart/scripts.pory"
# 4 "data/maps/RustboroCity_Mart/scripts.pory"
# 8 "data/maps/RustboroCity_Mart/scripts.pory"
	lock
# 9 "data/maps/RustboroCity_Mart/scripts.pory"
# 5 "data/maps/RustboroCity_Mart/scripts.pory"
# 10 "data/maps/RustboroCity_Mart/scripts.pory"
	faceplayer
# 11 "data/maps/RustboroCity_Mart/scripts.pory"
# 6 "data/maps/RustboroCity_Mart/scripts.pory"
# 12 "data/maps/RustboroCity_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 13 "data/maps/RustboroCity_Mart/scripts.pory"
# 7 "data/maps/RustboroCity_Mart/scripts.pory"
# 14 "data/maps/RustboroCity_Mart/scripts.pory"
	waitmessage
# 15 "data/maps/RustboroCity_Mart/scripts.pory"
# 8 "data/maps/RustboroCity_Mart/scripts.pory"
# 16 "data/maps/RustboroCity_Mart/scripts.pory"
	goto_if_unset FLAG_MET_DEVON_EMPLOYEE, RustboroCity_Mart_EventScript_Clerk_2
# 17 "data/maps/RustboroCity_Mart/scripts.pory"
RustboroCity_Mart_EventScript_Clerk_1:
# 18 "data/maps/RustboroCity_Mart/scripts.pory"
# 11 "data/maps/RustboroCity_Mart/scripts.pory"
# 19 "data/maps/RustboroCity_Mart/scripts.pory"
	goto_if_set FLAG_MET_DEVON_EMPLOYEE, RustboroCity_Mart_EventScript_Clerk_5
# 20 "data/maps/RustboroCity_Mart/scripts.pory"
RustboroCity_Mart_EventScript_Clerk_4:
# 21 "data/maps/RustboroCity_Mart/scripts.pory"
	end
# 22 "data/maps/RustboroCity_Mart/scripts.pory"

# 23 "data/maps/RustboroCity_Mart/scripts.pory"
RustboroCity_Mart_EventScript_Clerk_2:
# 24 "data/maps/RustboroCity_Mart/scripts.pory"
# 9 "data/maps/RustboroCity_Mart/scripts.pory"
# 25 "data/maps/RustboroCity_Mart/scripts.pory"
	goto RustboroCity_Mart_EventScript_PokemartBasic
# 26 "data/maps/RustboroCity_Mart/scripts.pory"
	goto RustboroCity_Mart_EventScript_Clerk_1
# 27 "data/maps/RustboroCity_Mart/scripts.pory"

# 28 "data/maps/RustboroCity_Mart/scripts.pory"
RustboroCity_Mart_EventScript_Clerk_5:
# 29 "data/maps/RustboroCity_Mart/scripts.pory"
# 12 "data/maps/RustboroCity_Mart/scripts.pory"
# 30 "data/maps/RustboroCity_Mart/scripts.pory"
	goto RustboroCity_Mart_EventScript_PokemartExpanded
# 31 "data/maps/RustboroCity_Mart/scripts.pory"
	goto RustboroCity_Mart_EventScript_Clerk_4
# 32 "data/maps/RustboroCity_Mart/scripts.pory"

# 33 "data/maps/RustboroCity_Mart/scripts.pory"

# 34 "data/maps/RustboroCity_Mart/scripts.pory"
RustboroCity_Mart_EventScript_PokemartBasic::
# 35 "data/maps/RustboroCity_Mart/scripts.pory"
# 18 "data/maps/RustboroCity_Mart/scripts.pory"
# 36 "data/maps/RustboroCity_Mart/scripts.pory"
	pokemart RustboroCity_Mart_Pokemart_Basic
# 37 "data/maps/RustboroCity_Mart/scripts.pory"
# 19 "data/maps/RustboroCity_Mart/scripts.pory"
# 38 "data/maps/RustboroCity_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 39 "data/maps/RustboroCity_Mart/scripts.pory"
# 20 "data/maps/RustboroCity_Mart/scripts.pory"
# 40 "data/maps/RustboroCity_Mart/scripts.pory"
	release
# 41 "data/maps/RustboroCity_Mart/scripts.pory"
	end
# 42 "data/maps/RustboroCity_Mart/scripts.pory"

# 43 "data/maps/RustboroCity_Mart/scripts.pory"

# 44 "data/maps/RustboroCity_Mart/scripts.pory"
RustboroCity_Mart_Pokemart_Basic::
# 45 "data/maps/RustboroCity_Mart/scripts.pory"
# 25 "data/maps/RustboroCity_Mart/scripts.pory"
# 46 "data/maps/RustboroCity_Mart/scripts.pory"
	pokemartlistend
# 47 "data/maps/RustboroCity_Mart/scripts.pory"
	return
# 48 "data/maps/RustboroCity_Mart/scripts.pory"

# 49 "data/maps/RustboroCity_Mart/scripts.pory"

# 50 "data/maps/RustboroCity_Mart/scripts.pory"
RustboroCity_Mart_EventScript_PokemartExpanded::
# 51 "data/maps/RustboroCity_Mart/scripts.pory"
# 29 "data/maps/RustboroCity_Mart/scripts.pory"
# 52 "data/maps/RustboroCity_Mart/scripts.pory"
	pokemart RustboroCity_Mart_Pokemart_Expanded
# 53 "data/maps/RustboroCity_Mart/scripts.pory"
# 30 "data/maps/RustboroCity_Mart/scripts.pory"
# 54 "data/maps/RustboroCity_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 55 "data/maps/RustboroCity_Mart/scripts.pory"
# 31 "data/maps/RustboroCity_Mart/scripts.pory"
# 56 "data/maps/RustboroCity_Mart/scripts.pory"
	release
# 57 "data/maps/RustboroCity_Mart/scripts.pory"
	end
# 58 "data/maps/RustboroCity_Mart/scripts.pory"

# 59 "data/maps/RustboroCity_Mart/scripts.pory"

# 60 "data/maps/RustboroCity_Mart/scripts.pory"
RustboroCity_Mart_Pokemart_Expanded::
# 61 "data/maps/RustboroCity_Mart/scripts.pory"
# 36 "data/maps/RustboroCity_Mart/scripts.pory"
# 62 "data/maps/RustboroCity_Mart/scripts.pory"
	pokemartlistend
# 63 "data/maps/RustboroCity_Mart/scripts.pory"
	return
# 64 "data/maps/RustboroCity_Mart/scripts.pory"

# 65 "data/maps/RustboroCity_Mart/scripts.pory"

# 66 "data/maps/RustboroCity_Mart/scripts.pory"
RustboroCity_Mart_EventScript_PokefanF::
# 67 "data/maps/RustboroCity_Mart/scripts.pory"
# 40 "data/maps/RustboroCity_Mart/scripts.pory"
# 68 "data/maps/RustboroCity_Mart/scripts.pory"
	msgbox RustboroCity_Mart_Text_BuyingHealsInCaseOfShroomish, MSGBOX_NPC
# 69 "data/maps/RustboroCity_Mart/scripts.pory"
	end
# 70 "data/maps/RustboroCity_Mart/scripts.pory"

# 71 "data/maps/RustboroCity_Mart/scripts.pory"

# 72 "data/maps/RustboroCity_Mart/scripts.pory"
RustboroCity_Mart_EventScript_Boy::
# 73 "data/maps/RustboroCity_Mart/scripts.pory"
# 45 "data/maps/RustboroCity_Mart/scripts.pory"
# 74 "data/maps/RustboroCity_Mart/scripts.pory"
	msgbox RustboroCity_Mart_Text_ShouldBuySuperPotionsInstead, MSGBOX_NPC
# 75 "data/maps/RustboroCity_Mart/scripts.pory"
	end
# 76 "data/maps/RustboroCity_Mart/scripts.pory"

# 77 "data/maps/RustboroCity_Mart/scripts.pory"

# 78 "data/maps/RustboroCity_Mart/scripts.pory"
RustboroCity_Mart_EventScript_BugCatcher::
# 79 "data/maps/RustboroCity_Mart/scripts.pory"
# 50 "data/maps/RustboroCity_Mart/scripts.pory"
# 80 "data/maps/RustboroCity_Mart/scripts.pory"
	msgbox RustboroCity_Mart_Text_GettingEscapeRopeJustInCase, MSGBOX_NPC
# 81 "data/maps/RustboroCity_Mart/scripts.pory"
	end
# 82 "data/maps/RustboroCity_Mart/scripts.pory"

# 83 "data/maps/RustboroCity_Mart/scripts.pory"

# 84 "data/maps/RustboroCity_Mart/scripts.pory"
RustboroCity_Mart_Text_BuyingHealsInCaseOfShroomish::
# 85 "data/maps/RustboroCity_Mart/scripts.pory"
# 54 "data/maps/RustboroCity_Mart/scripts.pory"
# 86 "data/maps/RustboroCity_Mart/scripts.pory"
	.string "I'm buying some PARLYZ HEALS and\n"
# 87 "data/maps/RustboroCity_Mart/scripts.pory"
	.string "ANTIDOTES.\p"
# 88 "data/maps/RustboroCity_Mart/scripts.pory"
	.string "Just in case I run into SHROOMISH\n"
# 89 "data/maps/RustboroCity_Mart/scripts.pory"
	.string "in PETALBURG WOODS.$"
# 90 "data/maps/RustboroCity_Mart/scripts.pory"

# 91 "data/maps/RustboroCity_Mart/scripts.pory"
RustboroCity_Mart_Text_ShouldBuySuperPotionsInstead::
# 92 "data/maps/RustboroCity_Mart/scripts.pory"
# 61 "data/maps/RustboroCity_Mart/scripts.pory"
# 93 "data/maps/RustboroCity_Mart/scripts.pory"
	.string "My POKéMON evolved.\n"
# 94 "data/maps/RustboroCity_Mart/scripts.pory"
	.string "It has a lot of HP now.\p"
# 95 "data/maps/RustboroCity_Mart/scripts.pory"
	.string "I should buy SUPER POTIONS for it\n"
# 96 "data/maps/RustboroCity_Mart/scripts.pory"
	.string "instead of ordinary POTIONS.$"
# 97 "data/maps/RustboroCity_Mart/scripts.pory"

# 98 "data/maps/RustboroCity_Mart/scripts.pory"
RustboroCity_Mart_Text_GettingEscapeRopeJustInCase::
# 99 "data/maps/RustboroCity_Mart/scripts.pory"
# 68 "data/maps/RustboroCity_Mart/scripts.pory"
# 100 "data/maps/RustboroCity_Mart/scripts.pory"
	.string "I'm getting an ESCAPE ROPE just in\n"
# 101 "data/maps/RustboroCity_Mart/scripts.pory"
	.string "case I get lost in a cave.\p"
# 102 "data/maps/RustboroCity_Mart/scripts.pory"
	.string "I just need to use it to get back to\n"
# 103 "data/maps/RustboroCity_Mart/scripts.pory"
	.string "the entrance.$"
