# 1 "data/maps/MtChimney/scripts.pory"

# 2 "data/maps/MtChimney/scripts.pory"
MtChimney_MapScripts::
# 3 "data/maps/MtChimney/scripts.pory"
# 2 "data/maps/MtChimney/scripts.pory"
# 4 "data/maps/MtChimney/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, MtChimney_OnResume
# 5 "data/maps/MtChimney/scripts.pory"
# 3 "data/maps/MtChimney/scripts.pory"
# 6 "data/maps/MtChimney/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MtChimney_OnTransition
# 7 "data/maps/MtChimney/scripts.pory"
	.byte 0
# 8 "data/maps/MtChimney/scripts.pory"

# 9 "data/maps/MtChimney/scripts.pory"

# 10 "data/maps/MtChimney/scripts.pory"
MtChimney_OnTransition::
# 11 "data/maps/MtChimney/scripts.pory"
# 7 "data/maps/MtChimney/scripts.pory"
# 12 "data/maps/MtChimney/scripts.pory"
	setvar VAR_JAGGED_PASS_ASH_WEATHER, 1
# 13 "data/maps/MtChimney/scripts.pory"
	end
# 14 "data/maps/MtChimney/scripts.pory"

# 15 "data/maps/MtChimney/scripts.pory"

# 16 "data/maps/MtChimney/scripts.pory"
MtChimney_OnResume::
# 17 "data/maps/MtChimney/scripts.pory"
# 12 "data/maps/MtChimney/scripts.pory"
# 18 "data/maps/MtChimney/scripts.pory"
	setstepcallback STEP_CB_ASH
# 19 "data/maps/MtChimney/scripts.pory"
	end
# 20 "data/maps/MtChimney/scripts.pory"

# 21 "data/maps/MtChimney/scripts.pory"

# 22 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Archie::
# 23 "data/maps/MtChimney/scripts.pory"
# 17 "data/maps/MtChimney/scripts.pory"
# 24 "data/maps/MtChimney/scripts.pory"
	lock
# 25 "data/maps/MtChimney/scripts.pory"
# 18 "data/maps/MtChimney/scripts.pory"
# 26 "data/maps/MtChimney/scripts.pory"
	faceplayer
# 27 "data/maps/MtChimney/scripts.pory"
# 19 "data/maps/MtChimney/scripts.pory"
# 28 "data/maps/MtChimney/scripts.pory"
	goto_if_unset FLAG_EVIL_LEADER_PLEASE_STOP, MtChimney_EventScript_Archie_2
# 29 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Archie_1:
# 30 "data/maps/MtChimney/scripts.pory"
# 22 "data/maps/MtChimney/scripts.pory"
# 31 "data/maps/MtChimney/scripts.pory"
	goto_if_set FLAG_EVIL_LEADER_PLEASE_STOP, MtChimney_EventScript_Archie_5
# 32 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Archie_4:
# 33 "data/maps/MtChimney/scripts.pory"
# 25 "data/maps/MtChimney/scripts.pory"
# 34 "data/maps/MtChimney/scripts.pory"
	closemessage
# 35 "data/maps/MtChimney/scripts.pory"
# 26 "data/maps/MtChimney/scripts.pory"
# 36 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MT_CHIMNEY_ARCHIE, Common_Movement_FaceOriginalDirection
# 37 "data/maps/MtChimney/scripts.pory"
# 27 "data/maps/MtChimney/scripts.pory"
# 38 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 39 "data/maps/MtChimney/scripts.pory"
# 28 "data/maps/MtChimney/scripts.pory"
# 40 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_EVIL_LEADER_PLEASE_STOP
# 41 "data/maps/MtChimney/scripts.pory"
# 29 "data/maps/MtChimney/scripts.pory"
# 42 "data/maps/MtChimney/scripts.pory"
	release
# 43 "data/maps/MtChimney/scripts.pory"
	end
# 44 "data/maps/MtChimney/scripts.pory"

# 45 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Archie_2:
# 46 "data/maps/MtChimney/scripts.pory"
# 20 "data/maps/MtChimney/scripts.pory"
# 47 "data/maps/MtChimney/scripts.pory"
	call MtChimney_EventScript_ArchieGoStopTeamMagma
# 48 "data/maps/MtChimney/scripts.pory"
	goto MtChimney_EventScript_Archie_1
# 49 "data/maps/MtChimney/scripts.pory"

# 50 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Archie_5:
# 51 "data/maps/MtChimney/scripts.pory"
# 23 "data/maps/MtChimney/scripts.pory"
# 52 "data/maps/MtChimney/scripts.pory"
	call MtChimney_EventScript_ArchieBusyFighting
# 53 "data/maps/MtChimney/scripts.pory"
	goto MtChimney_EventScript_Archie_4
# 54 "data/maps/MtChimney/scripts.pory"

# 55 "data/maps/MtChimney/scripts.pory"

# 56 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_ArchieGoStopTeamMagma::
# 57 "data/maps/MtChimney/scripts.pory"
# 34 "data/maps/MtChimney/scripts.pory"
# 58 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ArchieGoStopTeamMagma, MSGBOX_DEFAULT
# 59 "data/maps/MtChimney/scripts.pory"
	return
# 60 "data/maps/MtChimney/scripts.pory"

# 61 "data/maps/MtChimney/scripts.pory"

# 62 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_ArchieBusyFighting::
# 63 "data/maps/MtChimney/scripts.pory"
# 39 "data/maps/MtChimney/scripts.pory"
# 64 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ArchieIHaveMyHandsFull, MSGBOX_DEFAULT
# 65 "data/maps/MtChimney/scripts.pory"
	return
# 66 "data/maps/MtChimney/scripts.pory"

# 67 "data/maps/MtChimney/scripts.pory"

# 68 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Maxie::
# 69 "data/maps/MtChimney/scripts.pory"
# 44 "data/maps/MtChimney/scripts.pory"
# 70 "data/maps/MtChimney/scripts.pory"
	lockall
# 71 "data/maps/MtChimney/scripts.pory"
# 45 "data/maps/MtChimney/scripts.pory"
# 72 "data/maps/MtChimney/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, FALSE
# 73 "data/maps/MtChimney/scripts.pory"
# 46 "data/maps/MtChimney/scripts.pory"
# 74 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MeteoriteWillActivateVolcano, MSGBOX_DEFAULT
# 75 "data/maps/MtChimney/scripts.pory"
# 47 "data/maps/MtChimney/scripts.pory"
# 76 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MT_CHIMNEY_MAXIE, Common_Movement_FacePlayer
# 77 "data/maps/MtChimney/scripts.pory"
# 48 "data/maps/MtChimney/scripts.pory"
# 78 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 79 "data/maps/MtChimney/scripts.pory"
# 49 "data/maps/MtChimney/scripts.pory"
# 80 "data/maps/MtChimney/scripts.pory"
	playse SE_PIN
# 81 "data/maps/MtChimney/scripts.pory"
# 50 "data/maps/MtChimney/scripts.pory"
# 82 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MT_CHIMNEY_MAXIE, Common_Movement_ExclamationMark
# 83 "data/maps/MtChimney/scripts.pory"
# 51 "data/maps/MtChimney/scripts.pory"
# 84 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 85 "data/maps/MtChimney/scripts.pory"
# 52 "data/maps/MtChimney/scripts.pory"
# 86 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MT_CHIMNEY_MAXIE, Common_Movement_Delay48
# 87 "data/maps/MtChimney/scripts.pory"
# 53 "data/maps/MtChimney/scripts.pory"
# 88 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 89 "data/maps/MtChimney/scripts.pory"
# 54 "data/maps/MtChimney/scripts.pory"
# 90 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MaxieIntro, MSGBOX_DEFAULT
# 91 "data/maps/MtChimney/scripts.pory"
# 55 "data/maps/MtChimney/scripts.pory"
# 92 "data/maps/MtChimney/scripts.pory"
	trainerbattle_no_intro TRAINER_MAXIE_MT_CHIMNEY, MtChimney_Text_MaxieDefeat
# 93 "data/maps/MtChimney/scripts.pory"
# 56 "data/maps/MtChimney/scripts.pory"
# 94 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MaxieYouHaventSeenLastOfMagma, MSGBOX_DEFAULT
# 95 "data/maps/MtChimney/scripts.pory"
# 57 "data/maps/MtChimney/scripts.pory"
# 96 "data/maps/MtChimney/scripts.pory"
	closemessage
# 97 "data/maps/MtChimney/scripts.pory"
# 58 "data/maps/MtChimney/scripts.pory"
# 98 "data/maps/MtChimney/scripts.pory"
	delay 30
# 99 "data/maps/MtChimney/scripts.pory"
# 59 "data/maps/MtChimney/scripts.pory"
# 100 "data/maps/MtChimney/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 101 "data/maps/MtChimney/scripts.pory"
# 60 "data/maps/MtChimney/scripts.pory"
# 102 "data/maps/MtChimney/scripts.pory"
	removeobject LOCALID_MT_CHIMNEY_MAXIE
# 103 "data/maps/MtChimney/scripts.pory"
# 61 "data/maps/MtChimney/scripts.pory"
# 104 "data/maps/MtChimney/scripts.pory"
	removeobject LOCALID_MT_CHIMNEY_MAGMA_GRUNT_1
# 105 "data/maps/MtChimney/scripts.pory"
# 62 "data/maps/MtChimney/scripts.pory"
# 106 "data/maps/MtChimney/scripts.pory"
	removeobject LOCALID_MT_CHIMNEY_TABITHA
# 107 "data/maps/MtChimney/scripts.pory"
# 63 "data/maps/MtChimney/scripts.pory"
# 108 "data/maps/MtChimney/scripts.pory"
	removeobject LOCALID_MT_CHIMNEY_MAGMA_GRUNT_2
# 109 "data/maps/MtChimney/scripts.pory"
# 64 "data/maps/MtChimney/scripts.pory"
# 110 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_HIDE_MT_CHIMNEY_TEAM_MAGMA
# 111 "data/maps/MtChimney/scripts.pory"
# 65 "data/maps/MtChimney/scripts.pory"
# 112 "data/maps/MtChimney/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 113 "data/maps/MtChimney/scripts.pory"
# 66 "data/maps/MtChimney/scripts.pory"
# 114 "data/maps/MtChimney/scripts.pory"
	setobjectxyperm LOCALID_MT_CHIMNEY_ARCHIE, 10, 12
# 115 "data/maps/MtChimney/scripts.pory"
# 67 "data/maps/MtChimney/scripts.pory"
# 116 "data/maps/MtChimney/scripts.pory"
	addobject LOCALID_MT_CHIMNEY_ARCHIE
# 117 "data/maps/MtChimney/scripts.pory"
# 68 "data/maps/MtChimney/scripts.pory"
# 118 "data/maps/MtChimney/scripts.pory"
	compare VAR_FACING, DIR_EAST
# 119 "data/maps/MtChimney/scripts.pory"
	goto_if_eq MtChimney_EventScript_Maxie_2
# 120 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Maxie_1:
# 121 "data/maps/MtChimney/scripts.pory"
# 71 "data/maps/MtChimney/scripts.pory"
# 122 "data/maps/MtChimney/scripts.pory"
	compare VAR_FACING, DIR_NORTH
# 123 "data/maps/MtChimney/scripts.pory"
	goto_if_eq MtChimney_EventScript_Maxie_5
# 124 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Maxie_4:
# 125 "data/maps/MtChimney/scripts.pory"
# 74 "data/maps/MtChimney/scripts.pory"
# 126 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 127 "data/maps/MtChimney/scripts.pory"
# 75 "data/maps/MtChimney/scripts.pory"
# 128 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 129 "data/maps/MtChimney/scripts.pory"
# 76 "data/maps/MtChimney/scripts.pory"
# 130 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ArchieThankYou, MSGBOX_DEFAULT
# 131 "data/maps/MtChimney/scripts.pory"
# 77 "data/maps/MtChimney/scripts.pory"
# 132 "data/maps/MtChimney/scripts.pory"
	closemessage
# 133 "data/maps/MtChimney/scripts.pory"
# 78 "data/maps/MtChimney/scripts.pory"
# 134 "data/maps/MtChimney/scripts.pory"
	compare VAR_FACING, DIR_EAST
# 135 "data/maps/MtChimney/scripts.pory"
	goto_if_eq MtChimney_EventScript_Maxie_8
# 136 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Maxie_7:
# 137 "data/maps/MtChimney/scripts.pory"
# 81 "data/maps/MtChimney/scripts.pory"
# 138 "data/maps/MtChimney/scripts.pory"
	compare VAR_FACING, DIR_NORTH
# 139 "data/maps/MtChimney/scripts.pory"
	goto_if_eq MtChimney_EventScript_Maxie_11
# 140 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Maxie_10:
# 141 "data/maps/MtChimney/scripts.pory"
# 84 "data/maps/MtChimney/scripts.pory"
# 142 "data/maps/MtChimney/scripts.pory"
	removeobject LOCALID_MT_CHIMNEY_ARCHIE
# 143 "data/maps/MtChimney/scripts.pory"
# 85 "data/maps/MtChimney/scripts.pory"
# 144 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_HIDE_MT_CHIMNEY_TEAM_AQUA
# 145 "data/maps/MtChimney/scripts.pory"
# 86 "data/maps/MtChimney/scripts.pory"
# 146 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_DEFEATED_EVIL_TEAM_MT_CHIMNEY
# 147 "data/maps/MtChimney/scripts.pory"
# 87 "data/maps/MtChimney/scripts.pory"
# 148 "data/maps/MtChimney/scripts.pory"
	clearflag FLAG_HIDE_FALLARBOR_HOUSE_PROF_COZMO
# 149 "data/maps/MtChimney/scripts.pory"
# 88 "data/maps/MtChimney/scripts.pory"
# 150 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_HIDE_METEOR_FALLS_1F_1R_COZMO
# 151 "data/maps/MtChimney/scripts.pory"
# 89 "data/maps/MtChimney/scripts.pory"
# 152 "data/maps/MtChimney/scripts.pory"
	clearflag FLAG_HIDE_MT_CHIMNEY_LAVA_COOKIE_LADY
# 153 "data/maps/MtChimney/scripts.pory"
# 90 "data/maps/MtChimney/scripts.pory"
# 154 "data/maps/MtChimney/scripts.pory"
	releaseall
# 155 "data/maps/MtChimney/scripts.pory"
	end
# 156 "data/maps/MtChimney/scripts.pory"

# 157 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Maxie_2:
# 158 "data/maps/MtChimney/scripts.pory"
# 69 "data/maps/MtChimney/scripts.pory"
# 159 "data/maps/MtChimney/scripts.pory"
	call MtChimney_EventScript_ArchieApproachPlayerEast
# 160 "data/maps/MtChimney/scripts.pory"
	goto MtChimney_EventScript_Maxie_1
# 161 "data/maps/MtChimney/scripts.pory"

# 162 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Maxie_5:
# 163 "data/maps/MtChimney/scripts.pory"
# 72 "data/maps/MtChimney/scripts.pory"
# 164 "data/maps/MtChimney/scripts.pory"
	call MtChimney_EventScript_ArchieApproachPlayerNorth
# 165 "data/maps/MtChimney/scripts.pory"
	goto MtChimney_EventScript_Maxie_4
# 166 "data/maps/MtChimney/scripts.pory"

# 167 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Maxie_8:
# 168 "data/maps/MtChimney/scripts.pory"
# 79 "data/maps/MtChimney/scripts.pory"
# 169 "data/maps/MtChimney/scripts.pory"
	call MtChimney_EventScript_ArchieExitEast
# 170 "data/maps/MtChimney/scripts.pory"
	goto MtChimney_EventScript_Maxie_7
# 171 "data/maps/MtChimney/scripts.pory"

# 172 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Maxie_11:
# 173 "data/maps/MtChimney/scripts.pory"
# 82 "data/maps/MtChimney/scripts.pory"
# 174 "data/maps/MtChimney/scripts.pory"
	call MtChimney_EventScript_ArchieExitNorth
# 175 "data/maps/MtChimney/scripts.pory"
	goto MtChimney_EventScript_Maxie_10
# 176 "data/maps/MtChimney/scripts.pory"

