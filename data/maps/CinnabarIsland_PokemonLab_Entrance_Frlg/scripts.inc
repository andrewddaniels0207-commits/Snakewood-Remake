CinnabarIsland_PokemonLab_Entrance_Frlg_MapScripts::
# 2 "data/maps/CinnabarIsland_PokemonLab_Entrance_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, CinnabarIsland_PokemonLab_Entrance_OnTransition
	.byte 0


CinnabarIsland_PokemonLab_Entrance_OnTransition::
# 6 "data/maps/CinnabarIsland_PokemonLab_Entrance_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_CINNABAR_ISLAND_POKEMON_LAB_EXPERIMENT_ROOM_REVIVE_STATE, 1
	goto_if_eq CinnabarIsland_PokemonLab_Entrance_OnTransition_2
CinnabarIsland_PokemonLab_Entrance_OnTransition_1:
	end

CinnabarIsland_PokemonLab_Entrance_OnTransition_2:
# 7 "data/maps/CinnabarIsland_PokemonLab_Entrance_Frlg/scripts.pory"
	call CinnabarIsland_PokemonLab_Entrance_EventScript_ReadyFossil
	goto CinnabarIsland_PokemonLab_Entrance_OnTransition_1


CinnabarIsland_PokemonLab_Entrance_EventScript_ReadyFossil::
# 13 "data/maps/CinnabarIsland_PokemonLab_Entrance_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_CINNABAR_ISLAND_POKEMON_LAB_EXPERIMENT_ROOM_REVIVE_STATE, 2
	return


CinnabarIsland_PokemonLab_Entrance_EventScript_Scientist::
# 18 "data/maps/CinnabarIsland_PokemonLab_Entrance_Frlg/scripts.pory"
	msgbox CinnabarIsland_PokemonLab_Entrance_Text_StudyMonsExtensively, MSGBOX_NPC
	end


CinnabarIsland_PokemonLab_Entrance_EventScript_DrFujiPhoto::
# 23 "data/maps/CinnabarIsland_PokemonLab_Entrance_Frlg/scripts.pory"
	msgbox CinnabarIsland_PokemonLab_Entrance_Text_PhotoOfLabFounderDrFuji, MSGBOX_SIGN
	end


CinnabarIsland_PokemonLab_Entrance_EventScript_MeetingRoomSign::
# 28 "data/maps/CinnabarIsland_PokemonLab_Entrance_Frlg/scripts.pory"
	msgbox CinnabarIsland_PokemonLab_Entrance_Text_MeetingRoomSign, MSGBOX_SIGN
	end


CinnabarIsland_PokemonLab_Entrance_EventScript_RAndDRoomSign::
# 33 "data/maps/CinnabarIsland_PokemonLab_Entrance_Frlg/scripts.pory"
	msgbox CinnabarIsland_PokemonLab_Entrance_Text_RAndDRoomSign, MSGBOX_SIGN
	end


CinnabarIsland_PokemonLab_Entrance_EventScript_TestingRoomSign::
# 38 "data/maps/CinnabarIsland_PokemonLab_Entrance_Frlg/scripts.pory"
	msgbox CinnabarIsland_PokemonLab_Entrance_Text_TestingRoomSign, MSGBOX_SIGN
	end


CinnabarIsland_Gym_Text_PhotoOfBlaineAndFuji::
# 42 "data/maps/CinnabarIsland_PokemonLab_Entrance_Frlg/scripts.pory"
	.string "It's a photo of BLAINE and\n"
	.string "MR. FUJI.\p"
	.string "They're standing shoulder to\n"
	.string "shoulder with big grins.$"

CinnabarIsland_PokemonLab_Entrance_Text_StudyMonsExtensively::
# 49 "data/maps/CinnabarIsland_PokemonLab_Entrance_Frlg/scripts.pory"
	.string "We study POKéMON extensively\n"
	.string "every day.\p"
	.string "People often bring us rare POKéMON\n"
	.string "for examination.$"

CinnabarIsland_PokemonLab_Entrance_Text_PhotoOfLabFounderDrFuji::
# 56 "data/maps/CinnabarIsland_PokemonLab_Entrance_Frlg/scripts.pory"
	.string "A photo of the LAB's founder…\n"
	.string "DR. FUJI?!$"

CinnabarIsland_PokemonLab_Entrance_Text_MeetingRoomSign::
# 61 "data/maps/CinnabarIsland_PokemonLab_Entrance_Frlg/scripts.pory"
	.string "POKéMON LAB\n"
	.string "Meeting Room$"

CinnabarIsland_PokemonLab_Entrance_Text_RAndDRoomSign::
# 66 "data/maps/CinnabarIsland_PokemonLab_Entrance_Frlg/scripts.pory"
	.string "POKéMON LAB\n"
	.string "R & D Room$"

CinnabarIsland_PokemonLab_Entrance_Text_TestingRoomSign::
# 71 "data/maps/CinnabarIsland_PokemonLab_Entrance_Frlg/scripts.pory"
	.string "POKéMON LAB\n"
	.string "Testing Room$"
