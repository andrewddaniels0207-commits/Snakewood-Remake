MauvilleCity_Mart_MapScripts::
	.byte 0


MauvilleCity_Mart_EventScript_Clerk::
# 4 "data/maps/MauvilleCity_Mart/scripts.pory"
	lock
# 5 "data/maps/MauvilleCity_Mart/scripts.pory"
	faceplayer
# 6 "data/maps/MauvilleCity_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 7 "data/maps/MauvilleCity_Mart/scripts.pory"
	waitmessage
# 8 "data/maps/MauvilleCity_Mart/scripts.pory"
	pokemart MauvilleCity_Mart_Pokemart
# 9 "data/maps/MauvilleCity_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 10 "data/maps/MauvilleCity_Mart/scripts.pory"
	release
	end


MauvilleCity_Mart_Pokemart::
# 15 "data/maps/MauvilleCity_Mart/scripts.pory"
	pokemartlistend
	return


MauvilleCity_Mart_EventScript_ExpertM::
# 19 "data/maps/MauvilleCity_Mart/scripts.pory"
	msgbox MauvilleCity_Mart_Text_ItemsToTemporarilyElevateStats, MSGBOX_NPC
	end


MauvilleCity_Mart_EventScript_Man::
# 24 "data/maps/MauvilleCity_Mart/scripts.pory"
	msgbox MauvilleCity_Mart_Text_DecisionsDetermineBattle, MSGBOX_NPC
	end


MauvilleCity_Mart_Text_ItemsToTemporarilyElevateStats::
# 28 "data/maps/MauvilleCity_Mart/scripts.pory"
	.string "There are items that temporarily\n"
	.string "elevate the stats of POKéMON.\p"
	.string "The ones I know you use in battle\n"
	.string "are X ATTACK and X DEFEND…\p"
	.string "I do believe that there are others\n"
	.string "like them.$"

MauvilleCity_Mart_Text_DecisionsDetermineBattle::
# 37 "data/maps/MauvilleCity_Mart/scripts.pory"
	.string "Use a certain move, or use an item\n"
	.string "instead…\p"
	.string "The TRAINER's decisions determine how\n"
	.string "battles turn out, I think.$"
