# 1 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"

# 2 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
ShoalCave_LowTideInnerRoom_MapScripts::
# 3 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
# 2 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
# 4 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, ShoalCave_LowTideInnerRoom_OnLoad
# 5 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
# 3 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
# 6 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ShoalCave_LowTideInnerRoom_OnTransition
# 7 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	.byte 0
# 8 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"

# 9 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"

# 10 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
ShoalCave_LowTideInnerRoom_OnTransition::
# 11 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
# 7 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
# 12 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	goto_if_set FLAG_SYS_SHOAL_TIDE, ShoalCave_LowTideInnerRoom_OnTransition_2
# 13 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
ShoalCave_LowTideInnerRoom_OnTransition_1:
# 14 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
# 10 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
# 15 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	goto ShoalCave_LowTideInnerRoom_EventScript_SetLowTide
# 16 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	return
# 17 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"

# 18 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
ShoalCave_LowTideInnerRoom_OnTransition_2:
# 19 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
# 8 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
# 20 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	goto ShoalCave_LowTideInnerRoom_EventScript_SetHighTide
# 21 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	goto ShoalCave_LowTideInnerRoom_OnTransition_1
# 22 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"

# 23 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"

# 24 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
ShoalCave_LowTideInnerRoom_EventScript_SetHighTide::
# 25 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
# 14 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
# 26 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	setmaplayoutindex LAYOUT_SHOAL_CAVE_HIGH_TIDE_INNER_ROOM
# 27 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	end
# 28 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"

# 29 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"

# 30 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
ShoalCave_LowTideInnerRoom_EventScript_SetLowTide::
# 31 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
# 19 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
# 32 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	setmaplayoutindex LAYOUT_SHOAL_CAVE_LOW_TIDE_INNER_ROOM
# 33 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	end
# 34 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"

# 35 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"

# 36 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
ShoalCave_LowTideInnerRoom_OnLoad::
# 37 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
# 24 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
# 38 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	call ShoalCave_LowTideInnerRoom_EventScript_SetShoalItemMetatiles
# 39 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	end
# 40 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"

# 41 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"

# 42 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
ShoalCave_LowTideInnerRoom_EventScript_SetShoalItemMetatiles::
# 43 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
# 29 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
# 44 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	goto_if_set FLAG_RECEIVED_SHOAL_SALT_1, ShoalCave_LowTideInnerRoom_EventScript_SetShoalItemMetatiles_2
# 45 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
ShoalCave_LowTideInnerRoom_EventScript_SetShoalItemMetatiles_1:
# 46 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
# 32 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
# 47 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	goto_if_set FLAG_SYS_SHOAL_TIDE, ShoalCave_LowTideInnerRoom_EventScript_SetShoalItemMetatiles_5
# 48 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
ShoalCave_LowTideInnerRoom_EventScript_SetShoalItemMetatiles_4:
# 49 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
# 35 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
# 50 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	setmetatile 31, 8, METATILE_Cave_ShoalCave_DirtPile_Large, TRUE
# 51 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
# 36 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
# 52 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	goto ShoalCave_LowTideInnerRoom_EventScript_SetShoalItemMetatiles2
# 53 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	end
# 54 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"

# 55 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
ShoalCave_LowTideInnerRoom_EventScript_SetShoalItemMetatiles_2:
# 56 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
# 30 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
# 57 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	goto ShoalCave_LowTideInnerRoom_EventScript_SetShoalItemMetatiles2
# 58 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	goto ShoalCave_LowTideInnerRoom_EventScript_SetShoalItemMetatiles_1
# 59 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"

# 60 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
ShoalCave_LowTideInnerRoom_EventScript_SetShoalItemMetatiles_5:
# 61 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
# 33 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
# 62 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	goto ShoalCave_LowTideInnerRoom_EventScript_SetShoalItemMetatiles2
# 63 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	goto ShoalCave_LowTideInnerRoom_EventScript_SetShoalItemMetatiles_4
# 64 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"

# 65 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"

# 66 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
ShoalCave_LowTideInnerRoom_EventScript_SetShoalItemMetatiles2::
# 67 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
# 41 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
# 68 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	goto_if_set FLAG_RECEIVED_SHOAL_SALT_2, ShoalCave_LowTideInnerRoom_EventScript_SetShoalItemMetatiles2_2
# 69 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
ShoalCave_LowTideInnerRoom_EventScript_SetShoalItemMetatiles2_1:
# 70 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
# 44 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
# 71 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	goto_if_set FLAG_SYS_SHOAL_TIDE, ShoalCave_LowTideInnerRoom_EventScript_SetShoalItemMetatiles2_5
# 72 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
ShoalCave_LowTideInnerRoom_EventScript_SetShoalItemMetatiles2_4:
# 73 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
# 47 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
# 74 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	setmetatile 14, 26, METATILE_Cave_ShoalCave_DirtPile_Large, TRUE
# 75 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
# 48 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
# 76 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	goto ShoalCave_LowTideInnerRoom_EventScript_SetShoalItemMetatiles3
# 77 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	end
# 78 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"

