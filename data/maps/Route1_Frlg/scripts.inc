# 1 "data/maps/Route1_Frlg/scripts.pory"

# 2 "data/maps/Route1_Frlg/scripts.pory"
Route1_Frlg_MapScripts::
# 3 "data/maps/Route1_Frlg/scripts.pory"
	.byte 0
# 4 "data/maps/Route1_Frlg/scripts.pory"

# 5 "data/maps/Route1_Frlg/scripts.pory"

# 6 "data/maps/Route1_Frlg/scripts.pory"
Route1_EventScript_MartClerk::
# 7 "data/maps/Route1_Frlg/scripts.pory"
# 4 "data/maps/Route1_Frlg/scripts.pory"
# 8 "data/maps/Route1_Frlg/scripts.pory"
	lock
# 9 "data/maps/Route1_Frlg/scripts.pory"
# 5 "data/maps/Route1_Frlg/scripts.pory"
# 10 "data/maps/Route1_Frlg/scripts.pory"
	faceplayer
# 11 "data/maps/Route1_Frlg/scripts.pory"
# 6 "data/maps/Route1_Frlg/scripts.pory"
# 12 "data/maps/Route1_Frlg/scripts.pory"
	goto_if_set FLAG_GOT_POTION_ON_ROUTE_1, Route1_EventScript_MartClerk_2
# 13 "data/maps/Route1_Frlg/scripts.pory"
Route1_EventScript_MartClerk_1:
# 14 "data/maps/Route1_Frlg/scripts.pory"
# 9 "data/maps/Route1_Frlg/scripts.pory"
# 15 "data/maps/Route1_Frlg/scripts.pory"
	msgbox Route1_Text_WorkAtPokeMartTakeSample
# 16 "data/maps/Route1_Frlg/scripts.pory"
# 10 "data/maps/Route1_Frlg/scripts.pory"
# 17 "data/maps/Route1_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 18 "data/maps/Route1_Frlg/scripts.pory"
# 11 "data/maps/Route1_Frlg/scripts.pory"
# 19 "data/maps/Route1_Frlg/scripts.pory"
	checkitemspace ITEM_POTION
# 20 "data/maps/Route1_Frlg/scripts.pory"
# 12 "data/maps/Route1_Frlg/scripts.pory"
# 21 "data/maps/Route1_Frlg/scripts.pory"
	compare VAR_RESULT, FALSE
# 22 "data/maps/Route1_Frlg/scripts.pory"
	goto_if_eq Route1_EventScript_MartClerk_5
# 23 "data/maps/Route1_Frlg/scripts.pory"
Route1_EventScript_MartClerk_4:
# 24 "data/maps/Route1_Frlg/scripts.pory"
# 15 "data/maps/Route1_Frlg/scripts.pory"
# 25 "data/maps/Route1_Frlg/scripts.pory"
	bufferitemname STR_VAR_2, ITEM_POTION
# 26 "data/maps/Route1_Frlg/scripts.pory"
# 16 "data/maps/Route1_Frlg/scripts.pory"
# 27 "data/maps/Route1_Frlg/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 28 "data/maps/Route1_Frlg/scripts.pory"
# 17 "data/maps/Route1_Frlg/scripts.pory"
# 29 "data/maps/Route1_Frlg/scripts.pory"
	message gText_ObtainedTheItem
# 30 "data/maps/Route1_Frlg/scripts.pory"
# 18 "data/maps/Route1_Frlg/scripts.pory"
# 31 "data/maps/Route1_Frlg/scripts.pory"
	waitmessage
# 32 "data/maps/Route1_Frlg/scripts.pory"
# 19 "data/maps/Route1_Frlg/scripts.pory"
# 33 "data/maps/Route1_Frlg/scripts.pory"
	waitfanfare
# 34 "data/maps/Route1_Frlg/scripts.pory"
# 20 "data/maps/Route1_Frlg/scripts.pory"
# 35 "data/maps/Route1_Frlg/scripts.pory"
	additem ITEM_POTION
