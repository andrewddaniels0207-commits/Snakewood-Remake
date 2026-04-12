# 1 "data/maps/PetalburgCity_Mart/scripts.pory"

# 2 "data/maps/PetalburgCity_Mart/scripts.pory"
PetalburgCity_Mart_MapScripts::
# 3 "data/maps/PetalburgCity_Mart/scripts.pory"
	.byte 0
# 4 "data/maps/PetalburgCity_Mart/scripts.pory"

# 5 "data/maps/PetalburgCity_Mart/scripts.pory"

# 6 "data/maps/PetalburgCity_Mart/scripts.pory"
PetalburgCity_Mart_EventScript_Clerk::
# 7 "data/maps/PetalburgCity_Mart/scripts.pory"
# 4 "data/maps/PetalburgCity_Mart/scripts.pory"
# 8 "data/maps/PetalburgCity_Mart/scripts.pory"
	lock
# 9 "data/maps/PetalburgCity_Mart/scripts.pory"
# 5 "data/maps/PetalburgCity_Mart/scripts.pory"
# 10 "data/maps/PetalburgCity_Mart/scripts.pory"
	faceplayer
# 11 "data/maps/PetalburgCity_Mart/scripts.pory"
# 6 "data/maps/PetalburgCity_Mart/scripts.pory"
# 12 "data/maps/PetalburgCity_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 13 "data/maps/PetalburgCity_Mart/scripts.pory"
# 7 "data/maps/PetalburgCity_Mart/scripts.pory"
# 14 "data/maps/PetalburgCity_Mart/scripts.pory"
	waitmessage
# 15 "data/maps/PetalburgCity_Mart/scripts.pory"
# 8 "data/maps/PetalburgCity_Mart/scripts.pory"
# 16 "data/maps/PetalburgCity_Mart/scripts.pory"
	goto_if_set FLAG_PETALBURG_MART_EXPANDED_ITEMS, PetalburgCity_Mart_EventScript_Clerk_2
# 17 "data/maps/PetalburgCity_Mart/scripts.pory"
PetalburgCity_Mart_EventScript_Clerk_1:
# 18 "data/maps/PetalburgCity_Mart/scripts.pory"
# 11 "data/maps/PetalburgCity_Mart/scripts.pory"
# 19 "data/maps/PetalburgCity_Mart/scripts.pory"
	pokemart PetalburgCity_Mart_Pokemart_Basic
# 20 "data/maps/PetalburgCity_Mart/scripts.pory"
# 12 "data/maps/PetalburgCity_Mart/scripts.pory"
# 21 "data/maps/PetalburgCity_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 22 "data/maps/PetalburgCity_Mart/scripts.pory"
# 13 "data/maps/PetalburgCity_Mart/scripts.pory"
# 23 "data/maps/PetalburgCity_Mart/scripts.pory"
	release
# 24 "data/maps/PetalburgCity_Mart/scripts.pory"
	end
# 25 "data/maps/PetalburgCity_Mart/scripts.pory"

# 26 "data/maps/PetalburgCity_Mart/scripts.pory"
PetalburgCity_Mart_EventScript_Clerk_2:
# 27 "data/maps/PetalburgCity_Mart/scripts.pory"
# 9 "data/maps/PetalburgCity_Mart/scripts.pory"
# 28 "data/maps/PetalburgCity_Mart/scripts.pory"
	goto PetalburgCity_Mart_EventScript_ExpandedItems
# 29 "data/maps/PetalburgCity_Mart/scripts.pory"
	goto PetalburgCity_Mart_EventScript_Clerk_1
# 30 "data/maps/PetalburgCity_Mart/scripts.pory"

# 31 "data/maps/PetalburgCity_Mart/scripts.pory"

# 32 "data/maps/PetalburgCity_Mart/scripts.pory"
PetalburgCity_Mart_Pokemart_Basic::
# 33 "data/maps/PetalburgCity_Mart/scripts.pory"
# 18 "data/maps/PetalburgCity_Mart/scripts.pory"
# 34 "data/maps/PetalburgCity_Mart/scripts.pory"
	pokemartlistend
# 35 "data/maps/PetalburgCity_Mart/scripts.pory"
	return
# 36 "data/maps/PetalburgCity_Mart/scripts.pory"

# 37 "data/maps/PetalburgCity_Mart/scripts.pory"

# 38 "data/maps/PetalburgCity_Mart/scripts.pory"
PetalburgCity_Mart_EventScript_ExpandedItems::
# 39 "data/maps/PetalburgCity_Mart/scripts.pory"
# 22 "data/maps/PetalburgCity_Mart/scripts.pory"
# 40 "data/maps/PetalburgCity_Mart/scripts.pory"
	pokemart PetalburgCity_Mart_Pokemart_Expanded
# 41 "data/maps/PetalburgCity_Mart/scripts.pory"
# 23 "data/maps/PetalburgCity_Mart/scripts.pory"
# 42 "data/maps/PetalburgCity_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 43 "data/maps/PetalburgCity_Mart/scripts.pory"
# 24 "data/maps/PetalburgCity_Mart/scripts.pory"
# 44 "data/maps/PetalburgCity_Mart/scripts.pory"
	release
# 45 "data/maps/PetalburgCity_Mart/scripts.pory"
	end
# 46 "data/maps/PetalburgCity_Mart/scripts.pory"

