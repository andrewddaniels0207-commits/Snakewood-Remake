# 1 "data/maps/SafariZone_SecretHouse_Frlg/scripts.pory"

# 2 "data/maps/SafariZone_SecretHouse_Frlg/scripts.pory"
SafariZone_SecretHouse_Frlg_MapScripts::
# 3 "data/maps/SafariZone_SecretHouse_Frlg/scripts.pory"
	.byte 0
# 4 "data/maps/SafariZone_SecretHouse_Frlg/scripts.pory"

# 5 "data/maps/SafariZone_SecretHouse_Frlg/scripts.pory"

# 6 "data/maps/SafariZone_SecretHouse_Frlg/scripts.pory"
SafariZone_SecretHouse_EventScript_Attendant::
# 7 "data/maps/SafariZone_SecretHouse_Frlg/scripts.pory"
# 4 "data/maps/SafariZone_SecretHouse_Frlg/scripts.pory"
# 8 "data/maps/SafariZone_SecretHouse_Frlg/scripts.pory"
	lock
# 9 "data/maps/SafariZone_SecretHouse_Frlg/scripts.pory"
# 5 "data/maps/SafariZone_SecretHouse_Frlg/scripts.pory"
# 10 "data/maps/SafariZone_SecretHouse_Frlg/scripts.pory"
	faceplayer
# 11 "data/maps/SafariZone_SecretHouse_Frlg/scripts.pory"
# 6 "data/maps/SafariZone_SecretHouse_Frlg/scripts.pory"
# 12 "data/maps/SafariZone_SecretHouse_Frlg/scripts.pory"
	goto_if_set FLAG_GOT_HM03, SafariZone_SecretHouse_EventScript_Attendant_2
# 13 "data/maps/SafariZone_SecretHouse_Frlg/scripts.pory"
SafariZone_SecretHouse_EventScript_Attendant_1:
# 14 "data/maps/SafariZone_SecretHouse_Frlg/scripts.pory"
# 9 "data/maps/SafariZone_SecretHouse_Frlg/scripts.pory"
# 15 "data/maps/SafariZone_SecretHouse_Frlg/scripts.pory"
	msgbox SafariZone_SecretHouse_Text_CongratsYouveWon
# 16 "data/maps/SafariZone_SecretHouse_Frlg/scripts.pory"
# 10 "data/maps/SafariZone_SecretHouse_Frlg/scripts.pory"
# 17 "data/maps/SafariZone_SecretHouse_Frlg/scripts.pory"
	checkitemspace ITEM_HM03
# 18 "data/maps/SafariZone_SecretHouse_Frlg/scripts.pory"
# 11 "data/maps/SafariZone_SecretHouse_Frlg/scripts.pory"
# 19 "data/maps/SafariZone_SecretHouse_Frlg/scripts.pory"
	compare VAR_RESULT, FALSE
# 20 "data/maps/SafariZone_SecretHouse_Frlg/scripts.pory"
	goto_if_eq SafariZone_SecretHouse_EventScript_Attendant_5
# 21 "data/maps/SafariZone_SecretHouse_Frlg/scripts.pory"
SafariZone_SecretHouse_EventScript_Attendant_4:
# 22 "data/maps/SafariZone_SecretHouse_Frlg/scripts.pory"
# 14 "data/maps/SafariZone_SecretHouse_Frlg/scripts.pory"
# 23 "data/maps/SafariZone_SecretHouse_Frlg/scripts.pory"
	giveitem_msg SafariZone_SecretHouse_Text_ReceivedHM03FromAttendant, ITEM_HM03
# 24 "data/maps/SafariZone_SecretHouse_Frlg/scripts.pory"
# 15 "data/maps/SafariZone_SecretHouse_Frlg/scripts.pory"
# 25 "data/maps/SafariZone_SecretHouse_Frlg/scripts.pory"
	msgbox SafariZone_SecretHouse_Text_ExplainSurf
# 26 "data/maps/SafariZone_SecretHouse_Frlg/scripts.pory"
# 16 "data/maps/SafariZone_SecretHouse_Frlg/scripts.pory"
# 27 "data/maps/SafariZone_SecretHouse_Frlg/scripts.pory"
	setflag FLAG_GOT_HM03