# 36 "data/maps/Route1_Frlg/scripts.pory"
# 21 "data/maps/Route1_Frlg/scripts.pory"
# 37 "data/maps/Route1_Frlg/scripts.pory"
	msgbox Route1_Text_PutPotionAway
# 38 "data/maps/Route1_Frlg/scripts.pory"
# 22 "data/maps/Route1_Frlg/scripts.pory"
# 39 "data/maps/Route1_Frlg/scripts.pory"
	call EventScript_RestorePrevTextColor
# 40 "data/maps/Route1_Frlg/scripts.pory"
# 23 "data/maps/Route1_Frlg/scripts.pory"
# 41 "data/maps/Route1_Frlg/scripts.pory"
	setflag FLAG_GOT_POTION_ON_ROUTE_1
# 42 "data/maps/Route1_Frlg/scripts.pory"
# 24 "data/maps/Route1_Frlg/scripts.pory"
# 43 "data/maps/Route1_Frlg/scripts.pory"
	release
# 44 "data/maps/Route1_Frlg/scripts.pory"
	end
# 45 "data/maps/Route1_Frlg/scripts.pory"

# 46 "data/maps/Route1_Frlg/scripts.pory"
Route1_EventScript_MartClerk_2:
# 47 "data/maps/Route1_Frlg/scripts.pory"
# 7 "data/maps/Route1_Frlg/scripts.pory"
# 48 "data/maps/Route1_Frlg/scripts.pory"
	goto Route1_EventScript_AlreadyGotPotion
# 49 "data/maps/Route1_Frlg/scripts.pory"
	goto Route1_EventScript_MartClerk_1
# 50 "data/maps/Route1_Frlg/scripts.pory"

# 51 "data/maps/Route1_Frlg/scripts.pory"
Route1_EventScript_MartClerk_5:
# 52 "data/maps/Route1_Frlg/scripts.pory"
# 13 "data/maps/Route1_Frlg/scripts.pory"
# 53 "data/maps/Route1_Frlg/scripts.pory"
	goto EventScript_BagIsFull
# 54 "data/maps/Route1_Frlg/scripts.pory"
	goto Route1_EventScript_MartClerk_4
# 55 "data/maps/Route1_Frlg/scripts.pory"

# 56 "data/maps/Route1_Frlg/scripts.pory"

# 57 "data/maps/Route1_Frlg/scripts.pory"
Route1_EventScript_AlreadyGotPotion::
# 58 "data/maps/Route1_Frlg/scripts.pory"
# 29 "data/maps/Route1_Frlg/scripts.pory"
# 59 "data/maps/Route1_Frlg/scripts.pory"
	msgbox Route1_Text_ComeSeeUsIfYouNeedPokeBalls
# 60 "data/maps/Route1_Frlg/scripts.pory"
# 30 "data/maps/Route1_Frlg/scripts.pory"
# 61 "data/maps/Route1_Frlg/scripts.pory"
	release
# 62 "data/maps/Route1_Frlg/scripts.pory"
	end
# 63 "data/maps/Route1_Frlg/scripts.pory"

# 64 "data/maps/Route1_Frlg/scripts.pory"

# 65 "data/maps/Route1_Frlg/scripts.pory"
Route1_EventScript_Boy::
# 66 "data/maps/Route1_Frlg/scripts.pory"
# 35 "data/maps/Route1_Frlg/scripts.pory"
# 67 "data/maps/Route1_Frlg/scripts.pory"
	msgbox Route1_Text_CanJumpFromLedges, MSGBOX_NPC
# 68 "data/maps/Route1_Frlg/scripts.pory"
	end
# 69 "data/maps/Route1_Frlg/scripts.pory"

# 70 "data/maps/Route1_Frlg/scripts.pory"

# 71 "data/maps/Route1_Frlg/scripts.pory"
Route1_EventScript_RouteSign::
# 72 "data/maps/Route1_Frlg/scripts.pory"
# 40 "data/maps/Route1_Frlg/scripts.pory"
# 73 "data/maps/Route1_Frlg/scripts.pory"
	msgbox Route1_Text_RouteSign, MSGBOX_SIGN
