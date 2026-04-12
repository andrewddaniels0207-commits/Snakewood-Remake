# 1 "data/maps/PewterCity_House1_Frlg/scripts.pory"

# 2 "data/maps/PewterCity_House1_Frlg/scripts.pory"
PewterCity_House1_Frlg_MapScripts::
# 3 "data/maps/PewterCity_House1_Frlg/scripts.pory"
	.byte 0
# 4 "data/maps/PewterCity_House1_Frlg/scripts.pory"

# 5 "data/maps/PewterCity_House1_Frlg/scripts.pory"

# 6 "data/maps/PewterCity_House1_Frlg/scripts.pory"
PewterCity_House1_EventScript_BaldingMan::
# 7 "data/maps/PewterCity_House1_Frlg/scripts.pory"
# 4 "data/maps/PewterCity_House1_Frlg/scripts.pory"
# 8 "data/maps/PewterCity_House1_Frlg/scripts.pory"
	msgbox PewterCity_House1_Text_TradeMonsAreFinicky, MSGBOX_NPC
# 9 "data/maps/PewterCity_House1_Frlg/scripts.pory"
	end
# 10 "data/maps/PewterCity_House1_Frlg/scripts.pory"

# 11 "data/maps/PewterCity_House1_Frlg/scripts.pory"

# 12 "data/maps/PewterCity_House1_Frlg/scripts.pory"
PewterCity_House1_EventScript_LittleBoy::
# 13 "data/maps/PewterCity_House1_Frlg/scripts.pory"
# 9 "data/maps/PewterCity_House1_Frlg/scripts.pory"
# 14 "data/maps/PewterCity_House1_Frlg/scripts.pory"
	lock
# 15 "data/maps/PewterCity_House1_Frlg/scripts.pory"
# 10 "data/maps/PewterCity_House1_Frlg/scripts.pory"
# 16 "data/maps/PewterCity_House1_Frlg/scripts.pory"
	msgbox PewterCity_House1_Text_NidoranSit
# 17 "data/maps/PewterCity_House1_Frlg/scripts.pory"
# 11 "data/maps/PewterCity_House1_Frlg/scripts.pory"
# 18 "data/maps/PewterCity_House1_Frlg/scripts.pory"
	call PewterCity_House1_EventScript_DoNidoranCry
# 19 "data/maps/PewterCity_House1_Frlg/scripts.pory"
# 12 "data/maps/PewterCity_House1_Frlg/scripts.pory"
# 20 "data/maps/PewterCity_House1_Frlg/scripts.pory"
	release
# 21 "data/maps/PewterCity_House1_Frlg/scripts.pory"
	end
# 22 "data/maps/PewterCity_House1_Frlg/scripts.pory"

# 23 "data/maps/PewterCity_House1_Frlg/scripts.pory"

# 24 "data/maps/PewterCity_House1_Frlg/scripts.pory"
PewterCity_House1_EventScript_Nidoran::
# 25 "data/maps/PewterCity_House1_Frlg/scripts.pory"
# 17 "data/maps/PewterCity_House1_Frlg/scripts.pory"
# 26 "data/maps/PewterCity_House1_Frlg/scripts.pory"
	lock
# 27 "data/maps/PewterCity_House1_Frlg/scripts.pory"
# 18 "data/maps/PewterCity_House1_Frlg/scripts.pory"
# 28 "data/maps/PewterCity_House1_Frlg/scripts.pory"
	faceplayer
# 29 "data/maps/PewterCity_House1_Frlg/scripts.pory"
# 19 "data/maps/PewterCity_House1_Frlg/scripts.pory"
# 30 "data/maps/PewterCity_House1_Frlg/scripts.pory"
	call PewterCity_House1_EventScript_DoNidoranCry
# 31 "data/maps/PewterCity_House1_Frlg/scripts.pory"
# 20 "data/maps/PewterCity_House1_Frlg/scripts.pory"
# 32 "data/maps/PewterCity_House1_Frlg/scripts.pory"
	applymovement LOCALID_PEWTER_HOUSE_NIDORAN, Common_Movement_FaceOriginalDirection
# 33 "data/maps/PewterCity_House1_Frlg/scripts.pory"
# 21 "data/maps/PewterCity_House1_Frlg/scripts.pory"
# 34 "data/maps/PewterCity_House1_Frlg/scripts.pory"
	waitmovement 0
# 35 "data/maps/PewterCity_House1_Frlg/scripts.pory"
# 22 "data/maps/PewterCity_House1_Frlg/scripts.pory"
# 36 "data/maps/PewterCity_House1_Frlg/scripts.pory"
	release
