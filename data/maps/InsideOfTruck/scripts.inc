# 1 "data/maps/InsideOfTruck/scripts.pory"

# 2 "data/maps/InsideOfTruck/scripts.pory"
InsideOfTruck_MapScripts::
# 3 "data/maps/InsideOfTruck/scripts.pory"
# 2 "data/maps/InsideOfTruck/scripts.pory"
# 4 "data/maps/InsideOfTruck/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, InsideOfTruck_OnLoad
# 5 "data/maps/InsideOfTruck/scripts.pory"
# 3 "data/maps/InsideOfTruck/scripts.pory"
# 6 "data/maps/InsideOfTruck/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, InsideOfTruck_OnResume
# 7 "data/maps/InsideOfTruck/scripts.pory"
	.byte 0
# 8 "data/maps/InsideOfTruck/scripts.pory"

# 9 "data/maps/InsideOfTruck/scripts.pory"

# 10 "data/maps/InsideOfTruck/scripts.pory"
InsideOfTruck_OnLoad::
# 11 "data/maps/InsideOfTruck/scripts.pory"
# 7 "data/maps/InsideOfTruck/scripts.pory"
# 12 "data/maps/InsideOfTruck/scripts.pory"
	setmetatile 4, 1, METATILE_InsideOfTruck_ExitLight_Top, FALSE
# 13 "data/maps/InsideOfTruck/scripts.pory"
# 8 "data/maps/InsideOfTruck/scripts.pory"
# 14 "data/maps/InsideOfTruck/scripts.pory"
	setmetatile 4, 2, METATILE_InsideOfTruck_ExitLight_Mid, FALSE
# 15 "data/maps/InsideOfTruck/scripts.pory"
# 9 "data/maps/InsideOfTruck/scripts.pory"
# 16 "data/maps/InsideOfTruck/scripts.pory"
	setmetatile 4, 3, METATILE_InsideOfTruck_ExitLight_Bottom, FALSE
# 17 "data/maps/InsideOfTruck/scripts.pory"
	end
# 18 "data/maps/InsideOfTruck/scripts.pory"

# 19 "data/maps/InsideOfTruck/scripts.pory"

# 20 "data/maps/InsideOfTruck/scripts.pory"
InsideOfTruck_OnResume::
# 21 "data/maps/InsideOfTruck/scripts.pory"
# 14 "data/maps/InsideOfTruck/scripts.pory"
# 22 "data/maps/InsideOfTruck/scripts.pory"
	setstepcallback STEP_CB_TRUCK
# 23 "data/maps/InsideOfTruck/scripts.pory"
	end
# 24 "data/maps/InsideOfTruck/scripts.pory"

# 25 "data/maps/InsideOfTruck/scripts.pory"

# 26 "data/maps/InsideOfTruck/scripts.pory"
InsideOfTruck_EventScript_SetIntroFlags::
# 27 "data/maps/InsideOfTruck/scripts.pory"
# 19 "data/maps/InsideOfTruck/scripts.pory"
# 28 "data/maps/InsideOfTruck/scripts.pory"
	lockall
# 29 "data/maps/InsideOfTruck/scripts.pory"
# 20 "data/maps/InsideOfTruck/scripts.pory"
# 30 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 31 "data/maps/InsideOfTruck/scripts.pory"
# 21 "data/maps/InsideOfTruck/scripts.pory"
# 32 "data/maps/InsideOfTruck/scripts.pory"
	checkplayergender
# 33 "data/maps/InsideOfTruck/scripts.pory"
# 22 "data/maps/InsideOfTruck/scripts.pory"
# 34 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RESULT, MALE
# 35 "data/maps/InsideOfTruck/scripts.pory"
	goto_if_eq InsideOfTruck_EventScript_SetIntroFlags_2
