# 1 "data/maps/CinnabarIsland_PokemonLab_Entrance_Frlg/scripts.pory"

# 2 "data/maps/CinnabarIsland_PokemonLab_Entrance_Frlg/scripts.pory"
CinnabarIsland_PokemonLab_Entrance_Frlg_MapScripts::
# 3 "data/maps/CinnabarIsland_PokemonLab_Entrance_Frlg/scripts.pory"
# 2 "data/maps/CinnabarIsland_PokemonLab_Entrance_Frlg/scripts.pory"
# 4 "data/maps/CinnabarIsland_PokemonLab_Entrance_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, CinnabarIsland_PokemonLab_Entrance_OnTransition
# 5 "data/maps/CinnabarIsland_PokemonLab_Entrance_Frlg/scripts.pory"
	.byte 0
# 6 "data/maps/CinnabarIsland_PokemonLab_Entrance_Frlg/scripts.pory"

# 7 "data/maps/CinnabarIsland_PokemonLab_Entrance_Frlg/scripts.pory"

# 8 "data/maps/CinnabarIsland_PokemonLab_Entrance_Frlg/scripts.pory"
CinnabarIsland_PokemonLab_Entrance_OnTransition::
# 9 "data/maps/CinnabarIsland_PokemonLab_Entrance_Frlg/scripts.pory"
# 6 "data/maps/CinnabarIsland_PokemonLab_Entrance_Frlg/scripts.pory"
# 10 "data/maps/CinnabarIsland_PokemonLab_Entrance_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_CINNABAR_ISLAND_POKEMON_LAB_EXPERIMENT_ROOM_REVIVE_STATE, 1
# 11 "data/maps/CinnabarIsland_PokemonLab_Entrance_Frlg/scripts.pory"
	goto_if_eq CinnabarIsland_PokemonLab_Entrance_OnTransition_2
# 12 "data/maps/CinnabarIsland_PokemonLab_Entrance_Frlg/scripts.pory"
CinnabarIsland_PokemonLab_Entrance_OnTransition_1:
# 13 "data/maps/CinnabarIsland_PokemonLab_Entrance_Frlg/scripts.pory"
	end
# 14 "data/maps/CinnabarIsland_PokemonLab_Entrance_Frlg/scripts.pory"

# 15 "data/maps/CinnabarIsland_PokemonLab_Entrance_Frlg/scripts.pory"
CinnabarIsland_PokemonLab_Entrance_OnTransition_2:
# 16 "data/maps/CinnabarIsland_PokemonLab_Entrance_Frlg/scripts.pory"
# 7 "data/maps/CinnabarIsland_PokemonLab_Entrance_Frlg/scripts.pory"
# 17 "data/maps/CinnabarIsland_PokemonLab_Entrance_Frlg/scripts.pory"
	call CinnabarIsland_PokemonLab_Entrance_EventScript_ReadyFossil
# 18 "data/maps/CinnabarIsland_PokemonLab_Entrance_Frlg/scripts.pory"
	goto CinnabarIsland_PokemonLab_Entrance_OnTransition_1
# 19 "data/maps/CinnabarIsland_PokemonLab_Entrance_Frlg/scripts.pory"

# 20 "data/maps/CinnabarIsland_PokemonLab_Entrance_Frlg/scripts.pory"

# 21 "data/maps/CinnabarIsland_PokemonLab_Entrance_Frlg/scripts.pory"
CinnabarIsland_PokemonLab_Entrance_EventScript_ReadyFossil::
# 22 "data/maps/CinnabarIsland_PokemonLab_Entrance_Frlg/scripts.pory"
# 13 "data/maps/CinnabarIsland_PokemonLab_Entrance_Frlg/scripts.pory"
# 23 "data/maps/CinnabarIsland_PokemonLab_Entrance_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_CINNABAR_ISLAND_POKEMON_LAB_EXPERIMENT_ROOM_REVIVE_STATE, 2
# 24 "data/maps/CinnabarIsland_PokemonLab_Entrance_Frlg/scripts.pory"
	return
# 25 "data/maps/CinnabarIsland_PokemonLab_Entrance_Frlg/scripts.pory"

# 26 "data/maps/CinnabarIsland_PokemonLab_Entrance_Frlg/scripts.pory"

# 27 "data/maps/CinnabarIsland_PokemonLab_Entrance_Frlg/scripts.pory"
CinnabarIsland_PokemonLab_Entrance_EventScript_Scientist::
# 28 "data/maps/CinnabarIsland_PokemonLab_Entrance_Frlg/scripts.pory"
# 18 "data/maps/CinnabarIsland_PokemonLab_Entrance_Frlg/scripts.pory"
# 29 "data/maps/CinnabarIsland_PokemonLab_Entrance_Frlg/scripts.pory"
	msgbox CinnabarIsland_PokemonLab_Entrance_Text_StudyMonsExtensively, MSGBOX_NPC
