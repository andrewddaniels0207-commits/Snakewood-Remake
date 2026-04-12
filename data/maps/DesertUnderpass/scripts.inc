# 1 "data/maps/DesertUnderpass/scripts.pory"

# 2 "data/maps/DesertUnderpass/scripts.pory"
DesertUnderpass_MapScripts::
# 3 "data/maps/DesertUnderpass/scripts.pory"
# 2 "data/maps/DesertUnderpass/scripts.pory"
# 4 "data/maps/DesertUnderpass/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, DesertUnderpass_OnTransition
# 5 "data/maps/DesertUnderpass/scripts.pory"
	.byte 0
# 6 "data/maps/DesertUnderpass/scripts.pory"

# 7 "data/maps/DesertUnderpass/scripts.pory"

# 8 "data/maps/DesertUnderpass/scripts.pory"
DesertUnderpass_OnTransition::
# 9 "data/maps/DesertUnderpass/scripts.pory"
# 6 "data/maps/DesertUnderpass/scripts.pory"
# 10 "data/maps/DesertUnderpass/scripts.pory"
	setflag FLAG_LANDMARK_DESERT_UNDERPASS
# 11 "data/maps/DesertUnderpass/scripts.pory"
	end
# 12 "data/maps/DesertUnderpass/scripts.pory"

# 13 "data/maps/DesertUnderpass/scripts.pory"

# 14 "data/maps/DesertUnderpass/scripts.pory"
DesertUnderpass_EventScript_Fossil::
# 15 "data/maps/DesertUnderpass/scripts.pory"
# 11 "data/maps/DesertUnderpass/scripts.pory"
# 16 "data/maps/DesertUnderpass/scripts.pory"
	lock
# 17 "data/maps/DesertUnderpass/scripts.pory"
# 12 "data/maps/DesertUnderpass/scripts.pory"
# 18 "data/maps/DesertUnderpass/scripts.pory"
	faceplayer
# 19 "data/maps/DesertUnderpass/scripts.pory"
# 13 "data/maps/DesertUnderpass/scripts.pory"
# 20 "data/maps/DesertUnderpass/scripts.pory"
	goto_if_set FLAG_CHOSE_ROOT_FOSSIL, DesertUnderpass_EventScript_Fossil_2
# 21 "data/maps/DesertUnderpass/scripts.pory"
DesertUnderpass_EventScript_Fossil_1:
# 22 "data/maps/DesertUnderpass/scripts.pory"
# 16 "data/maps/DesertUnderpass/scripts.pory"
# 23 "data/maps/DesertUnderpass/scripts.pory"
	goto_if_set FLAG_CHOSE_CLAW_FOSSIL, DesertUnderpass_EventScript_Fossil_5
# 24 "data/maps/DesertUnderpass/scripts.pory"
DesertUnderpass_EventScript_Fossil_4:
# 25 "data/maps/DesertUnderpass/scripts.pory"
# 19 "data/maps/DesertUnderpass/scripts.pory"
# 26 "data/maps/DesertUnderpass/scripts.pory"
	release
# 27 "data/maps/DesertUnderpass/scripts.pory"
	end
# 28 "data/maps/DesertUnderpass/scripts.pory"

# 29 "data/maps/DesertUnderpass/scripts.pory"
DesertUnderpass_EventScript_Fossil_2:
# 30 "data/maps/DesertUnderpass/scripts.pory"
# 14 "data/maps/DesertUnderpass/scripts.pory"
# 31 "data/maps/DesertUnderpass/scripts.pory"
	goto DesertUnderpass_EventScript_GiveClawFossil
# 32 "data/maps/DesertUnderpass/scripts.pory"
	goto DesertUnderpass_EventScript_Fossil_1
# 33 "data/maps/DesertUnderpass/scripts.pory"

# 34 "data/maps/DesertUnderpass/scripts.pory"
DesertUnderpass_EventScript_Fossil_5:
# 35 "data/maps/DesertUnderpass/scripts.pory"
# 17 "data/maps/DesertUnderpass/scripts.pory"
# 36 "data/maps/DesertUnderpass/scripts.pory"
	goto DesertUnderpass_EventScript_GiveRootFossil
# 37 "data/maps/DesertUnderpass/scripts.pory"
	goto DesertUnderpass_EventScript_Fossil_4
# 38 "data/maps/DesertUnderpass/scripts.pory"

# 39 "data/maps/DesertUnderpass/scripts.pory"

# 40 "data/maps/DesertUnderpass/scripts.pory"
DesertUnderpass_EventScript_GiveClawFossil::
# 41 "data/maps/DesertUnderpass/scripts.pory"
# 24 "data/maps/DesertUnderpass/scripts.pory"
# 42 "data/maps/DesertUnderpass/scripts.pory"
	giveitem ITEM_CLAW_FOSSIL