# 177 "data/maps/MtChimney/scripts.pory"

# 178 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_ArchieApproachPlayerEast::
# 179 "data/maps/MtChimney/scripts.pory"
# 95 "data/maps/MtChimney/scripts.pory"
# 180 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MT_CHIMNEY_ARCHIE, MtChimney_Movement_ArchieApproachPlayerEast
# 181 "data/maps/MtChimney/scripts.pory"
# 96 "data/maps/MtChimney/scripts.pory"
# 182 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 183 "data/maps/MtChimney/scripts.pory"
	return
# 184 "data/maps/MtChimney/scripts.pory"

# 185 "data/maps/MtChimney/scripts.pory"

# 186 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_ArchieApproachPlayerNorth::
# 187 "data/maps/MtChimney/scripts.pory"
# 101 "data/maps/MtChimney/scripts.pory"
# 188 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MT_CHIMNEY_ARCHIE, MtChimney_Movement_ArchieApproachPlayerNorth
# 189 "data/maps/MtChimney/scripts.pory"
# 102 "data/maps/MtChimney/scripts.pory"
# 190 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 191 "data/maps/MtChimney/scripts.pory"
	return
# 192 "data/maps/MtChimney/scripts.pory"

# 193 "data/maps/MtChimney/scripts.pory"

# 194 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_ArchieExitEast::
# 195 "data/maps/MtChimney/scripts.pory"
# 107 "data/maps/MtChimney/scripts.pory"
# 196 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MT_CHIMNEY_ARCHIE, MtChimney_Movement_ArchieExitEast
# 197 "data/maps/MtChimney/scripts.pory"
# 108 "data/maps/MtChimney/scripts.pory"
# 198 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 199 "data/maps/MtChimney/scripts.pory"
	return
# 200 "data/maps/MtChimney/scripts.pory"

# 201 "data/maps/MtChimney/scripts.pory"

# 202 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_ArchieExitNorth::
# 203 "data/maps/MtChimney/scripts.pory"
# 113 "data/maps/MtChimney/scripts.pory"
# 204 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MT_CHIMNEY_ARCHIE, MtChimney_Movement_ArchieExitNorth
# 205 "data/maps/MtChimney/scripts.pory"
# 114 "data/maps/MtChimney/scripts.pory"
# 206 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 207 "data/maps/MtChimney/scripts.pory"
	return
# 208 "data/maps/MtChimney/scripts.pory"

# 209 "data/maps/MtChimney/scripts.pory"

# 210 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_LavaCookieLady::
# 211 "data/maps/MtChimney/scripts.pory"
# 119 "data/maps/MtChimney/scripts.pory"
# 212 "data/maps/MtChimney/scripts.pory"
	lock
# 213 "data/maps/MtChimney/scripts.pory"
# 120 "data/maps/MtChimney/scripts.pory"
# 214 "data/maps/MtChimney/scripts.pory"
	faceplayer
# 215 "data/maps/MtChimney/scripts.pory"
# 121 "data/maps/MtChimney/scripts.pory"
# 216 "data/maps/MtChimney/scripts.pory"
	showmoneybox 0, 0
# 217 "data/maps/MtChimney/scripts.pory"
# 122 "data/maps/MtChimney/scripts.pory"
# 218 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_LavaCookiesJust200, MSGBOX_YESNO
# 219 "data/maps/MtChimney/scripts.pory"
# 123 "data/maps/MtChimney/scripts.pory"
# 220 "data/maps/MtChimney/scripts.pory"
	compare VAR_RESULT, NO
# 221 "data/maps/MtChimney/scripts.pory"
	goto_if_eq MtChimney_EventScript_LavaCookieLady_2
# 222 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_LavaCookieLady_1:
# 223 "data/maps/MtChimney/scripts.pory"
# 126 "data/maps/MtChimney/scripts.pory"
# 224 "data/maps/MtChimney/scripts.pory"
	checkmoney 200
# 225 "data/maps/MtChimney/scripts.pory"
# 127 "data/maps/MtChimney/scripts.pory"
# 226 "data/maps/MtChimney/scripts.pory"
	compare VAR_RESULT, FALSE
# 227 "data/maps/MtChimney/scripts.pory"
	goto_if_eq MtChimney_EventScript_LavaCookieLady_5
# 228 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_LavaCookieLady_4:
# 229 "data/maps/MtChimney/scripts.pory"
# 130 "data/maps/MtChimney/scripts.pory"
# 230 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ThankYouDear, MSGBOX_DEFAULT
# 231 "data/maps/MtChimney/scripts.pory"
# 131 "data/maps/MtChimney/scripts.pory"
# 232 "data/maps/MtChimney/scripts.pory"
	checkitemspace ITEM_LAVA_COOKIE
# 233 "data/maps/MtChimney/scripts.pory"
# 132 "data/maps/MtChimney/scripts.pory"
# 234 "data/maps/MtChimney/scripts.pory"
	compare VAR_RESULT, TRUE
# 235 "data/maps/MtChimney/scripts.pory"
	goto_if_eq MtChimney_EventScript_LavaCookieLady_8
# 236 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_LavaCookieLady_7:
# 237 "data/maps/MtChimney/scripts.pory"
# 135 "data/maps/MtChimney/scripts.pory"
# 238 "data/maps/MtChimney/scripts.pory"
	giveitem ITEM_LAVA_COOKIE
# 239 "data/maps/MtChimney/scripts.pory"
# 136 "data/maps/MtChimney/scripts.pory"
# 240 "data/maps/MtChimney/scripts.pory"
	compare VAR_RESULT, FALSE
# 241 "data/maps/MtChimney/scripts.pory"
	goto_if_eq MtChimney_EventScript_LavaCookieLady_11
# 242 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_LavaCookieLady_10:
# 243 "data/maps/MtChimney/scripts.pory"
# 139 "data/maps/MtChimney/scripts.pory"
# 244 "data/maps/MtChimney/scripts.pory"
	hidemoneybox
# 245 "data/maps/MtChimney/scripts.pory"
# 140 "data/maps/MtChimney/scripts.pory"
# 246 "data/maps/MtChimney/scripts.pory"
	release
# 247 "data/maps/MtChimney/scripts.pory"
	end
# 248 "data/maps/MtChimney/scripts.pory"

# 249 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_LavaCookieLady_2:
# 250 "data/maps/MtChimney/scripts.pory"
# 124 "data/maps/MtChimney/scripts.pory"
# 251 "data/maps/MtChimney/scripts.pory"
	goto MtChimney_EventScript_DeclineLavaCookie
# 252 "data/maps/MtChimney/scripts.pory"
	goto MtChimney_EventScript_LavaCookieLady_1
# 253 "data/maps/MtChimney/scripts.pory"

# 254 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_LavaCookieLady_5:
# 255 "data/maps/MtChimney/scripts.pory"
# 128 "data/maps/MtChimney/scripts.pory"
# 256 "data/maps/MtChimney/scripts.pory"
	goto MtChimney_EventScript_NotEnoughMoney
# 257 "data/maps/MtChimney/scripts.pory"
	goto MtChimney_EventScript_LavaCookieLady_4
# 258 "data/maps/MtChimney/scripts.pory"

# 259 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_LavaCookieLady_8:
# 260 "data/maps/MtChimney/scripts.pory"
# 133 "data/maps/MtChimney/scripts.pory"
# 261 "data/maps/MtChimney/scripts.pory"
	call MtChimney_EventScript_RemoveMoney
# 262 "data/maps/MtChimney/scripts.pory"
	goto MtChimney_EventScript_LavaCookieLady_7
# 263 "data/maps/MtChimney/scripts.pory"

# 264 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_LavaCookieLady_11:
# 265 "data/maps/MtChimney/scripts.pory"
# 137 "data/maps/MtChimney/scripts.pory"
# 266 "data/maps/MtChimney/scripts.pory"
	goto MtChimney_EventScript_BagIsFull
# 267 "data/maps/MtChimney/scripts.pory"
	goto MtChimney_EventScript_LavaCookieLady_10
# 268 "data/maps/MtChimney/scripts.pory"

# 269 "data/maps/MtChimney/scripts.pory"

# 270 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BagIsFull::
# 271 "data/maps/MtChimney/scripts.pory"
# 145 "data/maps/MtChimney/scripts.pory"
# 272 "data/maps/MtChimney/scripts.pory"
	msgbox gText_TooBadBagIsFull, MSGBOX_DEFAULT
# 273 "data/maps/MtChimney/scripts.pory"
# 146 "data/maps/MtChimney/scripts.pory"
# 274 "data/maps/MtChimney/scripts.pory"
	hidemoneybox
# 275 "data/maps/MtChimney/scripts.pory"
# 147 "data/maps/MtChimney/scripts.pory"
# 276 "data/maps/MtChimney/scripts.pory"
	release
# 277 "data/maps/MtChimney/scripts.pory"
# 148 "data/maps/MtChimney/scripts.pory"
# 278 "data/maps/MtChimney/scripts.pory"
	end
# 279 "data/maps/MtChimney/scripts.pory"
# 149 "data/maps/MtChimney/scripts.pory"
# 280 "data/maps/MtChimney/scripts.pory"
	hidemoneybox
# 281 "data/maps/MtChimney/scripts.pory"
# 150 "data/maps/MtChimney/scripts.pory"
# 282 "data/maps/MtChimney/scripts.pory"
	giveitem ITEM_LAVA_COOKIE
# 283 "data/maps/MtChimney/scripts.pory"
# 151 "data/maps/MtChimney/scripts.pory"
# 284 "data/maps/MtChimney/scripts.pory"
	compare VAR_RESULT, FALSE
# 285 "data/maps/MtChimney/scripts.pory"
	goto_if_eq MtChimney_EventScript_BagIsFull_2
# 286 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BagIsFull_1:
# 287 "data/maps/MtChimney/scripts.pory"
# 154 "data/maps/MtChimney/scripts.pory"
# 288 "data/maps/MtChimney/scripts.pory"
	release
# 289 "data/maps/MtChimney/scripts.pory"
	end
# 290 "data/maps/MtChimney/scripts.pory"

# 291 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BagIsFull_2:
# 292 "data/maps/MtChimney/scripts.pory"
# 152 "data/maps/MtChimney/scripts.pory"
# 293 "data/maps/MtChimney/scripts.pory"
	goto MtChimney_EventScript_BagIsFull
# 294 "data/maps/MtChimney/scripts.pory"
	goto MtChimney_EventScript_BagIsFull_1
# 295 "data/maps/MtChimney/scripts.pory"

# 296 "data/maps/MtChimney/scripts.pory"

# 297 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BagIsFull::
# 298 "data/maps/MtChimney/scripts.pory"
# 159 "data/maps/MtChimney/scripts.pory"
# 299 "data/maps/MtChimney/scripts.pory"
	msgbox gText_TooBadBagIsFull, MSGBOX_DEFAULT
# 300 "data/maps/MtChimney/scripts.pory"
# 160 "data/maps/MtChimney/scripts.pory"
# 301 "data/maps/MtChimney/scripts.pory"
	release
# 302 "data/maps/MtChimney/scripts.pory"
	end
# 303 "data/maps/MtChimney/scripts.pory"

# 304 "data/maps/MtChimney/scripts.pory"

# 305 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_RemoveMoney::
# 306 "data/maps/MtChimney/scripts.pory"
# 165 "data/maps/MtChimney/scripts.pory"
# 307 "data/maps/MtChimney/scripts.pory"
	removemoney 200
# 308 "data/maps/MtChimney/scripts.pory"
# 166 "data/maps/MtChimney/scripts.pory"
# 309 "data/maps/MtChimney/scripts.pory"
	updatemoneybox
# 310 "data/maps/MtChimney/scripts.pory"
	return
# 311 "data/maps/MtChimney/scripts.pory"

# 312 "data/maps/MtChimney/scripts.pory"

# 313 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_DeclineLavaCookie::
# 314 "data/maps/MtChimney/scripts.pory"
# 171 "data/maps/MtChimney/scripts.pory"
# 315 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_OhFineThen, MSGBOX_DEFAULT
# 316 "data/maps/MtChimney/scripts.pory"
# 172 "data/maps/MtChimney/scripts.pory"
# 317 "data/maps/MtChimney/scripts.pory"
	hidemoneybox
# 318 "data/maps/MtChimney/scripts.pory"
# 173 "data/maps/MtChimney/scripts.pory"
# 319 "data/maps/MtChimney/scripts.pory"
	release
# 320 "data/maps/MtChimney/scripts.pory"
	end
# 321 "data/maps/MtChimney/scripts.pory"

# 322 "data/maps/MtChimney/scripts.pory"

# 323 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_NotEnoughMoney::
# 324 "data/maps/MtChimney/scripts.pory"
# 178 "data/maps/MtChimney/scripts.pory"
# 325 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_YouveNotGotTheMoney, MSGBOX_DEFAULT
# 326 "data/maps/MtChimney/scripts.pory"
# 179 "data/maps/MtChimney/scripts.pory"
# 327 "data/maps/MtChimney/scripts.pory"
	hidemoneybox
# 328 "data/maps/MtChimney/scripts.pory"
# 180 "data/maps/MtChimney/scripts.pory"
# 329 "data/maps/MtChimney/scripts.pory"
	release
# 330 "data/maps/MtChimney/scripts.pory"
	end
# 331 "data/maps/MtChimney/scripts.pory"

# 332 "data/maps/MtChimney/scripts.pory"

# 333 "data/maps/MtChimney/scripts.pory"
# 184 "data/maps/MtChimney/scripts.pory"
# 334 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_ArchieApproachPlayerEast:
# 335 "data/maps/MtChimney/scripts.pory"
# 185 "data/maps/MtChimney/scripts.pory"
# 336 "data/maps/MtChimney/scripts.pory"
	walk_up
# 337 "data/maps/MtChimney/scripts.pory"
# 186 "data/maps/MtChimney/scripts.pory"
# 338 "data/maps/MtChimney/scripts.pory"
	walk_up
# 339 "data/maps/MtChimney/scripts.pory"
# 187 "data/maps/MtChimney/scripts.pory"
# 340 "data/maps/MtChimney/scripts.pory"
	walk_up
# 341 "data/maps/MtChimney/scripts.pory"
# 188 "data/maps/MtChimney/scripts.pory"
# 342 "data/maps/MtChimney/scripts.pory"
	walk_up
# 343 "data/maps/MtChimney/scripts.pory"
# 189 "data/maps/MtChimney/scripts.pory"
# 344 "data/maps/MtChimney/scripts.pory"
	walk_up
# 345 "data/maps/MtChimney/scripts.pory"
# 190 "data/maps/MtChimney/scripts.pory"
# 346 "data/maps/MtChimney/scripts.pory"
	walk_up
# 347 "data/maps/MtChimney/scripts.pory"
# 191 "data/maps/MtChimney/scripts.pory"
# 348 "data/maps/MtChimney/scripts.pory"
	walk_right
# 349 "data/maps/MtChimney/scripts.pory"
# 192 "data/maps/MtChimney/scripts.pory"
# 350 "data/maps/MtChimney/scripts.pory"
	step_end
# 351 "data/maps/MtChimney/scripts.pory"

# 352 "data/maps/MtChimney/scripts.pory"
# 195 "data/maps/MtChimney/scripts.pory"
# 353 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_ArchieExitEast:
# 354 "data/maps/MtChimney/scripts.pory"
# 196 "data/maps/MtChimney/scripts.pory"
# 355 "data/maps/MtChimney/scripts.pory"
	walk_left
# 356 "data/maps/MtChimney/scripts.pory"
# 197 "data/maps/MtChimney/scripts.pory"
# 357 "data/maps/MtChimney/scripts.pory"
	walk_down
# 358 "data/maps/MtChimney/scripts.pory"
# 198 "data/maps/MtChimney/scripts.pory"
# 359 "data/maps/MtChimney/scripts.pory"
	walk_down
# 360 "data/maps/MtChimney/scripts.pory"
# 199 "data/maps/MtChimney/scripts.pory"
# 361 "data/maps/MtChimney/scripts.pory"
	walk_down
