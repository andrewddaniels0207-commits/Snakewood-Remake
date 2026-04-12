# 1 "data/maps/Route109/scripts.pory"

# 2 "data/maps/Route109/scripts.pory"
Route109_MapScripts::
# 3 "data/maps/Route109/scripts.pory"
	.byte 0
# 4 "data/maps/Route109/scripts.pory"

# 5 "data/maps/Route109/scripts.pory"

# 6 "data/maps/Route109/scripts.pory"
Route109_EventScript_StartDepartForDewford::
# 7 "data/maps/Route109/scripts.pory"
# 4 "data/maps/Route109/scripts.pory"
# 8 "data/maps/Route109/scripts.pory"
	call EventScript_BackupMrBrineyLocation
# 9 "data/maps/Route109/scripts.pory"
# 5 "data/maps/Route109/scripts.pory"
# 10 "data/maps/Route109/scripts.pory"
	setobjectsubpriority LOCALID_ROUTE109_BRINEY, MAP_ROUTE109, 0
# 11 "data/maps/Route109/scripts.pory"
# 6 "data/maps/Route109/scripts.pory"
# 12 "data/maps/Route109/scripts.pory"
	setobjectsubpriority LOCALID_PLAYER, MAP_ROUTE109, 0
# 13 "data/maps/Route109/scripts.pory"
# 7 "data/maps/Route109/scripts.pory"
# 14 "data/maps/Route109/scripts.pory"
	applymovement LOCALID_ROUTE109_BRINEY, Route109_Movement_BrineyEnterBoat
# 15 "data/maps/Route109/scripts.pory"
# 8 "data/maps/Route109/scripts.pory"
# 16 "data/maps/Route109/scripts.pory"
	waitmovement 0
# 17 "data/maps/Route109/scripts.pory"
# 9 "data/maps/Route109/scripts.pory"
# 18 "data/maps/Route109/scripts.pory"
	removeobject LOCALID_ROUTE109_BRINEY
# 19 "data/maps/Route109/scripts.pory"
# 10 "data/maps/Route109/scripts.pory"
# 20 "data/maps/Route109/scripts.pory"
	switch VAR_FACING
# 21 "data/maps/Route109/scripts.pory"
# 11 "data/maps/Route109/scripts.pory"
# 22 "data/maps/Route109/scripts.pory"
	case DIR_SOUTH, Route109_EventScript_StartDepartForDewford_3
# 23 "data/maps/Route109/scripts.pory"
# 13 "data/maps/Route109/scripts.pory"
# 24 "data/maps/Route109/scripts.pory"
	case DIR_WEST, Route109_EventScript_StartDepartForDewford_4
# 25 "data/maps/Route109/scripts.pory"
# 15 "data/maps/Route109/scripts.pory"
# 26 "data/maps/Route109/scripts.pory"
	case DIR_EAST, Route109_EventScript_StartDepartForDewford_5
# 27 "data/maps/Route109/scripts.pory"
Route109_EventScript_StartDepartForDewford_1:
# 28 "data/maps/Route109/scripts.pory"
	end
# 29 "data/maps/Route109/scripts.pory"

# 30 "data/maps/Route109/scripts.pory"
Route109_EventScript_StartDepartForDewford_3:
# 31 "data/maps/Route109/scripts.pory"
# 12 "data/maps/Route109/scripts.pory"
# 32 "data/maps/Route109/scripts.pory"
	goto Route109_EventScript_EnterBoatSouth
# 33 "data/maps/Route109/scripts.pory"
	goto Route109_EventScript_StartDepartForDewford_1
# 34 "data/maps/Route109/scripts.pory"

# 35 "data/maps/Route109/scripts.pory"
Route109_EventScript_StartDepartForDewford_4:
# 36 "data/maps/Route109/scripts.pory"
# 14 "data/maps/Route109/scripts.pory"
# 37 "data/maps/Route109/scripts.pory"
	goto Route109_EventScript_EnterBoatWest
# 38 "data/maps/Route109/scripts.pory"
	goto Route109_EventScript_StartDepartForDewford_1
# 39 "data/maps/Route109/scripts.pory"

# 40 "data/maps/Route109/scripts.pory"
Route109_EventScript_StartDepartForDewford_5:
# 41 "data/maps/Route109/scripts.pory"
# 16 "data/maps/Route109/scripts.pory"
# 42 "data/maps/Route109/scripts.pory"
	goto Route109_EventScript_EnterBoatEast
# 43 "data/maps/Route109/scripts.pory"
	goto Route109_EventScript_StartDepartForDewford_1
# 44 "data/maps/Route109/scripts.pory"

# 45 "data/maps/Route109/scripts.pory"

# 46 "data/maps/Route109/scripts.pory"
Route109_EventScript_EnterBoatSouth::
# 47 "data/maps/Route109/scripts.pory"
# 22 "data/maps/Route109/scripts.pory"
# 48 "data/maps/Route109/scripts.pory"
	applymovement LOCALID_PLAYER, Route109_Movement_PlayerEnterBoatSouth
# 49 "data/maps/Route109/scripts.pory"
# 23 "data/maps/Route109/scripts.pory"
# 50 "data/maps/Route109/scripts.pory"
	waitmovement 0
# 51 "data/maps/Route109/scripts.pory"
# 24 "data/maps/Route109/scripts.pory"
# 52 "data/maps/Route109/scripts.pory"
	goto Route109_EventScript_DoSailToDewford
# 53 "data/maps/Route109/scripts.pory"
	end
# 54 "data/maps/Route109/scripts.pory"

# 55 "data/maps/Route109/scripts.pory"

# 56 "data/maps/Route109/scripts.pory"
Route109_EventScript_EnterBoatEast::
# 57 "data/maps/Route109/scripts.pory"
# 29 "data/maps/Route109/scripts.pory"
# 58 "data/maps/Route109/scripts.pory"
	applymovement LOCALID_PLAYER, Route109_Movement_PlayerEnterBoatEast
# 59 "data/maps/Route109/scripts.pory"
# 30 "data/maps/Route109/scripts.pory"
# 60 "data/maps/Route109/scripts.pory"
	waitmovement 0
# 61 "data/maps/Route109/scripts.pory"
# 31 "data/maps/Route109/scripts.pory"
# 62 "data/maps/Route109/scripts.pory"
	goto Route109_EventScript_DoSailToDewford
# 63 "data/maps/Route109/scripts.pory"
	end
# 64 "data/maps/Route109/scripts.pory"

# 65 "data/maps/Route109/scripts.pory"

# 66 "data/maps/Route109/scripts.pory"
Route109_EventScript_EnterBoatWest::
# 67 "data/maps/Route109/scripts.pory"
# 36 "data/maps/Route109/scripts.pory"
# 68 "data/maps/Route109/scripts.pory"
	applymovement LOCALID_PLAYER, Route109_Movement_PlayerEnterBoatWest
# 69 "data/maps/Route109/scripts.pory"
# 37 "data/maps/Route109/scripts.pory"
# 70 "data/maps/Route109/scripts.pory"
	waitmovement 0
# 71 "data/maps/Route109/scripts.pory"
# 38 "data/maps/Route109/scripts.pory"
# 72 "data/maps/Route109/scripts.pory"
	goto Route109_EventScript_DoSailToDewford
# 73 "data/maps/Route109/scripts.pory"
	end
# 74 "data/maps/Route109/scripts.pory"

# 75 "data/maps/Route109/scripts.pory"

# 76 "data/maps/Route109/scripts.pory"
Route109_EventScript_DoSailToDewford::
# 77 "data/maps/Route109/scripts.pory"
# 43 "data/maps/Route109/scripts.pory"
# 78 "data/maps/Route109/scripts.pory"
	hideobjectat LOCALID_PLAYER, MAP_ROUTE109
# 79 "data/maps/Route109/scripts.pory"
# 44 "data/maps/Route109/scripts.pory"
# 80 "data/maps/Route109/scripts.pory"
	call Common_EventScript_PlayBrineysBoatMusic
# 81 "data/maps/Route109/scripts.pory"
# 45 "data/maps/Route109/scripts.pory"
# 82 "data/maps/Route109/scripts.pory"
	applymovement LOCALID_ROUTE109_BOAT, Route109_Movement_SailToDewford
# 83 "data/maps/Route109/scripts.pory"
# 46 "data/maps/Route109/scripts.pory"
# 84 "data/maps/Route109/scripts.pory"
	applymovement LOCALID_PLAYER, Route109_Movement_SailToDewford
# 85 "data/maps/Route109/scripts.pory"
# 47 "data/maps/Route109/scripts.pory"
# 86 "data/maps/Route109/scripts.pory"
	waitmovement 0
# 87 "data/maps/Route109/scripts.pory"
# 48 "data/maps/Route109/scripts.pory"
# 88 "data/maps/Route109/scripts.pory"
	delay 50
# 89 "data/maps/Route109/scripts.pory"
# 49 "data/maps/Route109/scripts.pory"
# 90 "data/maps/Route109/scripts.pory"
	call Common_EventScript_StopBrineysBoatMusic
# 91 "data/maps/Route109/scripts.pory"
# 50 "data/maps/Route109/scripts.pory"
# 92 "data/maps/Route109/scripts.pory"
	showobjectat LOCALID_PLAYER, MAP_DEWFORD_TOWN
# 93 "data/maps/Route109/scripts.pory"
# 51 "data/maps/Route109/scripts.pory"
# 94 "data/maps/Route109/scripts.pory"
	applymovement LOCALID_PLAYER, Route109_Movement_PlayerExitBoat
# 95 "data/maps/Route109/scripts.pory"
# 52 "data/maps/Route109/scripts.pory"
# 96 "data/maps/Route109/scripts.pory"
	waitmovement 0
# 97 "data/maps/Route109/scripts.pory"
# 53 "data/maps/Route109/scripts.pory"
# 98 "data/maps/Route109/scripts.pory"
	addobject LOCALID_DEWFORD_BOAT
# 99 "data/maps/Route109/scripts.pory"
# 54 "data/maps/Route109/scripts.pory"
# 100 "data/maps/Route109/scripts.pory"
	clearflag FLAG_HIDE_MR_BRINEY_BOAT_DEWFORD_TOWN
# 101 "data/maps/Route109/scripts.pory"
# 55 "data/maps/Route109/scripts.pory"
# 102 "data/maps/Route109/scripts.pory"
	setobjectxyperm LOCALID_DEWFORD_BRINEY, 12, 8
# 103 "data/maps/Route109/scripts.pory"
# 56 "data/maps/Route109/scripts.pory"
# 104 "data/maps/Route109/scripts.pory"
	addobject LOCALID_DEWFORD_BRINEY
# 105 "data/maps/Route109/scripts.pory"
# 57 "data/maps/Route109/scripts.pory"
# 106 "data/maps/Route109/scripts.pory"
	setobjectsubpriority LOCALID_DEWFORD_BRINEY, MAP_DEWFORD_TOWN, 0
# 107 "data/maps/Route109/scripts.pory"
# 58 "data/maps/Route109/scripts.pory"
# 108 "data/maps/Route109/scripts.pory"
	applymovement LOCALID_DEWFORD_BRINEY, Route109_Movement_BrineyExitBoat
