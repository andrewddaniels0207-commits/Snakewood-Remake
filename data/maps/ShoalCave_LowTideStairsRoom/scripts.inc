# 1 "data/maps/ShoalCave_LowTideStairsRoom/scripts.pory"

# 2 "data/maps/ShoalCave_LowTideStairsRoom/scripts.pory"
ShoalCave_LowTideStairsRoom_MapScripts::
# 3 "data/maps/ShoalCave_LowTideStairsRoom/scripts.pory"
# 2 "data/maps/ShoalCave_LowTideStairsRoom/scripts.pory"
# 4 "data/maps/ShoalCave_LowTideStairsRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, ShoalCave_LowTideStairsRoom_OnLoad
# 5 "data/maps/ShoalCave_LowTideStairsRoom/scripts.pory"
	.byte 0
# 6 "data/maps/ShoalCave_LowTideStairsRoom/scripts.pory"

# 7 "data/maps/ShoalCave_LowTideStairsRoom/scripts.pory"

# 8 "data/maps/ShoalCave_LowTideStairsRoom/scripts.pory"
ShoalCave_LowTideStairsRoom_OnLoad::
# 9 "data/maps/ShoalCave_LowTideStairsRoom/scripts.pory"
# 6 "data/maps/ShoalCave_LowTideStairsRoom/scripts.pory"
# 10 "data/maps/ShoalCave_LowTideStairsRoom/scripts.pory"
	call ShoalCave_LowTideStairsRoom_EventScript_SetShoalItemMetatiles
# 11 "data/maps/ShoalCave_LowTideStairsRoom/scripts.pory"
	end
# 12 "data/maps/ShoalCave_LowTideStairsRoom/scripts.pory"

# 13 "data/maps/ShoalCave_LowTideStairsRoom/scripts.pory"

# 14 "data/maps/ShoalCave_LowTideStairsRoom/scripts.pory"
ShoalCave_LowTideStairsRoom_EventScript_SetShoalItemMetatiles::
# 15 "data/maps/ShoalCave_LowTideStairsRoom/scripts.pory"
# 11 "data/maps/ShoalCave_LowTideStairsRoom/scripts.pory"
# 16 "data/maps/ShoalCave_LowTideStairsRoom/scripts.pory"
	goto_if_set FLAG_RECEIVED_SHOAL_SALT_3, ShoalCave_LowTideStairsRoom_EventScript_SetShoalItemMetatiles_2
# 17 "data/maps/ShoalCave_LowTideStairsRoom/scripts.pory"
ShoalCave_LowTideStairsRoom_EventScript_SetShoalItemMetatiles_1:
# 18 "data/maps/ShoalCave_LowTideStairsRoom/scripts.pory"
# 14 "data/maps/ShoalCave_LowTideStairsRoom/scripts.pory"
# 19 "data/maps/ShoalCave_LowTideStairsRoom/scripts.pory"
	setmetatile 11, 11, METATILE_Cave_ShoalCave_DirtPile_Large, TRUE
# 20 "data/maps/ShoalCave_LowTideStairsRoom/scripts.pory"
	return
# 21 "data/maps/ShoalCave_LowTideStairsRoom/scripts.pory"

# 22 "data/maps/ShoalCave_LowTideStairsRoom/scripts.pory"
ShoalCave_LowTideStairsRoom_EventScript_SetShoalItemMetatiles_2:
# 23 "data/maps/ShoalCave_LowTideStairsRoom/scripts.pory"
# 12 "data/maps/ShoalCave_LowTideStairsRoom/scripts.pory"
# 24 "data/maps/ShoalCave_LowTideStairsRoom/scripts.pory"
	goto ShoalCave_LowTideStairsRoom_EventScript_SetShoalItemMetatilesEnd
# 25 "data/maps/ShoalCave_LowTideStairsRoom/scripts.pory"
	goto ShoalCave_LowTideStairsRoom_EventScript_SetShoalItemMetatiles_1
# 26 "data/maps/ShoalCave_LowTideStairsRoom/scripts.pory"

# 27 "data/maps/ShoalCave_LowTideStairsRoom/scripts.pory"

# 28 "data/maps/ShoalCave_LowTideStairsRoom/scripts.pory"
ShoalCave_LowTideStairsRoom_EventScript_SetShoalItemMetatilesEnd::
# 29 "data/maps/ShoalCave_LowTideStairsRoom/scripts.pory"
	return
# 30 "data/maps/ShoalCave_LowTideStairsRoom/scripts.pory"

# 31 "data/maps/ShoalCave_LowTideStairsRoom/scripts.pory"

# 32 "data/maps/ShoalCave_LowTideStairsRoom/scripts.pory"
ShoalCave_LowTideStairsRoom_EventScript_ShoalSalt3::
# 33 "data/maps/ShoalCave_LowTideStairsRoom/scripts.pory"
# 23 "data/maps/ShoalCave_LowTideStairsRoom/scripts.pory"
# 34 "data/maps/ShoalCave_LowTideStairsRoom/scripts.pory"
	lockall
# 35 "data/maps/ShoalCave_LowTideStairsRoom/scripts.pory"
# 24 "data/maps/ShoalCave_LowTideStairsRoom/scripts.pory"
# 36 "data/maps/ShoalCave_LowTideStairsRoom/scripts.pory"
	goto_if_set FLAG_RECEIVED_SHOAL_SALT_3, ShoalCave_LowTideStairsRoom_EventScript_ShoalSalt3_2
