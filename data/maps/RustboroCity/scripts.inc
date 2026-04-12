# 1 "data/maps/RustboroCity/scripts.pory"

# 2 "data/maps/RustboroCity/scripts.pory"
RustboroCity_MapScripts::
# 3 "data/maps/RustboroCity/scripts.pory"
# 2 "data/maps/RustboroCity/scripts.pory"
# 4 "data/maps/RustboroCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, RustboroCity_OnTransition
# 5 "data/maps/RustboroCity/scripts.pory"
# 3 "data/maps/RustboroCity/scripts.pory"
# 6 "data/maps/RustboroCity/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, RustboroCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 7 "data/maps/RustboroCity/scripts.pory"
	.byte 0
# 8 "data/maps/RustboroCity/scripts.pory"

# 9 "data/maps/RustboroCity/scripts.pory"
RustboroCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 10 "data/maps/RustboroCity/scripts.pory"
# 4 "data/maps/RustboroCity/scripts.pory"
# 11 "data/maps/RustboroCity/scripts.pory"
	map_script_2 VAR_RUSTBORO_CITY_STATE, 6, RustboroCity_EventScript_ScientistAddMatchCall
# 12 "data/maps/RustboroCity/scripts.pory"
	.2byte 0
# 13 "data/maps/RustboroCity/scripts.pory"

# 14 "data/maps/RustboroCity/scripts.pory"

# 15 "data/maps/RustboroCity/scripts.pory"
RustboroCity_OnTransition::
# 16 "data/maps/RustboroCity/scripts.pory"
# 9 "data/maps/RustboroCity/scripts.pory"
# 17 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_VISITED_RUSTBORO_CITY
# 18 "data/maps/RustboroCity/scripts.pory"
# 10 "data/maps/RustboroCity/scripts.pory"
# 19 "data/maps/RustboroCity/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 20 "data/maps/RustboroCity/scripts.pory"
# 11 "data/maps/RustboroCity/scripts.pory"
# 21 "data/maps/RustboroCity/scripts.pory"
	compare VAR_RUSTBORO_CITY_STATE, 6
# 22 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq RustboroCity_OnTransition_2
# 23 "data/maps/RustboroCity/scripts.pory"
RustboroCity_OnTransition_1:
# 24 "data/maps/RustboroCity/scripts.pory"
# 14 "data/maps/RustboroCity/scripts.pory"
# 25 "data/maps/RustboroCity/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 26 "data/maps/RustboroCity/scripts.pory"
# 15 "data/maps/RustboroCity/scripts.pory"
# 27 "data/maps/RustboroCity/scripts.pory"
	compare VAR_RUSTBORO_CITY_STATE, 6
# 28 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq RustboroCity_OnTransition_5
# 29 "data/maps/RustboroCity/scripts.pory"
RustboroCity_OnTransition_4:
# 30 "data/maps/RustboroCity/scripts.pory"
	end
# 31 "data/maps/RustboroCity/scripts.pory"

# 32 "data/maps/RustboroCity/scripts.pory"
RustboroCity_OnTransition_2:
# 33 "data/maps/RustboroCity/scripts.pory"
# 12 "data/maps/RustboroCity/scripts.pory"
# 34 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_HideMapNamePopup
# 35 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_OnTransition_1
# 36 "data/maps/RustboroCity/scripts.pory"

# 37 "data/maps/RustboroCity/scripts.pory"
RustboroCity_OnTransition_5:
# 38 "data/maps/RustboroCity/scripts.pory"
# 16 "data/maps/RustboroCity/scripts.pory"
# 39 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_PositionScientistForExit
# 40 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_OnTransition_4
# 41 "data/maps/RustboroCity/scripts.pory"

# 42 "data/maps/RustboroCity/scripts.pory"

# 43 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_PositionScientistForExit::
# 44 "data/maps/RustboroCity/scripts.pory"
# 22 "data/maps/RustboroCity/scripts.pory"
# 45 "data/maps/RustboroCity/scripts.pory"
	compare VAR_TEMP_0, 11
# 46 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq RustboroCity_EventScript_PositionScientistForExit_2
# 47 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_PositionScientistForExit_1:
# 48 "data/maps/RustboroCity/scripts.pory"
# 25 "data/maps/RustboroCity/scripts.pory"
# 49 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_RUSTBORO_SCIENTIST, 12, 15
# 50 "data/maps/RustboroCity/scripts.pory"
	end
# 51 "data/maps/RustboroCity/scripts.pory"

# 52 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_PositionScientistForExit_2:
# 53 "data/maps/RustboroCity/scripts.pory"
# 23 "data/maps/RustboroCity/scripts.pory"
# 54 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_PositionScientistLeftExit
# 55 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_PositionScientistForExit_1
# 56 "data/maps/RustboroCity/scripts.pory"

# 57 "data/maps/RustboroCity/scripts.pory"

# 58 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_PositionScientistLeftExit::
# 59 "data/maps/RustboroCity/scripts.pory"
# 30 "data/maps/RustboroCity/scripts.pory"
# 60 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_RUSTBORO_SCIENTIST, 11, 15
# 61 "data/maps/RustboroCity/scripts.pory"
	end
# 62 "data/maps/RustboroCity/scripts.pory"

# 63 "data/maps/RustboroCity/scripts.pory"

# 64 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_HideMapNamePopup::
# 65 "data/maps/RustboroCity/scripts.pory"
# 35 "data/maps/RustboroCity/scripts.pory"
# 66 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 67 "data/maps/RustboroCity/scripts.pory"
	return
# 68 "data/maps/RustboroCity/scripts.pory"

# 69 "data/maps/RustboroCity/scripts.pory"

# 70 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ScientistAddMatchCall::
# 71 "data/maps/RustboroCity/scripts.pory"
# 40 "data/maps/RustboroCity/scripts.pory"
# 72 "data/maps/RustboroCity/scripts.pory"
	lockall
# 73 "data/maps/RustboroCity/scripts.pory"
# 41 "data/maps/RustboroCity/scripts.pory"
# 74 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_ROUTE104_STATE, 1
# 75 "data/maps/RustboroCity/scripts.pory"
# 42 "data/maps/RustboroCity/scripts.pory"
# 76 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, RustboroCity_Movement_PlayerWalkDown
# 77 "data/maps/RustboroCity/scripts.pory"
# 43 "data/maps/RustboroCity/scripts.pory"
# 78 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 79 "data/maps/RustboroCity/scripts.pory"
# 44 "data/maps/RustboroCity/scripts.pory"
# 80 "data/maps/RustboroCity/scripts.pory"
	playse SE_EXIT
# 81 "data/maps/RustboroCity/scripts.pory"
# 45 "data/maps/RustboroCity/scripts.pory"
# 82 "data/maps/RustboroCity/scripts.pory"
	delay 10
# 83 "data/maps/RustboroCity/scripts.pory"
# 46 "data/maps/RustboroCity/scripts.pory"
# 84 "data/maps/RustboroCity/scripts.pory"
	addobject LOCALID_RUSTBORO_SCIENTIST
# 85 "data/maps/RustboroCity/scripts.pory"
# 47 "data/maps/RustboroCity/scripts.pory"
# 86 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_SCIENTIST, RustboroCity_Movement_ScientistApproachPlayer
# 87 "data/maps/RustboroCity/scripts.pory"
# 48 "data/maps/RustboroCity/scripts.pory"
# 88 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 89 "data/maps/RustboroCity/scripts.pory"
# 49 "data/maps/RustboroCity/scripts.pory"
# 90 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 91 "data/maps/RustboroCity/scripts.pory"
# 50 "data/maps/RustboroCity/scripts.pory"
# 92 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_SCIENTIST, Common_Movement_ExclamationMark
# 93 "data/maps/RustboroCity/scripts.pory"
# 51 "data/maps/RustboroCity/scripts.pory"
# 94 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 95 "data/maps/RustboroCity/scripts.pory"
# 52 "data/maps/RustboroCity/scripts.pory"
# 96 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_SCIENTIST, Common_Movement_Delay48
# 97 "data/maps/RustboroCity/scripts.pory"
# 53 "data/maps/RustboroCity/scripts.pory"
# 98 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 99 "data/maps/RustboroCity/scripts.pory"
# 54 "data/maps/RustboroCity/scripts.pory"
# 100 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 101 "data/maps/RustboroCity/scripts.pory"
# 55 "data/maps/RustboroCity/scripts.pory"
# 102 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 103 "data/maps/RustboroCity/scripts.pory"
# 56 "data/maps/RustboroCity/scripts.pory"
# 104 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_SCIENTIST, RustboroCity_Movement_ScientistWalkInPlaceDown
# 105 "data/maps/RustboroCity/scripts.pory"
# 57 "data/maps/RustboroCity/scripts.pory"
# 106 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 107 "data/maps/RustboroCity/scripts.pory"
# 58 "data/maps/RustboroCity/scripts.pory"
# 108 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_DevelopedNewPokenavFeature, MSGBOX_DEFAULT
# 109 "data/maps/RustboroCity/scripts.pory"
# 59 "data/maps/RustboroCity/scripts.pory"
# 110 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 111 "data/maps/RustboroCity/scripts.pory"
# 60 "data/maps/RustboroCity/scripts.pory"
# 112 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HAS_MATCH_CALL
# 113 "data/maps/RustboroCity/scripts.pory"
# 61 "data/maps/RustboroCity/scripts.pory"
# 114 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_SCIENTIST, Common_Movement_WalkInPlaceFasterLeft
# 115 "data/maps/RustboroCity/scripts.pory"
# 62 "data/maps/RustboroCity/scripts.pory"
# 116 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 117 "data/maps/RustboroCity/scripts.pory"
# 63 "data/maps/RustboroCity/scripts.pory"
# 118 "data/maps/RustboroCity/scripts.pory"
	playse SE_CLICK
# 119 "data/maps/RustboroCity/scripts.pory"
# 64 "data/maps/RustboroCity/scripts.pory"
# 120 "data/maps/RustboroCity/scripts.pory"
	delay 10
# 121 "data/maps/RustboroCity/scripts.pory"
# 65 "data/maps/RustboroCity/scripts.pory"
# 122 "data/maps/RustboroCity/scripts.pory"
	playse SE_CLICK
# 123 "data/maps/RustboroCity/scripts.pory"
# 66 "data/maps/RustboroCity/scripts.pory"
# 124 "data/maps/RustboroCity/scripts.pory"
	delay 10
# 125 "data/maps/RustboroCity/scripts.pory"
# 67 "data/maps/RustboroCity/scripts.pory"
# 126 "data/maps/RustboroCity/scripts.pory"
	playse SE_CLICK
# 127 "data/maps/RustboroCity/scripts.pory"
# 68 "data/maps/RustboroCity/scripts.pory"
# 128 "data/maps/RustboroCity/scripts.pory"
	delay 10
# 129 "data/maps/RustboroCity/scripts.pory"
# 69 "data/maps/RustboroCity/scripts.pory"
# 130 "data/maps/RustboroCity/scripts.pory"
	playse SE_CLICK
# 131 "data/maps/RustboroCity/scripts.pory"
# 70 "data/maps/RustboroCity/scripts.pory"
# 132 "data/maps/RustboroCity/scripts.pory"
	delay 20
# 133 "data/maps/RustboroCity/scripts.pory"
# 71 "data/maps/RustboroCity/scripts.pory"
# 134 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_SCIENTIST, Common_Movement_WalkInPlaceFasterDown
# 135 "data/maps/RustboroCity/scripts.pory"
# 72 "data/maps/RustboroCity/scripts.pory"
# 136 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 137 "data/maps/RustboroCity/scripts.pory"
# 73 "data/maps/RustboroCity/scripts.pory"
# 138 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_AddedMatchCallPleaseCallMrStone, MSGBOX_DEFAULT
# 139 "data/maps/RustboroCity/scripts.pory"
# 74 "data/maps/RustboroCity/scripts.pory"
# 140 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 141 "data/maps/RustboroCity/scripts.pory"
# 75 "data/maps/RustboroCity/scripts.pory"
# 142 "data/maps/RustboroCity/scripts.pory"
	delay 20
# 143 "data/maps/RustboroCity/scripts.pory"
# 76 "data/maps/RustboroCity/scripts.pory"
# 144 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_MatchCallTutorial
# 145 "data/maps/RustboroCity/scripts.pory"
	return
# 146 "data/maps/RustboroCity/scripts.pory"

# 147 "data/maps/RustboroCity/scripts.pory"

# 148 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_PleaseSelectPokenav::
# 149 "data/maps/RustboroCity/scripts.pory"
# 80 "data/maps/RustboroCity/scripts.pory"
# 150 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_PleaseSelectPokenav, MSGBOX_DEFAULT
# 151 "data/maps/RustboroCity/scripts.pory"
# 81 "data/maps/RustboroCity/scripts.pory"
# 152 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 153 "data/maps/RustboroCity/scripts.pory"
# 82 "data/maps/RustboroCity/scripts.pory"
# 154 "data/maps/RustboroCity/scripts.pory"
	delay 10
# 155 "data/maps/RustboroCity/scripts.pory"
# 83 "data/maps/RustboroCity/scripts.pory"
# 156 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_MatchCallTutorial
# 157 "data/maps/RustboroCity/scripts.pory"
	return
# 158 "data/maps/RustboroCity/scripts.pory"

# 159 "data/maps/RustboroCity/scripts.pory"

# 160 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_MatchCallTutorial::
# 161 "data/maps/RustboroCity/scripts.pory"
# 87 "data/maps/RustboroCity/scripts.pory"
# 162 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_ADDED_MATCH_CALL_TO_POKENAV
# 163 "data/maps/RustboroCity/scripts.pory"
# 88 "data/maps/RustboroCity/scripts.pory"
# 164 "data/maps/RustboroCity/scripts.pory"
	special ScriptMenu_CreateStartMenuForPokenavTutorial
# 165 "data/maps/RustboroCity/scripts.pory"
# 89 "data/maps/RustboroCity/scripts.pory"
# 166 "data/maps/RustboroCity/scripts.pory"
	waitstate
# 167 "data/maps/RustboroCity/scripts.pory"
# 90 "data/maps/RustboroCity/scripts.pory"
# 168 "data/maps/RustboroCity/scripts.pory"
	switch VAR_RESULT
# 169 "data/maps/RustboroCity/scripts.pory"
# 91 "data/maps/RustboroCity/scripts.pory"
# 170 "data/maps/RustboroCity/scripts.pory"
	case 0, RustboroCity_EventScript_MatchCallTutorial_3
# 171 "data/maps/RustboroCity/scripts.pory"
# 93 "data/maps/RustboroCity/scripts.pory"
# 172 "data/maps/RustboroCity/scripts.pory"
	case 1, RustboroCity_EventScript_MatchCallTutorial_4
# 173 "data/maps/RustboroCity/scripts.pory"
# 95 "data/maps/RustboroCity/scripts.pory"
# 174 "data/maps/RustboroCity/scripts.pory"
	case 2, RustboroCity_EventScript_MatchCallTutorial_5
# 175 "data/maps/RustboroCity/scripts.pory"
# 97 "data/maps/RustboroCity/scripts.pory"
# 176 "data/maps/RustboroCity/scripts.pory"
	case 4, RustboroCity_EventScript_MatchCallTutorial_6
# 177 "data/maps/RustboroCity/scripts.pory"
# 99 "data/maps/RustboroCity/scripts.pory"
# 178 "data/maps/RustboroCity/scripts.pory"
	case 5, RustboroCity_EventScript_MatchCallTutorial_7
# 179 "data/maps/RustboroCity/scripts.pory"
# 101 "data/maps/RustboroCity/scripts.pory"
# 180 "data/maps/RustboroCity/scripts.pory"
	case 6, RustboroCity_EventScript_MatchCallTutorial_8
# 181 "data/maps/RustboroCity/scripts.pory"
# 103 "data/maps/RustboroCity/scripts.pory"
# 182 "data/maps/RustboroCity/scripts.pory"
	case 7, RustboroCity_EventScript_MatchCallTutorial_9
# 183 "data/maps/RustboroCity/scripts.pory"
# 105 "data/maps/RustboroCity/scripts.pory"
# 184 "data/maps/RustboroCity/scripts.pory"
	case MULTI_B_PRESSED, RustboroCity_EventScript_MatchCallTutorial_10
# 185 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_MatchCallTutorial_1:
# 186 "data/maps/RustboroCity/scripts.pory"
# 108 "data/maps/RustboroCity/scripts.pory"
# 187 "data/maps/RustboroCity/scripts.pory"
	special OpenPokenavForTutorial
# 188 "data/maps/RustboroCity/scripts.pory"
# 109 "data/maps/RustboroCity/scripts.pory"
# 189 "data/maps/RustboroCity/scripts.pory"
	waitstate
# 190 "data/maps/RustboroCity/scripts.pory"
# 110 "data/maps/RustboroCity/scripts.pory"
# 191 "data/maps/RustboroCity/scripts.pory"
	delay 20
# 192 "data/maps/RustboroCity/scripts.pory"
# 111 "data/maps/RustboroCity/scripts.pory"
# 193 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_IdBetterGetBackToWork, MSGBOX_DEFAULT
# 194 "data/maps/RustboroCity/scripts.pory"
# 112 "data/maps/RustboroCity/scripts.pory"
# 195 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 196 "data/maps/RustboroCity/scripts.pory"
# 113 "data/maps/RustboroCity/scripts.pory"
# 197 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_SCIENTIST, RustboroCity_Movement_ScientistLeave
# 198 "data/maps/RustboroCity/scripts.pory"
# 114 "data/maps/RustboroCity/scripts.pory"
# 199 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 200 "data/maps/RustboroCity/scripts.pory"
# 115 "data/maps/RustboroCity/scripts.pory"
# 201 "data/maps/RustboroCity/scripts.pory"
	playse SE_EXIT
# 202 "data/maps/RustboroCity/scripts.pory"
# 116 "data/maps/RustboroCity/scripts.pory"
# 203 "data/maps/RustboroCity/scripts.pory"
	removeobject LOCALID_RUSTBORO_SCIENTIST
# 204 "data/maps/RustboroCity/scripts.pory"
# 117 "data/maps/RustboroCity/scripts.pory"
# 205 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HIDE_RUSTBORO_CITY_SCIENTIST
# 206 "data/maps/RustboroCity/scripts.pory"
# 118 "data/maps/RustboroCity/scripts.pory"
# 207 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 7
# 208 "data/maps/RustboroCity/scripts.pory"
# 119 "data/maps/RustboroCity/scripts.pory"
# 209 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 210 "data/maps/RustboroCity/scripts.pory"
# 120 "data/maps/RustboroCity/scripts.pory"
# 211 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 212 "data/maps/RustboroCity/scripts.pory"
	end
# 213 "data/maps/RustboroCity/scripts.pory"

# 214 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_MatchCallTutorial_3:
# 215 "data/maps/RustboroCity/scripts.pory"
# 92 "data/maps/RustboroCity/scripts.pory"
# 216 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_PleaseSelectPokenav
# 217 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_MatchCallTutorial_1
# 218 "data/maps/RustboroCity/scripts.pory"

# 219 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_MatchCallTutorial_4:
# 220 "data/maps/RustboroCity/scripts.pory"
# 94 "data/maps/RustboroCity/scripts.pory"
# 221 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_PleaseSelectPokenav
# 222 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_MatchCallTutorial_1
# 223 "data/maps/RustboroCity/scripts.pory"

# 224 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_MatchCallTutorial_5:
# 225 "data/maps/RustboroCity/scripts.pory"
# 96 "data/maps/RustboroCity/scripts.pory"
# 226 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_PleaseSelectPokenav
# 227 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_MatchCallTutorial_1
# 228 "data/maps/RustboroCity/scripts.pory"

# 229 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_MatchCallTutorial_6:
# 230 "data/maps/RustboroCity/scripts.pory"
# 98 "data/maps/RustboroCity/scripts.pory"
# 231 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_PleaseSelectPokenav
# 232 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_MatchCallTutorial_1
# 233 "data/maps/RustboroCity/scripts.pory"

# 234 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_MatchCallTutorial_7:
# 235 "data/maps/RustboroCity/scripts.pory"
# 100 "data/maps/RustboroCity/scripts.pory"
# 236 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_PleaseSelectPokenav
# 237 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_MatchCallTutorial_1
# 238 "data/maps/RustboroCity/scripts.pory"

# 239 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_MatchCallTutorial_8:
# 240 "data/maps/RustboroCity/scripts.pory"
# 102 "data/maps/RustboroCity/scripts.pory"
# 241 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_PleaseSelectPokenav
# 242 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_MatchCallTutorial_1
# 243 "data/maps/RustboroCity/scripts.pory"

# 244 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_MatchCallTutorial_9:
# 245 "data/maps/RustboroCity/scripts.pory"
# 104 "data/maps/RustboroCity/scripts.pory"
# 246 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_PleaseSelectPokenav
# 247 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_MatchCallTutorial_1
# 248 "data/maps/RustboroCity/scripts.pory"

# 249 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_MatchCallTutorial_10:
# 250 "data/maps/RustboroCity/scripts.pory"
# 106 "data/maps/RustboroCity/scripts.pory"
# 251 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_PleaseSelectPokenav
# 252 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_MatchCallTutorial_1
# 253 "data/maps/RustboroCity/scripts.pory"

# 254 "data/maps/RustboroCity/scripts.pory"

# 255 "data/maps/RustboroCity/scripts.pory"
# 124 "data/maps/RustboroCity/scripts.pory"
# 256 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_ScientistWalkInPlaceDown:
# 257 "data/maps/RustboroCity/scripts.pory"
# 125 "data/maps/RustboroCity/scripts.pory"
# 258 "data/maps/RustboroCity/scripts.pory"
	walk_in_place_down
# 259 "data/maps/RustboroCity/scripts.pory"
# 126 "data/maps/RustboroCity/scripts.pory"
# 260 "data/maps/RustboroCity/scripts.pory"
	step_end
# 261 "data/maps/RustboroCity/scripts.pory"

# 262 "data/maps/RustboroCity/scripts.pory"
# 129 "data/maps/RustboroCity/scripts.pory"
# 263 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_PlayerWalkDown:
# 264 "data/maps/RustboroCity/scripts.pory"
# 130 "data/maps/RustboroCity/scripts.pory"
# 265 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 266 "data/maps/RustboroCity/scripts.pory"
# 131 "data/maps/RustboroCity/scripts.pory"
# 267 "data/maps/RustboroCity/scripts.pory"
	step_end
# 268 "data/maps/RustboroCity/scripts.pory"

# 269 "data/maps/RustboroCity/scripts.pory"
# 134 "data/maps/RustboroCity/scripts.pory"
# 270 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_ScientistApproachPlayer:
# 271 "data/maps/RustboroCity/scripts.pory"
# 135 "data/maps/RustboroCity/scripts.pory"
# 272 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 273 "data/maps/RustboroCity/scripts.pory"
# 136 "data/maps/RustboroCity/scripts.pory"
# 274 "data/maps/RustboroCity/scripts.pory"
	delay_16
# 275 "data/maps/RustboroCity/scripts.pory"
# 137 "data/maps/RustboroCity/scripts.pory"
# 276 "data/maps/RustboroCity/scripts.pory"
	step_end
# 277 "data/maps/RustboroCity/scripts.pory"

# 278 "data/maps/RustboroCity/scripts.pory"
# 140 "data/maps/RustboroCity/scripts.pory"
# 279 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_ScientistWalkAroundPlayer:
# 280 "data/maps/RustboroCity/scripts.pory"
# 141 "data/maps/RustboroCity/scripts.pory"
# 281 "data/maps/RustboroCity/scripts.pory"
	delay_16
# 282 "data/maps/RustboroCity/scripts.pory"
# 142 "data/maps/RustboroCity/scripts.pory"
# 283 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 284 "data/maps/RustboroCity/scripts.pory"
# 143 "data/maps/RustboroCity/scripts.pory"
# 285 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 286 "data/maps/RustboroCity/scripts.pory"
# 144 "data/maps/RustboroCity/scripts.pory"
# 287 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 288 "data/maps/RustboroCity/scripts.pory"
# 145 "data/maps/RustboroCity/scripts.pory"
# 289 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 290 "data/maps/RustboroCity/scripts.pory"
# 146 "data/maps/RustboroCity/scripts.pory"
# 291 "data/maps/RustboroCity/scripts.pory"
	walk_in_place_faster_up
