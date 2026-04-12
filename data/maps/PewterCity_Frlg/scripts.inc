PewterCity_Frlg_MapScripts::
# 2 "data/maps/PewterCity_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PewterCity_OnTransition
	.byte 0


PewterCity_OnTransition::
# 6 "data/maps/PewterCity_Frlg/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_PEWTER_CITY
# 7 "data/maps/PewterCity_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_PEWTER_CITY_MUSEUM_1F, 0
	end


PewterCity_EventScript_GymGuide::
# 12 "data/maps/PewterCity_Frlg/scripts.pory"
	lock
# 13 "data/maps/PewterCity_Frlg/scripts.pory"
	faceplayer
# 14 "data/maps/PewterCity_Frlg/scripts.pory"
	msgbox PewterCity_Text_BrocksLookingForChallengersFollowMe
# 15 "data/maps/PewterCity_Frlg/scripts.pory"
	closemessage
# 16 "data/maps/PewterCity_Frlg/scripts.pory"
	playbgm MUS_FOLLOW_ME, 0
# 17 "data/maps/PewterCity_Frlg/scripts.pory"
	compare VAR_FACING, DIR_EAST
	goto_if_eq PewterCity_EventScript_GymGuide_2
PewterCity_EventScript_GymGuide_1:
# 20 "data/maps/PewterCity_Frlg/scripts.pory"
	msgbox PewterCity_Text_GoTakeOnBrock
# 21 "data/maps/PewterCity_Frlg/scripts.pory"
	closemessage
# 22 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PEWTER_GYM_GUIDE, PewterCity_Movement_GymGuideExit
# 23 "data/maps/PewterCity_Frlg/scripts.pory"
	waitmovement 0
# 24 "data/maps/PewterCity_Frlg/scripts.pory"
	fadedefaultbgm
# 25 "data/maps/PewterCity_Frlg/scripts.pory"
	removeobject LOCALID_PEWTER_GYM_GUIDE
# 26 "data/maps/PewterCity_Frlg/scripts.pory"
	clearflag FLAG_HIDE_PEWTER_CITY_GYM_GUIDE
# 27 "data/maps/PewterCity_Frlg/scripts.pory"
	release
	end

PewterCity_EventScript_GymGuide_2:
# 18 "data/maps/PewterCity_Frlg/scripts.pory"
	call PewterCity_EventScript_WalkToGymEast
	goto PewterCity_EventScript_GymGuide_1


PewterCity_EventScript_WalkToGymEast::
# 32 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PewterCity_Movement_PlayerWaitForGuideEast
# 33 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PEWTER_GYM_GUIDE, PewterCity_Movement_GuideMoveToLeadEast
# 34 "data/maps/PewterCity_Frlg/scripts.pory"
	waitmovement 0
# 35 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PewterCity_Movement_PlayerWalkToGymEast
# 36 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PEWTER_GYM_GUIDE, PewterCity_Movement_GuideWalkToGymEast
# 37 "data/maps/PewterCity_Frlg/scripts.pory"
	waitmovement 0
	return


PewterCity_EventScript_WalkToGymWest::
# 42 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PewterCity_Movement_PlayerWaitForGuideWest
# 43 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PEWTER_GYM_GUIDE, PewterCity_Movement_GuideMoveToLeadWest
# 44 "data/maps/PewterCity_Frlg/scripts.pory"
	waitmovement 0
# 45 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PewterCity_Movement_PlayerWalkToGymWest
# 46 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PEWTER_GYM_GUIDE, PewterCity_Movement_GuideWalkToGymWest
# 47 "data/maps/PewterCity_Frlg/scripts.pory"
	waitmovement 0
	return


PewterCity_EventScript_WalkToGymNorth::
# 52 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PewterCity_Movement_PlayerWaitForGuideNorth
# 53 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PEWTER_GYM_GUIDE, PewterCity_Movement_GuideMoveToLeadNorth
# 54 "data/maps/PewterCity_Frlg/scripts.pory"
	waitmovement 0
# 55 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PewterCity_Movement_PlayerWalkToGymNorth
# 56 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PEWTER_GYM_GUIDE, PewterCity_Movement_GuideWalkToGymNorth
# 57 "data/maps/PewterCity_Frlg/scripts.pory"
	waitmovement 0
# 58 "data/maps/PewterCity_Frlg/scripts.pory"
	return
# 59 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 60 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 61 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 62 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 63 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 64 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 65 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 66 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 67 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 68 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 69 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 70 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 71 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 72 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 73 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 74 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 75 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 76 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 77 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 78 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 79 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 80 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 81 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 82 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 83 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 84 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 85 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 86 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 87 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 88 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 89 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 90 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 91 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 92 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 93 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 94 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 95 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 96 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 97 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 98 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 99 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 100 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 101 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 102 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 103 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 104 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 105 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 106 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 107 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 108 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 109 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 110 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 111 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 112 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
# 113 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
# 114 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
# 115 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
# 116 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
# 117 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
# 118 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
# 119 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
# 120 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 121 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 122 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 123 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 124 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 125 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 126 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 127 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 128 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 129 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 130 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 131 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 132 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 133 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 134 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 135 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 136 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 137 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 138 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 139 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 140 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 141 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 142 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 143 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 144 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 145 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 146 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 147 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 148 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 149 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 150 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 151 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 152 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 153 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 154 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 155 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 156 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 157 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 158 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
	return


# 161 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Movement_PlayerWaitForGuideEast:
# 162 "data/maps/PewterCity_Frlg/scripts.pory"
	delay_16
# 163 "data/maps/PewterCity_Frlg/scripts.pory"
	delay_16
# 164 "data/maps/PewterCity_Frlg/scripts.pory"
	delay_4
# 165 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_in_place_faster_down
# 166 "data/maps/PewterCity_Frlg/scripts.pory"
	step_end

PewterCity_Movement_PlayerWalkToGymEast::
# 170 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 171 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_to_gym
# 172 "data/maps/PewterCity_Frlg/scripts.pory"
	step_end
	return


# 175 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Movement_PlayerWaitForGuideWest:
# 176 "data/maps/PewterCity_Frlg/scripts.pory"
	delay_16
# 177 "data/maps/PewterCity_Frlg/scripts.pory"
	step_end