# 109 "data/maps/Route109/scripts.pory"
# 59 "data/maps/Route109/scripts.pory"
# 110 "data/maps/Route109/scripts.pory"
	waitmovement 0
# 111 "data/maps/Route109/scripts.pory"
# 60 "data/maps/Route109/scripts.pory"
# 112 "data/maps/Route109/scripts.pory"
	clearflag FLAG_HIDE_MR_BRINEY_DEWFORD_TOWN
# 113 "data/maps/Route109/scripts.pory"
# 61 "data/maps/Route109/scripts.pory"
# 114 "data/maps/Route109/scripts.pory"
	setflag FLAG_HIDE_ROUTE_109_MR_BRINEY_BOAT
# 115 "data/maps/Route109/scripts.pory"
# 62 "data/maps/Route109/scripts.pory"
# 116 "data/maps/Route109/scripts.pory"
	hideobjectat LOCALID_ROUTE109_BOAT, MAP_ROUTE109
# 117 "data/maps/Route109/scripts.pory"
# 63 "data/maps/Route109/scripts.pory"
# 118 "data/maps/Route109/scripts.pory"
	msgbox DewfordTown_Text_BrineyLandedInDewford, MSGBOX_DEFAULT
# 119 "data/maps/Route109/scripts.pory"
# 64 "data/maps/Route109/scripts.pory"
# 120 "data/maps/Route109/scripts.pory"
	closemessage
# 121 "data/maps/Route109/scripts.pory"
# 65 "data/maps/Route109/scripts.pory"
# 122 "data/maps/Route109/scripts.pory"
	copyvar VAR_BRINEY_LOCATION, VAR_0x8008
# 123 "data/maps/Route109/scripts.pory"
# 66 "data/maps/Route109/scripts.pory"
# 124 "data/maps/Route109/scripts.pory"
	resetobjectsubpriority LOCALID_PLAYER, MAP_ROUTE109
# 125 "data/maps/Route109/scripts.pory"
# 67 "data/maps/Route109/scripts.pory"
# 126 "data/maps/Route109/scripts.pory"
	resetobjectsubpriority LOCALID_DEWFORD_BRINEY, MAP_DEWFORD_TOWN
# 127 "data/maps/Route109/scripts.pory"
# 68 "data/maps/Route109/scripts.pory"
# 128 "data/maps/Route109/scripts.pory"
	copyobjectxytoperm LOCALID_DEWFORD_BRINEY
# 129 "data/maps/Route109/scripts.pory"
# 69 "data/maps/Route109/scripts.pory"
# 130 "data/maps/Route109/scripts.pory"
	release
# 131 "data/maps/Route109/scripts.pory"
	end
# 132 "data/maps/Route109/scripts.pory"

# 133 "data/maps/Route109/scripts.pory"

# 134 "data/maps/Route109/scripts.pory"
# 73 "data/maps/Route109/scripts.pory"
# 135 "data/maps/Route109/scripts.pory"
Route109_Movement_SailToDewford:
# 136 "data/maps/Route109/scripts.pory"
# 74 "data/maps/Route109/scripts.pory"
# 137 "data/maps/Route109/scripts.pory"
	walk_in_place_faster_down
# 138 "data/maps/Route109/scripts.pory"
# 75 "data/maps/Route109/scripts.pory"
# 139 "data/maps/Route109/scripts.pory"
	walk_down
# 140 "data/maps/Route109/scripts.pory"
# 76 "data/maps/Route109/scripts.pory"
# 141 "data/maps/Route109/scripts.pory"
	walk_down
# 142 "data/maps/Route109/scripts.pory"
# 77 "data/maps/Route109/scripts.pory"
# 143 "data/maps/Route109/scripts.pory"
	walk_fast_down
# 144 "data/maps/Route109/scripts.pory"
# 78 "data/maps/Route109/scripts.pory"
# 145 "data/maps/Route109/scripts.pory"
	walk_fast_down
# 146 "data/maps/Route109/scripts.pory"
# 79 "data/maps/Route109/scripts.pory"
# 147 "data/maps/Route109/scripts.pory"
	walk_faster_down
# 148 "data/maps/Route109/scripts.pory"
# 80 "data/maps/Route109/scripts.pory"
# 149 "data/maps/Route109/scripts.pory"
	walk_faster_down
# 150 "data/maps/Route109/scripts.pory"
# 81 "data/maps/Route109/scripts.pory"
# 151 "data/maps/Route109/scripts.pory"
	walk_faster_down
# 152 "data/maps/Route109/scripts.pory"
# 82 "data/maps/Route109/scripts.pory"
# 153 "data/maps/Route109/scripts.pory"
	walk_faster_down
# 154 "data/maps/Route109/scripts.pory"
# 83 "data/maps/Route109/scripts.pory"
# 155 "data/maps/Route109/scripts.pory"
	walk_faster_down
# 156 "data/maps/Route109/scripts.pory"
# 84 "data/maps/Route109/scripts.pory"
# 157 "data/maps/Route109/scripts.pory"
	walk_faster_down
# 158 "data/maps/Route109/scripts.pory"
# 85 "data/maps/Route109/scripts.pory"
# 159 "data/maps/Route109/scripts.pory"
	walk_faster_down
# 160 "data/maps/Route109/scripts.pory"
# 86 "data/maps/Route109/scripts.pory"
# 161 "data/maps/Route109/scripts.pory"
	walk_faster_down
# 162 "data/maps/Route109/scripts.pory"
# 87 "data/maps/Route109/scripts.pory"
# 163 "data/maps/Route109/scripts.pory"
	walk_faster_down
# 164 "data/maps/Route109/scripts.pory"
# 88 "data/maps/Route109/scripts.pory"
# 165 "data/maps/Route109/scripts.pory"
	walk_faster_down
# 166 "data/maps/Route109/scripts.pory"
# 89 "data/maps/Route109/scripts.pory"
# 167 "data/maps/Route109/scripts.pory"
	walk_faster_down
# 168 "data/maps/Route109/scripts.pory"
# 90 "data/maps/Route109/scripts.pory"
# 169 "data/maps/Route109/scripts.pory"
	walk_faster_down
# 170 "data/maps/Route109/scripts.pory"
# 91 "data/maps/Route109/scripts.pory"
# 171 "data/maps/Route109/scripts.pory"
	walk_faster_down
# 172 "data/maps/Route109/scripts.pory"
# 92 "data/maps/Route109/scripts.pory"
# 173 "data/maps/Route109/scripts.pory"
	walk_faster_down
# 174 "data/maps/Route109/scripts.pory"
# 93 "data/maps/Route109/scripts.pory"
# 175 "data/maps/Route109/scripts.pory"
	walk_faster_down
# 176 "data/maps/Route109/scripts.pory"
# 94 "data/maps/Route109/scripts.pory"
# 177 "data/maps/Route109/scripts.pory"
	walk_faster_down
# 178 "data/maps/Route109/scripts.pory"
# 95 "data/maps/Route109/scripts.pory"
# 179 "data/maps/Route109/scripts.pory"
	walk_fast_down
# 180 "data/maps/Route109/scripts.pory"
# 96 "data/maps/Route109/scripts.pory"
# 181 "data/maps/Route109/scripts.pory"
	walk_fast_down
# 182 "data/maps/Route109/scripts.pory"
# 97 "data/maps/Route109/scripts.pory"
# 183 "data/maps/Route109/scripts.pory"
	walk_fast_left
# 184 "data/maps/Route109/scripts.pory"
# 98 "data/maps/Route109/scripts.pory"
# 185 "data/maps/Route109/scripts.pory"
	walk_fast_left
