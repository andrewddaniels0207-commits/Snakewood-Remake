# 1 "data/maps/MossdeepCity/scripts.pory"

# 2 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_MapScripts::
# 3 "data/maps/MossdeepCity/scripts.pory"
# 2 "data/maps/MossdeepCity/scripts.pory"
# 4 "data/maps/MossdeepCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MossdeepCity_OnTransition
# 5 "data/maps/MossdeepCity/scripts.pory"
	.byte 0
# 6 "data/maps/MossdeepCity/scripts.pory"

# 7 "data/maps/MossdeepCity/scripts.pory"

# 8 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_OnTransition::
# 9 "data/maps/MossdeepCity/scripts.pory"
# 6 "data/maps/MossdeepCity/scripts.pory"
# 10 "data/maps/MossdeepCity/scripts.pory"
	clearflag FLAG_MOSSDEEP_GYM_SWITCH_1
# 11 "data/maps/MossdeepCity/scripts.pory"
# 7 "data/maps/MossdeepCity/scripts.pory"
# 12 "data/maps/MossdeepCity/scripts.pory"
	clearflag FLAG_MOSSDEEP_GYM_SWITCH_2
# 13 "data/maps/MossdeepCity/scripts.pory"
# 8 "data/maps/MossdeepCity/scripts.pory"
# 14 "data/maps/MossdeepCity/scripts.pory"
	clearflag FLAG_MOSSDEEP_GYM_SWITCH_3
# 15 "data/maps/MossdeepCity/scripts.pory"
# 9 "data/maps/MossdeepCity/scripts.pory"
# 16 "data/maps/MossdeepCity/scripts.pory"
	clearflag FLAG_MOSSDEEP_GYM_SWITCH_4
# 17 "data/maps/MossdeepCity/scripts.pory"
# 10 "data/maps/MossdeepCity/scripts.pory"
# 18 "data/maps/MossdeepCity/scripts.pory"
	goto_if_set FLAG_SYS_WEATHER_CTRL, MossdeepCity_OnTransition_2
# 19 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_OnTransition_1:
# 20 "data/maps/MossdeepCity/scripts.pory"
	end
# 21 "data/maps/MossdeepCity/scripts.pory"

# 22 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_OnTransition_2:
# 23 "data/maps/MossdeepCity/scripts.pory"
# 11 "data/maps/MossdeepCity/scripts.pory"
# 24 "data/maps/MossdeepCity/scripts.pory"
	call Common_EventScript_SetAbnormalWeather
# 25 "data/maps/MossdeepCity/scripts.pory"
	goto MossdeepCity_OnTransition_1
# 26 "data/maps/MossdeepCity/scripts.pory"

# 27 "data/maps/MossdeepCity/scripts.pory"

# 28 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_PokefanF::
# 29 "data/maps/MossdeepCity/scripts.pory"
# 17 "data/maps/MossdeepCity/scripts.pory"
# 30 "data/maps/MossdeepCity/scripts.pory"
	lock
# 31 "data/maps/MossdeepCity/scripts.pory"
# 18 "data/maps/MossdeepCity/scripts.pory"
# 32 "data/maps/MossdeepCity/scripts.pory"
	faceplayer
# 33 "data/maps/MossdeepCity/scripts.pory"
# 19 "data/maps/MossdeepCity/scripts.pory"
# 34 "data/maps/MossdeepCity/scripts.pory"
	goto_if_set FLAG_RECEIVED_HM_DIVE, MossdeepCity_EventScript_PokefanF_2
# 35 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_PokefanF_1:
# 36 "data/maps/MossdeepCity/scripts.pory"
# 22 "data/maps/MossdeepCity/scripts.pory"
# 37 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_SpaceCenterReceivedLetter, MSGBOX_DEFAULT
# 38 "data/maps/MossdeepCity/scripts.pory"
# 23 "data/maps/MossdeepCity/scripts.pory"
# 39 "data/maps/MossdeepCity/scripts.pory"
	release
# 40 "data/maps/MossdeepCity/scripts.pory"
	end
# 41 "data/maps/MossdeepCity/scripts.pory"

# 42 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_PokefanF_2:
# 43 "data/maps/MossdeepCity/scripts.pory"
# 20 "data/maps/MossdeepCity/scripts.pory"
# 44 "data/maps/MossdeepCity/scripts.pory"
	goto MossdeepCity_EventScript_PokefanFMagmaGone
# 45 "data/maps/MossdeepCity/scripts.pory"
	goto MossdeepCity_EventScript_PokefanF_1
# 46 "data/maps/MossdeepCity/scripts.pory"

# 47 "data/maps/MossdeepCity/scripts.pory"

# 48 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_PokefanFMagmaGone::
# 49 "data/maps/MossdeepCity/scripts.pory"
# 28 "data/maps/MossdeepCity/scripts.pory"
# 50 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_SpaceCenterLaunchingRockets, MSGBOX_DEFAULT
# 51 "data/maps/MossdeepCity/scripts.pory"
# 29 "data/maps/MossdeepCity/scripts.pory"
# 52 "data/maps/MossdeepCity/scripts.pory"
	release
# 53 "data/maps/MossdeepCity/scripts.pory"
	end
# 54 "data/maps/MossdeepCity/scripts.pory"

# 55 "data/maps/MossdeepCity/scripts.pory"

# 56 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_Sailor::
# 57 "data/maps/MossdeepCity/scripts.pory"
# 34 "data/maps/MossdeepCity/scripts.pory"
# 58 "data/maps/MossdeepCity/scripts.pory"
	lock
# 59 "data/maps/MossdeepCity/scripts.pory"
# 35 "data/maps/MossdeepCity/scripts.pory"
# 60 "data/maps/MossdeepCity/scripts.pory"
	faceplayer
# 61 "data/maps/MossdeepCity/scripts.pory"
# 36 "data/maps/MossdeepCity/scripts.pory"
# 62 "data/maps/MossdeepCity/scripts.pory"
	goto_if_set FLAG_RECEIVED_HM_DIVE, MossdeepCity_EventScript_Sailor_2
# 63 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_Sailor_1:
# 64 "data/maps/MossdeepCity/scripts.pory"
# 39 "data/maps/MossdeepCity/scripts.pory"
# 65 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_MossdeepTargetedByMagma, MSGBOX_DEFAULT
# 66 "data/maps/MossdeepCity/scripts.pory"
# 40 "data/maps/MossdeepCity/scripts.pory"
# 67 "data/maps/MossdeepCity/scripts.pory"
	release
# 68 "data/maps/MossdeepCity/scripts.pory"
	end
# 69 "data/maps/MossdeepCity/scripts.pory"

# 70 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_Sailor_2:
# 71 "data/maps/MossdeepCity/scripts.pory"
# 37 "data/maps/MossdeepCity/scripts.pory"
# 72 "data/maps/MossdeepCity/scripts.pory"
	goto MossdeepCity_EventScript_SailorMagmaGone
# 73 "data/maps/MossdeepCity/scripts.pory"
	goto MossdeepCity_EventScript_Sailor_1
# 74 "data/maps/MossdeepCity/scripts.pory"

# 75 "data/maps/MossdeepCity/scripts.pory"

# 76 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_SailorMagmaGone::
# 77 "data/maps/MossdeepCity/scripts.pory"
# 45 "data/maps/MossdeepCity/scripts.pory"
# 78 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_FeelReliefOnLand, MSGBOX_DEFAULT
# 79 "data/maps/MossdeepCity/scripts.pory"
# 46 "data/maps/MossdeepCity/scripts.pory"
# 80 "data/maps/MossdeepCity/scripts.pory"
	release
# 81 "data/maps/MossdeepCity/scripts.pory"
	end
# 82 "data/maps/MossdeepCity/scripts.pory"

# 83 "data/maps/MossdeepCity/scripts.pory"

# 84 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_NinjaBoy::
# 85 "data/maps/MossdeepCity/scripts.pory"
# 51 "data/maps/MossdeepCity/scripts.pory"
# 86 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_WailmerWatching, MSGBOX_NPC
# 87 "data/maps/MossdeepCity/scripts.pory"
	end
# 88 "data/maps/MossdeepCity/scripts.pory"

# 89 "data/maps/MossdeepCity/scripts.pory"