# 292 "data/maps/RustboroCity/scripts.pory"
# 147 "data/maps/RustboroCity/scripts.pory"
# 293 "data/maps/RustboroCity/scripts.pory"
	delay_16
# 294 "data/maps/RustboroCity/scripts.pory"
# 148 "data/maps/RustboroCity/scripts.pory"
# 295 "data/maps/RustboroCity/scripts.pory"
	step_end
# 296 "data/maps/RustboroCity/scripts.pory"

# 297 "data/maps/RustboroCity/scripts.pory"
# 151 "data/maps/RustboroCity/scripts.pory"
# 298 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_ScientistLeave:
# 299 "data/maps/RustboroCity/scripts.pory"
# 152 "data/maps/RustboroCity/scripts.pory"
# 300 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 301 "data/maps/RustboroCity/scripts.pory"
# 153 "data/maps/RustboroCity/scripts.pory"
# 302 "data/maps/RustboroCity/scripts.pory"
	step_end
# 303 "data/maps/RustboroCity/scripts.pory"

# 304 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_FatMan::
# 305 "data/maps/RustboroCity/scripts.pory"
# 157 "data/maps/RustboroCity/scripts.pory"
# 306 "data/maps/RustboroCity/scripts.pory"
	lock
# 307 "data/maps/RustboroCity/scripts.pory"
# 158 "data/maps/RustboroCity/scripts.pory"
# 308 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 309 "data/maps/RustboroCity/scripts.pory"
# 159 "data/maps/RustboroCity/scripts.pory"
# 310 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_DEVON_GOODS_STOLEN, RustboroCity_EventScript_FatMan_2
# 311 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_FatMan_1:
# 312 "data/maps/RustboroCity/scripts.pory"
# 162 "data/maps/RustboroCity/scripts.pory"
# 313 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_WeShortenItToDevon, MSGBOX_DEFAULT
# 314 "data/maps/RustboroCity/scripts.pory"
# 163 "data/maps/RustboroCity/scripts.pory"
# 315 "data/maps/RustboroCity/scripts.pory"
	release
# 316 "data/maps/RustboroCity/scripts.pory"
	end
# 317 "data/maps/RustboroCity/scripts.pory"

# 318 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_FatMan_2:
# 319 "data/maps/RustboroCity/scripts.pory"
# 160 "data/maps/RustboroCity/scripts.pory"
# 320 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_FatManSawGrunt
# 321 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_FatMan_1
# 322 "data/maps/RustboroCity/scripts.pory"

# 323 "data/maps/RustboroCity/scripts.pory"

# 324 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_FatManSawGrunt::
# 325 "data/maps/RustboroCity/scripts.pory"
# 168 "data/maps/RustboroCity/scripts.pory"
# 326 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_SneakyLookingManWentAroundCorner, MSGBOX_DEFAULT
# 327 "data/maps/RustboroCity/scripts.pory"
# 169 "data/maps/RustboroCity/scripts.pory"
# 328 "data/maps/RustboroCity/scripts.pory"
	release
# 329 "data/maps/RustboroCity/scripts.pory"
	end
# 330 "data/maps/RustboroCity/scripts.pory"

# 331 "data/maps/RustboroCity/scripts.pory"

# 332 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_DevonEmployee2::
# 333 "data/maps/RustboroCity/scripts.pory"
# 174 "data/maps/RustboroCity/scripts.pory"
# 334 "data/maps/RustboroCity/scripts.pory"
	lock
# 335 "data/maps/RustboroCity/scripts.pory"
# 175 "data/maps/RustboroCity/scripts.pory"
# 336 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 337 "data/maps/RustboroCity/scripts.pory"
# 176 "data/maps/RustboroCity/scripts.pory"
# 338 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_YoureNewAroundHere, MSGBOX_DEFAULT
# 339 "data/maps/RustboroCity/scripts.pory"
# 177 "data/maps/RustboroCity/scripts.pory"
# 340 "data/maps/RustboroCity/scripts.pory"
	release
# 341 "data/maps/RustboroCity/scripts.pory"
	end
# 342 "data/maps/RustboroCity/scripts.pory"

# 343 "data/maps/RustboroCity/scripts.pory"

# 344 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Woman::
# 345 "data/maps/RustboroCity/scripts.pory"
# 182 "data/maps/RustboroCity/scripts.pory"
# 346 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_GymLeaderIsntEasyWithFire, MSGBOX_NPC
# 347 "data/maps/RustboroCity/scripts.pory"
	end
# 348 "data/maps/RustboroCity/scripts.pory"

# 349 "data/maps/RustboroCity/scripts.pory"

# 350 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Man1::
# 351 "data/maps/RustboroCity/scripts.pory"
# 187 "data/maps/RustboroCity/scripts.pory"
# 352 "data/maps/RustboroCity/scripts.pory"
	lock
# 353 "data/maps/RustboroCity/scripts.pory"
# 188 "data/maps/RustboroCity/scripts.pory"
# 354 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 355 "data/maps/RustboroCity/scripts.pory"
# 189 "data/maps/RustboroCity/scripts.pory"
# 356 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, RustboroCity_EventScript_Man1_2
# 357 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Man1_1:
# 358 "data/maps/RustboroCity/scripts.pory"
# 192 "data/maps/RustboroCity/scripts.pory"
# 359 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_HaveYouChallengedGym, MSGBOX_DEFAULT
# 360 "data/maps/RustboroCity/scripts.pory"
# 193 "data/maps/RustboroCity/scripts.pory"
# 361 "data/maps/RustboroCity/scripts.pory"
	release
# 362 "data/maps/RustboroCity/scripts.pory"
	end
# 363 "data/maps/RustboroCity/scripts.pory"

# 364 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Man1_2:
# 365 "data/maps/RustboroCity/scripts.pory"
# 190 "data/maps/RustboroCity/scripts.pory"
# 366 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_Man1HaveBadge
# 367 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_Man1_1
# 368 "data/maps/RustboroCity/scripts.pory"

# 369 "data/maps/RustboroCity/scripts.pory"

# 370 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Man1HaveBadge::
# 371 "data/maps/RustboroCity/scripts.pory"
# 198 "data/maps/RustboroCity/scripts.pory"
# 372 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_HeyThatsRustborosGymBadge, MSGBOX_DEFAULT
# 373 "data/maps/RustboroCity/scripts.pory"
# 199 "data/maps/RustboroCity/scripts.pory"
# 374 "data/maps/RustboroCity/scripts.pory"
	release
# 375 "data/maps/RustboroCity/scripts.pory"
	end
# 376 "data/maps/RustboroCity/scripts.pory"

# 377 "data/maps/RustboroCity/scripts.pory"

# 378 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Boy2::
# 379 "data/maps/RustboroCity/scripts.pory"
# 204 "data/maps/RustboroCity/scripts.pory"
# 380 "data/maps/RustboroCity/scripts.pory"
	lock
# 381 "data/maps/RustboroCity/scripts.pory"
# 205 "data/maps/RustboroCity/scripts.pory"
# 382 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 383 "data/maps/RustboroCity/scripts.pory"
# 206 "data/maps/RustboroCity/scripts.pory"
# 384 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_RECEIVED_POKENAV, RustboroCity_EventScript_Boy2_2
# 385 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Boy2_1:
# 386 "data/maps/RustboroCity/scripts.pory"
# 209 "data/maps/RustboroCity/scripts.pory"
# 387 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MrBrineyWalksInTheTunnel, MSGBOX_DEFAULT
# 388 "data/maps/RustboroCity/scripts.pory"
# 210 "data/maps/RustboroCity/scripts.pory"
# 389 "data/maps/RustboroCity/scripts.pory"
	release
# 390 "data/maps/RustboroCity/scripts.pory"
	end
# 391 "data/maps/RustboroCity/scripts.pory"

# 392 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Boy2_2:
# 393 "data/maps/RustboroCity/scripts.pory"
# 207 "data/maps/RustboroCity/scripts.pory"
# 394 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_Boy2BrineyLeftTunnel
# 395 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_Boy2_1
# 396 "data/maps/RustboroCity/scripts.pory"

# 397 "data/maps/RustboroCity/scripts.pory"

# 398 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Boy2BrineyLeftTunnel::
# 399 "data/maps/RustboroCity/scripts.pory"
# 215 "data/maps/RustboroCity/scripts.pory"
# 400 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MrBrineyLovesPeeko, MSGBOX_DEFAULT
# 401 "data/maps/RustboroCity/scripts.pory"
# 216 "data/maps/RustboroCity/scripts.pory"
# 402 "data/maps/RustboroCity/scripts.pory"
	release
# 403 "data/maps/RustboroCity/scripts.pory"
	end
# 404 "data/maps/RustboroCity/scripts.pory"

# 405 "data/maps/RustboroCity/scripts.pory"

# 406 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Twin::
# 407 "data/maps/RustboroCity/scripts.pory"
# 221 "data/maps/RustboroCity/scripts.pory"
# 408 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_WowYouHavePokemon, MSGBOX_NPC
# 409 "data/maps/RustboroCity/scripts.pory"
	end
# 410 "data/maps/RustboroCity/scripts.pory"

# 411 "data/maps/RustboroCity/scripts.pory"

# 412 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_NinjaBoy::
# 413 "data/maps/RustboroCity/scripts.pory"
# 226 "data/maps/RustboroCity/scripts.pory"
# 414 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_CatchRarePokemonIfIGoToSchool, MSGBOX_SIGN
# 415 "data/maps/RustboroCity/scripts.pory"
	end
# 416 "data/maps/RustboroCity/scripts.pory"

# 417 "data/maps/RustboroCity/scripts.pory"

# 418 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_TunnelSign::
# 419 "data/maps/RustboroCity/scripts.pory"
# 231 "data/maps/RustboroCity/scripts.pory"
# 420 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_TunnelNearingCompletion, MSGBOX_SIGN
# 421 "data/maps/RustboroCity/scripts.pory"
	end
# 422 "data/maps/RustboroCity/scripts.pory"

# 423 "data/maps/RustboroCity/scripts.pory"

# 424 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_DevonCorpSign::
# 425 "data/maps/RustboroCity/scripts.pory"
# 236 "data/maps/RustboroCity/scripts.pory"
# 426 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_DevonCorpSign, MSGBOX_SIGN
# 427 "data/maps/RustboroCity/scripts.pory"
	end
# 428 "data/maps/RustboroCity/scripts.pory"

# 429 "data/maps/RustboroCity/scripts.pory"

# 430 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_GymSign::
# 431 "data/maps/RustboroCity/scripts.pory"
# 241 "data/maps/RustboroCity/scripts.pory"
# 432 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_GymSign, MSGBOX_SIGN
# 433 "data/maps/RustboroCity/scripts.pory"
	end
# 434 "data/maps/RustboroCity/scripts.pory"

# 435 "data/maps/RustboroCity/scripts.pory"

# 436 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_DevonCorpBranchOfficeSign::
# 437 "data/maps/RustboroCity/scripts.pory"
# 246 "data/maps/RustboroCity/scripts.pory"
# 438 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_DevonCorpBranchOfficeSign, MSGBOX_SIGN
# 439 "data/maps/RustboroCity/scripts.pory"
	end
# 440 "data/maps/RustboroCity/scripts.pory"

# 441 "data/maps/RustboroCity/scripts.pory"

# 442 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_CitySign::
# 443 "data/maps/RustboroCity/scripts.pory"
# 251 "data/maps/RustboroCity/scripts.pory"
# 444 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_CitySign, MSGBOX_SIGN
# 445 "data/maps/RustboroCity/scripts.pory"
	end
# 446 "data/maps/RustboroCity/scripts.pory"

# 447 "data/maps/RustboroCity/scripts.pory"

# 448 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_TrainersSchoolSign::
# 449 "data/maps/RustboroCity/scripts.pory"
# 256 "data/maps/RustboroCity/scripts.pory"
# 450 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_TrainersSchoolSign, MSGBOX_SIGN
# 451 "data/maps/RustboroCity/scripts.pory"
	end
# 452 "data/maps/RustboroCity/scripts.pory"

# 453 "data/maps/RustboroCity/scripts.pory"

# 454 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_CuttersHouseSign::
# 455 "data/maps/RustboroCity/scripts.pory"
# 261 "data/maps/RustboroCity/scripts.pory"
# 456 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_CuttersHouse, MSGBOX_SIGN
# 457 "data/maps/RustboroCity/scripts.pory"
	end
# 458 "data/maps/RustboroCity/scripts.pory"

# 459 "data/maps/RustboroCity/scripts.pory"

# 460 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_LittleBoy::
# 461 "data/maps/RustboroCity/scripts.pory"
# 266 "data/maps/RustboroCity/scripts.pory"
# 462 "data/maps/RustboroCity/scripts.pory"
	lock
# 463 "data/maps/RustboroCity/scripts.pory"
# 267 "data/maps/RustboroCity/scripts.pory"
# 464 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 465 "data/maps/RustboroCity/scripts.pory"
# 268 "data/maps/RustboroCity/scripts.pory"
# 466 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_PokemonCanChangeLookFromExp, MSGBOX_DEFAULT
# 467 "data/maps/RustboroCity/scripts.pory"
# 269 "data/maps/RustboroCity/scripts.pory"
# 468 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_LITTLE_BOY, Common_Movement_FaceOriginalDirection
# 469 "data/maps/RustboroCity/scripts.pory"
# 270 "data/maps/RustboroCity/scripts.pory"
# 470 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 471 "data/maps/RustboroCity/scripts.pory"
# 271 "data/maps/RustboroCity/scripts.pory"
# 472 "data/maps/RustboroCity/scripts.pory"
	release
# 473 "data/maps/RustboroCity/scripts.pory"
	end
# 474 "data/maps/RustboroCity/scripts.pory"

# 475 "data/maps/RustboroCity/scripts.pory"

# 476 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_LittleGirl::
# 477 "data/maps/RustboroCity/scripts.pory"
# 276 "data/maps/RustboroCity/scripts.pory"
# 478 "data/maps/RustboroCity/scripts.pory"
	lock
# 479 "data/maps/RustboroCity/scripts.pory"
# 277 "data/maps/RustboroCity/scripts.pory"
# 480 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 481 "data/maps/RustboroCity/scripts.pory"
# 278 "data/maps/RustboroCity/scripts.pory"
# 482 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_PokemonChangeShape, MSGBOX_DEFAULT
# 483 "data/maps/RustboroCity/scripts.pory"
# 279 "data/maps/RustboroCity/scripts.pory"
# 484 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_LITTLE_GIRL, Common_Movement_FaceOriginalDirection
# 485 "data/maps/RustboroCity/scripts.pory"
# 280 "data/maps/RustboroCity/scripts.pory"
# 486 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 487 "data/maps/RustboroCity/scripts.pory"
# 281 "data/maps/RustboroCity/scripts.pory"
# 488 "data/maps/RustboroCity/scripts.pory"
	release
# 489 "data/maps/RustboroCity/scripts.pory"
	end
# 490 "data/maps/RustboroCity/scripts.pory"

# 491 "data/maps/RustboroCity/scripts.pory"

# 492 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Man2::
# 493 "data/maps/RustboroCity/scripts.pory"
# 286 "data/maps/RustboroCity/scripts.pory"
# 494 "data/maps/RustboroCity/scripts.pory"
	lock
# 495 "data/maps/RustboroCity/scripts.pory"
# 287 "data/maps/RustboroCity/scripts.pory"
# 496 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 497 "data/maps/RustboroCity/scripts.pory"
# 288 "data/maps/RustboroCity/scripts.pory"
# 498 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_TradePokemonGrowFast, MSGBOX_DEFAULT
# 499 "data/maps/RustboroCity/scripts.pory"
# 289 "data/maps/RustboroCity/scripts.pory"
# 500 "data/maps/RustboroCity/scripts.pory"
	release
# 501 "data/maps/RustboroCity/scripts.pory"
	end
# 502 "data/maps/RustboroCity/scripts.pory"

# 503 "data/maps/RustboroCity/scripts.pory"

# 504 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsTrigger0::
# 505 "data/maps/RustboroCity/scripts.pory"
# 294 "data/maps/RustboroCity/scripts.pory"
# 506 "data/maps/RustboroCity/scripts.pory"
	lockall
# 507 "data/maps/RustboroCity/scripts.pory"
# 295 "data/maps/RustboroCity/scripts.pory"
# 508 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_RUSTBORO_DEVON_EMPLOYEE, 14, 21
# 509 "data/maps/RustboroCity/scripts.pory"
# 296 "data/maps/RustboroCity/scripts.pory"
# 510 "data/maps/RustboroCity/scripts.pory"
	setobjectmovementtype LOCALID_RUSTBORO_DEVON_EMPLOYEE, MOVEMENT_TYPE_FACE_RIGHT
# 511 "data/maps/RustboroCity/scripts.pory"
# 297 "data/maps/RustboroCity/scripts.pory"
# 512 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8004, 0
# 513 "data/maps/RustboroCity/scripts.pory"
# 298 "data/maps/RustboroCity/scripts.pory"
# 514 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_StolenGoodsScene
# 515 "data/maps/RustboroCity/scripts.pory"
	end
# 516 "data/maps/RustboroCity/scripts.pory"

# 517 "data/maps/RustboroCity/scripts.pory"

# 518 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsTrigger1::
# 519 "data/maps/RustboroCity/scripts.pory"
# 303 "data/maps/RustboroCity/scripts.pory"
# 520 "data/maps/RustboroCity/scripts.pory"
	lockall
# 521 "data/maps/RustboroCity/scripts.pory"
# 304 "data/maps/RustboroCity/scripts.pory"
# 522 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_RUSTBORO_DEVON_EMPLOYEE, 14, 21
# 523 "data/maps/RustboroCity/scripts.pory"
# 305 "data/maps/RustboroCity/scripts.pory"
# 524 "data/maps/RustboroCity/scripts.pory"
	setobjectmovementtype LOCALID_RUSTBORO_DEVON_EMPLOYEE, MOVEMENT_TYPE_FACE_RIGHT
# 525 "data/maps/RustboroCity/scripts.pory"
# 306 "data/maps/RustboroCity/scripts.pory"
# 526 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8004, 1
# 527 "data/maps/RustboroCity/scripts.pory"
# 307 "data/maps/RustboroCity/scripts.pory"
# 528 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_StolenGoodsScene
# 529 "data/maps/RustboroCity/scripts.pory"
	end
# 530 "data/maps/RustboroCity/scripts.pory"

# 531 "data/maps/RustboroCity/scripts.pory"

# 532 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsTrigger2::
# 533 "data/maps/RustboroCity/scripts.pory"
# 312 "data/maps/RustboroCity/scripts.pory"
# 534 "data/maps/RustboroCity/scripts.pory"
	lockall
# 535 "data/maps/RustboroCity/scripts.pory"
# 313 "data/maps/RustboroCity/scripts.pory"
# 536 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_RUSTBORO_DEVON_EMPLOYEE, 14, 21
# 537 "data/maps/RustboroCity/scripts.pory"
# 314 "data/maps/RustboroCity/scripts.pory"
# 538 "data/maps/RustboroCity/scripts.pory"
	setobjectmovementtype LOCALID_RUSTBORO_DEVON_EMPLOYEE, MOVEMENT_TYPE_FACE_RIGHT
# 539 "data/maps/RustboroCity/scripts.pory"
# 315 "data/maps/RustboroCity/scripts.pory"
# 540 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8004, 2
# 541 "data/maps/RustboroCity/scripts.pory"
# 316 "data/maps/RustboroCity/scripts.pory"
# 542 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_StolenGoodsScene
# 543 "data/maps/RustboroCity/scripts.pory"
	end
# 544 "data/maps/RustboroCity/scripts.pory"

# 545 "data/maps/RustboroCity/scripts.pory"

# 546 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsTrigger3::
# 547 "data/maps/RustboroCity/scripts.pory"
# 321 "data/maps/RustboroCity/scripts.pory"
# 548 "data/maps/RustboroCity/scripts.pory"
	lockall
# 549 "data/maps/RustboroCity/scripts.pory"
# 322 "data/maps/RustboroCity/scripts.pory"
# 550 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_RUSTBORO_DEVON_EMPLOYEE, 14, 21
# 551 "data/maps/RustboroCity/scripts.pory"
# 323 "data/maps/RustboroCity/scripts.pory"
# 552 "data/maps/RustboroCity/scripts.pory"
	setobjectmovementtype LOCALID_RUSTBORO_DEVON_EMPLOYEE, MOVEMENT_TYPE_FACE_RIGHT
# 553 "data/maps/RustboroCity/scripts.pory"
# 324 "data/maps/RustboroCity/scripts.pory"
# 554 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8004, 3
# 555 "data/maps/RustboroCity/scripts.pory"
# 325 "data/maps/RustboroCity/scripts.pory"
# 556 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_StolenGoodsScene
# 557 "data/maps/RustboroCity/scripts.pory"
	end
# 558 "data/maps/RustboroCity/scripts.pory"

# 559 "data/maps/RustboroCity/scripts.pory"

# 560 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsTrigger4::
# 561 "data/maps/RustboroCity/scripts.pory"
# 330 "data/maps/RustboroCity/scripts.pory"
# 562 "data/maps/RustboroCity/scripts.pory"
	lockall
# 563 "data/maps/RustboroCity/scripts.pory"
# 331 "data/maps/RustboroCity/scripts.pory"
# 564 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_RUSTBORO_DEVON_EMPLOYEE, 14, 21
# 565 "data/maps/RustboroCity/scripts.pory"
# 332 "data/maps/RustboroCity/scripts.pory"
# 566 "data/maps/RustboroCity/scripts.pory"
	setobjectmovementtype LOCALID_RUSTBORO_DEVON_EMPLOYEE, MOVEMENT_TYPE_FACE_RIGHT
# 567 "data/maps/RustboroCity/scripts.pory"
# 333 "data/maps/RustboroCity/scripts.pory"
# 568 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8004, 4
# 569 "data/maps/RustboroCity/scripts.pory"
# 334 "data/maps/RustboroCity/scripts.pory"
# 570 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_StolenGoodsScene
# 571 "data/maps/RustboroCity/scripts.pory"
	end
# 572 "data/maps/RustboroCity/scripts.pory"

# 573 "data/maps/RustboroCity/scripts.pory"

# 574 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsScene::
# 575 "data/maps/RustboroCity/scripts.pory"
# 339 "data/maps/RustboroCity/scripts.pory"
# 576 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_OutOfTheWay, MSGBOX_DEFAULT
# 577 "data/maps/RustboroCity/scripts.pory"
# 340 "data/maps/RustboroCity/scripts.pory"
# 578 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 579 "data/maps/RustboroCity/scripts.pory"
# 341 "data/maps/RustboroCity/scripts.pory"
# 580 "data/maps/RustboroCity/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 581 "data/maps/RustboroCity/scripts.pory"
# 342 "data/maps/RustboroCity/scripts.pory"
# 582 "data/maps/RustboroCity/scripts.pory"
	addobject LOCALID_RUSTBORO_GRUNT
# 583 "data/maps/RustboroCity/scripts.pory"
# 343 "data/maps/RustboroCity/scripts.pory"
# 584 "data/maps/RustboroCity/scripts.pory"
	addobject LOCALID_RUSTBORO_DEVON_EMPLOYEE
# 585 "data/maps/RustboroCity/scripts.pory"
# 344 "data/maps/RustboroCity/scripts.pory"
# 586 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_GRUNT, RustboroCity_Movement_GruntEscape
# 587 "data/maps/RustboroCity/scripts.pory"
# 345 "data/maps/RustboroCity/scripts.pory"
# 588 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 589 "data/maps/RustboroCity/scripts.pory"
# 346 "data/maps/RustboroCity/scripts.pory"
# 590 "data/maps/RustboroCity/scripts.pory"
	removeobject LOCALID_RUSTBORO_GRUNT
