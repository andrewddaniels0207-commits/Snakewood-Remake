# 1 "data/maps/MossdeepCity_House3/scripts.pory"

# 2 "data/maps/MossdeepCity_House3/scripts.pory"
MossdeepCity_House3_MapScripts::
# 3 "data/maps/MossdeepCity_House3/scripts.pory"
	.byte 0
# 4 "data/maps/MossdeepCity_House3/scripts.pory"

# 5 "data/maps/MossdeepCity_House3/scripts.pory"

# 6 "data/maps/MossdeepCity_House3/scripts.pory"
MossdeepCity_House3_EventScript_SuperRodFisherman::
# 7 "data/maps/MossdeepCity_House3/scripts.pory"
# 4 "data/maps/MossdeepCity_House3/scripts.pory"
# 8 "data/maps/MossdeepCity_House3/scripts.pory"
	lock
# 9 "data/maps/MossdeepCity_House3/scripts.pory"
# 5 "data/maps/MossdeepCity_House3/scripts.pory"
# 10 "data/maps/MossdeepCity_House3/scripts.pory"
	faceplayer
# 11 "data/maps/MossdeepCity_House3/scripts.pory"
# 6 "data/maps/MossdeepCity_House3/scripts.pory"
# 12 "data/maps/MossdeepCity_House3/scripts.pory"
	goto_if_set FLAG_RECEIVED_SUPER_ROD, MossdeepCity_House3_EventScript_SuperRodFisherman_2
# 13 "data/maps/MossdeepCity_House3/scripts.pory"
MossdeepCity_House3_EventScript_SuperRodFisherman_1:
# 14 "data/maps/MossdeepCity_House3/scripts.pory"
# 9 "data/maps/MossdeepCity_House3/scripts.pory"
# 15 "data/maps/MossdeepCity_House3/scripts.pory"
	msgbox MossdeepCity_House3_Text_YouWantSuperRod, MSGBOX_YESNO
# 16 "data/maps/MossdeepCity_House3/scripts.pory"
# 10 "data/maps/MossdeepCity_House3/scripts.pory"
# 17 "data/maps/MossdeepCity_House3/scripts.pory"
	compare VAR_RESULT, NO
# 18 "data/maps/MossdeepCity_House3/scripts.pory"
	goto_if_eq MossdeepCity_House3_EventScript_SuperRodFisherman_5
# 19 "data/maps/MossdeepCity_House3/scripts.pory"
MossdeepCity_House3_EventScript_SuperRodFisherman_4:
# 20 "data/maps/MossdeepCity_House3/scripts.pory"
# 13 "data/maps/MossdeepCity_House3/scripts.pory"
# 21 "data/maps/MossdeepCity_House3/scripts.pory"
	msgbox MossdeepCity_House3_Text_SuperRodIsSuper, MSGBOX_DEFAULT
# 22 "data/maps/MossdeepCity_House3/scripts.pory"
# 14 "data/maps/MossdeepCity_House3/scripts.pory"
# 23 "data/maps/MossdeepCity_House3/scripts.pory"
	giveitem ITEM_SUPER_ROD
# 24 "data/maps/MossdeepCity_House3/scripts.pory"
# 15 "data/maps/MossdeepCity_House3/scripts.pory"
# 25 "data/maps/MossdeepCity_House3/scripts.pory"
	compare VAR_RESULT, FALSE
# 26 "data/maps/MossdeepCity_House3/scripts.pory"
	goto_if_eq MossdeepCity_House3_EventScript_SuperRodFisherman_8
# 27 "data/maps/MossdeepCity_House3/scripts.pory"
MossdeepCity_House3_EventScript_SuperRodFisherman_7:
# 28 "data/maps/MossdeepCity_House3/scripts.pory"
# 18 "data/maps/MossdeepCity_House3/scripts.pory"
# 29 "data/maps/MossdeepCity_House3/scripts.pory"
	setflag FLAG_RECEIVED_SUPER_ROD
