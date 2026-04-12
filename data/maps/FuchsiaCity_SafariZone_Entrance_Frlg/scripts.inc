# 1 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"

# 2 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
FuchsiaCity_SafariZone_Entrance_Frlg_MapScripts::
# 3 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 2 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 4 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, FuchsiaCity_SafariZone_Entrance_Frlg_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 5 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	.byte 0
# 6 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"

# 7 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
FuchsiaCity_SafariZone_Entrance_Frlg_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 8 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 3 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 9 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	map_script_2 VAR_MAP_SCENE_FUCHSIA_CITY_SAFARI_ZONE_ENTRANCE, 1, FuchsiaCity_SafariZone_Entrance_EventScript_ExitWarpIn
# 10 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 4 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 11 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	map_script_2 VAR_MAP_SCENE_FUCHSIA_CITY_SAFARI_ZONE_ENTRANCE, 2, FuchsiaCity_SafariZone_Entrance_EventScript_ExitEarly
# 12 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 5 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 13 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	map_script_2 VAR_MAP_SCENE_FUCHSIA_CITY_SAFARI_ZONE_ENTRANCE, 3, FuchsiaCity_SafariZone_Entrance_EventScript_ExitWalkIn
# 14 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	.2byte 0
# 15 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"

# 16 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"

# 17 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
FuchsiaCity_SafariZone_Entrance_EventScript_ExitWalkIn::
# 18 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 10 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 19 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	lockall
# 20 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 11 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 21 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 22 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 12 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 23 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, FuchsiaCity_SafariZone_Entrance_Movement_ApproachCounter
# 24 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 13 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 25 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	waitmovement 0
# 26 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 14 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 27 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	msgbox FuchsiaCity_SafariZone_Entrance_Text_CatchFairShareComeAgain
# 28 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 15 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 29 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	closemessage
# 30 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 16 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 31 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, FuchsiaCity_SafariZone_Entrance_Movement_Exit2
# 32 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 17 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 33 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	waitmovement 0
# 34 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 18 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 35 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	special ExitSafariMode
# 36 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 19 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 37 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_FUCHSIA_CITY_SAFARI_ZONE_ENTRANCE, 0
# 38 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 20 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 39 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	releaseall
# 40 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	end
# 41 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"

# 42 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"

# 43 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
FuchsiaCity_SafariZone_Entrance_EventScript_ExitWarpIn::
# 44 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 25 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 45 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	lockall
# 46 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 26 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 47 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 48 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 27 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 49 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	msgbox FuchsiaCity_SafariZone_Entrance_Text_CatchFairShareComeAgain
# 50 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 28 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 51 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	closemessage
# 52 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 29 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 53 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, FuchsiaCity_SafariZone_Entrance_Movement_Exit
# 54 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 30 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 55 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	waitmovement 0
# 56 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 31 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 57 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	special ExitSafariMode
# 58 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 32 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 59 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_FUCHSIA_CITY_SAFARI_ZONE_ENTRANCE, 0
# 60 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 33 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 61 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	releaseall
# 62 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	end
# 63 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"

# 64 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"

# 65 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
FuchsiaCity_SafariZone_Entrance_EventScript_ExitEarly::
# 66 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 38 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 67 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	lockall
# 68 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 39 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 69 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 70 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 40 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 71 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	msgbox FuchsiaCity_SafariZone_Entrance_Text_GoingToLeaveSafariZoneEarly, MSGBOX_YESNO
# 72 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 41 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 73 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	compare VAR_RESULT, NO
# 74 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	goto_if_eq FuchsiaCity_SafariZone_Entrance_EventScript_ExitEarly_2
# 75 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
FuchsiaCity_SafariZone_Entrance_EventScript_ExitEarly_1:
# 76 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 44 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 77 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	msgbox FuchsiaCity_SafariZone_Entrance_Text_PleaseReturnSafariBalls
# 78 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 45 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 79 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	closemessage
# 80 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 46 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 81 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, FuchsiaCity_SafariZone_Entrance_Movement_Exit
# 82 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 47 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 83 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	waitmovement 0
# 84 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 48 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 85 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	special ExitSafariMode
# 86 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 49 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 87 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_FUCHSIA_CITY_SAFARI_ZONE_ENTRANCE, 0
# 88 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 50 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 89 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	releaseall
# 90 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	end
# 91 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"

