# 1 "data/maps/SlateportCity_Harbor/scripts.pory"

# 2 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_MapScripts::
# 3 "data/maps/SlateportCity_Harbor/scripts.pory"
# 2 "data/maps/SlateportCity_Harbor/scripts.pory"
# 4 "data/maps/SlateportCity_Harbor/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SlateportCity_Harbor_OnTransition
# 5 "data/maps/SlateportCity_Harbor/scripts.pory"
	.byte 0
# 6 "data/maps/SlateportCity_Harbor/scripts.pory"

# 7 "data/maps/SlateportCity_Harbor/scripts.pory"

# 8 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_OnTransition::
# 9 "data/maps/SlateportCity_Harbor/scripts.pory"
# 6 "data/maps/SlateportCity_Harbor/scripts.pory"
# 10 "data/maps/SlateportCity_Harbor/scripts.pory"
	setescapewarp MAP_SLATEPORT_CITY, 28, 13
# 11 "data/maps/SlateportCity_Harbor/scripts.pory"
# 7 "data/maps/SlateportCity_Harbor/scripts.pory"
# 12 "data/maps/SlateportCity_Harbor/scripts.pory"
	setvar VAR_TEMP_1, 0
# 13 "data/maps/SlateportCity_Harbor/scripts.pory"
# 8 "data/maps/SlateportCity_Harbor/scripts.pory"
# 14 "data/maps/SlateportCity_Harbor/scripts.pory"
	compare VAR_SLATEPORT_HARBOR_STATE, 1
# 15 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto_if_eq SlateportCity_Harbor_OnTransition_2
# 16 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_OnTransition_1:
# 17 "data/maps/SlateportCity_Harbor/scripts.pory"
# 11 "data/maps/SlateportCity_Harbor/scripts.pory"
# 18 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, SlateportCity_Harbor_OnTransition_5
# 19 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_OnTransition_4:
# 20 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 21 "data/maps/SlateportCity_Harbor/scripts.pory"

# 22 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_OnTransition_2:
# 23 "data/maps/SlateportCity_Harbor/scripts.pory"
# 9 "data/maps/SlateportCity_Harbor/scripts.pory"
# 24 "data/maps/SlateportCity_Harbor/scripts.pory"
	call SlateportCity_Harbor_EventScript_ReadyAquaEscapeScene
# 25 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto SlateportCity_Harbor_OnTransition_1
# 26 "data/maps/SlateportCity_Harbor/scripts.pory"

# 27 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_OnTransition_5:
# 28 "data/maps/SlateportCity_Harbor/scripts.pory"
# 12 "data/maps/SlateportCity_Harbor/scripts.pory"
# 29 "data/maps/SlateportCity_Harbor/scripts.pory"
	call SlateportCity_Harbor_EventScript_ShowSSTidal
# 30 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto SlateportCity_Harbor_OnTransition_4
# 31 "data/maps/SlateportCity_Harbor/scripts.pory"

# 32 "data/maps/SlateportCity_Harbor/scripts.pory"

# 33 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_ShowSSTidal::
# 34 "data/maps/SlateportCity_Harbor/scripts.pory"
# 18 "data/maps/SlateportCity_Harbor/scripts.pory"
# 35 "data/maps/SlateportCity_Harbor/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_SS_TIDAL
# 36 "data/maps/SlateportCity_Harbor/scripts.pory"
	return
# 37 "data/maps/SlateportCity_Harbor/scripts.pory"

# 38 "data/maps/SlateportCity_Harbor/scripts.pory"

# 39 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_ReadyAquaEscapeScene::
# 40 "data/maps/SlateportCity_Harbor/scripts.pory"
# 23 "data/maps/SlateportCity_Harbor/scripts.pory"
# 41 "data/maps/SlateportCity_Harbor/scripts.pory"
	savebgm MUS_ENCOUNTER_AQUA
# 42 "data/maps/SlateportCity_Harbor/scripts.pory"
# 24 "data/maps/SlateportCity_Harbor/scripts.pory"
# 43 "data/maps/SlateportCity_Harbor/scripts.pory"
	setobjectxyperm LOCALID_SLATEPORT_HARBOR_CAPT_STERN, 12, 13
# 44 "data/maps/SlateportCity_Harbor/scripts.pory"
# 25 "data/maps/SlateportCity_Harbor/scripts.pory"
# 45 "data/maps/SlateportCity_Harbor/scripts.pory"
	setobjectmovementtype LOCALID_SLATEPORT_HARBOR_CAPT_STERN, MOVEMENT_TYPE_FACE_LEFT
# 46 "data/maps/SlateportCity_Harbor/scripts.pory"
# 26 "data/maps/SlateportCity_Harbor/scripts.pory"
# 47 "data/maps/SlateportCity_Harbor/scripts.pory"
	setflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_PATRONS
# 48 "data/maps/SlateportCity_Harbor/scripts.pory"
	return
# 49 "data/maps/SlateportCity_Harbor/scripts.pory"

# 50 "data/maps/SlateportCity_Harbor/scripts.pory"

# 51 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_AquaEscapeTrigger0::
# 52 "data/maps/SlateportCity_Harbor/scripts.pory"
# 31 "data/maps/SlateportCity_Harbor/scripts.pory"
# 53 "data/maps/SlateportCity_Harbor/scripts.pory"
	lockall
# 54 "data/maps/SlateportCity_Harbor/scripts.pory"
# 32 "data/maps/SlateportCity_Harbor/scripts.pory"
# 55 "data/maps/SlateportCity_Harbor/scripts.pory"
	setvar VAR_0x8008, 0
# 56 "data/maps/SlateportCity_Harbor/scripts.pory"
# 33 "data/maps/SlateportCity_Harbor/scripts.pory"
# 57 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto SlateportCity_Harbor_EventScript_AquaEscapeScene
# 58 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 59 "data/maps/SlateportCity_Harbor/scripts.pory"

# 60 "data/maps/SlateportCity_Harbor/scripts.pory"

# 61 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_AquaEscapeTrigger1::
# 62 "data/maps/SlateportCity_Harbor/scripts.pory"
# 38 "data/maps/SlateportCity_Harbor/scripts.pory"
# 63 "data/maps/SlateportCity_Harbor/scripts.pory"
	lockall
# 64 "data/maps/SlateportCity_Harbor/scripts.pory"
# 39 "data/maps/SlateportCity_Harbor/scripts.pory"
# 65 "data/maps/SlateportCity_Harbor/scripts.pory"
	setvar VAR_0x8008, 1
# 66 "data/maps/SlateportCity_Harbor/scripts.pory"
# 40 "data/maps/SlateportCity_Harbor/scripts.pory"
# 67 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto SlateportCity_Harbor_EventScript_AquaEscapeScene
# 68 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 69 "data/maps/SlateportCity_Harbor/scripts.pory"

# 70 "data/maps/SlateportCity_Harbor/scripts.pory"

# 71 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_AquaEscapeTrigger2::
# 72 "data/maps/SlateportCity_Harbor/scripts.pory"
# 45 "data/maps/SlateportCity_Harbor/scripts.pory"
# 73 "data/maps/SlateportCity_Harbor/scripts.pory"
	lockall
# 74 "data/maps/SlateportCity_Harbor/scripts.pory"
# 46 "data/maps/SlateportCity_Harbor/scripts.pory"
# 75 "data/maps/SlateportCity_Harbor/scripts.pory"
	setvar VAR_0x8008, 2
# 76 "data/maps/SlateportCity_Harbor/scripts.pory"
# 47 "data/maps/SlateportCity_Harbor/scripts.pory"
# 77 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto SlateportCity_Harbor_EventScript_AquaEscapeScene
# 78 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 79 "data/maps/SlateportCity_Harbor/scripts.pory"

# 80 "data/maps/SlateportCity_Harbor/scripts.pory"

# 81 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_AquaEscapeTrigger3::
# 82 "data/maps/SlateportCity_Harbor/scripts.pory"
# 52 "data/maps/SlateportCity_Harbor/scripts.pory"
# 83 "data/maps/SlateportCity_Harbor/scripts.pory"
	lockall
# 84 "data/maps/SlateportCity_Harbor/scripts.pory"
# 53 "data/maps/SlateportCity_Harbor/scripts.pory"
# 85 "data/maps/SlateportCity_Harbor/scripts.pory"
	setvar VAR_0x8008, 3
# 86 "data/maps/SlateportCity_Harbor/scripts.pory"
# 54 "data/maps/SlateportCity_Harbor/scripts.pory"
# 87 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement LOCALID_PLAYER, SlateportCity_Harbor_Movement_PlayerWalkUp
# 88 "data/maps/SlateportCity_Harbor/scripts.pory"
# 55 "data/maps/SlateportCity_Harbor/scripts.pory"
# 89 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitmovement 0
# 90 "data/maps/SlateportCity_Harbor/scripts.pory"
# 56 "data/maps/SlateportCity_Harbor/scripts.pory"
# 91 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto SlateportCity_Harbor_EventScript_AquaEscapeScene
# 92 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 93 "data/maps/SlateportCity_Harbor/scripts.pory"

# 94 "data/maps/SlateportCity_Harbor/scripts.pory"

# 95 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_AquaEscapeScene::
# 96 "data/maps/SlateportCity_Harbor/scripts.pory"
# 61 "data/maps/SlateportCity_Harbor/scripts.pory"
# 97 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement LOCALID_SLATEPORT_HARBOR_ARCHIE, Common_Movement_WalkInPlaceFasterDown
# 98 "data/maps/SlateportCity_Harbor/scripts.pory"
# 62 "data/maps/SlateportCity_Harbor/scripts.pory"
# 99 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitmovement 0
# 100 "data/maps/SlateportCity_Harbor/scripts.pory"
# 63 "data/maps/SlateportCity_Harbor/scripts.pory"
# 101 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement LOCALID_SLATEPORT_HARBOR_GRUNT, Common_Movement_WalkInPlaceFasterDown
# 102 "data/maps/SlateportCity_Harbor/scripts.pory"
# 64 "data/maps/SlateportCity_Harbor/scripts.pory"
# 103 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 104 "data/maps/SlateportCity_Harbor/scripts.pory"
# 65 "data/maps/SlateportCity_Harbor/scripts.pory"
# 105 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitmovement 0
# 106 "data/maps/SlateportCity_Harbor/scripts.pory"
# 66 "data/maps/SlateportCity_Harbor/scripts.pory"
# 107 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_ArchieYouAgainHideoutInLilycove, MSGBOX_DEFAULT
# 108 "data/maps/SlateportCity_Harbor/scripts.pory"
# 67 "data/maps/SlateportCity_Harbor/scripts.pory"
# 109 "data/maps/SlateportCity_Harbor/scripts.pory"
	closemessage
# 110 "data/maps/SlateportCity_Harbor/scripts.pory"
# 68 "data/maps/SlateportCity_Harbor/scripts.pory"
# 111 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement LOCALID_SLATEPORT_HARBOR_GRUNT, SlateportCity_Harbor_Movement_AquaBoardSub
# 112 "data/maps/SlateportCity_Harbor/scripts.pory"
# 69 "data/maps/SlateportCity_Harbor/scripts.pory"
# 113 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement LOCALID_SLATEPORT_HARBOR_ARCHIE, SlateportCity_Harbor_Movement_AquaBoardSub
# 114 "data/maps/SlateportCity_Harbor/scripts.pory"
# 70 "data/maps/SlateportCity_Harbor/scripts.pory"
# 115 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement LOCALID_SLATEPORT_HARBOR_SUBMARINE, SlateportCity_Harbor_Movement_SubmarineExit
# 116 "data/maps/SlateportCity_Harbor/scripts.pory"
# 71 "data/maps/SlateportCity_Harbor/scripts.pory"
# 117 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitmovement 0
# 118 "data/maps/SlateportCity_Harbor/scripts.pory"
# 72 "data/maps/SlateportCity_Harbor/scripts.pory"
# 119 "data/maps/SlateportCity_Harbor/scripts.pory"
	removeobject LOCALID_SLATEPORT_HARBOR_GRUNT
# 120 "data/maps/SlateportCity_Harbor/scripts.pory"
# 73 "data/maps/SlateportCity_Harbor/scripts.pory"
# 121 "data/maps/SlateportCity_Harbor/scripts.pory"
	removeobject LOCALID_SLATEPORT_HARBOR_ARCHIE
# 122 "data/maps/SlateportCity_Harbor/scripts.pory"
# 74 "data/maps/SlateportCity_Harbor/scripts.pory"
# 123 "data/maps/SlateportCity_Harbor/scripts.pory"
	removeobject LOCALID_SLATEPORT_HARBOR_SUBMARINE
