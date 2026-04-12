BirthIsland_Harbor_MapScripts::
	.byte 0


BirthIsland_Harbor_EventScript_Sailor::
# 4 "data/maps/BirthIsland_Harbor/scripts.pory"
	lock
# 5 "data/maps/BirthIsland_Harbor/scripts.pory"
	faceplayer
# 6 "data/maps/BirthIsland_Harbor/scripts.pory"
	msgbox BirthIsland_Harbor_Text_SailorReturn, MSGBOX_YESNO
# 7 "data/maps/BirthIsland_Harbor/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq BirthIsland_Harbor_EventScript_Sailor_2
BirthIsland_Harbor_EventScript_Sailor_1:
# 10 "data/maps/BirthIsland_Harbor/scripts.pory"
	msgbox EventTicket_Text_SailHome, MSGBOX_DEFAULT
# 11 "data/maps/BirthIsland_Harbor/scripts.pory"
	closemessage
# 12 "data/maps/BirthIsland_Harbor/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceFasterDown
# 13 "data/maps/BirthIsland_Harbor/scripts.pory"
	waitmovement 0
# 14 "data/maps/BirthIsland_Harbor/scripts.pory"
	delay 30
# 15 "data/maps/BirthIsland_Harbor/scripts.pory"
	hideobjectat LOCALID_BIRTH_ISLAND_SAILOR, MAP_BIRTH_ISLAND_HARBOR
# 16 "data/maps/BirthIsland_Harbor/scripts.pory"
	setvar VAR_0x8004, LOCALID_BIRTH_ISLAND_SS_TIDAL
# 17 "data/maps/BirthIsland_Harbor/scripts.pory"
	call Common_EventScript_FerryDepartIsland
# 18 "data/maps/BirthIsland_Harbor/scripts.pory"
	warp MAP_LILYCOVE_CITY_HARBOR, 8, 11
# 19 "data/maps/BirthIsland_Harbor/scripts.pory"
	waitstate
# 20 "data/maps/BirthIsland_Harbor/scripts.pory"
	release
	end

BirthIsland_Harbor_EventScript_Sailor_2:
# 8 "data/maps/BirthIsland_Harbor/scripts.pory"
	goto BirthIsland_Harbor_EventScript_AsYouLike
	goto BirthIsland_Harbor_EventScript_Sailor_1


BirthIsland_Harbor_EventScript_AsYouLike::
# 25 "data/maps/BirthIsland_Harbor/scripts.pory"
	msgbox EventTicket_Text_AsYouLike, MSGBOX_DEFAULT
# 26 "data/maps/BirthIsland_Harbor/scripts.pory"
	release
	end