# 591 "data/maps/RustboroCity/scripts.pory"
# 347 "data/maps/RustboroCity/scripts.pory"
# 592 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeChaseGrunt1
# 593 "data/maps/RustboroCity/scripts.pory"
# 348 "data/maps/RustboroCity/scripts.pory"
# 594 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 595 "data/maps/RustboroCity/scripts.pory"
# 349 "data/maps/RustboroCity/scripts.pory"
# 596 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_WaitDontTakeMyGoods, MSGBOX_DEFAULT
# 597 "data/maps/RustboroCity/scripts.pory"
# 350 "data/maps/RustboroCity/scripts.pory"
# 598 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 599 "data/maps/RustboroCity/scripts.pory"
# 351 "data/maps/RustboroCity/scripts.pory"
# 600 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeChaseGrunt2
# 601 "data/maps/RustboroCity/scripts.pory"
# 352 "data/maps/RustboroCity/scripts.pory"
# 602 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 603 "data/maps/RustboroCity/scripts.pory"
# 353 "data/maps/RustboroCity/scripts.pory"
# 604 "data/maps/RustboroCity/scripts.pory"
	fadedefaultbgm
# 605 "data/maps/RustboroCity/scripts.pory"
# 354 "data/maps/RustboroCity/scripts.pory"
# 606 "data/maps/RustboroCity/scripts.pory"
	removeobject LOCALID_RUSTBORO_DEVON_EMPLOYEE
# 607 "data/maps/RustboroCity/scripts.pory"
# 355 "data/maps/RustboroCity/scripts.pory"
# 608 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_RUSTBORO_DEVON_EMPLOYEE, 30, 10
# 609 "data/maps/RustboroCity/scripts.pory"
# 356 "data/maps/RustboroCity/scripts.pory"
# 610 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_HIDE_RUSTBORO_CITY_DEVON_EMPLOYEE_1
# 611 "data/maps/RustboroCity/scripts.pory"
# 357 "data/maps/RustboroCity/scripts.pory"
# 612 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_DEVON_GOODS_STOLEN
# 613 "data/maps/RustboroCity/scripts.pory"
# 358 "data/maps/RustboroCity/scripts.pory"
# 614 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 2
# 615 "data/maps/RustboroCity/scripts.pory"
# 359 "data/maps/RustboroCity/scripts.pory"
# 616 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTURF_TUNNEL_STATE, 2
# 617 "data/maps/RustboroCity/scripts.pory"
# 360 "data/maps/RustboroCity/scripts.pory"
# 618 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_ROUTE116_STATE, 1
# 619 "data/maps/RustboroCity/scripts.pory"
# 361 "data/maps/RustboroCity/scripts.pory"
# 620 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_116_MR_BRINEY
# 621 "data/maps/RustboroCity/scripts.pory"
# 362 "data/maps/RustboroCity/scripts.pory"
# 622 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_HIDE_RUSTURF_TUNNEL_PEEKO
# 623 "data/maps/RustboroCity/scripts.pory"
# 363 "data/maps/RustboroCity/scripts.pory"
# 624 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_HIDE_RUSTURF_TUNNEL_AQUA_GRUNT
# 625 "data/maps/RustboroCity/scripts.pory"
# 364 "data/maps/RustboroCity/scripts.pory"
# 626 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HIDE_BRINEYS_HOUSE_MR_BRINEY
# 627 "data/maps/RustboroCity/scripts.pory"
# 365 "data/maps/RustboroCity/scripts.pory"
# 628 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HIDE_BRINEYS_HOUSE_PEEKO
# 629 "data/maps/RustboroCity/scripts.pory"
# 366 "data/maps/RustboroCity/scripts.pory"
# 630 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 631 "data/maps/RustboroCity/scripts.pory"
	end
# 632 "data/maps/RustboroCity/scripts.pory"

# 633 "data/maps/RustboroCity/scripts.pory"

# 634 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ShadyCharacterTookOff::
# 635 "data/maps/RustboroCity/scripts.pory"
# 371 "data/maps/RustboroCity/scripts.pory"
# 636 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_ShadyCharacterTookOffTowardsTunnel, MSGBOX_DEFAULT
# 637 "data/maps/RustboroCity/scripts.pory"
	return
# 638 "data/maps/RustboroCity/scripts.pory"

# 639 "data/maps/RustboroCity/scripts.pory"

# 640 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_YouGotItThankYou::
# 641 "data/maps/RustboroCity/scripts.pory"
# 376 "data/maps/RustboroCity/scripts.pory"
# 642 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_YouGotItThankYou, MSGBOX_DEFAULT
# 643 "data/maps/RustboroCity/scripts.pory"
	return
# 644 "data/maps/RustboroCity/scripts.pory"

# 645 "data/maps/RustboroCity/scripts.pory"

# 646 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeApproachUp::
# 647 "data/maps/RustboroCity/scripts.pory"
# 381 "data/maps/RustboroCity/scripts.pory"
# 648 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachUp
# 649 "data/maps/RustboroCity/scripts.pory"
# 382 "data/maps/RustboroCity/scripts.pory"
# 650 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 651 "data/maps/RustboroCity/scripts.pory"
	return
# 652 "data/maps/RustboroCity/scripts.pory"

# 653 "data/maps/RustboroCity/scripts.pory"

# 654 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeApproachLeft::
# 655 "data/maps/RustboroCity/scripts.pory"
# 387 "data/maps/RustboroCity/scripts.pory"
# 656 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachLeft
# 657 "data/maps/RustboroCity/scripts.pory"
# 388 "data/maps/RustboroCity/scripts.pory"
# 658 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 659 "data/maps/RustboroCity/scripts.pory"
	return
# 660 "data/maps/RustboroCity/scripts.pory"

# 661 "data/maps/RustboroCity/scripts.pory"

# 662 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeApproachRight::
# 663 "data/maps/RustboroCity/scripts.pory"
# 393 "data/maps/RustboroCity/scripts.pory"
# 664 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachRight
# 665 "data/maps/RustboroCity/scripts.pory"
# 394 "data/maps/RustboroCity/scripts.pory"
# 666 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 667 "data/maps/RustboroCity/scripts.pory"
	return
# 668 "data/maps/RustboroCity/scripts.pory"

# 669 "data/maps/RustboroCity/scripts.pory"

# 670 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeApproachDown::
# 671 "data/maps/RustboroCity/scripts.pory"
# 399 "data/maps/RustboroCity/scripts.pory"
# 672 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachDown
# 673 "data/maps/RustboroCity/scripts.pory"
# 400 "data/maps/RustboroCity/scripts.pory"
# 674 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 675 "data/maps/RustboroCity/scripts.pory"
	return
# 676 "data/maps/RustboroCity/scripts.pory"

# 677 "data/maps/RustboroCity/scripts.pory"

# 678 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeApproachPlayerFar::
# 679 "data/maps/RustboroCity/scripts.pory"
# 405 "data/maps/RustboroCity/scripts.pory"
# 680 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachPlayerFar
# 681 "data/maps/RustboroCity/scripts.pory"
# 406 "data/maps/RustboroCity/scripts.pory"
# 682 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 683 "data/maps/RustboroCity/scripts.pory"
# 407 "data/maps/RustboroCity/scripts.pory"
# 684 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 685 "data/maps/RustboroCity/scripts.pory"
# 408 "data/maps/RustboroCity/scripts.pory"
# 686 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 687 "data/maps/RustboroCity/scripts.pory"
	return
# 688 "data/maps/RustboroCity/scripts.pory"

# 689 "data/maps/RustboroCity/scripts.pory"

# 690 "data/maps/RustboroCity/scripts.pory"
# 412 "data/maps/RustboroCity/scripts.pory"
# 691 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_GruntEscapeExtended:
# 692 "data/maps/RustboroCity/scripts.pory"
# 413 "data/maps/RustboroCity/scripts.pory"
# 693 "data/maps/RustboroCity/scripts.pory"
	walk_faster_right
# 694 "data/maps/RustboroCity/scripts.pory"
# 414 "data/maps/RustboroCity/scripts.pory"
# 695 "data/maps/RustboroCity/scripts.pory"
	walk_faster_right
# 696 "data/maps/RustboroCity/scripts.pory"
# 415 "data/maps/RustboroCity/scripts.pory"
# 697 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 698 "data/maps/RustboroCity/scripts.pory"
# 416 "data/maps/RustboroCity/scripts.pory"
# 699 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 700 "data/maps/RustboroCity/scripts.pory"
# 417 "data/maps/RustboroCity/scripts.pory"
# 701 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 702 "data/maps/RustboroCity/scripts.pory"
# 418 "data/maps/RustboroCity/scripts.pory"
# 703 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 704 "data/maps/RustboroCity/scripts.pory"
# 419 "data/maps/RustboroCity/scripts.pory"
# 705 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 706 "data/maps/RustboroCity/scripts.pory"
# 420 "data/maps/RustboroCity/scripts.pory"
# 707 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 708 "data/maps/RustboroCity/scripts.pory"
# 421 "data/maps/RustboroCity/scripts.pory"
# 709 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 710 "data/maps/RustboroCity/scripts.pory"
# 422 "data/maps/RustboroCity/scripts.pory"
# 711 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 712 "data/maps/RustboroCity/scripts.pory"
# 423 "data/maps/RustboroCity/scripts.pory"
# 713 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 714 "data/maps/RustboroCity/scripts.pory"
# 424 "data/maps/RustboroCity/scripts.pory"
# 715 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 716 "data/maps/RustboroCity/scripts.pory"
# 425 "data/maps/RustboroCity/scripts.pory"
# 717 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 718 "data/maps/RustboroCity/scripts.pory"
# 426 "data/maps/RustboroCity/scripts.pory"
# 719 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 720 "data/maps/RustboroCity/scripts.pory"
# 427 "data/maps/RustboroCity/scripts.pory"
# 721 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 722 "data/maps/RustboroCity/scripts.pory"
# 428 "data/maps/RustboroCity/scripts.pory"
# 723 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 724 "data/maps/RustboroCity/scripts.pory"
# 429 "data/maps/RustboroCity/scripts.pory"
# 725 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 726 "data/maps/RustboroCity/scripts.pory"
# 430 "data/maps/RustboroCity/scripts.pory"
# 727 "data/maps/RustboroCity/scripts.pory"
	step_end
# 728 "data/maps/RustboroCity/scripts.pory"

# 729 "data/maps/RustboroCity/scripts.pory"
# 433 "data/maps/RustboroCity/scripts.pory"
# 730 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_GruntEscape:
# 731 "data/maps/RustboroCity/scripts.pory"
# 434 "data/maps/RustboroCity/scripts.pory"
# 732 "data/maps/RustboroCity/scripts.pory"
	walk_faster_right
# 733 "data/maps/RustboroCity/scripts.pory"
# 435 "data/maps/RustboroCity/scripts.pory"
# 734 "data/maps/RustboroCity/scripts.pory"
	walk_faster_right
# 735 "data/maps/RustboroCity/scripts.pory"
# 436 "data/maps/RustboroCity/scripts.pory"
# 736 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 737 "data/maps/RustboroCity/scripts.pory"
# 437 "data/maps/RustboroCity/scripts.pory"
# 738 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 739 "data/maps/RustboroCity/scripts.pory"
# 438 "data/maps/RustboroCity/scripts.pory"
# 740 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 741 "data/maps/RustboroCity/scripts.pory"
# 439 "data/maps/RustboroCity/scripts.pory"
# 742 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 743 "data/maps/RustboroCity/scripts.pory"
# 440 "data/maps/RustboroCity/scripts.pory"
# 744 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 745 "data/maps/RustboroCity/scripts.pory"
# 441 "data/maps/RustboroCity/scripts.pory"
# 746 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 747 "data/maps/RustboroCity/scripts.pory"
# 442 "data/maps/RustboroCity/scripts.pory"
# 748 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 749 "data/maps/RustboroCity/scripts.pory"
# 443 "data/maps/RustboroCity/scripts.pory"
# 750 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 751 "data/maps/RustboroCity/scripts.pory"
# 444 "data/maps/RustboroCity/scripts.pory"
# 752 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 753 "data/maps/RustboroCity/scripts.pory"
# 445 "data/maps/RustboroCity/scripts.pory"
# 754 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 755 "data/maps/RustboroCity/scripts.pory"
# 446 "data/maps/RustboroCity/scripts.pory"
# 756 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 757 "data/maps/RustboroCity/scripts.pory"
# 447 "data/maps/RustboroCity/scripts.pory"
# 758 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 759 "data/maps/RustboroCity/scripts.pory"
# 448 "data/maps/RustboroCity/scripts.pory"
# 760 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 761 "data/maps/RustboroCity/scripts.pory"
# 449 "data/maps/RustboroCity/scripts.pory"
# 762 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 763 "data/maps/RustboroCity/scripts.pory"
# 450 "data/maps/RustboroCity/scripts.pory"
# 764 "data/maps/RustboroCity/scripts.pory"
	step_end
# 765 "data/maps/RustboroCity/scripts.pory"

# 766 "data/maps/RustboroCity/scripts.pory"
# 453 "data/maps/RustboroCity/scripts.pory"
# 767 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeChaseGrunt1:
# 768 "data/maps/RustboroCity/scripts.pory"
# 454 "data/maps/RustboroCity/scripts.pory"
# 769 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 770 "data/maps/RustboroCity/scripts.pory"
# 455 "data/maps/RustboroCity/scripts.pory"
# 771 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 772 "data/maps/RustboroCity/scripts.pory"
# 456 "data/maps/RustboroCity/scripts.pory"
# 773 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 774 "data/maps/RustboroCity/scripts.pory"
# 457 "data/maps/RustboroCity/scripts.pory"
# 775 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 776 "data/maps/RustboroCity/scripts.pory"
# 458 "data/maps/RustboroCity/scripts.pory"
# 777 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 778 "data/maps/RustboroCity/scripts.pory"
# 459 "data/maps/RustboroCity/scripts.pory"
# 779 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 780 "data/maps/RustboroCity/scripts.pory"
# 460 "data/maps/RustboroCity/scripts.pory"
# 781 "data/maps/RustboroCity/scripts.pory"
	walk_in_place_faster_up
# 782 "data/maps/RustboroCity/scripts.pory"
# 461 "data/maps/RustboroCity/scripts.pory"
# 783 "data/maps/RustboroCity/scripts.pory"
	step_end
# 784 "data/maps/RustboroCity/scripts.pory"

# 785 "data/maps/RustboroCity/scripts.pory"
# 464 "data/maps/RustboroCity/scripts.pory"
# 786 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeChaseGrunt2:
# 787 "data/maps/RustboroCity/scripts.pory"
# 465 "data/maps/RustboroCity/scripts.pory"
# 788 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 789 "data/maps/RustboroCity/scripts.pory"
# 466 "data/maps/RustboroCity/scripts.pory"
# 790 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 791 "data/maps/RustboroCity/scripts.pory"
# 467 "data/maps/RustboroCity/scripts.pory"
# 792 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 793 "data/maps/RustboroCity/scripts.pory"
# 468 "data/maps/RustboroCity/scripts.pory"
# 794 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 795 "data/maps/RustboroCity/scripts.pory"
# 469 "data/maps/RustboroCity/scripts.pory"
# 796 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 797 "data/maps/RustboroCity/scripts.pory"
# 470 "data/maps/RustboroCity/scripts.pory"
# 798 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 799 "data/maps/RustboroCity/scripts.pory"
# 471 "data/maps/RustboroCity/scripts.pory"
# 800 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 801 "data/maps/RustboroCity/scripts.pory"
# 472 "data/maps/RustboroCity/scripts.pory"
# 802 "data/maps/RustboroCity/scripts.pory"
	step_end
# 803 "data/maps/RustboroCity/scripts.pory"

# 804 "data/maps/RustboroCity/scripts.pory"
# 475 "data/maps/RustboroCity/scripts.pory"
# 805 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeApproachUp:
# 806 "data/maps/RustboroCity/scripts.pory"
# 476 "data/maps/RustboroCity/scripts.pory"
# 807 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 808 "data/maps/RustboroCity/scripts.pory"
# 477 "data/maps/RustboroCity/scripts.pory"
# 809 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 810 "data/maps/RustboroCity/scripts.pory"
# 478 "data/maps/RustboroCity/scripts.pory"
# 811 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 812 "data/maps/RustboroCity/scripts.pory"
# 479 "data/maps/RustboroCity/scripts.pory"
# 813 "data/maps/RustboroCity/scripts.pory"
	step_end
# 814 "data/maps/RustboroCity/scripts.pory"

# 815 "data/maps/RustboroCity/scripts.pory"
# 482 "data/maps/RustboroCity/scripts.pory"
# 816 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeApproachLeft:
# 817 "data/maps/RustboroCity/scripts.pory"
# 483 "data/maps/RustboroCity/scripts.pory"
# 818 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 819 "data/maps/RustboroCity/scripts.pory"
# 484 "data/maps/RustboroCity/scripts.pory"
# 820 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 821 "data/maps/RustboroCity/scripts.pory"
# 485 "data/maps/RustboroCity/scripts.pory"
# 822 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 823 "data/maps/RustboroCity/scripts.pory"
# 486 "data/maps/RustboroCity/scripts.pory"
# 824 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 825 "data/maps/RustboroCity/scripts.pory"
# 487 "data/maps/RustboroCity/scripts.pory"
# 826 "data/maps/RustboroCity/scripts.pory"
	step_end
# 827 "data/maps/RustboroCity/scripts.pory"

# 828 "data/maps/RustboroCity/scripts.pory"
# 490 "data/maps/RustboroCity/scripts.pory"
# 829 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeApproachRight:
# 830 "data/maps/RustboroCity/scripts.pory"
# 491 "data/maps/RustboroCity/scripts.pory"
# 831 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 832 "data/maps/RustboroCity/scripts.pory"
# 492 "data/maps/RustboroCity/scripts.pory"
# 833 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 834 "data/maps/RustboroCity/scripts.pory"
# 493 "data/maps/RustboroCity/scripts.pory"
# 835 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 836 "data/maps/RustboroCity/scripts.pory"
# 494 "data/maps/RustboroCity/scripts.pory"
# 837 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 838 "data/maps/RustboroCity/scripts.pory"
# 495 "data/maps/RustboroCity/scripts.pory"
# 839 "data/maps/RustboroCity/scripts.pory"
	step_end
# 840 "data/maps/RustboroCity/scripts.pory"

# 841 "data/maps/RustboroCity/scripts.pory"
# 498 "data/maps/RustboroCity/scripts.pory"
# 842 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeApproachDown:
# 843 "data/maps/RustboroCity/scripts.pory"
# 499 "data/maps/RustboroCity/scripts.pory"
# 844 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 845 "data/maps/RustboroCity/scripts.pory"
# 500 "data/maps/RustboroCity/scripts.pory"
# 846 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 847 "data/maps/RustboroCity/scripts.pory"
# 501 "data/maps/RustboroCity/scripts.pory"
# 848 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 849 "data/maps/RustboroCity/scripts.pory"
# 502 "data/maps/RustboroCity/scripts.pory"
# 850 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 851 "data/maps/RustboroCity/scripts.pory"
# 503 "data/maps/RustboroCity/scripts.pory"
# 852 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 853 "data/maps/RustboroCity/scripts.pory"
# 504 "data/maps/RustboroCity/scripts.pory"
# 854 "data/maps/RustboroCity/scripts.pory"
	step_end
# 855 "data/maps/RustboroCity/scripts.pory"

# 856 "data/maps/RustboroCity/scripts.pory"
# 507 "data/maps/RustboroCity/scripts.pory"
# 857 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeApproachPlayerFar:
# 858 "data/maps/RustboroCity/scripts.pory"
# 508 "data/maps/RustboroCity/scripts.pory"
# 859 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 860 "data/maps/RustboroCity/scripts.pory"
# 509 "data/maps/RustboroCity/scripts.pory"
# 861 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 862 "data/maps/RustboroCity/scripts.pory"
# 510 "data/maps/RustboroCity/scripts.pory"
# 863 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 864 "data/maps/RustboroCity/scripts.pory"
# 511 "data/maps/RustboroCity/scripts.pory"
# 865 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 866 "data/maps/RustboroCity/scripts.pory"
# 512 "data/maps/RustboroCity/scripts.pory"
# 867 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 868 "data/maps/RustboroCity/scripts.pory"
# 513 "data/maps/RustboroCity/scripts.pory"
# 869 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 870 "data/maps/RustboroCity/scripts.pory"
# 514 "data/maps/RustboroCity/scripts.pory"
# 871 "data/maps/RustboroCity/scripts.pory"
	walk_in_place_faster_down
# 872 "data/maps/RustboroCity/scripts.pory"
# 515 "data/maps/RustboroCity/scripts.pory"
# 873 "data/maps/RustboroCity/scripts.pory"
	step_end
# 874 "data/maps/RustboroCity/scripts.pory"

# 875 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_DevonEmployee1::
# 876 "data/maps/RustboroCity/scripts.pory"
# 519 "data/maps/RustboroCity/scripts.pory"
# 877 "data/maps/RustboroCity/scripts.pory"
	lock
# 878 "data/maps/RustboroCity/scripts.pory"
# 520 "data/maps/RustboroCity/scripts.pory"
# 879 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 880 "data/maps/RustboroCity/scripts.pory"
# 521 "data/maps/RustboroCity/scripts.pory"
# 881 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_RECOVERED_DEVON_GOODS, RustboroCity_EventScript_DevonEmployee1_2
# 882 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_DevonEmployee1_1:
# 883 "data/maps/RustboroCity/scripts.pory"
# 524 "data/maps/RustboroCity/scripts.pory"
# 884 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_ShadyCharacterTookOffTowardsTunnel, MSGBOX_DEFAULT
# 885 "data/maps/RustboroCity/scripts.pory"
# 525 "data/maps/RustboroCity/scripts.pory"
# 886 "data/maps/RustboroCity/scripts.pory"
	release
# 887 "data/maps/RustboroCity/scripts.pory"
	end
# 888 "data/maps/RustboroCity/scripts.pory"

# 889 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_DevonEmployee1_2:
# 890 "data/maps/RustboroCity/scripts.pory"
# 522 "data/maps/RustboroCity/scripts.pory"
# 891 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_ReturnGoodsSpokeToEmployee
# 892 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_DevonEmployee1_1
# 893 "data/maps/RustboroCity/scripts.pory"

# 894 "data/maps/RustboroCity/scripts.pory"

# 895 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ReturnGoodsSpokeToEmployee::
# 896 "data/maps/RustboroCity/scripts.pory"
# 530 "data/maps/RustboroCity/scripts.pory"
# 897 "data/maps/RustboroCity/scripts.pory"
	waitse
# 898 "data/maps/RustboroCity/scripts.pory"
# 531 "data/maps/RustboroCity/scripts.pory"
# 899 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 4
# 900 "data/maps/RustboroCity/scripts.pory"
# 532 "data/maps/RustboroCity/scripts.pory"
# 901 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_ReturnGoods
# 902 "data/maps/RustboroCity/scripts.pory"
	end
# 903 "data/maps/RustboroCity/scripts.pory"

# 904 "data/maps/RustboroCity/scripts.pory"

# 905 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_HelpGetGoodsTrigger0::
# 906 "data/maps/RustboroCity/scripts.pory"
# 537 "data/maps/RustboroCity/scripts.pory"
# 907 "data/maps/RustboroCity/scripts.pory"
	lockall
# 908 "data/maps/RustboroCity/scripts.pory"
# 538 "data/maps/RustboroCity/scripts.pory"
# 909 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 0
# 910 "data/maps/RustboroCity/scripts.pory"
# 539 "data/maps/RustboroCity/scripts.pory"
# 911 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_EmployeeAskToGetGoods
# 912 "data/maps/RustboroCity/scripts.pory"
	end
# 913 "data/maps/RustboroCity/scripts.pory"

# 914 "data/maps/RustboroCity/scripts.pory"

