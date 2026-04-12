# 1 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"

# 2 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
FallarborTown_PokemonCenter_1F_MapScripts::
# 3 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
# 2 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
# 4 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, FallarborTown_PokemonCenter_1F_OnTransition
# 5 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
# 3 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
# 6 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
# 7 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	.byte 0
# 8 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"

# 9 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"

# 10 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
FallarborTown_PokemonCenter_1F_OnTransition::
# 11 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
# 7 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
# 12 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_FALLARBOR_TOWN
# 13 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
# 8 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
# 14 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_UpdateBrineyLocation
# 15 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	end
# 16 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"

# 17 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"

# 18 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
FallarborTown_PokemonCenter_1F_EventScript_Nurse::
# 19 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
# 13 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
# 20 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x800B, LOCALID_FALLARBOR_NURSE
# 21 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
# 14 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
# 22 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 23 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
# 15 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
# 24 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	waitmessage
# 25 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
# 16 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
# 26 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	waitbuttonpress
# 27 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
# 17 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
# 28 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	release
# 29 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	end
# 30 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"

# 31 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"

# 32 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
FallarborTown_PokemonCenter_1F_EventScript_Girl::
# 33 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
# 22 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
# 34 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	msgbox FallarborTown_PokemonCenter_1F_Text_FossilManiacEdgeOfTown, MSGBOX_NPC
# 35 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	end
# 36 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"

# 37 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"

# 38 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
FallarborTown_PokemonCenter_1F_EventScript_ExpertM::
# 39 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
# 27 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
# 40 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	msgbox FallarborTown_PokemonCenter_1F_Text_PlantHardyTrees, MSGBOX_NPC
# 41 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	end
# 42 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"

# 43 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"

# 44 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
FallarborTown_PokemonCenter_1F_EventScript_Lanette::
# 45 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
# 32 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
# 46 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	lock
# 47 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
# 33 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
# 48 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	faceplayer
# 49 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
# 34 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
# 50 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	msgbox FallarborTown_PokemonCenter_1F_Text_LanetteGreeting, MSGBOX_DEFAULT
# 51 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
# 35 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
# 52 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	closemessage
# 53 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
# 36 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
# 54 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	switch VAR_FACING
# 55 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
# 37 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
# 56 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	case DIR_NORTH, FallarborTown_PokemonCenter_1F_EventScript_Lanette_3
# 57 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
# 39 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
# 58 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	case DIR_WEST, FallarborTown_PokemonCenter_1F_EventScript_Lanette_4
# 59 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
FallarborTown_PokemonCenter_1F_EventScript_Lanette_1:
# 60 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	end
# 61 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"

# 62 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
FallarborTown_PokemonCenter_1F_EventScript_Lanette_3:
# 63 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
# 38 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
# 64 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	goto FallarborTown_PokemonCenter_1F_EventScript_LanetteExitNorth
# 65 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	goto FallarborTown_PokemonCenter_1F_EventScript_Lanette_1
# 66 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"

# 67 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
FallarborTown_PokemonCenter_1F_EventScript_Lanette_4:
# 68 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
# 40 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
# 69 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	goto FallarborTown_PokemonCenter_1F_EventScript_LanetteExitWest
# 70 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	goto FallarborTown_PokemonCenter_1F_EventScript_Lanette_1
# 71 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"

# 72 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"

# 73 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
FallarborTown_PokemonCenter_1F_EventScript_LanetteExitNorth::
# 74 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
# 46 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
# 75 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_FALLARBOR_LANETTE, FallarborTown_PokemonCenter_1F_Movement_LanetteExitNorth
# 76 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
# 47 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
# 77 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 78 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
# 48 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
# 79 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	goto FallarborTown_PokemonCenter_1F_EventScript_LanetteExited
# 80 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	end
# 81 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"

# 82 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"

# 83 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
FallarborTown_PokemonCenter_1F_EventScript_LanetteExitWest::
# 84 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
# 53 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
# 85 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_FALLARBOR_LANETTE, FallarborTown_PokemonCenter_1F_Movement_LanetteExitWest
# 86 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
# 54 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
# 87 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 88 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
# 55 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
# 89 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	goto FallarborTown_PokemonCenter_1F_EventScript_LanetteExited
# 90 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	end
# 91 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"

