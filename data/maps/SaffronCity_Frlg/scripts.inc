# 1 "data/maps/SaffronCity_Frlg/scripts.pory"

# 2 "data/maps/SaffronCity_Frlg/scripts.pory"
SaffronCity_Frlg_MapScripts::
# 3 "data/maps/SaffronCity_Frlg/scripts.pory"
# 2 "data/maps/SaffronCity_Frlg/scripts.pory"
# 4 "data/maps/SaffronCity_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SaffronCity_OnTransition
# 5 "data/maps/SaffronCity_Frlg/scripts.pory"
	.byte 0
# 6 "data/maps/SaffronCity_Frlg/scripts.pory"

# 7 "data/maps/SaffronCity_Frlg/scripts.pory"

# 8 "data/maps/SaffronCity_Frlg/scripts.pory"
SaffronCity_OnTransition::
# 9 "data/maps/SaffronCity_Frlg/scripts.pory"
# 6 "data/maps/SaffronCity_Frlg/scripts.pory"
# 10 "data/maps/SaffronCity_Frlg/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_SAFFRON_CITY
# 11 "data/maps/SaffronCity_Frlg/scripts.pory"
# 7 "data/maps/SaffronCity_Frlg/scripts.pory"
# 12 "data/maps/SaffronCity_Frlg/scripts.pory"
	goto_if_unset FLAG_RESCUED_MR_FUJI, SaffronCity_OnTransition_2
# 13 "data/maps/SaffronCity_Frlg/scripts.pory"
SaffronCity_OnTransition_1:
# 14 "data/maps/SaffronCity_Frlg/scripts.pory"
	end
# 15 "data/maps/SaffronCity_Frlg/scripts.pory"

# 16 "data/maps/SaffronCity_Frlg/scripts.pory"
SaffronCity_OnTransition_2:
# 17 "data/maps/SaffronCity_Frlg/scripts.pory"
# 8 "data/maps/SaffronCity_Frlg/scripts.pory"
# 18 "data/maps/SaffronCity_Frlg/scripts.pory"
	call SaffronCity_EventScript_MoveDoorGuardGrunt
# 19 "data/maps/SaffronCity_Frlg/scripts.pory"
	goto SaffronCity_OnTransition_1
# 20 "data/maps/SaffronCity_Frlg/scripts.pory"

# 21 "data/maps/SaffronCity_Frlg/scripts.pory"

# 22 "data/maps/SaffronCity_Frlg/scripts.pory"
SaffronCity_EventScript_MoveDoorGuardGrunt::
# 23 "data/maps/SaffronCity_Frlg/scripts.pory"
# 14 "data/maps/SaffronCity_Frlg/scripts.pory"
# 24 "data/maps/SaffronCity_Frlg/scripts.pory"
	setobjectxyperm LOCALID_SAFFRON_DOOR_GUARD_GRUNT, 33, 31
# 25 "data/maps/SaffronCity_Frlg/scripts.pory"
	return
# 26 "data/maps/SaffronCity_Frlg/scripts.pory"

# 27 "data/maps/SaffronCity_Frlg/scripts.pory"

# 28 "data/maps/SaffronCity_Frlg/scripts.pory"
SaffronCity_EventScript_RocketGrunt1::
# 29 "data/maps/SaffronCity_Frlg/scripts.pory"
# 19 "data/maps/SaffronCity_Frlg/scripts.pory"
# 30 "data/maps/SaffronCity_Frlg/scripts.pory"
	msgbox SaffronCity_Text_WhatDoYouWantGetLost, MSGBOX_NPC
# 31 "data/maps/SaffronCity_Frlg/scripts.pory"
	end
# 32 "data/maps/SaffronCity_Frlg/scripts.pory"

# 33 "data/maps/SaffronCity_Frlg/scripts.pory"

# 34 "data/maps/SaffronCity_Frlg/scripts.pory"
SaffronCity_EventScript_RocketGrunt2::
# 35 "data/maps/SaffronCity_Frlg/scripts.pory"
# 24 "data/maps/SaffronCity_Frlg/scripts.pory"
# 36 "data/maps/SaffronCity_Frlg/scripts.pory"
	msgbox SaffronCity_Text_BossTakeTownForTeamRocket, MSGBOX_NPC
# 37 "data/maps/SaffronCity_Frlg/scripts.pory"
	end
# 38 "data/maps/SaffronCity_Frlg/scripts.pory"

# 39 "data/maps/SaffronCity_Frlg/scripts.pory"

# 40 "data/maps/SaffronCity_Frlg/scripts.pory"
SaffronCity_EventScript_RocketGrunt3::
# 41 "data/maps/SaffronCity_Frlg/scripts.pory"
# 29 "data/maps/SaffronCity_Frlg/scripts.pory"
# 42 "data/maps/SaffronCity_Frlg/scripts.pory"
	msgbox SaffronCity_Text_DontGetDefiantOrIllHurtYou, MSGBOX_NPC
# 43 "data/maps/SaffronCity_Frlg/scripts.pory"
	end
# 44 "data/maps/SaffronCity_Frlg/scripts.pory"