PewterCity_Movement_PlayerWalkToGymWest::
# 181 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 182 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 183 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 184 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 185 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 186 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_to_gym_alt
# 187 "data/maps/PewterCity_Frlg/scripts.pory"
	step_end
	return


# 190 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Movement_PlayerWaitForGuideNorth:
# 191 "data/maps/PewterCity_Frlg/scripts.pory"
	delay_16
# 192 "data/maps/PewterCity_Frlg/scripts.pory"
	step_end

PewterCity_Movement_PlayerWalkToGymNorth::
# 196 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 197 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 198 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 199 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 200 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 201 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_to_gym_alt
# 202 "data/maps/PewterCity_Frlg/scripts.pory"
	step_end
	return


# 205 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Movement_GuideMoveToLeadEast:
# 206 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 207 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 208 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_in_place_faster_up
# 209 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_in_place_up
# 210 "data/maps/PewterCity_Frlg/scripts.pory"
	step_end

PewterCity_Movement_GuideWalkToGymEast::
# 214 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_to_gym
# 215 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
# 216 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_in_place_faster_left
# 217 "data/maps/PewterCity_Frlg/scripts.pory"
	step_end
	return


# 220 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Movement_GuideMoveToLeadWest:
# 221 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_in_place_right
# 222 "data/maps/PewterCity_Frlg/scripts.pory"
	step_end

PewterCity_Movement_GuideWalkToGymWest::
# 226 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 227 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 228 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 229 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 230 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_to_gym_alt
# 231 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
# 232 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_in_place_faster_left
# 233 "data/maps/PewterCity_Frlg/scripts.pory"
	step_end
	return


# 236 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Movement_GuideMoveToLeadNorth:
# 237 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_in_place_down
# 238 "data/maps/PewterCity_Frlg/scripts.pory"
	step_end

PewterCity_Movement_GuideWalkToGymNorth::
# 242 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 243 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 244 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 245 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 246 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_to_gym_alt
# 247 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
# 248 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_in_place_faster_left
# 249 "data/maps/PewterCity_Frlg/scripts.pory"
	step_end
	return


# 252 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Movement_GymGuideExit:
# 253 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 254 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 255 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 256 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 257 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 258 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 259 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 260 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 261 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 262 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 263 "data/maps/PewterCity_Frlg/scripts.pory"
	step_end

PewterCity_EventScript_GymGuideTriggerTop::
# 267 "data/maps/PewterCity_Frlg/scripts.pory"
	lockall
# 268 "data/maps/PewterCity_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 0
# 269 "data/maps/PewterCity_Frlg/scripts.pory"
	goto PewterCity_EventScript_GymGuideTrigger
	end


PewterCity_EventScript_GymGuideTriggerMid::
# 274 "data/maps/PewterCity_Frlg/scripts.pory"
	lockall
# 275 "data/maps/PewterCity_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 1
# 276 "data/maps/PewterCity_Frlg/scripts.pory"
	goto PewterCity_EventScript_GymGuideTrigger
	end


PewterCity_EventScript_GymGuideTriggerBottom::
# 281 "data/maps/PewterCity_Frlg/scripts.pory"
	lockall
# 282 "data/maps/PewterCity_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 2
# 283 "data/maps/PewterCity_Frlg/scripts.pory"
	goto PewterCity_EventScript_GymGuideTrigger
	end


PewterCity_EventScript_GymGuideTriggerRight::
# 288 "data/maps/PewterCity_Frlg/scripts.pory"
	lockall
# 289 "data/maps/PewterCity_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 3
# 290 "data/maps/PewterCity_Frlg/scripts.pory"
	goto PewterCity_EventScript_GymGuideTrigger
	end


PewterCity_EventScript_GymGuideTrigger::
# 295 "data/maps/PewterCity_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 296 "data/maps/PewterCity_Frlg/scripts.pory"
	msgbox PewterCity_Text_BrocksLookingForChallengersFollowMe
# 297 "data/maps/PewterCity_Frlg/scripts.pory"
	closemessage
# 298 "data/maps/PewterCity_Frlg/scripts.pory"
	playbgm MUS_FOLLOW_ME, 0
# 299 "data/maps/PewterCity_Frlg/scripts.pory"
	compare VAR_TEMP_1, 0
	goto_if_eq PewterCity_EventScript_GymGuideTrigger_2
PewterCity_EventScript_GymGuideTrigger_1:
# 302 "data/maps/PewterCity_Frlg/scripts.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq PewterCity_EventScript_GymGuideTrigger_5
PewterCity_EventScript_GymGuideTrigger_4:
# 305 "data/maps/PewterCity_Frlg/scripts.pory"
	compare VAR_TEMP_1, 2
	goto_if_eq PewterCity_EventScript_GymGuideTrigger_8
PewterCity_EventScript_GymGuideTrigger_7:
# 308 "data/maps/PewterCity_Frlg/scripts.pory"
	msgbox PewterCity_Text_GoTakeOnBrock
# 309 "data/maps/PewterCity_Frlg/scripts.pory"
	closemessage
# 310 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PEWTER_GYM_GUIDE, PewterCity_Movement_GymGuideExit
# 311 "data/maps/PewterCity_Frlg/scripts.pory"
	waitmovement 0
# 312 "data/maps/PewterCity_Frlg/scripts.pory"
	fadedefaultbgm
# 313 "data/maps/PewterCity_Frlg/scripts.pory"
	removeobject LOCALID_PEWTER_GYM_GUIDE
# 314 "data/maps/PewterCity_Frlg/scripts.pory"
	clearflag FLAG_HIDE_PEWTER_CITY_GYM_GUIDE
# 315 "data/maps/PewterCity_Frlg/scripts.pory"
	releaseall
	end

PewterCity_EventScript_GymGuideTrigger_2:
# 300 "data/maps/PewterCity_Frlg/scripts.pory"
	call PewterCity_EventScript_WalkToGymTop
	goto PewterCity_EventScript_GymGuideTrigger_1

PewterCity_EventScript_GymGuideTrigger_5:
# 303 "data/maps/PewterCity_Frlg/scripts.pory"
	call PewterCity_EventScript_WalkToGymMid
	goto PewterCity_EventScript_GymGuideTrigger_4

