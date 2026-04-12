# 1 "data/maps/UnionRoom/scripts.pory"

# 2 "data/maps/UnionRoom/scripts.pory"
UnionRoom_MapScripts::
# 3 "data/maps/UnionRoom/scripts.pory"
# 2 "data/maps/UnionRoom/scripts.pory"
# 4 "data/maps/UnionRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, UnionRoom_OnResume
# 5 "data/maps/UnionRoom/scripts.pory"
# 3 "data/maps/UnionRoom/scripts.pory"
# 6 "data/maps/UnionRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, UnionRoom_OnTransition
# 7 "data/maps/UnionRoom/scripts.pory"
	.byte 0
# 8 "data/maps/UnionRoom/scripts.pory"

# 9 "data/maps/UnionRoom/scripts.pory"

# 10 "data/maps/UnionRoom/scripts.pory"
UnionRoom_OnResume::
# 11 "data/maps/UnionRoom/scripts.pory"
# 7 "data/maps/UnionRoom/scripts.pory"
# 12 "data/maps/UnionRoom/scripts.pory"
	setflag FLAG_HIDE_UNION_ROOM_PLAYER_1
# 13 "data/maps/UnionRoom/scripts.pory"
# 8 "data/maps/UnionRoom/scripts.pory"
# 14 "data/maps/UnionRoom/scripts.pory"
	setflag FLAG_HIDE_UNION_ROOM_PLAYER_2
# 15 "data/maps/UnionRoom/scripts.pory"
# 9 "data/maps/UnionRoom/scripts.pory"
# 16 "data/maps/UnionRoom/scripts.pory"
	setflag FLAG_HIDE_UNION_ROOM_PLAYER_3
# 17 "data/maps/UnionRoom/scripts.pory"
# 10 "data/maps/UnionRoom/scripts.pory"
# 18 "data/maps/UnionRoom/scripts.pory"
	setflag FLAG_HIDE_UNION_ROOM_PLAYER_4
# 19 "data/maps/UnionRoom/scripts.pory"
# 11 "data/maps/UnionRoom/scripts.pory"
# 20 "data/maps/UnionRoom/scripts.pory"
	setflag FLAG_HIDE_UNION_ROOM_PLAYER_5
# 21 "data/maps/UnionRoom/scripts.pory"
# 12 "data/maps/UnionRoom/scripts.pory"
# 22 "data/maps/UnionRoom/scripts.pory"
	setflag FLAG_HIDE_UNION_ROOM_PLAYER_6
# 23 "data/maps/UnionRoom/scripts.pory"
# 13 "data/maps/UnionRoom/scripts.pory"
# 24 "data/maps/UnionRoom/scripts.pory"
	setflag FLAG_HIDE_UNION_ROOM_PLAYER_7
# 25 "data/maps/UnionRoom/scripts.pory"
# 14 "data/maps/UnionRoom/scripts.pory"
# 26 "data/maps/UnionRoom/scripts.pory"
	setflag FLAG_HIDE_UNION_ROOM_PLAYER_8
# 27 "data/maps/UnionRoom/scripts.pory"
# 15 "data/maps/UnionRoom/scripts.pory"
# 28 "data/maps/UnionRoom/scripts.pory"
	removeobject LOCALID_UNION_ROOM_PLAYER_1
# 29 "data/maps/UnionRoom/scripts.pory"
# 16 "data/maps/UnionRoom/scripts.pory"
# 30 "data/maps/UnionRoom/scripts.pory"
	removeobject LOCALID_UNION_ROOM_PLAYER_2
# 31 "data/maps/UnionRoom/scripts.pory"
# 17 "data/maps/UnionRoom/scripts.pory"
# 32 "data/maps/UnionRoom/scripts.pory"
	removeobject LOCALID_UNION_ROOM_PLAYER_3
