# 1 "data/maps/SkyPillar_Outside/scripts.pory"

# 2 "data/maps/SkyPillar_Outside/scripts.pory"
SkyPillar_Outside_MapScripts::
# 3 "data/maps/SkyPillar_Outside/scripts.pory"
# 2 "data/maps/SkyPillar_Outside/scripts.pory"
# 4 "data/maps/SkyPillar_Outside/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SkyPillar_Outside_OnTransition
# 5 "data/maps/SkyPillar_Outside/scripts.pory"
# 3 "data/maps/SkyPillar_Outside/scripts.pory"
# 6 "data/maps/SkyPillar_Outside/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, SkyPillar_Outside_OnLoad
# 7 "data/maps/SkyPillar_Outside/scripts.pory"
# 4 "data/maps/SkyPillar_Outside/scripts.pory"
# 8 "data/maps/SkyPillar_Outside/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SkyPillar_Outside_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 9 "data/maps/SkyPillar_Outside/scripts.pory"
	.byte 0
# 10 "data/maps/SkyPillar_Outside/scripts.pory"

# 11 "data/maps/SkyPillar_Outside/scripts.pory"
SkyPillar_Outside_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 12 "data/maps/SkyPillar_Outside/scripts.pory"
# 5 "data/maps/SkyPillar_Outside/scripts.pory"
# 13 "data/maps/SkyPillar_Outside/scripts.pory"
	map_script_2 VAR_SOOTOPOLIS_CITY_STATE, 3, SkyPillar_Outside_EventScript_WallaceScene
# 14 "data/maps/SkyPillar_Outside/scripts.pory"
	.2byte 0
# 15 "data/maps/SkyPillar_Outside/scripts.pory"

# 16 "data/maps/SkyPillar_Outside/scripts.pory"

# 17 "data/maps/SkyPillar_Outside/scripts.pory"
SkyPillar_Outside_OnTransition::
# 18 "data/maps/SkyPillar_Outside/scripts.pory"
# 10 "data/maps/SkyPillar_Outside/scripts.pory"
# 19 "data/maps/SkyPillar_Outside/scripts.pory"
	compare VAR_SOOTOPOLIS_CITY_STATE, 3
# 20 "data/maps/SkyPillar_Outside/scripts.pory"
	goto_if_eq SkyPillar_Outside_OnTransition_2
# 21 "data/maps/SkyPillar_Outside/scripts.pory"
SkyPillar_Outside_OnTransition_1:
# 22 "data/maps/SkyPillar_Outside/scripts.pory"
# 13 "data/maps/SkyPillar_Outside/scripts.pory"
# 23 "data/maps/SkyPillar_Outside/scripts.pory"
	compare VAR_SOOTOPOLIS_CITY_STATE, 4
# 24 "data/maps/SkyPillar_Outside/scripts.pory"
	goto_if_ge SkyPillar_Outside_OnTransition_5
# 25 "data/maps/SkyPillar_Outside/scripts.pory"
SkyPillar_Outside_OnTransition_4:
# 26 "data/maps/SkyPillar_Outside/scripts.pory"
	end
# 27 "data/maps/SkyPillar_Outside/scripts.pory"

# 28 "data/maps/SkyPillar_Outside/scripts.pory"
SkyPillar_Outside_OnTransition_2:
# 29 "data/maps/SkyPillar_Outside/scripts.pory"
# 11 "data/maps/SkyPillar_Outside/scripts.pory"
# 30 "data/maps/SkyPillar_Outside/scripts.pory"
	call SkyPillar_Outside_EventScript_HideMapNamePopup
# 31 "data/maps/SkyPillar_Outside/scripts.pory"
	goto SkyPillar_Outside_OnTransition_1
# 32 "data/maps/SkyPillar_Outside/scripts.pory"

# 33 "data/maps/SkyPillar_Outside/scripts.pory"
SkyPillar_Outside_OnTransition_5:
# 34 "data/maps/SkyPillar_Outside/scripts.pory"
# 14 "data/maps/SkyPillar_Outside/scripts.pory"
# 35 "data/maps/SkyPillar_Outside/scripts.pory"
	call SkyPillar_Outside_EventScript_CheckSetAbnormalWeather
# 36 "data/maps/SkyPillar_Outside/scripts.pory"
	goto SkyPillar_Outside_OnTransition_4
# 37 "data/maps/SkyPillar_Outside/scripts.pory"

# 38 "data/maps/SkyPillar_Outside/scripts.pory"