PewterCity_EventScript_GymGuideTrigger_8:
# 306 "data/maps/PewterCity_Frlg/scripts.pory"
	call PewterCity_EventScript_WalkToGymBottom
	goto PewterCity_EventScript_GymGuideTrigger_7


PewterCity_EventScript_WalkToGymTop::
# 320 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PEWTER_GYM_GUIDE, PewterCity_Movement_GuideMoveToLeadTop
# 321 "data/maps/PewterCity_Frlg/scripts.pory"
	waitmovement 0
# 322 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PewterCity_Movement_PlayerWalkToGymTop
# 323 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PEWTER_GYM_GUIDE, PewterCity_Movement_GuideWalkToGymTop
# 324 "data/maps/PewterCity_Frlg/scripts.pory"
	waitmovement 0
	return


PewterCity_EventScript_WalkToGymMid::
# 329 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PEWTER_GYM_GUIDE, PewterCity_Movement_GuideMoveToLeadMid
# 330 "data/maps/PewterCity_Frlg/scripts.pory"
	waitmovement 0
# 331 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PewterCity_Movement_PlayerWalkToGymMid
# 332 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PEWTER_GYM_GUIDE, PewterCity_Movement_GuideWalkToGymMid
# 333 "data/maps/PewterCity_Frlg/scripts.pory"
	waitmovement 0
	return


PewterCity_EventScript_WalkToGymBottom::
# 338 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PEWTER_GYM_GUIDE, PewterCity_Movement_GuideMoveToLeadBottom
# 339 "data/maps/PewterCity_Frlg/scripts.pory"
	waitmovement 0
# 340 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PewterCity_Movement_PlayerWalkToGymBottom
# 341 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PEWTER_GYM_GUIDE, PewterCity_Movement_GuideWalkToGymBottom
# 342 "data/maps/PewterCity_Frlg/scripts.pory"
	waitmovement 0
	return


PewterCity_EventScript_WalkToGymRight::
# 347 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PEWTER_GYM_GUIDE, PewterCity_Movement_GuideApproachPlayerRight
# 348 "data/maps/PewterCity_Frlg/scripts.pory"
	waitmovement 0
# 349 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PewterCity_Movement_PlayerWalkToGymRight
# 350 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PEWTER_GYM_GUIDE, PewterCity_Movement_GuideWalkToGymRight
# 351 "data/maps/PewterCity_Frlg/scripts.pory"
	waitmovement 0
	return


PewterCity_Movement_PlayerWalkToGymTop::
# 356 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 357 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_to_gym
# 358 "data/maps/PewterCity_Frlg/scripts.pory"
	step_end
	return


PewterCity_Movement_PlayerWalkToGymMid::
# 362 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 363 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 364 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_to_gym
# 365 "data/maps/PewterCity_Frlg/scripts.pory"
	step_end
	return


PewterCity_Movement_PlayerWalkToGymBottom::
# 369 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 370 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 371 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 372 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_to_gym
# 373 "data/maps/PewterCity_Frlg/scripts.pory"
	step_end
	return


PewterCity_Movement_PlayerWalkToGymRight::
# 377 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 378 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 379 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 380 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 381 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 382 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 383 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 384 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 385 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 386 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 387 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_to_gym_alt
# 388 "data/maps/PewterCity_Frlg/scripts.pory"
	step_end
	return


# 391 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Movement_GuideMoveToLeadTop:
# 392 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 393 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 394 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_in_place_faster_right
# 395 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_in_place_right
# 396 "data/maps/PewterCity_Frlg/scripts.pory"
	step_end

# 399 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Movement_GuideMoveToLeadMid:
# 400 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 401 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_in_place_down
# 402 "data/maps/PewterCity_Frlg/scripts.pory"
	step_end

# 405 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Movement_GuideMoveToLeadBottom:
# 406 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 407 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 408 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_in_place_down
# 409 "data/maps/PewterCity_Frlg/scripts.pory"
	step_end

# 412 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Movement_GuideApproachPlayerRight:
# 413 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 414 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 415 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
# 416 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 417 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
# 418 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_in_place_right
# 419 "data/maps/PewterCity_Frlg/scripts.pory"
	step_end

PewterCity_Movement_GuideWalkToGymTop::
# 423 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_to_gym
# 424 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
# 425 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_in_place_faster_left
# 426 "data/maps/PewterCity_Frlg/scripts.pory"
	step_end
	return


PewterCity_Movement_GuideWalkToGymMid::
# 430 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 431 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_to_gym
# 432 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
# 433 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_in_place_faster_left
# 434 "data/maps/PewterCity_Frlg/scripts.pory"
	step_end
	return


PewterCity_Movement_GuideWalkToGymBottom::
# 438 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 439 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 440 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_to_gym
# 441 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
# 442 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_in_place_faster_left
# 443 "data/maps/PewterCity_Frlg/scripts.pory"
	step_end
	return


PewterCity_Movement_GuideWalkToGymRight::
# 447 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 448 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 449 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 450 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 451 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 452 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 453 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 454 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 455 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 456 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_to_gym_alt
# 457 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
# 458 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_in_place_faster_left
# 459 "data/maps/PewterCity_Frlg/scripts.pory"
	step_end
	return


PewterCity_EventScript_Lass::
# 463 "data/maps/PewterCity_Frlg/scripts.pory"
	msgbox PewterCity_Text_ClefairyCameFromMoon, MSGBOX_NPC
	end


PewterCity_EventScript_MuseumGuide::
# 468 "data/maps/PewterCity_Frlg/scripts.pory"
	lock
# 469 "data/maps/PewterCity_Frlg/scripts.pory"
	faceplayer
# 470 "data/maps/PewterCity_Frlg/scripts.pory"
	msgbox PewterCity_Text_DidYouCheckOutMuseum, MSGBOX_YESNO
# 471 "data/maps/PewterCity_Frlg/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PewterCity_EventScript_MuseumGuide_2
PewterCity_EventScript_MuseumGuide_1:
# 474 "data/maps/PewterCity_Frlg/scripts.pory"
	msgbox PewterCity_Text_ReallyYouHaveToGo
# 475 "data/maps/PewterCity_Frlg/scripts.pory"
	closemessage
# 476 "data/maps/PewterCity_Frlg/scripts.pory"
	delay 10
