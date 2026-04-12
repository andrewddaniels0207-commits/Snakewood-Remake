# 1 "data/maps/VermilionCity_Frlg/scripts.pory"

# 2 "data/maps/VermilionCity_Frlg/scripts.pory"
VermilionCity_Frlg_MapScripts::
# 3 "data/maps/VermilionCity_Frlg/scripts.pory"
# 2 "data/maps/VermilionCity_Frlg/scripts.pory"
# 4 "data/maps/VermilionCity_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, VermilionCity_OnTransition
# 5 "data/maps/VermilionCity_Frlg/scripts.pory"
# 3 "data/maps/VermilionCity_Frlg/scripts.pory"
# 6 "data/maps/VermilionCity_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, VermilionCity_Frlg_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 7 "data/maps/VermilionCity_Frlg/scripts.pory"
	.byte 0
# 8 "data/maps/VermilionCity_Frlg/scripts.pory"

# 9 "data/maps/VermilionCity_Frlg/scripts.pory"
VermilionCity_Frlg_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 10 "data/maps/VermilionCity_Frlg/scripts.pory"
# 4 "data/maps/VermilionCity_Frlg/scripts.pory"
# 11 "data/maps/VermilionCity_Frlg/scripts.pory"
	map_script_2 VAR_MAP_SCENE_VERMILION_CITY, 2, VermilionCity_EventScript_ExitSSAnne
# 12 "data/maps/VermilionCity_Frlg/scripts.pory"
	.2byte 0
# 13 "data/maps/VermilionCity_Frlg/scripts.pory"

# 14 "data/maps/VermilionCity_Frlg/scripts.pory"

# 15 "data/maps/VermilionCity_Frlg/scripts.pory"
VermilionCity_EventScript_ExitSSAnne::
# 16 "data/maps/VermilionCity_Frlg/scripts.pory"
# 9 "data/maps/VermilionCity_Frlg/scripts.pory"
# 17 "data/maps/VermilionCity_Frlg/scripts.pory"
	lockall
# 18 "data/maps/VermilionCity_Frlg/scripts.pory"
# 10 "data/maps/VermilionCity_Frlg/scripts.pory"
# 19 "data/maps/VermilionCity_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, VermilionCity_Movement_ExitSSAnne
# 20 "data/maps/VermilionCity_Frlg/scripts.pory"
# 11 "data/maps/VermilionCity_Frlg/scripts.pory"
# 21 "data/maps/VermilionCity_Frlg/scripts.pory"
	waitmovement 0
# 22 "data/maps/VermilionCity_Frlg/scripts.pory"
# 12 "data/maps/VermilionCity_Frlg/scripts.pory"
# 23 "data/maps/VermilionCity_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_VERMILION_CITY, 3
# 24 "data/maps/VermilionCity_Frlg/scripts.pory"
# 13 "data/maps/VermilionCity_Frlg/scripts.pory"
# 25 "data/maps/VermilionCity_Frlg/scripts.pory"
	releaseall
# 26 "data/maps/VermilionCity_Frlg/scripts.pory"
	end
# 27 "data/maps/VermilionCity_Frlg/scripts.pory"

# 28 "data/maps/VermilionCity_Frlg/scripts.pory"

# 29 "data/maps/VermilionCity_Frlg/scripts.pory"
# 17 "data/maps/VermilionCity_Frlg/scripts.pory"
# 30 "data/maps/VermilionCity_Frlg/scripts.pory"
VermilionCity_Movement_ExitSSAnne:
# 31 "data/maps/VermilionCity_Frlg/scripts.pory"
# 18 "data/maps/VermilionCity_Frlg/scripts.pory"
# 32 "data/maps/VermilionCity_Frlg/scripts.pory"
	walk_up
# 33 "data/maps/VermilionCity_Frlg/scripts.pory"
# 19 "data/maps/VermilionCity_Frlg/scripts.pory"
# 34 "data/maps/VermilionCity_Frlg/scripts.pory"
	walk_up
# 35 "data/maps/VermilionCity_Frlg/scripts.pory"
# 20 "data/maps/VermilionCity_Frlg/scripts.pory"
# 36 "data/maps/VermilionCity_Frlg/scripts.pory"
	step_end
# 37 "data/maps/VermilionCity_Frlg/scripts.pory"

# 38 "data/maps/VermilionCity_Frlg/scripts.pory"
VermilionCity_OnTransition::
# 39 "data/maps/VermilionCity_Frlg/scripts.pory"
# 24 "data/maps/VermilionCity_Frlg/scripts.pory"
# 40 "data/maps/VermilionCity_Frlg/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_VERMILION_CITY
# 41 "data/maps/VermilionCity_Frlg/scripts.pory"
# 25 "data/maps/VermilionCity_Frlg/scripts.pory"
# 42 "data/maps/VermilionCity_Frlg/scripts.pory"
	goto_if_set FLAG_TALKED_TO_OAKS_AIDE_IN_VERMILION, VermilionCity_OnTransition_2
# 43 "data/maps/VermilionCity_Frlg/scripts.pory"
VermilionCity_OnTransition_1:
# 44 "data/maps/VermilionCity_Frlg/scripts.pory"
	end
# 45 "data/maps/VermilionCity_Frlg/scripts.pory"

# 46 "data/maps/VermilionCity_Frlg/scripts.pory"
VermilionCity_OnTransition_2:
# 47 "data/maps/VermilionCity_Frlg/scripts.pory"
# 26 "data/maps/VermilionCity_Frlg/scripts.pory"
# 48 "data/maps/VermilionCity_Frlg/scripts.pory"
	call VermilionCity_EventScript_HideOaksAide
# 49 "data/maps/VermilionCity_Frlg/scripts.pory"
	goto VermilionCity_OnTransition_1
# 50 "data/maps/VermilionCity_Frlg/scripts.pory"

# 51 "data/maps/VermilionCity_Frlg/scripts.pory"

# 52 "data/maps/VermilionCity_Frlg/scripts.pory"
VermilionCity_EventScript_HideOaksAide::
# 53 "data/maps/VermilionCity_Frlg/scripts.pory"
# 32 "data/maps/VermilionCity_Frlg/scripts.pory"
# 54 "data/maps/VermilionCity_Frlg/scripts.pory"
	setflag FLAG_HIDE_VERMILION_CITY_OAKS_AIDE
# 55 "data/maps/VermilionCity_Frlg/scripts.pory"
	return
# 56 "data/maps/VermilionCity_Frlg/scripts.pory"

# 57 "data/maps/VermilionCity_Frlg/scripts.pory"

# 58 "data/maps/VermilionCity_Frlg/scripts.pory"
VermilionCity_EventScript_Woman::
# 59 "data/maps/VermilionCity_Frlg/scripts.pory"
# 37 "data/maps/VermilionCity_Frlg/scripts.pory"
# 60 "data/maps/VermilionCity_Frlg/scripts.pory"
	msgbox VermilionCity_Text_GrimerMultipliesInSludge, MSGBOX_NPC
# 61 "data/maps/VermilionCity_Frlg/scripts.pory"
	end
# 62 "data/maps/VermilionCity_Frlg/scripts.pory"

# 63 "data/maps/VermilionCity_Frlg/scripts.pory"

# 64 "data/maps/VermilionCity_Frlg/scripts.pory"
VermilionCity_EventScript_OldMan1::
# 65 "data/maps/VermilionCity_Frlg/scripts.pory"
# 42 "data/maps/VermilionCity_Frlg/scripts.pory"
# 66 "data/maps/VermilionCity_Frlg/scripts.pory"
	lock
# 67 "data/maps/VermilionCity_Frlg/scripts.pory"
# 43 "data/maps/VermilionCity_Frlg/scripts.pory"
# 68 "data/maps/VermilionCity_Frlg/scripts.pory"
	faceplayer
# 69 "data/maps/VermilionCity_Frlg/scripts.pory"
# 44 "data/maps/VermilionCity_Frlg/scripts.pory"
# 70 "data/maps/VermilionCity_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_VERMILION_CITY, 3
# 71 "data/maps/VermilionCity_Frlg/scripts.pory"
	goto_if_eq VermilionCity_EventScript_OldMan1_2
# 72 "data/maps/VermilionCity_Frlg/scripts.pory"
VermilionCity_EventScript_OldMan1_1:
# 73 "data/maps/VermilionCity_Frlg/scripts.pory"
# 47 "data/maps/VermilionCity_Frlg/scripts.pory"
# 74 "data/maps/VermilionCity_Frlg/scripts.pory"
	msgbox VermilionCity_Text_DidYouSeeSSAnneInHarbor
# 75 "data/maps/VermilionCity_Frlg/scripts.pory"
# 48 "data/maps/VermilionCity_Frlg/scripts.pory"
# 76 "data/maps/VermilionCity_Frlg/scripts.pory"
	release
# 77 "data/maps/VermilionCity_Frlg/scripts.pory"
	end
# 78 "data/maps/VermilionCity_Frlg/scripts.pory"

# 79 "data/maps/VermilionCity_Frlg/scripts.pory"
VermilionCity_EventScript_OldMan1_2:
# 80 "data/maps/VermilionCity_Frlg/scripts.pory"
# 45 "data/maps/VermilionCity_Frlg/scripts.pory"
# 81 "data/maps/VermilionCity_Frlg/scripts.pory"
	goto VermilionCity_EventScript_OldMan1SSAnneLeft
# 82 "data/maps/VermilionCity_Frlg/scripts.pory"
	goto VermilionCity_EventScript_OldMan1_1
# 83 "data/maps/VermilionCity_Frlg/scripts.pory"

# 84 "data/maps/VermilionCity_Frlg/scripts.pory"

# 85 "data/maps/VermilionCity_Frlg/scripts.pory"
VermilionCity_EventScript_OldMan1SSAnneLeft::
# 86 "data/maps/VermilionCity_Frlg/scripts.pory"
# 53 "data/maps/VermilionCity_Frlg/scripts.pory"
# 87 "data/maps/VermilionCity_Frlg/scripts.pory"
	msgbox VermilionCity_Text_SSAnneHasDepartedForYear
# 88 "data/maps/VermilionCity_Frlg/scripts.pory"
# 54 "data/maps/VermilionCity_Frlg/scripts.pory"
# 89 "data/maps/VermilionCity_Frlg/scripts.pory"
	release
# 90 "data/maps/VermilionCity_Frlg/scripts.pory"
	end
# 91 "data/maps/VermilionCity_Frlg/scripts.pory"

# 92 "data/maps/VermilionCity_Frlg/scripts.pory"

# 93 "data/maps/VermilionCity_Frlg/scripts.pory"
VermilionCity_EventScript_FerrySailor::
# 94 "data/maps/VermilionCity_Frlg/scripts.pory"
# 59 "data/maps/VermilionCity_Frlg/scripts.pory"
# 95 "data/maps/VermilionCity_Frlg/scripts.pory"
	lock
# 96 "data/maps/VermilionCity_Frlg/scripts.pory"
# 60 "data/maps/VermilionCity_Frlg/scripts.pory"
# 97 "data/maps/VermilionCity_Frlg/scripts.pory"
	faceplayer
# 98 "data/maps/VermilionCity_Frlg/scripts.pory"
# 61 "data/maps/VermilionCity_Frlg/scripts.pory"
# 99 "data/maps/VermilionCity_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_VERMILION_CITY, 3
# 100 "data/maps/VermilionCity_Frlg/scripts.pory"
	goto_if_eq VermilionCity_EventScript_FerrySailor_2
# 101 "data/maps/VermilionCity_Frlg/scripts.pory"
VermilionCity_EventScript_FerrySailor_1:
# 102 "data/maps/VermilionCity_Frlg/scripts.pory"
# 64 "data/maps/VermilionCity_Frlg/scripts.pory"
# 103 "data/maps/VermilionCity_Frlg/scripts.pory"
	msgbox VermilionCity_Text_WelcomeToTheSSAnne
# 104 "data/maps/VermilionCity_Frlg/scripts.pory"
# 65 "data/maps/VermilionCity_Frlg/scripts.pory"
# 105 "data/maps/VermilionCity_Frlg/scripts.pory"
	release
# 106 "data/maps/VermilionCity_Frlg/scripts.pory"
	end
# 107 "data/maps/VermilionCity_Frlg/scripts.pory"

# 108 "data/maps/VermilionCity_Frlg/scripts.pory"
VermilionCity_EventScript_FerrySailor_2:
# 109 "data/maps/VermilionCity_Frlg/scripts.pory"
# 62 "data/maps/VermilionCity_Frlg/scripts.pory"
# 110 "data/maps/VermilionCity_Frlg/scripts.pory"
	goto VermilionCity_EventScript_CheckSeagallopPresent
# 111 "data/maps/VermilionCity_Frlg/scripts.pory"
	goto VermilionCity_EventScript_FerrySailor_1
# 112 "data/maps/VermilionCity_Frlg/scripts.pory"

