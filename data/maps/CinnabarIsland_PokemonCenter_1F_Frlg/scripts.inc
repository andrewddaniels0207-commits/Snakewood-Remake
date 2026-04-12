# 1 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 2 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
CinnabarIsland_PokemonCenter_1F_Frlg_MapScripts::
# 3 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 2 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 4 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, CinnabarIsland_PokemonCenter_1F_OnTransition
# 5 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 3 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 6 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
# 7 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.byte 0
# 8 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 9 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 10 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
CinnabarIsland_PokemonCenter_1F_OnTransition::
# 11 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 7 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 12 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	setrespawn HEAL_LOCATION_CINNABAR_ISLAND
# 13 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 14 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 15 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 16 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
CinnabarIsland_PokemonCenter_1F_EventScript_Nurse::
# 17 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 12 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 18 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	lock
# 19 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 13 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 20 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	faceplayer
# 21 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 14 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 22 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	call EventScript_PkmnCenterNurse_Frlg
# 23 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 15 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 24 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	release
# 25 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 26 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 27 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 28 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
CinnabarIsland_PokemonCenter_1F_EventScript_Gentleman::
# 29 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 20 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 30 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox CinnabarIsland_PokemonCenter_1F_Text_VisitUnionRoom, MSGBOX_NPC
# 31 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 32 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 33 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 34 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
CinnabarIsland_PokemonCenter_1F_EventScript_CooltrainerF::
# 35 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 25 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 36 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox CinnabarIsland_PokemonCenter_1F_Text_CinnabarGymLocked, MSGBOX_NPC
# 37 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 38 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 39 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 40 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
CinnabarIsland_PokemonCenter_1F_EventScript_Youngster::
# 41 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 30 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 42 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox CinnabarIsland_PokemonCenter_1F_Text_EvolutionCanWaitForNewMoves, MSGBOX_NPC
# 43 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 44 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 45 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 46 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
CinnabarIsland_PokemonCenter_1F_EventScript_Bill::
# 47 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 35 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 48 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	lock
# 49 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 36 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 50 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	faceplayer
# 51 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 37 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 52 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox CinnabarIsland_PokemonCenter_1F_Text_ReadyToSailToOneIsland, MSGBOX_YESNO
# 53 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 38 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 54 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	compare VAR_RESULT, NO
# 55 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	goto_if_eq CinnabarIsland_PokemonCenter_1F_EventScript_Bill_2
# 56 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
CinnabarIsland_PokemonCenter_1F_EventScript_Bill_1:
# 57 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 41 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 58 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox CinnabarIsland_PokemonCenter_1F_Text_LetsGo
# 59 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 42 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 60 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	closemessage
# 61 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 43 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 62 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	playbgm MUS_FOLLOW_ME, 1
# 63 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 44 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 64 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	savebgm MUS_FOLLOW_ME
# 65 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 45 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 66 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	setflag FLAG_DONT_TRANSITION_MUSIC
# 67 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 46 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 68 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	setflag FLAG_HIDE_CINNABAR_POKECENTER_BILL
# 69 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 47 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 70 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	delay 20
# 71 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 48 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 72 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	compare VAR_FACING, DIR_SOUTH
# 73 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	goto_if_eq CinnabarIsland_PokemonCenter_1F_EventScript_Bill_5
# 74 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
CinnabarIsland_PokemonCenter_1F_EventScript_Bill_4:
# 75 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 51 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 76 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	compare VAR_FACING, DIR_EAST
# 77 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	goto_if_eq CinnabarIsland_PokemonCenter_1F_EventScript_Bill_8
# 78 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
CinnabarIsland_PokemonCenter_1F_EventScript_Bill_7:
# 79 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 54 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 80 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	compare VAR_FACING, DIR_WEST
# 81 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	goto_if_eq CinnabarIsland_PokemonCenter_1F_EventScript_Bill_11
# 82 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
CinnabarIsland_PokemonCenter_1F_EventScript_Bill_10:
# 83 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 57 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 84 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	removeobject LOCALID_CINNABAR_POKEMON_CENTER_BILL
# 85 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 58 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 86 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_CINNABAR_ISLAND_2, 1
# 87 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 59 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 88 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	clearflag FLAG_HIDE_CINNABAR_BILL
# 89 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 60 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 90 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	warp MAP_CINNABAR_ISLAND, 14, 11
# 91 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 61 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 92 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	waitstate
# 93 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 62 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 94 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	release
# 95 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 96 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 97 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
CinnabarIsland_PokemonCenter_1F_EventScript_Bill_2:
# 98 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 39 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 99 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	goto CinnabarIsland_PokemonCenter_1F_EventScript_NotReadyToSail
# 100 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	goto CinnabarIsland_PokemonCenter_1F_EventScript_Bill_1
# 101 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 102 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
CinnabarIsland_PokemonCenter_1F_EventScript_Bill_5:
# 103 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 49 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 104 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	call CinnabarIsland_PokemonCenter_1F_EventScript_ExitWithBillSouth
# 105 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	goto CinnabarIsland_PokemonCenter_1F_EventScript_Bill_4
# 106 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 107 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
CinnabarIsland_PokemonCenter_1F_EventScript_Bill_8:
# 108 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 52 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 109 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	call CinnabarIsland_PokemonCenter_1F_EventScript_ExitWithBillEast
# 110 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	goto CinnabarIsland_PokemonCenter_1F_EventScript_Bill_7
# 111 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 112 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
CinnabarIsland_PokemonCenter_1F_EventScript_Bill_11:
# 113 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 55 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 114 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	call CinnabarIsland_PokemonCenter_1F_EventScript_ExitWithBillWest
# 115 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	goto CinnabarIsland_PokemonCenter_1F_EventScript_Bill_10
# 116 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 117 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 118 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
CinnabarIsland_PokemonCenter_1F_EventScript_ExitWithBillSouth::
# 119 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 67 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 120 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	applymovement LOCALID_CINNABAR_POKEMON_CENTER_BILL, CinnabarIsland_PokemonCenter_1F_Movement_BillExit
# 121 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 68 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 122 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, CinnabarIsland_PokemonCenter_1F_Movement_PlayerExitSouth
# 123 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 69 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 124 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	waitmovement 0
# 125 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	return
# 126 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 127 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 128 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
CinnabarIsland_PokemonCenter_1F_EventScript_ExitWithBillEast::
# 129 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 74 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 130 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	applymovement LOCALID_CINNABAR_POKEMON_CENTER_BILL, CinnabarIsland_PokemonCenter_1F_Movement_BillExitEast
# 131 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 75 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 132 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, CinnabarIsland_PokemonCenter_1F_Movement_PlayerExitEast
# 133 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 76 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 134 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	waitmovement 0
# 135 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	return
# 136 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 137 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 138 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
CinnabarIsland_PokemonCenter_1F_EventScript_ExitWithBillWest::
# 139 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 81 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 140 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	applymovement LOCALID_CINNABAR_POKEMON_CENTER_BILL, CinnabarIsland_PokemonCenter_1F_Movement_BillExit
# 141 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 82 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 142 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, CinnabarIsland_PokemonCenter_1F_Movement_PlayerExitWest
# 143 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 83 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 144 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	waitmovement 0
# 145 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	return
# 146 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 147 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 148 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
CinnabarIsland_PokemonCenter_1F_EventScript_NotReadyToSail::
# 149 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 88 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 150 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox CinnabarIsland_PokemonCenter_1F_Text_OhNotDoneYet
# 151 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 89 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 152 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	release
# 153 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 154 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 155 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 156 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 93 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 157 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
CinnabarIsland_PokemonCenter_1F_Movement_BillExit:
# 158 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 94 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 159 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_left
# 160 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 95 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 161 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_left
# 162 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 96 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 163 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_left
# 164 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 97 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 165 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_left
# 166 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 98 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 167 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_down
# 168 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 99 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 169 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_down
# 170 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 100 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 171 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_down
# 172 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 101 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 173 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	delay_8
# 174 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 102 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 175 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	set_invisible
# 176 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 103 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 177 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	step_end
# 178 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 179 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 106 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 180 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
CinnabarIsland_PokemonCenter_1F_Movement_PlayerExitSouth:
# 181 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 107 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 182 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_down
# 183 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 108 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 184 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_left
# 185 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 109 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 186 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_left
# 187 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 110 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 188 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_left
# 189 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 111 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 190 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_left
# 191 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 112 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 192 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_down
# 193 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 113 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 194 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_down
# 195 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 114 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 196 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	delay_16
# 197 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 115 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 198 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_down
# 199 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 116 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 200 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	step_end
# 201 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 202 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 119 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 203 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
CinnabarIsland_PokemonCenter_1F_Movement_BillExitEast:
# 204 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 120 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 205 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_up
# 206 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 121 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 207 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_left
# 208 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 122 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 209 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_left
# 210 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 123 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 211 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_down
# 212 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 124 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 213 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_left
# 214 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 125 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 215 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_left
# 216 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 126 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 217 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_down
# 218 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 127 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 219 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_down
# 220 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 128 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 221 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_down
# 222 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 129 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 223 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	delay_8
# 224 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 130 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 225 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	set_invisible
# 226 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 131 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 227 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	step_end
# 228 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 229 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 134 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 230 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
CinnabarIsland_PokemonCenter_1F_Movement_PlayerExitEast:
# 231 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 135 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 232 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	delay_16
# 233 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 136 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 234 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	delay_16
# 235 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 137 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 236 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	delay_16
# 237 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 138 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 238 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	face_left
# 239 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 139 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 240 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	delay_16
# 241 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 140 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 242 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_left
# 243 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 141 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 244 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_left
# 245 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 142 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 246 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_left
# 247 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 143 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 248 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_down
# 249 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 144 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 250 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_down
# 251 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 145 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 252 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	delay_8
# 253 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 146 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 254 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_down
# 255 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 147 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 256 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	delay_8
# 257 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 148 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 258 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	set_invisible
# 259 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 149 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 260 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	step_end
# 261 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 262 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 152 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 263 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
CinnabarIsland_PokemonCenter_1F_Movement_PlayerExitWest:
# 264 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 153 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 265 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_left
# 266 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 154 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 267 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_left
# 268 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 155 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 269 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_left
# 270 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 156 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 271 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_left
# 272 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 157 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 273 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_left
# 274 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 158 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 275 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_down
# 276 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 159 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 277 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_down
# 278 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 160 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 279 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	delay_16
# 280 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 161 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 281 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_down
# 282 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 162 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 283 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	step_end
# 284 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 285 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
CinnabarIsland_PokemonCenter_1F_Text_CinnabarGymLocked::
# 286 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 165 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 287 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "I came to visit the CINNABAR GYM,\n"
# 288 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "but the door is locked tight.\p"
# 289 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "There should be a key for it\n"
# 290 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "somewhere.\p"
# 291 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Could it be in that burned-out\n"
# 292 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "mansion?\p"
# 293 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "The GYM LEADER's friend used to\n"
# 294 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "live there, they say.$"
# 295 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 296 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
CinnabarIsland_PokemonCenter_1F_Text_VisitUnionRoom::
# 297 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 176 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 298 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Do you have lots of friends?\p"
# 299 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Linking up with the usual friends\n"
# 300 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "is fun, of course.\p"
# 301 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "But how about visiting the\n"
# 302 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "UNION ROOM every so often?\p"
# 303 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Who knows, you may end up making\n"
# 304 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "new friends.\p"
# 305 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "I think it would be worth your time\n"
# 306 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "to check the UNION ROOM.$"
# 307 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 308 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
CinnabarIsland_PokemonCenter_1F_Text_EvolutionCanWaitForNewMoves::
# 309 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 188 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 310 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "POKéMON can still learn techniques\n"
# 311 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "after canceling evolution.\p"
# 312 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Evolution can wait until new moves\n"
# 313 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "have been learned.$"
# 314 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 315 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
CinnabarIsland_PokemonCenter_1F_Text_ReadyToSailToOneIsland::
# 316 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 195 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 317 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "BILL: Hey, you kept me waiting!\n"
# 318 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Ready to set sail to ONE ISLAND?$"
# 319 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 320 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
CinnabarIsland_PokemonCenter_1F_Text_OhNotDoneYet::
# 321 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 200 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 322 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Oh, you're still not done yet?$"
# 323 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 324 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
CinnabarIsland_PokemonCenter_1F_Text_LetsGo::
# 325 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 204 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 326 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Well, that's it.\n"
# 327 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Let's go!$"
