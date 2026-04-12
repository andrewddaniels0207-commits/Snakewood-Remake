UnionRoom_MapScripts::
# 2 "data/maps/UnionRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, UnionRoom_OnResume
# 3 "data/maps/UnionRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, UnionRoom_OnTransition
	.byte 0


UnionRoom_OnResume::
# 7 "data/maps/UnionRoom/scripts.pory"
	setflag FLAG_HIDE_UNION_ROOM_PLAYER_1
# 8 "data/maps/UnionRoom/scripts.pory"
	setflag FLAG_HIDE_UNION_ROOM_PLAYER_2
# 9 "data/maps/UnionRoom/scripts.pory"
	setflag FLAG_HIDE_UNION_ROOM_PLAYER_3
# 10 "data/maps/UnionRoom/scripts.pory"
	setflag FLAG_HIDE_UNION_ROOM_PLAYER_4
# 11 "data/maps/UnionRoom/scripts.pory"
	setflag FLAG_HIDE_UNION_ROOM_PLAYER_5
# 12 "data/maps/UnionRoom/scripts.pory"
	setflag FLAG_HIDE_UNION_ROOM_PLAYER_6
# 13 "data/maps/UnionRoom/scripts.pory"
	setflag FLAG_HIDE_UNION_ROOM_PLAYER_7
# 14 "data/maps/UnionRoom/scripts.pory"
	setflag FLAG_HIDE_UNION_ROOM_PLAYER_8
# 15 "data/maps/UnionRoom/scripts.pory"
	removeobject LOCALID_UNION_ROOM_PLAYER_1
# 16 "data/maps/UnionRoom/scripts.pory"
	removeobject LOCALID_UNION_ROOM_PLAYER_2
# 17 "data/maps/UnionRoom/scripts.pory"
	removeobject LOCALID_UNION_ROOM_PLAYER_3
# 18 "data/maps/UnionRoom/scripts.pory"
	removeobject LOCALID_UNION_ROOM_PLAYER_4
# 19 "data/maps/UnionRoom/scripts.pory"
	removeobject LOCALID_UNION_ROOM_PLAYER_5
# 20 "data/maps/UnionRoom/scripts.pory"
	removeobject LOCALID_UNION_ROOM_PLAYER_6
# 21 "data/maps/UnionRoom/scripts.pory"
	removeobject LOCALID_UNION_ROOM_PLAYER_7
# 22 "data/maps/UnionRoom/scripts.pory"
	removeobject LOCALID_UNION_ROOM_PLAYER_8
# 23 "data/maps/UnionRoom/scripts.pory"
	special RunUnionRoom
	end


UnionRoom_OnTransition::
# 28 "data/maps/UnionRoom/scripts.pory"
	setflag FLAG_TEMP_HIDE_FOLLOWER
	end


UnionRoom_EventScript_Player1::
# 33 "data/maps/UnionRoom/scripts.pory"
	lock
# 34 "data/maps/UnionRoom/scripts.pory"
	faceplayer
# 35 "data/maps/UnionRoom/scripts.pory"
	setvar VAR_RESULT, UR_INTERACT_PLAYER_1
# 36 "data/maps/UnionRoom/scripts.pory"
	waitstate
# 37 "data/maps/UnionRoom/scripts.pory"
	release
	end


UnionRoom_EventScript_Player2::
# 42 "data/maps/UnionRoom/scripts.pory"
	lock
# 43 "data/maps/UnionRoom/scripts.pory"
	faceplayer
# 44 "data/maps/UnionRoom/scripts.pory"
	setvar VAR_RESULT, UR_INTERACT_PLAYER_2
# 45 "data/maps/UnionRoom/scripts.pory"
	waitstate
# 46 "data/maps/UnionRoom/scripts.pory"
	release
	end


UnionRoom_EventScript_Player3::
# 51 "data/maps/UnionRoom/scripts.pory"
	lock
# 52 "data/maps/UnionRoom/scripts.pory"
	faceplayer
# 53 "data/maps/UnionRoom/scripts.pory"
	setvar VAR_RESULT, UR_INTERACT_PLAYER_3
# 54 "data/maps/UnionRoom/scripts.pory"
	waitstate
# 55 "data/maps/UnionRoom/scripts.pory"
	release
	end


UnionRoom_EventScript_Player4::
# 60 "data/maps/UnionRoom/scripts.pory"
	lock
# 61 "data/maps/UnionRoom/scripts.pory"
	faceplayer
# 62 "data/maps/UnionRoom/scripts.pory"
	setvar VAR_RESULT, UR_INTERACT_PLAYER_4
# 63 "data/maps/UnionRoom/scripts.pory"
	waitstate
# 64 "data/maps/UnionRoom/scripts.pory"
	release
	end


UnionRoom_EventScript_Player5::
# 69 "data/maps/UnionRoom/scripts.pory"
	lock
# 70 "data/maps/UnionRoom/scripts.pory"
	faceplayer
# 71 "data/maps/UnionRoom/scripts.pory"
	setvar VAR_RESULT, UR_INTERACT_PLAYER_5
# 72 "data/maps/UnionRoom/scripts.pory"
	waitstate
# 73 "data/maps/UnionRoom/scripts.pory"
	release
	end


UnionRoom_EventScript_Player6::
# 78 "data/maps/UnionRoom/scripts.pory"
	lock
# 79 "data/maps/UnionRoom/scripts.pory"
	faceplayer
# 80 "data/maps/UnionRoom/scripts.pory"
	setvar VAR_RESULT, UR_INTERACT_PLAYER_6
# 81 "data/maps/UnionRoom/scripts.pory"
	waitstate
# 82 "data/maps/UnionRoom/scripts.pory"
	release
	end


UnionRoom_EventScript_Player7::
# 87 "data/maps/UnionRoom/scripts.pory"
	lock
# 88 "data/maps/UnionRoom/scripts.pory"
	faceplayer
# 89 "data/maps/UnionRoom/scripts.pory"
	setvar VAR_RESULT, UR_INTERACT_PLAYER_7
# 90 "data/maps/UnionRoom/scripts.pory"
	waitstate
# 91 "data/maps/UnionRoom/scripts.pory"
	release
	end


UnionRoom_EventScript_Player8::
# 96 "data/maps/UnionRoom/scripts.pory"
	lock
# 97 "data/maps/UnionRoom/scripts.pory"
	faceplayer
# 98 "data/maps/UnionRoom/scripts.pory"
	setvar VAR_RESULT, UR_INTERACT_PLAYER_8
# 99 "data/maps/UnionRoom/scripts.pory"
	waitstate
# 100 "data/maps/UnionRoom/scripts.pory"
	release
	end


UnionRoom_EventScript_Attendant::
# 105 "data/maps/UnionRoom/scripts.pory"
	lock
# 106 "data/maps/UnionRoom/scripts.pory"
	faceplayer
# 107 "data/maps/UnionRoom/scripts.pory"
	setvar VAR_RESULT, UR_INTERACT_ATTENDANT
# 108 "data/maps/UnionRoom/scripts.pory"
	waitstate
# 109 "data/maps/UnionRoom/scripts.pory"
	release
	end


UnionRoom_EventScript_Unused::
# 114 "data/maps/UnionRoom/scripts.pory"
	lockall
# 115 "data/maps/UnionRoom/scripts.pory"
	setvar VAR_RESULT, UR_INTERACT_UNUSED
# 116 "data/maps/UnionRoom/scripts.pory"
	waitstate
# 117 "data/maps/UnionRoom/scripts.pory"
	releaseall
	end

