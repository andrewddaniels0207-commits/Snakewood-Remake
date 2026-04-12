# 1 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"

# 2 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"
FuchsiaCity_House2_Frlg_MapScripts::
# 3 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"
	.byte 0
# 4 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"

# 5 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"

# 6 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"
FuchsiaCity_House2_EventScript_FishingGurusBrother::
# 7 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"
# 4 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"
# 8 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"
	lock
# 9 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"
# 5 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"
# 10 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"
	faceplayer
# 11 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"
# 6 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"
# 12 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"
	goto_if_set FLAG_GOT_GOOD_ROD, FuchsiaCity_House2_EventScript_FishingGurusBrother_2
# 13 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"
FuchsiaCity_House2_EventScript_FishingGurusBrother_1:
# 14 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"
# 9 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"
# 15 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"
	msgbox FuchsiaCity_House2_Text_DoYouLikeToFish, MSGBOX_YESNO
# 16 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"
# 10 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"
# 17 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"
	compare VAR_RESULT, YES
# 18 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"
	goto_if_eq FuchsiaCity_House2_EventScript_FishingGurusBrother_5
# 19 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"
FuchsiaCity_House2_EventScript_FishingGurusBrother_4:
# 20 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"
# 13 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"
# 21 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"
	msgbox FuchsiaCity_House2_Text_OhThatsDisappointing
# 22 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"
# 14 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"
# 23 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"
	release
# 24 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"
	end
# 25 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"

# 26 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"
FuchsiaCity_House2_EventScript_FishingGurusBrother_2:
# 27 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"
# 7 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"
# 28 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"
	goto FuchsiaCity_House2_EventScript_AlreadyGotGoodRod
# 29 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"
	goto FuchsiaCity_House2_EventScript_FishingGurusBrother_1
# 30 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"

# 31 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"
FuchsiaCity_House2_EventScript_FishingGurusBrother_5:
# 32 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"
# 11 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"
# 33 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"
	goto FuchsiaCity_House2_EventScript_GiveGoodRod
# 34 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"
	goto FuchsiaCity_House2_EventScript_FishingGurusBrother_4
# 35 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"

# 36 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"

# 37 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"
FuchsiaCity_House2_EventScript_AlreadyGotGoodRod::
# 38 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"
# 19 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"
# 39 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"
	msgbox FuchsiaCity_House2_Text_HowAreTheFishBiting
# 40 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"
# 20 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"
# 41 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"
	release
# 42 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"
	end
# 43 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"

# 44 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"

# 45 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"
FuchsiaCity_House2_EventScript_GiveGoodRod::
# 46 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"
# 25 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"
# 47 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"
	msgbox FuchsiaCity_House2_Text_LikeYourStyleTakeThis
# 48 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"
# 26 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"
# 49 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"
	checkitemspace ITEM_GOOD_ROD
# 50 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"
# 27 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"
# 51 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"
	compare VAR_RESULT, FALSE
# 52 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"
	goto_if_eq FuchsiaCity_House2_EventScript_GiveGoodRod_2
# 53 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"
FuchsiaCity_House2_EventScript_GiveGoodRod_1:
# 54 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"
# 30 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"
# 55 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"
	giveitem_msg FuchsiaCity_House2_Text_ReceivedGoodRod, ITEM_GOOD_ROD
# 56 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"
# 31 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"
# 57 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"
	msgbox FuchsiaCity_House2_Text_GoodRodCanCatchBetterMons
# 58 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"
# 32 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"
# 59 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"
	setflag FLAG_GOT_GOOD_ROD
# 60 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"
# 33 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"
# 61 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"
	release
# 62 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"
	end
# 63 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"

# 64 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"
FuchsiaCity_House2_EventScript_GiveGoodRod_2:
# 65 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"
# 28 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"
# 66 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"
	goto FuchsiaCity_House2_EventScript_NoRoomForGoodRod
# 67 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"
	goto FuchsiaCity_House2_EventScript_GiveGoodRod_1
# 68 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"

# 69 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"

# 70 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"
FuchsiaCity_House2_EventScript_NoRoomForGoodRod::
# 71 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"
# 38 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"
# 72 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"
	msgbox FuchsiaCity_House2_Text_YouHaveNoRoomForGift
# 73 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"
# 39 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"
# 74 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"
	release
# 75 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"
	end
# 76 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"

# 77 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"

# 78 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"
FuchsiaCity_House2_Text_DoYouLikeToFish::
# 79 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"
# 43 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"
# 80 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"
	.string "I'm the FISHING GURU's older\n"
# 81 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"
	.string "brother.\p"
# 82 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"
	.string "I simply looove fishing!\n"
# 83 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"
	.string "I can't bear to go without.\p"
# 84 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"
	.string "Tell me, do you like to fish?$"
# 85 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"

# 86 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"
FuchsiaCity_House2_Text_LikeYourStyleTakeThis::
# 87 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"
# 51 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"
# 88 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"
	.string "Grand! I like your style.\n"
# 89 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"
	.string "I think we can be friends.\p"
# 90 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"
	.string "Take this and fish, young friend!$"
# 91 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"

# 92 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"
FuchsiaCity_House2_Text_ReceivedGoodRod::
# 93 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"
# 57 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"
# 94 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"
	.string "{PLAYER} received a GOOD ROD from\n"
# 95 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"
	.string "the FISHING GURU's brother.$"
# 96 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"

# 97 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"
FuchsiaCity_House2_Text_GoodRodCanCatchBetterMons::
# 98 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"
# 62 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"
# 99 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"
	.string "Fishing is a way of life!\n"
# 100 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"
	.string "It is like the finest poetry.\p"
# 101 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"
	.string "A crummy OLD ROD could only catch\n"
# 102 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"
	.string "MAGIKARP, yes?\p"
# 103 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"
	.string "But with a GOOD ROD, you can\n"
# 104 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"
	.string "catch much better POKéMON.$"
# 105 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"

# 106 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"
FuchsiaCity_House2_Text_OhThatsDisappointing::
# 107 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"
# 71 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"
# 108 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"
	.string "Oh…\n"
# 109 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"
	.string "That's so disappointing…$"
# 110 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"

# 111 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"
FuchsiaCity_House2_Text_HowAreTheFishBiting::
# 112 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"
# 76 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"
# 113 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"
	.string "Hello there, {PLAYER}!\p"
# 114 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"
	.string "How are the fish biting?$"
# 115 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"

# 116 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"
FuchsiaCity_House2_Text_YouHaveNoRoomForGift::
# 117 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"
# 81 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"
# 118 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"
	.string "Oh, no!\p"
# 119 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"
	.string "I had a gift for you, but you have\n"
# 120 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"
	.string "no room for it!$"