# 45 "data/maps/SaffronCity_Frlg/scripts.pory"

# 46 "data/maps/SaffronCity_Frlg/scripts.pory"
SaffronCity_EventScript_RocketGrunt4::
# 47 "data/maps/SaffronCity_Frlg/scripts.pory"
# 34 "data/maps/SaffronCity_Frlg/scripts.pory"
# 48 "data/maps/SaffronCity_Frlg/scripts.pory"
	msgbox SaffronCity_Text_SaffronBelongsToTeamRocket, MSGBOX_NPC
# 49 "data/maps/SaffronCity_Frlg/scripts.pory"
	end
# 50 "data/maps/SaffronCity_Frlg/scripts.pory"

# 51 "data/maps/SaffronCity_Frlg/scripts.pory"

# 52 "data/maps/SaffronCity_Frlg/scripts.pory"
SaffronCity_EventScript_RocketGrunt5::
# 53 "data/maps/SaffronCity_Frlg/scripts.pory"
# 39 "data/maps/SaffronCity_Frlg/scripts.pory"
# 54 "data/maps/SaffronCity_Frlg/scripts.pory"
	msgbox SaffronCity_Text_CriminalLifeMakesMeFeelAlive, MSGBOX_NPC
# 55 "data/maps/SaffronCity_Frlg/scripts.pory"
	end
# 56 "data/maps/SaffronCity_Frlg/scripts.pory"

# 57 "data/maps/SaffronCity_Frlg/scripts.pory"

# 58 "data/maps/SaffronCity_Frlg/scripts.pory"
SaffronCity_EventScript_RocketGrunt6::
# 59 "data/maps/SaffronCity_Frlg/scripts.pory"
# 44 "data/maps/SaffronCity_Frlg/scripts.pory"
# 60 "data/maps/SaffronCity_Frlg/scripts.pory"
	msgbox SaffronCity_Text_WatchWhereYoureWalking, MSGBOX_NPC
# 61 "data/maps/SaffronCity_Frlg/scripts.pory"
	end
# 62 "data/maps/SaffronCity_Frlg/scripts.pory"

# 63 "data/maps/SaffronCity_Frlg/scripts.pory"

# 64 "data/maps/SaffronCity_Frlg/scripts.pory"
SaffronCity_EventScript_RocketGrunt7::
# 65 "data/maps/SaffronCity_Frlg/scripts.pory"
# 49 "data/maps/SaffronCity_Frlg/scripts.pory"
# 66 "data/maps/SaffronCity_Frlg/scripts.pory"
	msgbox SaffronCity_Text_WeCanExploitMonsAroundWorld, MSGBOX_NPC
# 67 "data/maps/SaffronCity_Frlg/scripts.pory"
	end
# 68 "data/maps/SaffronCity_Frlg/scripts.pory"

# 69 "data/maps/SaffronCity_Frlg/scripts.pory"

# 70 "data/maps/SaffronCity_Frlg/scripts.pory"
SaffronCity_EventScript_DoorGuardGrunt::
# 71 "data/maps/SaffronCity_Frlg/scripts.pory"
# 54 "data/maps/SaffronCity_Frlg/scripts.pory"
# 72 "data/maps/SaffronCity_Frlg/scripts.pory"
	lock
# 73 "data/maps/SaffronCity_Frlg/scripts.pory"
# 55 "data/maps/SaffronCity_Frlg/scripts.pory"
# 74 "data/maps/SaffronCity_Frlg/scripts.pory"
	goto_if_set FLAG_RESCUED_MR_FUJI, SaffronCity_EventScript_DoorGuardGrunt_2
# 75 "data/maps/SaffronCity_Frlg/scripts.pory"
SaffronCity_EventScript_DoorGuardGrunt_1:
# 76 "data/maps/SaffronCity_Frlg/scripts.pory"
# 58 "data/maps/SaffronCity_Frlg/scripts.pory"
# 77 "data/maps/SaffronCity_Frlg/scripts.pory"
	applymovement LOCALID_SAFFRON_DOOR_GUARD_GRUNT, Common_Movement_FacePlayer
# 78 "data/maps/SaffronCity_Frlg/scripts.pory"
# 59 "data/maps/SaffronCity_Frlg/scripts.pory"
# 79 "data/maps/SaffronCity_Frlg/scripts.pory"
	waitmovement 0
# 80 "data/maps/SaffronCity_Frlg/scripts.pory"
# 60 "data/maps/SaffronCity_Frlg/scripts.pory"
# 81 "data/maps/SaffronCity_Frlg/scripts.pory"
	msgbox SaffronCity_Text_ImASecurityGuard
# 82 "data/maps/SaffronCity_Frlg/scripts.pory"
# 61 "data/maps/SaffronCity_Frlg/scripts.pory"
# 83 "data/maps/SaffronCity_Frlg/scripts.pory"
	release
# 84 "data/maps/SaffronCity_Frlg/scripts.pory"
	end
# 85 "data/maps/SaffronCity_Frlg/scripts.pory"