# 39 "data/maps/SkyPillar_Outside/scripts.pory"
SkyPillar_Outside_EventScript_HideMapNamePopup::
# 40 "data/maps/SkyPillar_Outside/scripts.pory"
# 20 "data/maps/SkyPillar_Outside/scripts.pory"
# 41 "data/maps/SkyPillar_Outside/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 42 "data/maps/SkyPillar_Outside/scripts.pory"
	return
# 43 "data/maps/SkyPillar_Outside/scripts.pory"

# 44 "data/maps/SkyPillar_Outside/scripts.pory"

# 45 "data/maps/SkyPillar_Outside/scripts.pory"
SkyPillar_Outside_EventScript_CheckSetAbnormalWeather::
# 46 "data/maps/SkyPillar_Outside/scripts.pory"
# 25 "data/maps/SkyPillar_Outside/scripts.pory"
# 47 "data/maps/SkyPillar_Outside/scripts.pory"
	goto_if_set FLAG_SYS_WEATHER_CTRL, SkyPillar_Outside_EventScript_CheckSetAbnormalWeather_2
# 48 "data/maps/SkyPillar_Outside/scripts.pory"
SkyPillar_Outside_EventScript_CheckSetAbnormalWeather_1:
# 49 "data/maps/SkyPillar_Outside/scripts.pory"
	return
# 50 "data/maps/SkyPillar_Outside/scripts.pory"

# 51 "data/maps/SkyPillar_Outside/scripts.pory"
SkyPillar_Outside_EventScript_CheckSetAbnormalWeather_2:
# 52 "data/maps/SkyPillar_Outside/scripts.pory"
# 26 "data/maps/SkyPillar_Outside/scripts.pory"
# 53 "data/maps/SkyPillar_Outside/scripts.pory"
	call Common_EventScript_SetAbnormalWeather
# 54 "data/maps/SkyPillar_Outside/scripts.pory"
	goto SkyPillar_Outside_EventScript_CheckSetAbnormalWeather_1
# 55 "data/maps/SkyPillar_Outside/scripts.pory"

# 56 "data/maps/SkyPillar_Outside/scripts.pory"

# 57 "data/maps/SkyPillar_Outside/scripts.pory"
SkyPillar_Outside_OnLoad::
# 58 "data/maps/SkyPillar_Outside/scripts.pory"
# 32 "data/maps/SkyPillar_Outside/scripts.pory"
# 59 "data/maps/SkyPillar_Outside/scripts.pory"
	goto_if_set FLAG_WALLACE_GOES_TO_SKY_PILLAR, SkyPillar_Outside_OnLoad_2
# 60 "data/maps/SkyPillar_Outside/scripts.pory"
SkyPillar_Outside_OnLoad_1:
# 61 "data/maps/SkyPillar_Outside/scripts.pory"
	end
# 62 "data/maps/SkyPillar_Outside/scripts.pory"

# 63 "data/maps/SkyPillar_Outside/scripts.pory"
SkyPillar_Outside_OnLoad_2:
# 64 "data/maps/SkyPillar_Outside/scripts.pory"
# 33 "data/maps/SkyPillar_Outside/scripts.pory"
# 65 "data/maps/SkyPillar_Outside/scripts.pory"
	call SkyPillar_Outside_EventScript_OpenDoor
# 66 "data/maps/SkyPillar_Outside/scripts.pory"
	goto SkyPillar_Outside_OnLoad_1
# 67 "data/maps/SkyPillar_Outside/scripts.pory"

# 68 "data/maps/SkyPillar_Outside/scripts.pory"

# 69 "data/maps/SkyPillar_Outside/scripts.pory"
SkyPillar_Outside_EventScript_OpenDoor::
# 70 "data/maps/SkyPillar_Outside/scripts.pory"
# 39 "data/maps/SkyPillar_Outside/scripts.pory"
# 71 "data/maps/SkyPillar_Outside/scripts.pory"
	setmetatile 14, 4, METATILE_Pacifidlog_SkyPillar_DoorOpen_Top, FALSE
# 72 "data/maps/SkyPillar_Outside/scripts.pory"
# 40 "data/maps/SkyPillar_Outside/scripts.pory"
# 73 "data/maps/SkyPillar_Outside/scripts.pory"
	setmetatile 14, 5, METATILE_Pacifidlog_SkyPillar_DoorOpen_Bottom, FALSE
# 74 "data/maps/SkyPillar_Outside/scripts.pory"
	return
# 75 "data/maps/SkyPillar_Outside/scripts.pory"

# 76 "data/maps/SkyPillar_Outside/scripts.pory"

