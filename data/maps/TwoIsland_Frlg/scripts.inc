# 1 "data/maps/TwoIsland_Frlg/scripts.pory"

# 2 "data/maps/TwoIsland_Frlg/scripts.pory"
TwoIsland_Frlg_MapScripts::
# 3 "data/maps/TwoIsland_Frlg/scripts.pory"
# 2 "data/maps/TwoIsland_Frlg/scripts.pory"
# 4 "data/maps/TwoIsland_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, TwoIsland_OnTransition
# 5 "data/maps/TwoIsland_Frlg/scripts.pory"
	.byte 0
# 6 "data/maps/TwoIsland_Frlg/scripts.pory"

# 7 "data/maps/TwoIsland_Frlg/scripts.pory"

# 8 "data/maps/TwoIsland_Frlg/scripts.pory"
TwoIsland_OnTransition::
# 9 "data/maps/TwoIsland_Frlg/scripts.pory"
# 6 "data/maps/TwoIsland_Frlg/scripts.pory"
# 10 "data/maps/TwoIsland_Frlg/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_TWO_ISLAND
# 11 "data/maps/TwoIsland_Frlg/scripts.pory"
# 7 "data/maps/TwoIsland_Frlg/scripts.pory"
# 12 "data/maps/TwoIsland_Frlg/scripts.pory"
	setflag FLAG_VISITED_TWO_ISLAND
# 13 "data/maps/TwoIsland_Frlg/scripts.pory"
# 8 "data/maps/TwoIsland_Frlg/scripts.pory"
# 14 "data/maps/TwoIsland_Frlg/scripts.pory"
	call TwoIsland_EventScript_SetShopState
# 15 "data/maps/TwoIsland_Frlg/scripts.pory"
	end
# 16 "data/maps/TwoIsland_Frlg/scripts.pory"

# 17 "data/maps/TwoIsland_Frlg/scripts.pory"

# 18 "data/maps/TwoIsland_Frlg/scripts.pory"
TwoIsland_EventScript_SetShopState::
# 19 "data/maps/TwoIsland_Frlg/scripts.pory"
# 13 "data/maps/TwoIsland_Frlg/scripts.pory"
# 20 "data/maps/TwoIsland_Frlg/scripts.pory"
	goto_if_set FLAG_IS_CHAMPION, TwoIsland_EventScript_SetShopState_2
# 21 "data/maps/TwoIsland_Frlg/scripts.pory"
TwoIsland_EventScript_SetShopState_1:
# 22 "data/maps/TwoIsland_Frlg/scripts.pory"
# 16 "data/maps/TwoIsland_Frlg/scripts.pory"
# 23 "data/maps/TwoIsland_Frlg/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, TwoIsland_EventScript_SetShopState_5
# 24 "data/maps/TwoIsland_Frlg/scripts.pory"
TwoIsland_EventScript_SetShopState_4:
# 25 "data/maps/TwoIsland_Frlg/scripts.pory"
# 19 "data/maps/TwoIsland_Frlg/scripts.pory"
# 26 "data/maps/TwoIsland_Frlg/scripts.pory"
	goto_if_set FLAG_RESCUED_LOSTELLE, TwoIsland_EventScript_SetShopState_8
# 27 "data/maps/TwoIsland_Frlg/scripts.pory"
TwoIsland_EventScript_SetShopState_7:
# 28 "data/maps/TwoIsland_Frlg/scripts.pory"
# 22 "data/maps/TwoIsland_Frlg/scripts.pory"
# 29 "data/maps/TwoIsland_Frlg/scripts.pory"
	goto TwoIsland_EventScript_SetShopStateDefault
# 30 "data/maps/TwoIsland_Frlg/scripts.pory"
	end
# 31 "data/maps/TwoIsland_Frlg/scripts.pory"

# 32 "data/maps/TwoIsland_Frlg/scripts.pory"
TwoIsland_EventScript_SetShopState_2:
# 33 "data/maps/TwoIsland_Frlg/scripts.pory"
# 14 "data/maps/TwoIsland_Frlg/scripts.pory"
# 34 "data/maps/TwoIsland_Frlg/scripts.pory"
	goto TwoIsland_EventScript_SetShopStateAfterHoennLink
# 35 "data/maps/TwoIsland_Frlg/scripts.pory"
	goto TwoIsland_EventScript_SetShopState_1
# 36 "data/maps/TwoIsland_Frlg/scripts.pory"

# 37 "data/maps/TwoIsland_Frlg/scripts.pory"
TwoIsland_EventScript_SetShopState_5:
# 38 "data/maps/TwoIsland_Frlg/scripts.pory"
# 17 "data/maps/TwoIsland_Frlg/scripts.pory"
# 39 "data/maps/TwoIsland_Frlg/scripts.pory"
	goto TwoIsland_EventScript_SetShopStateAfterChampion
# 40 "data/maps/TwoIsland_Frlg/scripts.pory"
	goto TwoIsland_EventScript_SetShopState_4
# 41 "data/maps/TwoIsland_Frlg/scripts.pory"

# 42 "data/maps/TwoIsland_Frlg/scripts.pory"
TwoIsland_EventScript_SetShopState_8:
# 43 "data/maps/TwoIsland_Frlg/scripts.pory"
# 20 "data/maps/TwoIsland_Frlg/scripts.pory"
# 44 "data/maps/TwoIsland_Frlg/scripts.pory"
	goto TwoIsland_EventScript_SetShopStateAfterLostelleRescue
# 45 "data/maps/TwoIsland_Frlg/scripts.pory"
	goto TwoIsland_EventScript_SetShopState_7
# 46 "data/maps/TwoIsland_Frlg/scripts.pory"

# 47 "data/maps/TwoIsland_Frlg/scripts.pory"

# 48 "data/maps/TwoIsland_Frlg/scripts.pory"
TwoIsland_EventScript_SetShopStateAfterHoennLink::
# 49 "data/maps/TwoIsland_Frlg/scripts.pory"
# 27 "data/maps/TwoIsland_Frlg/scripts.pory"
# 50 "data/maps/TwoIsland_Frlg/scripts.pory"
	goto_if_unset FLAG_TWO_ISLAND_SHOP_INTRODUCED, TwoIsland_EventScript_SetShopStateAfterHoennLink_2
# 51 "data/maps/TwoIsland_Frlg/scripts.pory"
TwoIsland_EventScript_SetShopStateAfterHoennLink_1:
# 52 "data/maps/TwoIsland_Frlg/scripts.pory"
# 30 "data/maps/TwoIsland_Frlg/scripts.pory"
# 53 "data/maps/TwoIsland_Frlg/scripts.pory"
	goto_if_unset FLAG_TWO_ISLAND_SHOP_EXPANDED_1, TwoIsland_EventScript_SetShopStateAfterHoennLink_5
# 54 "data/maps/TwoIsland_Frlg/scripts.pory"
TwoIsland_EventScript_SetShopStateAfterHoennLink_4:
# 55 "data/maps/TwoIsland_Frlg/scripts.pory"
# 33 "data/maps/TwoIsland_Frlg/scripts.pory"
# 56 "data/maps/TwoIsland_Frlg/scripts.pory"
	goto_if_unset FLAG_TWO_ISLAND_SHOP_EXPANDED_2, TwoIsland_EventScript_SetShopStateAfterHoennLink_8
# 57 "data/maps/TwoIsland_Frlg/scripts.pory"
TwoIsland_EventScript_SetShopStateAfterHoennLink_7:
# 58 "data/maps/TwoIsland_Frlg/scripts.pory"
# 36 "data/maps/TwoIsland_Frlg/scripts.pory"
# 59 "data/maps/TwoIsland_Frlg/scripts.pory"
	goto TwoIsland_EventScript_SetShopExpanded3
# 60 "data/maps/TwoIsland_Frlg/scripts.pory"
	end
# 61 "data/maps/TwoIsland_Frlg/scripts.pory"

# 62 "data/maps/TwoIsland_Frlg/scripts.pory"
TwoIsland_EventScript_SetShopStateAfterHoennLink_2:
# 63 "data/maps/TwoIsland_Frlg/scripts.pory"
# 28 "data/maps/TwoIsland_Frlg/scripts.pory"
# 64 "data/maps/TwoIsland_Frlg/scripts.pory"
	goto TwoIsland_EventScript_SetShopInitial