# 86 "data/maps/SaffronCity_Frlg/scripts.pory"
SaffronCity_EventScript_DoorGuardGrunt_2:
# 87 "data/maps/SaffronCity_Frlg/scripts.pory"
# 56 "data/maps/SaffronCity_Frlg/scripts.pory"
# 88 "data/maps/SaffronCity_Frlg/scripts.pory"
	goto SaffronCity_EventScript_DoorGuardAsleep
# 89 "data/maps/SaffronCity_Frlg/scripts.pory"
	goto SaffronCity_EventScript_DoorGuardGrunt_1
# 90 "data/maps/SaffronCity_Frlg/scripts.pory"

# 91 "data/maps/SaffronCity_Frlg/scripts.pory"

# 92 "data/maps/SaffronCity_Frlg/scripts.pory"
SaffronCity_EventScript_DoorGuardAsleep::
# 93 "data/maps/SaffronCity_Frlg/scripts.pory"
# 66 "data/maps/SaffronCity_Frlg/scripts.pory"
# 94 "data/maps/SaffronCity_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 95 "data/maps/SaffronCity_Frlg/scripts.pory"
# 67 "data/maps/SaffronCity_Frlg/scripts.pory"
# 96 "data/maps/SaffronCity_Frlg/scripts.pory"
	msgbox SaffronCity_Text_HesTakingASnooze
# 97 "data/maps/SaffronCity_Frlg/scripts.pory"
# 68 "data/maps/SaffronCity_Frlg/scripts.pory"
# 98 "data/maps/SaffronCity_Frlg/scripts.pory"
	release
# 99 "data/maps/SaffronCity_Frlg/scripts.pory"
	end
# 100 "data/maps/SaffronCity_Frlg/scripts.pory"

# 101 "data/maps/SaffronCity_Frlg/scripts.pory"

# 102 "data/maps/SaffronCity_Frlg/scripts.pory"
SaffronCity_EventScript_WorkerM::
# 103 "data/maps/SaffronCity_Frlg/scripts.pory"
# 73 "data/maps/SaffronCity_Frlg/scripts.pory"
# 104 "data/maps/SaffronCity_Frlg/scripts.pory"
	msgbox SaffronCity_Text_YouBeatTeamRocket, MSGBOX_NPC
# 105 "data/maps/SaffronCity_Frlg/scripts.pory"
	end
# 106 "data/maps/SaffronCity_Frlg/scripts.pory"

# 107 "data/maps/SaffronCity_Frlg/scripts.pory"

# 108 "data/maps/SaffronCity_Frlg/scripts.pory"
SaffronCity_EventScript_Youngster::
# 109 "data/maps/SaffronCity_Frlg/scripts.pory"
# 78 "data/maps/SaffronCity_Frlg/scripts.pory"
# 110 "data/maps/SaffronCity_Frlg/scripts.pory"
	msgbox SaffronCity_Text_SafeToGoOutAgain, MSGBOX_NPC
# 111 "data/maps/SaffronCity_Frlg/scripts.pory"
	end
# 112 "data/maps/SaffronCity_Frlg/scripts.pory"

# 113 "data/maps/SaffronCity_Frlg/scripts.pory"

# 114 "data/maps/SaffronCity_Frlg/scripts.pory"
SaffronCity_EventScript_Lass::
# 115 "data/maps/SaffronCity_Frlg/scripts.pory"
# 83 "data/maps/SaffronCity_Frlg/scripts.pory"
# 116 "data/maps/SaffronCity_Frlg/scripts.pory"
	msgbox SaffronCity_Text_PeopleComingBackToSaffron, MSGBOX_NPC
# 117 "data/maps/SaffronCity_Frlg/scripts.pory"
	end
# 118 "data/maps/SaffronCity_Frlg/scripts.pory"

# 119 "data/maps/SaffronCity_Frlg/scripts.pory"

# 120 "data/maps/SaffronCity_Frlg/scripts.pory"
SaffronCity_EventScript_Boy::
# 121 "data/maps/SaffronCity_Frlg/scripts.pory"
# 88 "data/maps/SaffronCity_Frlg/scripts.pory"
# 122 "data/maps/SaffronCity_Frlg/scripts.pory"
	msgbox SaffronCity_Text_FlewHereOnPidgeot, MSGBOX_NPC
# 123 "data/maps/SaffronCity_Frlg/scripts.pory"
	end
# 124 "data/maps/SaffronCity_Frlg/scripts.pory"

# 125 "data/maps/SaffronCity_Frlg/scripts.pory"

# 126 "data/maps/SaffronCity_Frlg/scripts.pory"
SaffronCity_EventScript_Pidgeot::
# 127 "data/maps/SaffronCity_Frlg/scripts.pory"
# 93 "data/maps/SaffronCity_Frlg/scripts.pory"
# 128 "data/maps/SaffronCity_Frlg/scripts.pory"
	lock
# 129 "data/maps/SaffronCity_Frlg/scripts.pory"
# 94 "data/maps/SaffronCity_Frlg/scripts.pory"
# 130 "data/maps/SaffronCity_Frlg/scripts.pory"
	faceplayer
# 131 "data/maps/SaffronCity_Frlg/scripts.pory"
# 95 "data/maps/SaffronCity_Frlg/scripts.pory"
# 132 "data/maps/SaffronCity_Frlg/scripts.pory"
	waitse
