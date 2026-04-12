# 1 "data/maps/PewterCity_Frlg/scripts.pory"

# 2 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Frlg_MapScripts::
# 3 "data/maps/PewterCity_Frlg/scripts.pory"
# 2 "data/maps/PewterCity_Frlg/scripts.pory"
# 4 "data/maps/PewterCity_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PewterCity_OnTransition
# 5 "data/maps/PewterCity_Frlg/scripts.pory"
	.byte 0
# 6 "data/maps/PewterCity_Frlg/scripts.pory"

# 7 "data/maps/PewterCity_Frlg/scripts.pory"

# 8 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_OnTransition::
# 9 "data/maps/PewterCity_Frlg/scripts.pory"
# 6 "data/maps/PewterCity_Frlg/scripts.pory"
# 10 "data/maps/PewterCity_Frlg/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_PEWTER_CITY
# 11 "data/maps/PewterCity_Frlg/scripts.pory"
# 7 "data/maps/PewterCity_Frlg/scripts.pory"
# 12 "data/maps/PewterCity_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_PEWTER_CITY_MUSEUM_1F, 0
# 13 "data/maps/PewterCity_Frlg/scripts.pory"
	end
# 14 "data/maps/PewterCity_Frlg/scripts.pory"

# 15 "data/maps/PewterCity_Frlg/scripts.pory"

# 16 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_EventScript_GymGuide::
# 17 "data/maps/PewterCity_Frlg/scripts.pory"
# 12 "data/maps/PewterCity_Frlg/scripts.pory"
# 18 "data/maps/PewterCity_Frlg/scripts.pory"
	lock
# 19 "data/maps/PewterCity_Frlg/scripts.pory"
# 13 "data/maps/PewterCity_Frlg/scripts.pory"
# 20 "data/maps/PewterCity_Frlg/scripts.pory"
	faceplayer
# 21 "data/maps/PewterCity_Frlg/scripts.pory"
# 14 "data/maps/PewterCity_Frlg/scripts.pory"
# 22 "data/maps/PewterCity_Frlg/scripts.pory"
	msgbox PewterCity_Text_BrocksLookingForChallengersFollowMe
# 23 "data/maps/PewterCity_Frlg/scripts.pory"
# 15 "data/maps/PewterCity_Frlg/scripts.pory"
# 24 "data/maps/PewterCity_Frlg/scripts.pory"
	closemessage
# 25 "data/maps/PewterCity_Frlg/scripts.pory"
# 16 "data/maps/PewterCity_Frlg/scripts.pory"
# 26 "data/maps/PewterCity_Frlg/scripts.pory"
	playbgm MUS_FOLLOW_ME, 0
# 27 "data/maps/PewterCity_Frlg/scripts.pory"
# 17 "data/maps/PewterCity_Frlg/scripts.pory"
# 28 "data/maps/PewterCity_Frlg/scripts.pory"
	compare VAR_FACING, DIR_EAST
# 29 "data/maps/PewterCity_Frlg/scripts.pory"
	goto_if_eq PewterCity_EventScript_GymGuide_2
# 30 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_EventScript_GymGuide_1:
# 31 "data/maps/PewterCity_Frlg/scripts.pory"
# 20 "data/maps/PewterCity_Frlg/scripts.pory"
# 32 "data/maps/PewterCity_Frlg/scripts.pory"
	msgbox PewterCity_Text_GoTakeOnBrock
# 33 "data/maps/PewterCity_Frlg/scripts.pory"
# 21 "data/maps/PewterCity_Frlg/scripts.pory"
# 34 "data/maps/PewterCity_Frlg/scripts.pory"
	closemessage
# 35 "data/maps/PewterCity_Frlg/scripts.pory"
# 22 "data/maps/PewterCity_Frlg/scripts.pory"
# 36 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PEWTER_GYM_GUIDE, PewterCity_Movement_GymGuideExit
# 37 "data/maps/PewterCity_Frlg/scripts.pory"
# 23 "data/maps/PewterCity_Frlg/scripts.pory"
# 38 "data/maps/PewterCity_Frlg/scripts.pory"
	waitmovement 0
# 39 "data/maps/PewterCity_Frlg/scripts.pory"
# 24 "data/maps/PewterCity_Frlg/scripts.pory"
# 40 "data/maps/PewterCity_Frlg/scripts.pory"
	fadedefaultbgm
# 41 "data/maps/PewterCity_Frlg/scripts.pory"
# 25 "data/maps/PewterCity_Frlg/scripts.pory"
# 42 "data/maps/PewterCity_Frlg/scripts.pory"
	removeobject LOCALID_PEWTER_GYM_GUIDE
# 43 "data/maps/PewterCity_Frlg/scripts.pory"
# 26 "data/maps/PewterCity_Frlg/scripts.pory"
# 44 "data/maps/PewterCity_Frlg/scripts.pory"
	clearflag FLAG_HIDE_PEWTER_CITY_GYM_GUIDE
# 45 "data/maps/PewterCity_Frlg/scripts.pory"
# 27 "data/maps/PewterCity_Frlg/scripts.pory"
# 46 "data/maps/PewterCity_Frlg/scripts.pory"
	release
# 47 "data/maps/PewterCity_Frlg/scripts.pory"
	end
# 48 "data/maps/PewterCity_Frlg/scripts.pory"

# 49 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_EventScript_GymGuide_2:
# 50 "data/maps/PewterCity_Frlg/scripts.pory"
# 18 "data/maps/PewterCity_Frlg/scripts.pory"
# 51 "data/maps/PewterCity_Frlg/scripts.pory"
	call PewterCity_EventScript_WalkToGymEast
# 52 "data/maps/PewterCity_Frlg/scripts.pory"
	goto PewterCity_EventScript_GymGuide_1
# 53 "data/maps/PewterCity_Frlg/scripts.pory"

# 54 "data/maps/PewterCity_Frlg/scripts.pory"

# 55 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_EventScript_WalkToGymEast::
# 56 "data/maps/PewterCity_Frlg/scripts.pory"
# 32 "data/maps/PewterCity_Frlg/scripts.pory"
# 57 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PewterCity_Movement_PlayerWaitForGuideEast
# 58 "data/maps/PewterCity_Frlg/scripts.pory"
# 33 "data/maps/PewterCity_Frlg/scripts.pory"
# 59 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PEWTER_GYM_GUIDE, PewterCity_Movement_GuideMoveToLeadEast
# 60 "data/maps/PewterCity_Frlg/scripts.pory"
# 34 "data/maps/PewterCity_Frlg/scripts.pory"
# 61 "data/maps/PewterCity_Frlg/scripts.pory"
	waitmovement 0
# 62 "data/maps/PewterCity_Frlg/scripts.pory"
# 35 "data/maps/PewterCity_Frlg/scripts.pory"
# 63 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PewterCity_Movement_PlayerWalkToGymEast
# 64 "data/maps/PewterCity_Frlg/scripts.pory"
# 36 "data/maps/PewterCity_Frlg/scripts.pory"
# 65 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PEWTER_GYM_GUIDE, PewterCity_Movement_GuideWalkToGymEast
# 66 "data/maps/PewterCity_Frlg/scripts.pory"
# 37 "data/maps/PewterCity_Frlg/scripts.pory"
# 67 "data/maps/PewterCity_Frlg/scripts.pory"
	waitmovement 0
# 68 "data/maps/PewterCity_Frlg/scripts.pory"
	return
# 69 "data/maps/PewterCity_Frlg/scripts.pory"

# 70 "data/maps/PewterCity_Frlg/scripts.pory"

# 71 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_EventScript_WalkToGymWest::
# 72 "data/maps/PewterCity_Frlg/scripts.pory"
# 42 "data/maps/PewterCity_Frlg/scripts.pory"
# 73 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PewterCity_Movement_PlayerWaitForGuideWest
# 74 "data/maps/PewterCity_Frlg/scripts.pory"
# 43 "data/maps/PewterCity_Frlg/scripts.pory"
# 75 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PEWTER_GYM_GUIDE, PewterCity_Movement_GuideMoveToLeadWest
# 76 "data/maps/PewterCity_Frlg/scripts.pory"
# 44 "data/maps/PewterCity_Frlg/scripts.pory"
# 77 "data/maps/PewterCity_Frlg/scripts.pory"
	waitmovement 0
# 78 "data/maps/PewterCity_Frlg/scripts.pory"
# 45 "data/maps/PewterCity_Frlg/scripts.pory"
# 79 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PewterCity_Movement_PlayerWalkToGymWest
# 80 "data/maps/PewterCity_Frlg/scripts.pory"
# 46 "data/maps/PewterCity_Frlg/scripts.pory"
# 81 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PEWTER_GYM_GUIDE, PewterCity_Movement_GuideWalkToGymWest
# 82 "data/maps/PewterCity_Frlg/scripts.pory"
# 47 "data/maps/PewterCity_Frlg/scripts.pory"
# 83 "data/maps/PewterCity_Frlg/scripts.pory"
	waitmovement 0
# 84 "data/maps/PewterCity_Frlg/scripts.pory"
	return
# 85 "data/maps/PewterCity_Frlg/scripts.pory"

# 86 "data/maps/PewterCity_Frlg/scripts.pory"

# 87 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_EventScript_WalkToGymNorth::
# 88 "data/maps/PewterCity_Frlg/scripts.pory"
# 52 "data/maps/PewterCity_Frlg/scripts.pory"
# 89 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PewterCity_Movement_PlayerWaitForGuideNorth
# 90 "data/maps/PewterCity_Frlg/scripts.pory"
# 53 "data/maps/PewterCity_Frlg/scripts.pory"
# 91 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PEWTER_GYM_GUIDE, PewterCity_Movement_GuideMoveToLeadNorth
# 92 "data/maps/PewterCity_Frlg/scripts.pory"
# 54 "data/maps/PewterCity_Frlg/scripts.pory"
# 93 "data/maps/PewterCity_Frlg/scripts.pory"
	waitmovement 0
# 94 "data/maps/PewterCity_Frlg/scripts.pory"
# 55 "data/maps/PewterCity_Frlg/scripts.pory"
# 95 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PewterCity_Movement_PlayerWalkToGymNorth
# 96 "data/maps/PewterCity_Frlg/scripts.pory"
# 56 "data/maps/PewterCity_Frlg/scripts.pory"
# 97 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PEWTER_GYM_GUIDE, PewterCity_Movement_GuideWalkToGymNorth
# 98 "data/maps/PewterCity_Frlg/scripts.pory"
# 57 "data/maps/PewterCity_Frlg/scripts.pory"
# 99 "data/maps/PewterCity_Frlg/scripts.pory"
	waitmovement 0
# 100 "data/maps/PewterCity_Frlg/scripts.pory"
# 58 "data/maps/PewterCity_Frlg/scripts.pory"
# 101 "data/maps/PewterCity_Frlg/scripts.pory"
	return
# 102 "data/maps/PewterCity_Frlg/scripts.pory"
# 59 "data/maps/PewterCity_Frlg/scripts.pory"
# 103 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 104 "data/maps/PewterCity_Frlg/scripts.pory"
# 60 "data/maps/PewterCity_Frlg/scripts.pory"
# 105 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 106 "data/maps/PewterCity_Frlg/scripts.pory"
# 61 "data/maps/PewterCity_Frlg/scripts.pory"
# 107 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 108 "data/maps/PewterCity_Frlg/scripts.pory"
# 62 "data/maps/PewterCity_Frlg/scripts.pory"
# 109 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 110 "data/maps/PewterCity_Frlg/scripts.pory"
# 63 "data/maps/PewterCity_Frlg/scripts.pory"
# 111 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 112 "data/maps/PewterCity_Frlg/scripts.pory"
# 64 "data/maps/PewterCity_Frlg/scripts.pory"
# 113 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 114 "data/maps/PewterCity_Frlg/scripts.pory"
# 65 "data/maps/PewterCity_Frlg/scripts.pory"
# 115 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 116 "data/maps/PewterCity_Frlg/scripts.pory"
# 66 "data/maps/PewterCity_Frlg/scripts.pory"
# 117 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 118 "data/maps/PewterCity_Frlg/scripts.pory"
# 67 "data/maps/PewterCity_Frlg/scripts.pory"
# 119 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 120 "data/maps/PewterCity_Frlg/scripts.pory"
# 68 "data/maps/PewterCity_Frlg/scripts.pory"
# 121 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 122 "data/maps/PewterCity_Frlg/scripts.pory"
# 69 "data/maps/PewterCity_Frlg/scripts.pory"
# 123 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 124 "data/maps/PewterCity_Frlg/scripts.pory"
# 70 "data/maps/PewterCity_Frlg/scripts.pory"
# 125 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 126 "data/maps/PewterCity_Frlg/scripts.pory"
# 71 "data/maps/PewterCity_Frlg/scripts.pory"
# 127 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 128 "data/maps/PewterCity_Frlg/scripts.pory"
# 72 "data/maps/PewterCity_Frlg/scripts.pory"
# 129 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 130 "data/maps/PewterCity_Frlg/scripts.pory"
# 73 "data/maps/PewterCity_Frlg/scripts.pory"
# 131 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 132 "data/maps/PewterCity_Frlg/scripts.pory"
# 74 "data/maps/PewterCity_Frlg/scripts.pory"
# 133 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 134 "data/maps/PewterCity_Frlg/scripts.pory"
# 75 "data/maps/PewterCity_Frlg/scripts.pory"
# 135 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 136 "data/maps/PewterCity_Frlg/scripts.pory"
# 76 "data/maps/PewterCity_Frlg/scripts.pory"
# 137 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 138 "data/maps/PewterCity_Frlg/scripts.pory"
# 77 "data/maps/PewterCity_Frlg/scripts.pory"
# 139 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 140 "data/maps/PewterCity_Frlg/scripts.pory"
# 78 "data/maps/PewterCity_Frlg/scripts.pory"
# 141 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 142 "data/maps/PewterCity_Frlg/scripts.pory"
# 79 "data/maps/PewterCity_Frlg/scripts.pory"
# 143 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 144 "data/maps/PewterCity_Frlg/scripts.pory"
# 80 "data/maps/PewterCity_Frlg/scripts.pory"
# 145 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 146 "data/maps/PewterCity_Frlg/scripts.pory"
# 81 "data/maps/PewterCity_Frlg/scripts.pory"
# 147 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 148 "data/maps/PewterCity_Frlg/scripts.pory"
# 82 "data/maps/PewterCity_Frlg/scripts.pory"
# 149 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 150 "data/maps/PewterCity_Frlg/scripts.pory"
# 83 "data/maps/PewterCity_Frlg/scripts.pory"
# 151 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 152 "data/maps/PewterCity_Frlg/scripts.pory"
# 84 "data/maps/PewterCity_Frlg/scripts.pory"
# 153 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 154 "data/maps/PewterCity_Frlg/scripts.pory"
# 85 "data/maps/PewterCity_Frlg/scripts.pory"
# 155 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 156 "data/maps/PewterCity_Frlg/scripts.pory"
# 86 "data/maps/PewterCity_Frlg/scripts.pory"
# 157 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 158 "data/maps/PewterCity_Frlg/scripts.pory"
# 87 "data/maps/PewterCity_Frlg/scripts.pory"
# 159 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 160 "data/maps/PewterCity_Frlg/scripts.pory"
# 88 "data/maps/PewterCity_Frlg/scripts.pory"
# 161 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 162 "data/maps/PewterCity_Frlg/scripts.pory"
# 89 "data/maps/PewterCity_Frlg/scripts.pory"
# 163 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 164 "data/maps/PewterCity_Frlg/scripts.pory"
# 90 "data/maps/PewterCity_Frlg/scripts.pory"
# 165 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 166 "data/maps/PewterCity_Frlg/scripts.pory"
# 91 "data/maps/PewterCity_Frlg/scripts.pory"
# 167 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 168 "data/maps/PewterCity_Frlg/scripts.pory"
# 92 "data/maps/PewterCity_Frlg/scripts.pory"
# 169 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 170 "data/maps/PewterCity_Frlg/scripts.pory"
# 93 "data/maps/PewterCity_Frlg/scripts.pory"
# 171 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 172 "data/maps/PewterCity_Frlg/scripts.pory"
# 94 "data/maps/PewterCity_Frlg/scripts.pory"
# 173 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 174 "data/maps/PewterCity_Frlg/scripts.pory"
# 95 "data/maps/PewterCity_Frlg/scripts.pory"
# 175 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 176 "data/maps/PewterCity_Frlg/scripts.pory"
# 96 "data/maps/PewterCity_Frlg/scripts.pory"
# 177 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 178 "data/maps/PewterCity_Frlg/scripts.pory"
# 97 "data/maps/PewterCity_Frlg/scripts.pory"
# 179 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 180 "data/maps/PewterCity_Frlg/scripts.pory"
# 98 "data/maps/PewterCity_Frlg/scripts.pory"
# 181 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 182 "data/maps/PewterCity_Frlg/scripts.pory"
# 99 "data/maps/PewterCity_Frlg/scripts.pory"
# 183 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 184 "data/maps/PewterCity_Frlg/scripts.pory"
# 100 "data/maps/PewterCity_Frlg/scripts.pory"
# 185 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 186 "data/maps/PewterCity_Frlg/scripts.pory"
# 101 "data/maps/PewterCity_Frlg/scripts.pory"
# 187 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 188 "data/maps/PewterCity_Frlg/scripts.pory"
# 102 "data/maps/PewterCity_Frlg/scripts.pory"
# 189 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 190 "data/maps/PewterCity_Frlg/scripts.pory"
# 103 "data/maps/PewterCity_Frlg/scripts.pory"
# 191 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 192 "data/maps/PewterCity_Frlg/scripts.pory"
# 104 "data/maps/PewterCity_Frlg/scripts.pory"
# 193 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 194 "data/maps/PewterCity_Frlg/scripts.pory"
# 105 "data/maps/PewterCity_Frlg/scripts.pory"
# 195 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 196 "data/maps/PewterCity_Frlg/scripts.pory"
# 106 "data/maps/PewterCity_Frlg/scripts.pory"
# 197 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 198 "data/maps/PewterCity_Frlg/scripts.pory"
# 107 "data/maps/PewterCity_Frlg/scripts.pory"
# 199 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 200 "data/maps/PewterCity_Frlg/scripts.pory"
# 108 "data/maps/PewterCity_Frlg/scripts.pory"
# 201 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 202 "data/maps/PewterCity_Frlg/scripts.pory"
# 109 "data/maps/PewterCity_Frlg/scripts.pory"
# 203 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 204 "data/maps/PewterCity_Frlg/scripts.pory"
# 110 "data/maps/PewterCity_Frlg/scripts.pory"
# 205 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 206 "data/maps/PewterCity_Frlg/scripts.pory"
# 111 "data/maps/PewterCity_Frlg/scripts.pory"
# 207 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 208 "data/maps/PewterCity_Frlg/scripts.pory"
# 112 "data/maps/PewterCity_Frlg/scripts.pory"
# 209 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
# 210 "data/maps/PewterCity_Frlg/scripts.pory"
# 113 "data/maps/PewterCity_Frlg/scripts.pory"
# 211 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
# 212 "data/maps/PewterCity_Frlg/scripts.pory"
# 114 "data/maps/PewterCity_Frlg/scripts.pory"
# 213 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
# 214 "data/maps/PewterCity_Frlg/scripts.pory"
# 115 "data/maps/PewterCity_Frlg/scripts.pory"
# 215 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
# 216 "data/maps/PewterCity_Frlg/scripts.pory"
# 116 "data/maps/PewterCity_Frlg/scripts.pory"
# 217 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
# 218 "data/maps/PewterCity_Frlg/scripts.pory"
# 117 "data/maps/PewterCity_Frlg/scripts.pory"
# 219 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
# 220 "data/maps/PewterCity_Frlg/scripts.pory"
# 118 "data/maps/PewterCity_Frlg/scripts.pory"
# 221 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
# 222 "data/maps/PewterCity_Frlg/scripts.pory"
# 119 "data/maps/PewterCity_Frlg/scripts.pory"
# 223 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
# 224 "data/maps/PewterCity_Frlg/scripts.pory"
# 120 "data/maps/PewterCity_Frlg/scripts.pory"
# 225 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 226 "data/maps/PewterCity_Frlg/scripts.pory"
# 121 "data/maps/PewterCity_Frlg/scripts.pory"
# 227 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 228 "data/maps/PewterCity_Frlg/scripts.pory"
# 122 "data/maps/PewterCity_Frlg/scripts.pory"
# 229 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 230 "data/maps/PewterCity_Frlg/scripts.pory"
# 123 "data/maps/PewterCity_Frlg/scripts.pory"
# 231 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 232 "data/maps/PewterCity_Frlg/scripts.pory"
# 124 "data/maps/PewterCity_Frlg/scripts.pory"
# 233 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 234 "data/maps/PewterCity_Frlg/scripts.pory"
# 125 "data/maps/PewterCity_Frlg/scripts.pory"
# 235 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 236 "data/maps/PewterCity_Frlg/scripts.pory"
# 126 "data/maps/PewterCity_Frlg/scripts.pory"
# 237 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 238 "data/maps/PewterCity_Frlg/scripts.pory"
# 127 "data/maps/PewterCity_Frlg/scripts.pory"
# 239 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 240 "data/maps/PewterCity_Frlg/scripts.pory"
# 128 "data/maps/PewterCity_Frlg/scripts.pory"
# 241 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 242 "data/maps/PewterCity_Frlg/scripts.pory"
# 129 "data/maps/PewterCity_Frlg/scripts.pory"
# 243 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 244 "data/maps/PewterCity_Frlg/scripts.pory"
# 130 "data/maps/PewterCity_Frlg/scripts.pory"
# 245 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 246 "data/maps/PewterCity_Frlg/scripts.pory"
# 131 "data/maps/PewterCity_Frlg/scripts.pory"
# 247 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 248 "data/maps/PewterCity_Frlg/scripts.pory"
# 132 "data/maps/PewterCity_Frlg/scripts.pory"
# 249 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 250 "data/maps/PewterCity_Frlg/scripts.pory"
# 133 "data/maps/PewterCity_Frlg/scripts.pory"
# 251 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 252 "data/maps/PewterCity_Frlg/scripts.pory"
# 134 "data/maps/PewterCity_Frlg/scripts.pory"
# 253 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 254 "data/maps/PewterCity_Frlg/scripts.pory"
# 135 "data/maps/PewterCity_Frlg/scripts.pory"
# 255 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 256 "data/maps/PewterCity_Frlg/scripts.pory"
# 136 "data/maps/PewterCity_Frlg/scripts.pory"
# 257 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 258 "data/maps/PewterCity_Frlg/scripts.pory"
# 137 "data/maps/PewterCity_Frlg/scripts.pory"
# 259 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 260 "data/maps/PewterCity_Frlg/scripts.pory"
# 138 "data/maps/PewterCity_Frlg/scripts.pory"
# 261 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 262 "data/maps/PewterCity_Frlg/scripts.pory"
# 139 "data/maps/PewterCity_Frlg/scripts.pory"
# 263 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 264 "data/maps/PewterCity_Frlg/scripts.pory"
# 140 "data/maps/PewterCity_Frlg/scripts.pory"
# 265 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 266 "data/maps/PewterCity_Frlg/scripts.pory"
# 141 "data/maps/PewterCity_Frlg/scripts.pory"
# 267 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 268 "data/maps/PewterCity_Frlg/scripts.pory"
# 142 "data/maps/PewterCity_Frlg/scripts.pory"
# 269 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 270 "data/maps/PewterCity_Frlg/scripts.pory"
# 143 "data/maps/PewterCity_Frlg/scripts.pory"
# 271 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 272 "data/maps/PewterCity_Frlg/scripts.pory"
# 144 "data/maps/PewterCity_Frlg/scripts.pory"
# 273 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 274 "data/maps/PewterCity_Frlg/scripts.pory"
# 145 "data/maps/PewterCity_Frlg/scripts.pory"
# 275 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 276 "data/maps/PewterCity_Frlg/scripts.pory"
# 146 "data/maps/PewterCity_Frlg/scripts.pory"
# 277 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 278 "data/maps/PewterCity_Frlg/scripts.pory"
# 147 "data/maps/PewterCity_Frlg/scripts.pory"
# 279 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 280 "data/maps/PewterCity_Frlg/scripts.pory"
# 148 "data/maps/PewterCity_Frlg/scripts.pory"
# 281 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 282 "data/maps/PewterCity_Frlg/scripts.pory"
# 149 "data/maps/PewterCity_Frlg/scripts.pory"
# 283 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 284 "data/maps/PewterCity_Frlg/scripts.pory"
# 150 "data/maps/PewterCity_Frlg/scripts.pory"
# 285 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 286 "data/maps/PewterCity_Frlg/scripts.pory"
# 151 "data/maps/PewterCity_Frlg/scripts.pory"
# 287 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 288 "data/maps/PewterCity_Frlg/scripts.pory"
# 152 "data/maps/PewterCity_Frlg/scripts.pory"
# 289 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 290 "data/maps/PewterCity_Frlg/scripts.pory"
# 153 "data/maps/PewterCity_Frlg/scripts.pory"
# 291 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 292 "data/maps/PewterCity_Frlg/scripts.pory"
# 154 "data/maps/PewterCity_Frlg/scripts.pory"
# 293 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 294 "data/maps/PewterCity_Frlg/scripts.pory"
# 155 "data/maps/PewterCity_Frlg/scripts.pory"
# 295 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 296 "data/maps/PewterCity_Frlg/scripts.pory"
# 156 "data/maps/PewterCity_Frlg/scripts.pory"
# 297 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 298 "data/maps/PewterCity_Frlg/scripts.pory"
# 157 "data/maps/PewterCity_Frlg/scripts.pory"
# 299 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 300 "data/maps/PewterCity_Frlg/scripts.pory"
# 158 "data/maps/PewterCity_Frlg/scripts.pory"
# 301 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
# 302 "data/maps/PewterCity_Frlg/scripts.pory"
	return