# 77 "data/maps/SkyPillar_Outside/scripts.pory"
SkyPillar_Outside_EventScript_WallaceScene::
# 78 "data/maps/SkyPillar_Outside/scripts.pory"
# 45 "data/maps/SkyPillar_Outside/scripts.pory"
# 79 "data/maps/SkyPillar_Outside/scripts.pory"
	lockall
# 80 "data/maps/SkyPillar_Outside/scripts.pory"
# 46 "data/maps/SkyPillar_Outside/scripts.pory"
# 81 "data/maps/SkyPillar_Outside/scripts.pory"
	applymovement LOCALID_SKY_PILLAR_WALLACE, SkyPillar_Outside_Movement_WallaceApproachPlayer
# 82 "data/maps/SkyPillar_Outside/scripts.pory"
# 47 "data/maps/SkyPillar_Outside/scripts.pory"
# 83 "data/maps/SkyPillar_Outside/scripts.pory"
	waitmovement 0
# 84 "data/maps/SkyPillar_Outside/scripts.pory"
# 48 "data/maps/SkyPillar_Outside/scripts.pory"
# 85 "data/maps/SkyPillar_Outside/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 86 "data/maps/SkyPillar_Outside/scripts.pory"
# 49 "data/maps/SkyPillar_Outside/scripts.pory"
# 87 "data/maps/SkyPillar_Outside/scripts.pory"
	waitmovement 0
# 88 "data/maps/SkyPillar_Outside/scripts.pory"
# 50 "data/maps/SkyPillar_Outside/scripts.pory"
# 89 "data/maps/SkyPillar_Outside/scripts.pory"
	msgbox SkyPillar_Outside_Text_OpenedDoorToSkyPillar, MSGBOX_DEFAULT
# 90 "data/maps/SkyPillar_Outside/scripts.pory"
# 51 "data/maps/SkyPillar_Outside/scripts.pory"
# 91 "data/maps/SkyPillar_Outside/scripts.pory"
	closemessage
# 92 "data/maps/SkyPillar_Outside/scripts.pory"
# 52 "data/maps/SkyPillar_Outside/scripts.pory"
# 93 "data/maps/SkyPillar_Outside/scripts.pory"
	delay 30
# 94 "data/maps/SkyPillar_Outside/scripts.pory"
# 53 "data/maps/SkyPillar_Outside/scripts.pory"
# 95 "data/maps/SkyPillar_Outside/scripts.pory"
	setvar VAR_0x8004, 1
# 96 "data/maps/SkyPillar_Outside/scripts.pory"
# 54 "data/maps/SkyPillar_Outside/scripts.pory"
# 97 "data/maps/SkyPillar_Outside/scripts.pory"
	setvar VAR_0x8005, 1
# 98 "data/maps/SkyPillar_Outside/scripts.pory"
# 55 "data/maps/SkyPillar_Outside/scripts.pory"
# 99 "data/maps/SkyPillar_Outside/scripts.pory"
	setvar VAR_0x8006, 8
# 100 "data/maps/SkyPillar_Outside/scripts.pory"
# 56 "data/maps/SkyPillar_Outside/scripts.pory"
# 101 "data/maps/SkyPillar_Outside/scripts.pory"
	setvar VAR_0x8007, 3
# 102 "data/maps/SkyPillar_Outside/scripts.pory"
# 57 "data/maps/SkyPillar_Outside/scripts.pory"
# 103 "data/maps/SkyPillar_Outside/scripts.pory"
	special ShakeCamera
# 104 "data/maps/SkyPillar_Outside/scripts.pory"
# 58 "data/maps/SkyPillar_Outside/scripts.pory"
# 105 "data/maps/SkyPillar_Outside/scripts.pory"
	waitstate
# 106 "data/maps/SkyPillar_Outside/scripts.pory"
# 59 "data/maps/SkyPillar_Outside/scripts.pory"
# 107 "data/maps/SkyPillar_Outside/scripts.pory"
	delay 40
# 108 "data/maps/SkyPillar_Outside/scripts.pory"
# 60 "data/maps/SkyPillar_Outside/scripts.pory"
# 109 "data/maps/SkyPillar_Outside/scripts.pory"
	msgbox SkyPillar_Outside_Text_EarthquakeNotMomentToWaste, MSGBOX_DEFAULT
# 110 "data/maps/SkyPillar_Outside/scripts.pory"
# 61 "data/maps/SkyPillar_Outside/scripts.pory"
# 111 "data/maps/SkyPillar_Outside/scripts.pory"
	closemessage
