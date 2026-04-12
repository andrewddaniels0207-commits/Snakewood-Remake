# 1 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"

# 2 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
LilycoveCity_DepartmentStore_5F_MapScripts::
# 3 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
# 2 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
# 4 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, LilycoveCity_DepartmentStore_5F_OnWarp
# 5 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.byte 0
# 6 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"

# 7 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"

# 8 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
# 5 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
# 9 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"

# 10 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
# 6 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
# 11 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
LilycoveCity_DepartmentStore_5F_OnWarp:
# 12 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
# 7 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
# 13 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	map_script_2 VAR_SOOTOPOLIS_CITY_STATE, 1, LilycoveCity_DepartmentStore_5F_EventScript_BlockRoofStairs
# 14 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
# 8 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
# 15 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	map_script_2 VAR_SOOTOPOLIS_CITY_STATE, 2, LilycoveCity_DepartmentStore_5F_EventScript_BlockRoofStairs
# 16 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
# 9 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
# 17 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	map_script_2 VAR_SOOTOPOLIS_CITY_STATE, 3, LilycoveCity_DepartmentStore_5F_EventScript_BlockRoofStairs
# 18 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
# 10 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
# 19 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte 0
# 20 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"

# 21 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
LilycoveCity_DepartmentStore_5F_EventScript_BlockRoofStairs::
# 22 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
# 15 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
# 23 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	setobjectxy LOCALID_DEPARTMENT_STORE_STAIRS_WOMAN, 16, 2
# 24 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
# 16 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
# 25 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	turnobject LOCALID_DEPARTMENT_STORE_STAIRS_WOMAN, DIR_NORTH
# 26 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	end
# 27 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"

# 28 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"

# 29 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
LilycoveCity_DepartmentStore_5F_EventScript_ClerkFarLeft::
# 30 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
# 21 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
# 31 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	lock
# 32 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
# 22 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
# 33 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	faceplayer
# 34 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
# 23 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
# 35 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	message gText_HowMayIServeYou
# 36 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
# 24 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
# 37 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	waitmessage
# 38 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
# 25 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
# 39 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	pokemartdecoration2 LilycoveCity_DepartmentStore_5F_Pokemart_Dolls
# 40 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
# 26 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
# 41 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 42 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
# 27 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
# 43 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	release
# 44 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	end
# 45 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"

# 46 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"

# 47 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
LilycoveCity_DepartmentStore_5F_Pokemart_Dolls::
# 48 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
# 32 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
# 49 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	pokemartlistend
# 50 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	return
# 51 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"

# 52 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"

# 53 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
LilycoveCity_DepartmentStore_5F_EventScript_ClerkMidLeft::
# 54 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
# 36 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
# 55 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	lock
# 56 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
# 37 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
# 57 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	faceplayer
# 58 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
# 38 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
# 59 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	message gText_HowMayIServeYou
# 60 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
# 39 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
# 61 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	waitmessage
# 62 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
# 40 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
# 63 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	pokemartdecoration2 LilycoveCity_DepartmentStore_5F_Pokemart_Cushions
# 64 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
# 41 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
# 65 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 66 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
# 42 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
# 67 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	release
# 68 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	end
# 69 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"

# 70 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"

# 71 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
LilycoveCity_DepartmentStore_5F_Pokemart_Cushions::
# 72 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
# 47 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
# 73 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	pokemartlistend
# 74 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	return
# 75 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"

# 76 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"

# 77 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
LilycoveCity_DepartmentStore_5F_EventScript_ClerkMidRight::
# 78 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
# 51 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
# 79 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	lock
# 80 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
# 52 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
# 81 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	faceplayer
# 82 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
# 53 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
# 83 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	message gText_HowMayIServeYou
# 84 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
# 54 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
# 85 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	waitmessage
# 86 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
# 55 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
# 87 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	pokemartdecoration2 LilycoveCity_DepartmentStore_5F_Pokemart_Posters
# 88 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
# 56 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
# 89 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 90 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
# 57 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
# 91 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	release
# 92 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	end
# 93 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"

# 94 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"

# 95 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
LilycoveCity_DepartmentStore_5F_Pokemart_Posters::
# 96 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
# 62 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
# 97 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	pokemartlistend
# 98 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	return
# 99 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"

# 100 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"

# 101 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
LilycoveCity_DepartmentStore_5F_EventScript_ClerkFarRight::
# 102 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
# 66 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
# 103 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	lock
# 104 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
# 67 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
# 105 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	faceplayer
# 106 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
# 68 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
# 107 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	message gText_HowMayIServeYou
# 108 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
# 69 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
# 109 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	waitmessage
# 110 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
# 70 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
# 111 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	pokemartdecoration2 LilycoveCity_DepartmentStore_5F_Pokemart_Mats
# 112 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
# 71 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
# 113 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 114 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
# 72 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
# 115 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	release
# 116 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	end
# 117 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"