# 124 "data/maps/SlateportCity_Harbor/scripts.pory"
# 75 "data/maps/SlateportCity_Harbor/scripts.pory"
# 125 "data/maps/SlateportCity_Harbor/scripts.pory"
	setvar VAR_SLATEPORT_HARBOR_STATE, 2
# 126 "data/maps/SlateportCity_Harbor/scripts.pory"
# 76 "data/maps/SlateportCity_Harbor/scripts.pory"
# 127 "data/maps/SlateportCity_Harbor/scripts.pory"
	setflag FLAG_MET_TEAM_AQUA_HARBOR
# 128 "data/maps/SlateportCity_Harbor/scripts.pory"
# 77 "data/maps/SlateportCity_Harbor/scripts.pory"
# 129 "data/maps/SlateportCity_Harbor/scripts.pory"
	setflag FLAG_HIDE_LILYCOVE_MOTEL_SCOTT
# 130 "data/maps/SlateportCity_Harbor/scripts.pory"
# 78 "data/maps/SlateportCity_Harbor/scripts.pory"
# 131 "data/maps/SlateportCity_Harbor/scripts.pory"
	compare VAR_0x8008, 0
# 132 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto_if_eq SlateportCity_Harbor_EventScript_AquaEscapeScene_2
# 133 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_AquaEscapeScene_1:
# 134 "data/maps/SlateportCity_Harbor/scripts.pory"
# 81 "data/maps/SlateportCity_Harbor/scripts.pory"
# 135 "data/maps/SlateportCity_Harbor/scripts.pory"
	compare VAR_0x8008, 1
# 136 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto_if_eq SlateportCity_Harbor_EventScript_AquaEscapeScene_5
# 137 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_AquaEscapeScene_4:
# 138 "data/maps/SlateportCity_Harbor/scripts.pory"
# 84 "data/maps/SlateportCity_Harbor/scripts.pory"
# 139 "data/maps/SlateportCity_Harbor/scripts.pory"
	compare VAR_0x8008, 2
# 140 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto_if_eq SlateportCity_Harbor_EventScript_AquaEscapeScene_8
# 141 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_AquaEscapeScene_7:
# 142 "data/maps/SlateportCity_Harbor/scripts.pory"
# 87 "data/maps/SlateportCity_Harbor/scripts.pory"
# 143 "data/maps/SlateportCity_Harbor/scripts.pory"
	compare VAR_0x8008, 3
# 144 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto_if_eq SlateportCity_Harbor_EventScript_AquaEscapeScene_11
# 145 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_AquaEscapeScene_10:
# 146 "data/maps/SlateportCity_Harbor/scripts.pory"
# 90 "data/maps/SlateportCity_Harbor/scripts.pory"
# 147 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_CaptSternWhyStealMySubmarine, MSGBOX_DEFAULT
# 148 "data/maps/SlateportCity_Harbor/scripts.pory"
# 91 "data/maps/SlateportCity_Harbor/scripts.pory"
# 149 "data/maps/SlateportCity_Harbor/scripts.pory"
	closemessage
# 150 "data/maps/SlateportCity_Harbor/scripts.pory"
# 92 "data/maps/SlateportCity_Harbor/scripts.pory"
# 151 "data/maps/SlateportCity_Harbor/scripts.pory"
	setflag FLAG_HIDE_AQUA_HIDEOUT_1F_GRUNT_1_BLOCKING_ENTRANCE
# 152 "data/maps/SlateportCity_Harbor/scripts.pory"
# 93 "data/maps/SlateportCity_Harbor/scripts.pory"
# 153 "data/maps/SlateportCity_Harbor/scripts.pory"
	setflag FLAG_HIDE_AQUA_HIDEOUT_1F_GRUNT_2_BLOCKING_ENTRANCE
# 154 "data/maps/SlateportCity_Harbor/scripts.pory"
# 94 "data/maps/SlateportCity_Harbor/scripts.pory"
# 155 "data/maps/SlateportCity_Harbor/scripts.pory"
	copyobjectxytoperm LOCALID_SLATEPORT_HARBOR_CAPT_STERN
# 156 "data/maps/SlateportCity_Harbor/scripts.pory"
# 95 "data/maps/SlateportCity_Harbor/scripts.pory"
# 157 "data/maps/SlateportCity_Harbor/scripts.pory"
	setobjectmovementtype LOCALID_SLATEPORT_HARBOR_CAPT_STERN, MOVEMENT_TYPE_FACE_RIGHT
# 158 "data/maps/SlateportCity_Harbor/scripts.pory"
# 96 "data/maps/SlateportCity_Harbor/scripts.pory"
# 159 "data/maps/SlateportCity_Harbor/scripts.pory"
	releaseall
# 160 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 161 "data/maps/SlateportCity_Harbor/scripts.pory"

# 162 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_AquaEscapeScene_2:
# 163 "data/maps/SlateportCity_Harbor/scripts.pory"
# 79 "data/maps/SlateportCity_Harbor/scripts.pory"
# 164 "data/maps/SlateportCity_Harbor/scripts.pory"
	call SlateportCity_Harbor_EventScript_SternApproachPlayer0
# 165 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto SlateportCity_Harbor_EventScript_AquaEscapeScene_1
# 166 "data/maps/SlateportCity_Harbor/scripts.pory"

# 167 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_AquaEscapeScene_5:
# 168 "data/maps/SlateportCity_Harbor/scripts.pory"
# 82 "data/maps/SlateportCity_Harbor/scripts.pory"
# 169 "data/maps/SlateportCity_Harbor/scripts.pory"
	call SlateportCity_Harbor_EventScript_SternApproachPlayer1
# 170 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto SlateportCity_Harbor_EventScript_AquaEscapeScene_4
# 171 "data/maps/SlateportCity_Harbor/scripts.pory"

# 172 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_AquaEscapeScene_8:
# 173 "data/maps/SlateportCity_Harbor/scripts.pory"
# 85 "data/maps/SlateportCity_Harbor/scripts.pory"
# 174 "data/maps/SlateportCity_Harbor/scripts.pory"
	call SlateportCity_Harbor_EventScript_SternApproachPlayer
# 175 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto SlateportCity_Harbor_EventScript_AquaEscapeScene_7
# 176 "data/maps/SlateportCity_Harbor/scripts.pory"

# 177 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_AquaEscapeScene_11:
# 178 "data/maps/SlateportCity_Harbor/scripts.pory"
# 88 "data/maps/SlateportCity_Harbor/scripts.pory"
# 179 "data/maps/SlateportCity_Harbor/scripts.pory"
	call SlateportCity_Harbor_EventScript_SternApproachPlayer
# 180 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto SlateportCity_Harbor_EventScript_AquaEscapeScene_10
# 181 "data/maps/SlateportCity_Harbor/scripts.pory"

# 182 "data/maps/SlateportCity_Harbor/scripts.pory"

# 183 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_SternApproachPlayer0::
# 184 "data/maps/SlateportCity_Harbor/scripts.pory"
# 101 "data/maps/SlateportCity_Harbor/scripts.pory"
# 185 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement LOCALID_SLATEPORT_HARBOR_CAPT_STERN, SlateportCity_Harbor_Movement_SternApproachPlayer0
# 186 "data/maps/SlateportCity_Harbor/scripts.pory"
# 102 "data/maps/SlateportCity_Harbor/scripts.pory"
# 187 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitmovement 0
# 188 "data/maps/SlateportCity_Harbor/scripts.pory"
# 103 "data/maps/SlateportCity_Harbor/scripts.pory"
# 189 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 190 "data/maps/SlateportCity_Harbor/scripts.pory"
# 104 "data/maps/SlateportCity_Harbor/scripts.pory"
# 191 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitmovement 0
# 192 "data/maps/SlateportCity_Harbor/scripts.pory"
	return
# 193 "data/maps/SlateportCity_Harbor/scripts.pory"

# 194 "data/maps/SlateportCity_Harbor/scripts.pory"

# 195 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_SternApproachPlayer1::
# 196 "data/maps/SlateportCity_Harbor/scripts.pory"
# 109 "data/maps/SlateportCity_Harbor/scripts.pory"
# 197 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement LOCALID_SLATEPORT_HARBOR_CAPT_STERN, SlateportCity_Harbor_Movement_SternApproachPlayer1
# 198 "data/maps/SlateportCity_Harbor/scripts.pory"
# 110 "data/maps/SlateportCity_Harbor/scripts.pory"
# 199 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitmovement 0
# 200 "data/maps/SlateportCity_Harbor/scripts.pory"
# 111 "data/maps/SlateportCity_Harbor/scripts.pory"
# 201 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 202 "data/maps/SlateportCity_Harbor/scripts.pory"
# 112 "data/maps/SlateportCity_Harbor/scripts.pory"
# 203 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitmovement 0
# 204 "data/maps/SlateportCity_Harbor/scripts.pory"
	return
# 205 "data/maps/SlateportCity_Harbor/scripts.pory"

# 206 "data/maps/SlateportCity_Harbor/scripts.pory"

# 207 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_SternApproachPlayer::
# 208 "data/maps/SlateportCity_Harbor/scripts.pory"
# 117 "data/maps/SlateportCity_Harbor/scripts.pory"
# 209 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement LOCALID_SLATEPORT_HARBOR_CAPT_STERN, SlateportCity_Harbor_Movement_SternApproachPlayer
# 210 "data/maps/SlateportCity_Harbor/scripts.pory"
# 118 "data/maps/SlateportCity_Harbor/scripts.pory"
# 211 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitmovement 0
# 212 "data/maps/SlateportCity_Harbor/scripts.pory"
# 119 "data/maps/SlateportCity_Harbor/scripts.pory"
# 213 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 214 "data/maps/SlateportCity_Harbor/scripts.pory"
# 120 "data/maps/SlateportCity_Harbor/scripts.pory"
# 215 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitmovement 0
# 216 "data/maps/SlateportCity_Harbor/scripts.pory"
	return
# 217 "data/maps/SlateportCity_Harbor/scripts.pory"

# 218 "data/maps/SlateportCity_Harbor/scripts.pory"

# 219 "data/maps/SlateportCity_Harbor/scripts.pory"
# 124 "data/maps/SlateportCity_Harbor/scripts.pory"
# 220 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Movement_AquaBoardSub:
# 221 "data/maps/SlateportCity_Harbor/scripts.pory"
# 125 "data/maps/SlateportCity_Harbor/scripts.pory"
# 222 "data/maps/SlateportCity_Harbor/scripts.pory"
	delay_16
# 223 "data/maps/SlateportCity_Harbor/scripts.pory"
# 126 "data/maps/SlateportCity_Harbor/scripts.pory"
# 224 "data/maps/SlateportCity_Harbor/scripts.pory"
	delay_16
# 225 "data/maps/SlateportCity_Harbor/scripts.pory"
# 127 "data/maps/SlateportCity_Harbor/scripts.pory"
# 226 "data/maps/SlateportCity_Harbor/scripts.pory"
	jump_up
# 227 "data/maps/SlateportCity_Harbor/scripts.pory"
# 128 "data/maps/SlateportCity_Harbor/scripts.pory"
# 228 "data/maps/SlateportCity_Harbor/scripts.pory"
	set_invisible
# 229 "data/maps/SlateportCity_Harbor/scripts.pory"
# 129 "data/maps/SlateportCity_Harbor/scripts.pory"
# 230 "data/maps/SlateportCity_Harbor/scripts.pory"
	step_end
# 231 "data/maps/SlateportCity_Harbor/scripts.pory"

# 232 "data/maps/SlateportCity_Harbor/scripts.pory"
# 132 "data/maps/SlateportCity_Harbor/scripts.pory"
# 233 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Movement_ArchieBoardSub:
# 234 "data/maps/SlateportCity_Harbor/scripts.pory"
# 133 "data/maps/SlateportCity_Harbor/scripts.pory"
# 235 "data/maps/SlateportCity_Harbor/scripts.pory"
	delay_16
# 236 "data/maps/SlateportCity_Harbor/scripts.pory"
# 134 "data/maps/SlateportCity_Harbor/scripts.pory"
# 237 "data/maps/SlateportCity_Harbor/scripts.pory"
	delay_16
# 238 "data/maps/SlateportCity_Harbor/scripts.pory"
# 135 "data/maps/SlateportCity_Harbor/scripts.pory"
# 239 "data/maps/SlateportCity_Harbor/scripts.pory"
	jump_up
# 240 "data/maps/SlateportCity_Harbor/scripts.pory"
# 136 "data/maps/SlateportCity_Harbor/scripts.pory"
# 241 "data/maps/SlateportCity_Harbor/scripts.pory"
	set_invisible
# 242 "data/maps/SlateportCity_Harbor/scripts.pory"
# 137 "data/maps/SlateportCity_Harbor/scripts.pory"
# 243 "data/maps/SlateportCity_Harbor/scripts.pory"
	step_end
