# 1 "data/maps/OneIsland_Frlg/scripts.pory"

# 2 "data/maps/OneIsland_Frlg/scripts.pory"
OneIsland_Frlg_MapScripts::
# 3 "data/maps/OneIsland_Frlg/scripts.pory"
# 2 "data/maps/OneIsland_Frlg/scripts.pory"
# 4 "data/maps/OneIsland_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, OneIsland_OnTransition
# 5 "data/maps/OneIsland_Frlg/scripts.pory"
# 3 "data/maps/OneIsland_Frlg/scripts.pory"
# 6 "data/maps/OneIsland_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, OneIsland_Frlg_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 7 "data/maps/OneIsland_Frlg/scripts.pory"
	.byte 0
# 8 "data/maps/OneIsland_Frlg/scripts.pory"

# 9 "data/maps/OneIsland_Frlg/scripts.pory"
OneIsland_Frlg_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 10 "data/maps/OneIsland_Frlg/scripts.pory"
# 4 "data/maps/OneIsland_Frlg/scripts.pory"
# 11 "data/maps/OneIsland_Frlg/scripts.pory"
	map_script_2 VAR_MAP_SCENE_ONE_ISLAND_HARBOR, 2, OneIsland_EventScript_EnterOneIslandFirstTime
# 12 "data/maps/OneIsland_Frlg/scripts.pory"
	.2byte 0
# 13 "data/maps/OneIsland_Frlg/scripts.pory"

# 14 "data/maps/OneIsland_Frlg/scripts.pory"

# 15 "data/maps/OneIsland_Frlg/scripts.pory"
OneIsland_OnTransition::
# 16 "data/maps/OneIsland_Frlg/scripts.pory"
# 9 "data/maps/OneIsland_Frlg/scripts.pory"
# 17 "data/maps/OneIsland_Frlg/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_ONE_ISLAND
# 18 "data/maps/OneIsland_Frlg/scripts.pory"
	end
# 19 "data/maps/OneIsland_Frlg/scripts.pory"

# 20 "data/maps/OneIsland_Frlg/scripts.pory"

# 21 "data/maps/OneIsland_Frlg/scripts.pory"
OneIsland_EventScript_EnterOneIslandFirstTime::
# 22 "data/maps/OneIsland_Frlg/scripts.pory"
# 14 "data/maps/OneIsland_Frlg/scripts.pory"
# 23 "data/maps/OneIsland_Frlg/scripts.pory"
	lockall
# 24 "data/maps/OneIsland_Frlg/scripts.pory"
# 15 "data/maps/OneIsland_Frlg/scripts.pory"
# 25 "data/maps/OneIsland_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 26 "data/maps/OneIsland_Frlg/scripts.pory"
# 16 "data/maps/OneIsland_Frlg/scripts.pory"
# 27 "data/maps/OneIsland_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, OneIsland_Movement_PlayerExitHarbor
# 28 "data/maps/OneIsland_Frlg/scripts.pory"
# 17 "data/maps/OneIsland_Frlg/scripts.pory"
# 29 "data/maps/OneIsland_Frlg/scripts.pory"
	waitmovement 0
# 30 "data/maps/OneIsland_Frlg/scripts.pory"
# 18 "data/maps/OneIsland_Frlg/scripts.pory"
# 31 "data/maps/OneIsland_Frlg/scripts.pory"
	msgbox OneIsland_Text_BillLetsGoSeeCelio
# 32 "data/maps/OneIsland_Frlg/scripts.pory"
# 19 "data/maps/OneIsland_Frlg/scripts.pory"
# 33 "data/maps/OneIsland_Frlg/scripts.pory"
	closemessage
# 34 "data/maps/OneIsland_Frlg/scripts.pory"
# 20 "data/maps/OneIsland_Frlg/scripts.pory"
# 35 "data/maps/OneIsland_Frlg/scripts.pory"
	applymovement LOCALID_ONE_ISLAND_BILL, OneIsland_Movement_BillWalkToPokeCenter