# 303 "data/maps/PewterCity_Frlg/scripts.pory"

# 304 "data/maps/PewterCity_Frlg/scripts.pory"

# 305 "data/maps/PewterCity_Frlg/scripts.pory"
# 161 "data/maps/PewterCity_Frlg/scripts.pory"
# 306 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Movement_PlayerWaitForGuideEast:
# 307 "data/maps/PewterCity_Frlg/scripts.pory"
# 162 "data/maps/PewterCity_Frlg/scripts.pory"
# 308 "data/maps/PewterCity_Frlg/scripts.pory"
	delay_16
# 309 "data/maps/PewterCity_Frlg/scripts.pory"
# 163 "data/maps/PewterCity_Frlg/scripts.pory"
# 310 "data/maps/PewterCity_Frlg/scripts.pory"
	delay_16
# 311 "data/maps/PewterCity_Frlg/scripts.pory"
# 164 "data/maps/PewterCity_Frlg/scripts.pory"
# 312 "data/maps/PewterCity_Frlg/scripts.pory"
	delay_4
# 313 "data/maps/PewterCity_Frlg/scripts.pory"
# 165 "data/maps/PewterCity_Frlg/scripts.pory"
# 314 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_in_place_faster_down
# 315 "data/maps/PewterCity_Frlg/scripts.pory"
# 166 "data/maps/PewterCity_Frlg/scripts.pory"
# 316 "data/maps/PewterCity_Frlg/scripts.pory"
	step_end
# 317 "data/maps/PewterCity_Frlg/scripts.pory"

# 318 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Movement_PlayerWalkToGymEast::
# 319 "data/maps/PewterCity_Frlg/scripts.pory"
# 170 "data/maps/PewterCity_Frlg/scripts.pory"
# 320 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 321 "data/maps/PewterCity_Frlg/scripts.pory"
# 171 "data/maps/PewterCity_Frlg/scripts.pory"
# 322 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_to_gym
# 323 "data/maps/PewterCity_Frlg/scripts.pory"
# 172 "data/maps/PewterCity_Frlg/scripts.pory"
# 324 "data/maps/PewterCity_Frlg/scripts.pory"
	step_end
# 325 "data/maps/PewterCity_Frlg/scripts.pory"
	return
# 326 "data/maps/PewterCity_Frlg/scripts.pory"

# 327 "data/maps/PewterCity_Frlg/scripts.pory"

# 328 "data/maps/PewterCity_Frlg/scripts.pory"
# 175 "data/maps/PewterCity_Frlg/scripts.pory"
# 329 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Movement_PlayerWaitForGuideWest:
# 330 "data/maps/PewterCity_Frlg/scripts.pory"
# 176 "data/maps/PewterCity_Frlg/scripts.pory"
# 331 "data/maps/PewterCity_Frlg/scripts.pory"
	delay_16
# 332 "data/maps/PewterCity_Frlg/scripts.pory"
# 177 "data/maps/PewterCity_Frlg/scripts.pory"
# 333 "data/maps/PewterCity_Frlg/scripts.pory"
	step_end
# 334 "data/maps/PewterCity_Frlg/scripts.pory"

# 335 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Movement_PlayerWalkToGymWest::
# 336 "data/maps/PewterCity_Frlg/scripts.pory"
# 181 "data/maps/PewterCity_Frlg/scripts.pory"
# 337 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 338 "data/maps/PewterCity_Frlg/scripts.pory"
# 182 "data/maps/PewterCity_Frlg/scripts.pory"
# 339 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 340 "data/maps/PewterCity_Frlg/scripts.pory"
# 183 "data/maps/PewterCity_Frlg/scripts.pory"
# 341 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 342 "data/maps/PewterCity_Frlg/scripts.pory"
# 184 "data/maps/PewterCity_Frlg/scripts.pory"
# 343 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 344 "data/maps/PewterCity_Frlg/scripts.pory"
# 185 "data/maps/PewterCity_Frlg/scripts.pory"
# 345 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 346 "data/maps/PewterCity_Frlg/scripts.pory"
# 186 "data/maps/PewterCity_Frlg/scripts.pory"
# 347 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_to_gym_alt
# 348 "data/maps/PewterCity_Frlg/scripts.pory"
# 187 "data/maps/PewterCity_Frlg/scripts.pory"
# 349 "data/maps/PewterCity_Frlg/scripts.pory"
	step_end
# 350 "data/maps/PewterCity_Frlg/scripts.pory"
	return
# 351 "data/maps/PewterCity_Frlg/scripts.pory"

# 352 "data/maps/PewterCity_Frlg/scripts.pory"

# 353 "data/maps/PewterCity_Frlg/scripts.pory"
# 190 "data/maps/PewterCity_Frlg/scripts.pory"
# 354 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Movement_PlayerWaitForGuideNorth:
# 355 "data/maps/PewterCity_Frlg/scripts.pory"
# 191 "data/maps/PewterCity_Frlg/scripts.pory"
# 356 "data/maps/PewterCity_Frlg/scripts.pory"
	delay_16
# 357 "data/maps/PewterCity_Frlg/scripts.pory"
# 192 "data/maps/PewterCity_Frlg/scripts.pory"
# 358 "data/maps/PewterCity_Frlg/scripts.pory"
	step_end
# 359 "data/maps/PewterCity_Frlg/scripts.pory"

# 360 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Movement_PlayerWalkToGymNorth::
# 361 "data/maps/PewterCity_Frlg/scripts.pory"
# 196 "data/maps/PewterCity_Frlg/scripts.pory"
# 362 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 363 "data/maps/PewterCity_Frlg/scripts.pory"
# 197 "data/maps/PewterCity_Frlg/scripts.pory"
# 364 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 365 "data/maps/PewterCity_Frlg/scripts.pory"
# 198 "data/maps/PewterCity_Frlg/scripts.pory"
# 366 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 367 "data/maps/PewterCity_Frlg/scripts.pory"
# 199 "data/maps/PewterCity_Frlg/scripts.pory"
# 368 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 369 "data/maps/PewterCity_Frlg/scripts.pory"
# 200 "data/maps/PewterCity_Frlg/scripts.pory"
# 370 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 371 "data/maps/PewterCity_Frlg/scripts.pory"
# 201 "data/maps/PewterCity_Frlg/scripts.pory"
# 372 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_to_gym_alt
# 373 "data/maps/PewterCity_Frlg/scripts.pory"
# 202 "data/maps/PewterCity_Frlg/scripts.pory"
# 374 "data/maps/PewterCity_Frlg/scripts.pory"
	step_end
# 375 "data/maps/PewterCity_Frlg/scripts.pory"
	return
# 376 "data/maps/PewterCity_Frlg/scripts.pory"

# 377 "data/maps/PewterCity_Frlg/scripts.pory"

# 378 "data/maps/PewterCity_Frlg/scripts.pory"
# 205 "data/maps/PewterCity_Frlg/scripts.pory"
# 379 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Movement_GuideMoveToLeadEast:
# 380 "data/maps/PewterCity_Frlg/scripts.pory"
# 206 "data/maps/PewterCity_Frlg/scripts.pory"
# 381 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 382 "data/maps/PewterCity_Frlg/scripts.pory"
# 207 "data/maps/PewterCity_Frlg/scripts.pory"
# 383 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 384 "data/maps/PewterCity_Frlg/scripts.pory"
# 208 "data/maps/PewterCity_Frlg/scripts.pory"
# 385 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_in_place_faster_up
# 386 "data/maps/PewterCity_Frlg/scripts.pory"
# 209 "data/maps/PewterCity_Frlg/scripts.pory"
# 387 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_in_place_up
# 388 "data/maps/PewterCity_Frlg/scripts.pory"
# 210 "data/maps/PewterCity_Frlg/scripts.pory"
# 389 "data/maps/PewterCity_Frlg/scripts.pory"
	step_end
# 390 "data/maps/PewterCity_Frlg/scripts.pory"

# 391 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Movement_GuideWalkToGymEast::
# 392 "data/maps/PewterCity_Frlg/scripts.pory"
# 214 "data/maps/PewterCity_Frlg/scripts.pory"
# 393 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_to_gym
# 394 "data/maps/PewterCity_Frlg/scripts.pory"
# 215 "data/maps/PewterCity_Frlg/scripts.pory"
# 395 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
# 396 "data/maps/PewterCity_Frlg/scripts.pory"
# 216 "data/maps/PewterCity_Frlg/scripts.pory"
# 397 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_in_place_faster_left
# 398 "data/maps/PewterCity_Frlg/scripts.pory"
# 217 "data/maps/PewterCity_Frlg/scripts.pory"
# 399 "data/maps/PewterCity_Frlg/scripts.pory"
	step_end
# 400 "data/maps/PewterCity_Frlg/scripts.pory"
	return
# 401 "data/maps/PewterCity_Frlg/scripts.pory"

# 402 "data/maps/PewterCity_Frlg/scripts.pory"

# 403 "data/maps/PewterCity_Frlg/scripts.pory"
# 220 "data/maps/PewterCity_Frlg/scripts.pory"
# 404 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Movement_GuideMoveToLeadWest:
# 405 "data/maps/PewterCity_Frlg/scripts.pory"
# 221 "data/maps/PewterCity_Frlg/scripts.pory"
# 406 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_in_place_right
# 407 "data/maps/PewterCity_Frlg/scripts.pory"
# 222 "data/maps/PewterCity_Frlg/scripts.pory"
# 408 "data/maps/PewterCity_Frlg/scripts.pory"
	step_end
# 409 "data/maps/PewterCity_Frlg/scripts.pory"

# 410 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Movement_GuideWalkToGymWest::
# 411 "data/maps/PewterCity_Frlg/scripts.pory"
# 226 "data/maps/PewterCity_Frlg/scripts.pory"
# 412 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 413 "data/maps/PewterCity_Frlg/scripts.pory"
# 227 "data/maps/PewterCity_Frlg/scripts.pory"
# 414 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 415 "data/maps/PewterCity_Frlg/scripts.pory"
# 228 "data/maps/PewterCity_Frlg/scripts.pory"
# 416 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 417 "data/maps/PewterCity_Frlg/scripts.pory"
# 229 "data/maps/PewterCity_Frlg/scripts.pory"
# 418 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 419 "data/maps/PewterCity_Frlg/scripts.pory"
# 230 "data/maps/PewterCity_Frlg/scripts.pory"
# 420 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_to_gym_alt
# 421 "data/maps/PewterCity_Frlg/scripts.pory"
# 231 "data/maps/PewterCity_Frlg/scripts.pory"
# 422 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
# 423 "data/maps/PewterCity_Frlg/scripts.pory"
# 232 "data/maps/PewterCity_Frlg/scripts.pory"
# 424 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_in_place_faster_left
# 425 "data/maps/PewterCity_Frlg/scripts.pory"
# 233 "data/maps/PewterCity_Frlg/scripts.pory"
# 426 "data/maps/PewterCity_Frlg/scripts.pory"
	step_end
# 427 "data/maps/PewterCity_Frlg/scripts.pory"
	return
# 428 "data/maps/PewterCity_Frlg/scripts.pory"

# 429 "data/maps/PewterCity_Frlg/scripts.pory"

# 430 "data/maps/PewterCity_Frlg/scripts.pory"
# 236 "data/maps/PewterCity_Frlg/scripts.pory"
# 431 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Movement_GuideMoveToLeadNorth:
# 432 "data/maps/PewterCity_Frlg/scripts.pory"
# 237 "data/maps/PewterCity_Frlg/scripts.pory"
# 433 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_in_place_down
# 434 "data/maps/PewterCity_Frlg/scripts.pory"
# 238 "data/maps/PewterCity_Frlg/scripts.pory"
# 435 "data/maps/PewterCity_Frlg/scripts.pory"
	step_end
# 436 "data/maps/PewterCity_Frlg/scripts.pory"

# 437 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Movement_GuideWalkToGymNorth::
# 438 "data/maps/PewterCity_Frlg/scripts.pory"
# 242 "data/maps/PewterCity_Frlg/scripts.pory"
# 439 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 440 "data/maps/PewterCity_Frlg/scripts.pory"
# 243 "data/maps/PewterCity_Frlg/scripts.pory"
# 441 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 442 "data/maps/PewterCity_Frlg/scripts.pory"
# 244 "data/maps/PewterCity_Frlg/scripts.pory"
# 443 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 444 "data/maps/PewterCity_Frlg/scripts.pory"
# 245 "data/maps/PewterCity_Frlg/scripts.pory"
# 445 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 446 "data/maps/PewterCity_Frlg/scripts.pory"
# 246 "data/maps/PewterCity_Frlg/scripts.pory"
# 447 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_to_gym_alt
# 448 "data/maps/PewterCity_Frlg/scripts.pory"
# 247 "data/maps/PewterCity_Frlg/scripts.pory"
# 449 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
# 450 "data/maps/PewterCity_Frlg/scripts.pory"
# 248 "data/maps/PewterCity_Frlg/scripts.pory"
# 451 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_in_place_faster_left
# 452 "data/maps/PewterCity_Frlg/scripts.pory"
# 249 "data/maps/PewterCity_Frlg/scripts.pory"
# 453 "data/maps/PewterCity_Frlg/scripts.pory"
	step_end
# 454 "data/maps/PewterCity_Frlg/scripts.pory"
	return
# 455 "data/maps/PewterCity_Frlg/scripts.pory"

# 456 "data/maps/PewterCity_Frlg/scripts.pory"

# 457 "data/maps/PewterCity_Frlg/scripts.pory"
# 252 "data/maps/PewterCity_Frlg/scripts.pory"
# 458 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Movement_GymGuideExit:
# 459 "data/maps/PewterCity_Frlg/scripts.pory"
# 253 "data/maps/PewterCity_Frlg/scripts.pory"
# 460 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 461 "data/maps/PewterCity_Frlg/scripts.pory"
# 254 "data/maps/PewterCity_Frlg/scripts.pory"
# 462 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 463 "data/maps/PewterCity_Frlg/scripts.pory"
# 255 "data/maps/PewterCity_Frlg/scripts.pory"
# 464 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 465 "data/maps/PewterCity_Frlg/scripts.pory"
# 256 "data/maps/PewterCity_Frlg/scripts.pory"
# 466 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 467 "data/maps/PewterCity_Frlg/scripts.pory"
# 257 "data/maps/PewterCity_Frlg/scripts.pory"
# 468 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 469 "data/maps/PewterCity_Frlg/scripts.pory"
# 258 "data/maps/PewterCity_Frlg/scripts.pory"
# 470 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 471 "data/maps/PewterCity_Frlg/scripts.pory"
# 259 "data/maps/PewterCity_Frlg/scripts.pory"
# 472 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 473 "data/maps/PewterCity_Frlg/scripts.pory"
# 260 "data/maps/PewterCity_Frlg/scripts.pory"
# 474 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 475 "data/maps/PewterCity_Frlg/scripts.pory"
# 261 "data/maps/PewterCity_Frlg/scripts.pory"
# 476 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 477 "data/maps/PewterCity_Frlg/scripts.pory"
# 262 "data/maps/PewterCity_Frlg/scripts.pory"
# 478 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 479 "data/maps/PewterCity_Frlg/scripts.pory"
# 263 "data/maps/PewterCity_Frlg/scripts.pory"
# 480 "data/maps/PewterCity_Frlg/scripts.pory"
	step_end
# 481 "data/maps/PewterCity_Frlg/scripts.pory"

# 482 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_EventScript_GymGuideTriggerTop::
# 483 "data/maps/PewterCity_Frlg/scripts.pory"
# 267 "data/maps/PewterCity_Frlg/scripts.pory"
# 484 "data/maps/PewterCity_Frlg/scripts.pory"
	lockall
# 485 "data/maps/PewterCity_Frlg/scripts.pory"
# 268 "data/maps/PewterCity_Frlg/scripts.pory"
# 486 "data/maps/PewterCity_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 0
# 487 "data/maps/PewterCity_Frlg/scripts.pory"
# 269 "data/maps/PewterCity_Frlg/scripts.pory"
# 488 "data/maps/PewterCity_Frlg/scripts.pory"
	goto PewterCity_EventScript_GymGuideTrigger
# 489 "data/maps/PewterCity_Frlg/scripts.pory"
	end
# 490 "data/maps/PewterCity_Frlg/scripts.pory"

# 491 "data/maps/PewterCity_Frlg/scripts.pory"