# 244 "data/maps/SlateportCity_Harbor/scripts.pory"

# 245 "data/maps/SlateportCity_Harbor/scripts.pory"
# 140 "data/maps/SlateportCity_Harbor/scripts.pory"
# 246 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Movement_SubmarineExit:
# 247 "data/maps/SlateportCity_Harbor/scripts.pory"
# 141 "data/maps/SlateportCity_Harbor/scripts.pory"
# 248 "data/maps/SlateportCity_Harbor/scripts.pory"
	delay_16
# 249 "data/maps/SlateportCity_Harbor/scripts.pory"
# 142 "data/maps/SlateportCity_Harbor/scripts.pory"
# 250 "data/maps/SlateportCity_Harbor/scripts.pory"
	delay_16
# 251 "data/maps/SlateportCity_Harbor/scripts.pory"
# 143 "data/maps/SlateportCity_Harbor/scripts.pory"
# 252 "data/maps/SlateportCity_Harbor/scripts.pory"
	delay_16
# 253 "data/maps/SlateportCity_Harbor/scripts.pory"
# 144 "data/maps/SlateportCity_Harbor/scripts.pory"
# 254 "data/maps/SlateportCity_Harbor/scripts.pory"
	delay_16
# 255 "data/maps/SlateportCity_Harbor/scripts.pory"
# 145 "data/maps/SlateportCity_Harbor/scripts.pory"
# 256 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_right
# 257 "data/maps/SlateportCity_Harbor/scripts.pory"
# 146 "data/maps/SlateportCity_Harbor/scripts.pory"
# 258 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_right
# 259 "data/maps/SlateportCity_Harbor/scripts.pory"
# 147 "data/maps/SlateportCity_Harbor/scripts.pory"
# 260 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_right
# 261 "data/maps/SlateportCity_Harbor/scripts.pory"
# 148 "data/maps/SlateportCity_Harbor/scripts.pory"
# 262 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_fast_right
# 263 "data/maps/SlateportCity_Harbor/scripts.pory"
# 149 "data/maps/SlateportCity_Harbor/scripts.pory"
# 264 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_fast_right
# 265 "data/maps/SlateportCity_Harbor/scripts.pory"
# 150 "data/maps/SlateportCity_Harbor/scripts.pory"
# 266 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_fast_right
# 267 "data/maps/SlateportCity_Harbor/scripts.pory"
# 151 "data/maps/SlateportCity_Harbor/scripts.pory"
# 268 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_fast_right
# 269 "data/maps/SlateportCity_Harbor/scripts.pory"
# 152 "data/maps/SlateportCity_Harbor/scripts.pory"
# 270 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_fast_right
# 271 "data/maps/SlateportCity_Harbor/scripts.pory"
# 153 "data/maps/SlateportCity_Harbor/scripts.pory"
# 272 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_fast_right
# 273 "data/maps/SlateportCity_Harbor/scripts.pory"
# 154 "data/maps/SlateportCity_Harbor/scripts.pory"
# 274 "data/maps/SlateportCity_Harbor/scripts.pory"
	step_end
# 275 "data/maps/SlateportCity_Harbor/scripts.pory"

# 276 "data/maps/SlateportCity_Harbor/scripts.pory"
# 157 "data/maps/SlateportCity_Harbor/scripts.pory"
# 277 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Movement_SternApproachPlayer0:
# 278 "data/maps/SlateportCity_Harbor/scripts.pory"
# 158 "data/maps/SlateportCity_Harbor/scripts.pory"
# 279 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_left
# 280 "data/maps/SlateportCity_Harbor/scripts.pory"
# 159 "data/maps/SlateportCity_Harbor/scripts.pory"
# 281 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_left
# 282 "data/maps/SlateportCity_Harbor/scripts.pory"
# 160 "data/maps/SlateportCity_Harbor/scripts.pory"
# 283 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_left
# 284 "data/maps/SlateportCity_Harbor/scripts.pory"
# 161 "data/maps/SlateportCity_Harbor/scripts.pory"
# 285 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_left
# 286 "data/maps/SlateportCity_Harbor/scripts.pory"
# 162 "data/maps/SlateportCity_Harbor/scripts.pory"
# 287 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_up
# 288 "data/maps/SlateportCity_Harbor/scripts.pory"
# 163 "data/maps/SlateportCity_Harbor/scripts.pory"
# 289 "data/maps/SlateportCity_Harbor/scripts.pory"
	step_end
# 290 "data/maps/SlateportCity_Harbor/scripts.pory"

# 291 "data/maps/SlateportCity_Harbor/scripts.pory"
# 166 "data/maps/SlateportCity_Harbor/scripts.pory"
# 292 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Movement_SternApproachPlayer1:
# 293 "data/maps/SlateportCity_Harbor/scripts.pory"
# 167 "data/maps/SlateportCity_Harbor/scripts.pory"
# 294 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_left
# 295 "data/maps/SlateportCity_Harbor/scripts.pory"
# 168 "data/maps/SlateportCity_Harbor/scripts.pory"
# 296 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_left
# 297 "data/maps/SlateportCity_Harbor/scripts.pory"
# 169 "data/maps/SlateportCity_Harbor/scripts.pory"
# 298 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_up
# 299 "data/maps/SlateportCity_Harbor/scripts.pory"
# 170 "data/maps/SlateportCity_Harbor/scripts.pory"
# 300 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_left
# 301 "data/maps/SlateportCity_Harbor/scripts.pory"
# 171 "data/maps/SlateportCity_Harbor/scripts.pory"
# 302 "data/maps/SlateportCity_Harbor/scripts.pory"
	step_end
# 303 "data/maps/SlateportCity_Harbor/scripts.pory"

# 304 "data/maps/SlateportCity_Harbor/scripts.pory"
# 174 "data/maps/SlateportCity_Harbor/scripts.pory"
# 305 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Movement_SternApproachPlayer:
# 306 "data/maps/SlateportCity_Harbor/scripts.pory"
# 175 "data/maps/SlateportCity_Harbor/scripts.pory"
# 307 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_left
# 308 "data/maps/SlateportCity_Harbor/scripts.pory"
# 176 "data/maps/SlateportCity_Harbor/scripts.pory"
# 309 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_left
# 310 "data/maps/SlateportCity_Harbor/scripts.pory"
# 177 "data/maps/SlateportCity_Harbor/scripts.pory"
# 311 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_left
# 312 "data/maps/SlateportCity_Harbor/scripts.pory"
# 178 "data/maps/SlateportCity_Harbor/scripts.pory"
# 313 "data/maps/SlateportCity_Harbor/scripts.pory"
	step_end
# 314 "data/maps/SlateportCity_Harbor/scripts.pory"

# 315 "data/maps/SlateportCity_Harbor/scripts.pory"
# 181 "data/maps/SlateportCity_Harbor/scripts.pory"
# 316 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Movement_PlayerWalkUp:
# 317 "data/maps/SlateportCity_Harbor/scripts.pory"
# 182 "data/maps/SlateportCity_Harbor/scripts.pory"
# 318 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_up
# 319 "data/maps/SlateportCity_Harbor/scripts.pory"
# 183 "data/maps/SlateportCity_Harbor/scripts.pory"
# 320 "data/maps/SlateportCity_Harbor/scripts.pory"
	step_end
# 321 "data/maps/SlateportCity_Harbor/scripts.pory"

# 322 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_FerryAttendant::
# 323 "data/maps/SlateportCity_Harbor/scripts.pory"
# 187 "data/maps/SlateportCity_Harbor/scripts.pory"
# 324 "data/maps/SlateportCity_Harbor/scripts.pory"
	lock
# 325 "data/maps/SlateportCity_Harbor/scripts.pory"
# 188 "data/maps/SlateportCity_Harbor/scripts.pory"
# 326 "data/maps/SlateportCity_Harbor/scripts.pory"
	faceplayer
# 327 "data/maps/SlateportCity_Harbor/scripts.pory"
# 189 "data/maps/SlateportCity_Harbor/scripts.pory"
# 328 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, SlateportCity_Harbor_EventScript_FerryAttendant_2
# 329 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_FerryAttendant_1:
# 330 "data/maps/SlateportCity_Harbor/scripts.pory"
# 192 "data/maps/SlateportCity_Harbor/scripts.pory"
# 331 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_FerryServiceUnavailable, MSGBOX_DEFAULT
# 332 "data/maps/SlateportCity_Harbor/scripts.pory"
# 193 "data/maps/SlateportCity_Harbor/scripts.pory"
# 333 "data/maps/SlateportCity_Harbor/scripts.pory"
	release
# 334 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 335 "data/maps/SlateportCity_Harbor/scripts.pory"

# 336 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_FerryAttendant_2:
# 337 "data/maps/SlateportCity_Harbor/scripts.pory"
# 190 "data/maps/SlateportCity_Harbor/scripts.pory"
# 338 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto SlateportCity_Harbor_EventScript_AskForTicket
# 339 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto SlateportCity_Harbor_EventScript_FerryAttendant_1
# 340 "data/maps/SlateportCity_Harbor/scripts.pory"

# 341 "data/maps/SlateportCity_Harbor/scripts.pory"

# 342 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_AskForTicket::
# 343 "data/maps/SlateportCity_Harbor/scripts.pory"
# 198 "data/maps/SlateportCity_Harbor/scripts.pory"
# 344 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_MayISeeYourTicket, MSGBOX_DEFAULT
# 345 "data/maps/SlateportCity_Harbor/scripts.pory"
# 199 "data/maps/SlateportCity_Harbor/scripts.pory"
# 346 "data/maps/SlateportCity_Harbor/scripts.pory"
	message SlateportCity_Harbor_Text_FlashedTicketWhereTo
# 347 "data/maps/SlateportCity_Harbor/scripts.pory"
# 200 "data/maps/SlateportCity_Harbor/scripts.pory"
# 348 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitmessage
# 349 "data/maps/SlateportCity_Harbor/scripts.pory"
# 201 "data/maps/SlateportCity_Harbor/scripts.pory"
# 350 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto SlateportCity_Harbor_EventScript_ChooseDestination
# 351 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 352 "data/maps/SlateportCity_Harbor/scripts.pory"

# 353 "data/maps/SlateportCity_Harbor/scripts.pory"

# 354 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_ChooseDestination::
# 355 "data/maps/SlateportCity_Harbor/scripts.pory"
# 206 "data/maps/SlateportCity_Harbor/scripts.pory"
# 356 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto_if_set FLAG_MET_SCOTT_ON_SS_TIDAL, SlateportCity_Harbor_EventScript_ChooseDestination_2
# 357 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_ChooseDestination_1:
# 358 "data/maps/SlateportCity_Harbor/scripts.pory"
# 209 "data/maps/SlateportCity_Harbor/scripts.pory"
# 359 "data/maps/SlateportCity_Harbor/scripts.pory"
	multichoicedefault 18, 8, MULTI_SSTIDAL_SLATEPORT_NO_BF, 2, FALSE
# 360 "data/maps/SlateportCity_Harbor/scripts.pory"
# 210 "data/maps/SlateportCity_Harbor/scripts.pory"
# 361 "data/maps/SlateportCity_Harbor/scripts.pory"
	switch VAR_RESULT
# 362 "data/maps/SlateportCity_Harbor/scripts.pory"
# 211 "data/maps/SlateportCity_Harbor/scripts.pory"
# 363 "data/maps/SlateportCity_Harbor/scripts.pory"
	case 0, SlateportCity_Harbor_EventScript_ChooseDestination_6
# 364 "data/maps/SlateportCity_Harbor/scripts.pory"
# 213 "data/maps/SlateportCity_Harbor/scripts.pory"
# 365 "data/maps/SlateportCity_Harbor/scripts.pory"
	case 1, SlateportCity_Harbor_EventScript_ChooseDestination_7
# 366 "data/maps/SlateportCity_Harbor/scripts.pory"
# 215 "data/maps/SlateportCity_Harbor/scripts.pory"
# 367 "data/maps/SlateportCity_Harbor/scripts.pory"
	case MULTI_B_PRESSED, SlateportCity_Harbor_EventScript_ChooseDestination_8
# 368 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_ChooseDestination_4:
# 369 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 370 "data/maps/SlateportCity_Harbor/scripts.pory"

# 371 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_ChooseDestination_2:
# 372 "data/maps/SlateportCity_Harbor/scripts.pory"
# 207 "data/maps/SlateportCity_Harbor/scripts.pory"
# 373 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto SlateportCity_Harbor_EventScript_ChooseDestinationWithBattleFrontier
# 374 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto SlateportCity_Harbor_EventScript_ChooseDestination_1
# 375 "data/maps/SlateportCity_Harbor/scripts.pory"