# 36 "data/maps/OneIsland_Frlg/scripts.pory"
# 21 "data/maps/OneIsland_Frlg/scripts.pory"
# 37 "data/maps/OneIsland_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, OneIsland_Movement_PlayerWalkToPokeCenter
# 38 "data/maps/OneIsland_Frlg/scripts.pory"
# 22 "data/maps/OneIsland_Frlg/scripts.pory"
# 39 "data/maps/OneIsland_Frlg/scripts.pory"
	waitmovement 0
# 40 "data/maps/OneIsland_Frlg/scripts.pory"
# 23 "data/maps/OneIsland_Frlg/scripts.pory"
# 41 "data/maps/OneIsland_Frlg/scripts.pory"
	opendoor 14, 5
# 42 "data/maps/OneIsland_Frlg/scripts.pory"
# 24 "data/maps/OneIsland_Frlg/scripts.pory"
# 43 "data/maps/OneIsland_Frlg/scripts.pory"
	waitdooranim
# 44 "data/maps/OneIsland_Frlg/scripts.pory"
# 25 "data/maps/OneIsland_Frlg/scripts.pory"
# 45 "data/maps/OneIsland_Frlg/scripts.pory"
	applymovement LOCALID_ONE_ISLAND_BILL, OneIsland_Movement_BillEnterPokeCenter
# 46 "data/maps/OneIsland_Frlg/scripts.pory"
# 26 "data/maps/OneIsland_Frlg/scripts.pory"
# 47 "data/maps/OneIsland_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, OneIsland_Movement_PlayerEnterPokeCenter
# 48 "data/maps/OneIsland_Frlg/scripts.pory"
# 27 "data/maps/OneIsland_Frlg/scripts.pory"
# 49 "data/maps/OneIsland_Frlg/scripts.pory"
	waitmovement 0
# 50 "data/maps/OneIsland_Frlg/scripts.pory"
# 28 "data/maps/OneIsland_Frlg/scripts.pory"
# 51 "data/maps/OneIsland_Frlg/scripts.pory"
	closedoor 14, 5
# 52 "data/maps/OneIsland_Frlg/scripts.pory"
# 29 "data/maps/OneIsland_Frlg/scripts.pory"
# 53 "data/maps/OneIsland_Frlg/scripts.pory"
	waitdooranim
# 54 "data/maps/OneIsland_Frlg/scripts.pory"
# 30 "data/maps/OneIsland_Frlg/scripts.pory"
# 55 "data/maps/OneIsland_Frlg/scripts.pory"
	removeobject LOCALID_ONE_ISLAND_BILL
# 56 "data/maps/OneIsland_Frlg/scripts.pory"
# 31 "data/maps/OneIsland_Frlg/scripts.pory"
# 57 "data/maps/OneIsland_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_ONE_ISLAND_HARBOR, 3
# 58 "data/maps/OneIsland_Frlg/scripts.pory"
# 32 "data/maps/OneIsland_Frlg/scripts.pory"
# 59 "data/maps/OneIsland_Frlg/scripts.pory"
	warp MAP_ONE_ISLAND_POKEMON_CENTER_1F, 9, 9
# 60 "data/maps/OneIsland_Frlg/scripts.pory"
# 33 "data/maps/OneIsland_Frlg/scripts.pory"
# 61 "data/maps/OneIsland_Frlg/scripts.pory"
	waitstate
# 62 "data/maps/OneIsland_Frlg/scripts.pory"
# 34 "data/maps/OneIsland_Frlg/scripts.pory"
# 63 "data/maps/OneIsland_Frlg/scripts.pory"
	releaseall
# 64 "data/maps/OneIsland_Frlg/scripts.pory"
# 35 "data/maps/OneIsland_Frlg/scripts.pory"
# 65 "data/maps/OneIsland_Frlg/scripts.pory"
	end
