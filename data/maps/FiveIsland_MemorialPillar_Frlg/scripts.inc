# 1 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"

# 2 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
FiveIsland_MemorialPillar_Frlg_MapScripts::
# 3 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	.byte 0
# 4 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"

# 5 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"

# 6 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
FiveIsland_MemorialPillar_EventScript_MemorialMan::
# 7 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
# 4 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
# 8 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	lock
# 9 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
# 5 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
# 10 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	goto_if_set FLAG_GOT_TM42_AT_MEMORIAL_PILLAR, FiveIsland_MemorialPillar_EventScript_MemorialMan_2
# 11 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
FiveIsland_MemorialPillar_EventScript_MemorialMan_1:
# 12 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
# 8 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
# 13 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	goto_if_set FLAG_NO_ROOM_FOR_TM42_AT_MEMORIAL_PILLAR, FiveIsland_MemorialPillar_EventScript_MemorialMan_5
# 14 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
FiveIsland_MemorialPillar_EventScript_MemorialMan_4:
# 15 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
# 11 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
# 16 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	msgbox FiveIsland_MemorialPillar_Text_ScrubScrub
# 17 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
# 12 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
# 18 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	closemessage
# 19 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
# 13 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
# 20 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	applymovement LOCALID_MEMORIAL_MAN, Common_Movement_FacePlayer
# 21 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
# 14 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
# 22 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	waitmovement 0
# 23 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
# 15 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
# 24 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	delay 45
# 25 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
# 16 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
# 26 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	msgbox FiveIsland_MemorialPillar_Text_YourMonsLookHealthy
# 27 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
# 17 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
# 28 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	applymovement LOCALID_MEMORIAL_MAN, Common_Movement_WalkInPlaceFasterUp
# 29 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
# 18 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
# 30 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	waitmovement 0
# 31 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
# 19 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
# 32 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	msgbox FiveIsland_MemorialPillar_Text_ThisIsWhereIBuriedMyOnix
# 33 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
# 20 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
# 34 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	release
# 35 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	end
# 36 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"

# 37 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
FiveIsland_MemorialPillar_EventScript_MemorialMan_2:
# 38 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
# 6 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
# 39 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	goto FiveIsland_MemorialPillar_EventScript_AlreadyGotTM42
# 40 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	goto FiveIsland_MemorialPillar_EventScript_MemorialMan_1
# 41 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"

# 42 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
FiveIsland_MemorialPillar_EventScript_MemorialMan_5:
# 43 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
# 9 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
# 44 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	goto FiveIsland_MemorialPillar_EventScript_ReturnedForTM42
# 45 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	goto FiveIsland_MemorialPillar_EventScript_MemorialMan_4
# 46 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"

# 47 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"

# 48 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
FiveIsland_MemorialPillar_EventScript_AlreadyGotTM42::
# 49 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
# 25 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
# 50 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	msgbox FiveIsland_MemorialPillar_Text_ScrubScrubTectonix
# 51 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
# 26 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
# 52 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	release
# 53 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	end
# 54 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"

# 55 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"

# 56 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
FiveIsland_MemorialPillar_EventScript_ReturnedForTM42::
# 57 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
# 31 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
# 58 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	msgbox FiveIsland_MemorialPillar_Text_StillHaveThingAsMyThanks
# 59 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
# 32 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
# 60 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	giveitem ITEM_TM42
# 61 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
# 33 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
# 62 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	compare VAR_RESULT, FALSE
# 63 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	goto_if_eq FiveIsland_MemorialPillar_EventScript_ReturnedForTM42_2
# 64 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
FiveIsland_MemorialPillar_EventScript_ReturnedForTM42_1:
# 65 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
# 36 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
# 66 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	call FiveIsland_MemorialPillar_EventScript_ReceivedTM42
# 67 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
# 37 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
# 68 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	release
# 69 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	end
# 70 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"

# 71 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
FiveIsland_MemorialPillar_EventScript_ReturnedForTM42_2:
# 72 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
# 34 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
# 73 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	goto FiveIsland_MemorialPillar_EventScript_NoRoomForTM42
# 74 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	goto FiveIsland_MemorialPillar_EventScript_ReturnedForTM42_1
# 75 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"

# 76 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"