# 477 "data/maps/PewterCity_Frlg/scripts.pory"
	playbgm MUS_FOLLOW_ME, 0
# 478 "data/maps/PewterCity_Frlg/scripts.pory"
	compare VAR_FACING, DIR_NORTH
	goto_if_eq PewterCity_EventScript_MuseumGuide_5
PewterCity_EventScript_MuseumGuide_4:
# 481 "data/maps/PewterCity_Frlg/scripts.pory"
	compare VAR_FACING, DIR_SOUTH
	goto_if_eq PewterCity_EventScript_MuseumGuide_8
PewterCity_EventScript_MuseumGuide_7:
# 484 "data/maps/PewterCity_Frlg/scripts.pory"
	compare VAR_FACING, DIR_WEST
	goto_if_eq PewterCity_EventScript_MuseumGuide_11
PewterCity_EventScript_MuseumGuide_10:
# 487 "data/maps/PewterCity_Frlg/scripts.pory"
	compare VAR_FACING, DIR_EAST
	goto_if_eq PewterCity_EventScript_MuseumGuide_14
PewterCity_EventScript_MuseumGuide_13:
# 490 "data/maps/PewterCity_Frlg/scripts.pory"
	msgbox PewterCity_Text_ThisIsTheMuseum
# 491 "data/maps/PewterCity_Frlg/scripts.pory"
	closemessage
# 492 "data/maps/PewterCity_Frlg/scripts.pory"
	delay 10
# 493 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PEWTER_MUSEUM_GUIDE, PewterCity_Movement_MuseumGuideExit
# 494 "data/maps/PewterCity_Frlg/scripts.pory"
	waitmovement 0
# 495 "data/maps/PewterCity_Frlg/scripts.pory"
	fadedefaultbgm
# 496 "data/maps/PewterCity_Frlg/scripts.pory"
	removeobject LOCALID_PEWTER_MUSEUM_GUIDE
# 497 "data/maps/PewterCity_Frlg/scripts.pory"
	clearflag FLAG_HIDE_PEWTER_MUSEUM_GUIDE
# 498 "data/maps/PewterCity_Frlg/scripts.pory"
	release
	end

PewterCity_EventScript_MuseumGuide_2:
# 472 "data/maps/PewterCity_Frlg/scripts.pory"
	goto PewterCity_EventScript_CheckedOutMuseum
	goto PewterCity_EventScript_MuseumGuide_1

PewterCity_EventScript_MuseumGuide_5:
# 479 "data/maps/PewterCity_Frlg/scripts.pory"
	call PewterCity_EventScript_LeadToMuseumNorth
	goto PewterCity_EventScript_MuseumGuide_4

PewterCity_EventScript_MuseumGuide_8:
# 482 "data/maps/PewterCity_Frlg/scripts.pory"
	call PewterCity_EventScript_LeadToMuseumSouth
	goto PewterCity_EventScript_MuseumGuide_7

PewterCity_EventScript_MuseumGuide_11:
# 485 "data/maps/PewterCity_Frlg/scripts.pory"
	call PewterCity_EventScript_LeadToMuseumWest
	goto PewterCity_EventScript_MuseumGuide_10

PewterCity_EventScript_MuseumGuide_14:
# 488 "data/maps/PewterCity_Frlg/scripts.pory"
	call PewterCity_EventScript_LeadToMuseumEast
	goto PewterCity_EventScript_MuseumGuide_13


PewterCity_EventScript_LeadToMuseumNorth::
# 503 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PEWTER_MUSEUM_GUIDE, PewterCity_Movement_GuideWalkToMuseumNorth
# 504 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PewterCity_Movement_PlayerWalkToMuseumNorth
# 505 "data/maps/PewterCity_Frlg/scripts.pory"
	waitmovement 0
	return


PewterCity_EventScript_LeadToMuseumSouth::
# 510 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PEWTER_MUSEUM_GUIDE, PewterCity_Movement_GuideWalkToMuseumSouth
# 511 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PewterCity_Movement_PlayerWalkToMuseumSouth
# 512 "data/maps/PewterCity_Frlg/scripts.pory"
	waitmovement 0
	return


PewterCity_EventScript_LeadToMuseumWest::
# 517 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PEWTER_MUSEUM_GUIDE, PewterCity_Movement_GuideWalkToMuseumWest
# 518 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PewterCity_Movement_PlayerWalkToMuseumWest
# 519 "data/maps/PewterCity_Frlg/scripts.pory"
	waitmovement 0
	return


PewterCity_EventScript_LeadToMuseumEast::
# 524 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PEWTER_MUSEUM_GUIDE, PewterCity_Movement_GuideWalkToMuseumEast
# 525 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PewterCity_Movement_PlayerWalkToMuseumEast
# 526 "data/maps/PewterCity_Frlg/scripts.pory"
	waitmovement 0
	return


PewterCity_EventScript_CheckedOutMuseum::
# 531 "data/maps/PewterCity_Frlg/scripts.pory"
	msgbox PewterCity_Text_WerentThoseFossilsAmazing
# 532 "data/maps/PewterCity_Frlg/scripts.pory"
	release
# 533 "data/maps/PewterCity_Frlg/scripts.pory"
	end
# 534 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 535 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 536 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 537 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 538 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 539 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 540 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 541 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 542 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 543 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 544 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 545 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 546 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 547 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 548 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 549 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 550 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 551 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 552 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 553 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 554 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 555 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 556 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 557 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 558 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 559 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 560 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 561 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 562 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 563 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 564 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 565 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 566 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 567 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 568 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 569 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 570 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 571 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 572 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 573 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 574 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 575 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 576 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 577 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 578 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 579 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
	return


PewterCity_Movement_PlayerWalkToMuseumNorth::
# 583 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 584 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_to_museum
# 585 "data/maps/PewterCity_Frlg/scripts.pory"
	delay_8
# 586 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_in_place_faster_up
# 587 "data/maps/PewterCity_Frlg/scripts.pory"
	step_end
	return


PewterCity_Movement_GuideWalkToMuseumNorth::
# 591 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_to_museum
# 592 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 593 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_in_place_faster_up
# 594 "data/maps/PewterCity_Frlg/scripts.pory"
	step_end
	return


