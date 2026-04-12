# 1 "data/maps/FallarborTown/scripts.pory"

# 2 "data/maps/FallarborTown/scripts.pory"
FallarborTown_MapScripts::
# 3 "data/maps/FallarborTown/scripts.pory"
# 2 "data/maps/FallarborTown/scripts.pory"
# 4 "data/maps/FallarborTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, FallarborTown_OnTransition
# 5 "data/maps/FallarborTown/scripts.pory"
	.byte 0
# 6 "data/maps/FallarborTown/scripts.pory"

# 7 "data/maps/FallarborTown/scripts.pory"

# 8 "data/maps/FallarborTown/scripts.pory"
FallarborTown_OnTransition::
# 9 "data/maps/FallarborTown/scripts.pory"
# 6 "data/maps/FallarborTown/scripts.pory"
# 10 "data/maps/FallarborTown/scripts.pory"
	setflag FLAG_VISITED_FALLARBOR_TOWN
# 11 "data/maps/FallarborTown/scripts.pory"
# 7 "data/maps/FallarborTown/scripts.pory"
# 12 "data/maps/FallarborTown/scripts.pory"
	setvar VAR_CONTEST_HALL_STATE, 0
# 13 "data/maps/FallarborTown/scripts.pory"
# 8 "data/maps/FallarborTown/scripts.pory"
# 14 "data/maps/FallarborTown/scripts.pory"
	clearflag FLAG_CONTEST_SKETCH_CREATED
# 15 "data/maps/FallarborTown/scripts.pory"
	end
# 16 "data/maps/FallarborTown/scripts.pory"

# 17 "data/maps/FallarborTown/scripts.pory"

# 18 "data/maps/FallarborTown/scripts.pory"
FallarborTown_EventScript_ExpertM::
# 19 "data/maps/FallarborTown/scripts.pory"
# 13 "data/maps/FallarborTown/scripts.pory"
# 20 "data/maps/FallarborTown/scripts.pory"
	lock
# 21 "data/maps/FallarborTown/scripts.pory"
# 14 "data/maps/FallarborTown/scripts.pory"
# 22 "data/maps/FallarborTown/scripts.pory"
	faceplayer
# 23 "data/maps/FallarborTown/scripts.pory"
# 15 "data/maps/FallarborTown/scripts.pory"
# 24 "data/maps/FallarborTown/scripts.pory"
	goto_if_set FLAG_DEFEATED_EVIL_TEAM_MT_CHIMNEY, FallarborTown_EventScript_ExpertM_2
# 25 "data/maps/FallarborTown/scripts.pory"
FallarborTown_EventScript_ExpertM_1:
# 26 "data/maps/FallarborTown/scripts.pory"
# 18 "data/maps/FallarborTown/scripts.pory"
# 27 "data/maps/FallarborTown/scripts.pory"
	msgbox FallarborTown_Text_ShadyCharactersCozmosHome, MSGBOX_DEFAULT
# 28 "data/maps/FallarborTown/scripts.pory"
# 19 "data/maps/FallarborTown/scripts.pory"
# 29 "data/maps/FallarborTown/scripts.pory"
	release
# 30 "data/maps/FallarborTown/scripts.pory"
	end
# 31 "data/maps/FallarborTown/scripts.pory"

# 32 "data/maps/FallarborTown/scripts.pory"
FallarborTown_EventScript_ExpertM_2:
# 33 "data/maps/FallarborTown/scripts.pory"
# 16 "data/maps/FallarborTown/scripts.pory"
# 34 "data/maps/FallarborTown/scripts.pory"
	goto FallarborTown_EventScript_ExpertMNormal
# 35 "data/maps/FallarborTown/scripts.pory"
	goto FallarborTown_EventScript_ExpertM_1
# 36 "data/maps/FallarborTown/scripts.pory"

# 37 "data/maps/FallarborTown/scripts.pory"

# 38 "data/maps/FallarborTown/scripts.pory"
FallarborTown_EventScript_ExpertMNormal::
# 39 "data/maps/FallarborTown/scripts.pory"
# 24 "data/maps/FallarborTown/scripts.pory"
# 40 "data/maps/FallarborTown/scripts.pory"
	msgbox FallarborTown_Text_RegionKnownForMeteors, MSGBOX_DEFAULT
# 41 "data/maps/FallarborTown/scripts.pory"
# 25 "data/maps/FallarborTown/scripts.pory"
# 42 "data/maps/FallarborTown/scripts.pory"
	release
# 43 "data/maps/FallarborTown/scripts.pory"
	end
# 44 "data/maps/FallarborTown/scripts.pory"

# 45 "data/maps/FallarborTown/scripts.pory"

# 46 "data/maps/FallarborTown/scripts.pory"
FallarborTown_EventScript_Girl::
# 47 "data/maps/FallarborTown/scripts.pory"
# 30 "data/maps/FallarborTown/scripts.pory"
# 48 "data/maps/FallarborTown/scripts.pory"
	msgbox FallarborTown_Text_MyPreciousAzurill, MSGBOX_NPC