# 47 "data/maps/PetalburgCity_Mart/scripts.pory"

# 48 "data/maps/PetalburgCity_Mart/scripts.pory"
PetalburgCity_Mart_Pokemart_Expanded::
# 49 "data/maps/PetalburgCity_Mart/scripts.pory"
# 29 "data/maps/PetalburgCity_Mart/scripts.pory"
# 50 "data/maps/PetalburgCity_Mart/scripts.pory"
	pokemartlistend
# 51 "data/maps/PetalburgCity_Mart/scripts.pory"
	return
# 52 "data/maps/PetalburgCity_Mart/scripts.pory"

# 53 "data/maps/PetalburgCity_Mart/scripts.pory"

# 54 "data/maps/PetalburgCity_Mart/scripts.pory"
PetalburgCity_Mart_EventScript_Woman::
# 55 "data/maps/PetalburgCity_Mart/scripts.pory"
# 33 "data/maps/PetalburgCity_Mart/scripts.pory"
# 56 "data/maps/PetalburgCity_Mart/scripts.pory"
	msgbox PetalburgCity_Mart_Text_WeakWillGrowStronger, MSGBOX_NPC
# 57 "data/maps/PetalburgCity_Mart/scripts.pory"
	end
# 58 "data/maps/PetalburgCity_Mart/scripts.pory"

# 59 "data/maps/PetalburgCity_Mart/scripts.pory"

# 60 "data/maps/PetalburgCity_Mart/scripts.pory"
PetalburgCity_Mart_EventScript_Boy::
# 61 "data/maps/PetalburgCity_Mart/scripts.pory"
# 38 "data/maps/PetalburgCity_Mart/scripts.pory"
# 62 "data/maps/PetalburgCity_Mart/scripts.pory"
	msgbox PetalburgCity_Mart_Text_RepelIsUseful, MSGBOX_NPC
# 63 "data/maps/PetalburgCity_Mart/scripts.pory"
	end
# 64 "data/maps/PetalburgCity_Mart/scripts.pory"

# 65 "data/maps/PetalburgCity_Mart/scripts.pory"

# 66 "data/maps/PetalburgCity_Mart/scripts.pory"
PetalburgCity_Mart_EventScript_Man::
# 67 "data/maps/PetalburgCity_Mart/scripts.pory"
# 43 "data/maps/PetalburgCity_Mart/scripts.pory"
# 68 "data/maps/PetalburgCity_Mart/scripts.pory"
	msgbox PetalburgCity_Mart_Text_TakeSomeAntidotesWithYou, MSGBOX_NPC
# 69 "data/maps/PetalburgCity_Mart/scripts.pory"
	end
# 70 "data/maps/PetalburgCity_Mart/scripts.pory"

# 71 "data/maps/PetalburgCity_Mart/scripts.pory"

# 72 "data/maps/PetalburgCity_Mart/scripts.pory"
PetalburgCity_Mart_Text_WeakWillGrowStronger::
# 73 "data/maps/PetalburgCity_Mart/scripts.pory"
# 47 "data/maps/PetalburgCity_Mart/scripts.pory"
# 74 "data/maps/PetalburgCity_Mart/scripts.pory"
	.string "Even if a POKéMON is weak now,\n"
# 75 "data/maps/PetalburgCity_Mart/scripts.pory"
	.string "it will grow stronger.\p"
# 76 "data/maps/PetalburgCity_Mart/scripts.pory"
	.string "The most important thing is love!\n"
# 77 "data/maps/PetalburgCity_Mart/scripts.pory"
	.string "Love for your POKéMON!$"
# 78 "data/maps/PetalburgCity_Mart/scripts.pory"

# 79 "data/maps/PetalburgCity_Mart/scripts.pory"
PetalburgCity_Mart_Text_RepelIsUseful::
# 80 "data/maps/PetalburgCity_Mart/scripts.pory"
# 54 "data/maps/PetalburgCity_Mart/scripts.pory"
# 81 "data/maps/PetalburgCity_Mart/scripts.pory"
	.string "Do you use REPEL?\n"
# 82 "data/maps/PetalburgCity_Mart/scripts.pory"
	.string "It keeps POKéMON away, so it's\l"
# 83 "data/maps/PetalburgCity_Mart/scripts.pory"
	.string "useful when you're in a hurry.$"
# 84 "data/maps/PetalburgCity_Mart/scripts.pory"

# 85 "data/maps/PetalburgCity_Mart/scripts.pory"
PetalburgCity_Mart_Text_TakeSomeAntidotesWithYou::
# 86 "data/maps/PetalburgCity_Mart/scripts.pory"
# 60 "data/maps/PetalburgCity_Mart/scripts.pory"
# 87 "data/maps/PetalburgCity_Mart/scripts.pory"
	.string "Do you have any ANTIDOTES with\n"
# 88 "data/maps/PetalburgCity_Mart/scripts.pory"
	.string "you?\p"
# 89 "data/maps/PetalburgCity_Mart/scripts.pory"
	.string "If you walk around with a poisoned\n"
# 90 "data/maps/PetalburgCity_Mart/scripts.pory"
	.string "POKéMON, it will lose HP until it faints.\l"
# 91 "data/maps/PetalburgCity_Mart/scripts.pory"
	.string "Take some ANTIDOTES with you.$"