# 36 "data/maps/InsideOfTruck/scripts.pory"
InsideOfTruck_EventScript_SetIntroFlags_1:
# 37 "data/maps/InsideOfTruck/scripts.pory"
# 25 "data/maps/InsideOfTruck/scripts.pory"
# 38 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RESULT, FEMALE
# 39 "data/maps/InsideOfTruck/scripts.pory"
	goto_if_eq InsideOfTruck_EventScript_SetIntroFlags_5
# 40 "data/maps/InsideOfTruck/scripts.pory"
InsideOfTruck_EventScript_SetIntroFlags_4:
# 41 "data/maps/InsideOfTruck/scripts.pory"
	end
# 42 "data/maps/InsideOfTruck/scripts.pory"

# 43 "data/maps/InsideOfTruck/scripts.pory"
InsideOfTruck_EventScript_SetIntroFlags_2:
# 44 "data/maps/InsideOfTruck/scripts.pory"
# 23 "data/maps/InsideOfTruck/scripts.pory"
# 45 "data/maps/InsideOfTruck/scripts.pory"
	goto InsideOfTruck_EventScript_SetIntroFlagsMale
# 46 "data/maps/InsideOfTruck/scripts.pory"
	goto InsideOfTruck_EventScript_SetIntroFlags_1
# 47 "data/maps/InsideOfTruck/scripts.pory"

# 48 "data/maps/InsideOfTruck/scripts.pory"
InsideOfTruck_EventScript_SetIntroFlags_5:
# 49 "data/maps/InsideOfTruck/scripts.pory"
# 26 "data/maps/InsideOfTruck/scripts.pory"
# 50 "data/maps/InsideOfTruck/scripts.pory"
	goto InsideOfTruck_EventScript_SetIntroFlagsFemale
# 51 "data/maps/InsideOfTruck/scripts.pory"
	goto InsideOfTruck_EventScript_SetIntroFlags_4
# 52 "data/maps/InsideOfTruck/scripts.pory"

# 53 "data/maps/InsideOfTruck/scripts.pory"

# 54 "data/maps/InsideOfTruck/scripts.pory"
InsideOfTruck_EventScript_SetIntroFlagsMale::
# 55 "data/maps/InsideOfTruck/scripts.pory"
# 32 "data/maps/InsideOfTruck/scripts.pory"
# 56 "data/maps/InsideOfTruck/scripts.pory"
	setrespawn HEAL_LOCATION_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F
# 57 "data/maps/InsideOfTruck/scripts.pory"
# 33 "data/maps/InsideOfTruck/scripts.pory"
# 58 "data/maps/InsideOfTruck/scripts.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 1
# 59 "data/maps/InsideOfTruck/scripts.pory"
# 34 "data/maps/InsideOfTruck/scripts.pory"
# 60 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_MOM
# 61 "data/maps/InsideOfTruck/scripts.pory"
# 35 "data/maps/InsideOfTruck/scripts.pory"
# 62 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_TRUCK
# 63 "data/maps/InsideOfTruck/scripts.pory"
# 36 "data/maps/InsideOfTruck/scripts.pory"
# 64 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_MOM
# 65 "data/maps/InsideOfTruck/scripts.pory"
# 37 "data/maps/InsideOfTruck/scripts.pory"
# 66 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_SIBLING
# 67 "data/maps/InsideOfTruck/scripts.pory"
# 38 "data/maps/InsideOfTruck/scripts.pory"
# 68 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F_POKE_BALL
# 69 "data/maps/InsideOfTruck/scripts.pory"
# 39 "data/maps/InsideOfTruck/scripts.pory"
# 70 "data/maps/InsideOfTruck/scripts.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 1
# 71 "data/maps/InsideOfTruck/scripts.pory"
# 40 "data/maps/InsideOfTruck/scripts.pory"
# 72 "data/maps/InsideOfTruck/scripts.pory"
	setdynamicwarp MAP_LITTLEROOT_TOWN, 3, 10
# 73 "data/maps/InsideOfTruck/scripts.pory"
# 41 "data/maps/InsideOfTruck/scripts.pory"
# 74 "data/maps/InsideOfTruck/scripts.pory"
	releaseall