# 28 "data/maps/SafariZone_SecretHouse_Frlg/scripts.pory"
# 17 "data/maps/SafariZone_SecretHouse_Frlg/scripts.pory"
# 29 "data/maps/SafariZone_SecretHouse_Frlg/scripts.pory"
	release
# 30 "data/maps/SafariZone_SecretHouse_Frlg/scripts.pory"
	end
# 31 "data/maps/SafariZone_SecretHouse_Frlg/scripts.pory"

# 32 "data/maps/SafariZone_SecretHouse_Frlg/scripts.pory"
SafariZone_SecretHouse_EventScript_Attendant_2:
# 33 "data/maps/SafariZone_SecretHouse_Frlg/scripts.pory"
# 7 "data/maps/SafariZone_SecretHouse_Frlg/scripts.pory"
# 34 "data/maps/SafariZone_SecretHouse_Frlg/scripts.pory"
	goto SafariZone_SecretHouse_EventScript_ExplainSurf
# 35 "data/maps/SafariZone_SecretHouse_Frlg/scripts.pory"
	goto SafariZone_SecretHouse_EventScript_Attendant_1
# 36 "data/maps/SafariZone_SecretHouse_Frlg/scripts.pory"

# 37 "data/maps/SafariZone_SecretHouse_Frlg/scripts.pory"
SafariZone_SecretHouse_EventScript_Attendant_5:
# 38 "data/maps/SafariZone_SecretHouse_Frlg/scripts.pory"
# 12 "data/maps/SafariZone_SecretHouse_Frlg/scripts.pory"
# 39 "data/maps/SafariZone_SecretHouse_Frlg/scripts.pory"
	goto SafariZone_SecretHouse_EventScript_NoRoomForHM03
# 40 "data/maps/SafariZone_SecretHouse_Frlg/scripts.pory"
	goto SafariZone_SecretHouse_EventScript_Attendant_4
# 41 "data/maps/SafariZone_SecretHouse_Frlg/scripts.pory"

# 42 "data/maps/SafariZone_SecretHouse_Frlg/scripts.pory"

# 43 "data/maps/SafariZone_SecretHouse_Frlg/scripts.pory"
SafariZone_SecretHouse_EventScript_NoRoomForHM03::
# 44 "data/maps/SafariZone_SecretHouse_Frlg/scripts.pory"
# 22 "data/maps/SafariZone_SecretHouse_Frlg/scripts.pory"
# 45 "data/maps/SafariZone_SecretHouse_Frlg/scripts.pory"
	msgbox SafariZone_SecretHouse_Text_DontHaveRoomForPrize
# 46 "data/maps/SafariZone_SecretHouse_Frlg/scripts.pory"
# 23 "data/maps/SafariZone_SecretHouse_Frlg/scripts.pory"
# 47 "data/maps/SafariZone_SecretHouse_Frlg/scripts.pory"
	release
# 48 "data/maps/SafariZone_SecretHouse_Frlg/scripts.pory"
	end
# 49 "data/maps/SafariZone_SecretHouse_Frlg/scripts.pory"

# 50 "data/maps/SafariZone_SecretHouse_Frlg/scripts.pory"

# 51 "data/maps/SafariZone_SecretHouse_Frlg/scripts.pory"
SafariZone_SecretHouse_EventScript_ExplainSurf::
# 52 "data/maps/SafariZone_SecretHouse_Frlg/scripts.pory"
# 28 "data/maps/SafariZone_SecretHouse_Frlg/scripts.pory"
# 53 "data/maps/SafariZone_SecretHouse_Frlg/scripts.pory"
	msgbox SafariZone_SecretHouse_Text_ExplainSurf
# 54 "data/maps/SafariZone_SecretHouse_Frlg/scripts.pory"
# 29 "data/maps/SafariZone_SecretHouse_Frlg/scripts.pory"
# 55 "data/maps/SafariZone_SecretHouse_Frlg/scripts.pory"
	release
# 56 "data/maps/SafariZone_SecretHouse_Frlg/scripts.pory"
	end
# 57 "data/maps/SafariZone_SecretHouse_Frlg/scripts.pory"

# 58 "data/maps/SafariZone_SecretHouse_Frlg/scripts.pory"