# 492 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_EventScript_GymGuideTriggerMid::
# 493 "data/maps/PewterCity_Frlg/scripts.pory"
# 274 "data/maps/PewterCity_Frlg/scripts.pory"
# 494 "data/maps/PewterCity_Frlg/scripts.pory"
	lockall
# 495 "data/maps/PewterCity_Frlg/scripts.pory"
# 275 "data/maps/PewterCity_Frlg/scripts.pory"
# 496 "data/maps/PewterCity_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 1
# 497 "data/maps/PewterCity_Frlg/scripts.pory"
# 276 "data/maps/PewterCity_Frlg/scripts.pory"
# 498 "data/maps/PewterCity_Frlg/scripts.pory"
	goto PewterCity_EventScript_GymGuideTrigger
# 499 "data/maps/PewterCity_Frlg/scripts.pory"
	end
# 500 "data/maps/PewterCity_Frlg/scripts.pory"

# 501 "data/maps/PewterCity_Frlg/scripts.pory"

# 502 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_EventScript_GymGuideTriggerBottom::
# 503 "data/maps/PewterCity_Frlg/scripts.pory"
# 281 "data/maps/PewterCity_Frlg/scripts.pory"
# 504 "data/maps/PewterCity_Frlg/scripts.pory"
	lockall
# 505 "data/maps/PewterCity_Frlg/scripts.pory"
# 282 "data/maps/PewterCity_Frlg/scripts.pory"
# 506 "data/maps/PewterCity_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 2
# 507 "data/maps/PewterCity_Frlg/scripts.pory"
# 283 "data/maps/PewterCity_Frlg/scripts.pory"
# 508 "data/maps/PewterCity_Frlg/scripts.pory"
	goto PewterCity_EventScript_GymGuideTrigger
# 509 "data/maps/PewterCity_Frlg/scripts.pory"
	end
# 510 "data/maps/PewterCity_Frlg/scripts.pory"

# 511 "data/maps/PewterCity_Frlg/scripts.pory"

# 512 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_EventScript_GymGuideTriggerRight::
# 513 "data/maps/PewterCity_Frlg/scripts.pory"
# 288 "data/maps/PewterCity_Frlg/scripts.pory"
# 514 "data/maps/PewterCity_Frlg/scripts.pory"
	lockall
# 515 "data/maps/PewterCity_Frlg/scripts.pory"
# 289 "data/maps/PewterCity_Frlg/scripts.pory"
# 516 "data/maps/PewterCity_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 3
# 517 "data/maps/PewterCity_Frlg/scripts.pory"
# 290 "data/maps/PewterCity_Frlg/scripts.pory"
# 518 "data/maps/PewterCity_Frlg/scripts.pory"
	goto PewterCity_EventScript_GymGuideTrigger
# 519 "data/maps/PewterCity_Frlg/scripts.pory"
	end
# 520 "data/maps/PewterCity_Frlg/scripts.pory"

# 521 "data/maps/PewterCity_Frlg/scripts.pory"

# 522 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_EventScript_GymGuideTrigger::
# 523 "data/maps/PewterCity_Frlg/scripts.pory"
# 295 "data/maps/PewterCity_Frlg/scripts.pory"
# 524 "data/maps/PewterCity_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 525 "data/maps/PewterCity_Frlg/scripts.pory"
# 296 "data/maps/PewterCity_Frlg/scripts.pory"
# 526 "data/maps/PewterCity_Frlg/scripts.pory"
	msgbox PewterCity_Text_BrocksLookingForChallengersFollowMe
# 527 "data/maps/PewterCity_Frlg/scripts.pory"
# 297 "data/maps/PewterCity_Frlg/scripts.pory"
# 528 "data/maps/PewterCity_Frlg/scripts.pory"
	closemessage
# 529 "data/maps/PewterCity_Frlg/scripts.pory"
# 298 "data/maps/PewterCity_Frlg/scripts.pory"
# 530 "data/maps/PewterCity_Frlg/scripts.pory"
	playbgm MUS_FOLLOW_ME, 0
# 531 "data/maps/PewterCity_Frlg/scripts.pory"
# 299 "data/maps/PewterCity_Frlg/scripts.pory"
# 532 "data/maps/PewterCity_Frlg/scripts.pory"
	compare VAR_TEMP_1, 0
# 533 "data/maps/PewterCity_Frlg/scripts.pory"
	goto_if_eq PewterCity_EventScript_GymGuideTrigger_2
# 534 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_EventScript_GymGuideTrigger_1:
# 535 "data/maps/PewterCity_Frlg/scripts.pory"
# 302 "data/maps/PewterCity_Frlg/scripts.pory"
# 536 "data/maps/PewterCity_Frlg/scripts.pory"
	compare VAR_TEMP_1, 1
# 537 "data/maps/PewterCity_Frlg/scripts.pory"
	goto_if_eq PewterCity_EventScript_GymGuideTrigger_5
# 538 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_EventScript_GymGuideTrigger_4:
# 539 "data/maps/PewterCity_Frlg/scripts.pory"
# 305 "data/maps/PewterCity_Frlg/scripts.pory"
# 540 "data/maps/PewterCity_Frlg/scripts.pory"
	compare VAR_TEMP_1, 2
# 541 "data/maps/PewterCity_Frlg/scripts.pory"
	goto_if_eq PewterCity_EventScript_GymGuideTrigger_8
# 542 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_EventScript_GymGuideTrigger_7:
# 543 "data/maps/PewterCity_Frlg/scripts.pory"
# 308 "data/maps/PewterCity_Frlg/scripts.pory"
# 544 "data/maps/PewterCity_Frlg/scripts.pory"
	msgbox PewterCity_Text_GoTakeOnBrock
# 545 "data/maps/PewterCity_Frlg/scripts.pory"
# 309 "data/maps/PewterCity_Frlg/scripts.pory"
# 546 "data/maps/PewterCity_Frlg/scripts.pory"
	closemessage
# 547 "data/maps/PewterCity_Frlg/scripts.pory"
# 310 "data/maps/PewterCity_Frlg/scripts.pory"
# 548 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PEWTER_GYM_GUIDE, PewterCity_Movement_GymGuideExit
# 549 "data/maps/PewterCity_Frlg/scripts.pory"
# 311 "data/maps/PewterCity_Frlg/scripts.pory"
# 550 "data/maps/PewterCity_Frlg/scripts.pory"
	waitmovement 0
# 551 "data/maps/PewterCity_Frlg/scripts.pory"
# 312 "data/maps/PewterCity_Frlg/scripts.pory"
# 552 "data/maps/PewterCity_Frlg/scripts.pory"
	fadedefaultbgm
# 553 "data/maps/PewterCity_Frlg/scripts.pory"
# 313 "data/maps/PewterCity_Frlg/scripts.pory"
# 554 "data/maps/PewterCity_Frlg/scripts.pory"
	removeobject LOCALID_PEWTER_GYM_GUIDE
# 555 "data/maps/PewterCity_Frlg/scripts.pory"
# 314 "data/maps/PewterCity_Frlg/scripts.pory"
# 556 "data/maps/PewterCity_Frlg/scripts.pory"
	clearflag FLAG_HIDE_PEWTER_CITY_GYM_GUIDE
# 557 "data/maps/PewterCity_Frlg/scripts.pory"
# 315 "data/maps/PewterCity_Frlg/scripts.pory"
# 558 "data/maps/PewterCity_Frlg/scripts.pory"
	releaseall
# 559 "data/maps/PewterCity_Frlg/scripts.pory"
	end
# 560 "data/maps/PewterCity_Frlg/scripts.pory"

# 561 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_EventScript_GymGuideTrigger_2:
# 562 "data/maps/PewterCity_Frlg/scripts.pory"
# 300 "data/maps/PewterCity_Frlg/scripts.pory"
# 563 "data/maps/PewterCity_Frlg/scripts.pory"
	call PewterCity_EventScript_WalkToGymTop
# 564 "data/maps/PewterCity_Frlg/scripts.pory"
	goto PewterCity_EventScript_GymGuideTrigger_1
# 565 "data/maps/PewterCity_Frlg/scripts.pory"

# 566 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_EventScript_GymGuideTrigger_5:
# 567 "data/maps/PewterCity_Frlg/scripts.pory"
# 303 "data/maps/PewterCity_Frlg/scripts.pory"
# 568 "data/maps/PewterCity_Frlg/scripts.pory"
	call PewterCity_EventScript_WalkToGymMid
# 569 "data/maps/PewterCity_Frlg/scripts.pory"
	goto PewterCity_EventScript_GymGuideTrigger_4
# 570 "data/maps/PewterCity_Frlg/scripts.pory"

# 571 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_EventScript_GymGuideTrigger_8:
# 572 "data/maps/PewterCity_Frlg/scripts.pory"
# 306 "data/maps/PewterCity_Frlg/scripts.pory"
# 573 "data/maps/PewterCity_Frlg/scripts.pory"
	call PewterCity_EventScript_WalkToGymBottom
# 574 "data/maps/PewterCity_Frlg/scripts.pory"
	goto PewterCity_EventScript_GymGuideTrigger_7
# 575 "data/maps/PewterCity_Frlg/scripts.pory"

# 576 "data/maps/PewterCity_Frlg/scripts.pory"

# 577 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_EventScript_WalkToGymTop::
# 578 "data/maps/PewterCity_Frlg/scripts.pory"
# 320 "data/maps/PewterCity_Frlg/scripts.pory"
# 579 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PEWTER_GYM_GUIDE, PewterCity_Movement_GuideMoveToLeadTop
# 580 "data/maps/PewterCity_Frlg/scripts.pory"
# 321 "data/maps/PewterCity_Frlg/scripts.pory"
# 581 "data/maps/PewterCity_Frlg/scripts.pory"
	waitmovement 0
# 582 "data/maps/PewterCity_Frlg/scripts.pory"
# 322 "data/maps/PewterCity_Frlg/scripts.pory"
# 583 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PewterCity_Movement_PlayerWalkToGymTop
# 584 "data/maps/PewterCity_Frlg/scripts.pory"
# 323 "data/maps/PewterCity_Frlg/scripts.pory"
# 585 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PEWTER_GYM_GUIDE, PewterCity_Movement_GuideWalkToGymTop
# 586 "data/maps/PewterCity_Frlg/scripts.pory"
# 324 "data/maps/PewterCity_Frlg/scripts.pory"
# 587 "data/maps/PewterCity_Frlg/scripts.pory"
	waitmovement 0
# 588 "data/maps/PewterCity_Frlg/scripts.pory"
	return
# 589 "data/maps/PewterCity_Frlg/scripts.pory"

# 590 "data/maps/PewterCity_Frlg/scripts.pory"

# 591 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_EventScript_WalkToGymMid::
# 592 "data/maps/PewterCity_Frlg/scripts.pory"
# 329 "data/maps/PewterCity_Frlg/scripts.pory"
# 593 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PEWTER_GYM_GUIDE, PewterCity_Movement_GuideMoveToLeadMid
# 594 "data/maps/PewterCity_Frlg/scripts.pory"
# 330 "data/maps/PewterCity_Frlg/scripts.pory"
# 595 "data/maps/PewterCity_Frlg/scripts.pory"
	waitmovement 0
# 596 "data/maps/PewterCity_Frlg/scripts.pory"
# 331 "data/maps/PewterCity_Frlg/scripts.pory"
# 597 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PewterCity_Movement_PlayerWalkToGymMid
# 598 "data/maps/PewterCity_Frlg/scripts.pory"
# 332 "data/maps/PewterCity_Frlg/scripts.pory"
# 599 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PEWTER_GYM_GUIDE, PewterCity_Movement_GuideWalkToGymMid
# 600 "data/maps/PewterCity_Frlg/scripts.pory"
# 333 "data/maps/PewterCity_Frlg/scripts.pory"
# 601 "data/maps/PewterCity_Frlg/scripts.pory"
	waitmovement 0
# 602 "data/maps/PewterCity_Frlg/scripts.pory"
	return
# 603 "data/maps/PewterCity_Frlg/scripts.pory"

# 604 "data/maps/PewterCity_Frlg/scripts.pory"

# 605 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_EventScript_WalkToGymBottom::
# 606 "data/maps/PewterCity_Frlg/scripts.pory"
# 338 "data/maps/PewterCity_Frlg/scripts.pory"
# 607 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PEWTER_GYM_GUIDE, PewterCity_Movement_GuideMoveToLeadBottom
# 608 "data/maps/PewterCity_Frlg/scripts.pory"
# 339 "data/maps/PewterCity_Frlg/scripts.pory"
# 609 "data/maps/PewterCity_Frlg/scripts.pory"
	waitmovement 0
# 610 "data/maps/PewterCity_Frlg/scripts.pory"
# 340 "data/maps/PewterCity_Frlg/scripts.pory"
# 611 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PewterCity_Movement_PlayerWalkToGymBottom
# 612 "data/maps/PewterCity_Frlg/scripts.pory"
# 341 "data/maps/PewterCity_Frlg/scripts.pory"
# 613 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PEWTER_GYM_GUIDE, PewterCity_Movement_GuideWalkToGymBottom
# 614 "data/maps/PewterCity_Frlg/scripts.pory"
# 342 "data/maps/PewterCity_Frlg/scripts.pory"
# 615 "data/maps/PewterCity_Frlg/scripts.pory"
	waitmovement 0
# 616 "data/maps/PewterCity_Frlg/scripts.pory"
	return
# 617 "data/maps/PewterCity_Frlg/scripts.pory"

# 618 "data/maps/PewterCity_Frlg/scripts.pory"

# 619 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_EventScript_WalkToGymRight::
# 620 "data/maps/PewterCity_Frlg/scripts.pory"
# 347 "data/maps/PewterCity_Frlg/scripts.pory"
# 621 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PEWTER_GYM_GUIDE, PewterCity_Movement_GuideApproachPlayerRight
# 622 "data/maps/PewterCity_Frlg/scripts.pory"
# 348 "data/maps/PewterCity_Frlg/scripts.pory"
# 623 "data/maps/PewterCity_Frlg/scripts.pory"
	waitmovement 0
# 624 "data/maps/PewterCity_Frlg/scripts.pory"
# 349 "data/maps/PewterCity_Frlg/scripts.pory"
# 625 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PewterCity_Movement_PlayerWalkToGymRight
# 626 "data/maps/PewterCity_Frlg/scripts.pory"
# 350 "data/maps/PewterCity_Frlg/scripts.pory"
# 627 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PEWTER_GYM_GUIDE, PewterCity_Movement_GuideWalkToGymRight
# 628 "data/maps/PewterCity_Frlg/scripts.pory"
# 351 "data/maps/PewterCity_Frlg/scripts.pory"
# 629 "data/maps/PewterCity_Frlg/scripts.pory"
	waitmovement 0
# 630 "data/maps/PewterCity_Frlg/scripts.pory"
	return
# 631 "data/maps/PewterCity_Frlg/scripts.pory"

# 632 "data/maps/PewterCity_Frlg/scripts.pory"

# 633 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Movement_PlayerWalkToGymTop::
# 634 "data/maps/PewterCity_Frlg/scripts.pory"
# 356 "data/maps/PewterCity_Frlg/scripts.pory"
# 635 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 636 "data/maps/PewterCity_Frlg/scripts.pory"
# 357 "data/maps/PewterCity_Frlg/scripts.pory"
# 637 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_to_gym
# 638 "data/maps/PewterCity_Frlg/scripts.pory"
# 358 "data/maps/PewterCity_Frlg/scripts.pory"
# 639 "data/maps/PewterCity_Frlg/scripts.pory"
	step_end
# 640 "data/maps/PewterCity_Frlg/scripts.pory"
	return
# 641 "data/maps/PewterCity_Frlg/scripts.pory"

# 642 "data/maps/PewterCity_Frlg/scripts.pory"

# 643 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Movement_PlayerWalkToGymMid::
# 644 "data/maps/PewterCity_Frlg/scripts.pory"
# 362 "data/maps/PewterCity_Frlg/scripts.pory"
# 645 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 646 "data/maps/PewterCity_Frlg/scripts.pory"
# 363 "data/maps/PewterCity_Frlg/scripts.pory"
# 647 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 648 "data/maps/PewterCity_Frlg/scripts.pory"
# 364 "data/maps/PewterCity_Frlg/scripts.pory"
# 649 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_to_gym
# 650 "data/maps/PewterCity_Frlg/scripts.pory"
# 365 "data/maps/PewterCity_Frlg/scripts.pory"
# 651 "data/maps/PewterCity_Frlg/scripts.pory"
	step_end
# 652 "data/maps/PewterCity_Frlg/scripts.pory"
	return
# 653 "data/maps/PewterCity_Frlg/scripts.pory"

# 654 "data/maps/PewterCity_Frlg/scripts.pory"

# 655 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Movement_PlayerWalkToGymBottom::
# 656 "data/maps/PewterCity_Frlg/scripts.pory"
# 369 "data/maps/PewterCity_Frlg/scripts.pory"
# 657 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 658 "data/maps/PewterCity_Frlg/scripts.pory"
# 370 "data/maps/PewterCity_Frlg/scripts.pory"
# 659 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 660 "data/maps/PewterCity_Frlg/scripts.pory"
# 371 "data/maps/PewterCity_Frlg/scripts.pory"
# 661 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 662 "data/maps/PewterCity_Frlg/scripts.pory"
# 372 "data/maps/PewterCity_Frlg/scripts.pory"
# 663 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_to_gym
# 664 "data/maps/PewterCity_Frlg/scripts.pory"
# 373 "data/maps/PewterCity_Frlg/scripts.pory"
# 665 "data/maps/PewterCity_Frlg/scripts.pory"
	step_end
# 666 "data/maps/PewterCity_Frlg/scripts.pory"
	return
# 667 "data/maps/PewterCity_Frlg/scripts.pory"

# 668 "data/maps/PewterCity_Frlg/scripts.pory"

# 669 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Movement_PlayerWalkToGymRight::
# 670 "data/maps/PewterCity_Frlg/scripts.pory"
# 377 "data/maps/PewterCity_Frlg/scripts.pory"
# 671 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 672 "data/maps/PewterCity_Frlg/scripts.pory"
# 378 "data/maps/PewterCity_Frlg/scripts.pory"
# 673 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 674 "data/maps/PewterCity_Frlg/scripts.pory"
# 379 "data/maps/PewterCity_Frlg/scripts.pory"
# 675 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 676 "data/maps/PewterCity_Frlg/scripts.pory"
# 380 "data/maps/PewterCity_Frlg/scripts.pory"
# 677 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 678 "data/maps/PewterCity_Frlg/scripts.pory"
# 381 "data/maps/PewterCity_Frlg/scripts.pory"
# 679 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 680 "data/maps/PewterCity_Frlg/scripts.pory"
# 382 "data/maps/PewterCity_Frlg/scripts.pory"
# 681 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 682 "data/maps/PewterCity_Frlg/scripts.pory"
# 383 "data/maps/PewterCity_Frlg/scripts.pory"
# 683 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 684 "data/maps/PewterCity_Frlg/scripts.pory"
# 384 "data/maps/PewterCity_Frlg/scripts.pory"
# 685 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 686 "data/maps/PewterCity_Frlg/scripts.pory"
# 385 "data/maps/PewterCity_Frlg/scripts.pory"
# 687 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 688 "data/maps/PewterCity_Frlg/scripts.pory"
# 386 "data/maps/PewterCity_Frlg/scripts.pory"
# 689 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 690 "data/maps/PewterCity_Frlg/scripts.pory"
# 387 "data/maps/PewterCity_Frlg/scripts.pory"
# 691 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_to_gym_alt
# 692 "data/maps/PewterCity_Frlg/scripts.pory"
# 388 "data/maps/PewterCity_Frlg/scripts.pory"
# 693 "data/maps/PewterCity_Frlg/scripts.pory"
	step_end
# 694 "data/maps/PewterCity_Frlg/scripts.pory"
	return
# 695 "data/maps/PewterCity_Frlg/scripts.pory"

# 696 "data/maps/PewterCity_Frlg/scripts.pory"

# 697 "data/maps/PewterCity_Frlg/scripts.pory"
# 391 "data/maps/PewterCity_Frlg/scripts.pory"
# 698 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Movement_GuideMoveToLeadTop:
# 699 "data/maps/PewterCity_Frlg/scripts.pory"
# 392 "data/maps/PewterCity_Frlg/scripts.pory"
# 700 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 701 "data/maps/PewterCity_Frlg/scripts.pory"
# 393 "data/maps/PewterCity_Frlg/scripts.pory"
# 702 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 703 "data/maps/PewterCity_Frlg/scripts.pory"
# 394 "data/maps/PewterCity_Frlg/scripts.pory"
# 704 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_in_place_faster_right
# 705 "data/maps/PewterCity_Frlg/scripts.pory"
# 395 "data/maps/PewterCity_Frlg/scripts.pory"
# 706 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_in_place_right
# 707 "data/maps/PewterCity_Frlg/scripts.pory"
# 396 "data/maps/PewterCity_Frlg/scripts.pory"
# 708 "data/maps/PewterCity_Frlg/scripts.pory"
	step_end
# 709 "data/maps/PewterCity_Frlg/scripts.pory"

