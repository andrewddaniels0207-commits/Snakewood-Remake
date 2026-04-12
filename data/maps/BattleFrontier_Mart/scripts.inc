# 1 "data/maps/BattleFrontier_Mart/scripts.pory"

# 2 "data/maps/BattleFrontier_Mart/scripts.pory"
BattleFrontier_Mart_MapScripts::
# 3 "data/maps/BattleFrontier_Mart/scripts.pory"
	.byte 0
# 4 "data/maps/BattleFrontier_Mart/scripts.pory"

# 5 "data/maps/BattleFrontier_Mart/scripts.pory"

# 6 "data/maps/BattleFrontier_Mart/scripts.pory"
BattleFrontier_Mart_EventScript_Clerk::
# 7 "data/maps/BattleFrontier_Mart/scripts.pory"
# 4 "data/maps/BattleFrontier_Mart/scripts.pory"
# 8 "data/maps/BattleFrontier_Mart/scripts.pory"
	lock
# 9 "data/maps/BattleFrontier_Mart/scripts.pory"
# 5 "data/maps/BattleFrontier_Mart/scripts.pory"
# 10 "data/maps/BattleFrontier_Mart/scripts.pory"
	faceplayer
# 11 "data/maps/BattleFrontier_Mart/scripts.pory"
# 6 "data/maps/BattleFrontier_Mart/scripts.pory"
# 12 "data/maps/BattleFrontier_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 13 "data/maps/BattleFrontier_Mart/scripts.pory"
# 7 "data/maps/BattleFrontier_Mart/scripts.pory"
# 14 "data/maps/BattleFrontier_Mart/scripts.pory"
	waitmessage
# 15 "data/maps/BattleFrontier_Mart/scripts.pory"
# 8 "data/maps/BattleFrontier_Mart/scripts.pory"
# 16 "data/maps/BattleFrontier_Mart/scripts.pory"
	pokemart BattleFrontier_Mart_Pokemart
# 17 "data/maps/BattleFrontier_Mart/scripts.pory"
# 9 "data/maps/BattleFrontier_Mart/scripts.pory"
# 18 "data/maps/BattleFrontier_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 19 "data/maps/BattleFrontier_Mart/scripts.pory"
# 10 "data/maps/BattleFrontier_Mart/scripts.pory"
# 20 "data/maps/BattleFrontier_Mart/scripts.pory"
	release
# 21 "data/maps/BattleFrontier_Mart/scripts.pory"
	end
# 22 "data/maps/BattleFrontier_Mart/scripts.pory"

# 23 "data/maps/BattleFrontier_Mart/scripts.pory"

# 24 "data/maps/BattleFrontier_Mart/scripts.pory"
BattleFrontier_Mart_Pokemart::
# 25 "data/maps/BattleFrontier_Mart/scripts.pory"
# 15 "data/maps/BattleFrontier_Mart/scripts.pory"
# 26 "data/maps/BattleFrontier_Mart/scripts.pory"
	pokemartlistend
# 27 "data/maps/BattleFrontier_Mart/scripts.pory"
	return
# 28 "data/maps/BattleFrontier_Mart/scripts.pory"

# 29 "data/maps/BattleFrontier_Mart/scripts.pory"

# 30 "data/maps/BattleFrontier_Mart/scripts.pory"
BattleFrontier_Mart_EventScript_OldMan::
# 31 "data/maps/BattleFrontier_Mart/scripts.pory"
# 19 "data/maps/BattleFrontier_Mart/scripts.pory"
# 32 "data/maps/BattleFrontier_Mart/scripts.pory"
	msgbox BattleFrontier_Mart_Text_ChaperonGrandson, MSGBOX_NPC
# 33 "data/maps/BattleFrontier_Mart/scripts.pory"
	end
# 34 "data/maps/BattleFrontier_Mart/scripts.pory"

# 35 "data/maps/BattleFrontier_Mart/scripts.pory"

# 36 "data/maps/BattleFrontier_Mart/scripts.pory"
BattleFrontier_Mart_EventScript_OldWoman::
# 37 "data/maps/BattleFrontier_Mart/scripts.pory"
# 24 "data/maps/BattleFrontier_Mart/scripts.pory"
# 38 "data/maps/BattleFrontier_Mart/scripts.pory"
	lock
# 39 "data/maps/BattleFrontier_Mart/scripts.pory"
# 25 "data/maps/BattleFrontier_Mart/scripts.pory"
# 40 "data/maps/BattleFrontier_Mart/scripts.pory"
	applymovement LOCALID_FRONTIER_MART_OLD_WOMAN, Common_Movement_FaceDown