# 186 "data/maps/Route109/scripts.pory"
# 99 "data/maps/Route109/scripts.pory"
# 187 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 188 "data/maps/Route109/scripts.pory"
# 100 "data/maps/Route109/scripts.pory"
# 189 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 190 "data/maps/Route109/scripts.pory"
# 101 "data/maps/Route109/scripts.pory"
# 191 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 192 "data/maps/Route109/scripts.pory"
# 102 "data/maps/Route109/scripts.pory"
# 193 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 194 "data/maps/Route109/scripts.pory"
# 103 "data/maps/Route109/scripts.pory"
# 195 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 196 "data/maps/Route109/scripts.pory"
# 104 "data/maps/Route109/scripts.pory"
# 197 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 198 "data/maps/Route109/scripts.pory"
# 105 "data/maps/Route109/scripts.pory"
# 199 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 200 "data/maps/Route109/scripts.pory"
# 106 "data/maps/Route109/scripts.pory"
# 201 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 202 "data/maps/Route109/scripts.pory"
# 107 "data/maps/Route109/scripts.pory"
# 203 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 204 "data/maps/Route109/scripts.pory"
# 108 "data/maps/Route109/scripts.pory"
# 205 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 206 "data/maps/Route109/scripts.pory"
# 109 "data/maps/Route109/scripts.pory"
# 207 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 208 "data/maps/Route109/scripts.pory"
# 110 "data/maps/Route109/scripts.pory"
# 209 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 210 "data/maps/Route109/scripts.pory"
# 111 "data/maps/Route109/scripts.pory"
# 211 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 212 "data/maps/Route109/scripts.pory"
# 112 "data/maps/Route109/scripts.pory"
# 213 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 214 "data/maps/Route109/scripts.pory"
# 113 "data/maps/Route109/scripts.pory"
# 215 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 216 "data/maps/Route109/scripts.pory"
# 114 "data/maps/Route109/scripts.pory"
# 217 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 218 "data/maps/Route109/scripts.pory"
# 115 "data/maps/Route109/scripts.pory"
# 219 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 220 "data/maps/Route109/scripts.pory"
# 116 "data/maps/Route109/scripts.pory"
# 221 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 222 "data/maps/Route109/scripts.pory"
# 117 "data/maps/Route109/scripts.pory"
# 223 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 224 "data/maps/Route109/scripts.pory"
# 118 "data/maps/Route109/scripts.pory"
# 225 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 226 "data/maps/Route109/scripts.pory"
# 119 "data/maps/Route109/scripts.pory"
# 227 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 228 "data/maps/Route109/scripts.pory"
# 120 "data/maps/Route109/scripts.pory"
# 229 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 230 "data/maps/Route109/scripts.pory"
# 121 "data/maps/Route109/scripts.pory"
# 231 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 232 "data/maps/Route109/scripts.pory"
# 122 "data/maps/Route109/scripts.pory"
# 233 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 234 "data/maps/Route109/scripts.pory"
# 123 "data/maps/Route109/scripts.pory"
# 235 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 236 "data/maps/Route109/scripts.pory"
# 124 "data/maps/Route109/scripts.pory"
# 237 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 238 "data/maps/Route109/scripts.pory"
# 125 "data/maps/Route109/scripts.pory"
# 239 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 240 "data/maps/Route109/scripts.pory"
# 126 "data/maps/Route109/scripts.pory"
# 241 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 242 "data/maps/Route109/scripts.pory"
# 127 "data/maps/Route109/scripts.pory"
# 243 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 244 "data/maps/Route109/scripts.pory"
# 128 "data/maps/Route109/scripts.pory"
# 245 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 246 "data/maps/Route109/scripts.pory"
# 129 "data/maps/Route109/scripts.pory"
# 247 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 248 "data/maps/Route109/scripts.pory"
# 130 "data/maps/Route109/scripts.pory"
# 249 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 250 "data/maps/Route109/scripts.pory"
# 131 "data/maps/Route109/scripts.pory"
# 251 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 252 "data/maps/Route109/scripts.pory"
# 132 "data/maps/Route109/scripts.pory"
# 253 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 254 "data/maps/Route109/scripts.pory"
# 133 "data/maps/Route109/scripts.pory"
# 255 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 256 "data/maps/Route109/scripts.pory"
# 134 "data/maps/Route109/scripts.pory"
# 257 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 258 "data/maps/Route109/scripts.pory"
# 135 "data/maps/Route109/scripts.pory"
# 259 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 260 "data/maps/Route109/scripts.pory"
# 136 "data/maps/Route109/scripts.pory"
# 261 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 262 "data/maps/Route109/scripts.pory"
# 137 "data/maps/Route109/scripts.pory"
# 263 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 264 "data/maps/Route109/scripts.pory"
# 138 "data/maps/Route109/scripts.pory"
# 265 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 266 "data/maps/Route109/scripts.pory"
# 139 "data/maps/Route109/scripts.pory"
# 267 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 268 "data/maps/Route109/scripts.pory"
# 140 "data/maps/Route109/scripts.pory"
# 269 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 270 "data/maps/Route109/scripts.pory"
# 141 "data/maps/Route109/scripts.pory"
# 271 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 272 "data/maps/Route109/scripts.pory"
# 142 "data/maps/Route109/scripts.pory"
# 273 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 274 "data/maps/Route109/scripts.pory"
# 143 "data/maps/Route109/scripts.pory"
# 275 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 276 "data/maps/Route109/scripts.pory"
# 144 "data/maps/Route109/scripts.pory"
# 277 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 278 "data/maps/Route109/scripts.pory"
# 145 "data/maps/Route109/scripts.pory"
# 279 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 280 "data/maps/Route109/scripts.pory"
# 146 "data/maps/Route109/scripts.pory"
# 281 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 282 "data/maps/Route109/scripts.pory"
# 147 "data/maps/Route109/scripts.pory"
# 283 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 284 "data/maps/Route109/scripts.pory"
# 148 "data/maps/Route109/scripts.pory"
# 285 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 286 "data/maps/Route109/scripts.pory"
# 149 "data/maps/Route109/scripts.pory"
# 287 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 288 "data/maps/Route109/scripts.pory"
# 150 "data/maps/Route109/scripts.pory"
# 289 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 290 "data/maps/Route109/scripts.pory"
# 151 "data/maps/Route109/scripts.pory"
# 291 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 292 "data/maps/Route109/scripts.pory"
# 152 "data/maps/Route109/scripts.pory"
# 293 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 294 "data/maps/Route109/scripts.pory"
# 153 "data/maps/Route109/scripts.pory"
# 295 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 296 "data/maps/Route109/scripts.pory"
# 154 "data/maps/Route109/scripts.pory"
# 297 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 298 "data/maps/Route109/scripts.pory"
# 155 "data/maps/Route109/scripts.pory"
# 299 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 300 "data/maps/Route109/scripts.pory"
# 156 "data/maps/Route109/scripts.pory"
# 301 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 302 "data/maps/Route109/scripts.pory"
# 157 "data/maps/Route109/scripts.pory"
# 303 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 304 "data/maps/Route109/scripts.pory"
# 158 "data/maps/Route109/scripts.pory"
# 305 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 306 "data/maps/Route109/scripts.pory"
# 159 "data/maps/Route109/scripts.pory"
# 307 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 308 "data/maps/Route109/scripts.pory"
# 160 "data/maps/Route109/scripts.pory"
# 309 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 310 "data/maps/Route109/scripts.pory"
# 161 "data/maps/Route109/scripts.pory"
# 311 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 312 "data/maps/Route109/scripts.pory"
# 162 "data/maps/Route109/scripts.pory"
# 313 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 314 "data/maps/Route109/scripts.pory"
# 163 "data/maps/Route109/scripts.pory"
# 315 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 316 "data/maps/Route109/scripts.pory"
# 164 "data/maps/Route109/scripts.pory"
# 317 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 318 "data/maps/Route109/scripts.pory"
# 165 "data/maps/Route109/scripts.pory"
# 319 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 320 "data/maps/Route109/scripts.pory"
# 166 "data/maps/Route109/scripts.pory"
# 321 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 322 "data/maps/Route109/scripts.pory"
# 167 "data/maps/Route109/scripts.pory"
# 323 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 324 "data/maps/Route109/scripts.pory"
# 168 "data/maps/Route109/scripts.pory"
# 325 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 326 "data/maps/Route109/scripts.pory"
# 169 "data/maps/Route109/scripts.pory"
# 327 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 328 "data/maps/Route109/scripts.pory"
# 170 "data/maps/Route109/scripts.pory"
# 329 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 330 "data/maps/Route109/scripts.pory"
# 171 "data/maps/Route109/scripts.pory"
# 331 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 332 "data/maps/Route109/scripts.pory"
# 172 "data/maps/Route109/scripts.pory"
# 333 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 334 "data/maps/Route109/scripts.pory"
# 173 "data/maps/Route109/scripts.pory"
# 335 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 336 "data/maps/Route109/scripts.pory"
# 174 "data/maps/Route109/scripts.pory"
# 337 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 338 "data/maps/Route109/scripts.pory"
# 175 "data/maps/Route109/scripts.pory"
# 339 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 340 "data/maps/Route109/scripts.pory"
# 176 "data/maps/Route109/scripts.pory"
# 341 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 342 "data/maps/Route109/scripts.pory"
# 177 "data/maps/Route109/scripts.pory"
# 343 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 344 "data/maps/Route109/scripts.pory"
# 178 "data/maps/Route109/scripts.pory"
# 345 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 346 "data/maps/Route109/scripts.pory"
# 179 "data/maps/Route109/scripts.pory"
# 347 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 348 "data/maps/Route109/scripts.pory"
# 180 "data/maps/Route109/scripts.pory"
# 349 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 350 "data/maps/Route109/scripts.pory"
# 181 "data/maps/Route109/scripts.pory"
# 351 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 352 "data/maps/Route109/scripts.pory"
# 182 "data/maps/Route109/scripts.pory"
# 353 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 354 "data/maps/Route109/scripts.pory"
# 183 "data/maps/Route109/scripts.pory"
# 355 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 356 "data/maps/Route109/scripts.pory"
# 184 "data/maps/Route109/scripts.pory"
# 357 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 358 "data/maps/Route109/scripts.pory"
# 185 "data/maps/Route109/scripts.pory"
# 359 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 360 "data/maps/Route109/scripts.pory"
# 186 "data/maps/Route109/scripts.pory"
# 361 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 362 "data/maps/Route109/scripts.pory"
# 187 "data/maps/Route109/scripts.pory"
# 363 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 364 "data/maps/Route109/scripts.pory"
# 188 "data/maps/Route109/scripts.pory"
# 365 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 366 "data/maps/Route109/scripts.pory"
# 189 "data/maps/Route109/scripts.pory"
# 367 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 368 "data/maps/Route109/scripts.pory"
# 190 "data/maps/Route109/scripts.pory"
# 369 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 370 "data/maps/Route109/scripts.pory"
# 191 "data/maps/Route109/scripts.pory"
# 371 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 372 "data/maps/Route109/scripts.pory"
# 192 "data/maps/Route109/scripts.pory"
# 373 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 374 "data/maps/Route109/scripts.pory"
# 193 "data/maps/Route109/scripts.pory"
# 375 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 376 "data/maps/Route109/scripts.pory"
# 194 "data/maps/Route109/scripts.pory"
# 377 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 378 "data/maps/Route109/scripts.pory"
# 195 "data/maps/Route109/scripts.pory"
# 379 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 380 "data/maps/Route109/scripts.pory"
# 196 "data/maps/Route109/scripts.pory"
# 381 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 382 "data/maps/Route109/scripts.pory"
# 197 "data/maps/Route109/scripts.pory"
# 383 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 384 "data/maps/Route109/scripts.pory"
# 198 "data/maps/Route109/scripts.pory"
# 385 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 386 "data/maps/Route109/scripts.pory"
# 199 "data/maps/Route109/scripts.pory"
# 387 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 388 "data/maps/Route109/scripts.pory"
# 200 "data/maps/Route109/scripts.pory"
# 389 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 390 "data/maps/Route109/scripts.pory"
# 201 "data/maps/Route109/scripts.pory"
# 391 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 392 "data/maps/Route109/scripts.pory"
# 202 "data/maps/Route109/scripts.pory"
# 393 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 394 "data/maps/Route109/scripts.pory"
# 203 "data/maps/Route109/scripts.pory"
# 395 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 396 "data/maps/Route109/scripts.pory"
# 204 "data/maps/Route109/scripts.pory"
# 397 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 398 "data/maps/Route109/scripts.pory"
# 205 "data/maps/Route109/scripts.pory"
# 399 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 400 "data/maps/Route109/scripts.pory"
# 206 "data/maps/Route109/scripts.pory"
# 401 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 402 "data/maps/Route109/scripts.pory"
# 207 "data/maps/Route109/scripts.pory"
# 403 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 404 "data/maps/Route109/scripts.pory"
# 208 "data/maps/Route109/scripts.pory"
# 405 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 406 "data/maps/Route109/scripts.pory"
# 209 "data/maps/Route109/scripts.pory"
# 407 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 408 "data/maps/Route109/scripts.pory"
# 210 "data/maps/Route109/scripts.pory"
# 409 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 410 "data/maps/Route109/scripts.pory"
# 211 "data/maps/Route109/scripts.pory"
# 411 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 412 "data/maps/Route109/scripts.pory"
# 212 "data/maps/Route109/scripts.pory"
# 413 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 414 "data/maps/Route109/scripts.pory"
# 213 "data/maps/Route109/scripts.pory"
# 415 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 416 "data/maps/Route109/scripts.pory"
# 214 "data/maps/Route109/scripts.pory"
# 417 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 418 "data/maps/Route109/scripts.pory"
# 215 "data/maps/Route109/scripts.pory"
# 419 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 420 "data/maps/Route109/scripts.pory"
# 216 "data/maps/Route109/scripts.pory"
# 421 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 422 "data/maps/Route109/scripts.pory"
# 217 "data/maps/Route109/scripts.pory"
# 423 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 424 "data/maps/Route109/scripts.pory"
# 218 "data/maps/Route109/scripts.pory"
# 425 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 426 "data/maps/Route109/scripts.pory"
# 219 "data/maps/Route109/scripts.pory"
# 427 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 428 "data/maps/Route109/scripts.pory"
# 220 "data/maps/Route109/scripts.pory"
# 429 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 430 "data/maps/Route109/scripts.pory"
# 221 "data/maps/Route109/scripts.pory"
# 431 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 432 "data/maps/Route109/scripts.pory"
# 222 "data/maps/Route109/scripts.pory"
# 433 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 434 "data/maps/Route109/scripts.pory"
# 223 "data/maps/Route109/scripts.pory"
# 435 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 436 "data/maps/Route109/scripts.pory"
# 224 "data/maps/Route109/scripts.pory"
# 437 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 438 "data/maps/Route109/scripts.pory"
# 225 "data/maps/Route109/scripts.pory"
# 439 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 440 "data/maps/Route109/scripts.pory"
# 226 "data/maps/Route109/scripts.pory"
# 441 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 442 "data/maps/Route109/scripts.pory"
# 227 "data/maps/Route109/scripts.pory"
# 443 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 444 "data/maps/Route109/scripts.pory"
# 228 "data/maps/Route109/scripts.pory"
# 445 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 446 "data/maps/Route109/scripts.pory"
# 229 "data/maps/Route109/scripts.pory"
# 447 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 448 "data/maps/Route109/scripts.pory"
# 230 "data/maps/Route109/scripts.pory"
# 449 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 450 "data/maps/Route109/scripts.pory"
# 231 "data/maps/Route109/scripts.pory"
# 451 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 452 "data/maps/Route109/scripts.pory"
# 232 "data/maps/Route109/scripts.pory"
# 453 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 454 "data/maps/Route109/scripts.pory"
# 233 "data/maps/Route109/scripts.pory"
# 455 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 456 "data/maps/Route109/scripts.pory"
# 234 "data/maps/Route109/scripts.pory"
# 457 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 458 "data/maps/Route109/scripts.pory"
# 235 "data/maps/Route109/scripts.pory"
# 459 "data/maps/Route109/scripts.pory"
	walk_fast_left
