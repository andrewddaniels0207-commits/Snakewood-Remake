# 1 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 2 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_Frlg_MapScripts::
# 3 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 2 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 4 "data/maps/ThreeIsland_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ThreeIsland_OnTransition
# 5 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.byte 0
# 6 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 7 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 8 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_OnTransition::
# 9 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 6 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 10 "data/maps/ThreeIsland_Frlg/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_THREE_ISLAND
# 11 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 7 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 12 "data/maps/ThreeIsland_Frlg/scripts.pory"
	goto_if_set FLAG_RESCUED_LOSTELLE, ThreeIsland_OnTransition_2
# 13 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_OnTransition_1:
# 14 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 10 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 15 "data/maps/ThreeIsland_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_THREE_ISLAND, 4
# 16 "data/maps/ThreeIsland_Frlg/scripts.pory"
	goto_if_eq ThreeIsland_OnTransition_5
# 17 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_OnTransition_4:
# 18 "data/maps/ThreeIsland_Frlg/scripts.pory"
	end
# 19 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 20 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_OnTransition_2:
# 21 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 8 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 22 "data/maps/ThreeIsland_Frlg/scripts.pory"
	call ThreeIsland_EventScript_HideAntiBikers
# 23 "data/maps/ThreeIsland_Frlg/scripts.pory"
	goto ThreeIsland_OnTransition_1
# 24 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 25 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_OnTransition_5:
# 26 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 11 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 27 "data/maps/ThreeIsland_Frlg/scripts.pory"
	call ThreeIsland_EventScript_SetAntiBikersMovementAfterBikers
# 28 "data/maps/ThreeIsland_Frlg/scripts.pory"
	goto ThreeIsland_OnTransition_4
# 29 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 30 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 31 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_EventScript_HideAntiBikers::
# 32 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 17 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 33 "data/maps/ThreeIsland_Frlg/scripts.pory"
	setflag FLAG_HIDE_THREE_ISLAND_ANTIBIKERS
# 34 "data/maps/ThreeIsland_Frlg/scripts.pory"
	return
# 35 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 36 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 37 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_EventScript_SetAntiBikersMovementAfterBikers::
# 38 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 22 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 39 "data/maps/ThreeIsland_Frlg/scripts.pory"
	setobjectmovementtype LOCALID_THREE_ISLAND_ANTIBIKER1, MOVEMENT_TYPE_LOOK_AROUND
# 40 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 23 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 41 "data/maps/ThreeIsland_Frlg/scripts.pory"
	setobjectmovementtype LOCALID_THREE_ISLAND_ANTIBIKER2, MOVEMENT_TYPE_LOOK_AROUND
# 42 "data/maps/ThreeIsland_Frlg/scripts.pory"
	return
# 43 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 44 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 45 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_EventScript_Biker::
# 46 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 28 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 47 "data/maps/ThreeIsland_Frlg/scripts.pory"
	lock
# 48 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 29 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 49 "data/maps/ThreeIsland_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 2
# 50 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 30 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 51 "data/maps/ThreeIsland_Frlg/scripts.pory"
	call ThreeIsland_EventScript_BikerArgumentScene
# 52 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 31 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 53 "data/maps/ThreeIsland_Frlg/scripts.pory"
	release
# 54 "data/maps/ThreeIsland_Frlg/scripts.pory"
	end
# 55 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 56 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 57 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_EventScript_AntiBiker1::
# 58 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 36 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 59 "data/maps/ThreeIsland_Frlg/scripts.pory"
	lock
# 60 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 37 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 61 "data/maps/ThreeIsland_Frlg/scripts.pory"
	goto_if_set FLAG_GOT_FULL_RESTORE_FROM_THREE_ISLAND_DEFENDER, ThreeIsland_EventScript_AntiBiker1_2
# 62 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_EventScript_AntiBiker1_1:
# 63 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 40 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 64 "data/maps/ThreeIsland_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_THREE_ISLAND, 4
# 65 "data/maps/ThreeIsland_Frlg/scripts.pory"
	goto_if_eq ThreeIsland_EventScript_AntiBiker1_5
# 66 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_EventScript_AntiBiker1_4:
# 67 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 43 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 68 "data/maps/ThreeIsland_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 0
# 69 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 44 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 70 "data/maps/ThreeIsland_Frlg/scripts.pory"
	call ThreeIsland_EventScript_BikerArgumentScene
# 71 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 45 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 72 "data/maps/ThreeIsland_Frlg/scripts.pory"
	release
# 73 "data/maps/ThreeIsland_Frlg/scripts.pory"
	end
# 74 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 75 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_EventScript_AntiBiker1_2:
# 76 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 38 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 77 "data/maps/ThreeIsland_Frlg/scripts.pory"
	goto ThreeIsland_EventScript_AntiBiker1GotFullRestore
# 78 "data/maps/ThreeIsland_Frlg/scripts.pory"
	goto ThreeIsland_EventScript_AntiBiker1_1
# 79 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 80 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_EventScript_AntiBiker1_5:
# 81 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 41 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 82 "data/maps/ThreeIsland_Frlg/scripts.pory"
	goto ThreeIsland_EventScript_GiveFullRestore
# 83 "data/maps/ThreeIsland_Frlg/scripts.pory"
	goto ThreeIsland_EventScript_AntiBiker1_4
# 84 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 85 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 86 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_EventScript_AntiBiker1GotFullRestore::
# 87 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 50 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 88 "data/maps/ThreeIsland_Frlg/scripts.pory"
	applymovement LOCALID_THREE_ISLAND_ANTIBIKER1, Common_Movement_FacePlayer
# 89 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 51 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 90 "data/maps/ThreeIsland_Frlg/scripts.pory"
	waitmovement 0
# 91 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 52 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 92 "data/maps/ThreeIsland_Frlg/scripts.pory"
	msgbox ThreeIsland_Text_YouveGotImpressiveMons
# 93 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 53 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 94 "data/maps/ThreeIsland_Frlg/scripts.pory"
	release
# 95 "data/maps/ThreeIsland_Frlg/scripts.pory"
	end
# 96 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 97 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 98 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_EventScript_GiveFullRestore::
# 99 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 58 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 100 "data/maps/ThreeIsland_Frlg/scripts.pory"
	applymovement LOCALID_THREE_ISLAND_ANTIBIKER1, Common_Movement_FacePlayer
# 101 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 59 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 102 "data/maps/ThreeIsland_Frlg/scripts.pory"
	waitmovement 0
# 103 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 60 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 104 "data/maps/ThreeIsland_Frlg/scripts.pory"
	msgbox ThreeIsland_Text_ThankYouOhYourMonGotHurt
# 105 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 61 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 106 "data/maps/ThreeIsland_Frlg/scripts.pory"
	checkitemspace ITEM_FULL_RESTORE
# 107 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 62 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 108 "data/maps/ThreeIsland_Frlg/scripts.pory"
	compare VAR_RESULT, FALSE
# 109 "data/maps/ThreeIsland_Frlg/scripts.pory"
	goto_if_eq ThreeIsland_EventScript_GiveFullRestore_2
# 110 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_EventScript_GiveFullRestore_1:
# 111 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 65 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 112 "data/maps/ThreeIsland_Frlg/scripts.pory"
	msgreceiveditem ThreeIsland_Text_GivenFullRestore, ITEM_FULL_RESTORE
# 113 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 66 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 114 "data/maps/ThreeIsland_Frlg/scripts.pory"
	additem ITEM_FULL_RESTORE
# 115 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 67 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 116 "data/maps/ThreeIsland_Frlg/scripts.pory"
	setflag FLAG_GOT_FULL_RESTORE_FROM_THREE_ISLAND_DEFENDER
# 117 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 68 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 118 "data/maps/ThreeIsland_Frlg/scripts.pory"
	msgbox ThreeIsland_Text_YouveGotImpressiveMons
# 119 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 69 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 120 "data/maps/ThreeIsland_Frlg/scripts.pory"
	release
# 121 "data/maps/ThreeIsland_Frlg/scripts.pory"
	end