# 90 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_ExpertM::
# 91 "data/maps/MossdeepCity/scripts.pory"
# 56 "data/maps/MossdeepCity/scripts.pory"
# 92 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_LifeNeedsSeaToLive, MSGBOX_NPC
# 93 "data/maps/MossdeepCity/scripts.pory"
	end
# 94 "data/maps/MossdeepCity/scripts.pory"

# 95 "data/maps/MossdeepCity/scripts.pory"

# 96 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_Girl::
# 97 "data/maps/MossdeepCity/scripts.pory"
# 61 "data/maps/MossdeepCity/scripts.pory"
# 98 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_NiceIfWorldCoveredByFlowers, MSGBOX_NPC
# 99 "data/maps/MossdeepCity/scripts.pory"
	end
# 100 "data/maps/MossdeepCity/scripts.pory"

# 101 "data/maps/MossdeepCity/scripts.pory"

# 102 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_Woman::
# 103 "data/maps/MossdeepCity/scripts.pory"
# 66 "data/maps/MossdeepCity/scripts.pory"
# 104 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_SpecialSpaceCenterRock, MSGBOX_NPC
# 105 "data/maps/MossdeepCity/scripts.pory"
	end
# 106 "data/maps/MossdeepCity/scripts.pory"

# 107 "data/maps/MossdeepCity/scripts.pory"

# 108 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_WhiteRock::
# 109 "data/maps/MossdeepCity/scripts.pory"
# 71 "data/maps/MossdeepCity/scripts.pory"
# 110 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_ItsAWhiteRock, MSGBOX_SIGN
# 111 "data/maps/MossdeepCity/scripts.pory"
	end
# 112 "data/maps/MossdeepCity/scripts.pory"

# 113 "data/maps/MossdeepCity/scripts.pory"

# 114 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_GymSign::
# 115 "data/maps/MossdeepCity/scripts.pory"
# 76 "data/maps/MossdeepCity/scripts.pory"
# 116 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_GymSign, MSGBOX_SIGN
# 117 "data/maps/MossdeepCity/scripts.pory"
	end
# 118 "data/maps/MossdeepCity/scripts.pory"

# 119 "data/maps/MossdeepCity/scripts.pory"

# 120 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_CitySign::
# 121 "data/maps/MossdeepCity/scripts.pory"
# 81 "data/maps/MossdeepCity/scripts.pory"
# 122 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_CitySign, MSGBOX_SIGN
# 123 "data/maps/MossdeepCity/scripts.pory"
	end
# 124 "data/maps/MossdeepCity/scripts.pory"

# 125 "data/maps/MossdeepCity/scripts.pory"

# 126 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_SpaceCenterSign::
# 127 "data/maps/MossdeepCity/scripts.pory"
# 86 "data/maps/MossdeepCity/scripts.pory"
# 128 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_SpaceCenterSign, MSGBOX_SIGN
# 129 "data/maps/MossdeepCity/scripts.pory"
	end
# 130 "data/maps/MossdeepCity/scripts.pory"

# 131 "data/maps/MossdeepCity/scripts.pory"

# 132 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_VisitedMossdeep::
# 133 "data/maps/MossdeepCity/scripts.pory"
# 91 "data/maps/MossdeepCity/scripts.pory"
# 134 "data/maps/MossdeepCity/scripts.pory"
	setflag FLAG_VISITED_MOSSDEEP_CITY
# 135 "data/maps/MossdeepCity/scripts.pory"
# 92 "data/maps/MossdeepCity/scripts.pory"
# 136 "data/maps/MossdeepCity/scripts.pory"
	setvar VAR_TEMP_1, 1
# 137 "data/maps/MossdeepCity/scripts.pory"
	end
# 138 "data/maps/MossdeepCity/scripts.pory"

# 139 "data/maps/MossdeepCity/scripts.pory"

# 140 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_TeamMagmaEnterSpaceCenter::
# 141 "data/maps/MossdeepCity/scripts.pory"
# 97 "data/maps/MossdeepCity/scripts.pory"
# 142 "data/maps/MossdeepCity/scripts.pory"
	lockall
# 143 "data/maps/MossdeepCity/scripts.pory"
# 98 "data/maps/MossdeepCity/scripts.pory"
# 144 "data/maps/MossdeepCity/scripts.pory"
	applymovement LOCALID_MOSSDEEP_MAXIE, MossdeepCity_Movement_MaxieGestureToSpaceCenter
# 145 "data/maps/MossdeepCity/scripts.pory"
# 99 "data/maps/MossdeepCity/scripts.pory"
# 146 "data/maps/MossdeepCity/scripts.pory"
	waitmovement 0
# 147 "data/maps/MossdeepCity/scripts.pory"
# 100 "data/maps/MossdeepCity/scripts.pory"
# 148 "data/maps/MossdeepCity/scripts.pory"
	applymovement LOCALID_MOSSDEEP_GRUNT_1, MossdeepCity_Movement_GruntFaceSpaceCenter
# 149 "data/maps/MossdeepCity/scripts.pory"
# 101 "data/maps/MossdeepCity/scripts.pory"
# 150 "data/maps/MossdeepCity/scripts.pory"
	applymovement LOCALID_MOSSDEEP_GRUNT_2, MossdeepCity_Movement_GruntFaceSpaceCenter
# 151 "data/maps/MossdeepCity/scripts.pory"
# 102 "data/maps/MossdeepCity/scripts.pory"
# 152 "data/maps/MossdeepCity/scripts.pory"
	applymovement LOCALID_MOSSDEEP_GRUNT_3, MossdeepCity_Movement_GruntFaceSpaceCenter
# 153 "data/maps/MossdeepCity/scripts.pory"
# 103 "data/maps/MossdeepCity/scripts.pory"
# 154 "data/maps/MossdeepCity/scripts.pory"
	applymovement LOCALID_MOSSDEEP_GRUNT_4, MossdeepCity_Movement_GruntFaceSpaceCenter
# 155 "data/maps/MossdeepCity/scripts.pory"
# 104 "data/maps/MossdeepCity/scripts.pory"
# 156 "data/maps/MossdeepCity/scripts.pory"
	waitmovement 0
# 157 "data/maps/MossdeepCity/scripts.pory"
# 105 "data/maps/MossdeepCity/scripts.pory"
# 158 "data/maps/MossdeepCity/scripts.pory"
	applymovement LOCALID_MOSSDEEP_MAXIE, MossdeepCity_Movement_MaxieEnterSpaceCenter
# 159 "data/maps/MossdeepCity/scripts.pory"
# 106 "data/maps/MossdeepCity/scripts.pory"
# 160 "data/maps/MossdeepCity/scripts.pory"
	applymovement LOCALID_MOSSDEEP_GRUNT_1, MossdeepCity_Movement_Grunt1EnterSpaceCenter
# 161 "data/maps/MossdeepCity/scripts.pory"
# 107 "data/maps/MossdeepCity/scripts.pory"
# 162 "data/maps/MossdeepCity/scripts.pory"
	applymovement LOCALID_MOSSDEEP_GRUNT_2, MossdeepCity_Movement_Grunt2EnterSpaceCenter
# 163 "data/maps/MossdeepCity/scripts.pory"
# 108 "data/maps/MossdeepCity/scripts.pory"
# 164 "data/maps/MossdeepCity/scripts.pory"
	applymovement LOCALID_MOSSDEEP_GRUNT_3, MossdeepCity_Movement_Grunt3EnterSpaceCenter
# 165 "data/maps/MossdeepCity/scripts.pory"
# 109 "data/maps/MossdeepCity/scripts.pory"
# 166 "data/maps/MossdeepCity/scripts.pory"
	applymovement LOCALID_MOSSDEEP_GRUNT_4, MossdeepCity_Movement_Grunt4EnterSpaceCenter
# 167 "data/maps/MossdeepCity/scripts.pory"
# 110 "data/maps/MossdeepCity/scripts.pory"
# 168 "data/maps/MossdeepCity/scripts.pory"
	waitmovement 0
# 169 "data/maps/MossdeepCity/scripts.pory"
# 111 "data/maps/MossdeepCity/scripts.pory"
# 170 "data/maps/MossdeepCity/scripts.pory"
	removeobject LOCALID_MOSSDEEP_MAXIE
# 171 "data/maps/MossdeepCity/scripts.pory"
# 112 "data/maps/MossdeepCity/scripts.pory"
# 172 "data/maps/MossdeepCity/scripts.pory"
	removeobject LOCALID_MOSSDEEP_GRUNT_1