# 33 "data/maps/UnionRoom/scripts.pory"
# 18 "data/maps/UnionRoom/scripts.pory"
# 34 "data/maps/UnionRoom/scripts.pory"
	removeobject LOCALID_UNION_ROOM_PLAYER_4
# 35 "data/maps/UnionRoom/scripts.pory"
# 19 "data/maps/UnionRoom/scripts.pory"
# 36 "data/maps/UnionRoom/scripts.pory"
	removeobject LOCALID_UNION_ROOM_PLAYER_5
# 37 "data/maps/UnionRoom/scripts.pory"
# 20 "data/maps/UnionRoom/scripts.pory"
# 38 "data/maps/UnionRoom/scripts.pory"
	removeobject LOCALID_UNION_ROOM_PLAYER_6
# 39 "data/maps/UnionRoom/scripts.pory"
# 21 "data/maps/UnionRoom/scripts.pory"
# 40 "data/maps/UnionRoom/scripts.pory"
	removeobject LOCALID_UNION_ROOM_PLAYER_7
# 41 "data/maps/UnionRoom/scripts.pory"
# 22 "data/maps/UnionRoom/scripts.pory"
# 42 "data/maps/UnionRoom/scripts.pory"
	removeobject LOCALID_UNION_ROOM_PLAYER_8
# 43 "data/maps/UnionRoom/scripts.pory"
# 23 "data/maps/UnionRoom/scripts.pory"
# 44 "data/maps/UnionRoom/scripts.pory"
	special RunUnionRoom
# 45 "data/maps/UnionRoom/scripts.pory"
	end
# 46 "data/maps/UnionRoom/scripts.pory"

# 47 "data/maps/UnionRoom/scripts.pory"

# 48 "data/maps/UnionRoom/scripts.pory"
UnionRoom_OnTransition::
# 49 "data/maps/UnionRoom/scripts.pory"
# 28 "data/maps/UnionRoom/scripts.pory"
# 50 "data/maps/UnionRoom/scripts.pory"
	setflag FLAG_TEMP_HIDE_FOLLOWER
# 51 "data/maps/UnionRoom/scripts.pory"
	end
# 52 "data/maps/UnionRoom/scripts.pory"

# 53 "data/maps/UnionRoom/scripts.pory"

# 54 "data/maps/UnionRoom/scripts.pory"
UnionRoom_EventScript_Player1::
# 55 "data/maps/UnionRoom/scripts.pory"
# 33 "data/maps/UnionRoom/scripts.pory"
# 56 "data/maps/UnionRoom/scripts.pory"
	lock
# 57 "data/maps/UnionRoom/scripts.pory"
# 34 "data/maps/UnionRoom/scripts.pory"
# 58 "data/maps/UnionRoom/scripts.pory"
	faceplayer
# 59 "data/maps/UnionRoom/scripts.pory"
# 35 "data/maps/UnionRoom/scripts.pory"
# 60 "data/maps/UnionRoom/scripts.pory"
	setvar VAR_RESULT, UR_INTERACT_PLAYER_1
# 61 "data/maps/UnionRoom/scripts.pory"
# 36 "data/maps/UnionRoom/scripts.pory"
# 62 "data/maps/UnionRoom/scripts.pory"
	waitstate
# 63 "data/maps/UnionRoom/scripts.pory"
# 37 "data/maps/UnionRoom/scripts.pory"
# 64 "data/maps/UnionRoom/scripts.pory"
	release
# 65 "data/maps/UnionRoom/scripts.pory"
	end
# 66 "data/maps/UnionRoom/scripts.pory"

# 67 "data/maps/UnionRoom/scripts.pory"

# 68 "data/maps/UnionRoom/scripts.pory"
UnionRoom_EventScript_Player2::
# 69 "data/maps/UnionRoom/scripts.pory"
# 42 "data/maps/UnionRoom/scripts.pory"
# 70 "data/maps/UnionRoom/scripts.pory"
	lock