# 133 "data/maps/SaffronCity_Frlg/scripts.pory"
# 96 "data/maps/SaffronCity_Frlg/scripts.pory"
# 134 "data/maps/SaffronCity_Frlg/scripts.pory"
	playmoncry SPECIES_PIDGEOT, CRY_MODE_NORMAL
# 135 "data/maps/SaffronCity_Frlg/scripts.pory"
# 97 "data/maps/SaffronCity_Frlg/scripts.pory"
# 136 "data/maps/SaffronCity_Frlg/scripts.pory"
	msgbox SaffronCity_Text_Pidgeot
# 137 "data/maps/SaffronCity_Frlg/scripts.pory"
# 98 "data/maps/SaffronCity_Frlg/scripts.pory"
# 138 "data/maps/SaffronCity_Frlg/scripts.pory"
	waitmoncry
# 139 "data/maps/SaffronCity_Frlg/scripts.pory"
# 99 "data/maps/SaffronCity_Frlg/scripts.pory"
# 140 "data/maps/SaffronCity_Frlg/scripts.pory"
	release
# 141 "data/maps/SaffronCity_Frlg/scripts.pory"
	end
# 142 "data/maps/SaffronCity_Frlg/scripts.pory"

# 143 "data/maps/SaffronCity_Frlg/scripts.pory"

# 144 "data/maps/SaffronCity_Frlg/scripts.pory"
SaffronCity_EventScript_Man::
# 145 "data/maps/SaffronCity_Frlg/scripts.pory"
# 104 "data/maps/SaffronCity_Frlg/scripts.pory"
# 146 "data/maps/SaffronCity_Frlg/scripts.pory"
	msgbox SaffronCity_Text_SawRocketBossEscaping, MSGBOX_NPC
# 147 "data/maps/SaffronCity_Frlg/scripts.pory"
	end
# 148 "data/maps/SaffronCity_Frlg/scripts.pory"

# 149 "data/maps/SaffronCity_Frlg/scripts.pory"

# 150 "data/maps/SaffronCity_Frlg/scripts.pory"
SaffronCity_EventScript_CitySign::
# 151 "data/maps/SaffronCity_Frlg/scripts.pory"
# 109 "data/maps/SaffronCity_Frlg/scripts.pory"
# 152 "data/maps/SaffronCity_Frlg/scripts.pory"
	msgbox SaffronCity_Text_CitySign, MSGBOX_SIGN
# 153 "data/maps/SaffronCity_Frlg/scripts.pory"
	end
# 154 "data/maps/SaffronCity_Frlg/scripts.pory"

# 155 "data/maps/SaffronCity_Frlg/scripts.pory"

# 156 "data/maps/SaffronCity_Frlg/scripts.pory"
SaffronCity_EventScript_DojoSign::
# 157 "data/maps/SaffronCity_Frlg/scripts.pory"
# 114 "data/maps/SaffronCity_Frlg/scripts.pory"
# 158 "data/maps/SaffronCity_Frlg/scripts.pory"
	msgbox SaffronCity_Text_FightingDojo, MSGBOX_SIGN
# 159 "data/maps/SaffronCity_Frlg/scripts.pory"
	end
# 160 "data/maps/SaffronCity_Frlg/scripts.pory"

# 161 "data/maps/SaffronCity_Frlg/scripts.pory"

# 162 "data/maps/SaffronCity_Frlg/scripts.pory"
SaffronCity_EventScript_GymSign::
# 163 "data/maps/SaffronCity_Frlg/scripts.pory"
# 119 "data/maps/SaffronCity_Frlg/scripts.pory"
# 164 "data/maps/SaffronCity_Frlg/scripts.pory"
	lockall
# 165 "data/maps/SaffronCity_Frlg/scripts.pory"
# 120 "data/maps/SaffronCity_Frlg/scripts.pory"
# 166 "data/maps/SaffronCity_Frlg/scripts.pory"
	famechecker FAMECHECKER_SABRINA, 0
# 167 "data/maps/SaffronCity_Frlg/scripts.pory"
# 121 "data/maps/SaffronCity_Frlg/scripts.pory"
# 168 "data/maps/SaffronCity_Frlg/scripts.pory"
	msgbox SaffronCity_Text_GymSign
# 169 "data/maps/SaffronCity_Frlg/scripts.pory"
# 122 "data/maps/SaffronCity_Frlg/scripts.pory"
# 170 "data/maps/SaffronCity_Frlg/scripts.pory"
	releaseall
# 171 "data/maps/SaffronCity_Frlg/scripts.pory"
	end
# 172 "data/maps/SaffronCity_Frlg/scripts.pory"

# 173 "data/maps/SaffronCity_Frlg/scripts.pory"

# 174 "data/maps/SaffronCity_Frlg/scripts.pory"
SaffronCity_EventScript_TrainerTips1::
# 175 "data/maps/SaffronCity_Frlg/scripts.pory"
# 127 "data/maps/SaffronCity_Frlg/scripts.pory"
# 176 "data/maps/SaffronCity_Frlg/scripts.pory"
	msgbox SaffronCity_Text_FullHealCuresStatus, MSGBOX_SIGN