# 92 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
FuchsiaCity_SafariZone_Entrance_EventScript_ExitEarly_2:
# 93 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 42 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 94 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	goto FuchsiaCity_SafariZone_Entrance_EventScript_ReturnToSafariZone
# 95 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	goto FuchsiaCity_SafariZone_Entrance_EventScript_ExitEarly_1
# 96 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"

# 97 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"

# 98 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
FuchsiaCity_SafariZone_Entrance_EventScript_ReturnToSafariZone::
# 99 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 55 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 100 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	msgbox FuchsiaCity_SafariZone_Entrance_Text_GoodLuck
# 101 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 56 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 102 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	closemessage
# 103 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 57 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 104 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, FuchsiaCity_SafariZone_Entrance_Movement_ReEnter
# 105 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 58 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 106 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	waitmovement 0
# 107 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 59 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 108 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	warp MAP_SAFARI_ZONE_CENTER, 26, 30
# 109 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 60 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 110 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	waitstate
# 111 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	end
# 112 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"

# 113 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"

# 114 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 64 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 115 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
FuchsiaCity_SafariZone_Entrance_Movement_Exit:
# 116 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 65 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 117 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	walk_down
# 118 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 66 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 119 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	walk_down
# 120 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 67 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 121 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	step_end
# 122 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"

# 123 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 70 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 124 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
FuchsiaCity_SafariZone_Entrance_Movement_ReEnter:
# 125 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 71 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 126 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	walk_up
# 127 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 72 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 128 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	step_end
# 129 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"

# 130 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 75 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 131 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
FuchsiaCity_SafariZone_Entrance_Movement_Exit2:
# 132 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 76 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 133 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	walk_down
# 134 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 77 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 135 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	walk_down
# 136 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 78 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 137 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	step_end
# 138 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"

# 139 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 81 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 140 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
FuchsiaCity_SafariZone_Entrance_Movement_ApproachCounter:
# 141 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 82 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 142 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	walk_down
# 143 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 83 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 144 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	delay_8
# 145 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 84 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 146 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	step_end
# 147 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"

# 148 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
FuchsiaCity_SafariZone_Entrance_EventScript_EntryTriggerMid::
# 149 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 88 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 150 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	lockall
# 151 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 89 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 152 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	setvar VAR_TEMP_2, 0
# 153 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 90 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 154 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	goto FuchsiaCity_SafariZone_Entrance_EventScript_AskEnterSafariZone
# 155 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	end
# 156 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"

# 157 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"

# 158 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
FuchsiaCity_SafariZone_Entrance_EventScript_EntryTriggerRight::
# 159 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 95 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 160 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	lockall
# 161 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 96 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 162 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	setvar VAR_TEMP_2, 1
# 163 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 97 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 164 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	goto FuchsiaCity_SafariZone_Entrance_EventScript_AskEnterSafariZone
# 165 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	end
# 166 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"

# 167 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"

# 168 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
FuchsiaCity_SafariZone_Entrance_EventScript_EntryTriggerLeft::
# 169 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 102 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 170 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	lockall
# 171 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 103 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 172 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	setvar VAR_TEMP_2, 2
# 173 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 104 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 174 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	goto FuchsiaCity_SafariZone_Entrance_EventScript_AskEnterSafariZone
# 175 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	end
# 176 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"

# 177 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"

# 178 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
FuchsiaCity_SafariZone_Entrance_EventScript_AskEnterSafariZone::
# 179 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 109 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 180 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 181 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 110 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 182 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	msgbox FuchsiaCity_SafariZone_Entrance_Text_WelcomeToSafariZone
# 183 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 111 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 184 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 185 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 112 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 186 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	waitmovement 0
# 187 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 113 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 188 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	showmoneybox 0, 0
# 189 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 114 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 190 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	msgbox FuchsiaCity_SafariZone_Entrance_Text_PlaySafariGameFor500, MSGBOX_YESNO
# 191 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 115 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 192 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	compare VAR_RESULT, YES
# 193 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	goto_if_eq FuchsiaCity_SafariZone_Entrance_EventScript_AskEnterSafariZone_2
# 194 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
FuchsiaCity_SafariZone_Entrance_EventScript_AskEnterSafariZone_1:
# 195 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 118 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 196 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	msgbox FuchsiaCity_SafariZone_Entrance_Text_OkayPleaseComeAgain
# 197 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 119 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 198 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	goto FuchsiaCity_SafariZone_Entrance_EventScript_ForcePlayerBack
# 199 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	end
# 200 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"