# 74 "data/maps/Route1_Frlg/scripts.pory"
	end
# 75 "data/maps/Route1_Frlg/scripts.pory"

# 76 "data/maps/Route1_Frlg/scripts.pory"

# 77 "data/maps/Route1_Frlg/scripts.pory"
Route1_Text_WorkAtPokeMartTakeSample::
# 78 "data/maps/Route1_Frlg/scripts.pory"
# 44 "data/maps/Route1_Frlg/scripts.pory"
# 79 "data/maps/Route1_Frlg/scripts.pory"
	.string "Hi!\n"
# 80 "data/maps/Route1_Frlg/scripts.pory"
	.string "I work at a POKéMON MART.\p"
# 81 "data/maps/Route1_Frlg/scripts.pory"
	.string "It's part of a convenient chain\n"
# 82 "data/maps/Route1_Frlg/scripts.pory"
	.string "selling all sorts of items.\p"
# 83 "data/maps/Route1_Frlg/scripts.pory"
	.string "Please, visit us in VIRIDIAN CITY.\p"
# 84 "data/maps/Route1_Frlg/scripts.pory"
	.string "I know, I'll give you a sample.\n"
# 85 "data/maps/Route1_Frlg/scripts.pory"
	.string "Here you go!$"
# 86 "data/maps/Route1_Frlg/scripts.pory"

# 87 "data/maps/Route1_Frlg/scripts.pory"
Route1_Text_ComeSeeUsIfYouNeedPokeBalls::
# 88 "data/maps/Route1_Frlg/scripts.pory"
# 54 "data/maps/Route1_Frlg/scripts.pory"
# 89 "data/maps/Route1_Frlg/scripts.pory"
	.string "Please come see us if you need\n"
# 90 "data/maps/Route1_Frlg/scripts.pory"
	.string "POKé BALLS for catching POKéMON.$"
# 91 "data/maps/Route1_Frlg/scripts.pory"

# 92 "data/maps/Route1_Frlg/scripts.pory"
Route1_Text_PutPotionAway::
# 93 "data/maps/Route1_Frlg/scripts.pory"
# 59 "data/maps/Route1_Frlg/scripts.pory"
# 94 "data/maps/Route1_Frlg/scripts.pory"
	.string "{PLAYER} put the POTION away in\n"
# 95 "data/maps/Route1_Frlg/scripts.pory"
	.string "the BAG's ITEMS POCKET.$"
# 96 "data/maps/Route1_Frlg/scripts.pory"

# 97 "data/maps/Route1_Frlg/scripts.pory"
Route1_Text_CanJumpFromLedges::
# 98 "data/maps/Route1_Frlg/scripts.pory"
# 64 "data/maps/Route1_Frlg/scripts.pory"
# 99 "data/maps/Route1_Frlg/scripts.pory"
	.string "See those ledges along the road?\p"
# 100 "data/maps/Route1_Frlg/scripts.pory"
	.string "It's a bit scary, but you can jump\n"
# 101 "data/maps/Route1_Frlg/scripts.pory"
	.string "from them.\p"
# 102 "data/maps/Route1_Frlg/scripts.pory"
	.string "You can get back to PALLET TOWN\n"
# 103 "data/maps/Route1_Frlg/scripts.pory"
	.string "quicker that way.$"
# 104 "data/maps/Route1_Frlg/scripts.pory"

# 105 "data/maps/Route1_Frlg/scripts.pory"
Route1_Text_RouteSign::
# 106 "data/maps/Route1_Frlg/scripts.pory"
# 72 "data/maps/Route1_Frlg/scripts.pory"
# 107 "data/maps/Route1_Frlg/scripts.pory"
	.string "ROUTE 1\n"
# 108 "data/maps/Route1_Frlg/scripts.pory"
	.string "PALLET TOWN - VIRIDIAN CITY$"