# 362 "data/maps/MtChimney/scripts.pory"
# 200 "data/maps/MtChimney/scripts.pory"
# 363 "data/maps/MtChimney/scripts.pory"
	walk_down
# 364 "data/maps/MtChimney/scripts.pory"
# 201 "data/maps/MtChimney/scripts.pory"
# 365 "data/maps/MtChimney/scripts.pory"
	walk_down
# 366 "data/maps/MtChimney/scripts.pory"
# 202 "data/maps/MtChimney/scripts.pory"
# 367 "data/maps/MtChimney/scripts.pory"
	walk_down
# 368 "data/maps/MtChimney/scripts.pory"
# 203 "data/maps/MtChimney/scripts.pory"
# 369 "data/maps/MtChimney/scripts.pory"
	walk_down
# 370 "data/maps/MtChimney/scripts.pory"
# 204 "data/maps/MtChimney/scripts.pory"
# 371 "data/maps/MtChimney/scripts.pory"
	step_end
# 372 "data/maps/MtChimney/scripts.pory"

# 373 "data/maps/MtChimney/scripts.pory"
# 207 "data/maps/MtChimney/scripts.pory"
# 374 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_ArchieApproachPlayerNorth:
# 375 "data/maps/MtChimney/scripts.pory"
# 208 "data/maps/MtChimney/scripts.pory"
# 376 "data/maps/MtChimney/scripts.pory"
	walk_up
# 377 "data/maps/MtChimney/scripts.pory"
# 209 "data/maps/MtChimney/scripts.pory"
# 378 "data/maps/MtChimney/scripts.pory"
	walk_up
# 379 "data/maps/MtChimney/scripts.pory"
# 210 "data/maps/MtChimney/scripts.pory"
# 380 "data/maps/MtChimney/scripts.pory"
	walk_up
# 381 "data/maps/MtChimney/scripts.pory"
# 211 "data/maps/MtChimney/scripts.pory"
# 382 "data/maps/MtChimney/scripts.pory"
	walk_up
# 383 "data/maps/MtChimney/scripts.pory"
# 212 "data/maps/MtChimney/scripts.pory"
# 384 "data/maps/MtChimney/scripts.pory"
	walk_up
# 385 "data/maps/MtChimney/scripts.pory"
# 213 "data/maps/MtChimney/scripts.pory"
# 386 "data/maps/MtChimney/scripts.pory"
	walk_right
# 387 "data/maps/MtChimney/scripts.pory"
# 214 "data/maps/MtChimney/scripts.pory"
# 388 "data/maps/MtChimney/scripts.pory"
	walk_right
# 389 "data/maps/MtChimney/scripts.pory"
# 215 "data/maps/MtChimney/scripts.pory"
# 390 "data/maps/MtChimney/scripts.pory"
	step_end
# 391 "data/maps/MtChimney/scripts.pory"

# 392 "data/maps/MtChimney/scripts.pory"
# 218 "data/maps/MtChimney/scripts.pory"
# 393 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_ArchieExitNorth:
# 394 "data/maps/MtChimney/scripts.pory"
# 219 "data/maps/MtChimney/scripts.pory"
# 395 "data/maps/MtChimney/scripts.pory"
	walk_left
# 396 "data/maps/MtChimney/scripts.pory"
# 220 "data/maps/MtChimney/scripts.pory"
# 397 "data/maps/MtChimney/scripts.pory"
	walk_left
# 398 "data/maps/MtChimney/scripts.pory"
# 221 "data/maps/MtChimney/scripts.pory"
# 399 "data/maps/MtChimney/scripts.pory"
	walk_down
# 400 "data/maps/MtChimney/scripts.pory"
# 222 "data/maps/MtChimney/scripts.pory"
# 401 "data/maps/MtChimney/scripts.pory"
	walk_down
# 402 "data/maps/MtChimney/scripts.pory"
# 223 "data/maps/MtChimney/scripts.pory"
# 403 "data/maps/MtChimney/scripts.pory"
	walk_down
# 404 "data/maps/MtChimney/scripts.pory"
# 224 "data/maps/MtChimney/scripts.pory"
# 405 "data/maps/MtChimney/scripts.pory"
	walk_down
# 406 "data/maps/MtChimney/scripts.pory"
# 225 "data/maps/MtChimney/scripts.pory"
# 407 "data/maps/MtChimney/scripts.pory"
	walk_down
# 408 "data/maps/MtChimney/scripts.pory"
# 226 "data/maps/MtChimney/scripts.pory"
# 409 "data/maps/MtChimney/scripts.pory"
	walk_down
# 410 "data/maps/MtChimney/scripts.pory"
# 227 "data/maps/MtChimney/scripts.pory"
# 411 "data/maps/MtChimney/scripts.pory"
	walk_down
# 412 "data/maps/MtChimney/scripts.pory"
# 228 "data/maps/MtChimney/scripts.pory"
# 413 "data/maps/MtChimney/scripts.pory"
	step_end
# 414 "data/maps/MtChimney/scripts.pory"

# 415 "data/maps/MtChimney/scripts.pory"
# 231 "data/maps/MtChimney/scripts.pory"
# 416 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused1:
# 417 "data/maps/MtChimney/scripts.pory"
# 232 "data/maps/MtChimney/scripts.pory"
# 418 "data/maps/MtChimney/scripts.pory"
	walk_down
# 419 "data/maps/MtChimney/scripts.pory"
# 233 "data/maps/MtChimney/scripts.pory"
# 420 "data/maps/MtChimney/scripts.pory"
	walk_down
# 421 "data/maps/MtChimney/scripts.pory"
# 234 "data/maps/MtChimney/scripts.pory"
# 422 "data/maps/MtChimney/scripts.pory"
	walk_down
# 423 "data/maps/MtChimney/scripts.pory"
# 235 "data/maps/MtChimney/scripts.pory"
# 424 "data/maps/MtChimney/scripts.pory"
	walk_down
# 425 "data/maps/MtChimney/scripts.pory"
# 236 "data/maps/MtChimney/scripts.pory"
# 426 "data/maps/MtChimney/scripts.pory"
	walk_down
# 427 "data/maps/MtChimney/scripts.pory"
# 237 "data/maps/MtChimney/scripts.pory"
# 428 "data/maps/MtChimney/scripts.pory"
	walk_left
# 429 "data/maps/MtChimney/scripts.pory"
# 238 "data/maps/MtChimney/scripts.pory"
# 430 "data/maps/MtChimney/scripts.pory"
	walk_left
# 431 "data/maps/MtChimney/scripts.pory"
# 239 "data/maps/MtChimney/scripts.pory"
# 432 "data/maps/MtChimney/scripts.pory"
	walk_down
# 433 "data/maps/MtChimney/scripts.pory"
# 240 "data/maps/MtChimney/scripts.pory"
# 434 "data/maps/MtChimney/scripts.pory"
	walk_down
# 435 "data/maps/MtChimney/scripts.pory"
# 241 "data/maps/MtChimney/scripts.pory"
# 436 "data/maps/MtChimney/scripts.pory"
	walk_down
# 437 "data/maps/MtChimney/scripts.pory"
# 242 "data/maps/MtChimney/scripts.pory"
# 438 "data/maps/MtChimney/scripts.pory"
	walk_down
# 439 "data/maps/MtChimney/scripts.pory"
# 243 "data/maps/MtChimney/scripts.pory"
# 440 "data/maps/MtChimney/scripts.pory"
	walk_left
# 441 "data/maps/MtChimney/scripts.pory"
# 244 "data/maps/MtChimney/scripts.pory"
# 442 "data/maps/MtChimney/scripts.pory"
	walk_left
# 443 "data/maps/MtChimney/scripts.pory"
# 245 "data/maps/MtChimney/scripts.pory"
# 444 "data/maps/MtChimney/scripts.pory"
	walk_left
# 445 "data/maps/MtChimney/scripts.pory"
# 246 "data/maps/MtChimney/scripts.pory"
# 446 "data/maps/MtChimney/scripts.pory"
	walk_left
# 447 "data/maps/MtChimney/scripts.pory"
# 247 "data/maps/MtChimney/scripts.pory"
# 448 "data/maps/MtChimney/scripts.pory"
	walk_left
# 449 "data/maps/MtChimney/scripts.pory"
# 248 "data/maps/MtChimney/scripts.pory"
# 450 "data/maps/MtChimney/scripts.pory"
	walk_down
# 451 "data/maps/MtChimney/scripts.pory"
# 249 "data/maps/MtChimney/scripts.pory"
# 452 "data/maps/MtChimney/scripts.pory"
	step_end
# 453 "data/maps/MtChimney/scripts.pory"

# 454 "data/maps/MtChimney/scripts.pory"
# 252 "data/maps/MtChimney/scripts.pory"
# 455 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused2:
# 456 "data/maps/MtChimney/scripts.pory"
# 253 "data/maps/MtChimney/scripts.pory"
# 457 "data/maps/MtChimney/scripts.pory"
	walk_down
# 458 "data/maps/MtChimney/scripts.pory"
# 254 "data/maps/MtChimney/scripts.pory"
# 459 "data/maps/MtChimney/scripts.pory"
	walk_down
# 460 "data/maps/MtChimney/scripts.pory"
# 255 "data/maps/MtChimney/scripts.pory"
# 461 "data/maps/MtChimney/scripts.pory"
	walk_down
# 462 "data/maps/MtChimney/scripts.pory"
# 256 "data/maps/MtChimney/scripts.pory"
# 463 "data/maps/MtChimney/scripts.pory"
	walk_down
# 464 "data/maps/MtChimney/scripts.pory"
# 257 "data/maps/MtChimney/scripts.pory"
# 465 "data/maps/MtChimney/scripts.pory"
	walk_left
# 466 "data/maps/MtChimney/scripts.pory"
# 258 "data/maps/MtChimney/scripts.pory"
# 467 "data/maps/MtChimney/scripts.pory"
	walk_left
# 468 "data/maps/MtChimney/scripts.pory"
# 259 "data/maps/MtChimney/scripts.pory"
# 469 "data/maps/MtChimney/scripts.pory"
	walk_left
# 470 "data/maps/MtChimney/scripts.pory"
# 260 "data/maps/MtChimney/scripts.pory"
# 471 "data/maps/MtChimney/scripts.pory"
	walk_down
# 472 "data/maps/MtChimney/scripts.pory"
# 261 "data/maps/MtChimney/scripts.pory"
# 473 "data/maps/MtChimney/scripts.pory"
	step_end
# 474 "data/maps/MtChimney/scripts.pory"

# 475 "data/maps/MtChimney/scripts.pory"
# 264 "data/maps/MtChimney/scripts.pory"
# 476 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused3:
# 477 "data/maps/MtChimney/scripts.pory"
# 265 "data/maps/MtChimney/scripts.pory"
# 478 "data/maps/MtChimney/scripts.pory"
	walk_right
# 479 "data/maps/MtChimney/scripts.pory"
# 266 "data/maps/MtChimney/scripts.pory"
# 480 "data/maps/MtChimney/scripts.pory"
	walk_down
# 481 "data/maps/MtChimney/scripts.pory"
# 267 "data/maps/MtChimney/scripts.pory"
# 482 "data/maps/MtChimney/scripts.pory"
	walk_down
# 483 "data/maps/MtChimney/scripts.pory"
# 268 "data/maps/MtChimney/scripts.pory"
# 484 "data/maps/MtChimney/scripts.pory"
	walk_down
# 485 "data/maps/MtChimney/scripts.pory"
# 269 "data/maps/MtChimney/scripts.pory"
# 486 "data/maps/MtChimney/scripts.pory"
	walk_down
# 487 "data/maps/MtChimney/scripts.pory"
# 270 "data/maps/MtChimney/scripts.pory"
# 488 "data/maps/MtChimney/scripts.pory"
	walk_left
# 489 "data/maps/MtChimney/scripts.pory"
# 271 "data/maps/MtChimney/scripts.pory"
# 490 "data/maps/MtChimney/scripts.pory"
	walk_left
# 491 "data/maps/MtChimney/scripts.pory"
# 272 "data/maps/MtChimney/scripts.pory"
# 492 "data/maps/MtChimney/scripts.pory"
	walk_left
# 493 "data/maps/MtChimney/scripts.pory"
# 273 "data/maps/MtChimney/scripts.pory"
# 494 "data/maps/MtChimney/scripts.pory"
	walk_left
# 495 "data/maps/MtChimney/scripts.pory"
# 274 "data/maps/MtChimney/scripts.pory"
# 496 "data/maps/MtChimney/scripts.pory"
	walk_left
# 497 "data/maps/MtChimney/scripts.pory"
# 275 "data/maps/MtChimney/scripts.pory"
# 498 "data/maps/MtChimney/scripts.pory"
	walk_down
# 499 "data/maps/MtChimney/scripts.pory"
# 276 "data/maps/MtChimney/scripts.pory"
# 500 "data/maps/MtChimney/scripts.pory"
	walk_down
# 501 "data/maps/MtChimney/scripts.pory"
# 277 "data/maps/MtChimney/scripts.pory"
# 502 "data/maps/MtChimney/scripts.pory"
	walk_down
# 503 "data/maps/MtChimney/scripts.pory"
# 278 "data/maps/MtChimney/scripts.pory"
# 504 "data/maps/MtChimney/scripts.pory"
	walk_down
# 505 "data/maps/MtChimney/scripts.pory"
# 279 "data/maps/MtChimney/scripts.pory"
# 506 "data/maps/MtChimney/scripts.pory"
	step_end
# 507 "data/maps/MtChimney/scripts.pory"

# 508 "data/maps/MtChimney/scripts.pory"
# 282 "data/maps/MtChimney/scripts.pory"
# 509 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused4:
# 510 "data/maps/MtChimney/scripts.pory"
# 283 "data/maps/MtChimney/scripts.pory"
# 511 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 512 "data/maps/MtChimney/scripts.pory"
# 284 "data/maps/MtChimney/scripts.pory"
# 513 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 514 "data/maps/MtChimney/scripts.pory"
# 285 "data/maps/MtChimney/scripts.pory"
# 515 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 516 "data/maps/MtChimney/scripts.pory"
# 286 "data/maps/MtChimney/scripts.pory"
# 517 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 518 "data/maps/MtChimney/scripts.pory"
# 287 "data/maps/MtChimney/scripts.pory"
# 519 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 520 "data/maps/MtChimney/scripts.pory"
# 288 "data/maps/MtChimney/scripts.pory"
# 521 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 522 "data/maps/MtChimney/scripts.pory"
# 289 "data/maps/MtChimney/scripts.pory"
# 523 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 524 "data/maps/MtChimney/scripts.pory"
# 290 "data/maps/MtChimney/scripts.pory"
# 525 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 526 "data/maps/MtChimney/scripts.pory"
# 291 "data/maps/MtChimney/scripts.pory"
# 527 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 528 "data/maps/MtChimney/scripts.pory"
# 292 "data/maps/MtChimney/scripts.pory"
# 529 "data/maps/MtChimney/scripts.pory"
	walk_left
# 530 "data/maps/MtChimney/scripts.pory"
# 293 "data/maps/MtChimney/scripts.pory"
# 531 "data/maps/MtChimney/scripts.pory"
	walk_left
# 532 "data/maps/MtChimney/scripts.pory"
# 294 "data/maps/MtChimney/scripts.pory"
# 533 "data/maps/MtChimney/scripts.pory"
	walk_down
# 534 "data/maps/MtChimney/scripts.pory"
# 295 "data/maps/MtChimney/scripts.pory"
# 535 "data/maps/MtChimney/scripts.pory"
	walk_down
# 536 "data/maps/MtChimney/scripts.pory"
# 296 "data/maps/MtChimney/scripts.pory"
# 537 "data/maps/MtChimney/scripts.pory"
	walk_down
# 538 "data/maps/MtChimney/scripts.pory"
# 297 "data/maps/MtChimney/scripts.pory"
# 539 "data/maps/MtChimney/scripts.pory"
	walk_left
# 540 "data/maps/MtChimney/scripts.pory"
# 298 "data/maps/MtChimney/scripts.pory"
# 541 "data/maps/MtChimney/scripts.pory"
	walk_left