# 201 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
FuchsiaCity_SafariZone_Entrance_EventScript_AskEnterSafariZone_2:
# 202 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 116 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 203 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	goto FuchsiaCity_SafariZone_Entrance_EventScript_TryEnterSafariZone
# 204 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	goto FuchsiaCity_SafariZone_Entrance_EventScript_AskEnterSafariZone_1
# 205 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"

# 206 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"

# 207 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
FuchsiaCity_SafariZone_Entrance_EventScript_TryEnterSafariZone::
# 208 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 124 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 209 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	call FuchsiaCity_SafariZone_Entrance_EventScript_CheckSpaceForMons
# 210 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 125 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 211 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	checkmoney 500
# 212 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 126 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 213 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	compare VAR_RESULT, FALSE
# 214 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	goto_if_eq FuchsiaCity_SafariZone_Entrance_EventScript_TryEnterSafariZone_2
# 215 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
FuchsiaCity_SafariZone_Entrance_EventScript_TryEnterSafariZone_1:
# 216 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 129 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 217 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	removemoney 500
# 218 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 130 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 219 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	updatemoneybox
# 220 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 131 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 221 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	msgbox FuchsiaCity_SafariZone_Entrance_Text_ThatllBe500WeOnlyUseSpecialBalls
# 222 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 132 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 223 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 224 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 133 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 225 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 226 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 134 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 227 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	message FuchsiaCity_SafariZone_Entrance_Text_PlayerReceived30SafariBalls
# 228 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 135 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 229 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	waitfanfare
# 230 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 136 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 231 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	call EventScript_RestorePrevTextColor
# 232 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 137 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 233 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	msgbox FuchsiaCity_SafariZone_Entrance_Text_CallYouOnPAWhenYouRunOut
# 234 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 138 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 235 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	closemessage
# 236 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 139 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 237 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	hidemoneybox
# 238 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 140 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 239 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	compare VAR_TEMP_2, 0
# 240 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	goto_if_eq FuchsiaCity_SafariZone_Entrance_EventScript_TryEnterSafariZone_5
# 241 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
FuchsiaCity_SafariZone_Entrance_EventScript_TryEnterSafariZone_4:
# 242 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 143 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 243 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	compare VAR_TEMP_2, 1
# 244 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	goto_if_eq FuchsiaCity_SafariZone_Entrance_EventScript_TryEnterSafariZone_8
# 245 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
FuchsiaCity_SafariZone_Entrance_EventScript_TryEnterSafariZone_7:
# 246 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 146 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 247 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	compare VAR_TEMP_2, 2
# 248 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	goto_if_eq FuchsiaCity_SafariZone_Entrance_EventScript_TryEnterSafariZone_11
# 249 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
FuchsiaCity_SafariZone_Entrance_EventScript_TryEnterSafariZone_10:
# 250 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 149 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 251 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	special EnterSafariMode
# 252 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 150 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 253 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_FUCHSIA_CITY_SAFARI_ZONE_ENTRANCE, 2
# 254 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 151 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 255 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	warp MAP_SAFARI_ZONE_CENTER, 255, 26, 30
# 256 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 152 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 257 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	waitstate
# 258 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	end
# 259 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"

# 260 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
FuchsiaCity_SafariZone_Entrance_EventScript_TryEnterSafariZone_2:
# 261 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 127 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 262 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	goto FuchsiaCity_SafariZone_Entrance_EventScript_NotEnoughMoney
# 263 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	goto FuchsiaCity_SafariZone_Entrance_EventScript_TryEnterSafariZone_1
# 264 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"