# 66 "data/maps/OneIsland_Frlg/scripts.pory"
# 36 "data/maps/OneIsland_Frlg/scripts.pory"
# 67 "data/maps/OneIsland_Frlg/scripts.pory"
	walk_up
# 68 "data/maps/OneIsland_Frlg/scripts.pory"
# 37 "data/maps/OneIsland_Frlg/scripts.pory"
# 69 "data/maps/OneIsland_Frlg/scripts.pory"
	walk_up
# 70 "data/maps/OneIsland_Frlg/scripts.pory"
# 38 "data/maps/OneIsland_Frlg/scripts.pory"
# 71 "data/maps/OneIsland_Frlg/scripts.pory"
	walk_up
# 72 "data/maps/OneIsland_Frlg/scripts.pory"
# 39 "data/maps/OneIsland_Frlg/scripts.pory"
# 73 "data/maps/OneIsland_Frlg/scripts.pory"
	walk_up
# 74 "data/maps/OneIsland_Frlg/scripts.pory"
# 40 "data/maps/OneIsland_Frlg/scripts.pory"
# 75 "data/maps/OneIsland_Frlg/scripts.pory"
	walk_right
# 76 "data/maps/OneIsland_Frlg/scripts.pory"
# 41 "data/maps/OneIsland_Frlg/scripts.pory"
# 77 "data/maps/OneIsland_Frlg/scripts.pory"
	walk_right
# 78 "data/maps/OneIsland_Frlg/scripts.pory"
# 42 "data/maps/OneIsland_Frlg/scripts.pory"
# 79 "data/maps/OneIsland_Frlg/scripts.pory"
	walk_up
# 80 "data/maps/OneIsland_Frlg/scripts.pory"
# 43 "data/maps/OneIsland_Frlg/scripts.pory"
# 81 "data/maps/OneIsland_Frlg/scripts.pory"
	walk_up
# 82 "data/maps/OneIsland_Frlg/scripts.pory"
# 44 "data/maps/OneIsland_Frlg/scripts.pory"
# 83 "data/maps/OneIsland_Frlg/scripts.pory"
	walk_up
# 84 "data/maps/OneIsland_Frlg/scripts.pory"
# 45 "data/maps/OneIsland_Frlg/scripts.pory"
# 85 "data/maps/OneIsland_Frlg/scripts.pory"
	walk_up
# 86 "data/maps/OneIsland_Frlg/scripts.pory"
# 46 "data/maps/OneIsland_Frlg/scripts.pory"
# 87 "data/maps/OneIsland_Frlg/scripts.pory"
	walk_up
# 88 "data/maps/OneIsland_Frlg/scripts.pory"
	return
# 89 "data/maps/OneIsland_Frlg/scripts.pory"

# 90 "data/maps/OneIsland_Frlg/scripts.pory"

# 91 "data/maps/OneIsland_Frlg/scripts.pory"
OneIsland_Movement_PlayerWalkToPokeCenter::
# 92 "data/maps/OneIsland_Frlg/scripts.pory"
# 50 "data/maps/OneIsland_Frlg/scripts.pory"
# 93 "data/maps/OneIsland_Frlg/scripts.pory"
	walk_up
# 94 "data/maps/OneIsland_Frlg/scripts.pory"
# 51 "data/maps/OneIsland_Frlg/scripts.pory"
# 95 "data/maps/OneIsland_Frlg/scripts.pory"
	walk_to_pokecenter
# 96 "data/maps/OneIsland_Frlg/scripts.pory"
# 52 "data/maps/OneIsland_Frlg/scripts.pory"
# 97 "data/maps/OneIsland_Frlg/scripts.pory"
	step_end
# 98 "data/maps/OneIsland_Frlg/scripts.pory"
	return
# 99 "data/maps/OneIsland_Frlg/scripts.pory"

# 100 "data/maps/OneIsland_Frlg/scripts.pory"