# 376 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_ChooseDestination_6:
# 377 "data/maps/SlateportCity_Harbor/scripts.pory"
# 212 "data/maps/SlateportCity_Harbor/scripts.pory"
# 378 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto SlateportCity_Harbor_EventScript_Lilycove
# 379 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto SlateportCity_Harbor_EventScript_ChooseDestination_4
# 380 "data/maps/SlateportCity_Harbor/scripts.pory"

# 381 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_ChooseDestination_7:
# 382 "data/maps/SlateportCity_Harbor/scripts.pory"
# 214 "data/maps/SlateportCity_Harbor/scripts.pory"
# 383 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto SlateportCity_Harbor_EventScript_CancelDestinationSelect
# 384 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto SlateportCity_Harbor_EventScript_ChooseDestination_4
# 385 "data/maps/SlateportCity_Harbor/scripts.pory"

# 386 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_ChooseDestination_8:
# 387 "data/maps/SlateportCity_Harbor/scripts.pory"
# 216 "data/maps/SlateportCity_Harbor/scripts.pory"
# 388 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto SlateportCity_Harbor_EventScript_CancelDestinationSelect
# 389 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto SlateportCity_Harbor_EventScript_ChooseDestination_4
# 390 "data/maps/SlateportCity_Harbor/scripts.pory"

# 391 "data/maps/SlateportCity_Harbor/scripts.pory"

# 392 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_ChooseDestinationWithBattleFrontier::
# 393 "data/maps/SlateportCity_Harbor/scripts.pory"
# 222 "data/maps/SlateportCity_Harbor/scripts.pory"
# 394 "data/maps/SlateportCity_Harbor/scripts.pory"
	multichoicedefault 17, 6, MULTI_SSTIDAL_SLATEPORT_WITH_BF, 2, FALSE
# 395 "data/maps/SlateportCity_Harbor/scripts.pory"
# 223 "data/maps/SlateportCity_Harbor/scripts.pory"
# 396 "data/maps/SlateportCity_Harbor/scripts.pory"
	switch VAR_RESULT
# 397 "data/maps/SlateportCity_Harbor/scripts.pory"
# 224 "data/maps/SlateportCity_Harbor/scripts.pory"
# 398 "data/maps/SlateportCity_Harbor/scripts.pory"
	case 0, SlateportCity_Harbor_EventScript_ChooseDestinationWithBattleFrontier_3
# 399 "data/maps/SlateportCity_Harbor/scripts.pory"
# 226 "data/maps/SlateportCity_Harbor/scripts.pory"
# 400 "data/maps/SlateportCity_Harbor/scripts.pory"
	case 1, SlateportCity_Harbor_EventScript_ChooseDestinationWithBattleFrontier_4
# 401 "data/maps/SlateportCity_Harbor/scripts.pory"
# 228 "data/maps/SlateportCity_Harbor/scripts.pory"
# 402 "data/maps/SlateportCity_Harbor/scripts.pory"
	case 2, SlateportCity_Harbor_EventScript_ChooseDestinationWithBattleFrontier_5
# 403 "data/maps/SlateportCity_Harbor/scripts.pory"
# 230 "data/maps/SlateportCity_Harbor/scripts.pory"
# 404 "data/maps/SlateportCity_Harbor/scripts.pory"
	case MULTI_B_PRESSED, SlateportCity_Harbor_EventScript_ChooseDestinationWithBattleFrontier_6
# 405 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_ChooseDestinationWithBattleFrontier_1:
# 406 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 407 "data/maps/SlateportCity_Harbor/scripts.pory"

# 408 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_ChooseDestinationWithBattleFrontier_3:
# 409 "data/maps/SlateportCity_Harbor/scripts.pory"
# 225 "data/maps/SlateportCity_Harbor/scripts.pory"
# 410 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto SlateportCity_Harbor_EventScript_Lilycove
# 411 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto SlateportCity_Harbor_EventScript_ChooseDestinationWithBattleFrontier_1
# 412 "data/maps/SlateportCity_Harbor/scripts.pory"

# 413 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_ChooseDestinationWithBattleFrontier_4:
# 414 "data/maps/SlateportCity_Harbor/scripts.pory"
# 227 "data/maps/SlateportCity_Harbor/scripts.pory"
# 415 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto SlateportCity_Harbor_EventScript_BattleFrontier
# 416 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto SlateportCity_Harbor_EventScript_ChooseDestinationWithBattleFrontier_1
# 417 "data/maps/SlateportCity_Harbor/scripts.pory"

# 418 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_ChooseDestinationWithBattleFrontier_5:
# 419 "data/maps/SlateportCity_Harbor/scripts.pory"
# 229 "data/maps/SlateportCity_Harbor/scripts.pory"
# 420 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto SlateportCity_Harbor_EventScript_CancelDestinationSelect
# 421 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto SlateportCity_Harbor_EventScript_ChooseDestinationWithBattleFrontier_1
# 422 "data/maps/SlateportCity_Harbor/scripts.pory"

# 423 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_ChooseDestinationWithBattleFrontier_6:
# 424 "data/maps/SlateportCity_Harbor/scripts.pory"
# 231 "data/maps/SlateportCity_Harbor/scripts.pory"
# 425 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto SlateportCity_Harbor_EventScript_CancelDestinationSelect
# 426 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto SlateportCity_Harbor_EventScript_ChooseDestinationWithBattleFrontier_1
# 427 "data/maps/SlateportCity_Harbor/scripts.pory"

# 428 "data/maps/SlateportCity_Harbor/scripts.pory"

# 429 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_NoTicket::
# 430 "data/maps/SlateportCity_Harbor/scripts.pory"
# 237 "data/maps/SlateportCity_Harbor/scripts.pory"
# 431 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_YouMustHaveTicket, MSGBOX_DEFAULT
# 432 "data/maps/SlateportCity_Harbor/scripts.pory"
# 238 "data/maps/SlateportCity_Harbor/scripts.pory"
# 433 "data/maps/SlateportCity_Harbor/scripts.pory"
	release
# 434 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 435 "data/maps/SlateportCity_Harbor/scripts.pory"

# 436 "data/maps/SlateportCity_Harbor/scripts.pory"

# 437 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_Lilycove::
# 438 "data/maps/SlateportCity_Harbor/scripts.pory"
# 243 "data/maps/SlateportCity_Harbor/scripts.pory"
# 439 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_LilycoveItIs, MSGBOX_YESNO
# 440 "data/maps/SlateportCity_Harbor/scripts.pory"
# 244 "data/maps/SlateportCity_Harbor/scripts.pory"
# 441 "data/maps/SlateportCity_Harbor/scripts.pory"
	compare VAR_RESULT, NO
# 442 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto_if_eq SlateportCity_Harbor_EventScript_Lilycove_2
# 443 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_Lilycove_1:
# 444 "data/maps/SlateportCity_Harbor/scripts.pory"
# 247 "data/maps/SlateportCity_Harbor/scripts.pory"
# 445 "data/maps/SlateportCity_Harbor/scripts.pory"
	setvar VAR_SS_TIDAL_STATE, SS_TIDAL_BOARD_SLATEPORT
# 446 "data/maps/SlateportCity_Harbor/scripts.pory"
# 248 "data/maps/SlateportCity_Harbor/scripts.pory"
# 447 "data/maps/SlateportCity_Harbor/scripts.pory"
	call SlateportCity_Harbor_EventScript_BoardFerry
# 448 "data/maps/SlateportCity_Harbor/scripts.pory"
# 249 "data/maps/SlateportCity_Harbor/scripts.pory"
# 449 "data/maps/SlateportCity_Harbor/scripts.pory"
	warp MAP_SS_TIDAL_CORRIDOR, 1, 10
# 450 "data/maps/SlateportCity_Harbor/scripts.pory"
# 250 "data/maps/SlateportCity_Harbor/scripts.pory"
# 451 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitstate
# 452 "data/maps/SlateportCity_Harbor/scripts.pory"
# 251 "data/maps/SlateportCity_Harbor/scripts.pory"
# 453 "data/maps/SlateportCity_Harbor/scripts.pory"
	release
# 454 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 455 "data/maps/SlateportCity_Harbor/scripts.pory"

# 456 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_Lilycove_2:
# 457 "data/maps/SlateportCity_Harbor/scripts.pory"
# 245 "data/maps/SlateportCity_Harbor/scripts.pory"
# 458 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto SlateportCity_Harbor_EventScript_ChooseNewDestination
# 459 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto SlateportCity_Harbor_EventScript_Lilycove_1
# 460 "data/maps/SlateportCity_Harbor/scripts.pory"

# 461 "data/maps/SlateportCity_Harbor/scripts.pory"

# 462 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_BattleFrontier::
# 463 "data/maps/SlateportCity_Harbor/scripts.pory"
# 256 "data/maps/SlateportCity_Harbor/scripts.pory"
# 464 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_BattleFrontierItIs, MSGBOX_YESNO
# 465 "data/maps/SlateportCity_Harbor/scripts.pory"
# 257 "data/maps/SlateportCity_Harbor/scripts.pory"
# 466 "data/maps/SlateportCity_Harbor/scripts.pory"
	compare VAR_RESULT, NO
# 467 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto_if_eq SlateportCity_Harbor_EventScript_BattleFrontier_2
# 468 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_BattleFrontier_1:
# 469 "data/maps/SlateportCity_Harbor/scripts.pory"
# 260 "data/maps/SlateportCity_Harbor/scripts.pory"
# 470 "data/maps/SlateportCity_Harbor/scripts.pory"
	call SlateportCity_Harbor_EventScript_BoardFerry
# 471 "data/maps/SlateportCity_Harbor/scripts.pory"
# 261 "data/maps/SlateportCity_Harbor/scripts.pory"
# 472 "data/maps/SlateportCity_Harbor/scripts.pory"
	warp MAP_BATTLE_FRONTIER_OUTSIDE_WEST, 19, 67
# 473 "data/maps/SlateportCity_Harbor/scripts.pory"
# 262 "data/maps/SlateportCity_Harbor/scripts.pory"
# 474 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitstate
# 475 "data/maps/SlateportCity_Harbor/scripts.pory"
# 263 "data/maps/SlateportCity_Harbor/scripts.pory"
# 476 "data/maps/SlateportCity_Harbor/scripts.pory"
	release
# 477 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 478 "data/maps/SlateportCity_Harbor/scripts.pory"

# 479 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_BattleFrontier_2:
# 480 "data/maps/SlateportCity_Harbor/scripts.pory"
# 258 "data/maps/SlateportCity_Harbor/scripts.pory"
# 481 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto SlateportCity_Harbor_EventScript_ChooseNewDestination
# 482 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto SlateportCity_Harbor_EventScript_BattleFrontier_1
# 483 "data/maps/SlateportCity_Harbor/scripts.pory"

# 484 "data/maps/SlateportCity_Harbor/scripts.pory"

# 485 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_ChooseNewDestination::
# 486 "data/maps/SlateportCity_Harbor/scripts.pory"
# 268 "data/maps/SlateportCity_Harbor/scripts.pory"
# 487 "data/maps/SlateportCity_Harbor/scripts.pory"
	message SlateportCity_Harbor_Text_WhereWouldYouLikeToGo
# 488 "data/maps/SlateportCity_Harbor/scripts.pory"
# 269 "data/maps/SlateportCity_Harbor/scripts.pory"
# 489 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitmessage
# 490 "data/maps/SlateportCity_Harbor/scripts.pory"
# 270 "data/maps/SlateportCity_Harbor/scripts.pory"
# 491 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto SlateportCity_Harbor_EventScript_ChooseDestination
# 492 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 493 "data/maps/SlateportCity_Harbor/scripts.pory"

# 494 "data/maps/SlateportCity_Harbor/scripts.pory"

# 495 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_BoardFerry::
# 496 "data/maps/SlateportCity_Harbor/scripts.pory"
# 275 "data/maps/SlateportCity_Harbor/scripts.pory"
# 497 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_PleaseBoardFerry, MSGBOX_DEFAULT
# 498 "data/maps/SlateportCity_Harbor/scripts.pory"
# 276 "data/maps/SlateportCity_Harbor/scripts.pory"
# 499 "data/maps/SlateportCity_Harbor/scripts.pory"
	closemessage
# 500 "data/maps/SlateportCity_Harbor/scripts.pory"
# 277 "data/maps/SlateportCity_Harbor/scripts.pory"
# 501 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceFasterUp
# 502 "data/maps/SlateportCity_Harbor/scripts.pory"
# 278 "data/maps/SlateportCity_Harbor/scripts.pory"
# 503 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitmovement 0
# 504 "data/maps/SlateportCity_Harbor/scripts.pory"
# 279 "data/maps/SlateportCity_Harbor/scripts.pory"
# 505 "data/maps/SlateportCity_Harbor/scripts.pory"
	delay 30
