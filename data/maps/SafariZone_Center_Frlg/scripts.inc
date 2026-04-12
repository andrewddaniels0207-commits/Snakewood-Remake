# 1 "data/maps/SafariZone_Center_Frlg/scripts.pory"

# 2 "data/maps/SafariZone_Center_Frlg/scripts.pory"
SafariZone_Center_Frlg_MapScripts::
# 3 "data/maps/SafariZone_Center_Frlg/scripts.pory"
# 2 "data/maps/SafariZone_Center_Frlg/scripts.pory"
# 4 "data/maps/SafariZone_Center_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SafariZone_Center_OnTransition
# 5 "data/maps/SafariZone_Center_Frlg/scripts.pory"
	.byte 0
# 6 "data/maps/SafariZone_Center_Frlg/scripts.pory"

# 7 "data/maps/SafariZone_Center_Frlg/scripts.pory"

# 8 "data/maps/SafariZone_Center_Frlg/scripts.pory"
SafariZone_Center_OnTransition::
# 9 "data/maps/SafariZone_Center_Frlg/scripts.pory"
# 6 "data/maps/SafariZone_Center_Frlg/scripts.pory"
# 10 "data/maps/SafariZone_Center_Frlg/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_SAFARI_ZONE_CENTER
# 11 "data/maps/SafariZone_Center_Frlg/scripts.pory"
	end
# 12 "data/maps/SafariZone_Center_Frlg/scripts.pory"

# 13 "data/maps/SafariZone_Center_Frlg/scripts.pory"

# 14 "data/maps/SafariZone_Center_Frlg/scripts.pory"
SafariZone_Center_EventScript_RestHouseSign::
# 15 "data/maps/SafariZone_Center_Frlg/scripts.pory"
# 11 "data/maps/SafariZone_Center_Frlg/scripts.pory"
# 16 "data/maps/SafariZone_Center_Frlg/scripts.pory"
	msgbox SafariZone_Center_Text_RestHouse, MSGBOX_SIGN
# 17 "data/maps/SafariZone_Center_Frlg/scripts.pory"
	end
# 18 "data/maps/SafariZone_Center_Frlg/scripts.pory"

# 19 "data/maps/SafariZone_Center_Frlg/scripts.pory"

# 20 "data/maps/SafariZone_Center_Frlg/scripts.pory"
SafariZone_Center_EventScript_TrainerTips::
# 21 "data/maps/SafariZone_Center_Frlg/scripts.pory"
# 16 "data/maps/SafariZone_Center_Frlg/scripts.pory"
# 22 "data/maps/SafariZone_Center_Frlg/scripts.pory"
	msgbox SafariZone_Center_Text_PressStartToCheckTime, MSGBOX_SIGN
# 23 "data/maps/SafariZone_Center_Frlg/scripts.pory"
	end
# 24 "data/maps/SafariZone_Center_Frlg/scripts.pory"

# 25 "data/maps/SafariZone_Center_Frlg/scripts.pory"

# 26 "data/maps/SafariZone_Center_Frlg/scripts.pory"
SafariZone_Center_EventScript_AreaSign::
# 27 "data/maps/SafariZone_Center_Frlg/scripts.pory"
# 21 "data/maps/SafariZone_Center_Frlg/scripts.pory"
# 28 "data/maps/SafariZone_Center_Frlg/scripts.pory"
	msgbox SafariZone_Center_Text_CenterArea, MSGBOX_SIGN
# 29 "data/maps/SafariZone_Center_Frlg/scripts.pory"
	end
# 30 "data/maps/SafariZone_Center_Frlg/scripts.pory"

# 31 "data/maps/SafariZone_Center_Frlg/scripts.pory"

# 32 "data/maps/SafariZone_Center_Frlg/scripts.pory"
SafariZone_Center_Text_RestHouse::
# 33 "data/maps/SafariZone_Center_Frlg/scripts.pory"
# 25 "data/maps/SafariZone_Center_Frlg/scripts.pory"
# 34 "data/maps/SafariZone_Center_Frlg/scripts.pory"
	.string "REST HOUSE$"
# 35 "data/maps/SafariZone_Center_Frlg/scripts.pory"

# 36 "data/maps/SafariZone_Center_Frlg/scripts.pory"
SafariZone_Center_Text_PressStartToCheckTime::
# 37 "data/maps/SafariZone_Center_Frlg/scripts.pory"
# 29 "data/maps/SafariZone_Center_Frlg/scripts.pory"
# 38 "data/maps/SafariZone_Center_Frlg/scripts.pory"
	.string "TRAINER TIPS\p"
# 39 "data/maps/SafariZone_Center_Frlg/scripts.pory"
	.string "Press START to check\n"
# 40 "data/maps/SafariZone_Center_Frlg/scripts.pory"
	.string "remaining time.$"
# 41 "data/maps/SafariZone_Center_Frlg/scripts.pory"

# 42 "data/maps/SafariZone_Center_Frlg/scripts.pory"
SafariZone_Center_Text_CenterArea::
# 43 "data/maps/SafariZone_Center_Frlg/scripts.pory"
# 35 "data/maps/SafariZone_Center_Frlg/scripts.pory"
# 44 "data/maps/SafariZone_Center_Frlg/scripts.pory"
	.string "CENTER AREA$"
