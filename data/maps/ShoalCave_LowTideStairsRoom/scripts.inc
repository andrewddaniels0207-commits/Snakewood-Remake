ShoalCave_LowTideStairsRoom_MapScripts::
# 2 "data/maps/ShoalCave_LowTideStairsRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, ShoalCave_LowTideStairsRoom_OnLoad
	.byte 0


ShoalCave_LowTideStairsRoom_OnLoad::
# 6 "data/maps/ShoalCave_LowTideStairsRoom/scripts.pory"
	call ShoalCave_LowTideStairsRoom_EventScript_SetShoalItemMetatiles
	end


ShoalCave_LowTideStairsRoom_EventScript_SetShoalItemMetatiles::
# 11 "data/maps/ShoalCave_LowTideStairsRoom/scripts.pory"
	goto_if_set FLAG_RECEIVED_SHOAL_SALT_3, ShoalCave_LowTideStairsRoom_EventScript_SetShoalItemMetatiles_2
ShoalCave_LowTideStairsRoom_EventScript_SetShoalItemMetatiles_1:
# 14 "data/maps/ShoalCave_LowTideStairsRoom/scripts.pory"
	setmetatile 11, 11, METATILE_Cave_ShoalCave_DirtPile_Large, TRUE
	return

ShoalCave_LowTideStairsRoom_EventScript_SetShoalItemMetatiles_2:
# 12 "data/maps/ShoalCave_LowTideStairsRoom/scripts.pory"
	goto ShoalCave_LowTideStairsRoom_EventScript_SetShoalItemMetatilesEnd
	goto ShoalCave_LowTideStairsRoom_EventScript_SetShoalItemMetatiles_1


ShoalCave_LowTideStairsRoom_EventScript_SetShoalItemMetatilesEnd::
	return


ShoalCave_LowTideStairsRoom_EventScript_ShoalSalt3::
# 23 "data/maps/ShoalCave_LowTideStairsRoom/scripts.pory"
	lockall
# 24 "data/maps/ShoalCave_LowTideStairsRoom/scripts.pory"
	goto_if_set FLAG_RECEIVED_SHOAL_SALT_3, ShoalCave_LowTideStairsRoom_EventScript_ShoalSalt3_2
ShoalCave_LowTideStairsRoom_EventScript_ShoalSalt3_1:
# 27 "data/maps/ShoalCave_LowTideStairsRoom/scripts.pory"
	giveitem ITEM_SHOAL_SALT
# 28 "data/maps/ShoalCave_LowTideStairsRoom/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq ShoalCave_LowTideStairsRoom_EventScript_ShoalSalt3_5
ShoalCave_LowTideStairsRoom_EventScript_ShoalSalt3_4:
# 31 "data/maps/ShoalCave_LowTideStairsRoom/scripts.pory"
	setmetatile 11, 11, METATILE_Cave_ShoalCave_DirtPile_Small, FALSE
# 32 "data/maps/ShoalCave_LowTideStairsRoom/scripts.pory"
	special DrawWholeMapView
# 33 "data/maps/ShoalCave_LowTideStairsRoom/scripts.pory"
	setflag FLAG_RECEIVED_SHOAL_SALT_3
# 34 "data/maps/ShoalCave_LowTideStairsRoom/scripts.pory"
	releaseall
	end

ShoalCave_LowTideStairsRoom_EventScript_ShoalSalt3_2:
# 25 "data/maps/ShoalCave_LowTideStairsRoom/scripts.pory"
	goto ShoalCave_LowTideStairsRoom_EventScript_ReceivedShoalSalt
	goto ShoalCave_LowTideStairsRoom_EventScript_ShoalSalt3_1

ShoalCave_LowTideStairsRoom_EventScript_ShoalSalt3_5:
# 29 "data/maps/ShoalCave_LowTideStairsRoom/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
	goto ShoalCave_LowTideStairsRoom_EventScript_ShoalSalt3_4


ShoalCave_LowTideStairsRoom_EventScript_ReceivedShoalSalt::
# 39 "data/maps/ShoalCave_LowTideStairsRoom/scripts.pory"
	msgbox ShoalCave_Text_WasShoalSaltNowNothing, MSGBOX_DEFAULT
# 40 "data/maps/ShoalCave_LowTideStairsRoom/scripts.pory"
	releaseall
	end