# 113 "data/maps/VermilionCity_Frlg/scripts.pory"

# 114 "data/maps/VermilionCity_Frlg/scripts.pory"
VermilionCity_EventScript_CheckHasMysticTicket::
# 115 "data/maps/VermilionCity_Frlg/scripts.pory"
# 70 "data/maps/VermilionCity_Frlg/scripts.pory"
# 116 "data/maps/VermilionCity_Frlg/scripts.pory"
	goto_if_unset FLAG_ENABLE_SHIP_NAVEL_ROCK, VermilionCity_EventScript_CheckHasMysticTicket_2
# 117 "data/maps/VermilionCity_Frlg/scripts.pory"
VermilionCity_EventScript_CheckHasMysticTicket_1:
# 118 "data/maps/VermilionCity_Frlg/scripts.pory"
# 73 "data/maps/VermilionCity_Frlg/scripts.pory"
# 119 "data/maps/VermilionCity_Frlg/scripts.pory"
	checkitem ITEM_MYSTIC_TICKET
# 120 "data/maps/VermilionCity_Frlg/scripts.pory"
# 74 "data/maps/VermilionCity_Frlg/scripts.pory"
# 121 "data/maps/VermilionCity_Frlg/scripts.pory"
	compare VAR_RESULT, FALSE
# 122 "data/maps/VermilionCity_Frlg/scripts.pory"
	goto_if_eq VermilionCity_EventScript_CheckHasMysticTicket_5
# 123 "data/maps/VermilionCity_Frlg/scripts.pory"
VermilionCity_EventScript_CheckHasMysticTicket_4:
# 124 "data/maps/VermilionCity_Frlg/scripts.pory"
# 77 "data/maps/VermilionCity_Frlg/scripts.pory"
# 125 "data/maps/VermilionCity_Frlg/scripts.pory"
	goto EventScript_SetResultTrue
# 126 "data/maps/VermilionCity_Frlg/scripts.pory"
	end
# 127 "data/maps/VermilionCity_Frlg/scripts.pory"

# 128 "data/maps/VermilionCity_Frlg/scripts.pory"
VermilionCity_EventScript_CheckHasMysticTicket_2:
# 129 "data/maps/VermilionCity_Frlg/scripts.pory"
# 71 "data/maps/VermilionCity_Frlg/scripts.pory"
# 130 "data/maps/VermilionCity_Frlg/scripts.pory"
	goto EventScript_SetResultFalse
# 131 "data/maps/VermilionCity_Frlg/scripts.pory"
	goto VermilionCity_EventScript_CheckHasMysticTicket_1
# 132 "data/maps/VermilionCity_Frlg/scripts.pory"

# 133 "data/maps/VermilionCity_Frlg/scripts.pory"
VermilionCity_EventScript_CheckHasMysticTicket_5:
# 134 "data/maps/VermilionCity_Frlg/scripts.pory"
# 75 "data/maps/VermilionCity_Frlg/scripts.pory"
# 135 "data/maps/VermilionCity_Frlg/scripts.pory"
	goto EventScript_SetResultFalse
# 136 "data/maps/VermilionCity_Frlg/scripts.pory"
	goto VermilionCity_EventScript_CheckHasMysticTicket_4
# 137 "data/maps/VermilionCity_Frlg/scripts.pory"

# 138 "data/maps/VermilionCity_Frlg/scripts.pory"

# 139 "data/maps/VermilionCity_Frlg/scripts.pory"
VermilionCity_EventScript_CheckHasAuroraTicket::
# 140 "data/maps/VermilionCity_Frlg/scripts.pory"
# 82 "data/maps/VermilionCity_Frlg/scripts.pory"
# 141 "data/maps/VermilionCity_Frlg/scripts.pory"
	goto_if_unset FLAG_ENABLE_SHIP_BIRTH_ISLAND, VermilionCity_EventScript_CheckHasAuroraTicket_2
# 142 "data/maps/VermilionCity_Frlg/scripts.pory"
VermilionCity_EventScript_CheckHasAuroraTicket_1:
# 143 "data/maps/VermilionCity_Frlg/scripts.pory"
# 85 "data/maps/VermilionCity_Frlg/scripts.pory"
# 144 "data/maps/VermilionCity_Frlg/scripts.pory"
	checkitem ITEM_AURORA_TICKET
# 145 "data/maps/VermilionCity_Frlg/scripts.pory"
# 86 "data/maps/VermilionCity_Frlg/scripts.pory"
# 146 "data/maps/VermilionCity_Frlg/scripts.pory"
	compare VAR_RESULT, FALSE
# 147 "data/maps/VermilionCity_Frlg/scripts.pory"
	goto_if_eq VermilionCity_EventScript_CheckHasAuroraTicket_5
# 148 "data/maps/VermilionCity_Frlg/scripts.pory"
VermilionCity_EventScript_CheckHasAuroraTicket_4:
# 149 "data/maps/VermilionCity_Frlg/scripts.pory"
# 89 "data/maps/VermilionCity_Frlg/scripts.pory"
# 150 "data/maps/VermilionCity_Frlg/scripts.pory"
	goto EventScript_SetResultTrue
# 151 "data/maps/VermilionCity_Frlg/scripts.pory"
	end
# 152 "data/maps/VermilionCity_Frlg/scripts.pory"

# 153 "data/maps/VermilionCity_Frlg/scripts.pory"
VermilionCity_EventScript_CheckHasAuroraTicket_2:
# 154 "data/maps/VermilionCity_Frlg/scripts.pory"
# 83 "data/maps/VermilionCity_Frlg/scripts.pory"
# 155 "data/maps/VermilionCity_Frlg/scripts.pory"
	goto EventScript_SetResultFalse
# 156 "data/maps/VermilionCity_Frlg/scripts.pory"
	goto VermilionCity_EventScript_CheckHasAuroraTicket_1
# 157 "data/maps/VermilionCity_Frlg/scripts.pory"

# 158 "data/maps/VermilionCity_Frlg/scripts.pory"
VermilionCity_EventScript_CheckHasAuroraTicket_5:
# 159 "data/maps/VermilionCity_Frlg/scripts.pory"
# 87 "data/maps/VermilionCity_Frlg/scripts.pory"
# 160 "data/maps/VermilionCity_Frlg/scripts.pory"
	goto EventScript_SetResultFalse
# 161 "data/maps/VermilionCity_Frlg/scripts.pory"
	goto VermilionCity_EventScript_CheckHasAuroraTicket_4
# 162 "data/maps/VermilionCity_Frlg/scripts.pory"

# 163 "data/maps/VermilionCity_Frlg/scripts.pory"

# 164 "data/maps/VermilionCity_Frlg/scripts.pory"
VermilionCity_EventScript_CheckSeagallopPresent::
# 165 "data/maps/VermilionCity_Frlg/scripts.pory"
# 94 "data/maps/VermilionCity_Frlg/scripts.pory"
# 166 "data/maps/VermilionCity_Frlg/scripts.pory"
	setvar VAR_0x8004, SEAGALLOP_VERMILION_CITY
# 167 "data/maps/VermilionCity_Frlg/scripts.pory"
# 95 "data/maps/VermilionCity_Frlg/scripts.pory"
# 168 "data/maps/VermilionCity_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 5
# 169 "data/maps/VermilionCity_Frlg/scripts.pory"
	goto_if_ge VermilionCity_EventScript_CheckSeagallopPresent_2
# 170 "data/maps/VermilionCity_Frlg/scripts.pory"
VermilionCity_EventScript_CheckSeagallopPresent_1:
# 171 "data/maps/VermilionCity_Frlg/scripts.pory"
# 98 "data/maps/VermilionCity_Frlg/scripts.pory"
# 172 "data/maps/VermilionCity_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 1
# 173 "data/maps/VermilionCity_Frlg/scripts.pory"
	goto_if_ge VermilionCity_EventScript_CheckSeagallopPresent_5
# 174 "data/maps/VermilionCity_Frlg/scripts.pory"
VermilionCity_EventScript_CheckSeagallopPresent_4:
# 175 "data/maps/VermilionCity_Frlg/scripts.pory"
# 101 "data/maps/VermilionCity_Frlg/scripts.pory"
# 176 "data/maps/VermilionCity_Frlg/scripts.pory"
	msgbox VermilionCity_Text_TheShipSetSail
# 177 "data/maps/VermilionCity_Frlg/scripts.pory"
# 102 "data/maps/VermilionCity_Frlg/scripts.pory"
# 178 "data/maps/VermilionCity_Frlg/scripts.pory"
	release
# 179 "data/maps/VermilionCity_Frlg/scripts.pory"
	end
# 180 "data/maps/VermilionCity_Frlg/scripts.pory"

# 181 "data/maps/VermilionCity_Frlg/scripts.pory"
VermilionCity_EventScript_CheckSeagallopPresent_2:
# 182 "data/maps/VermilionCity_Frlg/scripts.pory"
# 96 "data/maps/VermilionCity_Frlg/scripts.pory"
# 183 "data/maps/VermilionCity_Frlg/scripts.pory"
	goto VermilionCity_EventScript_ChooseSeagallopDestRainbowPass
# 184 "data/maps/VermilionCity_Frlg/scripts.pory"
	goto VermilionCity_EventScript_CheckSeagallopPresent_1
# 185 "data/maps/VermilionCity_Frlg/scripts.pory"

# 186 "data/maps/VermilionCity_Frlg/scripts.pory"
VermilionCity_EventScript_CheckSeagallopPresent_5:
# 187 "data/maps/VermilionCity_Frlg/scripts.pory"
# 99 "data/maps/VermilionCity_Frlg/scripts.pory"
# 188 "data/maps/VermilionCity_Frlg/scripts.pory"
	goto VermilionCity_EventScript_ChooseSeagallopDestTriPass
# 189 "data/maps/VermilionCity_Frlg/scripts.pory"
	goto VermilionCity_EventScript_CheckSeagallopPresent_4
# 190 "data/maps/VermilionCity_Frlg/scripts.pory"

# 191 "data/maps/VermilionCity_Frlg/scripts.pory"

# 192 "data/maps/VermilionCity_Frlg/scripts.pory"
VermilionCity_EventScript_ChooseSeagallopDestRainbowPass::
# 193 "data/maps/VermilionCity_Frlg/scripts.pory"
# 107 "data/maps/VermilionCity_Frlg/scripts.pory"
# 194 "data/maps/VermilionCity_Frlg/scripts.pory"
	call VermilionCity_EventScript_CheckHasMysticTicket
# 195 "data/maps/VermilionCity_Frlg/scripts.pory"
# 108 "data/maps/VermilionCity_Frlg/scripts.pory"
# 196 "data/maps/VermilionCity_Frlg/scripts.pory"
	compare VAR_RESULT, TRUE
# 197 "data/maps/VermilionCity_Frlg/scripts.pory"
	goto_if_eq VermilionCity_EventScript_ChooseSeagallopDestRainbowPass_2
# 198 "data/maps/VermilionCity_Frlg/scripts.pory"
VermilionCity_EventScript_ChooseSeagallopDestRainbowPass_1:
# 199 "data/maps/VermilionCity_Frlg/scripts.pory"
# 111 "data/maps/VermilionCity_Frlg/scripts.pory"
# 200 "data/maps/VermilionCity_Frlg/scripts.pory"
	call VermilionCity_EventScript_CheckHasAuroraTicket
# 201 "data/maps/VermilionCity_Frlg/scripts.pory"
# 112 "data/maps/VermilionCity_Frlg/scripts.pory"
# 202 "data/maps/VermilionCity_Frlg/scripts.pory"
	compare VAR_RESULT, TRUE
# 203 "data/maps/VermilionCity_Frlg/scripts.pory"
	goto_if_eq VermilionCity_EventScript_ChooseSeagallopDestRainbowPass_5
# 204 "data/maps/VermilionCity_Frlg/scripts.pory"
VermilionCity_EventScript_ChooseSeagallopDestRainbowPass_4:
# 205 "data/maps/VermilionCity_Frlg/scripts.pory"
# 115 "data/maps/VermilionCity_Frlg/scripts.pory"
# 206 "data/maps/VermilionCity_Frlg/scripts.pory"
	setvar VAR_0x8004, SEAGALLOP_VERMILION_CITY
# 207 "data/maps/VermilionCity_Frlg/scripts.pory"
# 116 "data/maps/VermilionCity_Frlg/scripts.pory"
# 208 "data/maps/VermilionCity_Frlg/scripts.pory"
	message VermilionCity_Text_BoardSeagallopRainbowPass
# 209 "data/maps/VermilionCity_Frlg/scripts.pory"
# 117 "data/maps/VermilionCity_Frlg/scripts.pory"
# 210 "data/maps/VermilionCity_Frlg/scripts.pory"
	waitmessage