# 265 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
FuchsiaCity_SafariZone_Entrance_EventScript_TryEnterSafariZone_5:
# 266 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 141 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 267 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	call FuchsiaCity_SafariZone_Entrance_EventScript_EnterSafariZoneMid
# 268 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	goto FuchsiaCity_SafariZone_Entrance_EventScript_TryEnterSafariZone_4
# 269 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"

# 270 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
FuchsiaCity_SafariZone_Entrance_EventScript_TryEnterSafariZone_8:
# 271 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 144 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 272 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	call FuchsiaCity_SafariZone_Entrance_EventScript_EnterSafariZoneRight
# 273 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	goto FuchsiaCity_SafariZone_Entrance_EventScript_TryEnterSafariZone_7
# 274 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"

# 275 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
FuchsiaCity_SafariZone_Entrance_EventScript_TryEnterSafariZone_11:
# 276 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 147 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 277 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	call FuchsiaCity_SafariZone_Entrance_EventScript_EnterSafariZoneLeft
# 278 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	goto FuchsiaCity_SafariZone_Entrance_EventScript_TryEnterSafariZone_10
# 279 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"

# 280 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"

# 281 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
FuchsiaCity_SafariZone_Entrance_EventScript_EnterSafariZoneRight::
# 282 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 157 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 283 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, FuchsiaCity_SafariZone_Entrance_Movement_EnterSafariZoneRight
# 284 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 158 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 285 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	waitmovement 0
# 286 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	return
# 287 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"

# 288 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"

# 289 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
FuchsiaCity_SafariZone_Entrance_EventScript_EnterSafariZoneMid::
# 290 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 163 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 291 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, FuchsiaCity_SafariZone_Entrance_Movement_EnterSafariZoneMid
# 292 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 164 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 293 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	waitmovement 0
# 294 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	return
# 295 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"

# 296 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"

# 297 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
FuchsiaCity_SafariZone_Entrance_EventScript_EnterSafariZoneLeft::
# 298 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 169 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 299 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, FuchsiaCity_SafariZone_Entrance_Movement_EnterSafariZoneLeft
# 300 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 170 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 301 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	waitmovement 0
# 302 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	return
# 303 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"

# 304 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"

# 305 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
FuchsiaCity_SafariZone_Entrance_EventScript_CheckSpaceForMons::
# 306 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 175 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 307 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	getpartysize
# 308 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 176 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 309 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	compare VAR_RESULT, PARTY_SIZE
# 310 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	goto_if_ne FuchsiaCity_SafariZone_Entrance_EventScript_CheckSpaceForMons_2
# 311 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
FuchsiaCity_SafariZone_Entrance_EventScript_CheckSpaceForMons_1:
# 312 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 179 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 313 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	specialvar VAR_RESULT, ScriptCheckFreePokemonStorageSpace
# 314 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 180 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 315 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	compare VAR_RESULT, TRUE
# 316 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	goto_if_eq FuchsiaCity_SafariZone_Entrance_EventScript_CheckSpaceForMons_5
# 317 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
FuchsiaCity_SafariZone_Entrance_EventScript_CheckSpaceForMons_4:
# 318 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 183 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 319 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	msgbox Route121_SafariZoneEntrance_Text_PCIsFull
# 320 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 184 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 321 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	goto FuchsiaCity_SafariZone_Entrance_EventScript_ForcePlayerBack
# 322 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	end
# 323 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"

# 324 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
FuchsiaCity_SafariZone_Entrance_EventScript_CheckSpaceForMons_2:
# 325 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 177 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 326 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	goto Common_EventScript_NopReturn
# 327 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	goto FuchsiaCity_SafariZone_Entrance_EventScript_CheckSpaceForMons_1
# 328 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"

# 329 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
FuchsiaCity_SafariZone_Entrance_EventScript_CheckSpaceForMons_5:
# 330 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 181 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 331 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	goto Common_EventScript_NopReturn
# 332 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	goto FuchsiaCity_SafariZone_Entrance_EventScript_CheckSpaceForMons_4
# 333 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"

# 334 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"

