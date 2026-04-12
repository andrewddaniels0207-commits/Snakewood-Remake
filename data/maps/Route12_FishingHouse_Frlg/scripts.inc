Route12_FishingHouse_Frlg_MapScripts::
	.byte 0


Route12_FishingHouse_EventScript_FishingGuruBrother::
# 4 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	lock
# 5 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	faceplayer
# 6 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	goto_if_set FLAG_GOT_SUPER_ROD, Route12_FishingHouse_EventScript_FishingGuruBrother_2
Route12_FishingHouse_EventScript_FishingGuruBrother_1:
# 9 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	msgbox Route12_FishingHouse_Text_DoYouLikeToFish, MSGBOX_YESNO
# 10 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route12_FishingHouse_EventScript_FishingGuruBrother_5
Route12_FishingHouse_EventScript_FishingGuruBrother_4:
# 13 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	msgbox Route12_FishingHouse_Text_OhThatsDisappointing
# 14 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	release
	end

Route12_FishingHouse_EventScript_FishingGuruBrother_2:
# 7 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	goto Route12_FishingHouse_EventScript_CheckMagikarpRecord
	goto Route12_FishingHouse_EventScript_FishingGuruBrother_1

Route12_FishingHouse_EventScript_FishingGuruBrother_5:
# 11 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	goto Route12_FishingHouse_EventScript_GiveSuperRod
	goto Route12_FishingHouse_EventScript_FishingGuruBrother_4


Route12_FishingHouse_EventScript_GiveSuperRod::
# 19 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	checkitemspace ITEM_SUPER_ROD
# 20 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route12_FishingHouse_EventScript_GiveSuperRod_2
Route12_FishingHouse_EventScript_GiveSuperRod_1:
# 23 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	additem ITEM_SUPER_ROD
# 24 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	msgbox Route12_FishingHouse_Text_TakeThisAndFish
# 25 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	msgreceiveditem Route12_FishingHouse_Text_ReceivedSuperRod, ITEM_SUPER_ROD
# 26 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	setflag FLAG_GOT_SUPER_ROD
# 27 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	msgbox Route12_FishingHouse_Text_IfYouCatchBigMagikarpShowMe
# 28 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	release
	end

Route12_FishingHouse_EventScript_GiveSuperRod_2:
# 21 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	goto Route12_FishingHouse_EventScript_NoRoomForSuperRod
	goto Route12_FishingHouse_EventScript_GiveSuperRod_1


Route12_FishingHouse_EventScript_NoRoomForSuperRod::
# 33 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	msgbox Route12_FishingHouse_Text_NoRoomForGift
# 34 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	release
	end


Route12_FishingHouse_EventScript_CheckMagikarpRecord::
# 39 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	setvar VAR_0x8004, SPECIES_MAGIKARP
# 40 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	specialvar VAR_RESULT, DoesPlayerPartyContainSpecies
# 41 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route12_FishingHouse_EventScript_CheckMagikarpRecord_2
Route12_FishingHouse_EventScript_CheckMagikarpRecord_1:
# 44 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	special GetMagikarpSizeRecordInfo
# 45 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	msgbox Route12_FishingHouse_Text_OhMagikarpAllowMeToSee
# 46 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	special ChoosePartyMon
# 47 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	waitstate
# 48 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	copyvar VAR_RESULT, VAR_0x8004
# 49 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	compare VAR_RESULT, PARTY_SIZE
	goto_if_ge Route12_FishingHouse_EventScript_CheckMagikarpRecord_5
Route12_FishingHouse_EventScript_CheckMagikarpRecord_4:
# 52 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	special CompareMagikarpSize
# 53 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route12_FishingHouse_EventScript_CheckMagikarpRecord_8
Route12_FishingHouse_EventScript_CheckMagikarpRecord_7:
# 56 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq Route12_FishingHouse_EventScript_CheckMagikarpRecord_11
Route12_FishingHouse_EventScript_CheckMagikarpRecord_10:
# 59 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq Route12_FishingHouse_EventScript_CheckMagikarpRecord_14
Route12_FishingHouse_EventScript_CheckMagikarpRecord_13:
# 62 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq Route12_FishingHouse_EventScript_CheckMagikarpRecord_17
Route12_FishingHouse_EventScript_CheckMagikarpRecord_16:
# 65 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	release
	end

Route12_FishingHouse_EventScript_CheckMagikarpRecord_2:
# 42 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	goto Route12_FishingHouse_EventScript_NoMagikarpInParty
	goto Route12_FishingHouse_EventScript_CheckMagikarpRecord_1