# 211 "data/maps/VermilionCity_Frlg/scripts.pory"
# 118 "data/maps/VermilionCity_Frlg/scripts.pory"
# 212 "data/maps/VermilionCity_Frlg/scripts.pory"
	goto EventScript_SeviiDestinationsPage1
# 213 "data/maps/VermilionCity_Frlg/scripts.pory"
	end
# 214 "data/maps/VermilionCity_Frlg/scripts.pory"

# 215 "data/maps/VermilionCity_Frlg/scripts.pory"
VermilionCity_EventScript_ChooseSeagallopDestRainbowPass_2:
# 216 "data/maps/VermilionCity_Frlg/scripts.pory"
# 109 "data/maps/VermilionCity_Frlg/scripts.pory"
# 217 "data/maps/VermilionCity_Frlg/scripts.pory"
	goto VermilionCity_EventScript_HasMysticTicket
# 218 "data/maps/VermilionCity_Frlg/scripts.pory"
	goto VermilionCity_EventScript_ChooseSeagallopDestRainbowPass_1
# 219 "data/maps/VermilionCity_Frlg/scripts.pory"

# 220 "data/maps/VermilionCity_Frlg/scripts.pory"
VermilionCity_EventScript_ChooseSeagallopDestRainbowPass_5:
# 221 "data/maps/VermilionCity_Frlg/scripts.pory"
# 113 "data/maps/VermilionCity_Frlg/scripts.pory"
# 222 "data/maps/VermilionCity_Frlg/scripts.pory"
	goto VermilionCity_EventScript_HasAuroraTicket
# 223 "data/maps/VermilionCity_Frlg/scripts.pory"
	goto VermilionCity_EventScript_ChooseSeagallopDestRainbowPass_4
# 224 "data/maps/VermilionCity_Frlg/scripts.pory"

# 225 "data/maps/VermilionCity_Frlg/scripts.pory"

# 226 "data/maps/VermilionCity_Frlg/scripts.pory"
VermilionCity_EventScript_HasMysticTicket::
# 227 "data/maps/VermilionCity_Frlg/scripts.pory"
# 123 "data/maps/VermilionCity_Frlg/scripts.pory"
# 228 "data/maps/VermilionCity_Frlg/scripts.pory"
	call VermilionCity_EventScript_CheckHasAuroraTicket
# 229 "data/maps/VermilionCity_Frlg/scripts.pory"
# 124 "data/maps/VermilionCity_Frlg/scripts.pory"
# 230 "data/maps/VermilionCity_Frlg/scripts.pory"
	compare VAR_RESULT, TRUE
# 231 "data/maps/VermilionCity_Frlg/scripts.pory"
	goto_if_eq VermilionCity_EventScript_HasMysticTicket_2
# 232 "data/maps/VermilionCity_Frlg/scripts.pory"
VermilionCity_EventScript_HasMysticTicket_1:
# 233 "data/maps/VermilionCity_Frlg/scripts.pory"
# 127 "data/maps/VermilionCity_Frlg/scripts.pory"
# 234 "data/maps/VermilionCity_Frlg/scripts.pory"
	goto_if_unset FLAG_SHOWN_MYSTIC_TICKET, VermilionCity_EventScript_HasMysticTicket_5
# 235 "data/maps/VermilionCity_Frlg/scripts.pory"
VermilionCity_EventScript_HasMysticTicket_4:
# 236 "data/maps/VermilionCity_Frlg/scripts.pory"
# 130 "data/maps/VermilionCity_Frlg/scripts.pory"
# 237 "data/maps/VermilionCity_Frlg/scripts.pory"
	message VermilionCity_Text_BoardSeagallopFerry
# 238 "data/maps/VermilionCity_Frlg/scripts.pory"
# 131 "data/maps/VermilionCity_Frlg/scripts.pory"
# 239 "data/maps/VermilionCity_Frlg/scripts.pory"
	waitmessage
# 240 "data/maps/VermilionCity_Frlg/scripts.pory"
# 132 "data/maps/VermilionCity_Frlg/scripts.pory"
# 241 "data/maps/VermilionCity_Frlg/scripts.pory"
	multichoice 17, 6, MULTI_SEVII_NAVEL, FALSE
# 242 "data/maps/VermilionCity_Frlg/scripts.pory"
# 133 "data/maps/VermilionCity_Frlg/scripts.pory"
# 243 "data/maps/VermilionCity_Frlg/scripts.pory"
	switch VAR_RESULT
# 244 "data/maps/VermilionCity_Frlg/scripts.pory"
# 134 "data/maps/VermilionCity_Frlg/scripts.pory"
# 245 "data/maps/VermilionCity_Frlg/scripts.pory"
	case 0, VermilionCity_EventScript_HasMysticTicket_9
# 246 "data/maps/VermilionCity_Frlg/scripts.pory"
# 136 "data/maps/VermilionCity_Frlg/scripts.pory"
# 247 "data/maps/VermilionCity_Frlg/scripts.pory"
	case 1, VermilionCity_EventScript_HasMysticTicket_10
# 248 "data/maps/VermilionCity_Frlg/scripts.pory"
# 138 "data/maps/VermilionCity_Frlg/scripts.pory"
# 249 "data/maps/VermilionCity_Frlg/scripts.pory"
	case 2, VermilionCity_EventScript_HasMysticTicket_11
# 250 "data/maps/VermilionCity_Frlg/scripts.pory"
# 140 "data/maps/VermilionCity_Frlg/scripts.pory"
# 251 "data/maps/VermilionCity_Frlg/scripts.pory"
	case 127, VermilionCity_EventScript_HasMysticTicket_12
# 252 "data/maps/VermilionCity_Frlg/scripts.pory"
VermilionCity_EventScript_HasMysticTicket_7:
# 253 "data/maps/VermilionCity_Frlg/scripts.pory"
	end
# 254 "data/maps/VermilionCity_Frlg/scripts.pory"

# 255 "data/maps/VermilionCity_Frlg/scripts.pory"
VermilionCity_EventScript_HasMysticTicket_2:
# 256 "data/maps/VermilionCity_Frlg/scripts.pory"
# 125 "data/maps/VermilionCity_Frlg/scripts.pory"
# 257 "data/maps/VermilionCity_Frlg/scripts.pory"
	goto VermilionCity_EventScript_HasMysticAndAuroraTickets
# 258 "data/maps/VermilionCity_Frlg/scripts.pory"
	goto VermilionCity_EventScript_HasMysticTicket_1
# 259 "data/maps/VermilionCity_Frlg/scripts.pory"

# 260 "data/maps/VermilionCity_Frlg/scripts.pory"
VermilionCity_EventScript_HasMysticTicket_5:
# 261 "data/maps/VermilionCity_Frlg/scripts.pory"
# 128 "data/maps/VermilionCity_Frlg/scripts.pory"
# 262 "data/maps/VermilionCity_Frlg/scripts.pory"
	call VermilionCity_EventScript_ShowMysticTicket
# 263 "data/maps/VermilionCity_Frlg/scripts.pory"
	goto VermilionCity_EventScript_HasMysticTicket_4
# 264 "data/maps/VermilionCity_Frlg/scripts.pory"

# 265 "data/maps/VermilionCity_Frlg/scripts.pory"
VermilionCity_EventScript_HasMysticTicket_9:
# 266 "data/maps/VermilionCity_Frlg/scripts.pory"
# 135 "data/maps/VermilionCity_Frlg/scripts.pory"
# 267 "data/maps/VermilionCity_Frlg/scripts.pory"
	goto EventScript_SeviiDestinationsPage1
# 268 "data/maps/VermilionCity_Frlg/scripts.pory"
	goto VermilionCity_EventScript_HasMysticTicket_7
# 269 "data/maps/VermilionCity_Frlg/scripts.pory"

# 270 "data/maps/VermilionCity_Frlg/scripts.pory"
VermilionCity_EventScript_HasMysticTicket_10:
# 271 "data/maps/VermilionCity_Frlg/scripts.pory"
# 137 "data/maps/VermilionCity_Frlg/scripts.pory"
# 272 "data/maps/VermilionCity_Frlg/scripts.pory"
	goto EventScript_SailToNavelRock
# 273 "data/maps/VermilionCity_Frlg/scripts.pory"
	goto VermilionCity_EventScript_HasMysticTicket_7
# 274 "data/maps/VermilionCity_Frlg/scripts.pory"

# 275 "data/maps/VermilionCity_Frlg/scripts.pory"
VermilionCity_EventScript_HasMysticTicket_11:
# 276 "data/maps/VermilionCity_Frlg/scripts.pory"
# 139 "data/maps/VermilionCity_Frlg/scripts.pory"
# 277 "data/maps/VermilionCity_Frlg/scripts.pory"
	goto EventScript_CancelSail
# 278 "data/maps/VermilionCity_Frlg/scripts.pory"
	goto VermilionCity_EventScript_HasMysticTicket_7
# 279 "data/maps/VermilionCity_Frlg/scripts.pory"

# 280 "data/maps/VermilionCity_Frlg/scripts.pory"
VermilionCity_EventScript_HasMysticTicket_12:
# 281 "data/maps/VermilionCity_Frlg/scripts.pory"
# 141 "data/maps/VermilionCity_Frlg/scripts.pory"
# 282 "data/maps/VermilionCity_Frlg/scripts.pory"
	goto EventScript_CancelSail
# 283 "data/maps/VermilionCity_Frlg/scripts.pory"
	goto VermilionCity_EventScript_HasMysticTicket_7
# 284 "data/maps/VermilionCity_Frlg/scripts.pory"

# 285 "data/maps/VermilionCity_Frlg/scripts.pory"

# 286 "data/maps/VermilionCity_Frlg/scripts.pory"
VermilionCity_EventScript_ShowMysticTicket::
# 287 "data/maps/VermilionCity_Frlg/scripts.pory"
# 147 "data/maps/VermilionCity_Frlg/scripts.pory"
# 288 "data/maps/VermilionCity_Frlg/scripts.pory"
	setflag FLAG_SHOWN_MYSTIC_TICKET
# 289 "data/maps/VermilionCity_Frlg/scripts.pory"
# 148 "data/maps/VermilionCity_Frlg/scripts.pory"
# 290 "data/maps/VermilionCity_Frlg/scripts.pory"
	msgbox VermilionCity_Text_OhMysticTicketTakeYouToNavelRock
# 291 "data/maps/VermilionCity_Frlg/scripts.pory"
	return
# 292 "data/maps/VermilionCity_Frlg/scripts.pory"

# 293 "data/maps/VermilionCity_Frlg/scripts.pory"

# 294 "data/maps/VermilionCity_Frlg/scripts.pory"
VermilionCity_EventScript_HasAuroraTicket::
# 295 "data/maps/VermilionCity_Frlg/scripts.pory"
# 153 "data/maps/VermilionCity_Frlg/scripts.pory"
# 296 "data/maps/VermilionCity_Frlg/scripts.pory"
	goto_if_unset FLAG_SHOWN_AURORA_TICKET, VermilionCity_EventScript_HasAuroraTicket_2
# 297 "data/maps/VermilionCity_Frlg/scripts.pory"
VermilionCity_EventScript_HasAuroraTicket_1:
# 298 "data/maps/VermilionCity_Frlg/scripts.pory"
# 156 "data/maps/VermilionCity_Frlg/scripts.pory"
# 299 "data/maps/VermilionCity_Frlg/scripts.pory"
	message VermilionCity_Text_BoardSeagallopFerry
# 300 "data/maps/VermilionCity_Frlg/scripts.pory"
# 157 "data/maps/VermilionCity_Frlg/scripts.pory"
# 301 "data/maps/VermilionCity_Frlg/scripts.pory"
	waitmessage
# 302 "data/maps/VermilionCity_Frlg/scripts.pory"
# 158 "data/maps/VermilionCity_Frlg/scripts.pory"
# 303 "data/maps/VermilionCity_Frlg/scripts.pory"
	multichoice 13, 6, MULTI_SEVII_BIRTH, FALSE
# 304 "data/maps/VermilionCity_Frlg/scripts.pory"
# 159 "data/maps/VermilionCity_Frlg/scripts.pory"
# 305 "data/maps/VermilionCity_Frlg/scripts.pory"
	switch VAR_RESULT
# 306 "data/maps/VermilionCity_Frlg/scripts.pory"
# 160 "data/maps/VermilionCity_Frlg/scripts.pory"
# 307 "data/maps/VermilionCity_Frlg/scripts.pory"
	case 0, VermilionCity_EventScript_HasAuroraTicket_6
# 308 "data/maps/VermilionCity_Frlg/scripts.pory"
# 162 "data/maps/VermilionCity_Frlg/scripts.pory"
# 309 "data/maps/VermilionCity_Frlg/scripts.pory"
	case 1, VermilionCity_EventScript_HasAuroraTicket_7
# 310 "data/maps/VermilionCity_Frlg/scripts.pory"
# 164 "data/maps/VermilionCity_Frlg/scripts.pory"
# 311 "data/maps/VermilionCity_Frlg/scripts.pory"
	case 2, VermilionCity_EventScript_HasAuroraTicket_8