# 506 "data/maps/SlateportCity_Harbor/scripts.pory"
# 280 "data/maps/SlateportCity_Harbor/scripts.pory"
# 507 "data/maps/SlateportCity_Harbor/scripts.pory"
	hideobjectat VAR_LAST_TALKED, MAP_SLATEPORT_CITY_HARBOR
# 508 "data/maps/SlateportCity_Harbor/scripts.pory"
# 281 "data/maps/SlateportCity_Harbor/scripts.pory"
# 509 "data/maps/SlateportCity_Harbor/scripts.pory"
	compare VAR_FACING, DIR_NORTH
# 510 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto_if_eq SlateportCity_Harbor_EventScript_BoardFerry_2
# 511 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_BoardFerry_1:
# 512 "data/maps/SlateportCity_Harbor/scripts.pory"
# 284 "data/maps/SlateportCity_Harbor/scripts.pory"
# 513 "data/maps/SlateportCity_Harbor/scripts.pory"
	compare VAR_FACING, DIR_EAST
# 514 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto_if_eq SlateportCity_Harbor_EventScript_BoardFerry_5
# 515 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_BoardFerry_4:
# 516 "data/maps/SlateportCity_Harbor/scripts.pory"
# 287 "data/maps/SlateportCity_Harbor/scripts.pory"
# 517 "data/maps/SlateportCity_Harbor/scripts.pory"
	delay 30
# 518 "data/maps/SlateportCity_Harbor/scripts.pory"
# 288 "data/maps/SlateportCity_Harbor/scripts.pory"
# 519 "data/maps/SlateportCity_Harbor/scripts.pory"
	hideplayer
# 520 "data/maps/SlateportCity_Harbor/scripts.pory"
# 289 "data/maps/SlateportCity_Harbor/scripts.pory"
# 521 "data/maps/SlateportCity_Harbor/scripts.pory"
	setvar VAR_0x8004, LOCALID_SLATEPORT_HARBOR_SS_TIDAL
# 522 "data/maps/SlateportCity_Harbor/scripts.pory"
# 290 "data/maps/SlateportCity_Harbor/scripts.pory"
# 523 "data/maps/SlateportCity_Harbor/scripts.pory"
	call Common_EventScript_FerryDepart
# 524 "data/maps/SlateportCity_Harbor/scripts.pory"
	return
# 525 "data/maps/SlateportCity_Harbor/scripts.pory"

# 526 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_BoardFerry_2:
# 527 "data/maps/SlateportCity_Harbor/scripts.pory"
# 282 "data/maps/SlateportCity_Harbor/scripts.pory"
# 528 "data/maps/SlateportCity_Harbor/scripts.pory"
	call SlateportCity_Harbor_EventScript_BoardFerryNorth
# 529 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto SlateportCity_Harbor_EventScript_BoardFerry_1
# 530 "data/maps/SlateportCity_Harbor/scripts.pory"

# 531 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_BoardFerry_5:
# 532 "data/maps/SlateportCity_Harbor/scripts.pory"
# 285 "data/maps/SlateportCity_Harbor/scripts.pory"
# 533 "data/maps/SlateportCity_Harbor/scripts.pory"
	call SlateportCity_Harbor_EventScript_BoardFerryEast
# 534 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto SlateportCity_Harbor_EventScript_BoardFerry_4
# 535 "data/maps/SlateportCity_Harbor/scripts.pory"

# 536 "data/maps/SlateportCity_Harbor/scripts.pory"

# 537 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_CancelDestinationSelect::
# 538 "data/maps/SlateportCity_Harbor/scripts.pory"
# 295 "data/maps/SlateportCity_Harbor/scripts.pory"
# 539 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_SailAnotherTime, MSGBOX_DEFAULT
# 540 "data/maps/SlateportCity_Harbor/scripts.pory"
# 296 "data/maps/SlateportCity_Harbor/scripts.pory"
# 541 "data/maps/SlateportCity_Harbor/scripts.pory"
	release
# 542 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 543 "data/maps/SlateportCity_Harbor/scripts.pory"

# 544 "data/maps/SlateportCity_Harbor/scripts.pory"

# 545 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_BoardFerryEast::
# 546 "data/maps/SlateportCity_Harbor/scripts.pory"
# 301 "data/maps/SlateportCity_Harbor/scripts.pory"
# 547 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement LOCALID_PLAYER, SlateportCity_Harbor_Movement_BoardFerryEast
# 548 "data/maps/SlateportCity_Harbor/scripts.pory"
# 302 "data/maps/SlateportCity_Harbor/scripts.pory"
# 549 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitmovement 0
# 550 "data/maps/SlateportCity_Harbor/scripts.pory"
	return
# 551 "data/maps/SlateportCity_Harbor/scripts.pory"

# 552 "data/maps/SlateportCity_Harbor/scripts.pory"

# 553 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_BoardFerryNorth::
# 554 "data/maps/SlateportCity_Harbor/scripts.pory"
# 307 "data/maps/SlateportCity_Harbor/scripts.pory"
# 555 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement LOCALID_PLAYER, SlateportCity_Harbor_Movement_BoardFerryNorth
# 556 "data/maps/SlateportCity_Harbor/scripts.pory"
# 308 "data/maps/SlateportCity_Harbor/scripts.pory"
# 557 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitmovement 0
# 558 "data/maps/SlateportCity_Harbor/scripts.pory"
	return
# 559 "data/maps/SlateportCity_Harbor/scripts.pory"

# 560 "data/maps/SlateportCity_Harbor/scripts.pory"

# 561 "data/maps/SlateportCity_Harbor/scripts.pory"
# 312 "data/maps/SlateportCity_Harbor/scripts.pory"
# 562 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Movement_BoardFerryEast:
# 563 "data/maps/SlateportCity_Harbor/scripts.pory"
# 313 "data/maps/SlateportCity_Harbor/scripts.pory"
# 564 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_right
# 565 "data/maps/SlateportCity_Harbor/scripts.pory"
# 314 "data/maps/SlateportCity_Harbor/scripts.pory"
# 566 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_in_place_faster_up
# 567 "data/maps/SlateportCity_Harbor/scripts.pory"
# 315 "data/maps/SlateportCity_Harbor/scripts.pory"
# 568 "data/maps/SlateportCity_Harbor/scripts.pory"
	step_end
# 569 "data/maps/SlateportCity_Harbor/scripts.pory"

# 570 "data/maps/SlateportCity_Harbor/scripts.pory"
# 318 "data/maps/SlateportCity_Harbor/scripts.pory"
# 571 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Movement_BoardFerryNorth:
# 572 "data/maps/SlateportCity_Harbor/scripts.pory"
# 319 "data/maps/SlateportCity_Harbor/scripts.pory"
# 573 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_up
# 574 "data/maps/SlateportCity_Harbor/scripts.pory"
# 320 "data/maps/SlateportCity_Harbor/scripts.pory"
# 575 "data/maps/SlateportCity_Harbor/scripts.pory"
	step_end
# 576 "data/maps/SlateportCity_Harbor/scripts.pory"

# 577 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_Sailor::
# 578 "data/maps/SlateportCity_Harbor/scripts.pory"
# 324 "data/maps/SlateportCity_Harbor/scripts.pory"
# 579 "data/maps/SlateportCity_Harbor/scripts.pory"
	lock
# 580 "data/maps/SlateportCity_Harbor/scripts.pory"
# 325 "data/maps/SlateportCity_Harbor/scripts.pory"
# 581 "data/maps/SlateportCity_Harbor/scripts.pory"
	faceplayer
# 582 "data/maps/SlateportCity_Harbor/scripts.pory"
# 326 "data/maps/SlateportCity_Harbor/scripts.pory"
# 583 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto_if_unset FLAG_SYS_GAME_CLEAR, SlateportCity_Harbor_EventScript_Sailor_2
# 584 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_Sailor_1:
# 585 "data/maps/SlateportCity_Harbor/scripts.pory"
# 329 "data/maps/SlateportCity_Harbor/scripts.pory"
# 586 "data/maps/SlateportCity_Harbor/scripts.pory"
	setvar VAR_0x8004, 0
# 587 "data/maps/SlateportCity_Harbor/scripts.pory"
# 330 "data/maps/SlateportCity_Harbor/scripts.pory"
# 588 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto_if_set FLAG_DEFEATED_KYOGRE, SlateportCity_Harbor_EventScript_Sailor_5
# 589 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_Sailor_4:
# 590 "data/maps/SlateportCity_Harbor/scripts.pory"
# 333 "data/maps/SlateportCity_Harbor/scripts.pory"
# 591 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto_if_set FLAG_DEFEATED_GROUDON, SlateportCity_Harbor_EventScript_Sailor_8
# 592 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_Sailor_7:
# 593 "data/maps/SlateportCity_Harbor/scripts.pory"
# 336 "data/maps/SlateportCity_Harbor/scripts.pory"
# 594 "data/maps/SlateportCity_Harbor/scripts.pory"
	compare VAR_0x8004, 2
# 595 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto_if_eq SlateportCity_Harbor_EventScript_Sailor_11
# 596 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_Sailor_10:
# 597 "data/maps/SlateportCity_Harbor/scripts.pory"
# 339 "data/maps/SlateportCity_Harbor/scripts.pory"
# 598 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_AbnormalWeather, MSGBOX_DEFAULT
# 599 "data/maps/SlateportCity_Harbor/scripts.pory"
# 340 "data/maps/SlateportCity_Harbor/scripts.pory"
# 600 "data/maps/SlateportCity_Harbor/scripts.pory"
	release
# 601 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 602 "data/maps/SlateportCity_Harbor/scripts.pory"

# 603 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_Sailor_2:
# 604 "data/maps/SlateportCity_Harbor/scripts.pory"
# 327 "data/maps/SlateportCity_Harbor/scripts.pory"
# 605 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto SlateportCity_Harbor_EventScript_SailorNoAbnormalWeather
# 606 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto SlateportCity_Harbor_EventScript_Sailor_1
# 607 "data/maps/SlateportCity_Harbor/scripts.pory"

# 608 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_Sailor_5:
# 609 "data/maps/SlateportCity_Harbor/scripts.pory"
# 331 "data/maps/SlateportCity_Harbor/scripts.pory"
# 610 "data/maps/SlateportCity_Harbor/scripts.pory"
	call SlateportCity_Harbor_EventScript_CountDefeatedLegendary
# 611 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto SlateportCity_Harbor_EventScript_Sailor_4
# 612 "data/maps/SlateportCity_Harbor/scripts.pory"

# 613 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_Sailor_8:
# 614 "data/maps/SlateportCity_Harbor/scripts.pory"
# 334 "data/maps/SlateportCity_Harbor/scripts.pory"
# 615 "data/maps/SlateportCity_Harbor/scripts.pory"
	call SlateportCity_Harbor_EventScript_CountDefeatedLegendary
# 616 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto SlateportCity_Harbor_EventScript_Sailor_7
# 617 "data/maps/SlateportCity_Harbor/scripts.pory"

# 618 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_Sailor_11:
# 619 "data/maps/SlateportCity_Harbor/scripts.pory"
# 337 "data/maps/SlateportCity_Harbor/scripts.pory"
# 620 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto SlateportCity_Harbor_EventScript_SailorNoAbnormalWeather
# 621 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto SlateportCity_Harbor_EventScript_Sailor_10
# 622 "data/maps/SlateportCity_Harbor/scripts.pory"

# 623 "data/maps/SlateportCity_Harbor/scripts.pory"

# 624 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_SailorNoAbnormalWeather::
# 625 "data/maps/SlateportCity_Harbor/scripts.pory"
# 345 "data/maps/SlateportCity_Harbor/scripts.pory"
# 626 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_LoveToGoDeepUnderwaterSomeday, MSGBOX_DEFAULT
# 627 "data/maps/SlateportCity_Harbor/scripts.pory"
# 346 "data/maps/SlateportCity_Harbor/scripts.pory"
# 628 "data/maps/SlateportCity_Harbor/scripts.pory"
	release
# 629 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 630 "data/maps/SlateportCity_Harbor/scripts.pory"

# 631 "data/maps/SlateportCity_Harbor/scripts.pory"

# 632 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_CountDefeatedLegendary::
# 633 "data/maps/SlateportCity_Harbor/scripts.pory"
# 351 "data/maps/SlateportCity_Harbor/scripts.pory"
# 634 "data/maps/SlateportCity_Harbor/scripts.pory"
	addvar VAR_0x8004, 1
# 635 "data/maps/SlateportCity_Harbor/scripts.pory"
	return
# 636 "data/maps/SlateportCity_Harbor/scripts.pory"

# 637 "data/maps/SlateportCity_Harbor/scripts.pory"

