# 1 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 2 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_MapScripts::
# 3 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 2 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 4 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, MeteorFalls_1F_1R_OnLoad
# 5 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.byte 0
# 6 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 7 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 8 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_OnLoad::
# 9 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 6 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 10 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, MeteorFalls_1F_1R_OnLoad_2
# 11 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_OnLoad_1:
# 12 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	end
# 13 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 14 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_OnLoad_2:
# 15 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 7 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 16 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	call MeteorFalls_1F_1R_EventScript_OpenStevensCave
# 17 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	goto MeteorFalls_1F_1R_OnLoad_1
# 18 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 19 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 20 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_EventScript_OpenStevensCave::
# 21 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 13 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 22 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setmetatile 4, 1, METATILE_MeteorFalls_CaveEntrance_Top, TRUE
# 23 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 14 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 24 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setmetatile 3, 2, METATILE_MeteorFalls_CaveEntrance_Left, TRUE
# 25 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 15 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 26 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setmetatile 4, 2, METATILE_MeteorFalls_CaveEntrance_Bottom, FALSE
# 27 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 16 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 28 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setmetatile 5, 2, METATILE_MeteorFalls_CaveEntrance_Right, TRUE
# 29 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	return
# 30 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 31 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 32 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene::
# 33 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 21 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 34 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	lockall
# 35 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 22 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 36 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, FALSE
# 37 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 23 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 38 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceDown
# 39 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 24 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 40 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 41 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 25 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 42 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	delay 30
# 43 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 26 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 44 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_METEOR_FALLS_MAGMA_GRUNT_1, Common_Movement_WalkInPlaceDown
# 45 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 27 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 46 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 47 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 28 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 48 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_Text_WithThisMeteorite, MSGBOX_DEFAULT
# 49 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 29 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 50 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	closemessage
# 51 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 30 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 52 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_METEOR_FALLS_MAGMA_GRUNT_1, Common_Movement_WalkInPlaceFasterUp
# 53 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 31 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 54 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_METEOR_FALLS_MAGMA_GRUNT_2, Common_Movement_WalkInPlaceFasterUp
# 55 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 32 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 56 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 57 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 33 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 58 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	playse SE_PIN
# 59 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 34 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 60 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_METEOR_FALLS_MAGMA_GRUNT_1, Common_Movement_ExclamationMark
# 61 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 35 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 62 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 63 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 36 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 64 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_METEOR_FALLS_MAGMA_GRUNT_1, Common_Movement_Delay48
# 65 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 37 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 66 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 67 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 38 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 68 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_Text_DontExpectMercyFromMagma, MSGBOX_DEFAULT
# 69 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 39 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 70 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	closemessage
# 71 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 40 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 72 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_METEOR_FALLS_MAGMA_GRUNT_1, MeteorFalls_1F_1R_Movement_MagmaGruntApproachPlayer
# 73 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 41 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 74 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 75 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 42 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 76 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_Text_HoldItRightThereMagma, MSGBOX_DEFAULT
# 77 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 43 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 78 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	closemessage
# 79 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 44 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 80 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 81 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 45 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 82 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_METEOR_FALLS_MAGMA_GRUNT_1, Common_Movement_WalkInPlaceFasterLeft
# 83 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 46 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 84 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_METEOR_FALLS_MAGMA_GRUNT_2, Common_Movement_WalkInPlaceFasterLeft
# 85 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 47 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 86 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 87 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 48 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 88 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	addobject LOCALID_METEOR_FALLS_ARCHIE
# 89 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 49 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 90 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	addobject LOCALID_METEOR_FALLS_AQUA_GRUNT_1
# 91 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 50 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 92 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	addobject LOCALID_METEOR_FALLS_AQUA_GRUNT_2
# 93 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 51 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 94 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 95 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 52 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 96 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_METEOR_FALLS_ARCHIE, MeteorFalls_1F_1R_Movement_ArchieArrive
# 97 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 53 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 98 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_METEOR_FALLS_AQUA_GRUNT_1, MeteorFalls_1F_1R_Movement_AquaGrunt1Arrive
# 99 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 54 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 100 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_METEOR_FALLS_AQUA_GRUNT_2, MeteorFalls_1F_1R_Movement_AquaGrunt2Arrive
# 101 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 55 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 102 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 103 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 56 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 104 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_METEOR_FALLS_MAGMA_GRUNT_1, Common_Movement_WalkInPlaceFasterLeft
# 105 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 57 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 106 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_METEOR_FALLS_MAGMA_GRUNT_2, Common_Movement_WalkInPlaceFasterLeft
# 107 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 58 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 108 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 109 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 59 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 110 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_Text_BeSeeingYouTeamAqua, MSGBOX_DEFAULT
# 111 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 60 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 112 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	closemessage
# 113 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 61 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 114 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_PLAYER, MeteorFalls_1F_1R_Movement_PushPlayerOutOfWay
# 115 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 62 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 116 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_METEOR_FALLS_MAGMA_GRUNT_1, MeteorFalls_1F_1R_Movement_MagmaGrunt1Exit
# 117 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 63 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 118 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_METEOR_FALLS_MAGMA_GRUNT_2, MeteorFalls_1F_1R_Movement_MagmaGrunt2Exit
# 119 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 64 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 120 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 121 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 65 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 122 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	removeobject LOCALID_METEOR_FALLS_MAGMA_GRUNT_1
# 123 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 66 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 124 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	removeobject LOCALID_METEOR_FALLS_MAGMA_GRUNT_2
# 125 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 67 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 126 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_METEOR_FALLS_ARCHIE, MeteorFalls_1F_1R_Movement_ArchieApproachPlayer
# 127 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 68 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 128 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 129 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 69 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 130 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_Text_ArchieSeenYouBefore, MSGBOX_DEFAULT
# 131 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 70 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 132 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	closemessage
# 133 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 71 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 134 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_METEOR_FALLS_AQUA_GRUNT_1, MeteorFalls_1F_1R_Movement_AquaGrunt1ApproachArchie
# 135 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 72 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 136 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_METEOR_FALLS_AQUA_GRUNT_2, MeteorFalls_1F_1R_Movement_AquaGrunt2ApproachArchie
# 137 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 73 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 138 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 139 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 74 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 140 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_Text_BossWeShouldChaseMagma, MSGBOX_DEFAULT
# 141 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 75 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 142 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_METEOR_FALLS_ARCHIE, Common_Movement_WalkInPlaceFasterDown
# 143 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 76 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 144 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 145 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 77 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 146 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_Text_ArchieYesNoTellingWhatMagmaWillDo, MSGBOX_DEFAULT
# 147 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 78 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 148 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_METEOR_FALLS_ARCHIE, Common_Movement_WalkInPlaceFasterLeft
# 149 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 79 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 150 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 151 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 80 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 152 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_Text_ArchieFarewell, MSGBOX_DEFAULT
# 153 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 81 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 154 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	closemessage
# 155 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 82 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 156 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_METEOR_FALLS_ARCHIE, MeteorFalls_1F_1R_Movement_ArchieExit
# 157 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 83 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 158 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_METEOR_FALLS_AQUA_GRUNT_1, MeteorFalls_1F_1R_Movement_AquaGrunt1Exit
# 159 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 84 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 160 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_METEOR_FALLS_AQUA_GRUNT_2, MeteorFalls_1F_1R_Movement_AquaGrunt2Exit
# 161 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 85 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 162 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 163 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 86 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 164 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	fadedefaultbgm
# 165 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 87 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 166 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	removeobject LOCALID_METEOR_FALLS_ARCHIE
# 167 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 88 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 168 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	removeobject LOCALID_METEOR_FALLS_AQUA_GRUNT_1
# 169 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 89 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 170 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	removeobject LOCALID_METEOR_FALLS_AQUA_GRUNT_2
# 171 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 90 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 172 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setflag FLAG_HIDE_ROUTE_112_TEAM_MAGMA
# 173 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 91 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 174 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setflag FLAG_MET_ARCHIE_METEOR_FALLS
# 175 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 92 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 176 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setflag FLAG_HIDE_FALLARBOR_TOWN_BATTLE_TENT_SCOTT
# 177 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 93 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 178 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setvar VAR_METEOR_FALLS_STATE, 1
# 179 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 94 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 180 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	releaseall
# 181 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	end
# 182 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 183 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 184 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 98 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 185 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_MagmaGruntApproachPlayer:
# 186 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 99 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 187 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 188 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 100 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 189 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 190 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 101 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 191 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_in_place_faster_up
# 192 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 102 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 193 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end
# 194 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 195 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 105 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 196 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_MagmaGrunt1Exit:
# 197 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 106 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 198 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_up
# 199 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 107 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 200 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_up
# 201 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 108 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 202 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 203 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 109 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 204 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 205 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 110 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 206 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 207 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 111 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 208 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 209 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 112 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 210 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 211 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 113 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 212 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 213 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 114 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 214 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 215 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 115 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 216 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end
# 217 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 218 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 118 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 219 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_MagmaGrunt2Exit:
# 220 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 119 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 221 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_up
# 222 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 120 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 223 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_up
# 224 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 121 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 225 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_up
# 226 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 122 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 227 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 228 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 123 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 229 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 230 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 124 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 231 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 232 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 125 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 233 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 234 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 126 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 235 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 236 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 127 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 237 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 238 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 128 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 239 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 240 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 129 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 241 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end
# 242 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 243 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 132 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 244 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_ArchieArrive:
# 245 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 133 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 246 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 247 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 134 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 248 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 249 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 135 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 250 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 251 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 136 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 252 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 253 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 137 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 254 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 255 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 138 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 256 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 257 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 139 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 258 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end
# 259 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 260 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 142 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 261 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_AquaGrunt1Arrive:
# 262 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 143 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 263 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	delay_16
# 264 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 144 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 265 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	delay_16
# 266 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 145 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 267 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 268 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 146 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 269 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 270 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 147 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 271 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 272 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 148 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 273 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 274 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 149 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 275 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 276 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 150 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 277 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end
# 278 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 279 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 153 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 280 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_AquaGrunt2Arrive:
# 281 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 154 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 282 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	delay_16
# 283 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 155 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 284 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	delay_16
# 285 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 156 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 286 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 287 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 157 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 288 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 289 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 158 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 290 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 291 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 159 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 292 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 293 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 160 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 294 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 295 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 161 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 296 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end
# 297 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 298 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 164 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 299 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_ArchieExit:
# 300 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 165 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 301 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 302 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 166 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 303 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 304 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 167 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 305 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 306 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 168 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 307 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 308 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 169 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 309 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 310 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 170 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 311 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 312 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 171 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 313 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 314 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 172 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 315 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end
# 316 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 317 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 175 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 318 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_ArchieApproachPlayer:
# 319 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 176 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 320 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 321 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 177 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 322 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 323 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 178 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 324 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_up
# 325 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 179 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 326 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_up
# 327 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 180 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 328 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_in_place_faster_left
# 329 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 181 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 330 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end
# 331 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 332 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 184 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 333 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_AquaGrunt1Exit:
# 334 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 185 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 335 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_up
# 336 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 186 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 337 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_up
# 338 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 187 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 339 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 340 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 188 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 341 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 342 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 189 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 343 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 344 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 190 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 345 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 346 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 191 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 347 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 348 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 192 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 349 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 350 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 193 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 351 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 352 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 194 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 353 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end
# 354 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 355 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 197 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 356 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_AquaGrunt1ApproachArchie:
# 357 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 198 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 358 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 359 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 199 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 360 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 361 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 200 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 362 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 363 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 201 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 364 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_in_place_faster_up
# 365 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 202 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 366 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end
# 367 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 368 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 205 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 369 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_AquaGrunt2Exit:
# 370 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 206 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 371 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_up
# 372 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 207 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 373 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_up
# 374 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 208 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 375 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_up
# 376 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 209 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 377 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 378 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 210 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 379 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 380 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 211 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 381 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 382 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 212 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 383 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 384 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 213 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 385 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 386 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 214 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 387 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 388 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 215 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 389 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 390 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 216 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 391 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end
# 392 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 393 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 219 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 394 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_AquaGrunt2ApproachArchie:
# 395 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 220 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 396 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 397 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 221 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 398 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 399 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 222 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 400 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 401 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 223 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 402 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_in_place_faster_up
# 403 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 224 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 404 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end
# 405 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 406 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_PushPlayerOutOfWay::
# 407 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 228 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 408 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_in_place_faster_down
# 409 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 229 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 410 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	delay_4
# 411 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 230 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 412 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_in_place_faster_right
# 413 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 231 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 414 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	lock_facing_direction
# 415 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 232 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 416 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_left
# 417 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 233 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 418 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	unlock_facing_direction
# 419 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 234 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 420 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	face_right
# 421 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 235 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 422 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end
# 423 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	return
# 424 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 425 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 426 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_EventScript_ProfCozmo::
# 427 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 239 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 428 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	lock
# 429 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 240 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 430 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	faceplayer
# 431 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 241 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 432 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	goto_if_set FLAG_MET_PROF_COZMO, MeteorFalls_1F_1R_EventScript_ProfCozmo_2
# 433 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_EventScript_ProfCozmo_1:
# 434 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 244 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 435 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setflag FLAG_MET_PROF_COZMO
# 436 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 245 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 437 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_Text_MeetProfCozmo, MSGBOX_DEFAULT
# 438 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 246 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 439 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	release
# 440 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	end
# 441 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 442 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_EventScript_ProfCozmo_2:
# 443 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 242 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 444 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	goto MeteorFalls_1F_1R_EventScript_MetCozmo
# 445 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	goto MeteorFalls_1F_1R_EventScript_ProfCozmo_1
# 446 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 447 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 448 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_EventScript_MetCozmo::
# 449 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 251 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 450 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_Text_WhatsTeamMagmaDoingAtMtChimney, MSGBOX_DEFAULT
# 451 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 252 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 452 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	release
# 453 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	end
# 454 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 455 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 456 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Text_WithThisMeteorite::
# 457 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 256 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 458 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Hehehe!\p"
# 459 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "With this METEORITE, that thing in\n"
# 460 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "MT. CHIMNEY will…$"
# 461 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 462 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Text_DontExpectMercyFromMagma::
# 463 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 262 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 464 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Heh?\p"
# 465 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "I don't know who you are, but if you get\n"
# 466 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "in the way of TEAM MAGMA, don't\l"
# 467 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "expect any mercy!$"
# 468 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 469 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Text_HoldItRightThereMagma::
# 470 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 269 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 471 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Hold it right there, TEAM MAGMA!\p"
# 472 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "You're badly mistaken if you think you\n"
# 473 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "can have your way with the world!$"
# 474 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 475 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Text_BeSeeingYouTeamAqua::
# 476 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 275 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 477 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Hehehe!\n"
# 478 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Even TEAM AQUA joins us!\p"
# 479 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "But it's too much trouble to deal with\n"
# 480 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "you all…\p"
# 481 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Heh, it doesn't matter!\p"
# 482 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "We've got the METEORITE, so off to\n"
# 483 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "MT. CHIMNEY we go!\p"
# 484 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Hehehe! Be seeing you, you TEAM\n"
# 485 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "AQUA dingbats!$"
# 486 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 487 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Text_ArchieSeenYouBefore::
# 488 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 287 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 489 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "ARCHIE: Didn't I see you before?\n"
# 490 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "At SLATEPORT's MUSEUM?\p"
# 491 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Ah, so your name is {PLAYER}.\p"
# 492 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "At the time, I thought you were one\n"
# 493 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "of TEAM MAGMA's goons.\p"
# 494 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Humph…\n"
# 495 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "You're one odd kid.\p"
# 496 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "TEAM MAGMA is a dangerous group of\n"
# 497 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "total fanatics.\p"
# 498 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "They engage in destruction, claiming\n"
# 499 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "to expand the land mass.\p"
# 500 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "They are the rivals to us,\n"
# 501 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "the sea-loving TEAM AQUA!$"
# 502 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 503 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Text_BossWeShouldChaseMagma::
# 504 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 303 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 505 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "BOSS, we should give chase to\n"
# 506 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "TEAM MAGMA…$"
# 507 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 508 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Text_ArchieYesNoTellingWhatMagmaWillDo::
# 509 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 308 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 510 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "ARCHIE: Yes, yes, we must!\n"
# 511 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "We've got to hurry.\p"
# 512 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "There's no telling what TEAM MAGMA\n"
# 513 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "will do at MT. CHIMNEY!$"
# 514 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 515 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Text_ArchieFarewell::
# 516 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 315 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 517 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "ARCHIE: {PLAYER}, you should keep\n"
# 518 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "an eye out for TEAM MAGMA, too.\p"
# 519 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Farewell!$"
# 520 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 521 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Text_MeetProfCozmo::
# 522 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 321 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 523 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "I… I'm COZMO…\n"
# 524 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "I'm a PROFESSOR…\p"
# 525 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "TEAM MAGMA asked me to guide them\n"
# 526 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "to METEOR FALLS…\p"
# 527 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "But they tricked me.\n"
# 528 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "They even took my METEORITE away…\p"
# 529 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "And then another similar bunch,\n"
# 530 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "TEAM AQUA showed up.\p"
# 531 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "After that…\n"
# 532 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "I don't understand any of it.\p"
# 533 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "But that TEAM MAGMA…\p"
# 534 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "What are they going to do with that\n"
# 535 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "METEORITE at MT. CHIMNEY?$"
# 536 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 537 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Text_WhatsTeamMagmaDoingAtMtChimney::
# 538 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 337 "data/maps/MeteorFalls_1F_1R/scripts.pory"
# 539 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "PROF. COZMO: But that TEAM MAGMA…\p"
# 540 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "What are they going to do with that\n"
# 541 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "METEORITE at MT. CHIMNEY?$"