# 915 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_HelpGetGoodsTrigger1::
# 916 "data/maps/RustboroCity/scripts.pory"
# 544 "data/maps/RustboroCity/scripts.pory"
# 917 "data/maps/RustboroCity/scripts.pory"
	lockall
# 918 "data/maps/RustboroCity/scripts.pory"
# 545 "data/maps/RustboroCity/scripts.pory"
# 919 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 1
# 920 "data/maps/RustboroCity/scripts.pory"
# 546 "data/maps/RustboroCity/scripts.pory"
# 921 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_EmployeeAskToGetGoods
# 922 "data/maps/RustboroCity/scripts.pory"
	end
# 923 "data/maps/RustboroCity/scripts.pory"

# 924 "data/maps/RustboroCity/scripts.pory"

# 925 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_HelpGetGoodsTrigger2::
# 926 "data/maps/RustboroCity/scripts.pory"
# 551 "data/maps/RustboroCity/scripts.pory"
# 927 "data/maps/RustboroCity/scripts.pory"
	lockall
# 928 "data/maps/RustboroCity/scripts.pory"
# 552 "data/maps/RustboroCity/scripts.pory"
# 929 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 2
# 930 "data/maps/RustboroCity/scripts.pory"
# 553 "data/maps/RustboroCity/scripts.pory"
# 931 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_EmployeeAskToGetGoods
# 932 "data/maps/RustboroCity/scripts.pory"
	end
# 933 "data/maps/RustboroCity/scripts.pory"

# 934 "data/maps/RustboroCity/scripts.pory"

# 935 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_HelpGetGoodsTrigger3::
# 936 "data/maps/RustboroCity/scripts.pory"
# 558 "data/maps/RustboroCity/scripts.pory"
# 937 "data/maps/RustboroCity/scripts.pory"
	lockall
# 938 "data/maps/RustboroCity/scripts.pory"
# 559 "data/maps/RustboroCity/scripts.pory"
# 939 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 3
# 940 "data/maps/RustboroCity/scripts.pory"
# 560 "data/maps/RustboroCity/scripts.pory"
# 941 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_EmployeeAskToGetGoods
# 942 "data/maps/RustboroCity/scripts.pory"
	end
# 943 "data/maps/RustboroCity/scripts.pory"

# 944 "data/maps/RustboroCity/scripts.pory"

# 945 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeAskToGetGoods::
# 946 "data/maps/RustboroCity/scripts.pory"
# 565 "data/maps/RustboroCity/scripts.pory"
# 947 "data/maps/RustboroCity/scripts.pory"
	compare VAR_TEMP_1, 0
# 948 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq RustboroCity_EventScript_EmployeeAskToGetGoods_2
# 949 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeAskToGetGoods_1:
# 950 "data/maps/RustboroCity/scripts.pory"
# 568 "data/maps/RustboroCity/scripts.pory"
# 951 "data/maps/RustboroCity/scripts.pory"
	compare VAR_TEMP_1, 1
# 952 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq RustboroCity_EventScript_EmployeeAskToGetGoods_5
# 953 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeAskToGetGoods_4:
# 954 "data/maps/RustboroCity/scripts.pory"
# 571 "data/maps/RustboroCity/scripts.pory"
# 955 "data/maps/RustboroCity/scripts.pory"
	compare VAR_TEMP_1, 2
# 956 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq RustboroCity_EventScript_EmployeeAskToGetGoods_8
# 957 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeAskToGetGoods_7:
# 958 "data/maps/RustboroCity/scripts.pory"
# 574 "data/maps/RustboroCity/scripts.pory"
# 959 "data/maps/RustboroCity/scripts.pory"
	compare VAR_TEMP_1, 3
# 960 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq RustboroCity_EventScript_EmployeeAskToGetGoods_11
# 961 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeAskToGetGoods_10:
# 962 "data/maps/RustboroCity/scripts.pory"
# 577 "data/maps/RustboroCity/scripts.pory"
# 963 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_INTERACTED_WITH_DEVON_EMPLOYEE_GOODS_STOLEN
# 964 "data/maps/RustboroCity/scripts.pory"
# 578 "data/maps/RustboroCity/scripts.pory"
# 965 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 3
# 966 "data/maps/RustboroCity/scripts.pory"
# 579 "data/maps/RustboroCity/scripts.pory"
# 967 "data/maps/RustboroCity/scripts.pory"
	copyobjectxytoperm LOCALID_RUSTBORO_DEVON_EMPLOYEE
# 968 "data/maps/RustboroCity/scripts.pory"
# 580 "data/maps/RustboroCity/scripts.pory"
# 969 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_HelpMeIWasRobbed, MSGBOX_DEFAULT
# 970 "data/maps/RustboroCity/scripts.pory"
# 581 "data/maps/RustboroCity/scripts.pory"
# 971 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 972 "data/maps/RustboroCity/scripts.pory"
	end
# 973 "data/maps/RustboroCity/scripts.pory"

# 974 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeAskToGetGoods_2:
# 975 "data/maps/RustboroCity/scripts.pory"
# 566 "data/maps/RustboroCity/scripts.pory"
# 976 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_EmployeeFacePlayerUp1
# 977 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_EmployeeAskToGetGoods_1
# 978 "data/maps/RustboroCity/scripts.pory"

# 979 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeAskToGetGoods_5:
# 980 "data/maps/RustboroCity/scripts.pory"
# 569 "data/maps/RustboroCity/scripts.pory"
# 981 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_EmployeeFacePlayerLeft1
# 982 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_EmployeeAskToGetGoods_4
# 983 "data/maps/RustboroCity/scripts.pory"

# 984 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeAskToGetGoods_8:
# 985 "data/maps/RustboroCity/scripts.pory"
# 572 "data/maps/RustboroCity/scripts.pory"
# 986 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_EmployeeFacePlayerDown1
# 987 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_EmployeeAskToGetGoods_7
# 988 "data/maps/RustboroCity/scripts.pory"

# 989 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeAskToGetGoods_11:
# 990 "data/maps/RustboroCity/scripts.pory"
# 575 "data/maps/RustboroCity/scripts.pory"
# 991 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_EmployeeApproachPlayerDown1
# 992 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_EmployeeAskToGetGoods_10
# 993 "data/maps/RustboroCity/scripts.pory"

# 994 "data/maps/RustboroCity/scripts.pory"

# 995 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerUp1::
# 996 "data/maps/RustboroCity/scripts.pory"
# 586 "data/maps/RustboroCity/scripts.pory"
# 997 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterUp
# 998 "data/maps/RustboroCity/scripts.pory"
# 587 "data/maps/RustboroCity/scripts.pory"
# 999 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1000 "data/maps/RustboroCity/scripts.pory"
# 588 "data/maps/RustboroCity/scripts.pory"
# 1001 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 1002 "data/maps/RustboroCity/scripts.pory"
# 589 "data/maps/RustboroCity/scripts.pory"
# 1003 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 1004 "data/maps/RustboroCity/scripts.pory"
# 590 "data/maps/RustboroCity/scripts.pory"
# 1005 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1006 "data/maps/RustboroCity/scripts.pory"
# 591 "data/maps/RustboroCity/scripts.pory"
# 1007 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_Delay48
# 1008 "data/maps/RustboroCity/scripts.pory"
# 592 "data/maps/RustboroCity/scripts.pory"
# 1009 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1010 "data/maps/RustboroCity/scripts.pory"
# 593 "data/maps/RustboroCity/scripts.pory"
# 1011 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 1012 "data/maps/RustboroCity/scripts.pory"
# 594 "data/maps/RustboroCity/scripts.pory"
# 1013 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1014 "data/maps/RustboroCity/scripts.pory"
	return
# 1015 "data/maps/RustboroCity/scripts.pory"

# 1016 "data/maps/RustboroCity/scripts.pory"

# 1017 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerLeft1::
# 1018 "data/maps/RustboroCity/scripts.pory"
# 599 "data/maps/RustboroCity/scripts.pory"
# 1019 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterLeft
# 1020 "data/maps/RustboroCity/scripts.pory"
# 600 "data/maps/RustboroCity/scripts.pory"
# 1021 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1022 "data/maps/RustboroCity/scripts.pory"
# 601 "data/maps/RustboroCity/scripts.pory"
# 1023 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 1024 "data/maps/RustboroCity/scripts.pory"
# 602 "data/maps/RustboroCity/scripts.pory"
# 1025 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 1026 "data/maps/RustboroCity/scripts.pory"
# 603 "data/maps/RustboroCity/scripts.pory"
# 1027 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1028 "data/maps/RustboroCity/scripts.pory"
# 604 "data/maps/RustboroCity/scripts.pory"
# 1029 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_Delay48
# 1030 "data/maps/RustboroCity/scripts.pory"
# 605 "data/maps/RustboroCity/scripts.pory"
# 1031 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1032 "data/maps/RustboroCity/scripts.pory"
# 606 "data/maps/RustboroCity/scripts.pory"
# 1033 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 1034 "data/maps/RustboroCity/scripts.pory"
# 607 "data/maps/RustboroCity/scripts.pory"
# 1035 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1036 "data/maps/RustboroCity/scripts.pory"
	return
# 1037 "data/maps/RustboroCity/scripts.pory"

# 1038 "data/maps/RustboroCity/scripts.pory"

# 1039 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerDown1::
# 1040 "data/maps/RustboroCity/scripts.pory"
# 612 "data/maps/RustboroCity/scripts.pory"
# 1041 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterDown
# 1042 "data/maps/RustboroCity/scripts.pory"
# 613 "data/maps/RustboroCity/scripts.pory"
# 1043 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1044 "data/maps/RustboroCity/scripts.pory"
# 614 "data/maps/RustboroCity/scripts.pory"
# 1045 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 1046 "data/maps/RustboroCity/scripts.pory"
# 615 "data/maps/RustboroCity/scripts.pory"
# 1047 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 1048 "data/maps/RustboroCity/scripts.pory"
# 616 "data/maps/RustboroCity/scripts.pory"
# 1049 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1050 "data/maps/RustboroCity/scripts.pory"
# 617 "data/maps/RustboroCity/scripts.pory"
# 1051 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_Delay48
# 1052 "data/maps/RustboroCity/scripts.pory"
# 618 "data/maps/RustboroCity/scripts.pory"
# 1053 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1054 "data/maps/RustboroCity/scripts.pory"
# 619 "data/maps/RustboroCity/scripts.pory"
# 1055 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 1056 "data/maps/RustboroCity/scripts.pory"
# 620 "data/maps/RustboroCity/scripts.pory"
# 1057 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1058 "data/maps/RustboroCity/scripts.pory"
	return
# 1059 "data/maps/RustboroCity/scripts.pory"

# 1060 "data/maps/RustboroCity/scripts.pory"

# 1061 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeApproachPlayerDown1::
# 1062 "data/maps/RustboroCity/scripts.pory"
# 625 "data/maps/RustboroCity/scripts.pory"
# 1063 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterDown
# 1064 "data/maps/RustboroCity/scripts.pory"
# 626 "data/maps/RustboroCity/scripts.pory"
# 1065 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1066 "data/maps/RustboroCity/scripts.pory"
# 627 "data/maps/RustboroCity/scripts.pory"
# 1067 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 1068 "data/maps/RustboroCity/scripts.pory"
# 628 "data/maps/RustboroCity/scripts.pory"
# 1069 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 1070 "data/maps/RustboroCity/scripts.pory"
# 629 "data/maps/RustboroCity/scripts.pory"
# 1071 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1072 "data/maps/RustboroCity/scripts.pory"
# 630 "data/maps/RustboroCity/scripts.pory"
# 1073 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_Delay48
# 1074 "data/maps/RustboroCity/scripts.pory"
# 631 "data/maps/RustboroCity/scripts.pory"
# 1075 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1076 "data/maps/RustboroCity/scripts.pory"
# 632 "data/maps/RustboroCity/scripts.pory"
# 1077 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachPlayerDown
# 1078 "data/maps/RustboroCity/scripts.pory"
# 633 "data/maps/RustboroCity/scripts.pory"
# 1079 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1080 "data/maps/RustboroCity/scripts.pory"
# 634 "data/maps/RustboroCity/scripts.pory"
# 1081 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 1082 "data/maps/RustboroCity/scripts.pory"
# 635 "data/maps/RustboroCity/scripts.pory"
# 1083 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1084 "data/maps/RustboroCity/scripts.pory"
	return
# 1085 "data/maps/RustboroCity/scripts.pory"

# 1086 "data/maps/RustboroCity/scripts.pory"

# 1087 "data/maps/RustboroCity/scripts.pory"
# 639 "data/maps/RustboroCity/scripts.pory"
# 1088 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeApproachPlayerDown:
# 1089 "data/maps/RustboroCity/scripts.pory"
# 640 "data/maps/RustboroCity/scripts.pory"
# 1090 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1091 "data/maps/RustboroCity/scripts.pory"
# 641 "data/maps/RustboroCity/scripts.pory"
# 1092 "data/maps/RustboroCity/scripts.pory"
	step_end
# 1093 "data/maps/RustboroCity/scripts.pory"

# 1094 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ReturnGoodsTrigger0::
# 1095 "data/maps/RustboroCity/scripts.pory"
# 645 "data/maps/RustboroCity/scripts.pory"
# 1096 "data/maps/RustboroCity/scripts.pory"
	lockall
# 1097 "data/maps/RustboroCity/scripts.pory"
# 646 "data/maps/RustboroCity/scripts.pory"
# 1098 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 0
# 1099 "data/maps/RustboroCity/scripts.pory"
# 647 "data/maps/RustboroCity/scripts.pory"
# 1100 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_ReturnGoods
# 1101 "data/maps/RustboroCity/scripts.pory"
	end
# 1102 "data/maps/RustboroCity/scripts.pory"

# 1103 "data/maps/RustboroCity/scripts.pory"

# 1104 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ReturnGoodsTrigger1::
# 1105 "data/maps/RustboroCity/scripts.pory"
# 652 "data/maps/RustboroCity/scripts.pory"
# 1106 "data/maps/RustboroCity/scripts.pory"
	lockall
# 1107 "data/maps/RustboroCity/scripts.pory"
# 653 "data/maps/RustboroCity/scripts.pory"
# 1108 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 1
# 1109 "data/maps/RustboroCity/scripts.pory"
# 654 "data/maps/RustboroCity/scripts.pory"
# 1110 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_ReturnGoods
# 1111 "data/maps/RustboroCity/scripts.pory"
	end
# 1112 "data/maps/RustboroCity/scripts.pory"

# 1113 "data/maps/RustboroCity/scripts.pory"

# 1114 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ReturnGoodsTrigger2::
# 1115 "data/maps/RustboroCity/scripts.pory"
# 659 "data/maps/RustboroCity/scripts.pory"
# 1116 "data/maps/RustboroCity/scripts.pory"
	lockall
# 1117 "data/maps/RustboroCity/scripts.pory"
# 660 "data/maps/RustboroCity/scripts.pory"
# 1118 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 2
# 1119 "data/maps/RustboroCity/scripts.pory"
# 661 "data/maps/RustboroCity/scripts.pory"
# 1120 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_ReturnGoods
# 1121 "data/maps/RustboroCity/scripts.pory"
	end
# 1122 "data/maps/RustboroCity/scripts.pory"

# 1123 "data/maps/RustboroCity/scripts.pory"

# 1124 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ReturnGoodsTrigger3::
# 1125 "data/maps/RustboroCity/scripts.pory"
# 666 "data/maps/RustboroCity/scripts.pory"
# 1126 "data/maps/RustboroCity/scripts.pory"
	lockall
# 1127 "data/maps/RustboroCity/scripts.pory"
# 667 "data/maps/RustboroCity/scripts.pory"
# 1128 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 3
# 1129 "data/maps/RustboroCity/scripts.pory"
# 668 "data/maps/RustboroCity/scripts.pory"
# 1130 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_ReturnGoods
# 1131 "data/maps/RustboroCity/scripts.pory"
	end
# 1132 "data/maps/RustboroCity/scripts.pory"

# 1133 "data/maps/RustboroCity/scripts.pory"

# 1134 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ReturnGoods::
# 1135 "data/maps/RustboroCity/scripts.pory"
# 673 "data/maps/RustboroCity/scripts.pory"
# 1136 "data/maps/RustboroCity/scripts.pory"
	compare VAR_TEMP_1, 0
# 1137 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq RustboroCity_EventScript_ReturnGoods_2
# 1138 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ReturnGoods_1:
# 1139 "data/maps/RustboroCity/scripts.pory"
# 676 "data/maps/RustboroCity/scripts.pory"
# 1140 "data/maps/RustboroCity/scripts.pory"
	compare VAR_TEMP_1, 1
# 1141 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq RustboroCity_EventScript_ReturnGoods_5
# 1142 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ReturnGoods_4:
# 1143 "data/maps/RustboroCity/scripts.pory"
# 679 "data/maps/RustboroCity/scripts.pory"
# 1144 "data/maps/RustboroCity/scripts.pory"
	compare VAR_TEMP_1, 2
# 1145 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq RustboroCity_EventScript_ReturnGoods_8
# 1146 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ReturnGoods_7:
# 1147 "data/maps/RustboroCity/scripts.pory"
# 682 "data/maps/RustboroCity/scripts.pory"
# 1148 "data/maps/RustboroCity/scripts.pory"
	compare VAR_TEMP_1, 3
# 1149 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq RustboroCity_EventScript_ReturnGoods_11
# 1150 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ReturnGoods_10:
# 1151 "data/maps/RustboroCity/scripts.pory"
# 685 "data/maps/RustboroCity/scripts.pory"
# 1152 "data/maps/RustboroCity/scripts.pory"
	compare VAR_TEMP_1, 4
# 1153 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq RustboroCity_EventScript_ReturnGoods_14
# 1154 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ReturnGoods_13:
# 1155 "data/maps/RustboroCity/scripts.pory"
# 688 "data/maps/RustboroCity/scripts.pory"
# 1156 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_YouGotItThankYou, MSGBOX_DEFAULT
# 1157 "data/maps/RustboroCity/scripts.pory"
# 689 "data/maps/RustboroCity/scripts.pory"
# 1158 "data/maps/RustboroCity/scripts.pory"
	giveitem ITEM_GREAT_BALL
# 1159 "data/maps/RustboroCity/scripts.pory"
# 690 "data/maps/RustboroCity/scripts.pory"
# 1160 "data/maps/RustboroCity/scripts.pory"
	compare VAR_RESULT, FALSE
# 1161 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq RustboroCity_EventScript_ReturnGoods_17
# 1162 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ReturnGoods_16:
# 1163 "data/maps/RustboroCity/scripts.pory"
# 693 "data/maps/RustboroCity/scripts.pory"
# 1164 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_PleaseComeWithMe, MSGBOX_DEFAULT
# 1165 "data/maps/RustboroCity/scripts.pory"
# 694 "data/maps/RustboroCity/scripts.pory"
# 1166 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 1167 "data/maps/RustboroCity/scripts.pory"
# 695 "data/maps/RustboroCity/scripts.pory"
# 1168 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_RETURNED_DEVON_GOODS
# 1169 "data/maps/RustboroCity/scripts.pory"
# 696 "data/maps/RustboroCity/scripts.pory"
# 1170 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HIDE_RUSTBORO_CITY_DEVON_EMPLOYEE_1
# 1171 "data/maps/RustboroCity/scripts.pory"
# 697 "data/maps/RustboroCity/scripts.pory"
# 1172 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 5
# 1173 "data/maps/RustboroCity/scripts.pory"
# 698 "data/maps/RustboroCity/scripts.pory"
# 1174 "data/maps/RustboroCity/scripts.pory"
	delay 30
# 1175 "data/maps/RustboroCity/scripts.pory"
# 699 "data/maps/RustboroCity/scripts.pory"
# 1176 "data/maps/RustboroCity/scripts.pory"
	warp MAP_RUSTBORO_CITY_DEVON_CORP_3F, 2, 2
# 1177 "data/maps/RustboroCity/scripts.pory"
# 700 "data/maps/RustboroCity/scripts.pory"
# 1178 "data/maps/RustboroCity/scripts.pory"
	waitstate
# 1179 "data/maps/RustboroCity/scripts.pory"
# 701 "data/maps/RustboroCity/scripts.pory"
# 1180 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 1181 "data/maps/RustboroCity/scripts.pory"
	end
# 1182 "data/maps/RustboroCity/scripts.pory"

# 1183 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ReturnGoods_2:
# 1184 "data/maps/RustboroCity/scripts.pory"
# 674 "data/maps/RustboroCity/scripts.pory"
# 1185 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_EmployeeFacePlayerUp2
# 1186 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_ReturnGoods_1
# 1187 "data/maps/RustboroCity/scripts.pory"

# 1188 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ReturnGoods_5:
# 1189 "data/maps/RustboroCity/scripts.pory"
# 677 "data/maps/RustboroCity/scripts.pory"
# 1190 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_EmployeeFacePlayerLeft2
# 1191 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_ReturnGoods_4
# 1192 "data/maps/RustboroCity/scripts.pory"

# 1193 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ReturnGoods_8:
# 1194 "data/maps/RustboroCity/scripts.pory"
# 680 "data/maps/RustboroCity/scripts.pory"
# 1195 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_EmployeeFacePlayerDown2
# 1196 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_ReturnGoods_7
# 1197 "data/maps/RustboroCity/scripts.pory"

# 1198 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ReturnGoods_11:
# 1199 "data/maps/RustboroCity/scripts.pory"
# 683 "data/maps/RustboroCity/scripts.pory"
# 1200 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_EmployeeApproachPlayerDown2
# 1201 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_ReturnGoods_10
# 1202 "data/maps/RustboroCity/scripts.pory"

# 1203 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ReturnGoods_14:
# 1204 "data/maps/RustboroCity/scripts.pory"
# 686 "data/maps/RustboroCity/scripts.pory"
# 1205 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_EmployeeFacePlayerRight
# 1206 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_ReturnGoods_13
# 1207 "data/maps/RustboroCity/scripts.pory"

# 1208 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ReturnGoods_17:
# 1209 "data/maps/RustboroCity/scripts.pory"
# 691 "data/maps/RustboroCity/scripts.pory"
# 1210 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_BagFull
# 1211 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_ReturnGoods_16
# 1212 "data/maps/RustboroCity/scripts.pory"

# 1213 "data/maps/RustboroCity/scripts.pory"

# 1214 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BagFull::
# 1215 "data/maps/RustboroCity/scripts.pory"
# 706 "data/maps/RustboroCity/scripts.pory"
# 1216 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_YoureLoadedWithItems, MSGBOX_DEFAULT
# 1217 "data/maps/RustboroCity/scripts.pory"
	return
# 1218 "data/maps/RustboroCity/scripts.pory"

# 1219 "data/maps/RustboroCity/scripts.pory"

# 1220 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerUp2::
# 1221 "data/maps/RustboroCity/scripts.pory"
# 711 "data/maps/RustboroCity/scripts.pory"
# 1222 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterUp
# 1223 "data/maps/RustboroCity/scripts.pory"
# 712 "data/maps/RustboroCity/scripts.pory"
# 1224 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1225 "data/maps/RustboroCity/scripts.pory"
# 713 "data/maps/RustboroCity/scripts.pory"
# 1226 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 1227 "data/maps/RustboroCity/scripts.pory"
# 714 "data/maps/RustboroCity/scripts.pory"
# 1228 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 1229 "data/maps/RustboroCity/scripts.pory"
# 715 "data/maps/RustboroCity/scripts.pory"
# 1230 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1231 "data/maps/RustboroCity/scripts.pory"
# 716 "data/maps/RustboroCity/scripts.pory"
# 1232 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_Delay48
# 1233 "data/maps/RustboroCity/scripts.pory"
# 717 "data/maps/RustboroCity/scripts.pory"
# 1234 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1235 "data/maps/RustboroCity/scripts.pory"
# 718 "data/maps/RustboroCity/scripts.pory"
# 1236 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 1237 "data/maps/RustboroCity/scripts.pory"
# 719 "data/maps/RustboroCity/scripts.pory"
# 1238 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1239 "data/maps/RustboroCity/scripts.pory"
	return
# 1240 "data/maps/RustboroCity/scripts.pory"

