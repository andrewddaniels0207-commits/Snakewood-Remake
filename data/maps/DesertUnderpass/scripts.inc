DesertUnderpass_MapScripts::
# 2 "data/maps/DesertUnderpass/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, DesertUnderpass_OnTransition
	.byte 0


DesertUnderpass_OnTransition::
# 6 "data/maps/DesertUnderpass/scripts.pory"
	setflag FLAG_LANDMARK_DESERT_UNDERPASS
	end


DesertUnderpass_EventScript_Fossil::
# 11 "data/maps/DesertUnderpass/scripts.pory"
	lock
# 12 "data/maps/DesertUnderpass/scripts.pory"
	faceplayer
# 13 "data/maps/DesertUnderpass/scripts.pory"
	goto_if_set FLAG_CHOSE_ROOT_FOSSIL, DesertUnderpass_EventScript_Fossil_2
DesertUnderpass_EventScript_Fossil_1:
# 16 "data/maps/DesertUnderpass/scripts.pory"
	goto_if_set FLAG_CHOSE_CLAW_FOSSIL, DesertUnderpass_EventScript_Fossil_5
DesertUnderpass_EventScript_Fossil_4:
# 19 "data/maps/DesertUnderpass/scripts.pory"
	release
	end

DesertUnderpass_EventScript_Fossil_2:
# 14 "data/maps/DesertUnderpass/scripts.pory"
	goto DesertUnderpass_EventScript_GiveClawFossil
	goto DesertUnderpass_EventScript_Fossil_1

DesertUnderpass_EventScript_Fossil_5:
# 17 "data/maps/DesertUnderpass/scripts.pory"
	goto DesertUnderpass_EventScript_GiveRootFossil
	goto DesertUnderpass_EventScript_Fossil_4


DesertUnderpass_EventScript_GiveClawFossil::
# 24 "data/maps/DesertUnderpass/scripts.pory"
	giveitem ITEM_CLAW_FOSSIL
# 25 "data/maps/DesertUnderpass/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq DesertUnderpass_EventScript_GiveClawFossil_2
DesertUnderpass_EventScript_GiveClawFossil_1:
# 28 "data/maps/DesertUnderpass/scripts.pory"
	removeobject LOCALID_UNDERPASS_FOSSIL
# 29 "data/maps/DesertUnderpass/scripts.pory"
	release
	end

DesertUnderpass_EventScript_GiveClawFossil_2:
# 26 "data/maps/DesertUnderpass/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
	goto DesertUnderpass_EventScript_GiveClawFossil_1


DesertUnderpass_EventScript_GiveRootFossil::
# 34 "data/maps/DesertUnderpass/scripts.pory"
	giveitem ITEM_ROOT_FOSSIL
# 35 "data/maps/DesertUnderpass/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq DesertUnderpass_EventScript_GiveRootFossil_2
DesertUnderpass_EventScript_GiveRootFossil_1:
# 38 "data/maps/DesertUnderpass/scripts.pory"
	removeobject LOCALID_UNDERPASS_FOSSIL
# 39 "data/maps/DesertUnderpass/scripts.pory"
	release
	end

DesertUnderpass_EventScript_GiveRootFossil_2:
# 36 "data/maps/DesertUnderpass/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
	goto DesertUnderpass_EventScript_GiveRootFossil_1


DesertUnderpass_Text_FoundRootFossil::
# 43 "data/maps/DesertUnderpass/scripts.pory"
	.string "{PLAYER} found the ROOT FOSSIL.$"

DesertUnderpass_Text_FoundClawFossil::
# 47 "data/maps/DesertUnderpass/scripts.pory"
	.string "{PLAYER} found the CLAW FOSSIL.$"