# 122 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 123 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_EventScript_GiveFullRestore_2:
# 124 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 63 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 125 "data/maps/ThreeIsland_Frlg/scripts.pory"
	goto ThreeIsland_EventScript_NoRoomForFullRestore
# 126 "data/maps/ThreeIsland_Frlg/scripts.pory"
	goto ThreeIsland_EventScript_GiveFullRestore_1
# 127 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 128 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 129 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_EventScript_NoRoomForFullRestore::
# 130 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 74 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 131 "data/maps/ThreeIsland_Frlg/scripts.pory"
	msgbox ThreeIsland_Text_OhYourBagIsFull
# 132 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 75 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 133 "data/maps/ThreeIsland_Frlg/scripts.pory"
	release
# 134 "data/maps/ThreeIsland_Frlg/scripts.pory"
	end
# 135 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 136 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 137 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_EventScript_BikerArgumentScene::
# 138 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 80 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 139 "data/maps/ThreeIsland_Frlg/scripts.pory"
	compare VAR_TEMP_1, 1
# 140 "data/maps/ThreeIsland_Frlg/scripts.pory"
	goto_if_eq ThreeIsland_EventScript_BikerArgumentScene_2
# 141 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_EventScript_BikerArgumentScene_1:
# 142 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 83 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 143 "data/maps/ThreeIsland_Frlg/scripts.pory"
	compare VAR_TEMP_1, 2
# 144 "data/maps/ThreeIsland_Frlg/scripts.pory"
	goto_if_eq ThreeIsland_EventScript_BikerArgumentScene_5
# 145 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_EventScript_BikerArgumentScene_4:
# 146 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 86 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 147 "data/maps/ThreeIsland_Frlg/scripts.pory"
	applymovement LOCALID_THREE_ISLAND_ANTIBIKER1, ThreeIsland_Movement_SpeakRight
# 148 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 87 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 149 "data/maps/ThreeIsland_Frlg/scripts.pory"
	waitmovement 0
# 150 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 88 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 151 "data/maps/ThreeIsland_Frlg/scripts.pory"
	msgbox ThreeIsland_Text_GoBackToKanto
# 152 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 89 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 153 "data/maps/ThreeIsland_Frlg/scripts.pory"
	compare VAR_TEMP_1, 0
# 154 "data/maps/ThreeIsland_Frlg/scripts.pory"
	goto_if_eq ThreeIsland_EventScript_BikerArgumentScene_8
# 155 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_EventScript_BikerArgumentScene_7:
# 156 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 92 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 157 "data/maps/ThreeIsland_Frlg/scripts.pory"
	compare VAR_TEMP_1, 1
# 158 "data/maps/ThreeIsland_Frlg/scripts.pory"
	goto_if_eq ThreeIsland_EventScript_BikerArgumentScene_11
# 159 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_EventScript_BikerArgumentScene_10:
# 160 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 95 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 161 "data/maps/ThreeIsland_Frlg/scripts.pory"
	compare VAR_TEMP_1, 2
# 162 "data/maps/ThreeIsland_Frlg/scripts.pory"
	goto_if_eq ThreeIsland_EventScript_BikerArgumentScene_14
# 163 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_EventScript_BikerArgumentScene_13:
# 164 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 98 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 165 "data/maps/ThreeIsland_Frlg/scripts.pory"
	applymovement LOCALID_THREE_ISLAND_BIKER1, ThreeIsland_Movement_SpeakLeft
# 166 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 99 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 167 "data/maps/ThreeIsland_Frlg/scripts.pory"
	waitmovement 0
# 168 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 100 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 169 "data/maps/ThreeIsland_Frlg/scripts.pory"
	msgbox ThreeIsland_Text_BossIsOnHisWay
# 170 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 101 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 171 "data/maps/ThreeIsland_Frlg/scripts.pory"
	compare VAR_TEMP_1, 0
# 172 "data/maps/ThreeIsland_Frlg/scripts.pory"
	goto_if_eq ThreeIsland_EventScript_BikerArgumentScene_17
# 173 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_EventScript_BikerArgumentScene_16:
# 174 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 104 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 175 "data/maps/ThreeIsland_Frlg/scripts.pory"
	compare VAR_TEMP_1, 1
# 176 "data/maps/ThreeIsland_Frlg/scripts.pory"
	goto_if_eq ThreeIsland_EventScript_BikerArgumentScene_20
# 177 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_EventScript_BikerArgumentScene_19:
# 178 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 107 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 179 "data/maps/ThreeIsland_Frlg/scripts.pory"
	compare VAR_TEMP_1, 2
# 180 "data/maps/ThreeIsland_Frlg/scripts.pory"
	goto_if_eq ThreeIsland_EventScript_BikerArgumentScene_23
# 181 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_EventScript_BikerArgumentScene_22:
# 182 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 110 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 183 "data/maps/ThreeIsland_Frlg/scripts.pory"
	applymovement LOCALID_THREE_ISLAND_ANTIBIKER2, ThreeIsland_Movement_SpeakRight
# 184 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 111 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 185 "data/maps/ThreeIsland_Frlg/scripts.pory"
	waitmovement 0
# 186 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 112 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 187 "data/maps/ThreeIsland_Frlg/scripts.pory"
	msgbox ThreeIsland_Text_GetOffIslandNow
# 188 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 113 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 189 "data/maps/ThreeIsland_Frlg/scripts.pory"
	compare VAR_TEMP_1, 0
# 190 "data/maps/ThreeIsland_Frlg/scripts.pory"
	goto_if_eq ThreeIsland_EventScript_BikerArgumentScene_26
# 191 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_EventScript_BikerArgumentScene_25:
# 192 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 116 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 193 "data/maps/ThreeIsland_Frlg/scripts.pory"
	compare VAR_TEMP_1, 1
# 194 "data/maps/ThreeIsland_Frlg/scripts.pory"
	goto_if_eq ThreeIsland_EventScript_BikerArgumentScene_29
# 195 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_EventScript_BikerArgumentScene_28:
# 196 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 119 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 197 "data/maps/ThreeIsland_Frlg/scripts.pory"
	compare VAR_TEMP_1, 2
# 198 "data/maps/ThreeIsland_Frlg/scripts.pory"
	goto_if_eq ThreeIsland_EventScript_BikerArgumentScene_32
# 199 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_EventScript_BikerArgumentScene_31:
# 200 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 122 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 201 "data/maps/ThreeIsland_Frlg/scripts.pory"
	applymovement LOCALID_THREE_ISLAND_BIKER3, ThreeIsland_Movement_SpeakLeft
# 202 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 123 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 203 "data/maps/ThreeIsland_Frlg/scripts.pory"
	waitmovement 0
# 204 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 124 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 205 "data/maps/ThreeIsland_Frlg/scripts.pory"
	msgbox ThreeIsland_Text_WhosGonnaMakeMe
# 206 "data/maps/ThreeIsland_Frlg/scripts.pory"
	return
# 207 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 208 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_EventScript_BikerArgumentScene_2:
# 209 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 81 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 210 "data/maps/ThreeIsland_Frlg/scripts.pory"
	call ThreeIsland_EventScript_PlayerFaceLeft
# 211 "data/maps/ThreeIsland_Frlg/scripts.pory"
	goto ThreeIsland_EventScript_BikerArgumentScene_1
# 212 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 213 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_EventScript_BikerArgumentScene_5:
# 214 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 84 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 215 "data/maps/ThreeIsland_Frlg/scripts.pory"
	call ThreeIsland_EventScript_PlayerFaceLeft
# 216 "data/maps/ThreeIsland_Frlg/scripts.pory"
	goto ThreeIsland_EventScript_BikerArgumentScene_4
# 217 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 218 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_EventScript_BikerArgumentScene_8:
# 219 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 90 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 220 "data/maps/ThreeIsland_Frlg/scripts.pory"
	call ThreeIsland_EventScript_PlayerFaceRight
# 221 "data/maps/ThreeIsland_Frlg/scripts.pory"
	goto ThreeIsland_EventScript_BikerArgumentScene_7
# 222 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 223 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_EventScript_BikerArgumentScene_11:
# 224 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 93 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 225 "data/maps/ThreeIsland_Frlg/scripts.pory"
	call ThreeIsland_EventScript_PlayerFaceRight