# 65 "data/maps/TwoIsland_Frlg/scripts.pory"
	goto TwoIsland_EventScript_SetShopStateAfterHoennLink_1
# 66 "data/maps/TwoIsland_Frlg/scripts.pory"

# 67 "data/maps/TwoIsland_Frlg/scripts.pory"
TwoIsland_EventScript_SetShopStateAfterHoennLink_5:
# 68 "data/maps/TwoIsland_Frlg/scripts.pory"
# 31 "data/maps/TwoIsland_Frlg/scripts.pory"
# 69 "data/maps/TwoIsland_Frlg/scripts.pory"
	goto TwoIsland_EventScript_SetShopExpanded1
# 70 "data/maps/TwoIsland_Frlg/scripts.pory"
	goto TwoIsland_EventScript_SetShopStateAfterHoennLink_4
# 71 "data/maps/TwoIsland_Frlg/scripts.pory"

# 72 "data/maps/TwoIsland_Frlg/scripts.pory"
TwoIsland_EventScript_SetShopStateAfterHoennLink_8:
# 73 "data/maps/TwoIsland_Frlg/scripts.pory"
# 34 "data/maps/TwoIsland_Frlg/scripts.pory"
# 74 "data/maps/TwoIsland_Frlg/scripts.pory"
	goto TwoIsland_EventScript_SetShopExpanded2
# 75 "data/maps/TwoIsland_Frlg/scripts.pory"
	goto TwoIsland_EventScript_SetShopStateAfterHoennLink_7
# 76 "data/maps/TwoIsland_Frlg/scripts.pory"

# 77 "data/maps/TwoIsland_Frlg/scripts.pory"

# 78 "data/maps/TwoIsland_Frlg/scripts.pory"
TwoIsland_EventScript_SetShopStateAfterChampion::
# 79 "data/maps/TwoIsland_Frlg/scripts.pory"
# 41 "data/maps/TwoIsland_Frlg/scripts.pory"
# 80 "data/maps/TwoIsland_Frlg/scripts.pory"
	goto_if_unset FLAG_TWO_ISLAND_SHOP_INTRODUCED, TwoIsland_EventScript_SetShopStateAfterChampion_2
# 81 "data/maps/TwoIsland_Frlg/scripts.pory"
TwoIsland_EventScript_SetShopStateAfterChampion_1:
# 82 "data/maps/TwoIsland_Frlg/scripts.pory"
# 44 "data/maps/TwoIsland_Frlg/scripts.pory"
# 83 "data/maps/TwoIsland_Frlg/scripts.pory"
	goto_if_unset FLAG_RESCUED_LOSTELLE, TwoIsland_EventScript_SetShopStateAfterChampion_5
# 84 "data/maps/TwoIsland_Frlg/scripts.pory"
TwoIsland_EventScript_SetShopStateAfterChampion_4:
# 85 "data/maps/TwoIsland_Frlg/scripts.pory"
# 47 "data/maps/TwoIsland_Frlg/scripts.pory"
# 86 "data/maps/TwoIsland_Frlg/scripts.pory"
	goto_if_unset FLAG_TWO_ISLAND_SHOP_EXPANDED_1, TwoIsland_EventScript_SetShopStateAfterChampion_8
# 87 "data/maps/TwoIsland_Frlg/scripts.pory"
TwoIsland_EventScript_SetShopStateAfterChampion_7:
# 88 "data/maps/TwoIsland_Frlg/scripts.pory"
# 50 "data/maps/TwoIsland_Frlg/scripts.pory"
# 89 "data/maps/TwoIsland_Frlg/scripts.pory"
	goto TwoIsland_EventScript_SetShopExpanded2
# 90 "data/maps/TwoIsland_Frlg/scripts.pory"
	end
# 91 "data/maps/TwoIsland_Frlg/scripts.pory"

# 92 "data/maps/TwoIsland_Frlg/scripts.pory"
TwoIsland_EventScript_SetShopStateAfterChampion_2:
# 93 "data/maps/TwoIsland_Frlg/scripts.pory"
# 42 "data/maps/TwoIsland_Frlg/scripts.pory"
# 94 "data/maps/TwoIsland_Frlg/scripts.pory"
	goto TwoIsland_EventScript_SetShopInitial
# 95 "data/maps/TwoIsland_Frlg/scripts.pory"
	goto TwoIsland_EventScript_SetShopStateAfterChampion_1
# 96 "data/maps/TwoIsland_Frlg/scripts.pory"

# 97 "data/maps/TwoIsland_Frlg/scripts.pory"
TwoIsland_EventScript_SetShopStateAfterChampion_5:
# 98 "data/maps/TwoIsland_Frlg/scripts.pory"
# 45 "data/maps/TwoIsland_Frlg/scripts.pory"
# 99 "data/maps/TwoIsland_Frlg/scripts.pory"
	goto TwoIsland_EventScript_SetShopInitial
# 100 "data/maps/TwoIsland_Frlg/scripts.pory"
	goto TwoIsland_EventScript_SetShopStateAfterChampion_4
# 101 "data/maps/TwoIsland_Frlg/scripts.pory"

# 102 "data/maps/TwoIsland_Frlg/scripts.pory"
TwoIsland_EventScript_SetShopStateAfterChampion_8:
# 103 "data/maps/TwoIsland_Frlg/scripts.pory"
# 48 "data/maps/TwoIsland_Frlg/scripts.pory"
# 104 "data/maps/TwoIsland_Frlg/scripts.pory"
	goto TwoIsland_EventScript_SetShopExpanded1
# 105 "data/maps/TwoIsland_Frlg/scripts.pory"
	goto TwoIsland_EventScript_SetShopStateAfterChampion_7
# 106 "data/maps/TwoIsland_Frlg/scripts.pory"

# 107 "data/maps/TwoIsland_Frlg/scripts.pory"

# 108 "data/maps/TwoIsland_Frlg/scripts.pory"
TwoIsland_EventScript_SetShopStateAfterLostelleRescue::
# 109 "data/maps/TwoIsland_Frlg/scripts.pory"
# 55 "data/maps/TwoIsland_Frlg/scripts.pory"
# 110 "data/maps/TwoIsland_Frlg/scripts.pory"
	goto_if_unset FLAG_TWO_ISLAND_SHOP_INTRODUCED, TwoIsland_EventScript_SetShopStateAfterLostelleRescue_2
# 111 "data/maps/TwoIsland_Frlg/scripts.pory"
TwoIsland_EventScript_SetShopStateAfterLostelleRescue_1:
# 112 "data/maps/TwoIsland_Frlg/scripts.pory"
# 58 "data/maps/TwoIsland_Frlg/scripts.pory"
# 113 "data/maps/TwoIsland_Frlg/scripts.pory"
	goto TwoIsland_EventScript_SetShopExpanded1
# 114 "data/maps/TwoIsland_Frlg/scripts.pory"
	end
# 115 "data/maps/TwoIsland_Frlg/scripts.pory"

# 116 "data/maps/TwoIsland_Frlg/scripts.pory"
TwoIsland_EventScript_SetShopStateAfterLostelleRescue_2:
# 117 "data/maps/TwoIsland_Frlg/scripts.pory"
# 56 "data/maps/TwoIsland_Frlg/scripts.pory"
# 118 "data/maps/TwoIsland_Frlg/scripts.pory"
	goto TwoIsland_EventScript_SetShopInitial
# 119 "data/maps/TwoIsland_Frlg/scripts.pory"
	goto TwoIsland_EventScript_SetShopStateAfterLostelleRescue_1
# 120 "data/maps/TwoIsland_Frlg/scripts.pory"

# 121 "data/maps/TwoIsland_Frlg/scripts.pory"

# 122 "data/maps/TwoIsland_Frlg/scripts.pory"
TwoIsland_EventScript_SetShopStateDefault::
# 123 "data/maps/TwoIsland_Frlg/scripts.pory"
# 63 "data/maps/TwoIsland_Frlg/scripts.pory"
# 124 "data/maps/TwoIsland_Frlg/scripts.pory"
	goto TwoIsland_EventScript_SetShopInitial