# 312 "data/maps/VermilionCity_Frlg/scripts.pory"
# 166 "data/maps/VermilionCity_Frlg/scripts.pory"
# 313 "data/maps/VermilionCity_Frlg/scripts.pory"
	case 127, VermilionCity_EventScript_HasAuroraTicket_9
# 314 "data/maps/VermilionCity_Frlg/scripts.pory"
VermilionCity_EventScript_HasAuroraTicket_4:
# 315 "data/maps/VermilionCity_Frlg/scripts.pory"
	end
# 316 "data/maps/VermilionCity_Frlg/scripts.pory"

# 317 "data/maps/VermilionCity_Frlg/scripts.pory"
VermilionCity_EventScript_HasAuroraTicket_2:
# 318 "data/maps/VermilionCity_Frlg/scripts.pory"
# 154 "data/maps/VermilionCity_Frlg/scripts.pory"
# 319 "data/maps/VermilionCity_Frlg/scripts.pory"
	call VermilionCity_EventScript_ShowAuroraTicket
# 320 "data/maps/VermilionCity_Frlg/scripts.pory"
	goto VermilionCity_EventScript_HasAuroraTicket_1
# 321 "data/maps/VermilionCity_Frlg/scripts.pory"

# 322 "data/maps/VermilionCity_Frlg/scripts.pory"
VermilionCity_EventScript_HasAuroraTicket_6:
# 323 "data/maps/VermilionCity_Frlg/scripts.pory"
# 161 "data/maps/VermilionCity_Frlg/scripts.pory"
# 324 "data/maps/VermilionCity_Frlg/scripts.pory"
	goto EventScript_SeviiDestinationsPage1
# 325 "data/maps/VermilionCity_Frlg/scripts.pory"
	goto VermilionCity_EventScript_HasAuroraTicket_4
# 326 "data/maps/VermilionCity_Frlg/scripts.pory"

# 327 "data/maps/VermilionCity_Frlg/scripts.pory"
VermilionCity_EventScript_HasAuroraTicket_7:
# 328 "data/maps/VermilionCity_Frlg/scripts.pory"
# 163 "data/maps/VermilionCity_Frlg/scripts.pory"
# 329 "data/maps/VermilionCity_Frlg/scripts.pory"
	goto EventScript_SailToBirthIsland
# 330 "data/maps/VermilionCity_Frlg/scripts.pory"
	goto VermilionCity_EventScript_HasAuroraTicket_4
# 331 "data/maps/VermilionCity_Frlg/scripts.pory"

# 332 "data/maps/VermilionCity_Frlg/scripts.pory"
VermilionCity_EventScript_HasAuroraTicket_8:
# 333 "data/maps/VermilionCity_Frlg/scripts.pory"
# 165 "data/maps/VermilionCity_Frlg/scripts.pory"
# 334 "data/maps/VermilionCity_Frlg/scripts.pory"
	goto EventScript_CancelSail
# 335 "data/maps/VermilionCity_Frlg/scripts.pory"
	goto VermilionCity_EventScript_HasAuroraTicket_4
# 336 "data/maps/VermilionCity_Frlg/scripts.pory"

# 337 "data/maps/VermilionCity_Frlg/scripts.pory"
VermilionCity_EventScript_HasAuroraTicket_9:
# 338 "data/maps/VermilionCity_Frlg/scripts.pory"
# 167 "data/maps/VermilionCity_Frlg/scripts.pory"
# 339 "data/maps/VermilionCity_Frlg/scripts.pory"
	goto EventScript_CancelSail
# 340 "data/maps/VermilionCity_Frlg/scripts.pory"
	goto VermilionCity_EventScript_HasAuroraTicket_4
# 341 "data/maps/VermilionCity_Frlg/scripts.pory"

# 342 "data/maps/VermilionCity_Frlg/scripts.pory"

# 343 "data/maps/VermilionCity_Frlg/scripts.pory"
VermilionCity_EventScript_ShowAuroraTicket::
# 344 "data/maps/VermilionCity_Frlg/scripts.pory"
# 173 "data/maps/VermilionCity_Frlg/scripts.pory"
# 345 "data/maps/VermilionCity_Frlg/scripts.pory"
	setflag FLAG_SHOWN_AURORA_TICKET
# 346 "data/maps/VermilionCity_Frlg/scripts.pory"
# 174 "data/maps/VermilionCity_Frlg/scripts.pory"
# 347 "data/maps/VermilionCity_Frlg/scripts.pory"
	msgbox VermilionCity_Text_OhAuroraTicketTakeYouToBirthIsland
# 348 "data/maps/VermilionCity_Frlg/scripts.pory"
	return
# 349 "data/maps/VermilionCity_Frlg/scripts.pory"

# 350 "data/maps/VermilionCity_Frlg/scripts.pory"

# 351 "data/maps/VermilionCity_Frlg/scripts.pory"
VermilionCity_EventScript_HasMysticAndAuroraTickets::
# 352 "data/maps/VermilionCity_Frlg/scripts.pory"
# 179 "data/maps/VermilionCity_Frlg/scripts.pory"
# 353 "data/maps/VermilionCity_Frlg/scripts.pory"
	goto_if_unset FLAG_SHOWN_MYSTIC_TICKET, VermilionCity_EventScript_HasMysticAndAuroraTickets_2
# 354 "data/maps/VermilionCity_Frlg/scripts.pory"
VermilionCity_EventScript_HasMysticAndAuroraTickets_1:
# 355 "data/maps/VermilionCity_Frlg/scripts.pory"
# 182 "data/maps/VermilionCity_Frlg/scripts.pory"
# 356 "data/maps/VermilionCity_Frlg/scripts.pory"
	goto_if_unset FLAG_SHOWN_AURORA_TICKET, VermilionCity_EventScript_HasMysticAndAuroraTickets_5
# 357 "data/maps/VermilionCity_Frlg/scripts.pory"
VermilionCity_EventScript_HasMysticAndAuroraTickets_4:
# 358 "data/maps/VermilionCity_Frlg/scripts.pory"
# 185 "data/maps/VermilionCity_Frlg/scripts.pory"
# 359 "data/maps/VermilionCity_Frlg/scripts.pory"
	message VermilionCity_Text_BoardSeagallopFerry
# 360 "data/maps/VermilionCity_Frlg/scripts.pory"
# 186 "data/maps/VermilionCity_Frlg/scripts.pory"
# 361 "data/maps/VermilionCity_Frlg/scripts.pory"
	waitmessage
# 362 "data/maps/VermilionCity_Frlg/scripts.pory"
# 187 "data/maps/VermilionCity_Frlg/scripts.pory"
# 363 "data/maps/VermilionCity_Frlg/scripts.pory"
	multichoice 13, 5, MULTI_SEVII_NAVEL_BIRTH, FALSE
# 364 "data/maps/VermilionCity_Frlg/scripts.pory"
# 188 "data/maps/VermilionCity_Frlg/scripts.pory"
# 365 "data/maps/VermilionCity_Frlg/scripts.pory"
	switch VAR_RESULT
# 366 "data/maps/VermilionCity_Frlg/scripts.pory"
# 189 "data/maps/VermilionCity_Frlg/scripts.pory"
# 367 "data/maps/VermilionCity_Frlg/scripts.pory"
	case 0, VermilionCity_EventScript_HasMysticAndAuroraTickets_9
# 368 "data/maps/VermilionCity_Frlg/scripts.pory"
# 191 "data/maps/VermilionCity_Frlg/scripts.pory"
# 369 "data/maps/VermilionCity_Frlg/scripts.pory"
	case 1, VermilionCity_EventScript_HasMysticAndAuroraTickets_10
# 370 "data/maps/VermilionCity_Frlg/scripts.pory"
# 193 "data/maps/VermilionCity_Frlg/scripts.pory"
# 371 "data/maps/VermilionCity_Frlg/scripts.pory"
	case 2, VermilionCity_EventScript_HasMysticAndAuroraTickets_11
# 372 "data/maps/VermilionCity_Frlg/scripts.pory"
# 195 "data/maps/VermilionCity_Frlg/scripts.pory"
# 373 "data/maps/VermilionCity_Frlg/scripts.pory"
	case 3, VermilionCity_EventScript_HasMysticAndAuroraTickets_12
# 374 "data/maps/VermilionCity_Frlg/scripts.pory"
# 197 "data/maps/VermilionCity_Frlg/scripts.pory"
# 375 "data/maps/VermilionCity_Frlg/scripts.pory"
	case 127, VermilionCity_EventScript_HasMysticAndAuroraTickets_13
# 376 "data/maps/VermilionCity_Frlg/scripts.pory"
VermilionCity_EventScript_HasMysticAndAuroraTickets_7:
# 377 "data/maps/VermilionCity_Frlg/scripts.pory"
	end
# 378 "data/maps/VermilionCity_Frlg/scripts.pory"

# 379 "data/maps/VermilionCity_Frlg/scripts.pory"
VermilionCity_EventScript_HasMysticAndAuroraTickets_2:
# 380 "data/maps/VermilionCity_Frlg/scripts.pory"
# 180 "data/maps/VermilionCity_Frlg/scripts.pory"
# 381 "data/maps/VermilionCity_Frlg/scripts.pory"
	call VermilionCity_EventScript_ShowMysticTicket
# 382 "data/maps/VermilionCity_Frlg/scripts.pory"
	goto VermilionCity_EventScript_HasMysticAndAuroraTickets_1
# 383 "data/maps/VermilionCity_Frlg/scripts.pory"

# 384 "data/maps/VermilionCity_Frlg/scripts.pory"
VermilionCity_EventScript_HasMysticAndAuroraTickets_5:
# 385 "data/maps/VermilionCity_Frlg/scripts.pory"
# 183 "data/maps/VermilionCity_Frlg/scripts.pory"
# 386 "data/maps/VermilionCity_Frlg/scripts.pory"
	call VermilionCity_EventScript_ShowAuroraTicket
# 387 "data/maps/VermilionCity_Frlg/scripts.pory"
	goto VermilionCity_EventScript_HasMysticAndAuroraTickets_4
# 388 "data/maps/VermilionCity_Frlg/scripts.pory"

# 389 "data/maps/VermilionCity_Frlg/scripts.pory"
VermilionCity_EventScript_HasMysticAndAuroraTickets_9:
# 390 "data/maps/VermilionCity_Frlg/scripts.pory"
# 190 "data/maps/VermilionCity_Frlg/scripts.pory"
# 391 "data/maps/VermilionCity_Frlg/scripts.pory"
	goto EventScript_SeviiDestinationsPage1
# 392 "data/maps/VermilionCity_Frlg/scripts.pory"
	goto VermilionCity_EventScript_HasMysticAndAuroraTickets_7
# 393 "data/maps/VermilionCity_Frlg/scripts.pory"

# 394 "data/maps/VermilionCity_Frlg/scripts.pory"
VermilionCity_EventScript_HasMysticAndAuroraTickets_10:
# 395 "data/maps/VermilionCity_Frlg/scripts.pory"
# 192 "data/maps/VermilionCity_Frlg/scripts.pory"
# 396 "data/maps/VermilionCity_Frlg/scripts.pory"
	goto EventScript_SailToNavelRock
# 397 "data/maps/VermilionCity_Frlg/scripts.pory"
	goto VermilionCity_EventScript_HasMysticAndAuroraTickets_7
# 398 "data/maps/VermilionCity_Frlg/scripts.pory"

# 399 "data/maps/VermilionCity_Frlg/scripts.pory"
VermilionCity_EventScript_HasMysticAndAuroraTickets_11:
# 400 "data/maps/VermilionCity_Frlg/scripts.pory"
# 194 "data/maps/VermilionCity_Frlg/scripts.pory"
# 401 "data/maps/VermilionCity_Frlg/scripts.pory"
	goto EventScript_SailToBirthIsland
# 402 "data/maps/VermilionCity_Frlg/scripts.pory"
	goto VermilionCity_EventScript_HasMysticAndAuroraTickets_7
# 403 "data/maps/VermilionCity_Frlg/scripts.pory"

# 404 "data/maps/VermilionCity_Frlg/scripts.pory"
VermilionCity_EventScript_HasMysticAndAuroraTickets_12:
# 405 "data/maps/VermilionCity_Frlg/scripts.pory"
# 196 "data/maps/VermilionCity_Frlg/scripts.pory"
# 406 "data/maps/VermilionCity_Frlg/scripts.pory"
	goto EventScript_CancelSail
# 407 "data/maps/VermilionCity_Frlg/scripts.pory"
	goto VermilionCity_EventScript_HasMysticAndAuroraTickets_7
# 408 "data/maps/VermilionCity_Frlg/scripts.pory"

