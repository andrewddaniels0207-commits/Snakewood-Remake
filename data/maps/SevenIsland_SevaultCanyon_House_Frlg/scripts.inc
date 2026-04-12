# 1 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"

# 2 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
SevenIsland_SevaultCanyon_House_Frlg_MapScripts::
# 3 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	.byte 0
# 4 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"

# 5 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"

# 6 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
SevenIsland_SevaultCanyon_House_EventScript_ChanseyDanceMan::
# 7 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
# 4 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
# 8 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	lock
# 9 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
# 5 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
# 10 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	goto_if_set DID_CHANSEY_DANCE, SevenIsland_SevaultCanyon_House_EventScript_ChanseyDanceMan_2
# 11 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
SevenIsland_SevaultCanyon_House_EventScript_ChanseyDanceMan_1:
# 12 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
# 8 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
# 13 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	playbgm MUS_SCHOOL, 0
# 14 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
# 9 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
# 15 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	applymovement LOCALID_CHANSEY_DANCE_MAN, SevenIsland_SevaultCanyon_House_Movement_ChanseyDance
# 16 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
# 10 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
# 17 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	waitmovement 0
# 18 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
# 11 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
# 19 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	fadedefaultbgm
# 20 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
# 12 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
# 21 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	delay 30
# 22 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
# 13 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
# 23 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	applymovement LOCALID_CHANSEY_DANCE_MAN, Common_Movement_FacePlayer
# 24 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
# 14 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
# 25 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	waitmovement 0
# 26 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
# 15 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
# 27 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	msgbox SevenIsland_SevaultCanyon_House_Text_ChanseyDanceJoinIn
# 28 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
# 16 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
# 29 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 30 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
# 17 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
# 31 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	msgbox SevenIsland_SevaultCanyon_House_Text_WouldYouLikeToDance, MSGBOX_YESNO
# 32 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
# 18 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
# 33 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	compare VAR_RESULT, NO
# 34 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	goto_if_eq SevenIsland_SevaultCanyon_House_EventScript_ChanseyDanceMan_5
# 35 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
SevenIsland_SevaultCanyon_House_EventScript_ChanseyDanceMan_4:
# 36 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
# 21 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
# 37 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	msgbox SevenIsland_SevaultCanyon_House_Text_DancedChanseyDance
# 38 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
# 22 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
# 39 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	closemessage
# 40 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
# 23 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
# 41 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	call EventScript_RestorePrevTextColor
# 42 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
# 24 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
# 43 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	compare VAR_FACING, DIR_SOUTH
# 44 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	goto_if_ne SevenIsland_SevaultCanyon_House_EventScript_ChanseyDanceMan_8
# 45 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
SevenIsland_SevaultCanyon_House_EventScript_ChanseyDanceMan_7:
# 46 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
# 27 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
# 47 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	delay 30
# 48 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
# 28 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
# 49 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	playbgm MUS_SCHOOL, 0
# 50 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
# 29 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
# 51 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, SevenIsland_SevaultCanyon_House_Movement_ChanseyDance
# 52 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
# 30 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
# 53 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	waitmovement 0
# 54 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
# 31 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
# 55 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	fadedefaultbgm
# 56 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
# 32 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
# 57 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	delay 30
# 58 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
# 33 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
# 59 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 60 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
# 34 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
# 61 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	msgbox SevenIsland_SevaultCanyon_House_Text_YoureAllChipperNow
# 62 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
# 35 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
# 63 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	setflag DID_CHANSEY_DANCE
# 64 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
# 36 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
# 65 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	release
# 66 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	end
# 67 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"

# 68 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
SevenIsland_SevaultCanyon_House_EventScript_ChanseyDanceMan_2:
# 69 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
# 6 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
# 70 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	goto SevenIsland_SevaultCanyon_House_EventScript_AlreadyDanced
# 71 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	goto SevenIsland_SevaultCanyon_House_EventScript_ChanseyDanceMan_1
# 72 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"

# 73 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
SevenIsland_SevaultCanyon_House_EventScript_ChanseyDanceMan_5:
# 74 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
# 19 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
# 75 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	goto SevenIsland_SevaultCanyon_House_EventScript_DeclineDance
# 76 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	goto SevenIsland_SevaultCanyon_House_EventScript_ChanseyDanceMan_4
# 77 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"

# 78 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
SevenIsland_SevaultCanyon_House_EventScript_ChanseyDanceMan_8:
# 79 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
# 25 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
# 80 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	call SevenIsland_SevaultCanyon_House_EventScript_PlayerFaceDown
# 81 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	goto SevenIsland_SevaultCanyon_House_EventScript_ChanseyDanceMan_7
# 82 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"

