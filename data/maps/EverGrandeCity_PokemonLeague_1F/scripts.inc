# 1 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"

# 2 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
EverGrandeCity_PokemonLeague_1F_MapScripts::
# 3 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
# 2 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
# 4 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, EverGrandeCity_PokemonLeague_1F_OnTransition
# 5 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
# 3 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
# 6 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
# 7 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.byte 0
# 8 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"

# 9 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"

# 10 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
EverGrandeCity_PokemonLeague_1F_OnTransition::
# 11 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
# 7 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
# 12 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	setrespawn HEAL_LOCATION_EVER_GRANDE_CITY_POKEMON_LEAGUE
# 13 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
# 8 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
# 14 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	setflag FLAG_LANDMARK_POKEMON_LEAGUE
# 15 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
# 9 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
# 16 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto_if_unset FLAG_ENTERED_ELITE_FOUR, EverGrandeCity_PokemonLeague_1F_OnTransition_2
# 17 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
EverGrandeCity_PokemonLeague_1F_OnTransition_1:
# 18 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	end
# 19 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"

# 20 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
EverGrandeCity_PokemonLeague_1F_OnTransition_2:
# 21 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
# 10 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
# 22 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	call EverGrandeCity_PokemonLeague_1F_EventScript_GuardsBlockDoor
# 23 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto EverGrandeCity_PokemonLeague_1F_OnTransition_1
# 24 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"

# 25 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"

# 26 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
EverGrandeCity_PokemonLeague_1F_EventScript_GuardsBlockDoor::
# 27 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
# 16 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
# 28 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	setobjectxyperm LOCALID_LEAGUE_GUARD_1, 9, 2
# 29 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
# 17 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
# 30 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	setobjectxyperm LOCALID_LEAGUE_GUARD_2, 10, 2
# 31 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	return
# 32 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"

# 33 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"

# 34 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
EverGrandeCity_PokemonLeague_1F_EventScript_Nurse::
# 35 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
# 22 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
# 36 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	setvar VAR_0x800B, LOCALID_LEAGUE_NURSE
# 37 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
# 23 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
# 38 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 39 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
# 24 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
# 40 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	waitmessage
# 41 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
# 25 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
# 42 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	waitbuttonpress
# 43 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
# 26 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
# 44 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	release
# 45 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	end
# 46 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"

# 47 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"

# 48 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
EverGrandeCity_PokemonLeague_1F_EventScript_Clerk::
# 49 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
# 31 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
# 50 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	lock
# 51 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
# 32 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
# 52 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	faceplayer
# 53 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
# 33 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
# 54 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	message gText_HowMayIServeYou
# 55 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
# 34 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
# 56 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	waitmessage
# 57 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
# 35 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
# 58 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	pokemart EverGrandeCity_PokemonLeague_1F_Pokemart
# 59 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
# 36 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
# 60 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 61 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
# 37 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
# 62 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	release
# 63 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	end
# 64 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"

# 65 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"

# 66 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
EverGrandeCity_PokemonLeague_1F_Pokemart::
# 67 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
# 42 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
# 68 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	pokemartlistend
# 69 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	return
# 70 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"

# 71 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"