Route12_FishingHouse_EventScript_CheckMagikarpRecord_5:
# 50 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	goto Route12_FishingHouse_EventScript_CancelShowMon
	goto Route12_FishingHouse_EventScript_CheckMagikarpRecord_4

Route12_FishingHouse_EventScript_CheckMagikarpRecord_8:
# 54 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	goto Route12_FishingHouse_EventScript_NotMagikarp
	goto Route12_FishingHouse_EventScript_CheckMagikarpRecord_7

Route12_FishingHouse_EventScript_CheckMagikarpRecord_11:
# 57 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	goto Route12_FishingHouse_EventScript_NotRecordMagikarp
	goto Route12_FishingHouse_EventScript_CheckMagikarpRecord_10

Route12_FishingHouse_EventScript_CheckMagikarpRecord_14:
# 60 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	goto Route12_FishingHouse_EventScript_NewRecordMagikarp
	goto Route12_FishingHouse_EventScript_CheckMagikarpRecord_13

Route12_FishingHouse_EventScript_CheckMagikarpRecord_17:
# 63 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	goto Route12_FishingHouse_EventScript_TieRecordMagikarp
	goto Route12_FishingHouse_EventScript_CheckMagikarpRecord_16


Route12_FishingHouse_EventScript_NoMagikarpInParty::
# 70 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	msgbox Route12_FishingHouse_Text_TryFishingBringMeMagikarp
# 71 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	release
	end


Route12_FishingHouse_EventScript_CancelShowMon::
# 76 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	release
	end


Route12_FishingHouse_EventScript_NotMagikarp::
# 81 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	msgbox Route12_FishingHouse_Text_DoesntLookLikeMagikarp
# 82 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	release
	end


Route12_FishingHouse_EventScript_NotRecordMagikarp::
# 87 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	goto_if_unset FLAG_GOT_RECORD_SETTING_MAGIKARP, Route12_FishingHouse_EventScript_NotRecordMagikarp_2
Route12_FishingHouse_EventScript_NotRecordMagikarp_1:
# 90 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	msgbox Route12_FishingHouse_Text_HmmXInchesDoesntMeasureUp
# 91 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	release
	end

Route12_FishingHouse_EventScript_NotRecordMagikarp_2:
# 88 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	goto Route12_FishingHouse_EventScript_NewRecordMagikarp
	goto Route12_FishingHouse_EventScript_NotRecordMagikarp_1


Route12_FishingHouse_EventScript_TieRecordMagikarp::
# 96 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	goto_if_unset FLAG_GOT_RECORD_SETTING_MAGIKARP, Route12_FishingHouse_EventScript_TieRecordMagikarp_2
Route12_FishingHouse_EventScript_TieRecordMagikarp_1:
# 99 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	msgbox Route12_FishingHouse_Text_HuhXInchesSameSizeAsLast
# 100 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	release
	end

Route12_FishingHouse_EventScript_TieRecordMagikarp_2:
# 97 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	goto Route12_FishingHouse_EventScript_NewRecordMagikarp
	goto Route12_FishingHouse_EventScript_TieRecordMagikarp_1


Route12_FishingHouse_EventScript_NewRecordMagikarp::
# 105 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	setflag FLAG_GOT_RECORD_SETTING_MAGIKARP
# 106 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	msgbox Route12_FishingHouse_Text_WhoaXInchesTakeThis
# 107 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	giveitem ITEM_NET_BALL
# 108 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route12_FishingHouse_EventScript_NewRecordMagikarp_2
Route12_FishingHouse_EventScript_NewRecordMagikarp_1:
# 111 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	msgbox Route12_FishingHouse_Text_LookForwardToGreaterRecords
# 112 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	release
	end

Route12_FishingHouse_EventScript_NewRecordMagikarp_2:
# 109 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	goto Route12_FishingHouse_EventScript_NoRoomForNetBall
	goto Route12_FishingHouse_EventScript_NewRecordMagikarp_1


Route12_FishingHouse_EventScript_NoRoomForNetBall::
# 117 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	msgbox Route12_FishingHouse_Text_NoRoomForGift
# 118 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	release
	end


Route12_FishingHouse_EventScript_MagikarpRecordSign::
# 123 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	lockall
# 124 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	goto_if_set FLAG_GOT_RECORD_SETTING_MAGIKARP, Route12_FishingHouse_EventScript_MagikarpRecordSign_2
Route12_FishingHouse_EventScript_MagikarpRecordSign_1:
# 127 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	msgbox Route12_FishingHouse_Text_BlankChartOfSomeSort
# 128 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	releaseall
	end