# 460 "data/maps/Route109/scripts.pory"
# 236 "data/maps/Route109/scripts.pory"
# 461 "data/maps/Route109/scripts.pory"
	walk_fast_left
# 462 "data/maps/Route109/scripts.pory"
# 237 "data/maps/Route109/scripts.pory"
# 463 "data/maps/Route109/scripts.pory"
	walk_fast_left
# 464 "data/maps/Route109/scripts.pory"
# 238 "data/maps/Route109/scripts.pory"
# 465 "data/maps/Route109/scripts.pory"
	walk_fast_left
# 466 "data/maps/Route109/scripts.pory"
# 239 "data/maps/Route109/scripts.pory"
# 467 "data/maps/Route109/scripts.pory"
	walk_fast_left
# 468 "data/maps/Route109/scripts.pory"
# 240 "data/maps/Route109/scripts.pory"
# 469 "data/maps/Route109/scripts.pory"
	walk_fast_left
# 470 "data/maps/Route109/scripts.pory"
# 241 "data/maps/Route109/scripts.pory"
# 471 "data/maps/Route109/scripts.pory"
	walk_fast_left
# 472 "data/maps/Route109/scripts.pory"
# 242 "data/maps/Route109/scripts.pory"
# 473 "data/maps/Route109/scripts.pory"
	walk_fast_left
# 474 "data/maps/Route109/scripts.pory"
# 243 "data/maps/Route109/scripts.pory"
# 475 "data/maps/Route109/scripts.pory"
	walk_fast_left
# 476 "data/maps/Route109/scripts.pory"
# 244 "data/maps/Route109/scripts.pory"
# 477 "data/maps/Route109/scripts.pory"
	walk_left
# 478 "data/maps/Route109/scripts.pory"
# 245 "data/maps/Route109/scripts.pory"
# 479 "data/maps/Route109/scripts.pory"
	walk_left
# 480 "data/maps/Route109/scripts.pory"
# 246 "data/maps/Route109/scripts.pory"
# 481 "data/maps/Route109/scripts.pory"
	walk_in_place_faster_down
# 482 "data/maps/Route109/scripts.pory"
# 247 "data/maps/Route109/scripts.pory"
# 483 "data/maps/Route109/scripts.pory"
	step_end
# 484 "data/maps/Route109/scripts.pory"

# 485 "data/maps/Route109/scripts.pory"
# 250 "data/maps/Route109/scripts.pory"
# 486 "data/maps/Route109/scripts.pory"
Route109_Movement_PlayerEnterBoatSouth:
# 487 "data/maps/Route109/scripts.pory"
# 251 "data/maps/Route109/scripts.pory"
# 488 "data/maps/Route109/scripts.pory"
	walk_down
# 489 "data/maps/Route109/scripts.pory"
# 252 "data/maps/Route109/scripts.pory"
# 490 "data/maps/Route109/scripts.pory"
	walk_down
# 491 "data/maps/Route109/scripts.pory"
# 253 "data/maps/Route109/scripts.pory"
# 492 "data/maps/Route109/scripts.pory"
	step_end
# 493 "data/maps/Route109/scripts.pory"

# 494 "data/maps/Route109/scripts.pory"
# 256 "data/maps/Route109/scripts.pory"
# 495 "data/maps/Route109/scripts.pory"
Route109_Movement_PlayerExitBoat:
# 496 "data/maps/Route109/scripts.pory"
# 257 "data/maps/Route109/scripts.pory"
# 497 "data/maps/Route109/scripts.pory"
	walk_down
# 498 "data/maps/Route109/scripts.pory"
# 258 "data/maps/Route109/scripts.pory"
# 499 "data/maps/Route109/scripts.pory"
	walk_down
# 500 "data/maps/Route109/scripts.pory"
# 259 "data/maps/Route109/scripts.pory"
# 501 "data/maps/Route109/scripts.pory"
	walk_left
# 502 "data/maps/Route109/scripts.pory"
# 260 "data/maps/Route109/scripts.pory"
# 503 "data/maps/Route109/scripts.pory"
	walk_in_place_faster_right
# 504 "data/maps/Route109/scripts.pory"
# 261 "data/maps/Route109/scripts.pory"
# 505 "data/maps/Route109/scripts.pory"
	step_end
# 506 "data/maps/Route109/scripts.pory"

# 507 "data/maps/Route109/scripts.pory"
# 264 "data/maps/Route109/scripts.pory"
# 508 "data/maps/Route109/scripts.pory"
Route109_Movement_PlayerEnterBoatEast:
# 509 "data/maps/Route109/scripts.pory"
# 265 "data/maps/Route109/scripts.pory"
# 510 "data/maps/Route109/scripts.pory"
	walk_right
# 511 "data/maps/Route109/scripts.pory"
# 266 "data/maps/Route109/scripts.pory"
# 512 "data/maps/Route109/scripts.pory"
	walk_down
# 513 "data/maps/Route109/scripts.pory"
# 267 "data/maps/Route109/scripts.pory"
# 514 "data/maps/Route109/scripts.pory"
	step_end
# 515 "data/maps/Route109/scripts.pory"

# 516 "data/maps/Route109/scripts.pory"
# 270 "data/maps/Route109/scripts.pory"
# 517 "data/maps/Route109/scripts.pory"
Route109_Movement_PlayerEnterBoatWest:
# 518 "data/maps/Route109/scripts.pory"
# 271 "data/maps/Route109/scripts.pory"
# 519 "data/maps/Route109/scripts.pory"
	walk_left
# 520 "data/maps/Route109/scripts.pory"
# 272 "data/maps/Route109/scripts.pory"
# 521 "data/maps/Route109/scripts.pory"
	walk_down
# 522 "data/maps/Route109/scripts.pory"
# 273 "data/maps/Route109/scripts.pory"
# 523 "data/maps/Route109/scripts.pory"
	step_end
# 524 "data/maps/Route109/scripts.pory"

# 525 "data/maps/Route109/scripts.pory"
# 276 "data/maps/Route109/scripts.pory"
# 526 "data/maps/Route109/scripts.pory"
Route109_Movement_BrineyEnterBoat:
# 527 "data/maps/Route109/scripts.pory"
# 277 "data/maps/Route109/scripts.pory"
# 528 "data/maps/Route109/scripts.pory"
	walk_down
# 529 "data/maps/Route109/scripts.pory"
# 278 "data/maps/Route109/scripts.pory"
# 530 "data/maps/Route109/scripts.pory"
	step_end
# 531 "data/maps/Route109/scripts.pory"

# 532 "data/maps/Route109/scripts.pory"
# 281 "data/maps/Route109/scripts.pory"
# 533 "data/maps/Route109/scripts.pory"
Route109_Movement_BrineyExitBoat:
# 534 "data/maps/Route109/scripts.pory"
# 282 "data/maps/Route109/scripts.pory"
# 535 "data/maps/Route109/scripts.pory"
	walk_down
# 536 "data/maps/Route109/scripts.pory"
# 283 "data/maps/Route109/scripts.pory"
# 537 "data/maps/Route109/scripts.pory"
	walk_in_place_faster_left
# 538 "data/maps/Route109/scripts.pory"
# 284 "data/maps/Route109/scripts.pory"
# 539 "data/maps/Route109/scripts.pory"
	step_end
# 540 "data/maps/Route109/scripts.pory"

# 541 "data/maps/Route109/scripts.pory"
Route109_EventScript_MrBriney::
# 542 "data/maps/Route109/scripts.pory"
# 288 "data/maps/Route109/scripts.pory"
# 543 "data/maps/Route109/scripts.pory"
	lock
# 544 "data/maps/Route109/scripts.pory"
# 289 "data/maps/Route109/scripts.pory"
# 545 "data/maps/Route109/scripts.pory"
	faceplayer
# 546 "data/maps/Route109/scripts.pory"
# 290 "data/maps/Route109/scripts.pory"
# 547 "data/maps/Route109/scripts.pory"
	goto_if_unset FLAG_DELIVERED_DEVON_GOODS, Route109_EventScript_MrBriney_2
# 548 "data/maps/Route109/scripts.pory"
Route109_EventScript_MrBriney_1:
# 549 "data/maps/Route109/scripts.pory"
# 293 "data/maps/Route109/scripts.pory"
# 550 "data/maps/Route109/scripts.pory"
	goto Route109_EventScript_DeliveredDevonGoods
# 551 "data/maps/Route109/scripts.pory"
	end
# 552 "data/maps/Route109/scripts.pory"

# 553 "data/maps/Route109/scripts.pory"
Route109_EventScript_MrBriney_2:
# 554 "data/maps/Route109/scripts.pory"
# 291 "data/maps/Route109/scripts.pory"
# 555 "data/maps/Route109/scripts.pory"
	goto Route109_EventScript_HaveNotDeliveredDevonGood
# 556 "data/maps/Route109/scripts.pory"
	goto Route109_EventScript_MrBriney_1
# 557 "data/maps/Route109/scripts.pory"

# 558 "data/maps/Route109/scripts.pory"

# 559 "data/maps/Route109/scripts.pory"
Route109_EventScript_HaveNotDeliveredDevonGood::
# 560 "data/maps/Route109/scripts.pory"
# 298 "data/maps/Route109/scripts.pory"
# 561 "data/maps/Route109/scripts.pory"
	message Route109_Text_BrineySailToDewfordQuestion
