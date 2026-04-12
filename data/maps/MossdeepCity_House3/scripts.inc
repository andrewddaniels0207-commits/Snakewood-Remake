MossdeepCity_House3_MapScripts::
	.byte 0


MossdeepCity_House3_EventScript_SuperRodFisherman::
# 4 "data/maps/MossdeepCity_House3/scripts.pory"
	lock
# 5 "data/maps/MossdeepCity_House3/scripts.pory"
	faceplayer
# 6 "data/maps/MossdeepCity_House3/scripts.pory"
	goto_if_set FLAG_RECEIVED_SUPER_ROD, MossdeepCity_House3_EventScript_SuperRodFisherman_2
MossdeepCity_House3_EventScript_SuperRodFisherman_1:
# 9 "data/maps/MossdeepCity_House3/scripts.pory"
	msgbox MossdeepCity_House3_Text_YouWantSuperRod, MSGBOX_YESNO
# 10 "data/maps/MossdeepCity_House3/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq MossdeepCity_House3_EventScript_SuperRodFisherman_5
MossdeepCity_House3_EventScript_SuperRodFisherman_4:
# 13 "data/maps/MossdeepCity_House3/scripts.pory"
	msgbox MossdeepCity_House3_Text_SuperRodIsSuper, MSGBOX_DEFAULT
# 14 "data/maps/MossdeepCity_House3/scripts.pory"
	giveitem ITEM_SUPER_ROD
# 15 "data/maps/MossdeepCity_House3/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MossdeepCity_House3_EventScript_SuperRodFisherman_8
MossdeepCity_House3_EventScript_SuperRodFisherman_7:
# 18 "data/maps/MossdeepCity_House3/scripts.pory"
	setflag FLAG_RECEIVED_SUPER_ROD
# 19 "data/maps/MossdeepCity_House3/scripts.pory"
	msgbox MossdeepCity_House3_Text_TryDroppingRodInWater, MSGBOX_DEFAULT
# 20 "data/maps/MossdeepCity_House3/scripts.pory"
	release
	end

MossdeepCity_House3_EventScript_SuperRodFisherman_2:
# 7 "data/maps/MossdeepCity_House3/scripts.pory"
	goto MossdeepCity_House3_EventScript_ReceivedSuperRod
	goto MossdeepCity_House3_EventScript_SuperRodFisherman_1

MossdeepCity_House3_EventScript_SuperRodFisherman_5:
# 11 "data/maps/MossdeepCity_House3/scripts.pory"
	goto MossdeepCity_House3_EventScript_DeclineSuperRod
	goto MossdeepCity_House3_EventScript_SuperRodFisherman_4

MossdeepCity_House3_EventScript_SuperRodFisherman_8:
# 16 "data/maps/MossdeepCity_House3/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
	goto MossdeepCity_House3_EventScript_SuperRodFisherman_7


MossdeepCity_House3_EventScript_ReceivedSuperRod::
# 25 "data/maps/MossdeepCity_House3/scripts.pory"
	msgbox MossdeepCity_House3_Text_GoAfterSeafloorPokemon, MSGBOX_DEFAULT
# 26 "data/maps/MossdeepCity_House3/scripts.pory"
	release
	end


MossdeepCity_House3_EventScript_DeclineSuperRod::
# 31 "data/maps/MossdeepCity_House3/scripts.pory"
	msgbox MossdeepCity_House3_Text_DontYouLikeToFish, MSGBOX_DEFAULT
# 32 "data/maps/MossdeepCity_House3/scripts.pory"
	release
	end


MossdeepCity_House3_Text_YouWantSuperRod::
# 36 "data/maps/MossdeepCity_House3/scripts.pory"
	.string "Hey there, TRAINER!\n"
	.string "A SUPER ROD really is super!\p"
	.string "Say all you want, but this baby can\n"
	.string "catch POKéMON off the seafloor!\p"
	.string "What do you think?\n"
	.string "You want it, don't you?$"

MossdeepCity_House3_Text_SuperRodIsSuper::
# 45 "data/maps/MossdeepCity_House3/scripts.pory"
	.string "You bet, you bet!\n"
	.string "After all, a SUPER ROD is really super!$"

MossdeepCity_House3_Text_TryDroppingRodInWater::
# 50 "data/maps/MossdeepCity_House3/scripts.pory"
	.string "If there's any water, try dropping in\n"
	.string "your ROD and see what bites!$"

MossdeepCity_House3_Text_DontYouLikeToFish::
# 55 "data/maps/MossdeepCity_House3/scripts.pory"
	.string "Hunh?\n"
	.string "Don't you like to fish?$"

MossdeepCity_House3_Text_GoAfterSeafloorPokemon::
# 60 "data/maps/MossdeepCity_House3/scripts.pory"
	.string "Go after the seafloor POKéMON with\n"
	.string "your SUPER ROD.$"