# 177 "data/maps/SaffronCity_Frlg/scripts.pory"
	end
# 178 "data/maps/SaffronCity_Frlg/scripts.pory"

# 179 "data/maps/SaffronCity_Frlg/scripts.pory"

# 180 "data/maps/SaffronCity_Frlg/scripts.pory"
SaffronCity_EventScript_TrainerTips2::
# 181 "data/maps/SaffronCity_Frlg/scripts.pory"
# 132 "data/maps/SaffronCity_Frlg/scripts.pory"
# 182 "data/maps/SaffronCity_Frlg/scripts.pory"
	msgbox SaffronCity_Text_GreatBallImprovedCatchRate, MSGBOX_SIGN
# 183 "data/maps/SaffronCity_Frlg/scripts.pory"
	end
# 184 "data/maps/SaffronCity_Frlg/scripts.pory"

# 185 "data/maps/SaffronCity_Frlg/scripts.pory"

# 186 "data/maps/SaffronCity_Frlg/scripts.pory"
SaffronCity_EventScript_SilphCoSign::
# 187 "data/maps/SaffronCity_Frlg/scripts.pory"
# 137 "data/maps/SaffronCity_Frlg/scripts.pory"
# 188 "data/maps/SaffronCity_Frlg/scripts.pory"
	msgbox SaffronCity_Text_SilphCoSign, MSGBOX_SIGN
# 189 "data/maps/SaffronCity_Frlg/scripts.pory"
	end
# 190 "data/maps/SaffronCity_Frlg/scripts.pory"

# 191 "data/maps/SaffronCity_Frlg/scripts.pory"

# 192 "data/maps/SaffronCity_Frlg/scripts.pory"
SaffronCity_EventScript_MrPsychicsHouseSign::
# 193 "data/maps/SaffronCity_Frlg/scripts.pory"
# 142 "data/maps/SaffronCity_Frlg/scripts.pory"
# 194 "data/maps/SaffronCity_Frlg/scripts.pory"
	msgbox SaffronCity_Text_MrPsychicsHouse, MSGBOX_SIGN
# 195 "data/maps/SaffronCity_Frlg/scripts.pory"
	end
# 196 "data/maps/SaffronCity_Frlg/scripts.pory"

# 197 "data/maps/SaffronCity_Frlg/scripts.pory"

# 198 "data/maps/SaffronCity_Frlg/scripts.pory"
SaffronCity_EventScript_SilphProductSign::
# 199 "data/maps/SaffronCity_Frlg/scripts.pory"
# 147 "data/maps/SaffronCity_Frlg/scripts.pory"
# 200 "data/maps/SaffronCity_Frlg/scripts.pory"
	msgbox SaffronCity_Text_SilphsLatestProduct, MSGBOX_SIGN
# 201 "data/maps/SaffronCity_Frlg/scripts.pory"
	end
# 202 "data/maps/SaffronCity_Frlg/scripts.pory"

# 203 "data/maps/SaffronCity_Frlg/scripts.pory"

# 204 "data/maps/SaffronCity_Frlg/scripts.pory"
SaffronCity_EventScript_TrainerFanClubSign::
# 205 "data/maps/SaffronCity_Frlg/scripts.pory"
# 152 "data/maps/SaffronCity_Frlg/scripts.pory"
# 206 "data/maps/SaffronCity_Frlg/scripts.pory"
	msgbox SaffronCity_Text_TrainerFanClubSign, MSGBOX_SIGN
# 207 "data/maps/SaffronCity_Frlg/scripts.pory"
	end
# 208 "data/maps/SaffronCity_Frlg/scripts.pory"

# 209 "data/maps/SaffronCity_Frlg/scripts.pory"

# 210 "data/maps/SaffronCity_Frlg/scripts.pory"
SaffronCity_Text_WhatDoYouWantGetLost::
# 211 "data/maps/SaffronCity_Frlg/scripts.pory"
# 156 "data/maps/SaffronCity_Frlg/scripts.pory"
# 212 "data/maps/SaffronCity_Frlg/scripts.pory"
	.string "What do you want?\n"
# 213 "data/maps/SaffronCity_Frlg/scripts.pory"
	.string "Get lost!$"
# 214 "data/maps/SaffronCity_Frlg/scripts.pory"

# 215 "data/maps/SaffronCity_Frlg/scripts.pory"
SaffronCity_Text_BossTakeTownForTeamRocket::
# 216 "data/maps/SaffronCity_Frlg/scripts.pory"
# 161 "data/maps/SaffronCity_Frlg/scripts.pory"
# 217 "data/maps/SaffronCity_Frlg/scripts.pory"
	.string "BOSS said he'll take this town\n"
# 218 "data/maps/SaffronCity_Frlg/scripts.pory"
	.string "in the name of TEAM ROCKET!$"
# 219 "data/maps/SaffronCity_Frlg/scripts.pory"