# 409 "data/maps/VermilionCity_Frlg/scripts.pory"
VermilionCity_EventScript_HasMysticAndAuroraTickets_13:
# 410 "data/maps/VermilionCity_Frlg/scripts.pory"
# 198 "data/maps/VermilionCity_Frlg/scripts.pory"
# 411 "data/maps/VermilionCity_Frlg/scripts.pory"
	goto EventScript_CancelSail
# 412 "data/maps/VermilionCity_Frlg/scripts.pory"
	goto VermilionCity_EventScript_HasMysticAndAuroraTickets_7
# 413 "data/maps/VermilionCity_Frlg/scripts.pory"

# 414 "data/maps/VermilionCity_Frlg/scripts.pory"

# 415 "data/maps/VermilionCity_Frlg/scripts.pory"
EventScript_SailToNavelRock::
# 416 "data/maps/VermilionCity_Frlg/scripts.pory"
# 204 "data/maps/VermilionCity_Frlg/scripts.pory"
# 417 "data/maps/VermilionCity_Frlg/scripts.pory"
	msgbox VermilionCity_Text_Seagallop10Departing
# 418 "data/maps/VermilionCity_Frlg/scripts.pory"
# 205 "data/maps/VermilionCity_Frlg/scripts.pory"
# 419 "data/maps/VermilionCity_Frlg/scripts.pory"
	setvar VAR_0x8004, SEAGALLOP_VERMILION_CITY
# 420 "data/maps/VermilionCity_Frlg/scripts.pory"
# 206 "data/maps/VermilionCity_Frlg/scripts.pory"
# 421 "data/maps/VermilionCity_Frlg/scripts.pory"
	setvar VAR_0x8006, SEAGALLOP_NAVEL_ROCK
# 422 "data/maps/VermilionCity_Frlg/scripts.pory"
# 207 "data/maps/VermilionCity_Frlg/scripts.pory"
# 423 "data/maps/VermilionCity_Frlg/scripts.pory"
	goto EventScript_SetSail
# 424 "data/maps/VermilionCity_Frlg/scripts.pory"
	end
# 425 "data/maps/VermilionCity_Frlg/scripts.pory"

# 426 "data/maps/VermilionCity_Frlg/scripts.pory"

# 427 "data/maps/VermilionCity_Frlg/scripts.pory"
EventScript_SailToBirthIsland::
# 428 "data/maps/VermilionCity_Frlg/scripts.pory"
# 212 "data/maps/VermilionCity_Frlg/scripts.pory"
# 429 "data/maps/VermilionCity_Frlg/scripts.pory"
	msgbox VermilionCity_Text_Seagallop12Departing
# 430 "data/maps/VermilionCity_Frlg/scripts.pory"
# 213 "data/maps/VermilionCity_Frlg/scripts.pory"
# 431 "data/maps/VermilionCity_Frlg/scripts.pory"
	setvar VAR_0x8004, SEAGALLOP_VERMILION_CITY
# 432 "data/maps/VermilionCity_Frlg/scripts.pory"
# 214 "data/maps/VermilionCity_Frlg/scripts.pory"
# 433 "data/maps/VermilionCity_Frlg/scripts.pory"
	setvar VAR_0x8006, SEAGALLOP_BIRTH_ISLAND
# 434 "data/maps/VermilionCity_Frlg/scripts.pory"
# 215 "data/maps/VermilionCity_Frlg/scripts.pory"
# 435 "data/maps/VermilionCity_Frlg/scripts.pory"
	goto EventScript_SetSail
# 436 "data/maps/VermilionCity_Frlg/scripts.pory"
	end
# 437 "data/maps/VermilionCity_Frlg/scripts.pory"

# 438 "data/maps/VermilionCity_Frlg/scripts.pory"

# 439 "data/maps/VermilionCity_Frlg/scripts.pory"
VermilionCity_EventScript_ChooseSeagallopDestTriPass::
# 440 "data/maps/VermilionCity_Frlg/scripts.pory"
# 220 "data/maps/VermilionCity_Frlg/scripts.pory"
# 441 "data/maps/VermilionCity_Frlg/scripts.pory"
	message VermilionCity_Text_BoardSeagallopTriPass
# 442 "data/maps/VermilionCity_Frlg/scripts.pory"
# 221 "data/maps/VermilionCity_Frlg/scripts.pory"
# 443 "data/maps/VermilionCity_Frlg/scripts.pory"
	waitmessage
# 444 "data/maps/VermilionCity_Frlg/scripts.pory"
# 222 "data/maps/VermilionCity_Frlg/scripts.pory"
# 445 "data/maps/VermilionCity_Frlg/scripts.pory"
	setvar VAR_0x8004, SEAGALLOP_VERMILION_CITY
# 446 "data/maps/VermilionCity_Frlg/scripts.pory"
# 223 "data/maps/VermilionCity_Frlg/scripts.pory"
# 447 "data/maps/VermilionCity_Frlg/scripts.pory"
	multichoice 19, 5, MULTI_SEAGALLOP_123, FALSE
# 448 "data/maps/VermilionCity_Frlg/scripts.pory"
# 224 "data/maps/VermilionCity_Frlg/scripts.pory"
# 449 "data/maps/VermilionCity_Frlg/scripts.pory"
	switch VAR_RESULT
# 450 "data/maps/VermilionCity_Frlg/scripts.pory"
# 225 "data/maps/VermilionCity_Frlg/scripts.pory"
# 451 "data/maps/VermilionCity_Frlg/scripts.pory"
	case 0, VermilionCity_EventScript_ChooseSeagallopDestTriPass_3
# 452 "data/maps/VermilionCity_Frlg/scripts.pory"
# 227 "data/maps/VermilionCity_Frlg/scripts.pory"
# 453 "data/maps/VermilionCity_Frlg/scripts.pory"
	case 1, VermilionCity_EventScript_ChooseSeagallopDestTriPass_4
# 454 "data/maps/VermilionCity_Frlg/scripts.pory"
# 229 "data/maps/VermilionCity_Frlg/scripts.pory"
# 455 "data/maps/VermilionCity_Frlg/scripts.pory"
	case 2, VermilionCity_EventScript_ChooseSeagallopDestTriPass_5
# 456 "data/maps/VermilionCity_Frlg/scripts.pory"
# 231 "data/maps/VermilionCity_Frlg/scripts.pory"
# 457 "data/maps/VermilionCity_Frlg/scripts.pory"
	case 3, VermilionCity_EventScript_ChooseSeagallopDestTriPass_6
# 458 "data/maps/VermilionCity_Frlg/scripts.pory"
# 233 "data/maps/VermilionCity_Frlg/scripts.pory"
# 459 "data/maps/VermilionCity_Frlg/scripts.pory"
	case 127, VermilionCity_EventScript_ChooseSeagallopDestTriPass_7
# 460 "data/maps/VermilionCity_Frlg/scripts.pory"
VermilionCity_EventScript_ChooseSeagallopDestTriPass_1:
# 461 "data/maps/VermilionCity_Frlg/scripts.pory"
	end
# 462 "data/maps/VermilionCity_Frlg/scripts.pory"

# 463 "data/maps/VermilionCity_Frlg/scripts.pory"
VermilionCity_EventScript_ChooseSeagallopDestTriPass_3:
# 464 "data/maps/VermilionCity_Frlg/scripts.pory"
# 226 "data/maps/VermilionCity_Frlg/scripts.pory"
# 465 "data/maps/VermilionCity_Frlg/scripts.pory"
	goto EventScript_SailToOneIsland2
# 466 "data/maps/VermilionCity_Frlg/scripts.pory"
	goto VermilionCity_EventScript_ChooseSeagallopDestTriPass_1
# 467 "data/maps/VermilionCity_Frlg/scripts.pory"

# 468 "data/maps/VermilionCity_Frlg/scripts.pory"
VermilionCity_EventScript_ChooseSeagallopDestTriPass_4:
# 469 "data/maps/VermilionCity_Frlg/scripts.pory"
# 228 "data/maps/VermilionCity_Frlg/scripts.pory"
# 470 "data/maps/VermilionCity_Frlg/scripts.pory"
	goto EventScript_SailToTwoIsland2
# 471 "data/maps/VermilionCity_Frlg/scripts.pory"
	goto VermilionCity_EventScript_ChooseSeagallopDestTriPass_1
# 472 "data/maps/VermilionCity_Frlg/scripts.pory"

# 473 "data/maps/VermilionCity_Frlg/scripts.pory"
VermilionCity_EventScript_ChooseSeagallopDestTriPass_5:
# 474 "data/maps/VermilionCity_Frlg/scripts.pory"
# 230 "data/maps/VermilionCity_Frlg/scripts.pory"
# 475 "data/maps/VermilionCity_Frlg/scripts.pory"
	goto EventScript_SailToThreeIsland2
# 476 "data/maps/VermilionCity_Frlg/scripts.pory"
	goto VermilionCity_EventScript_ChooseSeagallopDestTriPass_1
# 477 "data/maps/VermilionCity_Frlg/scripts.pory"

# 478 "data/maps/VermilionCity_Frlg/scripts.pory"
VermilionCity_EventScript_ChooseSeagallopDestTriPass_6:
# 479 "data/maps/VermilionCity_Frlg/scripts.pory"
# 232 "data/maps/VermilionCity_Frlg/scripts.pory"
# 480 "data/maps/VermilionCity_Frlg/scripts.pory"
	goto EventScript_CancelSail
# 481 "data/maps/VermilionCity_Frlg/scripts.pory"
	goto VermilionCity_EventScript_ChooseSeagallopDestTriPass_1
# 482 "data/maps/VermilionCity_Frlg/scripts.pory"

# 483 "data/maps/VermilionCity_Frlg/scripts.pory"
VermilionCity_EventScript_ChooseSeagallopDestTriPass_7:
# 484 "data/maps/VermilionCity_Frlg/scripts.pory"
# 234 "data/maps/VermilionCity_Frlg/scripts.pory"
# 485 "data/maps/VermilionCity_Frlg/scripts.pory"
	goto EventScript_CancelSail
# 486 "data/maps/VermilionCity_Frlg/scripts.pory"
	goto VermilionCity_EventScript_ChooseSeagallopDestTriPass_1
# 487 "data/maps/VermilionCity_Frlg/scripts.pory"

# 488 "data/maps/VermilionCity_Frlg/scripts.pory"

# 489 "data/maps/VermilionCity_Frlg/scripts.pory"
Vermilion_EventScript_Unused::
# 490 "data/maps/VermilionCity_Frlg/scripts.pory"
# 240 "data/maps/VermilionCity_Frlg/scripts.pory"
# 491 "data/maps/VermilionCity_Frlg/scripts.pory"
	release
# 492 "data/maps/VermilionCity_Frlg/scripts.pory"
	end
# 493 "data/maps/VermilionCity_Frlg/scripts.pory"

# 494 "data/maps/VermilionCity_Frlg/scripts.pory"

# 495 "data/maps/VermilionCity_Frlg/scripts.pory"
VermilionCity_EventScript_CheckTicketLeft::
# 496 "data/maps/VermilionCity_Frlg/scripts.pory"
# 245 "data/maps/VermilionCity_Frlg/scripts.pory"
# 497 "data/maps/VermilionCity_Frlg/scripts.pory"
	lockall
# 498 "data/maps/VermilionCity_Frlg/scripts.pory"
# 246 "data/maps/VermilionCity_Frlg/scripts.pory"
# 499 "data/maps/VermilionCity_Frlg/scripts.pory"
	goto VermilionCity_EventScript_CheckTicket
# 500 "data/maps/VermilionCity_Frlg/scripts.pory"
	end
# 501 "data/maps/VermilionCity_Frlg/scripts.pory"

# 502 "data/maps/VermilionCity_Frlg/scripts.pory"

# 503 "data/maps/VermilionCity_Frlg/scripts.pory"
VermilionCity_EventScript_CheckTicketRight::
# 504 "data/maps/VermilionCity_Frlg/scripts.pory"
# 251 "data/maps/VermilionCity_Frlg/scripts.pory"
# 505 "data/maps/VermilionCity_Frlg/scripts.pory"
	lockall
# 506 "data/maps/VermilionCity_Frlg/scripts.pory"
# 252 "data/maps/VermilionCity_Frlg/scripts.pory"
# 507 "data/maps/VermilionCity_Frlg/scripts.pory"
	goto VermilionCity_EventScript_CheckTicket
# 508 "data/maps/VermilionCity_Frlg/scripts.pory"
	end
# 509 "data/maps/VermilionCity_Frlg/scripts.pory"

# 510 "data/maps/VermilionCity_Frlg/scripts.pory"

# 511 "data/maps/VermilionCity_Frlg/scripts.pory"
VermilionCity_EventScript_ExitedTicketCheck::
# 512 "data/maps/VermilionCity_Frlg/scripts.pory"
# 257 "data/maps/VermilionCity_Frlg/scripts.pory"
# 513 "data/maps/VermilionCity_Frlg/scripts.pory"
	lockall