# 30 "data/maps/MossdeepCity_House3/scripts.pory"
# 19 "data/maps/MossdeepCity_House3/scripts.pory"
# 31 "data/maps/MossdeepCity_House3/scripts.pory"
	msgbox MossdeepCity_House3_Text_TryDroppingRodInWater, MSGBOX_DEFAULT
# 32 "data/maps/MossdeepCity_House3/scripts.pory"
# 20 "data/maps/MossdeepCity_House3/scripts.pory"
# 33 "data/maps/MossdeepCity_House3/scripts.pory"
	release
# 34 "data/maps/MossdeepCity_House3/scripts.pory"
	end
# 35 "data/maps/MossdeepCity_House3/scripts.pory"

# 36 "data/maps/MossdeepCity_House3/scripts.pory"
MossdeepCity_House3_EventScript_SuperRodFisherman_2:
# 37 "data/maps/MossdeepCity_House3/scripts.pory"
# 7 "data/maps/MossdeepCity_House3/scripts.pory"
# 38 "data/maps/MossdeepCity_House3/scripts.pory"
	goto MossdeepCity_House3_EventScript_ReceivedSuperRod
# 39 "data/maps/MossdeepCity_House3/scripts.pory"
	goto MossdeepCity_House3_EventScript_SuperRodFisherman_1
# 40 "data/maps/MossdeepCity_House3/scripts.pory"

# 41 "data/maps/MossdeepCity_House3/scripts.pory"
MossdeepCity_House3_EventScript_SuperRodFisherman_5:
# 42 "data/maps/MossdeepCity_House3/scripts.pory"
# 11 "data/maps/MossdeepCity_House3/scripts.pory"
# 43 "data/maps/MossdeepCity_House3/scripts.pory"
	goto MossdeepCity_House3_EventScript_DeclineSuperRod
# 44 "data/maps/MossdeepCity_House3/scripts.pory"
	goto MossdeepCity_House3_EventScript_SuperRodFisherman_4
# 45 "data/maps/MossdeepCity_House3/scripts.pory"

# 46 "data/maps/MossdeepCity_House3/scripts.pory"
MossdeepCity_House3_EventScript_SuperRodFisherman_8:
# 47 "data/maps/MossdeepCity_House3/scripts.pory"
# 16 "data/maps/MossdeepCity_House3/scripts.pory"
# 48 "data/maps/MossdeepCity_House3/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
# 49 "data/maps/MossdeepCity_House3/scripts.pory"
	goto MossdeepCity_House3_EventScript_SuperRodFisherman_7
# 50 "data/maps/MossdeepCity_House3/scripts.pory"

# 51 "data/maps/MossdeepCity_House3/scripts.pory"

# 52 "data/maps/MossdeepCity_House3/scripts.pory"
MossdeepCity_House3_EventScript_ReceivedSuperRod::
# 53 "data/maps/MossdeepCity_House3/scripts.pory"
# 25 "data/maps/MossdeepCity_House3/scripts.pory"
# 54 "data/maps/MossdeepCity_House3/scripts.pory"
	msgbox MossdeepCity_House3_Text_GoAfterSeafloorPokemon, MSGBOX_DEFAULT
# 55 "data/maps/MossdeepCity_House3/scripts.pory"
# 26 "data/maps/MossdeepCity_House3/scripts.pory"
# 56 "data/maps/MossdeepCity_House3/scripts.pory"
	release
# 57 "data/maps/MossdeepCity_House3/scripts.pory"
	end
# 58 "data/maps/MossdeepCity_House3/scripts.pory"

# 59 "data/maps/MossdeepCity_House3/scripts.pory"

# 60 "data/maps/MossdeepCity_House3/scripts.pory"
MossdeepCity_House3_EventScript_DeclineSuperRod::
# 61 "data/maps/MossdeepCity_House3/scripts.pory"
# 31 "data/maps/MossdeepCity_House3/scripts.pory"
# 62 "data/maps/MossdeepCity_House3/scripts.pory"
	msgbox MossdeepCity_House3_Text_DontYouLikeToFish, MSGBOX_DEFAULT