# 72 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
EverGrandeCity_PokemonLeague_1F_EventScript_DoorGuard::
# 73 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
# 46 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
# 74 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	lockall
# 75 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
# 47 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
# 76 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto_if_set FLAG_ENTERED_ELITE_FOUR, EverGrandeCity_PokemonLeague_1F_EventScript_DoorGuard_2
# 77 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
EverGrandeCity_PokemonLeague_1F_EventScript_DoorGuard_1:
# 78 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
# 50 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
# 79 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 80 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
# 51 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
# 81 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	compare VAR_TEMP_0, 11
# 82 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto_if_ge EverGrandeCity_PokemonLeague_1F_EventScript_DoorGuard_5
# 83 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
EverGrandeCity_PokemonLeague_1F_EventScript_DoorGuard_4:
# 84 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
# 54 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
# 85 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	compare VAR_TEMP_0, 8
# 86 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto_if_le EverGrandeCity_PokemonLeague_1F_EventScript_DoorGuard_8
# 87 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
EverGrandeCity_PokemonLeague_1F_EventScript_DoorGuard_7:
# 88 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
# 57 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
# 89 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	message EverGrandeCity_PokemonLeague_1F_Text_MustHaveAllGymBadges
# 90 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
# 58 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
# 91 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	waitmessage
# 92 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
# 59 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
# 93 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	delay 120
# 94 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
# 60 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
# 95 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto_if_unset FLAG_BADGE06_GET, EverGrandeCity_PokemonLeague_1F_EventScript_DoorGuard_11
# 96 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
EverGrandeCity_PokemonLeague_1F_EventScript_DoorGuard_10:
# 97 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
# 63 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
# 98 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	closemessage
# 99 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
# 64 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
# 100 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	applymovement LOCALID_LEAGUE_GUARD_1, EverGrandeCity_PokemonLeague_1F_Movement_LeftGuardOutOfWay
# 101 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
# 65 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
# 102 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	applymovement LOCALID_LEAGUE_GUARD_2, EverGrandeCity_PokemonLeague_1F_Movement_RightGuardOutOfWay
# 103 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
# 66 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
# 104 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	waitmovement 0
# 105 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
# 67 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
# 106 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	delay 10
# 107 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
# 68 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
# 108 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	playfanfare MUS_OBTAIN_BADGE
# 109 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
# 69 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
# 110 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	message EverGrandeCity_PokemonLeague_1F_Text_GoForth
# 111 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
# 70 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
# 112 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	waitmessage
# 113 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
# 71 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
# 114 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	waitfanfare
# 115 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
# 72 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
# 116 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	closemessage
# 117 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
# 73 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
# 118 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	copyobjectxytoperm LOCALID_LEAGUE_GUARD_1
# 119 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
# 74 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
# 120 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	copyobjectxytoperm LOCALID_LEAGUE_GUARD_2
# 121 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
# 75 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
# 122 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	setflag FLAG_ENTERED_ELITE_FOUR
# 123 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
# 76 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
# 124 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	releaseall
# 125 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	end
# 126 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"

# 127 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
EverGrandeCity_PokemonLeague_1F_EventScript_DoorGuard_2:
# 128 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
# 48 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
# 129 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto EverGrandeCity_PokemonLeague_1F_EventScript_GoForth
# 130 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto EverGrandeCity_PokemonLeague_1F_EventScript_DoorGuard_1
# 131 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"

# 132 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
EverGrandeCity_PokemonLeague_1F_EventScript_DoorGuard_5:
# 133 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
# 52 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
# 134 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	call EverGrandeCity_PokemonLeague_1F_EventScript_PlayerMoveToFrontFromRight
# 135 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto EverGrandeCity_PokemonLeague_1F_EventScript_DoorGuard_4
# 136 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"

# 137 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
EverGrandeCity_PokemonLeague_1F_EventScript_DoorGuard_8:
# 138 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
# 55 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
# 139 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	call EverGrandeCity_PokemonLeague_1F_EventScript_PlayerMoveToFrontFromLeft
# 140 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto EverGrandeCity_PokemonLeague_1F_EventScript_DoorGuard_7
# 141 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"

# 142 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
EverGrandeCity_PokemonLeague_1F_EventScript_DoorGuard_11:
# 143 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
# 61 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
# 144 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto EverGrandeCity_PokemonLeague_1F_EventScript_NotAllBadges
# 145 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto EverGrandeCity_PokemonLeague_1F_EventScript_DoorGuard_10
# 146 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"

# 147 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"

# 148 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
EverGrandeCity_PokemonLeague_1F_EventScript_PlayerMoveToFrontFromRight::
# 149 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
# 81 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
# 150 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	applymovement LOCALID_PLAYER, EverGrandeCity_PokemonLeague_1F_Movement_MoveToFrontFromRight
# 151 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
# 82 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
# 152 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	waitmovement 0
# 153 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	return
# 154 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"

# 155 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"