# 43 "data/maps/DesertUnderpass/scripts.pory"
# 25 "data/maps/DesertUnderpass/scripts.pory"
# 44 "data/maps/DesertUnderpass/scripts.pory"
	compare VAR_RESULT, FALSE
# 45 "data/maps/DesertUnderpass/scripts.pory"
	goto_if_eq DesertUnderpass_EventScript_GiveClawFossil_2
# 46 "data/maps/DesertUnderpass/scripts.pory"
DesertUnderpass_EventScript_GiveClawFossil_1:
# 47 "data/maps/DesertUnderpass/scripts.pory"
# 28 "data/maps/DesertUnderpass/scripts.pory"
# 48 "data/maps/DesertUnderpass/scripts.pory"
	removeobject LOCALID_UNDERPASS_FOSSIL
# 49 "data/maps/DesertUnderpass/scripts.pory"
# 29 "data/maps/DesertUnderpass/scripts.pory"
# 50 "data/maps/DesertUnderpass/scripts.pory"
	release
# 51 "data/maps/DesertUnderpass/scripts.pory"
	end
# 52 "data/maps/DesertUnderpass/scripts.pory"

# 53 "data/maps/DesertUnderpass/scripts.pory"
DesertUnderpass_EventScript_GiveClawFossil_2:
# 54 "data/maps/DesertUnderpass/scripts.pory"
# 26 "data/maps/DesertUnderpass/scripts.pory"
# 55 "data/maps/DesertUnderpass/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
# 56 "data/maps/DesertUnderpass/scripts.pory"
	goto DesertUnderpass_EventScript_GiveClawFossil_1
# 57 "data/maps/DesertUnderpass/scripts.pory"

# 58 "data/maps/DesertUnderpass/scripts.pory"

# 59 "data/maps/DesertUnderpass/scripts.pory"
DesertUnderpass_EventScript_GiveRootFossil::
# 60 "data/maps/DesertUnderpass/scripts.pory"
# 34 "data/maps/DesertUnderpass/scripts.pory"
# 61 "data/maps/DesertUnderpass/scripts.pory"
	giveitem ITEM_ROOT_FOSSIL
# 62 "data/maps/DesertUnderpass/scripts.pory"
# 35 "data/maps/DesertUnderpass/scripts.pory"
# 63 "data/maps/DesertUnderpass/scripts.pory"
	compare VAR_RESULT, FALSE
# 64 "data/maps/DesertUnderpass/scripts.pory"
	goto_if_eq DesertUnderpass_EventScript_GiveRootFossil_2
# 65 "data/maps/DesertUnderpass/scripts.pory"
DesertUnderpass_EventScript_GiveRootFossil_1:
# 66 "data/maps/DesertUnderpass/scripts.pory"
# 38 "data/maps/DesertUnderpass/scripts.pory"
# 67 "data/maps/DesertUnderpass/scripts.pory"
	removeobject LOCALID_UNDERPASS_FOSSIL
# 68 "data/maps/DesertUnderpass/scripts.pory"
# 39 "data/maps/DesertUnderpass/scripts.pory"
# 69 "data/maps/DesertUnderpass/scripts.pory"
	release
# 70 "data/maps/DesertUnderpass/scripts.pory"
	end
# 71 "data/maps/DesertUnderpass/scripts.pory"

# 72 "data/maps/DesertUnderpass/scripts.pory"
DesertUnderpass_EventScript_GiveRootFossil_2:
# 73 "data/maps/DesertUnderpass/scripts.pory"
# 36 "data/maps/DesertUnderpass/scripts.pory"
# 74 "data/maps/DesertUnderpass/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
# 75 "data/maps/DesertUnderpass/scripts.pory"
	goto DesertUnderpass_EventScript_GiveRootFossil_1
# 76 "data/maps/DesertUnderpass/scripts.pory"

# 77 "data/maps/DesertUnderpass/scripts.pory"

# 78 "data/maps/DesertUnderpass/scripts.pory"
DesertUnderpass_Text_FoundRootFossil::
# 79 "data/maps/DesertUnderpass/scripts.pory"
# 43 "data/maps/DesertUnderpass/scripts.pory"
# 80 "data/maps/DesertUnderpass/scripts.pory"
	.string "{PLAYER} found the ROOT FOSSIL.$"
# 81 "data/maps/DesertUnderpass/scripts.pory"

# 82 "data/maps/DesertUnderpass/scripts.pory"
DesertUnderpass_Text_FoundClawFossil::
# 83 "data/maps/DesertUnderpass/scripts.pory"
# 47 "data/maps/DesertUnderpass/scripts.pory"
# 84 "data/maps/DesertUnderpass/scripts.pory"
	.string "{PLAYER} found the CLAW FOSSIL.$"