# 1241 "data/maps/RustboroCity/scripts.pory"

# 1242 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerLeft2::
# 1243 "data/maps/RustboroCity/scripts.pory"
# 724 "data/maps/RustboroCity/scripts.pory"
# 1244 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterRight
# 1245 "data/maps/RustboroCity/scripts.pory"
# 725 "data/maps/RustboroCity/scripts.pory"
# 1246 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1247 "data/maps/RustboroCity/scripts.pory"
# 726 "data/maps/RustboroCity/scripts.pory"
# 1248 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 1249 "data/maps/RustboroCity/scripts.pory"
# 727 "data/maps/RustboroCity/scripts.pory"
# 1250 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 1251 "data/maps/RustboroCity/scripts.pory"
# 728 "data/maps/RustboroCity/scripts.pory"
# 1252 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1253 "data/maps/RustboroCity/scripts.pory"
# 729 "data/maps/RustboroCity/scripts.pory"
# 1254 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_Delay48
# 1255 "data/maps/RustboroCity/scripts.pory"
# 730 "data/maps/RustboroCity/scripts.pory"
# 1256 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1257 "data/maps/RustboroCity/scripts.pory"
# 731 "data/maps/RustboroCity/scripts.pory"
# 1258 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 1259 "data/maps/RustboroCity/scripts.pory"
# 732 "data/maps/RustboroCity/scripts.pory"
# 1260 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1261 "data/maps/RustboroCity/scripts.pory"
	return
# 1262 "data/maps/RustboroCity/scripts.pory"

# 1263 "data/maps/RustboroCity/scripts.pory"

# 1264 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerDown2::
# 1265 "data/maps/RustboroCity/scripts.pory"
# 737 "data/maps/RustboroCity/scripts.pory"
# 1266 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterDown
# 1267 "data/maps/RustboroCity/scripts.pory"
# 738 "data/maps/RustboroCity/scripts.pory"
# 1268 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1269 "data/maps/RustboroCity/scripts.pory"
# 739 "data/maps/RustboroCity/scripts.pory"
# 1270 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 1271 "data/maps/RustboroCity/scripts.pory"
# 740 "data/maps/RustboroCity/scripts.pory"
# 1272 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 1273 "data/maps/RustboroCity/scripts.pory"
# 741 "data/maps/RustboroCity/scripts.pory"
# 1274 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1275 "data/maps/RustboroCity/scripts.pory"
# 742 "data/maps/RustboroCity/scripts.pory"
# 1276 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_Delay48
# 1277 "data/maps/RustboroCity/scripts.pory"
# 743 "data/maps/RustboroCity/scripts.pory"
# 1278 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1279 "data/maps/RustboroCity/scripts.pory"
# 744 "data/maps/RustboroCity/scripts.pory"
# 1280 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 1281 "data/maps/RustboroCity/scripts.pory"
# 745 "data/maps/RustboroCity/scripts.pory"
# 1282 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1283 "data/maps/RustboroCity/scripts.pory"
	return
# 1284 "data/maps/RustboroCity/scripts.pory"

# 1285 "data/maps/RustboroCity/scripts.pory"

# 1286 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeApproachPlayerDown2::
# 1287 "data/maps/RustboroCity/scripts.pory"
# 750 "data/maps/RustboroCity/scripts.pory"
# 1288 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterDown
# 1289 "data/maps/RustboroCity/scripts.pory"
# 751 "data/maps/RustboroCity/scripts.pory"
# 1290 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1291 "data/maps/RustboroCity/scripts.pory"
# 752 "data/maps/RustboroCity/scripts.pory"
# 1292 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 1293 "data/maps/RustboroCity/scripts.pory"
# 753 "data/maps/RustboroCity/scripts.pory"
# 1294 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 1295 "data/maps/RustboroCity/scripts.pory"
# 754 "data/maps/RustboroCity/scripts.pory"
# 1296 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1297 "data/maps/RustboroCity/scripts.pory"
# 755 "data/maps/RustboroCity/scripts.pory"
# 1298 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_Delay48
# 1299 "data/maps/RustboroCity/scripts.pory"
# 756 "data/maps/RustboroCity/scripts.pory"
# 1300 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1301 "data/maps/RustboroCity/scripts.pory"
# 757 "data/maps/RustboroCity/scripts.pory"
# 1302 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachPlayerDown
# 1303 "data/maps/RustboroCity/scripts.pory"
# 758 "data/maps/RustboroCity/scripts.pory"
# 1304 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1305 "data/maps/RustboroCity/scripts.pory"
# 759 "data/maps/RustboroCity/scripts.pory"
# 1306 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 1307 "data/maps/RustboroCity/scripts.pory"
# 760 "data/maps/RustboroCity/scripts.pory"
# 1308 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1309 "data/maps/RustboroCity/scripts.pory"
	return
# 1310 "data/maps/RustboroCity/scripts.pory"

# 1311 "data/maps/RustboroCity/scripts.pory"

# 1312 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerRight::
# 1313 "data/maps/RustboroCity/scripts.pory"
# 765 "data/maps/RustboroCity/scripts.pory"
# 1314 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterLeft
# 1315 "data/maps/RustboroCity/scripts.pory"
# 766 "data/maps/RustboroCity/scripts.pory"
# 1316 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1317 "data/maps/RustboroCity/scripts.pory"
# 767 "data/maps/RustboroCity/scripts.pory"
# 1318 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 1319 "data/maps/RustboroCity/scripts.pory"
# 768 "data/maps/RustboroCity/scripts.pory"
# 1320 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 1321 "data/maps/RustboroCity/scripts.pory"
# 769 "data/maps/RustboroCity/scripts.pory"
# 1322 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1323 "data/maps/RustboroCity/scripts.pory"
# 770 "data/maps/RustboroCity/scripts.pory"
# 1324 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_Delay48
# 1325 "data/maps/RustboroCity/scripts.pory"
# 771 "data/maps/RustboroCity/scripts.pory"
# 1326 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1327 "data/maps/RustboroCity/scripts.pory"
	return
# 1328 "data/maps/RustboroCity/scripts.pory"

# 1329 "data/maps/RustboroCity/scripts.pory"

# 1330 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Rival::
# 1331 "data/maps/RustboroCity/scripts.pory"
# 776 "data/maps/RustboroCity/scripts.pory"
# 1332 "data/maps/RustboroCity/scripts.pory"
	lockall
# 1333 "data/maps/RustboroCity/scripts.pory"
# 777 "data/maps/RustboroCity/scripts.pory"
# 1334 "data/maps/RustboroCity/scripts.pory"
	goto_if_unset FLAG_MET_RIVAL_RUSTBORO, RustboroCity_EventScript_Rival_2
# 1335 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Rival_1:
# 1336 "data/maps/RustboroCity/scripts.pory"
# 780 "data/maps/RustboroCity/scripts.pory"
# 1337 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, Common_Movement_FacePlayer
# 1338 "data/maps/RustboroCity/scripts.pory"
# 781 "data/maps/RustboroCity/scripts.pory"
# 1339 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1340 "data/maps/RustboroCity/scripts.pory"
# 782 "data/maps/RustboroCity/scripts.pory"
# 1341 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 1342 "data/maps/RustboroCity/scripts.pory"
	return
# 1343 "data/maps/RustboroCity/scripts.pory"

# 1344 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Rival_2:
# 1345 "data/maps/RustboroCity/scripts.pory"
# 778 "data/maps/RustboroCity/scripts.pory"
# 1346 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 1347 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_Rival_1
# 1348 "data/maps/RustboroCity/scripts.pory"

# 1349 "data/maps/RustboroCity/scripts.pory"

# 1350 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_PlayRivalMusic::
# 1351 "data/maps/RustboroCity/scripts.pory"
# 786 "data/maps/RustboroCity/scripts.pory"
# 1352 "data/maps/RustboroCity/scripts.pory"
	checkplayergender
# 1353 "data/maps/RustboroCity/scripts.pory"
# 787 "data/maps/RustboroCity/scripts.pory"
# 1354 "data/maps/RustboroCity/scripts.pory"
	compare VAR_RESULT, MALE
# 1355 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq RustboroCity_EventScript_PlayRivalMusic_2
# 1356 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_PlayRivalMusic_1:
# 1357 "data/maps/RustboroCity/scripts.pory"
# 790 "data/maps/RustboroCity/scripts.pory"
# 1358 "data/maps/RustboroCity/scripts.pory"
	compare VAR_RESULT, FEMALE
# 1359 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq RustboroCity_EventScript_PlayRivalMusic_5
# 1360 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_PlayRivalMusic_4:
# 1361 "data/maps/RustboroCity/scripts.pory"
	return
# 1362 "data/maps/RustboroCity/scripts.pory"

# 1363 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_PlayRivalMusic_2:
# 1364 "data/maps/RustboroCity/scripts.pory"
# 788 "data/maps/RustboroCity/scripts.pory"
# 1365 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_PlayMayMusic
# 1366 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_PlayRivalMusic_1
# 1367 "data/maps/RustboroCity/scripts.pory"

# 1368 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_PlayRivalMusic_5:
# 1369 "data/maps/RustboroCity/scripts.pory"
# 791 "data/maps/RustboroCity/scripts.pory"
# 1370 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_PlayBrendanMusic
# 1371 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_PlayRivalMusic_4
# 1372 "data/maps/RustboroCity/scripts.pory"

# 1373 "data/maps/RustboroCity/scripts.pory"

# 1374 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_PlayMayMusic::
# 1375 "data/maps/RustboroCity/scripts.pory"
# 797 "data/maps/RustboroCity/scripts.pory"
# 1376 "data/maps/RustboroCity/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 1377 "data/maps/RustboroCity/scripts.pory"
	return
# 1378 "data/maps/RustboroCity/scripts.pory"

# 1379 "data/maps/RustboroCity/scripts.pory"

# 1380 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_PlayBrendanMusic::
# 1381 "data/maps/RustboroCity/scripts.pory"
# 802 "data/maps/RustboroCity/scripts.pory"
# 1382 "data/maps/RustboroCity/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 1383 "data/maps/RustboroCity/scripts.pory"
	return
# 1384 "data/maps/RustboroCity/scripts.pory"

# 1385 "data/maps/RustboroCity/scripts.pory"

# 1386 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger0::
# 1387 "data/maps/RustboroCity/scripts.pory"
# 807 "data/maps/RustboroCity/scripts.pory"
# 1388 "data/maps/RustboroCity/scripts.pory"
	lockall
# 1389 "data/maps/RustboroCity/scripts.pory"
# 808 "data/maps/RustboroCity/scripts.pory"
# 1390 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 1391 "data/maps/RustboroCity/scripts.pory"
# 809 "data/maps/RustboroCity/scripts.pory"
# 1392 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 1393 "data/maps/RustboroCity/scripts.pory"
# 810 "data/maps/RustboroCity/scripts.pory"
# 1394 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1395 "data/maps/RustboroCity/scripts.pory"
# 811 "data/maps/RustboroCity/scripts.pory"
# 1396 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 1397 "data/maps/RustboroCity/scripts.pory"
# 812 "data/maps/RustboroCity/scripts.pory"
# 1398 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, Common_Movement_ExclamationMark
# 1399 "data/maps/RustboroCity/scripts.pory"
# 813 "data/maps/RustboroCity/scripts.pory"
# 1400 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1401 "data/maps/RustboroCity/scripts.pory"
# 814 "data/maps/RustboroCity/scripts.pory"
# 1402 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, Common_Movement_Delay48
# 1403 "data/maps/RustboroCity/scripts.pory"
# 815 "data/maps/RustboroCity/scripts.pory"
# 1404 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1405 "data/maps/RustboroCity/scripts.pory"
# 816 "data/maps/RustboroCity/scripts.pory"
# 1406 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, RustboroCity_Movement_RivalApproachPlayer0
# 1407 "data/maps/RustboroCity/scripts.pory"
# 817 "data/maps/RustboroCity/scripts.pory"
# 1408 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1409 "data/maps/RustboroCity/scripts.pory"
# 818 "data/maps/RustboroCity/scripts.pory"
# 1410 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 1411 "data/maps/RustboroCity/scripts.pory"
# 819 "data/maps/RustboroCity/scripts.pory"
# 1412 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1413 "data/maps/RustboroCity/scripts.pory"
# 820 "data/maps/RustboroCity/scripts.pory"
# 1414 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 1415 "data/maps/RustboroCity/scripts.pory"
	return
# 1416 "data/maps/RustboroCity/scripts.pory"

# 1417 "data/maps/RustboroCity/scripts.pory"

# 1418 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger1::
# 1419 "data/maps/RustboroCity/scripts.pory"
# 824 "data/maps/RustboroCity/scripts.pory"
# 1420 "data/maps/RustboroCity/scripts.pory"
	lockall
# 1421 "data/maps/RustboroCity/scripts.pory"
# 825 "data/maps/RustboroCity/scripts.pory"
# 1422 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 1423 "data/maps/RustboroCity/scripts.pory"
# 826 "data/maps/RustboroCity/scripts.pory"
# 1424 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 1425 "data/maps/RustboroCity/scripts.pory"
# 827 "data/maps/RustboroCity/scripts.pory"
# 1426 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1427 "data/maps/RustboroCity/scripts.pory"
# 828 "data/maps/RustboroCity/scripts.pory"
# 1428 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 1429 "data/maps/RustboroCity/scripts.pory"
# 829 "data/maps/RustboroCity/scripts.pory"
# 1430 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, Common_Movement_ExclamationMark
# 1431 "data/maps/RustboroCity/scripts.pory"
# 830 "data/maps/RustboroCity/scripts.pory"
# 1432 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1433 "data/maps/RustboroCity/scripts.pory"
# 831 "data/maps/RustboroCity/scripts.pory"
# 1434 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, Common_Movement_Delay48
# 1435 "data/maps/RustboroCity/scripts.pory"
# 832 "data/maps/RustboroCity/scripts.pory"
# 1436 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1437 "data/maps/RustboroCity/scripts.pory"
# 833 "data/maps/RustboroCity/scripts.pory"
# 1438 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, RustboroCity_Movement_RivalApproachPlayer1
# 1439 "data/maps/RustboroCity/scripts.pory"
# 834 "data/maps/RustboroCity/scripts.pory"
# 1440 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1441 "data/maps/RustboroCity/scripts.pory"
# 835 "data/maps/RustboroCity/scripts.pory"
# 1442 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 1443 "data/maps/RustboroCity/scripts.pory"
# 836 "data/maps/RustboroCity/scripts.pory"
# 1444 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1445 "data/maps/RustboroCity/scripts.pory"
# 837 "data/maps/RustboroCity/scripts.pory"
# 1446 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 1447 "data/maps/RustboroCity/scripts.pory"
	return
# 1448 "data/maps/RustboroCity/scripts.pory"

# 1449 "data/maps/RustboroCity/scripts.pory"

# 1450 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger2::
# 1451 "data/maps/RustboroCity/scripts.pory"
# 841 "data/maps/RustboroCity/scripts.pory"
# 1452 "data/maps/RustboroCity/scripts.pory"
	lockall
# 1453 "data/maps/RustboroCity/scripts.pory"
# 842 "data/maps/RustboroCity/scripts.pory"
# 1454 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 1455 "data/maps/RustboroCity/scripts.pory"
# 843 "data/maps/RustboroCity/scripts.pory"
# 1456 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 1457 "data/maps/RustboroCity/scripts.pory"
# 844 "data/maps/RustboroCity/scripts.pory"
# 1458 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1459 "data/maps/RustboroCity/scripts.pory"
# 845 "data/maps/RustboroCity/scripts.pory"
# 1460 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 1461 "data/maps/RustboroCity/scripts.pory"
# 846 "data/maps/RustboroCity/scripts.pory"
# 1462 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, Common_Movement_ExclamationMark
# 1463 "data/maps/RustboroCity/scripts.pory"
# 847 "data/maps/RustboroCity/scripts.pory"
# 1464 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1465 "data/maps/RustboroCity/scripts.pory"
# 848 "data/maps/RustboroCity/scripts.pory"
# 1466 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, Common_Movement_Delay48
# 1467 "data/maps/RustboroCity/scripts.pory"
# 849 "data/maps/RustboroCity/scripts.pory"
# 1468 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1469 "data/maps/RustboroCity/scripts.pory"
# 850 "data/maps/RustboroCity/scripts.pory"
# 1470 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, RustboroCity_Movement_RivalApproachPlayer2
# 1471 "data/maps/RustboroCity/scripts.pory"
# 851 "data/maps/RustboroCity/scripts.pory"
# 1472 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1473 "data/maps/RustboroCity/scripts.pory"
# 852 "data/maps/RustboroCity/scripts.pory"
# 1474 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 1475 "data/maps/RustboroCity/scripts.pory"
# 853 "data/maps/RustboroCity/scripts.pory"
# 1476 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1477 "data/maps/RustboroCity/scripts.pory"
# 854 "data/maps/RustboroCity/scripts.pory"
# 1478 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 1479 "data/maps/RustboroCity/scripts.pory"
	return
# 1480 "data/maps/RustboroCity/scripts.pory"

# 1481 "data/maps/RustboroCity/scripts.pory"

# 1482 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger3::
# 1483 "data/maps/RustboroCity/scripts.pory"
# 858 "data/maps/RustboroCity/scripts.pory"
# 1484 "data/maps/RustboroCity/scripts.pory"
	lockall
# 1485 "data/maps/RustboroCity/scripts.pory"
# 859 "data/maps/RustboroCity/scripts.pory"
# 1486 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 1487 "data/maps/RustboroCity/scripts.pory"
# 860 "data/maps/RustboroCity/scripts.pory"
# 1488 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 1489 "data/maps/RustboroCity/scripts.pory"
# 861 "data/maps/RustboroCity/scripts.pory"
# 1490 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1491 "data/maps/RustboroCity/scripts.pory"
# 862 "data/maps/RustboroCity/scripts.pory"
# 1492 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 1493 "data/maps/RustboroCity/scripts.pory"
# 863 "data/maps/RustboroCity/scripts.pory"
# 1494 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, Common_Movement_ExclamationMark
# 1495 "data/maps/RustboroCity/scripts.pory"
# 864 "data/maps/RustboroCity/scripts.pory"
# 1496 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1497 "data/maps/RustboroCity/scripts.pory"
# 865 "data/maps/RustboroCity/scripts.pory"
# 1498 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, Common_Movement_Delay48
# 1499 "data/maps/RustboroCity/scripts.pory"
# 866 "data/maps/RustboroCity/scripts.pory"
# 1500 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1501 "data/maps/RustboroCity/scripts.pory"
# 867 "data/maps/RustboroCity/scripts.pory"
# 1502 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, RustboroCity_Movement_RivalApproachPlayer3
# 1503 "data/maps/RustboroCity/scripts.pory"
# 868 "data/maps/RustboroCity/scripts.pory"
# 1504 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1505 "data/maps/RustboroCity/scripts.pory"
# 869 "data/maps/RustboroCity/scripts.pory"
# 1506 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 1507 "data/maps/RustboroCity/scripts.pory"
# 870 "data/maps/RustboroCity/scripts.pory"
# 1508 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1509 "data/maps/RustboroCity/scripts.pory"
# 871 "data/maps/RustboroCity/scripts.pory"
# 1510 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 1511 "data/maps/RustboroCity/scripts.pory"
	return
# 1512 "data/maps/RustboroCity/scripts.pory"

# 1513 "data/maps/RustboroCity/scripts.pory"

# 1514 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger4::
# 1515 "data/maps/RustboroCity/scripts.pory"
# 875 "data/maps/RustboroCity/scripts.pory"
# 1516 "data/maps/RustboroCity/scripts.pory"
	lockall
# 1517 "data/maps/RustboroCity/scripts.pory"
# 876 "data/maps/RustboroCity/scripts.pory"
# 1518 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 1519 "data/maps/RustboroCity/scripts.pory"
# 877 "data/maps/RustboroCity/scripts.pory"
# 1520 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 1521 "data/maps/RustboroCity/scripts.pory"
# 878 "data/maps/RustboroCity/scripts.pory"
# 1522 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1523 "data/maps/RustboroCity/scripts.pory"
# 879 "data/maps/RustboroCity/scripts.pory"
# 1524 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 1525 "data/maps/RustboroCity/scripts.pory"
# 880 "data/maps/RustboroCity/scripts.pory"
# 1526 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, Common_Movement_ExclamationMark
# 1527 "data/maps/RustboroCity/scripts.pory"
# 881 "data/maps/RustboroCity/scripts.pory"
# 1528 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1529 "data/maps/RustboroCity/scripts.pory"
# 882 "data/maps/RustboroCity/scripts.pory"
# 1530 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, Common_Movement_Delay48
# 1531 "data/maps/RustboroCity/scripts.pory"
# 883 "data/maps/RustboroCity/scripts.pory"
# 1532 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1533 "data/maps/RustboroCity/scripts.pory"
# 884 "data/maps/RustboroCity/scripts.pory"
# 1534 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, RustboroCity_Movement_RivalApproachPlayer4
# 1535 "data/maps/RustboroCity/scripts.pory"
# 885 "data/maps/RustboroCity/scripts.pory"
# 1536 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1537 "data/maps/RustboroCity/scripts.pory"
# 886 "data/maps/RustboroCity/scripts.pory"
# 1538 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 1539 "data/maps/RustboroCity/scripts.pory"
# 887 "data/maps/RustboroCity/scripts.pory"
# 1540 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1541 "data/maps/RustboroCity/scripts.pory"
# 888 "data/maps/RustboroCity/scripts.pory"
# 1542 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 1543 "data/maps/RustboroCity/scripts.pory"
	return
# 1544 "data/maps/RustboroCity/scripts.pory"

# 1545 "data/maps/RustboroCity/scripts.pory"

# 1546 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger5::
# 1547 "data/maps/RustboroCity/scripts.pory"
# 892 "data/maps/RustboroCity/scripts.pory"
# 1548 "data/maps/RustboroCity/scripts.pory"
	lockall
# 1549 "data/maps/RustboroCity/scripts.pory"
# 893 "data/maps/RustboroCity/scripts.pory"
# 1550 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 1551 "data/maps/RustboroCity/scripts.pory"
# 894 "data/maps/RustboroCity/scripts.pory"
# 1552 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 1553 "data/maps/RustboroCity/scripts.pory"
# 895 "data/maps/RustboroCity/scripts.pory"
# 1554 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1555 "data/maps/RustboroCity/scripts.pory"
# 896 "data/maps/RustboroCity/scripts.pory"
# 1556 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 1557 "data/maps/RustboroCity/scripts.pory"
# 897 "data/maps/RustboroCity/scripts.pory"
# 1558 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, Common_Movement_ExclamationMark
# 1559 "data/maps/RustboroCity/scripts.pory"
# 898 "data/maps/RustboroCity/scripts.pory"
# 1560 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1561 "data/maps/RustboroCity/scripts.pory"
# 899 "data/maps/RustboroCity/scripts.pory"
# 1562 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, Common_Movement_Delay48
# 1563 "data/maps/RustboroCity/scripts.pory"
# 900 "data/maps/RustboroCity/scripts.pory"
# 1564 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1565 "data/maps/RustboroCity/scripts.pory"
# 901 "data/maps/RustboroCity/scripts.pory"
# 1566 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, RustboroCity_Movement_RivalApproachPlayer5
# 1567 "data/maps/RustboroCity/scripts.pory"
# 902 "data/maps/RustboroCity/scripts.pory"
# 1568 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1569 "data/maps/RustboroCity/scripts.pory"
# 903 "data/maps/RustboroCity/scripts.pory"
# 1570 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 1571 "data/maps/RustboroCity/scripts.pory"
# 904 "data/maps/RustboroCity/scripts.pory"
# 1572 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1573 "data/maps/RustboroCity/scripts.pory"
# 905 "data/maps/RustboroCity/scripts.pory"
# 1574 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 1575 "data/maps/RustboroCity/scripts.pory"
	return
# 1576 "data/maps/RustboroCity/scripts.pory"

# 1577 "data/maps/RustboroCity/scripts.pory"