# 226 "data/maps/ThreeIsland_Frlg/scripts.pory"
	goto ThreeIsland_EventScript_BikerArgumentScene_10
# 227 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 228 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_EventScript_BikerArgumentScene_14:
# 229 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 96 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 230 "data/maps/ThreeIsland_Frlg/scripts.pory"
	call ThreeIsland_EventScript_PlayerFaceBiker
# 231 "data/maps/ThreeIsland_Frlg/scripts.pory"
	goto ThreeIsland_EventScript_BikerArgumentScene_13
# 232 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 233 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_EventScript_BikerArgumentScene_17:
# 234 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 102 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 235 "data/maps/ThreeIsland_Frlg/scripts.pory"
	call ThreeIsland_EventScript_PlayerFaceUp
# 236 "data/maps/ThreeIsland_Frlg/scripts.pory"
	goto ThreeIsland_EventScript_BikerArgumentScene_16
# 237 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 238 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_EventScript_BikerArgumentScene_20:
# 239 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 105 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 240 "data/maps/ThreeIsland_Frlg/scripts.pory"
	call ThreeIsland_EventScript_PlayerFaceUp
# 241 "data/maps/ThreeIsland_Frlg/scripts.pory"
	goto ThreeIsland_EventScript_BikerArgumentScene_19
# 242 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 243 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_EventScript_BikerArgumentScene_23:
# 244 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 108 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 245 "data/maps/ThreeIsland_Frlg/scripts.pory"
	call ThreeIsland_EventScript_PlayerFaceAntiBiker
# 246 "data/maps/ThreeIsland_Frlg/scripts.pory"
	goto ThreeIsland_EventScript_BikerArgumentScene_22
# 247 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 248 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_EventScript_BikerArgumentScene_26:
# 249 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 114 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 250 "data/maps/ThreeIsland_Frlg/scripts.pory"
	call ThreeIsland_EventScript_PlayerFaceRight
# 251 "data/maps/ThreeIsland_Frlg/scripts.pory"
	goto ThreeIsland_EventScript_BikerArgumentScene_25
# 252 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 253 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_EventScript_BikerArgumentScene_29:
# 254 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 117 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 255 "data/maps/ThreeIsland_Frlg/scripts.pory"
	call ThreeIsland_EventScript_PlayerFaceRight
# 256 "data/maps/ThreeIsland_Frlg/scripts.pory"
	goto ThreeIsland_EventScript_BikerArgumentScene_28
# 257 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 258 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_EventScript_BikerArgumentScene_32:
# 259 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 120 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 260 "data/maps/ThreeIsland_Frlg/scripts.pory"
	call ThreeIsland_EventScript_PlayerFaceBiker
# 261 "data/maps/ThreeIsland_Frlg/scripts.pory"
	goto ThreeIsland_EventScript_BikerArgumentScene_31
# 262 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 263 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 264 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_EventScript_PlayerFaceUp::
# 265 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 129 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 266 "data/maps/ThreeIsland_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 267 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 130 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 268 "data/maps/ThreeIsland_Frlg/scripts.pory"
	waitmovement 0
# 269 "data/maps/ThreeIsland_Frlg/scripts.pory"
	return
# 270 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 271 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 272 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_EventScript_PlayerFaceDown::
# 273 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 135 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 274 "data/maps/ThreeIsland_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 275 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 136 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 276 "data/maps/ThreeIsland_Frlg/scripts.pory"
	waitmovement 0
# 277 "data/maps/ThreeIsland_Frlg/scripts.pory"
	return
# 278 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 279 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 280 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_EventScript_PlayerFaceLeft::
# 281 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 141 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 282 "data/maps/ThreeIsland_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 283 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 142 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 284 "data/maps/ThreeIsland_Frlg/scripts.pory"
	waitmovement 0
# 285 "data/maps/ThreeIsland_Frlg/scripts.pory"
	return
# 286 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 287 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 288 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_EventScript_PlayerFaceRight::
# 289 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 147 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 290 "data/maps/ThreeIsland_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 291 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 148 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 292 "data/maps/ThreeIsland_Frlg/scripts.pory"
	waitmovement 0
# 293 "data/maps/ThreeIsland_Frlg/scripts.pory"
	return
# 294 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 295 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 296 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_EventScript_PlayerFaceBiker::
# 297 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 153 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 298 "data/maps/ThreeIsland_Frlg/scripts.pory"
	getplayerxy VAR_0x8004, VAR_0x8005
# 299 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 154 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 300 "data/maps/ThreeIsland_Frlg/scripts.pory"
	compare VAR_0x8004, 9
# 301 "data/maps/ThreeIsland_Frlg/scripts.pory"
	goto_if_ge ThreeIsland_EventScript_PlayerFaceBiker_2
# 302 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_EventScript_PlayerFaceBiker_1:
# 303 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 157 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 304 "data/maps/ThreeIsland_Frlg/scripts.pory"
	goto ThreeIsland_EventScript_PlayerFaceRight
# 305 "data/maps/ThreeIsland_Frlg/scripts.pory"
	end
# 306 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 307 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_EventScript_PlayerFaceBiker_2:
# 308 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 155 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 309 "data/maps/ThreeIsland_Frlg/scripts.pory"
	goto ThreeIsland_EventScript_PlayerFaceUp
# 310 "data/maps/ThreeIsland_Frlg/scripts.pory"
	goto ThreeIsland_EventScript_PlayerFaceBiker_1
# 311 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 312 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 313 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_EventScript_PlayerFaceAntiBiker::
# 314 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 162 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 315 "data/maps/ThreeIsland_Frlg/scripts.pory"
	getplayerxy VAR_0x8004, VAR_0x8005
# 316 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 163 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 317 "data/maps/ThreeIsland_Frlg/scripts.pory"
	compare VAR_0x8004, 9
# 318 "data/maps/ThreeIsland_Frlg/scripts.pory"
	goto_if_ge ThreeIsland_EventScript_PlayerFaceAntiBiker_2
# 319 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_EventScript_PlayerFaceAntiBiker_1:
# 320 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 166 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 321 "data/maps/ThreeIsland_Frlg/scripts.pory"
	goto ThreeIsland_EventScript_PlayerFaceUp
# 322 "data/maps/ThreeIsland_Frlg/scripts.pory"
	end
# 323 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 324 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_EventScript_PlayerFaceAntiBiker_2:
# 325 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 164 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 326 "data/maps/ThreeIsland_Frlg/scripts.pory"
	goto ThreeIsland_EventScript_PlayerFaceLeft
# 327 "data/maps/ThreeIsland_Frlg/scripts.pory"
	goto ThreeIsland_EventScript_PlayerFaceAntiBiker_1
# 328 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 329 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 330 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_EventScript_AntiBiker2::
# 331 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 171 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 332 "data/maps/ThreeIsland_Frlg/scripts.pory"
	lock
# 333 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 172 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 334 "data/maps/ThreeIsland_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_THREE_ISLAND, 4
# 335 "data/maps/ThreeIsland_Frlg/scripts.pory"
	goto_if_eq ThreeIsland_EventScript_AntiBiker2_2
# 336 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_EventScript_AntiBiker2_1:
# 337 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 175 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 338 "data/maps/ThreeIsland_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 1
# 339 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 176 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 340 "data/maps/ThreeIsland_Frlg/scripts.pory"
	call ThreeIsland_EventScript_BikerArgumentScene
# 341 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 177 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 342 "data/maps/ThreeIsland_Frlg/scripts.pory"
	release
# 343 "data/maps/ThreeIsland_Frlg/scripts.pory"
	end
# 344 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 345 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_EventScript_AntiBiker2_2:
# 346 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 173 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 347 "data/maps/ThreeIsland_Frlg/scripts.pory"
	goto ThreeIsland_EventScript_AntiBiker2BikersGone
# 348 "data/maps/ThreeIsland_Frlg/scripts.pory"
	goto ThreeIsland_EventScript_AntiBiker2_1
# 349 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 350 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 351 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_EventScript_AntiBiker2BikersGone::
# 352 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 182 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 353 "data/maps/ThreeIsland_Frlg/scripts.pory"
	applymovement LOCALID_THREE_ISLAND_ANTIBIKER2, Common_Movement_FacePlayer