# 335 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
FuchsiaCity_SafariZone_Entrance_EventScript_NotEnoughMoney::
# 336 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 189 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 337 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	msgbox FuchsiaCity_SafariZone_Entrance_Text_OopsNotEnoughMoney
# 338 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 190 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 339 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	goto FuchsiaCity_SafariZone_Entrance_EventScript_ForcePlayerBack
# 340 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	end
# 341 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"

# 342 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"

# 343 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
FuchsiaCity_SafariZone_Entrance_EventScript_ForcePlayerBack::
# 344 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 195 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 345 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	closemessage
# 346 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 196 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 347 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	hidemoneybox
# 348 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 197 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 349 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, FuchsiaCity_SafariZone_Entrance_Movement_ForceBack
# 350 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 198 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 351 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	waitmovement 0
# 352 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 199 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 353 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	releaseall
# 354 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	end
# 355 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"

# 356 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"

# 357 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 203 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 358 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
FuchsiaCity_SafariZone_Entrance_Movement_ForceBack:
# 359 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 204 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 360 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	walk_down
# 361 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 205 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 362 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	step_end
# 363 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"

# 364 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 208 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 365 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
FuchsiaCity_SafariZone_Entrance_Movement_EnterSafariZoneMid:
# 366 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 209 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 367 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	walk_up
# 368 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 210 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 369 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	walk_up
# 370 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 211 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 371 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	step_end
# 372 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"

# 373 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 214 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 374 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
FuchsiaCity_SafariZone_Entrance_Movement_EnterSafariZoneRight:
# 375 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 215 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 376 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	walk_up
# 377 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 216 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 378 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	walk_left
# 379 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 217 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 380 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	walk_up
# 381 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 218 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 382 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	step_end
# 383 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"

# 384 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 221 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 385 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
FuchsiaCity_SafariZone_Entrance_Movement_EnterSafariZoneLeft:
# 386 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 222 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 387 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	walk_up
# 388 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 223 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 389 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	walk_right
# 390 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 224 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 391 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	walk_up
# 392 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 225 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 393 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	step_end
# 394 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"

# 395 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
FuchsiaCity_SafariZone_Entrance_EventScript_InfoAttendant::
# 396 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 229 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 397 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	lock
# 398 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 230 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 399 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	faceplayer
# 400 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 231 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 401 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	msgbox FuchsiaCity_SafariZone_Entrance_Text_FirstTimeAtSafariZone, MSGBOX_YESNO
# 402 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 232 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 403 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	compare VAR_RESULT, YES
# 404 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	goto_if_eq FuchsiaCity_SafariZone_Entrance_EventScript_InfoAttendant_2
# 405 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
FuchsiaCity_SafariZone_Entrance_EventScript_InfoAttendant_1:
# 406 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 235 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 407 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	msgbox FuchsiaCity_SafariZone_Entrance_Text_SorryYoureARegularHere
# 408 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 236 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 409 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	release
# 410 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	end
# 411 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"

# 412 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
FuchsiaCity_SafariZone_Entrance_EventScript_InfoAttendant_2:
# 413 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 233 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 414 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	goto FuchsiaCity_SafariZone_Entrance_EventScript_ExplainSafariZone
# 415 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	goto FuchsiaCity_SafariZone_Entrance_EventScript_InfoAttendant_1
# 416 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"

# 417 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"

# 418 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
FuchsiaCity_SafariZone_Entrance_EventScript_ExplainSafariZone::
# 419 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 241 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 420 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	msgbox FuchsiaCity_SafariZone_Entrance_Text_ExplainSafariZone
# 421 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 242 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 422 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	release
# 423 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	end
# 424 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"

# 425 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"

# 426 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
FuchsiaCity_SafariZone_Entrance_Text_WelcomeToSafariZone::
# 427 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 246 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 428 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	.string "Welcome to the SAFARI ZONE!$"
# 429 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"

# 430 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
FuchsiaCity_SafariZone_Entrance_Text_PlaySafariGameFor500::
# 431 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 250 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 432 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	.string "For just ¥500, you can play the\n"
# 433 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	.string "SAFARI GAME.\p"
# 434 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	.string "You can roam the wide-open safari\n"
# 435 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	.string "and catch what you like.\p"
# 436 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	.string "Would you like to play?$"
# 437 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"

