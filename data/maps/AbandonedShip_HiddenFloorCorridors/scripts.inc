# 1 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"

# 2 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
AbandonedShip_HiddenFloorCorridors_MapScripts::
# 3 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 2 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 4 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, AbandonedShip_HiddenFloorCorridors_OnResume
# 5 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 3 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 6 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, AbandonedShip_HiddenFloorCorridors_OnLoad
# 7 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	.byte 0
# 8 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"

# 9 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"

# 10 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
AbandonedShip_HiddenFloorCorridors_OnResume::
# 11 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 8 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 12 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	setdivewarp MAP_ABANDONED_SHIP_UNDERWATER1, 5, 4
# 13 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	end
# 14 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"

# 15 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"

# 16 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
AbandonedShip_HiddenFloorCorridors_OnLoad::
# 17 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 14 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 18 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	goto_if_unset FLAG_USED_ROOM_1_KEY, AbandonedShip_HiddenFloorCorridors_OnLoad_2
# 19 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
AbandonedShip_HiddenFloorCorridors_OnLoad_1:
# 20 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	return
# 21 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"

# 22 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
AbandonedShip_HiddenFloorCorridors_OnLoad_2:
# 23 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 15 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 24 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	goto AbandonedShip_HiddenFloorCorridors_OnLoad_1
# 25 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	goto AbandonedShip_HiddenFloorCorridors_OnLoad_1
# 26 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"

# 27 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"

# 28 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
AbandonedShip_HiddenFloorCorridors_OnLoad_1::
# 29 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 22 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 30 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	goto AbandonedShip_HiddenFloorCorridors_OnLoad_2
# 31 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	return
# 32 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"

# 33 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"

# 34 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
AbandonedShip_HiddenFloorCorridors_OnLoad_1::
# 35 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 28 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 36 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	goto_if_unset FLAG_USED_ROOM_2_KEY, AbandonedShip_HiddenFloorCorridors_OnLoad_1_2
# 37 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
AbandonedShip_HiddenFloorCorridors_OnLoad_1_1:
# 38 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	return
# 39 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"

# 40 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
AbandonedShip_HiddenFloorCorridors_OnLoad_1_2:
# 41 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 29 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 42 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	goto AbandonedShip_HiddenFloorCorridors_OnLoad_1_1
# 43 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	goto AbandonedShip_HiddenFloorCorridors_OnLoad_1_1
# 44 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"

# 45 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"

# 46 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
AbandonedShip_HiddenFloorCorridors_OnLoad_1_1::
# 47 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 36 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 48 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	goto AbandonedShip_HiddenFloorCorridors_OnLoad_5
# 49 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	return
# 50 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"

# 51 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"

# 52 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
AbandonedShip_HiddenFloorCorridors_OnLoad_4::
# 53 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 42 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 54 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	goto_if_unset FLAG_USED_ROOM_4_KEY, AbandonedShip_HiddenFloorCorridors_OnLoad_4_2
# 55 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
AbandonedShip_HiddenFloorCorridors_OnLoad_4_1:
# 56 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	return
# 57 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"

# 58 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
AbandonedShip_HiddenFloorCorridors_OnLoad_4_2:
# 59 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 43 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 60 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	goto AbandonedShip_HiddenFloorCorridors_OnLoad_4_1
# 61 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	goto AbandonedShip_HiddenFloorCorridors_OnLoad_4_1
# 62 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"

# 63 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"

# 64 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
AbandonedShip_HiddenFloorCorridors_OnLoad_4_1::
# 65 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 50 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 66 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	goto AbandonedShip_HiddenFloorCorridors_OnLoad_8
# 67 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	return
# 68 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"

# 69 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"

# 70 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
AbandonedShip_HiddenFloorCorridors_OnLoad_7::
# 71 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 56 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 72 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	goto_if_unset FLAG_USED_ROOM_6_KEY, AbandonedShip_HiddenFloorCorridors_OnLoad_7_2
# 73 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
AbandonedShip_HiddenFloorCorridors_OnLoad_7_1:
# 74 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	return
# 75 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"

# 76 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
AbandonedShip_HiddenFloorCorridors_OnLoad_7_2:
# 77 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 57 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 78 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	goto AbandonedShip_HiddenFloorCorridors_OnLoad_7_1
# 79 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	goto AbandonedShip_HiddenFloorCorridors_OnLoad_7_1
# 80 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"