# 125 "data/maps/TwoIsland_Frlg/scripts.pory"
	end
# 126 "data/maps/TwoIsland_Frlg/scripts.pory"

# 127 "data/maps/TwoIsland_Frlg/scripts.pory"

# 128 "data/maps/TwoIsland_Frlg/scripts.pory"
TwoIsland_EventScript_SetShopInitial::
# 129 "data/maps/TwoIsland_Frlg/scripts.pory"
# 68 "data/maps/TwoIsland_Frlg/scripts.pory"
# 130 "data/maps/TwoIsland_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_TWO_ISLAND, 1
# 131 "data/maps/TwoIsland_Frlg/scripts.pory"
	return
# 132 "data/maps/TwoIsland_Frlg/scripts.pory"

# 133 "data/maps/TwoIsland_Frlg/scripts.pory"

# 134 "data/maps/TwoIsland_Frlg/scripts.pory"
TwoIsland_EventScript_SetShopExpanded1::
# 135 "data/maps/TwoIsland_Frlg/scripts.pory"
# 73 "data/maps/TwoIsland_Frlg/scripts.pory"
# 136 "data/maps/TwoIsland_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_TWO_ISLAND, 2
# 137 "data/maps/TwoIsland_Frlg/scripts.pory"
# 74 "data/maps/TwoIsland_Frlg/scripts.pory"
# 138 "data/maps/TwoIsland_Frlg/scripts.pory"
	clearflag FLAG_HIDE_TWO_ISLAND_WOMAN
# 139 "data/maps/TwoIsland_Frlg/scripts.pory"
	return
# 140 "data/maps/TwoIsland_Frlg/scripts.pory"

# 141 "data/maps/TwoIsland_Frlg/scripts.pory"

# 142 "data/maps/TwoIsland_Frlg/scripts.pory"
TwoIsland_EventScript_SetShopExpanded2::
# 143 "data/maps/TwoIsland_Frlg/scripts.pory"
# 79 "data/maps/TwoIsland_Frlg/scripts.pory"
# 144 "data/maps/TwoIsland_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_TWO_ISLAND, 3
# 145 "data/maps/TwoIsland_Frlg/scripts.pory"
# 80 "data/maps/TwoIsland_Frlg/scripts.pory"
# 146 "data/maps/TwoIsland_Frlg/scripts.pory"
	clearflag FLAG_HIDE_TWO_ISLAND_BEAUTY
# 147 "data/maps/TwoIsland_Frlg/scripts.pory"
	return
# 148 "data/maps/TwoIsland_Frlg/scripts.pory"

# 149 "data/maps/TwoIsland_Frlg/scripts.pory"

# 150 "data/maps/TwoIsland_Frlg/scripts.pory"
TwoIsland_EventScript_SetShopExpanded3::
# 151 "data/maps/TwoIsland_Frlg/scripts.pory"
# 85 "data/maps/TwoIsland_Frlg/scripts.pory"
# 152 "data/maps/TwoIsland_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_TWO_ISLAND, 4
# 153 "data/maps/TwoIsland_Frlg/scripts.pory"
# 86 "data/maps/TwoIsland_Frlg/scripts.pory"
# 154 "data/maps/TwoIsland_Frlg/scripts.pory"
	clearflag FLAG_HIDE_TWO_ISLAND_SUPER_NERD
# 155 "data/maps/TwoIsland_Frlg/scripts.pory"
	return
# 156 "data/maps/TwoIsland_Frlg/scripts.pory"

# 157 "data/maps/TwoIsland_Frlg/scripts.pory"

# 158 "data/maps/TwoIsland_Frlg/scripts.pory"
TwoIsland_EventScript_Clerk::
# 159 "data/maps/TwoIsland_Frlg/scripts.pory"
# 91 "data/maps/TwoIsland_Frlg/scripts.pory"
# 160 "data/maps/TwoIsland_Frlg/scripts.pory"
	lock
# 161 "data/maps/TwoIsland_Frlg/scripts.pory"
# 92 "data/maps/TwoIsland_Frlg/scripts.pory"
# 162 "data/maps/TwoIsland_Frlg/scripts.pory"
	faceplayer
# 163 "data/maps/TwoIsland_Frlg/scripts.pory"
# 93 "data/maps/TwoIsland_Frlg/scripts.pory"
# 164 "data/maps/TwoIsland_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_TWO_ISLAND, 4
# 165 "data/maps/TwoIsland_Frlg/scripts.pory"
	goto_if_eq TwoIsland_EventScript_Clerk_2
# 166 "data/maps/TwoIsland_Frlg/scripts.pory"
TwoIsland_EventScript_Clerk_1:
# 167 "data/maps/TwoIsland_Frlg/scripts.pory"
# 96 "data/maps/TwoIsland_Frlg/scripts.pory"
# 168 "data/maps/TwoIsland_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_TWO_ISLAND, 3
# 169 "data/maps/TwoIsland_Frlg/scripts.pory"
	goto_if_eq TwoIsland_EventScript_Clerk_5
# 170 "data/maps/TwoIsland_Frlg/scripts.pory"
TwoIsland_EventScript_Clerk_4:
# 171 "data/maps/TwoIsland_Frlg/scripts.pory"
# 99 "data/maps/TwoIsland_Frlg/scripts.pory"
# 172 "data/maps/TwoIsland_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_TWO_ISLAND, 2
# 173 "data/maps/TwoIsland_Frlg/scripts.pory"
	goto_if_eq TwoIsland_EventScript_Clerk_8
# 174 "data/maps/TwoIsland_Frlg/scripts.pory"
TwoIsland_EventScript_Clerk_7:
# 175 "data/maps/TwoIsland_Frlg/scripts.pory"
# 102 "data/maps/TwoIsland_Frlg/scripts.pory"
# 176 "data/maps/TwoIsland_Frlg/scripts.pory"
	goto TwoIsland_EventScript_ClerkShopInitial
# 177 "data/maps/TwoIsland_Frlg/scripts.pory"
	end
# 178 "data/maps/TwoIsland_Frlg/scripts.pory"

# 179 "data/maps/TwoIsland_Frlg/scripts.pory"
TwoIsland_EventScript_Clerk_2:
# 180 "data/maps/TwoIsland_Frlg/scripts.pory"
# 94 "data/maps/TwoIsland_Frlg/scripts.pory"
# 181 "data/maps/TwoIsland_Frlg/scripts.pory"
	goto TwoIsland_EventScript_ClerkShopExpanded3
# 182 "data/maps/TwoIsland_Frlg/scripts.pory"
	goto TwoIsland_EventScript_Clerk_1
# 183 "data/maps/TwoIsland_Frlg/scripts.pory"

# 184 "data/maps/TwoIsland_Frlg/scripts.pory"
TwoIsland_EventScript_Clerk_5:
# 185 "data/maps/TwoIsland_Frlg/scripts.pory"
# 97 "data/maps/TwoIsland_Frlg/scripts.pory"
# 186 "data/maps/TwoIsland_Frlg/scripts.pory"
	goto TwoIsland_EventScript_ClerkShopExpanded2
# 187 "data/maps/TwoIsland_Frlg/scripts.pory"
	goto TwoIsland_EventScript_Clerk_4
# 188 "data/maps/TwoIsland_Frlg/scripts.pory"

# 189 "data/maps/TwoIsland_Frlg/scripts.pory"
TwoIsland_EventScript_Clerk_8:
# 190 "data/maps/TwoIsland_Frlg/scripts.pory"
# 100 "data/maps/TwoIsland_Frlg/scripts.pory"
# 191 "data/maps/TwoIsland_Frlg/scripts.pory"
	goto TwoIsland_EventScript_ClerkShopExpanded1
# 192 "data/maps/TwoIsland_Frlg/scripts.pory"
	goto TwoIsland_EventScript_Clerk_7
# 193 "data/maps/TwoIsland_Frlg/scripts.pory"

# 194 "data/maps/TwoIsland_Frlg/scripts.pory"

