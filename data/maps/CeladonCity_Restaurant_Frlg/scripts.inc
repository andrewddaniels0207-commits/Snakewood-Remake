# 1 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"

# 2 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
CeladonCity_Restaurant_Frlg_MapScripts::
# 3 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
	.byte 0
# 4 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"

# 5 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"

# 6 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
CeladonCity_Restaurant_EventScript_Chef::
# 7 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
# 4 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
# 8 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
	msgbox CeladonCity_Restaurant_Text_TakingBreakRightNow, MSGBOX_NPC
# 9 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
	end
# 10 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"

# 11 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"

# 12 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
CeladonCity_Restaurant_EventScript_Woman::
# 13 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
# 9 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
# 14 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
	msgbox CeladonCity_Restaurant_Text_OftenGoToDrugstore, MSGBOX_NPC
# 15 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
	end
# 16 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"

# 17 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"

# 18 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
CeladonCity_Restaurant_EventScript_CoinCaseMan::
# 19 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
# 14 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
# 20 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
	lock
# 21 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
# 15 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
# 22 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
	faceplayer
# 23 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
# 16 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
# 24 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
	goto_if_set FLAG_GOT_COIN_CASE, CeladonCity_Restaurant_EventScript_CoinCaseMan_2
# 25 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
CeladonCity_Restaurant_EventScript_CoinCaseMan_1:
# 26 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
# 19 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
# 27 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
	msgbox CeladonCity_Restaurant_Text_TakeThisImBusted
# 28 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
# 20 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
# 29 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
	checkitemspace ITEM_COIN_CASE
# 30 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
# 21 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
# 31 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
	compare VAR_RESULT, FALSE
# 32 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
	goto_if_eq CeladonCity_Restaurant_EventScript_CoinCaseMan_5
# 33 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
CeladonCity_Restaurant_EventScript_CoinCaseMan_4:
# 34 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
# 24 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
# 35 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
	giveitem_msg CeladonCity_Restaurant_Text_ReceivedCoinCaseFromMan, ITEM_COIN_CASE
# 36 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
# 25 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
# 37 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
	setflag FLAG_GOT_COIN_CASE
# 38 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
# 26 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
# 39 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
	release
# 40 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
	end
# 41 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"

# 42 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
CeladonCity_Restaurant_EventScript_CoinCaseMan_2:
# 43 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
# 17 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
# 44 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
	goto CeladonCity_Restaurant_EventScript_AlreadyGotCoinCase
# 45 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
	goto CeladonCity_Restaurant_EventScript_CoinCaseMan_1
# 46 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"

# 47 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
CeladonCity_Restaurant_EventScript_CoinCaseMan_5:
# 48 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
# 22 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
# 49 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
	goto CeladonCity_Restaurant_EventScript_NoRoomForCoinCase
# 50 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
	goto CeladonCity_Restaurant_EventScript_CoinCaseMan_4
# 51 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"

# 52 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"

# 53 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
CeladonCity_Restaurant_EventScript_NoRoomForCoinCase::
# 54 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
# 31 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
# 55 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
	msgbox CeladonCity_Restaurant_Text_MakeRoomForThis
# 56 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
# 32 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
# 57 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
	release
# 58 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
	end
# 59 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"

# 60 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"

# 61 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
CeladonCity_Restaurant_EventScript_AlreadyGotCoinCase::
# 62 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
# 37 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
# 63 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
	msgbox CeladonCity_Restaurant_Text_ThoughtIdWinItBack
# 64 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
# 38 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
# 65 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
	release
# 66 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
	end
# 67 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"

# 68 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"

# 69 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
CeladonCity_Restaurant_EventScript_WorkerM::
# 70 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
# 43 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
# 71 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
	msgbox CeladonCity_Restaurant_Text_PsstBasementUnderGameCorner, MSGBOX_NPC
# 72 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
	end
# 73 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"

# 74 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"

# 75 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
CeladonCity_Restaurant_EventScript_FatMan::
# 76 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
# 48 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
# 77 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
	msgbox CeladonCity_Restaurant_Text_ManLostItAllAtSlots, MSGBOX_NPC
# 78 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
	end
# 79 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"

# 80 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"

# 81 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
CeladonCity_Restaurant_Text_TakingBreakRightNow::
# 82 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
# 52 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
# 83 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
	.string "Hi!\p"
# 84 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
	.string "Sorry, but we're taking a break\n"
# 85 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
	.string "right now.$"
# 86 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"

# 87 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
CeladonCity_Restaurant_Text_OftenGoToDrugstore::
# 88 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
# 58 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
# 89 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
	.string "My POKéMON are weak, so I often\n"
# 90 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
	.string "have to go to the DRUGSTORE.$"
# 91 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"

# 92 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
CeladonCity_Restaurant_Text_PsstBasementUnderGameCorner::
# 93 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
# 63 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
# 94 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
	.string "Psst! There's a basement under the\n"
# 95 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
	.string "GAME CORNER, I hear.$"
# 96 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"

# 97 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
CeladonCity_Restaurant_Text_ManLostItAllAtSlots::
# 98 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
# 68 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
# 99 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
	.string "Munch…\p"
# 100 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
	.string "The man at that table lost it all\n"
# 101 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
	.string "at the slots.$"
# 102 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"

# 103 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
CeladonCity_Restaurant_Text_TakeThisImBusted::
# 104 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
# 74 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
# 105 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
	.string "Go ahead! Laugh!\n"
# 106 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
	.string "I'm flat-out busted!\p"
# 107 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
	.string "No more slots for me!\n"
# 108 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
	.string "I'm going straight!\p"
# 109 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
	.string "Here!\n"
# 110 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
	.string "I won't be needing this anymore!$"
# 111 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"

# 112 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
CeladonCity_Restaurant_Text_ReceivedCoinCaseFromMan::
# 113 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
# 83 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
# 114 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
	.string "{PLAYER} received a COIN CASE\n"
# 115 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
	.string "from the man.$"
# 116 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"

# 117 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
CeladonCity_Restaurant_Text_MakeRoomForThis::
# 118 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
# 88 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
# 119 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
	.string "Make room for this!$"
# 120 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"

# 121 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
CeladonCity_Restaurant_Text_ThoughtIdWinItBack::
# 122 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
# 92 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
# 123 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
	.string "I always thought I was going to\n"
# 124 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
	.string "win it back…$"
