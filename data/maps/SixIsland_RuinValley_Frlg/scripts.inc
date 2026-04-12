# 1 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"

# 2 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
SixIsland_RuinValley_Frlg_MapScripts::
# 3 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
# 2 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
# 4 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, SixIsland_RuinValley_OnLoad
# 5 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
	.byte 0
# 6 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"

# 7 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"

# 8 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
SixIsland_RuinValley_OnLoad::
# 9 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
# 6 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
# 10 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
	goto_if_set FLAG_USED_CUT_ON_RUIN_VALLEY_BRAILLE, SixIsland_RuinValley_OnLoad_2
# 11 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
SixIsland_RuinValley_OnLoad_1:
# 12 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
	end
# 13 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"

# 14 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
SixIsland_RuinValley_OnLoad_2:
# 15 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
# 7 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
# 16 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
	call SixIsland_RuinValley_EventScript_OpenDottedHoleDoor
# 17 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
	goto SixIsland_RuinValley_OnLoad_1
# 18 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"

# 19 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"

# 20 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
SixIsland_RuinValley_EventScript_OpenDottedHoleDoor::
# 21 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
# 13 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
# 22 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
	setmetatile 24, 24, METATILE_SeviiIslands67_DottedHoleDoor_Open, 0
# 23 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
	return
# 24 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"

# 25 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"

# 26 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
SixIsland_RuinValley_EventScript_Scientist::
# 27 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
# 18 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
# 28 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
	lock
# 29 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
# 19 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
# 30 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
	msgbox SixIsland_RuinValley_Text_CantFigureOutHowToGetInside
# 31 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
# 20 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
# 32 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
	applymovement LOCALID_RUIN_VALLEY_SCIENTIST, Common_Movement_FacePlayer
# 33 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
# 21 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
# 34 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
	waitmovement 0
# 35 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
# 22 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
# 36 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
	msgbox SixIsland_RuinValley_Text_IFoundThisPlace
# 37 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
# 23 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
# 38 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
	applymovement LOCALID_RUIN_VALLEY_SCIENTIST, Common_Movement_FaceOriginalDirection
# 39 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
# 24 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
# 40 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
	waitmovement 0
# 41 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
# 25 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
# 42 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
	release
# 43 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
	end
# 44 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"

# 45 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"

# 46 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
SixIsland_RuinValley_EventScript_DottedHoleDoor::
# 47 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
# 30 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
# 48 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
	lockall
# 49 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
# 31 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
# 50 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
	goto_if_set FLAG_USED_CUT_ON_RUIN_VALLEY_BRAILLE, SixIsland_RuinValley_EventScript_DottedHoleDoor_2
# 51 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
SixIsland_RuinValley_EventScript_DottedHoleDoor_1:
# 52 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
# 34 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
# 53 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
	msgbox SixIsland_RuinValley_Text_CheckDoorMoreThoroughly, MSGBOX_YESNO
# 54 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
# 35 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
# 55 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
	compare VAR_RESULT, NO
# 56 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
	goto_if_eq SixIsland_RuinValley_EventScript_DottedHoleDoor_5
# 57 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
SixIsland_RuinValley_EventScript_DottedHoleDoor_4:
# 58 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
# 38 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
# 59 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
	msgbox SixIsland_RuinValley_Text_SeveralDotsOnTheDoor
# 60 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
# 39 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
# 61 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
	braillemsgbox Braille_Text_Cut
# 62 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
# 40 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
# 63 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
	releaseall
# 64 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
	end
# 65 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"

# 66 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
SixIsland_RuinValley_EventScript_DottedHoleDoor_2:
# 67 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
# 32 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
# 68 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
	goto SixIsland_RuinValley_EventScript_DottedHoleDoorOpen
# 69 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
	goto SixIsland_RuinValley_EventScript_DottedHoleDoor_1
# 70 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"

# 71 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
SixIsland_RuinValley_EventScript_DottedHoleDoor_5:
# 72 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
# 36 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
# 73 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
	goto SixIsland_RuinValley_EventScript_IgnoreDottedHoleDoor
# 74 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
	goto SixIsland_RuinValley_EventScript_DottedHoleDoor_4
# 75 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"

# 76 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"

# 77 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
SixIsland_RuinValley_EventScript_DottedHoleDoorOpen::
# 78 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
# 45 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
# 79 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
	msgbox SixIsland_RuinValley_Text_DoorIsOpen
# 80 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
# 46 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
# 81 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
	releaseall
# 82 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
	end
# 83 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"

# 84 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"

# 85 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
SixIsland_RuinValley_EventScript_IgnoreDottedHoleDoor::
# 86 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
# 51 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
# 87 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
	msgbox SixIsland_RuinValley_Text_LeftDoorAlone
# 88 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
# 52 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
# 89 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
	releaseall
# 90 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
	end
# 91 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"

# 92 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"

# 93 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
SixIsland_RuinValley_Text_CantFigureOutHowToGetInside::
# 94 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
# 56 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
# 95 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
	.string "I can't figure out how I'm supposed\n"