# 542 "data/maps/MtChimney/scripts.pory"
# 299 "data/maps/MtChimney/scripts.pory"
# 543 "data/maps/MtChimney/scripts.pory"
	walk_down
# 544 "data/maps/MtChimney/scripts.pory"
# 300 "data/maps/MtChimney/scripts.pory"
# 545 "data/maps/MtChimney/scripts.pory"
	walk_down
# 546 "data/maps/MtChimney/scripts.pory"
# 301 "data/maps/MtChimney/scripts.pory"
# 547 "data/maps/MtChimney/scripts.pory"
	walk_left
# 548 "data/maps/MtChimney/scripts.pory"
# 302 "data/maps/MtChimney/scripts.pory"
# 549 "data/maps/MtChimney/scripts.pory"
	walk_left
# 550 "data/maps/MtChimney/scripts.pory"
# 303 "data/maps/MtChimney/scripts.pory"
# 551 "data/maps/MtChimney/scripts.pory"
	walk_left
# 552 "data/maps/MtChimney/scripts.pory"
# 304 "data/maps/MtChimney/scripts.pory"
# 553 "data/maps/MtChimney/scripts.pory"
	walk_left
# 554 "data/maps/MtChimney/scripts.pory"
# 305 "data/maps/MtChimney/scripts.pory"
# 555 "data/maps/MtChimney/scripts.pory"
	walk_left
# 556 "data/maps/MtChimney/scripts.pory"
# 306 "data/maps/MtChimney/scripts.pory"
# 557 "data/maps/MtChimney/scripts.pory"
	walk_down
# 558 "data/maps/MtChimney/scripts.pory"
# 307 "data/maps/MtChimney/scripts.pory"
# 559 "data/maps/MtChimney/scripts.pory"
	step_end
# 560 "data/maps/MtChimney/scripts.pory"

# 561 "data/maps/MtChimney/scripts.pory"
# 310 "data/maps/MtChimney/scripts.pory"
# 562 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused5:
# 563 "data/maps/MtChimney/scripts.pory"
# 311 "data/maps/MtChimney/scripts.pory"
# 564 "data/maps/MtChimney/scripts.pory"
	delay_16
# 565 "data/maps/MtChimney/scripts.pory"
# 312 "data/maps/MtChimney/scripts.pory"
# 566 "data/maps/MtChimney/scripts.pory"
	delay_16
# 567 "data/maps/MtChimney/scripts.pory"
# 313 "data/maps/MtChimney/scripts.pory"
# 568 "data/maps/MtChimney/scripts.pory"
	delay_16
# 569 "data/maps/MtChimney/scripts.pory"
# 314 "data/maps/MtChimney/scripts.pory"
# 570 "data/maps/MtChimney/scripts.pory"
	walk_down
# 571 "data/maps/MtChimney/scripts.pory"
# 315 "data/maps/MtChimney/scripts.pory"
# 572 "data/maps/MtChimney/scripts.pory"
	walk_down
# 573 "data/maps/MtChimney/scripts.pory"
# 316 "data/maps/MtChimney/scripts.pory"
# 574 "data/maps/MtChimney/scripts.pory"
	walk_down
# 575 "data/maps/MtChimney/scripts.pory"
# 317 "data/maps/MtChimney/scripts.pory"
# 576 "data/maps/MtChimney/scripts.pory"
	walk_left
# 577 "data/maps/MtChimney/scripts.pory"
# 318 "data/maps/MtChimney/scripts.pory"
# 578 "data/maps/MtChimney/scripts.pory"
	walk_left
# 579 "data/maps/MtChimney/scripts.pory"
# 319 "data/maps/MtChimney/scripts.pory"
# 580 "data/maps/MtChimney/scripts.pory"
	walk_left
# 581 "data/maps/MtChimney/scripts.pory"
# 320 "data/maps/MtChimney/scripts.pory"
# 582 "data/maps/MtChimney/scripts.pory"
	walk_down
# 583 "data/maps/MtChimney/scripts.pory"
# 321 "data/maps/MtChimney/scripts.pory"
# 584 "data/maps/MtChimney/scripts.pory"
	step_end
# 585 "data/maps/MtChimney/scripts.pory"

# 586 "data/maps/MtChimney/scripts.pory"
# 324 "data/maps/MtChimney/scripts.pory"
# 587 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused6:
# 588 "data/maps/MtChimney/scripts.pory"
# 325 "data/maps/MtChimney/scripts.pory"
# 589 "data/maps/MtChimney/scripts.pory"
	delay_16
# 590 "data/maps/MtChimney/scripts.pory"
# 326 "data/maps/MtChimney/scripts.pory"
# 591 "data/maps/MtChimney/scripts.pory"
	walk_left
# 592 "data/maps/MtChimney/scripts.pory"
# 327 "data/maps/MtChimney/scripts.pory"
# 593 "data/maps/MtChimney/scripts.pory"
	walk_down
# 594 "data/maps/MtChimney/scripts.pory"
# 328 "data/maps/MtChimney/scripts.pory"
# 595 "data/maps/MtChimney/scripts.pory"
	walk_down
# 596 "data/maps/MtChimney/scripts.pory"
# 329 "data/maps/MtChimney/scripts.pory"
# 597 "data/maps/MtChimney/scripts.pory"
	walk_down
# 598 "data/maps/MtChimney/scripts.pory"
# 330 "data/maps/MtChimney/scripts.pory"
# 599 "data/maps/MtChimney/scripts.pory"
	walk_down
# 600 "data/maps/MtChimney/scripts.pory"
# 331 "data/maps/MtChimney/scripts.pory"
# 601 "data/maps/MtChimney/scripts.pory"
	walk_left
# 602 "data/maps/MtChimney/scripts.pory"
# 332 "data/maps/MtChimney/scripts.pory"
# 603 "data/maps/MtChimney/scripts.pory"
	walk_left
# 604 "data/maps/MtChimney/scripts.pory"
# 333 "data/maps/MtChimney/scripts.pory"
# 605 "data/maps/MtChimney/scripts.pory"
	walk_left
# 606 "data/maps/MtChimney/scripts.pory"
# 334 "data/maps/MtChimney/scripts.pory"
# 607 "data/maps/MtChimney/scripts.pory"
	walk_left
# 608 "data/maps/MtChimney/scripts.pory"
# 335 "data/maps/MtChimney/scripts.pory"
# 609 "data/maps/MtChimney/scripts.pory"
	walk_left
# 610 "data/maps/MtChimney/scripts.pory"
# 336 "data/maps/MtChimney/scripts.pory"
# 611 "data/maps/MtChimney/scripts.pory"
	walk_down
# 612 "data/maps/MtChimney/scripts.pory"
# 337 "data/maps/MtChimney/scripts.pory"
# 613 "data/maps/MtChimney/scripts.pory"
	walk_down
# 614 "data/maps/MtChimney/scripts.pory"
# 338 "data/maps/MtChimney/scripts.pory"
# 615 "data/maps/MtChimney/scripts.pory"
	walk_down
# 616 "data/maps/MtChimney/scripts.pory"
# 339 "data/maps/MtChimney/scripts.pory"
# 617 "data/maps/MtChimney/scripts.pory"
	walk_down
# 618 "data/maps/MtChimney/scripts.pory"
# 340 "data/maps/MtChimney/scripts.pory"
# 619 "data/maps/MtChimney/scripts.pory"
	step_end
# 620 "data/maps/MtChimney/scripts.pory"

# 621 "data/maps/MtChimney/scripts.pory"
# 343 "data/maps/MtChimney/scripts.pory"
# 622 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused7:
# 623 "data/maps/MtChimney/scripts.pory"
# 344 "data/maps/MtChimney/scripts.pory"
# 624 "data/maps/MtChimney/scripts.pory"
	delay_16
# 625 "data/maps/MtChimney/scripts.pory"
# 345 "data/maps/MtChimney/scripts.pory"
# 626 "data/maps/MtChimney/scripts.pory"
	walk_left
# 627 "data/maps/MtChimney/scripts.pory"
# 346 "data/maps/MtChimney/scripts.pory"
# 628 "data/maps/MtChimney/scripts.pory"
	walk_left
# 629 "data/maps/MtChimney/scripts.pory"
# 347 "data/maps/MtChimney/scripts.pory"
# 630 "data/maps/MtChimney/scripts.pory"
	walk_down
# 631 "data/maps/MtChimney/scripts.pory"
# 348 "data/maps/MtChimney/scripts.pory"
# 632 "data/maps/MtChimney/scripts.pory"
	walk_down
# 633 "data/maps/MtChimney/scripts.pory"
# 349 "data/maps/MtChimney/scripts.pory"
# 634 "data/maps/MtChimney/scripts.pory"
	walk_down
# 635 "data/maps/MtChimney/scripts.pory"
# 350 "data/maps/MtChimney/scripts.pory"
# 636 "data/maps/MtChimney/scripts.pory"
	walk_left
# 637 "data/maps/MtChimney/scripts.pory"
# 351 "data/maps/MtChimney/scripts.pory"
# 638 "data/maps/MtChimney/scripts.pory"
	walk_left
# 639 "data/maps/MtChimney/scripts.pory"
# 352 "data/maps/MtChimney/scripts.pory"
# 640 "data/maps/MtChimney/scripts.pory"
	walk_down
# 641 "data/maps/MtChimney/scripts.pory"
# 353 "data/maps/MtChimney/scripts.pory"
# 642 "data/maps/MtChimney/scripts.pory"
	walk_down
# 643 "data/maps/MtChimney/scripts.pory"
# 354 "data/maps/MtChimney/scripts.pory"
# 644 "data/maps/MtChimney/scripts.pory"
	walk_left
# 645 "data/maps/MtChimney/scripts.pory"
# 355 "data/maps/MtChimney/scripts.pory"
# 646 "data/maps/MtChimney/scripts.pory"
	walk_left
# 647 "data/maps/MtChimney/scripts.pory"
# 356 "data/maps/MtChimney/scripts.pory"
# 648 "data/maps/MtChimney/scripts.pory"
	walk_left
# 649 "data/maps/MtChimney/scripts.pory"
# 357 "data/maps/MtChimney/scripts.pory"
# 650 "data/maps/MtChimney/scripts.pory"
	walk_left
# 651 "data/maps/MtChimney/scripts.pory"
# 358 "data/maps/MtChimney/scripts.pory"
# 652 "data/maps/MtChimney/scripts.pory"
	walk_left
# 653 "data/maps/MtChimney/scripts.pory"
# 359 "data/maps/MtChimney/scripts.pory"
# 654 "data/maps/MtChimney/scripts.pory"
	walk_down
# 655 "data/maps/MtChimney/scripts.pory"
# 360 "data/maps/MtChimney/scripts.pory"
# 656 "data/maps/MtChimney/scripts.pory"
	step_end
# 657 "data/maps/MtChimney/scripts.pory"

# 658 "data/maps/MtChimney/scripts.pory"
# 363 "data/maps/MtChimney/scripts.pory"
# 659 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused8:
# 660 "data/maps/MtChimney/scripts.pory"
# 364 "data/maps/MtChimney/scripts.pory"
# 661 "data/maps/MtChimney/scripts.pory"
	delay_16
# 662 "data/maps/MtChimney/scripts.pory"
# 365 "data/maps/MtChimney/scripts.pory"
# 663 "data/maps/MtChimney/scripts.pory"
	walk_down
# 664 "data/maps/MtChimney/scripts.pory"
# 366 "data/maps/MtChimney/scripts.pory"
# 665 "data/maps/MtChimney/scripts.pory"
	walk_left
# 666 "data/maps/MtChimney/scripts.pory"
# 367 "data/maps/MtChimney/scripts.pory"
# 667 "data/maps/MtChimney/scripts.pory"
	walk_left
# 668 "data/maps/MtChimney/scripts.pory"
# 368 "data/maps/MtChimney/scripts.pory"
# 669 "data/maps/MtChimney/scripts.pory"
	walk_left
# 670 "data/maps/MtChimney/scripts.pory"
# 369 "data/maps/MtChimney/scripts.pory"
# 671 "data/maps/MtChimney/scripts.pory"
	walk_left
# 672 "data/maps/MtChimney/scripts.pory"
# 370 "data/maps/MtChimney/scripts.pory"
# 673 "data/maps/MtChimney/scripts.pory"
	walk_in_place_faster_down
# 674 "data/maps/MtChimney/scripts.pory"
# 371 "data/maps/MtChimney/scripts.pory"
# 675 "data/maps/MtChimney/scripts.pory"
	step_end
# 676 "data/maps/MtChimney/scripts.pory"

# 677 "data/maps/MtChimney/scripts.pory"
# 374 "data/maps/MtChimney/scripts.pory"
# 678 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused9:
# 679 "data/maps/MtChimney/scripts.pory"
# 375 "data/maps/MtChimney/scripts.pory"
# 680 "data/maps/MtChimney/scripts.pory"
	walk_down
# 681 "data/maps/MtChimney/scripts.pory"
# 376 "data/maps/MtChimney/scripts.pory"
# 682 "data/maps/MtChimney/scripts.pory"
	walk_down
# 683 "data/maps/MtChimney/scripts.pory"
# 377 "data/maps/MtChimney/scripts.pory"
# 684 "data/maps/MtChimney/scripts.pory"
	walk_down
# 685 "data/maps/MtChimney/scripts.pory"
# 378 "data/maps/MtChimney/scripts.pory"
# 686 "data/maps/MtChimney/scripts.pory"
	walk_down
# 687 "data/maps/MtChimney/scripts.pory"
# 379 "data/maps/MtChimney/scripts.pory"
# 688 "data/maps/MtChimney/scripts.pory"
	walk_left
# 689 "data/maps/MtChimney/scripts.pory"
# 380 "data/maps/MtChimney/scripts.pory"
# 690 "data/maps/MtChimney/scripts.pory"
	walk_left
# 691 "data/maps/MtChimney/scripts.pory"
# 381 "data/maps/MtChimney/scripts.pory"
# 692 "data/maps/MtChimney/scripts.pory"
	walk_left
# 693 "data/maps/MtChimney/scripts.pory"
# 382 "data/maps/MtChimney/scripts.pory"
# 694 "data/maps/MtChimney/scripts.pory"
	walk_left
# 695 "data/maps/MtChimney/scripts.pory"
# 383 "data/maps/MtChimney/scripts.pory"
# 696 "data/maps/MtChimney/scripts.pory"
	walk_left
# 697 "data/maps/MtChimney/scripts.pory"
# 384 "data/maps/MtChimney/scripts.pory"
# 698 "data/maps/MtChimney/scripts.pory"
	walk_down
# 699 "data/maps/MtChimney/scripts.pory"
# 385 "data/maps/MtChimney/scripts.pory"
# 700 "data/maps/MtChimney/scripts.pory"
	walk_down
# 701 "data/maps/MtChimney/scripts.pory"
# 386 "data/maps/MtChimney/scripts.pory"
# 702 "data/maps/MtChimney/scripts.pory"
	walk_down
# 703 "data/maps/MtChimney/scripts.pory"
# 387 "data/maps/MtChimney/scripts.pory"
# 704 "data/maps/MtChimney/scripts.pory"
	walk_down
# 705 "data/maps/MtChimney/scripts.pory"
# 388 "data/maps/MtChimney/scripts.pory"
# 706 "data/maps/MtChimney/scripts.pory"
	step_end
# 707 "data/maps/MtChimney/scripts.pory"

# 708 "data/maps/MtChimney/scripts.pory"
# 391 "data/maps/MtChimney/scripts.pory"
# 709 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused10:
# 710 "data/maps/MtChimney/scripts.pory"
# 392 "data/maps/MtChimney/scripts.pory"
# 711 "data/maps/MtChimney/scripts.pory"
	walk_down
# 712 "data/maps/MtChimney/scripts.pory"
# 393 "data/maps/MtChimney/scripts.pory"
# 713 "data/maps/MtChimney/scripts.pory"
	step_end
# 714 "data/maps/MtChimney/scripts.pory"

# 715 "data/maps/MtChimney/scripts.pory"
# 396 "data/maps/MtChimney/scripts.pory"
# 716 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused11:
# 717 "data/maps/MtChimney/scripts.pory"
# 397 "data/maps/MtChimney/scripts.pory"
# 718 "data/maps/MtChimney/scripts.pory"
	walk_down