# 79 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
ShoalCave_LowTideInnerRoom_EventScript_SetShoalItemMetatiles2_2:
# 80 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
# 42 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
# 81 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	goto ShoalCave_LowTideInnerRoom_EventScript_SetShoalItemMetatiles3
# 82 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	goto ShoalCave_LowTideInnerRoom_EventScript_SetShoalItemMetatiles2_1
# 83 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"

# 84 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
ShoalCave_LowTideInnerRoom_EventScript_SetShoalItemMetatiles2_5:
# 85 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
# 45 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
# 86 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	goto ShoalCave_LowTideInnerRoom_EventScript_SetShoalItemMetatiles3
# 87 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	goto ShoalCave_LowTideInnerRoom_EventScript_SetShoalItemMetatiles2_4
# 88 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"

# 89 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"

# 90 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
ShoalCave_LowTideInnerRoom_EventScript_SetShoalItemMetatiles3::
# 91 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
# 53 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
# 92 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	goto_if_set FLAG_RECEIVED_SHOAL_SHELL_1, ShoalCave_LowTideInnerRoom_EventScript_SetShoalItemMetatiles3_2
# 93 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
ShoalCave_LowTideInnerRoom_EventScript_SetShoalItemMetatiles3_1:
# 94 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
# 56 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
# 95 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	setmetatile 41, 20, METATILE_Cave_ShoalCave_BlueStone_Large, TRUE
# 96 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
# 57 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
# 97 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	goto ShoalCave_LowTideInnerRoom_EventScript_SetShoalItemMetatiles4
# 98 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	end
# 99 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"

# 100 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
ShoalCave_LowTideInnerRoom_EventScript_SetShoalItemMetatiles3_2:
# 101 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
# 54 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
# 102 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	goto ShoalCave_LowTideInnerRoom_EventScript_SetShoalItemMetatiles4
# 103 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	goto ShoalCave_LowTideInnerRoom_EventScript_SetShoalItemMetatiles3_1
# 104 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"

# 105 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"

# 106 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
ShoalCave_LowTideInnerRoom_EventScript_SetShoalItemMetatiles4::
# 107 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
# 62 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
# 108 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	goto_if_set FLAG_RECEIVED_SHOAL_SHELL_2, ShoalCave_LowTideInnerRoom_EventScript_SetShoalItemMetatiles4_2
# 109 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
ShoalCave_LowTideInnerRoom_EventScript_SetShoalItemMetatiles4_1:
# 110 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
# 65 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
# 111 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	setmetatile 41, 10, METATILE_Cave_ShoalCave_BlueStone_Large, TRUE
# 112 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
# 66 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
# 113 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	goto ShoalCave_LowTideInnerRoom_EventScript_SetShoalItemMetatiles5
# 114 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	end
# 115 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"

# 116 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
ShoalCave_LowTideInnerRoom_EventScript_SetShoalItemMetatiles4_2:
# 117 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
# 63 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
# 118 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	goto ShoalCave_LowTideInnerRoom_EventScript_SetShoalItemMetatiles5
# 119 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	goto ShoalCave_LowTideInnerRoom_EventScript_SetShoalItemMetatiles4_1
# 120 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"

# 121 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"

# 122 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
ShoalCave_LowTideInnerRoom_EventScript_SetShoalItemMetatiles5::
# 123 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
# 71 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
# 124 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	goto_if_set FLAG_RECEIVED_SHOAL_SHELL_3, ShoalCave_LowTideInnerRoom_EventScript_SetShoalItemMetatiles5_2
# 125 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
ShoalCave_LowTideInnerRoom_EventScript_SetShoalItemMetatiles5_1:
# 126 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
# 74 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
# 127 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	setmetatile 6, 9, METATILE_Cave_ShoalCave_BlueStone_Large, TRUE
# 128 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
# 75 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
# 129 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	goto ShoalCave_LowTideInnerRoom_EventScript_SetShoalItemMetatiles6
# 130 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	end
# 131 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"