# 81 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"

# 82 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
AbandonedShip_HiddenFloorCorridors_OnLoad_7_1::
# 83 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 64 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 84 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	goto AbandonedShip_HiddenFloorCorridors_OnLoad_11
# 85 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	return
# 86 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"

# 87 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"

# 88 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
AbandonedShip_HiddenFloorCorridors_OnLoad_10::
# 89 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 70 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 90 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	goto_if_set FLAG_USED_ROOM_1_KEY, AbandonedShip_HiddenFloorCorridors_OnLoad_10_2
# 91 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
AbandonedShip_HiddenFloorCorridors_OnLoad_10_1:
# 92 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	return
# 93 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"

# 94 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
AbandonedShip_HiddenFloorCorridors_OnLoad_10_2:
# 95 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 71 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 96 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	goto AbandonedShip_HiddenFloorCorridors_OnLoad_10_1
# 97 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	goto AbandonedShip_HiddenFloorCorridors_OnLoad_10_1
# 98 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"

# 99 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"

# 100 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
AbandonedShip_HiddenFloorCorridors_OnLoad_10_1::
# 101 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 78 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 102 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	goto AbandonedShip_HiddenFloorCorridors_OnLoad_14
# 103 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	return
# 104 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"

# 105 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"

# 106 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
AbandonedShip_HiddenFloorCorridors_OnLoad_13::
# 107 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 84 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 108 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	goto_if_set FLAG_USED_ROOM_2_KEY, AbandonedShip_HiddenFloorCorridors_OnLoad_13_2
# 109 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
AbandonedShip_HiddenFloorCorridors_OnLoad_13_1:
# 110 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	return
# 111 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"

# 112 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
AbandonedShip_HiddenFloorCorridors_OnLoad_13_2:
# 113 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 85 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 114 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	goto AbandonedShip_HiddenFloorCorridors_OnLoad_13_1
# 115 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	goto AbandonedShip_HiddenFloorCorridors_OnLoad_13_1
# 116 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"

# 117 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"

# 118 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
AbandonedShip_HiddenFloorCorridors_OnLoad_13_1::
# 119 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 92 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 120 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	goto AbandonedShip_HiddenFloorCorridors_OnLoad_17
# 121 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	return
# 122 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"

# 123 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"

# 124 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
AbandonedShip_HiddenFloorCorridors_OnLoad_16::
# 125 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 98 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 126 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	goto_if_set FLAG_USED_ROOM_4_KEY, AbandonedShip_HiddenFloorCorridors_OnLoad_16_2
# 127 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
AbandonedShip_HiddenFloorCorridors_OnLoad_16_1:
# 128 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	return
# 129 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"

# 130 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
AbandonedShip_HiddenFloorCorridors_OnLoad_16_2:
# 131 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 99 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 132 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	goto AbandonedShip_HiddenFloorCorridors_OnLoad_16_1
# 133 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	goto AbandonedShip_HiddenFloorCorridors_OnLoad_16_1
# 134 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"

# 135 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"

# 136 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
AbandonedShip_HiddenFloorCorridors_OnLoad_16_1::
# 137 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 106 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 138 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	goto AbandonedShip_HiddenFloorCorridors_OnLoad_20
# 139 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	return
# 140 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"

# 141 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"

# 142 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
AbandonedShip_HiddenFloorCorridors_OnLoad_19::
# 143 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 112 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 144 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	goto_if_set FLAG_USED_ROOM_6_KEY, AbandonedShip_HiddenFloorCorridors_OnLoad_19_2
# 145 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
AbandonedShip_HiddenFloorCorridors_OnLoad_19_1:
# 146 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	return
# 147 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"

# 148 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
AbandonedShip_HiddenFloorCorridors_OnLoad_19_2:
# 149 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 113 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 150 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	goto AbandonedShip_HiddenFloorCorridors_OnLoad_19_1
# 151 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	goto AbandonedShip_HiddenFloorCorridors_OnLoad_19_1
# 152 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"

# 153 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"

# 154 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
AbandonedShip_HiddenFloorCorridors_OnLoad_19_1::
# 155 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 120 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 156 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	goto AbandonedShip_HiddenFloorCorridors_OnLoad_23
# 157 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	return
# 158 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"