# 710 "data/maps/PewterCity_Frlg/scripts.pory"
# 399 "data/maps/PewterCity_Frlg/scripts.pory"
# 711 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Movement_GuideMoveToLeadMid:
# 712 "data/maps/PewterCity_Frlg/scripts.pory"
# 400 "data/maps/PewterCity_Frlg/scripts.pory"
# 713 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 714 "data/maps/PewterCity_Frlg/scripts.pory"
# 401 "data/maps/PewterCity_Frlg/scripts.pory"
# 715 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_in_place_down
# 716 "data/maps/PewterCity_Frlg/scripts.pory"
# 402 "data/maps/PewterCity_Frlg/scripts.pory"
# 717 "data/maps/PewterCity_Frlg/scripts.pory"
	step_end
# 718 "data/maps/PewterCity_Frlg/scripts.pory"

# 719 "data/maps/PewterCity_Frlg/scripts.pory"
# 405 "data/maps/PewterCity_Frlg/scripts.pory"
# 720 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Movement_GuideMoveToLeadBottom:
# 721 "data/maps/PewterCity_Frlg/scripts.pory"
# 406 "data/maps/PewterCity_Frlg/scripts.pory"
# 722 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 723 "data/maps/PewterCity_Frlg/scripts.pory"
# 407 "data/maps/PewterCity_Frlg/scripts.pory"
# 724 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 725 "data/maps/PewterCity_Frlg/scripts.pory"
# 408 "data/maps/PewterCity_Frlg/scripts.pory"
# 726 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_in_place_down
# 727 "data/maps/PewterCity_Frlg/scripts.pory"
# 409 "data/maps/PewterCity_Frlg/scripts.pory"
# 728 "data/maps/PewterCity_Frlg/scripts.pory"
	step_end
# 729 "data/maps/PewterCity_Frlg/scripts.pory"

# 730 "data/maps/PewterCity_Frlg/scripts.pory"
# 412 "data/maps/PewterCity_Frlg/scripts.pory"
# 731 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Movement_GuideApproachPlayerRight:
# 732 "data/maps/PewterCity_Frlg/scripts.pory"
# 413 "data/maps/PewterCity_Frlg/scripts.pory"
# 733 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 734 "data/maps/PewterCity_Frlg/scripts.pory"
# 414 "data/maps/PewterCity_Frlg/scripts.pory"
# 735 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 736 "data/maps/PewterCity_Frlg/scripts.pory"
# 415 "data/maps/PewterCity_Frlg/scripts.pory"
# 737 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
# 738 "data/maps/PewterCity_Frlg/scripts.pory"
# 416 "data/maps/PewterCity_Frlg/scripts.pory"
# 739 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 740 "data/maps/PewterCity_Frlg/scripts.pory"
# 417 "data/maps/PewterCity_Frlg/scripts.pory"
# 741 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
# 742 "data/maps/PewterCity_Frlg/scripts.pory"
# 418 "data/maps/PewterCity_Frlg/scripts.pory"
# 743 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_in_place_right
# 744 "data/maps/PewterCity_Frlg/scripts.pory"
# 419 "data/maps/PewterCity_Frlg/scripts.pory"
# 745 "data/maps/PewterCity_Frlg/scripts.pory"
	step_end
# 746 "data/maps/PewterCity_Frlg/scripts.pory"

# 747 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Movement_GuideWalkToGymTop::
# 748 "data/maps/PewterCity_Frlg/scripts.pory"
# 423 "data/maps/PewterCity_Frlg/scripts.pory"
# 749 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_to_gym
# 750 "data/maps/PewterCity_Frlg/scripts.pory"
# 424 "data/maps/PewterCity_Frlg/scripts.pory"
# 751 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
# 752 "data/maps/PewterCity_Frlg/scripts.pory"
# 425 "data/maps/PewterCity_Frlg/scripts.pory"
# 753 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_in_place_faster_left
# 754 "data/maps/PewterCity_Frlg/scripts.pory"
# 426 "data/maps/PewterCity_Frlg/scripts.pory"
# 755 "data/maps/PewterCity_Frlg/scripts.pory"
	step_end
# 756 "data/maps/PewterCity_Frlg/scripts.pory"
	return
# 757 "data/maps/PewterCity_Frlg/scripts.pory"

# 758 "data/maps/PewterCity_Frlg/scripts.pory"

# 759 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Movement_GuideWalkToGymMid::
# 760 "data/maps/PewterCity_Frlg/scripts.pory"
# 430 "data/maps/PewterCity_Frlg/scripts.pory"
# 761 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 762 "data/maps/PewterCity_Frlg/scripts.pory"
# 431 "data/maps/PewterCity_Frlg/scripts.pory"
# 763 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_to_gym
# 764 "data/maps/PewterCity_Frlg/scripts.pory"
# 432 "data/maps/PewterCity_Frlg/scripts.pory"
# 765 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
# 766 "data/maps/PewterCity_Frlg/scripts.pory"
# 433 "data/maps/PewterCity_Frlg/scripts.pory"
# 767 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_in_place_faster_left
# 768 "data/maps/PewterCity_Frlg/scripts.pory"
# 434 "data/maps/PewterCity_Frlg/scripts.pory"
# 769 "data/maps/PewterCity_Frlg/scripts.pory"
	step_end
# 770 "data/maps/PewterCity_Frlg/scripts.pory"
	return
# 771 "data/maps/PewterCity_Frlg/scripts.pory"

# 772 "data/maps/PewterCity_Frlg/scripts.pory"

# 773 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Movement_GuideWalkToGymBottom::
# 774 "data/maps/PewterCity_Frlg/scripts.pory"
# 438 "data/maps/PewterCity_Frlg/scripts.pory"
# 775 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 776 "data/maps/PewterCity_Frlg/scripts.pory"
# 439 "data/maps/PewterCity_Frlg/scripts.pory"
# 777 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 778 "data/maps/PewterCity_Frlg/scripts.pory"
# 440 "data/maps/PewterCity_Frlg/scripts.pory"
# 779 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_to_gym
# 780 "data/maps/PewterCity_Frlg/scripts.pory"
# 441 "data/maps/PewterCity_Frlg/scripts.pory"
# 781 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
# 782 "data/maps/PewterCity_Frlg/scripts.pory"
# 442 "data/maps/PewterCity_Frlg/scripts.pory"
# 783 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_in_place_faster_left
# 784 "data/maps/PewterCity_Frlg/scripts.pory"
# 443 "data/maps/PewterCity_Frlg/scripts.pory"
# 785 "data/maps/PewterCity_Frlg/scripts.pory"
	step_end
# 786 "data/maps/PewterCity_Frlg/scripts.pory"
	return
# 787 "data/maps/PewterCity_Frlg/scripts.pory"

# 788 "data/maps/PewterCity_Frlg/scripts.pory"

# 789 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Movement_GuideWalkToGymRight::
# 790 "data/maps/PewterCity_Frlg/scripts.pory"
# 447 "data/maps/PewterCity_Frlg/scripts.pory"
# 791 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 792 "data/maps/PewterCity_Frlg/scripts.pory"
# 448 "data/maps/PewterCity_Frlg/scripts.pory"
# 793 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 794 "data/maps/PewterCity_Frlg/scripts.pory"
# 449 "data/maps/PewterCity_Frlg/scripts.pory"
# 795 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 796 "data/maps/PewterCity_Frlg/scripts.pory"
# 450 "data/maps/PewterCity_Frlg/scripts.pory"
# 797 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 798 "data/maps/PewterCity_Frlg/scripts.pory"
# 451 "data/maps/PewterCity_Frlg/scripts.pory"
# 799 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 800 "data/maps/PewterCity_Frlg/scripts.pory"
# 452 "data/maps/PewterCity_Frlg/scripts.pory"
# 801 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 802 "data/maps/PewterCity_Frlg/scripts.pory"
# 453 "data/maps/PewterCity_Frlg/scripts.pory"
# 803 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 804 "data/maps/PewterCity_Frlg/scripts.pory"
# 454 "data/maps/PewterCity_Frlg/scripts.pory"
# 805 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 806 "data/maps/PewterCity_Frlg/scripts.pory"
# 455 "data/maps/PewterCity_Frlg/scripts.pory"
# 807 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 808 "data/maps/PewterCity_Frlg/scripts.pory"
# 456 "data/maps/PewterCity_Frlg/scripts.pory"
# 809 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_to_gym_alt
# 810 "data/maps/PewterCity_Frlg/scripts.pory"
# 457 "data/maps/PewterCity_Frlg/scripts.pory"
# 811 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
# 812 "data/maps/PewterCity_Frlg/scripts.pory"
# 458 "data/maps/PewterCity_Frlg/scripts.pory"
# 813 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_in_place_faster_left
# 814 "data/maps/PewterCity_Frlg/scripts.pory"
# 459 "data/maps/PewterCity_Frlg/scripts.pory"
# 815 "data/maps/PewterCity_Frlg/scripts.pory"
	step_end
# 816 "data/maps/PewterCity_Frlg/scripts.pory"
	return
# 817 "data/maps/PewterCity_Frlg/scripts.pory"

# 818 "data/maps/PewterCity_Frlg/scripts.pory"

# 819 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_EventScript_Lass::
# 820 "data/maps/PewterCity_Frlg/scripts.pory"
# 463 "data/maps/PewterCity_Frlg/scripts.pory"
# 821 "data/maps/PewterCity_Frlg/scripts.pory"
	msgbox PewterCity_Text_ClefairyCameFromMoon, MSGBOX_NPC
# 822 "data/maps/PewterCity_Frlg/scripts.pory"
	end
# 823 "data/maps/PewterCity_Frlg/scripts.pory"

# 824 "data/maps/PewterCity_Frlg/scripts.pory"

# 825 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_EventScript_MuseumGuide::
# 826 "data/maps/PewterCity_Frlg/scripts.pory"
# 468 "data/maps/PewterCity_Frlg/scripts.pory"
# 827 "data/maps/PewterCity_Frlg/scripts.pory"
	lock
# 828 "data/maps/PewterCity_Frlg/scripts.pory"
# 469 "data/maps/PewterCity_Frlg/scripts.pory"
# 829 "data/maps/PewterCity_Frlg/scripts.pory"
	faceplayer
# 830 "data/maps/PewterCity_Frlg/scripts.pory"
# 470 "data/maps/PewterCity_Frlg/scripts.pory"
# 831 "data/maps/PewterCity_Frlg/scripts.pory"
	msgbox PewterCity_Text_DidYouCheckOutMuseum, MSGBOX_YESNO
# 832 "data/maps/PewterCity_Frlg/scripts.pory"
# 471 "data/maps/PewterCity_Frlg/scripts.pory"
# 833 "data/maps/PewterCity_Frlg/scripts.pory"
	compare VAR_RESULT, YES
# 834 "data/maps/PewterCity_Frlg/scripts.pory"
	goto_if_eq PewterCity_EventScript_MuseumGuide_2
# 835 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_EventScript_MuseumGuide_1:
# 836 "data/maps/PewterCity_Frlg/scripts.pory"
# 474 "data/maps/PewterCity_Frlg/scripts.pory"
# 837 "data/maps/PewterCity_Frlg/scripts.pory"
	msgbox PewterCity_Text_ReallyYouHaveToGo
# 838 "data/maps/PewterCity_Frlg/scripts.pory"
# 475 "data/maps/PewterCity_Frlg/scripts.pory"
# 839 "data/maps/PewterCity_Frlg/scripts.pory"
	closemessage
# 840 "data/maps/PewterCity_Frlg/scripts.pory"
# 476 "data/maps/PewterCity_Frlg/scripts.pory"
# 841 "data/maps/PewterCity_Frlg/scripts.pory"
	delay 10
# 842 "data/maps/PewterCity_Frlg/scripts.pory"
# 477 "data/maps/PewterCity_Frlg/scripts.pory"
# 843 "data/maps/PewterCity_Frlg/scripts.pory"
	playbgm MUS_FOLLOW_ME, 0
# 844 "data/maps/PewterCity_Frlg/scripts.pory"
# 478 "data/maps/PewterCity_Frlg/scripts.pory"
# 845 "data/maps/PewterCity_Frlg/scripts.pory"
	compare VAR_FACING, DIR_NORTH
# 846 "data/maps/PewterCity_Frlg/scripts.pory"
	goto_if_eq PewterCity_EventScript_MuseumGuide_5
# 847 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_EventScript_MuseumGuide_4:
# 848 "data/maps/PewterCity_Frlg/scripts.pory"
# 481 "data/maps/PewterCity_Frlg/scripts.pory"
# 849 "data/maps/PewterCity_Frlg/scripts.pory"
	compare VAR_FACING, DIR_SOUTH
# 850 "data/maps/PewterCity_Frlg/scripts.pory"
	goto_if_eq PewterCity_EventScript_MuseumGuide_8
# 851 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_EventScript_MuseumGuide_7:
# 852 "data/maps/PewterCity_Frlg/scripts.pory"
# 484 "data/maps/PewterCity_Frlg/scripts.pory"
# 853 "data/maps/PewterCity_Frlg/scripts.pory"
	compare VAR_FACING, DIR_WEST
# 854 "data/maps/PewterCity_Frlg/scripts.pory"
	goto_if_eq PewterCity_EventScript_MuseumGuide_11
# 855 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_EventScript_MuseumGuide_10:
# 856 "data/maps/PewterCity_Frlg/scripts.pory"
# 487 "data/maps/PewterCity_Frlg/scripts.pory"
# 857 "data/maps/PewterCity_Frlg/scripts.pory"
	compare VAR_FACING, DIR_EAST
# 858 "data/maps/PewterCity_Frlg/scripts.pory"
	goto_if_eq PewterCity_EventScript_MuseumGuide_14
# 859 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_EventScript_MuseumGuide_13:
# 860 "data/maps/PewterCity_Frlg/scripts.pory"
# 490 "data/maps/PewterCity_Frlg/scripts.pory"
# 861 "data/maps/PewterCity_Frlg/scripts.pory"
	msgbox PewterCity_Text_ThisIsTheMuseum
# 862 "data/maps/PewterCity_Frlg/scripts.pory"
# 491 "data/maps/PewterCity_Frlg/scripts.pory"
# 863 "data/maps/PewterCity_Frlg/scripts.pory"
	closemessage
# 864 "data/maps/PewterCity_Frlg/scripts.pory"
# 492 "data/maps/PewterCity_Frlg/scripts.pory"
# 865 "data/maps/PewterCity_Frlg/scripts.pory"
	delay 10
# 866 "data/maps/PewterCity_Frlg/scripts.pory"
# 493 "data/maps/PewterCity_Frlg/scripts.pory"
# 867 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PEWTER_MUSEUM_GUIDE, PewterCity_Movement_MuseumGuideExit
# 868 "data/maps/PewterCity_Frlg/scripts.pory"
# 494 "data/maps/PewterCity_Frlg/scripts.pory"
# 869 "data/maps/PewterCity_Frlg/scripts.pory"
	waitmovement 0
# 870 "data/maps/PewterCity_Frlg/scripts.pory"
# 495 "data/maps/PewterCity_Frlg/scripts.pory"
# 871 "data/maps/PewterCity_Frlg/scripts.pory"
	fadedefaultbgm
# 872 "data/maps/PewterCity_Frlg/scripts.pory"
# 496 "data/maps/PewterCity_Frlg/scripts.pory"
# 873 "data/maps/PewterCity_Frlg/scripts.pory"
	removeobject LOCALID_PEWTER_MUSEUM_GUIDE
# 874 "data/maps/PewterCity_Frlg/scripts.pory"
# 497 "data/maps/PewterCity_Frlg/scripts.pory"
# 875 "data/maps/PewterCity_Frlg/scripts.pory"
	clearflag FLAG_HIDE_PEWTER_MUSEUM_GUIDE
# 876 "data/maps/PewterCity_Frlg/scripts.pory"
# 498 "data/maps/PewterCity_Frlg/scripts.pory"
# 877 "data/maps/PewterCity_Frlg/scripts.pory"
	release
# 878 "data/maps/PewterCity_Frlg/scripts.pory"
	end
# 879 "data/maps/PewterCity_Frlg/scripts.pory"

# 880 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_EventScript_MuseumGuide_2:
# 881 "data/maps/PewterCity_Frlg/scripts.pory"
# 472 "data/maps/PewterCity_Frlg/scripts.pory"
# 882 "data/maps/PewterCity_Frlg/scripts.pory"
	goto PewterCity_EventScript_CheckedOutMuseum
# 883 "data/maps/PewterCity_Frlg/scripts.pory"
	goto PewterCity_EventScript_MuseumGuide_1
# 884 "data/maps/PewterCity_Frlg/scripts.pory"

# 885 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_EventScript_MuseumGuide_5:
# 886 "data/maps/PewterCity_Frlg/scripts.pory"
# 479 "data/maps/PewterCity_Frlg/scripts.pory"
# 887 "data/maps/PewterCity_Frlg/scripts.pory"
	call PewterCity_EventScript_LeadToMuseumNorth
# 888 "data/maps/PewterCity_Frlg/scripts.pory"
	goto PewterCity_EventScript_MuseumGuide_4
# 889 "data/maps/PewterCity_Frlg/scripts.pory"

# 890 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_EventScript_MuseumGuide_8:
# 891 "data/maps/PewterCity_Frlg/scripts.pory"
# 482 "data/maps/PewterCity_Frlg/scripts.pory"
# 892 "data/maps/PewterCity_Frlg/scripts.pory"
	call PewterCity_EventScript_LeadToMuseumSouth
# 893 "data/maps/PewterCity_Frlg/scripts.pory"
	goto PewterCity_EventScript_MuseumGuide_7
# 894 "data/maps/PewterCity_Frlg/scripts.pory"

# 895 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_EventScript_MuseumGuide_11:
# 896 "data/maps/PewterCity_Frlg/scripts.pory"
# 485 "data/maps/PewterCity_Frlg/scripts.pory"
# 897 "data/maps/PewterCity_Frlg/scripts.pory"
	call PewterCity_EventScript_LeadToMuseumWest
# 898 "data/maps/PewterCity_Frlg/scripts.pory"
	goto PewterCity_EventScript_MuseumGuide_10
# 899 "data/maps/PewterCity_Frlg/scripts.pory"

# 900 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_EventScript_MuseumGuide_14:
# 901 "data/maps/PewterCity_Frlg/scripts.pory"
# 488 "data/maps/PewterCity_Frlg/scripts.pory"
# 902 "data/maps/PewterCity_Frlg/scripts.pory"
	call PewterCity_EventScript_LeadToMuseumEast
# 903 "data/maps/PewterCity_Frlg/scripts.pory"
	goto PewterCity_EventScript_MuseumGuide_13
# 904 "data/maps/PewterCity_Frlg/scripts.pory"

# 905 "data/maps/PewterCity_Frlg/scripts.pory"

# 906 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_EventScript_LeadToMuseumNorth::
# 907 "data/maps/PewterCity_Frlg/scripts.pory"
# 503 "data/maps/PewterCity_Frlg/scripts.pory"
# 908 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PEWTER_MUSEUM_GUIDE, PewterCity_Movement_GuideWalkToMuseumNorth
# 909 "data/maps/PewterCity_Frlg/scripts.pory"
# 504 "data/maps/PewterCity_Frlg/scripts.pory"
# 910 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PewterCity_Movement_PlayerWalkToMuseumNorth
# 911 "data/maps/PewterCity_Frlg/scripts.pory"
# 505 "data/maps/PewterCity_Frlg/scripts.pory"
# 912 "data/maps/PewterCity_Frlg/scripts.pory"
	waitmovement 0
# 913 "data/maps/PewterCity_Frlg/scripts.pory"
	return
# 914 "data/maps/PewterCity_Frlg/scripts.pory"

# 915 "data/maps/PewterCity_Frlg/scripts.pory"

# 916 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_EventScript_LeadToMuseumSouth::
# 917 "data/maps/PewterCity_Frlg/scripts.pory"
# 510 "data/maps/PewterCity_Frlg/scripts.pory"
# 918 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PEWTER_MUSEUM_GUIDE, PewterCity_Movement_GuideWalkToMuseumSouth
# 919 "data/maps/PewterCity_Frlg/scripts.pory"
# 511 "data/maps/PewterCity_Frlg/scripts.pory"
# 920 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PewterCity_Movement_PlayerWalkToMuseumSouth
# 921 "data/maps/PewterCity_Frlg/scripts.pory"
# 512 "data/maps/PewterCity_Frlg/scripts.pory"
# 922 "data/maps/PewterCity_Frlg/scripts.pory"
	waitmovement 0
# 923 "data/maps/PewterCity_Frlg/scripts.pory"
	return
# 924 "data/maps/PewterCity_Frlg/scripts.pory"

# 925 "data/maps/PewterCity_Frlg/scripts.pory"

# 926 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_EventScript_LeadToMuseumWest::
# 927 "data/maps/PewterCity_Frlg/scripts.pory"
# 517 "data/maps/PewterCity_Frlg/scripts.pory"
# 928 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PEWTER_MUSEUM_GUIDE, PewterCity_Movement_GuideWalkToMuseumWest
# 929 "data/maps/PewterCity_Frlg/scripts.pory"
# 518 "data/maps/PewterCity_Frlg/scripts.pory"
# 930 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PewterCity_Movement_PlayerWalkToMuseumWest
# 931 "data/maps/PewterCity_Frlg/scripts.pory"
# 519 "data/maps/PewterCity_Frlg/scripts.pory"
# 932 "data/maps/PewterCity_Frlg/scripts.pory"
	waitmovement 0