# 1578 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger6::
# 1579 "data/maps/RustboroCity/scripts.pory"
# 909 "data/maps/RustboroCity/scripts.pory"
# 1580 "data/maps/RustboroCity/scripts.pory"
	lockall
# 1581 "data/maps/RustboroCity/scripts.pory"
# 910 "data/maps/RustboroCity/scripts.pory"
# 1582 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 1583 "data/maps/RustboroCity/scripts.pory"
# 911 "data/maps/RustboroCity/scripts.pory"
# 1584 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 1585 "data/maps/RustboroCity/scripts.pory"
# 912 "data/maps/RustboroCity/scripts.pory"
# 1586 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1587 "data/maps/RustboroCity/scripts.pory"
# 913 "data/maps/RustboroCity/scripts.pory"
# 1588 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 1589 "data/maps/RustboroCity/scripts.pory"
# 914 "data/maps/RustboroCity/scripts.pory"
# 1590 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, Common_Movement_ExclamationMark
# 1591 "data/maps/RustboroCity/scripts.pory"
# 915 "data/maps/RustboroCity/scripts.pory"
# 1592 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1593 "data/maps/RustboroCity/scripts.pory"
# 916 "data/maps/RustboroCity/scripts.pory"
# 1594 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, Common_Movement_Delay48
# 1595 "data/maps/RustboroCity/scripts.pory"
# 917 "data/maps/RustboroCity/scripts.pory"
# 1596 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1597 "data/maps/RustboroCity/scripts.pory"
# 918 "data/maps/RustboroCity/scripts.pory"
# 1598 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, RustboroCity_Movement_RivalApproachPlayer6
# 1599 "data/maps/RustboroCity/scripts.pory"
# 919 "data/maps/RustboroCity/scripts.pory"
# 1600 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1601 "data/maps/RustboroCity/scripts.pory"
# 920 "data/maps/RustboroCity/scripts.pory"
# 1602 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 1603 "data/maps/RustboroCity/scripts.pory"
# 921 "data/maps/RustboroCity/scripts.pory"
# 1604 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1605 "data/maps/RustboroCity/scripts.pory"
# 922 "data/maps/RustboroCity/scripts.pory"
# 1606 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 1607 "data/maps/RustboroCity/scripts.pory"
	return
# 1608 "data/maps/RustboroCity/scripts.pory"

# 1609 "data/maps/RustboroCity/scripts.pory"

# 1610 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger7::
# 1611 "data/maps/RustboroCity/scripts.pory"
# 926 "data/maps/RustboroCity/scripts.pory"
# 1612 "data/maps/RustboroCity/scripts.pory"
	lockall
# 1613 "data/maps/RustboroCity/scripts.pory"
# 927 "data/maps/RustboroCity/scripts.pory"
# 1614 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 1615 "data/maps/RustboroCity/scripts.pory"
# 928 "data/maps/RustboroCity/scripts.pory"
# 1616 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 1617 "data/maps/RustboroCity/scripts.pory"
# 929 "data/maps/RustboroCity/scripts.pory"
# 1618 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1619 "data/maps/RustboroCity/scripts.pory"
# 930 "data/maps/RustboroCity/scripts.pory"
# 1620 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 1621 "data/maps/RustboroCity/scripts.pory"
# 931 "data/maps/RustboroCity/scripts.pory"
# 1622 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, Common_Movement_ExclamationMark
# 1623 "data/maps/RustboroCity/scripts.pory"
# 932 "data/maps/RustboroCity/scripts.pory"
# 1624 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1625 "data/maps/RustboroCity/scripts.pory"
# 933 "data/maps/RustboroCity/scripts.pory"
# 1626 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, Common_Movement_Delay48
# 1627 "data/maps/RustboroCity/scripts.pory"
# 934 "data/maps/RustboroCity/scripts.pory"
# 1628 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1629 "data/maps/RustboroCity/scripts.pory"
# 935 "data/maps/RustboroCity/scripts.pory"
# 1630 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, RustboroCity_Movement_RivalApproachPlayer7
# 1631 "data/maps/RustboroCity/scripts.pory"
# 936 "data/maps/RustboroCity/scripts.pory"
# 1632 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1633 "data/maps/RustboroCity/scripts.pory"
# 937 "data/maps/RustboroCity/scripts.pory"
# 1634 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 1635 "data/maps/RustboroCity/scripts.pory"
# 938 "data/maps/RustboroCity/scripts.pory"
# 1636 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1637 "data/maps/RustboroCity/scripts.pory"
# 939 "data/maps/RustboroCity/scripts.pory"
# 1638 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 1639 "data/maps/RustboroCity/scripts.pory"
	return
# 1640 "data/maps/RustboroCity/scripts.pory"

# 1641 "data/maps/RustboroCity/scripts.pory"

# 1642 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalEncounter::
# 1643 "data/maps/RustboroCity/scripts.pory"
# 943 "data/maps/RustboroCity/scripts.pory"
# 1644 "data/maps/RustboroCity/scripts.pory"
	checkplayergender
# 1645 "data/maps/RustboroCity/scripts.pory"
# 944 "data/maps/RustboroCity/scripts.pory"
# 1646 "data/maps/RustboroCity/scripts.pory"
	compare VAR_RESULT, MALE
# 1647 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq RustboroCity_EventScript_RivalEncounter_2
# 1648 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalEncounter_1:
# 1649 "data/maps/RustboroCity/scripts.pory"
# 947 "data/maps/RustboroCity/scripts.pory"
# 1650 "data/maps/RustboroCity/scripts.pory"
	compare VAR_RESULT, FEMALE
# 1651 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq RustboroCity_EventScript_RivalEncounter_5
# 1652 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalEncounter_4:
# 1653 "data/maps/RustboroCity/scripts.pory"
	end
# 1654 "data/maps/RustboroCity/scripts.pory"

# 1655 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalEncounter_2:
# 1656 "data/maps/RustboroCity/scripts.pory"
# 945 "data/maps/RustboroCity/scripts.pory"
# 1657 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_MayEncounter
# 1658 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter_1
# 1659 "data/maps/RustboroCity/scripts.pory"

# 1660 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalEncounter_5:
# 1661 "data/maps/RustboroCity/scripts.pory"
# 948 "data/maps/RustboroCity/scripts.pory"
# 1662 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_BrendanEncounter
# 1663 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter_4
# 1664 "data/maps/RustboroCity/scripts.pory"

# 1665 "data/maps/RustboroCity/scripts.pory"

# 1666 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_MayEncounter::
# 1667 "data/maps/RustboroCity/scripts.pory"
# 954 "data/maps/RustboroCity/scripts.pory"
# 1668 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_DEFEATED_RIVAL_RUSTBORO, RustboroCity_EventScript_MayEncounter_2
# 1669 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_MayEncounter_1:
# 1670 "data/maps/RustboroCity/scripts.pory"
# 957 "data/maps/RustboroCity/scripts.pory"
# 1671 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_MET_RIVAL_RUSTBORO, RustboroCity_EventScript_MayEncounter_5
# 1672 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_MayEncounter_4:
# 1673 "data/maps/RustboroCity/scripts.pory"
# 960 "data/maps/RustboroCity/scripts.pory"
# 1674 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_MET_RIVAL_RUSTBORO
# 1675 "data/maps/RustboroCity/scripts.pory"
# 961 "data/maps/RustboroCity/scripts.pory"
# 1676 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MayHiLetsRegister, MSGBOX_DEFAULT
# 1677 "data/maps/RustboroCity/scripts.pory"
# 962 "data/maps/RustboroCity/scripts.pory"
# 1678 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 1679 "data/maps/RustboroCity/scripts.pory"
# 963 "data/maps/RustboroCity/scripts.pory"
# 1680 "data/maps/RustboroCity/scripts.pory"
	delay 30
# 1681 "data/maps/RustboroCity/scripts.pory"
# 964 "data/maps/RustboroCity/scripts.pory"
# 1682 "data/maps/RustboroCity/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 1683 "data/maps/RustboroCity/scripts.pory"
# 965 "data/maps/RustboroCity/scripts.pory"
# 1684 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_RegisteredMay, MSGBOX_DEFAULT
# 1685 "data/maps/RustboroCity/scripts.pory"
# 966 "data/maps/RustboroCity/scripts.pory"
# 1686 "data/maps/RustboroCity/scripts.pory"
	waitfanfare
# 1687 "data/maps/RustboroCity/scripts.pory"
# 967 "data/maps/RustboroCity/scripts.pory"
# 1688 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 1689 "data/maps/RustboroCity/scripts.pory"
# 968 "data/maps/RustboroCity/scripts.pory"
# 1690 "data/maps/RustboroCity/scripts.pory"
	delay 30
# 1691 "data/maps/RustboroCity/scripts.pory"
# 969 "data/maps/RustboroCity/scripts.pory"
# 1692 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_ENABLE_RIVAL_MATCH_CALL
# 1693 "data/maps/RustboroCity/scripts.pory"
# 970 "data/maps/RustboroCity/scripts.pory"
# 1694 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 8
# 1695 "data/maps/RustboroCity/scripts.pory"
# 971 "data/maps/RustboroCity/scripts.pory"
# 1696 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_ROUTE104_STATE, 2
# 1697 "data/maps/RustboroCity/scripts.pory"
# 972 "data/maps/RustboroCity/scripts.pory"
# 1698 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8008, 0
# 1699 "data/maps/RustboroCity/scripts.pory"
# 973 "data/maps/RustboroCity/scripts.pory"
# 1700 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MayPassedBrineyWantToBattle, MSGBOX_YESNO
# 1701 "data/maps/RustboroCity/scripts.pory"
# 974 "data/maps/RustboroCity/scripts.pory"
# 1702 "data/maps/RustboroCity/scripts.pory"
	compare VAR_RESULT, YES
# 1703 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq RustboroCity_EventScript_MayEncounter_8
# 1704 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_MayEncounter_7:
# 1705 "data/maps/RustboroCity/scripts.pory"
# 977 "data/maps/RustboroCity/scripts.pory"
# 1706 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MayOhHaventRaisedPokemonEnough, MSGBOX_DEFAULT
# 1707 "data/maps/RustboroCity/scripts.pory"
# 978 "data/maps/RustboroCity/scripts.pory"
# 1708 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_RestoreBgm
# 1709 "data/maps/RustboroCity/scripts.pory"
# 979 "data/maps/RustboroCity/scripts.pory"
# 1710 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 1711 "data/maps/RustboroCity/scripts.pory"
	end
# 1712 "data/maps/RustboroCity/scripts.pory"

# 1713 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_MayEncounter_2:
# 1714 "data/maps/RustboroCity/scripts.pory"
# 955 "data/maps/RustboroCity/scripts.pory"
# 1715 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_MayBrineyHint
# 1716 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_MayEncounter_1
# 1717 "data/maps/RustboroCity/scripts.pory"

# 1718 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_MayEncounter_5:
# 1719 "data/maps/RustboroCity/scripts.pory"
# 958 "data/maps/RustboroCity/scripts.pory"
# 1720 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_MayAskToBattle
# 1721 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_MayEncounter_4
# 1722 "data/maps/RustboroCity/scripts.pory"

# 1723 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_MayEncounter_8:
# 1724 "data/maps/RustboroCity/scripts.pory"
# 975 "data/maps/RustboroCity/scripts.pory"
# 1725 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_BattleMay
# 1726 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_MayEncounter_7
# 1727 "data/maps/RustboroCity/scripts.pory"

# 1728 "data/maps/RustboroCity/scripts.pory"

# 1729 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_MayAskToBattle::
# 1730 "data/maps/RustboroCity/scripts.pory"
# 984 "data/maps/RustboroCity/scripts.pory"
# 1731 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8008, 1
# 1732 "data/maps/RustboroCity/scripts.pory"
# 985 "data/maps/RustboroCity/scripts.pory"
# 1733 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MayWantToBattle, MSGBOX_YESNO
# 1734 "data/maps/RustboroCity/scripts.pory"
# 986 "data/maps/RustboroCity/scripts.pory"
# 1735 "data/maps/RustboroCity/scripts.pory"
	compare VAR_RESULT, YES
# 1736 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq RustboroCity_EventScript_MayAskToBattle_2
# 1737 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_MayAskToBattle_1:
# 1738 "data/maps/RustboroCity/scripts.pory"
# 989 "data/maps/RustboroCity/scripts.pory"
# 1739 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MayOhHaventRaisedPokemonEnough, MSGBOX_DEFAULT
# 1740 "data/maps/RustboroCity/scripts.pory"
# 990 "data/maps/RustboroCity/scripts.pory"
# 1741 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 1742 "data/maps/RustboroCity/scripts.pory"
	end
# 1743 "data/maps/RustboroCity/scripts.pory"

# 1744 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_MayAskToBattle_2:
# 1745 "data/maps/RustboroCity/scripts.pory"
# 987 "data/maps/RustboroCity/scripts.pory"
# 1746 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_BattleMay
# 1747 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_MayAskToBattle_1
# 1748 "data/maps/RustboroCity/scripts.pory"

# 1749 "data/maps/RustboroCity/scripts.pory"

# 1750 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BattleMay::
# 1751 "data/maps/RustboroCity/scripts.pory"
# 995 "data/maps/RustboroCity/scripts.pory"
# 1752 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MayImNotGoingToLose, MSGBOX_DEFAULT
# 1753 "data/maps/RustboroCity/scripts.pory"
# 996 "data/maps/RustboroCity/scripts.pory"
# 1754 "data/maps/RustboroCity/scripts.pory"
	switch VAR_STARTER_MON
# 1755 "data/maps/RustboroCity/scripts.pory"
# 997 "data/maps/RustboroCity/scripts.pory"
# 1756 "data/maps/RustboroCity/scripts.pory"
	case 0, RustboroCity_EventScript_BattleMay_3
# 1757 "data/maps/RustboroCity/scripts.pory"
# 999 "data/maps/RustboroCity/scripts.pory"
# 1758 "data/maps/RustboroCity/scripts.pory"
	case 1, RustboroCity_EventScript_BattleMay_4
# 1759 "data/maps/RustboroCity/scripts.pory"
# 1001 "data/maps/RustboroCity/scripts.pory"
# 1760 "data/maps/RustboroCity/scripts.pory"
	case 2, RustboroCity_EventScript_BattleMay_5
# 1761 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BattleMay_1:
# 1762 "data/maps/RustboroCity/scripts.pory"
	end
# 1763 "data/maps/RustboroCity/scripts.pory"

# 1764 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BattleMay_3:
# 1765 "data/maps/RustboroCity/scripts.pory"
# 998 "data/maps/RustboroCity/scripts.pory"
# 1766 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_BattleMayTreecko
# 1767 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_BattleMay_1
# 1768 "data/maps/RustboroCity/scripts.pory"

# 1769 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BattleMay_4:
# 1770 "data/maps/RustboroCity/scripts.pory"
# 1000 "data/maps/RustboroCity/scripts.pory"
# 1771 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_BattleMayTorchic
# 1772 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_BattleMay_1
# 1773 "data/maps/RustboroCity/scripts.pory"

# 1774 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BattleMay_5:
# 1775 "data/maps/RustboroCity/scripts.pory"
# 1002 "data/maps/RustboroCity/scripts.pory"
# 1776 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_BattleMayMudkip
# 1777 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_BattleMay_1
# 1778 "data/maps/RustboroCity/scripts.pory"

# 1779 "data/maps/RustboroCity/scripts.pory"

# 1780 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_MayBrineyHint::
# 1781 "data/maps/RustboroCity/scripts.pory"
# 1008 "data/maps/RustboroCity/scripts.pory"
# 1782 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MayMrBrineyHint, MSGBOX_DEFAULT
# 1783 "data/maps/RustboroCity/scripts.pory"
# 1009 "data/maps/RustboroCity/scripts.pory"
# 1784 "data/maps/RustboroCity/scripts.pory"
	compare VAR_0x8008, 0
# 1785 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq RustboroCity_EventScript_MayBrineyHint_2
# 1786 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_MayBrineyHint_1:
# 1787 "data/maps/RustboroCity/scripts.pory"
# 1012 "data/maps/RustboroCity/scripts.pory"
# 1788 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 1789 "data/maps/RustboroCity/scripts.pory"
	end
# 1790 "data/maps/RustboroCity/scripts.pory"

# 1791 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_MayBrineyHint_2:
# 1792 "data/maps/RustboroCity/scripts.pory"
# 1010 "data/maps/RustboroCity/scripts.pory"
# 1793 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_RestoreBgm
# 1794 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_MayBrineyHint_1
# 1795 "data/maps/RustboroCity/scripts.pory"

# 1796 "data/maps/RustboroCity/scripts.pory"

# 1797 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RestoreBgm::
# 1798 "data/maps/RustboroCity/scripts.pory"
# 1017 "data/maps/RustboroCity/scripts.pory"
# 1799 "data/maps/RustboroCity/scripts.pory"
	savebgm MUS_DUMMY
# 1800 "data/maps/RustboroCity/scripts.pory"
# 1018 "data/maps/RustboroCity/scripts.pory"
# 1801 "data/maps/RustboroCity/scripts.pory"
	fadedefaultbgm
# 1802 "data/maps/RustboroCity/scripts.pory"
	return
# 1803 "data/maps/RustboroCity/scripts.pory"

# 1804 "data/maps/RustboroCity/scripts.pory"

# 1805 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BattleMayTreecko::
# 1806 "data/maps/RustboroCity/scripts.pory"
# 1023 "data/maps/RustboroCity/scripts.pory"
# 1807 "data/maps/RustboroCity/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_RUSTBORO_TREECKO, RustboroCity_Text_MayDefeat
# 1808 "data/maps/RustboroCity/scripts.pory"
# 1024 "data/maps/RustboroCity/scripts.pory"
# 1809 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_RUSTBORO
# 1810 "data/maps/RustboroCity/scripts.pory"
# 1025 "data/maps/RustboroCity/scripts.pory"
# 1811 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_MayBrineyHint
# 1812 "data/maps/RustboroCity/scripts.pory"
	end
# 1813 "data/maps/RustboroCity/scripts.pory"

# 1814 "data/maps/RustboroCity/scripts.pory"

# 1815 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BattleMayTorchic::
# 1816 "data/maps/RustboroCity/scripts.pory"
# 1030 "data/maps/RustboroCity/scripts.pory"
# 1817 "data/maps/RustboroCity/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_RUSTBORO_TORCHIC, RustboroCity_Text_MayDefeat
# 1818 "data/maps/RustboroCity/scripts.pory"
# 1031 "data/maps/RustboroCity/scripts.pory"
# 1819 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_RUSTBORO
# 1820 "data/maps/RustboroCity/scripts.pory"
# 1032 "data/maps/RustboroCity/scripts.pory"
# 1821 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_MayBrineyHint
# 1822 "data/maps/RustboroCity/scripts.pory"
	end
# 1823 "data/maps/RustboroCity/scripts.pory"

# 1824 "data/maps/RustboroCity/scripts.pory"

# 1825 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BattleMayMudkip::
# 1826 "data/maps/RustboroCity/scripts.pory"
# 1037 "data/maps/RustboroCity/scripts.pory"
# 1827 "data/maps/RustboroCity/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_RUSTBORO_MUDKIP, RustboroCity_Text_MayDefeat
# 1828 "data/maps/RustboroCity/scripts.pory"
# 1038 "data/maps/RustboroCity/scripts.pory"
# 1829 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_RUSTBORO
# 1830 "data/maps/RustboroCity/scripts.pory"
# 1039 "data/maps/RustboroCity/scripts.pory"
# 1831 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_MayBrineyHint
# 1832 "data/maps/RustboroCity/scripts.pory"
	end
# 1833 "data/maps/RustboroCity/scripts.pory"

# 1834 "data/maps/RustboroCity/scripts.pory"

# 1835 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BrendanEncounter::
# 1836 "data/maps/RustboroCity/scripts.pory"
# 1044 "data/maps/RustboroCity/scripts.pory"
# 1837 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_DEFEATED_RIVAL_RUSTBORO, RustboroCity_EventScript_BrendanEncounter_2
# 1838 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BrendanEncounter_1:
# 1839 "data/maps/RustboroCity/scripts.pory"
# 1047 "data/maps/RustboroCity/scripts.pory"
# 1840 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_MET_RIVAL_RUSTBORO, RustboroCity_EventScript_BrendanEncounter_5
# 1841 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BrendanEncounter_4:
# 1842 "data/maps/RustboroCity/scripts.pory"
# 1050 "data/maps/RustboroCity/scripts.pory"
# 1843 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_MET_RIVAL_RUSTBORO
# 1844 "data/maps/RustboroCity/scripts.pory"
# 1051 "data/maps/RustboroCity/scripts.pory"
# 1845 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_BrendanHiLetsRegister, MSGBOX_DEFAULT
# 1846 "data/maps/RustboroCity/scripts.pory"
# 1052 "data/maps/RustboroCity/scripts.pory"
# 1847 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 1848 "data/maps/RustboroCity/scripts.pory"
# 1053 "data/maps/RustboroCity/scripts.pory"
# 1849 "data/maps/RustboroCity/scripts.pory"
	delay 30
# 1850 "data/maps/RustboroCity/scripts.pory"
# 1054 "data/maps/RustboroCity/scripts.pory"
# 1851 "data/maps/RustboroCity/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 1852 "data/maps/RustboroCity/scripts.pory"
# 1055 "data/maps/RustboroCity/scripts.pory"
# 1853 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_RegisteredBrendan, MSGBOX_DEFAULT
# 1854 "data/maps/RustboroCity/scripts.pory"
# 1056 "data/maps/RustboroCity/scripts.pory"
# 1855 "data/maps/RustboroCity/scripts.pory"
	waitfanfare
# 1856 "data/maps/RustboroCity/scripts.pory"
# 1057 "data/maps/RustboroCity/scripts.pory"
# 1857 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 1858 "data/maps/RustboroCity/scripts.pory"
# 1058 "data/maps/RustboroCity/scripts.pory"
# 1859 "data/maps/RustboroCity/scripts.pory"
	delay 30
# 1860 "data/maps/RustboroCity/scripts.pory"
# 1059 "data/maps/RustboroCity/scripts.pory"
# 1861 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_ENABLE_RIVAL_MATCH_CALL
# 1862 "data/maps/RustboroCity/scripts.pory"
# 1060 "data/maps/RustboroCity/scripts.pory"
# 1863 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 8
# 1864 "data/maps/RustboroCity/scripts.pory"
# 1061 "data/maps/RustboroCity/scripts.pory"
# 1865 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_ROUTE104_STATE, 2
# 1866 "data/maps/RustboroCity/scripts.pory"
# 1062 "data/maps/RustboroCity/scripts.pory"
# 1867 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_BrendanPassedBrineyWantToBattle, MSGBOX_YESNO
# 1868 "data/maps/RustboroCity/scripts.pory"
# 1063 "data/maps/RustboroCity/scripts.pory"
# 1869 "data/maps/RustboroCity/scripts.pory"
	compare VAR_RESULT, YES
# 1870 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq RustboroCity_EventScript_BrendanEncounter_8
# 1871 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BrendanEncounter_7:
# 1872 "data/maps/RustboroCity/scripts.pory"
# 1066 "data/maps/RustboroCity/scripts.pory"
# 1873 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_BrendanNoConfidenceInPokemon, MSGBOX_DEFAULT
# 1874 "data/maps/RustboroCity/scripts.pory"
# 1067 "data/maps/RustboroCity/scripts.pory"
# 1875 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_RestoreBgm
# 1876 "data/maps/RustboroCity/scripts.pory"
# 1068 "data/maps/RustboroCity/scripts.pory"
# 1877 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 1878 "data/maps/RustboroCity/scripts.pory"
	end
# 1879 "data/maps/RustboroCity/scripts.pory"

# 1880 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BrendanEncounter_2:
# 1881 "data/maps/RustboroCity/scripts.pory"
# 1045 "data/maps/RustboroCity/scripts.pory"
# 1882 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_BrendanBrineyHint
# 1883 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_BrendanEncounter_1
# 1884 "data/maps/RustboroCity/scripts.pory"

