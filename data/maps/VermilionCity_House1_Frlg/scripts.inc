VermilionCity_House1_Frlg_MapScripts::
	.byte 0


VermilionCity_House1_EventScript_FishingGuru::
# 4 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
	lock
# 5 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
	faceplayer
# 6 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
	goto_if_set FLAG_GOT_OLD_ROD, VermilionCity_House1_EventScript_FishingGuru_2
VermilionCity_House1_EventScript_FishingGuru_1:
# 9 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
	msgbox VermilionCity_House1_Text_ImFishingGuruDoYouLikeToFish, MSGBOX_YESNO
# 10 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq VermilionCity_House1_EventScript_FishingGuru_5
VermilionCity_House1_EventScript_FishingGuru_4:
# 13 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
	msgbox VermilionCity_House1_Text_OhThatsSoDisappointing
# 14 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
	release
	end

VermilionCity_House1_EventScript_FishingGuru_2:
# 7 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
	goto VermilionCity_House1_EventScript_AlreadyGotOldRod
	goto VermilionCity_House1_EventScript_FishingGuru_1

VermilionCity_House1_EventScript_FishingGuru_5:
# 11 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
	goto VermilionCity_House1_EventScript_GiveOldRod
	goto VermilionCity_House1_EventScript_FishingGuru_4


VermilionCity_House1_EventScript_AlreadyGotOldRod::
# 19 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
	msgbox VermilionCity_House1_Text_HowAreTheFishBiting
# 20 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
	release
	end


VermilionCity_House1_EventScript_GiveOldRod::
# 25 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
	checkitemspace ITEM_OLD_ROD
# 26 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq VermilionCity_House1_EventScript_GiveOldRod_2
VermilionCity_House1_EventScript_GiveOldRod_1:
# 29 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
	additem ITEM_OLD_ROD
# 30 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
	msgbox VermilionCity_House1_Text_TakeThisAndFish
# 31 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
	msgreceiveditem VermilionCity_House1_Text_ReceivedOldRodFromFishingGuru, ITEM_OLD_ROD
# 32 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
	setflag FLAG_GOT_OLD_ROD
# 33 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
	msgbox VermilionCity_House1_Text_FishingIsAWayOfLife
# 34 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
	release
	end

VermilionCity_House1_EventScript_GiveOldRod_2:
# 27 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
	goto VermilionCity_House1_EventScript_NoRoomForOldRod
	goto VermilionCity_House1_EventScript_GiveOldRod_1


VermilionCity_House1_EventScript_NoRoomForOldRod::
# 39 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
	msgbox VermilionCity_House1_Text_NoRoomForNiceGift
# 40 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
	release
	end


VermilionCity_House1_Text_ImFishingGuruDoYouLikeToFish::
# 44 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
	.string "I'm the FISHING GURU!\p"
	.string "I simply looove fishing!\n"
	.string "I can't bear to go without.\p"
	.string "Tell me, do you like to fish?$"

VermilionCity_House1_Text_TakeThisAndFish::
# 51 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
	.string "Grand! I like your style.\n"
	.string "I think we can be friends.\p"
	.string "Take this and fish, young friend!$"

VermilionCity_House1_Text_ReceivedOldRodFromFishingGuru::
# 57 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
	.string "{PLAYER} received an OLD ROD from\n"
	.string "the FISHING GURU.$"

VermilionCity_House1_Text_FishingIsAWayOfLife::
# 62 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
	.string "Fishing is a way of life!\n"
	.string "It is like the finest poetry.\p"
	.string "From the seas to rivers, go out\n"
	.string "and land the big one, my friend.$"

VermilionCity_House1_Text_OhThatsSoDisappointing::
# 69 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
	.string "Oh…\n"
	.string "That's so disappointing…$"

VermilionCity_House1_Text_HowAreTheFishBiting::
# 74 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
	.string "Hello there, {PLAYER}!\p"
	.string "How are the fish biting?$"

VermilionCity_House1_Text_NoRoomForNiceGift::
# 79 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
	.string "Oh, no!\p"
	.string "I had a nice gift for you, but you\n"
	.string "have no room for it!$"