# 101 "data/maps/OneIsland_Frlg/scripts.pory"
# 55 "data/maps/OneIsland_Frlg/scripts.pory"
# 102 "data/maps/OneIsland_Frlg/scripts.pory"
OneIsland_Movement_PlayerEnterPokeCenter:
# 103 "data/maps/OneIsland_Frlg/scripts.pory"
# 56 "data/maps/OneIsland_Frlg/scripts.pory"
# 104 "data/maps/OneIsland_Frlg/scripts.pory"
	walk_up
# 105 "data/maps/OneIsland_Frlg/scripts.pory"
# 57 "data/maps/OneIsland_Frlg/scripts.pory"
# 106 "data/maps/OneIsland_Frlg/scripts.pory"
	walk_up
# 107 "data/maps/OneIsland_Frlg/scripts.pory"
# 58 "data/maps/OneIsland_Frlg/scripts.pory"
# 108 "data/maps/OneIsland_Frlg/scripts.pory"
	set_invisible
# 109 "data/maps/OneIsland_Frlg/scripts.pory"
# 59 "data/maps/OneIsland_Frlg/scripts.pory"
# 110 "data/maps/OneIsland_Frlg/scripts.pory"
	step_end
# 111 "data/maps/OneIsland_Frlg/scripts.pory"

# 112 "data/maps/OneIsland_Frlg/scripts.pory"
# 62 "data/maps/OneIsland_Frlg/scripts.pory"
# 113 "data/maps/OneIsland_Frlg/scripts.pory"
OneIsland_Movement_PlayerExitHarbor:
# 114 "data/maps/OneIsland_Frlg/scripts.pory"
# 63 "data/maps/OneIsland_Frlg/scripts.pory"
# 115 "data/maps/OneIsland_Frlg/scripts.pory"
	walk_up
# 116 "data/maps/OneIsland_Frlg/scripts.pory"
# 64 "data/maps/OneIsland_Frlg/scripts.pory"
# 117 "data/maps/OneIsland_Frlg/scripts.pory"
	step_end
# 118 "data/maps/OneIsland_Frlg/scripts.pory"

# 119 "data/maps/OneIsland_Frlg/scripts.pory"
OneIsland_Movement_BillWalkToPokeCenter::
# 120 "data/maps/OneIsland_Frlg/scripts.pory"
# 68 "data/maps/OneIsland_Frlg/scripts.pory"
# 121 "data/maps/OneIsland_Frlg/scripts.pory"
	walk_to_pokecenter
# 122 "data/maps/OneIsland_Frlg/scripts.pory"
# 69 "data/maps/OneIsland_Frlg/scripts.pory"
# 123 "data/maps/OneIsland_Frlg/scripts.pory"
	walk_up
# 124 "data/maps/OneIsland_Frlg/scripts.pory"
# 70 "data/maps/OneIsland_Frlg/scripts.pory"
# 125 "data/maps/OneIsland_Frlg/scripts.pory"
	step_end
# 126 "data/maps/OneIsland_Frlg/scripts.pory"
	return
# 127 "data/maps/OneIsland_Frlg/scripts.pory"

# 128 "data/maps/OneIsland_Frlg/scripts.pory"

# 129 "data/maps/OneIsland_Frlg/scripts.pory"
# 73 "data/maps/OneIsland_Frlg/scripts.pory"
# 130 "data/maps/OneIsland_Frlg/scripts.pory"
OneIsland_Movement_BillEnterPokeCenter:
# 131 "data/maps/OneIsland_Frlg/scripts.pory"
# 74 "data/maps/OneIsland_Frlg/scripts.pory"
# 132 "data/maps/OneIsland_Frlg/scripts.pory"
	walk_up
# 133 "data/maps/OneIsland_Frlg/scripts.pory"
# 75 "data/maps/OneIsland_Frlg/scripts.pory"
# 134 "data/maps/OneIsland_Frlg/scripts.pory"
	set_invisible