# 354 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 183 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 355 "data/maps/ThreeIsland_Frlg/scripts.pory"
	waitmovement 0
# 356 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 184 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 357 "data/maps/ThreeIsland_Frlg/scripts.pory"
	msgbox ThreeIsland_Text_LostelleWentOffTowardsBondBridge
# 358 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 185 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 359 "data/maps/ThreeIsland_Frlg/scripts.pory"
	release
# 360 "data/maps/ThreeIsland_Frlg/scripts.pory"
	end
# 361 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 362 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 363 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_EventScript_BikerBossIntroTrigger::
# 364 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 190 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 365 "data/maps/ThreeIsland_Frlg/scripts.pory"
	lockall
# 366 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 191 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 367 "data/maps/ThreeIsland_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 368 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 192 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 369 "data/maps/ThreeIsland_Frlg/scripts.pory"
	applymovement LOCALID_THREE_ISLAND_ANTIBIKER1, ThreeIsland_Movement_SpeakRight
# 370 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 193 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 371 "data/maps/ThreeIsland_Frlg/scripts.pory"
	waitmovement 0
# 372 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 194 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 373 "data/maps/ThreeIsland_Frlg/scripts.pory"
	msgbox ThreeIsland_Text_AreYouBossGoBackToKanto
# 374 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 195 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 375 "data/maps/ThreeIsland_Frlg/scripts.pory"
	applymovement LOCALID_PAXTON, ThreeIsland_Movement_SpeakLeft
# 376 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 196 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 377 "data/maps/ThreeIsland_Frlg/scripts.pory"
	waitmovement 0
# 378 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 197 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 379 "data/maps/ThreeIsland_Frlg/scripts.pory"
	msgbox ThreeIsland_Text_JustGotHerePal
# 380 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 198 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 381 "data/maps/ThreeIsland_Frlg/scripts.pory"
	applymovement LOCALID_THREE_ISLAND_ANTIBIKER1, ThreeIsland_Movement_SpeakRight
# 382 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 199 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 383 "data/maps/ThreeIsland_Frlg/scripts.pory"
	waitmovement 0
# 384 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 200 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 385 "data/maps/ThreeIsland_Frlg/scripts.pory"
	msgbox ThreeIsland_Text_FollowersRaisingHavoc
# 386 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 201 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 387 "data/maps/ThreeIsland_Frlg/scripts.pory"
	applymovement LOCALID_PAXTON, ThreeIsland_Movement_SpeakLeft
# 388 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 202 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 389 "data/maps/ThreeIsland_Frlg/scripts.pory"
	waitmovement 0
# 390 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 203 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 391 "data/maps/ThreeIsland_Frlg/scripts.pory"
	msgbox ThreeIsland_Text_OughtToBeThankingUs
# 392 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 204 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 393 "data/maps/ThreeIsland_Frlg/scripts.pory"
	applymovement LOCALID_THREE_ISLAND_ANTIBIKER1, ThreeIsland_Movement_SpeakRight
# 394 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 205 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 395 "data/maps/ThreeIsland_Frlg/scripts.pory"
	waitmovement 0
# 396 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 206 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 397 "data/maps/ThreeIsland_Frlg/scripts.pory"
	msgbox ThreeIsland_Text_YouCowardsToughInPack
# 398 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 207 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 399 "data/maps/ThreeIsland_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_THREE_ISLAND, 3
# 400 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 208 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 401 "data/maps/ThreeIsland_Frlg/scripts.pory"
	releaseall
# 402 "data/maps/ThreeIsland_Frlg/scripts.pory"
	end
# 403 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 404 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 405 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 212 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 406 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_Movement_SpeakLeft:
# 407 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 213 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 408 "data/maps/ThreeIsland_Frlg/scripts.pory"
	walk_in_place_left
# 409 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 214 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 410 "data/maps/ThreeIsland_Frlg/scripts.pory"
	step_end
# 411 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 412 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 217 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 413 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_Movement_SpeakRight:
# 414 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 218 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 415 "data/maps/ThreeIsland_Frlg/scripts.pory"
	walk_in_place_right
# 416 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 219 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 417 "data/maps/ThreeIsland_Frlg/scripts.pory"
	step_end
# 418 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 419 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_EventScript_BattleBikersTriggerLeft::
# 420 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 223 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 421 "data/maps/ThreeIsland_Frlg/scripts.pory"
	lockall
# 422 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 224 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 423 "data/maps/ThreeIsland_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 0
# 424 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 225 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 425 "data/maps/ThreeIsland_Frlg/scripts.pory"
	goto ThreeIsland_EventScript_BattleBikersScene
# 426 "data/maps/ThreeIsland_Frlg/scripts.pory"
	end
# 427 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 428 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 429 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_EventScript_BattleBikersTriggerMidLeft::
# 430 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 230 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 431 "data/maps/ThreeIsland_Frlg/scripts.pory"
	lockall
# 432 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 231 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 433 "data/maps/ThreeIsland_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 1
# 434 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 232 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 435 "data/maps/ThreeIsland_Frlg/scripts.pory"
	goto ThreeIsland_EventScript_BattleBikersScene
# 436 "data/maps/ThreeIsland_Frlg/scripts.pory"
	end
# 437 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 438 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 439 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_EventScript_BattleBikersTriggerMid::
# 440 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 237 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 441 "data/maps/ThreeIsland_Frlg/scripts.pory"
	lockall
# 442 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 238 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 443 "data/maps/ThreeIsland_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 2
# 444 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 239 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 445 "data/maps/ThreeIsland_Frlg/scripts.pory"
	goto ThreeIsland_EventScript_BattleBikersScene
# 446 "data/maps/ThreeIsland_Frlg/scripts.pory"
	end
# 447 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 448 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 449 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_EventScript_BattleBikersTriggerMidRight::
# 450 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 244 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 451 "data/maps/ThreeIsland_Frlg/scripts.pory"
	lockall
# 452 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 245 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 453 "data/maps/ThreeIsland_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 3
# 454 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 246 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 455 "data/maps/ThreeIsland_Frlg/scripts.pory"
	goto ThreeIsland_EventScript_BattleBikersScene
# 456 "data/maps/ThreeIsland_Frlg/scripts.pory"
	end
# 457 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 458 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 459 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_EventScript_BattleBikersTriggerRight::
# 460 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 251 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 461 "data/maps/ThreeIsland_Frlg/scripts.pory"
	lockall
# 462 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 252 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 463 "data/maps/ThreeIsland_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 4
# 464 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 253 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 465 "data/maps/ThreeIsland_Frlg/scripts.pory"
	goto ThreeIsland_EventScript_BattleBikersScene
# 466 "data/maps/ThreeIsland_Frlg/scripts.pory"
	end
# 467 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 468 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 469 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_EventScript_BattleBikersScene::
# 470 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 258 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 471 "data/maps/ThreeIsland_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 472 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 259 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 473 "data/maps/ThreeIsland_Frlg/scripts.pory"
	applymovement LOCALID_THREE_ISLAND_BIKER1, Common_Movement_WalkInPlaceFasterDown
# 474 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 260 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 475 "data/maps/ThreeIsland_Frlg/scripts.pory"
	waitmovement 0
# 476 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 261 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 477 "data/maps/ThreeIsland_Frlg/scripts.pory"
	playse SE_PIN
# 478 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 262 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 479 "data/maps/ThreeIsland_Frlg/scripts.pory"
	applymovement LOCALID_THREE_ISLAND_BIKER1, Common_Movement_ExclamationMark
# 480 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 263 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 481 "data/maps/ThreeIsland_Frlg/scripts.pory"
	waitmovement 0
# 482 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 264 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 483 "data/maps/ThreeIsland_Frlg/scripts.pory"
	applymovement LOCALID_THREE_ISLAND_BIKER1, Common_Movement_Delay48
# 484 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 265 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 485 "data/maps/ThreeIsland_Frlg/scripts.pory"
	waitmovement 0