# 96 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
	.string "to get inside.$"
# 97 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"

# 98 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
SixIsland_RuinValley_Text_IFoundThisPlace::
# 99 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
# 61 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
# 100 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
	.string "Let me tell you, I found this\n"
# 101 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
	.string "place.\p"
# 102 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
	.string "Don't look so envious, will you?$"
# 103 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"

# 104 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
SixIsland_RuinValley_Text_CheckDoorMoreThoroughly::
# 105 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
# 67 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
# 106 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
	.string "The door doesn't budge at all.\n"
# 107 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
	.string "Check it more thoroughly?$"
# 108 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"

# 109 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
SixIsland_RuinValley_Text_LeftDoorAlone::
# 110 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
# 72 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
# 111 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
	.string "{PLAYER} left the door alone.$"
# 112 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"

# 113 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
SixIsland_RuinValley_Text_SeveralDotsOnTheDoor::
# 114 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
# 76 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
# 115 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
	.string "On closer inspection, there are\n"
# 116 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
	.string "several dots on the door…$"
# 117 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"

# 118 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
SixIsland_RuinValley_Text_DoorIsOpen::
# 119 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
# 81 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
# 120 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
	.string "The door is open.$"
# 121 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"

# 122 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
SixIsland_RuinValley_Text_StanlyIntro::
# 123 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
# 85 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
# 124 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
	.string "There appear to be many secrets\n"
# 125 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
	.string "still unsolved in this world.$"
# 126 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"

# 127 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
SixIsland_RuinValley_Text_StanlyDefeat::
# 128 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
# 90 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
# 129 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
	.string "Hmm…$"
# 130 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"

# 131 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
SixIsland_RuinValley_Text_StanlyPostBattle::
# 132 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
# 94 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
# 133 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
	.string "I suggest to you that you, too,\n"
# 134 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
	.string "give a thought to the secrets and\l"
# 135 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
	.string "mysteries of our world once a day.$"
# 136 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"

# 137 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
SixIsland_RuinValley_Text_FosterIntro::
# 138 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
# 100 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
# 139 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
	.string "I'm curious, what compelled you to\n"
# 140 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
	.string "come here?$"
# 141 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"

# 142 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
SixIsland_RuinValley_Text_FosterDefeat::
# 143 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
# 105 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
# 144 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
	.string "It's been so long since I battled,\n"
# 145 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
	.string "my instincts are off.$"
# 146 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"

# 147 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
SixIsland_RuinValley_Text_FosterPostBattle::
# 148 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
# 110 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
# 149 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
	.string "There are several ruins on the\n"
# 150 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
	.string "SEVII ISLANDS.\p"
# 151 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
	.string "The majority of them date back\n"
# 152 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
	.string "a long way.$"
# 153 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"

# 154 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
SixIsland_RuinValley_Text_LarryIntro::
# 155 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
# 117 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
# 156 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
	.string "It's been said that there are\n"
# 157 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
	.string "mysterious stones on this island.\p"
# 158 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
	.string "I suspect it has something to do\n"
# 159 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
	.string "with the ruins here.$"
# 160 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"

# 161 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
SixIsland_RuinValley_Text_LarryDefeat::
# 162 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
# 124 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
# 163 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
	.string "Oh, interesting.$"
# 164 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"

# 165 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
SixIsland_RuinValley_Text_LarryPostBattle::
# 166 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
# 128 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
# 167 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
	.string "Those ruins over there…\p"
# 168 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
	.string "I haven't had any luck in finding\n"
# 169 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
	.string "how I can get inside.$"
# 170 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"

# 171 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
SixIsland_RuinValley_Text_DarylIntro::
# 172 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
# 134 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
# 173 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
	.string "A battle with you, so high up!$"
# 174 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"

# 175 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
SixIsland_RuinValley_Text_DarylDefeat::
# 176 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
# 138 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
# 177 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
	.string "Oh, the heartbreak of losing so\n"
# 178 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
	.string "easily to you!$"
# 179 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"

# 180 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
SixIsland_RuinValley_Text_DarylPostBattle::
# 181 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
# 143 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
# 182 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
	.string "Experience the joy of climbing!$"
# 183 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"

# 184 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
SixIsland_RuinValley_Text_HectorIntro::
# 185 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
# 147 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
# 186 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
	.string "I'm pretty familiar with the land\n"
# 187 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
	.string "around these parts.$"
# 188 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"

# 189 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
SixIsland_RuinValley_Text_HectorDefeat::
# 190 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
# 152 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
# 191 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
	.string "You don't need to be so pushy.\n"
# 192 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
	.string "I'll be happy to tell you.$"
# 193 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"

# 194 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
SixIsland_RuinValley_Text_HectorPostBattle::
# 195 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
# 157 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
# 196 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
	.string "The door to the ruins…\n"
# 197 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
	.string "It has these strange patterns\l"
# 198 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
	.string "engraved on the outside.\p"
# 199 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
	.string "I don't know what they mean,\n"
# 200 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
	.string "though.$"