PewterCity_Movement_PlayerWalkToMuseumSouth::
# 598 "data/maps/PewterCity_Frlg/scripts.pory"
	delay_16
# 599 "data/maps/PewterCity_Frlg/scripts.pory"
	delay_16
# 600 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 601 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_to_museum_south
# 602 "data/maps/PewterCity_Frlg/scripts.pory"
	delay_8
# 603 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_in_place_faster_up
# 604 "data/maps/PewterCity_Frlg/scripts.pory"
	step_end
	return


PewterCity_Movement_GuideWalkToMuseumSouth::
# 608 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 609 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 610 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_to_museum_south
# 611 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 612 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_in_place_faster_up
# 613 "data/maps/PewterCity_Frlg/scripts.pory"
	step_end
	return


PewterCity_Movement_PlayerWalkToMuseumWest::
# 617 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 618 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_to_museum
# 619 "data/maps/PewterCity_Frlg/scripts.pory"
	delay_8
# 620 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_in_place_faster_up
# 621 "data/maps/PewterCity_Frlg/scripts.pory"
	step_end
	return


PewterCity_Movement_GuideWalkToMuseumWest::
# 625 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_to_museum
# 626 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 627 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_in_place_faster_up
# 628 "data/maps/PewterCity_Frlg/scripts.pory"
	step_end
	return


PewterCity_Movement_PlayerWalkToMuseumEast::
# 632 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
# 633 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_to_museum
# 634 "data/maps/PewterCity_Frlg/scripts.pory"
	delay_8
# 635 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_in_place_faster_up
# 636 "data/maps/PewterCity_Frlg/scripts.pory"
	step_end
	return


PewterCity_Movement_GuideWalkToMuseumEast::
# 640 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_to_museum
# 641 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 642 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_in_place_faster_up
# 643 "data/maps/PewterCity_Frlg/scripts.pory"
	step_end
	return


# 646 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Movement_MuseumGuideExit:
# 647 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 648 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
# 649 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
# 650 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
# 651 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
# 652 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
# 653 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
# 654 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
# 655 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 656 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 657 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 658 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
# 659 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
# 660 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
# 661 "data/maps/PewterCity_Frlg/scripts.pory"
	step_end

PewterCity_EventScript_FatMan::
# 665 "data/maps/PewterCity_Frlg/scripts.pory"
	lock
# 666 "data/maps/PewterCity_Frlg/scripts.pory"
	faceplayer
# 667 "data/maps/PewterCity_Frlg/scripts.pory"
	famechecker FAMECHECKER_BROCK, 2
# 668 "data/maps/PewterCity_Frlg/scripts.pory"
	msgbox PewterCity_Text_BrockOnlySeriousTrainerHere
# 669 "data/maps/PewterCity_Frlg/scripts.pory"
	release
	end


PewterCity_EventScript_BugCatcher::
# 674 "data/maps/PewterCity_Frlg/scripts.pory"
	lock
# 675 "data/maps/PewterCity_Frlg/scripts.pory"
	faceplayer
# 676 "data/maps/PewterCity_Frlg/scripts.pory"
	msgbox PewterCity_Text_DoYouKnowWhatImDoing, MSGBOX_YESNO
# 677 "data/maps/PewterCity_Frlg/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PewterCity_EventScript_BugCatcher_2
PewterCity_EventScript_BugCatcher_1:
# 680 "data/maps/PewterCity_Frlg/scripts.pory"
	msgbox PewterCity_Text_SprayingRepelToKeepWildMonsOut
# 681 "data/maps/PewterCity_Frlg/scripts.pory"
	release
	end

PewterCity_EventScript_BugCatcher_2:
# 678 "data/maps/PewterCity_Frlg/scripts.pory"
	goto PewterCity_EventScript_KnowWhatTheyreDoing
	goto PewterCity_EventScript_BugCatcher_1


PewterCity_EventScript_KnowWhatTheyreDoing::
# 686 "data/maps/PewterCity_Frlg/scripts.pory"
	msgbox PewterCity_Text_ThatsRightItsHardWork
# 687 "data/maps/PewterCity_Frlg/scripts.pory"
	release
	end


PewterCity_EventScript_TrainerTips::
# 692 "data/maps/PewterCity_Frlg/scripts.pory"
	msgbox PewterCity_Text_TrainerTipsEarningEXP, MSGBOX_SIGN
	end


PewterCity_EventScript_PoliceNotice::
# 697 "data/maps/PewterCity_Frlg/scripts.pory"
	msgbox PewterCity_Text_CallPoliceIfInfoOnThieves, MSGBOX_SIGN
	end


PewterCity_EventScript_MuseumSign::
# 702 "data/maps/PewterCity_Frlg/scripts.pory"
	msgbox PewterCity_Text_MuseumOfScience, MSGBOX_SIGN
	end


PewterCity_EventScript_GymSign::
# 707 "data/maps/PewterCity_Frlg/scripts.pory"
	lockall
# 708 "data/maps/PewterCity_Frlg/scripts.pory"
	famechecker FAMECHECKER_BROCK, 0
# 709 "data/maps/PewterCity_Frlg/scripts.pory"
	msgbox PewterCity_Text_GymSign
# 710 "data/maps/PewterCity_Frlg/scripts.pory"
	releaseall
	end


PewterCity_EventScript_CitySign::
# 715 "data/maps/PewterCity_Frlg/scripts.pory"
	msgbox PewterCity_Text_CitySign, MSGBOX_SIGN
	end


PewterCity_EventScript_RunningShoesAide::
# 720 "data/maps/PewterCity_Frlg/scripts.pory"
	lock
# 721 "data/maps/PewterCity_Frlg/scripts.pory"
	faceplayer
# 722 "data/maps/PewterCity_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 0
# 723 "data/maps/PewterCity_Frlg/scripts.pory"
	call PewterCity_EventScript_AideGiveRunningShoes
# 724 "data/maps/PewterCity_Frlg/scripts.pory"
	release
	end


PewterCity_EventScript_RunningShoesAideTriggerTop::
# 729 "data/maps/PewterCity_Frlg/scripts.pory"
	lockall
# 730 "data/maps/PewterCity_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 1
# 731 "data/maps/PewterCity_Frlg/scripts.pory"
	call PewterCity_EventScript_AideGiveRunningShoes