# 77 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
FiveIsland_MemorialPillar_EventScript_Memorial::
# 78 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
# 42 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
# 79 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	lockall
# 80 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
# 43 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
# 81 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	goto_if_set FLAG_GOT_TM42_AT_MEMORIAL_PILLAR, FiveIsland_MemorialPillar_EventScript_Memorial_2
# 82 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
FiveIsland_MemorialPillar_EventScript_Memorial_1:
# 83 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
# 46 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
# 84 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	goto_if_set FLAG_NO_ROOM_FOR_TM42_AT_MEMORIAL_PILLAR, FiveIsland_MemorialPillar_EventScript_Memorial_5
# 85 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
FiveIsland_MemorialPillar_EventScript_Memorial_4:
# 86 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
# 49 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
# 87 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	msgbox FiveIsland_MemorialPillar_Text_HereLiesTectonixLemonadeOffering
# 88 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
# 50 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
# 89 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	checkitem ITEM_LEMONADE
# 90 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
# 51 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
# 91 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	compare VAR_RESULT, TRUE
# 92 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	goto_if_eq FiveIsland_MemorialPillar_EventScript_Memorial_8
# 93 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
FiveIsland_MemorialPillar_EventScript_Memorial_7:
# 94 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
# 54 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
# 95 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	releaseall
# 96 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	end
# 97 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"

# 98 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
FiveIsland_MemorialPillar_EventScript_Memorial_2:
# 99 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
# 44 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
# 100 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	goto FiveIsland_MemorialPillar_EventScript_MemorialLemonadeAlreadyPlaced
# 101 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	goto FiveIsland_MemorialPillar_EventScript_Memorial_1
# 102 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"

# 103 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
FiveIsland_MemorialPillar_EventScript_Memorial_5:
# 104 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
# 47 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
# 105 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	goto FiveIsland_MemorialPillar_EventScript_MemorialLemonadeAlreadyPlaced
# 106 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	goto FiveIsland_MemorialPillar_EventScript_Memorial_4
# 107 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"

# 108 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
FiveIsland_MemorialPillar_EventScript_Memorial_8:
# 109 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
# 52 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
# 110 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	goto FiveIsland_MemorialPillar_EventScript_AskPlaceLemonade
# 111 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	goto FiveIsland_MemorialPillar_EventScript_Memorial_7
# 112 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"

# 113 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"

# 114 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
FiveIsland_MemorialPillar_EventScript_AskPlaceLemonade::
# 115 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
# 59 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
# 116 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	msgbox FiveIsland_MemorialPillar_Text_LeaveAnotherLemonadeOffering, MSGBOX_YESNO
# 117 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
# 60 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
# 118 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	compare VAR_RESULT, YES
# 119 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	goto_if_eq FiveIsland_MemorialPillar_EventScript_AskPlaceLemonade_2
# 120 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
FiveIsland_MemorialPillar_EventScript_AskPlaceLemonade_1:
# 121 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
# 63 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
# 122 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	releaseall
# 123 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	end
# 124 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"

# 125 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
FiveIsland_MemorialPillar_EventScript_AskPlaceLemonade_2:
# 126 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
# 61 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
# 127 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	goto FiveIsland_MemorialPillar_EventScript_PlaceLemonade
# 128 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	goto FiveIsland_MemorialPillar_EventScript_AskPlaceLemonade_1
# 129 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"

# 130 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"

# 131 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
FiveIsland_MemorialPillar_EventScript_PlaceLemonade::
# 132 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
# 68 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
# 133 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	removeitem ITEM_LEMONADE
# 134 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
# 69 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
# 135 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	msgbox FiveIsland_MemorialPillar_Text_PlacedCanOfLemonade
# 136 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
# 70 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
# 137 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	closemessage
# 138 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
# 71 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
# 139 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	applymovement LOCALID_MEMORIAL_MAN, Common_Movement_WalkInPlaceFasterRight
# 140 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
# 72 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
# 141 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	waitmovement 0
# 142 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
# 73 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
# 143 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	delay 45
# 144 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
# 74 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
# 145 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 146 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
# 75 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
# 147 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	waitmovement 0
# 148 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
# 76 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
# 149 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 150 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
# 77 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
# 151 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	msgbox FiveIsland_MemorialPillar_Text_ThankYouPleaseTakeThis
# 152 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
# 78 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
# 153 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	giveitem ITEM_TM42
# 154 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
# 79 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
# 155 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	compare VAR_RESULT, FALSE
# 156 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	goto_if_eq FiveIsland_MemorialPillar_EventScript_PlaceLemonade_2
# 157 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
FiveIsland_MemorialPillar_EventScript_PlaceLemonade_1:
# 158 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
# 82 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
# 159 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	call FiveIsland_MemorialPillar_EventScript_ReceivedTM42
# 160 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
# 83 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
# 161 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	releaseall
# 162 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	end
# 163 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"