# 135 "data/maps/OneIsland_Frlg/scripts.pory"
# 76 "data/maps/OneIsland_Frlg/scripts.pory"
# 136 "data/maps/OneIsland_Frlg/scripts.pory"
	step_end
# 137 "data/maps/OneIsland_Frlg/scripts.pory"

# 138 "data/maps/OneIsland_Frlg/scripts.pory"
OneIsland_EventScript_OldMan::
# 139 "data/maps/OneIsland_Frlg/scripts.pory"
# 80 "data/maps/OneIsland_Frlg/scripts.pory"
# 140 "data/maps/OneIsland_Frlg/scripts.pory"
	lock
# 141 "data/maps/OneIsland_Frlg/scripts.pory"
# 81 "data/maps/OneIsland_Frlg/scripts.pory"
# 142 "data/maps/OneIsland_Frlg/scripts.pory"
	faceplayer
# 143 "data/maps/OneIsland_Frlg/scripts.pory"
# 82 "data/maps/OneIsland_Frlg/scripts.pory"
# 144 "data/maps/OneIsland_Frlg/scripts.pory"
	goto_if_set FLAG_IS_CHAMPION, OneIsland_EventScript_OldMan_2
# 145 "data/maps/OneIsland_Frlg/scripts.pory"
OneIsland_EventScript_OldMan_1:
# 146 "data/maps/OneIsland_Frlg/scripts.pory"
# 85 "data/maps/OneIsland_Frlg/scripts.pory"
# 147 "data/maps/OneIsland_Frlg/scripts.pory"
	goto_if_set FLAG_SEVII_DETOUR_FINISHED, OneIsland_EventScript_OldMan_5
# 148 "data/maps/OneIsland_Frlg/scripts.pory"
OneIsland_EventScript_OldMan_4:
# 149 "data/maps/OneIsland_Frlg/scripts.pory"
# 88 "data/maps/OneIsland_Frlg/scripts.pory"
# 150 "data/maps/OneIsland_Frlg/scripts.pory"
	msgbox OneIsland_Text_LuckyToHaveCelioHere
# 151 "data/maps/OneIsland_Frlg/scripts.pory"
# 89 "data/maps/OneIsland_Frlg/scripts.pory"
# 152 "data/maps/OneIsland_Frlg/scripts.pory"
	release
# 153 "data/maps/OneIsland_Frlg/scripts.pory"
	end
# 154 "data/maps/OneIsland_Frlg/scripts.pory"

# 155 "data/maps/OneIsland_Frlg/scripts.pory"
OneIsland_EventScript_OldMan_2:
# 156 "data/maps/OneIsland_Frlg/scripts.pory"
# 83 "data/maps/OneIsland_Frlg/scripts.pory"
# 157 "data/maps/OneIsland_Frlg/scripts.pory"
	goto OneIsland_EventScript_OldManLinkHoenn
# 158 "data/maps/OneIsland_Frlg/scripts.pory"
	goto OneIsland_EventScript_OldMan_1
# 159 "data/maps/OneIsland_Frlg/scripts.pory"

# 160 "data/maps/OneIsland_Frlg/scripts.pory"
OneIsland_EventScript_OldMan_5:
# 161 "data/maps/OneIsland_Frlg/scripts.pory"
# 86 "data/maps/OneIsland_Frlg/scripts.pory"
# 162 "data/maps/OneIsland_Frlg/scripts.pory"
	goto OneIsland_EventScript_OldManLinkKanto
# 163 "data/maps/OneIsland_Frlg/scripts.pory"
	goto OneIsland_EventScript_OldMan_4
# 164 "data/maps/OneIsland_Frlg/scripts.pory"

# 165 "data/maps/OneIsland_Frlg/scripts.pory"