# 173 "data/maps/MossdeepCity/scripts.pory"
# 113 "data/maps/MossdeepCity/scripts.pory"
# 174 "data/maps/MossdeepCity/scripts.pory"
	removeobject LOCALID_MOSSDEEP_GRUNT_2
# 175 "data/maps/MossdeepCity/scripts.pory"
# 114 "data/maps/MossdeepCity/scripts.pory"
# 176 "data/maps/MossdeepCity/scripts.pory"
	removeobject LOCALID_MOSSDEEP_GRUNT_3
# 177 "data/maps/MossdeepCity/scripts.pory"
# 115 "data/maps/MossdeepCity/scripts.pory"
# 178 "data/maps/MossdeepCity/scripts.pory"
	removeobject LOCALID_MOSSDEEP_GRUNT_4
# 179 "data/maps/MossdeepCity/scripts.pory"
# 116 "data/maps/MossdeepCity/scripts.pory"
# 180 "data/maps/MossdeepCity/scripts.pory"
	delay 30
# 181 "data/maps/MossdeepCity/scripts.pory"
# 117 "data/maps/MossdeepCity/scripts.pory"
# 182 "data/maps/MossdeepCity/scripts.pory"
	setvar VAR_MOSSDEEP_CITY_STATE, 2
# 183 "data/maps/MossdeepCity/scripts.pory"
# 118 "data/maps/MossdeepCity/scripts.pory"
# 184 "data/maps/MossdeepCity/scripts.pory"
	setflag FLAG_HIDE_MOSSDEEP_CITY_TEAM_MAGMA
# 185 "data/maps/MossdeepCity/scripts.pory"
# 119 "data/maps/MossdeepCity/scripts.pory"
# 186 "data/maps/MossdeepCity/scripts.pory"
	releaseall
# 187 "data/maps/MossdeepCity/scripts.pory"
	end
# 188 "data/maps/MossdeepCity/scripts.pory"

# 189 "data/maps/MossdeepCity/scripts.pory"

# 190 "data/maps/MossdeepCity/scripts.pory"
# 123 "data/maps/MossdeepCity/scripts.pory"
# 191 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Movement_MaxieGestureToSpaceCenter:
# 192 "data/maps/MossdeepCity/scripts.pory"
# 124 "data/maps/MossdeepCity/scripts.pory"
# 193 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 194 "data/maps/MossdeepCity/scripts.pory"
# 125 "data/maps/MossdeepCity/scripts.pory"
# 195 "data/maps/MossdeepCity/scripts.pory"
	face_right
# 196 "data/maps/MossdeepCity/scripts.pory"
# 126 "data/maps/MossdeepCity/scripts.pory"
# 197 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 198 "data/maps/MossdeepCity/scripts.pory"
# 127 "data/maps/MossdeepCity/scripts.pory"
# 199 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 200 "data/maps/MossdeepCity/scripts.pory"
# 128 "data/maps/MossdeepCity/scripts.pory"
# 201 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 202 "data/maps/MossdeepCity/scripts.pory"
# 129 "data/maps/MossdeepCity/scripts.pory"
# 203 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 204 "data/maps/MossdeepCity/scripts.pory"
# 130 "data/maps/MossdeepCity/scripts.pory"
# 205 "data/maps/MossdeepCity/scripts.pory"
	face_left
# 206 "data/maps/MossdeepCity/scripts.pory"
# 131 "data/maps/MossdeepCity/scripts.pory"
# 207 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 208 "data/maps/MossdeepCity/scripts.pory"
# 132 "data/maps/MossdeepCity/scripts.pory"
# 209 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 210 "data/maps/MossdeepCity/scripts.pory"
# 133 "data/maps/MossdeepCity/scripts.pory"
# 211 "data/maps/MossdeepCity/scripts.pory"
	step_end
# 212 "data/maps/MossdeepCity/scripts.pory"

# 213 "data/maps/MossdeepCity/scripts.pory"
# 136 "data/maps/MossdeepCity/scripts.pory"
# 214 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Movement_GruntFaceSpaceCenter:
# 215 "data/maps/MossdeepCity/scripts.pory"
# 137 "data/maps/MossdeepCity/scripts.pory"
# 216 "data/maps/MossdeepCity/scripts.pory"
	face_right
# 217 "data/maps/MossdeepCity/scripts.pory"
# 138 "data/maps/MossdeepCity/scripts.pory"
# 218 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 219 "data/maps/MossdeepCity/scripts.pory"
# 139 "data/maps/MossdeepCity/scripts.pory"
# 220 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 221 "data/maps/MossdeepCity/scripts.pory"
# 140 "data/maps/MossdeepCity/scripts.pory"
# 222 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 223 "data/maps/MossdeepCity/scripts.pory"
# 141 "data/maps/MossdeepCity/scripts.pory"
# 224 "data/maps/MossdeepCity/scripts.pory"
	step_end
# 225 "data/maps/MossdeepCity/scripts.pory"

# 226 "data/maps/MossdeepCity/scripts.pory"
# 144 "data/maps/MossdeepCity/scripts.pory"
# 227 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Movement_MaxieEnterSpaceCenter:
# 228 "data/maps/MossdeepCity/scripts.pory"
# 145 "data/maps/MossdeepCity/scripts.pory"
# 229 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 230 "data/maps/MossdeepCity/scripts.pory"
# 146 "data/maps/MossdeepCity/scripts.pory"
# 231 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 232 "data/maps/MossdeepCity/scripts.pory"
# 147 "data/maps/MossdeepCity/scripts.pory"
# 233 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 234 "data/maps/MossdeepCity/scripts.pory"
# 148 "data/maps/MossdeepCity/scripts.pory"
# 235 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 236 "data/maps/MossdeepCity/scripts.pory"
# 149 "data/maps/MossdeepCity/scripts.pory"
# 237 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 238 "data/maps/MossdeepCity/scripts.pory"
# 150 "data/maps/MossdeepCity/scripts.pory"
# 239 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 240 "data/maps/MossdeepCity/scripts.pory"
# 151 "data/maps/MossdeepCity/scripts.pory"
# 241 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 242 "data/maps/MossdeepCity/scripts.pory"
# 152 "data/maps/MossdeepCity/scripts.pory"
# 243 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 244 "data/maps/MossdeepCity/scripts.pory"
# 153 "data/maps/MossdeepCity/scripts.pory"
# 245 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 246 "data/maps/MossdeepCity/scripts.pory"
# 154 "data/maps/MossdeepCity/scripts.pory"
# 247 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 248 "data/maps/MossdeepCity/scripts.pory"
# 155 "data/maps/MossdeepCity/scripts.pory"
# 249 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 250 "data/maps/MossdeepCity/scripts.pory"
# 156 "data/maps/MossdeepCity/scripts.pory"
# 251 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 252 "data/maps/MossdeepCity/scripts.pory"
# 157 "data/maps/MossdeepCity/scripts.pory"
# 253 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 254 "data/maps/MossdeepCity/scripts.pory"
# 158 "data/maps/MossdeepCity/scripts.pory"
# 255 "data/maps/MossdeepCity/scripts.pory"
	step_end
# 256 "data/maps/MossdeepCity/scripts.pory"

# 257 "data/maps/MossdeepCity/scripts.pory"
# 161 "data/maps/MossdeepCity/scripts.pory"
# 258 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Movement_Grunt1EnterSpaceCenter:
# 259 "data/maps/MossdeepCity/scripts.pory"
# 162 "data/maps/MossdeepCity/scripts.pory"
# 260 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 261 "data/maps/MossdeepCity/scripts.pory"
# 163 "data/maps/MossdeepCity/scripts.pory"
# 262 "data/maps/MossdeepCity/scripts.pory"
	delay_8
