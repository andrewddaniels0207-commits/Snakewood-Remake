UnionRoom_Frlg_MapScripts::
# 2 "data/maps/UnionRoom_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, UnionRoom_OnResume_Frlg
# 3 "data/maps/UnionRoom_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, UnionRoom_OnTransition_Frlg
	.byte 0


UnionRoom_OnResume_Frlg::
# 7 "data/maps/UnionRoom_Frlg/scripts.pory"
	setflag FLAG_HIDE_UNION_ROOM_PLAYER_1
# 8 "data/maps/UnionRoom_Frlg/scripts.pory"
	setflag FLAG_HIDE_UNION_ROOM_PLAYER_2
# 9 "data/maps/UnionRoom_Frlg/scripts.pory"
	setflag FLAG_HIDE_UNION_ROOM_PLAYER_3
# 10 "data/maps/UnionRoom_Frlg/scripts.pory"
	setflag FLAG_HIDE_UNION_ROOM_PLAYER_4
# 11 "data/maps/UnionRoom_Frlg/scripts.pory"
	setflag FLAG_HIDE_UNION_ROOM_PLAYER_5
# 12 "data/maps/UnionRoom_Frlg/scripts.pory"
	setflag FLAG_HIDE_UNION_ROOM_PLAYER_6
# 13 "data/maps/UnionRoom_Frlg/scripts.pory"
	setflag FLAG_HIDE_UNION_ROOM_PLAYER_7
# 14 "data/maps/UnionRoom_Frlg/scripts.pory"
	setflag FLAG_HIDE_UNION_ROOM_PLAYER_8
# 15 "data/maps/UnionRoom_Frlg/scripts.pory"
	removeobject LOCALID_UNION_ROOM_PLAYER_1
# 16 "data/maps/UnionRoom_Frlg/scripts.pory"
	removeobject LOCALID_UNION_ROOM_PLAYER_2
# 17 "data/maps/UnionRoom_Frlg/scripts.pory"
	removeobject LOCALID_UNION_ROOM_PLAYER_3
# 18 "data/maps/UnionRoom_Frlg/scripts.pory"
	removeobject LOCALID_UNION_ROOM_PLAYER_4
# 19 "data/maps/UnionRoom_Frlg/scripts.pory"
	removeobject LOCALID_UNION_ROOM_PLAYER_5
# 20 "data/maps/UnionRoom_Frlg/scripts.pory"
	removeobject LOCALID_UNION_ROOM_PLAYER_6
# 21 "data/maps/UnionRoom_Frlg/scripts.pory"
	removeobject LOCALID_UNION_ROOM_PLAYER_7
# 22 "data/maps/UnionRoom_Frlg/scripts.pory"
	removeobject LOCALID_UNION_ROOM_PLAYER_8
# 23 "data/maps/UnionRoom_Frlg/scripts.pory"
	special RunUnionRoom
	end


UnionRoom_OnTransition_Frlg::
# 28 "data/maps/UnionRoom_Frlg/scripts.pory"
	setflag FLAG_TEMP_HIDE_FOLLOWER
	end


UnionRoom_EventScript_Player1_Frlg::
# 33 "data/maps/UnionRoom_Frlg/scripts.pory"
	lock
# 34 "data/maps/UnionRoom_Frlg/scripts.pory"
	faceplayer
# 35 "data/maps/UnionRoom_Frlg/scripts.pory"
	setvar VAR_RESULT, 1
# 36 "data/maps/UnionRoom_Frlg/scripts.pory"
	waitstate
# 37 "data/maps/UnionRoom_Frlg/scripts.pory"
	release
	end


UnionRoom_EventScript_Player2_Frlg::
# 42 "data/maps/UnionRoom_Frlg/scripts.pory"
	lock
# 43 "data/maps/UnionRoom_Frlg/scripts.pory"
	faceplayer
# 44 "data/maps/UnionRoom_Frlg/scripts.pory"
	setvar VAR_RESULT, 2
# 45 "data/maps/UnionRoom_Frlg/scripts.pory"
	waitstate
# 46 "data/maps/UnionRoom_Frlg/scripts.pory"
	release
	end