# 486 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 266 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 487 "data/maps/ThreeIsland_Frlg/scripts.pory"
	applymovement LOCALID_THREE_ISLAND_BIKER1, ThreeIsland_Movement_BikerApproach
# 488 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 267 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 489 "data/maps/ThreeIsland_Frlg/scripts.pory"
	waitmovement 0
# 490 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 268 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 491 "data/maps/ThreeIsland_Frlg/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_BOY, 0
# 492 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 269 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 493 "data/maps/ThreeIsland_Frlg/scripts.pory"
	msgbox ThreeIsland_Text_WannaMakeSomethingOfYourStaring, MSGBOX_YESNO
# 494 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 270 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 495 "data/maps/ThreeIsland_Frlg/scripts.pory"
	compare VAR_RESULT, NO
# 496 "data/maps/ThreeIsland_Frlg/scripts.pory"
	goto_if_eq ThreeIsland_EventScript_BattleBikersScene_2
# 497 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_EventScript_BattleBikersScene_1:
# 498 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 273 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 499 "data/maps/ThreeIsland_Frlg/scripts.pory"
	msgbox ThreeIsland_Text_Biker1Intro
# 500 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 274 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 501 "data/maps/ThreeIsland_Frlg/scripts.pory"
	setvar VAR_LAST_TALKED, LOCALID_THREE_ISLAND_BIKER1
# 502 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 275 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 503 "data/maps/ThreeIsland_Frlg/scripts.pory"
	trainerbattle_no_intro TRAINER_BIKER_GOON, ThreeIsland_Text_Biker1Defeat
# 504 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 276 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 505 "data/maps/ThreeIsland_Frlg/scripts.pory"
	applymovement LOCALID_THREE_ISLAND_BIKER1, ThreeIsland_Movement_BikerSpeak
# 506 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 277 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 507 "data/maps/ThreeIsland_Frlg/scripts.pory"
	waitmovement 0
# 508 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 278 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 509 "data/maps/ThreeIsland_Frlg/scripts.pory"
	msgbox ThreeIsland_Text_Biker1PostBattle
# 510 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 279 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 511 "data/maps/ThreeIsland_Frlg/scripts.pory"
	closemessage
# 512 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 280 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 513 "data/maps/ThreeIsland_Frlg/scripts.pory"
	applymovement LOCALID_THREE_ISLAND_BIKER2, ThreeIsland_Movement_BikerApproach
# 514 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 281 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 515 "data/maps/ThreeIsland_Frlg/scripts.pory"
	waitmovement 0
# 516 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 282 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 517 "data/maps/ThreeIsland_Frlg/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_BOY, 0
# 518 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 283 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 519 "data/maps/ThreeIsland_Frlg/scripts.pory"
	msgbox ThreeIsland_Text_Biker2Intro
# 520 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 284 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 521 "data/maps/ThreeIsland_Frlg/scripts.pory"
	setvar VAR_LAST_TALKED, LOCALID_THREE_ISLAND_BIKER2
# 522 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 285 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 523 "data/maps/ThreeIsland_Frlg/scripts.pory"
	trainerbattle_no_intro TRAINER_BIKER_GOON_2, ThreeIsland_Text_Biker2Defeat
# 524 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 286 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 525 "data/maps/ThreeIsland_Frlg/scripts.pory"
	applymovement LOCALID_THREE_ISLAND_BIKER2, ThreeIsland_Movement_BikerSpeak
# 526 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 287 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 527 "data/maps/ThreeIsland_Frlg/scripts.pory"
	waitmovement 0
# 528 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 288 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 529 "data/maps/ThreeIsland_Frlg/scripts.pory"
	msgbox ThreeIsland_Text_Biker2PostBattle
# 530 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 289 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 531 "data/maps/ThreeIsland_Frlg/scripts.pory"
	closemessage
# 532 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 290 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 533 "data/maps/ThreeIsland_Frlg/scripts.pory"
	applymovement LOCALID_THREE_ISLAND_BIKER3, ThreeIsland_Movement_BikerApproach
# 534 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 291 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 535 "data/maps/ThreeIsland_Frlg/scripts.pory"
	waitmovement 0
# 536 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 292 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 537 "data/maps/ThreeIsland_Frlg/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_BOY, 0
# 538 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 293 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 539 "data/maps/ThreeIsland_Frlg/scripts.pory"
	msgbox ThreeIsland_Text_Biker3Intro
# 540 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 294 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 541 "data/maps/ThreeIsland_Frlg/scripts.pory"
	setvar VAR_LAST_TALKED, LOCALID_THREE_ISLAND_BIKER3
# 542 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 295 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 543 "data/maps/ThreeIsland_Frlg/scripts.pory"
	trainerbattle_no_intro TRAINER_BIKER_GOON_3, ThreeIsland_Text_Biker3Defeat
# 544 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 296 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 545 "data/maps/ThreeIsland_Frlg/scripts.pory"
	applymovement LOCALID_THREE_ISLAND_BIKER3, Common_Movement_WalkInPlaceFasterLeft
# 546 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 297 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 547 "data/maps/ThreeIsland_Frlg/scripts.pory"
	waitmovement 0
# 548 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 298 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 549 "data/maps/ThreeIsland_Frlg/scripts.pory"
	applymovement LOCALID_THREE_ISLAND_BIKER4, Common_Movement_WalkInPlaceFasterDown
# 550 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 299 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 551 "data/maps/ThreeIsland_Frlg/scripts.pory"
	applymovement LOCALID_THREE_ISLAND_BIKER5, Common_Movement_WalkInPlaceFasterDown
# 552 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 300 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 553 "data/maps/ThreeIsland_Frlg/scripts.pory"
	waitmovement 0
# 554 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 301 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 555 "data/maps/ThreeIsland_Frlg/scripts.pory"
	msgbox ThreeIsland_Text_Biker3PostBattle
# 556 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 302 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 557 "data/maps/ThreeIsland_Frlg/scripts.pory"
	closemessage
# 558 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 303 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 559 "data/maps/ThreeIsland_Frlg/scripts.pory"
	delay 45
# 560 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 304 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 561 "data/maps/ThreeIsland_Frlg/scripts.pory"
	compare VAR_TEMP_1, 0
# 562 "data/maps/ThreeIsland_Frlg/scripts.pory"
	goto_if_eq ThreeIsland_EventScript_BattleBikersScene_5
# 563 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_EventScript_BattleBikersScene_4:
# 564 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 307 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 565 "data/maps/ThreeIsland_Frlg/scripts.pory"
	compare VAR_TEMP_1, 1
# 566 "data/maps/ThreeIsland_Frlg/scripts.pory"
	goto_if_eq ThreeIsland_EventScript_BattleBikersScene_8
# 567 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_EventScript_BattleBikersScene_7:
# 568 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 310 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 569 "data/maps/ThreeIsland_Frlg/scripts.pory"
	compare VAR_TEMP_1, 2
# 570 "data/maps/ThreeIsland_Frlg/scripts.pory"
	goto_if_eq ThreeIsland_EventScript_BattleBikersScene_11
# 571 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_EventScript_BattleBikersScene_10:
# 572 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 313 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 573 "data/maps/ThreeIsland_Frlg/scripts.pory"
	compare VAR_TEMP_1, 3
# 574 "data/maps/ThreeIsland_Frlg/scripts.pory"
	goto_if_eq ThreeIsland_EventScript_BattleBikersScene_14
# 575 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_EventScript_BattleBikersScene_13:
# 576 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 316 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 577 "data/maps/ThreeIsland_Frlg/scripts.pory"
	compare VAR_TEMP_1, 4
# 578 "data/maps/ThreeIsland_Frlg/scripts.pory"
	goto_if_eq ThreeIsland_EventScript_BattleBikersScene_17
# 579 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_EventScript_BattleBikersScene_16:
# 580 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 319 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 581 "data/maps/ThreeIsland_Frlg/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_BOY, 0
# 582 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 320 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 583 "data/maps/ThreeIsland_Frlg/scripts.pory"
	msgbox ThreeIsland_Text_PaxtonIntro
# 584 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 321 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 585 "data/maps/ThreeIsland_Frlg/scripts.pory"
	setvar VAR_LAST_TALKED, LOCALID_PAXTON