# 112 "data/maps/SkyPillar_Outside/scripts.pory"
# 62 "data/maps/SkyPillar_Outside/scripts.pory"
# 113 "data/maps/SkyPillar_Outside/scripts.pory"
	applymovement LOCALID_PLAYER, SkyPillar_Outside_Movement_PlayerClimbSkyPillar
# 114 "data/maps/SkyPillar_Outside/scripts.pory"
# 63 "data/maps/SkyPillar_Outside/scripts.pory"
# 115 "data/maps/SkyPillar_Outside/scripts.pory"
	applymovement LOCALID_SKY_PILLAR_WALLACE, SkyPillar_Outside_Movement_WallaceClimbSkyPillar
# 116 "data/maps/SkyPillar_Outside/scripts.pory"
# 64 "data/maps/SkyPillar_Outside/scripts.pory"
# 117 "data/maps/SkyPillar_Outside/scripts.pory"
	waitmovement 0
# 118 "data/maps/SkyPillar_Outside/scripts.pory"
# 65 "data/maps/SkyPillar_Outside/scripts.pory"
# 119 "data/maps/SkyPillar_Outside/scripts.pory"
	setvar VAR_0x8004, 1
# 120 "data/maps/SkyPillar_Outside/scripts.pory"
# 66 "data/maps/SkyPillar_Outside/scripts.pory"
# 121 "data/maps/SkyPillar_Outside/scripts.pory"
	setvar VAR_0x8005, 3
# 122 "data/maps/SkyPillar_Outside/scripts.pory"
# 67 "data/maps/SkyPillar_Outside/scripts.pory"
# 123 "data/maps/SkyPillar_Outside/scripts.pory"
	setvar VAR_0x8006, 20
# 124 "data/maps/SkyPillar_Outside/scripts.pory"
# 68 "data/maps/SkyPillar_Outside/scripts.pory"
# 125 "data/maps/SkyPillar_Outside/scripts.pory"
	setvar VAR_0x8007, 5
# 126 "data/maps/SkyPillar_Outside/scripts.pory"
# 69 "data/maps/SkyPillar_Outside/scripts.pory"
# 127 "data/maps/SkyPillar_Outside/scripts.pory"
	special ShakeCamera
# 128 "data/maps/SkyPillar_Outside/scripts.pory"
# 70 "data/maps/SkyPillar_Outside/scripts.pory"
# 129 "data/maps/SkyPillar_Outside/scripts.pory"
	waitstate
# 130 "data/maps/SkyPillar_Outside/scripts.pory"
# 71 "data/maps/SkyPillar_Outside/scripts.pory"
# 131 "data/maps/SkyPillar_Outside/scripts.pory"
	delay 20
# 132 "data/maps/SkyPillar_Outside/scripts.pory"
# 72 "data/maps/SkyPillar_Outside/scripts.pory"
# 133 "data/maps/SkyPillar_Outside/scripts.pory"
	applymovement LOCALID_SKY_PILLAR_WALLACE, Common_Movement_WalkInPlaceFasterLeft
# 134 "data/maps/SkyPillar_Outside/scripts.pory"
# 73 "data/maps/SkyPillar_Outside/scripts.pory"
# 135 "data/maps/SkyPillar_Outside/scripts.pory"
	waitmovement 0
# 136 "data/maps/SkyPillar_Outside/scripts.pory"
# 74 "data/maps/SkyPillar_Outside/scripts.pory"
# 137 "data/maps/SkyPillar_Outside/scripts.pory"
	delay 10
# 138 "data/maps/SkyPillar_Outside/scripts.pory"
# 75 "data/maps/SkyPillar_Outside/scripts.pory"
# 139 "data/maps/SkyPillar_Outside/scripts.pory"
	applymovement LOCALID_SKY_PILLAR_WALLACE, Common_Movement_WalkInPlaceFasterRight
# 140 "data/maps/SkyPillar_Outside/scripts.pory"
# 76 "data/maps/SkyPillar_Outside/scripts.pory"
# 141 "data/maps/SkyPillar_Outside/scripts.pory"
	waitmovement 0
# 142 "data/maps/SkyPillar_Outside/scripts.pory"
# 77 "data/maps/SkyPillar_Outside/scripts.pory"
# 143 "data/maps/SkyPillar_Outside/scripts.pory"
	delay 20
# 144 "data/maps/SkyPillar_Outside/scripts.pory"
# 78 "data/maps/SkyPillar_Outside/scripts.pory"
# 145 "data/maps/SkyPillar_Outside/scripts.pory"
	applymovement LOCALID_SKY_PILLAR_WALLACE, Common_Movement_WalkInPlaceFasterDown