# 638 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_FatMan::
# 639 "data/maps/SlateportCity_Harbor/scripts.pory"
# 356 "data/maps/SlateportCity_Harbor/scripts.pory"
# 640 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_SubTooSmallForMe, MSGBOX_NPC
# 641 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 642 "data/maps/SlateportCity_Harbor/scripts.pory"

# 643 "data/maps/SlateportCity_Harbor/scripts.pory"

# 644 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_CaptStern::
# 645 "data/maps/SlateportCity_Harbor/scripts.pory"
# 361 "data/maps/SlateportCity_Harbor/scripts.pory"
# 646 "data/maps/SlateportCity_Harbor/scripts.pory"
	lock
# 647 "data/maps/SlateportCity_Harbor/scripts.pory"
# 362 "data/maps/SlateportCity_Harbor/scripts.pory"
# 648 "data/maps/SlateportCity_Harbor/scripts.pory"
	faceplayer
# 649 "data/maps/SlateportCity_Harbor/scripts.pory"
# 363 "data/maps/SlateportCity_Harbor/scripts.pory"
# 650 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, SlateportCity_Harbor_EventScript_CaptStern_2
# 651 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_CaptStern_1:
# 652 "data/maps/SlateportCity_Harbor/scripts.pory"
# 366 "data/maps/SlateportCity_Harbor/scripts.pory"
# 653 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto_if_set FLAG_EVIL_TEAM_ESCAPED_STERN_SPOKE, SlateportCity_Harbor_EventScript_CaptStern_5
# 654 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_CaptStern_4:
# 655 "data/maps/SlateportCity_Harbor/scripts.pory"
# 369 "data/maps/SlateportCity_Harbor/scripts.pory"
# 656 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto_if_set FLAG_TEAM_AQUA_ESCAPED_IN_SUBMARINE, SlateportCity_Harbor_EventScript_CaptStern_8
# 657 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_CaptStern_7:
# 658 "data/maps/SlateportCity_Harbor/scripts.pory"
# 372 "data/maps/SlateportCity_Harbor/scripts.pory"
# 659 "data/maps/SlateportCity_Harbor/scripts.pory"
	compare VAR_SLATEPORT_HARBOR_STATE, 2
# 660 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto_if_eq SlateportCity_Harbor_EventScript_CaptStern_11
# 661 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_CaptStern_10:
# 662 "data/maps/SlateportCity_Harbor/scripts.pory"
# 375 "data/maps/SlateportCity_Harbor/scripts.pory"
# 663 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_SameThugsTriedToRobAtMuseum, MSGBOX_DEFAULT
# 664 "data/maps/SlateportCity_Harbor/scripts.pory"
# 376 "data/maps/SlateportCity_Harbor/scripts.pory"
# 665 "data/maps/SlateportCity_Harbor/scripts.pory"
	closemessage
# 666 "data/maps/SlateportCity_Harbor/scripts.pory"
# 377 "data/maps/SlateportCity_Harbor/scripts.pory"
# 667 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 668 "data/maps/SlateportCity_Harbor/scripts.pory"
# 378 "data/maps/SlateportCity_Harbor/scripts.pory"
# 669 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitmovement 0
# 670 "data/maps/SlateportCity_Harbor/scripts.pory"
# 379 "data/maps/SlateportCity_Harbor/scripts.pory"
# 671 "data/maps/SlateportCity_Harbor/scripts.pory"
	release
# 672 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 673 "data/maps/SlateportCity_Harbor/scripts.pory"

# 674 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_CaptStern_2:
# 675 "data/maps/SlateportCity_Harbor/scripts.pory"
# 364 "data/maps/SlateportCity_Harbor/scripts.pory"
# 676 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto SlateportCity_Harbor_EventScript_CaptSternFerryOrScannerComment
# 677 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto SlateportCity_Harbor_EventScript_CaptStern_1
# 678 "data/maps/SlateportCity_Harbor/scripts.pory"

# 679 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_CaptStern_5:
# 680 "data/maps/SlateportCity_Harbor/scripts.pory"
# 367 "data/maps/SlateportCity_Harbor/scripts.pory"
# 681 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto SlateportCity_Harbor_EventScript_NeedDive
# 682 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto SlateportCity_Harbor_EventScript_CaptStern_4
# 683 "data/maps/SlateportCity_Harbor/scripts.pory"

# 684 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_CaptStern_8:
# 685 "data/maps/SlateportCity_Harbor/scripts.pory"
# 370 "data/maps/SlateportCity_Harbor/scripts.pory"
# 686 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto SlateportCity_Harbor_EventScript_TeamAquaLeftNeedDive
# 687 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto SlateportCity_Harbor_EventScript_CaptStern_7
# 688 "data/maps/SlateportCity_Harbor/scripts.pory"

# 689 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_CaptStern_11:
# 690 "data/maps/SlateportCity_Harbor/scripts.pory"
# 373 "data/maps/SlateportCity_Harbor/scripts.pory"
# 691 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto SlateportCity_Harbor_EventScript_WhyStealSubmarine
# 692 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto SlateportCity_Harbor_EventScript_CaptStern_10
# 693 "data/maps/SlateportCity_Harbor/scripts.pory"

# 694 "data/maps/SlateportCity_Harbor/scripts.pory"

# 695 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_WhyStealSubmarine::
# 696 "data/maps/SlateportCity_Harbor/scripts.pory"
# 384 "data/maps/SlateportCity_Harbor/scripts.pory"
# 697 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_CaptSternWhyStealMySubmarine, MSGBOX_DEFAULT
# 698 "data/maps/SlateportCity_Harbor/scripts.pory"
# 385 "data/maps/SlateportCity_Harbor/scripts.pory"
# 699 "data/maps/SlateportCity_Harbor/scripts.pory"
	release
# 700 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 701 "data/maps/SlateportCity_Harbor/scripts.pory"

# 702 "data/maps/SlateportCity_Harbor/scripts.pory"

# 703 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_TeamAquaLeftNeedDive::
# 704 "data/maps/SlateportCity_Harbor/scripts.pory"
# 390 "data/maps/SlateportCity_Harbor/scripts.pory"
# 705 "data/maps/SlateportCity_Harbor/scripts.pory"
	setflag FLAG_EVIL_TEAM_ESCAPED_STERN_SPOKE
# 706 "data/maps/SlateportCity_Harbor/scripts.pory"
# 391 "data/maps/SlateportCity_Harbor/scripts.pory"
# 707 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_TeamAquaLeftNeedDive, MSGBOX_DEFAULT
# 708 "data/maps/SlateportCity_Harbor/scripts.pory"
# 392 "data/maps/SlateportCity_Harbor/scripts.pory"
# 709 "data/maps/SlateportCity_Harbor/scripts.pory"
	release
# 710 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 711 "data/maps/SlateportCity_Harbor/scripts.pory"

# 712 "data/maps/SlateportCity_Harbor/scripts.pory"

# 713 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_NeedDive::
# 714 "data/maps/SlateportCity_Harbor/scripts.pory"
# 397 "data/maps/SlateportCity_Harbor/scripts.pory"
# 715 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_NeedDiveToCatchSub, MSGBOX_DEFAULT
# 716 "data/maps/SlateportCity_Harbor/scripts.pory"
# 398 "data/maps/SlateportCity_Harbor/scripts.pory"
# 717 "data/maps/SlateportCity_Harbor/scripts.pory"
	release
# 718 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 719 "data/maps/SlateportCity_Harbor/scripts.pory"

# 720 "data/maps/SlateportCity_Harbor/scripts.pory"

# 721 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_CaptSternFerryOrScannerComment::
# 722 "data/maps/SlateportCity_Harbor/scripts.pory"
# 403 "data/maps/SlateportCity_Harbor/scripts.pory"
# 723 "data/maps/SlateportCity_Harbor/scripts.pory"
	compare VAR_TEMP_1, 1
# 724 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto_if_eq SlateportCity_Harbor_EventScript_CaptSternFerryOrScannerComment_2
# 725 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_CaptSternFerryOrScannerComment_1:
# 726 "data/maps/SlateportCity_Harbor/scripts.pory"
# 406 "data/maps/SlateportCity_Harbor/scripts.pory"
# 727 "data/maps/SlateportCity_Harbor/scripts.pory"
	checkitem ITEM_SCANNER
# 728 "data/maps/SlateportCity_Harbor/scripts.pory"
# 407 "data/maps/SlateportCity_Harbor/scripts.pory"
# 729 "data/maps/SlateportCity_Harbor/scripts.pory"
	compare VAR_RESULT, TRUE
# 730 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto_if_eq SlateportCity_Harbor_EventScript_CaptSternFerryOrScannerComment_5
# 731 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_CaptSternFerryOrScannerComment_4:
# 732 "data/maps/SlateportCity_Harbor/scripts.pory"
# 410 "data/maps/SlateportCity_Harbor/scripts.pory"
# 733 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, SlateportCity_Harbor_EventScript_CaptSternFerryOrScannerComment_8
# 734 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_CaptSternFerryOrScannerComment_7:
# 735 "data/maps/SlateportCity_Harbor/scripts.pory"
# 413 "data/maps/SlateportCity_Harbor/scripts.pory"
# 736 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_WontBeLongBeforeWeFinishFerry, MSGBOX_DEFAULT
# 737 "data/maps/SlateportCity_Harbor/scripts.pory"
# 414 "data/maps/SlateportCity_Harbor/scripts.pory"
# 738 "data/maps/SlateportCity_Harbor/scripts.pory"
	release
# 739 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 740 "data/maps/SlateportCity_Harbor/scripts.pory"

# 741 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_CaptSternFerryOrScannerComment_2:
# 742 "data/maps/SlateportCity_Harbor/scripts.pory"
# 404 "data/maps/SlateportCity_Harbor/scripts.pory"
# 743 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto SlateportCity_Harbor_EventScript_TradedScanner
# 744 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto SlateportCity_Harbor_EventScript_CaptSternFerryOrScannerComment_1
# 745 "data/maps/SlateportCity_Harbor/scripts.pory"

# 746 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_CaptSternFerryOrScannerComment_5:
# 747 "data/maps/SlateportCity_Harbor/scripts.pory"
# 408 "data/maps/SlateportCity_Harbor/scripts.pory"
# 748 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto SlateportCity_Harbor_EventScript_AskToTradeScanner
# 749 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto SlateportCity_Harbor_EventScript_CaptSternFerryOrScannerComment_4
# 750 "data/maps/SlateportCity_Harbor/scripts.pory"

# 751 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_CaptSternFerryOrScannerComment_8:
# 752 "data/maps/SlateportCity_Harbor/scripts.pory"
# 411 "data/maps/SlateportCity_Harbor/scripts.pory"
# 753 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto SlateportCity_Harbor_EventScript_FerryFinished
# 754 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto SlateportCity_Harbor_EventScript_CaptSternFerryOrScannerComment_7
# 755 "data/maps/SlateportCity_Harbor/scripts.pory"

# 756 "data/maps/SlateportCity_Harbor/scripts.pory"

# 757 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_FerryFinished::
# 758 "data/maps/SlateportCity_Harbor/scripts.pory"
# 419 "data/maps/SlateportCity_Harbor/scripts.pory"
# 759 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_FinishedMakingFerry, MSGBOX_DEFAULT
# 760 "data/maps/SlateportCity_Harbor/scripts.pory"
# 420 "data/maps/SlateportCity_Harbor/scripts.pory"
# 761 "data/maps/SlateportCity_Harbor/scripts.pory"
	release
# 762 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 763 "data/maps/SlateportCity_Harbor/scripts.pory"

# 764 "data/maps/SlateportCity_Harbor/scripts.pory"

# 765 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_AskToTradeScanner::
# 766 "data/maps/SlateportCity_Harbor/scripts.pory"
# 425 "data/maps/SlateportCity_Harbor/scripts.pory"
# 767 "data/maps/SlateportCity_Harbor/scripts.pory"
	message SlateportCity_Harbor_Text_WouldYouTradeScanner
# 768 "data/maps/SlateportCity_Harbor/scripts.pory"
# 426 "data/maps/SlateportCity_Harbor/scripts.pory"
# 769 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitmessage
# 770 "data/maps/SlateportCity_Harbor/scripts.pory"
# 427 "data/maps/SlateportCity_Harbor/scripts.pory"
# 771 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto SlateportCity_Harbor_EventScript_ChooseScannerTrade
# 772 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 773 "data/maps/SlateportCity_Harbor/scripts.pory"

# 774 "data/maps/SlateportCity_Harbor/scripts.pory"

# 775 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_ChooseScannerTrade::
# 776 "data/maps/SlateportCity_Harbor/scripts.pory"
# 432 "data/maps/SlateportCity_Harbor/scripts.pory"
# 777 "data/maps/SlateportCity_Harbor/scripts.pory"
	multichoice 0, 0, MULTI_STERN_DEEPSEA, FALSE
