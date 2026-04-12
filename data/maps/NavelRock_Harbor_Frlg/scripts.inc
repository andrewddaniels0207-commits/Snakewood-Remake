# 1 "data/maps/NavelRock_Harbor_Frlg/scripts.pory"

# 2 "data/maps/NavelRock_Harbor_Frlg/scripts.pory"
NavelRock_Harbor_Frlg_MapScripts::
# 3 "data/maps/NavelRock_Harbor_Frlg/scripts.pory"
	.byte 0
# 4 "data/maps/NavelRock_Harbor_Frlg/scripts.pory"

# 5 "data/maps/NavelRock_Harbor_Frlg/scripts.pory"

# 6 "data/maps/NavelRock_Harbor_Frlg/scripts.pory"
NavelRock_Harbor_Frlg_EventScript_Sailor::
# 7 "data/maps/NavelRock_Harbor_Frlg/scripts.pory"
# 4 "data/maps/NavelRock_Harbor_Frlg/scripts.pory"
# 8 "data/maps/NavelRock_Harbor_Frlg/scripts.pory"
	lock
# 9 "data/maps/NavelRock_Harbor_Frlg/scripts.pory"
# 5 "data/maps/NavelRock_Harbor_Frlg/scripts.pory"
# 10 "data/maps/NavelRock_Harbor_Frlg/scripts.pory"
	faceplayer
# 11 "data/maps/NavelRock_Harbor_Frlg/scripts.pory"
# 6 "data/maps/NavelRock_Harbor_Frlg/scripts.pory"
# 12 "data/maps/NavelRock_Harbor_Frlg/scripts.pory"
	message Text_WhereDoYouWantToSail
# 13 "data/maps/NavelRock_Harbor_Frlg/scripts.pory"
# 7 "data/maps/NavelRock_Harbor_Frlg/scripts.pory"
# 14 "data/maps/NavelRock_Harbor_Frlg/scripts.pory"
	waitmessage
# 15 "data/maps/NavelRock_Harbor_Frlg/scripts.pory"
# 8 "data/maps/NavelRock_Harbor_Frlg/scripts.pory"
# 16 "data/maps/NavelRock_Harbor_Frlg/scripts.pory"
	setvar VAR_0x8004, SEAGALLOP_NAVEL_ROCK
# 17 "data/maps/NavelRock_Harbor_Frlg/scripts.pory"
# 9 "data/maps/NavelRock_Harbor_Frlg/scripts.pory"
# 18 "data/maps/NavelRock_Harbor_Frlg/scripts.pory"
	multichoice 20, 8, MULTI_SEAGALLOP_VERMILION, FALSE
# 19 "data/maps/NavelRock_Harbor_Frlg/scripts.pory"
# 10 "data/maps/NavelRock_Harbor_Frlg/scripts.pory"
# 20 "data/maps/NavelRock_Harbor_Frlg/scripts.pory"
	switch VAR_RESULT
# 21 "data/maps/NavelRock_Harbor_Frlg/scripts.pory"
# 11 "data/maps/NavelRock_Harbor_Frlg/scripts.pory"
# 22 "data/maps/NavelRock_Harbor_Frlg/scripts.pory"
	case 0, NavelRock_Harbor_Frlg_EventScript_Sailor_3
# 23 "data/maps/NavelRock_Harbor_Frlg/scripts.pory"
# 13 "data/maps/NavelRock_Harbor_Frlg/scripts.pory"
# 24 "data/maps/NavelRock_Harbor_Frlg/scripts.pory"
	case 1, NavelRock_Harbor_Frlg_EventScript_Sailor_4
# 25 "data/maps/NavelRock_Harbor_Frlg/scripts.pory"
# 15 "data/maps/NavelRock_Harbor_Frlg/scripts.pory"
# 26 "data/maps/NavelRock_Harbor_Frlg/scripts.pory"
	case 127, NavelRock_Harbor_Frlg_EventScript_Sailor_5
# 27 "data/maps/NavelRock_Harbor_Frlg/scripts.pory"
NavelRock_Harbor_Frlg_EventScript_Sailor_1:
# 28 "data/maps/NavelRock_Harbor_Frlg/scripts.pory"
	end
# 29 "data/maps/NavelRock_Harbor_Frlg/scripts.pory"

# 30 "data/maps/NavelRock_Harbor_Frlg/scripts.pory"
NavelRock_Harbor_Frlg_EventScript_Sailor_3:
# 31 "data/maps/NavelRock_Harbor_Frlg/scripts.pory"
# 12 "data/maps/NavelRock_Harbor_Frlg/scripts.pory"
# 32 "data/maps/NavelRock_Harbor_Frlg/scripts.pory"
	goto EventScript_SailToVermilionCity
# 33 "data/maps/NavelRock_Harbor_Frlg/scripts.pory"
	goto NavelRock_Harbor_Frlg_EventScript_Sailor_1
# 34 "data/maps/NavelRock_Harbor_Frlg/scripts.pory"

# 35 "data/maps/NavelRock_Harbor_Frlg/scripts.pory"
NavelRock_Harbor_Frlg_EventScript_Sailor_4:
# 36 "data/maps/NavelRock_Harbor_Frlg/scripts.pory"
# 14 "data/maps/NavelRock_Harbor_Frlg/scripts.pory"
# 37 "data/maps/NavelRock_Harbor_Frlg/scripts.pory"
	goto EventScript_CancelSail
# 38 "data/maps/NavelRock_Harbor_Frlg/scripts.pory"
	goto NavelRock_Harbor_Frlg_EventScript_Sailor_1
# 39 "data/maps/NavelRock_Harbor_Frlg/scripts.pory"

# 40 "data/maps/NavelRock_Harbor_Frlg/scripts.pory"
NavelRock_Harbor_Frlg_EventScript_Sailor_5:
# 41 "data/maps/NavelRock_Harbor_Frlg/scripts.pory"
# 16 "data/maps/NavelRock_Harbor_Frlg/scripts.pory"
# 42 "data/maps/NavelRock_Harbor_Frlg/scripts.pory"
	goto EventScript_CancelSail
# 43 "data/maps/NavelRock_Harbor_Frlg/scripts.pory"
	goto NavelRock_Harbor_Frlg_EventScript_Sailor_1
