# 1 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 2 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_MapScripts::
# 3 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 2 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 4 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, LilycoveCity_LilycoveMuseum_2F_OnLoad
# 5 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 3 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 6 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LilycoveCity_LilycoveMuseum_2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 7 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.byte 0
# 8 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 9 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 10 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 4 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 11 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	map_script_2 VAR_LILYCOVE_MUSEUM_2F_STATE, 0, LilycoveCity_LilycoveMuseum_2F_EventScript_ShowExhibitHall
# 12 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.2byte 0
# 13 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 14 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 15 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_OnLoad::
# 16 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 9 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 17 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	goto_if_set FLAG_COOL_PAINTING_MADE, LilycoveCity_LilycoveMuseum_2F_OnLoad_2
# 18 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_OnLoad_1:
# 19 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 12 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 20 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	goto LilycoveCity_LilycoveMuseum_2F_EventScript_CheckBeautyPainting
# 21 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	end
# 22 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 23 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_OnLoad_2:
# 24 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 10 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 25 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	goto LilycoveCity_LilycoveMuseum_2F_EventScript_SetCoolPainting
# 26 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	goto LilycoveCity_LilycoveMuseum_2F_OnLoad_1
# 27 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 28 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 29 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_EventScript_CheckBeautyPainting::
# 30 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 17 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 31 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	goto_if_set FLAG_BEAUTY_PAINTING_MADE, LilycoveCity_LilycoveMuseum_2F_EventScript_CheckBeautyPainting_2
# 32 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_EventScript_CheckBeautyPainting_1:
# 33 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 20 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 34 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	goto LilycoveCity_LilycoveMuseum_2F_EventScript_CheckCutePainting
# 35 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	end
# 36 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 37 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_EventScript_CheckBeautyPainting_2:
# 38 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 18 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 39 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	goto LilycoveCity_LilycoveMuseum_2F_EventScript_SetBeautyPainting
# 40 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	goto LilycoveCity_LilycoveMuseum_2F_EventScript_CheckBeautyPainting_1
# 41 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 42 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 43 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_EventScript_CheckCutePainting::
# 44 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 25 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 45 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	goto_if_set FLAG_CUTE_PAINTING_MADE, LilycoveCity_LilycoveMuseum_2F_EventScript_CheckCutePainting_2
# 46 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_EventScript_CheckCutePainting_1:
# 47 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 28 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 48 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	goto LilycoveCity_LilycoveMuseum_2F_EventScript_CheckSmartPainting
# 49 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	end
# 50 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 51 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_EventScript_CheckCutePainting_2:
# 52 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 26 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 53 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	goto LilycoveCity_LilycoveMuseum_2F_EventScript_SetCutePainting
# 54 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	goto LilycoveCity_LilycoveMuseum_2F_EventScript_CheckCutePainting_1
# 55 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 56 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 57 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_EventScript_CheckSmartPainting::
# 58 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 33 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 59 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	goto_if_set FLAG_SMART_PAINTING_MADE, LilycoveCity_LilycoveMuseum_2F_EventScript_CheckSmartPainting_2
# 60 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_EventScript_CheckSmartPainting_1:
# 61 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 36 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 62 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	goto LilycoveCity_LilycoveMuseum_2F_EventScript_CheckToughPainting
# 63 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	end
# 64 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 65 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_EventScript_CheckSmartPainting_2:
# 66 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 34 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 67 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	goto LilycoveCity_LilycoveMuseum_2F_EventScript_SetSmartPainting
# 68 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	goto LilycoveCity_LilycoveMuseum_2F_EventScript_CheckSmartPainting_1
# 69 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 70 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 71 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_EventScript_CheckToughPainting::
# 72 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 41 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 73 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	goto_if_set FLAG_TOUGH_PAINTING_MADE, LilycoveCity_LilycoveMuseum_2F_EventScript_CheckToughPainting_2
# 74 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_EventScript_CheckToughPainting_1:
# 75 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	end
# 76 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 77 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_EventScript_CheckToughPainting_2:
# 78 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 42 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 79 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	goto LilycoveCity_LilycoveMuseum_2F_EventScript_SetToughPainting
# 80 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	goto LilycoveCity_LilycoveMuseum_2F_EventScript_CheckToughPainting_1
# 81 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 82 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 83 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_EventScript_SetCoolPainting::
# 84 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 48 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 85 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	setmetatile 10, 6, METATILE_LilycoveMuseum_Painting2_Left, TRUE
# 86 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 49 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 87 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	setmetatile 11, 6, METATILE_LilycoveMuseum_Painting2_Right, TRUE
# 88 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 50 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 89 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	goto LilycoveCity_LilycoveMuseum_2F_EventScript_CheckBeautyPainting
# 90 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	end
# 91 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 92 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 93 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_EventScript_SetBeautyPainting::
# 94 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 55 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 95 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	setmetatile 18, 6, METATILE_LilycoveMuseum_Painting1_Left, TRUE
# 96 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 56 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 97 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	setmetatile 19, 6, METATILE_LilycoveMuseum_Painting1_Right, TRUE
# 98 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 57 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 99 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	goto LilycoveCity_LilycoveMuseum_2F_EventScript_CheckCutePainting
# 100 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	end
# 101 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 102 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 103 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_EventScript_SetCutePainting::
# 104 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 62 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 105 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	setmetatile 14, 10, METATILE_LilycoveMuseum_Painting3_Left, TRUE
# 106 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 63 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 107 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	setmetatile 15, 10, METATILE_LilycoveMuseum_Painting3_Right, TRUE
# 108 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 64 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 109 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	goto LilycoveCity_LilycoveMuseum_2F_EventScript_CheckSmartPainting
# 110 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	end
# 111 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 112 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 113 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_EventScript_SetSmartPainting::
# 114 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 69 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 115 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	setmetatile 6, 10, METATILE_LilycoveMuseum_Painting0_Left, TRUE
# 116 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 70 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 117 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	setmetatile 7, 10, METATILE_LilycoveMuseum_Painting0_Right, TRUE
# 118 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 71 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 119 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	goto LilycoveCity_LilycoveMuseum_2F_EventScript_CheckToughPainting
# 120 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	end
# 121 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 122 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 123 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_EventScript_SetToughPainting::
# 124 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 76 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 125 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	setmetatile 2, 6, METATILE_LilycoveMuseum_Painting4_Left, TRUE
# 126 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 77 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 127 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	setmetatile 3, 6, METATILE_LilycoveMuseum_Painting4_Right, TRUE
# 128 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	end
# 129 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 130 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 131 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_EventScript_ShowExhibitHall::
# 132 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 82 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 133 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	lockall
# 134 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 83 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 135 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	applymovement LOCALID_MUSEUM_2F_CURATOR, Common_Movement_FacePlayer
# 136 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 84 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 137 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	applymovement LOCALID_PLAYER, LilycoveCity_LilycoveMuseum_2F_Movement_PlayerWalkInPlaceLeft
# 138 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 85 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 139 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	waitmovement 0
# 140 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 86 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 141 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_2F_Text_ThisIsExhibitHall, MSGBOX_SIGN
# 142 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 87 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 143 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	applymovement LOCALID_MUSEUM_2F_CURATOR, LilycoveCity_LilycoveMuseum_2F_Movement_FaceExhibitHall
# 144 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 88 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 145 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	waitmovement 0
# 146 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 89 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 147 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	applymovement LOCALID_PLAYER, LilycoveCity_LilycoveMuseum_2F_Movement_FaceExhibitHall
# 148 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 90 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 149 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	waitmovement 0
# 150 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 91 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 151 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_2F_Text_ExplainExhibitHall, MSGBOX_SIGN
# 152 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 92 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 153 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	applymovement LOCALID_MUSEUM_2F_CURATOR, Common_Movement_FacePlayer
# 154 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 93 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 155 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	waitmovement 0
# 156 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 94 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 157 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	applymovement LOCALID_PLAYER, LilycoveCity_LilycoveMuseum_2F_Movement_PlayerWalkInPlaceLeft
# 158 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 95 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 159 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	waitmovement 0
# 160 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 96 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 161 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_2F_Text_PleaseObtainPaintingsForExhibit, MSGBOX_SIGN
# 162 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 98 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 163 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	setvar VAR_LILYCOVE_MUSEUM_2F_STATE, 1
# 164 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 100 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 165 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	copyvar VAR_LILYCOVE_MUSEUM_2F_STATE, 1, warn = FALSE
# 166 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 102 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 167 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	releaseall
# 168 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	end
# 169 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 170 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 171 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 106 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 172 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_Movement_PlayerWalkInPlaceLeft:
# 173 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 107 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 174 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	walk_in_place_faster_left
# 175 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 108 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 176 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	step_end
# 177 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 178 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 111 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 179 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_Movement_FaceExhibitHall:
# 180 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 112 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 181 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	face_up
# 182 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 113 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 183 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	delay_16
# 184 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 114 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 185 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	step_end
# 186 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 187 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_EventScript_Curator::
# 188 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 118 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 189 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	lockall
# 190 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 119 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 191 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	goto_if_set FLAG_RECEIVED_GLASS_ORNAMENT, LilycoveCity_LilycoveMuseum_2F_EventScript_Curator_2
# 192 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_EventScript_Curator_1:
# 193 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 122 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 194 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	specialvar VAR_0x8004, CountPlayerMuseumPaintings
# 195 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 123 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 196 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	switch VAR_0x8004
# 197 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 124 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 198 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	case 1, LilycoveCity_LilycoveMuseum_2F_EventScript_Curator_6
# 199 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 126 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 200 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	case 2, LilycoveCity_LilycoveMuseum_2F_EventScript_Curator_7
# 201 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 128 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 202 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	case 3, LilycoveCity_LilycoveMuseum_2F_EventScript_Curator_8
# 203 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 130 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 204 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	case 4, LilycoveCity_LilycoveMuseum_2F_EventScript_Curator_9
# 205 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 132 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 206 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	case 5, LilycoveCity_LilycoveMuseum_2F_EventScript_Curator_10
# 207 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_EventScript_Curator_4:
# 208 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 135 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 209 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_2F_Text_WishToFillExhibit, MSGBOX_NPC
# 210 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	end
# 211 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 212 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_EventScript_Curator_2:
# 213 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 120 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 214 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	goto LilycoveCity_LilycoveMuseum_2F_EventScript_ReceivedGlassOrnament
# 215 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	goto LilycoveCity_LilycoveMuseum_2F_EventScript_Curator_1
# 216 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 217 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_EventScript_Curator_6:
# 218 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 125 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 219 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	goto LilycoveCity_LilycoveMuseum_2F_EventScript_AddedPainting
# 220 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	goto LilycoveCity_LilycoveMuseum_2F_EventScript_Curator_4
# 221 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 222 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_EventScript_Curator_7:
# 223 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 127 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 224 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	goto LilycoveCity_LilycoveMuseum_2F_EventScript_AddedPainting
# 225 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	goto LilycoveCity_LilycoveMuseum_2F_EventScript_Curator_4
# 226 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 227 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_EventScript_Curator_8:
# 228 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 129 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 229 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	goto LilycoveCity_LilycoveMuseum_2F_EventScript_AddedPainting
# 230 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	goto LilycoveCity_LilycoveMuseum_2F_EventScript_Curator_4
# 231 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 232 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_EventScript_Curator_9:
# 233 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 131 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 234 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	goto LilycoveCity_LilycoveMuseum_2F_EventScript_AddedPainting
# 235 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	goto LilycoveCity_LilycoveMuseum_2F_EventScript_Curator_4
# 236 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 237 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_EventScript_Curator_10:
# 238 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 133 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 239 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	goto LilycoveCity_LilycoveMuseum_2F_EventScript_ThankPlayer
# 240 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	goto LilycoveCity_LilycoveMuseum_2F_EventScript_Curator_4
# 241 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 242 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 243 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_EventScript_AddedPainting::
# 244 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 140 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 245 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_2F_Text_ThanksAddedNewPainting, MSGBOX_NPC
# 246 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	end
# 247 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 248 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 249 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_EventScript_ThankPlayer::
# 250 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 145 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 251 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	applymovement LOCALID_MUSEUM_2F_CURATOR, Common_Movement_FacePlayer
# 252 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 146 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 253 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	waitmovement 0
# 254 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 147 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 255 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_2F_Text_ItsYouPlayer, MSGBOX_DEFAULT
# 256 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 148 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 257 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	applymovement LOCALID_MUSEUM_2F_CURATOR, LilycoveCity_LilycoveMuseum_2F_Movement_FaceExhibitHall
# 258 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 149 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 259 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_2F_Text_PaintingsAttractedMoreGuests, MSGBOX_DEFAULT
# 260 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 150 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 261 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	goto LilycoveCity_LilycoveMuseum_2F_EventScript_GiveGlassOrnament
# 262 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	end
# 263 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 264 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 265 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_EventScript_GiveGlassOrnament::
# 266 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 155 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 267 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	applymovement LOCALID_MUSEUM_2F_CURATOR, Common_Movement_FacePlayer
# 268 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 156 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 269 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_2F_Text_TokenOfGratitude, MSGBOX_DEFAULT
# 270 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 157 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 271 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	givedecoration DECOR_GLASS_ORNAMENT
# 272 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 158 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 273 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	compare VAR_RESULT, FALSE
# 274 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	goto_if_eq LilycoveCity_LilycoveMuseum_2F_EventScript_GiveGlassOrnament_2
# 275 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_EventScript_GiveGlassOrnament_1:
# 276 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 161 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 277 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	setflag FLAG_RECEIVED_GLASS_ORNAMENT
# 278 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 162 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 279 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	closemessage
# 280 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 163 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 281 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	releaseall
# 282 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	end
# 283 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 284 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_EventScript_GiveGlassOrnament_2:
# 285 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 159 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 286 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	goto LilycoveCity_LilycoveMuseum_2F_EventScript_NoRoomForGlassOrnament
# 287 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	goto LilycoveCity_LilycoveMuseum_2F_EventScript_GiveGlassOrnament_1
# 288 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 289 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 290 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_EventScript_NoRoomForGlassOrnament::
# 291 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 168 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 292 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	call Common_EventScript_NoRoomForDecor
# 293 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 169 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 294 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_2F_Text_KeepThisForYou, MSGBOX_DEFAULT
# 295 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 170 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 296 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	closemessage
# 297 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 171 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 298 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	releaseall
# 299 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	end
# 300 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 301 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 302 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_EventScript_ReceivedGlassOrnament::
# 303 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 176 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 304 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_2F_Text_HonorToHaveYouVisit, MSGBOX_NPC
# 305 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 177 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 306 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	releaseall
# 307 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	end
# 308 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 309 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 310 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_EventScript_CutePainting::
# 311 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 182 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 312 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	lockall
# 313 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 183 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 314 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	goto_if_set FLAG_CUTE_PAINTING_MADE, LilycoveCity_LilycoveMuseum_2F_EventScript_CutePainting_2
# 315 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_EventScript_CutePainting_1:
# 316 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 186 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 317 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_2F_Text_ItsPinkPictureFrame, MSGBOX_SIGN
# 318 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	end
# 319 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 320 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_EventScript_CutePainting_2:
# 321 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 184 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 322 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	goto LilycoveCity_LilycoveMuseum_2F_EventScript_ShowCutePainting
# 323 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	goto LilycoveCity_LilycoveMuseum_2F_EventScript_CutePainting_1
# 324 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 325 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 326 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_EventScript_ToughPainting::
# 327 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 191 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 328 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	lockall
# 329 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 192 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 330 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	goto_if_set FLAG_TOUGH_PAINTING_MADE, LilycoveCity_LilycoveMuseum_2F_EventScript_ToughPainting_2
# 331 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_EventScript_ToughPainting_1:
# 332 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 195 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 333 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_2F_Text_ItsYellowPictureFrame, MSGBOX_SIGN
# 334 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	end
# 335 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 336 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_EventScript_ToughPainting_2:
# 337 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 193 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 338 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	goto LilycoveCity_LilycoveMuseum_2F_EventScript_ShowToughPainting
# 339 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	goto LilycoveCity_LilycoveMuseum_2F_EventScript_ToughPainting_1
# 340 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 341 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 342 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_EventScript_CoolPainting::
# 343 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 200 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 344 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	lockall
# 345 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 201 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 346 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	goto_if_set FLAG_COOL_PAINTING_MADE, LilycoveCity_LilycoveMuseum_2F_EventScript_CoolPainting_2
# 347 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_EventScript_CoolPainting_1:
# 348 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 204 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 349 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_2F_Text_ItsRedPictureFrame, MSGBOX_SIGN
# 350 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	end
# 351 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 352 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_EventScript_CoolPainting_2:
# 353 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 202 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 354 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	goto LilycoveCity_LilycoveMuseum_2F_EventScript_ShowCoolPainting
# 355 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	goto LilycoveCity_LilycoveMuseum_2F_EventScript_CoolPainting_1
# 356 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 357 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 358 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_EventScript_BeautyPainting::
# 359 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 209 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 360 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	lockall
# 361 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 210 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 362 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	goto_if_set FLAG_BEAUTY_PAINTING_MADE, LilycoveCity_LilycoveMuseum_2F_EventScript_BeautyPainting_2
# 363 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_EventScript_BeautyPainting_1:
# 364 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 213 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 365 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_2F_Text_ItsBluePictureFrame, MSGBOX_SIGN
# 366 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	end
# 367 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 368 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_EventScript_BeautyPainting_2:
# 369 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 211 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 370 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	goto LilycoveCity_LilycoveMuseum_2F_EventScript_ShowBeautyPainting
# 371 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	goto LilycoveCity_LilycoveMuseum_2F_EventScript_BeautyPainting_1
# 372 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 373 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 374 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_EventScript_SmartPainting::
# 375 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 218 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 376 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	lockall
# 377 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 219 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 378 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	goto_if_set FLAG_SMART_PAINTING_MADE, LilycoveCity_LilycoveMuseum_2F_EventScript_SmartPainting_2
# 379 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_EventScript_SmartPainting_1:
# 380 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 222 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 381 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_2F_Text_ItsGreenPictureFrame, MSGBOX_SIGN
# 382 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	end
# 383 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 384 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_EventScript_SmartPainting_2:
# 385 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 220 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 386 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	goto LilycoveCity_LilycoveMuseum_2F_EventScript_ShowSmartPainting
# 387 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	goto LilycoveCity_LilycoveMuseum_2F_EventScript_SmartPainting_1
# 388 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 389 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 390 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_EventScript_Girl::
# 391 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 227 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 392 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_2F_Text_NewPaintingsSurprisedMe, MSGBOX_NPC
# 393 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	end
# 394 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 395 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 396 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_EventScript_ExpertM::
# 397 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 232 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 398 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_2F_Text_NewPaintingsRatherAmusing, MSGBOX_NPC
# 399 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	end
# 400 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 401 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 402 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_EventScript_RichBoy::
# 403 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 237 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 404 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_2F_Text_ThesePaintingsOfYourPokemon, MSGBOX_NPC
# 405 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	end
# 406 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 407 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 408 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_EventScript_ShowCoolPainting::
# 409 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 242 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 410 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_2F_Text_ItsPaintingOfPokemon, MSGBOX_SIGN
# 411 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 243 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 412 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 413 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 244 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 414 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	showcontestpainting CONTEST_WINNER_MUSEUM_COOL
# 415 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 245 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 416 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	releaseall
# 417 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	end
# 418 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 419 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 420 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_EventScript_ShowBeautyPainting::
# 421 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 250 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 422 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_2F_Text_ItsPaintingOfPokemon, MSGBOX_SIGN
# 423 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 251 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 424 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 425 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 252 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 426 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	showcontestpainting CONTEST_WINNER_MUSEUM_BEAUTY
# 427 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 253 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 428 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	releaseall
# 429 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	end
# 430 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 431 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 432 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_EventScript_ShowCutePainting::
# 433 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 258 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 434 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_2F_Text_ItsPaintingOfPokemon, MSGBOX_SIGN
# 435 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 259 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 436 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 437 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 260 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 438 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	showcontestpainting CONTEST_WINNER_MUSEUM_CUTE
# 439 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 261 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 440 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	releaseall
# 441 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	end
# 442 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 443 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 444 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_EventScript_ShowSmartPainting::
# 445 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 266 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 446 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_2F_Text_ItsPaintingOfPokemon, MSGBOX_SIGN
# 447 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 267 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 448 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 449 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 268 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 450 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	showcontestpainting CONTEST_WINNER_MUSEUM_SMART
# 451 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 269 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 452 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	releaseall
# 453 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	end
# 454 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 455 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 456 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_EventScript_ShowToughPainting::
# 457 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 274 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 458 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_2F_Text_ItsPaintingOfPokemon, MSGBOX_SIGN
# 459 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 275 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 460 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 461 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 276 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 462 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	showcontestpainting CONTEST_WINNER_MUSEUM_TOUGH
# 463 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 277 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 464 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	releaseall
# 465 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	end
# 466 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 467 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 468 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_Text_ThisIsExhibitHall::
# 469 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 281 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 470 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "This is our special exhibit hall.$"
# 471 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 472 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_Text_ExplainExhibitHall::
# 473 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 285 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 474 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "As you can plainly see, there is not\n"
# 475 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "a single painting on exhibit.\p"
# 476 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "Here, I don't wish to exhibit works of\n"
# 477 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "so-called classical art.\p"
# 478 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "Such classical works you can see on\n"
# 479 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "our ground floor.\p"
# 480 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "I wish to exhibit work that is far\n"
# 481 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "different from the classics.\p"
# 482 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "Art, after all, is not restricted to old,\n"
# 483 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "famous works!\p"
# 484 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "This exhibit hall, I wish to fill it with…\p"
# 485 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "Modern and vibrant artworks of\n"
# 486 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "POKéMON seemingly ready to spring\l"
# 487 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "forth into glorious life!$"
# 488 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 489 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_Text_PleaseObtainPaintingsForExhibit::
# 490 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 302 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 491 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "I beg your pardon. I didn't intend\n"
# 492 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "to monopolize the conversation.\p"
# 493 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "Now, as you are young, and yet\n"
# 494 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "obviously well traveled…\p"
# 495 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "You must encounter lively POKéMON\n"
# 496 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "and works of art depicting them.\p"
# 497 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "If you were to come across such\n"
# 498 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "a painting, may we ask you to obtain\l"
# 499 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "the artist's permission to exhibit\l"
# 500 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "it here?$"
# 501 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 502 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_Text_WishToFillExhibit::
# 503 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 315 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 504 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "I wish to fill this exhibit hall with\n"
# 505 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "modern and vibrant paintings of\l"
# 506 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "POKéMON.$"
# 507 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 508 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_Text_ThanksAddedNewPainting::
# 509 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 321 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 510 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "Thanks to you, we've added a new\n"
# 511 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "painting to our collection!\p"
# 512 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "I've heard it depicts your POKéMON.\n"
# 513 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "Truly magnificent!\p"
# 514 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "Thank you so very, very much!$"
# 515 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 516 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_Text_ItsYouPlayer::
# 517 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 329 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 518 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "Ah! It's you!\n"
# 519 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "{PLAYER}!$"
# 520 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 521 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_Text_PaintingsAttractedMoreGuests::
# 522 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 334 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 523 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "Isn't this marvelous?\n"
# 524 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "This collection of paintings!\p"
# 525 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "Each one of them flawless!\n"
# 526 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "None better than another!\p"
# 527 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "These paintings have attracted\n"
# 528 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "more guests to our ART MUSEUM.\p"
# 529 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "Sincerely, I thank you, {PLAYER}.\n"
# 530 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "This is my dream come true!$"
# 531 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 532 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_Text_TokenOfGratitude::
# 533 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 345 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 534 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "This is merely a token of my gratitude.$"
# 535 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 536 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_Text_KeepThisForYou::
# 537 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 349 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 538 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "I will keep this for you until we\n"
# 539 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "meet again.$"
# 540 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 541 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_Text_HonorToHaveYouVisit::
# 542 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 354 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 543 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "Ah, so good to see you, {PLAYER}!\p"
# 544 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "It's an honor to have you visit us\n"
# 545 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "on your busy journeys.\p"
# 546 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "Please, relax and do enjoy your\n"
# 547 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "visit with us.$"
# 548 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 549 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_Text_ItsPinkPictureFrame::
# 550 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 362 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 551 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "It's a picture frame with pink-colored\n"
# 552 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "adornments.$"
# 553 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 554 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_Text_ItsYellowPictureFrame::
# 555 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 367 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 556 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "It's a picture frame with\n"
# 557 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "yellow-colored adornments.$"
# 558 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 559 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_Text_ItsBluePictureFrame::
# 560 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 372 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 561 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "It's a picture frame with\n"
# 562 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "blue-colored adornments.$"
# 563 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 564 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_Text_ItsRedPictureFrame::
# 565 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 377 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 566 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "It's a picture frame with\n"
# 567 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "red-colored adornments.$"
# 568 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 569 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_Text_ItsGreenPictureFrame::
# 570 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 382 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 571 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "It's a picture frame with\n"
# 572 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "green-colored adornments.$"
# 573 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 574 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_Text_ItsPaintingOfPokemon::
# 575 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 387 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 576 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "It's a painting of POKéMON.$"
# 577 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 578 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_Text_NewPaintingsSurprisedMe::
# 579 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 391 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 580 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "I've been away awhile, so the new\n"
# 581 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "paintings up here surprised me.\p"
# 582 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "I wish someone would paint my POKéMON\n"
# 583 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "this pretty.$"
# 584 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 585 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_Text_NewPaintingsRatherAmusing::
# 586 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 398 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 587 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "Well… So this is where they show\n"
# 588 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "the topical POKéMON paintings.\p"
# 589 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "I see, these new paintings are indeed\n"
# 590 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "rather amusing.$"
# 591 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 592 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_Text_ThesePaintingsOfYourPokemon::
# 593 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 405 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
# 594 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "Wow, is that right?\n"
# 595 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "These paintings are of your POKéMON.\p"
# 596 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "Isn't that just the ultimate joy for\n"
# 597 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "a TRAINER?$"