# 30 "data/maps/CinnabarIsland_PokemonLab_Entrance_Frlg/scripts.pory"
	end
# 31 "data/maps/CinnabarIsland_PokemonLab_Entrance_Frlg/scripts.pory"

# 32 "data/maps/CinnabarIsland_PokemonLab_Entrance_Frlg/scripts.pory"

# 33 "data/maps/CinnabarIsland_PokemonLab_Entrance_Frlg/scripts.pory"
CinnabarIsland_PokemonLab_Entrance_EventScript_DrFujiPhoto::
# 34 "data/maps/CinnabarIsland_PokemonLab_Entrance_Frlg/scripts.pory"
# 23 "data/maps/CinnabarIsland_PokemonLab_Entrance_Frlg/scripts.pory"
# 35 "data/maps/CinnabarIsland_PokemonLab_Entrance_Frlg/scripts.pory"
	msgbox CinnabarIsland_PokemonLab_Entrance_Text_PhotoOfLabFounderDrFuji, MSGBOX_SIGN
# 36 "data/maps/CinnabarIsland_PokemonLab_Entrance_Frlg/scripts.pory"
	end
# 37 "data/maps/CinnabarIsland_PokemonLab_Entrance_Frlg/scripts.pory"

# 38 "data/maps/CinnabarIsland_PokemonLab_Entrance_Frlg/scripts.pory"

# 39 "data/maps/CinnabarIsland_PokemonLab_Entrance_Frlg/scripts.pory"
CinnabarIsland_PokemonLab_Entrance_EventScript_MeetingRoomSign::
# 40 "data/maps/CinnabarIsland_PokemonLab_Entrance_Frlg/scripts.pory"
# 28 "data/maps/CinnabarIsland_PokemonLab_Entrance_Frlg/scripts.pory"
# 41 "data/maps/CinnabarIsland_PokemonLab_Entrance_Frlg/scripts.pory"
	msgbox CinnabarIsland_PokemonLab_Entrance_Text_MeetingRoomSign, MSGBOX_SIGN
# 42 "data/maps/CinnabarIsland_PokemonLab_Entrance_Frlg/scripts.pory"
	end
# 43 "data/maps/CinnabarIsland_PokemonLab_Entrance_Frlg/scripts.pory"

# 44 "data/maps/CinnabarIsland_PokemonLab_Entrance_Frlg/scripts.pory"

# 45 "data/maps/CinnabarIsland_PokemonLab_Entrance_Frlg/scripts.pory"
CinnabarIsland_PokemonLab_Entrance_EventScript_RAndDRoomSign::
# 46 "data/maps/CinnabarIsland_PokemonLab_Entrance_Frlg/scripts.pory"
# 33 "data/maps/CinnabarIsland_PokemonLab_Entrance_Frlg/scripts.pory"
# 47 "data/maps/CinnabarIsland_PokemonLab_Entrance_Frlg/scripts.pory"
	msgbox CinnabarIsland_PokemonLab_Entrance_Text_RAndDRoomSign, MSGBOX_SIGN
# 48 "data/maps/CinnabarIsland_PokemonLab_Entrance_Frlg/scripts.pory"
	end
# 49 "data/maps/CinnabarIsland_PokemonLab_Entrance_Frlg/scripts.pory"

# 50 "data/maps/CinnabarIsland_PokemonLab_Entrance_Frlg/scripts.pory"

# 51 "data/maps/CinnabarIsland_PokemonLab_Entrance_Frlg/scripts.pory"
CinnabarIsland_PokemonLab_Entrance_EventScript_TestingRoomSign::
# 52 "data/maps/CinnabarIsland_PokemonLab_Entrance_Frlg/scripts.pory"
# 38 "data/maps/CinnabarIsland_PokemonLab_Entrance_Frlg/scripts.pory"
# 53 "data/maps/CinnabarIsland_PokemonLab_Entrance_Frlg/scripts.pory"
	msgbox CinnabarIsland_PokemonLab_Entrance_Text_TestingRoomSign, MSGBOX_SIGN
# 54 "data/maps/CinnabarIsland_PokemonLab_Entrance_Frlg/scripts.pory"
	end
# 55 "data/maps/CinnabarIsland_PokemonLab_Entrance_Frlg/scripts.pory"

# 56 "data/maps/CinnabarIsland_PokemonLab_Entrance_Frlg/scripts.pory"

# 57 "data/maps/CinnabarIsland_PokemonLab_Entrance_Frlg/scripts.pory"
CinnabarIsland_Gym_Text_PhotoOfBlaineAndFuji::
# 58 "data/maps/CinnabarIsland_PokemonLab_Entrance_Frlg/scripts.pory"
# 42 "data/maps/CinnabarIsland_PokemonLab_Entrance_Frlg/scripts.pory"
# 59 "data/maps/CinnabarIsland_PokemonLab_Entrance_Frlg/scripts.pory"
	.string "It's a photo of BLAINE and\n"