# 1885 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BrendanEncounter_5:
# 1886 "data/maps/RustboroCity/scripts.pory"
# 1048 "data/maps/RustboroCity/scripts.pory"
# 1887 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_BrendanAskToBattle
# 1888 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_BrendanEncounter_4
# 1889 "data/maps/RustboroCity/scripts.pory"

# 1890 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BrendanEncounter_8:
# 1891 "data/maps/RustboroCity/scripts.pory"
# 1064 "data/maps/RustboroCity/scripts.pory"
# 1892 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_BattleBrendan
# 1893 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_BrendanEncounter_7
# 1894 "data/maps/RustboroCity/scripts.pory"

# 1895 "data/maps/RustboroCity/scripts.pory"

# 1896 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BrendanAskToBattle::
# 1897 "data/maps/RustboroCity/scripts.pory"
# 1073 "data/maps/RustboroCity/scripts.pory"
# 1898 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_BrendanWantToBattle, MSGBOX_YESNO
# 1899 "data/maps/RustboroCity/scripts.pory"
# 1074 "data/maps/RustboroCity/scripts.pory"
# 1900 "data/maps/RustboroCity/scripts.pory"
	compare VAR_RESULT, YES
# 1901 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq RustboroCity_EventScript_BrendanAskToBattle_2
# 1902 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BrendanAskToBattle_1:
# 1903 "data/maps/RustboroCity/scripts.pory"
# 1077 "data/maps/RustboroCity/scripts.pory"
# 1904 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_BrendanNoConfidenceInPokemon, MSGBOX_DEFAULT
# 1905 "data/maps/RustboroCity/scripts.pory"
# 1078 "data/maps/RustboroCity/scripts.pory"
# 1906 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 1907 "data/maps/RustboroCity/scripts.pory"
	end
# 1908 "data/maps/RustboroCity/scripts.pory"

# 1909 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BrendanAskToBattle_2:
# 1910 "data/maps/RustboroCity/scripts.pory"
# 1075 "data/maps/RustboroCity/scripts.pory"
# 1911 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_BattleBrendan
# 1912 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_BrendanAskToBattle_1
# 1913 "data/maps/RustboroCity/scripts.pory"

# 1914 "data/maps/RustboroCity/scripts.pory"

# 1915 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BattleBrendan::
# 1916 "data/maps/RustboroCity/scripts.pory"
# 1083 "data/maps/RustboroCity/scripts.pory"
# 1917 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_BrendanIWontGoEasy, MSGBOX_DEFAULT
# 1918 "data/maps/RustboroCity/scripts.pory"
# 1084 "data/maps/RustboroCity/scripts.pory"
# 1919 "data/maps/RustboroCity/scripts.pory"
	switch VAR_STARTER_MON
# 1920 "data/maps/RustboroCity/scripts.pory"
# 1085 "data/maps/RustboroCity/scripts.pory"
# 1921 "data/maps/RustboroCity/scripts.pory"
	case 0, RustboroCity_EventScript_BattleBrendan_3
# 1922 "data/maps/RustboroCity/scripts.pory"
# 1087 "data/maps/RustboroCity/scripts.pory"
# 1923 "data/maps/RustboroCity/scripts.pory"
	case 1, RustboroCity_EventScript_BattleBrendan_4
# 1924 "data/maps/RustboroCity/scripts.pory"
# 1089 "data/maps/RustboroCity/scripts.pory"
# 1925 "data/maps/RustboroCity/scripts.pory"
	case 2, RustboroCity_EventScript_BattleBrendan_5
# 1926 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BattleBrendan_1:
# 1927 "data/maps/RustboroCity/scripts.pory"
	end
# 1928 "data/maps/RustboroCity/scripts.pory"

# 1929 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BattleBrendan_3:
# 1930 "data/maps/RustboroCity/scripts.pory"
# 1086 "data/maps/RustboroCity/scripts.pory"
# 1931 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_BattleBrendanTreecko
# 1932 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_BattleBrendan_1
# 1933 "data/maps/RustboroCity/scripts.pory"

# 1934 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BattleBrendan_4:
# 1935 "data/maps/RustboroCity/scripts.pory"
# 1088 "data/maps/RustboroCity/scripts.pory"
# 1936 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_BattleBrendanTorchic
# 1937 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_BattleBrendan_1
# 1938 "data/maps/RustboroCity/scripts.pory"

# 1939 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BattleBrendan_5:
# 1940 "data/maps/RustboroCity/scripts.pory"
# 1090 "data/maps/RustboroCity/scripts.pory"
# 1941 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_BattleBrendanMudkip
# 1942 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_BattleBrendan_1
# 1943 "data/maps/RustboroCity/scripts.pory"

# 1944 "data/maps/RustboroCity/scripts.pory"

# 1945 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BrendanBrineyHint::
# 1946 "data/maps/RustboroCity/scripts.pory"
# 1096 "data/maps/RustboroCity/scripts.pory"
# 1947 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_BrendanMrBrineyHint, MSGBOX_DEFAULT
# 1948 "data/maps/RustboroCity/scripts.pory"
# 1097 "data/maps/RustboroCity/scripts.pory"
# 1949 "data/maps/RustboroCity/scripts.pory"
	compare VAR_0x8008, 0
# 1950 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq RustboroCity_EventScript_BrendanBrineyHint_2
# 1951 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BrendanBrineyHint_1:
# 1952 "data/maps/RustboroCity/scripts.pory"
# 1100 "data/maps/RustboroCity/scripts.pory"
# 1953 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 1954 "data/maps/RustboroCity/scripts.pory"
	end
# 1955 "data/maps/RustboroCity/scripts.pory"

# 1956 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BrendanBrineyHint_2:
# 1957 "data/maps/RustboroCity/scripts.pory"
# 1098 "data/maps/RustboroCity/scripts.pory"
# 1958 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_RestoreBgm
# 1959 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_BrendanBrineyHint_1
# 1960 "data/maps/RustboroCity/scripts.pory"

# 1961 "data/maps/RustboroCity/scripts.pory"

# 1962 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BattleBrendanTreecko::
# 1963 "data/maps/RustboroCity/scripts.pory"
# 1105 "data/maps/RustboroCity/scripts.pory"
# 1964 "data/maps/RustboroCity/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_RUSTBORO_TREECKO, RustboroCity_Text_BrendanDefeat
# 1965 "data/maps/RustboroCity/scripts.pory"
# 1106 "data/maps/RustboroCity/scripts.pory"
# 1966 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_RUSTBORO
# 1967 "data/maps/RustboroCity/scripts.pory"
# 1107 "data/maps/RustboroCity/scripts.pory"
# 1968 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_BrendanBrineyHint
# 1969 "data/maps/RustboroCity/scripts.pory"
	end
# 1970 "data/maps/RustboroCity/scripts.pory"

# 1971 "data/maps/RustboroCity/scripts.pory"

# 1972 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BattleBrendanTorchic::
# 1973 "data/maps/RustboroCity/scripts.pory"
# 1112 "data/maps/RustboroCity/scripts.pory"
# 1974 "data/maps/RustboroCity/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_RUSTBORO_TORCHIC, RustboroCity_Text_BrendanDefeat
# 1975 "data/maps/RustboroCity/scripts.pory"
# 1113 "data/maps/RustboroCity/scripts.pory"
# 1976 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_RUSTBORO
# 1977 "data/maps/RustboroCity/scripts.pory"
# 1114 "data/maps/RustboroCity/scripts.pory"
# 1978 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_BrendanBrineyHint
# 1979 "data/maps/RustboroCity/scripts.pory"
	end
# 1980 "data/maps/RustboroCity/scripts.pory"

# 1981 "data/maps/RustboroCity/scripts.pory"

# 1982 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BattleBrendanMudkip::
# 1983 "data/maps/RustboroCity/scripts.pory"
# 1119 "data/maps/RustboroCity/scripts.pory"
# 1984 "data/maps/RustboroCity/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_RUSTBORO_MUDKIP, RustboroCity_Text_BrendanDefeat
# 1985 "data/maps/RustboroCity/scripts.pory"
# 1120 "data/maps/RustboroCity/scripts.pory"
# 1986 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_RUSTBORO
# 1987 "data/maps/RustboroCity/scripts.pory"
# 1121 "data/maps/RustboroCity/scripts.pory"
# 1988 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_BrendanBrineyHint
# 1989 "data/maps/RustboroCity/scripts.pory"
	end
# 1990 "data/maps/RustboroCity/scripts.pory"

# 1991 "data/maps/RustboroCity/scripts.pory"

# 1992 "data/maps/RustboroCity/scripts.pory"
# 1125 "data/maps/RustboroCity/scripts.pory"
# 1993 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer0:
# 1994 "data/maps/RustboroCity/scripts.pory"
# 1126 "data/maps/RustboroCity/scripts.pory"
# 1995 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1996 "data/maps/RustboroCity/scripts.pory"
# 1127 "data/maps/RustboroCity/scripts.pory"
# 1997 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 1998 "data/maps/RustboroCity/scripts.pory"
# 1128 "data/maps/RustboroCity/scripts.pory"
# 1999 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 2000 "data/maps/RustboroCity/scripts.pory"
# 1129 "data/maps/RustboroCity/scripts.pory"
# 2001 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 2002 "data/maps/RustboroCity/scripts.pory"
# 1130 "data/maps/RustboroCity/scripts.pory"
# 2003 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 2004 "data/maps/RustboroCity/scripts.pory"
# 1131 "data/maps/RustboroCity/scripts.pory"
# 2005 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 2006 "data/maps/RustboroCity/scripts.pory"
# 1132 "data/maps/RustboroCity/scripts.pory"
# 2007 "data/maps/RustboroCity/scripts.pory"
	step_end
# 2008 "data/maps/RustboroCity/scripts.pory"

# 2009 "data/maps/RustboroCity/scripts.pory"
# 1135 "data/maps/RustboroCity/scripts.pory"
# 2010 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer1:
# 2011 "data/maps/RustboroCity/scripts.pory"
# 1136 "data/maps/RustboroCity/scripts.pory"
# 2012 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 2013 "data/maps/RustboroCity/scripts.pory"
# 1137 "data/maps/RustboroCity/scripts.pory"
# 2014 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 2015 "data/maps/RustboroCity/scripts.pory"
# 1138 "data/maps/RustboroCity/scripts.pory"
# 2016 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 2017 "data/maps/RustboroCity/scripts.pory"
# 1139 "data/maps/RustboroCity/scripts.pory"
# 2018 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 2019 "data/maps/RustboroCity/scripts.pory"
# 1140 "data/maps/RustboroCity/scripts.pory"
# 2020 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 2021 "data/maps/RustboroCity/scripts.pory"
# 1141 "data/maps/RustboroCity/scripts.pory"
# 2022 "data/maps/RustboroCity/scripts.pory"
	step_end
# 2023 "data/maps/RustboroCity/scripts.pory"

# 2024 "data/maps/RustboroCity/scripts.pory"
# 1144 "data/maps/RustboroCity/scripts.pory"
# 2025 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer2:
# 2026 "data/maps/RustboroCity/scripts.pory"
# 1145 "data/maps/RustboroCity/scripts.pory"
# 2027 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 2028 "data/maps/RustboroCity/scripts.pory"
# 1146 "data/maps/RustboroCity/scripts.pory"
# 2029 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 2030 "data/maps/RustboroCity/scripts.pory"
# 1147 "data/maps/RustboroCity/scripts.pory"
# 2031 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 2032 "data/maps/RustboroCity/scripts.pory"
# 1148 "data/maps/RustboroCity/scripts.pory"
# 2033 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 2034 "data/maps/RustboroCity/scripts.pory"
# 1149 "data/maps/RustboroCity/scripts.pory"
# 2035 "data/maps/RustboroCity/scripts.pory"
	step_end
# 2036 "data/maps/RustboroCity/scripts.pory"

# 2037 "data/maps/RustboroCity/scripts.pory"
# 1152 "data/maps/RustboroCity/scripts.pory"
# 2038 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer3:
# 2039 "data/maps/RustboroCity/scripts.pory"
# 1153 "data/maps/RustboroCity/scripts.pory"
# 2040 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 2041 "data/maps/RustboroCity/scripts.pory"
# 1154 "data/maps/RustboroCity/scripts.pory"
# 2042 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 2043 "data/maps/RustboroCity/scripts.pory"
# 1155 "data/maps/RustboroCity/scripts.pory"
# 2044 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 2045 "data/maps/RustboroCity/scripts.pory"
# 1156 "data/maps/RustboroCity/scripts.pory"
# 2046 "data/maps/RustboroCity/scripts.pory"
	step_end
# 2047 "data/maps/RustboroCity/scripts.pory"

# 2048 "data/maps/RustboroCity/scripts.pory"
# 1159 "data/maps/RustboroCity/scripts.pory"
# 2049 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer4:
# 2050 "data/maps/RustboroCity/scripts.pory"
# 1160 "data/maps/RustboroCity/scripts.pory"
# 2051 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 2052 "data/maps/RustboroCity/scripts.pory"
# 1161 "data/maps/RustboroCity/scripts.pory"
# 2053 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 2054 "data/maps/RustboroCity/scripts.pory"
# 1162 "data/maps/RustboroCity/scripts.pory"
# 2055 "data/maps/RustboroCity/scripts.pory"
	step_end
# 2056 "data/maps/RustboroCity/scripts.pory"

# 2057 "data/maps/RustboroCity/scripts.pory"
# 1165 "data/maps/RustboroCity/scripts.pory"
# 2058 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer5:
# 2059 "data/maps/RustboroCity/scripts.pory"
# 1166 "data/maps/RustboroCity/scripts.pory"
# 2060 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 2061 "data/maps/RustboroCity/scripts.pory"
# 1167 "data/maps/RustboroCity/scripts.pory"
# 2062 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 2063 "data/maps/RustboroCity/scripts.pory"
# 1168 "data/maps/RustboroCity/scripts.pory"
# 2064 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 2065 "data/maps/RustboroCity/scripts.pory"
# 1169 "data/maps/RustboroCity/scripts.pory"
# 2066 "data/maps/RustboroCity/scripts.pory"
	step_end
# 2067 "data/maps/RustboroCity/scripts.pory"

# 2068 "data/maps/RustboroCity/scripts.pory"
# 1172 "data/maps/RustboroCity/scripts.pory"
# 2069 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer6:
# 2070 "data/maps/RustboroCity/scripts.pory"
# 1173 "data/maps/RustboroCity/scripts.pory"
# 2071 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 2072 "data/maps/RustboroCity/scripts.pory"
# 1174 "data/maps/RustboroCity/scripts.pory"
# 2073 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 2074 "data/maps/RustboroCity/scripts.pory"
# 1175 "data/maps/RustboroCity/scripts.pory"
# 2075 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 2076 "data/maps/RustboroCity/scripts.pory"
# 1176 "data/maps/RustboroCity/scripts.pory"
# 2077 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 2078 "data/maps/RustboroCity/scripts.pory"
# 1177 "data/maps/RustboroCity/scripts.pory"
# 2079 "data/maps/RustboroCity/scripts.pory"
	step_end
# 2080 "data/maps/RustboroCity/scripts.pory"

# 2081 "data/maps/RustboroCity/scripts.pory"
# 1180 "data/maps/RustboroCity/scripts.pory"
# 2082 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer7:
# 2083 "data/maps/RustboroCity/scripts.pory"
# 1181 "data/maps/RustboroCity/scripts.pory"
# 2084 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 2085 "data/maps/RustboroCity/scripts.pory"
# 1182 "data/maps/RustboroCity/scripts.pory"
# 2086 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 2087 "data/maps/RustboroCity/scripts.pory"
# 1183 "data/maps/RustboroCity/scripts.pory"
# 2088 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 2089 "data/maps/RustboroCity/scripts.pory"
# 1184 "data/maps/RustboroCity/scripts.pory"
# 2090 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 2091 "data/maps/RustboroCity/scripts.pory"
# 1185 "data/maps/RustboroCity/scripts.pory"
# 2092 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 2093 "data/maps/RustboroCity/scripts.pory"
# 1186 "data/maps/RustboroCity/scripts.pory"
# 2094 "data/maps/RustboroCity/scripts.pory"
	step_end
# 2095 "data/maps/RustboroCity/scripts.pory"

# 2096 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Boy1::
# 2097 "data/maps/RustboroCity/scripts.pory"
# 1190 "data/maps/RustboroCity/scripts.pory"
# 2098 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_YouCanHave2On2Battle, MSGBOX_NPC
# 2099 "data/maps/RustboroCity/scripts.pory"
	end
# 2100 "data/maps/RustboroCity/scripts.pory"

# 2101 "data/maps/RustboroCity/scripts.pory"

# 2102 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_WeShortenItToDevon::
# 2103 "data/maps/RustboroCity/scripts.pory"
# 1194 "data/maps/RustboroCity/scripts.pory"
# 2104 "data/maps/RustboroCity/scripts.pory"
	.string "The DEVON CORPORATION…\n"
# 2105 "data/maps/RustboroCity/scripts.pory"
	.string "We all just shorten it to DEVON.\p"
# 2106 "data/maps/RustboroCity/scripts.pory"
	.string "That company makes all sorts of\n"
# 2107 "data/maps/RustboroCity/scripts.pory"
	.string "convenient products.$"
# 2108 "data/maps/RustboroCity/scripts.pory"

# 2109 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_SneakyLookingManWentAroundCorner::
# 2110 "data/maps/RustboroCity/scripts.pory"
# 1201 "data/maps/RustboroCity/scripts.pory"
# 2111 "data/maps/RustboroCity/scripts.pory"
	.string "Hm? A sneaky-looking man?\p"
# 2112 "data/maps/RustboroCity/scripts.pory"
	.string "Come to think of it, yes, a shady-\n"
# 2113 "data/maps/RustboroCity/scripts.pory"
	.string "looking guy went around the corner.$"
# 2114 "data/maps/RustboroCity/scripts.pory"

# 2115 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_HaveYouChallengedGym::
# 2116 "data/maps/RustboroCity/scripts.pory"
# 1207 "data/maps/RustboroCity/scripts.pory"
# 2117 "data/maps/RustboroCity/scripts.pory"
	.string "Have you taken the POKéMON GYM\n"
# 2118 "data/maps/RustboroCity/scripts.pory"
	.string "challenge?\p"
# 2119 "data/maps/RustboroCity/scripts.pory"
	.string "When you get that shiny GYM BADGE\n"
# 2120 "data/maps/RustboroCity/scripts.pory"
	.string "in hand, I guess TRAINERS begin to\l"
# 2121 "data/maps/RustboroCity/scripts.pory"
	.string "realize what is required of them.$"
# 2122 "data/maps/RustboroCity/scripts.pory"

# 2123 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_HeyThatsRustborosGymBadge::
# 2124 "data/maps/RustboroCity/scripts.pory"
# 1215 "data/maps/RustboroCity/scripts.pory"
# 2125 "data/maps/RustboroCity/scripts.pory"
	.string "Hey, that's RUSTBORO's GYM BADGE!\p"
# 2126 "data/maps/RustboroCity/scripts.pory"
	.string "Out of all the POKéMON GYM BADGES,\n"
# 2127 "data/maps/RustboroCity/scripts.pory"
	.string "RUSTBORO's is the coolest, I'd say.$"
# 2128 "data/maps/RustboroCity/scripts.pory"

# 2129 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_YoureNewAroundHere::
# 2130 "data/maps/RustboroCity/scripts.pory"
# 1221 "data/maps/RustboroCity/scripts.pory"
# 2131 "data/maps/RustboroCity/scripts.pory"
	.string "Oh? Who might you be?\n"
# 2132 "data/maps/RustboroCity/scripts.pory"
	.string "You're a new face around these parts.\p"
# 2133 "data/maps/RustboroCity/scripts.pory"
	.string "Have you just transferred into the\n"
# 2134 "data/maps/RustboroCity/scripts.pory"
	.string "POKéMON TRAINER'S SCHOOL?$"
# 2135 "data/maps/RustboroCity/scripts.pory"

# 2136 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_GymLeaderIsntEasyWithFire::
# 2137 "data/maps/RustboroCity/scripts.pory"
# 1228 "data/maps/RustboroCity/scripts.pory"
# 2138 "data/maps/RustboroCity/scripts.pory"
	.string "I challenged the GYM LEADER, but…\p"
# 2139 "data/maps/RustboroCity/scripts.pory"
	.string "It's not going to be easy winning with\n"
# 2140 "data/maps/RustboroCity/scripts.pory"
	.string "my FIRE-type POKéMON…\p"
# 2141 "data/maps/RustboroCity/scripts.pory"
	.string "FIRE-type POKéMON don't match up\n"
# 2142 "data/maps/RustboroCity/scripts.pory"
	.string "well against ROCK-type POKéMON…$"
# 2143 "data/maps/RustboroCity/scripts.pory"

# 2144 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MrBrineyWalksInTheTunnel::
# 2145 "data/maps/RustboroCity/scripts.pory"
# 1236 "data/maps/RustboroCity/scripts.pory"
# 2146 "data/maps/RustboroCity/scripts.pory"
	.string "The old sailor MR. BRINEY lives in\n"
# 2147 "data/maps/RustboroCity/scripts.pory"
	.string "a cottage by the sea.\p"
# 2148 "data/maps/RustboroCity/scripts.pory"
	.string "He goes for walks in the tunnel every\n"
# 2149 "data/maps/RustboroCity/scripts.pory"
	.string "so often.$"
# 2150 "data/maps/RustboroCity/scripts.pory"

# 2151 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MrBrineyLovesPeeko::
# 2152 "data/maps/RustboroCity/scripts.pory"
# 1243 "data/maps/RustboroCity/scripts.pory"
# 2153 "data/maps/RustboroCity/scripts.pory"
	.string "The old sailor MR. BRINEY lives in\n"
# 2154 "data/maps/RustboroCity/scripts.pory"
	.string "a cottage by the sea.\p"
# 2155 "data/maps/RustboroCity/scripts.pory"
	.string "He said he was going shopping in\n"
# 2156 "data/maps/RustboroCity/scripts.pory"
	.string "SLATEPORT for his pet, PEEKO.\p"
# 2157 "data/maps/RustboroCity/scripts.pory"
	.string "That old sea dog, he must really love\n"
# 2158 "data/maps/RustboroCity/scripts.pory"
	.string "that PEEKO.$"
# 2159 "data/maps/RustboroCity/scripts.pory"

# 2160 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_WowYouHavePokemon::
# 2161 "data/maps/RustboroCity/scripts.pory"
# 1252 "data/maps/RustboroCity/scripts.pory"
# 2162 "data/maps/RustboroCity/scripts.pory"
	.string "Wow, you have POKéMON with you, too.\p"
# 2163 "data/maps/RustboroCity/scripts.pory"
	.string "When I get bigger, I'm going to go\n"
# 2164 "data/maps/RustboroCity/scripts.pory"
	.string "places with POKéMON, too.$"
# 2165 "data/maps/RustboroCity/scripts.pory"

# 2166 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_CatchRarePokemonIfIGoToSchool::
# 2167 "data/maps/RustboroCity/scripts.pory"
# 1258 "data/maps/RustboroCity/scripts.pory"
# 2168 "data/maps/RustboroCity/scripts.pory"
	.string "POKéMON TRAINER'S SCHOOL!\p"
# 2169 "data/maps/RustboroCity/scripts.pory"
	.string "If I go to this school, will I be able\n"
# 2170 "data/maps/RustboroCity/scripts.pory"
	.string "to catch rare POKéMON easily?$"
# 2171 "data/maps/RustboroCity/scripts.pory"

# 2172 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_PokemonCanChangeLookFromExp::
# 2173 "data/maps/RustboroCity/scripts.pory"
# 1264 "data/maps/RustboroCity/scripts.pory"
# 2174 "data/maps/RustboroCity/scripts.pory"
	.string "If a POKéMON gains experience in\n"
# 2175 "data/maps/RustboroCity/scripts.pory"
	.string "battles, it can sometimes change in\l"
# 2176 "data/maps/RustboroCity/scripts.pory"
	.string "the way it looks.$"
