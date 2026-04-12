# 1 "data/maps/LavenderTown_Frlg/scripts.pory"

# 2 "data/maps/LavenderTown_Frlg/scripts.pory"
LavenderTown_Frlg_MapScripts::
# 3 "data/maps/LavenderTown_Frlg/scripts.pory"
# 2 "data/maps/LavenderTown_Frlg/scripts.pory"
# 4 "data/maps/LavenderTown_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LavenderTown_OnTransition
# 5 "data/maps/LavenderTown_Frlg/scripts.pory"
	.byte 0
# 6 "data/maps/LavenderTown_Frlg/scripts.pory"

# 7 "data/maps/LavenderTown_Frlg/scripts.pory"

# 8 "data/maps/LavenderTown_Frlg/scripts.pory"
LavenderTown_OnTransition::
# 9 "data/maps/LavenderTown_Frlg/scripts.pory"
# 6 "data/maps/LavenderTown_Frlg/scripts.pory"
# 10 "data/maps/LavenderTown_Frlg/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_LAVENDER_TOWN
# 11 "data/maps/LavenderTown_Frlg/scripts.pory"
# 7 "data/maps/LavenderTown_Frlg/scripts.pory"
# 12 "data/maps/LavenderTown_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_S_S_ANNE_2F_CORRIDOR, 1
# 13 "data/maps/LavenderTown_Frlg/scripts.pory"
# 8 "data/maps/LavenderTown_Frlg/scripts.pory"
# 14 "data/maps/LavenderTown_Frlg/scripts.pory"
	setflag FLAG_HIDE_SS_ANNE_RIVAL
# 15 "data/maps/LavenderTown_Frlg/scripts.pory"
	end
# 16 "data/maps/LavenderTown_Frlg/scripts.pory"

# 17 "data/maps/LavenderTown_Frlg/scripts.pory"

# 18 "data/maps/LavenderTown_Frlg/scripts.pory"
LavenderTown_EventScript_LittleGirl::
# 19 "data/maps/LavenderTown_Frlg/scripts.pory"
# 13 "data/maps/LavenderTown_Frlg/scripts.pory"
# 20 "data/maps/LavenderTown_Frlg/scripts.pory"
	lock
# 21 "data/maps/LavenderTown_Frlg/scripts.pory"
# 14 "data/maps/LavenderTown_Frlg/scripts.pory"
# 22 "data/maps/LavenderTown_Frlg/scripts.pory"
	faceplayer
# 23 "data/maps/LavenderTown_Frlg/scripts.pory"
# 15 "data/maps/LavenderTown_Frlg/scripts.pory"
# 24 "data/maps/LavenderTown_Frlg/scripts.pory"
	msgbox LavenderTown_Text_DoYouBelieveInGhosts, MSGBOX_YESNO
# 25 "data/maps/LavenderTown_Frlg/scripts.pory"
# 16 "data/maps/LavenderTown_Frlg/scripts.pory"
# 26 "data/maps/LavenderTown_Frlg/scripts.pory"
	compare VAR_RESULT, YES
# 27 "data/maps/LavenderTown_Frlg/scripts.pory"
	goto_if_eq LavenderTown_EventScript_LittleGirl_2
# 28 "data/maps/LavenderTown_Frlg/scripts.pory"
LavenderTown_EventScript_LittleGirl_1:
# 29 "data/maps/LavenderTown_Frlg/scripts.pory"
# 19 "data/maps/LavenderTown_Frlg/scripts.pory"
# 30 "data/maps/LavenderTown_Frlg/scripts.pory"
	msgbox LavenderTown_Text_JustImaginingWhiteHand
# 31 "data/maps/LavenderTown_Frlg/scripts.pory"
# 20 "data/maps/LavenderTown_Frlg/scripts.pory"
# 32 "data/maps/LavenderTown_Frlg/scripts.pory"
	release