Route12_FishingHouse_EventScript_MagikarpRecordSign_2:
# 125 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	goto Route12_FishingHouse_EventScript_MagikarpRecordSignRecordSet
	goto Route12_FishingHouse_EventScript_MagikarpRecordSign_1


Route12_FishingHouse_EventScript_MagikarpRecordSignRecordSet::
# 133 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	special GetMagikarpSizeRecordInfo
# 134 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	msgbox Route12_FishingHouse_Text_MostGiganticMagikarpXInches
# 135 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	releaseall
	end


Route12_FishingHouse_Text_DoYouLikeToFish::
# 139 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	.string "I'm the FISHING GURU's younger\n"
	.string "brother.\p"
	.string "I simply looove fishing!\n"
	.string "I can't bear to go without.\p"
	.string "Tell me, do you like to fish?$"

Route12_FishingHouse_Text_TakeThisAndFish::
# 147 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	.string "Grand! I like your style.\n"
	.string "I think we can be friends.\p"
	.string "Take this and fish, young friend!$"

Route12_FishingHouse_Text_ReceivedSuperRod::
# 153 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	.string "{PLAYER} received a SUPER ROD from\n"
	.string "the FISHING GURU's brother.$"

Route12_FishingHouse_Text_IfYouCatchBigMagikarpShowMe::
# 158 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	.string "Fishing is a way of life!\n"
	.string "It is like the finest poetry.\p"
	.string "From the seas to rivers, go out\n"
	.string "and land the big one, my friend.\p"
	.string "Now, I have a request.\p"
	.string "If you catch a big MAGIKARP \n"
	.string "with that ROD, I want to see it.\p"
	.string "As much as I love to fish, I also\n"
	.string "love seeing gigantic MAGIKARP.$"

Route12_FishingHouse_Text_OhThatsDisappointing::
# 170 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	.string "Oh…\n"
	.string "That's so disappointing…$"

Route12_FishingHouse_Text_TryFishingBringMeMagikarp::
# 175 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	.string "Hello there, {PLAYER}!\n"
	.string "Have you been fishing?\p"
	.string "Try fishing with the SUPER ROD in\n"
	.string "any body of water.\p"
	.string "You'll find different POKéMON in\n"
	.string "different places.\p"
	.string "Oh, and don't forget to bring me\n"
	.string "gigantic MAGIKARP.$"

Route12_FishingHouse_Text_OhMagikarpAllowMeToSee::
# 186 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	.string "Oh? {PLAYER}?\n"
	.string "Why, if it isn't a MAGIKARP!\p"
	.string "Allow me to see it, quick!$"

Route12_FishingHouse_Text_WhoaXInchesTakeThis::
# 192 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	.string "… … …Whoa!\n"
	.string "{STR_VAR_2} inches!\p"
	.string "You have a rare appreciation for\n"
	.string "the fine, poetic aspects of fishing!\p"
	.string "You must take this.\n"
	.string "I insist!$"

Route12_FishingHouse_Text_LookForwardToGreaterRecords::
# 201 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	.string "I'll look forward to seeing greater\n"
	.string "records from you!$"

Route12_FishingHouse_Text_HuhXInchesSameSizeAsLast::
# 206 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	.string "Huh?\n"
	.string "{STR_VAR_2} inches?\p"
	.string "This is the same size as the one\n"
	.string "I saw before.$"

Route12_FishingHouse_Text_HmmXInchesDoesntMeasureUp::
# 213 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	.string "Hmm…\n"
	.string "This one is {STR_VAR_2} inches long.\p"
	.string "It doesn't measure up to the\n"
	.string "{STR_VAR_3}-inch one you brought before.$"

Route12_FishingHouse_Text_DoesntLookLikeMagikarp::
# 220 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	.string "Uh… That doesn't look much like\n"
	.string "a MAGIKARP.$"

Route12_FishingHouse_Text_NoRoomForGift::
# 225 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	.string "Oh, no!\p"
	.string "I had a gift for you, but you have\n"
	.string "no room for it.$"

Route12_FishingHouse_Text_MostGiganticMagikarpXInches::
# 231 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	.string "The most gigantic MAGIKARP\n"
	.string "I have ever witnessed…\p"
	.string "{STR_VAR_3} inches!$"

Route12_FishingHouse_Text_BlankChartOfSomeSort::
# 237 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	.string "It's a blank chart of some sort.\p"
	.string "It has spaces for writing in\n"
	.string "records of some kind.$"