# 220 "data/maps/SaffronCity_Frlg/scripts.pory"
SaffronCity_Text_DontGetDefiantOrIllHurtYou::
# 221 "data/maps/SaffronCity_Frlg/scripts.pory"
# 166 "data/maps/SaffronCity_Frlg/scripts.pory"
# 222 "data/maps/SaffronCity_Frlg/scripts.pory"
	.string "Don't get defiant!\n"
# 223 "data/maps/SaffronCity_Frlg/scripts.pory"
	.string "Or I'll have to hurt you!$"
# 224 "data/maps/SaffronCity_Frlg/scripts.pory"

# 225 "data/maps/SaffronCity_Frlg/scripts.pory"
SaffronCity_Text_SaffronBelongsToTeamRocket::
# 226 "data/maps/SaffronCity_Frlg/scripts.pory"
# 171 "data/maps/SaffronCity_Frlg/scripts.pory"
# 227 "data/maps/SaffronCity_Frlg/scripts.pory"
	.string "SAFFRON belongs to TEAM ROCKET!$"
# 228 "data/maps/SaffronCity_Frlg/scripts.pory"

# 229 "data/maps/SaffronCity_Frlg/scripts.pory"
SaffronCity_Text_CriminalLifeMakesMeFeelAlive::
# 230 "data/maps/SaffronCity_Frlg/scripts.pory"
# 175 "data/maps/SaffronCity_Frlg/scripts.pory"
# 231 "data/maps/SaffronCity_Frlg/scripts.pory"
	.string "My life as a criminal makes me feel\n"
# 232 "data/maps/SaffronCity_Frlg/scripts.pory"
	.string "so alive!$"
# 233 "data/maps/SaffronCity_Frlg/scripts.pory"

# 234 "data/maps/SaffronCity_Frlg/scripts.pory"
SaffronCity_Text_WatchWhereYoureWalking::
# 235 "data/maps/SaffronCity_Frlg/scripts.pory"
# 180 "data/maps/SaffronCity_Frlg/scripts.pory"
# 236 "data/maps/SaffronCity_Frlg/scripts.pory"
	.string "Ow!\n"
# 237 "data/maps/SaffronCity_Frlg/scripts.pory"
	.string "Watch where you're walking!$"
# 238 "data/maps/SaffronCity_Frlg/scripts.pory"

# 239 "data/maps/SaffronCity_Frlg/scripts.pory"
SaffronCity_Text_WeCanExploitMonsAroundWorld::
# 240 "data/maps/SaffronCity_Frlg/scripts.pory"
# 185 "data/maps/SaffronCity_Frlg/scripts.pory"
# 241 "data/maps/SaffronCity_Frlg/scripts.pory"
	.string "With SILPH under control, we can\n"
# 242 "data/maps/SaffronCity_Frlg/scripts.pory"
	.string "exploit POKéMON around the world!\p"
# 243 "data/maps/SaffronCity_Frlg/scripts.pory"
	.string "We'll get stinking rich, yeahah!$"
# 244 "data/maps/SaffronCity_Frlg/scripts.pory"

# 245 "data/maps/SaffronCity_Frlg/scripts.pory"
SaffronCity_Text_YouBeatTeamRocket::
# 246 "data/maps/SaffronCity_Frlg/scripts.pory"
# 191 "data/maps/SaffronCity_Frlg/scripts.pory"
# 247 "data/maps/SaffronCity_Frlg/scripts.pory"
	.string "You beat TEAM ROCKET all alone?\n"
# 248 "data/maps/SaffronCity_Frlg/scripts.pory"
	.string "That's amazing!$"
# 249 "data/maps/SaffronCity_Frlg/scripts.pory"

# 250 "data/maps/SaffronCity_Frlg/scripts.pory"
SaffronCity_Text_SafeToGoOutAgain::
# 251 "data/maps/SaffronCity_Frlg/scripts.pory"
# 196 "data/maps/SaffronCity_Frlg/scripts.pory"
# 252 "data/maps/SaffronCity_Frlg/scripts.pory"
	.string "Yeah! TEAM ROCKET is gone!\n"
# 253 "data/maps/SaffronCity_Frlg/scripts.pory"
	.string "It's safe to go out again!$"
# 254 "data/maps/SaffronCity_Frlg/scripts.pory"

# 255 "data/maps/SaffronCity_Frlg/scripts.pory"
SaffronCity_Text_PeopleComingBackToSaffron::
# 256 "data/maps/SaffronCity_Frlg/scripts.pory"
# 201 "data/maps/SaffronCity_Frlg/scripts.pory"
# 257 "data/maps/SaffronCity_Frlg/scripts.pory"
	.string "People fled from here in droves\n"
# 258 "data/maps/SaffronCity_Frlg/scripts.pory"
	.string "when those ROCKETS came.\p"
# 259 "data/maps/SaffronCity_Frlg/scripts.pory"
	.string "They should be flocking back to\n"
# 260 "data/maps/SaffronCity_Frlg/scripts.pory"
	.string "SAFFRON now.$"
# 261 "data/maps/SaffronCity_Frlg/scripts.pory"

