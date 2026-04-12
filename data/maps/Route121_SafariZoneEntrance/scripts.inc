# 1 "data/maps/Route121_SafariZoneEntrance/scripts.pory"

# 2 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
Route121_SafariZoneEntrance_MapScripts::
# 3 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
# 2 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
# 4 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route121_SafariZoneEntrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 5 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	.byte 0
# 6 "data/maps/Route121_SafariZoneEntrance/scripts.pory"

# 7 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
Route121_SafariZoneEntrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 8 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
# 3 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
# 9 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	map_script_2 VAR_SAFARI_ZONE_STATE, 1, Route121_SafariZoneEntrance_EventScript_ExitSafariZone
# 10 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	.2byte 0
# 11 "data/maps/Route121_SafariZoneEntrance/scripts.pory"

# 12 "data/maps/Route121_SafariZoneEntrance/scripts.pory"

# 13 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
Route121_SafariZoneEntrance_EventScript_ExitSafariZone::
# 14 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
# 8 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
# 15 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	lockall
# 16 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
# 9 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
# 17 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	applymovement LOCALID_PLAYER, Route121_SafariZoneEntrance_Movement_ExitSafariZone
# 18 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
# 10 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
# 19 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	waitmovement 0
# 20 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
# 11 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
# 21 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	setvar VAR_SAFARI_ZONE_STATE, 0
# 22 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
# 12 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
# 23 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	releaseall
# 24 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	end
# 25 "data/maps/Route121_SafariZoneEntrance/scripts.pory"

# 26 "data/maps/Route121_SafariZoneEntrance/scripts.pory"

# 27 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
# 16 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
# 28 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
Route121_SafariZoneEntrance_Movement_ExitSafariZone:
# 29 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
# 17 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
# 30 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	walk_up
# 31 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
# 18 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
# 32 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	walk_right
# 33 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
# 19 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
# 34 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	walk_right
# 35 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
# 20 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
# 36 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	walk_right
# 37 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
# 21 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
# 38 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	walk_right
# 39 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
# 22 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
# 40 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	walk_right
# 41 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
# 23 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
# 42 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	walk_right
# 43 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
# 24 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
# 44 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	walk_right
# 45 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
# 25 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
# 46 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	step_end
# 47 "data/maps/Route121_SafariZoneEntrance/scripts.pory"

# 48 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
Route121_SafariZoneEntrance_EventScript_WelcomeAttendant::
# 49 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
# 29 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
# 50 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	msgbox Route121_SafariZoneEntrance_Text_WelcomeToSafariZone, MSGBOX_NPC
# 51 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	end
# 52 "data/maps/Route121_SafariZoneEntrance/scripts.pory"

# 53 "data/maps/Route121_SafariZoneEntrance/scripts.pory"

# 54 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
Route121_SafariZoneEntrance_EventScript_InfoAttendant::
# 55 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
# 34 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
# 56 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	lock
# 57 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
# 35 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
# 58 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	faceplayer
# 59 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
# 36 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
# 60 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	msgbox Route121_SafariZoneEntrance_Text_WelcomeFirstTime, MSGBOX_YESNO
# 61 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
# 37 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
# 62 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	compare VAR_RESULT, YES
# 63 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto_if_eq Route121_SafariZoneEntrance_EventScript_InfoAttendant_2
# 64 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
Route121_SafariZoneEntrance_EventScript_InfoAttendant_1:
# 65 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
# 40 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
# 66 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	msgbox Route121_SafariZoneEntrance_Text_ComeInAndEnjoy, MSGBOX_DEFAULT
# 67 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
# 41 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
# 68 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	release
# 69 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	end
# 70 "data/maps/Route121_SafariZoneEntrance/scripts.pory"

# 71 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
Route121_SafariZoneEntrance_EventScript_InfoAttendant_2:
# 72 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
# 38 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
# 73 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_FirstTimeInfo
# 74 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_InfoAttendant_1
# 75 "data/maps/Route121_SafariZoneEntrance/scripts.pory"

# 76 "data/maps/Route121_SafariZoneEntrance/scripts.pory"

# 77 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
Route121_SafariZoneEntrance_EventScript_FirstTimeInfo::
# 78 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
# 46 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
# 79 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	msgbox Route121_SafariZoneEntrance_Text_FirstTimeInfo, MSGBOX_DEFAULT
# 80 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
# 47 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
# 81 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	release
# 82 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	end
# 83 "data/maps/Route121_SafariZoneEntrance/scripts.pory"

# 84 "data/maps/Route121_SafariZoneEntrance/scripts.pory"