# 37 "data/maps/PewterCity_House1_Frlg/scripts.pory"
	end
# 38 "data/maps/PewterCity_House1_Frlg/scripts.pory"

# 39 "data/maps/PewterCity_House1_Frlg/scripts.pory"

# 40 "data/maps/PewterCity_House1_Frlg/scripts.pory"
PewterCity_House1_EventScript_DoNidoranCry::
# 41 "data/maps/PewterCity_House1_Frlg/scripts.pory"
# 27 "data/maps/PewterCity_House1_Frlg/scripts.pory"
# 42 "data/maps/PewterCity_House1_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 43 "data/maps/PewterCity_House1_Frlg/scripts.pory"
# 28 "data/maps/PewterCity_House1_Frlg/scripts.pory"
# 44 "data/maps/PewterCity_House1_Frlg/scripts.pory"
	waitse
# 45 "data/maps/PewterCity_House1_Frlg/scripts.pory"
# 29 "data/maps/PewterCity_House1_Frlg/scripts.pory"
# 46 "data/maps/PewterCity_House1_Frlg/scripts.pory"
	playmoncry SPECIES_NIDORAN_M, CRY_MODE_NORMAL
# 47 "data/maps/PewterCity_House1_Frlg/scripts.pory"
# 30 "data/maps/PewterCity_House1_Frlg/scripts.pory"
# 48 "data/maps/PewterCity_House1_Frlg/scripts.pory"
	msgbox PewterCity_House1_Text_Nidoran
# 49 "data/maps/PewterCity_House1_Frlg/scripts.pory"
# 31 "data/maps/PewterCity_House1_Frlg/scripts.pory"
# 50 "data/maps/PewterCity_House1_Frlg/scripts.pory"
	waitmoncry
# 51 "data/maps/PewterCity_House1_Frlg/scripts.pory"
# 32 "data/maps/PewterCity_House1_Frlg/scripts.pory"
# 52 "data/maps/PewterCity_House1_Frlg/scripts.pory"
	call EventScript_RestorePrevTextColor
# 53 "data/maps/PewterCity_House1_Frlg/scripts.pory"
	return
# 54 "data/maps/PewterCity_House1_Frlg/scripts.pory"

# 55 "data/maps/PewterCity_House1_Frlg/scripts.pory"

# 56 "data/maps/PewterCity_House1_Frlg/scripts.pory"
PewterCity_House1_Text_Nidoran::
# 57 "data/maps/PewterCity_House1_Frlg/scripts.pory"
# 36 "data/maps/PewterCity_House1_Frlg/scripts.pory"
# 58 "data/maps/PewterCity_House1_Frlg/scripts.pory"
	.string "NIDORAN♂: Bowbow!$"
# 59 "data/maps/PewterCity_House1_Frlg/scripts.pory"

# 60 "data/maps/PewterCity_House1_Frlg/scripts.pory"
PewterCity_House1_Text_NidoranSit::
# 61 "data/maps/PewterCity_House1_Frlg/scripts.pory"
# 40 "data/maps/PewterCity_House1_Frlg/scripts.pory"
# 62 "data/maps/PewterCity_House1_Frlg/scripts.pory"
	.string "NIDORAN, sit!$"
# 63 "data/maps/PewterCity_House1_Frlg/scripts.pory"

# 64 "data/maps/PewterCity_House1_Frlg/scripts.pory"
PewterCity_House1_Text_TradeMonsAreFinicky::
# 65 "data/maps/PewterCity_House1_Frlg/scripts.pory"
# 44 "data/maps/PewterCity_House1_Frlg/scripts.pory"
# 66 "data/maps/PewterCity_House1_Frlg/scripts.pory"
	.string "Our POKéMON's an outsider, so it's\n"
# 67 "data/maps/PewterCity_House1_Frlg/scripts.pory"
	.string "finicky and hard to handle.\p"
# 68 "data/maps/PewterCity_House1_Frlg/scripts.pory"
	.string "An outsider is a POKéMON that you\n"
# 69 "data/maps/PewterCity_House1_Frlg/scripts.pory"
	.string "get in a trade.\p"
# 70 "data/maps/PewterCity_House1_Frlg/scripts.pory"
	.string "It grows fast, but it may ignore an\n"
# 71 "data/maps/PewterCity_House1_Frlg/scripts.pory"
	.string "unskilled TRAINER in battle.\p"
# 72 "data/maps/PewterCity_House1_Frlg/scripts.pory"
	.string "If only we had some BADGES…$"