# 514 "data/maps/VermilionCity_Frlg/scripts.pory"
# 258 "data/maps/VermilionCity_Frlg/scripts.pory"
# 515 "data/maps/VermilionCity_Frlg/scripts.pory"
	setvar VAR_VERMILION_CITY_TICKET_CHECK_TRIGGER, 0
# 516 "data/maps/VermilionCity_Frlg/scripts.pory"
# 259 "data/maps/VermilionCity_Frlg/scripts.pory"
# 517 "data/maps/VermilionCity_Frlg/scripts.pory"
	releaseall
# 518 "data/maps/VermilionCity_Frlg/scripts.pory"
	end
# 519 "data/maps/VermilionCity_Frlg/scripts.pory"

# 520 "data/maps/VermilionCity_Frlg/scripts.pory"

# 521 "data/maps/VermilionCity_Frlg/scripts.pory"
VermilionCity_EventScript_CheckTicket::
# 522 "data/maps/VermilionCity_Frlg/scripts.pory"
# 264 "data/maps/VermilionCity_Frlg/scripts.pory"
# 523 "data/maps/VermilionCity_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 524 "data/maps/VermilionCity_Frlg/scripts.pory"
# 265 "data/maps/VermilionCity_Frlg/scripts.pory"
# 525 "data/maps/VermilionCity_Frlg/scripts.pory"
	applymovement LOCALID_VERMILION_FERRY_SAILOR, Common_Movement_WalkInPlaceFasterLeft
# 526 "data/maps/VermilionCity_Frlg/scripts.pory"
# 266 "data/maps/VermilionCity_Frlg/scripts.pory"
# 527 "data/maps/VermilionCity_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 528 "data/maps/VermilionCity_Frlg/scripts.pory"
# 267 "data/maps/VermilionCity_Frlg/scripts.pory"
# 529 "data/maps/VermilionCity_Frlg/scripts.pory"
	waitmovement 0
# 530 "data/maps/VermilionCity_Frlg/scripts.pory"
# 268 "data/maps/VermilionCity_Frlg/scripts.pory"
# 531 "data/maps/VermilionCity_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_VERMILION_CITY, 3
# 532 "data/maps/VermilionCity_Frlg/scripts.pory"
	goto_if_eq VermilionCity_EventScript_CheckTicket_2
# 533 "data/maps/VermilionCity_Frlg/scripts.pory"
VermilionCity_EventScript_CheckTicket_1:
# 534 "data/maps/VermilionCity_Frlg/scripts.pory"
# 271 "data/maps/VermilionCity_Frlg/scripts.pory"
# 535 "data/maps/VermilionCity_Frlg/scripts.pory"
	msgbox VermilionCity_Text_DoYouHaveATicket
# 536 "data/maps/VermilionCity_Frlg/scripts.pory"
# 272 "data/maps/VermilionCity_Frlg/scripts.pory"
# 537 "data/maps/VermilionCity_Frlg/scripts.pory"
	goto_if_unset FLAG_GOT_SS_TICKET, VermilionCity_EventScript_CheckTicket_5
# 538 "data/maps/VermilionCity_Frlg/scripts.pory"
VermilionCity_EventScript_CheckTicket_4:
# 539 "data/maps/VermilionCity_Frlg/scripts.pory"
# 275 "data/maps/VermilionCity_Frlg/scripts.pory"
# 540 "data/maps/VermilionCity_Frlg/scripts.pory"
	msgbox VermilionCity_Text_FlashedSSTicket
# 541 "data/maps/VermilionCity_Frlg/scripts.pory"
# 276 "data/maps/VermilionCity_Frlg/scripts.pory"
# 542 "data/maps/VermilionCity_Frlg/scripts.pory"
	setvar VAR_VERMILION_CITY_TICKET_CHECK_TRIGGER, 1
# 543 "data/maps/VermilionCity_Frlg/scripts.pory"
# 277 "data/maps/VermilionCity_Frlg/scripts.pory"
# 544 "data/maps/VermilionCity_Frlg/scripts.pory"
	releaseall
# 545 "data/maps/VermilionCity_Frlg/scripts.pory"
	end
# 546 "data/maps/VermilionCity_Frlg/scripts.pory"

# 547 "data/maps/VermilionCity_Frlg/scripts.pory"
VermilionCity_EventScript_CheckTicket_2:
# 548 "data/maps/VermilionCity_Frlg/scripts.pory"
# 269 "data/maps/VermilionCity_Frlg/scripts.pory"
# 549 "data/maps/VermilionCity_Frlg/scripts.pory"
	goto VermilionCity_EventScript_CheckSeagallopPresentTrigger
# 550 "data/maps/VermilionCity_Frlg/scripts.pory"
	goto VermilionCity_EventScript_CheckTicket_1
# 551 "data/maps/VermilionCity_Frlg/scripts.pory"

# 552 "data/maps/VermilionCity_Frlg/scripts.pory"
VermilionCity_EventScript_CheckTicket_5:
# 553 "data/maps/VermilionCity_Frlg/scripts.pory"
# 273 "data/maps/VermilionCity_Frlg/scripts.pory"
# 554 "data/maps/VermilionCity_Frlg/scripts.pory"
	goto VermilionCity_EventScript_DontHaveSSTicket
# 555 "data/maps/VermilionCity_Frlg/scripts.pory"
	goto VermilionCity_EventScript_CheckTicket_4
# 556 "data/maps/VermilionCity_Frlg/scripts.pory"

# 557 "data/maps/VermilionCity_Frlg/scripts.pory"

# 558 "data/maps/VermilionCity_Frlg/scripts.pory"
VermilionCity_EventScript_DontHaveSSTicket::
# 559 "data/maps/VermilionCity_Frlg/scripts.pory"
# 282 "data/maps/VermilionCity_Frlg/scripts.pory"
# 560 "data/maps/VermilionCity_Frlg/scripts.pory"
	msgbox VermilionCity_Text_DontHaveNeededSSTicket
# 561 "data/maps/VermilionCity_Frlg/scripts.pory"
# 283 "data/maps/VermilionCity_Frlg/scripts.pory"
# 562 "data/maps/VermilionCity_Frlg/scripts.pory"
	closemessage
# 563 "data/maps/VermilionCity_Frlg/scripts.pory"
# 284 "data/maps/VermilionCity_Frlg/scripts.pory"
# 564 "data/maps/VermilionCity_Frlg/scripts.pory"
	goto VermilionCity_EventScript_WalkUpPier
# 565 "data/maps/VermilionCity_Frlg/scripts.pory"
	end
# 566 "data/maps/VermilionCity_Frlg/scripts.pory"

# 567 "data/maps/VermilionCity_Frlg/scripts.pory"

# 568 "data/maps/VermilionCity_Frlg/scripts.pory"
VermilionCity_EventScript_CheckSeagallopPresentTrigger::
# 569 "data/maps/VermilionCity_Frlg/scripts.pory"
# 289 "data/maps/VermilionCity_Frlg/scripts.pory"
# 570 "data/maps/VermilionCity_Frlg/scripts.pory"
	setvar VAR_0x8004, SEAGALLOP_VERMILION_CITY
# 571 "data/maps/VermilionCity_Frlg/scripts.pory"
# 290 "data/maps/VermilionCity_Frlg/scripts.pory"
# 572 "data/maps/VermilionCity_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 5
# 573 "data/maps/VermilionCity_Frlg/scripts.pory"
	goto_if_ge VermilionCity_EventScript_CheckSeagallopPresentTrigger_2
# 574 "data/maps/VermilionCity_Frlg/scripts.pory"
VermilionCity_EventScript_CheckSeagallopPresentTrigger_1:
# 575 "data/maps/VermilionCity_Frlg/scripts.pory"
# 293 "data/maps/VermilionCity_Frlg/scripts.pory"
# 576 "data/maps/VermilionCity_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 1
# 577 "data/maps/VermilionCity_Frlg/scripts.pory"
	goto_if_ge VermilionCity_EventScript_CheckSeagallopPresentTrigger_5
# 578 "data/maps/VermilionCity_Frlg/scripts.pory"
VermilionCity_EventScript_CheckSeagallopPresentTrigger_4:
# 579 "data/maps/VermilionCity_Frlg/scripts.pory"
# 296 "data/maps/VermilionCity_Frlg/scripts.pory"
# 580 "data/maps/VermilionCity_Frlg/scripts.pory"
	msgbox VermilionCity_Text_TheShipSetSail
# 581 "data/maps/VermilionCity_Frlg/scripts.pory"
# 297 "data/maps/VermilionCity_Frlg/scripts.pory"
# 582 "data/maps/VermilionCity_Frlg/scripts.pory"
	closemessage
# 583 "data/maps/VermilionCity_Frlg/scripts.pory"
# 298 "data/maps/VermilionCity_Frlg/scripts.pory"
# 584 "data/maps/VermilionCity_Frlg/scripts.pory"
	goto VermilionCity_EventScript_WalkUpPier
# 585 "data/maps/VermilionCity_Frlg/scripts.pory"
	end
# 586 "data/maps/VermilionCity_Frlg/scripts.pory"

# 587 "data/maps/VermilionCity_Frlg/scripts.pory"
VermilionCity_EventScript_CheckSeagallopPresentTrigger_2:
# 588 "data/maps/VermilionCity_Frlg/scripts.pory"
# 291 "data/maps/VermilionCity_Frlg/scripts.pory"
# 589 "data/maps/VermilionCity_Frlg/scripts.pory"
	goto VermilionCity_EventScript_ChooseSeagallopDestRainbowPass
# 590 "data/maps/VermilionCity_Frlg/scripts.pory"
	goto VermilionCity_EventScript_CheckSeagallopPresentTrigger_1
# 591 "data/maps/VermilionCity_Frlg/scripts.pory"

# 592 "data/maps/VermilionCity_Frlg/scripts.pory"
VermilionCity_EventScript_CheckSeagallopPresentTrigger_5:
# 593 "data/maps/VermilionCity_Frlg/scripts.pory"
# 294 "data/maps/VermilionCity_Frlg/scripts.pory"
# 594 "data/maps/VermilionCity_Frlg/scripts.pory"
	goto VermilionCity_EventScript_ChooseSeagallopDestTriPass
# 595 "data/maps/VermilionCity_Frlg/scripts.pory"
	goto VermilionCity_EventScript_CheckSeagallopPresentTrigger_4
# 596 "data/maps/VermilionCity_Frlg/scripts.pory"

# 597 "data/maps/VermilionCity_Frlg/scripts.pory"

# 598 "data/maps/VermilionCity_Frlg/scripts.pory"
VermilionCity_EventScript_Sailor::
# 599 "data/maps/VermilionCity_Frlg/scripts.pory"
# 303 "data/maps/VermilionCity_Frlg/scripts.pory"
# 600 "data/maps/VermilionCity_Frlg/scripts.pory"
	msgbox VermilionCity_Text_SSAnneVisitsOnceAYear, MSGBOX_NPC
# 601 "data/maps/VermilionCity_Frlg/scripts.pory"
	end
# 602 "data/maps/VermilionCity_Frlg/scripts.pory"

# 603 "data/maps/VermilionCity_Frlg/scripts.pory"

# 604 "data/maps/VermilionCity_Frlg/scripts.pory"
VermilionCity_EventScript_OaksAide::
# 605 "data/maps/VermilionCity_Frlg/scripts.pory"
# 308 "data/maps/VermilionCity_Frlg/scripts.pory"
# 606 "data/maps/VermilionCity_Frlg/scripts.pory"
	lock
# 607 "data/maps/VermilionCity_Frlg/scripts.pory"
# 309 "data/maps/VermilionCity_Frlg/scripts.pory"
# 608 "data/maps/VermilionCity_Frlg/scripts.pory"
	faceplayer
# 609 "data/maps/VermilionCity_Frlg/scripts.pory"
# 310 "data/maps/VermilionCity_Frlg/scripts.pory"
# 610 "data/maps/VermilionCity_Frlg/scripts.pory"
	setflag FLAG_TALKED_TO_OAKS_AIDE_IN_VERMILION
# 611 "data/maps/VermilionCity_Frlg/scripts.pory"
# 311 "data/maps/VermilionCity_Frlg/scripts.pory"
# 612 "data/maps/VermilionCity_Frlg/scripts.pory"
	msgbox VermilionCity_Text_Route2AideHasPackageForYou
# 613 "data/maps/VermilionCity_Frlg/scripts.pory"
# 312 "data/maps/VermilionCity_Frlg/scripts.pory"
# 614 "data/maps/VermilionCity_Frlg/scripts.pory"
	release
# 615 "data/maps/VermilionCity_Frlg/scripts.pory"
	end
# 616 "data/maps/VermilionCity_Frlg/scripts.pory"

# 617 "data/maps/VermilionCity_Frlg/scripts.pory"