# 132 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
ShoalCave_LowTideInnerRoom_EventScript_SetShoalItemMetatiles5_2:
# 133 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
# 72 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
# 134 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	goto ShoalCave_LowTideInnerRoom_EventScript_SetShoalItemMetatiles6
# 135 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	goto ShoalCave_LowTideInnerRoom_EventScript_SetShoalItemMetatiles5_1
# 136 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"

# 137 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"

# 138 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
ShoalCave_LowTideInnerRoom_EventScript_SetShoalItemMetatiles6::
# 139 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
# 80 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
# 140 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	goto_if_set FLAG_RECEIVED_SHOAL_SHELL_4, ShoalCave_LowTideInnerRoom_EventScript_SetShoalItemMetatiles6_2
# 141 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
ShoalCave_LowTideInnerRoom_EventScript_SetShoalItemMetatiles6_1:
# 142 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
# 83 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
# 143 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	setmetatile 16, 13, METATILE_Cave_ShoalCave_BlueStone_Large, TRUE
# 144 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	return
# 145 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"

# 146 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
ShoalCave_LowTideInnerRoom_EventScript_SetShoalItemMetatiles6_2:
# 147 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
# 81 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
# 148 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	goto ShoalCave_LowTideInnerRoom_EventScript_SetShoalItemMetatilesEnd
# 149 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	goto ShoalCave_LowTideInnerRoom_EventScript_SetShoalItemMetatiles6_1
# 150 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"

# 151 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"

# 152 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
ShoalCave_LowTideInnerRoom_EventScript_SetShoalItemMetatilesEnd::
# 153 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	return
# 154 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"

# 155 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"

# 156 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
ShoalCave_LowTideInnerRoom_EventScript_ShoalShell1::
# 157 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
# 92 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
# 158 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	lockall
# 159 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
# 93 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
# 160 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	goto_if_set FLAG_RECEIVED_SHOAL_SHELL_1, ShoalCave_LowTideInnerRoom_EventScript_ShoalShell1_2
# 161 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
ShoalCave_LowTideInnerRoom_EventScript_ShoalShell1_1:
# 162 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
# 96 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
# 163 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	giveitem ITEM_SHOAL_SHELL
# 164 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
# 97 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
# 165 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	compare VAR_RESULT, FALSE
# 166 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	goto_if_eq ShoalCave_LowTideInnerRoom_EventScript_ShoalShell1_5
# 167 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
ShoalCave_LowTideInnerRoom_EventScript_ShoalShell1_4:
# 168 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
# 100 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
# 169 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	setmetatile 41, 20, METATILE_Cave_ShoalCave_BlueStone_Small, FALSE
# 170 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
# 101 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
# 171 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	special DrawWholeMapView
# 172 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
# 102 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
# 173 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	setflag FLAG_RECEIVED_SHOAL_SHELL_1
# 174 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
# 103 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
# 175 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	releaseall
# 176 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	end
# 177 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"

# 178 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
ShoalCave_LowTideInnerRoom_EventScript_ShoalShell1_2:
# 179 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
# 94 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
# 180 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	goto ShoalCave_LowTideInnerRoom_EventScript_ReceivedShoalShell
# 181 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	goto ShoalCave_LowTideInnerRoom_EventScript_ShoalShell1_1
# 182 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"

# 183 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
ShoalCave_LowTideInnerRoom_EventScript_ShoalShell1_5:
# 184 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
# 98 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
# 185 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
# 186 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	goto ShoalCave_LowTideInnerRoom_EventScript_ShoalShell1_4
# 187 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"

# 188 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"

# 189 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
ShoalCave_LowTideInnerRoom_EventScript_ReceivedShoalShell::
# 190 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
# 108 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
# 191 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	msgbox ShoalCave_Text_WasShoallShellNowNothing, MSGBOX_DEFAULT
# 192 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
# 109 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
# 193 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	releaseall
# 194 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	end
# 195 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"

# 196 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"

# 197 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
ShoalCave_LowTideInnerRoom_EventScript_ShoalShell2::
# 198 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
# 114 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
# 199 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	lockall
# 200 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
# 115 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
# 201 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	goto_if_set FLAG_RECEIVED_SHOAL_SHELL_2, ShoalCave_LowTideInnerRoom_EventScript_ShoalShell2_2
# 202 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
ShoalCave_LowTideInnerRoom_EventScript_ShoalShell2_1:
# 203 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
# 118 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
# 204 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	giveitem ITEM_SHOAL_SHELL
# 205 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
# 119 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
# 206 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	compare VAR_RESULT, FALSE
# 207 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	goto_if_eq ShoalCave_LowTideInnerRoom_EventScript_ShoalShell2_5
# 208 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
ShoalCave_LowTideInnerRoom_EventScript_ShoalShell2_4:
# 209 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
# 122 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
# 210 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	setmetatile 41, 10, METATILE_Cave_ShoalCave_BlueStone_Small, FALSE
# 211 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
# 123 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
# 212 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	special DrawWholeMapView
# 213 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
# 124 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
# 214 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	setflag FLAG_RECEIVED_SHOAL_SHELL_2
# 215 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
# 125 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
# 216 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	releaseall
# 217 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	end
# 218 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"