# 2177 "data/maps/RustboroCity/scripts.pory"

# 2178 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_PokemonChangeShape::
# 2179 "data/maps/RustboroCity/scripts.pory"
# 1270 "data/maps/RustboroCity/scripts.pory"
# 2180 "data/maps/RustboroCity/scripts.pory"
	.string "A POKéMON changes shape?\n"
# 2181 "data/maps/RustboroCity/scripts.pory"
	.string "If one did that, I would be shocked!$"
# 2182 "data/maps/RustboroCity/scripts.pory"

# 2183 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_TradePokemonGrowFast::
# 2184 "data/maps/RustboroCity/scripts.pory"
# 1275 "data/maps/RustboroCity/scripts.pory"
# 2185 "data/maps/RustboroCity/scripts.pory"
	.string "A POKéMON you get in a trade from\n"
# 2186 "data/maps/RustboroCity/scripts.pory"
	.string "someone grows fast.\p"
# 2187 "data/maps/RustboroCity/scripts.pory"
	.string "But if you don't have certain GYM\n"
# 2188 "data/maps/RustboroCity/scripts.pory"
	.string "BADGES, it may not obey you…$"
# 2189 "data/maps/RustboroCity/scripts.pory"

# 2190 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_OutOfTheWay::
# 2191 "data/maps/RustboroCity/scripts.pory"
# 1282 "data/maps/RustboroCity/scripts.pory"
# 2192 "data/maps/RustboroCity/scripts.pory"
	.string "Get out!\n"
# 2193 "data/maps/RustboroCity/scripts.pory"
	.string "Out of the way!$"
# 2194 "data/maps/RustboroCity/scripts.pory"

# 2195 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_WaitDontTakeMyGoods::
# 2196 "data/maps/RustboroCity/scripts.pory"
# 1287 "data/maps/RustboroCity/scripts.pory"
# 2197 "data/maps/RustboroCity/scripts.pory"
	.string "Wait! Pleeeaaase!\p"
# 2198 "data/maps/RustboroCity/scripts.pory"
	.string "Don't take my GOODS!$"
# 2199 "data/maps/RustboroCity/scripts.pory"

# 2200 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_HelpMeIWasRobbed::
# 2201 "data/maps/RustboroCity/scripts.pory"
# 1292 "data/maps/RustboroCity/scripts.pory"
# 2202 "data/maps/RustboroCity/scripts.pory"
	.string "Oh, it's you!\p"
# 2203 "data/maps/RustboroCity/scripts.pory"
	.string "You're that fantastic TRAINER who\n"
# 2204 "data/maps/RustboroCity/scripts.pory"
	.string "helped me in PETALBURG WOODS!\p"
# 2205 "data/maps/RustboroCity/scripts.pory"
	.string "Help me! I was robbed by TEAM AQUA!\n"
# 2206 "data/maps/RustboroCity/scripts.pory"
	.string "I have to get the DEVON GOODS back!\p"
# 2207 "data/maps/RustboroCity/scripts.pory"
	.string "If I don't…\n"
# 2208 "data/maps/RustboroCity/scripts.pory"
	.string "I'm going to be in serious trouble.$"
# 2209 "data/maps/RustboroCity/scripts.pory"

# 2210 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_ShadyCharacterTookOffTowardsTunnel::
# 2211 "data/maps/RustboroCity/scripts.pory"
# 1302 "data/maps/RustboroCity/scripts.pory"
# 2212 "data/maps/RustboroCity/scripts.pory"
	.string "That shady character, I think he took\n"
# 2213 "data/maps/RustboroCity/scripts.pory"
	.string "off towards the tunnel over there.$"
# 2214 "data/maps/RustboroCity/scripts.pory"

# 2215 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_YouGotItThankYou::
# 2216 "data/maps/RustboroCity/scripts.pory"
# 1307 "data/maps/RustboroCity/scripts.pory"
# 2217 "data/maps/RustboroCity/scripts.pory"
	.string "Oh! How did it go?\n"
# 2218 "data/maps/RustboroCity/scripts.pory"
	.string "The DEVON GOODS?\p"
# 2219 "data/maps/RustboroCity/scripts.pory"
	.string "You did!\n"
# 2220 "data/maps/RustboroCity/scripts.pory"
	.string "You got them back!\p"
# 2221 "data/maps/RustboroCity/scripts.pory"
	.string "You really are a great TRAINER!\p"
# 2222 "data/maps/RustboroCity/scripts.pory"
	.string "I know! As my thanks, I'll give you\n"
# 2223 "data/maps/RustboroCity/scripts.pory"
	.string "another GREAT BALL!$"
# 2224 "data/maps/RustboroCity/scripts.pory"

# 2225 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_YoureLoadedWithItems::
# 2226 "data/maps/RustboroCity/scripts.pory"
# 1317 "data/maps/RustboroCity/scripts.pory"
# 2227 "data/maps/RustboroCity/scripts.pory"
	.string "You're loaded with items.\n"
# 2228 "data/maps/RustboroCity/scripts.pory"
	.string "I can't give you this GREAT BALL.$"
# 2229 "data/maps/RustboroCity/scripts.pory"

# 2230 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_PleaseComeWithMe::
# 2231 "data/maps/RustboroCity/scripts.pory"
# 1322 "data/maps/RustboroCity/scripts.pory"
# 2232 "data/maps/RustboroCity/scripts.pory"
	.string "Excuse me, please!\n"
# 2233 "data/maps/RustboroCity/scripts.pory"
	.string "Please come with me!$"
# 2234 "data/maps/RustboroCity/scripts.pory"

# 2235 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MayHiLetsRegister::
# 2236 "data/maps/RustboroCity/scripts.pory"
# 1327 "data/maps/RustboroCity/scripts.pory"
# 2237 "data/maps/RustboroCity/scripts.pory"
	.string "MAY: Oh, hi, {PLAYER}{KUN}!\p"
# 2238 "data/maps/RustboroCity/scripts.pory"
	.string "You had a MATCH CALL feature put\n"
# 2239 "data/maps/RustboroCity/scripts.pory"
	.string "on your POKéNAV!\p"
# 2240 "data/maps/RustboroCity/scripts.pory"
	.string "Let's register each other so we can\n"
# 2241 "data/maps/RustboroCity/scripts.pory"
	.string "contact one another anytime!\p"
# 2242 "data/maps/RustboroCity/scripts.pory"
	.string "… … … … … …$"
# 2243 "data/maps/RustboroCity/scripts.pory"

# 2244 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_RegisteredMay::
# 2245 "data/maps/RustboroCity/scripts.pory"
# 1336 "data/maps/RustboroCity/scripts.pory"
# 2246 "data/maps/RustboroCity/scripts.pory"
	.string "Registered MAY\n"
# 2247 "data/maps/RustboroCity/scripts.pory"
	.string "in the POKéNAV.$"
# 2248 "data/maps/RustboroCity/scripts.pory"

# 2249 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MayPassedBrineyWantToBattle::
# 2250 "data/maps/RustboroCity/scripts.pory"
# 1341 "data/maps/RustboroCity/scripts.pory"
# 2251 "data/maps/RustboroCity/scripts.pory"
	.string "MAY: Oh, by the way, I passed\n"
# 2252 "data/maps/RustboroCity/scripts.pory"
	.string "MR. BRINEY in PETALBURG WOODS.\p"
# 2253 "data/maps/RustboroCity/scripts.pory"
	.string "I guess he's on his way home to his\n"
# 2254 "data/maps/RustboroCity/scripts.pory"
	.string "cottage by the sea.\p"
# 2255 "data/maps/RustboroCity/scripts.pory"
	.string "How's your POKéDEX coming along,\n"
# 2256 "data/maps/RustboroCity/scripts.pory"
	.string "{PLAYER}{KUN}? Mine's looking pretty decent!\p"
# 2257 "data/maps/RustboroCity/scripts.pory"
	.string "So…\n"
# 2258 "data/maps/RustboroCity/scripts.pory"
	.string "How about a little battle?$"
# 2259 "data/maps/RustboroCity/scripts.pory"

# 2260 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MayOhHaventRaisedPokemonEnough::
# 2261 "data/maps/RustboroCity/scripts.pory"
# 1352 "data/maps/RustboroCity/scripts.pory"
# 2262 "data/maps/RustboroCity/scripts.pory"
	.string "MAY: Oh, what's the matter?\p"
# 2263 "data/maps/RustboroCity/scripts.pory"
	.string "Haven't you caught or raised your\n"
# 2264 "data/maps/RustboroCity/scripts.pory"
	.string "POKéMON very much?\p"
# 2265 "data/maps/RustboroCity/scripts.pory"
	.string "That's not very good for a TRAINER!$"
# 2266 "data/maps/RustboroCity/scripts.pory"

# 2267 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MayWantToBattle::
# 2268 "data/maps/RustboroCity/scripts.pory"
# 1359 "data/maps/RustboroCity/scripts.pory"
# 2269 "data/maps/RustboroCity/scripts.pory"
	.string "MAY: So, what do you think?\n"
# 2270 "data/maps/RustboroCity/scripts.pory"
	.string "How about a little battle here?$"
# 2271 "data/maps/RustboroCity/scripts.pory"

# 2272 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MayImNotGoingToLose::
# 2273 "data/maps/RustboroCity/scripts.pory"
# 1364 "data/maps/RustboroCity/scripts.pory"
# 2274 "data/maps/RustboroCity/scripts.pory"
	.string "MAY: You just became a TRAINER,\n"
# 2275 "data/maps/RustboroCity/scripts.pory"
	.string "{PLAYER}{KUN}. I'm not going to lose!$"
# 2276 "data/maps/RustboroCity/scripts.pory"

# 2277 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MayDefeat::
# 2278 "data/maps/RustboroCity/scripts.pory"
# 1369 "data/maps/RustboroCity/scripts.pory"
# 2279 "data/maps/RustboroCity/scripts.pory"
	.string "Yikes!\n"
# 2280 "data/maps/RustboroCity/scripts.pory"
	.string "You're better than I expected!$"
# 2281 "data/maps/RustboroCity/scripts.pory"

# 2282 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MayMrBrineyHint::
# 2283 "data/maps/RustboroCity/scripts.pory"
# 1374 "data/maps/RustboroCity/scripts.pory"
# 2284 "data/maps/RustboroCity/scripts.pory"
	.string "MAY: Oh, by the way, MR. BRINEY, who\n"
# 2285 "data/maps/RustboroCity/scripts.pory"
	.string "I just passed…\p"
# 2286 "data/maps/RustboroCity/scripts.pory"
	.string "{PLAYER}{KUN}, you just moved here so you\n"
# 2287 "data/maps/RustboroCity/scripts.pory"
	.string "might not know this, but MR. BRINEY\l"
# 2288 "data/maps/RustboroCity/scripts.pory"
	.string "was once a revered seafarer.$"
# 2289 "data/maps/RustboroCity/scripts.pory"

# 2290 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_BrendanHiLetsRegister::
# 2291 "data/maps/RustboroCity/scripts.pory"
# 1382 "data/maps/RustboroCity/scripts.pory"
# 2292 "data/maps/RustboroCity/scripts.pory"
	.string "BRENDAN: Oh, hey, {PLAYER}!\p"
# 2293 "data/maps/RustboroCity/scripts.pory"
	.string "You had a MATCH CALL feature put\n"
# 2294 "data/maps/RustboroCity/scripts.pory"
	.string "on your POKéNAV! Cool!\p"
# 2295 "data/maps/RustboroCity/scripts.pory"
	.string "Let's register each other so we can\n"
# 2296 "data/maps/RustboroCity/scripts.pory"
	.string "get in touch anytime!\p"
# 2297 "data/maps/RustboroCity/scripts.pory"
	.string "… … … … … …$"
# 2298 "data/maps/RustboroCity/scripts.pory"

# 2299 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_RegisteredBrendan::
# 2300 "data/maps/RustboroCity/scripts.pory"
# 1391 "data/maps/RustboroCity/scripts.pory"
# 2301 "data/maps/RustboroCity/scripts.pory"
	.string "Registered BRENDAN\n"
# 2302 "data/maps/RustboroCity/scripts.pory"
	.string "in the POKéNAV.$"
# 2303 "data/maps/RustboroCity/scripts.pory"

# 2304 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_BrendanPassedBrineyWantToBattle::
# 2305 "data/maps/RustboroCity/scripts.pory"
# 1396 "data/maps/RustboroCity/scripts.pory"
# 2306 "data/maps/RustboroCity/scripts.pory"
	.string "BRENDAN: By the way, {PLAYER}, I walked\n"
# 2307 "data/maps/RustboroCity/scripts.pory"
	.string "by MR. BRINEY in PETALBURG WOODS.\p"
# 2308 "data/maps/RustboroCity/scripts.pory"
	.string "I bet he was on his way home to his\n"
# 2309 "data/maps/RustboroCity/scripts.pory"
	.string "cottage by the sea.\p"
# 2310 "data/maps/RustboroCity/scripts.pory"
	.string "{PLAYER}, how's your POKéDEX?\n"
# 2311 "data/maps/RustboroCity/scripts.pory"
	.string "Have you filled in any pages yet?\p"
# 2312 "data/maps/RustboroCity/scripts.pory"
	.string "Mine rules.\p"
# 2313 "data/maps/RustboroCity/scripts.pory"
	.string "Want to have a battle to test how\n"
# 2314 "data/maps/RustboroCity/scripts.pory"
	.string "far you've progressed?$"
# 2315 "data/maps/RustboroCity/scripts.pory"

# 2316 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_BrendanNoConfidenceInPokemon::
# 2317 "data/maps/RustboroCity/scripts.pory"
# 1408 "data/maps/RustboroCity/scripts.pory"
# 2318 "data/maps/RustboroCity/scripts.pory"
	.string "BRENDAN: What's the matter? Don't have\n"
# 2319 "data/maps/RustboroCity/scripts.pory"
	.string "any confidence in your POKéMON?$"
# 2320 "data/maps/RustboroCity/scripts.pory"

# 2321 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_BrendanWantToBattle::
# 2322 "data/maps/RustboroCity/scripts.pory"
# 1413 "data/maps/RustboroCity/scripts.pory"
# 2323 "data/maps/RustboroCity/scripts.pory"
	.string "BRENDAN: What's up?\n"
# 2324 "data/maps/RustboroCity/scripts.pory"
	.string "Want to have a battle with me?$"
# 2325 "data/maps/RustboroCity/scripts.pory"

# 2326 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_BrendanIWontGoEasy::
# 2327 "data/maps/RustboroCity/scripts.pory"
# 1418 "data/maps/RustboroCity/scripts.pory"
# 2328 "data/maps/RustboroCity/scripts.pory"
	.string "BRENDAN: I know you just became\n"
# 2329 "data/maps/RustboroCity/scripts.pory"
	.string "a TRAINER, but I won't go easy!$"
# 2330 "data/maps/RustboroCity/scripts.pory"

# 2331 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_BrendanDefeat::
# 2332 "data/maps/RustboroCity/scripts.pory"
# 1423 "data/maps/RustboroCity/scripts.pory"
# 2333 "data/maps/RustboroCity/scripts.pory"
	.string "Hmm…\n"
# 2334 "data/maps/RustboroCity/scripts.pory"
	.string "You're pretty good.$"
# 2335 "data/maps/RustboroCity/scripts.pory"

# 2336 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_BrendanMrBrineyHint::
# 2337 "data/maps/RustboroCity/scripts.pory"
# 1428 "data/maps/RustboroCity/scripts.pory"
# 2338 "data/maps/RustboroCity/scripts.pory"
	.string "BRENDAN: By the way, you know\n"
# 2339 "data/maps/RustboroCity/scripts.pory"
	.string "MR. BRINEY? The guy I just passed?\p"
# 2340 "data/maps/RustboroCity/scripts.pory"
	.string "I bet you didn't know this, since you\n"
# 2341 "data/maps/RustboroCity/scripts.pory"
	.string "just moved here, {PLAYER}, but\l"
# 2342 "data/maps/RustboroCity/scripts.pory"
	.string "MR. BRINEY was once a great sailor.$"
# 2343 "data/maps/RustboroCity/scripts.pory"

# 2344 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_TunnelNearingCompletion::
# 2345 "data/maps/RustboroCity/scripts.pory"
# 1436 "data/maps/RustboroCity/scripts.pory"
# 2346 "data/maps/RustboroCity/scripts.pory"
	.string "“Timesaving tunnel nearing\n"
# 2347 "data/maps/RustboroCity/scripts.pory"
	.string "completion!”\p"
# 2348 "data/maps/RustboroCity/scripts.pory"
	.string "…Is what it says on the sign, but\n"
# 2349 "data/maps/RustboroCity/scripts.pory"
	.string "there's also a big “X” splashed\l"
# 2350 "data/maps/RustboroCity/scripts.pory"
	.string "across it in red paint…$"
# 2351 "data/maps/RustboroCity/scripts.pory"

# 2352 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_DevonCorpSign::
# 2353 "data/maps/RustboroCity/scripts.pory"
# 1444 "data/maps/RustboroCity/scripts.pory"
# 2354 "data/maps/RustboroCity/scripts.pory"
	.string "DEVON CORPORATION\p"
# 2355 "data/maps/RustboroCity/scripts.pory"
	.string "“For all your living needs, we make\n"
# 2356 "data/maps/RustboroCity/scripts.pory"
	.string "it all.”$"
# 2357 "data/maps/RustboroCity/scripts.pory"

# 2358 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_GymSign::
# 2359 "data/maps/RustboroCity/scripts.pory"
# 1450 "data/maps/RustboroCity/scripts.pory"
# 2360 "data/maps/RustboroCity/scripts.pory"
	.string "RUSTBORO CITY POKéMON GYM\n"
# 2361 "data/maps/RustboroCity/scripts.pory"
	.string "LEADER: ROXANNE\p"
# 2362 "data/maps/RustboroCity/scripts.pory"
	.string "“The ROCK-loving honors student!”$"
# 2363 "data/maps/RustboroCity/scripts.pory"

# 2364 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_DevonCorpBranchOfficeSign::
# 2365 "data/maps/RustboroCity/scripts.pory"
# 1456 "data/maps/RustboroCity/scripts.pory"
# 2366 "data/maps/RustboroCity/scripts.pory"
	.string "DEVON CORP. BRANCH OFFICE\p"
# 2367 "data/maps/RustboroCity/scripts.pory"
	.string "“Access limited to DEVON employees\n"
# 2368 "data/maps/RustboroCity/scripts.pory"
	.string "and authorized personnel.”$"
# 2369 "data/maps/RustboroCity/scripts.pory"

# 2370 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_CitySign::
# 2371 "data/maps/RustboroCity/scripts.pory"
# 1462 "data/maps/RustboroCity/scripts.pory"
# 2372 "data/maps/RustboroCity/scripts.pory"
	.string "RUSTBORO CITY\p"
# 2373 "data/maps/RustboroCity/scripts.pory"
	.string "“The city probing the integration of\n"
# 2374 "data/maps/RustboroCity/scripts.pory"
	.string "nature and science.”$"
# 2375 "data/maps/RustboroCity/scripts.pory"

# 2376 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_TrainersSchoolSign::
# 2377 "data/maps/RustboroCity/scripts.pory"
# 1468 "data/maps/RustboroCity/scripts.pory"
# 2378 "data/maps/RustboroCity/scripts.pory"
	.string "POKéMON TRAINER'S SCHOOL\p"
# 2379 "data/maps/RustboroCity/scripts.pory"
	.string "“We'll teach you anything about\n"
# 2380 "data/maps/RustboroCity/scripts.pory"
	.string "POKéMON!”$"
# 2381 "data/maps/RustboroCity/scripts.pory"

# 2382 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_CuttersHouse::
# 2383 "data/maps/RustboroCity/scripts.pory"
# 1474 "data/maps/RustboroCity/scripts.pory"
# 2384 "data/maps/RustboroCity/scripts.pory"
	.string "CUTTER'S HOUSE$"
# 2385 "data/maps/RustboroCity/scripts.pory"

# 2386 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_DevelopedNewPokenavFeature::
# 2387 "data/maps/RustboroCity/scripts.pory"
# 1478 "data/maps/RustboroCity/scripts.pory"
# 2388 "data/maps/RustboroCity/scripts.pory"
	.string "I've been developing an added feature\n"
# 2389 "data/maps/RustboroCity/scripts.pory"
	.string "for the POKéNAV…\p"
# 2390 "data/maps/RustboroCity/scripts.pory"
	.string "And it turned out great!\p"
# 2391 "data/maps/RustboroCity/scripts.pory"
	.string "{PLAYER}, may I see that POKéNAV?\n"
# 2392 "data/maps/RustboroCity/scripts.pory"
	.string "The one our PRESIDENT gave you?$"
# 2393 "data/maps/RustboroCity/scripts.pory"

# 2394 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_AddedMatchCallPleaseCallMrStone::
# 2395 "data/maps/RustboroCity/scripts.pory"
# 1486 "data/maps/RustboroCity/scripts.pory"
# 2396 "data/maps/RustboroCity/scripts.pory"
	.string "There you go, {PLAYER}!\p"
# 2397 "data/maps/RustboroCity/scripts.pory"
	.string "I added a new feature named\n"
# 2398 "data/maps/RustboroCity/scripts.pory"
	.string "MATCH CALL to your POKéNAV.\p"
# 2399 "data/maps/RustboroCity/scripts.pory"
	.string "Using the MATCH CALL feature,\n"
# 2400 "data/maps/RustboroCity/scripts.pory"
	.string "you can chat with people who have\l"
# 2401 "data/maps/RustboroCity/scripts.pory"
	.string "been registered in your POKéNAV.\p"
# 2402 "data/maps/RustboroCity/scripts.pory"
	.string "{PLAYER}, our PRESIDENT STONE should\n"
# 2403 "data/maps/RustboroCity/scripts.pory"
	.string "be registered in your POKéNAV.\p"
# 2404 "data/maps/RustboroCity/scripts.pory"
	.string "Test it out.\n"
# 2405 "data/maps/RustboroCity/scripts.pory"
	.string "Please give our PRESIDENT a call.$"
# 2406 "data/maps/RustboroCity/scripts.pory"

# 2407 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_PleaseSelectPokenav::
# 2408 "data/maps/RustboroCity/scripts.pory"
# 1499 "data/maps/RustboroCity/scripts.pory"
# 2409 "data/maps/RustboroCity/scripts.pory"
	.string "Please select the POKéNAV.$"
# 2410 "data/maps/RustboroCity/scripts.pory"

# 2411 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_IdBetterGetBackToWork::
# 2412 "data/maps/RustboroCity/scripts.pory"
# 1503 "data/maps/RustboroCity/scripts.pory"
# 2413 "data/maps/RustboroCity/scripts.pory"
	.string "Okay, I'd better get back to work.\n"
# 2414 "data/maps/RustboroCity/scripts.pory"
	.string "Please take care, {PLAYER}!$"
# 2415 "data/maps/RustboroCity/scripts.pory"

# 2416 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_YouCanHave2On2Battle::
# 2417 "data/maps/RustboroCity/scripts.pory"
# 1508 "data/maps/RustboroCity/scripts.pory"
# 2418 "data/maps/RustboroCity/scripts.pory"
	.string "Did you know this?\p"
# 2419 "data/maps/RustboroCity/scripts.pory"
	.string "You can have a 2-on-2 battle even\n"
# 2420 "data/maps/RustboroCity/scripts.pory"
	.string "if you're not with another TRAINER.\p"
# 2421 "data/maps/RustboroCity/scripts.pory"
	.string "If you catch the eyes of two TRAINERS\n"
# 2422 "data/maps/RustboroCity/scripts.pory"
	.string "when you have two or more POKéMON,\l"
# 2423 "data/maps/RustboroCity/scripts.pory"
	.string "they'll both challenge you.\p"
# 2424 "data/maps/RustboroCity/scripts.pory"
	.string "Don't you think it'd be cool if you\n"
# 2425 "data/maps/RustboroCity/scripts.pory"
	.string "could beat two TRAINERS by yourself?$"