# 618 "data/maps/VermilionCity_Frlg/scripts.pory"
VermilionCity_EventScript_OldMan2::
# 619 "data/maps/VermilionCity_Frlg/scripts.pory"
# 317 "data/maps/VermilionCity_Frlg/scripts.pory"
# 620 "data/maps/VermilionCity_Frlg/scripts.pory"
	msgbox VermilionCity_Text_BuildingOnThisLand, MSGBOX_NPC
# 621 "data/maps/VermilionCity_Frlg/scripts.pory"
	end
# 622 "data/maps/VermilionCity_Frlg/scripts.pory"

# 623 "data/maps/VermilionCity_Frlg/scripts.pory"

# 624 "data/maps/VermilionCity_Frlg/scripts.pory"
VermilionCity_EventScript_Machop::
# 625 "data/maps/VermilionCity_Frlg/scripts.pory"
# 322 "data/maps/VermilionCity_Frlg/scripts.pory"
# 626 "data/maps/VermilionCity_Frlg/scripts.pory"
	lock
# 627 "data/maps/VermilionCity_Frlg/scripts.pory"
# 323 "data/maps/VermilionCity_Frlg/scripts.pory"
# 628 "data/maps/VermilionCity_Frlg/scripts.pory"
	faceplayer
# 629 "data/maps/VermilionCity_Frlg/scripts.pory"
# 324 "data/maps/VermilionCity_Frlg/scripts.pory"
# 630 "data/maps/VermilionCity_Frlg/scripts.pory"
	waitse
# 631 "data/maps/VermilionCity_Frlg/scripts.pory"
# 325 "data/maps/VermilionCity_Frlg/scripts.pory"
# 632 "data/maps/VermilionCity_Frlg/scripts.pory"
	playmoncry SPECIES_MACHOP, CRY_MODE_NORMAL
# 633 "data/maps/VermilionCity_Frlg/scripts.pory"
# 326 "data/maps/VermilionCity_Frlg/scripts.pory"
# 634 "data/maps/VermilionCity_Frlg/scripts.pory"
	msgbox VermilionCity_Text_Machop
# 635 "data/maps/VermilionCity_Frlg/scripts.pory"
# 327 "data/maps/VermilionCity_Frlg/scripts.pory"
# 636 "data/maps/VermilionCity_Frlg/scripts.pory"
	waitmoncry
# 637 "data/maps/VermilionCity_Frlg/scripts.pory"
# 328 "data/maps/VermilionCity_Frlg/scripts.pory"
# 638 "data/maps/VermilionCity_Frlg/scripts.pory"
	msgbox VermilionCity_Text_MachopStompingLandFlat
# 639 "data/maps/VermilionCity_Frlg/scripts.pory"
# 329 "data/maps/VermilionCity_Frlg/scripts.pory"
# 640 "data/maps/VermilionCity_Frlg/scripts.pory"
	release
# 641 "data/maps/VermilionCity_Frlg/scripts.pory"
	end
# 642 "data/maps/VermilionCity_Frlg/scripts.pory"

# 643 "data/maps/VermilionCity_Frlg/scripts.pory"

# 644 "data/maps/VermilionCity_Frlg/scripts.pory"
VermilionCity_EventScript_CitySign::
# 645 "data/maps/VermilionCity_Frlg/scripts.pory"
# 334 "data/maps/VermilionCity_Frlg/scripts.pory"
# 646 "data/maps/VermilionCity_Frlg/scripts.pory"
	msgbox VermilionCity_Text_CitySign, MSGBOX_SIGN
# 647 "data/maps/VermilionCity_Frlg/scripts.pory"
	end
# 648 "data/maps/VermilionCity_Frlg/scripts.pory"

# 649 "data/maps/VermilionCity_Frlg/scripts.pory"

# 650 "data/maps/VermilionCity_Frlg/scripts.pory"
VermilionCity_EventScript_SnorlaxNotice::
# 651 "data/maps/VermilionCity_Frlg/scripts.pory"
# 339 "data/maps/VermilionCity_Frlg/scripts.pory"
# 652 "data/maps/VermilionCity_Frlg/scripts.pory"
	msgbox VermilionCity_Text_SnorlaxBlockingRoute12, MSGBOX_SIGN
# 653 "data/maps/VermilionCity_Frlg/scripts.pory"
	end
# 654 "data/maps/VermilionCity_Frlg/scripts.pory"

# 655 "data/maps/VermilionCity_Frlg/scripts.pory"

# 656 "data/maps/VermilionCity_Frlg/scripts.pory"
VermilionCity_EventScript_PokemonFanClubSign::
# 657 "data/maps/VermilionCity_Frlg/scripts.pory"
# 344 "data/maps/VermilionCity_Frlg/scripts.pory"
# 658 "data/maps/VermilionCity_Frlg/scripts.pory"
	msgbox VermilionCity_Text_PokemonFanClubSign, MSGBOX_SIGN
# 659 "data/maps/VermilionCity_Frlg/scripts.pory"
	end
# 660 "data/maps/VermilionCity_Frlg/scripts.pory"

# 661 "data/maps/VermilionCity_Frlg/scripts.pory"

# 662 "data/maps/VermilionCity_Frlg/scripts.pory"
VermilionCity_EventScript_GymSign::
# 663 "data/maps/VermilionCity_Frlg/scripts.pory"
# 349 "data/maps/VermilionCity_Frlg/scripts.pory"
# 664 "data/maps/VermilionCity_Frlg/scripts.pory"
	lockall
# 665 "data/maps/VermilionCity_Frlg/scripts.pory"
# 350 "data/maps/VermilionCity_Frlg/scripts.pory"
# 666 "data/maps/VermilionCity_Frlg/scripts.pory"
	famechecker FAMECHECKER_LTSURGE, 0
# 667 "data/maps/VermilionCity_Frlg/scripts.pory"
# 351 "data/maps/VermilionCity_Frlg/scripts.pory"
# 668 "data/maps/VermilionCity_Frlg/scripts.pory"
	msgbox VermilionCity_Text_GymSign
# 669 "data/maps/VermilionCity_Frlg/scripts.pory"
# 352 "data/maps/VermilionCity_Frlg/scripts.pory"
# 670 "data/maps/VermilionCity_Frlg/scripts.pory"
	releaseall
# 671 "data/maps/VermilionCity_Frlg/scripts.pory"
	end
# 672 "data/maps/VermilionCity_Frlg/scripts.pory"

# 673 "data/maps/VermilionCity_Frlg/scripts.pory"

# 674 "data/maps/VermilionCity_Frlg/scripts.pory"
VermilionCity_EventScript_HarborSign::
# 675 "data/maps/VermilionCity_Frlg/scripts.pory"
# 357 "data/maps/VermilionCity_Frlg/scripts.pory"
# 676 "data/maps/VermilionCity_Frlg/scripts.pory"
	msgbox VermilionCity_Text_VermilionHarbor, MSGBOX_SIGN
# 677 "data/maps/VermilionCity_Frlg/scripts.pory"
	end
# 678 "data/maps/VermilionCity_Frlg/scripts.pory"

# 679 "data/maps/VermilionCity_Frlg/scripts.pory"

# 680 "data/maps/VermilionCity_Frlg/scripts.pory"
VermilionCity_Text_GrimerMultipliesInSludge::
# 681 "data/maps/VermilionCity_Frlg/scripts.pory"
# 361 "data/maps/VermilionCity_Frlg/scripts.pory"
# 682 "data/maps/VermilionCity_Frlg/scripts.pory"
	.string "We're careful about pollution here.\p"
# 683 "data/maps/VermilionCity_Frlg/scripts.pory"
	.string "We've heard GRIMER multiplies in\n"
# 684 "data/maps/VermilionCity_Frlg/scripts.pory"
	.string "toxic sludge.$"
# 685 "data/maps/VermilionCity_Frlg/scripts.pory"

# 686 "data/maps/VermilionCity_Frlg/scripts.pory"
VermilionCity_Text_DidYouSeeSSAnneInHarbor::
# 687 "data/maps/VermilionCity_Frlg/scripts.pory"
# 367 "data/maps/VermilionCity_Frlg/scripts.pory"
# 688 "data/maps/VermilionCity_Frlg/scripts.pory"
	.string "Did you see the S.S. ANNE moored\n"
# 689 "data/maps/VermilionCity_Frlg/scripts.pory"
	.string "in the harbor?$"
# 690 "data/maps/VermilionCity_Frlg/scripts.pory"

# 691 "data/maps/VermilionCity_Frlg/scripts.pory"
VermilionCity_Text_SSAnneHasDepartedForYear::
# 692 "data/maps/VermilionCity_Frlg/scripts.pory"
# 372 "data/maps/VermilionCity_Frlg/scripts.pory"
# 693 "data/maps/VermilionCity_Frlg/scripts.pory"
	.string "So, the S.S. ANNE has departed?\p"
# 694 "data/maps/VermilionCity_Frlg/scripts.pory"
	.string "She'll be back in VERMILION about\n"
# 695 "data/maps/VermilionCity_Frlg/scripts.pory"
	.string "this time next year.$"
# 696 "data/maps/VermilionCity_Frlg/scripts.pory"

# 697 "data/maps/VermilionCity_Frlg/scripts.pory"
VermilionCity_Text_BuildingOnThisLand::
# 698 "data/maps/VermilionCity_Frlg/scripts.pory"
# 378 "data/maps/VermilionCity_Frlg/scripts.pory"
# 699 "data/maps/VermilionCity_Frlg/scripts.pory"
	.string "I'm putting up a building on this\n"
# 700 "data/maps/VermilionCity_Frlg/scripts.pory"
	.string "plot of land. I own it all.\p"
# 701 "data/maps/VermilionCity_Frlg/scripts.pory"
	.string "My POKéMON is tamping the land\n"
# 702 "data/maps/VermilionCity_Frlg/scripts.pory"
	.string "to lay the foundation.$"
# 703 "data/maps/VermilionCity_Frlg/scripts.pory"

# 704 "data/maps/VermilionCity_Frlg/scripts.pory"
VermilionCity_Text_Machop::
# 705 "data/maps/VermilionCity_Frlg/scripts.pory"
# 385 "data/maps/VermilionCity_Frlg/scripts.pory"
# 706 "data/maps/VermilionCity_Frlg/scripts.pory"
	.string "MACHOP: Guoh! Gogogoh!$"
# 707 "data/maps/VermilionCity_Frlg/scripts.pory"

# 708 "data/maps/VermilionCity_Frlg/scripts.pory"
VermilionCity_Text_MachopStompingLandFlat::
# 709 "data/maps/VermilionCity_Frlg/scripts.pory"
# 389 "data/maps/VermilionCity_Frlg/scripts.pory"
# 710 "data/maps/VermilionCity_Frlg/scripts.pory"
	.string "A MACHOP is stomping the land flat.$"
# 711 "data/maps/VermilionCity_Frlg/scripts.pory"

# 712 "data/maps/VermilionCity_Frlg/scripts.pory"
VermilionCity_Text_SSAnneVisitsOnceAYear::
# 713 "data/maps/VermilionCity_Frlg/scripts.pory"
# 393 "data/maps/VermilionCity_Frlg/scripts.pory"
# 714 "data/maps/VermilionCity_Frlg/scripts.pory"
	.string "The S.S. ANNE is a famous luxury\n"
# 715 "data/maps/VermilionCity_Frlg/scripts.pory"
	.string "cruise ship.\p"
# 716 "data/maps/VermilionCity_Frlg/scripts.pory"
	.string "It visits VERMILION once a year.$"
# 717 "data/maps/VermilionCity_Frlg/scripts.pory"

# 718 "data/maps/VermilionCity_Frlg/scripts.pory"
VermilionCity_Text_CitySign::
# 719 "data/maps/VermilionCity_Frlg/scripts.pory"
# 399 "data/maps/VermilionCity_Frlg/scripts.pory"
# 720 "data/maps/VermilionCity_Frlg/scripts.pory"
	.string "VERMILION CITY\n"
# 721 "data/maps/VermilionCity_Frlg/scripts.pory"
	.string "The Port of Exquisite Sunsets$"
# 722 "data/maps/VermilionCity_Frlg/scripts.pory"

# 723 "data/maps/VermilionCity_Frlg/scripts.pory"
VermilionCity_Text_SnorlaxBlockingRoute12::
# 724 "data/maps/VermilionCity_Frlg/scripts.pory"
# 404 "data/maps/VermilionCity_Frlg/scripts.pory"
# 725 "data/maps/VermilionCity_Frlg/scripts.pory"
	.string "NOTICE!\p"
# 726 "data/maps/VermilionCity_Frlg/scripts.pory"
	.string "ROUTE 12 may be blocked off by a\n"
# 727 "data/maps/VermilionCity_Frlg/scripts.pory"
	.string "sleeping POKéMON.\p"
# 728 "data/maps/VermilionCity_Frlg/scripts.pory"
	.string "Detour through ROCK TUNNEL to\n"