# 262 "data/maps/SaffronCity_Frlg/scripts.pory"
SaffronCity_Text_FlewHereOnPidgeot::
# 263 "data/maps/SaffronCity_Frlg/scripts.pory"
# 208 "data/maps/SaffronCity_Frlg/scripts.pory"
# 264 "data/maps/SaffronCity_Frlg/scripts.pory"
	.string "I flew here on my PIDGEOT when\n"
# 265 "data/maps/SaffronCity_Frlg/scripts.pory"
	.string "I read about SILPH.\p"
# 266 "data/maps/SaffronCity_Frlg/scripts.pory"
	.string "It's already over?\n"
# 267 "data/maps/SaffronCity_Frlg/scripts.pory"
	.string "I missed the media action…$"
# 268 "data/maps/SaffronCity_Frlg/scripts.pory"

# 269 "data/maps/SaffronCity_Frlg/scripts.pory"
SaffronCity_Text_Pidgeot::
# 270 "data/maps/SaffronCity_Frlg/scripts.pory"
# 215 "data/maps/SaffronCity_Frlg/scripts.pory"
# 271 "data/maps/SaffronCity_Frlg/scripts.pory"
	.string "PIDGEOT: Bi bibii!$"
# 272 "data/maps/SaffronCity_Frlg/scripts.pory"

# 273 "data/maps/SaffronCity_Frlg/scripts.pory"
SaffronCity_Text_SawRocketBossEscaping::
# 274 "data/maps/SaffronCity_Frlg/scripts.pory"
# 219 "data/maps/SaffronCity_Frlg/scripts.pory"
# 275 "data/maps/SaffronCity_Frlg/scripts.pory"
	.string "I saw the ROCKET BOSS escaping\n"
# 276 "data/maps/SaffronCity_Frlg/scripts.pory"
	.string "SILPH's building.$"
# 277 "data/maps/SaffronCity_Frlg/scripts.pory"

# 278 "data/maps/SaffronCity_Frlg/scripts.pory"
SaffronCity_Text_ImASecurityGuard::
# 279 "data/maps/SaffronCity_Frlg/scripts.pory"
# 224 "data/maps/SaffronCity_Frlg/scripts.pory"
# 280 "data/maps/SaffronCity_Frlg/scripts.pory"
	.string "I'm a security guard.\p"
# 281 "data/maps/SaffronCity_Frlg/scripts.pory"
	.string "Suspicious kids I don't allow in!$"
# 282 "data/maps/SaffronCity_Frlg/scripts.pory"

# 283 "data/maps/SaffronCity_Frlg/scripts.pory"
SaffronCity_Text_HesTakingASnooze::
# 284 "data/maps/SaffronCity_Frlg/scripts.pory"
# 229 "data/maps/SaffronCity_Frlg/scripts.pory"
# 285 "data/maps/SaffronCity_Frlg/scripts.pory"
	.string "…\n"
# 286 "data/maps/SaffronCity_Frlg/scripts.pory"
	.string "Snore…\p"
# 287 "data/maps/SaffronCity_Frlg/scripts.pory"
	.string "Hah! He's taking a snooze!$"
# 288 "data/maps/SaffronCity_Frlg/scripts.pory"

# 289 "data/maps/SaffronCity_Frlg/scripts.pory"
SaffronCity_Text_CitySign::
# 290 "data/maps/SaffronCity_Frlg/scripts.pory"
# 235 "data/maps/SaffronCity_Frlg/scripts.pory"
# 291 "data/maps/SaffronCity_Frlg/scripts.pory"
	.string "SAFFRON CITY\n"
# 292 "data/maps/SaffronCity_Frlg/scripts.pory"
	.string "Shining, Golden Land of Commerce$"
# 293 "data/maps/SaffronCity_Frlg/scripts.pory"

# 294 "data/maps/SaffronCity_Frlg/scripts.pory"
SaffronCity_Text_FightingDojo::
# 295 "data/maps/SaffronCity_Frlg/scripts.pory"
# 240 "data/maps/SaffronCity_Frlg/scripts.pory"
# 296 "data/maps/SaffronCity_Frlg/scripts.pory"
	.string "FIGHTING DOJO$"
# 297 "data/maps/SaffronCity_Frlg/scripts.pory"

# 298 "data/maps/SaffronCity_Frlg/scripts.pory"
SaffronCity_Text_GymSign::
# 299 "data/maps/SaffronCity_Frlg/scripts.pory"
# 244 "data/maps/SaffronCity_Frlg/scripts.pory"
# 300 "data/maps/SaffronCity_Frlg/scripts.pory"
	.string "SAFFRON CITY POKéMON GYM\n"
# 301 "data/maps/SaffronCity_Frlg/scripts.pory"
	.string "LEADER: SABRINA\l"
# 302 "data/maps/SaffronCity_Frlg/scripts.pory"
	.string "The Master of PSYCHIC POKéMON!$"
# 303 "data/maps/SaffronCity_Frlg/scripts.pory"

# 304 "data/maps/SaffronCity_Frlg/scripts.pory"
SaffronCity_Text_FullHealCuresStatus::
# 305 "data/maps/SaffronCity_Frlg/scripts.pory"
# 250 "data/maps/SaffronCity_Frlg/scripts.pory"
# 306 "data/maps/SaffronCity_Frlg/scripts.pory"
	.string "TRAINER TIPS\p"