# 732 "data/maps/PewterCity_Frlg/scripts.pory"
	releaseall
	end


PewterCity_EventScript_RunningShoesAideTriggerMid::
# 737 "data/maps/PewterCity_Frlg/scripts.pory"
	lockall
# 738 "data/maps/PewterCity_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 2
# 739 "data/maps/PewterCity_Frlg/scripts.pory"
	call PewterCity_EventScript_AideGiveRunningShoes
# 740 "data/maps/PewterCity_Frlg/scripts.pory"
	releaseall
	end


PewterCity_EventScript_RunningShoesAideTriggerBottom::
# 745 "data/maps/PewterCity_Frlg/scripts.pory"
	lockall
# 746 "data/maps/PewterCity_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 3
# 747 "data/maps/PewterCity_Frlg/scripts.pory"
	call PewterCity_EventScript_AideGiveRunningShoes
# 748 "data/maps/PewterCity_Frlg/scripts.pory"
	releaseall
	end


PewterCity_EventScript_AideGiveRunningShoes::
# 753 "data/maps/PewterCity_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 754 "data/maps/PewterCity_Frlg/scripts.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq PewterCity_EventScript_AideGiveRunningShoes_2
PewterCity_EventScript_AideGiveRunningShoes_1:
# 757 "data/maps/PewterCity_Frlg/scripts.pory"
	compare VAR_TEMP_1, 2
	goto_if_eq PewterCity_EventScript_AideGiveRunningShoes_5
PewterCity_EventScript_AideGiveRunningShoes_4:
# 760 "data/maps/PewterCity_Frlg/scripts.pory"
	compare VAR_TEMP_1, 3
	goto_if_eq PewterCity_EventScript_AideGiveRunningShoes_8
PewterCity_EventScript_AideGiveRunningShoes_7:
# 763 "data/maps/PewterCity_Frlg/scripts.pory"
	waitse
# 764 "data/maps/PewterCity_Frlg/scripts.pory"
	playse SE_PIN
# 765 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PEWTER_AIDE, Common_Movement_ExclamationMark
# 766 "data/maps/PewterCity_Frlg/scripts.pory"
	waitmovement 0
# 767 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PEWTER_AIDE, Common_Movement_Delay48
# 768 "data/maps/PewterCity_Frlg/scripts.pory"
	waitmovement 0
# 769 "data/maps/PewterCity_Frlg/scripts.pory"
	msgbox PewterCity_Text_OhPlayer
# 770 "data/maps/PewterCity_Frlg/scripts.pory"
	compare VAR_TEMP_1, 0
	goto_if_eq PewterCity_EventScript_AideGiveRunningShoes_11
PewterCity_EventScript_AideGiveRunningShoes_10:
# 773 "data/maps/PewterCity_Frlg/scripts.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq PewterCity_EventScript_AideGiveRunningShoes_14
PewterCity_EventScript_AideGiveRunningShoes_13:
# 776 "data/maps/PewterCity_Frlg/scripts.pory"
	compare VAR_TEMP_1, 2
	goto_if_eq PewterCity_EventScript_AideGiveRunningShoes_17
PewterCity_EventScript_AideGiveRunningShoes_16:
# 779 "data/maps/PewterCity_Frlg/scripts.pory"
	compare VAR_TEMP_1, 3
	goto_if_eq PewterCity_EventScript_AideGiveRunningShoes_20
PewterCity_EventScript_AideGiveRunningShoes_19:
# 782 "data/maps/PewterCity_Frlg/scripts.pory"
	msgbox PewterCity_Text_AskedToDeliverThis
# 783 "data/maps/PewterCity_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 784 "data/maps/PewterCity_Frlg/scripts.pory"
	playfanfare MUS_RG_OBTAIN_KEY_ITEM
# 785 "data/maps/PewterCity_Frlg/scripts.pory"
	message PewterCity_Text_ReceivedRunningShoesFromAide
# 786 "data/maps/PewterCity_Frlg/scripts.pory"
	waitmessage
# 787 "data/maps/PewterCity_Frlg/scripts.pory"
	waitfanfare
# 788 "data/maps/PewterCity_Frlg/scripts.pory"
	msgbox PewterCity_Text_SwitchedShoesWithRunningShoes
# 789 "data/maps/PewterCity_Frlg/scripts.pory"
	special DisableMsgBoxWalkaway
# 790 "data/maps/PewterCity_Frlg/scripts.pory"
	signmsg
# 791 "data/maps/PewterCity_Frlg/scripts.pory"
	msgbox PewterCity_Text_ExplainRunningShoes
# 792 "data/maps/PewterCity_Frlg/scripts.pory"
	normalmsg
# 793 "data/maps/PewterCity_Frlg/scripts.pory"
	call EventScript_RestorePrevTextColor
# 794 "data/maps/PewterCity_Frlg/scripts.pory"
	msgbox PewterCity_Text_MustBeGoingBackToLab
# 795 "data/maps/PewterCity_Frlg/scripts.pory"
	closemessage
# 796 "data/maps/PewterCity_Frlg/scripts.pory"
	compare VAR_TEMP_1, 0
	goto_if_eq PewterCity_EventScript_AideGiveRunningShoes_23
PewterCity_EventScript_AideGiveRunningShoes_22:
# 799 "data/maps/PewterCity_Frlg/scripts.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq PewterCity_EventScript_AideGiveRunningShoes_26
PewterCity_EventScript_AideGiveRunningShoes_25:
# 802 "data/maps/PewterCity_Frlg/scripts.pory"
	compare VAR_TEMP_1, 2
	goto_if_eq PewterCity_EventScript_AideGiveRunningShoes_29
PewterCity_EventScript_AideGiveRunningShoes_28:
# 805 "data/maps/PewterCity_Frlg/scripts.pory"
	compare VAR_TEMP_1, 3
	goto_if_eq PewterCity_EventScript_AideGiveRunningShoes_32
PewterCity_EventScript_AideGiveRunningShoes_31:
# 808 "data/maps/PewterCity_Frlg/scripts.pory"
	delay 30
# 809 "data/maps/PewterCity_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 810 "data/maps/PewterCity_Frlg/scripts.pory"
	msgbox PewterCity_Text_RunningShoesLetterFromMom