# 59 "data/maps/SafariZone_SecretHouse_Frlg/scripts.pory"
SafariZone_SecretHouse_Text_CongratsYouveWon::
# 60 "data/maps/SafariZone_SecretHouse_Frlg/scripts.pory"
# 33 "data/maps/SafariZone_SecretHouse_Frlg/scripts.pory"
# 61 "data/maps/SafariZone_SecretHouse_Frlg/scripts.pory"
	.string "Ah! Finally!\p"
# 62 "data/maps/SafariZone_SecretHouse_Frlg/scripts.pory"
	.string "You're the first person to reach\n"
# 63 "data/maps/SafariZone_SecretHouse_Frlg/scripts.pory"
	.string "the SECRET HOUSE!\p"
# 64 "data/maps/SafariZone_SecretHouse_Frlg/scripts.pory"
	.string "Although I made a campaign\n"
# 65 "data/maps/SafariZone_SecretHouse_Frlg/scripts.pory"
	.string "for our grand opening,\p"
# 66 "data/maps/SafariZone_SecretHouse_Frlg/scripts.pory"
	.string "I was getting worried that no one\n"
# 67 "data/maps/SafariZone_SecretHouse_Frlg/scripts.pory"
	.string "would win our campaign prize.\p"
# 68 "data/maps/SafariZone_SecretHouse_Frlg/scripts.pory"
	.string "Congratulations!\n"
# 69 "data/maps/SafariZone_SecretHouse_Frlg/scripts.pory"
	.string "You have won!$"
# 70 "data/maps/SafariZone_SecretHouse_Frlg/scripts.pory"

# 71 "data/maps/SafariZone_SecretHouse_Frlg/scripts.pory"
SafariZone_SecretHouse_Text_ReceivedHM03FromAttendant::
# 72 "data/maps/SafariZone_SecretHouse_Frlg/scripts.pory"
# 45 "data/maps/SafariZone_SecretHouse_Frlg/scripts.pory"
# 73 "data/maps/SafariZone_SecretHouse_Frlg/scripts.pory"
	.string "{PLAYER} received HM03\n"
# 74 "data/maps/SafariZone_SecretHouse_Frlg/scripts.pory"
	.string "from the attendant!$"
# 75 "data/maps/SafariZone_SecretHouse_Frlg/scripts.pory"

# 76 "data/maps/SafariZone_SecretHouse_Frlg/scripts.pory"
SafariZone_SecretHouse_Text_ExplainSurf::
# 77 "data/maps/SafariZone_SecretHouse_Frlg/scripts.pory"
# 50 "data/maps/SafariZone_SecretHouse_Frlg/scripts.pory"
# 78 "data/maps/SafariZone_SecretHouse_Frlg/scripts.pory"
	.string "HM03 is SURF.\p"
# 79 "data/maps/SafariZone_SecretHouse_Frlg/scripts.pory"
	.string "POKéMON will be able to ferry you\n"
# 80 "data/maps/SafariZone_SecretHouse_Frlg/scripts.pory"
	.string "across water using it.\p"
# 81 "data/maps/SafariZone_SecretHouse_Frlg/scripts.pory"
	.string "And, this HM isn't disposable, so\n"
# 82 "data/maps/SafariZone_SecretHouse_Frlg/scripts.pory"
	.string "you can use it over and over.\p"
# 83 "data/maps/SafariZone_SecretHouse_Frlg/scripts.pory"
	.string "You're super lucky for winning this\n"
# 84 "data/maps/SafariZone_SecretHouse_Frlg/scripts.pory"
	.string "fabulous prize!$"
# 85 "data/maps/SafariZone_SecretHouse_Frlg/scripts.pory"

# 86 "data/maps/SafariZone_SecretHouse_Frlg/scripts.pory"
SafariZone_SecretHouse_Text_DontHaveRoomForPrize::
# 87 "data/maps/SafariZone_SecretHouse_Frlg/scripts.pory"
# 60 "data/maps/SafariZone_SecretHouse_Frlg/scripts.pory"
# 88 "data/maps/SafariZone_SecretHouse_Frlg/scripts.pory"
	.string "You don't have room for this\n"
# 89 "data/maps/SafariZone_SecretHouse_Frlg/scripts.pory"
	.string "fabulous prize!$"
