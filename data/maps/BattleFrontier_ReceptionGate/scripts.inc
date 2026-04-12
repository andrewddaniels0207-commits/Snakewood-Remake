# 1 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 2 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_MapScripts::
# 3 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 5 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 4 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, BattleFrontier_ReceptionGate_OnTransition
# 5 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 2 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 6 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, BattleFrontier_ReceptionGate_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 7 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.byte 0
# 8 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 9 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 10 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 3 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 11 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	map_script_2 VAR_HAS_ENTERED_BATTLE_FRONTIER, 0, BattleFrontier_ReceptionGate_EventScript_FirstTimeEntering
# 12 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.2byte 0
# 13 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 14 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 15 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_OnTransition::
# 16 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 9 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 17 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	setflag FLAG_LANDMARK_BATTLE_FRONTIER
# 18 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	end
# 19 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 20 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 21 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_EventScript_FirstTimeEntering::
# 22 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 14 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 23 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	lockall
# 24 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 15 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 25 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	setvar VAR_HAS_ENTERED_BATTLE_FRONTIER, 1
# 26 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 16 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 27 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	playse SE_PIN
# 28 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 17 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 29 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	applymovement LOCALID_FRONTIER_RECEPTION_GREETER, Common_Movement_ExclamationMark
# 30 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 18 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 31 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	waitmovement 0
# 32 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 19 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 33 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	applymovement LOCALID_FRONTIER_RECEPTION_GREETER, Common_Movement_Delay48
# 34 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 20 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 35 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	waitmovement 0
# 36 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 21 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 37 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_FirstTimeHereThisWay, MSGBOX_DEFAULT
# 38 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 22 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 39 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	closemessage
# 40 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 23 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 41 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	applymovement LOCALID_PLAYER, BattleFrontier_ReceptionGate_Movement_PlayerApproachCounter
# 42 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 24 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 43 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	waitmovement 0
# 44 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 25 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 45 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	goto BattleFrontier_ReceptionGate_EventScript_ScottScene
# 46 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	end
# 47 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 48 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 49 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_EventScript_ScottScene::
# 50 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 30 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 51 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_WelcomeToBattleFrontier, MSGBOX_DEFAULT
# 52 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 31 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 53 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_IssueFrontierPass, MSGBOX_DEFAULT
# 54 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 32 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 55 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 56 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 33 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 57 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	message BattleFrontier_ReceptionGate_Text_ObtainedFrontierPass
# 58 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 34 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 59 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	waitfanfare
# 60 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 35 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 61 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	waitmessage
# 62 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 36 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 63 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_PlacedTrainerCardInFrontierPass, MSGBOX_DEFAULT
# 64 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 37 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 65 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	setflag FLAG_SYS_FRONTIER_PASS
# 66 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 38 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 67 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_EnjoyBattleFrontier, MSGBOX_DEFAULT
# 68 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 39 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 69 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_IfItIsntPlayerYouCame, MSGBOX_DEFAULT
# 70 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 40 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 71 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	closemessage
# 72 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 41 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 73 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	applymovement LOCALID_FRONTIER_RECEPTION_GREETER, Common_Movement_WalkInPlaceFasterUp
# 74 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 42 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 75 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	applymovement LOCALID_FRONTIER_RECEPTION_GUIDE, Common_Movement_WalkInPlaceFasterUp
# 76 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 43 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 77 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 78 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 44 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 79 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	waitmovement 0
# 80 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 45 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 81 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	playse SE_PIN
# 82 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 46 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 83 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	applymovement LOCALID_FRONTIER_RECEPTION_GREETER, Common_Movement_ExclamationMark
# 84 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 47 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 85 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	applymovement LOCALID_FRONTIER_RECEPTION_GUIDE, Common_Movement_ExclamationMark
# 86 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 48 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 87 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 88 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 49 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 89 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	waitmovement 0
# 90 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 50 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 91 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_OhMrScottGoodDay, MSGBOX_DEFAULT
# 92 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 51 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 93 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	closemessage
# 94 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 52 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 95 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	applymovement LOCALID_FRONTIER_RECEPTION_GREETER, BattleFrontier_ReceptionGate_Movement_GreeterFaceScott
# 96 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 53 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 97 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	applymovement LOCALID_FRONTIER_RECEPTION_GUIDE, BattleFrontier_ReceptionGate_Movement_FacilityGuideFaceScott
# 98 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 54 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 99 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	applymovement LOCALID_PLAYER, BattleFrontier_ReceptionGate_Movement_PlayerFaceScott
# 100 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 55 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 101 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	applymovement LOCALID_FRONTIER_RECEPTION_SCOTT, BattleFrontier_ReceptionGate_Movement_ScottEnter
# 102 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 56 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 103 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	waitmovement 0
# 104 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 57 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 105 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_ScottGreatToSeeYouHere, MSGBOX_DEFAULT
# 106 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 58 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 107 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	closemessage
# 108 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 59 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 109 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	applymovement LOCALID_FRONTIER_RECEPTION_SCOTT, BattleFrontier_ReceptionGate_Movement_ScottExit
# 110 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 60 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 111 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	waitmovement 0
# 112 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 61 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 113 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	removeobject LOCALID_FRONTIER_RECEPTION_SCOTT
# 114 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 62 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 115 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	releaseall
# 116 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	end
# 117 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 118 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 119 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 66 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 120 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Movement_PlayerApproachCounter:
# 121 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 67 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 122 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	walk_up
# 123 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 68 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 124 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	walk_up
# 125 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 69 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 126 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	walk_left
# 127 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 70 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 128 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	walk_left
# 129 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 71 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 130 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	step_end
# 131 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 132 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 74 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 133 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Movement_PlayerFaceScott:
# 134 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 75 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 135 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	delay_16
# 136 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 76 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 137 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	delay_16
# 138 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 77 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 139 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	delay_16
# 140 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 78 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 141 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	delay_8
# 142 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 79 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 143 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	walk_in_place_faster_right
# 144 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 80 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 145 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	step_end
# 146 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 147 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 83 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 148 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Movement_WalkDown:
# 149 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 84 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 150 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	walk_down
# 151 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 85 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 152 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	walk_down
# 153 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 86 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 154 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	step_end
# 155 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 156 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 89 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 157 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Movement_ScottEnter:
# 158 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 90 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 159 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	walk_down
# 160 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 91 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 161 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	walk_down
# 162 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 92 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 163 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	walk_down
# 164 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 93 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 165 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	walk_down
# 166 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 94 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 167 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	walk_down
# 168 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 95 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 169 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	walk_down
# 170 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 96 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 171 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	walk_left
# 172 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 97 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 173 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	step_end
# 174 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 175 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 100 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 176 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Movement_ScottExit:
# 177 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 101 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 178 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	walk_right
# 179 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 102 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 180 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	walk_up
# 181 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 103 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 182 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	walk_up
# 183 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 104 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 184 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	walk_up
# 185 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 105 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 186 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	walk_up
# 187 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 106 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 188 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	walk_up
# 189 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 107 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 190 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	walk_up
# 191 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 108 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 192 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	step_end
# 193 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 194 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 111 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 195 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Movement_GreeterFaceScott:
# 196 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 112 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 197 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	delay_16
# 198 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 113 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 199 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	delay_16
# 200 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 114 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 201 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	delay_16
# 202 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 115 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 203 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	delay_8
# 204 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 116 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 205 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	walk_in_place_faster_right
# 206 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 117 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 207 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	step_end
# 208 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 209 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 120 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 210 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Movement_FacilityGuideFaceScott:
# 211 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 121 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 212 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	delay_16
# 213 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 122 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 214 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	delay_16
# 215 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 123 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 216 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	delay_16
# 217 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 124 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 218 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	delay_8
# 219 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 125 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 220 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	walk_in_place_faster_left
# 221 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 126 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 222 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	step_end
# 223 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 224 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_EventScript_Greeter::
# 225 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 130 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 226 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	lock
# 227 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 131 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 228 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	faceplayer
# 229 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 132 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 230 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_WelcomeToBattleFrontier, MSGBOX_DEFAULT
# 231 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 133 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 232 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_EnjoyBattleFrontier, MSGBOX_DEFAULT
# 233 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 134 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 234 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	release
# 235 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	end
# 236 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 237 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 238 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_EventScript_FacilityGuide::
# 239 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 139 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 240 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	lock
# 241 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 140 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 242 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	faceplayer
# 243 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 141 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 244 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_YourGuideToFacilities, MSGBOX_DEFAULT
# 245 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 142 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 246 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	goto BattleFrontier_ReceptionGate_EventScript_ChooseFacilityToLearnAbout
# 247 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	end
# 248 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 249 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 250 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_EventScript_ChooseFacilityToLearnAbout::
# 251 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 147 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 252 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	message BattleFrontier_ReceptionGate_Text_LearnAboutWhich2
# 253 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 148 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 254 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	waitmessage
# 255 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 149 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 256 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	setvar VAR_0x8004, SCROLL_MULTI_BF_RECEPTIONIST
# 257 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 150 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 258 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	special ShowScrollableMultichoice
# 259 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 151 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 260 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	waitstate
# 261 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 152 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 262 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	switch VAR_RESULT
# 263 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 153 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 264 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	case 0, BattleFrontier_ReceptionGate_EventScript_ChooseFacilityToLearnAbout_3
# 265 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 155 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 266 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	case 1, BattleFrontier_ReceptionGate_EventScript_ChooseFacilityToLearnAbout_4
# 267 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 157 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 268 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	case 2, BattleFrontier_ReceptionGate_EventScript_ChooseFacilityToLearnAbout_5
# 269 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 159 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 270 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	case 3, BattleFrontier_ReceptionGate_EventScript_ChooseFacilityToLearnAbout_6
# 271 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 161 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 272 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	case 4, BattleFrontier_ReceptionGate_EventScript_ChooseFacilityToLearnAbout_7
# 273 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 163 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 274 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	case 5, BattleFrontier_ReceptionGate_EventScript_ChooseFacilityToLearnAbout_8
# 275 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 165 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 276 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	case 6, BattleFrontier_ReceptionGate_EventScript_ChooseFacilityToLearnAbout_9
# 277 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 167 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 278 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	case 7, BattleFrontier_ReceptionGate_EventScript_ChooseFacilityToLearnAbout_10
# 279 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 169 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 280 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	case 8, BattleFrontier_ReceptionGate_EventScript_ChooseFacilityToLearnAbout_11
# 281 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 171 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 282 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	case 9, BattleFrontier_ReceptionGate_EventScript_ChooseFacilityToLearnAbout_12
# 283 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 173 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 284 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_ReceptionGate_EventScript_ChooseFacilityToLearnAbout_13
# 285 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_EventScript_ChooseFacilityToLearnAbout_1:
# 286 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	end
# 287 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 288 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_EventScript_ChooseFacilityToLearnAbout_3:
# 289 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 154 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 290 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	goto BattleFrontier_ReceptionGate_EventScript_BattleTower
# 291 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	goto BattleFrontier_ReceptionGate_EventScript_ChooseFacilityToLearnAbout_1
# 292 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 293 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_EventScript_ChooseFacilityToLearnAbout_4:
# 294 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 156 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 295 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	goto BattleFrontier_ReceptionGate_EventScript_BattleDome
# 296 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	goto BattleFrontier_ReceptionGate_EventScript_ChooseFacilityToLearnAbout_1
# 297 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 298 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_EventScript_ChooseFacilityToLearnAbout_5:
# 299 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 158 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 300 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	goto BattleFrontier_ReceptionGate_EventScript_BattlePalace
# 301 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	goto BattleFrontier_ReceptionGate_EventScript_ChooseFacilityToLearnAbout_1
# 302 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 303 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_EventScript_ChooseFacilityToLearnAbout_6:
# 304 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 160 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 305 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	goto BattleFrontier_ReceptionGate_EventScript_BattleArena
# 306 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	goto BattleFrontier_ReceptionGate_EventScript_ChooseFacilityToLearnAbout_1
# 307 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 308 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_EventScript_ChooseFacilityToLearnAbout_7:
# 309 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 162 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 310 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	goto BattleFrontier_ReceptionGate_EventScript_BattleFactory
# 311 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	goto BattleFrontier_ReceptionGate_EventScript_ChooseFacilityToLearnAbout_1
# 312 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 313 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_EventScript_ChooseFacilityToLearnAbout_8:
# 314 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 164 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 315 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	goto BattleFrontier_ReceptionGate_EventScript_BattlePike
# 316 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	goto BattleFrontier_ReceptionGate_EventScript_ChooseFacilityToLearnAbout_1
# 317 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 318 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_EventScript_ChooseFacilityToLearnAbout_9:
# 319 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 166 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 320 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	goto BattleFrontier_ReceptionGate_EventScript_BattlePyramid
# 321 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	goto BattleFrontier_ReceptionGate_EventScript_ChooseFacilityToLearnAbout_1
# 322 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 323 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_EventScript_ChooseFacilityToLearnAbout_10:
# 324 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 168 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 325 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	goto BattleFrontier_ReceptionGate_EventScript_RankingHall
# 326 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	goto BattleFrontier_ReceptionGate_EventScript_ChooseFacilityToLearnAbout_1
# 327 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 328 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_EventScript_ChooseFacilityToLearnAbout_11:
# 329 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 170 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 330 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	goto BattleFrontier_ReceptionGate_EventScript_ExchangeCorner
# 331 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	goto BattleFrontier_ReceptionGate_EventScript_ChooseFacilityToLearnAbout_1
# 332 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 333 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_EventScript_ChooseFacilityToLearnAbout_12:
# 334 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 172 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 335 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	goto BattleFrontier_ReceptionGate_EventScript_ExitFacilityGuide
# 336 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	goto BattleFrontier_ReceptionGate_EventScript_ChooseFacilityToLearnAbout_1
# 337 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 338 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_EventScript_ChooseFacilityToLearnAbout_13:
# 339 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 174 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 340 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	goto BattleFrontier_ReceptionGate_EventScript_ExitFacilityGuide
# 341 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	goto BattleFrontier_ReceptionGate_EventScript_ChooseFacilityToLearnAbout_1
# 342 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 343 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 344 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_EventScript_BattleTower::
# 345 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 180 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 346 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_BattleTowerInfo, MSGBOX_DEFAULT
# 347 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 181 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 348 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	goto BattleFrontier_ReceptionGate_EventScript_ChooseFacilityToLearnAbout
# 349 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	end
# 350 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 351 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 352 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_EventScript_BattleDome::
# 353 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 186 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 354 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_BattleDomeInfo, MSGBOX_DEFAULT
# 355 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 187 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 356 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	goto BattleFrontier_ReceptionGate_EventScript_ChooseFacilityToLearnAbout
# 357 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	end
# 358 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 359 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 360 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_EventScript_BattlePalace::
# 361 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 192 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 362 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_BattlePalaceInfo, MSGBOX_DEFAULT
# 363 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 193 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 364 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	goto BattleFrontier_ReceptionGate_EventScript_ChooseFacilityToLearnAbout
# 365 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	end
# 366 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 367 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 368 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_EventScript_BattleArena::
# 369 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 198 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 370 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_BattleArenaInfo, MSGBOX_DEFAULT
# 371 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 199 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 372 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	goto BattleFrontier_ReceptionGate_EventScript_ChooseFacilityToLearnAbout
# 373 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	end
# 374 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 375 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 376 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_EventScript_BattleFactory::
# 377 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 204 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 378 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_BattleFactoryInfo, MSGBOX_DEFAULT
# 379 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 205 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 380 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	goto BattleFrontier_ReceptionGate_EventScript_ChooseFacilityToLearnAbout
# 381 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	end
# 382 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 383 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 384 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_EventScript_BattlePike::
# 385 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 210 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 386 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_BattlePikeInfo, MSGBOX_DEFAULT
# 387 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 211 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 388 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	goto BattleFrontier_ReceptionGate_EventScript_ChooseFacilityToLearnAbout
# 389 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	end
# 390 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 391 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 392 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_EventScript_BattlePyramid::
# 393 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 216 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 394 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_BattlePyramidInfo, MSGBOX_DEFAULT
# 395 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 217 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 396 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	goto BattleFrontier_ReceptionGate_EventScript_ChooseFacilityToLearnAbout
# 397 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	end
# 398 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 399 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 400 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_EventScript_RankingHall::
# 401 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 222 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 402 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_RankingHallInfo, MSGBOX_DEFAULT
# 403 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 223 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 404 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	goto BattleFrontier_ReceptionGate_EventScript_ChooseFacilityToLearnAbout
# 405 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	end
# 406 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 407 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 408 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_EventScript_ExchangeCorner::
# 409 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 228 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 410 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_ExchangeCornerInfo, MSGBOX_DEFAULT
# 411 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 229 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 412 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	goto BattleFrontier_ReceptionGate_EventScript_ChooseFacilityToLearnAbout
# 413 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	end
# 414 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 415 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 416 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_EventScript_ExitFacilityGuide::
# 417 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 234 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 418 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_EnjoyBattleFrontier, MSGBOX_DEFAULT
# 419 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 235 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 420 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	release
# 421 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	end
# 422 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 423 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 424 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_EventScript_RulesGuide::
# 425 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 240 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 426 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	lock
# 427 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 241 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 428 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	faceplayer
# 429 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 242 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 430 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_YourGuideToRules, MSGBOX_DEFAULT
# 431 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 243 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 432 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	goto BattleFrontier_ReceptionGate_EventScript_ChooseRuleToLearnAbout
# 433 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	end
# 434 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 435 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 436 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_EventScript_ChooseRuleToLearnAbout::
# 437 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 248 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 438 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	message BattleFrontier_ReceptionGate_Text_LearnAboutWhat
# 439 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 249 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 440 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	waitmessage
# 441 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 250 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 442 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	multichoice 15, 0, MULTI_FRONTIER_RULES, FALSE
# 443 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 251 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 444 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	switch VAR_RESULT
# 445 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 252 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 446 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	case 0, BattleFrontier_ReceptionGate_EventScript_ChooseRuleToLearnAbout_3
# 447 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 254 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 448 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	case 1, BattleFrontier_ReceptionGate_EventScript_ChooseRuleToLearnAbout_4
# 449 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 256 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 450 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	case 2, BattleFrontier_ReceptionGate_EventScript_ChooseRuleToLearnAbout_5
# 451 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 258 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 452 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	case 3, BattleFrontier_ReceptionGate_EventScript_ChooseRuleToLearnAbout_6
# 453 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 260 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 454 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	case 4, BattleFrontier_ReceptionGate_EventScript_ChooseRuleToLearnAbout_7
# 455 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 262 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 456 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	case 5, BattleFrontier_ReceptionGate_EventScript_ChooseRuleToLearnAbout_8
# 457 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 264 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 458 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_ReceptionGate_EventScript_ChooseRuleToLearnAbout_9
# 459 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_EventScript_ChooseRuleToLearnAbout_1:
# 460 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	end
# 461 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 462 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_EventScript_ChooseRuleToLearnAbout_3:
# 463 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 253 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 464 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	goto BattleFrontier_ReceptionGate_EventScript_LevelMode
# 465 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	goto BattleFrontier_ReceptionGate_EventScript_ChooseRuleToLearnAbout_1
# 466 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 467 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_EventScript_ChooseRuleToLearnAbout_4:
# 468 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 255 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 469 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	goto BattleFrontier_ReceptionGate_EventScript_Level50
# 470 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	goto BattleFrontier_ReceptionGate_EventScript_ChooseRuleToLearnAbout_1
# 471 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 472 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_EventScript_ChooseRuleToLearnAbout_5:
# 473 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 257 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 474 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	goto BattleFrontier_ReceptionGate_EventScript_OpenLevel
# 475 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	goto BattleFrontier_ReceptionGate_EventScript_ChooseRuleToLearnAbout_1
# 476 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 477 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_EventScript_ChooseRuleToLearnAbout_6:
# 478 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 259 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 479 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	goto BattleFrontier_ReceptionGate_EventScript_MonEntry
# 480 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	goto BattleFrontier_ReceptionGate_EventScript_ChooseRuleToLearnAbout_1
# 481 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 482 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_EventScript_ChooseRuleToLearnAbout_7:
# 483 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 261 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 484 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	goto BattleFrontier_ReceptionGate_EventScript_HoldItems
# 485 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	goto BattleFrontier_ReceptionGate_EventScript_ChooseRuleToLearnAbout_1
# 486 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 487 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_EventScript_ChooseRuleToLearnAbout_8:
# 488 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 263 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 489 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	goto BattleFrontier_ReceptionGate_EventScript_ExitRulesGuide
# 490 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	goto BattleFrontier_ReceptionGate_EventScript_ChooseRuleToLearnAbout_1
# 491 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 492 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_EventScript_ChooseRuleToLearnAbout_9:
# 493 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 265 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 494 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	goto BattleFrontier_ReceptionGate_EventScript_ExitRulesGuide
# 495 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	goto BattleFrontier_ReceptionGate_EventScript_ChooseRuleToLearnAbout_1
# 496 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 497 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 498 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_EventScript_LevelMode::
# 499 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 271 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 500 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_LevelModeInfo, MSGBOX_DEFAULT
# 501 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 272 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 502 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	goto BattleFrontier_ReceptionGate_EventScript_ChooseRuleToLearnAbout
# 503 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	end
# 504 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 505 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 506 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_EventScript_Level50::
# 507 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 277 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 508 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_Level50Info, MSGBOX_DEFAULT
# 509 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 278 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 510 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	goto BattleFrontier_ReceptionGate_EventScript_ChooseRuleToLearnAbout
# 511 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	end
# 512 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 513 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 514 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_EventScript_OpenLevel::
# 515 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 283 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 516 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_OpenLevelInfo, MSGBOX_DEFAULT
# 517 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 284 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 518 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	goto BattleFrontier_ReceptionGate_EventScript_ChooseRuleToLearnAbout
# 519 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	end
# 520 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 521 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 522 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_EventScript_MonEntry::
# 523 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 289 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 524 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_MonEntryInfo, MSGBOX_DEFAULT
# 525 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 290 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 526 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	goto BattleFrontier_ReceptionGate_EventScript_ChooseRuleToLearnAbout
# 527 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	end
# 528 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 529 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 530 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_EventScript_HoldItems::
# 531 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 295 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 532 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_HoldItemsInfo, MSGBOX_DEFAULT
# 533 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 296 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 534 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	goto BattleFrontier_ReceptionGate_EventScript_ChooseRuleToLearnAbout
# 535 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	end
# 536 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 537 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 538 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_EventScript_ExitRulesGuide::
# 539 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 301 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 540 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_EnjoyBattleFrontier, MSGBOX_DEFAULT
# 541 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 302 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 542 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	release
# 543 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	end
# 544 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 545 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 546 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_EventScript_FrontierPassGuide::
# 547 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 307 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 548 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	lock
# 549 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 308 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 550 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	faceplayer
# 551 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 309 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 552 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_YourGuideToFrontierPass, MSGBOX_DEFAULT
# 553 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 310 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 554 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	goto BattleFrontier_ReceptionGate_EventScript_ChooseFrontierPassInfoToLearnAbout
# 555 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	end
# 556 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 557 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 558 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_EventScript_ChooseFrontierPassInfoToLearnAbout::
# 559 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 315 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 560 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	message BattleFrontier_ReceptionGate_Text_LearnAboutWhich1
# 561 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 316 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 562 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	waitmessage
# 563 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 317 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 564 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	multichoice 16, 4, MULTI_FRONTIER_PASS_INFO, FALSE
# 565 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 318 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 566 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	switch VAR_RESULT
# 567 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 319 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 568 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	case 0, BattleFrontier_ReceptionGate_EventScript_ChooseFrontierPassInfoToLearnAbout_3
# 569 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 321 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 570 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	case 1, BattleFrontier_ReceptionGate_EventScript_ChooseFrontierPassInfoToLearnAbout_4
# 571 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 323 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 572 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	case 2, BattleFrontier_ReceptionGate_EventScript_ChooseFrontierPassInfoToLearnAbout_5
# 573 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 325 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 574 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	case 3, BattleFrontier_ReceptionGate_EventScript_ChooseFrontierPassInfoToLearnAbout_6
# 575 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 327 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 576 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_ReceptionGate_EventScript_ChooseFrontierPassInfoToLearnAbout_7
# 577 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_EventScript_ChooseFrontierPassInfoToLearnAbout_1:
# 578 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	end
# 579 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 580 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_EventScript_ChooseFrontierPassInfoToLearnAbout_3:
# 581 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 320 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 582 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	goto BattleFrontier_ReceptionGate_EventScript_Symbols
# 583 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	goto BattleFrontier_ReceptionGate_EventScript_ChooseFrontierPassInfoToLearnAbout_1
# 584 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 585 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_EventScript_ChooseFrontierPassInfoToLearnAbout_4:
# 586 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 322 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 587 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	goto BattleFrontier_ReceptionGate_EventScript_RecordBattle
# 588 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	goto BattleFrontier_ReceptionGate_EventScript_ChooseFrontierPassInfoToLearnAbout_1
# 589 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 590 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_EventScript_ChooseFrontierPassInfoToLearnAbout_5:
# 591 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 324 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 592 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	goto BattleFrontier_ReceptionGate_EventScript_BattlePoints
# 593 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	goto BattleFrontier_ReceptionGate_EventScript_ChooseFrontierPassInfoToLearnAbout_1
# 594 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 595 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_EventScript_ChooseFrontierPassInfoToLearnAbout_6:
# 596 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 326 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 597 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	goto BattleFrontier_ReceptionGate_EventScript_ExitFrontierPassGuide
# 598 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	goto BattleFrontier_ReceptionGate_EventScript_ChooseFrontierPassInfoToLearnAbout_1
# 599 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 600 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_EventScript_ChooseFrontierPassInfoToLearnAbout_7:
# 601 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 328 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 602 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	goto BattleFrontier_ReceptionGate_EventScript_ExitFrontierPassGuide
# 603 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	goto BattleFrontier_ReceptionGate_EventScript_ChooseFrontierPassInfoToLearnAbout_1
# 604 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 605 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 606 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_EventScript_Symbols::
# 607 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 334 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 608 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_SymbolsInfo, MSGBOX_DEFAULT
# 609 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 335 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 610 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	goto BattleFrontier_ReceptionGate_EventScript_ChooseFrontierPassInfoToLearnAbout
# 611 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	end
# 612 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 613 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 614 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_EventScript_RecordBattle::
# 615 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 340 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 616 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_RecordedBattleInfo, MSGBOX_DEFAULT
# 617 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 341 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 618 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	goto BattleFrontier_ReceptionGate_EventScript_ChooseFrontierPassInfoToLearnAbout
# 619 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	end
# 620 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 621 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 622 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_EventScript_BattlePoints::
# 623 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 346 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 624 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_BattlePointsInfo, MSGBOX_DEFAULT
# 625 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 347 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 626 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	goto BattleFrontier_ReceptionGate_EventScript_ChooseFrontierPassInfoToLearnAbout
# 627 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	end
# 628 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 629 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 630 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_EventScript_ExitFrontierPassGuide::
# 631 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 352 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 632 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_EnjoyBattleFrontier, MSGBOX_DEFAULT
# 633 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 353 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 634 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	release
# 635 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	end
# 636 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 637 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 638 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Text_FirstTimeHereThisWay::
# 639 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 357 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 640 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "Is it your first time here?\n"
# 641 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "Please step this way!$"
# 642 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 643 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Text_WelcomeToBattleFrontier::
# 644 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 362 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 645 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "The front lines of POKéMON battling!\n"
# 646 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "Welcome to the BATTLE FRONTIER!$"
# 647 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 648 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Text_IssueFrontierPass::
# 649 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 367 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 650 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "For a first-time visitor, we issue\n"
# 651 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "the FRONTIER PASS.\p"
# 652 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "It's for use at all the facilities\n"
# 653 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "in the BATTLE FRONTIER.\p"
# 654 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "Here you are!$"
# 655 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 656 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Text_ObtainedFrontierPass::
# 657 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 375 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 658 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "{PLAYER} obtained\n"
# 659 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "the FRONTIER PASS.$"
# 660 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 661 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Text_PlacedTrainerCardInFrontierPass::
# 662 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 380 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 663 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "{PLAYER} placed the TRAINER CARD\n"
# 664 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "in the FRONTIER PASS.$"
# 665 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 666 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Text_EnjoyBattleFrontier::
# 667 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 385 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 668 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "We hope you enjoy all that the BATTLE\n"
# 669 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "FRONTIER has to offer!$"
# 670 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 671 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Text_IfItIsntPlayerYouCame::
# 672 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 390 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 673 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "???: Well, if it isn't {PLAYER}{KUN}!\n"
# 674 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "You came out here!$"
# 675 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 676 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Text_OhMrScottGoodDay::
# 677 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 395 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 678 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "GUIDE: Oh! MR. SCOTT, sir!\n"
# 679 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "Good day to you, sir!$"
# 680 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 681 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Text_ScottGreatToSeeYouHere::
# 682 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 400 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 683 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "SCOTT: It's great to see you here,\n"
# 684 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "it really is!\p"
# 685 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "I hope you'll take your time and\n"
# 686 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "explore everywhere.\p"
# 687 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "Naturally, I hope you'll also experience\n"
# 688 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "the pure essence of battling.\p"
# 689 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "I also have my quarters here, so feel\n"
# 690 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "free to visit if you have time.$"
# 691 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 692 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Text_YourGuideToFacilities::
# 693 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 411 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 694 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "I'm your guide to the various facilities\n"
# 695 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "here in the BATTLE FRONTIER.$"
# 696 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 697 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Text_LearnAboutWhich2::
# 698 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 416 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 699 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "Which would you like to learn about?$"
# 700 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 701 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Text_BattleTowerInfo::
# 702 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 420 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 703 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "It is the gigantic tower considered\n"
# 704 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "to be the BATTLE FRONTIER's symbol.\p"
# 705 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "There are four kinds of BATTLE ROOMS\n"
# 706 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "in the tower for SINGLE, DOUBLE, MULTI,\l"
# 707 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "and LINK MULTI BATTLES.$"
# 708 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 709 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Text_BattleDomeInfo::
# 710 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 428 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 711 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "The BATTLE DOME is the large building\n"
# 712 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "shaped like a huge egg.\p"
# 713 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "Events named Battle Tourneys are held\n"
# 714 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "in this facility.\p"
# 715 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "The Battle Tourneys are offered in\n"
# 716 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "two courses--for SINGLE and DOUBLE\l"
# 717 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "BATTLES.$"
# 718 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 719 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Text_BattlePalaceInfo::
# 720 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 438 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 721 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "The BATTLE PALACE is the red building\n"
# 722 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "on the right of the BATTLE FRONTIER.\p"
# 723 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "There are two kinds of BATTLE HALLS\n"
# 724 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "for SINGLE and DOUBLE BATTLES.$"
# 725 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 726 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Text_BattleArenaInfo::
# 727 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 445 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 728 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "The BATTLE ARENA is the dojo-like\n"
# 729 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "building at the center-right of\l"
# 730 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "the BATTLE FRONTIER.\p"
# 731 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "An event called the Set KO Tourney\n"
# 732 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "takes place at the BATTLE ARENA.$"
# 733 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 734 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Text_BattleFactoryInfo::
# 735 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 453 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 736 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "The BATTLE FACTORY is the large\n"
# 737 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "building that is the closest to us.\p"
# 738 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "An event called the Battle Swap\n"
# 739 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "is conducted there.\p"
# 740 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "The Battle Swap event is offered in\n"
# 741 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "two courses for SINGLE and DOUBLE\l"
# 742 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "BATTLES.$"
# 743 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 744 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Text_BattlePikeInfo::
# 745 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 463 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 746 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "The BATTLE PIKE is the building shaped\n"
# 747 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "like a POKéMON at the center-left of\l"
# 748 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "the BATTLE FRONTIER.\p"
# 749 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "An event called the Battle Choice\n"
# 750 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "is conducted there.$"
# 751 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 752 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Text_BattlePyramidInfo::
# 753 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 471 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 754 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "The BATTLE PYRAMID is the enormous\n"
# 755 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "pyramid.\p"
# 756 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "An event called the Battle Quest\n"
# 757 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "is conducted there.$"
# 758 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 759 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Text_RankingHallInfo::
# 760 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 478 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 761 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "The RANKING HALL is located near\n"
# 762 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "the BATTLE TOWER.\p"
# 763 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "There, you may see the most fantastic\n"
# 764 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "records left by the TRAINERS that\l"
# 765 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "took on the many challenges of\l"
# 766 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "the BATTLE FRONTIER.$"
# 767 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 768 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Text_ExchangeCornerInfo::
# 769 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 487 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 770 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "The EXCHANGE SERVICE CORNER is near\n"
# 771 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "the BATTLE TOWER.\p"
# 772 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "The Battle Points you have earned in\n"
# 773 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "the BATTLE FRONTIER may be exchanged\l"
# 774 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "for fabulous prizes there.$"
# 775 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 776 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Text_YourGuideToRules::
# 777 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 495 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 778 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "I'm your guide to the basic rules that\n"
# 779 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "are common to all the challenges\l"
# 780 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "offered by the facilities in the BATTLE\l"
# 781 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "FRONTIER.$"
# 782 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 783 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Text_LearnAboutWhat::
# 784 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 502 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 785 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "What would you like to learn about?$"
# 786 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 787 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Text_LevelModeInfo::
# 788 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 506 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 789 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "All the challenges at the BATTLE\n"
# 790 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "FRONTIER's facilities come in\l"
# 791 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "two courses--Level 50 and Open Level.$"
# 792 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 793 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Text_Level50Info::
# 794 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 512 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 795 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "The Level 50 course is open to POKéMON\n"
# 796 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "up to and including Level 50.\p"
# 797 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "Please keep in mind, however, that\n"
# 798 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "no TRAINER you face will have any\l"
# 799 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "POKéMON below Level 50.\p"
# 800 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "This course is the entry level for\n"
# 801 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "battles at the BATTLE FRONTIER.\p"
# 802 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "To begin, we hope you will challenge\n"
# 803 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "this course.$"
# 804 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 805 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Text_OpenLevelInfo::
# 806 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 524 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 807 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "The Open Level course places no limit\n"
# 808 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "on the levels of POKéMON entering\l"
# 809 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "challenges.\p"
# 810 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "The levels of your opponents will\n"
# 811 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "be adjusted to match the levels of\l"
# 812 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "your POKéMON.\p"
# 813 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "However, no TRAINER you face will\n"
# 814 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "have any POKéMON below Level 60.$"
# 815 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 816 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Text_MonEntryInfo::
# 817 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 535 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 818 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "Virtually any kind of POKéMON may take\n"
# 819 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "on the challenges at all facilities.\p"
# 820 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "EGGS and certain kinds of POKéMON,\n"
# 821 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "however, are not permitted.\p"
# 822 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "The numbers of POKéMON required for\n"
# 823 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "challenges will depend on the facility.\p"
# 824 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "At all facilities, however, two or more\n"
# 825 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "of the same kind of POKéMON are not\l"
# 826 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "permitted.$"
# 827 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 828 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Text_HoldItemsInfo::
# 829 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 547 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 830 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "When entering a challenge at a BATTLE\n"
# 831 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "FRONTIER facility, POKéMON may not\l"
# 832 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "be holding the same kind of item.\p"
# 833 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "Please make sure that all POKéMON\n"
# 834 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "entering a challenge are holding\l"
# 835 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "different items.$"
# 836 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 837 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Text_YourGuideToFrontierPass::
# 838 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 556 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 839 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "I'm your guide to the FRONTIER PASS.$"
# 840 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 841 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Text_LearnAboutWhich1::
# 842 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 560 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 843 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "Which would you like to learn about?$"
# 844 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 845 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Text_SymbolsInfo::
# 846 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 564 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 847 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "There are seven facilities at\n"
# 848 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "the BATTLE FRONTIER.\p"
# 849 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "TRAINERS who gain recognition for\n"
# 850 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "their abilities may be rewarded with\l"
# 851 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "symbols from each of the facilities.\p"
# 852 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "To earn a symbol, TRAINERS may need\n"
# 853 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "to defeat other TRAINERS in a row,\l"
# 854 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "and may need to win events repeatedly.\p"
# 855 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "It's certainly not easy to win symbols.\n"
# 856 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "I wish you the best of luck!$"
# 857 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 858 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Text_RecordedBattleInfo::
# 859 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 577 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 860 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "It is possible to record one battle\n"
# 861 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "on your FRONTIER PASS.\p"
# 862 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "You may record a battle you had with\n"
# 863 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "a friend or friends.\p"
# 864 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "Or you may record a battle conducted\n"
# 865 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "at the BATTLE FRONTIER excluding\l"
# 866 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "matches at the BATTLE PIKE or\l"
# 867 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "the BATTLE PYRAMID.\p"
# 868 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "You may choose to record your match\n"
# 869 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "at the end of a battle.$"
# 870 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 871 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Text_BattlePointsInfo::
# 872 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 590 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
# 873 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "Battle Points are rewards given to\n"
# 874 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "TRAINERS who battled outstandingly\l"
# 875 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "at the BATTLE FRONTIER.\p"
# 876 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "You may trade in your Battle Points\n"
# 877 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "for prizes at the EXCHANGE SERVICE\l"
# 878 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "CORNER.$"