# 37 "data/maps/ShoalCave_LowTideStairsRoom/scripts.pory"
ShoalCave_LowTideStairsRoom_EventScript_ShoalSalt3_1:
# 38 "data/maps/ShoalCave_LowTideStairsRoom/scripts.pory"
# 27 "data/maps/ShoalCave_LowTideStairsRoom/scripts.pory"
# 39 "data/maps/ShoalCave_LowTideStairsRoom/scripts.pory"
	giveitem ITEM_SHOAL_SALT
# 40 "data/maps/ShoalCave_LowTideStairsRoom/scripts.pory"
# 28 "data/maps/ShoalCave_LowTideStairsRoom/scripts.pory"
# 41 "data/maps/ShoalCave_LowTideStairsRoom/scripts.pory"
	compare VAR_RESULT, FALSE
# 42 "data/maps/ShoalCave_LowTideStairsRoom/scripts.pory"
	goto_if_eq ShoalCave_LowTideStairsRoom_EventScript_ShoalSalt3_5
# 43 "data/maps/ShoalCave_LowTideStairsRoom/scripts.pory"
ShoalCave_LowTideStairsRoom_EventScript_ShoalSalt3_4:
# 44 "data/maps/ShoalCave_LowTideStairsRoom/scripts.pory"
# 31 "data/maps/ShoalCave_LowTideStairsRoom/scripts.pory"
# 45 "data/maps/ShoalCave_LowTideStairsRoom/scripts.pory"
	setmetatile 11, 11, METATILE_Cave_ShoalCave_DirtPile_Small, FALSE
# 46 "data/maps/ShoalCave_LowTideStairsRoom/scripts.pory"
# 32 "data/maps/ShoalCave_LowTideStairsRoom/scripts.pory"
# 47 "data/maps/ShoalCave_LowTideStairsRoom/scripts.pory"
	special DrawWholeMapView
# 48 "data/maps/ShoalCave_LowTideStairsRoom/scripts.pory"
# 33 "data/maps/ShoalCave_LowTideStairsRoom/scripts.pory"
# 49 "data/maps/ShoalCave_LowTideStairsRoom/scripts.pory"
	setflag FLAG_RECEIVED_SHOAL_SALT_3
# 50 "data/maps/ShoalCave_LowTideStairsRoom/scripts.pory"
# 34 "data/maps/ShoalCave_LowTideStairsRoom/scripts.pory"
# 51 "data/maps/ShoalCave_LowTideStairsRoom/scripts.pory"
	releaseall
# 52 "data/maps/ShoalCave_LowTideStairsRoom/scripts.pory"
	end
# 53 "data/maps/ShoalCave_LowTideStairsRoom/scripts.pory"

# 54 "data/maps/ShoalCave_LowTideStairsRoom/scripts.pory"
ShoalCave_LowTideStairsRoom_EventScript_ShoalSalt3_2:
# 55 "data/maps/ShoalCave_LowTideStairsRoom/scripts.pory"
# 25 "data/maps/ShoalCave_LowTideStairsRoom/scripts.pory"
# 56 "data/maps/ShoalCave_LowTideStairsRoom/scripts.pory"
	goto ShoalCave_LowTideStairsRoom_EventScript_ReceivedShoalSalt
# 57 "data/maps/ShoalCave_LowTideStairsRoom/scripts.pory"
	goto ShoalCave_LowTideStairsRoom_EventScript_ShoalSalt3_1
# 58 "data/maps/ShoalCave_LowTideStairsRoom/scripts.pory"

# 59 "data/maps/ShoalCave_LowTideStairsRoom/scripts.pory"
ShoalCave_LowTideStairsRoom_EventScript_ShoalSalt3_5:
# 60 "data/maps/ShoalCave_LowTideStairsRoom/scripts.pory"
# 29 "data/maps/ShoalCave_LowTideStairsRoom/scripts.pory"
# 61 "data/maps/ShoalCave_LowTideStairsRoom/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
# 62 "data/maps/ShoalCave_LowTideStairsRoom/scripts.pory"
	goto ShoalCave_LowTideStairsRoom_EventScript_ShoalSalt3_4
# 63 "data/maps/ShoalCave_LowTideStairsRoom/scripts.pory"

# 64 "data/maps/ShoalCave_LowTideStairsRoom/scripts.pory"

# 65 "data/maps/ShoalCave_LowTideStairsRoom/scripts.pory"
ShoalCave_LowTideStairsRoom_EventScript_ReceivedShoalSalt::
# 66 "data/maps/ShoalCave_LowTideStairsRoom/scripts.pory"
# 39 "data/maps/ShoalCave_LowTideStairsRoom/scripts.pory"
# 67 "data/maps/ShoalCave_LowTideStairsRoom/scripts.pory"
	msgbox ShoalCave_Text_WasShoalSaltNowNothing, MSGBOX_DEFAULT
# 68 "data/maps/ShoalCave_LowTideStairsRoom/scripts.pory"
# 40 "data/maps/ShoalCave_LowTideStairsRoom/scripts.pory"
# 69 "data/maps/ShoalCave_LowTideStairsRoom/scripts.pory"
	releaseall
# 70 "data/maps/ShoalCave_LowTideStairsRoom/scripts.pory"
	end