# 164 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
FiveIsland_MemorialPillar_EventScript_PlaceLemonade_2:
# 165 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
# 80 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
# 166 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	goto FiveIsland_MemorialPillar_EventScript_NoRoomForTM42
# 167 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	goto FiveIsland_MemorialPillar_EventScript_PlaceLemonade_1
# 168 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"

# 169 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"

# 170 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
FiveIsland_MemorialPillar_EventScript_ReceivedTM42::
# 171 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
# 88 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
# 172 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	msgbox FiveIsland_MemorialPillar_Text_BeGoodToYourMonsToo
# 173 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
# 89 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
# 174 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	applymovement LOCALID_MEMORIAL_MAN, Common_Movement_WalkInPlaceFasterUp
# 175 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
# 90 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
# 176 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	waitmovement 0
# 177 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
# 91 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
# 178 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	setflag FLAG_GOT_TM42_AT_MEMORIAL_PILLAR
# 179 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	return
# 180 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"

# 181 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"

# 182 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
FiveIsland_MemorialPillar_EventScript_NoRoomForTM42::
# 183 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
# 96 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
# 184 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	setflag FLAG_NO_ROOM_FOR_TM42_AT_MEMORIAL_PILLAR
# 185 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
# 97 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
# 186 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	msgbox FiveIsland_MemorialPillar_Text_DontHaveRoomForIt
# 187 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
# 98 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
# 188 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	releaseall
# 189 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	end
# 190 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"

# 191 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"

# 192 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
FiveIsland_MemorialPillar_EventScript_MemorialLemonadeAlreadyPlaced::
# 193 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
# 103 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
# 194 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	msgbox FiveIsland_MemorialPillar_Text_HereLiesTectonix
# 195 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
# 104 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
# 196 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	releaseall
# 197 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	end
# 198 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"

# 199 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"

# 200 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
FiveIsland_MemorialPillar_Text_MiloIntro::
# 201 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
# 108 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
# 202 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	.string "I'm the eldest of the BIRD\n"
# 203 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	.string "BROTHERS.\p"
# 204 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	.string "The best thing about birds…\n"
# 205 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	.string "It has to be the beak.$"
# 206 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"

# 207 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
FiveIsland_MemorialPillar_Text_MiloDefeat::
# 208 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
# 115 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
# 209 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	.string "Oh, so sharp!$"
# 210 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"

# 211 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
FiveIsland_MemorialPillar_Text_MiloPostBattle::
# 212 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
# 119 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
# 213 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	.string "You can fly to FOUR ISLAND from\n"
# 214 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	.string "here.$"
# 215 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"

# 216 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
FiveIsland_MemorialPillar_Text_ChazIntro::
# 217 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
# 124 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
# 218 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	.string "I'm the middle kid of the BIRD\n"
# 219 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	.string "BROTHERS.\p"
# 220 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	.string "The best thing about birds…\n"
# 221 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	.string "It has to be the wings.$"
# 222 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"

# 223 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
FiveIsland_MemorialPillar_Text_ChazDefeat::
# 224 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
# 131 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
# 225 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	.string "Flap, flap!$"
# 226 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"

# 227 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
FiveIsland_MemorialPillar_Text_ChazPostBattle::
# 228 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
# 135 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
# 229 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	.string "There was a really somber guy\n"
# 230 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	.string "over that way.$"
# 231 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"

# 232 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
FiveIsland_MemorialPillar_Text_HaroldIntro::
# 233 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
# 140 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
# 234 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	.string "I'm the youngest of the BIRD\n"
# 235 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	.string "BROTHERS.\p"
# 236 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	.string "The best thing about birds…\n"
# 237 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	.string "It has to be the down.$"
# 238 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"