# 71 "data/maps/UnionRoom/scripts.pory"
# 43 "data/maps/UnionRoom/scripts.pory"
# 72 "data/maps/UnionRoom/scripts.pory"
	faceplayer
# 73 "data/maps/UnionRoom/scripts.pory"
# 44 "data/maps/UnionRoom/scripts.pory"
# 74 "data/maps/UnionRoom/scripts.pory"
	setvar VAR_RESULT, UR_INTERACT_PLAYER_2
# 75 "data/maps/UnionRoom/scripts.pory"
# 45 "data/maps/UnionRoom/scripts.pory"
# 76 "data/maps/UnionRoom/scripts.pory"
	waitstate
# 77 "data/maps/UnionRoom/scripts.pory"
# 46 "data/maps/UnionRoom/scripts.pory"
# 78 "data/maps/UnionRoom/scripts.pory"
	release
# 79 "data/maps/UnionRoom/scripts.pory"
	end
# 80 "data/maps/UnionRoom/scripts.pory"

# 81 "data/maps/UnionRoom/scripts.pory"

# 82 "data/maps/UnionRoom/scripts.pory"
UnionRoom_EventScript_Player3::
# 83 "data/maps/UnionRoom/scripts.pory"
# 51 "data/maps/UnionRoom/scripts.pory"
# 84 "data/maps/UnionRoom/scripts.pory"
	lock
# 85 "data/maps/UnionRoom/scripts.pory"
# 52 "data/maps/UnionRoom/scripts.pory"
# 86 "data/maps/UnionRoom/scripts.pory"
	faceplayer
# 87 "data/maps/UnionRoom/scripts.pory"
# 53 "data/maps/UnionRoom/scripts.pory"
# 88 "data/maps/UnionRoom/scripts.pory"
	setvar VAR_RESULT, UR_INTERACT_PLAYER_3
# 89 "data/maps/UnionRoom/scripts.pory"
# 54 "data/maps/UnionRoom/scripts.pory"
# 90 "data/maps/UnionRoom/scripts.pory"
	waitstate
# 91 "data/maps/UnionRoom/scripts.pory"
# 55 "data/maps/UnionRoom/scripts.pory"
# 92 "data/maps/UnionRoom/scripts.pory"
	release
# 93 "data/maps/UnionRoom/scripts.pory"
	end
# 94 "data/maps/UnionRoom/scripts.pory"

# 95 "data/maps/UnionRoom/scripts.pory"

# 96 "data/maps/UnionRoom/scripts.pory"
UnionRoom_EventScript_Player4::
# 97 "data/maps/UnionRoom/scripts.pory"
# 60 "data/maps/UnionRoom/scripts.pory"
# 98 "data/maps/UnionRoom/scripts.pory"
	lock
# 99 "data/maps/UnionRoom/scripts.pory"
# 61 "data/maps/UnionRoom/scripts.pory"
# 100 "data/maps/UnionRoom/scripts.pory"
	faceplayer
# 101 "data/maps/UnionRoom/scripts.pory"
# 62 "data/maps/UnionRoom/scripts.pory"
# 102 "data/maps/UnionRoom/scripts.pory"
	setvar VAR_RESULT, UR_INTERACT_PLAYER_4
# 103 "data/maps/UnionRoom/scripts.pory"
# 63 "data/maps/UnionRoom/scripts.pory"
# 104 "data/maps/UnionRoom/scripts.pory"
	waitstate
# 105 "data/maps/UnionRoom/scripts.pory"
# 64 "data/maps/UnionRoom/scripts.pory"
# 106 "data/maps/UnionRoom/scripts.pory"
	release
# 107 "data/maps/UnionRoom/scripts.pory"
	end
# 108 "data/maps/UnionRoom/scripts.pory"

# 109 "data/maps/UnionRoom/scripts.pory"