# 438 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
FuchsiaCity_SafariZone_Entrance_Text_ThatllBe500WeOnlyUseSpecialBalls::
# 439 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 258 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 440 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	.string "That'll be ¥500, please!\p"
# 441 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	.string "We only use a special kind of \n"
# 442 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	.string "POKé BALLS here.$"
# 443 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"

# 444 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
FuchsiaCity_SafariZone_Entrance_Text_PlayerReceived30SafariBalls::
# 445 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 264 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 446 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	.string "{PLAYER} received 30 SAFARI BALLS\n"
# 447 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	.string "from the attendant.$"
# 448 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"

# 449 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
FuchsiaCity_SafariZone_Entrance_Text_CallYouOnPAWhenYouRunOut::
# 450 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 269 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 451 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	.string "We'll call you on the PA when you\n"
# 452 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	.string "run out of time or SAFARI BALLS.\p"
# 453 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	.string "Well, I'll wish you the best of\n"
# 454 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	.string "luck!$"
# 455 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"

# 456 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
FuchsiaCity_SafariZone_Entrance_Text_OkayPleaseComeAgain::
# 457 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 276 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 458 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	.string "Okay.\n"
# 459 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	.string "Please come again!$"
# 460 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"

# 461 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
FuchsiaCity_SafariZone_Entrance_Text_OopsNotEnoughMoney::
# 462 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 281 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 463 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	.string "Oops!\n"
# 464 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	.string "Not enough money!$"
# 465 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"

# 466 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
FuchsiaCity_SafariZone_Entrance_Text_GoingToLeaveSafariZoneEarly::
# 467 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 286 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 468 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	.string "Are you going to leave the\n"
# 469 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	.string "SAFARI ZONE early?$"
# 470 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"

# 471 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
FuchsiaCity_SafariZone_Entrance_Text_PleaseReturnSafariBalls::
# 472 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 291 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 473 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	.string "Please return any SAFARI BALLS\n"
# 474 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	.string "you may have left.$"
# 475 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"

# 476 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
FuchsiaCity_SafariZone_Entrance_Text_GoodLuck::
# 477 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 296 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 478 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	.string "Good luck!$"
# 479 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"

# 480 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
FuchsiaCity_SafariZone_Entrance_Text_CatchFairShareComeAgain::
# 481 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 300 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 482 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	.string "Did you catch your fair share?\n"
# 483 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	.string "Come again!$"
# 484 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"

# 485 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
FuchsiaCity_SafariZone_Entrance_Text_FirstTimeAtSafariZone::
# 486 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 305 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 487 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	.string "Hi! Is it your first time here at\n"
# 488 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	.string "the SAFARI ZONE?$"
# 489 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"

# 490 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
FuchsiaCity_SafariZone_Entrance_Text_ExplainSafariZone::
# 491 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 310 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 492 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	.string "The SAFARI ZONE actually has\n"
# 493 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	.string "four zones in it.\p"
# 494 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	.string "Each zone has different kinds of\n"
# 495 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	.string "POKéMON, even some rare ones.\p"
# 496 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	.string "Use the supplied SAFARI BALLS to\n"
# 497 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	.string "catch them.\p"
# 498 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	.string "You can also throw BAIT or ROCKS\n"
# 499 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	.string "besides the SAFARI BALLS.\p"
# 500 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	.string "If you throw BAIT, the POKéMON\n"
# 501 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	.string "becomes less likely to flee, but\l"
# 502 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	.string "harder to catch.\p"
# 503 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	.string "If you throw ROCKS, the POKéMON\n"
# 504 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	.string "becomes more likely to flee, but\l"
# 505 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	.string "easier to catch.\p"
# 506 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	.string "When you run out of time or SAFARI\n"
# 507 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	.string "BALLS, it's game over for you!$"
# 508 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"

# 509 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
FuchsiaCity_SafariZone_Entrance_Text_SorryYoureARegularHere::
# 510 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 329 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
# 511 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	.string "Sorry, you're a regular here!$"