# 166 "data/maps/OneIsland_Frlg/scripts.pory"
OneIsland_EventScript_OldManLinkKanto::
# 167 "data/maps/OneIsland_Frlg/scripts.pory"
# 94 "data/maps/OneIsland_Frlg/scripts.pory"
# 168 "data/maps/OneIsland_Frlg/scripts.pory"
	msgbox OneIsland_Text_HavePCLinkageWithKanto
# 169 "data/maps/OneIsland_Frlg/scripts.pory"
# 95 "data/maps/OneIsland_Frlg/scripts.pory"
# 170 "data/maps/OneIsland_Frlg/scripts.pory"
	release
# 171 "data/maps/OneIsland_Frlg/scripts.pory"
	end
# 172 "data/maps/OneIsland_Frlg/scripts.pory"

# 173 "data/maps/OneIsland_Frlg/scripts.pory"

# 174 "data/maps/OneIsland_Frlg/scripts.pory"
OneIsland_EventScript_OldManLinkHoenn::
# 175 "data/maps/OneIsland_Frlg/scripts.pory"
# 100 "data/maps/OneIsland_Frlg/scripts.pory"
# 176 "data/maps/OneIsland_Frlg/scripts.pory"
	msgbox OneIsland_Text_HavePCLinkageWithHoenn
# 177 "data/maps/OneIsland_Frlg/scripts.pory"
# 101 "data/maps/OneIsland_Frlg/scripts.pory"
# 178 "data/maps/OneIsland_Frlg/scripts.pory"
	release
# 179 "data/maps/OneIsland_Frlg/scripts.pory"
	end
# 180 "data/maps/OneIsland_Frlg/scripts.pory"

# 181 "data/maps/OneIsland_Frlg/scripts.pory"

# 182 "data/maps/OneIsland_Frlg/scripts.pory"
OneIsland_EventScript_BaldingMan::
# 183 "data/maps/OneIsland_Frlg/scripts.pory"
# 106 "data/maps/OneIsland_Frlg/scripts.pory"
# 184 "data/maps/OneIsland_Frlg/scripts.pory"
	msgbox OneIsland_Text_IsntWarmClimateHereGreat, MSGBOX_NPC
# 185 "data/maps/OneIsland_Frlg/scripts.pory"
	end
# 186 "data/maps/OneIsland_Frlg/scripts.pory"

# 187 "data/maps/OneIsland_Frlg/scripts.pory"

# 188 "data/maps/OneIsland_Frlg/scripts.pory"
OneIsland_EventScript_IslandSign::
# 189 "data/maps/OneIsland_Frlg/scripts.pory"
# 111 "data/maps/OneIsland_Frlg/scripts.pory"
# 190 "data/maps/OneIsland_Frlg/scripts.pory"
	msgbox OneIsland_Text_IslandSign, MSGBOX_SIGN
# 191 "data/maps/OneIsland_Frlg/scripts.pory"
	end
# 192 "data/maps/OneIsland_Frlg/scripts.pory"

# 193 "data/maps/OneIsland_Frlg/scripts.pory"

# 194 "data/maps/OneIsland_Frlg/scripts.pory"
OneIsland_EventScript_PokemonNetCenterSign::
# 195 "data/maps/OneIsland_Frlg/scripts.pory"
# 116 "data/maps/OneIsland_Frlg/scripts.pory"
# 196 "data/maps/OneIsland_Frlg/scripts.pory"
	msgbox OneIsland_Text_PokemonNetCenterSign, MSGBOX_SIGN
# 197 "data/maps/OneIsland_Frlg/scripts.pory"
	end
# 198 "data/maps/OneIsland_Frlg/scripts.pory"

# 199 "data/maps/OneIsland_Frlg/scripts.pory"

# 200 "data/maps/OneIsland_Frlg/scripts.pory"
OneIsland_Text_BillLetsGoSeeCelio::
# 201 "data/maps/OneIsland_Frlg/scripts.pory"
# 120 "data/maps/OneIsland_Frlg/scripts.pory"
# 202 "data/maps/OneIsland_Frlg/scripts.pory"
	.string "BILL: Here we are!\n"