# 263 "data/maps/MossdeepCity/scripts.pory"
# 164 "data/maps/MossdeepCity/scripts.pory"
# 264 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 265 "data/maps/MossdeepCity/scripts.pory"
# 165 "data/maps/MossdeepCity/scripts.pory"
# 266 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 267 "data/maps/MossdeepCity/scripts.pory"
# 166 "data/maps/MossdeepCity/scripts.pory"
# 268 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 269 "data/maps/MossdeepCity/scripts.pory"
# 167 "data/maps/MossdeepCity/scripts.pory"
# 270 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 271 "data/maps/MossdeepCity/scripts.pory"
# 168 "data/maps/MossdeepCity/scripts.pory"
# 272 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 273 "data/maps/MossdeepCity/scripts.pory"
# 169 "data/maps/MossdeepCity/scripts.pory"
# 274 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 275 "data/maps/MossdeepCity/scripts.pory"
# 170 "data/maps/MossdeepCity/scripts.pory"
# 276 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 277 "data/maps/MossdeepCity/scripts.pory"
# 171 "data/maps/MossdeepCity/scripts.pory"
# 278 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 279 "data/maps/MossdeepCity/scripts.pory"
# 172 "data/maps/MossdeepCity/scripts.pory"
# 280 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 281 "data/maps/MossdeepCity/scripts.pory"
# 173 "data/maps/MossdeepCity/scripts.pory"
# 282 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 283 "data/maps/MossdeepCity/scripts.pory"
# 174 "data/maps/MossdeepCity/scripts.pory"
# 284 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 285 "data/maps/MossdeepCity/scripts.pory"
# 175 "data/maps/MossdeepCity/scripts.pory"
# 286 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 287 "data/maps/MossdeepCity/scripts.pory"
# 176 "data/maps/MossdeepCity/scripts.pory"
# 288 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 289 "data/maps/MossdeepCity/scripts.pory"
# 177 "data/maps/MossdeepCity/scripts.pory"
# 290 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 291 "data/maps/MossdeepCity/scripts.pory"
# 178 "data/maps/MossdeepCity/scripts.pory"
# 292 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 293 "data/maps/MossdeepCity/scripts.pory"
# 179 "data/maps/MossdeepCity/scripts.pory"
# 294 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 295 "data/maps/MossdeepCity/scripts.pory"
# 180 "data/maps/MossdeepCity/scripts.pory"
# 296 "data/maps/MossdeepCity/scripts.pory"
	step_end
# 297 "data/maps/MossdeepCity/scripts.pory"

# 298 "data/maps/MossdeepCity/scripts.pory"
# 183 "data/maps/MossdeepCity/scripts.pory"
# 299 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Movement_Grunt2EnterSpaceCenter:
# 300 "data/maps/MossdeepCity/scripts.pory"
# 184 "data/maps/MossdeepCity/scripts.pory"
# 301 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 302 "data/maps/MossdeepCity/scripts.pory"
# 185 "data/maps/MossdeepCity/scripts.pory"
# 303 "data/maps/MossdeepCity/scripts.pory"
	delay_8
# 304 "data/maps/MossdeepCity/scripts.pory"
# 186 "data/maps/MossdeepCity/scripts.pory"
# 305 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 306 "data/maps/MossdeepCity/scripts.pory"
# 187 "data/maps/MossdeepCity/scripts.pory"
# 307 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 308 "data/maps/MossdeepCity/scripts.pory"
# 188 "data/maps/MossdeepCity/scripts.pory"
# 309 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 310 "data/maps/MossdeepCity/scripts.pory"
# 189 "data/maps/MossdeepCity/scripts.pory"
# 311 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 312 "data/maps/MossdeepCity/scripts.pory"
# 190 "data/maps/MossdeepCity/scripts.pory"
# 313 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 314 "data/maps/MossdeepCity/scripts.pory"
# 191 "data/maps/MossdeepCity/scripts.pory"
# 315 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 316 "data/maps/MossdeepCity/scripts.pory"
# 192 "data/maps/MossdeepCity/scripts.pory"
# 317 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 318 "data/maps/MossdeepCity/scripts.pory"
# 193 "data/maps/MossdeepCity/scripts.pory"
# 319 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 320 "data/maps/MossdeepCity/scripts.pory"
# 194 "data/maps/MossdeepCity/scripts.pory"
# 321 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 322 "data/maps/MossdeepCity/scripts.pory"
# 195 "data/maps/MossdeepCity/scripts.pory"
# 323 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 324 "data/maps/MossdeepCity/scripts.pory"
# 196 "data/maps/MossdeepCity/scripts.pory"
# 325 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 326 "data/maps/MossdeepCity/scripts.pory"
# 197 "data/maps/MossdeepCity/scripts.pory"
# 327 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 328 "data/maps/MossdeepCity/scripts.pory"
# 198 "data/maps/MossdeepCity/scripts.pory"
# 329 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 330 "data/maps/MossdeepCity/scripts.pory"
# 199 "data/maps/MossdeepCity/scripts.pory"
# 331 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 332 "data/maps/MossdeepCity/scripts.pory"
# 200 "data/maps/MossdeepCity/scripts.pory"
# 333 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 334 "data/maps/MossdeepCity/scripts.pory"
# 201 "data/maps/MossdeepCity/scripts.pory"
# 335 "data/maps/MossdeepCity/scripts.pory"
	step_end
# 336 "data/maps/MossdeepCity/scripts.pory"

# 337 "data/maps/MossdeepCity/scripts.pory"
# 204 "data/maps/MossdeepCity/scripts.pory"
# 338 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Movement_Grunt3EnterSpaceCenter:
# 339 "data/maps/MossdeepCity/scripts.pory"
# 205 "data/maps/MossdeepCity/scripts.pory"
# 340 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 341 "data/maps/MossdeepCity/scripts.pory"
# 206 "data/maps/MossdeepCity/scripts.pory"
# 342 "data/maps/MossdeepCity/scripts.pory"
	delay_8
# 343 "data/maps/MossdeepCity/scripts.pory"
# 207 "data/maps/MossdeepCity/scripts.pory"
# 344 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 345 "data/maps/MossdeepCity/scripts.pory"
# 208 "data/maps/MossdeepCity/scripts.pory"
# 346 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 347 "data/maps/MossdeepCity/scripts.pory"
# 209 "data/maps/MossdeepCity/scripts.pory"
# 348 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 349 "data/maps/MossdeepCity/scripts.pory"
# 210 "data/maps/MossdeepCity/scripts.pory"
# 350 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 351 "data/maps/MossdeepCity/scripts.pory"
# 211 "data/maps/MossdeepCity/scripts.pory"
# 352 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 353 "data/maps/MossdeepCity/scripts.pory"
# 212 "data/maps/MossdeepCity/scripts.pory"
# 354 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 355 "data/maps/MossdeepCity/scripts.pory"
# 213 "data/maps/MossdeepCity/scripts.pory"
# 356 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 357 "data/maps/MossdeepCity/scripts.pory"
# 214 "data/maps/MossdeepCity/scripts.pory"
# 358 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 359 "data/maps/MossdeepCity/scripts.pory"
# 215 "data/maps/MossdeepCity/scripts.pory"
# 360 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 361 "data/maps/MossdeepCity/scripts.pory"
# 216 "data/maps/MossdeepCity/scripts.pory"
# 362 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 363 "data/maps/MossdeepCity/scripts.pory"
# 217 "data/maps/MossdeepCity/scripts.pory"
# 364 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 365 "data/maps/MossdeepCity/scripts.pory"
# 218 "data/maps/MossdeepCity/scripts.pory"
# 366 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 367 "data/maps/MossdeepCity/scripts.pory"
# 219 "data/maps/MossdeepCity/scripts.pory"
# 368 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 369 "data/maps/MossdeepCity/scripts.pory"
# 220 "data/maps/MossdeepCity/scripts.pory"
# 370 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 371 "data/maps/MossdeepCity/scripts.pory"
# 221 "data/maps/MossdeepCity/scripts.pory"
# 372 "data/maps/MossdeepCity/scripts.pory"
	step_end
# 373 "data/maps/MossdeepCity/scripts.pory"

# 374 "data/maps/MossdeepCity/scripts.pory"
# 224 "data/maps/MossdeepCity/scripts.pory"
# 375 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Movement_Grunt4EnterSpaceCenter:
# 376 "data/maps/MossdeepCity/scripts.pory"
# 225 "data/maps/MossdeepCity/scripts.pory"
# 377 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 378 "data/maps/MossdeepCity/scripts.pory"
# 226 "data/maps/MossdeepCity/scripts.pory"
# 379 "data/maps/MossdeepCity/scripts.pory"
	delay_8