# 562 "data/maps/Route109/scripts.pory"
# 299 "data/maps/Route109/scripts.pory"
# 563 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_BrineySailToDewfordQuestion, MSGBOX_YESNO
# 564 "data/maps/Route109/scripts.pory"
# 300 "data/maps/Route109/scripts.pory"
# 565 "data/maps/Route109/scripts.pory"
	compare VAR_RESULT, NO
# 566 "data/maps/Route109/scripts.pory"
	goto_if_eq Route109_EventScript_HaveNotDeliveredDevonGood_2
# 567 "data/maps/Route109/scripts.pory"
Route109_EventScript_HaveNotDeliveredDevonGood_1:
# 568 "data/maps/Route109/scripts.pory"
# 303 "data/maps/Route109/scripts.pory"
# 569 "data/maps/Route109/scripts.pory"
	goto Route109_EventScript_SailToDewford
# 570 "data/maps/Route109/scripts.pory"
	end
# 571 "data/maps/Route109/scripts.pory"

# 572 "data/maps/Route109/scripts.pory"
Route109_EventScript_HaveNotDeliveredDevonGood_2:
# 573 "data/maps/Route109/scripts.pory"
# 301 "data/maps/Route109/scripts.pory"
# 574 "data/maps/Route109/scripts.pory"
	goto Route109_EventScript_StayHere
# 575 "data/maps/Route109/scripts.pory"
	goto Route109_EventScript_HaveNotDeliveredDevonGood_1
# 576 "data/maps/Route109/scripts.pory"

# 577 "data/maps/Route109/scripts.pory"

# 578 "data/maps/Route109/scripts.pory"
Route109_EventScript_DeliveredDevonGoods::
# 579 "data/maps/Route109/scripts.pory"
# 308 "data/maps/Route109/scripts.pory"
# 580 "data/maps/Route109/scripts.pory"
	message Route109_Text_BrineyWhereAreWeBound
# 581 "data/maps/Route109/scripts.pory"
# 309 "data/maps/Route109/scripts.pory"
# 582 "data/maps/Route109/scripts.pory"
	waitmessage
# 583 "data/maps/Route109/scripts.pory"
# 310 "data/maps/Route109/scripts.pory"
# 584 "data/maps/Route109/scripts.pory"
	multichoicedefault 21, 8, MULTI_BRINEY_OFF_DEWFORD, 1, FALSE
# 585 "data/maps/Route109/scripts.pory"
# 311 "data/maps/Route109/scripts.pory"
# 586 "data/maps/Route109/scripts.pory"
	switch VAR_RESULT
# 587 "data/maps/Route109/scripts.pory"
# 312 "data/maps/Route109/scripts.pory"
# 588 "data/maps/Route109/scripts.pory"
	case 0, Route109_EventScript_DeliveredDevonGoods_3
# 589 "data/maps/Route109/scripts.pory"
# 314 "data/maps/Route109/scripts.pory"
# 590 "data/maps/Route109/scripts.pory"
	case 1, Route109_EventScript_DeliveredDevonGoods_4
# 591 "data/maps/Route109/scripts.pory"
# 316 "data/maps/Route109/scripts.pory"
# 592 "data/maps/Route109/scripts.pory"
	case MULTI_B_PRESSED, Route109_EventScript_DeliveredDevonGoods_5
# 593 "data/maps/Route109/scripts.pory"
Route109_EventScript_DeliveredDevonGoods_1:
# 594 "data/maps/Route109/scripts.pory"
	end
# 595 "data/maps/Route109/scripts.pory"

# 596 "data/maps/Route109/scripts.pory"
Route109_EventScript_DeliveredDevonGoods_3:
# 597 "data/maps/Route109/scripts.pory"
# 313 "data/maps/Route109/scripts.pory"
# 598 "data/maps/Route109/scripts.pory"
	goto Route109_EventScript_SailToDewford
# 599 "data/maps/Route109/scripts.pory"
	goto Route109_EventScript_DeliveredDevonGoods_1
# 600 "data/maps/Route109/scripts.pory"

# 601 "data/maps/Route109/scripts.pory"
Route109_EventScript_DeliveredDevonGoods_4:
# 602 "data/maps/Route109/scripts.pory"
# 315 "data/maps/Route109/scripts.pory"
# 603 "data/maps/Route109/scripts.pory"
	goto Route109_EventScript_ChoseNotToSail
# 604 "data/maps/Route109/scripts.pory"
	goto Route109_EventScript_DeliveredDevonGoods_1
# 605 "data/maps/Route109/scripts.pory"

# 606 "data/maps/Route109/scripts.pory"
Route109_EventScript_DeliveredDevonGoods_5:
# 607 "data/maps/Route109/scripts.pory"
# 317 "data/maps/Route109/scripts.pory"
# 608 "data/maps/Route109/scripts.pory"
	goto Route109_EventScript_ChoseNotToSail
# 609 "data/maps/Route109/scripts.pory"
	goto Route109_EventScript_DeliveredDevonGoods_1
# 610 "data/maps/Route109/scripts.pory"

# 611 "data/maps/Route109/scripts.pory"

# 612 "data/maps/Route109/scripts.pory"
Route109_EventScript_SailToDewford::
# 613 "data/maps/Route109/scripts.pory"
# 323 "data/maps/Route109/scripts.pory"
# 614 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_BrineyDewfordItIs, MSGBOX_DEFAULT
# 615 "data/maps/Route109/scripts.pory"
# 324 "data/maps/Route109/scripts.pory"
# 616 "data/maps/Route109/scripts.pory"
	closemessage
# 617 "data/maps/Route109/scripts.pory"
# 325 "data/maps/Route109/scripts.pory"
# 618 "data/maps/Route109/scripts.pory"
	goto Route109_EventScript_StartDepartForDewford
# 619 "data/maps/Route109/scripts.pory"
	end
# 620 "data/maps/Route109/scripts.pory"

# 621 "data/maps/Route109/scripts.pory"

# 622 "data/maps/Route109/scripts.pory"
Route109_EventScript_StayHere::
# 623 "data/maps/Route109/scripts.pory"
# 330 "data/maps/Route109/scripts.pory"
# 624 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_BrineyDeliverDevonGoods, MSGBOX_DEFAULT
# 625 "data/maps/Route109/scripts.pory"
# 331 "data/maps/Route109/scripts.pory"
# 626 "data/maps/Route109/scripts.pory"
	release
# 627 "data/maps/Route109/scripts.pory"
	end
# 628 "data/maps/Route109/scripts.pory"

# 629 "data/maps/Route109/scripts.pory"

# 630 "data/maps/Route109/scripts.pory"
Route109_EventScript_ChoseNotToSail::
# 631 "data/maps/Route109/scripts.pory"
# 336 "data/maps/Route109/scripts.pory"
# 632 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_BrineyTellMeWhenYouNeedToSail, MSGBOX_DEFAULT
# 633 "data/maps/Route109/scripts.pory"
# 337 "data/maps/Route109/scripts.pory"
# 634 "data/maps/Route109/scripts.pory"
	release
# 635 "data/maps/Route109/scripts.pory"
	end
# 636 "data/maps/Route109/scripts.pory"

# 637 "data/maps/Route109/scripts.pory"

# 638 "data/maps/Route109/scripts.pory"
Route109_EventScript_SeashoreHouseGirl::
# 639 "data/maps/Route109/scripts.pory"
# 342 "data/maps/Route109/scripts.pory"
# 640 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_ChillAtMyPapasSpot, MSGBOX_NPC
# 641 "data/maps/Route109/scripts.pory"
	end
# 642 "data/maps/Route109/scripts.pory"

# 643 "data/maps/Route109/scripts.pory"

# 644 "data/maps/Route109/scripts.pory"
Route109_EventScript_SandCastleBoy::
# 645 "data/maps/Route109/scripts.pory"
# 347 "data/maps/Route109/scripts.pory"
# 646 "data/maps/Route109/scripts.pory"
	lock
# 647 "data/maps/Route109/scripts.pory"
# 348 "data/maps/Route109/scripts.pory"
# 648 "data/maps/Route109/scripts.pory"
	faceplayer
# 649 "data/maps/Route109/scripts.pory"
# 349 "data/maps/Route109/scripts.pory"
# 650 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_SandCastleTakingLongTime, MSGBOX_DEFAULT
# 651 "data/maps/Route109/scripts.pory"
# 350 "data/maps/Route109/scripts.pory"
# 652 "data/maps/Route109/scripts.pory"
	closemessage
# 653 "data/maps/Route109/scripts.pory"
# 351 "data/maps/Route109/scripts.pory"
# 654 "data/maps/Route109/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 655 "data/maps/Route109/scripts.pory"
# 352 "data/maps/Route109/scripts.pory"
# 656 "data/maps/Route109/scripts.pory"
	waitmovement 0
# 657 "data/maps/Route109/scripts.pory"
# 353 "data/maps/Route109/scripts.pory"
# 658 "data/maps/Route109/scripts.pory"
	release
# 659 "data/maps/Route109/scripts.pory"
	end
# 660 "data/maps/Route109/scripts.pory"

# 661 "data/maps/Route109/scripts.pory"

# 662 "data/maps/Route109/scripts.pory"
Route109_EventScript_SoftSandGirl::
# 663 "data/maps/Route109/scripts.pory"
# 358 "data/maps/Route109/scripts.pory"
# 664 "data/maps/Route109/scripts.pory"
	lock
# 665 "data/maps/Route109/scripts.pory"
# 359 "data/maps/Route109/scripts.pory"
# 666 "data/maps/Route109/scripts.pory"
	faceplayer
# 667 "data/maps/Route109/scripts.pory"
# 360 "data/maps/Route109/scripts.pory"
# 668 "data/maps/Route109/scripts.pory"
	special GetPlayerBigGuyGirlString
# 669 "data/maps/Route109/scripts.pory"
# 361 "data/maps/Route109/scripts.pory"
# 670 "data/maps/Route109/scripts.pory"
	goto_if_set FLAG_RECEIVED_SOFT_SAND, Route109_EventScript_SoftSandGirl_2
# 671 "data/maps/Route109/scripts.pory"
Route109_EventScript_SoftSandGirl_1:
# 672 "data/maps/Route109/scripts.pory"
# 364 "data/maps/Route109/scripts.pory"
# 673 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_YouCanHaveThis, MSGBOX_DEFAULT
# 674 "data/maps/Route109/scripts.pory"
# 365 "data/maps/Route109/scripts.pory"
# 675 "data/maps/Route109/scripts.pory"
	giveitem ITEM_SOFT_SAND
# 676 "data/maps/Route109/scripts.pory"
# 366 "data/maps/Route109/scripts.pory"
# 677 "data/maps/Route109/scripts.pory"
	compare VAR_RESULT, 0
# 678 "data/maps/Route109/scripts.pory"
	goto_if_eq Route109_EventScript_SoftSandGirl_5
# 679 "data/maps/Route109/scripts.pory"
Route109_EventScript_SoftSandGirl_4:
# 680 "data/maps/Route109/scripts.pory"
# 369 "data/maps/Route109/scripts.pory"
# 681 "data/maps/Route109/scripts.pory"
	closemessage
