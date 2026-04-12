SkyPillar_Outside_MapScripts::
# 2 "data/maps/SkyPillar_Outside/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SkyPillar_Outside_OnTransition
# 3 "data/maps/SkyPillar_Outside/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, SkyPillar_Outside_OnLoad
# 4 "data/maps/SkyPillar_Outside/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SkyPillar_Outside_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

SkyPillar_Outside_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 5 "data/maps/SkyPillar_Outside/scripts.pory"
	map_script_2 VAR_SOOTOPOLIS_CITY_STATE, 3, SkyPillar_Outside_EventScript_WallaceScene
	.2byte 0


SkyPillar_Outside_OnTransition::
# 10 "data/maps/SkyPillar_Outside/scripts.pory"
	compare VAR_SOOTOPOLIS_CITY_STATE, 3
	goto_if_eq SkyPillar_Outside_OnTransition_2
SkyPillar_Outside_OnTransition_1:
# 13 "data/maps/SkyPillar_Outside/scripts.pory"
	compare VAR_SOOTOPOLIS_CITY_STATE, 4
	goto_if_ge SkyPillar_Outside_OnTransition_5
SkyPillar_Outside_OnTransition_4:
	end

SkyPillar_Outside_OnTransition_2:
# 11 "data/maps/SkyPillar_Outside/scripts.pory"
	call SkyPillar_Outside_EventScript_HideMapNamePopup
	goto SkyPillar_Outside_OnTransition_1

SkyPillar_Outside_OnTransition_5:
# 14 "data/maps/SkyPillar_Outside/scripts.pory"
	call SkyPillar_Outside_EventScript_CheckSetAbnormalWeather
	goto SkyPillar_Outside_OnTransition_4


SkyPillar_Outside_EventScript_HideMapNamePopup::
# 20 "data/maps/SkyPillar_Outside/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
	return


SkyPillar_Outside_EventScript_CheckSetAbnormalWeather::
# 25 "data/maps/SkyPillar_Outside/scripts.pory"
	goto_if_set FLAG_SYS_WEATHER_CTRL, SkyPillar_Outside_EventScript_CheckSetAbnormalWeather_2
SkyPillar_Outside_EventScript_CheckSetAbnormalWeather_1:
	return

SkyPillar_Outside_EventScript_CheckSetAbnormalWeather_2:
# 26 "data/maps/SkyPillar_Outside/scripts.pory"
	call Common_EventScript_SetAbnormalWeather
	goto SkyPillar_Outside_EventScript_CheckSetAbnormalWeather_1


SkyPillar_Outside_OnLoad::
# 32 "data/maps/SkyPillar_Outside/scripts.pory"
	goto_if_set FLAG_WALLACE_GOES_TO_SKY_PILLAR, SkyPillar_Outside_OnLoad_2
SkyPillar_Outside_OnLoad_1:
	end

SkyPillar_Outside_OnLoad_2:
# 33 "data/maps/SkyPillar_Outside/scripts.pory"
	call SkyPillar_Outside_EventScript_OpenDoor
	goto SkyPillar_Outside_OnLoad_1


SkyPillar_Outside_EventScript_OpenDoor::
# 39 "data/maps/SkyPillar_Outside/scripts.pory"
	setmetatile 14, 4, METATILE_Pacifidlog_SkyPillar_DoorOpen_Top, FALSE
# 40 "data/maps/SkyPillar_Outside/scripts.pory"
	setmetatile 14, 5, METATILE_Pacifidlog_SkyPillar_DoorOpen_Bottom, FALSE
	return


SkyPillar_Outside_EventScript_WallaceScene::
# 45 "data/maps/SkyPillar_Outside/scripts.pory"
	lockall
# 46 "data/maps/SkyPillar_Outside/scripts.pory"
	applymovement LOCALID_SKY_PILLAR_WALLACE, SkyPillar_Outside_Movement_WallaceApproachPlayer
# 47 "data/maps/SkyPillar_Outside/scripts.pory"
	waitmovement 0
# 48 "data/maps/SkyPillar_Outside/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 49 "data/maps/SkyPillar_Outside/scripts.pory"
	waitmovement 0
# 50 "data/maps/SkyPillar_Outside/scripts.pory"
	msgbox SkyPillar_Outside_Text_OpenedDoorToSkyPillar, MSGBOX_DEFAULT
# 51 "data/maps/SkyPillar_Outside/scripts.pory"
	closemessage