# 933 "data/maps/PewterCity_Frlg/scripts.pory"
	return
# 934 "data/maps/PewterCity_Frlg/scripts.pory"

# 935 "data/maps/PewterCity_Frlg/scripts.pory"

# 936 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_EventScript_LeadToMuseumEast::
# 937 "data/maps/PewterCity_Frlg/scripts.pory"
# 524 "data/maps/PewterCity_Frlg/scripts.pory"
# 938 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PEWTER_MUSEUM_GUIDE, PewterCity_Movement_GuideWalkToMuseumEast
# 939 "data/maps/PewterCity_Frlg/scripts.pory"
# 525 "data/maps/PewterCity_Frlg/scripts.pory"
# 940 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PewterCity_Movement_PlayerWalkToMuseumEast
# 941 "data/maps/PewterCity_Frlg/scripts.pory"
# 526 "data/maps/PewterCity_Frlg/scripts.pory"
# 942 "data/maps/PewterCity_Frlg/scripts.pory"
	waitmovement 0
# 943 "data/maps/PewterCity_Frlg/scripts.pory"
	return
# 944 "data/maps/PewterCity_Frlg/scripts.pory"

# 945 "data/maps/PewterCity_Frlg/scripts.pory"

# 946 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_EventScript_CheckedOutMuseum::
# 947 "data/maps/PewterCity_Frlg/scripts.pory"
# 531 "data/maps/PewterCity_Frlg/scripts.pory"
# 948 "data/maps/PewterCity_Frlg/scripts.pory"
	msgbox PewterCity_Text_WerentThoseFossilsAmazing
# 949 "data/maps/PewterCity_Frlg/scripts.pory"
# 532 "data/maps/PewterCity_Frlg/scripts.pory"
# 950 "data/maps/PewterCity_Frlg/scripts.pory"
	release
# 951 "data/maps/PewterCity_Frlg/scripts.pory"
# 533 "data/maps/PewterCity_Frlg/scripts.pory"
# 952 "data/maps/PewterCity_Frlg/scripts.pory"
	end
# 953 "data/maps/PewterCity_Frlg/scripts.pory"
# 534 "data/maps/PewterCity_Frlg/scripts.pory"
# 954 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 955 "data/maps/PewterCity_Frlg/scripts.pory"
# 535 "data/maps/PewterCity_Frlg/scripts.pory"
# 956 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 957 "data/maps/PewterCity_Frlg/scripts.pory"
# 536 "data/maps/PewterCity_Frlg/scripts.pory"
# 958 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 959 "data/maps/PewterCity_Frlg/scripts.pory"
# 537 "data/maps/PewterCity_Frlg/scripts.pory"
# 960 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 961 "data/maps/PewterCity_Frlg/scripts.pory"
# 538 "data/maps/PewterCity_Frlg/scripts.pory"
# 962 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 963 "data/maps/PewterCity_Frlg/scripts.pory"
# 539 "data/maps/PewterCity_Frlg/scripts.pory"
# 964 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 965 "data/maps/PewterCity_Frlg/scripts.pory"
# 540 "data/maps/PewterCity_Frlg/scripts.pory"
# 966 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 967 "data/maps/PewterCity_Frlg/scripts.pory"
# 541 "data/maps/PewterCity_Frlg/scripts.pory"
# 968 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 969 "data/maps/PewterCity_Frlg/scripts.pory"
# 542 "data/maps/PewterCity_Frlg/scripts.pory"
# 970 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 971 "data/maps/PewterCity_Frlg/scripts.pory"
# 543 "data/maps/PewterCity_Frlg/scripts.pory"
# 972 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 973 "data/maps/PewterCity_Frlg/scripts.pory"
# 544 "data/maps/PewterCity_Frlg/scripts.pory"
# 974 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 975 "data/maps/PewterCity_Frlg/scripts.pory"
# 545 "data/maps/PewterCity_Frlg/scripts.pory"
# 976 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 977 "data/maps/PewterCity_Frlg/scripts.pory"
# 546 "data/maps/PewterCity_Frlg/scripts.pory"
# 978 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 979 "data/maps/PewterCity_Frlg/scripts.pory"
# 547 "data/maps/PewterCity_Frlg/scripts.pory"
# 980 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 981 "data/maps/PewterCity_Frlg/scripts.pory"
# 548 "data/maps/PewterCity_Frlg/scripts.pory"
# 982 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 983 "data/maps/PewterCity_Frlg/scripts.pory"
# 549 "data/maps/PewterCity_Frlg/scripts.pory"
# 984 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 985 "data/maps/PewterCity_Frlg/scripts.pory"
# 550 "data/maps/PewterCity_Frlg/scripts.pory"
# 986 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 987 "data/maps/PewterCity_Frlg/scripts.pory"
# 551 "data/maps/PewterCity_Frlg/scripts.pory"
# 988 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 989 "data/maps/PewterCity_Frlg/scripts.pory"
# 552 "data/maps/PewterCity_Frlg/scripts.pory"
# 990 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 991 "data/maps/PewterCity_Frlg/scripts.pory"
# 553 "data/maps/PewterCity_Frlg/scripts.pory"
# 992 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 993 "data/maps/PewterCity_Frlg/scripts.pory"
# 554 "data/maps/PewterCity_Frlg/scripts.pory"
# 994 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 995 "data/maps/PewterCity_Frlg/scripts.pory"
# 555 "data/maps/PewterCity_Frlg/scripts.pory"
# 996 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 997 "data/maps/PewterCity_Frlg/scripts.pory"
# 556 "data/maps/PewterCity_Frlg/scripts.pory"
# 998 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 999 "data/maps/PewterCity_Frlg/scripts.pory"
# 557 "data/maps/PewterCity_Frlg/scripts.pory"
# 1000 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 1001 "data/maps/PewterCity_Frlg/scripts.pory"
# 558 "data/maps/PewterCity_Frlg/scripts.pory"
# 1002 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 1003 "data/maps/PewterCity_Frlg/scripts.pory"
# 559 "data/maps/PewterCity_Frlg/scripts.pory"
# 1004 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 1005 "data/maps/PewterCity_Frlg/scripts.pory"
# 560 "data/maps/PewterCity_Frlg/scripts.pory"
# 1006 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 1007 "data/maps/PewterCity_Frlg/scripts.pory"
# 561 "data/maps/PewterCity_Frlg/scripts.pory"
# 1008 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 1009 "data/maps/PewterCity_Frlg/scripts.pory"
# 562 "data/maps/PewterCity_Frlg/scripts.pory"
# 1010 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 1011 "data/maps/PewterCity_Frlg/scripts.pory"
# 563 "data/maps/PewterCity_Frlg/scripts.pory"
# 1012 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 1013 "data/maps/PewterCity_Frlg/scripts.pory"
# 564 "data/maps/PewterCity_Frlg/scripts.pory"
# 1014 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 1015 "data/maps/PewterCity_Frlg/scripts.pory"
# 565 "data/maps/PewterCity_Frlg/scripts.pory"
# 1016 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 1017 "data/maps/PewterCity_Frlg/scripts.pory"
# 566 "data/maps/PewterCity_Frlg/scripts.pory"
# 1018 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 1019 "data/maps/PewterCity_Frlg/scripts.pory"
# 567 "data/maps/PewterCity_Frlg/scripts.pory"
# 1020 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 1021 "data/maps/PewterCity_Frlg/scripts.pory"
# 568 "data/maps/PewterCity_Frlg/scripts.pory"
# 1022 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 1023 "data/maps/PewterCity_Frlg/scripts.pory"
# 569 "data/maps/PewterCity_Frlg/scripts.pory"
# 1024 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 1025 "data/maps/PewterCity_Frlg/scripts.pory"
# 570 "data/maps/PewterCity_Frlg/scripts.pory"
# 1026 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 1027 "data/maps/PewterCity_Frlg/scripts.pory"
# 571 "data/maps/PewterCity_Frlg/scripts.pory"
# 1028 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 1029 "data/maps/PewterCity_Frlg/scripts.pory"
# 572 "data/maps/PewterCity_Frlg/scripts.pory"
# 1030 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 1031 "data/maps/PewterCity_Frlg/scripts.pory"
# 573 "data/maps/PewterCity_Frlg/scripts.pory"
# 1032 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 1033 "data/maps/PewterCity_Frlg/scripts.pory"
# 574 "data/maps/PewterCity_Frlg/scripts.pory"
# 1034 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 1035 "data/maps/PewterCity_Frlg/scripts.pory"
# 575 "data/maps/PewterCity_Frlg/scripts.pory"
# 1036 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 1037 "data/maps/PewterCity_Frlg/scripts.pory"
# 576 "data/maps/PewterCity_Frlg/scripts.pory"
# 1038 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 1039 "data/maps/PewterCity_Frlg/scripts.pory"
# 577 "data/maps/PewterCity_Frlg/scripts.pory"
# 1040 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 1041 "data/maps/PewterCity_Frlg/scripts.pory"
# 578 "data/maps/PewterCity_Frlg/scripts.pory"
# 1042 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 1043 "data/maps/PewterCity_Frlg/scripts.pory"
# 579 "data/maps/PewterCity_Frlg/scripts.pory"
# 1044 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 1045 "data/maps/PewterCity_Frlg/scripts.pory"
	return
# 1046 "data/maps/PewterCity_Frlg/scripts.pory"

# 1047 "data/maps/PewterCity_Frlg/scripts.pory"

# 1048 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Movement_PlayerWalkToMuseumNorth::
# 1049 "data/maps/PewterCity_Frlg/scripts.pory"
# 583 "data/maps/PewterCity_Frlg/scripts.pory"
# 1050 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 1051 "data/maps/PewterCity_Frlg/scripts.pory"
# 584 "data/maps/PewterCity_Frlg/scripts.pory"
# 1052 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_to_museum
# 1053 "data/maps/PewterCity_Frlg/scripts.pory"
# 585 "data/maps/PewterCity_Frlg/scripts.pory"
# 1054 "data/maps/PewterCity_Frlg/scripts.pory"
	delay_8
# 1055 "data/maps/PewterCity_Frlg/scripts.pory"
# 586 "data/maps/PewterCity_Frlg/scripts.pory"
# 1056 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_in_place_faster_up
# 1057 "data/maps/PewterCity_Frlg/scripts.pory"
# 587 "data/maps/PewterCity_Frlg/scripts.pory"
# 1058 "data/maps/PewterCity_Frlg/scripts.pory"
	step_end
# 1059 "data/maps/PewterCity_Frlg/scripts.pory"
	return
# 1060 "data/maps/PewterCity_Frlg/scripts.pory"

# 1061 "data/maps/PewterCity_Frlg/scripts.pory"

# 1062 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Movement_GuideWalkToMuseumNorth::
# 1063 "data/maps/PewterCity_Frlg/scripts.pory"
# 591 "data/maps/PewterCity_Frlg/scripts.pory"
# 1064 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_to_museum
# 1065 "data/maps/PewterCity_Frlg/scripts.pory"
# 592 "data/maps/PewterCity_Frlg/scripts.pory"
# 1066 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 1067 "data/maps/PewterCity_Frlg/scripts.pory"
# 593 "data/maps/PewterCity_Frlg/scripts.pory"
# 1068 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_in_place_faster_up
# 1069 "data/maps/PewterCity_Frlg/scripts.pory"
# 594 "data/maps/PewterCity_Frlg/scripts.pory"
# 1070 "data/maps/PewterCity_Frlg/scripts.pory"
	step_end
# 1071 "data/maps/PewterCity_Frlg/scripts.pory"
	return
# 1072 "data/maps/PewterCity_Frlg/scripts.pory"

# 1073 "data/maps/PewterCity_Frlg/scripts.pory"

# 1074 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Movement_PlayerWalkToMuseumSouth::
# 1075 "data/maps/PewterCity_Frlg/scripts.pory"
# 598 "data/maps/PewterCity_Frlg/scripts.pory"
# 1076 "data/maps/PewterCity_Frlg/scripts.pory"
	delay_16
# 1077 "data/maps/PewterCity_Frlg/scripts.pory"
# 599 "data/maps/PewterCity_Frlg/scripts.pory"
# 1078 "data/maps/PewterCity_Frlg/scripts.pory"
	delay_16
# 1079 "data/maps/PewterCity_Frlg/scripts.pory"
# 600 "data/maps/PewterCity_Frlg/scripts.pory"
# 1080 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 1081 "data/maps/PewterCity_Frlg/scripts.pory"
# 601 "data/maps/PewterCity_Frlg/scripts.pory"
# 1082 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_to_museum_south
# 1083 "data/maps/PewterCity_Frlg/scripts.pory"
# 602 "data/maps/PewterCity_Frlg/scripts.pory"
# 1084 "data/maps/PewterCity_Frlg/scripts.pory"
	delay_8
# 1085 "data/maps/PewterCity_Frlg/scripts.pory"
# 603 "data/maps/PewterCity_Frlg/scripts.pory"
# 1086 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_in_place_faster_up
# 1087 "data/maps/PewterCity_Frlg/scripts.pory"
# 604 "data/maps/PewterCity_Frlg/scripts.pory"
# 1088 "data/maps/PewterCity_Frlg/scripts.pory"
	step_end
# 1089 "data/maps/PewterCity_Frlg/scripts.pory"
	return
# 1090 "data/maps/PewterCity_Frlg/scripts.pory"

# 1091 "data/maps/PewterCity_Frlg/scripts.pory"

# 1092 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Movement_GuideWalkToMuseumSouth::
# 1093 "data/maps/PewterCity_Frlg/scripts.pory"
# 608 "data/maps/PewterCity_Frlg/scripts.pory"
# 1094 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 1095 "data/maps/PewterCity_Frlg/scripts.pory"
# 609 "data/maps/PewterCity_Frlg/scripts.pory"
# 1096 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 1097 "data/maps/PewterCity_Frlg/scripts.pory"
# 610 "data/maps/PewterCity_Frlg/scripts.pory"
# 1098 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_to_museum_south
# 1099 "data/maps/PewterCity_Frlg/scripts.pory"
# 611 "data/maps/PewterCity_Frlg/scripts.pory"
# 1100 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 1101 "data/maps/PewterCity_Frlg/scripts.pory"
# 612 "data/maps/PewterCity_Frlg/scripts.pory"
# 1102 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_in_place_faster_up
# 1103 "data/maps/PewterCity_Frlg/scripts.pory"
# 613 "data/maps/PewterCity_Frlg/scripts.pory"
# 1104 "data/maps/PewterCity_Frlg/scripts.pory"
	step_end
# 1105 "data/maps/PewterCity_Frlg/scripts.pory"
	return
# 1106 "data/maps/PewterCity_Frlg/scripts.pory"

# 1107 "data/maps/PewterCity_Frlg/scripts.pory"

# 1108 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Movement_PlayerWalkToMuseumWest::
# 1109 "data/maps/PewterCity_Frlg/scripts.pory"
# 617 "data/maps/PewterCity_Frlg/scripts.pory"
# 1110 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 1111 "data/maps/PewterCity_Frlg/scripts.pory"
# 618 "data/maps/PewterCity_Frlg/scripts.pory"
# 1112 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_to_museum
# 1113 "data/maps/PewterCity_Frlg/scripts.pory"
# 619 "data/maps/PewterCity_Frlg/scripts.pory"
# 1114 "data/maps/PewterCity_Frlg/scripts.pory"
	delay_8
# 1115 "data/maps/PewterCity_Frlg/scripts.pory"
# 620 "data/maps/PewterCity_Frlg/scripts.pory"
# 1116 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_in_place_faster_up
# 1117 "data/maps/PewterCity_Frlg/scripts.pory"
# 621 "data/maps/PewterCity_Frlg/scripts.pory"
# 1118 "data/maps/PewterCity_Frlg/scripts.pory"
	step_end
# 1119 "data/maps/PewterCity_Frlg/scripts.pory"
	return
# 1120 "data/maps/PewterCity_Frlg/scripts.pory"

# 1121 "data/maps/PewterCity_Frlg/scripts.pory"

# 1122 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Movement_GuideWalkToMuseumWest::
# 1123 "data/maps/PewterCity_Frlg/scripts.pory"
# 625 "data/maps/PewterCity_Frlg/scripts.pory"
# 1124 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_to_museum
# 1125 "data/maps/PewterCity_Frlg/scripts.pory"
# 626 "data/maps/PewterCity_Frlg/scripts.pory"
# 1126 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 1127 "data/maps/PewterCity_Frlg/scripts.pory"
# 627 "data/maps/PewterCity_Frlg/scripts.pory"
# 1128 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_in_place_faster_up
# 1129 "data/maps/PewterCity_Frlg/scripts.pory"
# 628 "data/maps/PewterCity_Frlg/scripts.pory"
# 1130 "data/maps/PewterCity_Frlg/scripts.pory"
	step_end
# 1131 "data/maps/PewterCity_Frlg/scripts.pory"
	return
# 1132 "data/maps/PewterCity_Frlg/scripts.pory"

# 1133 "data/maps/PewterCity_Frlg/scripts.pory"

# 1134 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Movement_PlayerWalkToMuseumEast::
# 1135 "data/maps/PewterCity_Frlg/scripts.pory"
# 632 "data/maps/PewterCity_Frlg/scripts.pory"
# 1136 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
# 1137 "data/maps/PewterCity_Frlg/scripts.pory"
# 633 "data/maps/PewterCity_Frlg/scripts.pory"
# 1138 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_to_museum
# 1139 "data/maps/PewterCity_Frlg/scripts.pory"
# 634 "data/maps/PewterCity_Frlg/scripts.pory"
# 1140 "data/maps/PewterCity_Frlg/scripts.pory"
	delay_8
# 1141 "data/maps/PewterCity_Frlg/scripts.pory"
# 635 "data/maps/PewterCity_Frlg/scripts.pory"
# 1142 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_in_place_faster_up
# 1143 "data/maps/PewterCity_Frlg/scripts.pory"
# 636 "data/maps/PewterCity_Frlg/scripts.pory"
# 1144 "data/maps/PewterCity_Frlg/scripts.pory"
	step_end
# 1145 "data/maps/PewterCity_Frlg/scripts.pory"
	return
# 1146 "data/maps/PewterCity_Frlg/scripts.pory"

# 1147 "data/maps/PewterCity_Frlg/scripts.pory"

# 1148 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Movement_GuideWalkToMuseumEast::
# 1149 "data/maps/PewterCity_Frlg/scripts.pory"
# 640 "data/maps/PewterCity_Frlg/scripts.pory"
# 1150 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_to_museum
# 1151 "data/maps/PewterCity_Frlg/scripts.pory"
# 641 "data/maps/PewterCity_Frlg/scripts.pory"
# 1152 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 1153 "data/maps/PewterCity_Frlg/scripts.pory"
# 642 "data/maps/PewterCity_Frlg/scripts.pory"
# 1154 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_in_place_faster_up
# 1155 "data/maps/PewterCity_Frlg/scripts.pory"
# 643 "data/maps/PewterCity_Frlg/scripts.pory"
# 1156 "data/maps/PewterCity_Frlg/scripts.pory"
	step_end
# 1157 "data/maps/PewterCity_Frlg/scripts.pory"
	return
# 1158 "data/maps/PewterCity_Frlg/scripts.pory"

# 1159 "data/maps/PewterCity_Frlg/scripts.pory"

# 1160 "data/maps/PewterCity_Frlg/scripts.pory"
# 646 "data/maps/PewterCity_Frlg/scripts.pory"
# 1161 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Movement_MuseumGuideExit:
# 1162 "data/maps/PewterCity_Frlg/scripts.pory"
# 647 "data/maps/PewterCity_Frlg/scripts.pory"
# 1163 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 1164 "data/maps/PewterCity_Frlg/scripts.pory"
# 648 "data/maps/PewterCity_Frlg/scripts.pory"
# 1165 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
# 1166 "data/maps/PewterCity_Frlg/scripts.pory"
# 649 "data/maps/PewterCity_Frlg/scripts.pory"
# 1167 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
# 1168 "data/maps/PewterCity_Frlg/scripts.pory"
# 650 "data/maps/PewterCity_Frlg/scripts.pory"
# 1169 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
# 1170 "data/maps/PewterCity_Frlg/scripts.pory"
# 651 "data/maps/PewterCity_Frlg/scripts.pory"
# 1171 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
# 1172 "data/maps/PewterCity_Frlg/scripts.pory"
# 652 "data/maps/PewterCity_Frlg/scripts.pory"
# 1173 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
# 1174 "data/maps/PewterCity_Frlg/scripts.pory"
# 653 "data/maps/PewterCity_Frlg/scripts.pory"
# 1175 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
# 1176 "data/maps/PewterCity_Frlg/scripts.pory"
# 654 "data/maps/PewterCity_Frlg/scripts.pory"
# 1177 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
# 1178 "data/maps/PewterCity_Frlg/scripts.pory"
# 655 "data/maps/PewterCity_Frlg/scripts.pory"
# 1179 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 1180 "data/maps/PewterCity_Frlg/scripts.pory"
# 656 "data/maps/PewterCity_Frlg/scripts.pory"
# 1181 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 1182 "data/maps/PewterCity_Frlg/scripts.pory"
# 657 "data/maps/PewterCity_Frlg/scripts.pory"
# 1183 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 1184 "data/maps/PewterCity_Frlg/scripts.pory"
# 658 "data/maps/PewterCity_Frlg/scripts.pory"
# 1185 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
# 1186 "data/maps/PewterCity_Frlg/scripts.pory"
# 659 "data/maps/PewterCity_Frlg/scripts.pory"
# 1187 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
# 1188 "data/maps/PewterCity_Frlg/scripts.pory"
# 660 "data/maps/PewterCity_Frlg/scripts.pory"
# 1189 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
# 1190 "data/maps/PewterCity_Frlg/scripts.pory"
# 661 "data/maps/PewterCity_Frlg/scripts.pory"
# 1191 "data/maps/PewterCity_Frlg/scripts.pory"
	step_end