# 219 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
ShoalCave_LowTideInnerRoom_EventScript_ShoalShell2_2:
# 220 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
# 116 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
# 221 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	goto ShoalCave_LowTideInnerRoom_EventScript_ReceivedShoalShell
# 222 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	goto ShoalCave_LowTideInnerRoom_EventScript_ShoalShell2_1
# 223 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"

# 224 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
ShoalCave_LowTideInnerRoom_EventScript_ShoalShell2_5:
# 225 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
# 120 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
# 226 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
# 227 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	goto ShoalCave_LowTideInnerRoom_EventScript_ShoalShell2_4
# 228 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"

# 229 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"

# 230 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
ShoalCave_LowTideInnerRoom_EventScript_ShoalShell3::
# 231 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
# 130 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
# 232 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	lockall
# 233 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
# 131 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
# 234 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	goto_if_set FLAG_RECEIVED_SHOAL_SHELL_3, ShoalCave_LowTideInnerRoom_EventScript_ShoalShell3_2
# 235 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
ShoalCave_LowTideInnerRoom_EventScript_ShoalShell3_1:
# 236 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
# 134 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
# 237 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	giveitem ITEM_SHOAL_SHELL
# 238 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
# 135 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
# 239 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	compare VAR_RESULT, FALSE
# 240 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	goto_if_eq ShoalCave_LowTideInnerRoom_EventScript_ShoalShell3_5
# 241 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
ShoalCave_LowTideInnerRoom_EventScript_ShoalShell3_4:
# 242 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
# 138 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
# 243 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	setmetatile 6, 9, METATILE_Cave_ShoalCave_BlueStone_Small, FALSE
# 244 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
# 139 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
# 245 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	special DrawWholeMapView
# 246 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
# 140 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
# 247 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	setflag FLAG_RECEIVED_SHOAL_SHELL_3
# 248 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
# 141 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
# 249 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	releaseall
# 250 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	end
# 251 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"

# 252 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
ShoalCave_LowTideInnerRoom_EventScript_ShoalShell3_2:
# 253 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
# 132 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
# 254 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	goto ShoalCave_LowTideInnerRoom_EventScript_ReceivedShoalShell
# 255 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	goto ShoalCave_LowTideInnerRoom_EventScript_ShoalShell3_1
# 256 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"

# 257 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
ShoalCave_LowTideInnerRoom_EventScript_ShoalShell3_5:
# 258 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
# 136 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
# 259 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
# 260 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	goto ShoalCave_LowTideInnerRoom_EventScript_ShoalShell3_4
# 261 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"

# 262 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"

# 263 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
ShoalCave_LowTideInnerRoom_EventScript_ShoalShell4::
# 264 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
# 146 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
# 265 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	lockall
# 266 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
# 147 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
# 267 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	goto_if_set FLAG_RECEIVED_SHOAL_SHELL_4, ShoalCave_LowTideInnerRoom_EventScript_ShoalShell4_2
# 268 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
ShoalCave_LowTideInnerRoom_EventScript_ShoalShell4_1:
# 269 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
# 150 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
# 270 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	giveitem ITEM_SHOAL_SHELL
# 271 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
# 151 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
# 272 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	compare VAR_RESULT, FALSE
# 273 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	goto_if_eq ShoalCave_LowTideInnerRoom_EventScript_ShoalShell4_5
# 274 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
ShoalCave_LowTideInnerRoom_EventScript_ShoalShell4_4:
# 275 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
# 154 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
# 276 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	setmetatile 16, 13, METATILE_Cave_ShoalCave_BlueStone_Small, FALSE
# 277 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
# 155 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
# 278 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	special DrawWholeMapView
# 279 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
# 156 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
# 280 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	setflag FLAG_RECEIVED_SHOAL_SHELL_4
# 281 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
# 157 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
# 282 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	releaseall
# 283 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	end
# 284 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"

# 285 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
ShoalCave_LowTideInnerRoom_EventScript_ShoalShell4_2:
# 286 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
# 148 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
# 287 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	goto ShoalCave_LowTideInnerRoom_EventScript_ReceivedShoalShell
# 288 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	goto ShoalCave_LowTideInnerRoom_EventScript_ShoalShell4_1
# 289 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"