# 203 "data/maps/OneIsland_Frlg/scripts.pory"
	.string "This is ONE ISLAND.\p"
# 204 "data/maps/OneIsland_Frlg/scripts.pory"
	.string "There are several islands around\n"
# 205 "data/maps/OneIsland_Frlg/scripts.pory"
	.string "here, and this is one of them.\p"
# 206 "data/maps/OneIsland_Frlg/scripts.pory"
	.string "My friend CELIO sent the boat to\n"
# 207 "data/maps/OneIsland_Frlg/scripts.pory"
	.string "fetch me here.\p"
# 208 "data/maps/OneIsland_Frlg/scripts.pory"
	.string "He's in charge of the island's PC\n"
# 209 "data/maps/OneIsland_Frlg/scripts.pory"
	.string "network by his lonesome.\p"
# 210 "data/maps/OneIsland_Frlg/scripts.pory"
	.string "…Why am I telling you this now?\n"
# 211 "data/maps/OneIsland_Frlg/scripts.pory"
	.string "Let's just go see CELIO!$"
# 212 "data/maps/OneIsland_Frlg/scripts.pory"

# 213 "data/maps/OneIsland_Frlg/scripts.pory"
Text_WhereDoYouWantToSail::
# 214 "data/maps/OneIsland_Frlg/scripts.pory"
# 133 "data/maps/OneIsland_Frlg/scripts.pory"
# 215 "data/maps/OneIsland_Frlg/scripts.pory"
	.string "Ahoy, there!\n"
# 216 "data/maps/OneIsland_Frlg/scripts.pory"
	.string "Where do you want to sail?$"
# 217 "data/maps/OneIsland_Frlg/scripts.pory"

# 218 "data/maps/OneIsland_Frlg/scripts.pory"
OneIsland_Text_LuckyToHaveCelioHere::
# 219 "data/maps/OneIsland_Frlg/scripts.pory"
# 138 "data/maps/OneIsland_Frlg/scripts.pory"
# 220 "data/maps/OneIsland_Frlg/scripts.pory"
	.string "Here we are on an island smack in\n"
# 221 "data/maps/OneIsland_Frlg/scripts.pory"
	.string "the middle of nowhere.\p"
# 222 "data/maps/OneIsland_Frlg/scripts.pory"
	.string "We're lucky to have an upstanding\n"
# 223 "data/maps/OneIsland_Frlg/scripts.pory"
	.string "young man like CELIO here.\p"
# 224 "data/maps/OneIsland_Frlg/scripts.pory"
	.string "My granddaughter was in a tizzy\n"
# 225 "data/maps/OneIsland_Frlg/scripts.pory"
	.string "over CELIO's friend.\p"
# 226 "data/maps/OneIsland_Frlg/scripts.pory"
	.string "Something about a famous\n"
# 227 "data/maps/OneIsland_Frlg/scripts.pory"
	.string "POKéMANIAC?\p"
# 228 "data/maps/OneIsland_Frlg/scripts.pory"
	.string "I'm not sure what that means, but\n"
# 229 "data/maps/OneIsland_Frlg/scripts.pory"
	.string "CELIO is quite the man!$"
# 230 "data/maps/OneIsland_Frlg/scripts.pory"

# 231 "data/maps/OneIsland_Frlg/scripts.pory"
OneIsland_Text_HavePCLinkageWithKanto::
# 232 "data/maps/OneIsland_Frlg/scripts.pory"
# 151 "data/maps/OneIsland_Frlg/scripts.pory"
# 233 "data/maps/OneIsland_Frlg/scripts.pory"
	.string "My granddaughter was in a tizzy\n"
# 234 "data/maps/OneIsland_Frlg/scripts.pory"
	.string "over a new breakthrough.\p"
# 235 "data/maps/OneIsland_Frlg/scripts.pory"
	.string "She said we now have PC linkage\n"
