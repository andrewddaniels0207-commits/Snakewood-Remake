# 1 "data/maps/BirthIsland_Harbor/scripts.pory"

# 2 "data/maps/BirthIsland_Harbor/scripts.pory"
BirthIsland_Harbor_MapScripts::
# 3 "data/maps/BirthIsland_Harbor/scripts.pory"
	.byte 0
# 4 "data/maps/BirthIsland_Harbor/scripts.pory"

# 5 "data/maps/BirthIsland_Harbor/scripts.pory"

# 6 "data/maps/BirthIsland_Harbor/scripts.pory"
BirthIsland_Harbor_EventScript_Sailor::
# 7 "data/maps/BirthIsland_Harbor/scripts.pory"
# 4 "data/maps/BirthIsland_Harbor/scripts.pory"
# 8 "data/maps/BirthIsland_Harbor/scripts.pory"
	lock
# 9 "data/maps/BirthIsland_Harbor/scripts.pory"
# 5 "data/maps/BirthIsland_Harbor/scripts.pory"
# 10 "data/maps/BirthIsland_Harbor/scripts.pory"
	faceplayer
# 11 "data/maps/BirthIsland_Harbor/scripts.pory"
# 6 "data/maps/BirthIsland_Harbor/scripts.pory"
# 12 "data/maps/BirthIsland_Harbor/scripts.pory"
	msgbox BirthIsland_Harbor_Text_SailorReturn, MSGBOX_YESNO
# 13 "data/maps/BirthIsland_Harbor/scripts.pory"
# 7 "data/maps/BirthIsland_Harbor/scripts.pory"
# 14 "data/maps/BirthIsland_Harbor/scripts.pory"
	compare VAR_RESULT, NO
# 15 "data/maps/BirthIsland_Harbor/scripts.pory"
	goto_if_eq BirthIsland_Harbor_EventScript_Sailor_2
# 16 "data/maps/BirthIsland_Harbor/scripts.pory"
BirthIsland_Harbor_EventScript_Sailor_1:
# 17 "data/maps/BirthIsland_Harbor/scripts.pory"
# 10 "data/maps/BirthIsland_Harbor/scripts.pory"
# 18 "data/maps/BirthIsland_Harbor/scripts.pory"
	msgbox EventTicket_Text_SailHome, MSGBOX_DEFAULT
# 19 "data/maps/BirthIsland_Harbor/scripts.pory"
# 11 "data/maps/BirthIsland_Harbor/scripts.pory"
# 20 "data/maps/BirthIsland_Harbor/scripts.pory"
	closemessage
# 21 "data/maps/BirthIsland_Harbor/scripts.pory"
# 12 "data/maps/BirthIsland_Harbor/scripts.pory"
# 22 "data/maps/BirthIsland_Harbor/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceFasterDown
# 23 "data/maps/BirthIsland_Harbor/scripts.pory"
# 13 "data/maps/BirthIsland_Harbor/scripts.pory"
# 24 "data/maps/BirthIsland_Harbor/scripts.pory"
	waitmovement 0
# 25 "data/maps/BirthIsland_Harbor/scripts.pory"
# 14 "data/maps/BirthIsland_Harbor/scripts.pory"
# 26 "data/maps/BirthIsland_Harbor/scripts.pory"
	delay 30
# 27 "data/maps/BirthIsland_Harbor/scripts.pory"
# 15 "data/maps/BirthIsland_Harbor/scripts.pory"
# 28 "data/maps/BirthIsland_Harbor/scripts.pory"
	hideobjectat LOCALID_BIRTH_ISLAND_SAILOR, MAP_BIRTH_ISLAND_HARBOR
# 29 "data/maps/BirthIsland_Harbor/scripts.pory"
# 16 "data/maps/BirthIsland_Harbor/scripts.pory"
# 30 "data/maps/BirthIsland_Harbor/scripts.pory"
	setvar VAR_0x8004, LOCALID_BIRTH_ISLAND_SS_TIDAL
# 31 "data/maps/BirthIsland_Harbor/scripts.pory"
# 17 "data/maps/BirthIsland_Harbor/scripts.pory"
# 32 "data/maps/BirthIsland_Harbor/scripts.pory"
	call Common_EventScript_FerryDepartIsland
# 33 "data/maps/BirthIsland_Harbor/scripts.pory"
# 18 "data/maps/BirthIsland_Harbor/scripts.pory"
# 34 "data/maps/BirthIsland_Harbor/scripts.pory"
	warp MAP_LILYCOVE_CITY_HARBOR, 8, 11
# 35 "data/maps/BirthIsland_Harbor/scripts.pory"
# 19 "data/maps/BirthIsland_Harbor/scripts.pory"
# 36 "data/maps/BirthIsland_Harbor/scripts.pory"
	waitstate
# 37 "data/maps/BirthIsland_Harbor/scripts.pory"
# 20 "data/maps/BirthIsland_Harbor/scripts.pory"
# 38 "data/maps/BirthIsland_Harbor/scripts.pory"
	release
# 39 "data/maps/BirthIsland_Harbor/scripts.pory"
	end
# 40 "data/maps/BirthIsland_Harbor/scripts.pory"

# 41 "data/maps/BirthIsland_Harbor/scripts.pory"
BirthIsland_Harbor_EventScript_Sailor_2:
# 42 "data/maps/BirthIsland_Harbor/scripts.pory"
# 8 "data/maps/BirthIsland_Harbor/scripts.pory"
# 43 "data/maps/BirthIsland_Harbor/scripts.pory"
	goto BirthIsland_Harbor_EventScript_AsYouLike
# 44 "data/maps/BirthIsland_Harbor/scripts.pory"
	goto BirthIsland_Harbor_EventScript_Sailor_1
# 45 "data/maps/BirthIsland_Harbor/scripts.pory"

# 46 "data/maps/BirthIsland_Harbor/scripts.pory"

# 47 "data/maps/BirthIsland_Harbor/scripts.pory"
BirthIsland_Harbor_EventScript_AsYouLike::
# 48 "data/maps/BirthIsland_Harbor/scripts.pory"
# 25 "data/maps/BirthIsland_Harbor/scripts.pory"
# 49 "data/maps/BirthIsland_Harbor/scripts.pory"
	msgbox EventTicket_Text_AsYouLike, MSGBOX_DEFAULT
# 50 "data/maps/BirthIsland_Harbor/scripts.pory"
# 26 "data/maps/BirthIsland_Harbor/scripts.pory"
# 51 "data/maps/BirthIsland_Harbor/scripts.pory"
	release
# 52 "data/maps/BirthIsland_Harbor/scripts.pory"
	end