# 49 "data/maps/FallarborTown/scripts.pory"
	end
# 50 "data/maps/FallarborTown/scripts.pory"

# 51 "data/maps/FallarborTown/scripts.pory"

# 52 "data/maps/FallarborTown/scripts.pory"
FallarborTown_EventScript_Gentleman::
# 53 "data/maps/FallarborTown/scripts.pory"
# 35 "data/maps/FallarborTown/scripts.pory"
# 54 "data/maps/FallarborTown/scripts.pory"
	msgbox FallarborTown_Text_HaveYouChallengedFlannery, MSGBOX_NPC
# 55 "data/maps/FallarborTown/scripts.pory"
	end
# 56 "data/maps/FallarborTown/scripts.pory"

# 57 "data/maps/FallarborTown/scripts.pory"

# 58 "data/maps/FallarborTown/scripts.pory"
FallarborTown_EventScript_Azurill::
# 59 "data/maps/FallarborTown/scripts.pory"
# 40 "data/maps/FallarborTown/scripts.pory"
# 60 "data/maps/FallarborTown/scripts.pory"
	lock
# 61 "data/maps/FallarborTown/scripts.pory"
# 41 "data/maps/FallarborTown/scripts.pory"
# 62 "data/maps/FallarborTown/scripts.pory"
	faceplayer
# 63 "data/maps/FallarborTown/scripts.pory"
# 42 "data/maps/FallarborTown/scripts.pory"
# 64 "data/maps/FallarborTown/scripts.pory"
	waitse
# 65 "data/maps/FallarborTown/scripts.pory"
# 43 "data/maps/FallarborTown/scripts.pory"
# 66 "data/maps/FallarborTown/scripts.pory"
	playmoncry SPECIES_AZURILL, CRY_MODE_NORMAL
# 67 "data/maps/FallarborTown/scripts.pory"
# 44 "data/maps/FallarborTown/scripts.pory"
# 68 "data/maps/FallarborTown/scripts.pory"
	msgbox FallarborTown_Text_Azurill, MSGBOX_DEFAULT
# 69 "data/maps/FallarborTown/scripts.pory"
# 45 "data/maps/FallarborTown/scripts.pory"
# 70 "data/maps/FallarborTown/scripts.pory"
	waitmoncry
# 71 "data/maps/FallarborTown/scripts.pory"
# 46 "data/maps/FallarborTown/scripts.pory"
# 72 "data/maps/FallarborTown/scripts.pory"
	release
# 73 "data/maps/FallarborTown/scripts.pory"
	end
# 74 "data/maps/FallarborTown/scripts.pory"

# 75 "data/maps/FallarborTown/scripts.pory"

# 76 "data/maps/FallarborTown/scripts.pory"
FallarborTown_EventScript_BattleTentSign::
# 77 "data/maps/FallarborTown/scripts.pory"
# 51 "data/maps/FallarborTown/scripts.pory"
# 78 "data/maps/FallarborTown/scripts.pory"
	msgbox FallarborTown_Text_BattleTentSign, MSGBOX_SIGN
# 79 "data/maps/FallarborTown/scripts.pory"
	end
# 80 "data/maps/FallarborTown/scripts.pory"

# 81 "data/maps/FallarborTown/scripts.pory"

# 82 "data/maps/FallarborTown/scripts.pory"
FallarborTown_EventScript_TownSign::
# 83 "data/maps/FallarborTown/scripts.pory"
# 56 "data/maps/FallarborTown/scripts.pory"
# 84 "data/maps/FallarborTown/scripts.pory"
	msgbox FallarborTown_Text_TownSign, MSGBOX_SIGN
# 85 "data/maps/FallarborTown/scripts.pory"
	end
# 86 "data/maps/FallarborTown/scripts.pory"

# 87 "data/maps/FallarborTown/scripts.pory"

# 88 "data/maps/FallarborTown/scripts.pory"
FallarborTown_EventScript_MoveTutorSign::
# 89 "data/maps/FallarborTown/scripts.pory"
# 61 "data/maps/FallarborTown/scripts.pory"
# 90 "data/maps/FallarborTown/scripts.pory"
	msgbox FallarborTown_Text_MoveTutorSign, MSGBOX_SIGN
# 91 "data/maps/FallarborTown/scripts.pory"
	end
# 92 "data/maps/FallarborTown/scripts.pory"

# 93 "data/maps/FallarborTown/scripts.pory"

# 94 "data/maps/FallarborTown/scripts.pory"
FallarborTown_Text_ShadyCharactersCozmosHome::
# 95 "data/maps/FallarborTown/scripts.pory"
# 65 "data/maps/FallarborTown/scripts.pory"
# 96 "data/maps/FallarborTown/scripts.pory"
	.string "Something's happening,\n"
