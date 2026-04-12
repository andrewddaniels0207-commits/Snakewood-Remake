SafariZone_Center_Frlg_MapScripts::
# 2 "data/maps/SafariZone_Center_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SafariZone_Center_OnTransition
	.byte 0


SafariZone_Center_OnTransition::
# 6 "data/maps/SafariZone_Center_Frlg/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_SAFARI_ZONE_CENTER
	end


SafariZone_Center_EventScript_RestHouseSign::
# 11 "data/maps/SafariZone_Center_Frlg/scripts.pory"
	msgbox SafariZone_Center_Text_RestHouse, MSGBOX_SIGN
	end


SafariZone_Center_EventScript_TrainerTips::
# 16 "data/maps/SafariZone_Center_Frlg/scripts.pory"
	msgbox SafariZone_Center_Text_PressStartToCheckTime, MSGBOX_SIGN
	end


SafariZone_Center_EventScript_AreaSign::
# 21 "data/maps/SafariZone_Center_Frlg/scripts.pory"
	msgbox SafariZone_Center_Text_CenterArea, MSGBOX_SIGN
	end


SafariZone_Center_Text_RestHouse::
# 25 "data/maps/SafariZone_Center_Frlg/scripts.pory"
	.string "REST HOUSE$"

SafariZone_Center_Text_PressStartToCheckTime::
# 29 "data/maps/SafariZone_Center_Frlg/scripts.pory"
	.string "TRAINER TIPS\p"
	.string "Press START to check\n"
	.string "remaining time.$"

SafariZone_Center_Text_CenterArea::
# 35 "data/maps/SafariZone_Center_Frlg/scripts.pory"
	.string "CENTER AREA$"