# 159 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"

# 160 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
AbandonedShip_HiddenFloorCorridors_OnLoad_22::
# 161 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	end
# 162 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"

# 163 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"

# 164 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
AbandonedShip_HiddenFloorCorridors_OnLoad_2::
# 165 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 130 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 166 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	call AbandonedShip_HiddenFloorCorridors_EventScript_LockRoom1
# 167 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 132 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 168 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	goto AbandonedShip_HiddenFloorCorridors_OnLoad_1
# 169 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	return
# 170 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"

# 171 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"

# 172 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
AbandonedShip_HiddenFloorCorridors_OnLoad_5::
# 173 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 138 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 174 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	call AbandonedShip_HiddenFloorCorridors_EventScript_LockRoom2
# 175 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 140 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 176 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	goto AbandonedShip_HiddenFloorCorridors_OnLoad_4
# 177 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	return
# 178 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"

# 179 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"

# 180 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
AbandonedShip_HiddenFloorCorridors_OnLoad_8::
# 181 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 146 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 182 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	call AbandonedShip_HiddenFloorCorridors_EventScript_LockRoom4
# 183 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 148 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 184 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	goto AbandonedShip_HiddenFloorCorridors_OnLoad_7
# 185 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	return
# 186 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"

# 187 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"

# 188 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
AbandonedShip_HiddenFloorCorridors_OnLoad_11::
# 189 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 154 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 190 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	call AbandonedShip_HiddenFloorCorridors_EventScript_LockRoom6
# 191 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 156 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 192 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	goto AbandonedShip_HiddenFloorCorridors_OnLoad_10
# 193 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	return
# 194 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"

# 195 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"

# 196 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
AbandonedShip_HiddenFloorCorridors_OnLoad_14::
# 197 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 162 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 198 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	call AbandonedShip_HiddenFloorCorridors_EventScript_UnlockRoom1
# 199 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 164 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 200 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	goto AbandonedShip_HiddenFloorCorridors_OnLoad_13
# 201 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	return
# 202 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"

# 203 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"

# 204 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
AbandonedShip_HiddenFloorCorridors_OnLoad_17::
# 205 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 170 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 206 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	call AbandonedShip_HiddenFloorCorridors_EventScript_UnlockRoom2
# 207 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 172 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 208 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	goto AbandonedShip_HiddenFloorCorridors_OnLoad_16
# 209 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	return
# 210 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"

# 211 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"

# 212 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
AbandonedShip_HiddenFloorCorridors_OnLoad_20::
# 213 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 178 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 214 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	call AbandonedShip_HiddenFloorCorridors_EventScript_UnlockRoom4
# 215 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 180 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 216 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	goto AbandonedShip_HiddenFloorCorridors_OnLoad_19
# 217 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	return
# 218 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"

# 219 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"

# 220 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
AbandonedShip_HiddenFloorCorridors_OnLoad_23::
# 221 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 186 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 222 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	call AbandonedShip_HiddenFloorCorridors_EventScript_UnlockRoom6
# 223 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 188 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 224 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	goto AbandonedShip_HiddenFloorCorridors_OnLoad_22
# 225 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	return
# 226 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"

# 227 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"

# 228 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
AbandonedShip_HiddenFloorCorridors_EventScript_UnlockRoom1::
# 229 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 194 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 230 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	setmetatile 3, 8, METATILE_InsideShip_IntactDoor_Bottom_Unlocked, TRUE
# 231 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	return
# 232 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"

# 233 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"

# 234 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
AbandonedShip_HiddenFloorCorridors_EventScript_UnlockRoom2::
# 235 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 200 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 236 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	setmetatile 6, 8, METATILE_InsideShip_IntactDoor_Bottom_Unlocked, TRUE
# 237 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	return
# 238 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"

# 239 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"

# 240 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
AbandonedShip_HiddenFloorCorridors_EventScript_UnlockRoom4::
# 241 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 206 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 242 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	setmetatile 3, 3, METATILE_InsideShip_DoorIndent_Unlocked, FALSE
# 243 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	return
# 244 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"

# 245 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"

# 246 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
AbandonedShip_HiddenFloorCorridors_EventScript_UnlockRoom6::
# 247 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 212 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 248 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	setmetatile 9, 3, METATILE_InsideShip_DoorIndent_Unlocked, FALSE
# 249 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	return
# 250 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"