# 236 "data/maps/OneIsland_Frlg/scripts.pory"
	.string "with people in KANTO.\p"
# 237 "data/maps/OneIsland_Frlg/scripts.pory"
	.string "I'm not sure what that means, but\n"
# 238 "data/maps/OneIsland_Frlg/scripts.pory"
	.string "CELIO is quite the man!$"
# 239 "data/maps/OneIsland_Frlg/scripts.pory"

# 240 "data/maps/OneIsland_Frlg/scripts.pory"
OneIsland_Text_HavePCLinkageWithHoenn::
# 241 "data/maps/OneIsland_Frlg/scripts.pory"
# 160 "data/maps/OneIsland_Frlg/scripts.pory"
# 242 "data/maps/OneIsland_Frlg/scripts.pory"
	.string "My granddaughter was in a tizzy\n"
# 243 "data/maps/OneIsland_Frlg/scripts.pory"
	.string "over a new breakthrough.\p"
# 244 "data/maps/OneIsland_Frlg/scripts.pory"
	.string "She said we finally have PC linkage\n"
# 245 "data/maps/OneIsland_Frlg/scripts.pory"
	.string "with people in HOENN.\p"
# 246 "data/maps/OneIsland_Frlg/scripts.pory"
	.string "I'm not sure what that means, but\n"
# 247 "data/maps/OneIsland_Frlg/scripts.pory"
	.string "CELIO is quite the man.\p"
# 248 "data/maps/OneIsland_Frlg/scripts.pory"
	.string "He would make a fine husband for\n"
# 249 "data/maps/OneIsland_Frlg/scripts.pory"
	.string "my granddaughter!$"
# 250 "data/maps/OneIsland_Frlg/scripts.pory"

# 251 "data/maps/OneIsland_Frlg/scripts.pory"
OneIsland_Text_IslandSign::
# 252 "data/maps/OneIsland_Frlg/scripts.pory"
# 171 "data/maps/OneIsland_Frlg/scripts.pory"
# 253 "data/maps/OneIsland_Frlg/scripts.pory"
	.string "ONE ISLAND\n"
# 254 "data/maps/OneIsland_Frlg/scripts.pory"
	.string "Friends Gather at Knot Island$"
# 255 "data/maps/OneIsland_Frlg/scripts.pory"

# 256 "data/maps/OneIsland_Frlg/scripts.pory"
OneIsland_Text_PokemonNetCenterSign::
# 257 "data/maps/OneIsland_Frlg/scripts.pory"
# 176 "data/maps/OneIsland_Frlg/scripts.pory"
# 258 "data/maps/OneIsland_Frlg/scripts.pory"
	.string "Expanding the POKéMON World!\n"
# 259 "data/maps/OneIsland_Frlg/scripts.pory"
	.string "POKéMON NET CENTER$"
# 260 "data/maps/OneIsland_Frlg/scripts.pory"

# 261 "data/maps/OneIsland_Frlg/scripts.pory"
OneIsland_Text_ReturnToCinnabar::
# 262 "data/maps/OneIsland_Frlg/scripts.pory"
# 181 "data/maps/OneIsland_Frlg/scripts.pory"
# 263 "data/maps/OneIsland_Frlg/scripts.pory"
	.string "グレンタウンに　もどりますか？$"
# 264 "data/maps/OneIsland_Frlg/scripts.pory"

# 265 "data/maps/OneIsland_Frlg/scripts.pory"
OneIsland_Text_IsntWarmClimateHereGreat::
# 266 "data/maps/OneIsland_Frlg/scripts.pory"
# 185 "data/maps/OneIsland_Frlg/scripts.pory"
# 267 "data/maps/OneIsland_Frlg/scripts.pory"
	.string "Hi, sight-seeing, are you?\n"
# 268 "data/maps/OneIsland_Frlg/scripts.pory"
	.string "Isn't the warm climate here great?$"