# 110 "data/maps/UnionRoom/scripts.pory"
UnionRoom_EventScript_Player5::
# 111 "data/maps/UnionRoom/scripts.pory"
# 69 "data/maps/UnionRoom/scripts.pory"
# 112 "data/maps/UnionRoom/scripts.pory"
	lock
# 113 "data/maps/UnionRoom/scripts.pory"
# 70 "data/maps/UnionRoom/scripts.pory"
# 114 "data/maps/UnionRoom/scripts.pory"
	faceplayer
# 115 "data/maps/UnionRoom/scripts.pory"
# 71 "data/maps/UnionRoom/scripts.pory"
# 116 "data/maps/UnionRoom/scripts.pory"
	setvar VAR_RESULT, UR_INTERACT_PLAYER_5
# 117 "data/maps/UnionRoom/scripts.pory"
# 72 "data/maps/UnionRoom/scripts.pory"
# 118 "data/maps/UnionRoom/scripts.pory"
	waitstate
# 119 "data/maps/UnionRoom/scripts.pory"
# 73 "data/maps/UnionRoom/scripts.pory"
# 120 "data/maps/UnionRoom/scripts.pory"
	release
# 121 "data/maps/UnionRoom/scripts.pory"
	end
# 122 "data/maps/UnionRoom/scripts.pory"

# 123 "data/maps/UnionRoom/scripts.pory"

# 124 "data/maps/UnionRoom/scripts.pory"
UnionRoom_EventScript_Player6::
# 125 "data/maps/UnionRoom/scripts.pory"
# 78 "data/maps/UnionRoom/scripts.pory"
# 126 "data/maps/UnionRoom/scripts.pory"
	lock
# 127 "data/maps/UnionRoom/scripts.pory"
# 79 "data/maps/UnionRoom/scripts.pory"
# 128 "data/maps/UnionRoom/scripts.pory"
	faceplayer
# 129 "data/maps/UnionRoom/scripts.pory"
# 80 "data/maps/UnionRoom/scripts.pory"
# 130 "data/maps/UnionRoom/scripts.pory"
	setvar VAR_RESULT, UR_INTERACT_PLAYER_6
# 131 "data/maps/UnionRoom/scripts.pory"
# 81 "data/maps/UnionRoom/scripts.pory"
# 132 "data/maps/UnionRoom/scripts.pory"
	waitstate
# 133 "data/maps/UnionRoom/scripts.pory"
# 82 "data/maps/UnionRoom/scripts.pory"
# 134 "data/maps/UnionRoom/scripts.pory"
	release
# 135 "data/maps/UnionRoom/scripts.pory"
	end
# 136 "data/maps/UnionRoom/scripts.pory"

# 137 "data/maps/UnionRoom/scripts.pory"

# 138 "data/maps/UnionRoom/scripts.pory"
UnionRoom_EventScript_Player7::
# 139 "data/maps/UnionRoom/scripts.pory"
# 87 "data/maps/UnionRoom/scripts.pory"
# 140 "data/maps/UnionRoom/scripts.pory"
	lock
# 141 "data/maps/UnionRoom/scripts.pory"
# 88 "data/maps/UnionRoom/scripts.pory"
# 142 "data/maps/UnionRoom/scripts.pory"
	faceplayer
# 143 "data/maps/UnionRoom/scripts.pory"
# 89 "data/maps/UnionRoom/scripts.pory"
# 144 "data/maps/UnionRoom/scripts.pory"
	setvar VAR_RESULT, UR_INTERACT_PLAYER_7
# 145 "data/maps/UnionRoom/scripts.pory"
# 90 "data/maps/UnionRoom/scripts.pory"
# 146 "data/maps/UnionRoom/scripts.pory"
	waitstate
# 147 "data/maps/UnionRoom/scripts.pory"
# 91 "data/maps/UnionRoom/scripts.pory"
# 148 "data/maps/UnionRoom/scripts.pory"
	release
# 149 "data/maps/UnionRoom/scripts.pory"
	end