# 380 "data/maps/MossdeepCity/scripts.pory"
# 227 "data/maps/MossdeepCity/scripts.pory"
# 381 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 382 "data/maps/MossdeepCity/scripts.pory"
# 228 "data/maps/MossdeepCity/scripts.pory"
# 383 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 384 "data/maps/MossdeepCity/scripts.pory"
# 229 "data/maps/MossdeepCity/scripts.pory"
# 385 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 386 "data/maps/MossdeepCity/scripts.pory"
# 230 "data/maps/MossdeepCity/scripts.pory"
# 387 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 388 "data/maps/MossdeepCity/scripts.pory"
# 231 "data/maps/MossdeepCity/scripts.pory"
# 389 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 390 "data/maps/MossdeepCity/scripts.pory"
# 232 "data/maps/MossdeepCity/scripts.pory"
# 391 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 392 "data/maps/MossdeepCity/scripts.pory"
# 233 "data/maps/MossdeepCity/scripts.pory"
# 393 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 394 "data/maps/MossdeepCity/scripts.pory"
# 234 "data/maps/MossdeepCity/scripts.pory"
# 395 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 396 "data/maps/MossdeepCity/scripts.pory"
# 235 "data/maps/MossdeepCity/scripts.pory"
# 397 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 398 "data/maps/MossdeepCity/scripts.pory"
# 236 "data/maps/MossdeepCity/scripts.pory"
# 399 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 400 "data/maps/MossdeepCity/scripts.pory"
# 237 "data/maps/MossdeepCity/scripts.pory"
# 401 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 402 "data/maps/MossdeepCity/scripts.pory"
# 238 "data/maps/MossdeepCity/scripts.pory"
# 403 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 404 "data/maps/MossdeepCity/scripts.pory"
# 239 "data/maps/MossdeepCity/scripts.pory"
# 405 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 406 "data/maps/MossdeepCity/scripts.pory"
# 240 "data/maps/MossdeepCity/scripts.pory"
# 407 "data/maps/MossdeepCity/scripts.pory"
	step_end
# 408 "data/maps/MossdeepCity/scripts.pory"

# 409 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_Man::
# 410 "data/maps/MossdeepCity/scripts.pory"
# 244 "data/maps/MossdeepCity/scripts.pory"
# 411 "data/maps/MossdeepCity/scripts.pory"
	lock
# 412 "data/maps/MossdeepCity/scripts.pory"
# 245 "data/maps/MossdeepCity/scripts.pory"
# 413 "data/maps/MossdeepCity/scripts.pory"
	faceplayer
# 414 "data/maps/MossdeepCity/scripts.pory"
# 246 "data/maps/MossdeepCity/scripts.pory"
# 415 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_SurfExhilarating, MSGBOX_DEFAULT
# 416 "data/maps/MossdeepCity/scripts.pory"
# 247 "data/maps/MossdeepCity/scripts.pory"
# 417 "data/maps/MossdeepCity/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 418 "data/maps/MossdeepCity/scripts.pory"
# 248 "data/maps/MossdeepCity/scripts.pory"
# 419 "data/maps/MossdeepCity/scripts.pory"
	waitmovement 0
# 420 "data/maps/MossdeepCity/scripts.pory"
# 249 "data/maps/MossdeepCity/scripts.pory"
# 421 "data/maps/MossdeepCity/scripts.pory"
	release
# 422 "data/maps/MossdeepCity/scripts.pory"
	end
# 423 "data/maps/MossdeepCity/scripts.pory"

# 424 "data/maps/MossdeepCity/scripts.pory"

# 425 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_KingsRockBoy::
# 426 "data/maps/MossdeepCity/scripts.pory"
# 254 "data/maps/MossdeepCity/scripts.pory"
# 427 "data/maps/MossdeepCity/scripts.pory"
	lock
# 428 "data/maps/MossdeepCity/scripts.pory"
# 255 "data/maps/MossdeepCity/scripts.pory"
# 429 "data/maps/MossdeepCity/scripts.pory"
	faceplayer
# 430 "data/maps/MossdeepCity/scripts.pory"
# 256 "data/maps/MossdeepCity/scripts.pory"
# 431 "data/maps/MossdeepCity/scripts.pory"
	goto_if_set FLAG_RECEIVED_KINGS_ROCK, MossdeepCity_EventScript_KingsRockBoy_2
# 432 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_KingsRockBoy_1:
# 433 "data/maps/MossdeepCity/scripts.pory"
# 259 "data/maps/MossdeepCity/scripts.pory"
# 434 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_WantKingsRockStevenGaveMe, MSGBOX_YESNO
# 435 "data/maps/MossdeepCity/scripts.pory"
# 260 "data/maps/MossdeepCity/scripts.pory"
# 436 "data/maps/MossdeepCity/scripts.pory"
	compare VAR_RESULT, NO
# 437 "data/maps/MossdeepCity/scripts.pory"
	goto_if_eq MossdeepCity_EventScript_KingsRockBoy_5
# 438 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_KingsRockBoy_4:
# 439 "data/maps/MossdeepCity/scripts.pory"
# 263 "data/maps/MossdeepCity/scripts.pory"
# 440 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_YouCanKeepIt, MSGBOX_DEFAULT
# 441 "data/maps/MossdeepCity/scripts.pory"
# 264 "data/maps/MossdeepCity/scripts.pory"
# 442 "data/maps/MossdeepCity/scripts.pory"
	giveitem ITEM_KINGS_ROCK
# 443 "data/maps/MossdeepCity/scripts.pory"
# 265 "data/maps/MossdeepCity/scripts.pory"
# 444 "data/maps/MossdeepCity/scripts.pory"
	compare VAR_RESULT, FALSE
# 445 "data/maps/MossdeepCity/scripts.pory"
	goto_if_eq MossdeepCity_EventScript_KingsRockBoy_8
# 446 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_KingsRockBoy_7:
# 447 "data/maps/MossdeepCity/scripts.pory"
# 268 "data/maps/MossdeepCity/scripts.pory"
# 448 "data/maps/MossdeepCity/scripts.pory"
	setflag FLAG_RECEIVED_KINGS_ROCK
# 449 "data/maps/MossdeepCity/scripts.pory"
# 269 "data/maps/MossdeepCity/scripts.pory"
# 450 "data/maps/MossdeepCity/scripts.pory"
	release
# 451 "data/maps/MossdeepCity/scripts.pory"
	end
# 452 "data/maps/MossdeepCity/scripts.pory"

# 453 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_KingsRockBoy_2:
# 454 "data/maps/MossdeepCity/scripts.pory"
# 257 "data/maps/MossdeepCity/scripts.pory"
# 455 "data/maps/MossdeepCity/scripts.pory"
	goto MossdeepCity_EventScript_ReceivedKingsRock
# 456 "data/maps/MossdeepCity/scripts.pory"
	goto MossdeepCity_EventScript_KingsRockBoy_1
# 457 "data/maps/MossdeepCity/scripts.pory"

# 458 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_KingsRockBoy_5:
# 459 "data/maps/MossdeepCity/scripts.pory"
# 261 "data/maps/MossdeepCity/scripts.pory"
# 460 "data/maps/MossdeepCity/scripts.pory"
	goto MossdeepCity_EventScript_DeclineKingsRock
# 461 "data/maps/MossdeepCity/scripts.pory"
	goto MossdeepCity_EventScript_KingsRockBoy_4
# 462 "data/maps/MossdeepCity/scripts.pory"

# 463 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_KingsRockBoy_8:
# 464 "data/maps/MossdeepCity/scripts.pory"
# 266 "data/maps/MossdeepCity/scripts.pory"
# 465 "data/maps/MossdeepCity/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
# 466 "data/maps/MossdeepCity/scripts.pory"
	goto MossdeepCity_EventScript_KingsRockBoy_7
# 467 "data/maps/MossdeepCity/scripts.pory"

# 468 "data/maps/MossdeepCity/scripts.pory"

# 469 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_ReceivedKingsRock::
# 470 "data/maps/MossdeepCity/scripts.pory"
# 274 "data/maps/MossdeepCity/scripts.pory"
# 471 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_StevensHouseOverThere, MSGBOX_DEFAULT
# 472 "data/maps/MossdeepCity/scripts.pory"
# 275 "data/maps/MossdeepCity/scripts.pory"
# 473 "data/maps/MossdeepCity/scripts.pory"
	release
# 474 "data/maps/MossdeepCity/scripts.pory"
	end
# 475 "data/maps/MossdeepCity/scripts.pory"

# 476 "data/maps/MossdeepCity/scripts.pory"