# 682 "data/maps/Route109/scripts.pory"
# 370 "data/maps/Route109/scripts.pory"
# 683 "data/maps/Route109/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 684 "data/maps/Route109/scripts.pory"
# 371 "data/maps/Route109/scripts.pory"
# 685 "data/maps/Route109/scripts.pory"
	waitmovement 0
# 686 "data/maps/Route109/scripts.pory"
# 372 "data/maps/Route109/scripts.pory"
# 687 "data/maps/Route109/scripts.pory"
	setflag FLAG_RECEIVED_SOFT_SAND
# 688 "data/maps/Route109/scripts.pory"
# 373 "data/maps/Route109/scripts.pory"
# 689 "data/maps/Route109/scripts.pory"
	release
# 690 "data/maps/Route109/scripts.pory"
	end
# 691 "data/maps/Route109/scripts.pory"

# 692 "data/maps/Route109/scripts.pory"
Route109_EventScript_SoftSandGirl_2:
# 693 "data/maps/Route109/scripts.pory"
# 362 "data/maps/Route109/scripts.pory"
# 694 "data/maps/Route109/scripts.pory"
	goto Route109_EventScript_AlreadyReceivedSoftSand
# 695 "data/maps/Route109/scripts.pory"
	goto Route109_EventScript_SoftSandGirl_1
# 696 "data/maps/Route109/scripts.pory"

# 697 "data/maps/Route109/scripts.pory"
Route109_EventScript_SoftSandGirl_5:
# 698 "data/maps/Route109/scripts.pory"
# 367 "data/maps/Route109/scripts.pory"
# 699 "data/maps/Route109/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
# 700 "data/maps/Route109/scripts.pory"
	goto Route109_EventScript_SoftSandGirl_4
# 701 "data/maps/Route109/scripts.pory"

# 702 "data/maps/Route109/scripts.pory"

# 703 "data/maps/Route109/scripts.pory"
Route109_EventScript_AlreadyReceivedSoftSand::
# 704 "data/maps/Route109/scripts.pory"
# 378 "data/maps/Route109/scripts.pory"
# 705 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_WereGoingToMakeBigCastle, MSGBOX_DEFAULT
# 706 "data/maps/Route109/scripts.pory"
# 379 "data/maps/Route109/scripts.pory"
# 707 "data/maps/Route109/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 708 "data/maps/Route109/scripts.pory"
# 380 "data/maps/Route109/scripts.pory"
# 709 "data/maps/Route109/scripts.pory"
	waitmovement 0
# 710 "data/maps/Route109/scripts.pory"
# 381 "data/maps/Route109/scripts.pory"
# 711 "data/maps/Route109/scripts.pory"
	release
# 712 "data/maps/Route109/scripts.pory"
	end
# 713 "data/maps/Route109/scripts.pory"

# 714 "data/maps/Route109/scripts.pory"

# 715 "data/maps/Route109/scripts.pory"
Route109_EventScript_Woman::
# 716 "data/maps/Route109/scripts.pory"
# 386 "data/maps/Route109/scripts.pory"
# 717 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_LittleKidsDartAround, MSGBOX_NPC
# 718 "data/maps/Route109/scripts.pory"
	end
# 719 "data/maps/Route109/scripts.pory"

# 720 "data/maps/Route109/scripts.pory"

# 721 "data/maps/Route109/scripts.pory"
Route109_EventScript_OldMan::
# 722 "data/maps/Route109/scripts.pory"
# 391 "data/maps/Route109/scripts.pory"
# 723 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_ZigzagoonPicksUpLitter, MSGBOX_NPC
# 724 "data/maps/Route109/scripts.pory"
	end
# 725 "data/maps/Route109/scripts.pory"

# 726 "data/maps/Route109/scripts.pory"

# 727 "data/maps/Route109/scripts.pory"
Route109_EventScript_Zigzagoon::
# 728 "data/maps/Route109/scripts.pory"
# 396 "data/maps/Route109/scripts.pory"
# 729 "data/maps/Route109/scripts.pory"
	lock
# 730 "data/maps/Route109/scripts.pory"
# 397 "data/maps/Route109/scripts.pory"
# 731 "data/maps/Route109/scripts.pory"
	faceplayer
# 732 "data/maps/Route109/scripts.pory"
# 398 "data/maps/Route109/scripts.pory"
# 733 "data/maps/Route109/scripts.pory"
	waitse
# 734 "data/maps/Route109/scripts.pory"
# 399 "data/maps/Route109/scripts.pory"
# 735 "data/maps/Route109/scripts.pory"
	playmoncry SPECIES_ZIGZAGOON, CRY_MODE_NORMAL
# 736 "data/maps/Route109/scripts.pory"
# 400 "data/maps/Route109/scripts.pory"
# 737 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_ZigzagoonCry, MSGBOX_DEFAULT
# 738 "data/maps/Route109/scripts.pory"
# 401 "data/maps/Route109/scripts.pory"
# 739 "data/maps/Route109/scripts.pory"
	waitmoncry
# 740 "data/maps/Route109/scripts.pory"
# 402 "data/maps/Route109/scripts.pory"
# 741 "data/maps/Route109/scripts.pory"
	release
# 742 "data/maps/Route109/scripts.pory"
	end
# 743 "data/maps/Route109/scripts.pory"

# 744 "data/maps/Route109/scripts.pory"

# 745 "data/maps/Route109/scripts.pory"
Route109_EventScript_SeashoreHouseSign::
# 746 "data/maps/Route109/scripts.pory"
# 407 "data/maps/Route109/scripts.pory"
# 747 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_SeashoreHouseSign, MSGBOX_SIGN
# 748 "data/maps/Route109/scripts.pory"
	end
# 749 "data/maps/Route109/scripts.pory"

# 750 "data/maps/Route109/scripts.pory"

# 751 "data/maps/Route109/scripts.pory"
Route109_EventScript_TrainerTipsSign::
# 752 "data/maps/Route109/scripts.pory"
# 412 "data/maps/Route109/scripts.pory"
# 753 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_TrainerTipsSign, MSGBOX_SIGN
# 754 "data/maps/Route109/scripts.pory"
	end
# 755 "data/maps/Route109/scripts.pory"

# 756 "data/maps/Route109/scripts.pory"

# 757 "data/maps/Route109/scripts.pory"
Route109_EventScript_David::
# 758 "data/maps/Route109/scripts.pory"
# 417 "data/maps/Route109/scripts.pory"
# 759 "data/maps/Route109/scripts.pory"
	trainerbattle_single TRAINER_DAVID, Route109_Text_DavidIntro, Route109_Text_DavidDefeated
# 760 "data/maps/Route109/scripts.pory"
# 418 "data/maps/Route109/scripts.pory"
# 761 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_DavidPostBattle, MSGBOX_AUTOCLOSE
# 762 "data/maps/Route109/scripts.pory"
	end
# 763 "data/maps/Route109/scripts.pory"

# 764 "data/maps/Route109/scripts.pory"

# 765 "data/maps/Route109/scripts.pory"
Route109_EventScript_Alice::
# 766 "data/maps/Route109/scripts.pory"
# 423 "data/maps/Route109/scripts.pory"
# 767 "data/maps/Route109/scripts.pory"
	trainerbattle_single TRAINER_ALICE, Route109_Text_AliceIntro, Route109_Text_AliceDefeated
# 768 "data/maps/Route109/scripts.pory"
# 424 "data/maps/Route109/scripts.pory"
# 769 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_AlicePostBattle, MSGBOX_AUTOCLOSE
# 770 "data/maps/Route109/scripts.pory"
	end
# 771 "data/maps/Route109/scripts.pory"

# 772 "data/maps/Route109/scripts.pory"

# 773 "data/maps/Route109/scripts.pory"
Route109_EventScript_Huey::
# 774 "data/maps/Route109/scripts.pory"
# 429 "data/maps/Route109/scripts.pory"
# 775 "data/maps/Route109/scripts.pory"
	trainerbattle_single TRAINER_HUEY, Route109_Text_HueyIntro, Route109_Text_HueyDefeated
# 776 "data/maps/Route109/scripts.pory"
# 430 "data/maps/Route109/scripts.pory"
# 777 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_HueyPostBattle, MSGBOX_AUTOCLOSE
# 778 "data/maps/Route109/scripts.pory"
	end
# 779 "data/maps/Route109/scripts.pory"

# 780 "data/maps/Route109/scripts.pory"

# 781 "data/maps/Route109/scripts.pory"
Route109_EventScript_Edmond::
# 782 "data/maps/Route109/scripts.pory"
# 435 "data/maps/Route109/scripts.pory"
# 783 "data/maps/Route109/scripts.pory"
	trainerbattle_single TRAINER_EDMOND, Route109_Text_EdmondIntro, Route109_Text_EdmondDefeated
# 784 "data/maps/Route109/scripts.pory"
# 436 "data/maps/Route109/scripts.pory"
# 785 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_EdmondPostBattle, MSGBOX_AUTOCLOSE
# 786 "data/maps/Route109/scripts.pory"
	end
# 787 "data/maps/Route109/scripts.pory"

# 788 "data/maps/Route109/scripts.pory"

# 789 "data/maps/Route109/scripts.pory"
Route109_EventScript_Ricky::
# 790 "data/maps/Route109/scripts.pory"
# 441 "data/maps/Route109/scripts.pory"
# 791 "data/maps/Route109/scripts.pory"
	trainerbattle_single TRAINER_RICKY_1, Route109_Text_RickyIntro, Route109_Text_RickyDefeated, Route109_EventScript_RickyRegisterMatchCallAfterBattle
# 792 "data/maps/Route109/scripts.pory"
# 442 "data/maps/Route109/scripts.pory"
# 793 "data/maps/Route109/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 794 "data/maps/Route109/scripts.pory"
# 443 "data/maps/Route109/scripts.pory"
# 795 "data/maps/Route109/scripts.pory"
	compare VAR_RESULT, TRUE
# 796 "data/maps/Route109/scripts.pory"
	goto_if_eq Route109_EventScript_Ricky_2
# 797 "data/maps/Route109/scripts.pory"
Route109_EventScript_Ricky_1:
# 798 "data/maps/Route109/scripts.pory"
# 446 "data/maps/Route109/scripts.pory"
# 799 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_RickyPostBattle, MSGBOX_DEFAULT
# 800 "data/maps/Route109/scripts.pory"
# 447 "data/maps/Route109/scripts.pory"
# 801 "data/maps/Route109/scripts.pory"
	release
# 802 "data/maps/Route109/scripts.pory"
	end
# 803 "data/maps/Route109/scripts.pory"

# 804 "data/maps/Route109/scripts.pory"
Route109_EventScript_Ricky_2:
# 805 "data/maps/Route109/scripts.pory"
# 444 "data/maps/Route109/scripts.pory"
# 806 "data/maps/Route109/scripts.pory"
	goto Route109_EventScript_RickyRematch
