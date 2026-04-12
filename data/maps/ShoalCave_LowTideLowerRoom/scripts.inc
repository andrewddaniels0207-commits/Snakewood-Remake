# 1 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"

# 2 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
ShoalCave_LowTideLowerRoom_MapScripts::
# 3 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
# 2 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
# 4 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, ShoalCave_LowTideLowerRoom_OnLoad
# 5 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	.byte 0
# 6 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"

# 7 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"

# 8 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
ShoalCave_LowTideLowerRoom_OnLoad::
# 9 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
# 6 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
# 10 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	call ShoalCave_LowTideLowerRoom_EventScript_SetShoalItemMetatiles
# 11 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	end
# 12 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"

# 13 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"

# 14 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
ShoalCave_LowTideLowerRoom_EventScript_SetShoalItemMetatiles::
# 15 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
# 11 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
# 16 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	goto_if_set FLAG_RECEIVED_SHOAL_SALT_4, ShoalCave_LowTideLowerRoom_EventScript_SetShoalItemMetatiles_2
# 17 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
ShoalCave_LowTideLowerRoom_EventScript_SetShoalItemMetatiles_1:
# 18 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
# 14 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
# 19 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	setmetatile 18, 2, METATILE_Cave_ShoalCave_DirtPile_Large, TRUE
# 20 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	return
# 21 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"

# 22 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
ShoalCave_LowTideLowerRoom_EventScript_SetShoalItemMetatiles_2:
# 23 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
# 12 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
# 24 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	goto ShoalCave_LowTideLowerRoom_EventScript_SetShoalItemMetatilesEnd
# 25 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	goto ShoalCave_LowTideLowerRoom_EventScript_SetShoalItemMetatiles_1
# 26 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"

# 27 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"

# 28 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
ShoalCave_LowTideLowerRoom_EventScript_SetShoalItemMetatilesEnd::
# 29 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	return
# 30 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"

# 31 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"

# 32 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
ShoalCave_LowTideLowerRoom_EventScript_ShoalSalt4::
# 33 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
# 23 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
# 34 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	lockall
# 35 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
# 24 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
# 36 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	goto_if_set FLAG_RECEIVED_SHOAL_SALT_4, ShoalCave_LowTideLowerRoom_EventScript_ShoalSalt4_2
# 37 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
ShoalCave_LowTideLowerRoom_EventScript_ShoalSalt4_1:
# 38 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
# 27 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
# 39 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	giveitem ITEM_SHOAL_SALT
# 40 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
# 28 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
# 41 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	compare VAR_RESULT, FALSE
# 42 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	goto_if_eq ShoalCave_LowTideLowerRoom_EventScript_ShoalSalt4_5
# 43 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
ShoalCave_LowTideLowerRoom_EventScript_ShoalSalt4_4:
# 44 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
# 31 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
# 45 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	setmetatile 18, 2, METATILE_Cave_ShoalCave_DirtPile_Small, FALSE
# 46 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
# 32 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
# 47 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	special DrawWholeMapView
# 48 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
# 33 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
# 49 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	setflag FLAG_RECEIVED_SHOAL_SALT_4
# 50 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
# 34 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
# 51 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	releaseall
# 52 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	end
# 53 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"

# 54 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
ShoalCave_LowTideLowerRoom_EventScript_ShoalSalt4_2:
# 55 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
# 25 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
# 56 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	goto ShoalCave_LowTideLowerRoom_EventScript_ReceivedShoalSalt
# 57 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	goto ShoalCave_LowTideLowerRoom_EventScript_ShoalSalt4_1
# 58 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"

# 59 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
ShoalCave_LowTideLowerRoom_EventScript_ShoalSalt4_5:
# 60 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
# 29 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
# 61 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
# 62 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	goto ShoalCave_LowTideLowerRoom_EventScript_ShoalSalt4_4
# 63 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"

# 64 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"

# 65 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
ShoalCave_LowTideLowerRoom_EventScript_ReceivedShoalSalt::
# 66 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
# 39 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
# 67 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	msgbox ShoalCave_Text_WasShoalSaltNowNothing, MSGBOX_DEFAULT
# 68 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
# 40 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
# 69 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	releaseall
# 70 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	end
# 71 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"

# 72 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"

# 73 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
ShoalCave_LowTideLowerRoom_EventScript_BlackBelt::
# 74 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
# 45 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
# 75 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	lock
# 76 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
# 46 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
# 77 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	faceplayer
# 78 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
# 47 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
# 79 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	goto_if_set FLAG_RECEIVED_FOCUS_BAND, ShoalCave_LowTideLowerRoom_EventScript_BlackBelt_2
# 80 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
ShoalCave_LowTideLowerRoom_EventScript_BlackBelt_1:
# 81 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
# 50 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
# 82 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	msgbox ShoalCave_LowTideLowerRoom_Text_CanOvercomeColdWithFocus, MSGBOX_DEFAULT
# 83 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
# 51 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
# 84 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	giveitem ITEM_FOCUS_BAND
# 85 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
# 52 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
# 86 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	compare VAR_RESULT, FALSE
# 87 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	goto_if_eq ShoalCave_LowTideLowerRoom_EventScript_BlackBelt_5
# 88 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
ShoalCave_LowTideLowerRoom_EventScript_BlackBelt_4:
# 89 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
# 55 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
# 90 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	setflag FLAG_RECEIVED_FOCUS_BAND
# 91 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
# 56 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
# 92 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	release
# 93 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	end
# 94 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"

# 95 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
ShoalCave_LowTideLowerRoom_EventScript_BlackBelt_2:
# 96 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
# 48 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
# 97 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	goto ShoalCave_LowTideLowerRoom_EventScript_ReceivedFocusBand
# 98 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	goto ShoalCave_LowTideLowerRoom_EventScript_BlackBelt_1
# 99 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"

# 100 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
ShoalCave_LowTideLowerRoom_EventScript_BlackBelt_5:
# 101 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
# 53 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
# 102 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
# 103 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	goto ShoalCave_LowTideLowerRoom_EventScript_BlackBelt_4
# 104 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"

# 105 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"

# 106 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
ShoalCave_LowTideLowerRoom_EventScript_ReceivedFocusBand::
# 107 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
# 61 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
# 108 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	msgbox ShoalCave_LowTideLowerRoom_Text_EverythingStartsWithFocus, MSGBOX_DEFAULT
# 109 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
# 62 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
# 110 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	release
# 111 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	end
# 112 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"

# 113 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"

# 114 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
ShoalCave_LowTideLowerRoom_Text_CanOvercomeColdWithFocus::
# 115 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
# 66 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
# 116 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	.string "The penetrating cold around these\n"
# 117 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	.string "parts is an impediment to training.\p"
# 118 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	.string "But with focus, one can overcome!\p"
# 119 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	.string "With this FOCUS BAND, buckle down and\n"
# 120 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	.string "withstand the cold!$"
# 121 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"

# 122 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
ShoalCave_LowTideLowerRoom_Text_EverythingStartsWithFocus::
# 123 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
# 74 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
# 124 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	.string "Everything starts with focus!$"