# 118 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"

# 119 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
LilycoveCity_DepartmentStore_5F_Pokemart_Mats::
# 120 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
# 77 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
# 121 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	pokemartlistend
# 122 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	return
# 123 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"

# 124 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"

# 125 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
LilycoveCity_DepartmentStore_5F_EventScript_PokefanF::
# 126 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
# 81 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
# 127 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_5F_Text_PlaceFullOfCuteDolls, MSGBOX_NPC
# 128 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	end
# 129 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"

# 130 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"

# 131 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
LilycoveCity_DepartmentStore_5F_EventScript_Woman::
# 132 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
# 86 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
# 133 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	lockall
# 134 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
# 87 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
# 135 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	applymovement LOCALID_DEPARTMENT_STORE_STAIRS_WOMAN, Common_Movement_FacePlayer
# 136 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
# 88 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
# 137 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	waitmovement 0
# 138 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
# 89 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
# 139 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	compare VAR_SOOTOPOLIS_CITY_STATE, 0
# 140 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	goto_if_eq LilycoveCity_DepartmentStore_5F_EventScript_Woman_2
# 141 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
LilycoveCity_DepartmentStore_5F_EventScript_Woman_1:
# 142 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
# 92 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
# 143 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	compare VAR_SOOTOPOLIS_CITY_STATE, 4
# 144 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	goto_if_ge LilycoveCity_DepartmentStore_5F_EventScript_Woman_5
# 145 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
LilycoveCity_DepartmentStore_5F_EventScript_Woman_4:
# 146 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
# 95 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
# 147 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	goto LilycoveCity_DepartmentStore_5F_EventScript_WomanLegendaryWeather
# 148 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	end
# 149 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"

# 150 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
LilycoveCity_DepartmentStore_5F_EventScript_Woman_2:
# 151 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
# 90 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
# 152 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	goto LilycoveCity_DepartmentStore_5F_EventScript_WomanNormal
# 153 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	goto LilycoveCity_DepartmentStore_5F_EventScript_Woman_1
# 154 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"

# 155 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
LilycoveCity_DepartmentStore_5F_EventScript_Woman_5:
# 156 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
# 93 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
# 157 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	goto LilycoveCity_DepartmentStore_5F_EventScript_WomanNormal
# 158 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	goto LilycoveCity_DepartmentStore_5F_EventScript_Woman_4
# 159 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"

# 160 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"

# 161 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
LilycoveCity_DepartmentStore_5F_EventScript_WomanNormal::
# 162 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
# 100 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
# 163 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_5F_Text_SellManyCuteMatsHere, MSGBOX_DEFAULT
# 164 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
# 101 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
# 165 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	closemessage
# 166 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
# 102 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
# 167 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	releaseall
# 168 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	end
# 169 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"

# 170 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"

# 171 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
LilycoveCity_DepartmentStore_5F_EventScript_WomanLegendaryWeather::
# 172 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
# 107 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
# 173 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_5F_Text_ClosedRooftopForWeather, MSGBOX_DEFAULT
# 174 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
# 108 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
# 175 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	closemessage
# 176 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
# 109 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
# 177 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	applymovement LOCALID_DEPARTMENT_STORE_STAIRS_WOMAN, Common_Movement_WalkInPlaceFasterUp
# 178 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
# 110 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
# 179 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	waitmovement 0
# 180 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
# 111 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
# 181 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	releaseall
# 182 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	end
# 183 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"

# 184 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"

# 185 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
LilycoveCity_DepartmentStore_5F_EventScript_LittleGirl::
# 186 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
# 116 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
# 187 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_5F_Text_GettingDollInsteadOfPokemon, MSGBOX_NPC
# 188 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	end
# 189 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"

# 190 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"

# 191 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
LilycoveCity_DepartmentStore_5F_Text_PlaceFullOfCuteDolls::
# 192 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
# 120 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
# 193 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.string "This place is full of cute DOLLS.\p"
# 194 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.string "I should buy some for me, instead of\n"
# 195 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.string "just for my children.$"
# 196 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"

# 197 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
LilycoveCity_DepartmentStore_5F_Text_GettingDollInsteadOfPokemon::
# 198 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
# 126 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
# 199 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.string "I'm not big enough to raise POKéMON,\n"
# 200 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.string "so I'm getting a cute DOLL instead.$"
# 201 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"

# 202 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
LilycoveCity_DepartmentStore_5F_Text_SellManyCuteMatsHere::
# 203 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
# 131 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
# 204 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.string "They sell many cute MATS here.\p"
# 205 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.string "I wonder which one I should get?\n"
# 206 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.string "Maybe I'll buy them all…$"
# 207 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"

# 208 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
LilycoveCity_DepartmentStore_5F_Text_ClosedRooftopForWeather::
# 209 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
# 137 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
# 210 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.string "I think they closed the rooftop\n"
# 211 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.string "because the weather is wild today.$"