# 1192 "data/maps/PewterCity_Frlg/scripts.pory"

# 1193 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_EventScript_FatMan::
# 1194 "data/maps/PewterCity_Frlg/scripts.pory"
# 665 "data/maps/PewterCity_Frlg/scripts.pory"
# 1195 "data/maps/PewterCity_Frlg/scripts.pory"
	lock
# 1196 "data/maps/PewterCity_Frlg/scripts.pory"
# 666 "data/maps/PewterCity_Frlg/scripts.pory"
# 1197 "data/maps/PewterCity_Frlg/scripts.pory"
	faceplayer
# 1198 "data/maps/PewterCity_Frlg/scripts.pory"
# 667 "data/maps/PewterCity_Frlg/scripts.pory"
# 1199 "data/maps/PewterCity_Frlg/scripts.pory"
	famechecker FAMECHECKER_BROCK, 2
# 1200 "data/maps/PewterCity_Frlg/scripts.pory"
# 668 "data/maps/PewterCity_Frlg/scripts.pory"
# 1201 "data/maps/PewterCity_Frlg/scripts.pory"
	msgbox PewterCity_Text_BrockOnlySeriousTrainerHere
# 1202 "data/maps/PewterCity_Frlg/scripts.pory"
# 669 "data/maps/PewterCity_Frlg/scripts.pory"
# 1203 "data/maps/PewterCity_Frlg/scripts.pory"
	release
# 1204 "data/maps/PewterCity_Frlg/scripts.pory"
	end
# 1205 "data/maps/PewterCity_Frlg/scripts.pory"

# 1206 "data/maps/PewterCity_Frlg/scripts.pory"

# 1207 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_EventScript_BugCatcher::
# 1208 "data/maps/PewterCity_Frlg/scripts.pory"
# 674 "data/maps/PewterCity_Frlg/scripts.pory"
# 1209 "data/maps/PewterCity_Frlg/scripts.pory"
	lock
# 1210 "data/maps/PewterCity_Frlg/scripts.pory"
# 675 "data/maps/PewterCity_Frlg/scripts.pory"
# 1211 "data/maps/PewterCity_Frlg/scripts.pory"
	faceplayer
# 1212 "data/maps/PewterCity_Frlg/scripts.pory"
# 676 "data/maps/PewterCity_Frlg/scripts.pory"
# 1213 "data/maps/PewterCity_Frlg/scripts.pory"
	msgbox PewterCity_Text_DoYouKnowWhatImDoing, MSGBOX_YESNO
# 1214 "data/maps/PewterCity_Frlg/scripts.pory"
# 677 "data/maps/PewterCity_Frlg/scripts.pory"
# 1215 "data/maps/PewterCity_Frlg/scripts.pory"
	compare VAR_RESULT, YES
# 1216 "data/maps/PewterCity_Frlg/scripts.pory"
	goto_if_eq PewterCity_EventScript_BugCatcher_2
# 1217 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_EventScript_BugCatcher_1:
# 1218 "data/maps/PewterCity_Frlg/scripts.pory"
# 680 "data/maps/PewterCity_Frlg/scripts.pory"
# 1219 "data/maps/PewterCity_Frlg/scripts.pory"
	msgbox PewterCity_Text_SprayingRepelToKeepWildMonsOut
# 1220 "data/maps/PewterCity_Frlg/scripts.pory"
# 681 "data/maps/PewterCity_Frlg/scripts.pory"
# 1221 "data/maps/PewterCity_Frlg/scripts.pory"
	release
# 1222 "data/maps/PewterCity_Frlg/scripts.pory"
	end
# 1223 "data/maps/PewterCity_Frlg/scripts.pory"

# 1224 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_EventScript_BugCatcher_2:
# 1225 "data/maps/PewterCity_Frlg/scripts.pory"
# 678 "data/maps/PewterCity_Frlg/scripts.pory"
# 1226 "data/maps/PewterCity_Frlg/scripts.pory"
	goto PewterCity_EventScript_KnowWhatTheyreDoing
# 1227 "data/maps/PewterCity_Frlg/scripts.pory"
	goto PewterCity_EventScript_BugCatcher_1
# 1228 "data/maps/PewterCity_Frlg/scripts.pory"

# 1229 "data/maps/PewterCity_Frlg/scripts.pory"

# 1230 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_EventScript_KnowWhatTheyreDoing::
# 1231 "data/maps/PewterCity_Frlg/scripts.pory"
# 686 "data/maps/PewterCity_Frlg/scripts.pory"
# 1232 "data/maps/PewterCity_Frlg/scripts.pory"
	msgbox PewterCity_Text_ThatsRightItsHardWork
# 1233 "data/maps/PewterCity_Frlg/scripts.pory"
# 687 "data/maps/PewterCity_Frlg/scripts.pory"
# 1234 "data/maps/PewterCity_Frlg/scripts.pory"
	release
# 1235 "data/maps/PewterCity_Frlg/scripts.pory"
	end
# 1236 "data/maps/PewterCity_Frlg/scripts.pory"

# 1237 "data/maps/PewterCity_Frlg/scripts.pory"

# 1238 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_EventScript_TrainerTips::
# 1239 "data/maps/PewterCity_Frlg/scripts.pory"
# 692 "data/maps/PewterCity_Frlg/scripts.pory"
# 1240 "data/maps/PewterCity_Frlg/scripts.pory"
	msgbox PewterCity_Text_TrainerTipsEarningEXP, MSGBOX_SIGN
# 1241 "data/maps/PewterCity_Frlg/scripts.pory"
	end
# 1242 "data/maps/PewterCity_Frlg/scripts.pory"

# 1243 "data/maps/PewterCity_Frlg/scripts.pory"

# 1244 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_EventScript_PoliceNotice::
# 1245 "data/maps/PewterCity_Frlg/scripts.pory"
# 697 "data/maps/PewterCity_Frlg/scripts.pory"
# 1246 "data/maps/PewterCity_Frlg/scripts.pory"
	msgbox PewterCity_Text_CallPoliceIfInfoOnThieves, MSGBOX_SIGN
# 1247 "data/maps/PewterCity_Frlg/scripts.pory"
	end
# 1248 "data/maps/PewterCity_Frlg/scripts.pory"

# 1249 "data/maps/PewterCity_Frlg/scripts.pory"

# 1250 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_EventScript_MuseumSign::
# 1251 "data/maps/PewterCity_Frlg/scripts.pory"
# 702 "data/maps/PewterCity_Frlg/scripts.pory"
# 1252 "data/maps/PewterCity_Frlg/scripts.pory"
	msgbox PewterCity_Text_MuseumOfScience, MSGBOX_SIGN
# 1253 "data/maps/PewterCity_Frlg/scripts.pory"
	end
# 1254 "data/maps/PewterCity_Frlg/scripts.pory"

# 1255 "data/maps/PewterCity_Frlg/scripts.pory"

# 1256 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_EventScript_GymSign::
# 1257 "data/maps/PewterCity_Frlg/scripts.pory"
# 707 "data/maps/PewterCity_Frlg/scripts.pory"
# 1258 "data/maps/PewterCity_Frlg/scripts.pory"
	lockall
# 1259 "data/maps/PewterCity_Frlg/scripts.pory"
# 708 "data/maps/PewterCity_Frlg/scripts.pory"
# 1260 "data/maps/PewterCity_Frlg/scripts.pory"
	famechecker FAMECHECKER_BROCK, 0
# 1261 "data/maps/PewterCity_Frlg/scripts.pory"
# 709 "data/maps/PewterCity_Frlg/scripts.pory"
# 1262 "data/maps/PewterCity_Frlg/scripts.pory"
	msgbox PewterCity_Text_GymSign
# 1263 "data/maps/PewterCity_Frlg/scripts.pory"
# 710 "data/maps/PewterCity_Frlg/scripts.pory"
# 1264 "data/maps/PewterCity_Frlg/scripts.pory"
	releaseall
# 1265 "data/maps/PewterCity_Frlg/scripts.pory"
	end
# 1266 "data/maps/PewterCity_Frlg/scripts.pory"

# 1267 "data/maps/PewterCity_Frlg/scripts.pory"

# 1268 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_EventScript_CitySign::
# 1269 "data/maps/PewterCity_Frlg/scripts.pory"
# 715 "data/maps/PewterCity_Frlg/scripts.pory"
# 1270 "data/maps/PewterCity_Frlg/scripts.pory"
	msgbox PewterCity_Text_CitySign, MSGBOX_SIGN
# 1271 "data/maps/PewterCity_Frlg/scripts.pory"
	end
# 1272 "data/maps/PewterCity_Frlg/scripts.pory"

# 1273 "data/maps/PewterCity_Frlg/scripts.pory"

# 1274 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_EventScript_RunningShoesAide::
# 1275 "data/maps/PewterCity_Frlg/scripts.pory"
# 720 "data/maps/PewterCity_Frlg/scripts.pory"
# 1276 "data/maps/PewterCity_Frlg/scripts.pory"
	lock
# 1277 "data/maps/PewterCity_Frlg/scripts.pory"
# 721 "data/maps/PewterCity_Frlg/scripts.pory"
# 1278 "data/maps/PewterCity_Frlg/scripts.pory"
	faceplayer
# 1279 "data/maps/PewterCity_Frlg/scripts.pory"
# 722 "data/maps/PewterCity_Frlg/scripts.pory"
# 1280 "data/maps/PewterCity_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 0
# 1281 "data/maps/PewterCity_Frlg/scripts.pory"
# 723 "data/maps/PewterCity_Frlg/scripts.pory"
# 1282 "data/maps/PewterCity_Frlg/scripts.pory"
	call PewterCity_EventScript_AideGiveRunningShoes
# 1283 "data/maps/PewterCity_Frlg/scripts.pory"
# 724 "data/maps/PewterCity_Frlg/scripts.pory"
# 1284 "data/maps/PewterCity_Frlg/scripts.pory"
	release
# 1285 "data/maps/PewterCity_Frlg/scripts.pory"
	end
# 1286 "data/maps/PewterCity_Frlg/scripts.pory"

# 1287 "data/maps/PewterCity_Frlg/scripts.pory"

# 1288 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_EventScript_RunningShoesAideTriggerTop::
# 1289 "data/maps/PewterCity_Frlg/scripts.pory"
# 729 "data/maps/PewterCity_Frlg/scripts.pory"
# 1290 "data/maps/PewterCity_Frlg/scripts.pory"
	lockall
# 1291 "data/maps/PewterCity_Frlg/scripts.pory"
# 730 "data/maps/PewterCity_Frlg/scripts.pory"
# 1292 "data/maps/PewterCity_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 1
# 1293 "data/maps/PewterCity_Frlg/scripts.pory"
# 731 "data/maps/PewterCity_Frlg/scripts.pory"
# 1294 "data/maps/PewterCity_Frlg/scripts.pory"
	call PewterCity_EventScript_AideGiveRunningShoes
# 1295 "data/maps/PewterCity_Frlg/scripts.pory"
# 732 "data/maps/PewterCity_Frlg/scripts.pory"
# 1296 "data/maps/PewterCity_Frlg/scripts.pory"
	releaseall
# 1297 "data/maps/PewterCity_Frlg/scripts.pory"
	end
# 1298 "data/maps/PewterCity_Frlg/scripts.pory"

# 1299 "data/maps/PewterCity_Frlg/scripts.pory"

# 1300 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_EventScript_RunningShoesAideTriggerMid::
# 1301 "data/maps/PewterCity_Frlg/scripts.pory"
# 737 "data/maps/PewterCity_Frlg/scripts.pory"
# 1302 "data/maps/PewterCity_Frlg/scripts.pory"
	lockall
# 1303 "data/maps/PewterCity_Frlg/scripts.pory"
# 738 "data/maps/PewterCity_Frlg/scripts.pory"
# 1304 "data/maps/PewterCity_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 2
# 1305 "data/maps/PewterCity_Frlg/scripts.pory"
# 739 "data/maps/PewterCity_Frlg/scripts.pory"
# 1306 "data/maps/PewterCity_Frlg/scripts.pory"
	call PewterCity_EventScript_AideGiveRunningShoes
# 1307 "data/maps/PewterCity_Frlg/scripts.pory"
# 740 "data/maps/PewterCity_Frlg/scripts.pory"
# 1308 "data/maps/PewterCity_Frlg/scripts.pory"
	releaseall
# 1309 "data/maps/PewterCity_Frlg/scripts.pory"
	end
# 1310 "data/maps/PewterCity_Frlg/scripts.pory"

# 1311 "data/maps/PewterCity_Frlg/scripts.pory"

# 1312 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_EventScript_RunningShoesAideTriggerBottom::
# 1313 "data/maps/PewterCity_Frlg/scripts.pory"
# 745 "data/maps/PewterCity_Frlg/scripts.pory"
# 1314 "data/maps/PewterCity_Frlg/scripts.pory"
	lockall
# 1315 "data/maps/PewterCity_Frlg/scripts.pory"
# 746 "data/maps/PewterCity_Frlg/scripts.pory"
# 1316 "data/maps/PewterCity_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 3
# 1317 "data/maps/PewterCity_Frlg/scripts.pory"
# 747 "data/maps/PewterCity_Frlg/scripts.pory"
# 1318 "data/maps/PewterCity_Frlg/scripts.pory"
	call PewterCity_EventScript_AideGiveRunningShoes
# 1319 "data/maps/PewterCity_Frlg/scripts.pory"
# 748 "data/maps/PewterCity_Frlg/scripts.pory"
# 1320 "data/maps/PewterCity_Frlg/scripts.pory"
	releaseall
# 1321 "data/maps/PewterCity_Frlg/scripts.pory"
	end
# 1322 "data/maps/PewterCity_Frlg/scripts.pory"

# 1323 "data/maps/PewterCity_Frlg/scripts.pory"

# 1324 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_EventScript_AideGiveRunningShoes::
# 1325 "data/maps/PewterCity_Frlg/scripts.pory"
# 753 "data/maps/PewterCity_Frlg/scripts.pory"
# 1326 "data/maps/PewterCity_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 1327 "data/maps/PewterCity_Frlg/scripts.pory"
# 754 "data/maps/PewterCity_Frlg/scripts.pory"
# 1328 "data/maps/PewterCity_Frlg/scripts.pory"
	compare VAR_TEMP_1, 1
# 1329 "data/maps/PewterCity_Frlg/scripts.pory"
	goto_if_eq PewterCity_EventScript_AideGiveRunningShoes_2
# 1330 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_EventScript_AideGiveRunningShoes_1:
# 1331 "data/maps/PewterCity_Frlg/scripts.pory"
# 757 "data/maps/PewterCity_Frlg/scripts.pory"
# 1332 "data/maps/PewterCity_Frlg/scripts.pory"
	compare VAR_TEMP_1, 2
# 1333 "data/maps/PewterCity_Frlg/scripts.pory"
	goto_if_eq PewterCity_EventScript_AideGiveRunningShoes_5
# 1334 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_EventScript_AideGiveRunningShoes_4:
# 1335 "data/maps/PewterCity_Frlg/scripts.pory"
# 760 "data/maps/PewterCity_Frlg/scripts.pory"
# 1336 "data/maps/PewterCity_Frlg/scripts.pory"
	compare VAR_TEMP_1, 3
# 1337 "data/maps/PewterCity_Frlg/scripts.pory"
	goto_if_eq PewterCity_EventScript_AideGiveRunningShoes_8
# 1338 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_EventScript_AideGiveRunningShoes_7:
# 1339 "data/maps/PewterCity_Frlg/scripts.pory"
# 763 "data/maps/PewterCity_Frlg/scripts.pory"
# 1340 "data/maps/PewterCity_Frlg/scripts.pory"
	waitse
# 1341 "data/maps/PewterCity_Frlg/scripts.pory"
# 764 "data/maps/PewterCity_Frlg/scripts.pory"
# 1342 "data/maps/PewterCity_Frlg/scripts.pory"
	playse SE_PIN
# 1343 "data/maps/PewterCity_Frlg/scripts.pory"
# 765 "data/maps/PewterCity_Frlg/scripts.pory"
# 1344 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PEWTER_AIDE, Common_Movement_ExclamationMark
# 1345 "data/maps/PewterCity_Frlg/scripts.pory"
# 766 "data/maps/PewterCity_Frlg/scripts.pory"
# 1346 "data/maps/PewterCity_Frlg/scripts.pory"
	waitmovement 0
# 1347 "data/maps/PewterCity_Frlg/scripts.pory"
# 767 "data/maps/PewterCity_Frlg/scripts.pory"
# 1348 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PEWTER_AIDE, Common_Movement_Delay48
# 1349 "data/maps/PewterCity_Frlg/scripts.pory"
# 768 "data/maps/PewterCity_Frlg/scripts.pory"
# 1350 "data/maps/PewterCity_Frlg/scripts.pory"
	waitmovement 0
# 1351 "data/maps/PewterCity_Frlg/scripts.pory"
# 769 "data/maps/PewterCity_Frlg/scripts.pory"
# 1352 "data/maps/PewterCity_Frlg/scripts.pory"
	msgbox PewterCity_Text_OhPlayer
# 1353 "data/maps/PewterCity_Frlg/scripts.pory"
# 770 "data/maps/PewterCity_Frlg/scripts.pory"
# 1354 "data/maps/PewterCity_Frlg/scripts.pory"
	compare VAR_TEMP_1, 0
# 1355 "data/maps/PewterCity_Frlg/scripts.pory"
	goto_if_eq PewterCity_EventScript_AideGiveRunningShoes_11
# 1356 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_EventScript_AideGiveRunningShoes_10:
# 1357 "data/maps/PewterCity_Frlg/scripts.pory"
# 773 "data/maps/PewterCity_Frlg/scripts.pory"
# 1358 "data/maps/PewterCity_Frlg/scripts.pory"
	compare VAR_TEMP_1, 1
# 1359 "data/maps/PewterCity_Frlg/scripts.pory"
	goto_if_eq PewterCity_EventScript_AideGiveRunningShoes_14
# 1360 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_EventScript_AideGiveRunningShoes_13:
# 1361 "data/maps/PewterCity_Frlg/scripts.pory"
# 776 "data/maps/PewterCity_Frlg/scripts.pory"
# 1362 "data/maps/PewterCity_Frlg/scripts.pory"
	compare VAR_TEMP_1, 2
# 1363 "data/maps/PewterCity_Frlg/scripts.pory"
	goto_if_eq PewterCity_EventScript_AideGiveRunningShoes_17
# 1364 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_EventScript_AideGiveRunningShoes_16:
# 1365 "data/maps/PewterCity_Frlg/scripts.pory"
# 779 "data/maps/PewterCity_Frlg/scripts.pory"
# 1366 "data/maps/PewterCity_Frlg/scripts.pory"
	compare VAR_TEMP_1, 3
# 1367 "data/maps/PewterCity_Frlg/scripts.pory"
	goto_if_eq PewterCity_EventScript_AideGiveRunningShoes_20
# 1368 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_EventScript_AideGiveRunningShoes_19:
# 1369 "data/maps/PewterCity_Frlg/scripts.pory"
# 782 "data/maps/PewterCity_Frlg/scripts.pory"
# 1370 "data/maps/PewterCity_Frlg/scripts.pory"
	msgbox PewterCity_Text_AskedToDeliverThis
# 1371 "data/maps/PewterCity_Frlg/scripts.pory"
# 783 "data/maps/PewterCity_Frlg/scripts.pory"
# 1372 "data/maps/PewterCity_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 1373 "data/maps/PewterCity_Frlg/scripts.pory"
# 784 "data/maps/PewterCity_Frlg/scripts.pory"
# 1374 "data/maps/PewterCity_Frlg/scripts.pory"
	playfanfare MUS_RG_OBTAIN_KEY_ITEM
# 1375 "data/maps/PewterCity_Frlg/scripts.pory"
# 785 "data/maps/PewterCity_Frlg/scripts.pory"
# 1376 "data/maps/PewterCity_Frlg/scripts.pory"
	message PewterCity_Text_ReceivedRunningShoesFromAide
# 1377 "data/maps/PewterCity_Frlg/scripts.pory"
# 786 "data/maps/PewterCity_Frlg/scripts.pory"
# 1378 "data/maps/PewterCity_Frlg/scripts.pory"
	waitmessage