# 195 "data/maps/TwoIsland_Frlg/scripts.pory"
TwoIsland_EventScript_ClerkShopExpanded3::
# 196 "data/maps/TwoIsland_Frlg/scripts.pory"
# 107 "data/maps/TwoIsland_Frlg/scripts.pory"
# 197 "data/maps/TwoIsland_Frlg/scripts.pory"
	goto_if_set FLAG_TWO_ISLAND_SHOP_EXPANDED_3, TwoIsland_EventScript_ClerkShopExpanded3_2
# 198 "data/maps/TwoIsland_Frlg/scripts.pory"
TwoIsland_EventScript_ClerkShopExpanded3_1:
# 199 "data/maps/TwoIsland_Frlg/scripts.pory"
# 110 "data/maps/TwoIsland_Frlg/scripts.pory"
# 200 "data/maps/TwoIsland_Frlg/scripts.pory"
	setflag FLAG_TWO_ISLAND_SHOP_EXPANDED_3
# 201 "data/maps/TwoIsland_Frlg/scripts.pory"
# 111 "data/maps/TwoIsland_Frlg/scripts.pory"
# 202 "data/maps/TwoIsland_Frlg/scripts.pory"
	message TwoIsland_Text_BringingItemsFromDistantLands
# 203 "data/maps/TwoIsland_Frlg/scripts.pory"
# 112 "data/maps/TwoIsland_Frlg/scripts.pory"
# 204 "data/maps/TwoIsland_Frlg/scripts.pory"
	waitmessage
# 205 "data/maps/TwoIsland_Frlg/scripts.pory"
# 113 "data/maps/TwoIsland_Frlg/scripts.pory"
# 206 "data/maps/TwoIsland_Frlg/scripts.pory"
	goto TwoIsland_EventScript_ShopExpanded3
# 207 "data/maps/TwoIsland_Frlg/scripts.pory"
	end
# 208 "data/maps/TwoIsland_Frlg/scripts.pory"

# 209 "data/maps/TwoIsland_Frlg/scripts.pory"
TwoIsland_EventScript_ClerkShopExpanded3_2:
# 210 "data/maps/TwoIsland_Frlg/scripts.pory"
# 108 "data/maps/TwoIsland_Frlg/scripts.pory"
# 211 "data/maps/TwoIsland_Frlg/scripts.pory"
	goto TwoIsland_EventScript_ClerkShopSkipIntro
# 212 "data/maps/TwoIsland_Frlg/scripts.pory"
	goto TwoIsland_EventScript_ClerkShopExpanded3_1
# 213 "data/maps/TwoIsland_Frlg/scripts.pory"

# 214 "data/maps/TwoIsland_Frlg/scripts.pory"

# 215 "data/maps/TwoIsland_Frlg/scripts.pory"
TwoIsland_EventScript_ClerkShopExpanded2::
# 216 "data/maps/TwoIsland_Frlg/scripts.pory"
# 118 "data/maps/TwoIsland_Frlg/scripts.pory"
# 217 "data/maps/TwoIsland_Frlg/scripts.pory"
	goto_if_set FLAG_TWO_ISLAND_SHOP_EXPANDED_2, TwoIsland_EventScript_ClerkShopExpanded2_2
# 218 "data/maps/TwoIsland_Frlg/scripts.pory"
TwoIsland_EventScript_ClerkShopExpanded2_1:
# 219 "data/maps/TwoIsland_Frlg/scripts.pory"
# 121 "data/maps/TwoIsland_Frlg/scripts.pory"
# 220 "data/maps/TwoIsland_Frlg/scripts.pory"
	setflag FLAG_TWO_ISLAND_SHOP_EXPANDED_2
# 221 "data/maps/TwoIsland_Frlg/scripts.pory"
# 122 "data/maps/TwoIsland_Frlg/scripts.pory"
# 222 "data/maps/TwoIsland_Frlg/scripts.pory"
	message TwoIsland_Text_HopeYouGiveItYourBest
# 223 "data/maps/TwoIsland_Frlg/scripts.pory"
# 123 "data/maps/TwoIsland_Frlg/scripts.pory"
# 224 "data/maps/TwoIsland_Frlg/scripts.pory"
	waitmessage
# 225 "data/maps/TwoIsland_Frlg/scripts.pory"
# 124 "data/maps/TwoIsland_Frlg/scripts.pory"
# 226 "data/maps/TwoIsland_Frlg/scripts.pory"
	goto TwoIsland_EventScript_ShopExpanded2
# 227 "data/maps/TwoIsland_Frlg/scripts.pory"
	end
# 228 "data/maps/TwoIsland_Frlg/scripts.pory"

# 229 "data/maps/TwoIsland_Frlg/scripts.pory"
TwoIsland_EventScript_ClerkShopExpanded2_2:
# 230 "data/maps/TwoIsland_Frlg/scripts.pory"
# 119 "data/maps/TwoIsland_Frlg/scripts.pory"
# 231 "data/maps/TwoIsland_Frlg/scripts.pory"
	goto TwoIsland_EventScript_ClerkShopSkipIntro
# 232 "data/maps/TwoIsland_Frlg/scripts.pory"
	goto TwoIsland_EventScript_ClerkShopExpanded2_1
# 233 "data/maps/TwoIsland_Frlg/scripts.pory"

# 234 "data/maps/TwoIsland_Frlg/scripts.pory"

# 235 "data/maps/TwoIsland_Frlg/scripts.pory"
TwoIsland_EventScript_ClerkShopExpanded1::
# 236 "data/maps/TwoIsland_Frlg/scripts.pory"
# 129 "data/maps/TwoIsland_Frlg/scripts.pory"
# 237 "data/maps/TwoIsland_Frlg/scripts.pory"
	goto_if_set FLAG_TWO_ISLAND_SHOP_EXPANDED_1, TwoIsland_EventScript_ClerkShopExpanded1_2
# 238 "data/maps/TwoIsland_Frlg/scripts.pory"
TwoIsland_EventScript_ClerkShopExpanded1_1:
# 239 "data/maps/TwoIsland_Frlg/scripts.pory"
# 132 "data/maps/TwoIsland_Frlg/scripts.pory"
# 240 "data/maps/TwoIsland_Frlg/scripts.pory"
	setflag FLAG_TWO_ISLAND_SHOP_EXPANDED_1
# 241 "data/maps/TwoIsland_Frlg/scripts.pory"
# 133 "data/maps/TwoIsland_Frlg/scripts.pory"
# 242 "data/maps/TwoIsland_Frlg/scripts.pory"
	message TwoIsland_Text_AddedMerchandiseForLostelle
# 243 "data/maps/TwoIsland_Frlg/scripts.pory"
# 134 "data/maps/TwoIsland_Frlg/scripts.pory"
# 244 "data/maps/TwoIsland_Frlg/scripts.pory"
	waitmessage
# 245 "data/maps/TwoIsland_Frlg/scripts.pory"
# 135 "data/maps/TwoIsland_Frlg/scripts.pory"
# 246 "data/maps/TwoIsland_Frlg/scripts.pory"
	goto TwoIsland_EventScript_ShopExpanded1
# 247 "data/maps/TwoIsland_Frlg/scripts.pory"
	end
# 248 "data/maps/TwoIsland_Frlg/scripts.pory"

# 249 "data/maps/TwoIsland_Frlg/scripts.pory"
TwoIsland_EventScript_ClerkShopExpanded1_2:
# 250 "data/maps/TwoIsland_Frlg/scripts.pory"
# 130 "data/maps/TwoIsland_Frlg/scripts.pory"
# 251 "data/maps/TwoIsland_Frlg/scripts.pory"
	goto TwoIsland_EventScript_ClerkShopSkipIntro
# 252 "data/maps/TwoIsland_Frlg/scripts.pory"
	goto TwoIsland_EventScript_ClerkShopExpanded1_1
# 253 "data/maps/TwoIsland_Frlg/scripts.pory"

# 254 "data/maps/TwoIsland_Frlg/scripts.pory"

# 255 "data/maps/TwoIsland_Frlg/scripts.pory"
TwoIsland_EventScript_ClerkShopInitial::
# 256 "data/maps/TwoIsland_Frlg/scripts.pory"
# 140 "data/maps/TwoIsland_Frlg/scripts.pory"
# 257 "data/maps/TwoIsland_Frlg/scripts.pory"
	goto_if_set FLAG_TWO_ISLAND_SHOP_INTRODUCED, TwoIsland_EventScript_ClerkShopInitial_2