# 150 "data/maps/UnionRoom/scripts.pory"

# 151 "data/maps/UnionRoom/scripts.pory"

# 152 "data/maps/UnionRoom/scripts.pory"
UnionRoom_EventScript_Player8::
# 153 "data/maps/UnionRoom/scripts.pory"
# 96 "data/maps/UnionRoom/scripts.pory"
# 154 "data/maps/UnionRoom/scripts.pory"
	lock
# 155 "data/maps/UnionRoom/scripts.pory"
# 97 "data/maps/UnionRoom/scripts.pory"
# 156 "data/maps/UnionRoom/scripts.pory"
	faceplayer
# 157 "data/maps/UnionRoom/scripts.pory"
# 98 "data/maps/UnionRoom/scripts.pory"
# 158 "data/maps/UnionRoom/scripts.pory"
	setvar VAR_RESULT, UR_INTERACT_PLAYER_8
# 159 "data/maps/UnionRoom/scripts.pory"
# 99 "data/maps/UnionRoom/scripts.pory"
# 160 "data/maps/UnionRoom/scripts.pory"
	waitstate
# 161 "data/maps/UnionRoom/scripts.pory"
# 100 "data/maps/UnionRoom/scripts.pory"
# 162 "data/maps/UnionRoom/scripts.pory"
	release
# 163 "data/maps/UnionRoom/scripts.pory"
	end
# 164 "data/maps/UnionRoom/scripts.pory"

# 165 "data/maps/UnionRoom/scripts.pory"

# 166 "data/maps/UnionRoom/scripts.pory"
UnionRoom_EventScript_Attendant::
# 167 "data/maps/UnionRoom/scripts.pory"
# 105 "data/maps/UnionRoom/scripts.pory"
# 168 "data/maps/UnionRoom/scripts.pory"
	lock
# 169 "data/maps/UnionRoom/scripts.pory"
# 106 "data/maps/UnionRoom/scripts.pory"
# 170 "data/maps/UnionRoom/scripts.pory"
	faceplayer
# 171 "data/maps/UnionRoom/scripts.pory"
# 107 "data/maps/UnionRoom/scripts.pory"
# 172 "data/maps/UnionRoom/scripts.pory"
	setvar VAR_RESULT, UR_INTERACT_ATTENDANT
# 173 "data/maps/UnionRoom/scripts.pory"
# 108 "data/maps/UnionRoom/scripts.pory"
# 174 "data/maps/UnionRoom/scripts.pory"
	waitstate
# 175 "data/maps/UnionRoom/scripts.pory"
# 109 "data/maps/UnionRoom/scripts.pory"
# 176 "data/maps/UnionRoom/scripts.pory"
	release
# 177 "data/maps/UnionRoom/scripts.pory"
	end
# 178 "data/maps/UnionRoom/scripts.pory"

# 179 "data/maps/UnionRoom/scripts.pory"

# 180 "data/maps/UnionRoom/scripts.pory"
UnionRoom_EventScript_Unused::
# 181 "data/maps/UnionRoom/scripts.pory"
# 114 "data/maps/UnionRoom/scripts.pory"
# 182 "data/maps/UnionRoom/scripts.pory"
	lockall
# 183 "data/maps/UnionRoom/scripts.pory"
# 115 "data/maps/UnionRoom/scripts.pory"
# 184 "data/maps/UnionRoom/scripts.pory"
	setvar VAR_RESULT, UR_INTERACT_UNUSED
# 185 "data/maps/UnionRoom/scripts.pory"
# 116 "data/maps/UnionRoom/scripts.pory"
# 186 "data/maps/UnionRoom/scripts.pory"
	waitstate
# 187 "data/maps/UnionRoom/scripts.pory"
# 117 "data/maps/UnionRoom/scripts.pory"
# 188 "data/maps/UnionRoom/scripts.pory"
	releaseall
# 189 "data/maps/UnionRoom/scripts.pory"
	end