# 719 "data/maps/MtChimney/scripts.pory"
# 398 "data/maps/MtChimney/scripts.pory"
# 720 "data/maps/MtChimney/scripts.pory"
	walk_down
# 721 "data/maps/MtChimney/scripts.pory"
# 399 "data/maps/MtChimney/scripts.pory"
# 722 "data/maps/MtChimney/scripts.pory"
	walk_down
# 723 "data/maps/MtChimney/scripts.pory"
# 400 "data/maps/MtChimney/scripts.pory"
# 724 "data/maps/MtChimney/scripts.pory"
	walk_down
# 725 "data/maps/MtChimney/scripts.pory"
# 401 "data/maps/MtChimney/scripts.pory"
# 726 "data/maps/MtChimney/scripts.pory"
	walk_down
# 727 "data/maps/MtChimney/scripts.pory"
# 402 "data/maps/MtChimney/scripts.pory"
# 728 "data/maps/MtChimney/scripts.pory"
	walk_down
# 729 "data/maps/MtChimney/scripts.pory"
# 403 "data/maps/MtChimney/scripts.pory"
# 730 "data/maps/MtChimney/scripts.pory"
	walk_down
# 731 "data/maps/MtChimney/scripts.pory"
# 404 "data/maps/MtChimney/scripts.pory"
# 732 "data/maps/MtChimney/scripts.pory"
	step_end
# 733 "data/maps/MtChimney/scripts.pory"

# 734 "data/maps/MtChimney/scripts.pory"
# 407 "data/maps/MtChimney/scripts.pory"
# 735 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused12:
# 736 "data/maps/MtChimney/scripts.pory"
# 408 "data/maps/MtChimney/scripts.pory"
# 737 "data/maps/MtChimney/scripts.pory"
	delay_16
# 738 "data/maps/MtChimney/scripts.pory"
# 409 "data/maps/MtChimney/scripts.pory"
# 739 "data/maps/MtChimney/scripts.pory"
	delay_16
# 740 "data/maps/MtChimney/scripts.pory"
# 410 "data/maps/MtChimney/scripts.pory"
# 741 "data/maps/MtChimney/scripts.pory"
	walk_in_place_faster_left
# 742 "data/maps/MtChimney/scripts.pory"
# 411 "data/maps/MtChimney/scripts.pory"
# 743 "data/maps/MtChimney/scripts.pory"
	delay_16
# 744 "data/maps/MtChimney/scripts.pory"
# 412 "data/maps/MtChimney/scripts.pory"
# 745 "data/maps/MtChimney/scripts.pory"
	walk_down
# 746 "data/maps/MtChimney/scripts.pory"
# 413 "data/maps/MtChimney/scripts.pory"
# 747 "data/maps/MtChimney/scripts.pory"
	walk_down
# 748 "data/maps/MtChimney/scripts.pory"
# 414 "data/maps/MtChimney/scripts.pory"
# 749 "data/maps/MtChimney/scripts.pory"
	walk_down
# 750 "data/maps/MtChimney/scripts.pory"
# 415 "data/maps/MtChimney/scripts.pory"
# 751 "data/maps/MtChimney/scripts.pory"
	walk_down
# 752 "data/maps/MtChimney/scripts.pory"
# 416 "data/maps/MtChimney/scripts.pory"
# 753 "data/maps/MtChimney/scripts.pory"
	walk_down
# 754 "data/maps/MtChimney/scripts.pory"
# 417 "data/maps/MtChimney/scripts.pory"
# 755 "data/maps/MtChimney/scripts.pory"
	step_end
# 756 "data/maps/MtChimney/scripts.pory"

# 757 "data/maps/MtChimney/scripts.pory"
# 420 "data/maps/MtChimney/scripts.pory"
# 758 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused13:
# 759 "data/maps/MtChimney/scripts.pory"
# 421 "data/maps/MtChimney/scripts.pory"
# 760 "data/maps/MtChimney/scripts.pory"
	delay_16
# 761 "data/maps/MtChimney/scripts.pory"
# 422 "data/maps/MtChimney/scripts.pory"
# 762 "data/maps/MtChimney/scripts.pory"
	delay_16
# 763 "data/maps/MtChimney/scripts.pory"
# 423 "data/maps/MtChimney/scripts.pory"
# 764 "data/maps/MtChimney/scripts.pory"
	delay_16
# 765 "data/maps/MtChimney/scripts.pory"
# 424 "data/maps/MtChimney/scripts.pory"
# 766 "data/maps/MtChimney/scripts.pory"
	delay_16
# 767 "data/maps/MtChimney/scripts.pory"
# 425 "data/maps/MtChimney/scripts.pory"
# 768 "data/maps/MtChimney/scripts.pory"
	delay_16
# 769 "data/maps/MtChimney/scripts.pory"
# 426 "data/maps/MtChimney/scripts.pory"
# 770 "data/maps/MtChimney/scripts.pory"
	delay_16
# 771 "data/maps/MtChimney/scripts.pory"
# 427 "data/maps/MtChimney/scripts.pory"
# 772 "data/maps/MtChimney/scripts.pory"
	walk_in_place_faster_left
# 773 "data/maps/MtChimney/scripts.pory"
# 428 "data/maps/MtChimney/scripts.pory"
# 774 "data/maps/MtChimney/scripts.pory"
	delay_16
# 775 "data/maps/MtChimney/scripts.pory"
# 429 "data/maps/MtChimney/scripts.pory"
# 776 "data/maps/MtChimney/scripts.pory"
	walk_down
# 777 "data/maps/MtChimney/scripts.pory"
# 430 "data/maps/MtChimney/scripts.pory"
# 778 "data/maps/MtChimney/scripts.pory"
	walk_down
# 779 "data/maps/MtChimney/scripts.pory"
# 431 "data/maps/MtChimney/scripts.pory"
# 780 "data/maps/MtChimney/scripts.pory"
	step_end
# 781 "data/maps/MtChimney/scripts.pory"

# 782 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused14::
# 783 "data/maps/MtChimney/scripts.pory"
# 435 "data/maps/MtChimney/scripts.pory"
# 784 "data/maps/MtChimney/scripts.pory"
	lock_facing_direction
# 785 "data/maps/MtChimney/scripts.pory"
# 436 "data/maps/MtChimney/scripts.pory"
# 786 "data/maps/MtChimney/scripts.pory"
	walk_fast_left
# 787 "data/maps/MtChimney/scripts.pory"
# 437 "data/maps/MtChimney/scripts.pory"
# 788 "data/maps/MtChimney/scripts.pory"
	unlock_facing_direction
# 789 "data/maps/MtChimney/scripts.pory"
# 438 "data/maps/MtChimney/scripts.pory"
# 790 "data/maps/MtChimney/scripts.pory"
	face_right
# 791 "data/maps/MtChimney/scripts.pory"
# 439 "data/maps/MtChimney/scripts.pory"
# 792 "data/maps/MtChimney/scripts.pory"
	step_end
# 793 "data/maps/MtChimney/scripts.pory"
	return
# 794 "data/maps/MtChimney/scripts.pory"

# 795 "data/maps/MtChimney/scripts.pory"

# 796 "data/maps/MtChimney/scripts.pory"
# 442 "data/maps/MtChimney/scripts.pory"
# 797 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused15:
# 798 "data/maps/MtChimney/scripts.pory"
# 443 "data/maps/MtChimney/scripts.pory"
# 799 "data/maps/MtChimney/scripts.pory"
	walk_left
# 800 "data/maps/MtChimney/scripts.pory"
# 444 "data/maps/MtChimney/scripts.pory"
# 801 "data/maps/MtChimney/scripts.pory"
	walk_in_place_faster_right
# 802 "data/maps/MtChimney/scripts.pory"
# 445 "data/maps/MtChimney/scripts.pory"
# 803 "data/maps/MtChimney/scripts.pory"
	delay_16
# 804 "data/maps/MtChimney/scripts.pory"
# 446 "data/maps/MtChimney/scripts.pory"
# 805 "data/maps/MtChimney/scripts.pory"
	step_end
# 806 "data/maps/MtChimney/scripts.pory"

# 807 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyAquaGrunt1::
# 808 "data/maps/MtChimney/scripts.pory"
# 450 "data/maps/MtChimney/scripts.pory"
# 809 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MagmaOutnumbersUs, MSGBOX_SIGN
# 810 "data/maps/MtChimney/scripts.pory"
	end
# 811 "data/maps/MtChimney/scripts.pory"

# 812 "data/maps/MtChimney/scripts.pory"

# 813 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyAquaGrunt2::
# 814 "data/maps/MtChimney/scripts.pory"
# 455 "data/maps/MtChimney/scripts.pory"
# 815 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_LessHabitatForWaterPokemon, MSGBOX_SIGN
# 816 "data/maps/MtChimney/scripts.pory"
	end
# 817 "data/maps/MtChimney/scripts.pory"

# 818 "data/maps/MtChimney/scripts.pory"

# 819 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyAquaGrunt3::
# 820 "data/maps/MtChimney/scripts.pory"
# 460 "data/maps/MtChimney/scripts.pory"
# 821 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MagmasNameSimilar, MSGBOX_SIGN
# 822 "data/maps/MtChimney/scripts.pory"
	end
# 823 "data/maps/MtChimney/scripts.pory"

# 824 "data/maps/MtChimney/scripts.pory"

# 825 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Tabitha::
# 826 "data/maps/MtChimney/scripts.pory"
# 465 "data/maps/MtChimney/scripts.pory"
# 827 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_TABITHA_MT_CHIMNEY, MtChimney_Text_TabithaIntro, MtChimney_Text_TabithaDefeat
# 828 "data/maps/MtChimney/scripts.pory"
# 466 "data/maps/MtChimney/scripts.pory"
# 829 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_TabithaPostBattle, MSGBOX_AUTOCLOSE
# 830 "data/maps/MtChimney/scripts.pory"
	end
# 831 "data/maps/MtChimney/scripts.pory"

# 832 "data/maps/MtChimney/scripts.pory"

# 833 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Grunt2::
# 834 "data/maps/MtChimney/scripts.pory"
# 471 "data/maps/MtChimney/scripts.pory"
# 835 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MT_CHIMNEY_2, MtChimney_Text_Grunt2Intro, MtChimney_Text_Grunt2Defeat
# 836 "data/maps/MtChimney/scripts.pory"
# 472 "data/maps/MtChimney/scripts.pory"
# 837 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
# 838 "data/maps/MtChimney/scripts.pory"
	end
# 839 "data/maps/MtChimney/scripts.pory"

# 840 "data/maps/MtChimney/scripts.pory"

# 841 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyMagmaGrunt1::
# 842 "data/maps/MtChimney/scripts.pory"
# 477 "data/maps/MtChimney/scripts.pory"
# 843 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_TeamAquaAlwaysMessingWithPlans, MSGBOX_SIGN
# 844 "data/maps/MtChimney/scripts.pory"
	end
# 845 "data/maps/MtChimney/scripts.pory"

# 846 "data/maps/MtChimney/scripts.pory"

# 847 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyMagmaGrunt2::
# 848 "data/maps/MtChimney/scripts.pory"
# 482 "data/maps/MtChimney/scripts.pory"
# 849 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MeteoritesPackAmazingPower, MSGBOX_SIGN
# 850 "data/maps/MtChimney/scripts.pory"
	end
# 851 "data/maps/MtChimney/scripts.pory"

# 852 "data/maps/MtChimney/scripts.pory"

# 853 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyMagmaGrunt3::
# 854 "data/maps/MtChimney/scripts.pory"
# 487 "data/maps/MtChimney/scripts.pory"
# 855 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_YouBetterNotMessWithUs, MSGBOX_SIGN
# 856 "data/maps/MtChimney/scripts.pory"
	end
# 857 "data/maps/MtChimney/scripts.pory"

# 858 "data/maps/MtChimney/scripts.pory"

# 859 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyMagmaGrunt4::
# 860 "data/maps/MtChimney/scripts.pory"
# 492 "data/maps/MtChimney/scripts.pory"
# 861 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_AquasNameSimilar, MSGBOX_SIGN
# 862 "data/maps/MtChimney/scripts.pory"
	end
# 863 "data/maps/MtChimney/scripts.pory"

# 864 "data/maps/MtChimney/scripts.pory"

# 865 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyMagmaGrunt5::
# 866 "data/maps/MtChimney/scripts.pory"
# 497 "data/maps/MtChimney/scripts.pory"
# 867 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_DouseThemInFire, MSGBOX_SIGN
# 868 "data/maps/MtChimney/scripts.pory"
	end
# 869 "data/maps/MtChimney/scripts.pory"

# 870 "data/maps/MtChimney/scripts.pory"

# 871 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyMagmaGrunt6::
# 872 "data/maps/MtChimney/scripts.pory"
# 502 "data/maps/MtChimney/scripts.pory"
# 873 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_KeepMakingMoreLand, MSGBOX_SIGN
# 874 "data/maps/MtChimney/scripts.pory"
	end
# 875 "data/maps/MtChimney/scripts.pory"

# 876 "data/maps/MtChimney/scripts.pory"

# 877 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_MagmaPoochyena::
# 878 "data/maps/MtChimney/scripts.pory"
# 507 "data/maps/MtChimney/scripts.pory"
# 879 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_Bufoh, MSGBOX_SIGN
# 880 "data/maps/MtChimney/scripts.pory"
	end
# 881 "data/maps/MtChimney/scripts.pory"

# 882 "data/maps/MtChimney/scripts.pory"

# 883 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_AquaPoochyena::
# 884 "data/maps/MtChimney/scripts.pory"
# 512 "data/maps/MtChimney/scripts.pory"
# 885 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_Bushaa, MSGBOX_SIGN
# 886 "data/maps/MtChimney/scripts.pory"
	end
# 887 "data/maps/MtChimney/scripts.pory"

# 888 "data/maps/MtChimney/scripts.pory"

# 889 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_MeteoriteMachine::
# 890 "data/maps/MtChimney/scripts.pory"
# 517 "data/maps/MtChimney/scripts.pory"
# 891 "data/maps/MtChimney/scripts.pory"
	lockall
# 892 "data/maps/MtChimney/scripts.pory"
# 518 "data/maps/MtChimney/scripts.pory"
# 893 "data/maps/MtChimney/scripts.pory"
	goto_if_unset FLAG_DEFEATED_EVIL_TEAM_MT_CHIMNEY, MtChimney_EventScript_MeteoriteMachine_2
# 894 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_MeteoriteMachine_1:
# 895 "data/maps/MtChimney/scripts.pory"
# 521 "data/maps/MtChimney/scripts.pory"
# 896 "data/maps/MtChimney/scripts.pory"
	goto_if_set FLAG_RECEIVED_METEORITE, MtChimney_EventScript_MeteoriteMachine_5
# 897 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_MeteoriteMachine_4:
# 898 "data/maps/MtChimney/scripts.pory"
# 524 "data/maps/MtChimney/scripts.pory"
# 899 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_RemoveTheMeteorite, MSGBOX_YESNO
# 900 "data/maps/MtChimney/scripts.pory"
# 525 "data/maps/MtChimney/scripts.pory"
# 901 "data/maps/MtChimney/scripts.pory"
	compare VAR_RESULT, NO
# 902 "data/maps/MtChimney/scripts.pory"
	goto_if_eq MtChimney_EventScript_MeteoriteMachine_8
# 903 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_MeteoriteMachine_7:
# 904 "data/maps/MtChimney/scripts.pory"
# 528 "data/maps/MtChimney/scripts.pory"
# 905 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_PlayerRemovedMeteorite, MSGBOX_DEFAULT
# 906 "data/maps/MtChimney/scripts.pory"
# 529 "data/maps/MtChimney/scripts.pory"
# 907 "data/maps/MtChimney/scripts.pory"
	giveitem ITEM_METEORITE
# 908 "data/maps/MtChimney/scripts.pory"
# 530 "data/maps/MtChimney/scripts.pory"
# 909 "data/maps/MtChimney/scripts.pory"
	compare VAR_RESULT, FALSE