# 477 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_DeclineKingsRock::
# 478 "data/maps/MossdeepCity/scripts.pory"
# 280 "data/maps/MossdeepCity/scripts.pory"
# 479 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_WhatToDoWithWeirdRock, MSGBOX_DEFAULT
# 480 "data/maps/MossdeepCity/scripts.pory"
# 281 "data/maps/MossdeepCity/scripts.pory"
# 481 "data/maps/MossdeepCity/scripts.pory"
	release
# 482 "data/maps/MossdeepCity/scripts.pory"
	end
# 483 "data/maps/MossdeepCity/scripts.pory"

# 484 "data/maps/MossdeepCity/scripts.pory"

# 485 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_BlackBelt::
# 486 "data/maps/MossdeepCity/scripts.pory"
# 286 "data/maps/MossdeepCity/scripts.pory"
# 487 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_SootopolisNewGymLeader, MSGBOX_NPC
# 488 "data/maps/MossdeepCity/scripts.pory"
	end
# 489 "data/maps/MossdeepCity/scripts.pory"

# 490 "data/maps/MossdeepCity/scripts.pory"

# 491 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_Scott::
# 492 "data/maps/MossdeepCity/scripts.pory"
# 291 "data/maps/MossdeepCity/scripts.pory"
# 493 "data/maps/MossdeepCity/scripts.pory"
	lock
# 494 "data/maps/MossdeepCity/scripts.pory"
# 292 "data/maps/MossdeepCity/scripts.pory"
# 495 "data/maps/MossdeepCity/scripts.pory"
	faceplayer
# 496 "data/maps/MossdeepCity/scripts.pory"
# 293 "data/maps/MossdeepCity/scripts.pory"
# 497 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_ScottSomethingWrongWithTown, MSGBOX_DEFAULT
# 498 "data/maps/MossdeepCity/scripts.pory"
# 294 "data/maps/MossdeepCity/scripts.pory"
# 499 "data/maps/MossdeepCity/scripts.pory"
	closemessage
# 500 "data/maps/MossdeepCity/scripts.pory"
# 295 "data/maps/MossdeepCity/scripts.pory"
# 501 "data/maps/MossdeepCity/scripts.pory"
	compare VAR_FACING, DIR_NORTH
# 502 "data/maps/MossdeepCity/scripts.pory"
	goto_if_eq MossdeepCity_EventScript_Scott_2
# 503 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_Scott_1:
# 504 "data/maps/MossdeepCity/scripts.pory"
# 298 "data/maps/MossdeepCity/scripts.pory"
# 505 "data/maps/MossdeepCity/scripts.pory"
	compare VAR_FACING, DIR_EAST
# 506 "data/maps/MossdeepCity/scripts.pory"
	goto_if_eq MossdeepCity_EventScript_Scott_5
# 507 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_Scott_4:
# 508 "data/maps/MossdeepCity/scripts.pory"
# 301 "data/maps/MossdeepCity/scripts.pory"
# 509 "data/maps/MossdeepCity/scripts.pory"
	addvar VAR_SCOTT_STATE, 1
# 510 "data/maps/MossdeepCity/scripts.pory"
# 302 "data/maps/MossdeepCity/scripts.pory"
# 511 "data/maps/MossdeepCity/scripts.pory"
	removeobject LOCALID_MOSSDEEP_SCOTT
# 512 "data/maps/MossdeepCity/scripts.pory"
# 303 "data/maps/MossdeepCity/scripts.pory"
# 513 "data/maps/MossdeepCity/scripts.pory"
	release
# 514 "data/maps/MossdeepCity/scripts.pory"
	end
# 515 "data/maps/MossdeepCity/scripts.pory"

# 516 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_Scott_2:
# 517 "data/maps/MossdeepCity/scripts.pory"
# 296 "data/maps/MossdeepCity/scripts.pory"
# 518 "data/maps/MossdeepCity/scripts.pory"
	call MossdeepCity_EventScript_ScottExitNorth
# 519 "data/maps/MossdeepCity/scripts.pory"
	goto MossdeepCity_EventScript_Scott_1
# 520 "data/maps/MossdeepCity/scripts.pory"

# 521 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_Scott_5:
# 522 "data/maps/MossdeepCity/scripts.pory"
# 299 "data/maps/MossdeepCity/scripts.pory"
# 523 "data/maps/MossdeepCity/scripts.pory"
	call MossdeepCity_EventScript_ScottExitEast
# 524 "data/maps/MossdeepCity/scripts.pory"
	goto MossdeepCity_EventScript_Scott_4
# 525 "data/maps/MossdeepCity/scripts.pory"

# 526 "data/maps/MossdeepCity/scripts.pory"

# 527 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_ScottExitNorth::
# 528 "data/maps/MossdeepCity/scripts.pory"
# 308 "data/maps/MossdeepCity/scripts.pory"
# 529 "data/maps/MossdeepCity/scripts.pory"
	applymovement LOCALID_PLAYER, MossdeepCity_Movement_PlayerWatchScottExit
# 530 "data/maps/MossdeepCity/scripts.pory"
# 309 "data/maps/MossdeepCity/scripts.pory"
# 531 "data/maps/MossdeepCity/scripts.pory"
	applymovement LOCALID_MOSSDEEP_SCOTT, MossdeepCity_Movement_ScottExitNorth
# 532 "data/maps/MossdeepCity/scripts.pory"
# 310 "data/maps/MossdeepCity/scripts.pory"
# 533 "data/maps/MossdeepCity/scripts.pory"
	waitmovement 0
# 534 "data/maps/MossdeepCity/scripts.pory"
	return
# 535 "data/maps/MossdeepCity/scripts.pory"

# 536 "data/maps/MossdeepCity/scripts.pory"

# 537 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_ScottExitEast::
# 538 "data/maps/MossdeepCity/scripts.pory"
# 315 "data/maps/MossdeepCity/scripts.pory"
# 539 "data/maps/MossdeepCity/scripts.pory"
	applymovement LOCALID_PLAYER, MossdeepCity_Movement_PlayerWatchScottExit
# 540 "data/maps/MossdeepCity/scripts.pory"
# 316 "data/maps/MossdeepCity/scripts.pory"
# 541 "data/maps/MossdeepCity/scripts.pory"
	applymovement LOCALID_MOSSDEEP_SCOTT, MossdeepCity_Movement_ScottExitEast
# 542 "data/maps/MossdeepCity/scripts.pory"
# 317 "data/maps/MossdeepCity/scripts.pory"
# 543 "data/maps/MossdeepCity/scripts.pory"
	waitmovement 0
# 544 "data/maps/MossdeepCity/scripts.pory"
	return
# 545 "data/maps/MossdeepCity/scripts.pory"

# 546 "data/maps/MossdeepCity/scripts.pory"

# 547 "data/maps/MossdeepCity/scripts.pory"
# 321 "data/maps/MossdeepCity/scripts.pory"
# 548 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Movement_PlayerWatchScottExit:
# 549 "data/maps/MossdeepCity/scripts.pory"
# 322 "data/maps/MossdeepCity/scripts.pory"
# 550 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 551 "data/maps/MossdeepCity/scripts.pory"
# 323 "data/maps/MossdeepCity/scripts.pory"
# 552 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 553 "data/maps/MossdeepCity/scripts.pory"
# 324 "data/maps/MossdeepCity/scripts.pory"
# 554 "data/maps/MossdeepCity/scripts.pory"
	walk_in_place_faster_left
# 555 "data/maps/MossdeepCity/scripts.pory"
# 325 "data/maps/MossdeepCity/scripts.pory"
# 556 "data/maps/MossdeepCity/scripts.pory"
	step_end
# 557 "data/maps/MossdeepCity/scripts.pory"