# 1379 "data/maps/PewterCity_Frlg/scripts.pory"
# 787 "data/maps/PewterCity_Frlg/scripts.pory"
# 1380 "data/maps/PewterCity_Frlg/scripts.pory"
	waitfanfare
# 1381 "data/maps/PewterCity_Frlg/scripts.pory"
# 788 "data/maps/PewterCity_Frlg/scripts.pory"
# 1382 "data/maps/PewterCity_Frlg/scripts.pory"
	msgbox PewterCity_Text_SwitchedShoesWithRunningShoes
# 1383 "data/maps/PewterCity_Frlg/scripts.pory"
# 789 "data/maps/PewterCity_Frlg/scripts.pory"
# 1384 "data/maps/PewterCity_Frlg/scripts.pory"
	special DisableMsgBoxWalkaway
# 1385 "data/maps/PewterCity_Frlg/scripts.pory"
# 790 "data/maps/PewterCity_Frlg/scripts.pory"
# 1386 "data/maps/PewterCity_Frlg/scripts.pory"
	signmsg
# 1387 "data/maps/PewterCity_Frlg/scripts.pory"
# 791 "data/maps/PewterCity_Frlg/scripts.pory"
# 1388 "data/maps/PewterCity_Frlg/scripts.pory"
	msgbox PewterCity_Text_ExplainRunningShoes
# 1389 "data/maps/PewterCity_Frlg/scripts.pory"
# 792 "data/maps/PewterCity_Frlg/scripts.pory"
# 1390 "data/maps/PewterCity_Frlg/scripts.pory"
	normalmsg
# 1391 "data/maps/PewterCity_Frlg/scripts.pory"
# 793 "data/maps/PewterCity_Frlg/scripts.pory"
# 1392 "data/maps/PewterCity_Frlg/scripts.pory"
	call EventScript_RestorePrevTextColor
# 1393 "data/maps/PewterCity_Frlg/scripts.pory"
# 794 "data/maps/PewterCity_Frlg/scripts.pory"
# 1394 "data/maps/PewterCity_Frlg/scripts.pory"
	msgbox PewterCity_Text_MustBeGoingBackToLab
# 1395 "data/maps/PewterCity_Frlg/scripts.pory"
# 795 "data/maps/PewterCity_Frlg/scripts.pory"
# 1396 "data/maps/PewterCity_Frlg/scripts.pory"
	closemessage
# 1397 "data/maps/PewterCity_Frlg/scripts.pory"
# 796 "data/maps/PewterCity_Frlg/scripts.pory"
# 1398 "data/maps/PewterCity_Frlg/scripts.pory"
	compare VAR_TEMP_1, 0
# 1399 "data/maps/PewterCity_Frlg/scripts.pory"
	goto_if_eq PewterCity_EventScript_AideGiveRunningShoes_23
# 1400 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_EventScript_AideGiveRunningShoes_22:
# 1401 "data/maps/PewterCity_Frlg/scripts.pory"
# 799 "data/maps/PewterCity_Frlg/scripts.pory"
# 1402 "data/maps/PewterCity_Frlg/scripts.pory"
	compare VAR_TEMP_1, 1
# 1403 "data/maps/PewterCity_Frlg/scripts.pory"
	goto_if_eq PewterCity_EventScript_AideGiveRunningShoes_26
# 1404 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_EventScript_AideGiveRunningShoes_25:
# 1405 "data/maps/PewterCity_Frlg/scripts.pory"
# 802 "data/maps/PewterCity_Frlg/scripts.pory"
# 1406 "data/maps/PewterCity_Frlg/scripts.pory"
	compare VAR_TEMP_1, 2
# 1407 "data/maps/PewterCity_Frlg/scripts.pory"
	goto_if_eq PewterCity_EventScript_AideGiveRunningShoes_29
# 1408 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_EventScript_AideGiveRunningShoes_28:
# 1409 "data/maps/PewterCity_Frlg/scripts.pory"
# 805 "data/maps/PewterCity_Frlg/scripts.pory"
# 1410 "data/maps/PewterCity_Frlg/scripts.pory"
	compare VAR_TEMP_1, 3
# 1411 "data/maps/PewterCity_Frlg/scripts.pory"
	goto_if_eq PewterCity_EventScript_AideGiveRunningShoes_32
# 1412 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_EventScript_AideGiveRunningShoes_31:
# 1413 "data/maps/PewterCity_Frlg/scripts.pory"
# 808 "data/maps/PewterCity_Frlg/scripts.pory"
# 1414 "data/maps/PewterCity_Frlg/scripts.pory"
	delay 30
# 1415 "data/maps/PewterCity_Frlg/scripts.pory"
# 809 "data/maps/PewterCity_Frlg/scripts.pory"
# 1416 "data/maps/PewterCity_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 1417 "data/maps/PewterCity_Frlg/scripts.pory"
# 810 "data/maps/PewterCity_Frlg/scripts.pory"
# 1418 "data/maps/PewterCity_Frlg/scripts.pory"
	msgbox PewterCity_Text_RunningShoesLetterFromMom
# 1419 "data/maps/PewterCity_Frlg/scripts.pory"
# 811 "data/maps/PewterCity_Frlg/scripts.pory"
# 1420 "data/maps/PewterCity_Frlg/scripts.pory"
	closemessage
# 1421 "data/maps/PewterCity_Frlg/scripts.pory"
# 812 "data/maps/PewterCity_Frlg/scripts.pory"
# 1422 "data/maps/PewterCity_Frlg/scripts.pory"
	removeobject LOCALID_PEWTER_AIDE
# 1423 "data/maps/PewterCity_Frlg/scripts.pory"
# 813 "data/maps/PewterCity_Frlg/scripts.pory"
# 1424 "data/maps/PewterCity_Frlg/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 1425 "data/maps/PewterCity_Frlg/scripts.pory"
# 814 "data/maps/PewterCity_Frlg/scripts.pory"
# 1426 "data/maps/PewterCity_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_PEWTER_CITY, 2
# 1427 "data/maps/PewterCity_Frlg/scripts.pory"
	return
# 1428 "data/maps/PewterCity_Frlg/scripts.pory"

# 1429 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_EventScript_AideGiveRunningShoes_2:
# 1430 "data/maps/PewterCity_Frlg/scripts.pory"
# 755 "data/maps/PewterCity_Frlg/scripts.pory"
# 1431 "data/maps/PewterCity_Frlg/scripts.pory"
	call PewterCity_EventScript_AideNoticePlayer
# 1432 "data/maps/PewterCity_Frlg/scripts.pory"
	goto PewterCity_EventScript_AideGiveRunningShoes_1
# 1433 "data/maps/PewterCity_Frlg/scripts.pory"

# 1434 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_EventScript_AideGiveRunningShoes_5:
# 1435 "data/maps/PewterCity_Frlg/scripts.pory"
# 758 "data/maps/PewterCity_Frlg/scripts.pory"
# 1436 "data/maps/PewterCity_Frlg/scripts.pory"
	call PewterCity_EventScript_AideNoticePlayer
# 1437 "data/maps/PewterCity_Frlg/scripts.pory"
	goto PewterCity_EventScript_AideGiveRunningShoes_4
# 1438 "data/maps/PewterCity_Frlg/scripts.pory"

# 1439 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_EventScript_AideGiveRunningShoes_8:
# 1440 "data/maps/PewterCity_Frlg/scripts.pory"
# 761 "data/maps/PewterCity_Frlg/scripts.pory"
# 1441 "data/maps/PewterCity_Frlg/scripts.pory"
	call PewterCity_EventScript_AideNoticePlayer
# 1442 "data/maps/PewterCity_Frlg/scripts.pory"
	goto PewterCity_EventScript_AideGiveRunningShoes_7
# 1443 "data/maps/PewterCity_Frlg/scripts.pory"

# 1444 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_EventScript_AideGiveRunningShoes_11:
# 1445 "data/maps/PewterCity_Frlg/scripts.pory"
# 771 "data/maps/PewterCity_Frlg/scripts.pory"
# 1446 "data/maps/PewterCity_Frlg/scripts.pory"
	call PewterCity_EventScript_AideApproachPlayer0
# 1447 "data/maps/PewterCity_Frlg/scripts.pory"
	goto PewterCity_EventScript_AideGiveRunningShoes_10
# 1448 "data/maps/PewterCity_Frlg/scripts.pory"

# 1449 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_EventScript_AideGiveRunningShoes_14:
# 1450 "data/maps/PewterCity_Frlg/scripts.pory"
# 774 "data/maps/PewterCity_Frlg/scripts.pory"
# 1451 "data/maps/PewterCity_Frlg/scripts.pory"
	call PewterCity_EventScript_AideApproachPlayer1
# 1452 "data/maps/PewterCity_Frlg/scripts.pory"
	goto PewterCity_EventScript_AideGiveRunningShoes_13
# 1453 "data/maps/PewterCity_Frlg/scripts.pory"

# 1454 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_EventScript_AideGiveRunningShoes_17:
# 1455 "data/maps/PewterCity_Frlg/scripts.pory"
# 777 "data/maps/PewterCity_Frlg/scripts.pory"
# 1456 "data/maps/PewterCity_Frlg/scripts.pory"
	call PewterCity_EventScript_AideApproachPlayer2
# 1457 "data/maps/PewterCity_Frlg/scripts.pory"
	goto PewterCity_EventScript_AideGiveRunningShoes_16
# 1458 "data/maps/PewterCity_Frlg/scripts.pory"

# 1459 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_EventScript_AideGiveRunningShoes_20:
# 1460 "data/maps/PewterCity_Frlg/scripts.pory"
# 780 "data/maps/PewterCity_Frlg/scripts.pory"
# 1461 "data/maps/PewterCity_Frlg/scripts.pory"
	call PewterCity_EventScript_AideApproachPlayer3
# 1462 "data/maps/PewterCity_Frlg/scripts.pory"
	goto PewterCity_EventScript_AideGiveRunningShoes_19
# 1463 "data/maps/PewterCity_Frlg/scripts.pory"

# 1464 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_EventScript_AideGiveRunningShoes_23:
# 1465 "data/maps/PewterCity_Frlg/scripts.pory"
# 797 "data/maps/PewterCity_Frlg/scripts.pory"
# 1466 "data/maps/PewterCity_Frlg/scripts.pory"
	call PewterCity_EventScript_AideExit0
# 1467 "data/maps/PewterCity_Frlg/scripts.pory"
	goto PewterCity_EventScript_AideGiveRunningShoes_22
# 1468 "data/maps/PewterCity_Frlg/scripts.pory"

# 1469 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_EventScript_AideGiveRunningShoes_26:
# 1470 "data/maps/PewterCity_Frlg/scripts.pory"
# 800 "data/maps/PewterCity_Frlg/scripts.pory"
# 1471 "data/maps/PewterCity_Frlg/scripts.pory"
	call PewterCity_EventScript_AideExit1
# 1472 "data/maps/PewterCity_Frlg/scripts.pory"
	goto PewterCity_EventScript_AideGiveRunningShoes_25
# 1473 "data/maps/PewterCity_Frlg/scripts.pory"

# 1474 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_EventScript_AideGiveRunningShoes_29:
# 1475 "data/maps/PewterCity_Frlg/scripts.pory"
# 803 "data/maps/PewterCity_Frlg/scripts.pory"
# 1476 "data/maps/PewterCity_Frlg/scripts.pory"
	call PewterCity_EventScript_AideExit2
# 1477 "data/maps/PewterCity_Frlg/scripts.pory"
	goto PewterCity_EventScript_AideGiveRunningShoes_28
# 1478 "data/maps/PewterCity_Frlg/scripts.pory"

# 1479 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_EventScript_AideGiveRunningShoes_32:
# 1480 "data/maps/PewterCity_Frlg/scripts.pory"
# 806 "data/maps/PewterCity_Frlg/scripts.pory"
# 1481 "data/maps/PewterCity_Frlg/scripts.pory"
	call PewterCity_EventScript_AideExit3
# 1482 "data/maps/PewterCity_Frlg/scripts.pory"
	goto PewterCity_EventScript_AideGiveRunningShoes_31
# 1483 "data/maps/PewterCity_Frlg/scripts.pory"

# 1484 "data/maps/PewterCity_Frlg/scripts.pory"

# 1485 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_EventScript_AideNoticePlayer::
# 1486 "data/maps/PewterCity_Frlg/scripts.pory"
# 819 "data/maps/PewterCity_Frlg/scripts.pory"
# 1487 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PEWTER_AIDE, Common_Movement_WalkInPlaceFasterDown
# 1488 "data/maps/PewterCity_Frlg/scripts.pory"
# 820 "data/maps/PewterCity_Frlg/scripts.pory"
# 1489 "data/maps/PewterCity_Frlg/scripts.pory"
	waitmovement 0
# 1490 "data/maps/PewterCity_Frlg/scripts.pory"
	return
# 1491 "data/maps/PewterCity_Frlg/scripts.pory"

# 1492 "data/maps/PewterCity_Frlg/scripts.pory"

# 1493 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_EventScript_AideApproachPlayer0::
# 1494 "data/maps/PewterCity_Frlg/scripts.pory"
# 825 "data/maps/PewterCity_Frlg/scripts.pory"
# 1495 "data/maps/PewterCity_Frlg/scripts.pory"
	closemessage
# 1496 "data/maps/PewterCity_Frlg/scripts.pory"
# 826 "data/maps/PewterCity_Frlg/scripts.pory"
# 1497 "data/maps/PewterCity_Frlg/scripts.pory"
	delay 20
# 1498 "data/maps/PewterCity_Frlg/scripts.pory"
	return
# 1499 "data/maps/PewterCity_Frlg/scripts.pory"

# 1500 "data/maps/PewterCity_Frlg/scripts.pory"

# 1501 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_EventScript_AideApproachPlayer1::
# 1502 "data/maps/PewterCity_Frlg/scripts.pory"
# 831 "data/maps/PewterCity_Frlg/scripts.pory"
# 1503 "data/maps/PewterCity_Frlg/scripts.pory"
	closemessage
# 1504 "data/maps/PewterCity_Frlg/scripts.pory"
# 832 "data/maps/PewterCity_Frlg/scripts.pory"
# 1505 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 1506 "data/maps/PewterCity_Frlg/scripts.pory"
# 833 "data/maps/PewterCity_Frlg/scripts.pory"
# 1507 "data/maps/PewterCity_Frlg/scripts.pory"
	waitmovement 0
# 1508 "data/maps/PewterCity_Frlg/scripts.pory"
	return
# 1509 "data/maps/PewterCity_Frlg/scripts.pory"

# 1510 "data/maps/PewterCity_Frlg/scripts.pory"

# 1511 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_EventScript_AideApproachPlayer2::
# 1512 "data/maps/PewterCity_Frlg/scripts.pory"
# 838 "data/maps/PewterCity_Frlg/scripts.pory"
# 1513 "data/maps/PewterCity_Frlg/scripts.pory"
	closemessage
# 1514 "data/maps/PewterCity_Frlg/scripts.pory"
# 839 "data/maps/PewterCity_Frlg/scripts.pory"
# 1515 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PEWTER_AIDE, PewterCity_Movement_AideApproachPlayerMid
# 1516 "data/maps/PewterCity_Frlg/scripts.pory"
# 840 "data/maps/PewterCity_Frlg/scripts.pory"
# 1517 "data/maps/PewterCity_Frlg/scripts.pory"
	waitmovement 0
# 1518 "data/maps/PewterCity_Frlg/scripts.pory"
# 841 "data/maps/PewterCity_Frlg/scripts.pory"
# 1519 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 1520 "data/maps/PewterCity_Frlg/scripts.pory"
# 842 "data/maps/PewterCity_Frlg/scripts.pory"
# 1521 "data/maps/PewterCity_Frlg/scripts.pory"
	waitmovement 0
# 1522 "data/maps/PewterCity_Frlg/scripts.pory"
	return
# 1523 "data/maps/PewterCity_Frlg/scripts.pory"

# 1524 "data/maps/PewterCity_Frlg/scripts.pory"

# 1525 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_EventScript_AideApproachPlayer3::
# 1526 "data/maps/PewterCity_Frlg/scripts.pory"
# 847 "data/maps/PewterCity_Frlg/scripts.pory"
# 1527 "data/maps/PewterCity_Frlg/scripts.pory"
	closemessage
# 1528 "data/maps/PewterCity_Frlg/scripts.pory"
# 848 "data/maps/PewterCity_Frlg/scripts.pory"
# 1529 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PEWTER_AIDE, PewterCity_Movement_AideApproachPlayerBottom
# 1530 "data/maps/PewterCity_Frlg/scripts.pory"
# 849 "data/maps/PewterCity_Frlg/scripts.pory"
# 1531 "data/maps/PewterCity_Frlg/scripts.pory"
	waitmovement 0
# 1532 "data/maps/PewterCity_Frlg/scripts.pory"
# 850 "data/maps/PewterCity_Frlg/scripts.pory"
# 1533 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 1534 "data/maps/PewterCity_Frlg/scripts.pory"
# 851 "data/maps/PewterCity_Frlg/scripts.pory"
# 1535 "data/maps/PewterCity_Frlg/scripts.pory"
	waitmovement 0
# 1536 "data/maps/PewterCity_Frlg/scripts.pory"
	return
# 1537 "data/maps/PewterCity_Frlg/scripts.pory"

# 1538 "data/maps/PewterCity_Frlg/scripts.pory"

# 1539 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_EventScript_AideExit0::
# 1540 "data/maps/PewterCity_Frlg/scripts.pory"
# 856 "data/maps/PewterCity_Frlg/scripts.pory"
# 1541 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PEWTER_AIDE, PewterCity_Movement_AideExit0
# 1542 "data/maps/PewterCity_Frlg/scripts.pory"
# 857 "data/maps/PewterCity_Frlg/scripts.pory"
# 1543 "data/maps/PewterCity_Frlg/scripts.pory"
	waitmovement 0
# 1544 "data/maps/PewterCity_Frlg/scripts.pory"
	return
# 1545 "data/maps/PewterCity_Frlg/scripts.pory"

# 1546 "data/maps/PewterCity_Frlg/scripts.pory"

# 1547 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_EventScript_AideExit1::
# 1548 "data/maps/PewterCity_Frlg/scripts.pory"
# 862 "data/maps/PewterCity_Frlg/scripts.pory"
# 1549 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PEWTER_AIDE, PewterCity_Movement_AideExit1
# 1550 "data/maps/PewterCity_Frlg/scripts.pory"
# 863 "data/maps/PewterCity_Frlg/scripts.pory"
# 1551 "data/maps/PewterCity_Frlg/scripts.pory"
	waitmovement 0
# 1552 "data/maps/PewterCity_Frlg/scripts.pory"
	return
# 1553 "data/maps/PewterCity_Frlg/scripts.pory"

# 1554 "data/maps/PewterCity_Frlg/scripts.pory"

# 1555 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_EventScript_AideExit2::
# 1556 "data/maps/PewterCity_Frlg/scripts.pory"
# 868 "data/maps/PewterCity_Frlg/scripts.pory"
# 1557 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PEWTER_AIDE, PewterCity_Movement_AideExit2
# 1558 "data/maps/PewterCity_Frlg/scripts.pory"
# 869 "data/maps/PewterCity_Frlg/scripts.pory"
# 1559 "data/maps/PewterCity_Frlg/scripts.pory"
	waitmovement 0
# 1560 "data/maps/PewterCity_Frlg/scripts.pory"
	return
# 1561 "data/maps/PewterCity_Frlg/scripts.pory"

# 1562 "data/maps/PewterCity_Frlg/scripts.pory"

# 1563 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_EventScript_AideExit3::
# 1564 "data/maps/PewterCity_Frlg/scripts.pory"
# 874 "data/maps/PewterCity_Frlg/scripts.pory"
# 1565 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PEWTER_AIDE, PewterCity_Movement_AideExit3
# 1566 "data/maps/PewterCity_Frlg/scripts.pory"
# 875 "data/maps/PewterCity_Frlg/scripts.pory"
# 1567 "data/maps/PewterCity_Frlg/scripts.pory"
	waitmovement 0
# 1568 "data/maps/PewterCity_Frlg/scripts.pory"
	return
# 1569 "data/maps/PewterCity_Frlg/scripts.pory"

# 1570 "data/maps/PewterCity_Frlg/scripts.pory"

# 1571 "data/maps/PewterCity_Frlg/scripts.pory"
# 879 "data/maps/PewterCity_Frlg/scripts.pory"
# 1572 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Movement_AideApproachPlayerMid:
# 1573 "data/maps/PewterCity_Frlg/scripts.pory"
# 880 "data/maps/PewterCity_Frlg/scripts.pory"
# 1574 "data/maps/PewterCity_Frlg/scripts.pory"
	delay_4
# 1575 "data/maps/PewterCity_Frlg/scripts.pory"
# 881 "data/maps/PewterCity_Frlg/scripts.pory"
# 1576 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 1577 "data/maps/PewterCity_Frlg/scripts.pory"
# 882 "data/maps/PewterCity_Frlg/scripts.pory"
# 1578 "data/maps/PewterCity_Frlg/scripts.pory"
	step_end
# 1579 "data/maps/PewterCity_Frlg/scripts.pory"

