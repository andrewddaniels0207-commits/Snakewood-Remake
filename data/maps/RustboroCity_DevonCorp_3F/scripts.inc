# 1 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 2 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_MapScripts::
# 3 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 2 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 4 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, RustboroCity_DevonCorp_3F_OnTransition
# 5 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 3 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 6 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, RustboroCity_DevonCorp_3F_OnWarp
# 7 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 4 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 8 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, RustboroCity_DevonCorp_3F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 9 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.byte 0
# 10 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 11 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 12 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 5 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 13 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	map_script_2 VAR_DEVON_CORP_3F_STATE, 0, RustboroCity_DevonCorp_3F_EventScript_MeetPresident
# 14 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.2byte 0
# 15 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 16 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 17 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_OnTransition::
# 18 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 10 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 19 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	compare VAR_DEVON_CORP_3F_STATE, 0
# 20 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	goto_if_eq RustboroCity_DevonCorp_3F_OnTransition_2
# 21 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_OnTransition_1:
# 22 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	end
# 23 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 24 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_OnTransition_2:
# 25 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 11 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 26 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	call RustboroCity_DevonCorp_3F_EventScript_SetEmployeePos
# 27 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	goto RustboroCity_DevonCorp_3F_OnTransition_1
# 28 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 29 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 30 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_EventScript_SetEmployeePos::
# 31 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 17 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 32 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	setobjectxyperm LOCALID_DEVON_CORP_3F_EMPLOYEE, 3, 2
# 33 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 18 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 34 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	setobjectmovementtype LOCALID_DEVON_CORP_3F_EMPLOYEE, MOVEMENT_TYPE_FACE_LEFT
# 35 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	return
# 36 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 37 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 38 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 22 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 39 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 40 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 23 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 41 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_OnWarp:
# 42 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 24 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 43 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	map_script_2 VAR_DEVON_CORP_3F_STATE, 0, RustboroCity_DevonCorp_3F_EventScript_PlayerFaceEast
# 44 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 25 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 45 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.2byte 0
# 46 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 47 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_EventScript_PlayerFaceEast::
# 48 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 30 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 49 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_EAST
# 50 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	end
# 51 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 52 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 53 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_EventScript_MeetPresident::
# 54 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 35 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 55 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	lockall
# 56 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 36 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 57 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_ThisIs3rdFloorWaitHere, MSGBOX_DEFAULT
# 58 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 37 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 59 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	closemessage
# 60 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 38 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 61 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	applymovement LOCALID_DEVON_CORP_3F_EMPLOYEE, RustboroCity_DevonCorp_3F_Movement_EmployeeWalkOffscreen
# 62 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 39 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 63 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	waitmovement 0
# 64 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 40 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 65 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	delay 80
# 66 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 41 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 67 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	applymovement LOCALID_DEVON_CORP_3F_EMPLOYEE, RustboroCity_DevonCorp_3F_Movement_EmployeeReturnToPlayer
# 68 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 42 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 69 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	waitmovement 0
# 70 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 43 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 71 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_WordWithPresidentComeWithMe, MSGBOX_DEFAULT
# 72 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 44 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 73 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	closemessage
# 74 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 45 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 75 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	playbgm MUS_FOLLOW_ME, FALSE
# 76 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 46 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 77 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	applymovement LOCALID_DEVON_CORP_3F_EMPLOYEE, RustboroCity_DevonCorp_3F_Movement_LeadPlayerToPresident
# 78 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 47 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 79 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	applymovement LOCALID_PLAYER, RustboroCity_DevonCorp_3F_Movement_PlayerFollowToPresident
# 80 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 48 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 81 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	waitmovement 0
# 82 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 49 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 83 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_PleaseGoAhead, MSGBOX_DEFAULT
# 84 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 50 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 85 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	closemessage
# 86 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 51 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 87 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	fadedefaultbgm
# 88 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 52 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 89 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	applymovement LOCALID_DEVON_CORP_3F_EMPLOYEE, RustboroCity_DevonCorp_3F_Movement_EmployeeFaceDesk
# 90 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 53 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 91 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	applymovement LOCALID_PLAYER, RustboroCity_DevonCorp_3F_Movement_PlayerApproachDesk
# 92 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 54 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 93 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	waitmovement 0
# 94 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 55 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 95 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_MrStoneIHaveFavor, MSGBOX_DEFAULT
# 96 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 56 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 97 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	giveitem ITEM_LETTER
# 98 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 57 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 99 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_MrStoneWantYouToHaveThis, MSGBOX_DEFAULT
# 100 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 58 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 101 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 102 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 59 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 103 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	message RustboroCity_DevonCorp_3F_Text_ReceivedPokenav
# 104 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 60 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 105 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	waitfanfare
# 106 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 61 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 107 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	setflag FLAG_SYS_POKENAV_GET
# 108 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 62 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 109 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	setflag FLAG_RECEIVED_POKENAV
# 110 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 63 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 111 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	setflag FLAG_HIDE_RUSTBORO_CITY_POKEMON_SCHOOL_SCOTT
# 112 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 64 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 113 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_MrStoneExplainPokenavRestUp, MSGBOX_DEFAULT
# 114 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 65 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 115 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	closemessage
# 116 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 66 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 117 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 118 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 67 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 119 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_MrStoneGoWithCautionAndCare, MSGBOX_DEFAULT
# 120 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 68 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 121 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	setflag FLAG_HIDE_ROUTE_116_WANDAS_BOYFRIEND
# 122 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 69 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 123 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	clearflag FLAG_HIDE_RUSTURF_TUNNEL_WANDAS_BOYFRIEND
# 124 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 70 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 125 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	clearflag FLAG_HIDE_RUSTURF_TUNNEL_WANDA
# 126 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 71 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 127 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	clearflag FLAG_HIDE_BRINEYS_HOUSE_MR_BRINEY
# 128 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 72 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 129 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	clearflag FLAG_HIDE_BRINEYS_HOUSE_PEEKO
# 130 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 73 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 131 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	setvar VAR_BRINEY_LOCATION, 1
# 132 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 74 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 133 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	clearflag FLAG_HIDE_RUSTBORO_CITY_RIVAL
# 134 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 75 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 135 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	setvar VAR_DEVON_CORP_3F_STATE, 1
# 136 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 76 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 137 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 6
# 138 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 77 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 139 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	releaseall
# 140 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	end
# 141 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 142 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 143 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 81 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 144 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Movement_Unused:
# 145 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 82 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 146 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_up
# 147 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 83 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 148 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_up
# 149 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 84 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 150 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_up
# 151 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 85 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 152 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_in_place_faster_left
# 153 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 86 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 154 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	step_end
# 155 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 156 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 89 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 157 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Movement_LeadPlayerToPresident:
# 158 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 90 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 159 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 160 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 91 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 161 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 162 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 92 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 163 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 164 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 93 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 165 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_down
# 166 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 94 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 167 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 168 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 95 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 169 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 170 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 96 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 171 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 172 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 97 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 173 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 174 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 98 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 175 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 176 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 99 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 177 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 178 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 100 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 179 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 180 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 101 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 181 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 182 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 102 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 183 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 184 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 103 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 185 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_in_place_faster_left
# 186 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 104 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 187 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	step_end
# 188 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 189 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 107 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 190 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Movement_EmployeeFaceDesk:
# 191 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 108 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 192 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	delay_16
# 193 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 109 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 194 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_in_place_faster_down
# 195 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 110 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 196 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	step_end
# 197 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 198 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 113 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 199 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Movement_EmployeeWalkOffscreen:
# 200 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 114 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 201 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 202 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 115 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 203 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 204 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 116 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 205 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 206 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 117 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 207 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_down
# 208 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 118 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 209 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 210 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 119 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 211 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 212 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 120 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 213 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 214 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 121 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 215 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 216 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 122 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 217 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	step_end
# 218 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 219 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 125 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 220 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Movement_EmployeeReturnToPlayer:
# 221 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 126 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 222 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_left
# 223 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 127 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 224 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_left
# 225 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 128 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 226 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_left
# 227 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 129 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 228 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_left
# 229 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 130 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 230 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_up
# 231 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 131 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 232 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_left
# 233 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 132 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 234 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_left
# 235 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 133 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 236 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_left
# 237 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 134 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 238 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	step_end
# 239 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 240 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 137 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 241 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Movement_PlayerFollowToPresident:
# 242 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 138 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 243 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 244 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 139 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 245 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 246 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 140 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 247 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 248 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 141 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 249 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 250 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 142 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 251 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_down
# 252 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 143 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 253 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 254 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 144 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 255 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 256 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 145 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 257 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 258 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 146 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 259 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 260 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 147 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 261 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 262 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 148 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 263 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 264 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 149 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 265 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 266 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 150 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 267 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 268 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 151 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 269 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	step_end
# 270 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 271 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 154 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 272 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Movement_PlayerApproachDesk:
# 273 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 155 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 274 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	delay_16
# 275 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 156 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 276 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	delay_16
# 277 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 157 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 278 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_down
# 279 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 158 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 280 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_down
# 281 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 159 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 282 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_in_place_faster_right
# 283 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 160 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 284 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	step_end
# 285 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 286 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_EventScript_MrStone::
# 287 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 164 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 288 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	lock
# 289 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 165 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 290 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	faceplayer
# 291 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 166 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 292 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	goto_if_set FLAG_RECEIVED_EXP_SHARE, RustboroCity_DevonCorp_3F_EventScript_MrStone_2
# 293 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_EventScript_MrStone_1:
# 294 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 169 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 295 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	goto_if_set FLAG_DELIVERED_STEVEN_LETTER, RustboroCity_DevonCorp_3F_EventScript_MrStone_5
# 296 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_EventScript_MrStone_4:
# 297 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 172 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 298 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_CountingOnYou, MSGBOX_DEFAULT
# 299 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 173 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 300 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	closemessage
# 301 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 174 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 302 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 303 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 175 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 304 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	waitmovement 0
# 305 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 176 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 306 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	release
# 307 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	end
# 308 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 309 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_EventScript_MrStone_2:
# 310 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 167 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 311 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	goto RustboroCity_DevonCorp_3F_EventScript_MrStoneAfterFavor
# 312 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	goto RustboroCity_DevonCorp_3F_EventScript_MrStone_1
# 313 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 314 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_EventScript_MrStone_5:
# 315 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 170 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 316 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	goto RustboroCity_DevonCorp_3F_EventScript_GiveExpShare
# 317 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	goto RustboroCity_DevonCorp_3F_EventScript_MrStone_4
# 318 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 319 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 320 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_EventScript_GiveExpShare::
# 321 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 181 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 322 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_ThankYouForDeliveringLetter, MSGBOX_DEFAULT
# 323 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 182 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 324 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	giveitem ITEM_EXP_SHARE
# 325 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 183 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 326 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	compare VAR_RESULT, FALSE
# 327 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	goto_if_eq RustboroCity_DevonCorp_3F_EventScript_GiveExpShare_2
# 328 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_EventScript_GiveExpShare_1:
# 329 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 186 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 330 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	setflag FLAG_RECEIVED_EXP_SHARE
# 331 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 187 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 332 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_ExplainExpShare, MSGBOX_DEFAULT
# 333 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 188 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 334 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	closemessage
# 335 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 189 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 336 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 337 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 190 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 338 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	waitmovement 0
# 339 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 191 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 340 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	release
# 341 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	end
# 342 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 343 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_EventScript_GiveExpShare_2:
# 344 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 184 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 345 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
# 346 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	goto RustboroCity_DevonCorp_3F_EventScript_GiveExpShare_1
# 347 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 348 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 349 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_EventScript_MrStoneAfterFavor::
# 350 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 196 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 351 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_NotFamiliarWithTrends, MSGBOX_DEFAULT
# 352 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 197 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 353 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	closemessage
# 354 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 198 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 355 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 356 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 199 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 357 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	waitmovement 0
# 358 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 200 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 359 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	release
# 360 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	end
# 361 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 362 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 363 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_EventScript_Employee::
# 364 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 205 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 365 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	lock
# 366 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 206 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 367 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	faceplayer
# 368 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 207 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 369 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	goto_if_set FLAG_RECEIVED_REPEAT_BALL, RustboroCity_DevonCorp_3F_EventScript_Employee_2
# 370 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_EventScript_Employee_1:
# 371 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 210 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 372 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_VisitCaptSternShipyard, MSGBOX_DEFAULT
# 373 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 211 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 374 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	release
# 375 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	end
# 376 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 377 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_EventScript_Employee_2:
# 378 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 208 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 379 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	goto RustboroCity_DevonCorp_3F_EventScript_EmployeeBalls
# 380 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	goto RustboroCity_DevonCorp_3F_EventScript_Employee_1
# 381 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 382 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 383 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_EventScript_EmployeeBalls::
# 384 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 216 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 385 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_RepeatAndTimerHugelyPopular, MSGBOX_DEFAULT
# 386 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 217 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 387 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	release
# 388 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	end
# 389 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 390 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 391 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_EventScript_RareRocksDisplay::
# 392 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 222 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 393 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_RareRocksDisplay, MSGBOX_SIGN
# 394 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	end
# 395 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 396 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 397 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Text_MrStoneIHaveFavor::
# 398 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 226 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 399 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "I'm MR. STONE, the PRESIDENT of\n"
# 400 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "the DEVON CORPORATION.\p"
# 401 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "I'd just got word about you!\p"
# 402 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "You saved our staff not just once,\n"
# 403 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "but twice!\p"
# 404 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "I have a favor to ask of an amazing\n"
# 405 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "person like you.\p"
# 406 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "I understand that you're delivering\n"
# 407 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "a package to SLATEPORT's SHIPYARD.\p"
# 408 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Well, on the way, could you stop off in\n"
# 409 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "DEWFORD TOWN?\p"
# 410 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "I was hoping that you'd deliver a\n"
# 411 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "LETTER to STEVEN in DEWFORD.$"
# 412 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 413 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Text_MrStoneWantYouToHaveThis::
# 414 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 242 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 415 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "MR. STONE: Now, you should know that\n"
# 416 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "I am a great PRESIDENT.\p"
# 417 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "So, I'd never be so cheap as to ask\n"
# 418 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "a favor for nothing in return.\p"
# 419 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "That's why I want you to have this!$"
# 420 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 421 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Text_ReceivedPokenav::
# 422 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 250 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 423 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "{PLAYER} received a POKéNAV.$"
# 424 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 425 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Text_MrStoneExplainPokenavRestUp::
# 426 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 254 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 427 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "MR. STONE: That device…\p"
# 428 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "It's a POKéMON NAVIGATOR, or POKéNAV\n"
# 429 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "for short.\p"
# 430 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "It's an indispensable tool for any\n"
# 431 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "TRAINER on an adventure.\p"
# 432 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "It has a map of the HOENN region.\p"
# 433 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "You can check the locations of\n"
# 434 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "DEWFORD and SLATEPORT easily!\p"
# 435 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "By the way, I've heard that sinister\n"
# 436 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "criminals--MAGMA and AQUA, I believe--\l"
# 437 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "have been making trouble far and wide.\p"
# 438 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "I think it would be best if you rested\n"
# 439 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "up before you go on your way.$"
# 440 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 441 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Text_MrStoneGoWithCautionAndCare::
# 442 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 270 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 443 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "MR. STONE: Well, then, {PLAYER}{KUN},\n"
# 444 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "go with caution and care!$"
# 445 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 446 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Text_CountingOnYou::
# 447 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 275 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 448 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "MR. STONE: I'm counting on you!$"
# 449 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 450 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Text_ThankYouForDeliveringLetter::
# 451 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 279 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 452 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "MR. STONE: You delivered my LETTER?\n"
# 453 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Thank you kindly!\p"
# 454 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "This is my way of thanking you.\n"
# 455 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "It should help you, a TRAINER.$"
# 456 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 457 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Text_ExplainExpShare::
# 458 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 286 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 459 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "MR. STONE: A POKéMON holding that\n"
# 460 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "EXP. SHARE will be given some of the\l"
# 461 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "EXP Points from battle.\p"
# 462 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "It will get EXP Points even if it didn't\n"
# 463 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "actually battle.\p"
# 464 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "I would say EXP. SHARE is quite useful\n"
# 465 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "for raising weak POKéMON.$"
# 466 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 467 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Text_NotFamiliarWithTrends::
# 468 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 296 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 469 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "MR. STONE: Since my youth, I've immersed\n"
# 470 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "myself in work.\p"
# 471 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Consequently, I'm not familiar with\n"
# 472 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "trends and that sort of thing.\p"
# 473 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "But do young people all want to be\n"
# 474 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "TRAINERS in the POKéMON LEAGUE?$"
# 475 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 476 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Text_ThisIs3rdFloorWaitHere::
# 477 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 305 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 478 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "This is the DEVON CORPORATION's\n"
# 479 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "third floor.\p"
# 480 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Our PRESIDENT's OFFICE is on\n"
# 481 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "this floor.\p"
# 482 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Anyway, I can't tell you how much I'm\n"
# 483 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "grateful for what you've done.\p"
# 484 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Um… By the way, that parcel\n"
# 485 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "you got back for us…\p"
# 486 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Could I get you to deliver that to\n"
# 487 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "the SHIPYARD in SLATEPORT?\p"
# 488 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "It would be awful if those robbers\n"
# 489 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "tried to take it again.\p"
# 490 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Uh… Hehehe, so, uh, could I count\n"
# 491 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "on you to do that for me?\p"
# 492 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Oh, that's right.\n"
# 493 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Could you wait here a second?$"
# 494 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 495 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Text_WordWithPresidentComeWithMe::
# 496 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 324 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 497 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Our PRESIDENT would like to have\n"
# 498 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "a word with you.\p"
# 499 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Please come with me.$"
# 500 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 501 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Text_PleaseGoAhead::
# 502 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 330 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 503 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Please, go ahead.$"
# 504 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 505 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Text_VisitCaptSternShipyard::
# 506 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 334 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 507 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "If you visit the SHIPYARD in SLATEPORT,\n"
# 508 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "you should go see CAPT. STERN.$"
# 509 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 510 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Text_RepeatAndTimerHugelyPopular::
# 511 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 339 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 512 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "DEVON's new products, the REPEAT BALL\n"
# 513 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "and TIMER BALL, have become hugely\l"
# 514 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "popular among TRAINERS.$"
# 515 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 516 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Text_RareRocksDisplay::
# 517 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 345 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
# 518 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "It's a collection of rare rocks and\n"
# 519 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "stones assembled by the PRESIDENT.$"