# 778 "data/maps/SlateportCity_Harbor/scripts.pory"
# 433 "data/maps/SlateportCity_Harbor/scripts.pory"
# 779 "data/maps/SlateportCity_Harbor/scripts.pory"
	switch VAR_RESULT
# 780 "data/maps/SlateportCity_Harbor/scripts.pory"
# 434 "data/maps/SlateportCity_Harbor/scripts.pory"
# 781 "data/maps/SlateportCity_Harbor/scripts.pory"
	case 0, SlateportCity_Harbor_EventScript_ChooseScannerTrade_3
# 782 "data/maps/SlateportCity_Harbor/scripts.pory"
# 436 "data/maps/SlateportCity_Harbor/scripts.pory"
# 783 "data/maps/SlateportCity_Harbor/scripts.pory"
	case 1, SlateportCity_Harbor_EventScript_ChooseScannerTrade_4
# 784 "data/maps/SlateportCity_Harbor/scripts.pory"
# 438 "data/maps/SlateportCity_Harbor/scripts.pory"
# 785 "data/maps/SlateportCity_Harbor/scripts.pory"
	case 2, SlateportCity_Harbor_EventScript_ChooseScannerTrade_5
# 786 "data/maps/SlateportCity_Harbor/scripts.pory"
# 440 "data/maps/SlateportCity_Harbor/scripts.pory"
# 787 "data/maps/SlateportCity_Harbor/scripts.pory"
	case MULTI_B_PRESSED, SlateportCity_Harbor_EventScript_ChooseScannerTrade_6
# 788 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_ChooseScannerTrade_1:
# 789 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 790 "data/maps/SlateportCity_Harbor/scripts.pory"

# 791 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_ChooseScannerTrade_3:
# 792 "data/maps/SlateportCity_Harbor/scripts.pory"
# 435 "data/maps/SlateportCity_Harbor/scripts.pory"
# 793 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto SlateportCity_Harbor_EventScript_DeepSeaTooth
# 794 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto SlateportCity_Harbor_EventScript_ChooseScannerTrade_1
# 795 "data/maps/SlateportCity_Harbor/scripts.pory"

# 796 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_ChooseScannerTrade_4:
# 797 "data/maps/SlateportCity_Harbor/scripts.pory"
# 437 "data/maps/SlateportCity_Harbor/scripts.pory"
# 798 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto SlateportCity_Harbor_EventScript_DeepSeaScale
# 799 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto SlateportCity_Harbor_EventScript_ChooseScannerTrade_1
# 800 "data/maps/SlateportCity_Harbor/scripts.pory"

# 801 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_ChooseScannerTrade_5:
# 802 "data/maps/SlateportCity_Harbor/scripts.pory"
# 439 "data/maps/SlateportCity_Harbor/scripts.pory"
# 803 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto SlateportCity_Harbor_EventScript_DeclineTrade
# 804 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto SlateportCity_Harbor_EventScript_ChooseScannerTrade_1
# 805 "data/maps/SlateportCity_Harbor/scripts.pory"

# 806 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_ChooseScannerTrade_6:
# 807 "data/maps/SlateportCity_Harbor/scripts.pory"
# 441 "data/maps/SlateportCity_Harbor/scripts.pory"
# 808 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto SlateportCity_Harbor_EventScript_DeclineTrade
# 809 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto SlateportCity_Harbor_EventScript_ChooseScannerTrade_1
# 810 "data/maps/SlateportCity_Harbor/scripts.pory"

# 811 "data/maps/SlateportCity_Harbor/scripts.pory"

# 812 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_DeepSeaTooth::
# 813 "data/maps/SlateportCity_Harbor/scripts.pory"
# 447 "data/maps/SlateportCity_Harbor/scripts.pory"
# 814 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_TradeForDeepSeaTooth, MSGBOX_YESNO
# 815 "data/maps/SlateportCity_Harbor/scripts.pory"
# 448 "data/maps/SlateportCity_Harbor/scripts.pory"
# 816 "data/maps/SlateportCity_Harbor/scripts.pory"
	compare VAR_RESULT, NO
# 817 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto_if_eq SlateportCity_Harbor_EventScript_DeepSeaTooth_2
# 818 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_DeepSeaTooth_1:
# 819 "data/maps/SlateportCity_Harbor/scripts.pory"
# 451 "data/maps/SlateportCity_Harbor/scripts.pory"
# 820 "data/maps/SlateportCity_Harbor/scripts.pory"
	giveitem ITEM_DEEP_SEA_TOOTH
# 821 "data/maps/SlateportCity_Harbor/scripts.pory"
# 452 "data/maps/SlateportCity_Harbor/scripts.pory"
# 822 "data/maps/SlateportCity_Harbor/scripts.pory"
	compare VAR_RESULT, FALSE
# 823 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto_if_eq SlateportCity_Harbor_EventScript_DeepSeaTooth_5
# 824 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_DeepSeaTooth_4:
# 825 "data/maps/SlateportCity_Harbor/scripts.pory"
# 455 "data/maps/SlateportCity_Harbor/scripts.pory"
# 826 "data/maps/SlateportCity_Harbor/scripts.pory"
	removeitem ITEM_SCANNER
# 827 "data/maps/SlateportCity_Harbor/scripts.pory"
# 456 "data/maps/SlateportCity_Harbor/scripts.pory"
# 828 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_HandedScannerToStern, MSGBOX_DEFAULT
# 829 "data/maps/SlateportCity_Harbor/scripts.pory"
# 457 "data/maps/SlateportCity_Harbor/scripts.pory"
# 830 "data/maps/SlateportCity_Harbor/scripts.pory"
	setflag FLAG_EXCHANGED_SCANNER
# 831 "data/maps/SlateportCity_Harbor/scripts.pory"
# 458 "data/maps/SlateportCity_Harbor/scripts.pory"
# 832 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto SlateportCity_Harbor_EventScript_TradedScanner
# 833 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 834 "data/maps/SlateportCity_Harbor/scripts.pory"

# 835 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_DeepSeaTooth_2:
# 836 "data/maps/SlateportCity_Harbor/scripts.pory"
# 449 "data/maps/SlateportCity_Harbor/scripts.pory"
# 837 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto SlateportCity_Harbor_EventScript_ChooseDifferentTrade
# 838 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto SlateportCity_Harbor_EventScript_DeepSeaTooth_1
# 839 "data/maps/SlateportCity_Harbor/scripts.pory"

# 840 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_DeepSeaTooth_5:
# 841 "data/maps/SlateportCity_Harbor/scripts.pory"
# 453 "data/maps/SlateportCity_Harbor/scripts.pory"
# 842 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
# 843 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto SlateportCity_Harbor_EventScript_DeepSeaTooth_4
# 844 "data/maps/SlateportCity_Harbor/scripts.pory"

# 845 "data/maps/SlateportCity_Harbor/scripts.pory"

# 846 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_DeepSeaScale::
# 847 "data/maps/SlateportCity_Harbor/scripts.pory"
# 463 "data/maps/SlateportCity_Harbor/scripts.pory"
# 848 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_TradeForDeepSeaScale, MSGBOX_YESNO
# 849 "data/maps/SlateportCity_Harbor/scripts.pory"
# 464 "data/maps/SlateportCity_Harbor/scripts.pory"
# 850 "data/maps/SlateportCity_Harbor/scripts.pory"
	compare VAR_RESULT, NO
# 851 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto_if_eq SlateportCity_Harbor_EventScript_DeepSeaScale_2
# 852 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_DeepSeaScale_1:
# 853 "data/maps/SlateportCity_Harbor/scripts.pory"
# 467 "data/maps/SlateportCity_Harbor/scripts.pory"
# 854 "data/maps/SlateportCity_Harbor/scripts.pory"
	giveitem ITEM_DEEP_SEA_SCALE
# 855 "data/maps/SlateportCity_Harbor/scripts.pory"
# 468 "data/maps/SlateportCity_Harbor/scripts.pory"
# 856 "data/maps/SlateportCity_Harbor/scripts.pory"
	compare VAR_RESULT, FALSE
# 857 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto_if_eq SlateportCity_Harbor_EventScript_DeepSeaScale_5
# 858 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_DeepSeaScale_4:
# 859 "data/maps/SlateportCity_Harbor/scripts.pory"
# 471 "data/maps/SlateportCity_Harbor/scripts.pory"
# 860 "data/maps/SlateportCity_Harbor/scripts.pory"
	removeitem ITEM_SCANNER
# 861 "data/maps/SlateportCity_Harbor/scripts.pory"
# 472 "data/maps/SlateportCity_Harbor/scripts.pory"
# 862 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_HandedScannerToStern, MSGBOX_DEFAULT
# 863 "data/maps/SlateportCity_Harbor/scripts.pory"
# 473 "data/maps/SlateportCity_Harbor/scripts.pory"
# 864 "data/maps/SlateportCity_Harbor/scripts.pory"
	setflag FLAG_EXCHANGED_SCANNER
# 865 "data/maps/SlateportCity_Harbor/scripts.pory"
# 474 "data/maps/SlateportCity_Harbor/scripts.pory"
# 866 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto SlateportCity_Harbor_EventScript_TradedScanner
# 867 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 868 "data/maps/SlateportCity_Harbor/scripts.pory"

# 869 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_DeepSeaScale_2:
# 870 "data/maps/SlateportCity_Harbor/scripts.pory"
# 465 "data/maps/SlateportCity_Harbor/scripts.pory"
# 871 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto SlateportCity_Harbor_EventScript_ChooseDifferentTrade
# 872 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto SlateportCity_Harbor_EventScript_DeepSeaScale_1
# 873 "data/maps/SlateportCity_Harbor/scripts.pory"

# 874 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_DeepSeaScale_5:
# 875 "data/maps/SlateportCity_Harbor/scripts.pory"
# 469 "data/maps/SlateportCity_Harbor/scripts.pory"
# 876 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
# 877 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto SlateportCity_Harbor_EventScript_DeepSeaScale_4
# 878 "data/maps/SlateportCity_Harbor/scripts.pory"

# 879 "data/maps/SlateportCity_Harbor/scripts.pory"

# 880 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_DeclineTrade::
# 881 "data/maps/SlateportCity_Harbor/scripts.pory"
# 479 "data/maps/SlateportCity_Harbor/scripts.pory"
# 882 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_IfYouWantToTradeLetMeKnow, MSGBOX_DEFAULT
# 883 "data/maps/SlateportCity_Harbor/scripts.pory"
# 480 "data/maps/SlateportCity_Harbor/scripts.pory"
# 884 "data/maps/SlateportCity_Harbor/scripts.pory"
	release
# 885 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 886 "data/maps/SlateportCity_Harbor/scripts.pory"

# 887 "data/maps/SlateportCity_Harbor/scripts.pory"

# 888 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_ChooseDifferentTrade::
# 889 "data/maps/SlateportCity_Harbor/scripts.pory"
# 485 "data/maps/SlateportCity_Harbor/scripts.pory"
# 890 "data/maps/SlateportCity_Harbor/scripts.pory"
	message SlateportCity_Harbor_Text_WhichOneDoYouWant
# 891 "data/maps/SlateportCity_Harbor/scripts.pory"
# 486 "data/maps/SlateportCity_Harbor/scripts.pory"
# 892 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitmessage
# 893 "data/maps/SlateportCity_Harbor/scripts.pory"
# 487 "data/maps/SlateportCity_Harbor/scripts.pory"
# 894 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto SlateportCity_Harbor_EventScript_ChooseScannerTrade
# 895 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 896 "data/maps/SlateportCity_Harbor/scripts.pory"

# 897 "data/maps/SlateportCity_Harbor/scripts.pory"

# 898 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_TradedScanner::
# 899 "data/maps/SlateportCity_Harbor/scripts.pory"
# 492 "data/maps/SlateportCity_Harbor/scripts.pory"
# 900 "data/maps/SlateportCity_Harbor/scripts.pory"
	setvar VAR_TEMP_1, 1
# 901 "data/maps/SlateportCity_Harbor/scripts.pory"
# 493 "data/maps/SlateportCity_Harbor/scripts.pory"
# 902 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_ThisWillHelpResearch, MSGBOX_DEFAULT
# 903 "data/maps/SlateportCity_Harbor/scripts.pory"
# 494 "data/maps/SlateportCity_Harbor/scripts.pory"
# 904 "data/maps/SlateportCity_Harbor/scripts.pory"
	release
# 905 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 906 "data/maps/SlateportCity_Harbor/scripts.pory"

# 907 "data/maps/SlateportCity_Harbor/scripts.pory"

