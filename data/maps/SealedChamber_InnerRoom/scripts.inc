# 1 "data/maps/SealedChamber_InnerRoom/scripts.pory"

# 2 "data/maps/SealedChamber_InnerRoom/scripts.pory"
SealedChamber_InnerRoom_MapScripts::
# 3 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	.byte 0
# 4 "data/maps/SealedChamber_InnerRoom/scripts.pory"

# 5 "data/maps/SealedChamber_InnerRoom/scripts.pory"

# 6 "data/maps/SealedChamber_InnerRoom/scripts.pory"
SealedChamber_InnerRoom_EventScript_BrailleBackWall::
# 7 "data/maps/SealedChamber_InnerRoom/scripts.pory"
# 4 "data/maps/SealedChamber_InnerRoom/scripts.pory"
# 8 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	lockall
# 9 "data/maps/SealedChamber_InnerRoom/scripts.pory"
# 5 "data/maps/SealedChamber_InnerRoom/scripts.pory"
# 10 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	braillemsgbox SealedChamber_InnerRoom_Braille_FirstWailordLastRelicanth
# 11 "data/maps/SealedChamber_InnerRoom/scripts.pory"
# 6 "data/maps/SealedChamber_InnerRoom/scripts.pory"
# 12 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	goto_if_set FLAG_REGI_DOORS_OPENED, SealedChamber_InnerRoom_EventScript_BrailleBackWall_2
# 13 "data/maps/SealedChamber_InnerRoom/scripts.pory"
SealedChamber_InnerRoom_EventScript_BrailleBackWall_1:
# 14 "data/maps/SealedChamber_InnerRoom/scripts.pory"
# 9 "data/maps/SealedChamber_InnerRoom/scripts.pory"
# 15 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	specialvar VAR_RESULT, CheckRelicanthWailord
# 16 "data/maps/SealedChamber_InnerRoom/scripts.pory"
# 10 "data/maps/SealedChamber_InnerRoom/scripts.pory"
# 17 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	compare VAR_RESULT, FALSE
# 18 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	goto_if_eq SealedChamber_InnerRoom_EventScript_BrailleBackWall_5
# 19 "data/maps/SealedChamber_InnerRoom/scripts.pory"
SealedChamber_InnerRoom_EventScript_BrailleBackWall_4:
# 20 "data/maps/SealedChamber_InnerRoom/scripts.pory"
# 13 "data/maps/SealedChamber_InnerRoom/scripts.pory"
# 21 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	fadeoutbgm 0
# 22 "data/maps/SealedChamber_InnerRoom/scripts.pory"
# 14 "data/maps/SealedChamber_InnerRoom/scripts.pory"
# 23 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	playse SE_TRUCK_MOVE
# 24 "data/maps/SealedChamber_InnerRoom/scripts.pory"
# 15 "data/maps/SealedChamber_InnerRoom/scripts.pory"
# 25 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	special DoSealedChamberShakingEffect_Long
# 26 "data/maps/SealedChamber_InnerRoom/scripts.pory"
# 16 "data/maps/SealedChamber_InnerRoom/scripts.pory"
# 27 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	waitstate
# 28 "data/maps/SealedChamber_InnerRoom/scripts.pory"
# 17 "data/maps/SealedChamber_InnerRoom/scripts.pory"
# 29 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	delay 40
# 30 "data/maps/SealedChamber_InnerRoom/scripts.pory"
# 18 "data/maps/SealedChamber_InnerRoom/scripts.pory"
# 31 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	special DoSealedChamberShakingEffect_Short
# 32 "data/maps/SealedChamber_InnerRoom/scripts.pory"
# 19 "data/maps/SealedChamber_InnerRoom/scripts.pory"
# 33 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	waitstate
# 34 "data/maps/SealedChamber_InnerRoom/scripts.pory"
# 20 "data/maps/SealedChamber_InnerRoom/scripts.pory"
# 35 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	playse SE_DOOR
# 36 "data/maps/SealedChamber_InnerRoom/scripts.pory"
# 21 "data/maps/SealedChamber_InnerRoom/scripts.pory"
# 37 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	delay 40
# 38 "data/maps/SealedChamber_InnerRoom/scripts.pory"
# 22 "data/maps/SealedChamber_InnerRoom/scripts.pory"
# 39 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	special DoSealedChamberShakingEffect_Short
# 40 "data/maps/SealedChamber_InnerRoom/scripts.pory"
# 23 "data/maps/SealedChamber_InnerRoom/scripts.pory"
# 41 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	waitstate
# 42 "data/maps/SealedChamber_InnerRoom/scripts.pory"
# 24 "data/maps/SealedChamber_InnerRoom/scripts.pory"
# 43 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	playse SE_DOOR
# 44 "data/maps/SealedChamber_InnerRoom/scripts.pory"
# 25 "data/maps/SealedChamber_InnerRoom/scripts.pory"
# 45 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	delay 40
# 46 "data/maps/SealedChamber_InnerRoom/scripts.pory"
# 26 "data/maps/SealedChamber_InnerRoom/scripts.pory"
# 47 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	special DoSealedChamberShakingEffect_Short
# 48 "data/maps/SealedChamber_InnerRoom/scripts.pory"
# 27 "data/maps/SealedChamber_InnerRoom/scripts.pory"
# 49 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	waitstate
# 50 "data/maps/SealedChamber_InnerRoom/scripts.pory"
# 28 "data/maps/SealedChamber_InnerRoom/scripts.pory"
# 51 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	playse SE_DOOR
# 52 "data/maps/SealedChamber_InnerRoom/scripts.pory"
# 29 "data/maps/SealedChamber_InnerRoom/scripts.pory"
# 53 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	delay 40
# 54 "data/maps/SealedChamber_InnerRoom/scripts.pory"
# 30 "data/maps/SealedChamber_InnerRoom/scripts.pory"
# 55 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	msgbox gText_DoorOpenedFarAway, MSGBOX_DEFAULT
# 56 "data/maps/SealedChamber_InnerRoom/scripts.pory"
# 31 "data/maps/SealedChamber_InnerRoom/scripts.pory"
# 57 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	closemessage
# 58 "data/maps/SealedChamber_InnerRoom/scripts.pory"
# 32 "data/maps/SealedChamber_InnerRoom/scripts.pory"
# 59 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	fadeinbgm 0
# 60 "data/maps/SealedChamber_InnerRoom/scripts.pory"
# 33 "data/maps/SealedChamber_InnerRoom/scripts.pory"
# 61 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	setflag FLAG_REGI_DOORS_OPENED
# 62 "data/maps/SealedChamber_InnerRoom/scripts.pory"
# 34 "data/maps/SealedChamber_InnerRoom/scripts.pory"
# 63 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	releaseall
# 64 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	end
# 65 "data/maps/SealedChamber_InnerRoom/scripts.pory"