# 52 "data/maps/SkyPillar_Outside/scripts.pory"
	delay 30
# 53 "data/maps/SkyPillar_Outside/scripts.pory"
	setvar VAR_0x8004, 1
# 54 "data/maps/SkyPillar_Outside/scripts.pory"
	setvar VAR_0x8005, 1
# 55 "data/maps/SkyPillar_Outside/scripts.pory"
	setvar VAR_0x8006, 8
# 56 "data/maps/SkyPillar_Outside/scripts.pory"
	setvar VAR_0x8007, 3
# 57 "data/maps/SkyPillar_Outside/scripts.pory"
	special ShakeCamera
# 58 "data/maps/SkyPillar_Outside/scripts.pory"
	waitstate
# 59 "data/maps/SkyPillar_Outside/scripts.pory"
	delay 40
# 60 "data/maps/SkyPillar_Outside/scripts.pory"
	msgbox SkyPillar_Outside_Text_EarthquakeNotMomentToWaste, MSGBOX_DEFAULT
# 61 "data/maps/SkyPillar_Outside/scripts.pory"
	closemessage
# 62 "data/maps/SkyPillar_Outside/scripts.pory"
	applymovement LOCALID_PLAYER, SkyPillar_Outside_Movement_PlayerClimbSkyPillar
# 63 "data/maps/SkyPillar_Outside/scripts.pory"
	applymovement LOCALID_SKY_PILLAR_WALLACE, SkyPillar_Outside_Movement_WallaceClimbSkyPillar
# 64 "data/maps/SkyPillar_Outside/scripts.pory"
	waitmovement 0
# 65 "data/maps/SkyPillar_Outside/scripts.pory"
	setvar VAR_0x8004, 1
# 66 "data/maps/SkyPillar_Outside/scripts.pory"
	setvar VAR_0x8005, 3
# 67 "data/maps/SkyPillar_Outside/scripts.pory"
	setvar VAR_0x8006, 20
# 68 "data/maps/SkyPillar_Outside/scripts.pory"
	setvar VAR_0x8007, 5
# 69 "data/maps/SkyPillar_Outside/scripts.pory"
	special ShakeCamera
# 70 "data/maps/SkyPillar_Outside/scripts.pory"
	waitstate
# 71 "data/maps/SkyPillar_Outside/scripts.pory"
	delay 20
# 72 "data/maps/SkyPillar_Outside/scripts.pory"
	applymovement LOCALID_SKY_PILLAR_WALLACE, Common_Movement_WalkInPlaceFasterLeft
# 73 "data/maps/SkyPillar_Outside/scripts.pory"
	waitmovement 0
# 74 "data/maps/SkyPillar_Outside/scripts.pory"
	delay 10
# 75 "data/maps/SkyPillar_Outside/scripts.pory"
	applymovement LOCALID_SKY_PILLAR_WALLACE, Common_Movement_WalkInPlaceFasterRight
# 76 "data/maps/SkyPillar_Outside/scripts.pory"
	waitmovement 0
# 77 "data/maps/SkyPillar_Outside/scripts.pory"
	delay 20
# 78 "data/maps/SkyPillar_Outside/scripts.pory"
	applymovement LOCALID_SKY_PILLAR_WALLACE, Common_Movement_WalkInPlaceFasterDown
# 79 "data/maps/SkyPillar_Outside/scripts.pory"
	waitmovement 0
# 80 "data/maps/SkyPillar_Outside/scripts.pory"
	delay 30
# 81 "data/maps/SkyPillar_Outside/scripts.pory"
	msgbox SkyPillar_Outside_Text_SituationGettingWorse, MSGBOX_DEFAULT
# 82 "data/maps/SkyPillar_Outside/scripts.pory"
	closemessage
# 83 "data/maps/SkyPillar_Outside/scripts.pory"
	setflag FLAG_SYS_WEATHER_CTRL
# 84 "data/maps/SkyPillar_Outside/scripts.pory"
	setweather WEATHER_ABNORMAL
# 85 "data/maps/SkyPillar_Outside/scripts.pory"
	doweather
# 86 "data/maps/SkyPillar_Outside/scripts.pory"
	special WaitWeather
# 87 "data/maps/SkyPillar_Outside/scripts.pory"
	waitstate
# 88 "data/maps/SkyPillar_Outside/scripts.pory"
	delay 30
