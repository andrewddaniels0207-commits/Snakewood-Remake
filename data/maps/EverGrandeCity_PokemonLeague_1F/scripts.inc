EverGrandeCity_PokemonLeague_1F_MapScripts::
# 2 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, EverGrandeCity_PokemonLeague_1F_OnTransition
# 3 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0


EverGrandeCity_PokemonLeague_1F_OnTransition::
# 7 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	setrespawn HEAL_LOCATION_EVER_GRANDE_CITY_POKEMON_LEAGUE
# 8 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	setflag FLAG_LANDMARK_POKEMON_LEAGUE
# 9 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto_if_unset FLAG_ENTERED_ELITE_FOUR, EverGrandeCity_PokemonLeague_1F_OnTransition_2
EverGrandeCity_PokemonLeague_1F_OnTransition_1:
	end

EverGrandeCity_PokemonLeague_1F_OnTransition_2:
# 10 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	call EverGrandeCity_PokemonLeague_1F_EventScript_GuardsBlockDoor
	goto EverGrandeCity_PokemonLeague_1F_OnTransition_1


EverGrandeCity_PokemonLeague_1F_EventScript_GuardsBlockDoor::
# 16 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	setobjectxyperm LOCALID_LEAGUE_GUARD_1, 9, 2
# 17 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	setobjectxyperm LOCALID_LEAGUE_GUARD_2, 10, 2
	return


EverGrandeCity_PokemonLeague_1F_EventScript_Nurse::
# 22 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	setvar VAR_0x800B, LOCALID_LEAGUE_NURSE
# 23 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 24 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	waitmessage
# 25 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	waitbuttonpress
# 26 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	release
	end


EverGrandeCity_PokemonLeague_1F_EventScript_Clerk::
# 31 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	lock
# 32 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	faceplayer
# 33 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	message gText_HowMayIServeYou
# 34 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	waitmessage
# 35 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	pokemart EverGrandeCity_PokemonLeague_1F_Pokemart
# 36 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 37 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	release
	end


EverGrandeCity_PokemonLeague_1F_Pokemart::
# 42 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	pokemartlistend
	return


EverGrandeCity_PokemonLeague_1F_EventScript_DoorGuard::
# 46 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	lockall
# 47 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto_if_set FLAG_ENTERED_ELITE_FOUR, EverGrandeCity_PokemonLeague_1F_EventScript_DoorGuard_2
EverGrandeCity_PokemonLeague_1F_EventScript_DoorGuard_1:
# 50 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 51 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	compare VAR_TEMP_0, 11
	goto_if_ge EverGrandeCity_PokemonLeague_1F_EventScript_DoorGuard_5
EverGrandeCity_PokemonLeague_1F_EventScript_DoorGuard_4:
# 54 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	compare VAR_TEMP_0, 8
	goto_if_le EverGrandeCity_PokemonLeague_1F_EventScript_DoorGuard_8
EverGrandeCity_PokemonLeague_1F_EventScript_DoorGuard_7:
# 57 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	message EverGrandeCity_PokemonLeague_1F_Text_MustHaveAllGymBadges
# 58 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	waitmessage
# 59 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	delay 120
# 60 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto_if_unset FLAG_BADGE06_GET, EverGrandeCity_PokemonLeague_1F_EventScript_DoorGuard_11
EverGrandeCity_PokemonLeague_1F_EventScript_DoorGuard_10:
# 63 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	closemessage
# 64 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	applymovement LOCALID_LEAGUE_GUARD_1, EverGrandeCity_PokemonLeague_1F_Movement_LeftGuardOutOfWay
# 65 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	applymovement LOCALID_LEAGUE_GUARD_2, EverGrandeCity_PokemonLeague_1F_Movement_RightGuardOutOfWay
# 66 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	waitmovement 0
# 67 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	delay 10
# 68 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	playfanfare MUS_OBTAIN_BADGE
# 69 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	message EverGrandeCity_PokemonLeague_1F_Text_GoForth
# 70 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	waitmessage
# 71 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	waitfanfare
# 72 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	closemessage
# 73 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	copyobjectxytoperm LOCALID_LEAGUE_GUARD_1
# 74 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	copyobjectxytoperm LOCALID_LEAGUE_GUARD_2
# 75 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	setflag FLAG_ENTERED_ELITE_FOUR
# 76 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	releaseall
	end