# 60 "data/maps/CinnabarIsland_PokemonLab_Entrance_Frlg/scripts.pory"
	.string "MR. FUJI.\p"
# 61 "data/maps/CinnabarIsland_PokemonLab_Entrance_Frlg/scripts.pory"
	.string "They're standing shoulder to\n"
# 62 "data/maps/CinnabarIsland_PokemonLab_Entrance_Frlg/scripts.pory"
	.string "shoulder with big grins.$"
# 63 "data/maps/CinnabarIsland_PokemonLab_Entrance_Frlg/scripts.pory"

# 64 "data/maps/CinnabarIsland_PokemonLab_Entrance_Frlg/scripts.pory"
CinnabarIsland_PokemonLab_Entrance_Text_StudyMonsExtensively::
# 65 "data/maps/CinnabarIsland_PokemonLab_Entrance_Frlg/scripts.pory"
# 49 "data/maps/CinnabarIsland_PokemonLab_Entrance_Frlg/scripts.pory"
# 66 "data/maps/CinnabarIsland_PokemonLab_Entrance_Frlg/scripts.pory"
	.string "We study POKéMON extensively\n"
# 67 "data/maps/CinnabarIsland_PokemonLab_Entrance_Frlg/scripts.pory"
	.string "every day.\p"
# 68 "data/maps/CinnabarIsland_PokemonLab_Entrance_Frlg/scripts.pory"
	.string "People often bring us rare POKéMON\n"
# 69 "data/maps/CinnabarIsland_PokemonLab_Entrance_Frlg/scripts.pory"
	.string "for examination.$"
# 70 "data/maps/CinnabarIsland_PokemonLab_Entrance_Frlg/scripts.pory"

# 71 "data/maps/CinnabarIsland_PokemonLab_Entrance_Frlg/scripts.pory"
CinnabarIsland_PokemonLab_Entrance_Text_PhotoOfLabFounderDrFuji::
# 72 "data/maps/CinnabarIsland_PokemonLab_Entrance_Frlg/scripts.pory"
# 56 "data/maps/CinnabarIsland_PokemonLab_Entrance_Frlg/scripts.pory"
# 73 "data/maps/CinnabarIsland_PokemonLab_Entrance_Frlg/scripts.pory"
	.string "A photo of the LAB's founder…\n"
# 74 "data/maps/CinnabarIsland_PokemonLab_Entrance_Frlg/scripts.pory"
	.string "DR. FUJI?!$"
# 75 "data/maps/CinnabarIsland_PokemonLab_Entrance_Frlg/scripts.pory"

# 76 "data/maps/CinnabarIsland_PokemonLab_Entrance_Frlg/scripts.pory"
CinnabarIsland_PokemonLab_Entrance_Text_MeetingRoomSign::
# 77 "data/maps/CinnabarIsland_PokemonLab_Entrance_Frlg/scripts.pory"
# 61 "data/maps/CinnabarIsland_PokemonLab_Entrance_Frlg/scripts.pory"
# 78 "data/maps/CinnabarIsland_PokemonLab_Entrance_Frlg/scripts.pory"
	.string "POKéMON LAB\n"
# 79 "data/maps/CinnabarIsland_PokemonLab_Entrance_Frlg/scripts.pory"
	.string "Meeting Room$"
# 80 "data/maps/CinnabarIsland_PokemonLab_Entrance_Frlg/scripts.pory"

# 81 "data/maps/CinnabarIsland_PokemonLab_Entrance_Frlg/scripts.pory"
CinnabarIsland_PokemonLab_Entrance_Text_RAndDRoomSign::
# 82 "data/maps/CinnabarIsland_PokemonLab_Entrance_Frlg/scripts.pory"
# 66 "data/maps/CinnabarIsland_PokemonLab_Entrance_Frlg/scripts.pory"
# 83 "data/maps/CinnabarIsland_PokemonLab_Entrance_Frlg/scripts.pory"
	.string "POKéMON LAB\n"
# 84 "data/maps/CinnabarIsland_PokemonLab_Entrance_Frlg/scripts.pory"
	.string "R & D Room$"
# 85 "data/maps/CinnabarIsland_PokemonLab_Entrance_Frlg/scripts.pory"

# 86 "data/maps/CinnabarIsland_PokemonLab_Entrance_Frlg/scripts.pory"
CinnabarIsland_PokemonLab_Entrance_Text_TestingRoomSign::
# 87 "data/maps/CinnabarIsland_PokemonLab_Entrance_Frlg/scripts.pory"
# 71 "data/maps/CinnabarIsland_PokemonLab_Entrance_Frlg/scripts.pory"
# 88 "data/maps/CinnabarIsland_PokemonLab_Entrance_Frlg/scripts.pory"
	.string "POKéMON LAB\n"
# 89 "data/maps/CinnabarIsland_PokemonLab_Entrance_Frlg/scripts.pory"
	.string "Testing Room$"