# 156 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
EverGrandeCity_PokemonLeague_1F_EventScript_PlayerMoveToFrontFromLeft::
# 157 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
# 87 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
# 158 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	applymovement LOCALID_PLAYER, EverGrandeCity_PokemonLeague_1F_Movement_MoveToFrontFromLeft
# 159 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
# 88 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
# 160 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	waitmovement 0
# 161 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	return
# 162 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"

# 163 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"

# 164 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
EverGrandeCity_PokemonLeague_1F_EventScript_NotAllBadges::
# 165 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
# 93 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
# 166 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	playse SE_FAILURE
# 167 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
# 94 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
# 168 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	msgbox EverGrandeCity_PokemonLeague_1F_Text_HaventObtainedAllBadges, MSGBOX_DEFAULT
# 169 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
# 95 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
# 170 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	releaseall
# 171 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	end
# 172 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"

# 173 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"

# 174 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
EverGrandeCity_PokemonLeague_1F_EventScript_GoForth::
# 175 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
# 100 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
# 176 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FacePlayer
# 177 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
# 101 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
# 178 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	waitmovement 0
# 179 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
# 102 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
# 180 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	msgbox EverGrandeCity_PokemonLeague_1F_Text_GoForth, MSGBOX_DEFAULT
# 181 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
# 103 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
# 182 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	closemessage
# 183 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
# 104 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
# 184 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 185 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
# 105 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
# 186 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	waitmovement 0
# 187 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
# 106 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
# 188 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	releaseall
# 189 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	end
# 190 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"

# 191 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"

# 192 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
# 110 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
# 193 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
EverGrandeCity_PokemonLeague_1F_Movement_MoveToFrontFromRight:
# 194 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
# 111 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
# 195 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	walk_down
# 196 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
# 112 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
# 197 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	walk_left
# 198 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
# 113 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
# 199 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	walk_in_place_faster_up
# 200 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
# 114 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
# 201 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	step_end
# 202 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"

# 203 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
# 117 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
# 204 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
EverGrandeCity_PokemonLeague_1F_Movement_MoveToFrontFromLeft:
# 205 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
# 118 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
# 206 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	walk_down
# 207 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
# 119 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
# 208 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	walk_right
# 209 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
# 120 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
# 210 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	walk_in_place_faster_up
# 211 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
# 121 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
# 212 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	step_end
# 213 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"

# 214 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
# 124 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
# 215 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
EverGrandeCity_PokemonLeague_1F_Movement_LeftGuardOutOfWay:
# 216 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
# 125 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
# 217 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	walk_left
# 218 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
# 126 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
# 219 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	walk_in_place_faster_down
# 220 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
# 127 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
# 221 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	step_end
# 222 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"

# 223 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
# 130 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
# 224 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
EverGrandeCity_PokemonLeague_1F_Movement_RightGuardOutOfWay:
# 225 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
# 131 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
# 226 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	walk_right
# 227 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
# 132 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
# 228 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	walk_in_place_faster_down
# 229 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
# 133 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
# 230 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	step_end
# 231 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"

# 232 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
EverGrandeCity_PokemonLeague_1F_Text_MustHaveAllGymBadges::
# 233 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
# 136 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
# 234 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "Beyond this point, only those TRAINERS\n"
# 235 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "who have collected all the GYM BADGES\l"
# 236 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "are permitted to enter.\p"
# 237 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "TRAINER, let us confirm that you have\n"
# 238 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "all the GYM BADGES.$"
# 239 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"

# 240 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
EverGrandeCity_PokemonLeague_1F_Text_HaventObtainedAllBadges::
# 241 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
# 144 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
# 242 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "You haven't obtained all the BADGES.\p"
# 243 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "If you're bound for the POKéMON\n"
# 244 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "LEAGUE, you must return with them.$"
# 245 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"

# 246 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
EverGrandeCity_PokemonLeague_1F_Text_GoForth::
# 247 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
# 150 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
# 248 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "TRAINER! Believe in yourself and your\n"
# 249 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "POKéMON, and go forth!$"