# 146 "data/maps/SkyPillar_Outside/scripts.pory"
# 79 "data/maps/SkyPillar_Outside/scripts.pory"
# 147 "data/maps/SkyPillar_Outside/scripts.pory"
	waitmovement 0
# 148 "data/maps/SkyPillar_Outside/scripts.pory"
# 80 "data/maps/SkyPillar_Outside/scripts.pory"
# 149 "data/maps/SkyPillar_Outside/scripts.pory"
	delay 30
# 150 "data/maps/SkyPillar_Outside/scripts.pory"
# 81 "data/maps/SkyPillar_Outside/scripts.pory"
# 151 "data/maps/SkyPillar_Outside/scripts.pory"
	msgbox SkyPillar_Outside_Text_SituationGettingWorse, MSGBOX_DEFAULT
# 152 "data/maps/SkyPillar_Outside/scripts.pory"
# 82 "data/maps/SkyPillar_Outside/scripts.pory"
# 153 "data/maps/SkyPillar_Outside/scripts.pory"
	closemessage
# 154 "data/maps/SkyPillar_Outside/scripts.pory"
# 83 "data/maps/SkyPillar_Outside/scripts.pory"
# 155 "data/maps/SkyPillar_Outside/scripts.pory"
	setflag FLAG_SYS_WEATHER_CTRL
# 156 "data/maps/SkyPillar_Outside/scripts.pory"
# 84 "data/maps/SkyPillar_Outside/scripts.pory"
# 157 "data/maps/SkyPillar_Outside/scripts.pory"
	setweather WEATHER_ABNORMAL
# 158 "data/maps/SkyPillar_Outside/scripts.pory"
# 85 "data/maps/SkyPillar_Outside/scripts.pory"
# 159 "data/maps/SkyPillar_Outside/scripts.pory"
	doweather
# 160 "data/maps/SkyPillar_Outside/scripts.pory"
# 86 "data/maps/SkyPillar_Outside/scripts.pory"
# 161 "data/maps/SkyPillar_Outside/scripts.pory"
	special WaitWeather
# 162 "data/maps/SkyPillar_Outside/scripts.pory"
# 87 "data/maps/SkyPillar_Outside/scripts.pory"
# 163 "data/maps/SkyPillar_Outside/scripts.pory"
	waitstate
# 164 "data/maps/SkyPillar_Outside/scripts.pory"
# 88 "data/maps/SkyPillar_Outside/scripts.pory"
# 165 "data/maps/SkyPillar_Outside/scripts.pory"
	delay 30
# 166 "data/maps/SkyPillar_Outside/scripts.pory"
# 89 "data/maps/SkyPillar_Outside/scripts.pory"
# 167 "data/maps/SkyPillar_Outside/scripts.pory"
	msgbox SkyPillar_Outside_Text_GotToGoBackForSootopolis, MSGBOX_DEFAULT
# 168 "data/maps/SkyPillar_Outside/scripts.pory"
# 90 "data/maps/SkyPillar_Outside/scripts.pory"
# 169 "data/maps/SkyPillar_Outside/scripts.pory"
	closemessage
# 170 "data/maps/SkyPillar_Outside/scripts.pory"
# 91 "data/maps/SkyPillar_Outside/scripts.pory"
# 171 "data/maps/SkyPillar_Outside/scripts.pory"
	playse SE_EXIT
# 172 "data/maps/SkyPillar_Outside/scripts.pory"
# 92 "data/maps/SkyPillar_Outside/scripts.pory"
# 173 "data/maps/SkyPillar_Outside/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 174 "data/maps/SkyPillar_Outside/scripts.pory"
# 93 "data/maps/SkyPillar_Outside/scripts.pory"
# 175 "data/maps/SkyPillar_Outside/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 176 "data/maps/SkyPillar_Outside/scripts.pory"
# 94 "data/maps/SkyPillar_Outside/scripts.pory"
# 177 "data/maps/SkyPillar_Outside/scripts.pory"
	setvar VAR_SOOTOPOLIS_CITY_STATE, 4
# 178 "data/maps/SkyPillar_Outside/scripts.pory"
# 95 "data/maps/SkyPillar_Outside/scripts.pory"
# 179 "data/maps/SkyPillar_Outside/scripts.pory"
	removeobject LOCALID_SKY_PILLAR_WALLACE