# 258 "data/maps/TwoIsland_Frlg/scripts.pory"
TwoIsland_EventScript_ClerkShopInitial_1:
# 259 "data/maps/TwoIsland_Frlg/scripts.pory"
# 143 "data/maps/TwoIsland_Frlg/scripts.pory"
# 260 "data/maps/TwoIsland_Frlg/scripts.pory"
	setflag FLAG_TWO_ISLAND_SHOP_INTRODUCED
# 261 "data/maps/TwoIsland_Frlg/scripts.pory"
# 144 "data/maps/TwoIsland_Frlg/scripts.pory"
# 262 "data/maps/TwoIsland_Frlg/scripts.pory"
	message TwoIsland_Text_WelcomeToShopMerchandiseLimited
# 263 "data/maps/TwoIsland_Frlg/scripts.pory"
# 145 "data/maps/TwoIsland_Frlg/scripts.pory"
# 264 "data/maps/TwoIsland_Frlg/scripts.pory"
	waitmessage
# 265 "data/maps/TwoIsland_Frlg/scripts.pory"
# 146 "data/maps/TwoIsland_Frlg/scripts.pory"
# 266 "data/maps/TwoIsland_Frlg/scripts.pory"
	goto TwoIsland_EventScript_ShopInitial
# 267 "data/maps/TwoIsland_Frlg/scripts.pory"
	end
# 268 "data/maps/TwoIsland_Frlg/scripts.pory"

# 269 "data/maps/TwoIsland_Frlg/scripts.pory"
TwoIsland_EventScript_ClerkShopInitial_2:
# 270 "data/maps/TwoIsland_Frlg/scripts.pory"
# 141 "data/maps/TwoIsland_Frlg/scripts.pory"
# 271 "data/maps/TwoIsland_Frlg/scripts.pory"
	goto TwoIsland_EventScript_ClerkShopSkipIntro
# 272 "data/maps/TwoIsland_Frlg/scripts.pory"
	goto TwoIsland_EventScript_ClerkShopInitial_1
# 273 "data/maps/TwoIsland_Frlg/scripts.pory"

# 274 "data/maps/TwoIsland_Frlg/scripts.pory"

# 275 "data/maps/TwoIsland_Frlg/scripts.pory"
TwoIsland_EventScript_ClerkShopSkipIntro::
# 276 "data/maps/TwoIsland_Frlg/scripts.pory"
# 151 "data/maps/TwoIsland_Frlg/scripts.pory"
# 277 "data/maps/TwoIsland_Frlg/scripts.pory"
	message gText_HowMayIServeYou
# 278 "data/maps/TwoIsland_Frlg/scripts.pory"
# 152 "data/maps/TwoIsland_Frlg/scripts.pory"
# 279 "data/maps/TwoIsland_Frlg/scripts.pory"
	waitmessage
# 280 "data/maps/TwoIsland_Frlg/scripts.pory"
# 153 "data/maps/TwoIsland_Frlg/scripts.pory"
# 281 "data/maps/TwoIsland_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_TWO_ISLAND, 4
# 282 "data/maps/TwoIsland_Frlg/scripts.pory"
	goto_if_eq TwoIsland_EventScript_ClerkShopSkipIntro_2
# 283 "data/maps/TwoIsland_Frlg/scripts.pory"
TwoIsland_EventScript_ClerkShopSkipIntro_1:
# 284 "data/maps/TwoIsland_Frlg/scripts.pory"
# 156 "data/maps/TwoIsland_Frlg/scripts.pory"
# 285 "data/maps/TwoIsland_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_TWO_ISLAND, 3
# 286 "data/maps/TwoIsland_Frlg/scripts.pory"
	goto_if_eq TwoIsland_EventScript_ClerkShopSkipIntro_5
# 287 "data/maps/TwoIsland_Frlg/scripts.pory"
TwoIsland_EventScript_ClerkShopSkipIntro_4:
# 288 "data/maps/TwoIsland_Frlg/scripts.pory"
# 159 "data/maps/TwoIsland_Frlg/scripts.pory"
# 289 "data/maps/TwoIsland_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_TWO_ISLAND, 2
# 290 "data/maps/TwoIsland_Frlg/scripts.pory"
	goto_if_eq TwoIsland_EventScript_ClerkShopSkipIntro_8
# 291 "data/maps/TwoIsland_Frlg/scripts.pory"
TwoIsland_EventScript_ClerkShopSkipIntro_7:
# 292 "data/maps/TwoIsland_Frlg/scripts.pory"
# 162 "data/maps/TwoIsland_Frlg/scripts.pory"
# 293 "data/maps/TwoIsland_Frlg/scripts.pory"
	goto TwoIsland_EventScript_ShopInitial
# 294 "data/maps/TwoIsland_Frlg/scripts.pory"
	end
# 295 "data/maps/TwoIsland_Frlg/scripts.pory"

# 296 "data/maps/TwoIsland_Frlg/scripts.pory"
TwoIsland_EventScript_ClerkShopSkipIntro_2:
# 297 "data/maps/TwoIsland_Frlg/scripts.pory"
# 154 "data/maps/TwoIsland_Frlg/scripts.pory"
# 298 "data/maps/TwoIsland_Frlg/scripts.pory"
	goto TwoIsland_EventScript_ShopExpanded3
# 299 "data/maps/TwoIsland_Frlg/scripts.pory"
	goto TwoIsland_EventScript_ClerkShopSkipIntro_1
# 300 "data/maps/TwoIsland_Frlg/scripts.pory"

# 301 "data/maps/TwoIsland_Frlg/scripts.pory"
TwoIsland_EventScript_ClerkShopSkipIntro_5:
# 302 "data/maps/TwoIsland_Frlg/scripts.pory"
# 157 "data/maps/TwoIsland_Frlg/scripts.pory"
# 303 "data/maps/TwoIsland_Frlg/scripts.pory"
	goto TwoIsland_EventScript_ShopExpanded2
# 304 "data/maps/TwoIsland_Frlg/scripts.pory"
	goto TwoIsland_EventScript_ClerkShopSkipIntro_4
# 305 "data/maps/TwoIsland_Frlg/scripts.pory"

# 306 "data/maps/TwoIsland_Frlg/scripts.pory"
TwoIsland_EventScript_ClerkShopSkipIntro_8:
# 307 "data/maps/TwoIsland_Frlg/scripts.pory"
# 160 "data/maps/TwoIsland_Frlg/scripts.pory"
# 308 "data/maps/TwoIsland_Frlg/scripts.pory"
	goto TwoIsland_EventScript_ShopExpanded1
# 309 "data/maps/TwoIsland_Frlg/scripts.pory"
	goto TwoIsland_EventScript_ClerkShopSkipIntro_7
# 310 "data/maps/TwoIsland_Frlg/scripts.pory"

# 311 "data/maps/TwoIsland_Frlg/scripts.pory"

# 312 "data/maps/TwoIsland_Frlg/scripts.pory"
TwoIsland_EventScript_ShopInitial::
# 313 "data/maps/TwoIsland_Frlg/scripts.pory"
# 167 "data/maps/TwoIsland_Frlg/scripts.pory"
# 314 "data/maps/TwoIsland_Frlg/scripts.pory"
	pokemart TwoIsland_Items_ShopInitial
# 315 "data/maps/TwoIsland_Frlg/scripts.pory"
# 168 "data/maps/TwoIsland_Frlg/scripts.pory"
# 316 "data/maps/TwoIsland_Frlg/scripts.pory"
	msgbox gText_PleaseComeAgain
# 317 "data/maps/TwoIsland_Frlg/scripts.pory"
# 169 "data/maps/TwoIsland_Frlg/scripts.pory"
# 318 "data/maps/TwoIsland_Frlg/scripts.pory"
	release
# 319 "data/maps/TwoIsland_Frlg/scripts.pory"
	end
# 320 "data/maps/TwoIsland_Frlg/scripts.pory"

# 321 "data/maps/TwoIsland_Frlg/scripts.pory"