# 41 "data/maps/BattleFrontier_Mart/scripts.pory"
# 26 "data/maps/BattleFrontier_Mart/scripts.pory"
# 42 "data/maps/BattleFrontier_Mart/scripts.pory"
	waitmovement 0
# 43 "data/maps/BattleFrontier_Mart/scripts.pory"
# 27 "data/maps/BattleFrontier_Mart/scripts.pory"
# 44 "data/maps/BattleFrontier_Mart/scripts.pory"
	msgbox BattleFrontier_Mart_Text_ProteinMakeNiceGift, MSGBOX_DEFAULT
# 45 "data/maps/BattleFrontier_Mart/scripts.pory"
# 28 "data/maps/BattleFrontier_Mart/scripts.pory"
# 46 "data/maps/BattleFrontier_Mart/scripts.pory"
	release
# 47 "data/maps/BattleFrontier_Mart/scripts.pory"
	end
# 48 "data/maps/BattleFrontier_Mart/scripts.pory"

# 49 "data/maps/BattleFrontier_Mart/scripts.pory"

# 50 "data/maps/BattleFrontier_Mart/scripts.pory"
BattleFrontier_Mart_EventScript_Boy::
# 51 "data/maps/BattleFrontier_Mart/scripts.pory"
# 33 "data/maps/BattleFrontier_Mart/scripts.pory"
# 52 "data/maps/BattleFrontier_Mart/scripts.pory"
	msgbox BattleFrontier_Mart_Text_FacilitiesDontAllowItems, MSGBOX_NPC
# 53 "data/maps/BattleFrontier_Mart/scripts.pory"
	end
# 54 "data/maps/BattleFrontier_Mart/scripts.pory"

# 55 "data/maps/BattleFrontier_Mart/scripts.pory"

# 56 "data/maps/BattleFrontier_Mart/scripts.pory"
BattleFrontier_Mart_Text_ChaperonGrandson::
# 57 "data/maps/BattleFrontier_Mart/scripts.pory"
# 37 "data/maps/BattleFrontier_Mart/scripts.pory"
# 58 "data/maps/BattleFrontier_Mart/scripts.pory"
	.string "We came here to chaperon our\n"
# 59 "data/maps/BattleFrontier_Mart/scripts.pory"
	.string "grandson.\p"
# 60 "data/maps/BattleFrontier_Mart/scripts.pory"
	.string "But since we're here, we thought\n"
# 61 "data/maps/BattleFrontier_Mart/scripts.pory"
	.string "we should get some souvenirs.$"
# 62 "data/maps/BattleFrontier_Mart/scripts.pory"

# 63 "data/maps/BattleFrontier_Mart/scripts.pory"
BattleFrontier_Mart_Text_ProteinMakeNiceGift::
# 64 "data/maps/BattleFrontier_Mart/scripts.pory"
# 44 "data/maps/BattleFrontier_Mart/scripts.pory"
# 65 "data/maps/BattleFrontier_Mart/scripts.pory"
	.string "Dear, what do you think of this?\n"
# 66 "data/maps/BattleFrontier_Mart/scripts.pory"
	.string "Wouldn't this make a nice gift?\p"
# 67 "data/maps/BattleFrontier_Mart/scripts.pory"
	.string "It's…PRO…TE…IN?\n"
# 68 "data/maps/BattleFrontier_Mart/scripts.pory"
	.string "It sounds delicious, doesn't it?$"
# 69 "data/maps/BattleFrontier_Mart/scripts.pory"

# 70 "data/maps/BattleFrontier_Mart/scripts.pory"
BattleFrontier_Mart_Text_FacilitiesDontAllowItems::
# 71 "data/maps/BattleFrontier_Mart/scripts.pory"
# 51 "data/maps/BattleFrontier_Mart/scripts.pory"
# 72 "data/maps/BattleFrontier_Mart/scripts.pory"
	.string "A lot of the BATTLE FRONTIER's\n"
# 73 "data/maps/BattleFrontier_Mart/scripts.pory"
	.string "facilities don't allow the use of items\l"
# 74 "data/maps/BattleFrontier_Mart/scripts.pory"
	.string "during battles.\p"
# 75 "data/maps/BattleFrontier_Mart/scripts.pory"
	.string "That rule makes things tougher than\n"
# 76 "data/maps/BattleFrontier_Mart/scripts.pory"
	.string "they already are!$"