# 586 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 322 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 587 "data/maps/ThreeIsland_Frlg/scripts.pory"
	trainerbattle_no_intro TRAINER_CUE_BALL_PAXTON, ThreeIsland_Text_PaxtonDefeat
# 588 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 323 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 589 "data/maps/ThreeIsland_Frlg/scripts.pory"
	msgbox ThreeIsland_Text_PaxtonPostBattle
# 590 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 324 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 591 "data/maps/ThreeIsland_Frlg/scripts.pory"
	closemessage
# 592 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 325 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 593 "data/maps/ThreeIsland_Frlg/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 594 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 326 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 595 "data/maps/ThreeIsland_Frlg/scripts.pory"
	removeobject LOCALID_PAXTON
# 596 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 327 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 597 "data/maps/ThreeIsland_Frlg/scripts.pory"
	removeobject LOCALID_THREE_ISLAND_BIKER1
# 598 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 328 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 599 "data/maps/ThreeIsland_Frlg/scripts.pory"
	removeobject LOCALID_THREE_ISLAND_BIKER2
# 600 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 329 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 601 "data/maps/ThreeIsland_Frlg/scripts.pory"
	removeobject LOCALID_THREE_ISLAND_BIKER3
# 602 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 330 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 603 "data/maps/ThreeIsland_Frlg/scripts.pory"
	removeobject LOCALID_THREE_ISLAND_BIKER4
# 604 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 331 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 605 "data/maps/ThreeIsland_Frlg/scripts.pory"
	removeobject LOCALID_THREE_ISLAND_BIKER5
# 606 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 332 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 607 "data/maps/ThreeIsland_Frlg/scripts.pory"
	removeobject LOCALID_THREE_ISLAND_BIKER6
# 608 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 333 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 609 "data/maps/ThreeIsland_Frlg/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 610 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 334 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 611 "data/maps/ThreeIsland_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_THREE_ISLAND, 4
# 612 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 335 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 613 "data/maps/ThreeIsland_Frlg/scripts.pory"
	releaseall
# 614 "data/maps/ThreeIsland_Frlg/scripts.pory"
	end
# 615 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 616 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_EventScript_BattleBikersScene_2:
# 617 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 271 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 618 "data/maps/ThreeIsland_Frlg/scripts.pory"
	goto ThreeIsland_EventScript_LeaveBikersAlone
# 619 "data/maps/ThreeIsland_Frlg/scripts.pory"
	goto ThreeIsland_EventScript_BattleBikersScene_1
# 620 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 621 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_EventScript_BattleBikersScene_5:
# 622 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 305 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 623 "data/maps/ThreeIsland_Frlg/scripts.pory"
	call ThreeIsland_EventScript_PaxtonApproachLeft
# 624 "data/maps/ThreeIsland_Frlg/scripts.pory"
	goto ThreeIsland_EventScript_BattleBikersScene_4
# 625 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 626 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_EventScript_BattleBikersScene_8:
# 627 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 308 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 628 "data/maps/ThreeIsland_Frlg/scripts.pory"
	call ThreeIsland_EventScript_PaxtonApproachMidLeft
# 629 "data/maps/ThreeIsland_Frlg/scripts.pory"
	goto ThreeIsland_EventScript_BattleBikersScene_7
# 630 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 631 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_EventScript_BattleBikersScene_11:
# 632 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 311 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 633 "data/maps/ThreeIsland_Frlg/scripts.pory"
	call ThreeIsland_EventScript_PaxtonApproachMid
# 634 "data/maps/ThreeIsland_Frlg/scripts.pory"
	goto ThreeIsland_EventScript_BattleBikersScene_10
# 635 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 636 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_EventScript_BattleBikersScene_14:
# 637 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 314 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 638 "data/maps/ThreeIsland_Frlg/scripts.pory"
	call ThreeIsland_EventScript_PaxtonApproachMidRight
# 639 "data/maps/ThreeIsland_Frlg/scripts.pory"
	goto ThreeIsland_EventScript_BattleBikersScene_13
# 640 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 641 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_EventScript_BattleBikersScene_17:
# 642 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 317 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 643 "data/maps/ThreeIsland_Frlg/scripts.pory"
	call ThreeIsland_EventScript_PaxtonApproachRight
# 644 "data/maps/ThreeIsland_Frlg/scripts.pory"
	goto ThreeIsland_EventScript_BattleBikersScene_16
# 645 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 646 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 647 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_EventScript_PaxtonApproachLeft::
# 648 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 340 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 649 "data/maps/ThreeIsland_Frlg/scripts.pory"
	applymovement LOCALID_THREE_ISLAND_BIKER3, Common_Movement_WalkInPlaceFasterDown
# 650 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 341 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 651 "data/maps/ThreeIsland_Frlg/scripts.pory"
	applymovement LOCALID_PAXTON, ThreeIsland_Movement_PaxtonApproachLeft
# 652 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 342 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 653 "data/maps/ThreeIsland_Frlg/scripts.pory"
	waitmovement 0
# 654 "data/maps/ThreeIsland_Frlg/scripts.pory"
	return
# 655 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 656 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 657 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_EventScript_PaxtonApproachMidLeft::
# 658 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 347 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 659 "data/maps/ThreeIsland_Frlg/scripts.pory"
	applymovement LOCALID_THREE_ISLAND_BIKER3, Common_Movement_WalkInPlaceFasterDown
# 660 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 348 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 661 "data/maps/ThreeIsland_Frlg/scripts.pory"
	applymovement LOCALID_PAXTON, ThreeIsland_Movement_PaxtonApproachMidLeft
# 662 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 349 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 663 "data/maps/ThreeIsland_Frlg/scripts.pory"
	waitmovement 0
# 664 "data/maps/ThreeIsland_Frlg/scripts.pory"
	return
# 665 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 666 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 667 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_EventScript_PaxtonApproachMid::
# 668 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 354 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 669 "data/maps/ThreeIsland_Frlg/scripts.pory"
	applymovement LOCALID_THREE_ISLAND_BIKER3, Common_Movement_WalkInPlaceFasterDown
# 670 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 355 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 671 "data/maps/ThreeIsland_Frlg/scripts.pory"
	applymovement LOCALID_PAXTON, ThreeIsland_Movement_PaxtonApproachMid
# 672 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 356 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 673 "data/maps/ThreeIsland_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, ThreeIsland_Movement_PlayerFacePaxton
# 674 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 357 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 675 "data/maps/ThreeIsland_Frlg/scripts.pory"
	waitmovement 0
# 676 "data/maps/ThreeIsland_Frlg/scripts.pory"
	return
# 677 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 678 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 679 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_EventScript_PaxtonApproachMidRight::
# 680 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 362 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 681 "data/maps/ThreeIsland_Frlg/scripts.pory"
	applymovement LOCALID_THREE_ISLAND_BIKER3, Common_Movement_WalkInPlaceFasterDown
# 682 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 363 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 683 "data/maps/ThreeIsland_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, ThreeIsland_Movement_PlayerFacePaxton
# 684 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 364 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 685 "data/maps/ThreeIsland_Frlg/scripts.pory"
	applymovement LOCALID_PAXTON, ThreeIsland_Movement_PaxtonApproachMidRight
# 686 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 365 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 687 "data/maps/ThreeIsland_Frlg/scripts.pory"
	waitmovement 0
# 688 "data/maps/ThreeIsland_Frlg/scripts.pory"
	return
# 689 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 690 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 691 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_EventScript_PaxtonApproachRight::
# 692 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 370 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 693 "data/maps/ThreeIsland_Frlg/scripts.pory"
	applymovement LOCALID_THREE_ISLAND_BIKER3, Common_Movement_WalkInPlaceFasterDown
# 694 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 371 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 695 "data/maps/ThreeIsland_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, ThreeIsland_Movement_PlayerFacePaxton
# 696 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 372 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 697 "data/maps/ThreeIsland_Frlg/scripts.pory"
	applymovement LOCALID_PAXTON, ThreeIsland_Movement_PaxtonApproachRight
# 698 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 373 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 699 "data/maps/ThreeIsland_Frlg/scripts.pory"
	waitmovement 0