# 322 "data/maps/TwoIsland_Frlg/scripts.pory"
TwoIsland_Items_ShopInitial::
# 323 "data/maps/TwoIsland_Frlg/scripts.pory"
# 174 "data/maps/TwoIsland_Frlg/scripts.pory"
# 324 "data/maps/TwoIsland_Frlg/scripts.pory"
	release
# 325 "data/maps/TwoIsland_Frlg/scripts.pory"
	end
# 326 "data/maps/TwoIsland_Frlg/scripts.pory"

# 327 "data/maps/TwoIsland_Frlg/scripts.pory"

# 328 "data/maps/TwoIsland_Frlg/scripts.pory"
TwoIsland_EventScript_ShopExpanded1::
# 329 "data/maps/TwoIsland_Frlg/scripts.pory"
# 179 "data/maps/TwoIsland_Frlg/scripts.pory"
# 330 "data/maps/TwoIsland_Frlg/scripts.pory"
	pokemart TwoIsland_Items_ShopExpanded1
# 331 "data/maps/TwoIsland_Frlg/scripts.pory"
# 180 "data/maps/TwoIsland_Frlg/scripts.pory"
# 332 "data/maps/TwoIsland_Frlg/scripts.pory"
	msgbox gText_PleaseComeAgain
# 333 "data/maps/TwoIsland_Frlg/scripts.pory"
# 181 "data/maps/TwoIsland_Frlg/scripts.pory"
# 334 "data/maps/TwoIsland_Frlg/scripts.pory"
	release
# 335 "data/maps/TwoIsland_Frlg/scripts.pory"
	end
# 336 "data/maps/TwoIsland_Frlg/scripts.pory"

# 337 "data/maps/TwoIsland_Frlg/scripts.pory"

# 338 "data/maps/TwoIsland_Frlg/scripts.pory"
TwoIsland_Items_ShopExpanded1::
# 339 "data/maps/TwoIsland_Frlg/scripts.pory"
# 186 "data/maps/TwoIsland_Frlg/scripts.pory"
# 340 "data/maps/TwoIsland_Frlg/scripts.pory"
	release
# 341 "data/maps/TwoIsland_Frlg/scripts.pory"
	end
# 342 "data/maps/TwoIsland_Frlg/scripts.pory"

# 343 "data/maps/TwoIsland_Frlg/scripts.pory"

# 344 "data/maps/TwoIsland_Frlg/scripts.pory"
TwoIsland_EventScript_ShopExpanded2::
# 345 "data/maps/TwoIsland_Frlg/scripts.pory"
# 191 "data/maps/TwoIsland_Frlg/scripts.pory"
# 346 "data/maps/TwoIsland_Frlg/scripts.pory"
	pokemart TwoIsland_Items_ShopExpanded2
# 347 "data/maps/TwoIsland_Frlg/scripts.pory"
# 192 "data/maps/TwoIsland_Frlg/scripts.pory"
# 348 "data/maps/TwoIsland_Frlg/scripts.pory"
	msgbox gText_PleaseComeAgain
# 349 "data/maps/TwoIsland_Frlg/scripts.pory"
# 193 "data/maps/TwoIsland_Frlg/scripts.pory"
# 350 "data/maps/TwoIsland_Frlg/scripts.pory"
	release
# 351 "data/maps/TwoIsland_Frlg/scripts.pory"
	end
# 352 "data/maps/TwoIsland_Frlg/scripts.pory"

# 353 "data/maps/TwoIsland_Frlg/scripts.pory"

# 354 "data/maps/TwoIsland_Frlg/scripts.pory"
TwoIsland_Items_ShopExpanded2::
# 355 "data/maps/TwoIsland_Frlg/scripts.pory"
# 198 "data/maps/TwoIsland_Frlg/scripts.pory"
# 356 "data/maps/TwoIsland_Frlg/scripts.pory"
	release
# 357 "data/maps/TwoIsland_Frlg/scripts.pory"
	end
# 358 "data/maps/TwoIsland_Frlg/scripts.pory"

# 359 "data/maps/TwoIsland_Frlg/scripts.pory"

# 360 "data/maps/TwoIsland_Frlg/scripts.pory"
TwoIsland_EventScript_ShopExpanded3::
# 361 "data/maps/TwoIsland_Frlg/scripts.pory"
# 203 "data/maps/TwoIsland_Frlg/scripts.pory"
# 362 "data/maps/TwoIsland_Frlg/scripts.pory"
	pokemart TwoIsland_Items_ShopExpanded3
# 363 "data/maps/TwoIsland_Frlg/scripts.pory"
# 204 "data/maps/TwoIsland_Frlg/scripts.pory"
# 364 "data/maps/TwoIsland_Frlg/scripts.pory"
	msgbox gText_PleaseComeAgain
# 365 "data/maps/TwoIsland_Frlg/scripts.pory"
# 205 "data/maps/TwoIsland_Frlg/scripts.pory"
# 366 "data/maps/TwoIsland_Frlg/scripts.pory"
	release
# 367 "data/maps/TwoIsland_Frlg/scripts.pory"
	end
# 368 "data/maps/TwoIsland_Frlg/scripts.pory"

# 369 "data/maps/TwoIsland_Frlg/scripts.pory"

# 370 "data/maps/TwoIsland_Frlg/scripts.pory"
TwoIsland_Items_ShopExpanded3::
# 371 "data/maps/TwoIsland_Frlg/scripts.pory"
# 210 "data/maps/TwoIsland_Frlg/scripts.pory"
# 372 "data/maps/TwoIsland_Frlg/scripts.pory"
	release
# 373 "data/maps/TwoIsland_Frlg/scripts.pory"
	end
# 374 "data/maps/TwoIsland_Frlg/scripts.pory"

# 375 "data/maps/TwoIsland_Frlg/scripts.pory"

# 376 "data/maps/TwoIsland_Frlg/scripts.pory"
TwoIsland_EventScript_Sailor::
# 377 "data/maps/TwoIsland_Frlg/scripts.pory"
# 215 "data/maps/TwoIsland_Frlg/scripts.pory"
# 378 "data/maps/TwoIsland_Frlg/scripts.pory"
	msgbox TwoIsland_Text_FellowMovedFromCeladonCity, MSGBOX_NPC
# 379 "data/maps/TwoIsland_Frlg/scripts.pory"
	end
# 380 "data/maps/TwoIsland_Frlg/scripts.pory"

# 381 "data/maps/TwoIsland_Frlg/scripts.pory"

# 382 "data/maps/TwoIsland_Frlg/scripts.pory"
TwoIsland_EventScript_Woman::
# 383 "data/maps/TwoIsland_Frlg/scripts.pory"
# 220 "data/maps/TwoIsland_Frlg/scripts.pory"
# 384 "data/maps/TwoIsland_Frlg/scripts.pory"
	msgbox TwoIsland_Text_ShopkeepersBrotherWorksGameCorner, MSGBOX_NPC
# 385 "data/maps/TwoIsland_Frlg/scripts.pory"
	end
# 386 "data/maps/TwoIsland_Frlg/scripts.pory"

# 387 "data/maps/TwoIsland_Frlg/scripts.pory"

# 388 "data/maps/TwoIsland_Frlg/scripts.pory"
TwoIsland_EventScript_Beauty::
# 389 "data/maps/TwoIsland_Frlg/scripts.pory"
# 225 "data/maps/TwoIsland_Frlg/scripts.pory"
# 390 "data/maps/TwoIsland_Frlg/scripts.pory"
	lock
# 391 "data/maps/TwoIsland_Frlg/scripts.pory"
# 226 "data/maps/TwoIsland_Frlg/scripts.pory"
# 392 "data/maps/TwoIsland_Frlg/scripts.pory"
	faceplayer
# 393 "data/maps/TwoIsland_Frlg/scripts.pory"
# 227 "data/maps/TwoIsland_Frlg/scripts.pory"
# 394 "data/maps/TwoIsland_Frlg/scripts.pory"
	famechecker FAMECHECKER_BRUNO, 4
# 395 "data/maps/TwoIsland_Frlg/scripts.pory"
# 228 "data/maps/TwoIsland_Frlg/scripts.pory"
# 396 "data/maps/TwoIsland_Frlg/scripts.pory"
	msgbox TwoIsland_Text_BrunoCameToIslandWhileBack