# 180 "data/maps/SkyPillar_Outside/scripts.pory"
# 96 "data/maps/SkyPillar_Outside/scripts.pory"
# 181 "data/maps/SkyPillar_Outside/scripts.pory"
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_WALLACE
# 182 "data/maps/SkyPillar_Outside/scripts.pory"
# 97 "data/maps/SkyPillar_Outside/scripts.pory"
# 183 "data/maps/SkyPillar_Outside/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 184 "data/maps/SkyPillar_Outside/scripts.pory"
# 98 "data/maps/SkyPillar_Outside/scripts.pory"
# 185 "data/maps/SkyPillar_Outside/scripts.pory"
	releaseall
# 186 "data/maps/SkyPillar_Outside/scripts.pory"
	end
# 187 "data/maps/SkyPillar_Outside/scripts.pory"

# 188 "data/maps/SkyPillar_Outside/scripts.pory"

# 189 "data/maps/SkyPillar_Outside/scripts.pory"
# 102 "data/maps/SkyPillar_Outside/scripts.pory"
# 190 "data/maps/SkyPillar_Outside/scripts.pory"
SkyPillar_Outside_Movement_WallaceApproachPlayer:
# 191 "data/maps/SkyPillar_Outside/scripts.pory"
# 103 "data/maps/SkyPillar_Outside/scripts.pory"
# 192 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_down
# 193 "data/maps/SkyPillar_Outside/scripts.pory"
# 104 "data/maps/SkyPillar_Outside/scripts.pory"
# 194 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_down
# 195 "data/maps/SkyPillar_Outside/scripts.pory"
# 105 "data/maps/SkyPillar_Outside/scripts.pory"
# 196 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_down
# 197 "data/maps/SkyPillar_Outside/scripts.pory"
# 106 "data/maps/SkyPillar_Outside/scripts.pory"
# 198 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_down
# 199 "data/maps/SkyPillar_Outside/scripts.pory"
# 107 "data/maps/SkyPillar_Outside/scripts.pory"
# 200 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_down
# 201 "data/maps/SkyPillar_Outside/scripts.pory"
# 108 "data/maps/SkyPillar_Outside/scripts.pory"
# 202 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_down
# 203 "data/maps/SkyPillar_Outside/scripts.pory"
# 109 "data/maps/SkyPillar_Outside/scripts.pory"
# 204 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_down
# 205 "data/maps/SkyPillar_Outside/scripts.pory"
# 110 "data/maps/SkyPillar_Outside/scripts.pory"
# 206 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_right
# 207 "data/maps/SkyPillar_Outside/scripts.pory"
# 111 "data/maps/SkyPillar_Outside/scripts.pory"
# 208 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_right
# 209 "data/maps/SkyPillar_Outside/scripts.pory"
# 112 "data/maps/SkyPillar_Outside/scripts.pory"
# 210 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_right
# 211 "data/maps/SkyPillar_Outside/scripts.pory"
# 113 "data/maps/SkyPillar_Outside/scripts.pory"
# 212 "data/maps/SkyPillar_Outside/scripts.pory"
	step_end
# 213 "data/maps/SkyPillar_Outside/scripts.pory"

# 214 "data/maps/SkyPillar_Outside/scripts.pory"
# 116 "data/maps/SkyPillar_Outside/scripts.pory"
# 215 "data/maps/SkyPillar_Outside/scripts.pory"
SkyPillar_Outside_Movement_WallaceClimbSkyPillar:
# 216 "data/maps/SkyPillar_Outside/scripts.pory"
# 117 "data/maps/SkyPillar_Outside/scripts.pory"
# 217 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_left
# 218 "data/maps/SkyPillar_Outside/scripts.pory"
# 118 "data/maps/SkyPillar_Outside/scripts.pory"
# 219 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_left
# 220 "data/maps/SkyPillar_Outside/scripts.pory"
# 119 "data/maps/SkyPillar_Outside/scripts.pory"
# 221 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_left
# 222 "data/maps/SkyPillar_Outside/scripts.pory"
# 120 "data/maps/SkyPillar_Outside/scripts.pory"
# 223 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_up
# 224 "data/maps/SkyPillar_Outside/scripts.pory"
# 121 "data/maps/SkyPillar_Outside/scripts.pory"
# 225 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_up
# 226 "data/maps/SkyPillar_Outside/scripts.pory"
# 122 "data/maps/SkyPillar_Outside/scripts.pory"
# 227 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_up
# 228 "data/maps/SkyPillar_Outside/scripts.pory"
# 123 "data/maps/SkyPillar_Outside/scripts.pory"
# 229 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_up
# 230 "data/maps/SkyPillar_Outside/scripts.pory"
# 124 "data/maps/SkyPillar_Outside/scripts.pory"
# 231 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_right
# 232 "data/maps/SkyPillar_Outside/scripts.pory"
# 125 "data/maps/SkyPillar_Outside/scripts.pory"
# 233 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_up
# 234 "data/maps/SkyPillar_Outside/scripts.pory"
# 126 "data/maps/SkyPillar_Outside/scripts.pory"
# 235 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_up
# 236 "data/maps/SkyPillar_Outside/scripts.pory"
# 127 "data/maps/SkyPillar_Outside/scripts.pory"
# 237 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_up
# 238 "data/maps/SkyPillar_Outside/scripts.pory"
# 128 "data/maps/SkyPillar_Outside/scripts.pory"
# 239 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_up
# 240 "data/maps/SkyPillar_Outside/scripts.pory"
# 129 "data/maps/SkyPillar_Outside/scripts.pory"
# 241 "data/maps/SkyPillar_Outside/scripts.pory"
	step_end