# 908 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_FerryServiceUnavailable::
# 909 "data/maps/SlateportCity_Harbor/scripts.pory"
# 498 "data/maps/SlateportCity_Harbor/scripts.pory"
# 910 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "I beg your pardon?\n"
# 911 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "You're looking for a ship?\p"
# 912 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "I'm sorry, the ferry service isn't\n"
# 913 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "available at present…$"
# 914 "data/maps/SlateportCity_Harbor/scripts.pory"

# 915 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_MayISeeYourTicket::
# 916 "data/maps/SlateportCity_Harbor/scripts.pory"
# 505 "data/maps/SlateportCity_Harbor/scripts.pory"
# 917 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Hello, are you here for the ferry?\n"
# 918 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "May I see your TICKET?$"
# 919 "data/maps/SlateportCity_Harbor/scripts.pory"

# 920 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_YouMustHaveTicket::
# 921 "data/maps/SlateportCity_Harbor/scripts.pory"
# 510 "data/maps/SlateportCity_Harbor/scripts.pory"
# 922 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "{PLAYER} doesn't have the TICKET…\p"
# 923 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "I'm terribly sorry.\p"
# 924 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "You must have a TICKET to board\n"
# 925 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "the ferry.$"
# 926 "data/maps/SlateportCity_Harbor/scripts.pory"

# 927 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_FlashedTicketWhereTo::
# 928 "data/maps/SlateportCity_Harbor/scripts.pory"
# 517 "data/maps/SlateportCity_Harbor/scripts.pory"
# 929 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "{PLAYER} flashed the TICKET.\p"
# 930 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Perfect! That's all you need!\p"
# 931 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "And where would you like to go?$"
# 932 "data/maps/SlateportCity_Harbor/scripts.pory"

# 933 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_SailAnotherTime::
# 934 "data/maps/SlateportCity_Harbor/scripts.pory"
# 523 "data/maps/SlateportCity_Harbor/scripts.pory"
# 935 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Please sail with us another time!$"
# 936 "data/maps/SlateportCity_Harbor/scripts.pory"

# 937 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_LilycoveItIs::
# 938 "data/maps/SlateportCity_Harbor/scripts.pory"
# 527 "data/maps/SlateportCity_Harbor/scripts.pory"
# 939 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "LILYCOVE CITY it is, then!$"
# 940 "data/maps/SlateportCity_Harbor/scripts.pory"

# 941 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_BattleFrontierItIs::
# 942 "data/maps/SlateportCity_Harbor/scripts.pory"
# 531 "data/maps/SlateportCity_Harbor/scripts.pory"
# 943 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "BATTLE FRONTIER it is, then!$"
# 944 "data/maps/SlateportCity_Harbor/scripts.pory"

# 945 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_PleaseBoardFerry::
# 946 "data/maps/SlateportCity_Harbor/scripts.pory"
# 535 "data/maps/SlateportCity_Harbor/scripts.pory"
# 947 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Please board the ferry and wait for\n"
# 948 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "departure.$"
# 949 "data/maps/SlateportCity_Harbor/scripts.pory"

# 950 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_WhereWouldYouLikeToGo::
# 951 "data/maps/SlateportCity_Harbor/scripts.pory"
# 540 "data/maps/SlateportCity_Harbor/scripts.pory"
# 952 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Then, where would you like to go?$"
# 953 "data/maps/SlateportCity_Harbor/scripts.pory"

# 954 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_LoveToGoDeepUnderwaterSomeday::
# 955 "data/maps/SlateportCity_Harbor/scripts.pory"
# 544 "data/maps/SlateportCity_Harbor/scripts.pory"
# 956 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "A journey to the bottom of the sea…\n"
# 957 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "I wonder what it'd be like?\p"
# 958 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "I'd love to go deep underwater like\n"
# 959 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "that someday.$"
# 960 "data/maps/SlateportCity_Harbor/scripts.pory"

# 961 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_AbnormalWeather::
# 962 "data/maps/SlateportCity_Harbor/scripts.pory"
# 551 "data/maps/SlateportCity_Harbor/scripts.pory"
# 963 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "For a ship to sail safely, we need to\n"
# 964 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "know about the weather!\p"
# 965 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Speaking of weather, I heard something\n"
# 966 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "from a guy at the WEATHER INSTITUTE.\p"
# 967 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "He was saying abnormal weather has\n"
# 968 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "been reported all over the place!\p"
# 969 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "You should visit the WEATHER INSTITUTE\n"
# 970 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "and ask around!$"
# 971 "data/maps/SlateportCity_Harbor/scripts.pory"

# 972 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_SubTooSmallForMe::
# 973 "data/maps/SlateportCity_Harbor/scripts.pory"
# 562 "data/maps/SlateportCity_Harbor/scripts.pory"
# 974 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "I wanted to go with CAPT. STERN on\n"
# 975 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "the ocean floor exploration.\p"
# 976 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "But the sub's too small for me.\p"
# 977 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "If I squeezed in, there wouldn't be\n"
# 978 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "any room for the CAPTAIN…$"
# 979 "data/maps/SlateportCity_Harbor/scripts.pory"

# 980 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_SameThugsTriedToRobAtMuseum::
# 981 "data/maps/SlateportCity_Harbor/scripts.pory"
# 570 "data/maps/SlateportCity_Harbor/scripts.pory"
# 982 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "CAPT. STERN: Those thugs…\p"
# 983 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "They're the same lot who tried to rob\n"
# 984 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "the DEVON GOODS at the MUSEUM.$"
# 985 "data/maps/SlateportCity_Harbor/scripts.pory"

# 986 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_ArchieYouAgainHideoutInLilycove::
# 987 "data/maps/SlateportCity_Harbor/scripts.pory"
# 576 "data/maps/SlateportCity_Harbor/scripts.pory"
# 988 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "ARCHIE: Oh?\n"
# 989 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Not you again…\p"
# 990 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "You are tenacious to track us here,\n"
# 991 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "that much I will give you.\p"
# 992 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "But now…\n"
# 993 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "No one can stop us! No one!\p"
# 994 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Or, will you follow us back to our\n"
# 995 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "HIDEOUT in LILYCOVE CITY?\p"
# 996 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Fwahahahaha…$"
# 997 "data/maps/SlateportCity_Harbor/scripts.pory"

# 998 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_CaptSternWhyStealMySubmarine::
# 999 "data/maps/SlateportCity_Harbor/scripts.pory"
# 588 "data/maps/SlateportCity_Harbor/scripts.pory"
# 1000 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "CAPT. STERN: Why…\p"
# 1001 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Why would TEAM AQUA steal my\n"
# 1002 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "SUBMARINE EXPLORER 1?\p"
# 1003 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "They can't be after the slumbering\n"
# 1004 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "POKéMON at the bottom of the sea…\p"
# 1005 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "But even if I were to chase them,\n"
# 1006 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "I don't stand a chance against them…$"
# 1007 "data/maps/SlateportCity_Harbor/scripts.pory"

# 1008 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_TeamAquaLeftNeedDive::
# 1009 "data/maps/SlateportCity_Harbor/scripts.pory"
# 598 "data/maps/SlateportCity_Harbor/scripts.pory"
# 1010 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "CAPT. STERN: Oh, {PLAYER}{KUN}…\p"
# 1011 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Okay… So TEAM AQUA left before you\n"
# 1012 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "could stop them…\p"
# 1013 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Oh, no, don't blame yourself.\n"
# 1014 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "You're not responsible for this.\p"
# 1015 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Trying to catch a submarine…\n"
# 1016 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "It's impossible for most people.\p"
# 1017 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "You would need a POKéMON that knows\n"
# 1018 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "how to DIVE…\p"
# 1019 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Perhaps if you went out to\n"
# 1020 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "MOSSDEEP CITY…\p"
# 1021 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "A lot of divers live out there, so\n"
# 1022 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "someone might teach you…$"
# 1023 "data/maps/SlateportCity_Harbor/scripts.pory"

# 1024 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_NeedDiveToCatchSub::
# 1025 "data/maps/SlateportCity_Harbor/scripts.pory"
# 614 "data/maps/SlateportCity_Harbor/scripts.pory"
# 1026 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "CAPT. STERN: Trying to catch a\n"
# 1027 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "submarine… It's impossible.\p"
# 1028 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "You would need a POKéMON that knows\n"
# 1029 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "how to DIVE…\p"
# 1030 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Perhaps if you went out to\n"
# 1031 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "MOSSDEEP CITY…\p"
# 1032 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "A lot of divers live out there, so\n"
# 1033 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "someone might teach you…$"
# 1034 "data/maps/SlateportCity_Harbor/scripts.pory"

# 1035 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_WontBeLongBeforeWeFinishFerry::
# 1036 "data/maps/SlateportCity_Harbor/scripts.pory"
# 625 "data/maps/SlateportCity_Harbor/scripts.pory"
# 1037 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "CAPT. STERN: Oh, yes.\n"
# 1038 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "MR. BRINEY came to our SHIPYARD.\p"
# 1039 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "It won't be long now before we finish\n"
# 1040 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "making the ferry!$"
# 1041 "data/maps/SlateportCity_Harbor/scripts.pory"

# 1042 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_FinishedMakingFerry::
# 1043 "data/maps/SlateportCity_Harbor/scripts.pory"
# 632 "data/maps/SlateportCity_Harbor/scripts.pory"
# 1044 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "CAPT. STERN: {PLAYER}{KUN}!\p"
# 1045 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "We finally finished making the ferry\n"
# 1046 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "S.S. TIDAL!\p"
# 1047 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "We couldn't have done it without\n"
# 1048 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "your friend MR. BRINEY.\p"
# 1049 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Please go for a short cruise on it!$"
# 1050 "data/maps/SlateportCity_Harbor/scripts.pory"

# 1051 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_WouldYouTradeScanner::
# 1052 "data/maps/SlateportCity_Harbor/scripts.pory"
# 641 "data/maps/SlateportCity_Harbor/scripts.pory"
# 1053 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "CAPT. STERN: Oh?\n"
# 1054 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "{PLAYER}{KUN}, that item you have…\p"
# 1055 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "That's a SCANNER! That would sure\n"
# 1056 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "help us on our explorations.\p"
# 1057 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "{PLAYER}{KUN}, would you trade your\n"
# 1058 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "SCANNER for something?\p"
# 1059 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Like, say, a DEEPSEATOOTH or\n"
# 1060 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "a DEEPSEASCALE that I have?$"
# 1061 "data/maps/SlateportCity_Harbor/scripts.pory"

# 1062 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_IfYouWantToTradeLetMeKnow::
# 1063 "data/maps/SlateportCity_Harbor/scripts.pory"
# 652 "data/maps/SlateportCity_Harbor/scripts.pory"
# 1064 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "CAPT. STERN: Are you certain?\n"
# 1065 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "It's useless to you, {PLAYER}{KUN}…\p"
# 1066 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Well, okay, then. If you want to trade\n"
# 1067 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "your SCANNER, let me know.$"
# 1068 "data/maps/SlateportCity_Harbor/scripts.pory"

# 1069 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_TradeForDeepSeaTooth::
# 1070 "data/maps/SlateportCity_Harbor/scripts.pory"
# 659 "data/maps/SlateportCity_Harbor/scripts.pory"
# 1071 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "CAPT. STERN: So you'll trade it for\n"
# 1072 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "my DEEPSEATOOTH?$"
# 1073 "data/maps/SlateportCity_Harbor/scripts.pory"

# 1074 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_TradeForDeepSeaScale::
# 1075 "data/maps/SlateportCity_Harbor/scripts.pory"
# 664 "data/maps/SlateportCity_Harbor/scripts.pory"
# 1076 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "CAPT. STERN: So you'll trade it for\n"
# 1077 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "my DEEPSEASCALE?$"
# 1078 "data/maps/SlateportCity_Harbor/scripts.pory"

# 1079 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_WhichOneDoYouWant::
# 1080 "data/maps/SlateportCity_Harbor/scripts.pory"
# 669 "data/maps/SlateportCity_Harbor/scripts.pory"
# 1081 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "CAPT. STERN: Which one do you want?$"
# 1082 "data/maps/SlateportCity_Harbor/scripts.pory"

# 1083 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_HandedScannerToStern::
# 1084 "data/maps/SlateportCity_Harbor/scripts.pory"
# 673 "data/maps/SlateportCity_Harbor/scripts.pory"
# 1085 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "{PLAYER} handed the SCANNER to\n"
# 1086 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "CAPT. STERN.$"
# 1087 "data/maps/SlateportCity_Harbor/scripts.pory"

# 1088 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_ThisWillHelpResearch::
# 1089 "data/maps/SlateportCity_Harbor/scripts.pory"
# 678 "data/maps/SlateportCity_Harbor/scripts.pory"
# 1090 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "CAPT. STERN: Thanks, {PLAYER}{KUN}!\n"
# 1091 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "This will help our research a lot!$"
