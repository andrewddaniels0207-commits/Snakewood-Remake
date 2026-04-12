# 1 "data/maps/VermilionCity_House1_Frlg/scripts.pory"

# 2 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
VermilionCity_House1_Frlg_MapScripts::
# 3 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
	.byte 0
# 4 "data/maps/VermilionCity_House1_Frlg/scripts.pory"

# 5 "data/maps/VermilionCity_House1_Frlg/scripts.pory"

# 6 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
VermilionCity_House1_EventScript_FishingGuru::
# 7 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
# 4 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
# 8 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
	lock
# 9 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
# 5 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
# 10 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
	faceplayer
# 11 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
# 6 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
# 12 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
	goto_if_set FLAG_GOT_OLD_ROD, VermilionCity_House1_EventScript_FishingGuru_2
# 13 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
VermilionCity_House1_EventScript_FishingGuru_1:
# 14 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
# 9 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
# 15 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
	msgbox VermilionCity_House1_Text_ImFishingGuruDoYouLikeToFish, MSGBOX_YESNO
# 16 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
# 10 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
# 17 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
	compare VAR_RESULT, YES
# 18 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
	goto_if_eq VermilionCity_House1_EventScript_FishingGuru_5
# 19 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
VermilionCity_House1_EventScript_FishingGuru_4:
# 20 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
# 13 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
# 21 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
	msgbox VermilionCity_House1_Text_OhThatsSoDisappointing
# 22 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
# 14 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
# 23 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
	release
# 24 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
	end
# 25 "data/maps/VermilionCity_House1_Frlg/scripts.pory"

# 26 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
VermilionCity_House1_EventScript_FishingGuru_2:
# 27 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
# 7 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
# 28 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
	goto VermilionCity_House1_EventScript_AlreadyGotOldRod
# 29 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
	goto VermilionCity_House1_EventScript_FishingGuru_1
# 30 "data/maps/VermilionCity_House1_Frlg/scripts.pory"

# 31 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
VermilionCity_House1_EventScript_FishingGuru_5:
# 32 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
# 11 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
# 33 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
	goto VermilionCity_House1_EventScript_GiveOldRod
# 34 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
	goto VermilionCity_House1_EventScript_FishingGuru_4
# 35 "data/maps/VermilionCity_House1_Frlg/scripts.pory"

# 36 "data/maps/VermilionCity_House1_Frlg/scripts.pory"

# 37 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
VermilionCity_House1_EventScript_AlreadyGotOldRod::
# 38 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
# 19 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
# 39 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
	msgbox VermilionCity_House1_Text_HowAreTheFishBiting
# 40 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
# 20 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
# 41 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
	release
# 42 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
	end
# 43 "data/maps/VermilionCity_House1_Frlg/scripts.pory"

# 44 "data/maps/VermilionCity_House1_Frlg/scripts.pory"

# 45 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
VermilionCity_House1_EventScript_GiveOldRod::
# 46 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
# 25 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
# 47 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
	checkitemspace ITEM_OLD_ROD
# 48 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
# 26 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
# 49 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
	compare VAR_RESULT, FALSE
# 50 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
	goto_if_eq VermilionCity_House1_EventScript_GiveOldRod_2
# 51 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
VermilionCity_House1_EventScript_GiveOldRod_1:
# 52 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
# 29 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
# 53 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
	additem ITEM_OLD_ROD
# 54 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
# 30 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
# 55 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
	msgbox VermilionCity_House1_Text_TakeThisAndFish
# 56 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
# 31 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
# 57 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
	msgreceiveditem VermilionCity_House1_Text_ReceivedOldRodFromFishingGuru, ITEM_OLD_ROD
# 58 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
# 32 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
# 59 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
	setflag FLAG_GOT_OLD_ROD
# 60 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
# 33 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
# 61 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
	msgbox VermilionCity_House1_Text_FishingIsAWayOfLife
# 62 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
# 34 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
# 63 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
	release
# 64 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
	end
# 65 "data/maps/VermilionCity_House1_Frlg/scripts.pory"

# 66 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
VermilionCity_House1_EventScript_GiveOldRod_2:
# 67 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
# 27 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
# 68 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
	goto VermilionCity_House1_EventScript_NoRoomForOldRod
# 69 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
	goto VermilionCity_House1_EventScript_GiveOldRod_1
# 70 "data/maps/VermilionCity_House1_Frlg/scripts.pory"

# 71 "data/maps/VermilionCity_House1_Frlg/scripts.pory"

# 72 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
VermilionCity_House1_EventScript_NoRoomForOldRod::
# 73 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
# 39 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
# 74 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
	msgbox VermilionCity_House1_Text_NoRoomForNiceGift
# 75 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
# 40 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
# 76 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
	release
# 77 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
	end
# 78 "data/maps/VermilionCity_House1_Frlg/scripts.pory"

# 79 "data/maps/VermilionCity_House1_Frlg/scripts.pory"

# 80 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
VermilionCity_House1_Text_ImFishingGuruDoYouLikeToFish::
# 81 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
# 44 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
# 82 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
	.string "I'm the FISHING GURU!\p"
# 83 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
	.string "I simply looove fishing!\n"
# 84 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
	.string "I can't bear to go without.\p"
# 85 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
	.string "Tell me, do you like to fish?$"
# 86 "data/maps/VermilionCity_House1_Frlg/scripts.pory"

# 87 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
VermilionCity_House1_Text_TakeThisAndFish::
# 88 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
# 51 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
# 89 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
	.string "Grand! I like your style.\n"
# 90 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
	.string "I think we can be friends.\p"
# 91 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
	.string "Take this and fish, young friend!$"
# 92 "data/maps/VermilionCity_House1_Frlg/scripts.pory"

# 93 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
VermilionCity_House1_Text_ReceivedOldRodFromFishingGuru::
# 94 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
# 57 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
# 95 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
	.string "{PLAYER} received an OLD ROD from\n"
# 96 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
	.string "the FISHING GURU.$"
# 97 "data/maps/VermilionCity_House1_Frlg/scripts.pory"

# 98 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
VermilionCity_House1_Text_FishingIsAWayOfLife::
# 99 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
# 62 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
# 100 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
	.string "Fishing is a way of life!\n"
# 101 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
	.string "It is like the finest poetry.\p"
# 102 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
	.string "From the seas to rivers, go out\n"
# 103 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
	.string "and land the big one, my friend.$"
# 104 "data/maps/VermilionCity_House1_Frlg/scripts.pory"

# 105 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
VermilionCity_House1_Text_OhThatsSoDisappointing::
# 106 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
# 69 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
# 107 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
	.string "Oh…\n"
# 108 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
	.string "That's so disappointing…$"
# 109 "data/maps/VermilionCity_House1_Frlg/scripts.pory"

# 110 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
VermilionCity_House1_Text_HowAreTheFishBiting::
# 111 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
# 74 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
# 112 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
	.string "Hello there, {PLAYER}!\p"
# 113 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
	.string "How are the fish biting?$"
# 114 "data/maps/VermilionCity_House1_Frlg/scripts.pory"

# 115 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
VermilionCity_House1_Text_NoRoomForNiceGift::
# 116 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
# 79 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
# 117 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
	.string "Oh, no!\p"
# 118 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
	.string "I had a nice gift for you, but you\n"
# 119 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
	.string "have no room for it!$"