# 83 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"

# 84 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
SevenIsland_SevaultCanyon_House_EventScript_PlayerFaceDown::
# 85 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
# 41 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
# 86 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 87 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
# 42 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
# 88 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	waitmovement 0
# 89 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	return
# 90 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"

# 91 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"

# 92 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
SevenIsland_SevaultCanyon_House_EventScript_AlreadyDanced::
# 93 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
# 47 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
# 94 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	applymovement LOCALID_CHANSEY_DANCE_MAN, Common_Movement_FacePlayer
# 95 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
# 48 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
# 96 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	waitmovement 0
# 97 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
# 49 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
# 98 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	msgbox SevenIsland_SevaultCanyon_House_Text_ChanseyDanceJoinIn
# 99 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
# 50 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
# 100 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	release
# 101 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	end
# 102 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"

# 103 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"

# 104 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
SevenIsland_SevaultCanyon_House_EventScript_DeclineDance::
# 105 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
# 55 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
# 106 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 107 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
# 56 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
# 108 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	msgbox SevenIsland_SevaultCanyon_House_Text_ComeOnDance
# 109 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
# 57 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
# 110 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	release
# 111 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	end
# 112 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"

# 113 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"

# 114 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
# 61 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
# 115 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
SevenIsland_SevaultCanyon_House_Movement_ChanseyDance:
# 116 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
# 62 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
# 117 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	walk_in_place_down
# 118 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
# 63 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
# 119 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	delay_16
# 120 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
# 64 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
# 121 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	walk_in_place_down
# 122 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
# 65 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
# 123 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	delay_16
# 124 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
# 66 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
# 125 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	walk_in_place_down
# 126 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
# 67 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
# 127 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	delay_16
# 128 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
# 68 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
# 129 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	walk_in_place_down
# 130 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
# 69 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
# 131 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	delay_16
# 132 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
# 70 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
# 133 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	walk_in_place_faster_right
# 134 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
# 71 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
# 135 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	delay_4
# 136 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
# 72 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
# 137 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	walk_in_place_faster_up
# 138 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
# 73 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
# 139 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	delay_4
# 140 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
# 74 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
# 141 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	walk_in_place_faster_left
# 142 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
# 75 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
# 143 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	delay_4
# 144 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
# 76 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
# 145 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	walk_in_place_faster_down
# 146 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
# 77 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
# 147 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	delay_4
# 148 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
# 78 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
# 149 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	step_end
# 150 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"

# 151 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
SevenIsland_SevaultCanyon_House_EventScript_Chansey::
# 152 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
# 82 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
# 153 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	lock
# 154 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
# 83 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
# 155 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	faceplayer
# 156 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
# 84 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
# 157 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	waitse
# 158 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
# 85 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
# 159 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	playmoncry SPECIES_CHANSEY, CRY_MODE_NORMAL
# 160 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
# 86 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
# 161 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	msgbox SevenIsland_SevaultCanyon_House_Text_Chansey
# 162 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
# 87 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
# 163 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	waitmoncry
# 164 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
# 88 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
# 165 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	release
# 166 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	end
# 167 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"

# 168 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"

# 169 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
SevenIsland_SevaultCanyon_House_Text_ChanseyDanceJoinIn::
# 170 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
# 92 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
# 171 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	.string "Dance, dance!\n"
# 172 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	.string "CHANSEY Dance!\p"
# 173 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	.string "You join in, too!\n"
# 174 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	.string "Dance, dance!$"
# 175 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"

# 176 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
SevenIsland_SevaultCanyon_House_Text_WouldYouLikeToDance::
# 177 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
# 99 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
# 178 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	.string "Would you like to dance?$"
# 179 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"

# 180 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
SevenIsland_SevaultCanyon_House_Text_ComeOnDance::
# 181 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
# 103 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
# 182 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	.string "Come on, dance!$"
# 183 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"

# 184 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
SevenIsland_SevaultCanyon_House_Text_DancedChanseyDance::
# 185 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
# 107 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
# 186 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	.string "{PLAYER} danced the CHANSEY Dance!$"
# 187 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"

# 188 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
SevenIsland_SevaultCanyon_House_Text_YoureAllChipperNow::
# 189 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
# 111 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
# 190 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	.string "Ahahahaha!\p"
# 191 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	.string "There, you're all chipper now!\n"
# 192 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	.string "Lucky!$"
# 193 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"

# 194 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
SevenIsland_SevaultCanyon_House_Text_Chansey::
# 195 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
# 117 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
# 196 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	.string "CHANSEY: Chansi! Chansi!$"