# 397 "data/maps/TwoIsland_Frlg/scripts.pory"
# 229 "data/maps/TwoIsland_Frlg/scripts.pory"
# 398 "data/maps/TwoIsland_Frlg/scripts.pory"
	release
# 399 "data/maps/TwoIsland_Frlg/scripts.pory"
	end
# 400 "data/maps/TwoIsland_Frlg/scripts.pory"

# 401 "data/maps/TwoIsland_Frlg/scripts.pory"

# 402 "data/maps/TwoIsland_Frlg/scripts.pory"
TwoIsland_EventScript_SuperNerd::
# 403 "data/maps/TwoIsland_Frlg/scripts.pory"
# 234 "data/maps/TwoIsland_Frlg/scripts.pory"
# 404 "data/maps/TwoIsland_Frlg/scripts.pory"
	msgbox TwoIsland_Text_BuyRareItemsHere, MSGBOX_NPC
# 405 "data/maps/TwoIsland_Frlg/scripts.pory"
	end
# 406 "data/maps/TwoIsland_Frlg/scripts.pory"

# 407 "data/maps/TwoIsland_Frlg/scripts.pory"

# 408 "data/maps/TwoIsland_Frlg/scripts.pory"
TwoIsland_EventScript_Boy::
# 409 "data/maps/TwoIsland_Frlg/scripts.pory"
# 239 "data/maps/TwoIsland_Frlg/scripts.pory"
# 410 "data/maps/TwoIsland_Frlg/scripts.pory"
	msgbox TwoIsland_Text_OldWomanLivesOutOnCape, MSGBOX_NPC
# 411 "data/maps/TwoIsland_Frlg/scripts.pory"
	end
# 412 "data/maps/TwoIsland_Frlg/scripts.pory"

# 413 "data/maps/TwoIsland_Frlg/scripts.pory"

# 414 "data/maps/TwoIsland_Frlg/scripts.pory"
TwoIsland_EventScript_LittleBoy::
# 415 "data/maps/TwoIsland_Frlg/scripts.pory"
# 244 "data/maps/TwoIsland_Frlg/scripts.pory"
# 416 "data/maps/TwoIsland_Frlg/scripts.pory"
	msgbox TwoIsland_Text_HaveYouTriedJumpingGame, MSGBOX_NPC
# 417 "data/maps/TwoIsland_Frlg/scripts.pory"
	end
# 418 "data/maps/TwoIsland_Frlg/scripts.pory"

# 419 "data/maps/TwoIsland_Frlg/scripts.pory"

# 420 "data/maps/TwoIsland_Frlg/scripts.pory"
TwoIsland_EventScript_IslandSign::
# 421 "data/maps/TwoIsland_Frlg/scripts.pory"
# 249 "data/maps/TwoIsland_Frlg/scripts.pory"
# 422 "data/maps/TwoIsland_Frlg/scripts.pory"
	msgbox TwoIsland_Text_IslandSign, MSGBOX_SIGN
# 423 "data/maps/TwoIsland_Frlg/scripts.pory"
	end
# 424 "data/maps/TwoIsland_Frlg/scripts.pory"

# 425 "data/maps/TwoIsland_Frlg/scripts.pory"

# 426 "data/maps/TwoIsland_Frlg/scripts.pory"
TwoIsland_EventScript_JoyfulGameCornerSign::
# 427 "data/maps/TwoIsland_Frlg/scripts.pory"
# 254 "data/maps/TwoIsland_Frlg/scripts.pory"
# 428 "data/maps/TwoIsland_Frlg/scripts.pory"
	msgbox TwoIsland_Text_JoyfulGameCornerSign, MSGBOX_SIGN
# 429 "data/maps/TwoIsland_Frlg/scripts.pory"
	end
# 430 "data/maps/TwoIsland_Frlg/scripts.pory"

# 431 "data/maps/TwoIsland_Frlg/scripts.pory"

# 432 "data/maps/TwoIsland_Frlg/scripts.pory"
TwoIsland_EventScript_FastCurrentSign::
# 433 "data/maps/TwoIsland_Frlg/scripts.pory"
# 259 "data/maps/TwoIsland_Frlg/scripts.pory"
# 434 "data/maps/TwoIsland_Frlg/scripts.pory"
	msgbox TwoIsland_Text_DangerFastCurrent, MSGBOX_SIGN
# 435 "data/maps/TwoIsland_Frlg/scripts.pory"
	end
# 436 "data/maps/TwoIsland_Frlg/scripts.pory"

# 437 "data/maps/TwoIsland_Frlg/scripts.pory"

# 438 "data/maps/TwoIsland_Frlg/scripts.pory"
TwoIsland_Text_IslandSign::
# 439 "data/maps/TwoIsland_Frlg/scripts.pory"
# 263 "data/maps/TwoIsland_Frlg/scripts.pory"
# 440 "data/maps/TwoIsland_Frlg/scripts.pory"
	.string "TWO ISLAND\n"
# 441 "data/maps/TwoIsland_Frlg/scripts.pory"
	.string "Boon Island for Two$"
# 442 "data/maps/TwoIsland_Frlg/scripts.pory"

# 443 "data/maps/TwoIsland_Frlg/scripts.pory"
TwoIsland_Text_JoyfulGameCornerSign::
# 444 "data/maps/TwoIsland_Frlg/scripts.pory"
# 268 "data/maps/TwoIsland_Frlg/scripts.pory"
# 445 "data/maps/TwoIsland_Frlg/scripts.pory"
	.string "Skip & Chomp!\n"
# 446 "data/maps/TwoIsland_Frlg/scripts.pory"
	.string "Joyful GAME CORNER$"
# 447 "data/maps/TwoIsland_Frlg/scripts.pory"

# 448 "data/maps/TwoIsland_Frlg/scripts.pory"
TwoIsland_Text_DangerFastCurrent::
# 449 "data/maps/TwoIsland_Frlg/scripts.pory"
# 273 "data/maps/TwoIsland_Frlg/scripts.pory"
# 450 "data/maps/TwoIsland_Frlg/scripts.pory"
	.string "DANGER! FAST CURRENT!\n"
# 451 "data/maps/TwoIsland_Frlg/scripts.pory"
	.string "Fishing and surfing prohibited!$"
# 452 "data/maps/TwoIsland_Frlg/scripts.pory"

# 453 "data/maps/TwoIsland_Frlg/scripts.pory"
TwoIsland_Text_WelcomeToShopMerchandiseLimited::
# 454 "data/maps/TwoIsland_Frlg/scripts.pory"
# 278 "data/maps/TwoIsland_Frlg/scripts.pory"
# 455 "data/maps/TwoIsland_Frlg/scripts.pory"
	.string "Oh!\n"
# 456 "data/maps/TwoIsland_Frlg/scripts.pory"
	.string "Hello, welcome to my shop!\p"
# 457 "data/maps/TwoIsland_Frlg/scripts.pory"
	.string "We've only opened up recently.\p"
# 458 "data/maps/TwoIsland_Frlg/scripts.pory"
	.string "Our merchandise is limited, but I\n"
# 459 "data/maps/TwoIsland_Frlg/scripts.pory"
	.string "hope we can serve your needs.$"
# 460 "data/maps/TwoIsland_Frlg/scripts.pory"

# 461 "data/maps/TwoIsland_Frlg/scripts.pory"
TwoIsland_Text_AddedMerchandiseForLostelle::
# 462 "data/maps/TwoIsland_Frlg/scripts.pory"
# 286 "data/maps/TwoIsland_Frlg/scripts.pory"
# 463 "data/maps/TwoIsland_Frlg/scripts.pory"
	.string "I can't tell you how grateful I am\n"
# 464 "data/maps/TwoIsland_Frlg/scripts.pory"
	.string "for your rescue of LOSTELLE.\p"
# 465 "data/maps/TwoIsland_Frlg/scripts.pory"
	.string "Thanks to your feat, the people of\n"
# 466 "data/maps/TwoIsland_Frlg/scripts.pory"
	.string "THREE ISLAND have changed their\l"