# 251 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"

# 252 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
AbandonedShip_HiddenFloorCorridors_EventScript_LockRoom1::
# 253 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 218 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 254 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	setmetatile 3, 8, METATILE_InsideShip_IntactDoor_Bottom_Locked, TRUE
# 255 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	return
# 256 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"

# 257 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"

# 258 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
AbandonedShip_HiddenFloorCorridors_EventScript_LockRoom2::
# 259 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 224 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 260 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	setmetatile 6, 8, METATILE_InsideShip_IntactDoor_Bottom_Locked, TRUE
# 261 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	return
# 262 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"

# 263 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"

# 264 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
AbandonedShip_HiddenFloorCorridors_EventScript_LockRoom4::
# 265 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 230 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 266 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	setmetatile 3, 3, METATILE_InsideShip_DoorIndent_Locked, FALSE
# 267 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	return
# 268 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"

# 269 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"

# 270 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
AbandonedShip_HiddenFloorCorridors_EventScript_LockRoom6::
# 271 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 236 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 272 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	setmetatile 9, 3, METATILE_InsideShip_DoorIndent_Locked, FALSE
# 273 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	return
# 274 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"

# 275 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"

# 276 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
AbandonedShip_HiddenFloorCorridors_EventScript_Room1Door::
# 277 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 242 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 278 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	lockall
# 279 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 244 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 280 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	goto_if_set FLAG_USED_ROOM_1_KEY, AbandonedShip_HiddenFloorCorridors_EventScript_Room1Door_2
# 281 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
AbandonedShip_HiddenFloorCorridors_EventScript_Room1Door_1:
# 282 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	return
# 283 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"

# 284 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
AbandonedShip_HiddenFloorCorridors_EventScript_Room1Door_2:
# 285 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 245 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 286 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	goto AbandonedShip_HiddenFloorCorridors_EventScript_Room1Door_1
# 287 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	goto AbandonedShip_HiddenFloorCorridors_EventScript_Room1Door_1
# 288 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"

# 289 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"

# 290 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
AbandonedShip_HiddenFloorCorridors_EventScript_Room1Door_1::
# 291 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 252 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 292 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	goto AbandonedShip_HiddenFloorCorridors_EventScript_Room1Door_2
# 293 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	return
# 294 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"

# 295 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"

# 296 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
AbandonedShip_HiddenFloorCorridors_EventScript_Room1Door_1::
# 297 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 258 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 298 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	checkitem ITEM_KEY_TO_ROOM_1
# 299 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 260 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 300 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	compare VAR_RESULT, FALSE
# 301 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 262 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 302 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	goto_if_eq AbandonedShip_HiddenFloorCorridors_EventScript_Room1Door_5
# 303 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	return
# 304 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"

# 305 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"

# 306 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
AbandonedShip_HiddenFloorCorridors_EventScript_Room1Door_4::
# 307 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 268 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 308 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	msgbox AbandonedShip_HiddenFloorCorridors_Text_InsertedKey, MSGBOX_DEFAULT
# 309 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 270 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 310 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	playse SE_PIN
# 311 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 272 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 312 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	removeitem ITEM_KEY_TO_ROOM_1
# 313 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 274 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 314 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	setflag FLAG_USED_ROOM_1_KEY
# 315 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 276 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 316 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	call AbandonedShip_HiddenFloorCorridors_EventScript_UnlockRoom1
# 317 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 278 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 318 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	special DrawWholeMapView
# 319 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 280 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 320 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	releaseall
# 321 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	end
# 322 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"

# 323 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"

# 324 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
AbandonedShip_HiddenFloorCorridors_EventScript_Room1Door_2::
# 325 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 286 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 326 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	goto AbandonedShip_HiddenFloorCorridors_EventScript_TheDoorIsOpen
# 327 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 288 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 328 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	goto AbandonedShip_HiddenFloorCorridors_EventScript_Room1Door_1
# 329 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	return
# 330 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"

# 331 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"

# 332 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
AbandonedShip_HiddenFloorCorridors_EventScript_Room1Door_5::
# 333 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 294 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 334 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	goto AbandonedShip_HiddenFloorCorridors_EventScript_Rm1IsLocked
# 335 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 296 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 336 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	goto AbandonedShip_HiddenFloorCorridors_EventScript_Room1Door_4
# 337 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	return
# 338 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"