# 97 "data/maps/FallarborTown/scripts.pory"
	.string "and I don't like it!\p"
# 98 "data/maps/FallarborTown/scripts.pory"
	.string "I've seen shady characters wandering\n"
# 99 "data/maps/FallarborTown/scripts.pory"
	.string "in and out of PROF. COZMO's home…$"
# 100 "data/maps/FallarborTown/scripts.pory"

# 101 "data/maps/FallarborTown/scripts.pory"
FallarborTown_Text_RegionKnownForMeteors::
# 102 "data/maps/FallarborTown/scripts.pory"
# 72 "data/maps/FallarborTown/scripts.pory"
# 103 "data/maps/FallarborTown/scripts.pory"
	.string "This region's been known for meteors\n"
# 104 "data/maps/FallarborTown/scripts.pory"
	.string "since the olden days.\p"
# 105 "data/maps/FallarborTown/scripts.pory"
	.string "They say METEOR FALLS was gouged out\n"
# 106 "data/maps/FallarborTown/scripts.pory"
	.string "by a falling meteorite long ago.$"
# 107 "data/maps/FallarborTown/scripts.pory"

# 108 "data/maps/FallarborTown/scripts.pory"
FallarborTown_Text_MyPreciousAzurill::
# 109 "data/maps/FallarborTown/scripts.pory"
# 79 "data/maps/FallarborTown/scripts.pory"
# 110 "data/maps/FallarborTown/scripts.pory"
	.string "See! Take a look!\n"
# 111 "data/maps/FallarborTown/scripts.pory"
	.string "This is my precious AZURILL!\p"
# 112 "data/maps/FallarborTown/scripts.pory"
	.string "It's slick and smooth and plushy, too!$"
# 113 "data/maps/FallarborTown/scripts.pory"

# 114 "data/maps/FallarborTown/scripts.pory"
FallarborTown_Text_Azurill::
# 115 "data/maps/FallarborTown/scripts.pory"
# 85 "data/maps/FallarborTown/scripts.pory"
# 116 "data/maps/FallarborTown/scripts.pory"
	.string "AZURILL: Rooreelooo.$"
# 117 "data/maps/FallarborTown/scripts.pory"

# 118 "data/maps/FallarborTown/scripts.pory"
FallarborTown_Text_HaveYouChallengedFlannery::
# 119 "data/maps/FallarborTown/scripts.pory"
# 89 "data/maps/FallarborTown/scripts.pory"
# 120 "data/maps/FallarborTown/scripts.pory"
	.string "Have you already challenged FLANNERY,\n"
# 121 "data/maps/FallarborTown/scripts.pory"
	.string "the LEADER of LAVARIDGE GYM?\p"
# 122 "data/maps/FallarborTown/scripts.pory"
	.string "The girl's grandfather was famous.\n"
# 123 "data/maps/FallarborTown/scripts.pory"
	.string "He was one of the ELITE FOUR in the\l"
# 124 "data/maps/FallarborTown/scripts.pory"
	.string "POKéMON LEAGUE at one point.\p"
# 125 "data/maps/FallarborTown/scripts.pory"
	.string "It wouldn't surprise me to see FLANNERY\n"
# 126 "data/maps/FallarborTown/scripts.pory"
	.string "become a great TRAINER in her own\l"
# 127 "data/maps/FallarborTown/scripts.pory"
	.string "right.$"
# 128 "data/maps/FallarborTown/scripts.pory"

# 129 "data/maps/FallarborTown/scripts.pory"
FallarborTown_Text_BattleTentSign::
# 130 "data/maps/FallarborTown/scripts.pory"
# 100 "data/maps/FallarborTown/scripts.pory"
# 131 "data/maps/FallarborTown/scripts.pory"
	.string "BATTLE TENT FALLARBOR SITE\n"
# 132 "data/maps/FallarborTown/scripts.pory"
	.string "“May the Greatest Teams Gather!”$"
# 133 "data/maps/FallarborTown/scripts.pory"

# 134 "data/maps/FallarborTown/scripts.pory"
FallarborTown_Text_TownSign::
# 135 "data/maps/FallarborTown/scripts.pory"
# 105 "data/maps/FallarborTown/scripts.pory"
# 136 "data/maps/FallarborTown/scripts.pory"
	.string "FALLARBOR TOWN\n"
# 137 "data/maps/FallarborTown/scripts.pory"
	.string "“A farm community with small gardens.”$"
# 138 "data/maps/FallarborTown/scripts.pory"

# 139 "data/maps/FallarborTown/scripts.pory"
FallarborTown_Text_MoveTutorSign::
# 140 "data/maps/FallarborTown/scripts.pory"
# 110 "data/maps/FallarborTown/scripts.pory"
# 141 "data/maps/FallarborTown/scripts.pory"
	.string "MOVE TUTOR'S HOUSE\n"
# 142 "data/maps/FallarborTown/scripts.pory"
	.string "“New moves taught to POKéMON.”$"