# 242 "data/maps/SkyPillar_Outside/scripts.pory"

# 243 "data/maps/SkyPillar_Outside/scripts.pory"
# 132 "data/maps/SkyPillar_Outside/scripts.pory"
# 244 "data/maps/SkyPillar_Outside/scripts.pory"
SkyPillar_Outside_Movement_PlayerClimbSkyPillar:
# 245 "data/maps/SkyPillar_Outside/scripts.pory"
# 133 "data/maps/SkyPillar_Outside/scripts.pory"
# 246 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_left
# 247 "data/maps/SkyPillar_Outside/scripts.pory"
# 134 "data/maps/SkyPillar_Outside/scripts.pory"
# 248 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_left
# 249 "data/maps/SkyPillar_Outside/scripts.pory"
# 135 "data/maps/SkyPillar_Outside/scripts.pory"
# 250 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_left
# 251 "data/maps/SkyPillar_Outside/scripts.pory"
# 136 "data/maps/SkyPillar_Outside/scripts.pory"
# 252 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_left
# 253 "data/maps/SkyPillar_Outside/scripts.pory"
# 137 "data/maps/SkyPillar_Outside/scripts.pory"
# 254 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_up
# 255 "data/maps/SkyPillar_Outside/scripts.pory"
# 138 "data/maps/SkyPillar_Outside/scripts.pory"
# 256 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_up
# 257 "data/maps/SkyPillar_Outside/scripts.pory"
# 139 "data/maps/SkyPillar_Outside/scripts.pory"
# 258 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_up
# 259 "data/maps/SkyPillar_Outside/scripts.pory"
# 140 "data/maps/SkyPillar_Outside/scripts.pory"
# 260 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_up
# 261 "data/maps/SkyPillar_Outside/scripts.pory"
# 141 "data/maps/SkyPillar_Outside/scripts.pory"
# 262 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_right
# 263 "data/maps/SkyPillar_Outside/scripts.pory"
# 142 "data/maps/SkyPillar_Outside/scripts.pory"
# 264 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_up
# 265 "data/maps/SkyPillar_Outside/scripts.pory"
# 143 "data/maps/SkyPillar_Outside/scripts.pory"
# 266 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_up
# 267 "data/maps/SkyPillar_Outside/scripts.pory"
# 144 "data/maps/SkyPillar_Outside/scripts.pory"
# 268 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_up
# 269 "data/maps/SkyPillar_Outside/scripts.pory"
# 145 "data/maps/SkyPillar_Outside/scripts.pory"
# 270 "data/maps/SkyPillar_Outside/scripts.pory"
	step_end
# 271 "data/maps/SkyPillar_Outside/scripts.pory"

# 272 "data/maps/SkyPillar_Outside/scripts.pory"
SkyPillar_Outside_EventScript_Wallace::
# 273 "data/maps/SkyPillar_Outside/scripts.pory"
	end
# 274 "data/maps/SkyPillar_Outside/scripts.pory"

# 275 "data/maps/SkyPillar_Outside/scripts.pory"

# 276 "data/maps/SkyPillar_Outside/scripts.pory"
SkyPillar_Outside_EventScript_ClosedDoor::
# 277 "data/maps/SkyPillar_Outside/scripts.pory"
# 153 "data/maps/SkyPillar_Outside/scripts.pory"
# 278 "data/maps/SkyPillar_Outside/scripts.pory"
	msgbox SkyPillar_Outside_Text_DoorIsClosed, MSGBOX_SIGN
# 279 "data/maps/SkyPillar_Outside/scripts.pory"
	end
