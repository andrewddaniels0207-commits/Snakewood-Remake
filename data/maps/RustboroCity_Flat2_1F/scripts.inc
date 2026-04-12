# 1 "data/maps/RustboroCity_Flat2_1F/scripts.pory"

# 2 "data/maps/RustboroCity_Flat2_1F/scripts.pory"
RustboroCity_Flat2_1F_MapScripts::
# 3 "data/maps/RustboroCity_Flat2_1F/scripts.pory"
	.byte 0
# 4 "data/maps/RustboroCity_Flat2_1F/scripts.pory"

# 5 "data/maps/RustboroCity_Flat2_1F/scripts.pory"

# 6 "data/maps/RustboroCity_Flat2_1F/scripts.pory"
RustboroCity_Flat2_1F_EventScript_OldWoman::
# 7 "data/maps/RustboroCity_Flat2_1F/scripts.pory"
# 4 "data/maps/RustboroCity_Flat2_1F/scripts.pory"
# 8 "data/maps/RustboroCity_Flat2_1F/scripts.pory"
	msgbox RustboroCity_Flat2_1F_Text_DevonWorkersLiveHere, MSGBOX_NPC
# 9 "data/maps/RustboroCity_Flat2_1F/scripts.pory"
	end
# 10 "data/maps/RustboroCity_Flat2_1F/scripts.pory"

# 11 "data/maps/RustboroCity_Flat2_1F/scripts.pory"

# 12 "data/maps/RustboroCity_Flat2_1F/scripts.pory"
RustboroCity_Flat2_1F_EventScript_Skitty::
# 13 "data/maps/RustboroCity_Flat2_1F/scripts.pory"
# 9 "data/maps/RustboroCity_Flat2_1F/scripts.pory"
# 14 "data/maps/RustboroCity_Flat2_1F/scripts.pory"
	lock
# 15 "data/maps/RustboroCity_Flat2_1F/scripts.pory"
# 10 "data/maps/RustboroCity_Flat2_1F/scripts.pory"
# 16 "data/maps/RustboroCity_Flat2_1F/scripts.pory"
	faceplayer
# 17 "data/maps/RustboroCity_Flat2_1F/scripts.pory"
# 11 "data/maps/RustboroCity_Flat2_1F/scripts.pory"
# 18 "data/maps/RustboroCity_Flat2_1F/scripts.pory"
	waitse
# 19 "data/maps/RustboroCity_Flat2_1F/scripts.pory"
# 12 "data/maps/RustboroCity_Flat2_1F/scripts.pory"
# 20 "data/maps/RustboroCity_Flat2_1F/scripts.pory"
	playmoncry SPECIES_SKITTY, CRY_MODE_NORMAL
# 21 "data/maps/RustboroCity_Flat2_1F/scripts.pory"
# 13 "data/maps/RustboroCity_Flat2_1F/scripts.pory"
# 22 "data/maps/RustboroCity_Flat2_1F/scripts.pory"
	msgbox RustboroCity_Flat2_1F_Text_Skitty, MSGBOX_DEFAULT
# 23 "data/maps/RustboroCity_Flat2_1F/scripts.pory"
# 14 "data/maps/RustboroCity_Flat2_1F/scripts.pory"
# 24 "data/maps/RustboroCity_Flat2_1F/scripts.pory"
	waitmoncry
# 25 "data/maps/RustboroCity_Flat2_1F/scripts.pory"
# 15 "data/maps/RustboroCity_Flat2_1F/scripts.pory"
# 26 "data/maps/RustboroCity_Flat2_1F/scripts.pory"
	release
# 27 "data/maps/RustboroCity_Flat2_1F/scripts.pory"
	end
# 28 "data/maps/RustboroCity_Flat2_1F/scripts.pory"

# 29 "data/maps/RustboroCity_Flat2_1F/scripts.pory"

# 30 "data/maps/RustboroCity_Flat2_1F/scripts.pory"
RustboroCity_Flat2_1F_Text_DevonWorkersLiveHere::
# 31 "data/maps/RustboroCity_Flat2_1F/scripts.pory"
# 19 "data/maps/RustboroCity_Flat2_1F/scripts.pory"
# 32 "data/maps/RustboroCity_Flat2_1F/scripts.pory"
	.string "DEVON CORPORATION's workers live in\n"
# 33 "data/maps/RustboroCity_Flat2_1F/scripts.pory"
	.string "this building.$"
# 34 "data/maps/RustboroCity_Flat2_1F/scripts.pory"

# 35 "data/maps/RustboroCity_Flat2_1F/scripts.pory"
RustboroCity_Flat2_1F_Text_Skitty::
# 36 "data/maps/RustboroCity_Flat2_1F/scripts.pory"
# 24 "data/maps/RustboroCity_Flat2_1F/scripts.pory"
# 37 "data/maps/RustboroCity_Flat2_1F/scripts.pory"
	.string "SKITTY: Gyaaaah!$"
