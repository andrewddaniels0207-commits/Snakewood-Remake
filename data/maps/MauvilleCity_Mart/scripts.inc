# 1 "data/maps/MauvilleCity_Mart/scripts.pory"

# 2 "data/maps/MauvilleCity_Mart/scripts.pory"
MauvilleCity_Mart_MapScripts::
# 3 "data/maps/MauvilleCity_Mart/scripts.pory"
	.byte 0
# 4 "data/maps/MauvilleCity_Mart/scripts.pory"

# 5 "data/maps/MauvilleCity_Mart/scripts.pory"

# 6 "data/maps/MauvilleCity_Mart/scripts.pory"
MauvilleCity_Mart_EventScript_Clerk::
# 7 "data/maps/MauvilleCity_Mart/scripts.pory"
# 4 "data/maps/MauvilleCity_Mart/scripts.pory"
# 8 "data/maps/MauvilleCity_Mart/scripts.pory"
	lock
# 9 "data/maps/MauvilleCity_Mart/scripts.pory"
# 5 "data/maps/MauvilleCity_Mart/scripts.pory"
# 10 "data/maps/MauvilleCity_Mart/scripts.pory"
	faceplayer
# 11 "data/maps/MauvilleCity_Mart/scripts.pory"
# 6 "data/maps/MauvilleCity_Mart/scripts.pory"
# 12 "data/maps/MauvilleCity_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 13 "data/maps/MauvilleCity_Mart/scripts.pory"
# 7 "data/maps/MauvilleCity_Mart/scripts.pory"
# 14 "data/maps/MauvilleCity_Mart/scripts.pory"
	waitmessage
# 15 "data/maps/MauvilleCity_Mart/scripts.pory"
# 8 "data/maps/MauvilleCity_Mart/scripts.pory"
# 16 "data/maps/MauvilleCity_Mart/scripts.pory"
	pokemart MauvilleCity_Mart_Pokemart
# 17 "data/maps/MauvilleCity_Mart/scripts.pory"
# 9 "data/maps/MauvilleCity_Mart/scripts.pory"
# 18 "data/maps/MauvilleCity_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 19 "data/maps/MauvilleCity_Mart/scripts.pory"
# 10 "data/maps/MauvilleCity_Mart/scripts.pory"
# 20 "data/maps/MauvilleCity_Mart/scripts.pory"
	release
# 21 "data/maps/MauvilleCity_Mart/scripts.pory"
	end
# 22 "data/maps/MauvilleCity_Mart/scripts.pory"

# 23 "data/maps/MauvilleCity_Mart/scripts.pory"

# 24 "data/maps/MauvilleCity_Mart/scripts.pory"
MauvilleCity_Mart_Pokemart::
# 25 "data/maps/MauvilleCity_Mart/scripts.pory"
# 15 "data/maps/MauvilleCity_Mart/scripts.pory"
# 26 "data/maps/MauvilleCity_Mart/scripts.pory"
	pokemartlistend
# 27 "data/maps/MauvilleCity_Mart/scripts.pory"
	return
# 28 "data/maps/MauvilleCity_Mart/scripts.pory"

# 29 "data/maps/MauvilleCity_Mart/scripts.pory"

# 30 "data/maps/MauvilleCity_Mart/scripts.pory"
MauvilleCity_Mart_EventScript_ExpertM::
# 31 "data/maps/MauvilleCity_Mart/scripts.pory"
# 19 "data/maps/MauvilleCity_Mart/scripts.pory"
# 32 "data/maps/MauvilleCity_Mart/scripts.pory"
	msgbox MauvilleCity_Mart_Text_ItemsToTemporarilyElevateStats, MSGBOX_NPC
# 33 "data/maps/MauvilleCity_Mart/scripts.pory"
	end
# 34 "data/maps/MauvilleCity_Mart/scripts.pory"

# 35 "data/maps/MauvilleCity_Mart/scripts.pory"

# 36 "data/maps/MauvilleCity_Mart/scripts.pory"
MauvilleCity_Mart_EventScript_Man::
# 37 "data/maps/MauvilleCity_Mart/scripts.pory"
# 24 "data/maps/MauvilleCity_Mart/scripts.pory"
# 38 "data/maps/MauvilleCity_Mart/scripts.pory"
	msgbox MauvilleCity_Mart_Text_DecisionsDetermineBattle, MSGBOX_NPC
# 39 "data/maps/MauvilleCity_Mart/scripts.pory"
	end
# 40 "data/maps/MauvilleCity_Mart/scripts.pory"

# 41 "data/maps/MauvilleCity_Mart/scripts.pory"

# 42 "data/maps/MauvilleCity_Mart/scripts.pory"
MauvilleCity_Mart_Text_ItemsToTemporarilyElevateStats::
# 43 "data/maps/MauvilleCity_Mart/scripts.pory"
# 28 "data/maps/MauvilleCity_Mart/scripts.pory"
# 44 "data/maps/MauvilleCity_Mart/scripts.pory"
	.string "There are items that temporarily\n"
# 45 "data/maps/MauvilleCity_Mart/scripts.pory"
	.string "elevate the stats of POKéMON.\p"
# 46 "data/maps/MauvilleCity_Mart/scripts.pory"
	.string "The ones I know you use in battle\n"
# 47 "data/maps/MauvilleCity_Mart/scripts.pory"
	.string "are X ATTACK and X DEFEND…\p"
# 48 "data/maps/MauvilleCity_Mart/scripts.pory"
	.string "I do believe that there are others\n"
# 49 "data/maps/MauvilleCity_Mart/scripts.pory"
	.string "like them.$"
# 50 "data/maps/MauvilleCity_Mart/scripts.pory"

# 51 "data/maps/MauvilleCity_Mart/scripts.pory"
MauvilleCity_Mart_Text_DecisionsDetermineBattle::
# 52 "data/maps/MauvilleCity_Mart/scripts.pory"
# 37 "data/maps/MauvilleCity_Mart/scripts.pory"
# 53 "data/maps/MauvilleCity_Mart/scripts.pory"
	.string "Use a certain move, or use an item\n"
# 54 "data/maps/MauvilleCity_Mart/scripts.pory"
	.string "instead…\p"
# 55 "data/maps/MauvilleCity_Mart/scripts.pory"
	.string "The TRAINER's decisions determine how\n"
# 56 "data/maps/MauvilleCity_Mart/scripts.pory"
	.string "battles turn out, I think.$"