# 85 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
Route121_SafariZoneEntrance_EventScript_EntranceCounterTrigger::
# 86 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
# 52 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
# 87 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	lockall
# 88 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
# 53 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
# 89 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 90 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
# 54 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
# 91 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	waitmovement 0
# 92 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
# 55 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
# 93 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	showmoneybox 0, 0
# 94 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
# 56 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
# 95 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	msgbox Route121_SafariZoneEntrance_Text_WouldYouLikeToPlay, MSGBOX_YESNO
# 96 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
# 57 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
# 97 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	compare VAR_RESULT, YES
# 98 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto_if_eq Route121_SafariZoneEntrance_EventScript_EntranceCounterTrigger_2
# 99 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
Route121_SafariZoneEntrance_EventScript_EntranceCounterTrigger_1:
# 100 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
# 60 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
# 101 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	msgbox Route121_SafariZoneEntrance_Text_PlayAnotherTime, MSGBOX_DEFAULT
# 102 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
# 61 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
# 103 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_MovePlayerBackFromCounter
# 104 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	end
# 105 "data/maps/Route121_SafariZoneEntrance/scripts.pory"

# 106 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
Route121_SafariZoneEntrance_EventScript_EntranceCounterTrigger_2:
# 107 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
# 58 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
# 108 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_TryEnterSafariZone
# 109 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_EntranceCounterTrigger_1
# 110 "data/maps/Route121_SafariZoneEntrance/scripts.pory"

# 111 "data/maps/Route121_SafariZoneEntrance/scripts.pory"

# 112 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
Route121_SafariZoneEntrance_EventScript_TryEnterSafariZone::
# 113 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
# 66 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
# 114 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	checkitem ITEM_POKEBLOCK_CASE
# 115 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
# 67 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
# 116 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	compare VAR_RESULT, 0
# 117 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto_if_eq Route121_SafariZoneEntrance_EventScript_TryEnterSafariZone_2
# 118 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
Route121_SafariZoneEntrance_EventScript_TryEnterSafariZone_1:
# 119 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
# 70 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
# 120 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	call Route121_SafariZoneEntrance_EventScript_CheckHasRoomForPokemon
# 121 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
# 71 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
# 122 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	checkmoney 500
# 123 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
# 72 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
# 124 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	compare VAR_RESULT, 0
# 125 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto_if_eq Route121_SafariZoneEntrance_EventScript_TryEnterSafariZone_5
# 126 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
Route121_SafariZoneEntrance_EventScript_TryEnterSafariZone_4:
# 127 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
# 75 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
# 128 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	playse SE_SHOP
# 129 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
# 76 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
# 130 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	msgbox Route121_SafariZoneEntrance_Text_ThatWillBe500Please, MSGBOX_DEFAULT
# 131 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
# 77 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
# 132 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	removemoney 500
# 133 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
# 78 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
# 134 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	updatemoneybox
# 135 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
# 79 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
# 136 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	msgbox Route121_SafariZoneEntrance_Text_HereAreYourSafariBalls, MSGBOX_DEFAULT
# 137 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
# 80 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
# 138 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 139 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
# 81 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
# 140 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	message Route121_SafariZoneEntrance_Text_Received30SafariBalls
# 141 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
# 82 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
# 142 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	waitfanfare
# 143 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
# 83 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
# 144 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	msgbox Route121_SafariZoneEntrance_Text_PleaseEnjoyYourself, MSGBOX_DEFAULT
# 145 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
# 84 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
# 146 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	closemessage
# 147 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
# 85 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
# 148 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	hidemoneybox
# 149 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
# 86 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
# 150 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	applymovement LOCALID_PLAYER, Route121_SafariZoneEntrance_Movement_EnterSafariZone
# 151 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
# 87 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
# 152 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	waitmovement 0
# 153 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
# 88 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
# 154 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	special EnterSafariMode
# 155 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
# 89 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
# 156 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	setvar VAR_SAFARI_ZONE_STATE, 2
# 157 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
# 90 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
# 158 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	clearflag FLAG_GOOD_LUCK_SAFARI_ZONE
# 159 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
# 91 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
# 160 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	warp MAP_SAFARI_ZONE_SOUTH, 32, 33
# 161 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
# 92 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
# 162 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	waitstate
# 163 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	end
# 164 "data/maps/Route121_SafariZoneEntrance/scripts.pory"

# 165 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
Route121_SafariZoneEntrance_EventScript_TryEnterSafariZone_2:
# 166 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
# 68 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
# 167 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_NoPokeblockCase
# 168 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_TryEnterSafariZone_1
# 169 "data/maps/Route121_SafariZoneEntrance/scripts.pory"

# 170 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
Route121_SafariZoneEntrance_EventScript_TryEnterSafariZone_5:
# 171 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
# 73 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
# 172 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_NotEnoughMoney
# 173 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_TryEnterSafariZone_4
# 174 "data/maps/Route121_SafariZoneEntrance/scripts.pory"

# 175 "data/maps/Route121_SafariZoneEntrance/scripts.pory"