# 811 "data/maps/PewterCity_Frlg/scripts.pory"
	closemessage
# 812 "data/maps/PewterCity_Frlg/scripts.pory"
	removeobject LOCALID_PEWTER_AIDE
# 813 "data/maps/PewterCity_Frlg/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 814 "data/maps/PewterCity_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_PEWTER_CITY, 2
	return

PewterCity_EventScript_AideGiveRunningShoes_2:
# 755 "data/maps/PewterCity_Frlg/scripts.pory"
	call PewterCity_EventScript_AideNoticePlayer
	goto PewterCity_EventScript_AideGiveRunningShoes_1

PewterCity_EventScript_AideGiveRunningShoes_5:
# 758 "data/maps/PewterCity_Frlg/scripts.pory"
	call PewterCity_EventScript_AideNoticePlayer
	goto PewterCity_EventScript_AideGiveRunningShoes_4

PewterCity_EventScript_AideGiveRunningShoes_8:
# 761 "data/maps/PewterCity_Frlg/scripts.pory"
	call PewterCity_EventScript_AideNoticePlayer
	goto PewterCity_EventScript_AideGiveRunningShoes_7

PewterCity_EventScript_AideGiveRunningShoes_11:
# 771 "data/maps/PewterCity_Frlg/scripts.pory"
	call PewterCity_EventScript_AideApproachPlayer0
	goto PewterCity_EventScript_AideGiveRunningShoes_10

PewterCity_EventScript_AideGiveRunningShoes_14:
# 774 "data/maps/PewterCity_Frlg/scripts.pory"
	call PewterCity_EventScript_AideApproachPlayer1
	goto PewterCity_EventScript_AideGiveRunningShoes_13

PewterCity_EventScript_AideGiveRunningShoes_17:
# 777 "data/maps/PewterCity_Frlg/scripts.pory"
	call PewterCity_EventScript_AideApproachPlayer2
	goto PewterCity_EventScript_AideGiveRunningShoes_16

PewterCity_EventScript_AideGiveRunningShoes_20:
# 780 "data/maps/PewterCity_Frlg/scripts.pory"
	call PewterCity_EventScript_AideApproachPlayer3
	goto PewterCity_EventScript_AideGiveRunningShoes_19

PewterCity_EventScript_AideGiveRunningShoes_23:
# 797 "data/maps/PewterCity_Frlg/scripts.pory"
	call PewterCity_EventScript_AideExit0
	goto PewterCity_EventScript_AideGiveRunningShoes_22

PewterCity_EventScript_AideGiveRunningShoes_26:
# 800 "data/maps/PewterCity_Frlg/scripts.pory"
	call PewterCity_EventScript_AideExit1
	goto PewterCity_EventScript_AideGiveRunningShoes_25

PewterCity_EventScript_AideGiveRunningShoes_29:
# 803 "data/maps/PewterCity_Frlg/scripts.pory"
	call PewterCity_EventScript_AideExit2
	goto PewterCity_EventScript_AideGiveRunningShoes_28

PewterCity_EventScript_AideGiveRunningShoes_32:
# 806 "data/maps/PewterCity_Frlg/scripts.pory"
	call PewterCity_EventScript_AideExit3
	goto PewterCity_EventScript_AideGiveRunningShoes_31


PewterCity_EventScript_AideNoticePlayer::
# 819 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PEWTER_AIDE, Common_Movement_WalkInPlaceFasterDown
# 820 "data/maps/PewterCity_Frlg/scripts.pory"
	waitmovement 0
	return


PewterCity_EventScript_AideApproachPlayer0::
# 825 "data/maps/PewterCity_Frlg/scripts.pory"
	closemessage
# 826 "data/maps/PewterCity_Frlg/scripts.pory"
	delay 20
	return


PewterCity_EventScript_AideApproachPlayer1::
# 831 "data/maps/PewterCity_Frlg/scripts.pory"
	closemessage
# 832 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 833 "data/maps/PewterCity_Frlg/scripts.pory"
	waitmovement 0
	return


PewterCity_EventScript_AideApproachPlayer2::
# 838 "data/maps/PewterCity_Frlg/scripts.pory"
	closemessage
# 839 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PEWTER_AIDE, PewterCity_Movement_AideApproachPlayerMid
# 840 "data/maps/PewterCity_Frlg/scripts.pory"
	waitmovement 0
# 841 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 842 "data/maps/PewterCity_Frlg/scripts.pory"
	waitmovement 0
	return


PewterCity_EventScript_AideApproachPlayer3::
# 847 "data/maps/PewterCity_Frlg/scripts.pory"
	closemessage
# 848 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PEWTER_AIDE, PewterCity_Movement_AideApproachPlayerBottom
# 849 "data/maps/PewterCity_Frlg/scripts.pory"
	waitmovement 0
# 850 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 851 "data/maps/PewterCity_Frlg/scripts.pory"
	waitmovement 0
	return


PewterCity_EventScript_AideExit0::
# 856 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PEWTER_AIDE, PewterCity_Movement_AideExit0
# 857 "data/maps/PewterCity_Frlg/scripts.pory"
	waitmovement 0
	return


PewterCity_EventScript_AideExit1::
# 862 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PEWTER_AIDE, PewterCity_Movement_AideExit1
# 863 "data/maps/PewterCity_Frlg/scripts.pory"
	waitmovement 0
	return


PewterCity_EventScript_AideExit2::
# 868 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PEWTER_AIDE, PewterCity_Movement_AideExit2
# 869 "data/maps/PewterCity_Frlg/scripts.pory"
	waitmovement 0
	return


PewterCity_EventScript_AideExit3::
# 874 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PEWTER_AIDE, PewterCity_Movement_AideExit3
# 875 "data/maps/PewterCity_Frlg/scripts.pory"
	waitmovement 0
	return


# 879 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Movement_AideApproachPlayerMid:
# 880 "data/maps/PewterCity_Frlg/scripts.pory"
	delay_4
# 881 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 882 "data/maps/PewterCity_Frlg/scripts.pory"
	step_end

# 885 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Movement_AideApproachPlayerBottom:
# 886 "data/maps/PewterCity_Frlg/scripts.pory"
	delay_4
