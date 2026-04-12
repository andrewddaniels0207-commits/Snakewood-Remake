Underwater_SealedChamber_MapScripts::
# 2 "data/maps/Underwater_SealedChamber/scripts.pory"
	map_script MAP_SCRIPT_ON_DIVE_WARP, Underwater_SealedChamber_OnDive
	.byte 0


Underwater_SealedChamber_OnDive::
# 6 "data/maps/Underwater_SealedChamber/scripts.pory"
	getplayerxy VAR_0x8004, VAR_0x8005
# 7 "data/maps/Underwater_SealedChamber/scripts.pory"
	compare VAR_0x8004, 12
	goto_if_ne Underwater_SealedChamber_OnDive_2
Underwater_SealedChamber_OnDive_1:
# 10 "data/maps/Underwater_SealedChamber/scripts.pory"
	compare VAR_0x8005, 44
	goto_if_ne Underwater_SealedChamber_OnDive_5
Underwater_SealedChamber_OnDive_4:
# 13 "data/maps/Underwater_SealedChamber/scripts.pory"
	goto Underwater_SealedChamber_EventScript_SurfaceSealedChamber
	return

Underwater_SealedChamber_OnDive_2:
# 8 "data/maps/Underwater_SealedChamber/scripts.pory"
	goto Underwater_SealedChamber_EventScript_SurfaceRoute134
	goto Underwater_SealedChamber_OnDive_1

Underwater_SealedChamber_OnDive_5:
# 11 "data/maps/Underwater_SealedChamber/scripts.pory"
	goto Underwater_SealedChamber_EventScript_SurfaceRoute134
	goto Underwater_SealedChamber_OnDive_4


Underwater_SealedChamber_EventScript_SurfaceRoute134::
# 17 "data/maps/Underwater_SealedChamber/scripts.pory"
	setdivewarp MAP_ROUTE134, 60, 31
	end


Underwater_SealedChamber_EventScript_SurfaceSealedChamber::
# 22 "data/maps/Underwater_SealedChamber/scripts.pory"
	setdivewarp MAP_SEALED_CHAMBER_OUTER_ROOM, 10, 19
	end


Underwater_SealedChamber_EventScript_Braille::
# 27 "data/maps/Underwater_SealedChamber/scripts.pory"
	lockall
# 28 "data/maps/Underwater_SealedChamber/scripts.pory"
	braillemsgbox Underwater_SealedChamber_Braille_GoUpHere
# 29 "data/maps/Underwater_SealedChamber/scripts.pory"
	releaseall
	end

