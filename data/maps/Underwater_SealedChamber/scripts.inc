# 1 "data/maps/Underwater_SealedChamber/scripts.pory"

# 2 "data/maps/Underwater_SealedChamber/scripts.pory"
Underwater_SealedChamber_MapScripts::
# 3 "data/maps/Underwater_SealedChamber/scripts.pory"
# 2 "data/maps/Underwater_SealedChamber/scripts.pory"
# 4 "data/maps/Underwater_SealedChamber/scripts.pory"
	map_script MAP_SCRIPT_ON_DIVE_WARP, Underwater_SealedChamber_OnDive
# 5 "data/maps/Underwater_SealedChamber/scripts.pory"
	.byte 0
# 6 "data/maps/Underwater_SealedChamber/scripts.pory"

# 7 "data/maps/Underwater_SealedChamber/scripts.pory"

# 8 "data/maps/Underwater_SealedChamber/scripts.pory"
Underwater_SealedChamber_OnDive::
# 9 "data/maps/Underwater_SealedChamber/scripts.pory"
# 6 "data/maps/Underwater_SealedChamber/scripts.pory"
# 10 "data/maps/Underwater_SealedChamber/scripts.pory"
	getplayerxy VAR_0x8004, VAR_0x8005
# 11 "data/maps/Underwater_SealedChamber/scripts.pory"
# 7 "data/maps/Underwater_SealedChamber/scripts.pory"
# 12 "data/maps/Underwater_SealedChamber/scripts.pory"
	compare VAR_0x8004, 12
# 13 "data/maps/Underwater_SealedChamber/scripts.pory"
	goto_if_ne Underwater_SealedChamber_OnDive_2
# 14 "data/maps/Underwater_SealedChamber/scripts.pory"
Underwater_SealedChamber_OnDive_1:
# 15 "data/maps/Underwater_SealedChamber/scripts.pory"
# 10 "data/maps/Underwater_SealedChamber/scripts.pory"
# 16 "data/maps/Underwater_SealedChamber/scripts.pory"
	compare VAR_0x8005, 44
# 17 "data/maps/Underwater_SealedChamber/scripts.pory"
	goto_if_ne Underwater_SealedChamber_OnDive_5
# 18 "data/maps/Underwater_SealedChamber/scripts.pory"
Underwater_SealedChamber_OnDive_4:
# 19 "data/maps/Underwater_SealedChamber/scripts.pory"
# 13 "data/maps/Underwater_SealedChamber/scripts.pory"
# 20 "data/maps/Underwater_SealedChamber/scripts.pory"
	goto Underwater_SealedChamber_EventScript_SurfaceSealedChamber
# 21 "data/maps/Underwater_SealedChamber/scripts.pory"
	return
# 22 "data/maps/Underwater_SealedChamber/scripts.pory"

# 23 "data/maps/Underwater_SealedChamber/scripts.pory"
Underwater_SealedChamber_OnDive_2:
# 24 "data/maps/Underwater_SealedChamber/scripts.pory"
# 8 "data/maps/Underwater_SealedChamber/scripts.pory"
# 25 "data/maps/Underwater_SealedChamber/scripts.pory"
	goto Underwater_SealedChamber_EventScript_SurfaceRoute134
# 26 "data/maps/Underwater_SealedChamber/scripts.pory"
	goto Underwater_SealedChamber_OnDive_1
# 27 "data/maps/Underwater_SealedChamber/scripts.pory"

# 28 "data/maps/Underwater_SealedChamber/scripts.pory"
Underwater_SealedChamber_OnDive_5:
# 29 "data/maps/Underwater_SealedChamber/scripts.pory"
# 11 "data/maps/Underwater_SealedChamber/scripts.pory"
# 30 "data/maps/Underwater_SealedChamber/scripts.pory"
	goto Underwater_SealedChamber_EventScript_SurfaceRoute134
# 31 "data/maps/Underwater_SealedChamber/scripts.pory"
	goto Underwater_SealedChamber_OnDive_4
# 32 "data/maps/Underwater_SealedChamber/scripts.pory"

# 33 "data/maps/Underwater_SealedChamber/scripts.pory"

# 34 "data/maps/Underwater_SealedChamber/scripts.pory"
Underwater_SealedChamber_EventScript_SurfaceRoute134::
# 35 "data/maps/Underwater_SealedChamber/scripts.pory"
# 17 "data/maps/Underwater_SealedChamber/scripts.pory"
# 36 "data/maps/Underwater_SealedChamber/scripts.pory"
	setdivewarp MAP_ROUTE134, 60, 31
# 37 "data/maps/Underwater_SealedChamber/scripts.pory"
	end
# 38 "data/maps/Underwater_SealedChamber/scripts.pory"

# 39 "data/maps/Underwater_SealedChamber/scripts.pory"

# 40 "data/maps/Underwater_SealedChamber/scripts.pory"
Underwater_SealedChamber_EventScript_SurfaceSealedChamber::
# 41 "data/maps/Underwater_SealedChamber/scripts.pory"
# 22 "data/maps/Underwater_SealedChamber/scripts.pory"
# 42 "data/maps/Underwater_SealedChamber/scripts.pory"
	setdivewarp MAP_SEALED_CHAMBER_OUTER_ROOM, 10, 19
# 43 "data/maps/Underwater_SealedChamber/scripts.pory"
	end
# 44 "data/maps/Underwater_SealedChamber/scripts.pory"

# 45 "data/maps/Underwater_SealedChamber/scripts.pory"

# 46 "data/maps/Underwater_SealedChamber/scripts.pory"
Underwater_SealedChamber_EventScript_Braille::
# 47 "data/maps/Underwater_SealedChamber/scripts.pory"
# 27 "data/maps/Underwater_SealedChamber/scripts.pory"
# 48 "data/maps/Underwater_SealedChamber/scripts.pory"
	lockall
# 49 "data/maps/Underwater_SealedChamber/scripts.pory"
# 28 "data/maps/Underwater_SealedChamber/scripts.pory"
# 50 "data/maps/Underwater_SealedChamber/scripts.pory"
	braillemsgbox Underwater_SealedChamber_Braille_GoUpHere
# 51 "data/maps/Underwater_SealedChamber/scripts.pory"
# 29 "data/maps/Underwater_SealedChamber/scripts.pory"
# 52 "data/maps/Underwater_SealedChamber/scripts.pory"
	releaseall
# 53 "data/maps/Underwater_SealedChamber/scripts.pory"
	end