# 66 "data/maps/SealedChamber_InnerRoom/scripts.pory"
SealedChamber_InnerRoom_EventScript_BrailleBackWall_2:
# 67 "data/maps/SealedChamber_InnerRoom/scripts.pory"
# 7 "data/maps/SealedChamber_InnerRoom/scripts.pory"
# 68 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	goto SealedChamber_InnerRoom_EventScript_NoEffect
# 69 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	goto SealedChamber_InnerRoom_EventScript_BrailleBackWall_1
# 70 "data/maps/SealedChamber_InnerRoom/scripts.pory"

# 71 "data/maps/SealedChamber_InnerRoom/scripts.pory"
SealedChamber_InnerRoom_EventScript_BrailleBackWall_5:
# 72 "data/maps/SealedChamber_InnerRoom/scripts.pory"
# 11 "data/maps/SealedChamber_InnerRoom/scripts.pory"
# 73 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	goto SealedChamber_InnerRoom_EventScript_NoEffect
# 74 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	goto SealedChamber_InnerRoom_EventScript_BrailleBackWall_4
# 75 "data/maps/SealedChamber_InnerRoom/scripts.pory"

# 76 "data/maps/SealedChamber_InnerRoom/scripts.pory"

# 77 "data/maps/SealedChamber_InnerRoom/scripts.pory"
SealedChamber_InnerRoom_EventScript_NoEffect::
# 78 "data/maps/SealedChamber_InnerRoom/scripts.pory"
# 39 "data/maps/SealedChamber_InnerRoom/scripts.pory"
# 79 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	releaseall
# 80 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	end
# 81 "data/maps/SealedChamber_InnerRoom/scripts.pory"

# 82 "data/maps/SealedChamber_InnerRoom/scripts.pory"

# 83 "data/maps/SealedChamber_InnerRoom/scripts.pory"
SealedChamber_InnerRoom_EventScript_BrailleStoryPart1::
# 84 "data/maps/SealedChamber_InnerRoom/scripts.pory"
# 44 "data/maps/SealedChamber_InnerRoom/scripts.pory"
# 85 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	lockall
# 86 "data/maps/SealedChamber_InnerRoom/scripts.pory"
# 45 "data/maps/SealedChamber_InnerRoom/scripts.pory"
# 87 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	braillemsgbox SealedChamber_InnerRoom_Braille_InThisCaveWeHaveLived
# 88 "data/maps/SealedChamber_InnerRoom/scripts.pory"
# 46 "data/maps/SealedChamber_InnerRoom/scripts.pory"
# 89 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	releaseall
# 90 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	end
# 91 "data/maps/SealedChamber_InnerRoom/scripts.pory"

# 92 "data/maps/SealedChamber_InnerRoom/scripts.pory"

