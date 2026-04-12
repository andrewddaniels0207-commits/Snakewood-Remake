# 1 "data/maps/SilphCo_1F_Frlg/scripts.pory"

# 2 "data/maps/SilphCo_1F_Frlg/scripts.pory"
SilphCo_1F_Frlg_MapScripts::
# 3 "data/maps/SilphCo_1F_Frlg/scripts.pory"
# 2 "data/maps/SilphCo_1F_Frlg/scripts.pory"
# 4 "data/maps/SilphCo_1F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SilphCo_1F_OnTransition
# 5 "data/maps/SilphCo_1F_Frlg/scripts.pory"
	.byte 0
# 6 "data/maps/SilphCo_1F_Frlg/scripts.pory"

# 7 "data/maps/SilphCo_1F_Frlg/scripts.pory"

# 8 "data/maps/SilphCo_1F_Frlg/scripts.pory"
SilphCo_1F_OnTransition::
# 9 "data/maps/SilphCo_1F_Frlg/scripts.pory"
# 6 "data/maps/SilphCo_1F_Frlg/scripts.pory"
# 10 "data/maps/SilphCo_1F_Frlg/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_SILPH_CO_1F
# 11 "data/maps/SilphCo_1F_Frlg/scripts.pory"
	end
# 12 "data/maps/SilphCo_1F_Frlg/scripts.pory"

# 13 "data/maps/SilphCo_1F_Frlg/scripts.pory"

# 14 "data/maps/SilphCo_1F_Frlg/scripts.pory"
SilphCo_1F_EventScript_Receptionist::
# 15 "data/maps/SilphCo_1F_Frlg/scripts.pory"
# 11 "data/maps/SilphCo_1F_Frlg/scripts.pory"
# 16 "data/maps/SilphCo_1F_Frlg/scripts.pory"
	msgbox SilphCo_1F_Text_WelcomePresidentInBoardroom, MSGBOX_NPC
# 17 "data/maps/SilphCo_1F_Frlg/scripts.pory"
	end
# 18 "data/maps/SilphCo_1F_Frlg/scripts.pory"

# 19 "data/maps/SilphCo_1F_Frlg/scripts.pory"

# 20 "data/maps/SilphCo_1F_Frlg/scripts.pory"
SilphCo_1F_EventScript_FloorSign::
# 21 "data/maps/SilphCo_1F_Frlg/scripts.pory"
# 16 "data/maps/SilphCo_1F_Frlg/scripts.pory"
# 22 "data/maps/SilphCo_1F_Frlg/scripts.pory"
	msgbox SilphCo_1F_Text_FloorSign, MSGBOX_SIGN
# 23 "data/maps/SilphCo_1F_Frlg/scripts.pory"
	end
# 24 "data/maps/SilphCo_1F_Frlg/scripts.pory"

# 25 "data/maps/SilphCo_1F_Frlg/scripts.pory"

# 26 "data/maps/SilphCo_1F_Frlg/scripts.pory"
SilphCo_1F_Text_WelcomePresidentInBoardroom::
# 27 "data/maps/SilphCo_1F_Frlg/scripts.pory"
# 20 "data/maps/SilphCo_1F_Frlg/scripts.pory"
# 28 "data/maps/SilphCo_1F_Frlg/scripts.pory"
	.string "Welcome.\p"
# 29 "data/maps/SilphCo_1F_Frlg/scripts.pory"
	.string "The PRESIDENT is in the boardroom\n"
# 30 "data/maps/SilphCo_1F_Frlg/scripts.pory"
	.string "on 11F.$"
# 31 "data/maps/SilphCo_1F_Frlg/scripts.pory"

# 32 "data/maps/SilphCo_1F_Frlg/scripts.pory"
SilphCo_1F_Text_FloorSign::
# 33 "data/maps/SilphCo_1F_Frlg/scripts.pory"
# 26 "data/maps/SilphCo_1F_Frlg/scripts.pory"
# 34 "data/maps/SilphCo_1F_Frlg/scripts.pory"
	.string "SILPH CO. HEAD OFFICE\n"
# 35 "data/maps/SilphCo_1F_Frlg/scripts.pory"
	.string "1F$"