# 700 "data/maps/ThreeIsland_Frlg/scripts.pory"
	return
# 701 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 702 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 703 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_EventScript_LeaveBikersAlone::
# 704 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 378 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 705 "data/maps/ThreeIsland_Frlg/scripts.pory"
	msgbox ThreeIsland_Text_ThatsSmart
# 706 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 379 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 707 "data/maps/ThreeIsland_Frlg/scripts.pory"
	closemessage
# 708 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 380 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 709 "data/maps/ThreeIsland_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, ThreeIsland_Movement_PlayerLeaveBikers
# 710 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 381 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 711 "data/maps/ThreeIsland_Frlg/scripts.pory"
	waitmovement 0
# 712 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 382 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 713 "data/maps/ThreeIsland_Frlg/scripts.pory"
	applymovement LOCALID_THREE_ISLAND_BIKER1, ThreeIsland_Movement_Biker1ReturnToPack
# 714 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 383 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 715 "data/maps/ThreeIsland_Frlg/scripts.pory"
	waitmovement 0
# 716 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 384 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 717 "data/maps/ThreeIsland_Frlg/scripts.pory"
	fadedefaultbgm
# 718 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 385 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 719 "data/maps/ThreeIsland_Frlg/scripts.pory"
	releaseall
# 720 "data/maps/ThreeIsland_Frlg/scripts.pory"
	end
# 721 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 722 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 723 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 389 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 724 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_Movement_PlayerLeaveBikers:
# 725 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 390 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 726 "data/maps/ThreeIsland_Frlg/scripts.pory"
	walk_down
# 727 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 391 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 728 "data/maps/ThreeIsland_Frlg/scripts.pory"
	step_end
# 729 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 730 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 394 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 731 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_Movement_BikerApproach:
# 732 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 395 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 733 "data/maps/ThreeIsland_Frlg/scripts.pory"
	walk_down
# 734 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 396 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 735 "data/maps/ThreeIsland_Frlg/scripts.pory"
	step_end
# 736 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 737 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 399 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 738 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_Movement_Biker1ReturnToPack:
# 739 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 400 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 740 "data/maps/ThreeIsland_Frlg/scripts.pory"
	walk_up
# 741 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 401 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 742 "data/maps/ThreeIsland_Frlg/scripts.pory"
	walk_in_place_faster_left
# 743 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 402 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 744 "data/maps/ThreeIsland_Frlg/scripts.pory"
	step_end
# 745 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 746 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 405 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 747 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_Movement_BikerSpeak:
# 748 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 406 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 749 "data/maps/ThreeIsland_Frlg/scripts.pory"
	walk_in_place_down
# 750 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 407 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 751 "data/maps/ThreeIsland_Frlg/scripts.pory"
	step_end
# 752 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 753 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 410 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 754 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_Movement_PaxtonApproachLeft:
# 755 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 411 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 756 "data/maps/ThreeIsland_Frlg/scripts.pory"
	walk_down
# 757 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 412 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 758 "data/maps/ThreeIsland_Frlg/scripts.pory"
	walk_left
# 759 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 413 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 760 "data/maps/ThreeIsland_Frlg/scripts.pory"
	walk_in_place_faster_down
# 761 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 414 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 762 "data/maps/ThreeIsland_Frlg/scripts.pory"
	step_end
# 763 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 764 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 417 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 765 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_Movement_PaxtonApproachMidLeft:
# 766 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 418 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 767 "data/maps/ThreeIsland_Frlg/scripts.pory"
	walk_down
# 768 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 419 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 769 "data/maps/ThreeIsland_Frlg/scripts.pory"
	step_end
# 770 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 771 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 422 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 772 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_Movement_PaxtonApproachMid:
# 773 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 423 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 774 "data/maps/ThreeIsland_Frlg/scripts.pory"
	walk_down
# 775 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 424 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 776 "data/maps/ThreeIsland_Frlg/scripts.pory"
	walk_down
# 777 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 425 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 778 "data/maps/ThreeIsland_Frlg/scripts.pory"
	walk_in_place_faster_right
# 779 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 426 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 780 "data/maps/ThreeIsland_Frlg/scripts.pory"
	step_end
# 781 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 782 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 429 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 783 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_Movement_PlayerFacePaxton:
# 784 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 430 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 785 "data/maps/ThreeIsland_Frlg/scripts.pory"
	delay_16
# 786 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 431 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 787 "data/maps/ThreeIsland_Frlg/scripts.pory"
	delay_16
# 788 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 432 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 789 "data/maps/ThreeIsland_Frlg/scripts.pory"
	walk_in_place_faster_left
# 790 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 433 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 791 "data/maps/ThreeIsland_Frlg/scripts.pory"
	step_end
# 792 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 793 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 436 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 794 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_Movement_PaxtonApproachMidRight:
# 795 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 437 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 796 "data/maps/ThreeIsland_Frlg/scripts.pory"
	walk_down
# 797 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 438 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 798 "data/maps/ThreeIsland_Frlg/scripts.pory"
	walk_down
# 799 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 439 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 800 "data/maps/ThreeIsland_Frlg/scripts.pory"
	walk_right
# 801 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 440 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 802 "data/maps/ThreeIsland_Frlg/scripts.pory"
	walk_in_place_faster_right
# 803 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 441 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 804 "data/maps/ThreeIsland_Frlg/scripts.pory"
	step_end
# 805 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 806 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 444 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 807 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_Movement_PaxtonApproachRight:
# 808 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 445 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 809 "data/maps/ThreeIsland_Frlg/scripts.pory"
	walk_down
# 810 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 446 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 811 "data/maps/ThreeIsland_Frlg/scripts.pory"
	walk_down
# 812 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 447 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 813 "data/maps/ThreeIsland_Frlg/scripts.pory"
	walk_right
# 814 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 448 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 815 "data/maps/ThreeIsland_Frlg/scripts.pory"
	walk_right
# 816 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 449 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 817 "data/maps/ThreeIsland_Frlg/scripts.pory"
	walk_in_place_faster_right
# 818 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 450 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 819 "data/maps/ThreeIsland_Frlg/scripts.pory"
	step_end
# 820 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 821 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_EventScript_Woman::
# 822 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 454 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 823 "data/maps/ThreeIsland_Frlg/scripts.pory"
	msgbox ThreeIsland_Text_WouldntWantToSeeBikersHereAgain, MSGBOX_NPC
# 824 "data/maps/ThreeIsland_Frlg/scripts.pory"
	end
# 825 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 826 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 827 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_EventScript_LittleBoy::
# 828 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 459 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 829 "data/maps/ThreeIsland_Frlg/scripts.pory"
	msgbox ThreeIsland_Text_WhenDodouEvolvesGoingToPlayGame, MSGBOX_NPC
# 830 "data/maps/ThreeIsland_Frlg/scripts.pory"
	end
# 831 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 832 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 833 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_EventScript_Doduo::
# 834 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 464 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 835 "data/maps/ThreeIsland_Frlg/scripts.pory"
	lock
# 836 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 465 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 837 "data/maps/ThreeIsland_Frlg/scripts.pory"
	faceplayer
# 838 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 466 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 839 "data/maps/ThreeIsland_Frlg/scripts.pory"
	waitse
# 840 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 467 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 841 "data/maps/ThreeIsland_Frlg/scripts.pory"
	playmoncry SPECIES_DODUO, CRY_MODE_NORMAL
# 842 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 468 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 843 "data/maps/ThreeIsland_Frlg/scripts.pory"
	msgbox ThreeIsland_Text_Doduo
# 844 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 469 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 845 "data/maps/ThreeIsland_Frlg/scripts.pory"
	waitmoncry
# 846 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 470 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 847 "data/maps/ThreeIsland_Frlg/scripts.pory"
	release
# 848 "data/maps/ThreeIsland_Frlg/scripts.pory"
	end
# 849 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 850 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 851 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_EventScript_IslandSign::
# 852 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 475 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 853 "data/maps/ThreeIsland_Frlg/scripts.pory"
	msgbox ThreeIsland_Text_IslandSign, MSGBOX_SIGN