UnionRoom_EventScript_Player3_Frlg::
# 51 "data/maps/UnionRoom_Frlg/scripts.pory"
	lock
# 52 "data/maps/UnionRoom_Frlg/scripts.pory"
	faceplayer
# 53 "data/maps/UnionRoom_Frlg/scripts.pory"
	setvar VAR_RESULT, 3
# 54 "data/maps/UnionRoom_Frlg/scripts.pory"
	waitstate
# 55 "data/maps/UnionRoom_Frlg/scripts.pory"
	release
	end


UnionRoom_EventScript_Player4_Frlg::
# 60 "data/maps/UnionRoom_Frlg/scripts.pory"
	lock
# 61 "data/maps/UnionRoom_Frlg/scripts.pory"
	faceplayer
# 62 "data/maps/UnionRoom_Frlg/scripts.pory"
	setvar VAR_RESULT, 4
# 63 "data/maps/UnionRoom_Frlg/scripts.pory"
	waitstate
# 64 "data/maps/UnionRoom_Frlg/scripts.pory"
	release
	end


UnionRoom_EventScript_Player5_Frlg::
# 69 "data/maps/UnionRoom_Frlg/scripts.pory"
	lock
# 70 "data/maps/UnionRoom_Frlg/scripts.pory"
	faceplayer
# 71 "data/maps/UnionRoom_Frlg/scripts.pory"
	setvar VAR_RESULT, 5
# 72 "data/maps/UnionRoom_Frlg/scripts.pory"
	waitstate
# 73 "data/maps/UnionRoom_Frlg/scripts.pory"
	release
	end


UnionRoom_EventScript_Player6_Frlg::
# 78 "data/maps/UnionRoom_Frlg/scripts.pory"
	lock
# 79 "data/maps/UnionRoom_Frlg/scripts.pory"
	faceplayer
# 80 "data/maps/UnionRoom_Frlg/scripts.pory"
	setvar VAR_RESULT, 6
# 81 "data/maps/UnionRoom_Frlg/scripts.pory"
	waitstate
# 82 "data/maps/UnionRoom_Frlg/scripts.pory"
	release
	end


UnionRoom_EventScript_Player7_Frlg::
# 87 "data/maps/UnionRoom_Frlg/scripts.pory"
	lock
# 88 "data/maps/UnionRoom_Frlg/scripts.pory"
	faceplayer
# 89 "data/maps/UnionRoom_Frlg/scripts.pory"
	setvar VAR_RESULT, 7
# 90 "data/maps/UnionRoom_Frlg/scripts.pory"
	waitstate
# 91 "data/maps/UnionRoom_Frlg/scripts.pory"
	release
	end


UnionRoom_EventScript_Player8_Frlg::
# 96 "data/maps/UnionRoom_Frlg/scripts.pory"
	lock
# 97 "data/maps/UnionRoom_Frlg/scripts.pory"
	faceplayer
# 98 "data/maps/UnionRoom_Frlg/scripts.pory"
	setvar VAR_RESULT, 8
# 99 "data/maps/UnionRoom_Frlg/scripts.pory"
	waitstate
# 100 "data/maps/UnionRoom_Frlg/scripts.pory"
	release
	end


UnionRoom_EventScript_Attendant_Frlg::
# 105 "data/maps/UnionRoom_Frlg/scripts.pory"
	lock
# 106 "data/maps/UnionRoom_Frlg/scripts.pory"
	faceplayer
# 107 "data/maps/UnionRoom_Frlg/scripts.pory"
	setvar VAR_RESULT, 9
# 108 "data/maps/UnionRoom_Frlg/scripts.pory"
	waitstate
# 109 "data/maps/UnionRoom_Frlg/scripts.pory"
	release
	end


UnionRoom_EventScript_Unused_Frlg::
# 114 "data/maps/UnionRoom_Frlg/scripts.pory"
	lockall
# 115 "data/maps/UnionRoom_Frlg/scripts.pory"
	setvar VAR_RESULT, 10
# 116 "data/maps/UnionRoom_Frlg/scripts.pory"
	waitstate
# 117 "data/maps/UnionRoom_Frlg/scripts.pory"
	releaseall
	end