# 63 "data/maps/MossdeepCity_House3/scripts.pory"
# 32 "data/maps/MossdeepCity_House3/scripts.pory"
# 64 "data/maps/MossdeepCity_House3/scripts.pory"
	release
# 65 "data/maps/MossdeepCity_House3/scripts.pory"
	end
# 66 "data/maps/MossdeepCity_House3/scripts.pory"

# 67 "data/maps/MossdeepCity_House3/scripts.pory"

# 68 "data/maps/MossdeepCity_House3/scripts.pory"
MossdeepCity_House3_Text_YouWantSuperRod::
# 69 "data/maps/MossdeepCity_House3/scripts.pory"
# 36 "data/maps/MossdeepCity_House3/scripts.pory"
# 70 "data/maps/MossdeepCity_House3/scripts.pory"
	.string "Hey there, TRAINER!\n"
# 71 "data/maps/MossdeepCity_House3/scripts.pory"
	.string "A SUPER ROD really is super!\p"
# 72 "data/maps/MossdeepCity_House3/scripts.pory"
	.string "Say all you want, but this baby can\n"
# 73 "data/maps/MossdeepCity_House3/scripts.pory"
	.string "catch POKéMON off the seafloor!\p"
# 74 "data/maps/MossdeepCity_House3/scripts.pory"
	.string "What do you think?\n"
# 75 "data/maps/MossdeepCity_House3/scripts.pory"
	.string "You want it, don't you?$"
# 76 "data/maps/MossdeepCity_House3/scripts.pory"

# 77 "data/maps/MossdeepCity_House3/scripts.pory"
MossdeepCity_House3_Text_SuperRodIsSuper::
# 78 "data/maps/MossdeepCity_House3/scripts.pory"
# 45 "data/maps/MossdeepCity_House3/scripts.pory"
# 79 "data/maps/MossdeepCity_House3/scripts.pory"
	.string "You bet, you bet!\n"
# 80 "data/maps/MossdeepCity_House3/scripts.pory"
	.string "After all, a SUPER ROD is really super!$"
# 81 "data/maps/MossdeepCity_House3/scripts.pory"

# 82 "data/maps/MossdeepCity_House3/scripts.pory"
MossdeepCity_House3_Text_TryDroppingRodInWater::
# 83 "data/maps/MossdeepCity_House3/scripts.pory"
# 50 "data/maps/MossdeepCity_House3/scripts.pory"
# 84 "data/maps/MossdeepCity_House3/scripts.pory"
	.string "If there's any water, try dropping in\n"
# 85 "data/maps/MossdeepCity_House3/scripts.pory"
	.string "your ROD and see what bites!$"
# 86 "data/maps/MossdeepCity_House3/scripts.pory"

# 87 "data/maps/MossdeepCity_House3/scripts.pory"
MossdeepCity_House3_Text_DontYouLikeToFish::
# 88 "data/maps/MossdeepCity_House3/scripts.pory"
# 55 "data/maps/MossdeepCity_House3/scripts.pory"
# 89 "data/maps/MossdeepCity_House3/scripts.pory"
	.string "Hunh?\n"
# 90 "data/maps/MossdeepCity_House3/scripts.pory"
	.string "Don't you like to fish?$"
# 91 "data/maps/MossdeepCity_House3/scripts.pory"

# 92 "data/maps/MossdeepCity_House3/scripts.pory"
MossdeepCity_House3_Text_GoAfterSeafloorPokemon::
# 93 "data/maps/MossdeepCity_House3/scripts.pory"
# 60 "data/maps/MossdeepCity_House3/scripts.pory"
# 94 "data/maps/MossdeepCity_House3/scripts.pory"
	.string "Go after the seafloor POKéMON with\n"
# 95 "data/maps/MossdeepCity_House3/scripts.pory"
	.string "your SUPER ROD.$"