# 307 "data/maps/SaffronCity_Frlg/scripts.pory"
	.string "FULL HEAL cures all ailments like\n"
# 308 "data/maps/SaffronCity_Frlg/scripts.pory"
	.string "burns, paralysis, poisoning,\l"
# 309 "data/maps/SaffronCity_Frlg/scripts.pory"
	.string "freezing, and sleep.\p"
# 310 "data/maps/SaffronCity_Frlg/scripts.pory"
	.string "It costs a bit more, but it's more\n"
# 311 "data/maps/SaffronCity_Frlg/scripts.pory"
	.string "convenient than buying other items.$"
# 312 "data/maps/SaffronCity_Frlg/scripts.pory"

# 313 "data/maps/SaffronCity_Frlg/scripts.pory"
SaffronCity_Text_GreatBallImprovedCatchRate::
# 314 "data/maps/SaffronCity_Frlg/scripts.pory"
# 259 "data/maps/SaffronCity_Frlg/scripts.pory"
# 315 "data/maps/SaffronCity_Frlg/scripts.pory"
	.string "TRAINER TIPS\p"
# 316 "data/maps/SaffronCity_Frlg/scripts.pory"
	.string "The new GREAT BALL offers improved\n"
# 317 "data/maps/SaffronCity_Frlg/scripts.pory"
	.string "catching rates.\p"
# 318 "data/maps/SaffronCity_Frlg/scripts.pory"
	.string "Try it on those hard-to-catch\n"
# 319 "data/maps/SaffronCity_Frlg/scripts.pory"
	.string "POKéMON.$"
# 320 "data/maps/SaffronCity_Frlg/scripts.pory"

# 321 "data/maps/SaffronCity_Frlg/scripts.pory"
SaffronCity_Text_SilphCoSign::
# 322 "data/maps/SaffronCity_Frlg/scripts.pory"
# 267 "data/maps/SaffronCity_Frlg/scripts.pory"
# 323 "data/maps/SaffronCity_Frlg/scripts.pory"
	.string "SILPH CO. OFFICE BUILDING$"
# 324 "data/maps/SaffronCity_Frlg/scripts.pory"

# 325 "data/maps/SaffronCity_Frlg/scripts.pory"
SaffronCity_Text_MrPsychicsHouse::
# 326 "data/maps/SaffronCity_Frlg/scripts.pory"
# 271 "data/maps/SaffronCity_Frlg/scripts.pory"
# 327 "data/maps/SaffronCity_Frlg/scripts.pory"
	.string "MR. PSYCHIC'S HOUSE$"
# 328 "data/maps/SaffronCity_Frlg/scripts.pory"

# 329 "data/maps/SaffronCity_Frlg/scripts.pory"
SaffronCity_Text_SilphsLatestProduct::
# 330 "data/maps/SaffronCity_Frlg/scripts.pory"
# 275 "data/maps/SaffronCity_Frlg/scripts.pory"
# 331 "data/maps/SaffronCity_Frlg/scripts.pory"
	.string "SILPH's latest product!\n"
# 332 "data/maps/SaffronCity_Frlg/scripts.pory"
	.string "Release to be determined…$"
# 333 "data/maps/SaffronCity_Frlg/scripts.pory"

# 334 "data/maps/SaffronCity_Frlg/scripts.pory"
SaffronCity_Text_TrainerFanClubSign::
# 335 "data/maps/SaffronCity_Frlg/scripts.pory"
# 280 "data/maps/SaffronCity_Frlg/scripts.pory"
# 336 "data/maps/SaffronCity_Frlg/scripts.pory"
	.string "POKéMON TRAINER FAN CLUB\p"
# 337 "data/maps/SaffronCity_Frlg/scripts.pory"
	.string "Many TRAINERS have scribbled their\n"
# 338 "data/maps/SaffronCity_Frlg/scripts.pory"
	.string "names on this sign.$"
# 339 "data/maps/SaffronCity_Frlg/scripts.pory"

# 340 "data/maps/SaffronCity_Frlg/scripts.pory"
SaffronCity_Text_HowCanClubNotRecognizeLance::
# 341 "data/maps/SaffronCity_Frlg/scripts.pory"
# 286 "data/maps/SaffronCity_Frlg/scripts.pory"
# 342 "data/maps/SaffronCity_Frlg/scripts.pory"
	.string "This FAN CLUB…\n"
# 343 "data/maps/SaffronCity_Frlg/scripts.pory"
	.string "No one here has a clue!\p"
# 344 "data/maps/SaffronCity_Frlg/scripts.pory"
	.string "How could they not recognize\n"
# 345 "data/maps/SaffronCity_Frlg/scripts.pory"
	.string "the brilliance that is LANCE?\p"
# 346 "data/maps/SaffronCity_Frlg/scripts.pory"
	.string "He stands for justice!\n"
# 347 "data/maps/SaffronCity_Frlg/scripts.pory"
	.string "He's cool, and yet passionate!\l"
# 348 "data/maps/SaffronCity_Frlg/scripts.pory"
	.string "He's the greatest, LANCE!$"
