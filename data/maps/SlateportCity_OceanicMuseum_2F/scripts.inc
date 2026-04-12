# 1 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 2 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_MapScripts::
# 3 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.byte 0
# 4 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 5 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 6 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_CaptStern::
# 7 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 4 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 8 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	lock
# 9 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 5 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 10 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	faceplayer
# 11 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 6 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 12 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_ThankYouForTheParts, MSGBOX_DEFAULT
# 13 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 7 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 14 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	closemessage
# 15 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 8 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 16 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, TRUE
# 17 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 9 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 18 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	addobject LOCALID_OCEANIC_MUSEUM_2F_GRUNT_1
# 19 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 10 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 20 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement LOCALID_OCEANIC_MUSEUM_2F_GRUNT_1, SlateportCity_OceanicMuseum_2F_Movement_FirstGruntEnter
# 21 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 11 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 22 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 23 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 12 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 24 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	addobject LOCALID_OCEANIC_MUSEUM_2F_GRUNT_2
# 25 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 13 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 26 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement LOCALID_OCEANIC_MUSEUM_2F_GRUNT_2, SlateportCity_OceanicMuseum_2F_Movement_SecondGruntEnter
# 27 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 14 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 28 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 29 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 15 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 30 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement LOCALID_OCEANIC_MUSEUM_2F_GRUNT_1, SlateportCity_OceanicMuseum_2F_Movement_FirstGruntApproach
# 31 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 16 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 32 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement LOCALID_OCEANIC_MUSEUM_2F_GRUNT_2, SlateportCity_OceanicMuseum_2F_Movement_SecondGruntApproach
# 33 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 17 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 34 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 35 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 18 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 36 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	compare VAR_FACING, DIR_SOUTH
# 37 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	goto_if_eq SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_2
# 38 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_1:
# 39 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 21 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 40 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	compare VAR_FACING, DIR_EAST
# 41 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	goto_if_eq SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_5
# 42 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_4:
# 43 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 24 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 44 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_WellTakeThoseParts, MSGBOX_DEFAULT
# 45 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 25 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 46 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	compare VAR_FACING, DIR_EAST
# 47 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	goto_if_ne SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_8
# 48 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_7:
# 49 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 28 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 50 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_SternWhoAreYou, MSGBOX_DEFAULT
# 51 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 29 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 52 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_WereTeamAqua, MSGBOX_DEFAULT
# 53 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 30 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 54 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	closemessage
# 55 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 31 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 56 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement LOCALID_OCEANIC_MUSEUM_2F_GRUNT_2, SlateportCity_OceanicMuseum_2F_Movement_GruntApproachToBattle
# 57 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 32 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 58 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 59 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 33 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 60 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	compare VAR_FACING, DIR_SOUTH
# 61 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	goto_if_eq SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_11
# 62 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_10:
# 63 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 36 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 64 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	compare VAR_FACING, DIR_WEST
# 65 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	goto_if_eq SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_14
# 66 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_13:
# 67 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 39 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 68 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_MUSEUM_1, SlateportCity_OceanicMuseum_2F_Text_Grunt1Defeat
# 69 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 40 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 70 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_BossGoingToBeFurious, MSGBOX_DEFAULT
# 71 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 41 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 72 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	closemessage
# 73 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 42 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 74 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement LOCALID_OCEANIC_MUSEUM_2F_GRUNT_2, SlateportCity_OceanicMuseum_2F_Movement_GruntDefeated
# 75 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 43 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 76 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 77 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 44 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 78 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement LOCALID_OCEANIC_MUSEUM_2F_GRUNT_1, SlateportCity_OceanicMuseum_2F_Movement_GruntApproachToBattle
# 79 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 45 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 80 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 81 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 46 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 82 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_LetMeTakeCareOfThis, MSGBOX_DEFAULT
# 83 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 47 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 84 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_MUSEUM_2, SlateportCity_OceanicMuseum_2F_Text_Grunt2Defeat
# 85 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 48 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 86 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement LOCALID_OCEANIC_MUSEUM_2F_GRUNT_1, SlateportCity_OceanicMuseum_2F_Movement_GruntDefeated
# 87 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 49 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 88 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 89 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 50 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 90 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement LOCALID_OCEANIC_MUSEUM_2F_GRUNT_1, Common_Movement_WalkInPlaceFasterDown
# 91 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 51 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 92 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement LOCALID_OCEANIC_MUSEUM_2F_GRUNT_2, Common_Movement_WalkInPlaceFasterUp
# 93 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 52 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 94 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 95 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 53 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 96 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_MeddlingKid, MSGBOX_DEFAULT
# 97 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 54 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 98 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	closemessage
# 99 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 55 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 100 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay 35
# 101 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 56 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 102 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	addobject LOCALID_OCEANIC_MUSEUM_2F_ARCHIE
# 103 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 57 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 104 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement LOCALID_OCEANIC_MUSEUM_2F_ARCHIE, SlateportCity_OceanicMuseum_2F_Movement_ArchieEnter
# 105 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 58 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 106 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement LOCALID_OCEANIC_MUSEUM_2F_GRUNT_2, SlateportCity_OceanicMuseum_2F_Movement_GruntMoveForArchie
# 107 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 59 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 108 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 109 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 60 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 110 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_CameToSeeWhatsTakingSoLong, MSGBOX_DEFAULT
# 111 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 61 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 112 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	closemessage
# 113 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 62 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 114 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement LOCALID_OCEANIC_MUSEUM_2F_ARCHIE, SlateportCity_OceanicMuseum_2F_Movement_ArchieApproachPlayer
# 115 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 63 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 116 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 117 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 64 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 118 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_ArchieWarning, MSGBOX_DEFAULT
# 119 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 65 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 120 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	closemessage
# 121 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 66 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 122 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	savebgm MUS_DUMMY
# 123 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 67 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 124 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	fadedefaultbgm
# 125 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 68 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 126 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 127 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 69 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 128 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	removeobject LOCALID_OCEANIC_MUSEUM_2F_ARCHIE
# 129 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 70 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 130 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	removeobject LOCALID_OCEANIC_MUSEUM_2F_GRUNT_1
# 131 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 71 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 132 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	removeobject LOCALID_OCEANIC_MUSEUM_2F_GRUNT_2
# 133 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 72 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 134 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 135 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 73 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 136 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay 30
# 137 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 74 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 138 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	setflag FLAG_HIDE_SLATEPORT_CITY_OCEANIC_MUSEUM_AQUA_GRUNTS
# 139 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 75 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 140 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 141 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 76 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 142 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 143 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 77 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 144 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_SternThankYouForSavingUs, MSGBOX_DEFAULT
# 145 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 78 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 146 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	setvar VAR_0x8004, ITEM_DEVON_PARTS
# 147 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 79 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 148 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	call Common_EventScript_PlayerHandedOverTheItem
# 149 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 80 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 150 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_SternIveGotToGo, MSGBOX_DEFAULT
# 151 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 81 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 152 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	closemessage
# 153 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 82 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 154 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 155 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 83 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 156 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	playfanfare MUS_HEAL
# 157 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 84 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 158 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitfanfare
# 159 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 85 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 160 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	special HealPlayerParty
# 161 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 86 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 162 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	callnative UpdateFollowingPokemon
# 163 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 87 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 164 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	removeobject LOCALID_OCEANIC_MUSEUM_2F_CAPT_STERN
# 165 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 88 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 166 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	setflag FLAG_HIDE_ROUTE_110_TEAM_AQUA
# 167 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 89 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 168 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	compare VAR_REGISTER_BIRCH_STATE, 0
# 169 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	goto_if_eq SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_17
# 170 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_16:
# 171 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 92 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 172 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	setflag FLAG_DELIVERED_DEVON_GOODS
# 173 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 93 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 174 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_116_DEVON_EMPLOYEE
# 175 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 94 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 176 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	setflag FLAG_HIDE_RUSTBORO_CITY_DEVON_CORP_3F_EMPLOYEE
# 177 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 95 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 178 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	setvar VAR_SLATEPORT_OUTSIDE_MUSEUM_STATE, 1
# 179 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 96 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 180 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 181 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 97 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 182 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	release
# 183 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	end
# 184 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 185 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_2:
# 186 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 19 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 187 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	call SlateportCity_OceanicMuseum_2F_EventScript_PlayerFaceGrunts
# 188 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	goto SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_1
# 189 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 190 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_5:
# 191 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 22 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 192 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	call SlateportCity_OceanicMuseum_2F_EventScript_PlayerFaceGrunts
# 193 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	goto SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_4
# 194 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 195 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_8:
# 196 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 26 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 197 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	call SlateportCity_OceanicMuseum_2F_EventScript_SternFaceGrunts
# 198 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	goto SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_7
# 199 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 200 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_11:
# 201 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 34 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 202 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	call SlateportCity_OceanicMuseum_2F_EventScript_PlayerApproachGruntSouth
# 203 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	goto SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_10
# 204 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 205 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_14:
# 206 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 37 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 207 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	call SlateportCity_OceanicMuseum_2F_EventScript_PlayerApproachGruntWest
# 208 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	goto SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_13
# 209 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 210 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_17:
# 211 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 90 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 212 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	call SlateportCity_OceanicMuseum_2F_EventScript_ReadyRegisterBirch
# 213 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	goto SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_16
# 214 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 215 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 216 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_ReadyRegisterBirch::
# 217 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 102 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 218 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	setvar VAR_REGISTER_BIRCH_STATE, 1
# 219 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	return
# 220 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 221 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 222 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_PlayerFaceGrunts::
# 223 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 107 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 224 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 225 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 108 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 226 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 227 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	return
# 228 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 229 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 230 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_SternFaceGrunts::
# 231 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 113 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 232 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement LOCALID_OCEANIC_MUSEUM_2F_CAPT_STERN, Common_Movement_WalkInPlaceFasterLeft
# 233 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 114 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 234 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 235 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	return
# 236 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 237 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 238 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_PlayerApproachGruntSouth::
# 239 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 119 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 240 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement LOCALID_PLAYER, SlateportCity_OceanicMuseum_2F_Movement_PlayerApproachGruntSouth
# 241 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 120 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 242 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 243 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	return
# 244 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 245 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 246 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_PlayerApproachGruntWest::
# 247 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 125 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 248 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement LOCALID_PLAYER, SlateportCity_OceanicMuseum_2F_Movement_PlayerApproachGruntWest
# 249 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 126 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 250 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 251 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	return
# 252 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 253 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 254 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 130 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 255 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Movement_PlayerApproachGruntSouth:
# 256 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 131 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 257 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 258 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 132 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 259 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 260 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 133 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 261 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_in_place_faster_left
# 262 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 134 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 263 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	step_end
# 264 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 265 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 137 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 266 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Movement_PlayerApproachGruntWest:
# 267 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 138 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 268 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_up
# 269 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 139 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 270 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 271 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 140 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 272 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 273 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 141 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 274 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 275 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 142 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 276 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_in_place_faster_left
# 277 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 143 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 278 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	step_end
# 279 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 280 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 146 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 281 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Movement_Unused:
# 282 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 147 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 283 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_up
# 284 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 148 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 285 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 286 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 149 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 287 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 288 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 150 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 289 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 290 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 151 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 291 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 292 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 152 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 293 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 294 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 153 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 295 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_up
# 296 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 154 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 297 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_up
# 298 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 155 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 299 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 300 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 156 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 301 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 302 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 157 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 303 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_up
# 304 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 158 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 305 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_up
# 306 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 159 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 307 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay_8
# 308 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 160 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 309 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	step_end
# 310 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 311 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 163 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 312 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Movement_ArchieApproachPlayer:
# 313 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 164 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 314 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
# 315 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 165 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 316 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	step_end
# 317 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 318 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 168 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 319 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Movement_ArchieEnter:
# 320 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 169 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 321 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 322 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 170 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 323 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 324 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 171 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 325 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 326 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 172 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 327 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 328 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 173 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 329 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 330 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 174 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 331 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
# 332 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 175 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 333 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
# 334 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 176 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 335 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
# 336 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 177 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 337 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
# 338 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 178 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 339 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	step_end
# 340 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 341 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 181 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 342 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Movement_GruntApproachToBattle:
# 343 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 182 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 344 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
# 345 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 183 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 346 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	step_end
# 347 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 348 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 186 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 349 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Movement_FirstGruntEnter:
# 350 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 187 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 351 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 352 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 188 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 353 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
# 354 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 189 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 355 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_in_place_faster_down
# 356 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 190 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 357 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	step_end
# 358 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 359 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 193 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 360 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Movement_FirstGruntApproach:
# 361 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 194 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 362 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 363 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 195 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 364 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 365 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 196 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 366 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 367 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 197 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 368 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
# 369 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 198 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 370 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
# 371 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 199 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 372 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
# 373 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 200 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 374 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	step_end
# 375 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 376 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Movement_GruntDefeated::
# 377 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 204 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 378 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	lock_facing_direction
# 379 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 205 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 380 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 381 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 206 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 382 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	unlock_facing_direction
# 383 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 207 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 384 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	step_end
# 385 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	return
# 386 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 387 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 388 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 210 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 389 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Movement_SecondGruntEnter:
# 390 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 211 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 391 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 392 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 212 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 393 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	step_end
# 394 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 395 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 215 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 396 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Movement_SecondGruntApproach:
# 397 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 216 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 398 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 399 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 217 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 400 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 401 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 218 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 402 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 403 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 219 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 404 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 405 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 220 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 406 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
# 407 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 221 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 408 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
# 409 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 222 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 410 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
# 411 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 223 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 412 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
# 413 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 224 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 414 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	step_end
# 415 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 416 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 227 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 417 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Movement_GruntMoveForArchie:
# 418 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 228 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 419 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay_16
# 420 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 229 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 421 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay_16
# 422 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 230 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 423 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay_16
# 424 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 231 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 425 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay_16
# 426 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 232 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 427 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay_16
# 428 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 233 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 429 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay_16
# 430 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 234 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 431 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay_16
# 432 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 235 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 433 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay_16
# 434 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 236 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 435 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay_8
# 436 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 237 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 437 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_fast_down
# 438 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 238 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 439 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_in_place_faster_up
# 440 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 239 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 441 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	step_end
# 442 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 443 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_WaterQualitySample1::
# 444 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 243 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 445 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_WaterQualitySample1, MSGBOX_SIGN
# 446 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	end
# 447 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 448 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 449 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_WaterQualitySample2::
# 450 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 248 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 451 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_WaterQualitySample2, MSGBOX_SIGN
# 452 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	end
# 453 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 454 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 455 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_PressureExperiment::
# 456 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 253 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 457 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_PressureExperiment, MSGBOX_SIGN
# 458 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	end
# 459 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 460 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 461 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_HoennModel::
# 462 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 258 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 463 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_HoennModel, MSGBOX_SIGN
# 464 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	end
# 465 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 466 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 467 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_DeepSeawaterDisplay::
# 468 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 263 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 469 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_DeepSeawaterDisplay, MSGBOX_SIGN
# 470 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	end
# 471 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 472 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 473 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_SurfaceSeawaterDisplay::
# 474 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 268 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 475 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_SurfaceSeawaterDisplay, MSGBOX_SIGN
# 476 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	end
# 477 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 478 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 479 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_SSTidalReplica::
# 480 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 273 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 481 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_SSTidalReplica, MSGBOX_SIGN
# 482 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	end
# 483 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 484 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 485 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_SubmarineReplica::
# 486 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 278 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 487 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_SubmarineReplica, MSGBOX_SIGN
# 488 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	end
# 489 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 490 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 491 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_SubmersibleReplica::
# 492 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 283 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 493 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_SumbersibleReplica, MSGBOX_SIGN
# 494 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	end
# 495 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 496 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 497 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_SSAnneReplica::
# 498 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 288 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 499 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_SSAnneReplica, MSGBOX_SIGN
# 500 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	end
# 501 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 502 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 503 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_MuseumPatron1::
# 504 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 293 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 505 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_RemindsMeOfAbandonedShip, MSGBOX_NPC
# 506 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	end
# 507 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 508 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 509 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_MuseumPatron2::
# 510 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 298 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 511 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_DontRunInMuseum, MSGBOX_NPC
# 512 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	end
# 513 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 514 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 515 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_MuseumPatron3::
# 516 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 303 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 517 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	lock
# 518 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 304 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 519 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	faceplayer
# 520 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 305 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 521 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_WantToRideSubmarine, MSGBOX_DEFAULT
# 522 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 306 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 523 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	closemessage
# 524 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 307 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 525 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 526 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 308 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 527 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 528 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 309 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 529 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	release
# 530 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	end
# 531 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 532 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 533 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_ThankYouForTheParts::
# 534 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 313 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 535 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Yes? If you're looking for STERN,\n"
# 536 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "that would be me.\p"
# 537 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Ah! Those must be the parts I ordered\n"
# 538 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "from MR. STONE of DEVON.\p"
# 539 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Thank you! That's great!\n"
# 540 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "We can prepare for our expedition now.$"
# 541 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 542 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_WellTakeThoseParts::
# 543 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 322 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 544 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Hehehe, hold it!\n"
# 545 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "We'll take those parts!$"
# 546 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 547 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_SternWhoAreYou::
# 548 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 327 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 549 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "CAPT. STERN: Wh-what?\n"
# 550 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Who are you people?$"
# 551 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 552 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_WereTeamAqua::
# 553 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 332 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 554 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "We're TEAM AQUA!\p"
# 555 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Our BOSS wants those parts!\n"
# 556 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Shut your yap and fork them over!$"
# 557 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 558 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_Grunt1Defeat::
# 559 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 338 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 560 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Awaaaah!\n"
# 561 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "A kid beat me!$"
# 562 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 563 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_BossGoingToBeFurious::
# 564 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 343 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 565 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Oh, man, what a disaster…\n"
# 566 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "The BOSS is going to be furious…$"
# 567 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 568 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_LetMeTakeCareOfThis::
# 569 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 348 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 570 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Humph, sniveling wimp!\n"
# 571 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Let me take care of this!$"
# 572 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 573 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_Grunt2Defeat::
# 574 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 353 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 575 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "What?!\n"
# 576 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "I lost, too!$"
# 577 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 578 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_MeddlingKid::
# 579 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 358 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 580 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Now what? If we don't get the parts,\n"
# 581 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "we're in for it!\p"
# 582 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Arrgh, I didn't count on being meddled\n"
# 583 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "with by some meddling kid!$"
# 584 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 585 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_CameToSeeWhatsTakingSoLong::
# 586 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 365 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 587 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "I came to see what was taking so\n"
# 588 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "long to snatch some parts, and you\l"
# 589 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "simps are held up by a mere child?$"
# 590 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 591 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_ArchieWarning::
# 592 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 371 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 593 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "We are TEAM AQUA,\n"
# 594 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "and we love the sea!\p"
# 595 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "And I am TEAM AQUA's leader,\n"
# 596 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "ARCHIE!\p"
# 597 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "What makes you interfere with us?\p"
# 598 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "…No! You can't be!\n"
# 599 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "You're not one of TEAM MAGMA?\p"
# 600 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Wait, that can't be right.\n"
# 601 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "You're not dressed for the part.\p"
# 602 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "… … … … … …\n"
# 603 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "… … … … … …\p"
# 604 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "POKéMON, people… All life depends on\n"
# 605 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "the sea.\p"
# 606 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "So, TEAM AQUA is dedicated to\n"
# 607 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "the expansion of the sea.\p"
# 608 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Don't you agree? What we are doing\n"
# 609 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "is a magnificent undertaking.\p"
# 610 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Ah, fine…\n"
# 611 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "You're still too young to understand\l"
# 612 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "our noble objective.\p"
# 613 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "But, I warn you, don't even consider\n"
# 614 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "interfering with our plans again.\p"
# 615 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "The consequences will cost you\n"
# 616 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "dearly!\p"
# 617 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "And don't you forget it!$"
# 618 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 619 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_SternThankYouForSavingUs::
# 620 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 399 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 621 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "CAPT. STERN: You're…\n"
# 622 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Ah, okay, you're {PLAYER}{KUN}…\p"
# 623 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Anyway, that was a tense situation!\n"
# 624 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Thank you for saving us!\p"
# 625 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Oh, yes, I almost forgot that you\n"
# 626 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "even brought the parts from DEVON!$"
# 627 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 628 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_SternIveGotToGo::
# 629 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 408 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 630 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "CAPT. STERN: Whoops!\n"
# 631 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "There's no time to lose!\p"
# 632 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "We have to set out on our ocean-floor\n"
# 633 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "expedition really soon.\p"
# 634 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Thanks again, but now I've got\n"
# 635 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "to go!\p"
# 636 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Feel free to wander around and check\n"
# 637 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "out our facilities, though.$"
# 638 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 639 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_RemindsMeOfAbandonedShip::
# 640 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 419 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 641 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "I saw a model of a ship here.\p"
# 642 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "It reminded me of the ABANDONED SHIP\n"
# 643 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "near DEWFORD TOWN…$"
# 644 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 645 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_DontRunInMuseum::
# 646 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 425 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 647 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Don't you dare run around inside\n"
# 648 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "the MUSEUM!$"
# 649 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 650 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_WantToRideSubmarine::
# 651 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 430 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 652 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Wow, the submarine's awesome!\n"
# 653 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "I want to go for a ride!$"
# 654 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 655 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_WaterQualitySample1::
# 656 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 435 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 657 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“WATER QUALITY SAMPLE 1,” the\n"
# 658 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "label says.\p"
# 659 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "The sea is all connected, but the\n"
# 660 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "water seems to differ by region.$"
# 661 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 662 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_WaterQualitySample2::
# 663 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 442 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 664 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“WATER QUALITY SAMPLE 2,” the\n"
# 665 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "label says.\p"
# 666 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Does the saltiness of seawater differ\n"
# 667 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "by region, too?$"
# 668 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 669 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_PressureExperiment::
# 670 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 449 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 671 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "A rubber ball is expanding and\n"
# 672 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "shrinking.\p"
# 673 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“In the sea, the weight of water itself\n"
# 674 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "exerts pressure.\p"
# 675 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“In shallow water, the pressure is not\n"
# 676 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "very heavy.\p"
# 677 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“However, in extremely deep water,\n"
# 678 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "the pressure can reach even tens of\l"
# 679 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "thousands of tons on a small area.”$"
# 680 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 681 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_HoennModel::
# 682 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 461 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 683 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“MODEL OF HOENN REGION”\p"
# 684 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "It's a miniature diorama of the\n"
# 685 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "HOENN region.\p"
# 686 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Where is LITTLEROOT TOWN on this?$"
# 687 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 688 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_DeepSeawaterDisplay::
# 689 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 468 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 690 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "It's a display on the flow of seawater.\p"
# 691 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“Near the bottom of the sea, water\n"
# 692 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "flows due to differences in such\l"
# 693 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "factors as temperature and salinity.”$"
# 694 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 695 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_SurfaceSeawaterDisplay::
# 696 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 475 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 697 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "It's a display on the flow of seawater.\p"
# 698 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“Toward the surface, seawater flows\n"
# 699 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "as currents driven by the winds.”$"
# 700 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 701 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_SSTidalReplica::
# 702 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 481 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 703 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“THE FERRY S.S. TIDAL\p"
# 704 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“A scale replica of the ship under\n"
# 705 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "construction at STERN'S SHIPYARD.”$"
# 706 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 707 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_SubmarineReplica::
# 708 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 487 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 709 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“SUBMARINE EXPLORER 1\p"
# 710 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“A replica of the high-performance\n"
# 711 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "ocean floor exploration submarine.”$"
# 712 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 713 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_SumbersibleReplica::
# 714 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 493 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 715 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“SUBMERSIBLE POD\p"
# 716 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“A replica of a compact, unmanned\n"
# 717 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "pod for seafloor exploration.”$"
# 718 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 719 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_SSAnneReplica::
# 720 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 499 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
# 721 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“S.S. ANNE\p"
# 722 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“A replica of the luxury liner that\n"
# 723 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "circles the globe.”$"
