CeladonCity_Restaurant_Frlg_MapScripts::
	.byte 0


CeladonCity_Restaurant_EventScript_Chef::
# 4 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
	msgbox CeladonCity_Restaurant_Text_TakingBreakRightNow, MSGBOX_NPC
	end


CeladonCity_Restaurant_EventScript_Woman::
# 9 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
	msgbox CeladonCity_Restaurant_Text_OftenGoToDrugstore, MSGBOX_NPC
	end


CeladonCity_Restaurant_EventScript_CoinCaseMan::
# 14 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
	lock
# 15 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
	faceplayer
# 16 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
	goto_if_set FLAG_GOT_COIN_CASE, CeladonCity_Restaurant_EventScript_CoinCaseMan_2
CeladonCity_Restaurant_EventScript_CoinCaseMan_1:
# 19 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
	msgbox CeladonCity_Restaurant_Text_TakeThisImBusted
# 20 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
	checkitemspace ITEM_COIN_CASE
# 21 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq CeladonCity_Restaurant_EventScript_CoinCaseMan_5
CeladonCity_Restaurant_EventScript_CoinCaseMan_4:
# 24 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
	giveitem_msg CeladonCity_Restaurant_Text_ReceivedCoinCaseFromMan, ITEM_COIN_CASE
# 25 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
	setflag FLAG_GOT_COIN_CASE
# 26 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
	release
	end

CeladonCity_Restaurant_EventScript_CoinCaseMan_2:
# 17 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
	goto CeladonCity_Restaurant_EventScript_AlreadyGotCoinCase
	goto CeladonCity_Restaurant_EventScript_CoinCaseMan_1

CeladonCity_Restaurant_EventScript_CoinCaseMan_5:
# 22 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
	goto CeladonCity_Restaurant_EventScript_NoRoomForCoinCase
	goto CeladonCity_Restaurant_EventScript_CoinCaseMan_4


CeladonCity_Restaurant_EventScript_NoRoomForCoinCase::
# 31 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
	msgbox CeladonCity_Restaurant_Text_MakeRoomForThis
# 32 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
	release
	end


CeladonCity_Restaurant_EventScript_AlreadyGotCoinCase::
# 37 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
	msgbox CeladonCity_Restaurant_Text_ThoughtIdWinItBack
# 38 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
	release
	end


CeladonCity_Restaurant_EventScript_WorkerM::
# 43 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
	msgbox CeladonCity_Restaurant_Text_PsstBasementUnderGameCorner, MSGBOX_NPC
	end


CeladonCity_Restaurant_EventScript_FatMan::
# 48 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
	msgbox CeladonCity_Restaurant_Text_ManLostItAllAtSlots, MSGBOX_NPC
	end


CeladonCity_Restaurant_Text_TakingBreakRightNow::
# 52 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
	.string "Hi!\p"
	.string "Sorry, but we're taking a break\n"
	.string "right now.$"

CeladonCity_Restaurant_Text_OftenGoToDrugstore::
# 58 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
	.string "My POKéMON are weak, so I often\n"
	.string "have to go to the DRUGSTORE.$"

CeladonCity_Restaurant_Text_PsstBasementUnderGameCorner::
# 63 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
	.string "Psst! There's a basement under the\n"
	.string "GAME CORNER, I hear.$"

CeladonCity_Restaurant_Text_ManLostItAllAtSlots::
# 68 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
	.string "Munch…\p"
	.string "The man at that table lost it all\n"
	.string "at the slots.$"

CeladonCity_Restaurant_Text_TakeThisImBusted::
# 74 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
	.string "Go ahead! Laugh!\n"
	.string "I'm flat-out busted!\p"
	.string "No more slots for me!\n"
	.string "I'm going straight!\p"
	.string "Here!\n"
	.string "I won't be needing this anymore!$"

CeladonCity_Restaurant_Text_ReceivedCoinCaseFromMan::
# 83 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
	.string "{PLAYER} received a COIN CASE\n"
	.string "from the man.$"

CeladonCity_Restaurant_Text_MakeRoomForThis::
# 88 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
	.string "Make room for this!$"

CeladonCity_Restaurant_Text_ThoughtIdWinItBack::
# 92 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
	.string "I always thought I was going to\n"
	.string "win it back…$"