# 807 "data/maps/Route109/scripts.pory"
	goto Route109_EventScript_Ricky_1
# 808 "data/maps/Route109/scripts.pory"

# 809 "data/maps/Route109/scripts.pory"

# 810 "data/maps/Route109/scripts.pory"
Route109_EventScript_RickyRegisterMatchCallAfterBattle::
# 811 "data/maps/Route109/scripts.pory"
# 452 "data/maps/Route109/scripts.pory"
# 812 "data/maps/Route109/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 813 "data/maps/Route109/scripts.pory"
# 453 "data/maps/Route109/scripts.pory"
# 814 "data/maps/Route109/scripts.pory"
	waitmovement 0
# 815 "data/maps/Route109/scripts.pory"
# 454 "data/maps/Route109/scripts.pory"
# 816 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_RickyRegister, MSGBOX_DEFAULT
# 817 "data/maps/Route109/scripts.pory"
# 455 "data/maps/Route109/scripts.pory"
# 818 "data/maps/Route109/scripts.pory"
	register_matchcall TRAINER_RICKY_1
# 819 "data/maps/Route109/scripts.pory"
# 456 "data/maps/Route109/scripts.pory"
# 820 "data/maps/Route109/scripts.pory"
	release
# 821 "data/maps/Route109/scripts.pory"
	end
# 822 "data/maps/Route109/scripts.pory"

# 823 "data/maps/Route109/scripts.pory"

# 824 "data/maps/Route109/scripts.pory"
Route109_EventScript_RickyRematch::
# 825 "data/maps/Route109/scripts.pory"
# 461 "data/maps/Route109/scripts.pory"
# 826 "data/maps/Route109/scripts.pory"
	trainerbattle_rematch TRAINER_RICKY_1, Route109_Text_RickyRematchIntro, Route109_Text_RickyRematchDefeated
# 827 "data/maps/Route109/scripts.pory"
# 462 "data/maps/Route109/scripts.pory"
# 828 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_RickyRematchPostBattle, MSGBOX_AUTOCLOSE
# 829 "data/maps/Route109/scripts.pory"
	end
# 830 "data/maps/Route109/scripts.pory"

# 831 "data/maps/Route109/scripts.pory"

# 832 "data/maps/Route109/scripts.pory"
Route109_EventScript_Lola::
# 833 "data/maps/Route109/scripts.pory"
# 467 "data/maps/Route109/scripts.pory"
# 834 "data/maps/Route109/scripts.pory"
	trainerbattle_single TRAINER_LOLA_1, Route109_Text_LolaIntro, Route109_Text_LolaDefeated, Route109_EventScript_LolaRegisterMatchCallAfterBattle
# 835 "data/maps/Route109/scripts.pory"
# 468 "data/maps/Route109/scripts.pory"
# 836 "data/maps/Route109/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 837 "data/maps/Route109/scripts.pory"
# 469 "data/maps/Route109/scripts.pory"
# 838 "data/maps/Route109/scripts.pory"
	compare VAR_RESULT, TRUE
# 839 "data/maps/Route109/scripts.pory"
	goto_if_eq Route109_EventScript_Lola_2
# 840 "data/maps/Route109/scripts.pory"
Route109_EventScript_Lola_1:
# 841 "data/maps/Route109/scripts.pory"
# 472 "data/maps/Route109/scripts.pory"
# 842 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_LolaPostBattle, MSGBOX_DEFAULT
# 843 "data/maps/Route109/scripts.pory"
# 473 "data/maps/Route109/scripts.pory"
# 844 "data/maps/Route109/scripts.pory"
	release
# 845 "data/maps/Route109/scripts.pory"
	end
# 846 "data/maps/Route109/scripts.pory"

# 847 "data/maps/Route109/scripts.pory"
Route109_EventScript_Lola_2:
# 848 "data/maps/Route109/scripts.pory"
# 470 "data/maps/Route109/scripts.pory"
# 849 "data/maps/Route109/scripts.pory"
	goto Route109_EventScript_LolaRematch
# 850 "data/maps/Route109/scripts.pory"
	goto Route109_EventScript_Lola_1
# 851 "data/maps/Route109/scripts.pory"

# 852 "data/maps/Route109/scripts.pory"

# 853 "data/maps/Route109/scripts.pory"
Route109_EventScript_LolaRegisterMatchCallAfterBattle::
# 854 "data/maps/Route109/scripts.pory"
# 478 "data/maps/Route109/scripts.pory"
# 855 "data/maps/Route109/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 856 "data/maps/Route109/scripts.pory"
# 479 "data/maps/Route109/scripts.pory"
# 857 "data/maps/Route109/scripts.pory"
	waitmovement 0
# 858 "data/maps/Route109/scripts.pory"
# 480 "data/maps/Route109/scripts.pory"
# 859 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_LolaRegister, MSGBOX_DEFAULT
# 860 "data/maps/Route109/scripts.pory"
# 481 "data/maps/Route109/scripts.pory"
# 861 "data/maps/Route109/scripts.pory"
	register_matchcall TRAINER_LOLA_1
# 862 "data/maps/Route109/scripts.pory"
# 482 "data/maps/Route109/scripts.pory"
# 863 "data/maps/Route109/scripts.pory"
	release
# 864 "data/maps/Route109/scripts.pory"
	end
# 865 "data/maps/Route109/scripts.pory"

# 866 "data/maps/Route109/scripts.pory"

# 867 "data/maps/Route109/scripts.pory"
Route109_EventScript_LolaRematch::
# 868 "data/maps/Route109/scripts.pory"
# 487 "data/maps/Route109/scripts.pory"
# 869 "data/maps/Route109/scripts.pory"
	trainerbattle_rematch TRAINER_LOLA_1, Route109_Text_LolaRematchIntro, Route109_Text_LolaRematchDefeated
# 870 "data/maps/Route109/scripts.pory"
# 488 "data/maps/Route109/scripts.pory"
# 871 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_LolaRematchPostBattle, MSGBOX_AUTOCLOSE
# 872 "data/maps/Route109/scripts.pory"
	end
# 873 "data/maps/Route109/scripts.pory"

# 874 "data/maps/Route109/scripts.pory"

# 875 "data/maps/Route109/scripts.pory"
Route109_EventScript_Austina::
# 876 "data/maps/Route109/scripts.pory"
# 493 "data/maps/Route109/scripts.pory"
# 877 "data/maps/Route109/scripts.pory"
	trainerbattle_single TRAINER_AUSTINA, Route109_Text_AustinaIntro, Route109_Text_AustinaDefeated
# 878 "data/maps/Route109/scripts.pory"
# 494 "data/maps/Route109/scripts.pory"
# 879 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_AustinaPostBattle, MSGBOX_AUTOCLOSE
# 880 "data/maps/Route109/scripts.pory"
	end
# 881 "data/maps/Route109/scripts.pory"

# 882 "data/maps/Route109/scripts.pory"

# 883 "data/maps/Route109/scripts.pory"
Route109_EventScript_Gwen::
# 884 "data/maps/Route109/scripts.pory"
# 499 "data/maps/Route109/scripts.pory"
# 885 "data/maps/Route109/scripts.pory"
	trainerbattle_single TRAINER_GWEN, Route109_Text_GwenIntro, Route109_Text_GwenDefeated
# 886 "data/maps/Route109/scripts.pory"
# 500 "data/maps/Route109/scripts.pory"
# 887 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_GwenPostBattle, MSGBOX_AUTOCLOSE
# 888 "data/maps/Route109/scripts.pory"
	end
# 889 "data/maps/Route109/scripts.pory"

# 890 "data/maps/Route109/scripts.pory"

# 891 "data/maps/Route109/scripts.pory"
Route109_EventScript_Carter::
# 892 "data/maps/Route109/scripts.pory"
# 505 "data/maps/Route109/scripts.pory"
# 893 "data/maps/Route109/scripts.pory"
	trainerbattle_single TRAINER_CARTER, Route109_Text_CarterIntro, Route109_Text_CarterDefeated
# 894 "data/maps/Route109/scripts.pory"
# 506 "data/maps/Route109/scripts.pory"
# 895 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_CarterPostBattle, MSGBOX_AUTOCLOSE
# 896 "data/maps/Route109/scripts.pory"
	end
# 897 "data/maps/Route109/scripts.pory"

# 898 "data/maps/Route109/scripts.pory"

# 899 "data/maps/Route109/scripts.pory"
Route109_EventScript_Paul::
# 900 "data/maps/Route109/scripts.pory"
# 511 "data/maps/Route109/scripts.pory"
# 901 "data/maps/Route109/scripts.pory"
	trainerbattle_double TRAINER_MEL_AND_PAUL, Route109_Text_PaulIntro, Route109_Text_PaulDefeated, Route109_Text_PaulNotEnoughPokemon
# 902 "data/maps/Route109/scripts.pory"
# 512 "data/maps/Route109/scripts.pory"
# 903 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_PaulPostBattle, MSGBOX_AUTOCLOSE
# 904 "data/maps/Route109/scripts.pory"
	end
# 905 "data/maps/Route109/scripts.pory"

# 906 "data/maps/Route109/scripts.pory"

# 907 "data/maps/Route109/scripts.pory"
Route109_EventScript_Mel::
# 908 "data/maps/Route109/scripts.pory"
# 517 "data/maps/Route109/scripts.pory"
# 909 "data/maps/Route109/scripts.pory"
	trainerbattle_double TRAINER_MEL_AND_PAUL, Route109_Text_MelIntro, Route109_Text_MelDefeated, Route109_Text_MelNotEnoughPokemon
# 910 "data/maps/Route109/scripts.pory"
# 518 "data/maps/Route109/scripts.pory"
# 911 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_MelPostBattle, MSGBOX_AUTOCLOSE
# 912 "data/maps/Route109/scripts.pory"
	end
# 913 "data/maps/Route109/scripts.pory"

# 914 "data/maps/Route109/scripts.pory"

# 915 "data/maps/Route109/scripts.pory"
Route109_EventScript_Chandler::
# 916 "data/maps/Route109/scripts.pory"
# 523 "data/maps/Route109/scripts.pory"
# 917 "data/maps/Route109/scripts.pory"
	trainerbattle_single TRAINER_CHANDLER, Route109_Text_ChandlerIntro, Route109_Text_ChandlerDefeated
# 918 "data/maps/Route109/scripts.pory"
# 524 "data/maps/Route109/scripts.pory"
# 919 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_ChandlerPostBattle, MSGBOX_AUTOCLOSE
# 920 "data/maps/Route109/scripts.pory"
	end
# 921 "data/maps/Route109/scripts.pory"

# 922 "data/maps/Route109/scripts.pory"

# 923 "data/maps/Route109/scripts.pory"
Route109_EventScript_Hailey::
# 924 "data/maps/Route109/scripts.pory"
# 529 "data/maps/Route109/scripts.pory"
# 925 "data/maps/Route109/scripts.pory"
	trainerbattle_single TRAINER_HAILEY, Route109_Text_HaileyIntro, Route109_Text_HaileyDefeated