# 280 "data/maps/SkyPillar_Outside/scripts.pory"

# 281 "data/maps/SkyPillar_Outside/scripts.pory"

# 282 "data/maps/SkyPillar_Outside/scripts.pory"
SkyPillar_Outside_Text_DoorIsClosed::
# 283 "data/maps/SkyPillar_Outside/scripts.pory"
# 157 "data/maps/SkyPillar_Outside/scripts.pory"
# 284 "data/maps/SkyPillar_Outside/scripts.pory"
	.string "The door is closed.$"
# 285 "data/maps/SkyPillar_Outside/scripts.pory"

# 286 "data/maps/SkyPillar_Outside/scripts.pory"
SkyPillar_Outside_Text_OpenedDoorToSkyPillar::
# 287 "data/maps/SkyPillar_Outside/scripts.pory"
# 161 "data/maps/SkyPillar_Outside/scripts.pory"
# 288 "data/maps/SkyPillar_Outside/scripts.pory"
	.string "WALLACE: Oh, my, I'm terribly sorry!\p"
# 289 "data/maps/SkyPillar_Outside/scripts.pory"
	.string "In my haste, I didn't notice that\n"
# 290 "data/maps/SkyPillar_Outside/scripts.pory"
	.string "I'd left you behind!\p"
# 291 "data/maps/SkyPillar_Outside/scripts.pory"
	.string "I've opened the locked door of\n"
# 292 "data/maps/SkyPillar_Outside/scripts.pory"
	.string "the SKY PILLAR.\p"
# 293 "data/maps/SkyPillar_Outside/scripts.pory"
	.string "{PLAYER}{KUN}, let's be on our way!$"
# 294 "data/maps/SkyPillar_Outside/scripts.pory"

# 295 "data/maps/SkyPillar_Outside/scripts.pory"
SkyPillar_Outside_Text_EarthquakeNotMomentToWaste::
# 296 "data/maps/SkyPillar_Outside/scripts.pory"
# 170 "data/maps/SkyPillar_Outside/scripts.pory"
# 297 "data/maps/SkyPillar_Outside/scripts.pory"
	.string "WALLACE: It's an earthquake!\p"
# 298 "data/maps/SkyPillar_Outside/scripts.pory"
	.string "There's not a moment to waste!\n"
# 299 "data/maps/SkyPillar_Outside/scripts.pory"
	.string "We've got to hurry!$"
# 300 "data/maps/SkyPillar_Outside/scripts.pory"

# 301 "data/maps/SkyPillar_Outside/scripts.pory"
SkyPillar_Outside_Text_SituationGettingWorse::
# 302 "data/maps/SkyPillar_Outside/scripts.pory"
# 176 "data/maps/SkyPillar_Outside/scripts.pory"
# 303 "data/maps/SkyPillar_Outside/scripts.pory"
	.string "WALLACE: Hmm…\n"
# 304 "data/maps/SkyPillar_Outside/scripts.pory"
	.string "The situation is getting worse…$"
# 305 "data/maps/SkyPillar_Outside/scripts.pory"

# 306 "data/maps/SkyPillar_Outside/scripts.pory"
SkyPillar_Outside_Text_GotToGoBackForSootopolis::
# 307 "data/maps/SkyPillar_Outside/scripts.pory"
# 181 "data/maps/SkyPillar_Outside/scripts.pory"
# 308 "data/maps/SkyPillar_Outside/scripts.pory"
	.string "WALLACE: This isn't good…\p"
# 309 "data/maps/SkyPillar_Outside/scripts.pory"
	.string "The weather distortion is spreading\n"
# 310 "data/maps/SkyPillar_Outside/scripts.pory"
	.string "even here…\p"
# 311 "data/maps/SkyPillar_Outside/scripts.pory"
	.string "{PLAYER}{KUN}.\p"
# 312 "data/maps/SkyPillar_Outside/scripts.pory"
	.string "RAYQUAZA should be farther up\n"
# 313 "data/maps/SkyPillar_Outside/scripts.pory"
	.string "from here.\p"
# 314 "data/maps/SkyPillar_Outside/scripts.pory"
	.string "I'm worried about SOOTOPOLIS.\n"
# 315 "data/maps/SkyPillar_Outside/scripts.pory"
	.string "I've got to go back.\p"
# 316 "data/maps/SkyPillar_Outside/scripts.pory"
	.string "Everything is in your hands now.\n"
# 317 "data/maps/SkyPillar_Outside/scripts.pory"
	.string "Don't fail us!$"