# 910 "data/maps/MtChimney/scripts.pory"
	goto_if_eq MtChimney_EventScript_MeteoriteMachine_11
# 911 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_MeteoriteMachine_10:
# 912 "data/maps/MtChimney/scripts.pory"
# 533 "data/maps/MtChimney/scripts.pory"
# 913 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_RECEIVED_METEORITE
# 914 "data/maps/MtChimney/scripts.pory"
# 534 "data/maps/MtChimney/scripts.pory"
# 915 "data/maps/MtChimney/scripts.pory"
	releaseall
# 916 "data/maps/MtChimney/scripts.pory"
	end
# 917 "data/maps/MtChimney/scripts.pory"

# 918 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_MeteoriteMachine_2:
# 919 "data/maps/MtChimney/scripts.pory"
# 519 "data/maps/MtChimney/scripts.pory"
# 920 "data/maps/MtChimney/scripts.pory"
	goto MtChimney_EventScript_MachineOn
# 921 "data/maps/MtChimney/scripts.pory"
	goto MtChimney_EventScript_MeteoriteMachine_1
# 922 "data/maps/MtChimney/scripts.pory"

# 923 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_MeteoriteMachine_5:
# 924 "data/maps/MtChimney/scripts.pory"
# 522 "data/maps/MtChimney/scripts.pory"
# 925 "data/maps/MtChimney/scripts.pory"
	goto MtChimney_EventScript_MachineOff
# 926 "data/maps/MtChimney/scripts.pory"
	goto MtChimney_EventScript_MeteoriteMachine_4
# 927 "data/maps/MtChimney/scripts.pory"

# 928 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_MeteoriteMachine_8:
# 929 "data/maps/MtChimney/scripts.pory"
# 526 "data/maps/MtChimney/scripts.pory"
# 930 "data/maps/MtChimney/scripts.pory"
	goto MtChimney_EventScript_LeaveMeteoriteAlone
# 931 "data/maps/MtChimney/scripts.pory"
	goto MtChimney_EventScript_MeteoriteMachine_7
# 932 "data/maps/MtChimney/scripts.pory"

# 933 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_MeteoriteMachine_11:
# 934 "data/maps/MtChimney/scripts.pory"
# 531 "data/maps/MtChimney/scripts.pory"
# 935 "data/maps/MtChimney/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
# 936 "data/maps/MtChimney/scripts.pory"
	goto MtChimney_EventScript_MeteoriteMachine_10
# 937 "data/maps/MtChimney/scripts.pory"

# 938 "data/maps/MtChimney/scripts.pory"

# 939 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_LeaveMeteoriteAlone::
# 940 "data/maps/MtChimney/scripts.pory"
# 539 "data/maps/MtChimney/scripts.pory"
# 941 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_PlayerLeftMeteorite, MSGBOX_DEFAULT
# 942 "data/maps/MtChimney/scripts.pory"
# 540 "data/maps/MtChimney/scripts.pory"
# 943 "data/maps/MtChimney/scripts.pory"
	releaseall
# 944 "data/maps/MtChimney/scripts.pory"
	end
# 945 "data/maps/MtChimney/scripts.pory"

# 946 "data/maps/MtChimney/scripts.pory"

# 947 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_MachineOff::
# 948 "data/maps/MtChimney/scripts.pory"
# 545 "data/maps/MtChimney/scripts.pory"
# 949 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MachineMakesNoResponse, MSGBOX_DEFAULT
# 950 "data/maps/MtChimney/scripts.pory"
# 546 "data/maps/MtChimney/scripts.pory"
# 951 "data/maps/MtChimney/scripts.pory"
	releaseall
# 952 "data/maps/MtChimney/scripts.pory"
	end
# 953 "data/maps/MtChimney/scripts.pory"

# 954 "data/maps/MtChimney/scripts.pory"

# 955 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_MachineOn::
# 956 "data/maps/MtChimney/scripts.pory"
# 551 "data/maps/MtChimney/scripts.pory"
# 957 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MetoriteFittedOnMachine, MSGBOX_DEFAULT
# 958 "data/maps/MtChimney/scripts.pory"
# 552 "data/maps/MtChimney/scripts.pory"
# 959 "data/maps/MtChimney/scripts.pory"
	releaseall
# 960 "data/maps/MtChimney/scripts.pory"
	end
# 961 "data/maps/MtChimney/scripts.pory"

# 962 "data/maps/MtChimney/scripts.pory"

# 963 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_RouteSign::
# 964 "data/maps/MtChimney/scripts.pory"
# 557 "data/maps/MtChimney/scripts.pory"
# 965 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_RouteSign, MSGBOX_SIGN
# 966 "data/maps/MtChimney/scripts.pory"
	end
# 967 "data/maps/MtChimney/scripts.pory"

# 968 "data/maps/MtChimney/scripts.pory"

# 969 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Shelby::
# 970 "data/maps/MtChimney/scripts.pory"
# 562 "data/maps/MtChimney/scripts.pory"
# 971 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_SHELBY_1, MtChimney_Text_ShelbyIntro, MtChimney_Text_ShelbyDefeat, MtChimney_EventScript_DefeatedShelby
# 972 "data/maps/MtChimney/scripts.pory"
# 563 "data/maps/MtChimney/scripts.pory"
# 973 "data/maps/MtChimney/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 974 "data/maps/MtChimney/scripts.pory"
# 564 "data/maps/MtChimney/scripts.pory"
# 975 "data/maps/MtChimney/scripts.pory"
	compare VAR_RESULT, TRUE
# 976 "data/maps/MtChimney/scripts.pory"
	goto_if_eq MtChimney_EventScript_Shelby_2
# 977 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Shelby_1:
# 978 "data/maps/MtChimney/scripts.pory"
# 567 "data/maps/MtChimney/scripts.pory"
# 979 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ShelbyPostBattle, MSGBOX_DEFAULT
# 980 "data/maps/MtChimney/scripts.pory"
# 568 "data/maps/MtChimney/scripts.pory"
# 981 "data/maps/MtChimney/scripts.pory"
	release
# 982 "data/maps/MtChimney/scripts.pory"
	end
# 983 "data/maps/MtChimney/scripts.pory"

# 984 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Shelby_2:
# 985 "data/maps/MtChimney/scripts.pory"
# 565 "data/maps/MtChimney/scripts.pory"
# 986 "data/maps/MtChimney/scripts.pory"
	goto MtChimney_EventScript_RematchShelby
# 987 "data/maps/MtChimney/scripts.pory"
	goto MtChimney_EventScript_Shelby_1
# 988 "data/maps/MtChimney/scripts.pory"

# 989 "data/maps/MtChimney/scripts.pory"

# 990 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_DefeatedShelby::
# 991 "data/maps/MtChimney/scripts.pory"
# 573 "data/maps/MtChimney/scripts.pory"
# 992 "data/maps/MtChimney/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 993 "data/maps/MtChimney/scripts.pory"
# 574 "data/maps/MtChimney/scripts.pory"
# 994 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 995 "data/maps/MtChimney/scripts.pory"
# 575 "data/maps/MtChimney/scripts.pory"
# 996 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ShelbyRegister, MSGBOX_DEFAULT
# 997 "data/maps/MtChimney/scripts.pory"
# 576 "data/maps/MtChimney/scripts.pory"
# 998 "data/maps/MtChimney/scripts.pory"
	register_matchcall TRAINER_SHELBY_1
# 999 "data/maps/MtChimney/scripts.pory"
# 577 "data/maps/MtChimney/scripts.pory"
# 1000 "data/maps/MtChimney/scripts.pory"
	release
# 1001 "data/maps/MtChimney/scripts.pory"
	end
# 1002 "data/maps/MtChimney/scripts.pory"

# 1003 "data/maps/MtChimney/scripts.pory"

# 1004 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_RematchShelby::
# 1005 "data/maps/MtChimney/scripts.pory"
# 582 "data/maps/MtChimney/scripts.pory"
# 1006 "data/maps/MtChimney/scripts.pory"
	trainerbattle_rematch TRAINER_SHELBY_1, MtChimney_Text_ShelbyRematchIntro, MtChimney_Text_ShelbyRematchDefeat
# 1007 "data/maps/MtChimney/scripts.pory"
# 583 "data/maps/MtChimney/scripts.pory"
# 1008 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ShelbyPostRematch, MSGBOX_AUTOCLOSE
# 1009 "data/maps/MtChimney/scripts.pory"
	end
# 1010 "data/maps/MtChimney/scripts.pory"

# 1011 "data/maps/MtChimney/scripts.pory"

# 1012 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Melissa::
# 1013 "data/maps/MtChimney/scripts.pory"
# 588 "data/maps/MtChimney/scripts.pory"
# 1014 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_MELISSA, MtChimney_Text_MelissaIntro, MtChimney_Text_MelissaDefeat
# 1015 "data/maps/MtChimney/scripts.pory"
# 589 "data/maps/MtChimney/scripts.pory"
# 1016 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MelissaPostBattle, MSGBOX_AUTOCLOSE
# 1017 "data/maps/MtChimney/scripts.pory"
	end
# 1018 "data/maps/MtChimney/scripts.pory"

# 1019 "data/maps/MtChimney/scripts.pory"

# 1020 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Sheila::
# 1021 "data/maps/MtChimney/scripts.pory"
# 594 "data/maps/MtChimney/scripts.pory"
# 1022 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_SHEILA, MtChimney_Text_SheilaIntro, MtChimney_Text_SheilaDefeat
# 1023 "data/maps/MtChimney/scripts.pory"
# 595 "data/maps/MtChimney/scripts.pory"
# 1024 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_SheilaPostBattle, MSGBOX_AUTOCLOSE
# 1025 "data/maps/MtChimney/scripts.pory"
	end
# 1026 "data/maps/MtChimney/scripts.pory"

# 1027 "data/maps/MtChimney/scripts.pory"

# 1028 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Shirley::
# 1029 "data/maps/MtChimney/scripts.pory"
# 600 "data/maps/MtChimney/scripts.pory"
# 1030 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_SHIRLEY, MtChimney_Text_ShirleyIntro, MtChimney_Text_ShirleyDefeat
# 1031 "data/maps/MtChimney/scripts.pory"
# 601 "data/maps/MtChimney/scripts.pory"
# 1032 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ShirleyPostBattle, MSGBOX_AUTOCLOSE
# 1033 "data/maps/MtChimney/scripts.pory"
	end
# 1034 "data/maps/MtChimney/scripts.pory"

# 1035 "data/maps/MtChimney/scripts.pory"

# 1036 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Grunt1::
# 1037 "data/maps/MtChimney/scripts.pory"
# 606 "data/maps/MtChimney/scripts.pory"
# 1038 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MT_CHIMNEY_1, MtChimney_Text_Grunt1Intro, MtChimney_Text_Grunt1Defeat
# 1039 "data/maps/MtChimney/scripts.pory"
# 607 "data/maps/MtChimney/scripts.pory"
# 1040 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
# 1041 "data/maps/MtChimney/scripts.pory"
	end
# 1042 "data/maps/MtChimney/scripts.pory"

# 1043 "data/maps/MtChimney/scripts.pory"

# 1044 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Sawyer::
# 1045 "data/maps/MtChimney/scripts.pory"
# 612 "data/maps/MtChimney/scripts.pory"
# 1046 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_SAWYER_1, MtChimney_Text_SawyerIntro, MtChimney_Text_SawyerDefeat, MtChimney_EventScript_SawyerDefeated
# 1047 "data/maps/MtChimney/scripts.pory"
# 613 "data/maps/MtChimney/scripts.pory"
# 1048 "data/maps/MtChimney/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 1049 "data/maps/MtChimney/scripts.pory"
# 614 "data/maps/MtChimney/scripts.pory"
# 1050 "data/maps/MtChimney/scripts.pory"
	compare VAR_RESULT, TRUE
# 1051 "data/maps/MtChimney/scripts.pory"
	goto_if_eq MtChimney_EventScript_Sawyer_2
# 1052 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Sawyer_1:
# 1053 "data/maps/MtChimney/scripts.pory"
# 617 "data/maps/MtChimney/scripts.pory"
# 1054 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_SawyerPostBattle, MSGBOX_DEFAULT
# 1055 "data/maps/MtChimney/scripts.pory"
# 618 "data/maps/MtChimney/scripts.pory"
# 1056 "data/maps/MtChimney/scripts.pory"
	release
# 1057 "data/maps/MtChimney/scripts.pory"
	end
# 1058 "data/maps/MtChimney/scripts.pory"

# 1059 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Sawyer_2:
# 1060 "data/maps/MtChimney/scripts.pory"
# 615 "data/maps/MtChimney/scripts.pory"
# 1061 "data/maps/MtChimney/scripts.pory"
	goto MtChimney_EventScript_SawyerRematch
# 1062 "data/maps/MtChimney/scripts.pory"
	goto MtChimney_EventScript_Sawyer_1
# 1063 "data/maps/MtChimney/scripts.pory"

# 1064 "data/maps/MtChimney/scripts.pory"

# 1065 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_SawyerDefeated::
# 1066 "data/maps/MtChimney/scripts.pory"
# 623 "data/maps/MtChimney/scripts.pory"
# 1067 "data/maps/MtChimney/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 1068 "data/maps/MtChimney/scripts.pory"
# 624 "data/maps/MtChimney/scripts.pory"
# 1069 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 1070 "data/maps/MtChimney/scripts.pory"
# 625 "data/maps/MtChimney/scripts.pory"
# 1071 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_SawyerRegister, MSGBOX_DEFAULT
# 1072 "data/maps/MtChimney/scripts.pory"
# 626 "data/maps/MtChimney/scripts.pory"
# 1073 "data/maps/MtChimney/scripts.pory"
	register_matchcall TRAINER_SAWYER_1
# 1074 "data/maps/MtChimney/scripts.pory"
# 627 "data/maps/MtChimney/scripts.pory"
# 1075 "data/maps/MtChimney/scripts.pory"
	release
# 1076 "data/maps/MtChimney/scripts.pory"
	end
# 1077 "data/maps/MtChimney/scripts.pory"

# 1078 "data/maps/MtChimney/scripts.pory"

# 1079 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_SawyerRematch::
# 1080 "data/maps/MtChimney/scripts.pory"
# 632 "data/maps/MtChimney/scripts.pory"
# 1081 "data/maps/MtChimney/scripts.pory"
	trainerbattle_rematch TRAINER_SAWYER_1, MtChimney_Text_SawyerRematchIntro, MtChimney_Text_SawyerRematchDefeat
# 1082 "data/maps/MtChimney/scripts.pory"
# 633 "data/maps/MtChimney/scripts.pory"
# 1083 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_SawyerPostRematch, MSGBOX_AUTOCLOSE
# 1084 "data/maps/MtChimney/scripts.pory"
	end
# 1085 "data/maps/MtChimney/scripts.pory"

# 1086 "data/maps/MtChimney/scripts.pory"

# 1087 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MeteoriteWillActivateVolcano::
# 1088 "data/maps/MtChimney/scripts.pory"
# 637 "data/maps/MtChimney/scripts.pory"
# 1089 "data/maps/MtChimney/scripts.pory"
	.string "The power contained in the METEORITE…\p"
# 1090 "data/maps/MtChimney/scripts.pory"
	.string "By amplifying its power with this\n"
# 1091 "data/maps/MtChimney/scripts.pory"
	.string "machine, MT. CHIMNEY's volcanic\l"
# 1092 "data/maps/MtChimney/scripts.pory"
	.string "activity will instantly intensify…\p"
# 1093 "data/maps/MtChimney/scripts.pory"
	.string "Its energy will grow deep inside\n"
# 1094 "data/maps/MtChimney/scripts.pory"
	.string "the crater and…\l"
# 1095 "data/maps/MtChimney/scripts.pory"
	.string "Fufufu…$"
# 1096 "data/maps/MtChimney/scripts.pory"

# 1097 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MaxieIntro::
# 1098 "data/maps/MtChimney/scripts.pory"
# 647 "data/maps/MtChimney/scripts.pory"
# 1099 "data/maps/MtChimney/scripts.pory"
	.string "MAXIE: Hm?\n"
# 1100 "data/maps/MtChimney/scripts.pory"
	.string "Who are you?\p"