# 33 "data/maps/LavenderTown_Frlg/scripts.pory"
	end
# 34 "data/maps/LavenderTown_Frlg/scripts.pory"

# 35 "data/maps/LavenderTown_Frlg/scripts.pory"
LavenderTown_EventScript_LittleGirl_2:
# 36 "data/maps/LavenderTown_Frlg/scripts.pory"
# 17 "data/maps/LavenderTown_Frlg/scripts.pory"
# 37 "data/maps/LavenderTown_Frlg/scripts.pory"
	goto LavenderTown_EventScript_LittleGirlBelieve
# 38 "data/maps/LavenderTown_Frlg/scripts.pory"
	goto LavenderTown_EventScript_LittleGirl_1
# 39 "data/maps/LavenderTown_Frlg/scripts.pory"

# 40 "data/maps/LavenderTown_Frlg/scripts.pory"

# 41 "data/maps/LavenderTown_Frlg/scripts.pory"
LavenderTown_EventScript_LittleGirlBelieve::
# 42 "data/maps/LavenderTown_Frlg/scripts.pory"
# 25 "data/maps/LavenderTown_Frlg/scripts.pory"
# 43 "data/maps/LavenderTown_Frlg/scripts.pory"
	msgbox LavenderTown_Text_SoThereAreBelievers
# 44 "data/maps/LavenderTown_Frlg/scripts.pory"
# 26 "data/maps/LavenderTown_Frlg/scripts.pory"
# 45 "data/maps/LavenderTown_Frlg/scripts.pory"
	release
# 46 "data/maps/LavenderTown_Frlg/scripts.pory"
	end
# 47 "data/maps/LavenderTown_Frlg/scripts.pory"

# 48 "data/maps/LavenderTown_Frlg/scripts.pory"

# 49 "data/maps/LavenderTown_Frlg/scripts.pory"
LavenderTown_EventScript_WorkerM::
# 50 "data/maps/LavenderTown_Frlg/scripts.pory"
# 31 "data/maps/LavenderTown_Frlg/scripts.pory"
# 51 "data/maps/LavenderTown_Frlg/scripts.pory"
	msgbox LavenderTown_Text_TownKnownAsMonGraveSite, MSGBOX_NPC
# 52 "data/maps/LavenderTown_Frlg/scripts.pory"
	end
# 53 "data/maps/LavenderTown_Frlg/scripts.pory"

# 54 "data/maps/LavenderTown_Frlg/scripts.pory"

# 55 "data/maps/LavenderTown_Frlg/scripts.pory"
LavenderTown_EventScript_Boy::
# 56 "data/maps/LavenderTown_Frlg/scripts.pory"
# 36 "data/maps/LavenderTown_Frlg/scripts.pory"
# 57 "data/maps/LavenderTown_Frlg/scripts.pory"
	msgbox LavenderTown_Text_GhostsAppearedInTower, MSGBOX_NPC
# 58 "data/maps/LavenderTown_Frlg/scripts.pory"
	end
# 59 "data/maps/LavenderTown_Frlg/scripts.pory"

# 60 "data/maps/LavenderTown_Frlg/scripts.pory"

# 61 "data/maps/LavenderTown_Frlg/scripts.pory"
LavenderTown_EventScript_TownSign::
# 62 "data/maps/LavenderTown_Frlg/scripts.pory"
# 41 "data/maps/LavenderTown_Frlg/scripts.pory"
# 63 "data/maps/LavenderTown_Frlg/scripts.pory"
	msgbox LavenderTown_Text_TownSign, MSGBOX_SIGN
# 64 "data/maps/LavenderTown_Frlg/scripts.pory"
	end
# 65 "data/maps/LavenderTown_Frlg/scripts.pory"

# 66 "data/maps/LavenderTown_Frlg/scripts.pory"