# 729 "data/maps/VermilionCity_Frlg/scripts.pory"
	.string "LAVENDER TOWN.\p"
# 730 "data/maps/VermilionCity_Frlg/scripts.pory"
	.string "VERMILION POLICE$"
# 731 "data/maps/VermilionCity_Frlg/scripts.pory"

# 732 "data/maps/VermilionCity_Frlg/scripts.pory"
VermilionCity_Text_PokemonFanClubSign::
# 733 "data/maps/VermilionCity_Frlg/scripts.pory"
# 413 "data/maps/VermilionCity_Frlg/scripts.pory"
# 734 "data/maps/VermilionCity_Frlg/scripts.pory"
	.string "POKéMON FAN CLUB\n"
# 735 "data/maps/VermilionCity_Frlg/scripts.pory"
	.string "All POKéMON fans welcome!$"
# 736 "data/maps/VermilionCity_Frlg/scripts.pory"

# 737 "data/maps/VermilionCity_Frlg/scripts.pory"
VermilionCity_Text_GymSign::
# 738 "data/maps/VermilionCity_Frlg/scripts.pory"
# 418 "data/maps/VermilionCity_Frlg/scripts.pory"
# 739 "data/maps/VermilionCity_Frlg/scripts.pory"
	.string "VERMILION CITY POKéMON GYM\n"
# 740 "data/maps/VermilionCity_Frlg/scripts.pory"
	.string "LEADER: LT. SURGE\l"
# 741 "data/maps/VermilionCity_Frlg/scripts.pory"
	.string "The Lightning American!$"
# 742 "data/maps/VermilionCity_Frlg/scripts.pory"

# 743 "data/maps/VermilionCity_Frlg/scripts.pory"
VermilionCity_Text_VermilionHarbor::
# 744 "data/maps/VermilionCity_Frlg/scripts.pory"
# 424 "data/maps/VermilionCity_Frlg/scripts.pory"
# 745 "data/maps/VermilionCity_Frlg/scripts.pory"
	.string "VERMILION HARBOR$"
# 746 "data/maps/VermilionCity_Frlg/scripts.pory"

# 747 "data/maps/VermilionCity_Frlg/scripts.pory"
VermilionCity_Text_WelcomeToTheSSAnne::
# 748 "data/maps/VermilionCity_Frlg/scripts.pory"
# 428 "data/maps/VermilionCity_Frlg/scripts.pory"
# 749 "data/maps/VermilionCity_Frlg/scripts.pory"
	.string "Welcome to the S.S. ANNE!$"
# 750 "data/maps/VermilionCity_Frlg/scripts.pory"

# 751 "data/maps/VermilionCity_Frlg/scripts.pory"
VermilionCity_Text_DoYouHaveATicket::
# 752 "data/maps/VermilionCity_Frlg/scripts.pory"
# 432 "data/maps/VermilionCity_Frlg/scripts.pory"
# 753 "data/maps/VermilionCity_Frlg/scripts.pory"
	.string "Welcome to the S.S. ANNE!\p"
# 754 "data/maps/VermilionCity_Frlg/scripts.pory"
	.string "Excuse me, do you have a ticket?$"
# 755 "data/maps/VermilionCity_Frlg/scripts.pory"

# 756 "data/maps/VermilionCity_Frlg/scripts.pory"
VermilionCity_Text_FlashedSSTicket::
# 757 "data/maps/VermilionCity_Frlg/scripts.pory"
# 437 "data/maps/VermilionCity_Frlg/scripts.pory"
# 758 "data/maps/VermilionCity_Frlg/scripts.pory"
	.string "{FONT_NORMAL}{PLAYER} flashed the S.S. TICKET!\p"
# 759 "data/maps/VermilionCity_Frlg/scripts.pory"
	.string "{FONT_MALE}Great!\n"
# 760 "data/maps/VermilionCity_Frlg/scripts.pory"
	.string "Welcome to the S.S. ANNE!$"
# 761 "data/maps/VermilionCity_Frlg/scripts.pory"

# 762 "data/maps/VermilionCity_Frlg/scripts.pory"
VermilionCity_Text_DontHaveNeededSSTicket::
# 763 "data/maps/VermilionCity_Frlg/scripts.pory"
# 443 "data/maps/VermilionCity_Frlg/scripts.pory"
# 764 "data/maps/VermilionCity_Frlg/scripts.pory"
	.string "{FONT_NORMAL}{PLAYER} doesn't have the needed\n"
# 765 "data/maps/VermilionCity_Frlg/scripts.pory"
	.string "S.S. TICKET.\p"
# 766 "data/maps/VermilionCity_Frlg/scripts.pory"
	.string "{FONT_MALE}Sorry!\p"
# 767 "data/maps/VermilionCity_Frlg/scripts.pory"
	.string "You need a ticket to get aboard.$"
# 768 "data/maps/VermilionCity_Frlg/scripts.pory"

# 769 "data/maps/VermilionCity_Frlg/scripts.pory"
VermilionCity_Text_TheShipSetSail::
# 770 "data/maps/VermilionCity_Frlg/scripts.pory"
# 450 "data/maps/VermilionCity_Frlg/scripts.pory"
# 771 "data/maps/VermilionCity_Frlg/scripts.pory"
	.string "The ship set sail.$"
# 772 "data/maps/VermilionCity_Frlg/scripts.pory"

# 773 "data/maps/VermilionCity_Frlg/scripts.pory"
VermilionCity_Text_BoardSeagallopTriPass::
# 774 "data/maps/VermilionCity_Frlg/scripts.pory"
# 454 "data/maps/VermilionCity_Frlg/scripts.pory"
# 775 "data/maps/VermilionCity_Frlg/scripts.pory"
	.string "Ah, you have a TRI-PASS.\p"
# 776 "data/maps/VermilionCity_Frlg/scripts.pory"
	.string "Would you like to board\n"
# 777 "data/maps/VermilionCity_Frlg/scripts.pory"
	.string "a SEAGALLOP ferry?$"
# 778 "data/maps/VermilionCity_Frlg/scripts.pory"

# 779 "data/maps/VermilionCity_Frlg/scripts.pory"
VermilionCity_Text_Seagallop7Departing::
# 780 "data/maps/VermilionCity_Frlg/scripts.pory"
# 460 "data/maps/VermilionCity_Frlg/scripts.pory"
# 781 "data/maps/VermilionCity_Frlg/scripts.pory"
	.string "Okay, everything's in order.\p"
# 782 "data/maps/VermilionCity_Frlg/scripts.pory"
	.string "SEAGALLOP HI-SPEED 7 will be\n"
# 783 "data/maps/VermilionCity_Frlg/scripts.pory"
	.string "departing immediately.$"
# 784 "data/maps/VermilionCity_Frlg/scripts.pory"

# 785 "data/maps/VermilionCity_Frlg/scripts.pory"
VermilionCity_Text_BoardSeagallopRainbowPass::
# 786 "data/maps/VermilionCity_Frlg/scripts.pory"
# 466 "data/maps/VermilionCity_Frlg/scripts.pory"
# 787 "data/maps/VermilionCity_Frlg/scripts.pory"
	.string "Ah, you have a RAINBOW PASS.\p"
# 788 "data/maps/VermilionCity_Frlg/scripts.pory"
	.string "Would you like to board\n"
# 789 "data/maps/VermilionCity_Frlg/scripts.pory"
	.string "a SEAGALLOP ferry?$"
# 790 "data/maps/VermilionCity_Frlg/scripts.pory"

# 791 "data/maps/VermilionCity_Frlg/scripts.pory"
VermilionCity_Text_OhMysticTicketTakeYouToNavelRock::
# 792 "data/maps/VermilionCity_Frlg/scripts.pory"
# 472 "data/maps/VermilionCity_Frlg/scripts.pory"
# 793 "data/maps/VermilionCity_Frlg/scripts.pory"
	.string "Oh! That's a MYSTICTICKET!\n"
# 794 "data/maps/VermilionCity_Frlg/scripts.pory"
	.string "Now that is rare.\p"
# 795 "data/maps/VermilionCity_Frlg/scripts.pory"
	.string "We'll be happy to take you to\n"
# 796 "data/maps/VermilionCity_Frlg/scripts.pory"
	.string "NAVEL ROCK anytime.$"
# 797 "data/maps/VermilionCity_Frlg/scripts.pory"

# 798 "data/maps/VermilionCity_Frlg/scripts.pory"
VermilionCity_Text_OhAuroraTicketTakeYouToBirthIsland::
# 799 "data/maps/VermilionCity_Frlg/scripts.pory"
# 479 "data/maps/VermilionCity_Frlg/scripts.pory"
# 800 "data/maps/VermilionCity_Frlg/scripts.pory"
	.string "Oh! That's an AURORATICKET!\n"
# 801 "data/maps/VermilionCity_Frlg/scripts.pory"
	.string "Now that is rare.\p"
# 802 "data/maps/VermilionCity_Frlg/scripts.pory"
	.string "We'll be happy to take you to\n"
# 803 "data/maps/VermilionCity_Frlg/scripts.pory"
	.string "BIRTH ISLAND anytime.$"
# 804 "data/maps/VermilionCity_Frlg/scripts.pory"

# 805 "data/maps/VermilionCity_Frlg/scripts.pory"
VermilionCity_Text_BoardSeagallopFerry::
# 806 "data/maps/VermilionCity_Frlg/scripts.pory"
# 486 "data/maps/VermilionCity_Frlg/scripts.pory"
# 807 "data/maps/VermilionCity_Frlg/scripts.pory"
	.string "Would you like to board\n"
# 808 "data/maps/VermilionCity_Frlg/scripts.pory"
	.string "a SEAGALLOP ferry?$"
# 809 "data/maps/VermilionCity_Frlg/scripts.pory"

# 810 "data/maps/VermilionCity_Frlg/scripts.pory"
VermilionCity_Text_Seagallop10Departing::
# 811 "data/maps/VermilionCity_Frlg/scripts.pory"
# 491 "data/maps/VermilionCity_Frlg/scripts.pory"
# 812 "data/maps/VermilionCity_Frlg/scripts.pory"
	.string "Okay, everything's in order for you\n"
# 813 "data/maps/VermilionCity_Frlg/scripts.pory"
	.string "to board a special ferry.\p"
# 814 "data/maps/VermilionCity_Frlg/scripts.pory"
	.string "SEAGALLOP HI-SPEED 10 will be\n"
# 815 "data/maps/VermilionCity_Frlg/scripts.pory"
	.string "departing immediately.$"
# 816 "data/maps/VermilionCity_Frlg/scripts.pory"

# 817 "data/maps/VermilionCity_Frlg/scripts.pory"
VermilionCity_Text_Seagallop12Departing::
# 818 "data/maps/VermilionCity_Frlg/scripts.pory"
# 498 "data/maps/VermilionCity_Frlg/scripts.pory"
# 819 "data/maps/VermilionCity_Frlg/scripts.pory"
	.string "Okay, everything's in order for you\n"
# 820 "data/maps/VermilionCity_Frlg/scripts.pory"
	.string "to board a special ferry.\p"
# 821 "data/maps/VermilionCity_Frlg/scripts.pory"
	.string "SEAGALLOP HI-SPEED 12 will be\n"
# 822 "data/maps/VermilionCity_Frlg/scripts.pory"
	.string "departing immediately.$"
# 823 "data/maps/VermilionCity_Frlg/scripts.pory"

# 824 "data/maps/VermilionCity_Frlg/scripts.pory"
VermilionCity_Text_Route2AideHasPackageForYou::
# 825 "data/maps/VermilionCity_Frlg/scripts.pory"
# 505 "data/maps/VermilionCity_Frlg/scripts.pory"
# 826 "data/maps/VermilionCity_Frlg/scripts.pory"
	.string "Oh, hello, {PLAYER}!\n"
# 827 "data/maps/VermilionCity_Frlg/scripts.pory"
	.string "How are you doing?\p"
# 828 "data/maps/VermilionCity_Frlg/scripts.pory"
	.string "It's me, one of PROF. OAK's AIDES.\p"
# 829 "data/maps/VermilionCity_Frlg/scripts.pory"
	.string "Did you meet the other AIDE?\p"
# 830 "data/maps/VermilionCity_Frlg/scripts.pory"
	.string "He had a package from PROF. OAK\n"
# 831 "data/maps/VermilionCity_Frlg/scripts.pory"
	.string "for you, {PLAYER}.\p"
# 832 "data/maps/VermilionCity_Frlg/scripts.pory"
	.string "He said he'd look for you around\n"
# 833 "data/maps/VermilionCity_Frlg/scripts.pory"
	.string "ROUTE 2, {PLAYER}.\p"
# 834 "data/maps/VermilionCity_Frlg/scripts.pory"
	.string "If you're in the ROUTE 2 area,\n"
# 835 "data/maps/VermilionCity_Frlg/scripts.pory"
	.string "please look for him.$"
