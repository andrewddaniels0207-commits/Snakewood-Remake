SafariZone_West_Frlg_MapScripts::
	.byte 0


SafariZone_West_EventScript_RestHouseSign::
# 4 "data/maps/SafariZone_West_Frlg/scripts.pory"
	msgbox SafariZone_West_Text_RestHouse, MSGBOX_SIGN
	end


SafariZone_West_EventScript_LostTeethNotice::
# 9 "data/maps/SafariZone_West_Frlg/scripts.pory"
	msgbox SafariZone_West_Text_PleaseFindWardensLostTeeth, MSGBOX_SIGN
	end


SafariZone_West_EventScript_TrainerTips::
# 14 "data/maps/SafariZone_West_Frlg/scripts.pory"
	msgbox SafariZone_West_Text_SearchForSecretHouse, MSGBOX_SIGN
	end


SafariZone_West_EventScript_AreaSign::
# 19 "data/maps/SafariZone_West_Frlg/scripts.pory"
	msgbox SafariZone_West_Text_AreaSign, MSGBOX_SIGN
	end


SafariZone_West_Text_RestHouse::
# 23 "data/maps/SafariZone_West_Frlg/scripts.pory"
	.string "REST HOUSE$"

SafariZone_West_Text_PleaseFindWardensLostTeeth::
# 27 "data/maps/SafariZone_West_Frlg/scripts.pory"
	.string "REQUEST NOTICE\p"
	.string "Please find the SAFARI WARDEN's\n"
	.string "lost GOLD TEETH.\l"
	.string "They're around here somewhere.\p"
	.string "Reward offered!\n"
	.string "Contact: WARDEN$"

SafariZone_West_Text_SearchForSecretHouse::
# 36 "data/maps/SafariZone_West_Frlg/scripts.pory"
	.string "TRAINER TIPS\p"
	.string "Zone Exploration Campaign!\n"
	.string "The Search for the SECRET HOUSE!$"

SafariZone_West_Text_AreaSign::
# 42 "data/maps/SafariZone_West_Frlg/scripts.pory"
	.string "AREA 3\n"
	.string "EAST: CENTER AREA$"