EverGrandeCity_PokemonLeague_1F_EventScript_DoorGuard_2:
# 48 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto EverGrandeCity_PokemonLeague_1F_EventScript_GoForth
	goto EverGrandeCity_PokemonLeague_1F_EventScript_DoorGuard_1

EverGrandeCity_PokemonLeague_1F_EventScript_DoorGuard_5:
# 52 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	call EverGrandeCity_PokemonLeague_1F_EventScript_PlayerMoveToFrontFromRight
	goto EverGrandeCity_PokemonLeague_1F_EventScript_DoorGuard_4

EverGrandeCity_PokemonLeague_1F_EventScript_DoorGuard_8:
# 55 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	call EverGrandeCity_PokemonLeague_1F_EventScript_PlayerMoveToFrontFromLeft
	goto EverGrandeCity_PokemonLeague_1F_EventScript_DoorGuard_7

EverGrandeCity_PokemonLeague_1F_EventScript_DoorGuard_11:
# 61 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto EverGrandeCity_PokemonLeague_1F_EventScript_NotAllBadges
	goto EverGrandeCity_PokemonLeague_1F_EventScript_DoorGuard_10


EverGrandeCity_PokemonLeague_1F_EventScript_PlayerMoveToFrontFromRight::
# 81 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	applymovement LOCALID_PLAYER, EverGrandeCity_PokemonLeague_1F_Movement_MoveToFrontFromRight
# 82 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	waitmovement 0
	return


EverGrandeCity_PokemonLeague_1F_EventScript_PlayerMoveToFrontFromLeft::
# 87 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	applymovement LOCALID_PLAYER, EverGrandeCity_PokemonLeague_1F_Movement_MoveToFrontFromLeft
# 88 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	waitmovement 0
	return


EverGrandeCity_PokemonLeague_1F_EventScript_NotAllBadges::
# 93 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	playse SE_FAILURE
# 94 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	msgbox EverGrandeCity_PokemonLeague_1F_Text_HaventObtainedAllBadges, MSGBOX_DEFAULT
# 95 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	releaseall
	end


EverGrandeCity_PokemonLeague_1F_EventScript_GoForth::
# 100 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FacePlayer
# 101 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	waitmovement 0
# 102 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	msgbox EverGrandeCity_PokemonLeague_1F_Text_GoForth, MSGBOX_DEFAULT
# 103 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	closemessage
# 104 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 105 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	waitmovement 0
# 106 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	releaseall
	end


# 110 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
EverGrandeCity_PokemonLeague_1F_Movement_MoveToFrontFromRight:
# 111 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	walk_down
# 112 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	walk_left
# 113 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	walk_in_place_faster_up
# 114 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	step_end

# 117 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
EverGrandeCity_PokemonLeague_1F_Movement_MoveToFrontFromLeft:
# 118 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	walk_down
# 119 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	walk_right
# 120 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	walk_in_place_faster_up
# 121 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	step_end

# 124 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
EverGrandeCity_PokemonLeague_1F_Movement_LeftGuardOutOfWay:
# 125 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	walk_left
# 126 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	walk_in_place_faster_down
# 127 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	step_end

# 130 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
EverGrandeCity_PokemonLeague_1F_Movement_RightGuardOutOfWay:
# 131 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	walk_right
# 132 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	walk_in_place_faster_down
# 133 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	step_end

EverGrandeCity_PokemonLeague_1F_Text_MustHaveAllGymBadges::
# 136 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "Beyond this point, only those TRAINERS\n"
	.string "who have collected all the GYM BADGES\l"
	.string "are permitted to enter.\p"
	.string "TRAINER, let us confirm that you have\n"
	.string "all the GYM BADGES.$"

EverGrandeCity_PokemonLeague_1F_Text_HaventObtainedAllBadges::
# 144 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "You haven't obtained all the BADGES.\p"
	.string "If you're bound for the POKéMON\n"
	.string "LEAGUE, you must return with them.$"

EverGrandeCity_PokemonLeague_1F_Text_GoForth::
# 150 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "TRAINER! Believe in yourself and your\n"
	.string "POKéMON, and go forth!$"
