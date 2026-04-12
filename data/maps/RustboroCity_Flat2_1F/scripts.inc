RustboroCity_Flat2_1F_MapScripts::
	.byte 0


RustboroCity_Flat2_1F_EventScript_OldWoman::
# 4 "data/maps/RustboroCity_Flat2_1F/scripts.pory"
	msgbox RustboroCity_Flat2_1F_Text_DevonWorkersLiveHere, MSGBOX_NPC
	end


RustboroCity_Flat2_1F_EventScript_Skitty::
# 9 "data/maps/RustboroCity_Flat2_1F/scripts.pory"
	lock
# 10 "data/maps/RustboroCity_Flat2_1F/scripts.pory"
	faceplayer
# 11 "data/maps/RustboroCity_Flat2_1F/scripts.pory"
	waitse
# 12 "data/maps/RustboroCity_Flat2_1F/scripts.pory"
	playmoncry SPECIES_SKITTY, CRY_MODE_NORMAL
# 13 "data/maps/RustboroCity_Flat2_1F/scripts.pory"
	msgbox RustboroCity_Flat2_1F_Text_Skitty, MSGBOX_DEFAULT
# 14 "data/maps/RustboroCity_Flat2_1F/scripts.pory"
	waitmoncry
# 15 "data/maps/RustboroCity_Flat2_1F/scripts.pory"
	release
	end


RustboroCity_Flat2_1F_Text_DevonWorkersLiveHere::
# 19 "data/maps/RustboroCity_Flat2_1F/scripts.pory"
	.string "DEVON CORPORATION's workers live in\n"
	.string "this building.$"

RustboroCity_Flat2_1F_Text_Skitty::
# 24 "data/maps/RustboroCity_Flat2_1F/scripts.pory"
	.string "SKITTY: Gyaaaah!$"