# 75 "data/maps/InsideOfTruck/scripts.pory"
	end
# 76 "data/maps/InsideOfTruck/scripts.pory"

# 77 "data/maps/InsideOfTruck/scripts.pory"

# 78 "data/maps/InsideOfTruck/scripts.pory"
InsideOfTruck_EventScript_SetIntroFlagsFemale::
# 79 "data/maps/InsideOfTruck/scripts.pory"
# 46 "data/maps/InsideOfTruck/scripts.pory"
# 80 "data/maps/InsideOfTruck/scripts.pory"
	setrespawn HEAL_LOCATION_LITTLEROOT_TOWN_MAYS_HOUSE_2F
# 81 "data/maps/InsideOfTruck/scripts.pory"
# 47 "data/maps/InsideOfTruck/scripts.pory"
# 82 "data/maps/InsideOfTruck/scripts.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 2
# 83 "data/maps/InsideOfTruck/scripts.pory"
# 48 "data/maps/InsideOfTruck/scripts.pory"
# 84 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_MOM
# 85 "data/maps/InsideOfTruck/scripts.pory"
# 49 "data/maps/InsideOfTruck/scripts.pory"
# 86 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_TRUCK
# 87 "data/maps/InsideOfTruck/scripts.pory"
# 50 "data/maps/InsideOfTruck/scripts.pory"
# 88 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_MOM
# 89 "data/maps/InsideOfTruck/scripts.pory"
# 51 "data/maps/InsideOfTruck/scripts.pory"
# 90 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_SIBLING
# 91 "data/maps/InsideOfTruck/scripts.pory"
# 52 "data/maps/InsideOfTruck/scripts.pory"
# 92 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_2F_POKE_BALL
# 93 "data/maps/InsideOfTruck/scripts.pory"
# 53 "data/maps/InsideOfTruck/scripts.pory"
# 94 "data/maps/InsideOfTruck/scripts.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_MAY, 1
# 95 "data/maps/InsideOfTruck/scripts.pory"
# 54 "data/maps/InsideOfTruck/scripts.pory"
# 96 "data/maps/InsideOfTruck/scripts.pory"
	setdynamicwarp MAP_LITTLEROOT_TOWN, 12, 10
# 97 "data/maps/InsideOfTruck/scripts.pory"
# 55 "data/maps/InsideOfTruck/scripts.pory"
# 98 "data/maps/InsideOfTruck/scripts.pory"
	releaseall
# 99 "data/maps/InsideOfTruck/scripts.pory"
	end
# 100 "data/maps/InsideOfTruck/scripts.pory"

# 101 "data/maps/InsideOfTruck/scripts.pory"

# 102 "data/maps/InsideOfTruck/scripts.pory"
InsideOfTruck_EventScript_MovingBox::
# 103 "data/maps/InsideOfTruck/scripts.pory"
# 60 "data/maps/InsideOfTruck/scripts.pory"
# 104 "data/maps/InsideOfTruck/scripts.pory"
	msgbox InsideOfTruck_Text_BoxPrintedWithMonLogo, MSGBOX_SIGN
# 105 "data/maps/InsideOfTruck/scripts.pory"
	end
# 106 "data/maps/InsideOfTruck/scripts.pory"

# 107 "data/maps/InsideOfTruck/scripts.pory"

# 108 "data/maps/InsideOfTruck/scripts.pory"
InsideOfTruck_Text_BoxPrintedWithMonLogo::
# 109 "data/maps/InsideOfTruck/scripts.pory"
# 64 "data/maps/InsideOfTruck/scripts.pory"
# 110 "data/maps/InsideOfTruck/scripts.pory"
	.string "The box is printed with a POKéMON logo.\p"
# 111 "data/maps/InsideOfTruck/scripts.pory"
	.string "It's a POKéMON brand moving and\n"
# 112 "data/maps/InsideOfTruck/scripts.pory"
	.string "delivery service.$"