# 339 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"

# 340 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
AbandonedShip_HiddenFloorCorridors_EventScript_Room2Door::
# 341 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 302 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 342 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	lockall
# 343 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 304 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 344 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	goto_if_set FLAG_USED_ROOM_2_KEY, AbandonedShip_HiddenFloorCorridors_EventScript_Room2Door_2
# 345 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
AbandonedShip_HiddenFloorCorridors_EventScript_Room2Door_1:
# 346 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	return
# 347 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"

# 348 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
AbandonedShip_HiddenFloorCorridors_EventScript_Room2Door_2:
# 349 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 305 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 350 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	goto AbandonedShip_HiddenFloorCorridors_EventScript_Room2Door_1
# 351 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	goto AbandonedShip_HiddenFloorCorridors_EventScript_Room2Door_1
# 352 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"

# 353 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"

# 354 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
AbandonedShip_HiddenFloorCorridors_EventScript_Room2Door_1::
# 355 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 312 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 356 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	goto AbandonedShip_HiddenFloorCorridors_EventScript_Room2Door_2
# 357 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	return
# 358 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"

# 359 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"

# 360 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
AbandonedShip_HiddenFloorCorridors_EventScript_Room2Door_1::
# 361 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 318 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 362 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	checkitem ITEM_KEY_TO_ROOM_2
# 363 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 320 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 364 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	compare VAR_RESULT, FALSE
# 365 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 322 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 366 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	goto_if_eq AbandonedShip_HiddenFloorCorridors_EventScript_Room2Door_5
# 367 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	return
# 368 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"

# 369 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"

# 370 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
AbandonedShip_HiddenFloorCorridors_EventScript_Room2Door_4::
# 371 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 328 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 372 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	msgbox AbandonedShip_HiddenFloorCorridors_Text_InsertedKey, MSGBOX_DEFAULT
# 373 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 330 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 374 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	playse SE_PIN
# 375 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 332 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 376 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	removeitem ITEM_KEY_TO_ROOM_2
# 377 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 334 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 378 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	setflag FLAG_USED_ROOM_2_KEY
# 379 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 336 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 380 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	call AbandonedShip_HiddenFloorCorridors_EventScript_UnlockRoom2
# 381 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 338 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 382 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	special DrawWholeMapView
# 383 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 340 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 384 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	releaseall
# 385 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	end
# 386 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"

# 387 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"

# 388 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
AbandonedShip_HiddenFloorCorridors_EventScript_Room2Door_2::
# 389 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 346 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 390 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	goto AbandonedShip_HiddenFloorCorridors_EventScript_TheDoorIsOpen
# 391 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 348 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 392 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	goto AbandonedShip_HiddenFloorCorridors_EventScript_Room2Door_1
# 393 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	return
# 394 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"

# 395 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"

# 396 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
AbandonedShip_HiddenFloorCorridors_EventScript_Room2Door_5::
# 397 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 354 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 398 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	goto AbandonedShip_HiddenFloorCorridors_EventScript_Rm2IsLocked
# 399 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 356 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 400 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	goto AbandonedShip_HiddenFloorCorridors_EventScript_Room2Door_4
# 401 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	return
# 402 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"

# 403 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"

# 404 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
AbandonedShip_HiddenFloorCorridors_EventScript_Room4Door::
# 405 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 362 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 406 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	lockall
# 407 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 364 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 408 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	goto_if_set FLAG_USED_ROOM_4_KEY, AbandonedShip_HiddenFloorCorridors_EventScript_Room4Door_2
# 409 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
AbandonedShip_HiddenFloorCorridors_EventScript_Room4Door_1:
# 410 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	return
# 411 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"

# 412 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
AbandonedShip_HiddenFloorCorridors_EventScript_Room4Door_2:
# 413 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 365 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 414 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	goto AbandonedShip_HiddenFloorCorridors_EventScript_Room4Door_1
# 415 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	goto AbandonedShip_HiddenFloorCorridors_EventScript_Room4Door_1
# 416 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"

# 417 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"

# 418 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
AbandonedShip_HiddenFloorCorridors_EventScript_Room4Door_1::
# 419 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 372 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 420 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	goto AbandonedShip_HiddenFloorCorridors_EventScript_Room4Door_2
# 421 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	return
# 422 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"