# 854 "data/maps/ThreeIsland_Frlg/scripts.pory"
	end
# 855 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 856 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 857 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_EventScript_Biker6::
# 858 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 480 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 859 "data/maps/ThreeIsland_Frlg/scripts.pory"
	msgbox ThreeIsland_Text_IslandBelongsToUs, MSGBOX_NPC
# 860 "data/maps/ThreeIsland_Frlg/scripts.pory"
	end
# 861 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 862 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 863 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_Text_IslandSign::
# 864 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 484 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 865 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "THREE ISLAND\n"
# 866 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "Kin Island of Family Bonding$"
# 867 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 868 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_Text_IslandBelongsToUs::
# 869 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 489 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 870 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "Hyahoo!\p"
# 871 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "From this day on, this island\n"
# 872 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "belongs to us!$"
# 873 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 874 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_Text_GoBackToKanto::
# 875 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 495 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 876 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "We don't need you people bringing\n"
# 877 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "your noise and trouble here!\p"
# 878 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "We're asking you to go back to\n"
# 879 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "KANTO!$"
# 880 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 881 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_Text_BossIsOnHisWay::
# 882 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 502 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 883 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "Hey, go cry somewhere else.\n"
# 884 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "Our boss is on his way.\p"
# 885 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "When he gets here, we'll give you\n"
# 886 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "a k-rad motorbike show you won't\l"
# 887 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "soon forget!$"
# 888 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 889 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_Text_GetOffIslandNow::
# 890 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 510 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 891 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "W-what!? Not on your life!\n"
# 892 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "Get off the island now!$"
# 893 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 894 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_Text_WhosGonnaMakeMe::
# 895 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 515 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 896 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "Who's gonna make me?$"
# 897 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 898 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_Text_AreYouBossGoBackToKanto::
# 899 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 519 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 900 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "Are you the boss?\n"
# 901 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "Go back to KANTO right now!$"
# 902 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 903 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_Text_JustGotHerePal::
# 904 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 524 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 905 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "Hah?\p"
# 906 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "I just got here, pal.\p"
# 907 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "What's with the hostile attitude?\n"
# 908 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "It's mighty cold of you!$"
# 909 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 910 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_Text_FollowersRaisingHavoc::
# 911 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 531 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 912 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "Your gang of followers have been\n"
# 913 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "raising havoc on their bikes.\p"
# 914 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "Do you have any idea how much\n"
# 915 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "trouble they've caused us on the\l"
# 916 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "island?$"
# 917 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 918 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_Text_OughtToBeThankingUs::
# 919 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 539 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 920 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "No, man, I don't get it at all.\p"
# 921 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "Look at this place.\n"
# 922 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "What do you do for entertainment?\p"
# 923 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "You ought to be thanking us for\n"
# 924 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "livening up this sleepy village.\p"
# 925 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "But hey, if you insist, you can try\n"
# 926 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "making us leave.$"
# 927 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 928 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_Text_YouCowardsToughInPack::
# 929 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 549 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 930 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "Grr… You cowards…\n"
# 931 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "So tough in a pack…$"
# 932 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 933 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_Text_WannaMakeSomethingOfYourStaring::
# 934 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 554 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 935 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "You, what are you staring at?\n"
# 936 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "Don't you know it's not polite?\p"
# 937 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "You wanna make something of it\n"
# 938 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "or what?$"
# 939 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 940 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_Text_ThatsSmart::
# 941 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 561 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 942 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "That's smart.\n"
# 943 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "Keep your nose out of this.$"
# 944 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 945 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_Text_Biker1Intro::
# 946 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 566 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 947 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "Heh, I like your guts.\n"
# 948 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "You'll be losing money to me, but…$"
# 949 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 950 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_Text_Biker1Defeat::
# 951 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 571 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 952 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "Wha…\n"
# 953 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "What is this kid?!$"
# 954 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 955 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_Text_Biker1PostBattle::
# 956 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 576 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 957 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "Aww, man…\n"
# 958 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "Don't you dare laugh!$"
# 959 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 960 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_Text_Biker2Intro::
# 961 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 581 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 962 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "Aren't you from KANTO?\n"
# 963 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "You should be on our side!$"
# 964 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 965 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_Text_Biker2Defeat::
# 966 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 586 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 967 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "Stop fooling around!$"
# 968 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 969 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_Text_Biker2PostBattle::
# 970 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 590 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 971 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "What's the matter with you,\n"
# 972 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "getting all hot like that?\p"
# 973 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "Totally uncool, man!$"
# 974 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 975 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_Text_Biker3Intro::
# 976 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 596 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 977 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "We invited the boss out here,\n"
# 978 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "but you had to mess it up!\p"
# 979 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "You embarrassed us, man!$"
# 980 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 981 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_Text_Biker3Defeat::
# 982 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 602 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 983 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "… … …   … … …$"
# 984 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 985 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_Text_Biker3PostBattle::
# 986 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 606 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 987 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "Boss, I'm telling you, you've gotta\n"
# 988 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "do something about this kid!$"
# 989 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 990 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_Text_PaxtonIntro::
# 991 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 611 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 992 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "I've been watching you, and I'd say\n"
# 993 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "you've done enough.\p"
# 994 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "What are you, their friend or\n"
# 995 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "something?\p"
# 996 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "Then I guess you'll be battling me\n"
# 997 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "in their place.$"
# 998 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 999 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_Text_PaxtonDefeat::
# 1000 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 620 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 1001 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "All right, enough!\n"
# 1002 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "We'll leave like you wanted!\p"
# 1003 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "We'll be happy to see the last of\n"
# 1004 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "this boring island!$"
# 1005 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 1006 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_Text_PaxtonPostBattle::
# 1007 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 627 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 1008 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "Humph! Yeah, go right on hanging\n"
# 1009 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "around with these hayseeds!$"
# 1010 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 1011 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_Text_ThankYouOhYourMonGotHurt::
# 1012 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 632 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 1013 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "Thank you! Those goons were\n"
# 1014 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "nothing but bad trouble.\p"
# 1015 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "Oh, look, your POKéMON got hurt\n"
# 1016 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "on my account.$"
# 1017 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 1018 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_Text_GivenFullRestore::
# 1019 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 639 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 1020 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "{PLAYER} was given\n"
# 1021 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "a FULL RESTORE.$"
# 1022 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 1023 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_Text_OhYourBagIsFull::
# 1024 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 644 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 1025 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "Oh?\n"
# 1026 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "Your BAG is full.$"
# 1027 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 1028 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_Text_YouveGotImpressiveMons::
# 1029 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 649 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 1030 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "You've got seriously impressive\n"
# 1031 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "POKéMON with you.$"
# 1032 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 1033 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_Text_LostelleWentOffTowardsBondBridge::
# 1034 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 654 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 1035 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "It'd be fantastic if someone as\n"
# 1036 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "strong as you lived here.\p"
# 1037 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "I hope you'll at least stay here\n"
# 1038 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "a while.\p"
# 1039 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "…I beg your pardon?\n"
# 1040 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "You're looking for LOSTELLE?\p"
# 1041 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "LOSTELLE went off towards BOND\n"
# 1042 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "BRIDGE a while ago.$"
# 1043 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 1044 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_Text_WouldntWantToSeeBikersHereAgain::
# 1045 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 665 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 1046 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "THREE ISLAND is actually the most\n"
# 1047 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "populous of the islands here.\p"
# 1048 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "Still, it could be less sleepy.\p"
# 1049 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "But I wouldn't want to see goons\n"
# 1050 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "like those BIKERS here again.$"
# 1051 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 1052 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_Text_WhenDodouEvolvesGoingToPlayGame::
# 1053 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 673 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 1054 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "I'm going to train my DODUO in the\n"
# 1055 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "BERRY FOREST.\p"
# 1056 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "When it evolves, I'm going to play\n"
# 1057 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "a game on TWO ISLAND.$"
# 1058 "data/maps/ThreeIsland_Frlg/scripts.pory"

# 1059 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_Text_Doduo::
# 1060 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 680 "data/maps/ThreeIsland_Frlg/scripts.pory"
# 1061 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "DODUO: Gigiih!$"
