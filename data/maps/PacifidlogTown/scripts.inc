# 1 "data/maps/PacifidlogTown/scripts.pory"

# 2 "data/maps/PacifidlogTown/scripts.pory"
PacifidlogTown_MapScripts::
# 3 "data/maps/PacifidlogTown/scripts.pory"
# 2 "data/maps/PacifidlogTown/scripts.pory"
# 4 "data/maps/PacifidlogTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PacifidlogTown_OnTransition
# 5 "data/maps/PacifidlogTown/scripts.pory"
# 3 "data/maps/PacifidlogTown/scripts.pory"
# 6 "data/maps/PacifidlogTown/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, PacifidlogTown_OnResume
# 7 "data/maps/PacifidlogTown/scripts.pory"
	.byte 0
# 8 "data/maps/PacifidlogTown/scripts.pory"

# 9 "data/maps/PacifidlogTown/scripts.pory"

# 10 "data/maps/PacifidlogTown/scripts.pory"
PacifidlogTown_OnTransition::
# 11 "data/maps/PacifidlogTown/scripts.pory"
# 7 "data/maps/PacifidlogTown/scripts.pory"
# 12 "data/maps/PacifidlogTown/scripts.pory"
	setflag FLAG_VISITED_PACIFIDLOG_TOWN
# 13 "data/maps/PacifidlogTown/scripts.pory"
	end
# 14 "data/maps/PacifidlogTown/scripts.pory"

# 15 "data/maps/PacifidlogTown/scripts.pory"

# 16 "data/maps/PacifidlogTown/scripts.pory"
PacifidlogTown_OnResume::
# 17 "data/maps/PacifidlogTown/scripts.pory"
# 12 "data/maps/PacifidlogTown/scripts.pory"
# 18 "data/maps/PacifidlogTown/scripts.pory"
	setstepcallback STEP_CB_PACIFIDLOG_BRIDGE
# 19 "data/maps/PacifidlogTown/scripts.pory"
	end
# 20 "data/maps/PacifidlogTown/scripts.pory"

# 21 "data/maps/PacifidlogTown/scripts.pory"

# 22 "data/maps/PacifidlogTown/scripts.pory"
PacifidlogTown_EventScript_NinjaBoy::
# 23 "data/maps/PacifidlogTown/scripts.pory"
# 17 "data/maps/PacifidlogTown/scripts.pory"
# 24 "data/maps/PacifidlogTown/scripts.pory"
	msgbox PacifidlogTown_Text_NeatHousesOnWater, MSGBOX_NPC
# 25 "data/maps/PacifidlogTown/scripts.pory"
	end
# 26 "data/maps/PacifidlogTown/scripts.pory"

# 27 "data/maps/PacifidlogTown/scripts.pory"

# 28 "data/maps/PacifidlogTown/scripts.pory"
PacifidlogTown_EventScript_Girl::
# 29 "data/maps/PacifidlogTown/scripts.pory"
# 22 "data/maps/PacifidlogTown/scripts.pory"
# 30 "data/maps/PacifidlogTown/scripts.pory"
	msgbox PacifidlogTown_Text_FastRunningCurrent, MSGBOX_NPC
# 31 "data/maps/PacifidlogTown/scripts.pory"
	end
# 32 "data/maps/PacifidlogTown/scripts.pory"

# 33 "data/maps/PacifidlogTown/scripts.pory"

# 34 "data/maps/PacifidlogTown/scripts.pory"
PacifidlogTown_EventScript_Fisherman::
# 35 "data/maps/PacifidlogTown/scripts.pory"
# 27 "data/maps/PacifidlogTown/scripts.pory"
# 36 "data/maps/PacifidlogTown/scripts.pory"
	msgbox PacifidlogTown_Text_SkyPillarTooScary, MSGBOX_NPC
# 37 "data/maps/PacifidlogTown/scripts.pory"
	end
# 38 "data/maps/PacifidlogTown/scripts.pory"