# 558 "data/maps/MossdeepCity/scripts.pory"
# 328 "data/maps/MossdeepCity/scripts.pory"
# 559 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Movement_ScottExitNorth:
# 560 "data/maps/MossdeepCity/scripts.pory"
# 329 "data/maps/MossdeepCity/scripts.pory"
# 561 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 562 "data/maps/MossdeepCity/scripts.pory"
# 330 "data/maps/MossdeepCity/scripts.pory"
# 563 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 564 "data/maps/MossdeepCity/scripts.pory"
# 331 "data/maps/MossdeepCity/scripts.pory"
# 565 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 566 "data/maps/MossdeepCity/scripts.pory"
# 332 "data/maps/MossdeepCity/scripts.pory"
# 567 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 568 "data/maps/MossdeepCity/scripts.pory"
# 333 "data/maps/MossdeepCity/scripts.pory"
# 569 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 570 "data/maps/MossdeepCity/scripts.pory"
# 334 "data/maps/MossdeepCity/scripts.pory"
# 571 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 572 "data/maps/MossdeepCity/scripts.pory"
# 335 "data/maps/MossdeepCity/scripts.pory"
# 573 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 574 "data/maps/MossdeepCity/scripts.pory"
# 336 "data/maps/MossdeepCity/scripts.pory"
# 575 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 576 "data/maps/MossdeepCity/scripts.pory"
# 337 "data/maps/MossdeepCity/scripts.pory"
# 577 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 578 "data/maps/MossdeepCity/scripts.pory"
# 338 "data/maps/MossdeepCity/scripts.pory"
# 579 "data/maps/MossdeepCity/scripts.pory"
	step_end
# 580 "data/maps/MossdeepCity/scripts.pory"

# 581 "data/maps/MossdeepCity/scripts.pory"
# 341 "data/maps/MossdeepCity/scripts.pory"
# 582 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Movement_ScottExitEast:
# 583 "data/maps/MossdeepCity/scripts.pory"
# 342 "data/maps/MossdeepCity/scripts.pory"
# 584 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 585 "data/maps/MossdeepCity/scripts.pory"
# 343 "data/maps/MossdeepCity/scripts.pory"
# 586 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 587 "data/maps/MossdeepCity/scripts.pory"
# 344 "data/maps/MossdeepCity/scripts.pory"
# 588 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 589 "data/maps/MossdeepCity/scripts.pory"
# 345 "data/maps/MossdeepCity/scripts.pory"
# 590 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 591 "data/maps/MossdeepCity/scripts.pory"
# 346 "data/maps/MossdeepCity/scripts.pory"
# 592 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 593 "data/maps/MossdeepCity/scripts.pory"
# 347 "data/maps/MossdeepCity/scripts.pory"
# 594 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 595 "data/maps/MossdeepCity/scripts.pory"
# 348 "data/maps/MossdeepCity/scripts.pory"
# 596 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 597 "data/maps/MossdeepCity/scripts.pory"
# 349 "data/maps/MossdeepCity/scripts.pory"
# 598 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 599 "data/maps/MossdeepCity/scripts.pory"
# 350 "data/maps/MossdeepCity/scripts.pory"
# 600 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 601 "data/maps/MossdeepCity/scripts.pory"
# 351 "data/maps/MossdeepCity/scripts.pory"
# 602 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 603 "data/maps/MossdeepCity/scripts.pory"
# 352 "data/maps/MossdeepCity/scripts.pory"
# 604 "data/maps/MossdeepCity/scripts.pory"
	step_end
# 605 "data/maps/MossdeepCity/scripts.pory"

# 606 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_WantKingsRockStevenGaveMe::
# 607 "data/maps/MossdeepCity/scripts.pory"
# 355 "data/maps/MossdeepCity/scripts.pory"
# 608 "data/maps/MossdeepCity/scripts.pory"
	.string "I got this from STEVEN, but I don't\n"
# 609 "data/maps/MossdeepCity/scripts.pory"
	.string "know what it's good for.\p"
# 610 "data/maps/MossdeepCity/scripts.pory"
	.string "I think it's called KING'S ROCK.\n"
# 611 "data/maps/MossdeepCity/scripts.pory"
	.string "Do you want it?$"
# 612 "data/maps/MossdeepCity/scripts.pory"

# 613 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_YouCanKeepIt::
# 614 "data/maps/MossdeepCity/scripts.pory"
# 362 "data/maps/MossdeepCity/scripts.pory"
# 615 "data/maps/MossdeepCity/scripts.pory"
	.string "Why would you want it?\n"
# 616 "data/maps/MossdeepCity/scripts.pory"
	.string "You're weird.\p"
# 617 "data/maps/MossdeepCity/scripts.pory"
	.string "You can keep it, but keep it a secret\n"
# 618 "data/maps/MossdeepCity/scripts.pory"
	.string "from STEVEN.$"
# 619 "data/maps/MossdeepCity/scripts.pory"

# 620 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_StevensHouseOverThere::
# 621 "data/maps/MossdeepCity/scripts.pory"
# 369 "data/maps/MossdeepCity/scripts.pory"
# 622 "data/maps/MossdeepCity/scripts.pory"
	.string "STEVEN's house is right over there!$"
# 623 "data/maps/MossdeepCity/scripts.pory"

# 624 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_WhatToDoWithWeirdRock::
# 625 "data/maps/MossdeepCity/scripts.pory"
# 373 "data/maps/MossdeepCity/scripts.pory"
# 626 "data/maps/MossdeepCity/scripts.pory"
	.string "Yeah, you think so, too! What are you\n"
# 627 "data/maps/MossdeepCity/scripts.pory"
	.string "supposed to do with some weird rock?$"
# 628 "data/maps/MossdeepCity/scripts.pory"

# 629 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_WailmerWatching::
# 630 "data/maps/MossdeepCity/scripts.pory"
# 378 "data/maps/MossdeepCity/scripts.pory"
# 631 "data/maps/MossdeepCity/scripts.pory"
	.string "Around MOSSDEEP, you can see wild\n"
# 632 "data/maps/MossdeepCity/scripts.pory"
	.string "WAILMER.\p"
# 633 "data/maps/MossdeepCity/scripts.pory"
	.string "It's called, uh…\n"
# 634 "data/maps/MossdeepCity/scripts.pory"
	.string "What was it now…\p"
# 635 "data/maps/MossdeepCity/scripts.pory"
	.string "WAI, WAI, WAI…\p"
# 636 "data/maps/MossdeepCity/scripts.pory"
	.string "WAILMER watching!$"
# 637 "data/maps/MossdeepCity/scripts.pory"

# 638 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_SpaceCenterReceivedLetter::
# 639 "data/maps/MossdeepCity/scripts.pory"
# 387 "data/maps/MossdeepCity/scripts.pory"
# 640 "data/maps/MossdeepCity/scripts.pory"
	.string "The island's SPACE CENTER has been\n"
# 641 "data/maps/MossdeepCity/scripts.pory"
	.string "launching huge rockets.\p"
# 642 "data/maps/MossdeepCity/scripts.pory"
	.string "There's been some kind of an uproar\n"
# 643 "data/maps/MossdeepCity/scripts.pory"
	.string "over a letter they received recently.$"
# 644 "data/maps/MossdeepCity/scripts.pory"

# 645 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_SpaceCenterLaunchingRockets::
# 646 "data/maps/MossdeepCity/scripts.pory"
# 394 "data/maps/MossdeepCity/scripts.pory"
# 647 "data/maps/MossdeepCity/scripts.pory"
	.string "The island's SPACE CENTER has been\n"
# 648 "data/maps/MossdeepCity/scripts.pory"
	.string "launching huge rockets.$"
# 649 "data/maps/MossdeepCity/scripts.pory"

# 650 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_MossdeepTargetedByMagma::
# 651 "data/maps/MossdeepCity/scripts.pory"
# 399 "data/maps/MossdeepCity/scripts.pory"
# 652 "data/maps/MossdeepCity/scripts.pory"
	.string "I heard from a SAILOR buddy that\n"
# 653 "data/maps/MossdeepCity/scripts.pory"
	.string "TEAM AQUA set up shop in LILYCOVE.\p"
# 654 "data/maps/MossdeepCity/scripts.pory"
	.string "I also heard that someone came along\n"
# 655 "data/maps/MossdeepCity/scripts.pory"
	.string "and wiped the floor with them!\p"
# 656 "data/maps/MossdeepCity/scripts.pory"
	.string "But MOSSDEEP here's been targeted\n"
# 657 "data/maps/MossdeepCity/scripts.pory"
	.string "by that TEAM MAGMA.\p"
# 658 "data/maps/MossdeepCity/scripts.pory"
	.string "If you want to know what they're up to,\n"
# 659 "data/maps/MossdeepCity/scripts.pory"
	.string "go visit the SPACE CENTER.$"
# 660 "data/maps/MossdeepCity/scripts.pory"

# 661 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_FeelReliefOnLand::
# 662 "data/maps/MossdeepCity/scripts.pory"
# 410 "data/maps/MossdeepCity/scripts.pory"
# 663 "data/maps/MossdeepCity/scripts.pory"
	.string "I'm a SAILOR, so the sea's obviously\n"