# 89 "data/maps/SkyPillar_Outside/scripts.pory"
	msgbox SkyPillar_Outside_Text_GotToGoBackForSootopolis, MSGBOX_DEFAULT
# 90 "data/maps/SkyPillar_Outside/scripts.pory"
	closemessage
# 91 "data/maps/SkyPillar_Outside/scripts.pory"
	playse SE_EXIT
# 92 "data/maps/SkyPillar_Outside/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 93 "data/maps/SkyPillar_Outside/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 94 "data/maps/SkyPillar_Outside/scripts.pory"
	setvar VAR_SOOTOPOLIS_CITY_STATE, 4
# 95 "data/maps/SkyPillar_Outside/scripts.pory"
	removeobject LOCALID_SKY_PILLAR_WALLACE
# 96 "data/maps/SkyPillar_Outside/scripts.pory"
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_WALLACE
# 97 "data/maps/SkyPillar_Outside/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 98 "data/maps/SkyPillar_Outside/scripts.pory"
	releaseall
	end


# 102 "data/maps/SkyPillar_Outside/scripts.pory"
SkyPillar_Outside_Movement_WallaceApproachPlayer:
# 103 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_down
# 104 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_down
# 105 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_down
# 106 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_down
# 107 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_down
# 108 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_down
# 109 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_down
# 110 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_right
# 111 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_right
# 112 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_right
# 113 "data/maps/SkyPillar_Outside/scripts.pory"
	step_end

# 116 "data/maps/SkyPillar_Outside/scripts.pory"
SkyPillar_Outside_Movement_WallaceClimbSkyPillar:
# 117 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_left
# 118 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_left
# 119 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_left
# 120 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_up
# 121 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_up
# 122 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_up
# 123 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_up
# 124 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_right
# 125 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_up
# 126 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_up
# 127 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_up
# 128 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_up
# 129 "data/maps/SkyPillar_Outside/scripts.pory"
	step_end

# 132 "data/maps/SkyPillar_Outside/scripts.pory"
SkyPillar_Outside_Movement_PlayerClimbSkyPillar:
# 133 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_left
# 134 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_left
# 135 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_left
# 136 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_left
# 137 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_up
# 138 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_up
# 139 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_up
# 140 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_up
# 141 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_right
# 142 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_up
# 143 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_up
# 144 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_up
# 145 "data/maps/SkyPillar_Outside/scripts.pory"
	step_end

SkyPillar_Outside_EventScript_Wallace::
	end


SkyPillar_Outside_EventScript_ClosedDoor::
# 153 "data/maps/SkyPillar_Outside/scripts.pory"
	msgbox SkyPillar_Outside_Text_DoorIsClosed, MSGBOX_SIGN
	end


SkyPillar_Outside_Text_DoorIsClosed::
# 157 "data/maps/SkyPillar_Outside/scripts.pory"
	.string "The door is closed.$"

SkyPillar_Outside_Text_OpenedDoorToSkyPillar::
# 161 "data/maps/SkyPillar_Outside/scripts.pory"
	.string "WALLACE: Oh, my, I'm terribly sorry!\p"
	.string "In my haste, I didn't notice that\n"
	.string "I'd left you behind!\p"
	.string "I've opened the locked door of\n"
	.string "the SKY PILLAR.\p"
	.string "{PLAYER}{KUN}, let's be on our way!$"

SkyPillar_Outside_Text_EarthquakeNotMomentToWaste::
# 170 "data/maps/SkyPillar_Outside/scripts.pory"
	.string "WALLACE: It's an earthquake!\p"
	.string "There's not a moment to waste!\n"
	.string "We've got to hurry!$"

SkyPillar_Outside_Text_SituationGettingWorse::
# 176 "data/maps/SkyPillar_Outside/scripts.pory"
	.string "WALLACE: Hmm…\n"
	.string "The situation is getting worse…$"

SkyPillar_Outside_Text_GotToGoBackForSootopolis::
# 181 "data/maps/SkyPillar_Outside/scripts.pory"
	.string "WALLACE: This isn't good…\p"
	.string "The weather distortion is spreading\n"
	.string "even here…\p"
	.string "{PLAYER}{KUN}.\p"
	.string "RAYQUAZA should be farther up\n"
	.string "from here.\p"
	.string "I'm worried about SOOTOPOLIS.\n"
	.string "I've got to go back.\p"
	.string "Everything is in your hands now.\n"
	.string "Don't fail us!$"