# 39 "data/maps/PacifidlogTown/scripts.pory"

# 40 "data/maps/PacifidlogTown/scripts.pory"
PacifidlogTown_EventScript_TownSign::
# 41 "data/maps/PacifidlogTown/scripts.pory"
# 32 "data/maps/PacifidlogTown/scripts.pory"
# 42 "data/maps/PacifidlogTown/scripts.pory"
	msgbox PacifidlogTown_Text_TownSign, MSGBOX_SIGN
# 43 "data/maps/PacifidlogTown/scripts.pory"
	end
# 44 "data/maps/PacifidlogTown/scripts.pory"

# 45 "data/maps/PacifidlogTown/scripts.pory"

# 46 "data/maps/PacifidlogTown/scripts.pory"
PacifidlogTown_Text_FastRunningCurrent::
# 47 "data/maps/PacifidlogTown/scripts.pory"
# 36 "data/maps/PacifidlogTown/scripts.pory"
# 48 "data/maps/PacifidlogTown/scripts.pory"
	.string "The sea between PACIFIDLOG and\n"
# 49 "data/maps/PacifidlogTown/scripts.pory"
	.string "SLATEPORT has a fast-running tide.\p"
# 50 "data/maps/PacifidlogTown/scripts.pory"
	.string "If you decide to SURF, you could end\n"
# 51 "data/maps/PacifidlogTown/scripts.pory"
	.string "up swept away somewhere else.$"
# 52 "data/maps/PacifidlogTown/scripts.pory"

# 53 "data/maps/PacifidlogTown/scripts.pory"
PacifidlogTown_Text_NeatHousesOnWater::
# 54 "data/maps/PacifidlogTown/scripts.pory"
# 43 "data/maps/PacifidlogTown/scripts.pory"
# 55 "data/maps/PacifidlogTown/scripts.pory"
	.string "See, isn't it neat?\n"
# 56 "data/maps/PacifidlogTown/scripts.pory"
	.string "These houses are on water!\p"
# 57 "data/maps/PacifidlogTown/scripts.pory"
	.string "I was born here!$"
# 58 "data/maps/PacifidlogTown/scripts.pory"

# 59 "data/maps/PacifidlogTown/scripts.pory"
PacifidlogTown_Text_SkyPillarTooScary::
# 60 "data/maps/PacifidlogTown/scripts.pory"
# 49 "data/maps/PacifidlogTown/scripts.pory"
# 61 "data/maps/PacifidlogTown/scripts.pory"
	.string "The SKY PILLAR?\p"
# 62 "data/maps/PacifidlogTown/scripts.pory"
	.string "…Oh, you must mean that tall, tall\n"
# 63 "data/maps/PacifidlogTown/scripts.pory"
	.string "tower a little further out.\p"
# 64 "data/maps/PacifidlogTown/scripts.pory"
	.string "If you asked me, I wouldn't climb it.\n"
# 65 "data/maps/PacifidlogTown/scripts.pory"
	.string "It's too scary to get up that high.\p"
# 66 "data/maps/PacifidlogTown/scripts.pory"
	.string "Life at sea level in PACIFIDLOG,\n"
# 67 "data/maps/PacifidlogTown/scripts.pory"
	.string "that suits me fine.$"
# 68 "data/maps/PacifidlogTown/scripts.pory"

# 69 "data/maps/PacifidlogTown/scripts.pory"
PacifidlogTown_Text_TownSign::
# 70 "data/maps/PacifidlogTown/scripts.pory"
# 59 "data/maps/PacifidlogTown/scripts.pory"
# 71 "data/maps/PacifidlogTown/scripts.pory"
	.string "PACIFIDLOG TOWN\p"
# 72 "data/maps/PacifidlogTown/scripts.pory"
	.string "“Where the morning sun smiles upon\n"
# 73 "data/maps/PacifidlogTown/scripts.pory"
	.string "the waters.”$"