# 290 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
ShoalCave_LowTideInnerRoom_EventScript_ShoalShell4_5:
# 291 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
# 152 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
# 292 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
# 293 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	goto ShoalCave_LowTideInnerRoom_EventScript_ShoalShell4_4
# 294 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"

# 295 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"

# 296 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
ShoalCave_LowTideInnerRoom_EventScript_ShoalSalt1::
# 297 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
# 162 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
# 298 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	lockall
# 299 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
# 163 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
# 300 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	goto_if_set FLAG_RECEIVED_SHOAL_SALT_1, ShoalCave_LowTideInnerRoom_EventScript_ShoalSalt1_2
# 301 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
ShoalCave_LowTideInnerRoom_EventScript_ShoalSalt1_1:
# 302 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
# 166 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
# 303 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	giveitem ITEM_SHOAL_SALT
# 304 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
# 167 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
# 305 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	compare VAR_RESULT, FALSE
# 306 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	goto_if_eq ShoalCave_LowTideInnerRoom_EventScript_ShoalSalt1_5
# 307 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
ShoalCave_LowTideInnerRoom_EventScript_ShoalSalt1_4:
# 308 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
# 170 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
# 309 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	setmetatile 31, 8, METATILE_Cave_ShoalCave_DirtPile_Small, FALSE
# 310 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
# 171 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
# 311 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	special DrawWholeMapView
# 312 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
# 172 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
# 313 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	setflag FLAG_RECEIVED_SHOAL_SALT_1
# 314 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
# 173 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
# 315 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	releaseall
# 316 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	end
# 317 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"

# 318 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
ShoalCave_LowTideInnerRoom_EventScript_ShoalSalt1_2:
# 319 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
# 164 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
# 320 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	goto ShoalCave_LowTideInnerRoom_EventScript_ReceivedShoalSalt
# 321 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	goto ShoalCave_LowTideInnerRoom_EventScript_ShoalSalt1_1
# 322 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"

# 323 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
ShoalCave_LowTideInnerRoom_EventScript_ShoalSalt1_5:
# 324 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
# 168 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
# 325 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
# 326 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	goto ShoalCave_LowTideInnerRoom_EventScript_ShoalSalt1_4
# 327 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"

# 328 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"

# 329 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
ShoalCave_LowTideInnerRoom_EventScript_ReceivedShoalSalt::
# 330 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
# 178 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
# 331 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	msgbox ShoalCave_Text_WasShoalSaltNowNothing, MSGBOX_DEFAULT
# 332 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
# 179 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
# 333 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	releaseall
# 334 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	end
# 335 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"

# 336 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"

# 337 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
ShoalCave_LowTideInnerRoom_EventScript_ShoalSalt2::
# 338 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
# 184 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
# 339 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	lockall
# 340 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
# 185 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
# 341 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	goto_if_set FLAG_RECEIVED_SHOAL_SALT_2, ShoalCave_LowTideInnerRoom_EventScript_ShoalSalt2_2
# 342 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
ShoalCave_LowTideInnerRoom_EventScript_ShoalSalt2_1:
# 343 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
# 188 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
# 344 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	giveitem ITEM_SHOAL_SALT
# 345 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
# 189 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
# 346 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	compare VAR_RESULT, FALSE
# 347 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	goto_if_eq ShoalCave_LowTideInnerRoom_EventScript_ShoalSalt2_5
# 348 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
ShoalCave_LowTideInnerRoom_EventScript_ShoalSalt2_4:
# 349 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
# 192 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
# 350 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	setmetatile 14, 26, METATILE_Cave_ShoalCave_DirtPile_Small, FALSE
# 351 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
# 193 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
# 352 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	special DrawWholeMapView
# 353 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
# 194 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
# 354 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	setflag FLAG_RECEIVED_SHOAL_SALT_2
# 355 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
# 195 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
# 356 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	releaseall
# 357 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	end
# 358 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"

# 359 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
ShoalCave_LowTideInnerRoom_EventScript_ShoalSalt2_2:
# 360 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
# 186 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
# 361 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	goto ShoalCave_LowTideInnerRoom_EventScript_ReceivedShoalSalt
# 362 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	goto ShoalCave_LowTideInnerRoom_EventScript_ShoalSalt2_1
# 363 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"

# 364 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
ShoalCave_LowTideInnerRoom_EventScript_ShoalSalt2_5:
# 365 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
# 190 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
# 366 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
# 367 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	goto ShoalCave_LowTideInnerRoom_EventScript_ShoalSalt2_4