# 926 "data/maps/Route109/scripts.pory"
# 530 "data/maps/Route109/scripts.pory"
# 927 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_HaileyPostBattle, MSGBOX_AUTOCLOSE
# 928 "data/maps/Route109/scripts.pory"
	end
# 929 "data/maps/Route109/scripts.pory"

# 930 "data/maps/Route109/scripts.pory"

# 931 "data/maps/Route109/scripts.pory"
Route109_EventScript_Elijah::
# 932 "data/maps/Route109/scripts.pory"
# 535 "data/maps/Route109/scripts.pory"
# 933 "data/maps/Route109/scripts.pory"
	trainerbattle_single TRAINER_ELIJAH, Route109_Text_ElijahIntro, Route109_Text_ElijahDefeated
# 934 "data/maps/Route109/scripts.pory"
# 536 "data/maps/Route109/scripts.pory"
# 935 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_ElijahPostBattle, MSGBOX_AUTOCLOSE
# 936 "data/maps/Route109/scripts.pory"
	end
# 937 "data/maps/Route109/scripts.pory"

# 938 "data/maps/Route109/scripts.pory"

# 939 "data/maps/Route109/scripts.pory"
DewfordTown_Text_BrineyLandedInSlateportDeliverGoods::
# 940 "data/maps/Route109/scripts.pory"
# 540 "data/maps/Route109/scripts.pory"
# 941 "data/maps/Route109/scripts.pory"
	.string "MR. BRINEY: Ahoy!\n"
# 942 "data/maps/Route109/scripts.pory"
	.string "We've made land in SLATEPORT!\p"
# 943 "data/maps/Route109/scripts.pory"
	.string "I suppose you're going to visit CAPT.\n"
# 944 "data/maps/Route109/scripts.pory"
	.string "STERN and deliver the DEVON GOODS?$"
# 945 "data/maps/Route109/scripts.pory"

# 946 "data/maps/Route109/scripts.pory"
Route109_Text_BrineySailToDewfordQuestion::
# 947 "data/maps/Route109/scripts.pory"
# 547 "data/maps/Route109/scripts.pory"
# 948 "data/maps/Route109/scripts.pory"
	.string "MR. BRINEY: I thought you're supposed\n"
# 949 "data/maps/Route109/scripts.pory"
	.string "to deliver the DEVON GOODS.\p"
# 950 "data/maps/Route109/scripts.pory"
	.string "Would you like to sail back to\n"
# 951 "data/maps/Route109/scripts.pory"
	.string "DEWFORD, then?$"
# 952 "data/maps/Route109/scripts.pory"

# 953 "data/maps/Route109/scripts.pory"
Route109_Text_BrineyDewfordItIs::
# 954 "data/maps/Route109/scripts.pory"
# 554 "data/maps/Route109/scripts.pory"
# 955 "data/maps/Route109/scripts.pory"
	.string "MR. BRINEY: DEWFORD it is, then!\p"
# 956 "data/maps/Route109/scripts.pory"
	.string "Anchors aweigh!\n"
# 957 "data/maps/Route109/scripts.pory"
	.string "PEEKO, we're setting sail, my darling!$"
# 958 "data/maps/Route109/scripts.pory"

# 959 "data/maps/Route109/scripts.pory"
Route109_Text_BrineyDeliverDevonGoods::
# 960 "data/maps/Route109/scripts.pory"
# 560 "data/maps/Route109/scripts.pory"
# 961 "data/maps/Route109/scripts.pory"
	.string "MR. BRINEY: Then you go on and deliver\n"
# 962 "data/maps/Route109/scripts.pory"
	.string "the DEVON GOODS. I'll be waiting.$"
# 963 "data/maps/Route109/scripts.pory"

# 964 "data/maps/Route109/scripts.pory"
DewfordTown_Text_BrineyLandedInSlateport::
# 965 "data/maps/Route109/scripts.pory"
# 565 "data/maps/Route109/scripts.pory"
# 966 "data/maps/Route109/scripts.pory"
	.string "MR. BRINEY: Ahoy! We've made land in\n"
# 967 "data/maps/Route109/scripts.pory"
	.string "SLATEPORT!\p"
# 968 "data/maps/Route109/scripts.pory"
	.string "You just go on and tell me whenever\n"
# 969 "data/maps/Route109/scripts.pory"
	.string "you want to set sail again!$"
# 970 "data/maps/Route109/scripts.pory"

# 971 "data/maps/Route109/scripts.pory"
Route109_Text_BrineyWhereAreWeBound::
# 972 "data/maps/Route109/scripts.pory"
# 572 "data/maps/Route109/scripts.pory"
# 973 "data/maps/Route109/scripts.pory"
	.string "MR. BRINEY: Ahoy!\n"
# 974 "data/maps/Route109/scripts.pory"
	.string "For you, I'll go out to sea anytime!\p"
# 975 "data/maps/Route109/scripts.pory"
	.string "Now, my friend, where are we bound?$"
# 976 "data/maps/Route109/scripts.pory"

# 977 "data/maps/Route109/scripts.pory"
Route109_Text_BrineyTellMeWhenYouNeedToSail::
# 978 "data/maps/Route109/scripts.pory"
# 578 "data/maps/Route109/scripts.pory"
# 979 "data/maps/Route109/scripts.pory"
	.string "MR. BRINEY: You just tell me whenever\n"
# 980 "data/maps/Route109/scripts.pory"
	.string "you need to set sail again!$"
# 981 "data/maps/Route109/scripts.pory"

# 982 "data/maps/Route109/scripts.pory"
Route109_Text_ChillAtMyPapasSpot::
# 983 "data/maps/Route109/scripts.pory"
# 583 "data/maps/Route109/scripts.pory"
# 984 "data/maps/Route109/scripts.pory"
	.string "Yo, TRAINERS!\n"
# 985 "data/maps/Route109/scripts.pory"
	.string "Whether you're hot to trot,\l"
# 986 "data/maps/Route109/scripts.pory"
	.string "or cool cat not,\l"
# 987 "data/maps/Route109/scripts.pory"
	.string "chill at my papa's spot!$"
# 988 "data/maps/Route109/scripts.pory"

# 989 "data/maps/Route109/scripts.pory"
Route109_Text_LittleKidsDartAround::
# 990 "data/maps/Route109/scripts.pory"
# 590 "data/maps/Route109/scripts.pory"
# 991 "data/maps/Route109/scripts.pory"
	.string "Little kids can dart around so quickly…\p"
# 992 "data/maps/Route109/scripts.pory"
	.string "You don't dare take your eyes off them\n"
# 993 "data/maps/Route109/scripts.pory"
	.string "for an instant. It's very taxing.\p"
# 994 "data/maps/Route109/scripts.pory"
	.string "Mine are with my POKéMON, so they\n"
# 995 "data/maps/Route109/scripts.pory"
	.string "should be okay, but…$"
# 996 "data/maps/Route109/scripts.pory"

# 997 "data/maps/Route109/scripts.pory"
Route109_Text_SandCastleTakingLongTime::
# 998 "data/maps/Route109/scripts.pory"
# 598 "data/maps/Route109/scripts.pory"
# 999 "data/maps/Route109/scripts.pory"
	.string "Our sand castle's taking a long time\n"
# 1000 "data/maps/Route109/scripts.pory"
	.string "to make.$"
# 1001 "data/maps/Route109/scripts.pory"

# 1002 "data/maps/Route109/scripts.pory"
Route109_Text_YouCanHaveThis::
# 1003 "data/maps/Route109/scripts.pory"
# 603 "data/maps/Route109/scripts.pory"
# 1004 "data/maps/Route109/scripts.pory"
	.string "You can have this!$"
# 1005 "data/maps/Route109/scripts.pory"

# 1006 "data/maps/Route109/scripts.pory"
Route109_Text_WereGoingToMakeBigCastle::
# 1007 "data/maps/Route109/scripts.pory"
# 607 "data/maps/Route109/scripts.pory"
# 1008 "data/maps/Route109/scripts.pory"
	.string "We're going to get all the sand from\n"
# 1009 "data/maps/Route109/scripts.pory"
	.string "the beach and make a big castle!\p"
# 1010 "data/maps/Route109/scripts.pory"
	.string "And then we're going to be a king and\n"
# 1011 "data/maps/Route109/scripts.pory"
	.string "queen.\p"
# 1012 "data/maps/Route109/scripts.pory"
	.string "We'll let you be a servant.$"
# 1013 "data/maps/Route109/scripts.pory"

# 1014 "data/maps/Route109/scripts.pory"
Route109_Text_ZigzagoonPicksUpLitter::
# 1015 "data/maps/Route109/scripts.pory"
# 615 "data/maps/Route109/scripts.pory"
# 1016 "data/maps/Route109/scripts.pory"
	.string "The water around these parts is clean.\p"
# 1017 "data/maps/Route109/scripts.pory"
	.string "But, I get my ZIGZAGOON to pick up\n"
# 1018 "data/maps/Route109/scripts.pory"
	.string "litter from the shoreline at times.\p"
# 1019 "data/maps/Route109/scripts.pory"
	.string "Dirty water becomes rain and joins our\n"
# 1020 "data/maps/Route109/scripts.pory"
	.string "rivers, which we drink from…\p"
# 1021 "data/maps/Route109/scripts.pory"
	.string "If we pollute the sea, it all comes\n"
# 1022 "data/maps/Route109/scripts.pory"
	.string "back to haunt us eventually.$"
# 1023 "data/maps/Route109/scripts.pory"

# 1024 "data/maps/Route109/scripts.pory"
Route109_Text_ZigzagoonCry::
# 1025 "data/maps/Route109/scripts.pory"
# 625 "data/maps/Route109/scripts.pory"
# 1026 "data/maps/Route109/scripts.pory"
	.string "ZIGZAGOON: Guguu?$"
# 1027 "data/maps/Route109/scripts.pory"

# 1028 "data/maps/Route109/scripts.pory"
Route109_Text_SeashoreHouseSign::
# 1029 "data/maps/Route109/scripts.pory"
# 629 "data/maps/Route109/scripts.pory"
# 1030 "data/maps/Route109/scripts.pory"
	.string "SEASHORE HOUSE\p"
# 1031 "data/maps/Route109/scripts.pory"
	.string "“May hot battles rage on hot sands!\n"
# 1032 "data/maps/Route109/scripts.pory"
	.string "The place for hot TRAINERS!”$"
# 1033 "data/maps/Route109/scripts.pory"

# 1034 "data/maps/Route109/scripts.pory"
Route109_Text_TrainerTipsSign::
# 1035 "data/maps/Route109/scripts.pory"
# 635 "data/maps/Route109/scripts.pory"
# 1036 "data/maps/Route109/scripts.pory"
	.string "TRAINER TIPS\p"
# 1037 "data/maps/Route109/scripts.pory"
	.string "POKéMON at the same level may not\n"
# 1038 "data/maps/Route109/scripts.pory"
	.string "always have identical stats.\p"
# 1039 "data/maps/Route109/scripts.pory"
	.string "POKéMON raised by TRAINERS are said\n"
# 1040 "data/maps/Route109/scripts.pory"
	.string "to grow stronger than wild POKéMON.$"