# 93 "data/maps/SealedChamber_InnerRoom/scripts.pory"
SealedChamber_InnerRoom_EventScript_BrailleStoryPart2::
# 94 "data/maps/SealedChamber_InnerRoom/scripts.pory"
# 51 "data/maps/SealedChamber_InnerRoom/scripts.pory"
# 95 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	lockall
# 96 "data/maps/SealedChamber_InnerRoom/scripts.pory"
# 52 "data/maps/SealedChamber_InnerRoom/scripts.pory"
# 97 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	braillemsgbox SealedChamber_InnerRoom_Braille_WeOweAllToThePokemon
# 98 "data/maps/SealedChamber_InnerRoom/scripts.pory"
# 53 "data/maps/SealedChamber_InnerRoom/scripts.pory"
# 99 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	releaseall
# 100 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	end
# 101 "data/maps/SealedChamber_InnerRoom/scripts.pory"

# 102 "data/maps/SealedChamber_InnerRoom/scripts.pory"

# 103 "data/maps/SealedChamber_InnerRoom/scripts.pory"
SealedChamber_InnerRoom_EventScript_BrailleStoryPart3::
# 104 "data/maps/SealedChamber_InnerRoom/scripts.pory"
# 58 "data/maps/SealedChamber_InnerRoom/scripts.pory"
# 105 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	lockall
# 106 "data/maps/SealedChamber_InnerRoom/scripts.pory"
# 59 "data/maps/SealedChamber_InnerRoom/scripts.pory"
# 107 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	braillemsgbox SealedChamber_InnerRoom_Braille_ButWeSealedThePokemonAway
# 108 "data/maps/SealedChamber_InnerRoom/scripts.pory"
# 60 "data/maps/SealedChamber_InnerRoom/scripts.pory"
# 109 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	releaseall
# 110 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	end
# 111 "data/maps/SealedChamber_InnerRoom/scripts.pory"

# 112 "data/maps/SealedChamber_InnerRoom/scripts.pory"

# 113 "data/maps/SealedChamber_InnerRoom/scripts.pory"
SealedChamber_InnerRoom_EventScript_BrailleStoryPart4::
# 114 "data/maps/SealedChamber_InnerRoom/scripts.pory"
# 65 "data/maps/SealedChamber_InnerRoom/scripts.pory"
# 115 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	lockall
# 116 "data/maps/SealedChamber_InnerRoom/scripts.pory"
# 66 "data/maps/SealedChamber_InnerRoom/scripts.pory"
# 117 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	braillemsgbox SealedChamber_InnerRoom_Braille_WeFearedIt
# 118 "data/maps/SealedChamber_InnerRoom/scripts.pory"
# 67 "data/maps/SealedChamber_InnerRoom/scripts.pory"
# 119 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	releaseall
# 120 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	end
# 121 "data/maps/SealedChamber_InnerRoom/scripts.pory"

# 122 "data/maps/SealedChamber_InnerRoom/scripts.pory"

# 123 "data/maps/SealedChamber_InnerRoom/scripts.pory"
SealedChamber_InnerRoom_EventScript_BrailleStoryPart5::
# 124 "data/maps/SealedChamber_InnerRoom/scripts.pory"
# 72 "data/maps/SealedChamber_InnerRoom/scripts.pory"
# 125 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	lockall
# 126 "data/maps/SealedChamber_InnerRoom/scripts.pory"
# 73 "data/maps/SealedChamber_InnerRoom/scripts.pory"
# 127 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	braillemsgbox SealedChamber_InnerRoom_Braille_ThoseWithCourageHope
# 128 "data/maps/SealedChamber_InnerRoom/scripts.pory"
# 74 "data/maps/SealedChamber_InnerRoom/scripts.pory"
# 129 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	releaseall
# 130 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	end
# 131 "data/maps/SealedChamber_InnerRoom/scripts.pory"

# 132 "data/maps/SealedChamber_InnerRoom/scripts.pory"

# 133 "data/maps/SealedChamber_InnerRoom/scripts.pory"
SealedChamber_InnerRoom_EventScript_BrailleStoryPart6::
# 134 "data/maps/SealedChamber_InnerRoom/scripts.pory"
# 79 "data/maps/SealedChamber_InnerRoom/scripts.pory"
# 135 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	lockall
# 136 "data/maps/SealedChamber_InnerRoom/scripts.pory"
# 80 "data/maps/SealedChamber_InnerRoom/scripts.pory"
# 137 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	braillemsgbox SealedChamber_InnerRoom_Braille_OpenDoorEternalPokemonWaits
# 138 "data/maps/SealedChamber_InnerRoom/scripts.pory"
# 81 "data/maps/SealedChamber_InnerRoom/scripts.pory"
# 139 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	releaseall
# 140 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	end