# 887 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 888 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 889 "data/maps/PewterCity_Frlg/scripts.pory"
	step_end

# 892 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Movement_AideExit0:
# 893 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 894 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 895 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 896 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 897 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 898 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 899 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 900 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 901 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 902 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 903 "data/maps/PewterCity_Frlg/scripts.pory"
	step_end

# 906 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Movement_AideExit1:
# 907 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 908 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 909 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 910 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 911 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 912 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 913 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 914 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 915 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 916 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 917 "data/maps/PewterCity_Frlg/scripts.pory"
	step_end

# 920 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Movement_AideExit2:
# 921 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 922 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 923 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 924 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 925 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 926 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 927 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 928 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 929 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 930 "data/maps/PewterCity_Frlg/scripts.pory"
	step_end

# 933 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Movement_AideExit3:
# 934 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 935 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 936 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 937 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 938 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 939 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 940 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 941 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 942 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 943 "data/maps/PewterCity_Frlg/scripts.pory"
	step_end

# 946 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Movement_WalkInPlaceLeft:
# 947 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_in_place_left
# 948 "data/maps/PewterCity_Frlg/scripts.pory"
	step_end

Text_DreamEaterTeach::
# 951 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "Yawn!\n"
	.string "I must have dozed off in the sun.\p"
	.string "I had this weird dream about\n"
	.string "a DROWZEE eating my dream.\p"
	.string "And…\n"
	.string "I learned how to eat dreams…\p"
	.string "Oogh, this is too spooky!\p"
	.string "Let me teach it to a POKéMON so\n"
	.string "I can forget about it!$"

Text_DreamEaterDeclined::
# 963 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "…Snore…$"

Text_DreamEaterWhichMon::
# 967 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "Which POKéMON wants to learn\n"
	.string "DREAM EATER?$"

Text_DreamEaterTaught::
# 972 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "…ZZZ…\n"
	.string "I…can't eat…anymore…$"

PewterCity_Text_ClefairyCameFromMoon::
# 977 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "CLEFAIRY came from the moon.\n"
	.string "That's what the rumor is.\p"
	.string "They appeared after MOON STONES\n"
	.string "fell on MT. MOON.$"

PewterCity_Text_BrockOnlySeriousTrainerHere::
# 984 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "There aren't many serious POKéMON\n"
	.string "TRAINERS here.\p"
	.string "They're all like BUG CATCHERS,\n"
	.string "you know, just hobbyists.\p"
	.string "But PEWTER GYM's BROCK isn't like\n"
	.string "that, not one bit.$"

PewterCity_Text_DidYouCheckOutMuseum::
# 993 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "Did you check out the MUSEUM?$"

PewterCity_Text_WerentThoseFossilsAmazing::
# 997 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "Weren't those fossils from MT. MOON\n"
	.string "amazing?$"

PewterCity_Text_ReallyYouHaveToGo::
# 1002 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "Really?\n"
	.string "You absolutely have to go!$"

PewterCity_Text_ThisIsTheMuseum::
# 1007 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "This is it, the MUSEUM.\p"
	.string "You have to pay to get in, but it's\n"
	.string "worth it. See you around!$"

PewterCity_Text_DoYouKnowWhatImDoing::
# 1013 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "Psssst!\n"
	.string "Do you know what I'm doing?$"

PewterCity_Text_ThatsRightItsHardWork::
# 1018 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "That's right!\n"
	.string "It's hard work!$"

PewterCity_Text_SprayingRepelToKeepWildMonsOut::
# 1023 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "I'm spraying REPEL to keep wild\n"
	.string "POKéMON out of my garden!$"

PewterCity_Text_BrocksLookingForChallengersFollowMe::
# 1028 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "You're a TRAINER, right?\p"
	.string "BROCK's looking for new\n"
	.string "challengers. Follow me!$"

PewterCity_Text_GoTakeOnBrock::
# 1034 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "If you have the right stuff,\n"
	.string "go take on BROCK!$"

PewterCity_Text_TrainerTipsEarningEXP::
# 1039 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "TRAINER TIPS\p"
	.string "All POKéMON that appear in battle,\n"
	.string "however briefly, earn EXP Points.$"

PewterCity_Text_CallPoliceIfInfoOnThieves::
# 1045 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "NOTICE!\p"
	.string "Thieves have been stealing POKéMON\n"
	.string "fossils from MT. MOON.\p"
	.string "Please call the PEWTER POLICE if\n"
	.string "you have any information.$"

PewterCity_Text_MuseumOfScience::
# 1053 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "PEWTER MUSEUM OF SCIENCE$"

PewterCity_Text_GymSign::
# 1057 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "PEWTER CITY POKéMON GYM\n"
	.string "LEADER: BROCK\l"
	.string "The Rock-Solid POKéMON TRAINER!$"

PewterCity_Text_CitySign::
# 1063 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "PEWTER CITY\n"
	.string "A Stone Gray City$"

PewterCity_Text_OhPlayer::
# 1068 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "Oh, {PLAYER}{KUN}!$"

PewterCity_Text_AskedToDeliverThis::
# 1072 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "I'm glad I caught up to you.\n"
	.string "I'm PROF. OAK's AIDE.\p"
	.string "I've been asked to deliver this,\n"
	.string "so here you go.$"

PewterCity_Text_ReceivedRunningShoesFromAide::
# 1079 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "{PLAYER} received the\n"
	.string "RUNNING SHOES from the AIDE.$"

PewterCity_Text_SwitchedShoesWithRunningShoes::
# 1084 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "{PLAYER} switched shoes with the\n"
	.string "RUNNING SHOES.$"

PewterCity_Text_ExplainRunningShoes::
# 1089 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "Press the B Button to run.\n"
	.string "But only where there's room to run!$"

PewterCity_Text_MustBeGoingBackToLab::
# 1094 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "Well, I must be going back to\n"
	.string "the LAB.\p"
	.string "Bye-bye!$"

PewterCity_Text_RunningShoesLetterFromMom::
# 1100 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "There's a letter attached…\p"
	.string "Dear {PLAYER},\p"
	.string "Here is a pair of RUNNING SHOES\n"
	.string "for my beloved challenger.\p"
	.string "Remember, I'll always cheer for\n"
	.string "you! Don't ever give up!\p"
	.string "From Mom$"