# 423 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"

# 424 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
AbandonedShip_HiddenFloorCorridors_EventScript_Room4Door_1::
# 425 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 378 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 426 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	checkitem ITEM_KEY_TO_ROOM_4
# 427 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 380 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 428 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	compare VAR_RESULT, FALSE
# 429 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 382 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 430 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	goto_if_eq AbandonedShip_HiddenFloorCorridors_EventScript_Room4Door_5
# 431 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	return
# 432 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"

# 433 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"

# 434 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
AbandonedShip_HiddenFloorCorridors_EventScript_Room4Door_4::
# 435 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 388 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 436 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	msgbox AbandonedShip_HiddenFloorCorridors_Text_InsertedKey, MSGBOX_DEFAULT
# 437 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 390 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 438 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	playse SE_PIN
# 439 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 392 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 440 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	removeitem ITEM_KEY_TO_ROOM_4
# 441 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 394 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 442 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	setflag FLAG_USED_ROOM_4_KEY
# 443 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 396 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 444 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	call AbandonedShip_HiddenFloorCorridors_EventScript_UnlockRoom4
# 445 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 398 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 446 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	special DrawWholeMapView
# 447 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 400 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 448 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	releaseall
# 449 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	end
# 450 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"

# 451 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"

# 452 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
AbandonedShip_HiddenFloorCorridors_EventScript_Room4Door_2::
# 453 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 406 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 454 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	goto AbandonedShip_HiddenFloorCorridors_EventScript_TheDoorIsOpen
# 455 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 408 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 456 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	goto AbandonedShip_HiddenFloorCorridors_EventScript_Room4Door_1
# 457 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	return
# 458 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"

# 459 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"

# 460 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
AbandonedShip_HiddenFloorCorridors_EventScript_Room4Door_5::
# 461 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 414 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 462 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	goto AbandonedShip_HiddenFloorCorridors_EventScript_Rm4IsLocked
# 463 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 416 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 464 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	goto AbandonedShip_HiddenFloorCorridors_EventScript_Room4Door_4
# 465 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	return
# 466 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"

# 467 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"

# 468 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
AbandonedShip_HiddenFloorCorridors_EventScript_Room6Door::
# 469 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 422 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 470 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	lockall
# 471 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 424 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 472 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	goto_if_set FLAG_USED_ROOM_6_KEY, AbandonedShip_HiddenFloorCorridors_EventScript_Room6Door_2
# 473 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
AbandonedShip_HiddenFloorCorridors_EventScript_Room6Door_1:
# 474 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	return
# 475 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"

# 476 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
AbandonedShip_HiddenFloorCorridors_EventScript_Room6Door_2:
# 477 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 425 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 478 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	goto AbandonedShip_HiddenFloorCorridors_EventScript_Room6Door_1
# 479 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	goto AbandonedShip_HiddenFloorCorridors_EventScript_Room6Door_1
# 480 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"

# 481 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"

# 482 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
AbandonedShip_HiddenFloorCorridors_EventScript_Room6Door_1::
# 483 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 432 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 484 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	goto AbandonedShip_HiddenFloorCorridors_EventScript_Room6Door_2
# 485 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	return
# 486 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"

# 487 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"

# 488 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
AbandonedShip_HiddenFloorCorridors_EventScript_Room6Door_1::
# 489 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 438 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 490 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	checkitem ITEM_KEY_TO_ROOM_6
# 491 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 440 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 492 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	compare VAR_RESULT, FALSE
# 493 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 442 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 494 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	goto_if_eq AbandonedShip_HiddenFloorCorridors_EventScript_Room6Door_5
# 495 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	return
# 496 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"

# 497 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"

# 498 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
AbandonedShip_HiddenFloorCorridors_EventScript_Room6Door_4::
# 499 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 448 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 500 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	msgbox AbandonedShip_HiddenFloorCorridors_Text_InsertedKey, MSGBOX_DEFAULT
# 501 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 450 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 502 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	playse SE_PIN
# 503 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 452 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 504 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	removeitem ITEM_KEY_TO_ROOM_6
# 505 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 454 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 506 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	setflag FLAG_USED_ROOM_6_KEY
# 507 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 456 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 508 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	call AbandonedShip_HiddenFloorCorridors_EventScript_UnlockRoom6
# 509 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 458 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 510 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	special DrawWholeMapView
# 511 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 460 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 512 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	releaseall
# 513 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	end
# 514 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"