# 664 "data/maps/MossdeepCity/scripts.pory"
	.string "more important to me.\p"
# 665 "data/maps/MossdeepCity/scripts.pory"
	.string "But you know? When I get back on land\n"
# 666 "data/maps/MossdeepCity/scripts.pory"
	.string "after a long voyage, I do feel relief!$"
# 667 "data/maps/MossdeepCity/scripts.pory"

# 668 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_NiceIfWorldCoveredByFlowers::
# 669 "data/maps/MossdeepCity/scripts.pory"
# 417 "data/maps/MossdeepCity/scripts.pory"
# 670 "data/maps/MossdeepCity/scripts.pory"
	.string "Wouldn't it be nice?\p"
# 671 "data/maps/MossdeepCity/scripts.pory"
	.string "If the whole world was covered in\n"
# 672 "data/maps/MossdeepCity/scripts.pory"
	.string "plants and flowers like this island?$"
# 673 "data/maps/MossdeepCity/scripts.pory"

# 674 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_LifeNeedsSeaToLive::
# 675 "data/maps/MossdeepCity/scripts.pory"
# 423 "data/maps/MossdeepCity/scripts.pory"
# 676 "data/maps/MossdeepCity/scripts.pory"
	.string "All life needs the sea to live, even\n"
# 677 "data/maps/MossdeepCity/scripts.pory"
	.string "though it makes its home on the land.\p"
# 678 "data/maps/MossdeepCity/scripts.pory"
	.string "Life, having run its course, becomes\n"
# 679 "data/maps/MossdeepCity/scripts.pory"
	.string "soil and returns to the land.\p"
# 680 "data/maps/MossdeepCity/scripts.pory"
	.string "And the sea is always connected to\n"
# 681 "data/maps/MossdeepCity/scripts.pory"
	.string "the land.\p"
# 682 "data/maps/MossdeepCity/scripts.pory"
	.string "Yes, like the very shoreline here.$"
# 683 "data/maps/MossdeepCity/scripts.pory"

# 684 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_SurfExhilarating::
# 685 "data/maps/MossdeepCity/scripts.pory"
# 433 "data/maps/MossdeepCity/scripts.pory"
# 686 "data/maps/MossdeepCity/scripts.pory"
	.string "A voyage on a ship is fine.\p"
# 687 "data/maps/MossdeepCity/scripts.pory"
	.string "But crossing the sea with POKéMON\n"
# 688 "data/maps/MossdeepCity/scripts.pory"
	.string "using SURF…\p"
# 689 "data/maps/MossdeepCity/scripts.pory"
	.string "Now that's an exhilarating trip!\n"
# 690 "data/maps/MossdeepCity/scripts.pory"
	.string "Wouldn't you agree, youngster?$"
# 691 "data/maps/MossdeepCity/scripts.pory"

# 692 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_SpecialSpaceCenterRock::
# 693 "data/maps/MossdeepCity/scripts.pory"
# 441 "data/maps/MossdeepCity/scripts.pory"
# 694 "data/maps/MossdeepCity/scripts.pory"
	.string "This rock has a special meaning to\n"
# 695 "data/maps/MossdeepCity/scripts.pory"
	.string "the people at the SPACE CENTER.\p"
# 696 "data/maps/MossdeepCity/scripts.pory"
	.string "They put it here as their wish for\n"
# 697 "data/maps/MossdeepCity/scripts.pory"
	.string "their rockets to fly safely.\p"
# 698 "data/maps/MossdeepCity/scripts.pory"
	.string "When you make a wish, what do you use?\n"
# 699 "data/maps/MossdeepCity/scripts.pory"
	.string "Do you wish upon a star?\p"
# 700 "data/maps/MossdeepCity/scripts.pory"
	.string "I use a wish tag to make it happen.\n"
# 701 "data/maps/MossdeepCity/scripts.pory"
	.string "That's what I do.$"
# 702 "data/maps/MossdeepCity/scripts.pory"

# 703 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_ItsAWhiteRock::
# 704 "data/maps/MossdeepCity/scripts.pory"
# 452 "data/maps/MossdeepCity/scripts.pory"
# 705 "data/maps/MossdeepCity/scripts.pory"
	.string "It's a white rock.$"
# 706 "data/maps/MossdeepCity/scripts.pory"

# 707 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_GymSign::
# 708 "data/maps/MossdeepCity/scripts.pory"
# 456 "data/maps/MossdeepCity/scripts.pory"
# 709 "data/maps/MossdeepCity/scripts.pory"
	.string "MOSSDEEP CITY POKéMON GYM\n"
# 710 "data/maps/MossdeepCity/scripts.pory"
	.string "LEADERS: LIZA & TATE\p"
# 711 "data/maps/MossdeepCity/scripts.pory"
	.string "“The mystic combination!”$"
# 712 "data/maps/MossdeepCity/scripts.pory"

# 713 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_CitySign::
# 714 "data/maps/MossdeepCity/scripts.pory"
# 462 "data/maps/MossdeepCity/scripts.pory"
# 715 "data/maps/MossdeepCity/scripts.pory"
	.string "MOSSDEEP CITY\n"
# 716 "data/maps/MossdeepCity/scripts.pory"
	.string "“Our slogan: Cherish POKéMON!”$"
# 717 "data/maps/MossdeepCity/scripts.pory"

# 718 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_SpaceCenterSign::
# 719 "data/maps/MossdeepCity/scripts.pory"
# 467 "data/maps/MossdeepCity/scripts.pory"
# 720 "data/maps/MossdeepCity/scripts.pory"
	.string "MOSSDEEP SPACE CENTER\n"
# 721 "data/maps/MossdeepCity/scripts.pory"
	.string "“The closest place to space.”$"
# 722 "data/maps/MossdeepCity/scripts.pory"

# 723 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_ScottSomethingWrongWithTown::
# 724 "data/maps/MossdeepCity/scripts.pory"
# 472 "data/maps/MossdeepCity/scripts.pory"
# 725 "data/maps/MossdeepCity/scripts.pory"
	.string "SCOTT: {PLAYER}{KUN}, feeling good?\n"
# 726 "data/maps/MossdeepCity/scripts.pory"
	.string "I'm doing great!\p"
# 727 "data/maps/MossdeepCity/scripts.pory"
	.string "I'd heard MOSSDEEP's GYM LEADER is\n"
# 728 "data/maps/MossdeepCity/scripts.pory"
	.string "pretty strong, so I decided to come\l"
# 729 "data/maps/MossdeepCity/scripts.pory"
	.string "take a look-see for myself.\p"
# 730 "data/maps/MossdeepCity/scripts.pory"
	.string "But there's something wrong about\n"
# 731 "data/maps/MossdeepCity/scripts.pory"
	.string "this town.\p"
# 732 "data/maps/MossdeepCity/scripts.pory"
	.string "People are going on about a warning\n"
# 733 "data/maps/MossdeepCity/scripts.pory"
	.string "letter and the SPACE CENTER…\p"
# 734 "data/maps/MossdeepCity/scripts.pory"
	.string "I don't think it concerns me in any\n"
# 735 "data/maps/MossdeepCity/scripts.pory"
	.string "way, though.$"
# 736 "data/maps/MossdeepCity/scripts.pory"

# 737 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_SootopolisNewGymLeader::
# 738 "data/maps/MossdeepCity/scripts.pory"
# 486 "data/maps/MossdeepCity/scripts.pory"
# 739 "data/maps/MossdeepCity/scripts.pory"
	.string "Ahh… It feels great letting the waves\n"
# 740 "data/maps/MossdeepCity/scripts.pory"
	.string "wash over my feet…\p"
# 741 "data/maps/MossdeepCity/scripts.pory"
	.string "Speaking of the waves, you know that\n"
# 742 "data/maps/MossdeepCity/scripts.pory"
	.string "island city SOOTOPOLIS?\p"
# 743 "data/maps/MossdeepCity/scripts.pory"
	.string "I think the GYM there had a new\n"
# 744 "data/maps/MossdeepCity/scripts.pory"
	.string "LEADER come in.\p"
# 745 "data/maps/MossdeepCity/scripts.pory"
	.string "People tell me the new LEADER once\n"
# 746 "data/maps/MossdeepCity/scripts.pory"
	.string "mentored WALLACE.$"