# 1580 "data/maps/PewterCity_Frlg/scripts.pory"
# 885 "data/maps/PewterCity_Frlg/scripts.pory"
# 1581 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Movement_AideApproachPlayerBottom:
# 1582 "data/maps/PewterCity_Frlg/scripts.pory"
# 886 "data/maps/PewterCity_Frlg/scripts.pory"
# 1583 "data/maps/PewterCity_Frlg/scripts.pory"
	delay_4
# 1584 "data/maps/PewterCity_Frlg/scripts.pory"
# 887 "data/maps/PewterCity_Frlg/scripts.pory"
# 1585 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 1586 "data/maps/PewterCity_Frlg/scripts.pory"
# 888 "data/maps/PewterCity_Frlg/scripts.pory"
# 1587 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 1588 "data/maps/PewterCity_Frlg/scripts.pory"
# 889 "data/maps/PewterCity_Frlg/scripts.pory"
# 1589 "data/maps/PewterCity_Frlg/scripts.pory"
	step_end
# 1590 "data/maps/PewterCity_Frlg/scripts.pory"

# 1591 "data/maps/PewterCity_Frlg/scripts.pory"
# 892 "data/maps/PewterCity_Frlg/scripts.pory"
# 1592 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Movement_AideExit0:
# 1593 "data/maps/PewterCity_Frlg/scripts.pory"
# 893 "data/maps/PewterCity_Frlg/scripts.pory"
# 1594 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 1595 "data/maps/PewterCity_Frlg/scripts.pory"
# 894 "data/maps/PewterCity_Frlg/scripts.pory"
# 1596 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 1597 "data/maps/PewterCity_Frlg/scripts.pory"
# 895 "data/maps/PewterCity_Frlg/scripts.pory"
# 1598 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 1599 "data/maps/PewterCity_Frlg/scripts.pory"
# 896 "data/maps/PewterCity_Frlg/scripts.pory"
# 1600 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 1601 "data/maps/PewterCity_Frlg/scripts.pory"
# 897 "data/maps/PewterCity_Frlg/scripts.pory"
# 1602 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 1603 "data/maps/PewterCity_Frlg/scripts.pory"
# 898 "data/maps/PewterCity_Frlg/scripts.pory"
# 1604 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 1605 "data/maps/PewterCity_Frlg/scripts.pory"
# 899 "data/maps/PewterCity_Frlg/scripts.pory"
# 1606 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 1607 "data/maps/PewterCity_Frlg/scripts.pory"
# 900 "data/maps/PewterCity_Frlg/scripts.pory"
# 1608 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 1609 "data/maps/PewterCity_Frlg/scripts.pory"
# 901 "data/maps/PewterCity_Frlg/scripts.pory"
# 1610 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 1611 "data/maps/PewterCity_Frlg/scripts.pory"
# 902 "data/maps/PewterCity_Frlg/scripts.pory"
# 1612 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 1613 "data/maps/PewterCity_Frlg/scripts.pory"
# 903 "data/maps/PewterCity_Frlg/scripts.pory"
# 1614 "data/maps/PewterCity_Frlg/scripts.pory"
	step_end
# 1615 "data/maps/PewterCity_Frlg/scripts.pory"

# 1616 "data/maps/PewterCity_Frlg/scripts.pory"
# 906 "data/maps/PewterCity_Frlg/scripts.pory"
# 1617 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Movement_AideExit1:
# 1618 "data/maps/PewterCity_Frlg/scripts.pory"
# 907 "data/maps/PewterCity_Frlg/scripts.pory"
# 1619 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 1620 "data/maps/PewterCity_Frlg/scripts.pory"
# 908 "data/maps/PewterCity_Frlg/scripts.pory"
# 1621 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 1622 "data/maps/PewterCity_Frlg/scripts.pory"
# 909 "data/maps/PewterCity_Frlg/scripts.pory"
# 1623 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 1624 "data/maps/PewterCity_Frlg/scripts.pory"
# 910 "data/maps/PewterCity_Frlg/scripts.pory"
# 1625 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 1626 "data/maps/PewterCity_Frlg/scripts.pory"
# 911 "data/maps/PewterCity_Frlg/scripts.pory"
# 1627 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 1628 "data/maps/PewterCity_Frlg/scripts.pory"
# 912 "data/maps/PewterCity_Frlg/scripts.pory"
# 1629 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 1630 "data/maps/PewterCity_Frlg/scripts.pory"
# 913 "data/maps/PewterCity_Frlg/scripts.pory"
# 1631 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 1632 "data/maps/PewterCity_Frlg/scripts.pory"
# 914 "data/maps/PewterCity_Frlg/scripts.pory"
# 1633 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 1634 "data/maps/PewterCity_Frlg/scripts.pory"
# 915 "data/maps/PewterCity_Frlg/scripts.pory"
# 1635 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 1636 "data/maps/PewterCity_Frlg/scripts.pory"
# 916 "data/maps/PewterCity_Frlg/scripts.pory"
# 1637 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 1638 "data/maps/PewterCity_Frlg/scripts.pory"
# 917 "data/maps/PewterCity_Frlg/scripts.pory"
# 1639 "data/maps/PewterCity_Frlg/scripts.pory"
	step_end
# 1640 "data/maps/PewterCity_Frlg/scripts.pory"

# 1641 "data/maps/PewterCity_Frlg/scripts.pory"
# 920 "data/maps/PewterCity_Frlg/scripts.pory"
# 1642 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Movement_AideExit2:
# 1643 "data/maps/PewterCity_Frlg/scripts.pory"
# 921 "data/maps/PewterCity_Frlg/scripts.pory"
# 1644 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 1645 "data/maps/PewterCity_Frlg/scripts.pory"
# 922 "data/maps/PewterCity_Frlg/scripts.pory"
# 1646 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 1647 "data/maps/PewterCity_Frlg/scripts.pory"
# 923 "data/maps/PewterCity_Frlg/scripts.pory"
# 1648 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 1649 "data/maps/PewterCity_Frlg/scripts.pory"
# 924 "data/maps/PewterCity_Frlg/scripts.pory"
# 1650 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 1651 "data/maps/PewterCity_Frlg/scripts.pory"
# 925 "data/maps/PewterCity_Frlg/scripts.pory"
# 1652 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 1653 "data/maps/PewterCity_Frlg/scripts.pory"
# 926 "data/maps/PewterCity_Frlg/scripts.pory"
# 1654 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 1655 "data/maps/PewterCity_Frlg/scripts.pory"
# 927 "data/maps/PewterCity_Frlg/scripts.pory"
# 1656 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 1657 "data/maps/PewterCity_Frlg/scripts.pory"
# 928 "data/maps/PewterCity_Frlg/scripts.pory"
# 1658 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 1659 "data/maps/PewterCity_Frlg/scripts.pory"
# 929 "data/maps/PewterCity_Frlg/scripts.pory"
# 1660 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 1661 "data/maps/PewterCity_Frlg/scripts.pory"
# 930 "data/maps/PewterCity_Frlg/scripts.pory"
# 1662 "data/maps/PewterCity_Frlg/scripts.pory"
	step_end
# 1663 "data/maps/PewterCity_Frlg/scripts.pory"

# 1664 "data/maps/PewterCity_Frlg/scripts.pory"
# 933 "data/maps/PewterCity_Frlg/scripts.pory"
# 1665 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Movement_AideExit3:
# 1666 "data/maps/PewterCity_Frlg/scripts.pory"
# 934 "data/maps/PewterCity_Frlg/scripts.pory"
# 1667 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 1668 "data/maps/PewterCity_Frlg/scripts.pory"
# 935 "data/maps/PewterCity_Frlg/scripts.pory"
# 1669 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 1670 "data/maps/PewterCity_Frlg/scripts.pory"
# 936 "data/maps/PewterCity_Frlg/scripts.pory"
# 1671 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 1672 "data/maps/PewterCity_Frlg/scripts.pory"
# 937 "data/maps/PewterCity_Frlg/scripts.pory"
# 1673 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 1674 "data/maps/PewterCity_Frlg/scripts.pory"
# 938 "data/maps/PewterCity_Frlg/scripts.pory"
# 1675 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 1676 "data/maps/PewterCity_Frlg/scripts.pory"
# 939 "data/maps/PewterCity_Frlg/scripts.pory"
# 1677 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 1678 "data/maps/PewterCity_Frlg/scripts.pory"
# 940 "data/maps/PewterCity_Frlg/scripts.pory"
# 1679 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 1680 "data/maps/PewterCity_Frlg/scripts.pory"
# 941 "data/maps/PewterCity_Frlg/scripts.pory"
# 1681 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 1682 "data/maps/PewterCity_Frlg/scripts.pory"
# 942 "data/maps/PewterCity_Frlg/scripts.pory"
# 1683 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 1684 "data/maps/PewterCity_Frlg/scripts.pory"
# 943 "data/maps/PewterCity_Frlg/scripts.pory"
# 1685 "data/maps/PewterCity_Frlg/scripts.pory"
	step_end
# 1686 "data/maps/PewterCity_Frlg/scripts.pory"

# 1687 "data/maps/PewterCity_Frlg/scripts.pory"
# 946 "data/maps/PewterCity_Frlg/scripts.pory"
# 1688 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Movement_WalkInPlaceLeft:
# 1689 "data/maps/PewterCity_Frlg/scripts.pory"
# 947 "data/maps/PewterCity_Frlg/scripts.pory"
# 1690 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_in_place_left
# 1691 "data/maps/PewterCity_Frlg/scripts.pory"
# 948 "data/maps/PewterCity_Frlg/scripts.pory"
# 1692 "data/maps/PewterCity_Frlg/scripts.pory"
	step_end
# 1693 "data/maps/PewterCity_Frlg/scripts.pory"

# 1694 "data/maps/PewterCity_Frlg/scripts.pory"
Text_DreamEaterTeach::
# 1695 "data/maps/PewterCity_Frlg/scripts.pory"
# 951 "data/maps/PewterCity_Frlg/scripts.pory"
# 1696 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "Yawn!\n"
# 1697 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "I must have dozed off in the sun.\p"
# 1698 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "I had this weird dream about\n"
# 1699 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "a DROWZEE eating my dream.\p"
# 1700 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "And…\n"
# 1701 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "I learned how to eat dreams…\p"
# 1702 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "Oogh, this is too spooky!\p"
# 1703 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "Let me teach it to a POKéMON so\n"
# 1704 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "I can forget about it!$"
# 1705 "data/maps/PewterCity_Frlg/scripts.pory"

# 1706 "data/maps/PewterCity_Frlg/scripts.pory"
Text_DreamEaterDeclined::
# 1707 "data/maps/PewterCity_Frlg/scripts.pory"
# 963 "data/maps/PewterCity_Frlg/scripts.pory"
# 1708 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "…Snore…$"
# 1709 "data/maps/PewterCity_Frlg/scripts.pory"

# 1710 "data/maps/PewterCity_Frlg/scripts.pory"
Text_DreamEaterWhichMon::
# 1711 "data/maps/PewterCity_Frlg/scripts.pory"
# 967 "data/maps/PewterCity_Frlg/scripts.pory"
# 1712 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "Which POKéMON wants to learn\n"
# 1713 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "DREAM EATER?$"
# 1714 "data/maps/PewterCity_Frlg/scripts.pory"

# 1715 "data/maps/PewterCity_Frlg/scripts.pory"
Text_DreamEaterTaught::
# 1716 "data/maps/PewterCity_Frlg/scripts.pory"
# 972 "data/maps/PewterCity_Frlg/scripts.pory"
# 1717 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "…ZZZ…\n"
# 1718 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "I…can't eat…anymore…$"
# 1719 "data/maps/PewterCity_Frlg/scripts.pory"

# 1720 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Text_ClefairyCameFromMoon::
# 1721 "data/maps/PewterCity_Frlg/scripts.pory"
# 977 "data/maps/PewterCity_Frlg/scripts.pory"
# 1722 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "CLEFAIRY came from the moon.\n"
# 1723 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "That's what the rumor is.\p"
# 1724 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "They appeared after MOON STONES\n"
# 1725 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "fell on MT. MOON.$"
# 1726 "data/maps/PewterCity_Frlg/scripts.pory"

# 1727 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Text_BrockOnlySeriousTrainerHere::
# 1728 "data/maps/PewterCity_Frlg/scripts.pory"
# 984 "data/maps/PewterCity_Frlg/scripts.pory"
# 1729 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "There aren't many serious POKéMON\n"
# 1730 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "TRAINERS here.\p"
# 1731 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "They're all like BUG CATCHERS,\n"
# 1732 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "you know, just hobbyists.\p"
# 1733 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "But PEWTER GYM's BROCK isn't like\n"
# 1734 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "that, not one bit.$"
# 1735 "data/maps/PewterCity_Frlg/scripts.pory"

# 1736 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Text_DidYouCheckOutMuseum::
# 1737 "data/maps/PewterCity_Frlg/scripts.pory"
# 993 "data/maps/PewterCity_Frlg/scripts.pory"
# 1738 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "Did you check out the MUSEUM?$"
# 1739 "data/maps/PewterCity_Frlg/scripts.pory"

# 1740 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Text_WerentThoseFossilsAmazing::
# 1741 "data/maps/PewterCity_Frlg/scripts.pory"
# 997 "data/maps/PewterCity_Frlg/scripts.pory"
# 1742 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "Weren't those fossils from MT. MOON\n"
# 1743 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "amazing?$"
# 1744 "data/maps/PewterCity_Frlg/scripts.pory"

# 1745 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Text_ReallyYouHaveToGo::
# 1746 "data/maps/PewterCity_Frlg/scripts.pory"
# 1002 "data/maps/PewterCity_Frlg/scripts.pory"
# 1747 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "Really?\n"
# 1748 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "You absolutely have to go!$"
# 1749 "data/maps/PewterCity_Frlg/scripts.pory"

# 1750 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Text_ThisIsTheMuseum::
# 1751 "data/maps/PewterCity_Frlg/scripts.pory"
# 1007 "data/maps/PewterCity_Frlg/scripts.pory"
# 1752 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "This is it, the MUSEUM.\p"
# 1753 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "You have to pay to get in, but it's\n"
# 1754 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "worth it. See you around!$"
# 1755 "data/maps/PewterCity_Frlg/scripts.pory"

# 1756 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Text_DoYouKnowWhatImDoing::
# 1757 "data/maps/PewterCity_Frlg/scripts.pory"
# 1013 "data/maps/PewterCity_Frlg/scripts.pory"
# 1758 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "Psssst!\n"
# 1759 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "Do you know what I'm doing?$"
# 1760 "data/maps/PewterCity_Frlg/scripts.pory"

# 1761 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Text_ThatsRightItsHardWork::
# 1762 "data/maps/PewterCity_Frlg/scripts.pory"
# 1018 "data/maps/PewterCity_Frlg/scripts.pory"
# 1763 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "That's right!\n"
# 1764 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "It's hard work!$"
# 1765 "data/maps/PewterCity_Frlg/scripts.pory"

# 1766 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Text_SprayingRepelToKeepWildMonsOut::
# 1767 "data/maps/PewterCity_Frlg/scripts.pory"
# 1023 "data/maps/PewterCity_Frlg/scripts.pory"
# 1768 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "I'm spraying REPEL to keep wild\n"
# 1769 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "POKéMON out of my garden!$"
# 1770 "data/maps/PewterCity_Frlg/scripts.pory"

# 1771 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Text_BrocksLookingForChallengersFollowMe::
# 1772 "data/maps/PewterCity_Frlg/scripts.pory"
# 1028 "data/maps/PewterCity_Frlg/scripts.pory"
# 1773 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "You're a TRAINER, right?\p"
# 1774 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "BROCK's looking for new\n"
# 1775 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "challengers. Follow me!$"
# 1776 "data/maps/PewterCity_Frlg/scripts.pory"

# 1777 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Text_GoTakeOnBrock::
# 1778 "data/maps/PewterCity_Frlg/scripts.pory"
# 1034 "data/maps/PewterCity_Frlg/scripts.pory"
# 1779 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "If you have the right stuff,\n"
# 1780 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "go take on BROCK!$"
# 1781 "data/maps/PewterCity_Frlg/scripts.pory"

# 1782 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Text_TrainerTipsEarningEXP::
# 1783 "data/maps/PewterCity_Frlg/scripts.pory"
# 1039 "data/maps/PewterCity_Frlg/scripts.pory"
# 1784 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "TRAINER TIPS\p"
# 1785 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "All POKéMON that appear in battle,\n"
# 1786 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "however briefly, earn EXP Points.$"
# 1787 "data/maps/PewterCity_Frlg/scripts.pory"

# 1788 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Text_CallPoliceIfInfoOnThieves::
# 1789 "data/maps/PewterCity_Frlg/scripts.pory"
# 1045 "data/maps/PewterCity_Frlg/scripts.pory"
# 1790 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "NOTICE!\p"
# 1791 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "Thieves have been stealing POKéMON\n"
# 1792 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "fossils from MT. MOON.\p"
# 1793 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "Please call the PEWTER POLICE if\n"
# 1794 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "you have any information.$"
# 1795 "data/maps/PewterCity_Frlg/scripts.pory"

# 1796 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Text_MuseumOfScience::
# 1797 "data/maps/PewterCity_Frlg/scripts.pory"
# 1053 "data/maps/PewterCity_Frlg/scripts.pory"
# 1798 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "PEWTER MUSEUM OF SCIENCE$"
# 1799 "data/maps/PewterCity_Frlg/scripts.pory"

# 1800 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Text_GymSign::
# 1801 "data/maps/PewterCity_Frlg/scripts.pory"
# 1057 "data/maps/PewterCity_Frlg/scripts.pory"
# 1802 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "PEWTER CITY POKéMON GYM\n"
# 1803 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "LEADER: BROCK\l"
# 1804 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "The Rock-Solid POKéMON TRAINER!$"
# 1805 "data/maps/PewterCity_Frlg/scripts.pory"

# 1806 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Text_CitySign::
# 1807 "data/maps/PewterCity_Frlg/scripts.pory"
# 1063 "data/maps/PewterCity_Frlg/scripts.pory"
# 1808 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "PEWTER CITY\n"
# 1809 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "A Stone Gray City$"
# 1810 "data/maps/PewterCity_Frlg/scripts.pory"

# 1811 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Text_OhPlayer::
# 1812 "data/maps/PewterCity_Frlg/scripts.pory"
# 1068 "data/maps/PewterCity_Frlg/scripts.pory"
# 1813 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "Oh, {PLAYER}{KUN}!$"
# 1814 "data/maps/PewterCity_Frlg/scripts.pory"

# 1815 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Text_AskedToDeliverThis::
# 1816 "data/maps/PewterCity_Frlg/scripts.pory"
# 1072 "data/maps/PewterCity_Frlg/scripts.pory"
# 1817 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "I'm glad I caught up to you.\n"
# 1818 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "I'm PROF. OAK's AIDE.\p"
# 1819 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "I've been asked to deliver this,\n"
# 1820 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "so here you go.$"
# 1821 "data/maps/PewterCity_Frlg/scripts.pory"

# 1822 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Text_ReceivedRunningShoesFromAide::
# 1823 "data/maps/PewterCity_Frlg/scripts.pory"
# 1079 "data/maps/PewterCity_Frlg/scripts.pory"
# 1824 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "{PLAYER} received the\n"
# 1825 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "RUNNING SHOES from the AIDE.$"
# 1826 "data/maps/PewterCity_Frlg/scripts.pory"

# 1827 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Text_SwitchedShoesWithRunningShoes::
# 1828 "data/maps/PewterCity_Frlg/scripts.pory"
# 1084 "data/maps/PewterCity_Frlg/scripts.pory"
# 1829 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "{PLAYER} switched shoes with the\n"
# 1830 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "RUNNING SHOES.$"
# 1831 "data/maps/PewterCity_Frlg/scripts.pory"

# 1832 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Text_ExplainRunningShoes::
# 1833 "data/maps/PewterCity_Frlg/scripts.pory"
# 1089 "data/maps/PewterCity_Frlg/scripts.pory"
# 1834 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "Press the B Button to run.\n"
# 1835 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "But only where there's room to run!$"
# 1836 "data/maps/PewterCity_Frlg/scripts.pory"

# 1837 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Text_MustBeGoingBackToLab::
# 1838 "data/maps/PewterCity_Frlg/scripts.pory"
# 1094 "data/maps/PewterCity_Frlg/scripts.pory"
# 1839 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "Well, I must be going back to\n"
# 1840 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "the LAB.\p"
# 1841 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "Bye-bye!$"
# 1842 "data/maps/PewterCity_Frlg/scripts.pory"

# 1843 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Text_RunningShoesLetterFromMom::
# 1844 "data/maps/PewterCity_Frlg/scripts.pory"
# 1100 "data/maps/PewterCity_Frlg/scripts.pory"
# 1845 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "There's a letter attached…\p"
# 1846 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "Dear {PLAYER},\p"
# 1847 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "Here is a pair of RUNNING SHOES\n"
# 1848 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "for my beloved challenger.\p"
# 1849 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "Remember, I'll always cheer for\n"
# 1850 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "you! Don't ever give up!\p"
# 1851 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "From Mom$"