# 515 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"

# 516 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
AbandonedShip_HiddenFloorCorridors_EventScript_Room6Door_2::
# 517 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 466 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 518 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	goto AbandonedShip_HiddenFloorCorridors_EventScript_TheDoorIsOpen
# 519 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 468 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 520 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	goto AbandonedShip_HiddenFloorCorridors_EventScript_Room6Door_1
# 521 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	return
# 522 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"

# 523 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"

# 524 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
AbandonedShip_HiddenFloorCorridors_EventScript_Room6Door_5::
# 525 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 474 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 526 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	goto AbandonedShip_HiddenFloorCorridors_EventScript_Rm6IsLocked
# 527 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 476 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 528 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	goto AbandonedShip_HiddenFloorCorridors_EventScript_Room6Door_4
# 529 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	return
# 530 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"

# 531 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"

# 532 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
AbandonedShip_HiddenFloorCorridors_EventScript_Rm1IsLocked::
# 533 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 482 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 534 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	msgbox AbandonedShip_HiddenFloorCorridors_Text_Rm1DoorIsLocked, MSGBOX_DEFAULT
# 535 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 484 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 536 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	releaseall
# 537 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	end
# 538 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"

# 539 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"

# 540 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
AbandonedShip_HiddenFloorCorridors_EventScript_Rm2IsLocked::
# 541 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 490 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 542 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	msgbox AbandonedShip_HiddenFloorCorridors_Text_Rm2DoorIsLocked, MSGBOX_DEFAULT
# 543 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 492 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 544 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	releaseall
# 545 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	end
# 546 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"

# 547 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"

# 548 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
AbandonedShip_HiddenFloorCorridors_EventScript_Rm4IsLocked::
# 549 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 498 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 550 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	msgbox AbandonedShip_HiddenFloorCorridors_Text_Rm4DoorIsLocked, MSGBOX_DEFAULT
# 551 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 500 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 552 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	releaseall
# 553 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	end
# 554 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"

# 555 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"

# 556 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
AbandonedShip_HiddenFloorCorridors_EventScript_Rm6IsLocked::
# 557 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 506 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 558 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	msgbox AbandonedShip_HiddenFloorCorridors_Text_Rm6DoorIsLocked, MSGBOX_DEFAULT
# 559 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 508 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 560 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	releaseall
# 561 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	end
# 562 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"

# 563 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"

# 564 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
AbandonedShip_HiddenFloorCorridors_EventScript_TheDoorIsOpen::
# 565 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 514 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 566 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	msgbox AbandonedShip_Text_TheDoorIsOpen, MSGBOX_DEFAULT
# 567 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 516 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 568 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	releaseall
# 569 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	end
# 570 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"

# 571 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"

# 572 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
AbandonedShip_HiddenFloorCorridors_Text_Rm1DoorIsLocked::
# 573 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 520 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 574 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	.string "The door is locked.\p"
# 575 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	.string "“RM. 1” is painted on the door.$"
# 576 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"

# 577 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
AbandonedShip_HiddenFloorCorridors_Text_Rm2DoorIsLocked::
# 578 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 525 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 579 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	.string "The door is locked.\p"
# 580 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	.string "“RM. 2” is painted on the door.$"
# 581 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"

# 582 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
AbandonedShip_HiddenFloorCorridors_Text_Rm4DoorIsLocked::
# 583 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 530 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 584 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	.string "The door is locked.\p"
# 585 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	.string "“RM. 4” is painted on the door.$"
# 586 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"

# 587 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
AbandonedShip_HiddenFloorCorridors_Text_Rm6DoorIsLocked::
# 588 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 535 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 589 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	.string "The door is locked.\p"
# 590 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	.string "“RM. 6” is painted on the door.$"
# 591 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"

# 592 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
AbandonedShip_HiddenFloorCorridors_Text_InsertedKey::
# 593 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 540 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
# 594 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	.string "{PLAYER} inserted and turned the\n"
# 595 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	.string "KEY.\p"
# 596 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	.string "The inserted KEY stuck fast,\n"
# 597 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	.string "but the door opened.$"