# 67 "data/maps/LavenderTown_Frlg/scripts.pory"
LavenderTown_EventScript_SilphScopeNotice::
# 68 "data/maps/LavenderTown_Frlg/scripts.pory"
# 46 "data/maps/LavenderTown_Frlg/scripts.pory"
# 69 "data/maps/LavenderTown_Frlg/scripts.pory"
	msgbox LavenderTown_Text_SilphScopeNotice, MSGBOX_SIGN
# 70 "data/maps/LavenderTown_Frlg/scripts.pory"
	end
# 71 "data/maps/LavenderTown_Frlg/scripts.pory"

# 72 "data/maps/LavenderTown_Frlg/scripts.pory"

# 73 "data/maps/LavenderTown_Frlg/scripts.pory"
LavenderTown_EventScript_VolunteerHouseSign::
# 74 "data/maps/LavenderTown_Frlg/scripts.pory"
# 51 "data/maps/LavenderTown_Frlg/scripts.pory"
# 75 "data/maps/LavenderTown_Frlg/scripts.pory"
	msgbox LavenderTown_Text_VolunteerPokemonHouse, MSGBOX_SIGN
# 76 "data/maps/LavenderTown_Frlg/scripts.pory"
	end
# 77 "data/maps/LavenderTown_Frlg/scripts.pory"

# 78 "data/maps/LavenderTown_Frlg/scripts.pory"

# 79 "data/maps/LavenderTown_Frlg/scripts.pory"
LavenderTown_EventScript_PokemonTowerSign::
# 80 "data/maps/LavenderTown_Frlg/scripts.pory"
# 56 "data/maps/LavenderTown_Frlg/scripts.pory"
# 81 "data/maps/LavenderTown_Frlg/scripts.pory"
	msgbox LavenderTown_Text_PokemonTowerSign, MSGBOX_SIGN
# 82 "data/maps/LavenderTown_Frlg/scripts.pory"
	end
# 83 "data/maps/LavenderTown_Frlg/scripts.pory"

# 84 "data/maps/LavenderTown_Frlg/scripts.pory"

# 85 "data/maps/LavenderTown_Frlg/scripts.pory"
LavenderTown_Text_DoYouBelieveInGhosts::
# 86 "data/maps/LavenderTown_Frlg/scripts.pory"
# 60 "data/maps/LavenderTown_Frlg/scripts.pory"
# 87 "data/maps/LavenderTown_Frlg/scripts.pory"
	.string "Do you believe in ghosts?$"
# 88 "data/maps/LavenderTown_Frlg/scripts.pory"

# 89 "data/maps/LavenderTown_Frlg/scripts.pory"
LavenderTown_Text_SoThereAreBelievers::
# 90 "data/maps/LavenderTown_Frlg/scripts.pory"
# 64 "data/maps/LavenderTown_Frlg/scripts.pory"
# 91 "data/maps/LavenderTown_Frlg/scripts.pory"
	.string "Really?\n"
# 92 "data/maps/LavenderTown_Frlg/scripts.pory"
	.string "So there are believers…$"
# 93 "data/maps/LavenderTown_Frlg/scripts.pory"

# 94 "data/maps/LavenderTown_Frlg/scripts.pory"
LavenderTown_Text_JustImaginingWhiteHand::
# 95 "data/maps/LavenderTown_Frlg/scripts.pory"
# 69 "data/maps/LavenderTown_Frlg/scripts.pory"
# 96 "data/maps/LavenderTown_Frlg/scripts.pory"
	.string "Hahaha, I guess not.\p"
# 97 "data/maps/LavenderTown_Frlg/scripts.pory"
	.string "That white hand on your shoulder…\n"
# 98 "data/maps/LavenderTown_Frlg/scripts.pory"
	.string "I'm just imagining it.$"
# 99 "data/maps/LavenderTown_Frlg/scripts.pory"