# 467 "data/maps/TwoIsland_Frlg/scripts.pory"
	.string "attitudes about KANTO people.\p"
# 468 "data/maps/TwoIsland_Frlg/scripts.pory"
	.string "And, I'm from KANTO, you see.\p"
# 469 "data/maps/TwoIsland_Frlg/scripts.pory"
	.string "The people of THREE ISLAND\n"
# 470 "data/maps/TwoIsland_Frlg/scripts.pory"
	.string "helped me add to my merchandise.$"
# 471 "data/maps/TwoIsland_Frlg/scripts.pory"

# 472 "data/maps/TwoIsland_Frlg/scripts.pory"
TwoIsland_Text_HopeYouGiveItYourBest::
# 473 "data/maps/TwoIsland_Frlg/scripts.pory"
# 297 "data/maps/TwoIsland_Frlg/scripts.pory"
# 474 "data/maps/TwoIsland_Frlg/scripts.pory"
	.string "Hi! I'm giving it my best here.\n"
# 475 "data/maps/TwoIsland_Frlg/scripts.pory"
	.string "I hope you do too, {PLAYER}.$"
# 476 "data/maps/TwoIsland_Frlg/scripts.pory"

# 477 "data/maps/TwoIsland_Frlg/scripts.pory"
TwoIsland_Text_BringingItemsFromDistantLands::
# 478 "data/maps/TwoIsland_Frlg/scripts.pory"
# 302 "data/maps/TwoIsland_Frlg/scripts.pory"
# 479 "data/maps/TwoIsland_Frlg/scripts.pory"
	.string "Oh, hello, {PLAYER}!\n"
# 480 "data/maps/TwoIsland_Frlg/scripts.pory"
	.string "Welcome!\p"
# 481 "data/maps/TwoIsland_Frlg/scripts.pory"
	.string "I've started bringing in items from\n"
# 482 "data/maps/TwoIsland_Frlg/scripts.pory"
	.string "distant lands.\p"
# 483 "data/maps/TwoIsland_Frlg/scripts.pory"
	.string "I've got some rare items in, too.\n"
# 484 "data/maps/TwoIsland_Frlg/scripts.pory"
	.string "Please have a look!$"
# 485 "data/maps/TwoIsland_Frlg/scripts.pory"

# 486 "data/maps/TwoIsland_Frlg/scripts.pory"
TwoIsland_Text_FellowMovedFromCeladonCity::
# 487 "data/maps/TwoIsland_Frlg/scripts.pory"
# 311 "data/maps/TwoIsland_Frlg/scripts.pory"
# 488 "data/maps/TwoIsland_Frlg/scripts.pory"
	.string "That fellow there, he moved here\n"
# 489 "data/maps/TwoIsland_Frlg/scripts.pory"
	.string "from CELADON CITY.\p"
# 490 "data/maps/TwoIsland_Frlg/scripts.pory"
	.string "He started up a shop with his\n"
# 491 "data/maps/TwoIsland_Frlg/scripts.pory"
	.string "younger brother.\p"
# 492 "data/maps/TwoIsland_Frlg/scripts.pory"
	.string "You have to wonder if he knew what\n"
# 493 "data/maps/TwoIsland_Frlg/scripts.pory"
	.string "he was getting into.$"
# 494 "data/maps/TwoIsland_Frlg/scripts.pory"

# 495 "data/maps/TwoIsland_Frlg/scripts.pory"
TwoIsland_Text_ShopkeepersBrotherWorksGameCorner::
# 496 "data/maps/TwoIsland_Frlg/scripts.pory"
# 320 "data/maps/TwoIsland_Frlg/scripts.pory"
# 497 "data/maps/TwoIsland_Frlg/scripts.pory"
	.string "The shopkeeper's brother took\n"
# 498 "data/maps/TwoIsland_Frlg/scripts.pory"
	.string "a job at the GAME CORNER.\p"
# 499 "data/maps/TwoIsland_Frlg/scripts.pory"
	.string "He's trying to pull together money\n"
# 500 "data/maps/TwoIsland_Frlg/scripts.pory"
	.string "so they can buy more merchandise.$"
# 501 "data/maps/TwoIsland_Frlg/scripts.pory"

# 502 "data/maps/TwoIsland_Frlg/scripts.pory"
TwoIsland_Text_BrunoCameToIslandWhileBack::
# 503 "data/maps/TwoIsland_Frlg/scripts.pory"
# 327 "data/maps/TwoIsland_Frlg/scripts.pory"
# 504 "data/maps/TwoIsland_Frlg/scripts.pory"
	.string "Listen, listen.\n"
# 505 "data/maps/TwoIsland_Frlg/scripts.pory"
	.string "Did you know?\p"
# 506 "data/maps/TwoIsland_Frlg/scripts.pory"
	.string "A famous TRAINER came to the\n"
# 507 "data/maps/TwoIsland_Frlg/scripts.pory"
	.string "ISLAND a little while back.\p"
# 508 "data/maps/TwoIsland_Frlg/scripts.pory"
	.string "He's one of the ELITE FOUR.\n"
# 509 "data/maps/TwoIsland_Frlg/scripts.pory"
	.string "His name is BRUNO.\p"
# 510 "data/maps/TwoIsland_Frlg/scripts.pory"
	.string "He went away disappointed when he\n"
# 511 "data/maps/TwoIsland_Frlg/scripts.pory"
	.string "found out that they were all sold\l"
# 512 "data/maps/TwoIsland_Frlg/scripts.pory"
	.string "out of Rage Candybars.$"
# 513 "data/maps/TwoIsland_Frlg/scripts.pory"

# 514 "data/maps/TwoIsland_Frlg/scripts.pory"
TwoIsland_Text_BuyRareItemsHere::
# 515 "data/maps/TwoIsland_Frlg/scripts.pory"
# 339 "data/maps/TwoIsland_Frlg/scripts.pory"
# 516 "data/maps/TwoIsland_Frlg/scripts.pory"
	.string "The discerning TRAINER knows to\n"
# 517 "data/maps/TwoIsland_Frlg/scripts.pory"
	.string "buy rare items here!$"
# 518 "data/maps/TwoIsland_Frlg/scripts.pory"

# 519 "data/maps/TwoIsland_Frlg/scripts.pory"
TwoIsland_Text_OldWomanLivesOutOnCape::
# 520 "data/maps/TwoIsland_Frlg/scripts.pory"
# 344 "data/maps/TwoIsland_Frlg/scripts.pory"
# 521 "data/maps/TwoIsland_Frlg/scripts.pory"
	.string "There's an old woman who lives in\n"
# 522 "data/maps/TwoIsland_Frlg/scripts.pory"
	.string "a cottage out on the cape.\p"
# 523 "data/maps/TwoIsland_Frlg/scripts.pory"
	.string "She gives the eye to POKéMON.\n"
# 524 "data/maps/TwoIsland_Frlg/scripts.pory"
	.string "It's a bit unnerving.$"
# 525 "data/maps/TwoIsland_Frlg/scripts.pory"

# 526 "data/maps/TwoIsland_Frlg/scripts.pory"
TwoIsland_Text_HaveYouTriedJumpingGame::
# 527 "data/maps/TwoIsland_Frlg/scripts.pory"
# 351 "data/maps/TwoIsland_Frlg/scripts.pory"
# 528 "data/maps/TwoIsland_Frlg/scripts.pory"
	.string "Boing! Boing!\n"
# 529 "data/maps/TwoIsland_Frlg/scripts.pory"
	.string "Have you tried the jumping game?\p"
# 530 "data/maps/TwoIsland_Frlg/scripts.pory"
	.string "The POKéMON you can enter…\n"
# 531 "data/maps/TwoIsland_Frlg/scripts.pory"
	.string "Boing!\p"
# 532 "data/maps/TwoIsland_Frlg/scripts.pory"
	.string "Some go boing!\p"
# 533 "data/maps/TwoIsland_Frlg/scripts.pory"
	.string "And some go boooooooing!\p"
# 534 "data/maps/TwoIsland_Frlg/scripts.pory"
	.string "Did you know that?\n"
# 535 "data/maps/TwoIsland_Frlg/scripts.pory"
	.string "Boing!$"