# 239 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
FiveIsland_MemorialPillar_Text_HaroldDefeat::
# 240 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
# 147 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
# 241 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	.string "Down is so comfy…\n"
# 242 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	.string "It makes me drowsy…$"
# 243 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"

# 244 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
FiveIsland_MemorialPillar_Text_HaroldPostBattle::
# 245 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
# 152 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
# 246 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	.string "It fills me with happiness when\n"
# 247 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	.string "bird POKéMON beg playfully…$"
# 248 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"

# 249 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
FiveIsland_MemorialPillar_Text_ScrubScrub::
# 250 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
# 157 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
# 251 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	.string "Scrub, scrub…$"
# 252 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"

# 253 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
FiveIsland_MemorialPillar_Text_YourMonsLookHealthy::
# 254 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
# 161 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
# 255 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	.string "Hello…\n"
# 256 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	.string "Your POKéMON look healthy…$"
# 257 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"

# 258 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
FiveIsland_MemorialPillar_Text_ThisIsWhereIBuriedMyOnix::
# 259 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
# 166 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
# 260 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	.string "This is where I buried my ONIX…\n"
# 261 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	.string "It was named TECTONIX…$"
# 262 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"

# 263 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
FiveIsland_MemorialPillar_Text_HereLiesTectonixLemonadeOffering::
# 264 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
# 171 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
# 265 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	.string "“Here lies TECTONIX” is engraved\n"
# 266 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	.string "on a boulder.\p"
# 267 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	.string "There is a LEMONADE placed as an\n"
# 268 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	.string "offering in front of the grave.$"
# 269 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"

# 270 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
FiveIsland_MemorialPillar_Text_LeaveAnotherLemonadeOffering::
# 271 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
# 178 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
# 272 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	.string "Would you like to leave another\n"
# 273 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	.string "LEMONADE as an offering?$"
# 274 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"

# 275 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
FiveIsland_MemorialPillar_Text_PlacedCanOfLemonade::
# 276 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
# 183 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
# 277 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	.string "{PLAYER} placed a can of LEMONADE\n"
# 278 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	.string "in front of the grave.$"
# 279 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"

# 280 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
FiveIsland_MemorialPillar_Text_ThankYouPleaseTakeThis::
# 281 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
# 188 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
# 282 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	.string "Th-thank you…\p"
# 283 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	.string "That was my TECTONIX's favorite\n"
# 284 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	.string "drink…\p"
# 285 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	.string "I don't even know you, but your\n"
# 286 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	.string "act of kindness…\p"
# 287 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	.string "It's uplifted me a little.\p"
# 288 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	.string "Can you please take this as my\n"
# 289 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	.string "thanks?$"
# 290 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"

# 291 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
FiveIsland_MemorialPillar_Text_BeGoodToYourMonsToo::
# 292 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
# 199 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
# 293 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	.string "Please be good to your POKéMON,\n"
# 294 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	.string "too.$"
# 295 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"

# 296 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
FiveIsland_MemorialPillar_Text_DontHaveRoomForIt::
# 297 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
# 204 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
# 298 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	.string "If you don't have room for it,\n"
# 299 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	.string "I'll hold it for you till next time.$"
# 300 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"

# 301 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
FiveIsland_MemorialPillar_Text_StillHaveThingAsMyThanks::
# 302 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
# 209 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
# 303 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	.string "Oh, it's you from that time…\p"
# 304 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	.string "I still have that thing I wanted\n"
# 305 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	.string "you to have as my thanks.$"
# 306 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"

# 307 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
FiveIsland_MemorialPillar_Text_ScrubScrubTectonix::
# 308 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
# 215 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
# 309 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	.string "Scrub, scrub…\p"
# 310 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	.string "… … …\n"
# 311 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	.string "TECTONIX…$"
# 312 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"

# 313 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
FiveIsland_MemorialPillar_Text_HereLiesTectonix::
# 314 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
# 221 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
# 315 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	.string "Boulders and rocks are neatly piled\n"
# 316 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	.string "up as a cairn.\p"
# 317 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	.string "“Here lies TECTONIX” is engraved\n"
# 318 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	.string "on a boulder.$"