# 92 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"

# 93 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
FallarborTown_PokemonCenter_1F_EventScript_LanetteExited::
# 94 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
# 60 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
# 95 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	playse SE_SLIDING_DOOR
# 96 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
# 61 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
# 97 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	removeobject LOCALID_FALLARBOR_LANETTE
# 98 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
# 62 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
# 99 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	clearflag FLAG_HIDE_LANETTES_HOUSE_LANETTE
# 100 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
# 63 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
# 101 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	release
# 102 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	end
# 103 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"

# 104 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"

# 105 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
# 67 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
# 106 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
FallarborTown_PokemonCenter_1F_Movement_LanetteExitNorth:
# 107 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
# 68 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
# 108 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	walk_right
# 109 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
# 69 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
# 110 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	walk_down
# 111 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
# 70 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
# 112 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	walk_down
# 113 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
# 71 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
# 114 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	walk_left
# 115 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
# 72 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
# 116 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	walk_left
# 117 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
# 73 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
# 118 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	walk_left
# 119 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
# 74 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
# 120 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	walk_left
# 121 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
# 75 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
# 122 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	walk_down
# 123 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
# 76 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
# 124 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	walk_down
# 125 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
# 77 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
# 126 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	walk_down
# 127 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
# 78 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
# 128 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	walk_down
# 129 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
# 79 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
# 130 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	delay_8
# 131 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
# 80 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
# 132 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	step_end
# 133 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"

# 134 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
# 83 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
# 135 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
FallarborTown_PokemonCenter_1F_Movement_LanetteExitWest:
# 136 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
# 84 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
# 137 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	walk_down
# 138 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
# 85 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
# 139 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	walk_down
# 140 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
# 86 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
# 141 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	walk_left
# 142 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
# 87 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
# 143 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	walk_left
# 144 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
# 88 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
# 145 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	walk_left
# 146 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
# 89 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
# 147 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	walk_down
# 148 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
# 90 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
# 149 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	walk_down
# 150 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
# 91 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
# 151 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	walk_down
# 152 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
# 92 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
# 153 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	walk_down
# 154 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
# 93 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
# 155 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	delay_8
# 156 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
# 94 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
# 157 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	step_end
# 158 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"

# 159 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
FallarborTown_PokemonCenter_1F_Text_LanetteGreeting::
# 160 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
# 97 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
# 161 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	.string "Oh, hello.\n"
# 162 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	.string "You are?\p"
# 163 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	.string "Okay, your name's {PLAYER}{KUN}.\n"
# 164 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	.string "I can see that you're a TRAINER.\p"
# 165 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	.string "So that means you use the POKéMON\n"
# 166 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	.string "Storage System I developed.\p"
# 167 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	.string "How I arrived at that conclusion is\n"
# 168 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	.string "a simple deductive process.\p"
# 169 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	.string "You spoke to me because you wanted\n"
# 170 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	.string "to access something on this PC.\p"
# 171 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	.string "Oh, I'm sorry. I'm LANETTE.\p"
# 172 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	.string "Honestly, I'm glad to meet you--it's\n"
# 173 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	.string "great you're using the Storage System.\p"
# 174 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	.string "If you could, please visit me at home.\n"
# 175 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	.string "My house is on ROUTE 114.$"
# 176 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"

# 177 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
FallarborTown_PokemonCenter_1F_Text_FossilManiacEdgeOfTown::
# 178 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
# 115 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
# 179 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	.string "I wonder what POKéMON looked like\n"
# 180 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	.string "long, long ago?\p"
# 181 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	.string "Maybe the FOSSIL MANIAC at the edge\n"
# 182 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	.string "of town will know.$"
# 183 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"

# 184 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
FallarborTown_PokemonCenter_1F_Text_PlantHardyTrees::
# 185 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
# 122 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
# 186 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	.string "In the fields of FALLARBOR, we plant\n"
# 187 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	.string "seedlings of hardy trees that thrive\l"
# 188 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	.string "even in volcanic ash.$"