# 1101 "data/maps/MtChimney/scripts.pory"
	.string "… … … … … …\n"
# 1102 "data/maps/MtChimney/scripts.pory"
	.string "… … … … … …\p"
# 1103 "data/maps/MtChimney/scripts.pory"
	.string "I'd heard ARCHIE bemoaning a child\n"
# 1104 "data/maps/MtChimney/scripts.pory"
	.string "who's been meddling in TEAM AQUA's\l"
# 1105 "data/maps/MtChimney/scripts.pory"
	.string "affairs.\p"
# 1106 "data/maps/MtChimney/scripts.pory"
	.string "It must be you he meant.\p"
# 1107 "data/maps/MtChimney/scripts.pory"
	.string "Humph! So you're thinking of\n"
# 1108 "data/maps/MtChimney/scripts.pory"
	.string "interfering with us, TEAM MAGMA?\p"
# 1109 "data/maps/MtChimney/scripts.pory"
	.string "Now you listen.\n"
# 1110 "data/maps/MtChimney/scripts.pory"
	.string "Long ago, living things used the\l"
# 1111 "data/maps/MtChimney/scripts.pory"
	.string "land to live and grow.\p"
# 1112 "data/maps/MtChimney/scripts.pory"
	.string "That is why land is all important!\n"
# 1113 "data/maps/MtChimney/scripts.pory"
	.string "It is the cradle of all!\p"
# 1114 "data/maps/MtChimney/scripts.pory"
	.string "That is why TEAM MAGMA is dedicated\n"
# 1115 "data/maps/MtChimney/scripts.pory"
	.string "to the expansion of the land mass.\p"
# 1116 "data/maps/MtChimney/scripts.pory"
	.string "It is for further advancement of\n"
# 1117 "data/maps/MtChimney/scripts.pory"
	.string "humankind and POKéMON!\p"
# 1118 "data/maps/MtChimney/scripts.pory"
	.string "And for that, we need the power of\n"
# 1119 "data/maps/MtChimney/scripts.pory"
	.string "what sleeps within this mountain…\p"
# 1120 "data/maps/MtChimney/scripts.pory"
	.string "Oh! There was no need for you to\n"
# 1121 "data/maps/MtChimney/scripts.pory"
	.string "learn that much.\p"
# 1122 "data/maps/MtChimney/scripts.pory"
	.string "But, no matter!\n"
# 1123 "data/maps/MtChimney/scripts.pory"
	.string "I'll teach you the consequences of\l"
# 1124 "data/maps/MtChimney/scripts.pory"
	.string "meddling in our grand design!$"
# 1125 "data/maps/MtChimney/scripts.pory"

# 1126 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MaxieDefeat::
# 1127 "data/maps/MtChimney/scripts.pory"
# 676 "data/maps/MtChimney/scripts.pory"
# 1128 "data/maps/MtChimney/scripts.pory"
	.string "What?!\p"
# 1129 "data/maps/MtChimney/scripts.pory"
	.string "I, MAXIE, was caught off guard?!$"
# 1130 "data/maps/MtChimney/scripts.pory"

# 1131 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MaxieYouHaventSeenLastOfMagma::
# 1132 "data/maps/MtChimney/scripts.pory"
# 681 "data/maps/MtChimney/scripts.pory"
# 1133 "data/maps/MtChimney/scripts.pory"
	.string "MAXIE: But, enough.\n"
# 1134 "data/maps/MtChimney/scripts.pory"
	.string "I will back off this time.\p"
# 1135 "data/maps/MtChimney/scripts.pory"
	.string "But don't think that this is the last\n"
# 1136 "data/maps/MtChimney/scripts.pory"
	.string "you've seen of TEAM MAGMA.\p"
# 1137 "data/maps/MtChimney/scripts.pory"
	.string "Fufufu…\p"
# 1138 "data/maps/MtChimney/scripts.pory"
	.string "Even without the METEORITE, if we\n"
# 1139 "data/maps/MtChimney/scripts.pory"
	.string "obtain that ORB… Fufufu…$"
# 1140 "data/maps/MtChimney/scripts.pory"

# 1141 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_TabithaIntro::
# 1142 "data/maps/MtChimney/scripts.pory"
# 691 "data/maps/MtChimney/scripts.pory"
# 1143 "data/maps/MtChimney/scripts.pory"
	.string "Hehehe!\p"
# 1144 "data/maps/MtChimney/scripts.pory"
	.string "So you've come all the way here!\p"
# 1145 "data/maps/MtChimney/scripts.pory"
	.string "But you're too late!\n"
# 1146 "data/maps/MtChimney/scripts.pory"
	.string "I've already delivered the METEORITE\l"
# 1147 "data/maps/MtChimney/scripts.pory"
	.string "from METEOR FALLS to the BOSS!$"
# 1148 "data/maps/MtChimney/scripts.pory"

# 1149 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_TabithaDefeat::
# 1150 "data/maps/MtChimney/scripts.pory"
# 699 "data/maps/MtChimney/scripts.pory"
# 1151 "data/maps/MtChimney/scripts.pory"
	.string "Hehehe…\p"
# 1152 "data/maps/MtChimney/scripts.pory"
	.string "Even though I've lost, if our leader\n"
# 1153 "data/maps/MtChimney/scripts.pory"
	.string "awakens that thing…$"
# 1154 "data/maps/MtChimney/scripts.pory"

# 1155 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_TabithaPostBattle::
# 1156 "data/maps/MtChimney/scripts.pory"
# 705 "data/maps/MtChimney/scripts.pory"
# 1157 "data/maps/MtChimney/scripts.pory"
	.string "BOSS, hurry!\n"
# 1158 "data/maps/MtChimney/scripts.pory"
	.string "Give it the METEORITE's energy!\p"
# 1159 "data/maps/MtChimney/scripts.pory"
	.string "Hehehe…$"
# 1160 "data/maps/MtChimney/scripts.pory"

# 1161 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Grunt2Intro::
# 1162 "data/maps/MtChimney/scripts.pory"
# 711 "data/maps/MtChimney/scripts.pory"
# 1163 "data/maps/MtChimney/scripts.pory"
	.string "We of TEAM MAGMA are working hard for\n"
# 1164 "data/maps/MtChimney/scripts.pory"
	.string "everyone's sake.\p"
# 1165 "data/maps/MtChimney/scripts.pory"
	.string "Like, if that thing's power made more\n"
# 1166 "data/maps/MtChimney/scripts.pory"
	.string "land, there'd be more places to live.\p"
# 1167 "data/maps/MtChimney/scripts.pory"
	.string "Everyone'd be happy!$"
# 1168 "data/maps/MtChimney/scripts.pory"

# 1169 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Grunt2Defeat::
# 1170 "data/maps/MtChimney/scripts.pory"
# 719 "data/maps/MtChimney/scripts.pory"
# 1171 "data/maps/MtChimney/scripts.pory"
	.string "Hunh?\n"
# 1172 "data/maps/MtChimney/scripts.pory"
	.string "What do you mean I lost?$"
# 1173 "data/maps/MtChimney/scripts.pory"

# 1174 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Grunt2PostBattle::
# 1175 "data/maps/MtChimney/scripts.pory"
# 724 "data/maps/MtChimney/scripts.pory"
# 1176 "data/maps/MtChimney/scripts.pory"
	.string "Our BOSS says, “It will make everyone\n"
# 1177 "data/maps/MtChimney/scripts.pory"
	.string "happy.”\p"
# 1178 "data/maps/MtChimney/scripts.pory"
	.string "But why does everyone keep getting\n"
# 1179 "data/maps/MtChimney/scripts.pory"
	.string "in our way?$"
# 1180 "data/maps/MtChimney/scripts.pory"

# 1181 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Grunt1Intro::
# 1182 "data/maps/MtChimney/scripts.pory"
# 731 "data/maps/MtChimney/scripts.pory"
# 1183 "data/maps/MtChimney/scripts.pory"
	.string "If there were more land, I'd be able\n"
# 1184 "data/maps/MtChimney/scripts.pory"
	.string "to get a big house of my own!\p"
# 1185 "data/maps/MtChimney/scripts.pory"
	.string "I'm going to build it on hardened lava!$"
# 1186 "data/maps/MtChimney/scripts.pory"

# 1187 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Grunt1Defeat::
# 1188 "data/maps/MtChimney/scripts.pory"
# 737 "data/maps/MtChimney/scripts.pory"
# 1189 "data/maps/MtChimney/scripts.pory"
	.string "My dream of a big house…$"
# 1190 "data/maps/MtChimney/scripts.pory"

# 1191 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Grunt1PostBattle::
# 1192 "data/maps/MtChimney/scripts.pory"
# 741 "data/maps/MtChimney/scripts.pory"
# 1193 "data/maps/MtChimney/scripts.pory"
	.string "A kid like you, you ought to be\n"
# 1194 "data/maps/MtChimney/scripts.pory"
	.string "splashing about in the waves!$"
# 1195 "data/maps/MtChimney/scripts.pory"

# 1196 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_TeamAquaAlwaysMessingWithPlans::
# 1197 "data/maps/MtChimney/scripts.pory"
# 746 "data/maps/MtChimney/scripts.pory"
# 1198 "data/maps/MtChimney/scripts.pory"
	.string "That annoying TEAM AQUA…\n"
# 1199 "data/maps/MtChimney/scripts.pory"
	.string "They always mess with our plans!$"
# 1200 "data/maps/MtChimney/scripts.pory"

# 1201 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MeteoritesPackAmazingPower::
# 1202 "data/maps/MtChimney/scripts.pory"
# 751 "data/maps/MtChimney/scripts.pory"
# 1203 "data/maps/MtChimney/scripts.pory"
	.string "METEORITES pack amazing power!$"
# 1204 "data/maps/MtChimney/scripts.pory"

# 1205 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_YouBetterNotMessWithUs::
# 1206 "data/maps/MtChimney/scripts.pory"
# 755 "data/maps/MtChimney/scripts.pory"
# 1207 "data/maps/MtChimney/scripts.pory"
	.string "You'd better not mess with us!\p"
# 1208 "data/maps/MtChimney/scripts.pory"
	.string "We're trying to awaken that thing\n"
# 1209 "data/maps/MtChimney/scripts.pory"
	.string "for the benefit of everyone!$"
# 1210 "data/maps/MtChimney/scripts.pory"

# 1211 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_AquasNameSimilar::
# 1212 "data/maps/MtChimney/scripts.pory"
# 761 "data/maps/MtChimney/scripts.pory"
# 1213 "data/maps/MtChimney/scripts.pory"
	.string "We're TEAM MAGMA!\p"
# 1214 "data/maps/MtChimney/scripts.pory"
	.string "They're TEAM AQUA!\p"
# 1215 "data/maps/MtChimney/scripts.pory"
	.string "It totally annoys me that they'd\n"
# 1216 "data/maps/MtChimney/scripts.pory"
	.string "use a name like ours!$"
# 1217 "data/maps/MtChimney/scripts.pory"

# 1218 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_DouseThemInFire::
# 1219 "data/maps/MtChimney/scripts.pory"
# 768 "data/maps/MtChimney/scripts.pory"
# 1220 "data/maps/MtChimney/scripts.pory"
	.string "Yeah!\n"
# 1221 "data/maps/MtChimney/scripts.pory"
	.string "Douse them in fire!$"
# 1222 "data/maps/MtChimney/scripts.pory"

# 1223 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_KeepMakingMoreLand::
# 1224 "data/maps/MtChimney/scripts.pory"
# 773 "data/maps/MtChimney/scripts.pory"
# 1225 "data/maps/MtChimney/scripts.pory"
	.string "We're going to keep making more land!$"
# 1226 "data/maps/MtChimney/scripts.pory"

# 1227 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Bufoh::
# 1228 "data/maps/MtChimney/scripts.pory"
# 777 "data/maps/MtChimney/scripts.pory"
# 1229 "data/maps/MtChimney/scripts.pory"
	.string "Bufoh!$"
# 1230 "data/maps/MtChimney/scripts.pory"

# 1231 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ArchieGoStopTeamMagma::
# 1232 "data/maps/MtChimney/scripts.pory"
# 781 "data/maps/MtChimney/scripts.pory"
# 1233 "data/maps/MtChimney/scripts.pory"
	.string "ARCHIE: Grr, {PLAYER}!\n"
# 1234 "data/maps/MtChimney/scripts.pory"
	.string "I should've guessed you'd show up!\p"
# 1235 "data/maps/MtChimney/scripts.pory"
	.string "See for yourself what the fanatics\n"
# 1236 "data/maps/MtChimney/scripts.pory"
	.string "of TEAM MAGMA are up to!\p"
# 1237 "data/maps/MtChimney/scripts.pory"
	.string "They're trying to inject the stolen\n"
# 1238 "data/maps/MtChimney/scripts.pory"
	.string "METEORITE's power into the volcano!\p"
# 1239 "data/maps/MtChimney/scripts.pory"
	.string "Doing something like that will cause\n"
# 1240 "data/maps/MtChimney/scripts.pory"
	.string "the volcano's eruption!$"
# 1241 "data/maps/MtChimney/scripts.pory"

# 1242 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ArchieIHaveMyHandsFull::
# 1243 "data/maps/MtChimney/scripts.pory"
# 792 "data/maps/MtChimney/scripts.pory"
# 1244 "data/maps/MtChimney/scripts.pory"
	.string "ARCHIE: Grrr…\p"
# 1245 "data/maps/MtChimney/scripts.pory"
	.string "I want to stop that MAXIE,\n"
# 1246 "data/maps/MtChimney/scripts.pory"
	.string "but I can't!\p"
# 1247 "data/maps/MtChimney/scripts.pory"
	.string "Not when I have my hands full battling\n"
# 1248 "data/maps/MtChimney/scripts.pory"
	.string "three opponents at once!$"
# 1249 "data/maps/MtChimney/scripts.pory"

# 1250 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ArchieThankYou::
# 1251 "data/maps/MtChimney/scripts.pory"
# 800 "data/maps/MtChimney/scripts.pory"
# 1252 "data/maps/MtChimney/scripts.pory"
	.string "ARCHIE: {PLAYER}!\n"
# 1253 "data/maps/MtChimney/scripts.pory"
	.string "Thank you!\p"
# 1254 "data/maps/MtChimney/scripts.pory"
	.string "With your help, we thwarted TEAM\n"
# 1255 "data/maps/MtChimney/scripts.pory"
	.string "MAGMA's destructive plan!\p"
# 1256 "data/maps/MtChimney/scripts.pory"
	.string "But… You…\n"
# 1257 "data/maps/MtChimney/scripts.pory"
	.string "Whose side are you on?\p"
# 1258 "data/maps/MtChimney/scripts.pory"
	.string "Ah, it doesn't matter.\p"
# 1259 "data/maps/MtChimney/scripts.pory"
	.string "We will remain vigilant and keep up\n"
# 1260 "data/maps/MtChimney/scripts.pory"
	.string "our pursuit of TEAM MAGMA.\p"
# 1261 "data/maps/MtChimney/scripts.pory"
	.string "{PLAYER}, we shall meet again!$"
# 1262 "data/maps/MtChimney/scripts.pory"

# 1263 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MagmaOutnumbersUs::
# 1264 "data/maps/MtChimney/scripts.pory"
# 813 "data/maps/MtChimney/scripts.pory"
# 1265 "data/maps/MtChimney/scripts.pory"
	.string "Darn… TEAM MAGMA outnumbers us!\n"
# 1266 "data/maps/MtChimney/scripts.pory"
	.string "We can't keep up with them!$"
# 1267 "data/maps/MtChimney/scripts.pory"

# 1268 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_LessHabitatForWaterPokemon::
# 1269 "data/maps/MtChimney/scripts.pory"
# 818 "data/maps/MtChimney/scripts.pory"
# 1270 "data/maps/MtChimney/scripts.pory"
	.string "If they expand the land, there'll be\n"
# 1271 "data/maps/MtChimney/scripts.pory"
	.string "less habitats for WATER POKéMON!$"
# 1272 "data/maps/MtChimney/scripts.pory"