# 100 "data/maps/LavenderTown_Frlg/scripts.pory"
LavenderTown_Text_TownKnownAsMonGraveSite::
# 101 "data/maps/LavenderTown_Frlg/scripts.pory"
# 75 "data/maps/LavenderTown_Frlg/scripts.pory"
# 102 "data/maps/LavenderTown_Frlg/scripts.pory"
	.string "This town is known as the grave\n"
# 103 "data/maps/LavenderTown_Frlg/scripts.pory"
	.string "site of POKéMON.\p"
# 104 "data/maps/LavenderTown_Frlg/scripts.pory"
	.string "Memorial services are held in\n"
# 105 "data/maps/LavenderTown_Frlg/scripts.pory"
	.string "POKéMON TOWER.$"
# 106 "data/maps/LavenderTown_Frlg/scripts.pory"

# 107 "data/maps/LavenderTown_Frlg/scripts.pory"
LavenderTown_Text_GhostsAppearedInTower::
# 108 "data/maps/LavenderTown_Frlg/scripts.pory"
# 82 "data/maps/LavenderTown_Frlg/scripts.pory"
# 109 "data/maps/LavenderTown_Frlg/scripts.pory"
	.string "Ghosts appeared in POKéMON TOWER.\p"
# 110 "data/maps/LavenderTown_Frlg/scripts.pory"
	.string "I think they're the spirits of\n"
# 111 "data/maps/LavenderTown_Frlg/scripts.pory"
	.string "POKéMON that the ROCKETS killed.$"
# 112 "data/maps/LavenderTown_Frlg/scripts.pory"

# 113 "data/maps/LavenderTown_Frlg/scripts.pory"
LavenderTown_Text_TownSign::
# 114 "data/maps/LavenderTown_Frlg/scripts.pory"
# 88 "data/maps/LavenderTown_Frlg/scripts.pory"
# 115 "data/maps/LavenderTown_Frlg/scripts.pory"
	.string "LAVENDER TOWN\n"
# 116 "data/maps/LavenderTown_Frlg/scripts.pory"
	.string "The Noble Purple Town$"
# 117 "data/maps/LavenderTown_Frlg/scripts.pory"

# 118 "data/maps/LavenderTown_Frlg/scripts.pory"
LavenderTown_Text_SilphScopeNotice::
# 119 "data/maps/LavenderTown_Frlg/scripts.pory"
# 93 "data/maps/LavenderTown_Frlg/scripts.pory"
# 120 "data/maps/LavenderTown_Frlg/scripts.pory"
	.string "New SILPH SCOPE!\n"
# 121 "data/maps/LavenderTown_Frlg/scripts.pory"
	.string "Make the Invisible Plain to See!\p"
# 122 "data/maps/LavenderTown_Frlg/scripts.pory"
	.string "SILPH CO.$"
# 123 "data/maps/LavenderTown_Frlg/scripts.pory"

# 124 "data/maps/LavenderTown_Frlg/scripts.pory"
LavenderTown_Text_VolunteerPokemonHouse::
# 125 "data/maps/LavenderTown_Frlg/scripts.pory"
# 99 "data/maps/LavenderTown_Frlg/scripts.pory"
# 126 "data/maps/LavenderTown_Frlg/scripts.pory"
	.string "LAVENDER VOLUNTEER\n"
# 127 "data/maps/LavenderTown_Frlg/scripts.pory"
	.string "POKéMON HOUSE$"
# 128 "data/maps/LavenderTown_Frlg/scripts.pory"

# 129 "data/maps/LavenderTown_Frlg/scripts.pory"
LavenderTown_Text_PokemonTowerSign::
# 130 "data/maps/LavenderTown_Frlg/scripts.pory"
# 104 "data/maps/LavenderTown_Frlg/scripts.pory"
# 131 "data/maps/LavenderTown_Frlg/scripts.pory"
	.string "POKéMON TOWER\n"
# 132 "data/maps/LavenderTown_Frlg/scripts.pory"
	.string "Becalm the Spirits of POKéMON$"