# 176 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
Route121_SafariZoneEntrance_EventScript_CheckHasRoomForPokemon::
# 177 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
# 97 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
# 178 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	getpartysize
# 179 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
# 98 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
# 180 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	compare VAR_RESULT, PARTY_SIZE
# 181 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto_if_ne Route121_SafariZoneEntrance_EventScript_CheckHasRoomForPokemon_2
# 182 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
Route121_SafariZoneEntrance_EventScript_CheckHasRoomForPokemon_1:
# 183 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
# 101 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
# 184 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	specialvar VAR_RESULT, ScriptCheckFreePokemonStorageSpace
# 185 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
# 102 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
# 186 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	compare VAR_RESULT, 1
# 187 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto_if_eq Route121_SafariZoneEntrance_EventScript_CheckHasRoomForPokemon_5
# 188 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
Route121_SafariZoneEntrance_EventScript_CheckHasRoomForPokemon_4:
# 189 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
# 105 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
# 190 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	msgbox Route121_SafariZoneEntrance_Text_PCIsFull, MSGBOX_DEFAULT
# 191 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
# 106 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
# 192 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_MovePlayerBackFromCounter
# 193 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	end
# 194 "data/maps/Route121_SafariZoneEntrance/scripts.pory"

# 195 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
Route121_SafariZoneEntrance_EventScript_CheckHasRoomForPokemon_2:
# 196 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
# 99 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
# 197 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_HasRoomForPokemon
# 198 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_CheckHasRoomForPokemon_1
# 199 "data/maps/Route121_SafariZoneEntrance/scripts.pory"

# 200 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
Route121_SafariZoneEntrance_EventScript_CheckHasRoomForPokemon_5:
# 201 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
# 103 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
# 202 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_HasRoomForPokemon
# 203 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_CheckHasRoomForPokemon_4
# 204 "data/maps/Route121_SafariZoneEntrance/scripts.pory"

# 205 "data/maps/Route121_SafariZoneEntrance/scripts.pory"

# 206 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
Route121_SafariZoneEntrance_EventScript_HasRoomForPokemon::
# 207 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	return
# 208 "data/maps/Route121_SafariZoneEntrance/scripts.pory"

# 209 "data/maps/Route121_SafariZoneEntrance/scripts.pory"

# 210 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
Route121_SafariZoneEntrance_EventScript_NoPokeblockCase::
# 211 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
# 115 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
# 212 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	msgbox Route121_SafariZoneEntrance_Text_YouNeedPokeblockCase, MSGBOX_DEFAULT
# 213 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
# 116 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
# 214 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_MovePlayerBackFromCounter
# 215 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	end
# 216 "data/maps/Route121_SafariZoneEntrance/scripts.pory"

# 217 "data/maps/Route121_SafariZoneEntrance/scripts.pory"

# 218 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
Route121_SafariZoneEntrance_EventScript_NotEnoughMoney::
# 219 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
# 121 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
# 220 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	msgbox Route121_SafariZoneEntrance_Text_NotEnoughMoney, MSGBOX_DEFAULT
# 221 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
# 122 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
# 222 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_MovePlayerBackFromCounter
# 223 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	end
# 224 "data/maps/Route121_SafariZoneEntrance/scripts.pory"

# 225 "data/maps/Route121_SafariZoneEntrance/scripts.pory"

# 226 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
Route121_SafariZoneEntrance_EventScript_MovePlayerBackFromCounter::
# 227 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
# 127 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
# 228 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	closemessage
# 229 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
# 128 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
# 230 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	hidemoneybox
# 231 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
# 129 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
# 232 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	applymovement LOCALID_PLAYER, Route121_SafariZoneEntrance_Movement_BackAwayFromCounter
# 233 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
# 130 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
# 234 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	waitmovement 0
# 235 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
# 131 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
# 236 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	releaseall
# 237 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	end
# 238 "data/maps/Route121_SafariZoneEntrance/scripts.pory"

# 239 "data/maps/Route121_SafariZoneEntrance/scripts.pory"

# 240 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
# 135 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
# 241 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
Route121_SafariZoneEntrance_Movement_BackAwayFromCounter:
# 242 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
# 136 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
# 243 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	walk_right
# 244 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
# 137 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
# 245 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	step_end
# 246 "data/maps/Route121_SafariZoneEntrance/scripts.pory"

# 247 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
# 140 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
# 248 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
Route121_SafariZoneEntrance_Movement_EnterSafariZone:
# 249 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
# 141 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
# 250 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	walk_left
# 251 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
# 142 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
# 252 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	walk_left
# 253 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
# 143 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
# 254 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	walk_left
# 255 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
# 144 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
# 256 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	walk_left
# 257 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
# 145 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
# 258 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	walk_left
# 259 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
# 146 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
# 260 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	walk_left
# 261 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
# 147 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
# 262 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	walk_down
# 263 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
# 148 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
# 264 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	delay_16
# 265 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
# 149 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
# 266 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	step_end
# 267 "data/maps/Route121_SafariZoneEntrance/scripts.pory"

# 268 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
Route121_SafariZoneEntrance_EventScript_TrainerTipSign::
# 269 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
# 153 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
# 270 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	msgbox Route121_SafariZoneEntrance_Text_TrainerTip, MSGBOX_SIGN
# 271 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	end