# 1273 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MagmasNameSimilar::
# 1274 "data/maps/MtChimney/scripts.pory"
# 823 "data/maps/MtChimney/scripts.pory"
# 1275 "data/maps/MtChimney/scripts.pory"
	.string "We're TEAM AQUA!\p"
# 1276 "data/maps/MtChimney/scripts.pory"
	.string "They're TEAM MAGMA!\p"
# 1277 "data/maps/MtChimney/scripts.pory"
	.string "It burns me up that they'd use such\n"
# 1278 "data/maps/MtChimney/scripts.pory"
	.string "a confusing name!$"
# 1279 "data/maps/MtChimney/scripts.pory"

# 1280 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Bushaa::
# 1281 "data/maps/MtChimney/scripts.pory"
# 830 "data/maps/MtChimney/scripts.pory"
# 1282 "data/maps/MtChimney/scripts.pory"
	.string "Bushaa!$"
# 1283 "data/maps/MtChimney/scripts.pory"

# 1284 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_LavaCookiesJust200::
# 1285 "data/maps/MtChimney/scripts.pory"
# 834 "data/maps/MtChimney/scripts.pory"
# 1286 "data/maps/MtChimney/scripts.pory"
	.string "LAVA COOKIES are MT. CHIMNEY's local\n"
# 1287 "data/maps/MtChimney/scripts.pory"
	.string "specialty.\p"
# 1288 "data/maps/MtChimney/scripts.pory"
	.string "Try one. It's just ¥200.$"
# 1289 "data/maps/MtChimney/scripts.pory"

# 1290 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ThankYouDear::
# 1291 "data/maps/MtChimney/scripts.pory"
# 840 "data/maps/MtChimney/scripts.pory"
# 1292 "data/maps/MtChimney/scripts.pory"
	.string "Thank you, dear!$"
# 1293 "data/maps/MtChimney/scripts.pory"

# 1294 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_YouveNotGotTheMoney::
# 1295 "data/maps/MtChimney/scripts.pory"
# 844 "data/maps/MtChimney/scripts.pory"
# 1296 "data/maps/MtChimney/scripts.pory"
	.string "Oh, dear. You can't buy a thing if\n"
# 1297 "data/maps/MtChimney/scripts.pory"
	.string "you've not got the money.$"
# 1298 "data/maps/MtChimney/scripts.pory"

# 1299 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_OhFineThen::
# 1300 "data/maps/MtChimney/scripts.pory"
# 849 "data/maps/MtChimney/scripts.pory"
# 1301 "data/maps/MtChimney/scripts.pory"
	.string "Oh, fine then.$"
# 1302 "data/maps/MtChimney/scripts.pory"

# 1303 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MetoriteFittedOnMachine::
# 1304 "data/maps/MtChimney/scripts.pory"
# 853 "data/maps/MtChimney/scripts.pory"
# 1305 "data/maps/MtChimney/scripts.pory"
	.string "A METEORITE is fitted on a mysterious\n"
# 1306 "data/maps/MtChimney/scripts.pory"
	.string "machine…\p"
# 1307 "data/maps/MtChimney/scripts.pory"
	.string "The machine seems to be storing\n"
# 1308 "data/maps/MtChimney/scripts.pory"
	.string "energy in the METEORITE.$"
# 1309 "data/maps/MtChimney/scripts.pory"

# 1310 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_RemoveTheMeteorite::
# 1311 "data/maps/MtChimney/scripts.pory"
# 860 "data/maps/MtChimney/scripts.pory"
# 1312 "data/maps/MtChimney/scripts.pory"
	.string "A METEORITE is fitted on a mysterious\n"
# 1313 "data/maps/MtChimney/scripts.pory"
	.string "machine…\p"
# 1314 "data/maps/MtChimney/scripts.pory"
	.string "Do you want to remove the METEORITE?$"
# 1315 "data/maps/MtChimney/scripts.pory"

# 1316 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_PlayerRemovedMeteorite::
# 1317 "data/maps/MtChimney/scripts.pory"
# 866 "data/maps/MtChimney/scripts.pory"
# 1318 "data/maps/MtChimney/scripts.pory"
	.string "{PLAYER} removed the METEORITE from\n"
# 1319 "data/maps/MtChimney/scripts.pory"
	.string "the mysterious machine.$"
# 1320 "data/maps/MtChimney/scripts.pory"

# 1321 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_PlayerLeftMeteorite::
# 1322 "data/maps/MtChimney/scripts.pory"
# 871 "data/maps/MtChimney/scripts.pory"
# 1323 "data/maps/MtChimney/scripts.pory"
	.string "{PLAYER} left the METEORITE where\n"
# 1324 "data/maps/MtChimney/scripts.pory"
	.string "it was.$"
# 1325 "data/maps/MtChimney/scripts.pory"

# 1326 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MachineMakesNoResponse::
# 1327 "data/maps/MtChimney/scripts.pory"
# 876 "data/maps/MtChimney/scripts.pory"
# 1328 "data/maps/MtChimney/scripts.pory"
	.string "This mysterious machine…\n"
# 1329 "data/maps/MtChimney/scripts.pory"
	.string "It makes no response whatsoever.$"
# 1330 "data/maps/MtChimney/scripts.pory"

# 1331 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_RouteSign::
# 1332 "data/maps/MtChimney/scripts.pory"
# 881 "data/maps/MtChimney/scripts.pory"
# 1333 "data/maps/MtChimney/scripts.pory"
	.string "{DOWN_ARROW} JAGGED PATH\n"
# 1334 "data/maps/MtChimney/scripts.pory"
	.string "LAVARIDGE TOWN AHEAD$"
# 1335 "data/maps/MtChimney/scripts.pory"

# 1336 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyIntro::
# 1337 "data/maps/MtChimney/scripts.pory"
# 886 "data/maps/MtChimney/scripts.pory"
# 1338 "data/maps/MtChimney/scripts.pory"
	.string "I've been to the hot springs and\n"
# 1339 "data/maps/MtChimney/scripts.pory"
	.string "refreshed my tired bones.\l"
# 1340 "data/maps/MtChimney/scripts.pory"
	.string "Right now I'm feeling strong!$"
# 1341 "data/maps/MtChimney/scripts.pory"

# 1342 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyDefeat::
# 1343 "data/maps/MtChimney/scripts.pory"
# 892 "data/maps/MtChimney/scripts.pory"
# 1344 "data/maps/MtChimney/scripts.pory"
	.string "Oh, my goodness.\n"
# 1345 "data/maps/MtChimney/scripts.pory"
	.string "Now, aren't you something!$"
# 1346 "data/maps/MtChimney/scripts.pory"

# 1347 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyPostBattle::
# 1348 "data/maps/MtChimney/scripts.pory"
# 897 "data/maps/MtChimney/scripts.pory"
# 1349 "data/maps/MtChimney/scripts.pory"
	.string "Well, well, I've lost. I can't call\n"
# 1350 "data/maps/MtChimney/scripts.pory"
	.string "myself an EXPERT now, can I?$"
# 1351 "data/maps/MtChimney/scripts.pory"

# 1352 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyRegister::
# 1353 "data/maps/MtChimney/scripts.pory"
# 902 "data/maps/MtChimney/scripts.pory"
# 1354 "data/maps/MtChimney/scripts.pory"
	.string "Thank you, child. It was fun, as if\n"
# 1355 "data/maps/MtChimney/scripts.pory"
	.string "I were battling my own grandchild.\p"
# 1356 "data/maps/MtChimney/scripts.pory"
	.string "Please, come see me again for\n"
# 1357 "data/maps/MtChimney/scripts.pory"
	.string "a rematch.$"
# 1358 "data/maps/MtChimney/scripts.pory"

# 1359 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyRematchIntro::
# 1360 "data/maps/MtChimney/scripts.pory"
# 909 "data/maps/MtChimney/scripts.pory"
# 1361 "data/maps/MtChimney/scripts.pory"
	.string "If you can mesh your heart with those\n"
# 1362 "data/maps/MtChimney/scripts.pory"
	.string "of your POKéMON, why, you should be\l"
# 1363 "data/maps/MtChimney/scripts.pory"
	.string "able to achieve great things.$"
# 1364 "data/maps/MtChimney/scripts.pory"

# 1365 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyRematchDefeat::
# 1366 "data/maps/MtChimney/scripts.pory"
# 915 "data/maps/MtChimney/scripts.pory"
# 1367 "data/maps/MtChimney/scripts.pory"
	.string "Oh, my goodness.\n"
# 1368 "data/maps/MtChimney/scripts.pory"
	.string "Now, aren't you something!$"
# 1369 "data/maps/MtChimney/scripts.pory"

# 1370 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyPostRematch::
# 1371 "data/maps/MtChimney/scripts.pory"
# 920 "data/maps/MtChimney/scripts.pory"
# 1372 "data/maps/MtChimney/scripts.pory"
	.string "Perhaps your heart has become one\n"
# 1373 "data/maps/MtChimney/scripts.pory"
	.string "with the hearts of your POKéMON.$"
# 1374 "data/maps/MtChimney/scripts.pory"

# 1375 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MelissaIntro::
# 1376 "data/maps/MtChimney/scripts.pory"
# 925 "data/maps/MtChimney/scripts.pory"
# 1377 "data/maps/MtChimney/scripts.pory"
	.string "I've got the fire in me, baby.\n"
# 1378 "data/maps/MtChimney/scripts.pory"
	.string "I can't stand it! I have to battle!$"
# 1379 "data/maps/MtChimney/scripts.pory"

# 1380 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MelissaDefeat::
# 1381 "data/maps/MtChimney/scripts.pory"
# 930 "data/maps/MtChimney/scripts.pory"
# 1382 "data/maps/MtChimney/scripts.pory"
	.string "Ooh, that was a scorching-hot match!$"
# 1383 "data/maps/MtChimney/scripts.pory"

# 1384 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MelissaPostBattle::
# 1385 "data/maps/MtChimney/scripts.pory"
# 934 "data/maps/MtChimney/scripts.pory"
# 1386 "data/maps/MtChimney/scripts.pory"
	.string "The heat of MT. CHIMNEY warms\n"
# 1387 "data/maps/MtChimney/scripts.pory"
	.string "me up, baby!$"
# 1388 "data/maps/MtChimney/scripts.pory"

# 1389 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SheilaIntro::
# 1390 "data/maps/MtChimney/scripts.pory"
# 939 "data/maps/MtChimney/scripts.pory"
# 1391 "data/maps/MtChimney/scripts.pory"
	.string "I've finally made it to MT. CHIMNEY.\n"
# 1392 "data/maps/MtChimney/scripts.pory"
	.string "I want to make my POKéMON battle!$"
# 1393 "data/maps/MtChimney/scripts.pory"

# 1394 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SheilaDefeat::
# 1395 "data/maps/MtChimney/scripts.pory"
# 944 "data/maps/MtChimney/scripts.pory"
# 1396 "data/maps/MtChimney/scripts.pory"
	.string "The way you battle…\n"
# 1397 "data/maps/MtChimney/scripts.pory"
	.string "It's like a MT. CHIMNEY eruption!$"
# 1398 "data/maps/MtChimney/scripts.pory"

# 1399 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SheilaPostBattle::
# 1400 "data/maps/MtChimney/scripts.pory"
# 949 "data/maps/MtChimney/scripts.pory"
# 1401 "data/maps/MtChimney/scripts.pory"
	.string "Like I said, I've finally made it to\n"
# 1402 "data/maps/MtChimney/scripts.pory"
	.string "MT. CHIMNEY. It would be a shame if\l"
# 1403 "data/maps/MtChimney/scripts.pory"
	.string "I only do a little sightseeing…\p"
# 1404 "data/maps/MtChimney/scripts.pory"
	.string "I want to get in some battles and buy\n"
# 1405 "data/maps/MtChimney/scripts.pory"
	.string "COOKIES as souvenirs.$"
# 1406 "data/maps/MtChimney/scripts.pory"

# 1407 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShirleyIntro::
# 1408 "data/maps/MtChimney/scripts.pory"
# 957 "data/maps/MtChimney/scripts.pory"
# 1409 "data/maps/MtChimney/scripts.pory"
	.string "Since I bathed in the hot springs,\n"
# 1410 "data/maps/MtChimney/scripts.pory"
	.string "I've been feeling great!\l"
# 1411 "data/maps/MtChimney/scripts.pory"
	.string "I'm sure I'm going to win!$"
# 1412 "data/maps/MtChimney/scripts.pory"

# 1413 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShirleyDefeat::
# 1414 "data/maps/MtChimney/scripts.pory"
# 963 "data/maps/MtChimney/scripts.pory"
# 1415 "data/maps/MtChimney/scripts.pory"
	.string "Yowch!\n"
# 1416 "data/maps/MtChimney/scripts.pory"
	.string "I'm getting a chill out of the water.$"
# 1417 "data/maps/MtChimney/scripts.pory"

# 1418 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShirleyPostBattle::
# 1419 "data/maps/MtChimney/scripts.pory"
# 968 "data/maps/MtChimney/scripts.pory"
# 1420 "data/maps/MtChimney/scripts.pory"
	.string "I'll have to take another dip in the\n"
# 1421 "data/maps/MtChimney/scripts.pory"
	.string "hot springs. Want to join me?\p"
# 1422 "data/maps/MtChimney/scripts.pory"
	.string "Just joking!$"
# 1423 "data/maps/MtChimney/scripts.pory"

# 1424 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerIntro::
# 1425 "data/maps/MtChimney/scripts.pory"
# 974 "data/maps/MtChimney/scripts.pory"
# 1426 "data/maps/MtChimney/scripts.pory"
	.string "This is one fine mountain! Plenty of\n"
# 1427 "data/maps/MtChimney/scripts.pory"
	.string "hot people around for company!$"
# 1428 "data/maps/MtChimney/scripts.pory"

# 1429 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerDefeat::
# 1430 "data/maps/MtChimney/scripts.pory"
# 979 "data/maps/MtChimney/scripts.pory"
# 1431 "data/maps/MtChimney/scripts.pory"
	.string "Oh, you're a real firebrand, too!$"
# 1432 "data/maps/MtChimney/scripts.pory"

# 1433 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerPostBattle::
# 1434 "data/maps/MtChimney/scripts.pory"
# 983 "data/maps/MtChimney/scripts.pory"
# 1435 "data/maps/MtChimney/scripts.pory"
	.string "I think I need a dip in LAVARIDGE\n"
# 1436 "data/maps/MtChimney/scripts.pory"
	.string "HOT SPRING with the locals!$"
# 1437 "data/maps/MtChimney/scripts.pory"

# 1438 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerRegister::
# 1439 "data/maps/MtChimney/scripts.pory"
# 988 "data/maps/MtChimney/scripts.pory"
# 1440 "data/maps/MtChimney/scripts.pory"
	.string "I like little fireballs like you.\n"
# 1441 "data/maps/MtChimney/scripts.pory"
	.string "Let me register you in my POKéNAV.$"
# 1442 "data/maps/MtChimney/scripts.pory"

# 1443 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerRematchIntro::
# 1444 "data/maps/MtChimney/scripts.pory"
# 993 "data/maps/MtChimney/scripts.pory"
# 1445 "data/maps/MtChimney/scripts.pory"
	.string "I'm happily surrounded by hot people\n"
# 1446 "data/maps/MtChimney/scripts.pory"
	.string "around these parts. I won't lose!$"
# 1447 "data/maps/MtChimney/scripts.pory"

# 1448 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerRematchDefeat::
# 1449 "data/maps/MtChimney/scripts.pory"
# 998 "data/maps/MtChimney/scripts.pory"
# 1450 "data/maps/MtChimney/scripts.pory"
	.string "Gosh, you're still the same\n"
# 1451 "data/maps/MtChimney/scripts.pory"
	.string "firebrand as before!$"
# 1452 "data/maps/MtChimney/scripts.pory"

# 1453 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerPostRematch::
# 1454 "data/maps/MtChimney/scripts.pory"
# 1003 "data/maps/MtChimney/scripts.pory"
# 1455 "data/maps/MtChimney/scripts.pory"
	.string "Actually, it really is hot here.\n"
# 1456 "data/maps/MtChimney/scripts.pory"
	.string "I'm overdressed for these parts.$"
