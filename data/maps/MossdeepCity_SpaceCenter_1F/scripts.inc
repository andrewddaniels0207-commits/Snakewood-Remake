# 1 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 2 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_MapScripts::
# 3 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 2 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 4 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, MossdeepCity_SpaceCenter_1F_OnLoad
# 5 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 3 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 6 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MossdeepCity_SpaceCenter_1F_OnTransition
# 7 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.byte 0
# 8 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 9 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 10 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_OnTransition::
# 11 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 7 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 12 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	compare VAR_MOSSDEEP_CITY_STATE, 2
# 13 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	goto_if_eq MossdeepCity_SpaceCenter_1F_OnTransition_2
# 14 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_OnTransition_1:
# 15 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	end
# 16 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 17 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_OnTransition_2:
# 18 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 8 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 19 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	goto MossdeepCity_SpaceCenter_1F_EventScript_MoveObjectsForTeamMagma
# 20 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	goto MossdeepCity_SpaceCenter_1F_OnTransition_1
# 21 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 22 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 23 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_MoveObjectsForTeamMagma::
# 24 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 14 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 25 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	setobjectxyperm LOCALID_SPACE_CENTER_1F_SAILOR, 1, 9
# 26 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 15 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 27 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	setobjectmovementtype LOCALID_SPACE_CENTER_1F_SAILOR, MOVEMENT_TYPE_FACE_RIGHT
# 28 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 16 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 29 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	setobjectxyperm LOCALID_SPACE_CENTER_1F_WOMAN, 0, 8
# 30 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 17 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 31 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	setobjectmovementtype LOCALID_SPACE_CENTER_1F_WOMAN, MOVEMENT_TYPE_FACE_RIGHT
# 32 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 18 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 33 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	setobjectxyperm LOCALID_SPACE_CENTER_1F_OLD_MAN, 1, 6
# 34 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 19 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 35 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	setobjectmovementtype LOCALID_SPACE_CENTER_1F_OLD_MAN, MOVEMENT_TYPE_FACE_RIGHT
# 36 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 20 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 37 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	setobjectxyperm LOCALID_SPACE_CENTER_1F_SCIENTIST_1, 3, 4
# 38 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 21 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 39 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	setobjectmovementtype LOCALID_SPACE_CENTER_1F_SCIENTIST_1, MOVEMENT_TYPE_FACE_RIGHT
# 40 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 22 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 41 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	setobjectmovementtype LOCALID_SPACE_CENTER_1F_SCIENTIST_2, MOVEMENT_TYPE_FACE_RIGHT
# 42 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 23 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 43 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	compare VAR_MOSSDEEP_SPACE_CENTER_STAIR_GUARD_STATE, 1
# 44 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	goto_if_eq MossdeepCity_SpaceCenter_1F_EventScript_MoveObjectsForTeamMagma_2
# 45 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_MoveObjectsForTeamMagma_1:
# 46 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 26 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 47 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	compare VAR_MOSSDEEP_SPACE_CENTER_STAIR_GUARD_STATE, 2
# 48 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	goto_if_eq MossdeepCity_SpaceCenter_1F_EventScript_MoveObjectsForTeamMagma_5
# 49 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_MoveObjectsForTeamMagma_4:
# 50 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 29 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 51 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	compare VAR_MOSSDEEP_SPACE_CENTER_STAIR_GUARD_STATE, 3
# 52 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	goto_if_eq MossdeepCity_SpaceCenter_1F_EventScript_MoveObjectsForTeamMagma_8
# 53 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_MoveObjectsForTeamMagma_7:
# 54 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	end
# 55 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 56 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_MoveObjectsForTeamMagma_2:
# 57 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 24 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 58 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	goto MossdeepCity_SpaceCenter_1F_EventScript_MoveStairGuardLeft
# 59 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	goto MossdeepCity_SpaceCenter_1F_EventScript_MoveObjectsForTeamMagma_1
# 60 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 61 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_MoveObjectsForTeamMagma_5:
# 62 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 27 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 63 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	goto MossdeepCity_SpaceCenter_1F_EventScript_MoveStairGuardDown
# 64 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	goto MossdeepCity_SpaceCenter_1F_EventScript_MoveObjectsForTeamMagma_4
# 65 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 66 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_MoveObjectsForTeamMagma_8:
# 67 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 30 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 68 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	goto MossdeepCity_SpaceCenter_1F_EventScript_MoveStairGuardRight
# 69 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	goto MossdeepCity_SpaceCenter_1F_EventScript_MoveObjectsForTeamMagma_7
# 70 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 71 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 72 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_MoveStairGuardLeft::
# 73 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 36 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 74 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	setobjectxyperm LOCALID_SPACE_CENTER_1F_STAIR_GRUNT, 12, 2
# 75 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	end
# 76 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 77 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 78 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_MoveStairGuardDown::
# 79 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 41 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 80 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	setobjectxyperm LOCALID_SPACE_CENTER_1F_STAIR_GRUNT, 13, 3
# 81 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	end
# 82 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 83 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 84 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_MoveStairGuardRight::
# 85 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 46 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 86 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	setobjectxyperm LOCALID_SPACE_CENTER_1F_STAIR_GRUNT, 14, 2
# 87 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	end
# 88 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 89 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 90 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_OnLoad::
# 91 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 51 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 92 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	compare VAR_MOSSDEEP_CITY_STATE, 2
# 93 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	goto_if_le MossdeepCity_SpaceCenter_1F_OnLoad_2
# 94 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_OnLoad_1:
# 95 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	end
# 96 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 97 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_OnLoad_2:
# 98 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 52 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 99 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	goto MossdeepCity_SpaceCenter_1F_EventScript_SetMagmaNote
# 100 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	goto MossdeepCity_SpaceCenter_1F_OnLoad_1
# 101 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 102 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 103 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_SetMagmaNote::
# 104 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 58 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 105 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	setmetatile 2, 5, METATILE_Facility_DataPad, TRUE
# 106 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	return
# 107 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 108 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 109 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_RocketLaunchCounter::
# 110 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 63 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 111 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	lock
# 112 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 64 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 113 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	faceplayer
# 114 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 65 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 115 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	compare VAR_MOSSDEEP_CITY_STATE, 2
# 116 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	goto_if_eq MossdeepCity_SpaceCenter_1F_EventScript_RocketLaunchCounter_2
# 117 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_RocketLaunchCounter_1:
# 118 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 68 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 119 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	dotimebasedevents
# 120 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 69 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 121 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	specialvar VAR_RESULT, GetWeekCount
# 122 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 70 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 123 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_RESULT
# 124 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 71 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 125 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	compare VAR_RESULT, 0
# 126 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	goto_if_eq MossdeepCity_SpaceCenter_1F_EventScript_RocketLaunchCounter_5
# 127 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_RocketLaunchCounter_4:
# 128 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 74 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 129 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	compare VAR_RESULT, 1
# 130 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	goto_if_ge MossdeepCity_SpaceCenter_1F_EventScript_RocketLaunchCounter_8
# 131 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_RocketLaunchCounter_7:
# 132 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 77 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 133 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	closemessage
# 134 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 78 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 135 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 136 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 79 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 137 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	waitmovement 0
# 138 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 80 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 139 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	release
# 140 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	end
# 141 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 142 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_RocketLaunchCounter_2:
# 143 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 66 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 144 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	goto MossdeepCity_SpaceCenter_1F_EventScript_RocketLaunchCounterMagma
# 145 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	goto MossdeepCity_SpaceCenter_1F_EventScript_RocketLaunchCounter_1
# 146 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 147 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_RocketLaunchCounter_5:
# 148 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 72 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 149 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	call MossdeepCity_SpaceCenter_1F_EventScript_NoLaunchesYet
# 150 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	goto MossdeepCity_SpaceCenter_1F_EventScript_RocketLaunchCounter_4
# 151 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 152 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_RocketLaunchCounter_8:
# 153 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 75 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 154 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	call MossdeepCity_SpaceCenter_1F_EventScript_ShowLaunchNumber
# 155 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	goto MossdeepCity_SpaceCenter_1F_EventScript_RocketLaunchCounter_7
# 156 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 157 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 158 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_NoLaunchesYet::
# 159 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 85 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 160 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_1F_Text_RocketLaunchImminent, MSGBOX_DEFAULT
# 161 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	return
# 162 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 163 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 164 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_ShowLaunchNumber::
# 165 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 90 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 166 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_1F_Text_SuccessfulLaunchNumber, MSGBOX_DEFAULT
# 167 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	return
# 168 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 169 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 170 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_RocketLaunchCounterMagma::
# 171 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 95 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 172 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	dotimebasedevents
# 173 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 96 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 174 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	specialvar VAR_RESULT, GetWeekCount
# 175 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 97 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 176 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_RESULT
# 177 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 98 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 178 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	compare VAR_RESULT, 0
# 179 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	goto_if_eq MossdeepCity_SpaceCenter_1F_EventScript_RocketLaunchCounterMagma_2
# 180 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_RocketLaunchCounterMagma_1:
# 181 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 101 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 182 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	compare VAR_RESULT, 1
# 183 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	goto_if_ge MossdeepCity_SpaceCenter_1F_EventScript_RocketLaunchCounterMagma_5
# 184 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_RocketLaunchCounterMagma_4:
# 185 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 104 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 186 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	closemessage
# 187 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 105 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 188 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceFasterRight
# 189 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 106 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 190 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	waitmovement 0
# 191 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 107 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 192 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	release
# 193 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	end
# 194 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 195 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_RocketLaunchCounterMagma_2:
# 196 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 99 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 197 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	call MossdeepCity_SpaceCenter_1F_EventScript_NoLaunchesYetMagma
# 198 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	goto MossdeepCity_SpaceCenter_1F_EventScript_RocketLaunchCounterMagma_1
# 199 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 200 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_RocketLaunchCounterMagma_5:
# 201 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 102 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 202 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	call MossdeepCity_SpaceCenter_1F_EventScript_ShowLaunchNumberMagma
# 203 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	goto MossdeepCity_SpaceCenter_1F_EventScript_RocketLaunchCounterMagma_4
# 204 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 205 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 206 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_NoLaunchesYetMagma::
# 207 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 112 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 208 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_1F_Text_HaywireButRocketLaunchImminent, MSGBOX_DEFAULT
# 209 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	return
# 210 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 211 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 212 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_ShowLaunchNumberMagma::
# 213 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 117 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 214 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_1F_Text_HaywireButSuccessfulLaunchNumber, MSGBOX_DEFAULT
# 215 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	return
# 216 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 217 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 218 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_Scientist::
# 219 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 122 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 220 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	lock
# 221 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 123 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 222 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	faceplayer
# 223 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 124 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 224 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	compare VAR_MOSSDEEP_CITY_STATE, 2
# 225 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	goto_if_eq MossdeepCity_SpaceCenter_1F_EventScript_Scientist_2
# 226 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_Scientist_1:
# 227 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 127 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 228 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_1F_Text_RocketLaunchDemandsPerfection, MSGBOX_DEFAULT
# 229 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 128 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 230 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	release
# 231 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	end
# 232 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 233 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_Scientist_2:
# 234 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 125 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 235 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	goto MossdeepCity_SpaceCenter_1F_EventScript_ScientistMagma
# 236 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	goto MossdeepCity_SpaceCenter_1F_EventScript_Scientist_1
# 237 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 238 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 239 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_ScientistMagma::
# 240 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 133 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 241 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_1F_Text_MagmaHaveSightsOnSpaceCenter, MSGBOX_DEFAULT
# 242 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 134 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 243 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceFasterRight
# 244 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 135 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 245 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	waitmovement 0
# 246 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 136 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 247 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	release
# 248 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	end
# 249 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 250 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 251 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_SunStoneMan::
# 252 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 141 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 253 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	lock
# 254 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 142 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 255 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	faceplayer
# 256 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 143 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 257 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	compare VAR_MOSSDEEP_CITY_STATE, 2
# 258 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	goto_if_eq MossdeepCity_SpaceCenter_1F_EventScript_SunStoneMan_2
# 259 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_SunStoneMan_1:
# 260 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 146 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 261 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	goto_if_set FLAG_RECEIVED_SUN_STONE_MOSSDEEP, MossdeepCity_SpaceCenter_1F_EventScript_SunStoneMan_5
# 262 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_SunStoneMan_4:
# 263 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 149 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 264 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_1F_Text_FoundThisYouCanHaveIt, MSGBOX_DEFAULT
# 265 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 150 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 266 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	giveitem ITEM_SUN_STONE
# 267 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 151 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 268 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	compare VAR_RESULT, FALSE
# 269 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	goto_if_eq MossdeepCity_SpaceCenter_1F_EventScript_SunStoneMan_8
# 270 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_SunStoneMan_7:
# 271 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 154 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 272 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	setflag FLAG_RECEIVED_SUN_STONE_MOSSDEEP
# 273 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 155 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 274 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_1F_Text_HoennFamousForMeteorShowers, MSGBOX_DEFAULT
# 275 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 156 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 276 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	release
# 277 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	end
# 278 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 279 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_SunStoneMan_2:
# 280 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 144 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 281 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	goto MossdeepCity_SpaceCenter_1F_EventScript_SunStoneManMagma
# 282 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	goto MossdeepCity_SpaceCenter_1F_EventScript_SunStoneMan_1
# 283 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 284 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_SunStoneMan_5:
# 285 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 147 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 286 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	goto MossdeepCity_SpaceCenter_1F_EventScript_GaveSunStone
# 287 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	goto MossdeepCity_SpaceCenter_1F_EventScript_SunStoneMan_4
# 288 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 289 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_SunStoneMan_8:
# 290 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 152 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 291 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
# 292 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	goto MossdeepCity_SpaceCenter_1F_EventScript_SunStoneMan_7
# 293 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 294 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 295 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_GaveSunStone::
# 296 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 161 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 297 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_1F_Text_HoennFamousForMeteorShowers, MSGBOX_DEFAULT
# 298 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 162 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 299 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	release
# 300 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	end
# 301 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 302 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 303 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_SunStoneManMagma::
# 304 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 167 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 305 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	goto_if_set FLAG_RECEIVED_SUN_STONE_MOSSDEEP, MossdeepCity_SpaceCenter_1F_EventScript_SunStoneManMagma_2
# 306 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_SunStoneManMagma_1:
# 307 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 170 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 308 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_1F_Text_MagmaCantStealFuelTakeThis, MSGBOX_DEFAULT
# 309 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 171 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 310 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	giveitem ITEM_SUN_STONE
# 311 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 172 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 312 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	compare VAR_RESULT, FALSE
# 313 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	goto_if_eq MossdeepCity_SpaceCenter_1F_EventScript_SunStoneManMagma_5
# 314 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_SunStoneManMagma_4:
# 315 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 175 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 316 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	setflag FLAG_RECEIVED_SUN_STONE_MOSSDEEP
# 317 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 176 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 318 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_1F_Text_CantStrollOnBeachWithMagma, MSGBOX_DEFAULT
# 319 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 177 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 320 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceFasterRight
# 321 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 178 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 322 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	waitmovement 0
# 323 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 179 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 324 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	release
# 325 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	end
# 326 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 327 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_SunStoneManMagma_2:
# 328 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 168 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 329 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	goto MossdeepCity_SpaceCenter_1F_EventScript_GaveSunStoneMagma
# 330 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	goto MossdeepCity_SpaceCenter_1F_EventScript_SunStoneManMagma_1
# 331 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 332 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_SunStoneManMagma_5:
# 333 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 173 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 334 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
# 335 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	goto MossdeepCity_SpaceCenter_1F_EventScript_SunStoneManMagma_4
# 336 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 337 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 338 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_GaveSunStoneMagma::
# 339 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 184 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 340 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_1F_Text_CantStrollOnBeachWithMagma, MSGBOX_DEFAULT
# 341 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 185 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 342 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceFasterRight
# 343 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 186 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 344 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	waitmovement 0
# 345 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 187 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 346 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	release
# 347 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	end
# 348 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 349 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 350 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_Woman::
# 351 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 192 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 352 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	lock
# 353 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 193 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 354 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	faceplayer
# 355 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 194 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 356 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, MossdeepCity_SpaceCenter_1F_EventScript_Woman_2
# 357 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_Woman_1:
# 358 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 197 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 359 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	compare VAR_MOSSDEEP_CITY_STATE, 2
# 360 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	goto_if_eq MossdeepCity_SpaceCenter_1F_EventScript_Woman_5
# 361 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_Woman_4:
# 362 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 200 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 363 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	compare VAR_MOSSDEEP_CITY_STATE, 2
# 364 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	goto_if_lt MossdeepCity_SpaceCenter_1F_EventScript_Woman_8
# 365 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_Woman_7:
# 366 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 203 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 367 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	goto MossdeepCity_SpaceCenter_1F_EventScript_WomanMagma
# 368 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	end
# 369 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 370 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_Woman_2:
# 371 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 195 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 372 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	goto MossdeepCity_SpaceCenter_1F_EventScript_WomanNormal
# 373 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	goto MossdeepCity_SpaceCenter_1F_EventScript_Woman_1
# 374 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 375 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_Woman_5:
# 376 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 198 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 377 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	goto MossdeepCity_SpaceCenter_1F_EventScript_WomanMagma
# 378 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	goto MossdeepCity_SpaceCenter_1F_EventScript_Woman_4
# 379 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 380 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_Woman_8:
# 381 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 201 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 382 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	goto MossdeepCity_SpaceCenter_1F_EventScript_WomanNormal
# 383 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	goto MossdeepCity_SpaceCenter_1F_EventScript_Woman_7
# 384 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 385 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 386 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_WomanNormal::
# 387 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 208 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 388 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_1F_Text_DidPokemonComeFromSpace, MSGBOX_DEFAULT
# 389 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 209 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 390 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	release
# 391 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	end
# 392 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 393 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 394 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_WomanMagma::
# 395 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 214 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 396 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_1F_Text_AquaShouldBeatMagma, MSGBOX_DEFAULT
# 397 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 215 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 398 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	release
# 399 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	end
# 400 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 401 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 402 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_OldMan::
# 403 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 220 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 404 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	lock
# 405 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 221 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 406 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	faceplayer
# 407 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 222 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 408 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, MossdeepCity_SpaceCenter_1F_EventScript_OldMan_2
# 409 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_OldMan_1:
# 410 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 225 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 411 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	compare VAR_MOSSDEEP_CITY_STATE, 2
# 412 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	goto_if_eq MossdeepCity_SpaceCenter_1F_EventScript_OldMan_5
# 413 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_OldMan_4:
# 414 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 228 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 415 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	compare VAR_MOSSDEEP_CITY_STATE, 2
# 416 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	goto_if_lt MossdeepCity_SpaceCenter_1F_EventScript_OldMan_8
# 417 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_OldMan_7:
# 418 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 231 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 419 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	goto MossdeepCity_SpaceCenter_1F_EventScript_OldManMagma
# 420 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	end
# 421 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 422 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_OldMan_2:
# 423 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 223 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 424 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	goto MossdeepCity_SpaceCenter_1F_EventScript_OldManNormal
# 425 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	goto MossdeepCity_SpaceCenter_1F_EventScript_OldMan_1
# 426 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 427 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_OldMan_5:
# 428 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 226 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 429 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	goto MossdeepCity_SpaceCenter_1F_EventScript_OldManMagma
# 430 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	goto MossdeepCity_SpaceCenter_1F_EventScript_OldMan_4
# 431 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 432 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_OldMan_8:
# 433 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 229 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 434 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	goto MossdeepCity_SpaceCenter_1F_EventScript_OldManNormal
# 435 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	goto MossdeepCity_SpaceCenter_1F_EventScript_OldMan_7
# 436 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 437 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 438 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_OldManNormal::
# 439 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 236 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 440 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_1F_Text_RocketsBoggleMyMind, MSGBOX_DEFAULT
# 441 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 237 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 442 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	closemessage
# 443 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 238 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 444 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 445 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 239 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 446 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	waitmovement 0
# 447 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 240 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 448 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	release
# 449 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	end
# 450 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 451 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 452 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_OldManMagma::
# 453 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 245 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 454 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_1F_Text_MagmaWantsToSpoilMyDream, MSGBOX_DEFAULT
# 455 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 246 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 456 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	closemessage
# 457 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 247 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 458 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 459 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 248 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 460 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	waitmovement 0
# 461 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 249 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 462 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	release
# 463 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	end
# 464 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 465 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 466 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_Steven::
# 467 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 254 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 468 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	lock
# 469 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 255 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 470 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	faceplayer
# 471 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 256 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 472 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_1F_Text_StevenMagmaCantBeAllowedToTakeFuel, MSGBOX_DEFAULT
# 473 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 257 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 474 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 475 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 258 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 476 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	waitmovement 0
# 477 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 259 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 478 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	release
# 479 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	end
# 480 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 481 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 482 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_MagmaNote::
# 483 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 264 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 484 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	lockall
# 485 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 265 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 486 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_1F_Text_MagmaIntentToStealNotice, MSGBOX_DEFAULT
# 487 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 266 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 488 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	releaseall
# 489 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	end
# 490 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 491 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 492 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_Grunt3::
# 493 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 271 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 494 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_SPACE_CENTER_3, MossdeepCity_SpaceCenter_1F_Text_Grunt3Intro, MossdeepCity_SpaceCenter_1F_Text_Grunt3Defeat
# 495 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 272 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 496 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_1F_Text_Grunt3PostBattle, MSGBOX_AUTOCLOSE
# 497 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	end
# 498 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 499 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 500 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_Grunt1::
# 501 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 277 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 502 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_SPACE_CENTER_1, MossdeepCity_SpaceCenter_1F_Text_Grunt1Intro, MossdeepCity_SpaceCenter_1F_Text_Grunt1Defeat
# 503 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 278 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 504 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_1F_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
# 505 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	end
# 506 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 507 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 508 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_Grunt4::
# 509 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 283 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 510 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_SPACE_CENTER_4, MossdeepCity_SpaceCenter_1F_Text_Grunt4Intro, MossdeepCity_SpaceCenter_1F_Text_Grunt4Defeat
# 511 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 284 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 512 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_1F_Text_Grunt4PostBattle, MSGBOX_AUTOCLOSE
# 513 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	end
# 514 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 515 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 516 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_Grunt2::
# 517 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 289 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 518 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	lock
# 519 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 290 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 520 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	faceplayer
# 521 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 291 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 522 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	goto_if_set FLAG_DEFEATED_GRUNT_SPACE_CENTER_1F, MossdeepCity_SpaceCenter_1F_EventScript_Grunt2_2
# 523 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_Grunt2_1:
# 524 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 294 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 525 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_1F_Text_Grunt2Intro, MSGBOX_DEFAULT
# 526 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 295 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 527 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_SPACE_CENTER_2, MossdeepCity_SpaceCenter_1F_Text_Grunt2Defeat
# 528 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 296 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 529 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	setflag FLAG_DEFEATED_GRUNT_SPACE_CENTER_1F
# 530 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 297 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 531 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	copyobjectxytoperm LOCALID_SPACE_CENTER_1F_STAIR_GRUNT
# 532 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 298 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 533 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	switch VAR_FACING
# 534 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 299 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 535 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	case DIR_WEST, MossdeepCity_SpaceCenter_1F_EventScript_Grunt2_6
# 536 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_Grunt2_4:
# 537 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 307 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 538 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	applymovement LOCALID_SPACE_CENTER_1F_STAIR_GRUNT, MossdeepCity_SpaceCenter_1F_Movement_MoveGruntFromStairs
# 539 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 308 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 540 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	waitmovement 0
# 541 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 309 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 542 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	setvar VAR_MOSSDEEP_SPACE_CENTER_STAIR_GUARD_STATE, 2
# 543 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 310 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 544 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	release
# 545 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	end
# 546 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 547 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_Grunt2_2:
# 548 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 292 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 549 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	goto MossdeepCity_SpaceCenter_1F_EventScript_Grunt2Defeated
# 550 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	goto MossdeepCity_SpaceCenter_1F_EventScript_Grunt2_1
# 551 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 552 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_Grunt2_6:
# 553 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 300 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 554 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	goto MossdeepCity_SpaceCenter_1F_EventScript_MoveGruntFromStairsWest
# 555 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	goto MossdeepCity_SpaceCenter_1F_EventScript_Grunt2_4
# 556 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 557 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 558 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_Grunt2Defeated::
# 559 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 315 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 560 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_1F_Text_Grunt2PostBattle, MSGBOX_DEFAULT
# 561 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 316 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 562 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	release
# 563 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	end
# 564 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 565 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 566 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_MoveGruntFromStairsWest::
# 567 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 321 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 568 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	applymovement LOCALID_SPACE_CENTER_1F_STAIR_GRUNT, MossdeepCity_SpaceCenter_1F_Movement_MoveGruntFromStairsWest
# 569 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 322 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 570 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	waitmovement 0
# 571 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 323 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 572 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	setvar VAR_MOSSDEEP_SPACE_CENTER_STAIR_GUARD_STATE, 1
# 573 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 324 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 574 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	release
# 575 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	end
# 576 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 577 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 578 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_MoveGruntFromStairsEast::
# 579 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 329 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 580 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	applymovement LOCALID_SPACE_CENTER_1F_STAIR_GRUNT, MossdeepCity_SpaceCenter_1F_Movement_MoveGruntFromStairsEast
# 581 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 330 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 582 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	waitmovement 0
# 583 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 331 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 584 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	setvar VAR_MOSSDEEP_SPACE_CENTER_STAIR_GUARD_STATE, 3
# 585 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 332 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 586 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	release
# 587 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	end
# 588 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 589 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 590 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_Movement_MoveGruntFromStairsWest::
# 591 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 337 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 592 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	lock_facing_direction
# 593 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 338 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 594 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	walk_left
# 595 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 339 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 596 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	unlock_facing_direction
# 597 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 340 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 598 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	step_end
# 599 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	return
# 600 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 601 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 602 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_Movement_MoveGruntFromStairsEast::
# 603 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 344 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 604 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	lock_facing_direction
# 605 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 345 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 606 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	walk_right
# 607 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 346 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 608 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	unlock_facing_direction
# 609 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 347 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 610 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	step_end
# 611 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	return
# 612 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 613 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 614 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_Movement_MoveGruntFromStairs::
# 615 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 351 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 616 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	face_left
# 617 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 352 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 618 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	lock_facing_direction
# 619 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 353 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 620 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	walk_right
# 621 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 354 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 622 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	unlock_facing_direction
# 623 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 355 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 624 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	step_end
# 625 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	return
# 626 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 627 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 628 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_Text_RocketLaunchImminent::
# 629 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 358 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 630 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "The rocket's launch is imminent!$"
# 631 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 632 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_Text_SuccessfulLaunchNumber::
# 633 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 362 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 634 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "The rocket launched safely!\n"
# 635 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "That's successful launch no. {STR_VAR_1}!$"
# 636 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 637 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_Text_HaywireButRocketLaunchImminent::
# 638 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 367 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 639 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "I know that things are a little\n"
# 640 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "haywire right now, but…\p"
# 641 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "The rocket's launch is imminent!$"
# 642 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 643 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_Text_HaywireButSuccessfulLaunchNumber::
# 644 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 373 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 645 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "I know that things are a little\n"
# 646 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "haywire right now, but…\p"
# 647 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "The rocket launched safely!\n"
# 648 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "That's successful launch no. {STR_VAR_1}!$"
# 649 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 650 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_Text_RocketLaunchDemandsPerfection::
# 651 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 380 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 652 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "A rocket launch demands perfection.\n"
# 653 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "Not even a 1% margin of error is allowed.\p"
# 654 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "Even if it's 99% okay, the whole thing\n"
# 655 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "is useless if 1% happens to be no good.\p"
# 656 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "Despite that, we never stop trying.\n"
# 657 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "Why? It's a dream that never ends.$"
# 658 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 659 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_Text_MagmaHaveSightsOnSpaceCenter::
# 660 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 389 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 661 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "Those MAGMA thugs have their sights\n"
# 662 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "set on our SPACE CENTER.\p"
# 663 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "But we can't allow anything that minor\n"
# 664 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "to interfere with our rocket launch!$"
# 665 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 666 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_Text_FoundThisYouCanHaveIt::
# 667 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 396 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 668 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "I was taking a stroll down the beach\n"
# 669 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "when I found this.\p"
# 670 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "It's not anything I need, so you can\n"
# 671 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "have it.$"
# 672 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 673 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_Text_HoennFamousForMeteorShowers::
# 674 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 403 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 675 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "The HOENN region has been famous for \n"
# 676 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "its meteor showers for a long time.$"
# 677 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 678 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_Text_MagmaCantStealFuelTakeThis::
# 679 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 408 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 680 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "TEAM MAGMA can't be allowed to steal\n"
# 681 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "the rocket fuel.\p"
# 682 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "Oh, by the way, you can have this stone\n"
# 683 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "I found on the beach.$"
# 684 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 685 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_Text_CantStrollOnBeachWithMagma::
# 686 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 415 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 687 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "With TEAM MAGMA around, I guess\n"
# 688 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "strolls on the beach aren't safe.$"
# 689 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 690 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_Text_DidPokemonComeFromSpace::
# 691 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 420 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 692 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "Some people claim that POKéMON came\n"
# 693 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "from space. Could it be true?$"
# 694 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 695 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_Text_AquaShouldBeatMagma::
# 696 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 425 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 697 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "TEAM AQUA should take care of\n"
# 698 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "TEAM MAGMA!\p"
# 699 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "But if they did that, TEAM AQUA will\n"
# 700 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "become bold and brazen, won't they?$"
# 701 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 702 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_Text_RocketsBoggleMyMind::
# 703 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 432 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 704 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "A giant chunk of metal bursts through\n"
# 705 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "the skies and flies into space…\p"
# 706 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "It boggles my mind!$"
# 707 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 708 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_Text_MagmaWantsToSpoilMyDream::
# 709 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 438 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 710 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "A giant chunk of metal bursts through\n"
# 711 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "the skies and flies into space…\p"
# 712 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "But TEAM MAGMA wants to spoil\n"
# 713 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "that dream of mine!\p"
# 714 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "I'm not having any of that!$"
# 715 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 716 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_Text_StevenMagmaCantBeAllowedToTakeFuel::
# 717 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 446 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 718 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "STEVEN: {PLAYER}{KUN}, have you read that\n"
# 719 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "proclamation already?\p"
# 720 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "TEAM MAGMA is coming after the rocket\n"
# 721 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "fuel on this island.\p"
# 722 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "I don't know what they'd need it for,\n"
# 723 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "but they can't be allowed to take it.\p"
# 724 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "I'll keep an eye on things for\n"
# 725 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "a while longer.\p"
# 726 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "In the meantime, why don't you go\n"
# 727 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "check out the town?$"
# 728 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 729 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_Text_Grunt3Intro::
# 730 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 459 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 731 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "As promised, we've come for\n"
# 732 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "the rocket fuel!$"
# 733 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 734 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_Text_Grunt3Defeat::
# 735 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 464 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 736 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "Ran out of fuel…$"
# 737 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 738 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_Text_Grunt3PostBattle::
# 739 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 468 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 740 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "Don't think you're on a roll just\n"
# 741 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "because you've beaten me!$"
# 742 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 743 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_Text_Grunt1Intro::
# 744 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 473 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 745 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "We gave you fair warning!\n"
# 746 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "There's nothing sneaky about us!$"
# 747 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 748 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_Text_Grunt1Defeat::
# 749 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 478 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 750 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "Grrr…\n"
# 751 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "We should've used sneaky treachery…$"
# 752 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 753 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_Text_Grunt1PostBattle::
# 754 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 483 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 755 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "Okay, I get it already! The next time,\n"
# 756 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "we'll come unannounced.$"
# 757 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 758 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_Text_Grunt4Intro::
# 759 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 488 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 760 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "The rocket fuel the SPACE CENTER has\n"
# 761 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "in storage--that's what we're after.\p"
# 762 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "We mean to take every last bit of it!$"
# 763 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 764 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_Text_Grunt4Defeat::
# 765 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 494 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 766 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "Please, can you spare some fuel?\n"
# 767 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "Even a chintzy cup will do!$"
# 768 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 769 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_Text_Grunt4PostBattle::
# 770 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 499 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 771 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "What are we going to do with\n"
# 772 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "the rocket fuel?\p"
# 773 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "How would I know?\n"
# 774 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "Ask our leader upstairs!$"
# 775 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 776 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_Text_Grunt2Intro::
# 777 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 506 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 778 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "Our leader said no one, but no one,\n"
# 779 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "gets past me!$"
# 780 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 781 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_Text_Grunt2Defeat::
# 782 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 511 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 783 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "Ack! Ack! Aaack!$"
# 784 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 785 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_Text_Grunt2PostBattle::
# 786 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 515 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 787 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "Please, tell our leader that\n"
# 788 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "I never abandoned my post.\l"
# 789 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "That I stayed to the bitter end…$"
# 790 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 791 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_Text_MagmaIntentToStealNotice::
# 792 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 521 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
# 793 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "This is…\n"
# 794 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "An intent-to-steal notice?\p"
# 795 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "“To the staff of the SPACE CENTER:\n"
# 796 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "How are you? We are doing fine.\p"
# 797 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "“We will soon visit you to take your\n"
# 798 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "rocket fuel.\p"
# 799 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "“Please don't try to stop us.\n"
# 800 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "We will take the fuel no matter what.\p"
# 801 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "“Let there be more land!\n"
# 802 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "                                          TEAM MAGMA”$"
