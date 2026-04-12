# 1 "data/maps/SSTidalCorridor/scripts.pory"

# 2 "data/maps/SSTidalCorridor/scripts.pory"
SSTidalCorridor_MapScripts::
# 3 "data/maps/SSTidalCorridor/scripts.pory"
# 2 "data/maps/SSTidalCorridor/scripts.pory"
# 4 "data/maps/SSTidalCorridor/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SSTidalCorridor_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 5 "data/maps/SSTidalCorridor/scripts.pory"
	.byte 0
# 6 "data/maps/SSTidalCorridor/scripts.pory"

# 7 "data/maps/SSTidalCorridor/scripts.pory"
SSTidalCorridor_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 8 "data/maps/SSTidalCorridor/scripts.pory"
# 3 "data/maps/SSTidalCorridor/scripts.pory"
# 9 "data/maps/SSTidalCorridor/scripts.pory"
	map_script_2 VAR_SS_TIDAL_SCOTT_STATE, 0, SSTidalCorridor_EventScript_ScottScene
# 10 "data/maps/SSTidalCorridor/scripts.pory"
# 4 "data/maps/SSTidalCorridor/scripts.pory"
# 11 "data/maps/SSTidalCorridor/scripts.pory"
	map_script_2 VAR_SS_TIDAL_STATE, SS_TIDAL_BOARD_SLATEPORT, SSTidalCorridor_EventScript_DepartSlateportForLilycove
# 12 "data/maps/SSTidalCorridor/scripts.pory"
# 5 "data/maps/SSTidalCorridor/scripts.pory"
# 13 "data/maps/SSTidalCorridor/scripts.pory"
	map_script_2 VAR_SS_TIDAL_STATE, SS_TIDAL_BOARD_LILYCOVE, SSTidalCorridor_EventScript_DepartLilycoveForSlateport
# 14 "data/maps/SSTidalCorridor/scripts.pory"
# 6 "data/maps/SSTidalCorridor/scripts.pory"
# 15 "data/maps/SSTidalCorridor/scripts.pory"
	map_script_2 VAR_SS_TIDAL_STATE, SS_TIDAL_EXIT_CURRENTS_RIGHT, SSTidalCorridor_EventScript_HalfwayToLilycove
# 16 "data/maps/SSTidalCorridor/scripts.pory"
# 7 "data/maps/SSTidalCorridor/scripts.pory"
# 17 "data/maps/SSTidalCorridor/scripts.pory"
	map_script_2 VAR_SS_TIDAL_STATE, SS_TIDAL_EXIT_CURRENTS_LEFT, SSTidalCorridor_EventScript_ArrivedInSlateport
# 18 "data/maps/SSTidalCorridor/scripts.pory"
	.2byte 0
# 19 "data/maps/SSTidalCorridor/scripts.pory"

# 20 "data/maps/SSTidalCorridor/scripts.pory"

# 21 "data/maps/SSTidalCorridor/scripts.pory"
SSTidalCorridor_EventScript_DepartSlateportForLilycove::
# 22 "data/maps/SSTidalCorridor/scripts.pory"
# 12 "data/maps/SSTidalCorridor/scripts.pory"
# 23 "data/maps/SSTidalCorridor/scripts.pory"
	special SetSSTidalFlag
# 24 "data/maps/SSTidalCorridor/scripts.pory"
# 13 "data/maps/SSTidalCorridor/scripts.pory"
# 25 "data/maps/SSTidalCorridor/scripts.pory"
	setvar VAR_SS_TIDAL_STATE, SS_TIDAL_DEPART_SLATEPORT
# 26 "data/maps/SSTidalCorridor/scripts.pory"
# 14 "data/maps/SSTidalCorridor/scripts.pory"
# 27 "data/maps/SSTidalCorridor/scripts.pory"
	lockall
# 28 "data/maps/SSTidalCorridor/scripts.pory"
# 15 "data/maps/SSTidalCorridor/scripts.pory"
# 29 "data/maps/SSTidalCorridor/scripts.pory"
	playse SE_DING_DONG
# 30 "data/maps/SSTidalCorridor/scripts.pory"
# 16 "data/maps/SSTidalCorridor/scripts.pory"
# 31 "data/maps/SSTidalCorridor/scripts.pory"
	msgbox SSTidal_Text_FastCurrentsHopeYouEnjoyVoyage, MSGBOX_DEFAULT
# 32 "data/maps/SSTidalCorridor/scripts.pory"
# 17 "data/maps/SSTidalCorridor/scripts.pory"
# 33 "data/maps/SSTidalCorridor/scripts.pory"
	releaseall
# 34 "data/maps/SSTidalCorridor/scripts.pory"
	end
# 35 "data/maps/SSTidalCorridor/scripts.pory"

# 36 "data/maps/SSTidalCorridor/scripts.pory"

# 37 "data/maps/SSTidalCorridor/scripts.pory"
SSTidalCorridor_EventScript_DepartLilycoveForSlateport::
# 38 "data/maps/SSTidalCorridor/scripts.pory"
# 22 "data/maps/SSTidalCorridor/scripts.pory"
# 39 "data/maps/SSTidalCorridor/scripts.pory"
	setvar VAR_SS_TIDAL_STATE, SS_TIDAL_DEPART_LILYCOVE
# 40 "data/maps/SSTidalCorridor/scripts.pory"
# 23 "data/maps/SSTidalCorridor/scripts.pory"
# 41 "data/maps/SSTidalCorridor/scripts.pory"
	lockall
# 42 "data/maps/SSTidalCorridor/scripts.pory"
# 24 "data/maps/SSTidalCorridor/scripts.pory"
# 43 "data/maps/SSTidalCorridor/scripts.pory"
	playse SE_DING_DONG
# 44 "data/maps/SSTidalCorridor/scripts.pory"
# 25 "data/maps/SSTidalCorridor/scripts.pory"
# 45 "data/maps/SSTidalCorridor/scripts.pory"
	msgbox SSTidal_Text_HopeYouEnjoyVoyage, MSGBOX_DEFAULT
# 46 "data/maps/SSTidalCorridor/scripts.pory"
# 26 "data/maps/SSTidalCorridor/scripts.pory"
# 47 "data/maps/SSTidalCorridor/scripts.pory"
	releaseall
# 48 "data/maps/SSTidalCorridor/scripts.pory"
	end
# 49 "data/maps/SSTidalCorridor/scripts.pory"

# 50 "data/maps/SSTidalCorridor/scripts.pory"

# 51 "data/maps/SSTidalCorridor/scripts.pory"
SSTidalRooms_EventScript_HalfwayToSlateport::
# 52 "data/maps/SSTidalCorridor/scripts.pory"
# 31 "data/maps/SSTidalCorridor/scripts.pory"
# 53 "data/maps/SSTidalCorridor/scripts.pory"
	special SetSSTidalFlag
# 54 "data/maps/SSTidalCorridor/scripts.pory"
# 32 "data/maps/SSTidalCorridor/scripts.pory"
# 55 "data/maps/SSTidalCorridor/scripts.pory"
	setvar VAR_SS_TIDAL_STATE, SS_TIDAL_HALFWAY_SLATEPORT
# 56 "data/maps/SSTidalCorridor/scripts.pory"
# 33 "data/maps/SSTidalCorridor/scripts.pory"
# 57 "data/maps/SSTidalCorridor/scripts.pory"
	playse SE_DING_DONG
# 58 "data/maps/SSTidalCorridor/scripts.pory"
# 34 "data/maps/SSTidalCorridor/scripts.pory"
# 59 "data/maps/SSTidalCorridor/scripts.pory"
	msgbox SSTidal_Text_FastCurrentsHopeYouEnjoyVoyage, MSGBOX_DEFAULT
# 60 "data/maps/SSTidalCorridor/scripts.pory"
	return
# 61 "data/maps/SSTidalCorridor/scripts.pory"

# 62 "data/maps/SSTidalCorridor/scripts.pory"

# 63 "data/maps/SSTidalCorridor/scripts.pory"
SSTidalRooms_EventScript_ArrivedInLilycove::
# 64 "data/maps/SSTidalCorridor/scripts.pory"
# 39 "data/maps/SSTidalCorridor/scripts.pory"
# 65 "data/maps/SSTidalCorridor/scripts.pory"
	special ResetSSTidalFlag
# 66 "data/maps/SSTidalCorridor/scripts.pory"
# 40 "data/maps/SSTidalCorridor/scripts.pory"
# 67 "data/maps/SSTidalCorridor/scripts.pory"
	setvar VAR_SS_TIDAL_STATE, SS_TIDAL_LAND_LILYCOVE
# 68 "data/maps/SSTidalCorridor/scripts.pory"
# 41 "data/maps/SSTidalCorridor/scripts.pory"
# 69 "data/maps/SSTidalCorridor/scripts.pory"
	playse SE_DING_DONG
# 70 "data/maps/SSTidalCorridor/scripts.pory"
# 42 "data/maps/SSTidalCorridor/scripts.pory"
# 71 "data/maps/SSTidalCorridor/scripts.pory"
	msgbox SSTidal_Text_MadeLandInLilycove, MSGBOX_DEFAULT
# 72 "data/maps/SSTidalCorridor/scripts.pory"
	return
# 73 "data/maps/SSTidalCorridor/scripts.pory"

# 74 "data/maps/SSTidalCorridor/scripts.pory"

# 75 "data/maps/SSTidalCorridor/scripts.pory"
SSTidalCorridor_EventScript_ReachedStepCount::
# 76 "data/maps/SSTidalCorridor/scripts.pory"
# 47 "data/maps/SSTidalCorridor/scripts.pory"
# 77 "data/maps/SSTidalCorridor/scripts.pory"
	compare VAR_SS_TIDAL_STATE, SS_TIDAL_DEPART_SLATEPORT
# 78 "data/maps/SSTidalCorridor/scripts.pory"
	goto_if_eq SSTidalCorridor_EventScript_ReachedStepCount_2
# 79 "data/maps/SSTidalCorridor/scripts.pory"
SSTidalCorridor_EventScript_ReachedStepCount_1:
# 80 "data/maps/SSTidalCorridor/scripts.pory"
# 50 "data/maps/SSTidalCorridor/scripts.pory"
# 81 "data/maps/SSTidalCorridor/scripts.pory"
	compare VAR_SS_TIDAL_STATE, SS_TIDAL_HALFWAY_SLATEPORT
# 82 "data/maps/SSTidalCorridor/scripts.pory"
	goto_if_eq SSTidalCorridor_EventScript_ReachedStepCount_5
# 83 "data/maps/SSTidalCorridor/scripts.pory"
SSTidalCorridor_EventScript_ReachedStepCount_4:
# 84 "data/maps/SSTidalCorridor/scripts.pory"
	end
# 85 "data/maps/SSTidalCorridor/scripts.pory"

# 86 "data/maps/SSTidalCorridor/scripts.pory"
SSTidalCorridor_EventScript_ReachedStepCount_2:
# 87 "data/maps/SSTidalCorridor/scripts.pory"
# 48 "data/maps/SSTidalCorridor/scripts.pory"
# 88 "data/maps/SSTidalCorridor/scripts.pory"
	goto SSTidalCorridor_EventScript_HalfwayToLilycove
# 89 "data/maps/SSTidalCorridor/scripts.pory"
	goto SSTidalCorridor_EventScript_ReachedStepCount_1
# 90 "data/maps/SSTidalCorridor/scripts.pory"

# 91 "data/maps/SSTidalCorridor/scripts.pory"
SSTidalCorridor_EventScript_ReachedStepCount_5:
# 92 "data/maps/SSTidalCorridor/scripts.pory"
# 51 "data/maps/SSTidalCorridor/scripts.pory"
# 93 "data/maps/SSTidalCorridor/scripts.pory"
	goto SSTidalCorridor_EventScript_ArrivedInSlateport
# 94 "data/maps/SSTidalCorridor/scripts.pory"
	goto SSTidalCorridor_EventScript_ReachedStepCount_4
# 95 "data/maps/SSTidalCorridor/scripts.pory"

# 96 "data/maps/SSTidalCorridor/scripts.pory"

# 97 "data/maps/SSTidalCorridor/scripts.pory"
SSTidalCorridor_EventScript_HalfwayToLilycove::
# 98 "data/maps/SSTidalCorridor/scripts.pory"
# 57 "data/maps/SSTidalCorridor/scripts.pory"
# 99 "data/maps/SSTidalCorridor/scripts.pory"
	special ResetSSTidalFlag
# 100 "data/maps/SSTidalCorridor/scripts.pory"
# 58 "data/maps/SSTidalCorridor/scripts.pory"
# 101 "data/maps/SSTidalCorridor/scripts.pory"
	setvar VAR_SS_TIDAL_STATE, SS_TIDAL_HALFWAY_LILYCOVE
# 102 "data/maps/SSTidalCorridor/scripts.pory"
# 59 "data/maps/SSTidalCorridor/scripts.pory"
# 103 "data/maps/SSTidalCorridor/scripts.pory"
	lockall
# 104 "data/maps/SSTidalCorridor/scripts.pory"
# 60 "data/maps/SSTidalCorridor/scripts.pory"
# 105 "data/maps/SSTidalCorridor/scripts.pory"
	playse SE_DING_DONG
# 106 "data/maps/SSTidalCorridor/scripts.pory"
# 61 "data/maps/SSTidalCorridor/scripts.pory"
# 107 "data/maps/SSTidalCorridor/scripts.pory"
	msgbox SSTidal_Text_HopeYouEnjoyVoyage, MSGBOX_DEFAULT
# 108 "data/maps/SSTidalCorridor/scripts.pory"
# 62 "data/maps/SSTidalCorridor/scripts.pory"
# 109 "data/maps/SSTidalCorridor/scripts.pory"
	releaseall
# 110 "data/maps/SSTidalCorridor/scripts.pory"
	end
# 111 "data/maps/SSTidalCorridor/scripts.pory"

# 112 "data/maps/SSTidalCorridor/scripts.pory"

# 113 "data/maps/SSTidalCorridor/scripts.pory"
SSTidalCorridor_EventScript_ArrivedInSlateport::
# 114 "data/maps/SSTidalCorridor/scripts.pory"
# 67 "data/maps/SSTidalCorridor/scripts.pory"
# 115 "data/maps/SSTidalCorridor/scripts.pory"
	special ResetSSTidalFlag
# 116 "data/maps/SSTidalCorridor/scripts.pory"
# 68 "data/maps/SSTidalCorridor/scripts.pory"
# 117 "data/maps/SSTidalCorridor/scripts.pory"
	setvar VAR_SS_TIDAL_STATE, SS_TIDAL_LAND_SLATEPORT
# 118 "data/maps/SSTidalCorridor/scripts.pory"
# 69 "data/maps/SSTidalCorridor/scripts.pory"
# 119 "data/maps/SSTidalCorridor/scripts.pory"
	lockall
# 120 "data/maps/SSTidalCorridor/scripts.pory"
# 70 "data/maps/SSTidalCorridor/scripts.pory"
# 121 "data/maps/SSTidalCorridor/scripts.pory"
	playse SE_DING_DONG
# 122 "data/maps/SSTidalCorridor/scripts.pory"
# 71 "data/maps/SSTidalCorridor/scripts.pory"
# 123 "data/maps/SSTidalCorridor/scripts.pory"
	msgbox SSTidal_Text_MadeLandInSlateport, MSGBOX_DEFAULT
# 124 "data/maps/SSTidalCorridor/scripts.pory"
# 72 "data/maps/SSTidalCorridor/scripts.pory"
# 125 "data/maps/SSTidalCorridor/scripts.pory"
	releaseall
# 126 "data/maps/SSTidalCorridor/scripts.pory"
	end
# 127 "data/maps/SSTidalCorridor/scripts.pory"

# 128 "data/maps/SSTidalCorridor/scripts.pory"

# 129 "data/maps/SSTidalCorridor/scripts.pory"
SSTidalRooms_EventScript_ArrivedInSlateport::
# 130 "data/maps/SSTidalCorridor/scripts.pory"
# 77 "data/maps/SSTidalCorridor/scripts.pory"
# 131 "data/maps/SSTidalCorridor/scripts.pory"
	special ResetSSTidalFlag
# 132 "data/maps/SSTidalCorridor/scripts.pory"
# 78 "data/maps/SSTidalCorridor/scripts.pory"
# 133 "data/maps/SSTidalCorridor/scripts.pory"
	setvar VAR_SS_TIDAL_STATE, SS_TIDAL_LAND_SLATEPORT
# 134 "data/maps/SSTidalCorridor/scripts.pory"
# 79 "data/maps/SSTidalCorridor/scripts.pory"
# 135 "data/maps/SSTidalCorridor/scripts.pory"
	playse SE_DING_DONG
# 136 "data/maps/SSTidalCorridor/scripts.pory"
# 80 "data/maps/SSTidalCorridor/scripts.pory"
# 137 "data/maps/SSTidalCorridor/scripts.pory"
	msgbox SSTidal_Text_MadeLandInSlateport, MSGBOX_DEFAULT
# 138 "data/maps/SSTidalCorridor/scripts.pory"
	return
# 139 "data/maps/SSTidalCorridor/scripts.pory"

# 140 "data/maps/SSTidalCorridor/scripts.pory"

# 141 "data/maps/SSTidalCorridor/scripts.pory"
SSTidalRooms_EventScript_ProgessCruiseAfterBed::
# 142 "data/maps/SSTidalCorridor/scripts.pory"
# 85 "data/maps/SSTidalCorridor/scripts.pory"
# 143 "data/maps/SSTidalCorridor/scripts.pory"
	switch VAR_SS_TIDAL_STATE
# 144 "data/maps/SSTidalCorridor/scripts.pory"
# 86 "data/maps/SSTidalCorridor/scripts.pory"
# 145 "data/maps/SSTidalCorridor/scripts.pory"
	case SS_TIDAL_DEPART_SLATEPORT, SSTidalRooms_EventScript_ProgessCruiseAfterBed_3
# 146 "data/maps/SSTidalCorridor/scripts.pory"
# 88 "data/maps/SSTidalCorridor/scripts.pory"
# 147 "data/maps/SSTidalCorridor/scripts.pory"
	case SS_TIDAL_HALFWAY_LILYCOVE, SSTidalRooms_EventScript_ProgessCruiseAfterBed_4
# 148 "data/maps/SSTidalCorridor/scripts.pory"
# 90 "data/maps/SSTidalCorridor/scripts.pory"
# 149 "data/maps/SSTidalCorridor/scripts.pory"
	case SS_TIDAL_DEPART_LILYCOVE, SSTidalRooms_EventScript_ProgessCruiseAfterBed_5
# 150 "data/maps/SSTidalCorridor/scripts.pory"
# 92 "data/maps/SSTidalCorridor/scripts.pory"
# 151 "data/maps/SSTidalCorridor/scripts.pory"
	case SS_TIDAL_HALFWAY_SLATEPORT, SSTidalRooms_EventScript_ProgessCruiseAfterBed_6
# 152 "data/maps/SSTidalCorridor/scripts.pory"
SSTidalRooms_EventScript_ProgessCruiseAfterBed_1:
# 153 "data/maps/SSTidalCorridor/scripts.pory"
	return
# 154 "data/maps/SSTidalCorridor/scripts.pory"

# 155 "data/maps/SSTidalCorridor/scripts.pory"
SSTidalRooms_EventScript_ProgessCruiseAfterBed_3:
# 156 "data/maps/SSTidalCorridor/scripts.pory"
# 87 "data/maps/SSTidalCorridor/scripts.pory"
# 157 "data/maps/SSTidalCorridor/scripts.pory"
	goto SSTidalRooms_EventScript_ArrivedInLilycove
# 158 "data/maps/SSTidalCorridor/scripts.pory"
	goto SSTidalRooms_EventScript_ProgessCruiseAfterBed_1
# 159 "data/maps/SSTidalCorridor/scripts.pory"

# 160 "data/maps/SSTidalCorridor/scripts.pory"
SSTidalRooms_EventScript_ProgessCruiseAfterBed_4:
# 161 "data/maps/SSTidalCorridor/scripts.pory"
# 89 "data/maps/SSTidalCorridor/scripts.pory"
# 162 "data/maps/SSTidalCorridor/scripts.pory"
	goto SSTidalRooms_EventScript_ArrivedInLilycove
# 163 "data/maps/SSTidalCorridor/scripts.pory"
	goto SSTidalRooms_EventScript_ProgessCruiseAfterBed_1
# 164 "data/maps/SSTidalCorridor/scripts.pory"

# 165 "data/maps/SSTidalCorridor/scripts.pory"
SSTidalRooms_EventScript_ProgessCruiseAfterBed_5:
# 166 "data/maps/SSTidalCorridor/scripts.pory"
# 91 "data/maps/SSTidalCorridor/scripts.pory"
# 167 "data/maps/SSTidalCorridor/scripts.pory"
	goto SSTidalRooms_EventScript_HalfwayToSlateport
# 168 "data/maps/SSTidalCorridor/scripts.pory"
	goto SSTidalRooms_EventScript_ProgessCruiseAfterBed_1
# 169 "data/maps/SSTidalCorridor/scripts.pory"

# 170 "data/maps/SSTidalCorridor/scripts.pory"
SSTidalRooms_EventScript_ProgessCruiseAfterBed_6:
# 171 "data/maps/SSTidalCorridor/scripts.pory"
# 93 "data/maps/SSTidalCorridor/scripts.pory"
# 172 "data/maps/SSTidalCorridor/scripts.pory"
	goto SSTidalRooms_EventScript_ArrivedInSlateport
# 173 "data/maps/SSTidalCorridor/scripts.pory"
	goto SSTidalRooms_EventScript_ProgessCruiseAfterBed_1
# 174 "data/maps/SSTidalCorridor/scripts.pory"

# 175 "data/maps/SSTidalCorridor/scripts.pory"

# 176 "data/maps/SSTidalCorridor/scripts.pory"
SSTidalCorridor_EventScript_Briney::
# 177 "data/maps/SSTidalCorridor/scripts.pory"
# 99 "data/maps/SSTidalCorridor/scripts.pory"
# 178 "data/maps/SSTidalCorridor/scripts.pory"
	msgbox SSTidalCorridor_Text_BrineyWelcomeAboard, MSGBOX_NPC
# 179 "data/maps/SSTidalCorridor/scripts.pory"
	end
# 180 "data/maps/SSTidalCorridor/scripts.pory"

# 181 "data/maps/SSTidalCorridor/scripts.pory"

# 182 "data/maps/SSTidalCorridor/scripts.pory"
SSTidalCorridor_EventScript_Peeko::
# 183 "data/maps/SSTidalCorridor/scripts.pory"
# 104 "data/maps/SSTidalCorridor/scripts.pory"
# 184 "data/maps/SSTidalCorridor/scripts.pory"
	lock
# 185 "data/maps/SSTidalCorridor/scripts.pory"
# 105 "data/maps/SSTidalCorridor/scripts.pory"
# 186 "data/maps/SSTidalCorridor/scripts.pory"
	faceplayer
# 187 "data/maps/SSTidalCorridor/scripts.pory"
# 106 "data/maps/SSTidalCorridor/scripts.pory"
# 188 "data/maps/SSTidalCorridor/scripts.pory"
	waitse
# 189 "data/maps/SSTidalCorridor/scripts.pory"
# 107 "data/maps/SSTidalCorridor/scripts.pory"
# 190 "data/maps/SSTidalCorridor/scripts.pory"
	playmoncry SPECIES_WINGULL, CRY_MODE_NORMAL
# 191 "data/maps/SSTidalCorridor/scripts.pory"
# 108 "data/maps/SSTidalCorridor/scripts.pory"
# 192 "data/maps/SSTidalCorridor/scripts.pory"
	msgbox SSTidalCorridor_Text_Peeko, MSGBOX_DEFAULT
# 193 "data/maps/SSTidalCorridor/scripts.pory"
# 109 "data/maps/SSTidalCorridor/scripts.pory"
# 194 "data/maps/SSTidalCorridor/scripts.pory"
	waitmoncry
# 195 "data/maps/SSTidalCorridor/scripts.pory"
# 110 "data/maps/SSTidalCorridor/scripts.pory"
# 196 "data/maps/SSTidalCorridor/scripts.pory"
	release
# 197 "data/maps/SSTidalCorridor/scripts.pory"
	end
# 198 "data/maps/SSTidalCorridor/scripts.pory"

# 199 "data/maps/SSTidalCorridor/scripts.pory"

# 200 "data/maps/SSTidalCorridor/scripts.pory"
SSTidalCorridor_EventScript_Cabin1Sign::
# 201 "data/maps/SSTidalCorridor/scripts.pory"
# 115 "data/maps/SSTidalCorridor/scripts.pory"
# 202 "data/maps/SSTidalCorridor/scripts.pory"
	msgbox SSTidalCorridor_Text_Cabin1, MSGBOX_SIGN
# 203 "data/maps/SSTidalCorridor/scripts.pory"
	end
# 204 "data/maps/SSTidalCorridor/scripts.pory"

# 205 "data/maps/SSTidalCorridor/scripts.pory"

# 206 "data/maps/SSTidalCorridor/scripts.pory"
SSTidalCorridor_EventScript_Cabin2Sign::
# 207 "data/maps/SSTidalCorridor/scripts.pory"
# 120 "data/maps/SSTidalCorridor/scripts.pory"
# 208 "data/maps/SSTidalCorridor/scripts.pory"
	msgbox SSTidalCorridor_Text_Cabin2, MSGBOX_SIGN
# 209 "data/maps/SSTidalCorridor/scripts.pory"
	end
# 210 "data/maps/SSTidalCorridor/scripts.pory"

# 211 "data/maps/SSTidalCorridor/scripts.pory"

# 212 "data/maps/SSTidalCorridor/scripts.pory"
SSTidalCorridor_EventScript_Cabin3Sign::
# 213 "data/maps/SSTidalCorridor/scripts.pory"
# 125 "data/maps/SSTidalCorridor/scripts.pory"
# 214 "data/maps/SSTidalCorridor/scripts.pory"
	msgbox SSTidalCorridor_Text_Cabin3, MSGBOX_SIGN
# 215 "data/maps/SSTidalCorridor/scripts.pory"
	end
# 216 "data/maps/SSTidalCorridor/scripts.pory"

# 217 "data/maps/SSTidalCorridor/scripts.pory"

# 218 "data/maps/SSTidalCorridor/scripts.pory"
SSTidalCorridor_EventScript_Cabin4Sign::
# 219 "data/maps/SSTidalCorridor/scripts.pory"
# 130 "data/maps/SSTidalCorridor/scripts.pory"
# 220 "data/maps/SSTidalCorridor/scripts.pory"
	msgbox SSTidalCorridor_Text_Cabin4, MSGBOX_SIGN
# 221 "data/maps/SSTidalCorridor/scripts.pory"
	end
# 222 "data/maps/SSTidalCorridor/scripts.pory"

# 223 "data/maps/SSTidalCorridor/scripts.pory"

# 224 "data/maps/SSTidalCorridor/scripts.pory"
SSTidalCorridor_EventScript_ExitSailor::
# 225 "data/maps/SSTidalCorridor/scripts.pory"
# 135 "data/maps/SSTidalCorridor/scripts.pory"
# 226 "data/maps/SSTidalCorridor/scripts.pory"
	lock
# 227 "data/maps/SSTidalCorridor/scripts.pory"
# 136 "data/maps/SSTidalCorridor/scripts.pory"
# 228 "data/maps/SSTidalCorridor/scripts.pory"
	faceplayer
# 229 "data/maps/SSTidalCorridor/scripts.pory"
# 137 "data/maps/SSTidalCorridor/scripts.pory"
# 230 "data/maps/SSTidalCorridor/scripts.pory"
	compare VAR_SS_TIDAL_STATE, SS_TIDAL_LAND_LILYCOVE
# 231 "data/maps/SSTidalCorridor/scripts.pory"
	goto_if_eq SSTidalCorridor_EventScript_ExitSailor_2
# 232 "data/maps/SSTidalCorridor/scripts.pory"
SSTidalCorridor_EventScript_ExitSailor_1:
# 233 "data/maps/SSTidalCorridor/scripts.pory"
# 140 "data/maps/SSTidalCorridor/scripts.pory"
# 234 "data/maps/SSTidalCorridor/scripts.pory"
	compare VAR_SS_TIDAL_STATE, SS_TIDAL_LAND_SLATEPORT
# 235 "data/maps/SSTidalCorridor/scripts.pory"
	goto_if_eq SSTidalCorridor_EventScript_ExitSailor_5
# 236 "data/maps/SSTidalCorridor/scripts.pory"
SSTidalCorridor_EventScript_ExitSailor_4:
# 237 "data/maps/SSTidalCorridor/scripts.pory"
# 143 "data/maps/SSTidalCorridor/scripts.pory"
# 238 "data/maps/SSTidalCorridor/scripts.pory"
	msgbox SSTidalCorridor_Text_CanRestInCabin2, MSGBOX_DEFAULT
# 239 "data/maps/SSTidalCorridor/scripts.pory"
# 144 "data/maps/SSTidalCorridor/scripts.pory"
# 240 "data/maps/SSTidalCorridor/scripts.pory"
	release
# 241 "data/maps/SSTidalCorridor/scripts.pory"
	end
# 242 "data/maps/SSTidalCorridor/scripts.pory"

# 243 "data/maps/SSTidalCorridor/scripts.pory"
SSTidalCorridor_EventScript_ExitSailor_2:
# 244 "data/maps/SSTidalCorridor/scripts.pory"
# 138 "data/maps/SSTidalCorridor/scripts.pory"
# 245 "data/maps/SSTidalCorridor/scripts.pory"
	goto SSTidalCorridor_EventScript_ExitLilycove
# 246 "data/maps/SSTidalCorridor/scripts.pory"
	goto SSTidalCorridor_EventScript_ExitSailor_1
# 247 "data/maps/SSTidalCorridor/scripts.pory"

# 248 "data/maps/SSTidalCorridor/scripts.pory"
SSTidalCorridor_EventScript_ExitSailor_5:
# 249 "data/maps/SSTidalCorridor/scripts.pory"
# 141 "data/maps/SSTidalCorridor/scripts.pory"
# 250 "data/maps/SSTidalCorridor/scripts.pory"
	goto SSTidalCorridor_EventScript_ExitSlateport
# 251 "data/maps/SSTidalCorridor/scripts.pory"
	goto SSTidalCorridor_EventScript_ExitSailor_4
# 252 "data/maps/SSTidalCorridor/scripts.pory"

# 253 "data/maps/SSTidalCorridor/scripts.pory"

# 254 "data/maps/SSTidalCorridor/scripts.pory"
SSTidalCorridor_EventScript_ExitLilycove::
# 255 "data/maps/SSTidalCorridor/scripts.pory"
# 149 "data/maps/SSTidalCorridor/scripts.pory"
# 256 "data/maps/SSTidalCorridor/scripts.pory"
	setrespawn HEAL_LOCATION_LILYCOVE_CITY
# 257 "data/maps/SSTidalCorridor/scripts.pory"
# 150 "data/maps/SSTidalCorridor/scripts.pory"
# 258 "data/maps/SSTidalCorridor/scripts.pory"
	msgbox SSTidalCorridor_Text_WeveArrived, MSGBOX_DEFAULT
# 259 "data/maps/SSTidalCorridor/scripts.pory"
# 151 "data/maps/SSTidalCorridor/scripts.pory"
# 260 "data/maps/SSTidalCorridor/scripts.pory"
	goto_if_set FLAG_RECEIVED_TM_SNATCH, SSTidalCorridor_EventScript_ExitLilycove_2
# 261 "data/maps/SSTidalCorridor/scripts.pory"
SSTidalCorridor_EventScript_ExitLilycove_1:
# 262 "data/maps/SSTidalCorridor/scripts.pory"
# 154 "data/maps/SSTidalCorridor/scripts.pory"
# 263 "data/maps/SSTidalCorridor/scripts.pory"
	warp MAP_LILYCOVE_CITY_HARBOR, 8, 11
# 264 "data/maps/SSTidalCorridor/scripts.pory"
# 155 "data/maps/SSTidalCorridor/scripts.pory"
# 265 "data/maps/SSTidalCorridor/scripts.pory"
	waitstate
# 266 "data/maps/SSTidalCorridor/scripts.pory"
# 156 "data/maps/SSTidalCorridor/scripts.pory"
# 267 "data/maps/SSTidalCorridor/scripts.pory"
	release
# 268 "data/maps/SSTidalCorridor/scripts.pory"
	end
# 269 "data/maps/SSTidalCorridor/scripts.pory"

# 270 "data/maps/SSTidalCorridor/scripts.pory"
SSTidalCorridor_EventScript_ExitLilycove_2:
# 271 "data/maps/SSTidalCorridor/scripts.pory"
# 152 "data/maps/SSTidalCorridor/scripts.pory"
# 272 "data/maps/SSTidalCorridor/scripts.pory"
	call SSTidalCorridor_EventScript_HideSnatchGiver
# 273 "data/maps/SSTidalCorridor/scripts.pory"
	goto SSTidalCorridor_EventScript_ExitLilycove_1
# 274 "data/maps/SSTidalCorridor/scripts.pory"

# 275 "data/maps/SSTidalCorridor/scripts.pory"

# 276 "data/maps/SSTidalCorridor/scripts.pory"
SSTidalCorridor_EventScript_ExitSlateport::
# 277 "data/maps/SSTidalCorridor/scripts.pory"
# 161 "data/maps/SSTidalCorridor/scripts.pory"
# 278 "data/maps/SSTidalCorridor/scripts.pory"
	setrespawn HEAL_LOCATION_SLATEPORT_CITY
# 279 "data/maps/SSTidalCorridor/scripts.pory"
# 162 "data/maps/SSTidalCorridor/scripts.pory"
# 280 "data/maps/SSTidalCorridor/scripts.pory"
	msgbox SSTidalCorridor_Text_WeveArrived, MSGBOX_DEFAULT
# 281 "data/maps/SSTidalCorridor/scripts.pory"
# 163 "data/maps/SSTidalCorridor/scripts.pory"
# 282 "data/maps/SSTidalCorridor/scripts.pory"
	goto_if_set FLAG_RECEIVED_TM_SNATCH, SSTidalCorridor_EventScript_ExitSlateport_2
# 283 "data/maps/SSTidalCorridor/scripts.pory"
SSTidalCorridor_EventScript_ExitSlateport_1:
# 284 "data/maps/SSTidalCorridor/scripts.pory"
# 166 "data/maps/SSTidalCorridor/scripts.pory"
# 285 "data/maps/SSTidalCorridor/scripts.pory"
	warp MAP_SLATEPORT_CITY_HARBOR, 8, 11
# 286 "data/maps/SSTidalCorridor/scripts.pory"
# 167 "data/maps/SSTidalCorridor/scripts.pory"
# 287 "data/maps/SSTidalCorridor/scripts.pory"
	waitstate
# 288 "data/maps/SSTidalCorridor/scripts.pory"
# 168 "data/maps/SSTidalCorridor/scripts.pory"
# 289 "data/maps/SSTidalCorridor/scripts.pory"
	release
# 290 "data/maps/SSTidalCorridor/scripts.pory"
	end
# 291 "data/maps/SSTidalCorridor/scripts.pory"

# 292 "data/maps/SSTidalCorridor/scripts.pory"
SSTidalCorridor_EventScript_ExitSlateport_2:
# 293 "data/maps/SSTidalCorridor/scripts.pory"
# 164 "data/maps/SSTidalCorridor/scripts.pory"
# 294 "data/maps/SSTidalCorridor/scripts.pory"
	call SSTidalCorridor_EventScript_HideSnatchGiver
# 295 "data/maps/SSTidalCorridor/scripts.pory"
	goto SSTidalCorridor_EventScript_ExitSlateport_1
# 296 "data/maps/SSTidalCorridor/scripts.pory"

# 297 "data/maps/SSTidalCorridor/scripts.pory"

# 298 "data/maps/SSTidalCorridor/scripts.pory"
SSTidalCorridor_EventScript_HideSnatchGiver::
# 299 "data/maps/SSTidalCorridor/scripts.pory"
# 173 "data/maps/SSTidalCorridor/scripts.pory"
# 300 "data/maps/SSTidalCorridor/scripts.pory"
	setflag FLAG_HIDE_SS_TIDAL_ROOMS_SNATCH_GIVER
# 301 "data/maps/SSTidalCorridor/scripts.pory"
	return
# 302 "data/maps/SSTidalCorridor/scripts.pory"

# 303 "data/maps/SSTidalCorridor/scripts.pory"

# 304 "data/maps/SSTidalCorridor/scripts.pory"
SSTidalCorridor_EventScript_Porthole::
# 305 "data/maps/SSTidalCorridor/scripts.pory"
# 178 "data/maps/SSTidalCorridor/scripts.pory"
# 306 "data/maps/SSTidalCorridor/scripts.pory"
	lockall
# 307 "data/maps/SSTidalCorridor/scripts.pory"
# 179 "data/maps/SSTidalCorridor/scripts.pory"
# 308 "data/maps/SSTidalCorridor/scripts.pory"
	compare VAR_SS_TIDAL_STATE, SS_TIDAL_DEPART_SLATEPORT
# 309 "data/maps/SSTidalCorridor/scripts.pory"
	goto_if_eq SSTidalCorridor_EventScript_Porthole_2
# 310 "data/maps/SSTidalCorridor/scripts.pory"
SSTidalCorridor_EventScript_Porthole_1:
# 311 "data/maps/SSTidalCorridor/scripts.pory"
# 182 "data/maps/SSTidalCorridor/scripts.pory"
# 312 "data/maps/SSTidalCorridor/scripts.pory"
	compare VAR_SS_TIDAL_STATE, SS_TIDAL_HALFWAY_SLATEPORT
# 313 "data/maps/SSTidalCorridor/scripts.pory"
	goto_if_eq SSTidalCorridor_EventScript_Porthole_5
# 314 "data/maps/SSTidalCorridor/scripts.pory"
SSTidalCorridor_EventScript_Porthole_4:
# 315 "data/maps/SSTidalCorridor/scripts.pory"
# 185 "data/maps/SSTidalCorridor/scripts.pory"
# 316 "data/maps/SSTidalCorridor/scripts.pory"
	msgbox SSTidalCorridor_Text_HorizonSpreadsBeyondPorthole, MSGBOX_DEFAULT
# 317 "data/maps/SSTidalCorridor/scripts.pory"
# 186 "data/maps/SSTidalCorridor/scripts.pory"
# 318 "data/maps/SSTidalCorridor/scripts.pory"
	releaseall
# 319 "data/maps/SSTidalCorridor/scripts.pory"
	end
# 320 "data/maps/SSTidalCorridor/scripts.pory"

# 321 "data/maps/SSTidalCorridor/scripts.pory"
SSTidalCorridor_EventScript_Porthole_2:
# 322 "data/maps/SSTidalCorridor/scripts.pory"
# 180 "data/maps/SSTidalCorridor/scripts.pory"
# 323 "data/maps/SSTidalCorridor/scripts.pory"
	goto SSTidalCorridor_EventScript_LookThroughPorthole
# 324 "data/maps/SSTidalCorridor/scripts.pory"
	goto SSTidalCorridor_EventScript_Porthole_1
# 325 "data/maps/SSTidalCorridor/scripts.pory"

# 326 "data/maps/SSTidalCorridor/scripts.pory"
SSTidalCorridor_EventScript_Porthole_5:
# 327 "data/maps/SSTidalCorridor/scripts.pory"
# 183 "data/maps/SSTidalCorridor/scripts.pory"
# 328 "data/maps/SSTidalCorridor/scripts.pory"
	goto SSTidalCorridor_EventScript_LookThroughPorthole
# 329 "data/maps/SSTidalCorridor/scripts.pory"
	goto SSTidalCorridor_EventScript_Porthole_4
# 330 "data/maps/SSTidalCorridor/scripts.pory"

# 331 "data/maps/SSTidalCorridor/scripts.pory"

# 332 "data/maps/SSTidalCorridor/scripts.pory"
SSTidalCorridor_EventScript_LookThroughPorthole::
# 333 "data/maps/SSTidalCorridor/scripts.pory"
# 191 "data/maps/SSTidalCorridor/scripts.pory"
# 334 "data/maps/SSTidalCorridor/scripts.pory"
	special LookThroughPorthole
# 335 "data/maps/SSTidalCorridor/scripts.pory"
# 192 "data/maps/SSTidalCorridor/scripts.pory"
# 336 "data/maps/SSTidalCorridor/scripts.pory"
	waitstate
# 337 "data/maps/SSTidalCorridor/scripts.pory"
	end
# 338 "data/maps/SSTidalCorridor/scripts.pory"

# 339 "data/maps/SSTidalCorridor/scripts.pory"

# 340 "data/maps/SSTidalCorridor/scripts.pory"
SSTidalCorridor_EventScript_Sailor::
# 341 "data/maps/SSTidalCorridor/scripts.pory"
# 197 "data/maps/SSTidalCorridor/scripts.pory"
# 342 "data/maps/SSTidalCorridor/scripts.pory"
	lock
# 343 "data/maps/SSTidalCorridor/scripts.pory"
# 198 "data/maps/SSTidalCorridor/scripts.pory"
# 344 "data/maps/SSTidalCorridor/scripts.pory"
	faceplayer
# 345 "data/maps/SSTidalCorridor/scripts.pory"
# 199 "data/maps/SSTidalCorridor/scripts.pory"
# 346 "data/maps/SSTidalCorridor/scripts.pory"
	goto_if_set FLAG_DEFEATED_SS_TIDAL_TRAINERS, SSTidalCorridor_EventScript_Sailor_2
# 347 "data/maps/SSTidalCorridor/scripts.pory"
SSTidalCorridor_EventScript_Sailor_1:
# 348 "data/maps/SSTidalCorridor/scripts.pory"
# 202 "data/maps/SSTidalCorridor/scripts.pory"
# 349 "data/maps/SSTidalCorridor/scripts.pory"
	call SSTidalCorridor_EventScript_CheckIfTrainersDefeated
# 350 "data/maps/SSTidalCorridor/scripts.pory"
# 203 "data/maps/SSTidalCorridor/scripts.pory"
# 351 "data/maps/SSTidalCorridor/scripts.pory"
	msgbox SSTidalCorridor_Text_VisitOtherCabins, MSGBOX_DEFAULT
# 352 "data/maps/SSTidalCorridor/scripts.pory"
# 204 "data/maps/SSTidalCorridor/scripts.pory"
# 353 "data/maps/SSTidalCorridor/scripts.pory"
	release
# 354 "data/maps/SSTidalCorridor/scripts.pory"
	end
# 355 "data/maps/SSTidalCorridor/scripts.pory"

# 356 "data/maps/SSTidalCorridor/scripts.pory"
SSTidalCorridor_EventScript_Sailor_2:
# 357 "data/maps/SSTidalCorridor/scripts.pory"
# 200 "data/maps/SSTidalCorridor/scripts.pory"
# 358 "data/maps/SSTidalCorridor/scripts.pory"
	goto SSTidalCorridor_EventScript_EnjoyYourCruise
# 359 "data/maps/SSTidalCorridor/scripts.pory"
	goto SSTidalCorridor_EventScript_Sailor_1
# 360 "data/maps/SSTidalCorridor/scripts.pory"

# 361 "data/maps/SSTidalCorridor/scripts.pory"

# 362 "data/maps/SSTidalCorridor/scripts.pory"
SSTidalCorridor_EventScript_EnjoyYourCruise::
# 363 "data/maps/SSTidalCorridor/scripts.pory"
# 209 "data/maps/SSTidalCorridor/scripts.pory"
# 364 "data/maps/SSTidalCorridor/scripts.pory"
	msgbox SSTidalCorridor_Text_EnjoyYourCruise, MSGBOX_DEFAULT
# 365 "data/maps/SSTidalCorridor/scripts.pory"
# 210 "data/maps/SSTidalCorridor/scripts.pory"
# 366 "data/maps/SSTidalCorridor/scripts.pory"
	release
# 367 "data/maps/SSTidalCorridor/scripts.pory"
	end
# 368 "data/maps/SSTidalCorridor/scripts.pory"

# 369 "data/maps/SSTidalCorridor/scripts.pory"

# 370 "data/maps/SSTidalCorridor/scripts.pory"
SSTidalCorridor_EventScript_CheckIfTrainersDefeated::
# 371 "data/maps/SSTidalCorridor/scripts.pory"
# 215 "data/maps/SSTidalCorridor/scripts.pory"
# 372 "data/maps/SSTidalCorridor/scripts.pory"
	goto_if_not_defeated TRAINER_PHILLIP, SSTidalCorridor_EventScript_TrainerNotDefeated
# 373 "data/maps/SSTidalCorridor/scripts.pory"
# 216 "data/maps/SSTidalCorridor/scripts.pory"
# 374 "data/maps/SSTidalCorridor/scripts.pory"
	goto_if_not_defeated TRAINER_LEONARD, SSTidalCorridor_EventScript_TrainerNotDefeated
# 375 "data/maps/SSTidalCorridor/scripts.pory"
# 217 "data/maps/SSTidalCorridor/scripts.pory"
# 376 "data/maps/SSTidalCorridor/scripts.pory"
	goto_if_not_defeated TRAINER_COLTON, SSTidalCorridor_EventScript_TrainerNotDefeated
# 377 "data/maps/SSTidalCorridor/scripts.pory"
# 218 "data/maps/SSTidalCorridor/scripts.pory"
# 378 "data/maps/SSTidalCorridor/scripts.pory"
	goto_if_not_defeated TRAINER_MICAH, SSTidalCorridor_EventScript_TrainerNotDefeated
# 379 "data/maps/SSTidalCorridor/scripts.pory"
# 219 "data/maps/SSTidalCorridor/scripts.pory"
# 380 "data/maps/SSTidalCorridor/scripts.pory"
	goto_if_not_defeated TRAINER_THOMAS, SSTidalCorridor_EventScript_TrainerNotDefeated
# 381 "data/maps/SSTidalCorridor/scripts.pory"
# 220 "data/maps/SSTidalCorridor/scripts.pory"
# 382 "data/maps/SSTidalCorridor/scripts.pory"
	goto_if_not_defeated TRAINER_LEA_AND_JED, SSTidalCorridor_EventScript_TrainerNotDefeated
# 383 "data/maps/SSTidalCorridor/scripts.pory"
# 221 "data/maps/SSTidalCorridor/scripts.pory"
# 384 "data/maps/SSTidalCorridor/scripts.pory"
	goto_if_not_defeated TRAINER_GARRET, SSTidalCorridor_EventScript_TrainerNotDefeated
# 385 "data/maps/SSTidalCorridor/scripts.pory"
# 222 "data/maps/SSTidalCorridor/scripts.pory"
# 386 "data/maps/SSTidalCorridor/scripts.pory"
	goto_if_not_defeated TRAINER_NAOMI, SSTidalCorridor_EventScript_TrainerNotDefeated
# 387 "data/maps/SSTidalCorridor/scripts.pory"
# 223 "data/maps/SSTidalCorridor/scripts.pory"
# 388 "data/maps/SSTidalCorridor/scripts.pory"
	setflag FLAG_DEFEATED_SS_TIDAL_TRAINERS
# 389 "data/maps/SSTidalCorridor/scripts.pory"
# 224 "data/maps/SSTidalCorridor/scripts.pory"
# 390 "data/maps/SSTidalCorridor/scripts.pory"
	goto SSTidalCorridor_EventScript_EnjoyYourCruise
# 391 "data/maps/SSTidalCorridor/scripts.pory"
	return
# 392 "data/maps/SSTidalCorridor/scripts.pory"

# 393 "data/maps/SSTidalCorridor/scripts.pory"

# 394 "data/maps/SSTidalCorridor/scripts.pory"
SSTidalCorridor_EventScript_TrainerNotDefeated::
# 395 "data/maps/SSTidalCorridor/scripts.pory"
	return
# 396 "data/maps/SSTidalCorridor/scripts.pory"

# 397 "data/maps/SSTidalCorridor/scripts.pory"

# 398 "data/maps/SSTidalCorridor/scripts.pory"
SSTidalCorridor_EventScript_ScottScene::
# 399 "data/maps/SSTidalCorridor/scripts.pory"
# 233 "data/maps/SSTidalCorridor/scripts.pory"
# 400 "data/maps/SSTidalCorridor/scripts.pory"
	lockall
# 401 "data/maps/SSTidalCorridor/scripts.pory"
# 234 "data/maps/SSTidalCorridor/scripts.pory"
# 402 "data/maps/SSTidalCorridor/scripts.pory"
	applymovement LOCALID_SS_TIDAL_SCOTT, SSTidalCorridor_Movement_ScottApproachPlayer
# 403 "data/maps/SSTidalCorridor/scripts.pory"
# 235 "data/maps/SSTidalCorridor/scripts.pory"
# 404 "data/maps/SSTidalCorridor/scripts.pory"
	waitmovement 0
# 405 "data/maps/SSTidalCorridor/scripts.pory"
# 236 "data/maps/SSTidalCorridor/scripts.pory"
# 406 "data/maps/SSTidalCorridor/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 407 "data/maps/SSTidalCorridor/scripts.pory"
# 237 "data/maps/SSTidalCorridor/scripts.pory"
# 408 "data/maps/SSTidalCorridor/scripts.pory"
	waitmovement 0
# 409 "data/maps/SSTidalCorridor/scripts.pory"
# 238 "data/maps/SSTidalCorridor/scripts.pory"
# 410 "data/maps/SSTidalCorridor/scripts.pory"
	msgbox SSTidalCorridor_Text_ScottBattleFrontierInvite, MSGBOX_DEFAULT
# 411 "data/maps/SSTidalCorridor/scripts.pory"
# 239 "data/maps/SSTidalCorridor/scripts.pory"
# 412 "data/maps/SSTidalCorridor/scripts.pory"
	closemessage
# 413 "data/maps/SSTidalCorridor/scripts.pory"
# 240 "data/maps/SSTidalCorridor/scripts.pory"
# 414 "data/maps/SSTidalCorridor/scripts.pory"
	applymovement LOCALID_PLAYER, SSTidalCorridor_Movement_PlayerWatchScottExit
# 415 "data/maps/SSTidalCorridor/scripts.pory"
# 241 "data/maps/SSTidalCorridor/scripts.pory"
# 416 "data/maps/SSTidalCorridor/scripts.pory"
	applymovement LOCALID_SS_TIDAL_EXIT_SAILOR, SSTidalCorridor_Movement_SailorMoveForScott
# 417 "data/maps/SSTidalCorridor/scripts.pory"
# 242 "data/maps/SSTidalCorridor/scripts.pory"
# 418 "data/maps/SSTidalCorridor/scripts.pory"
	applymovement LOCALID_SS_TIDAL_SCOTT, SSTidalCorridor_Movement_ScottExit
# 419 "data/maps/SSTidalCorridor/scripts.pory"
# 243 "data/maps/SSTidalCorridor/scripts.pory"
# 420 "data/maps/SSTidalCorridor/scripts.pory"
	waitmovement 0
# 421 "data/maps/SSTidalCorridor/scripts.pory"
# 244 "data/maps/SSTidalCorridor/scripts.pory"
# 422 "data/maps/SSTidalCorridor/scripts.pory"
	playse SE_EXIT
# 423 "data/maps/SSTidalCorridor/scripts.pory"
# 245 "data/maps/SSTidalCorridor/scripts.pory"
# 424 "data/maps/SSTidalCorridor/scripts.pory"
	waitse
# 425 "data/maps/SSTidalCorridor/scripts.pory"
# 246 "data/maps/SSTidalCorridor/scripts.pory"
# 426 "data/maps/SSTidalCorridor/scripts.pory"
	removeobject LOCALID_SS_TIDAL_SCOTT
# 427 "data/maps/SSTidalCorridor/scripts.pory"
# 247 "data/maps/SSTidalCorridor/scripts.pory"
# 428 "data/maps/SSTidalCorridor/scripts.pory"
	applymovement LOCALID_SS_TIDAL_EXIT_SAILOR, SSTidalCorridor_Movement_SailorReturn
# 429 "data/maps/SSTidalCorridor/scripts.pory"
# 248 "data/maps/SSTidalCorridor/scripts.pory"
# 430 "data/maps/SSTidalCorridor/scripts.pory"
	waitmovement 0
# 431 "data/maps/SSTidalCorridor/scripts.pory"
# 249 "data/maps/SSTidalCorridor/scripts.pory"
# 432 "data/maps/SSTidalCorridor/scripts.pory"
	delay 30
# 433 "data/maps/SSTidalCorridor/scripts.pory"
# 250 "data/maps/SSTidalCorridor/scripts.pory"
# 434 "data/maps/SSTidalCorridor/scripts.pory"
	setflag FLAG_MET_SCOTT_ON_SS_TIDAL
# 435 "data/maps/SSTidalCorridor/scripts.pory"
# 251 "data/maps/SSTidalCorridor/scripts.pory"
# 436 "data/maps/SSTidalCorridor/scripts.pory"
	setvar VAR_SS_TIDAL_SCOTT_STATE, 1
# 437 "data/maps/SSTidalCorridor/scripts.pory"
# 252 "data/maps/SSTidalCorridor/scripts.pory"
# 438 "data/maps/SSTidalCorridor/scripts.pory"
	releaseall
# 439 "data/maps/SSTidalCorridor/scripts.pory"
	end
# 440 "data/maps/SSTidalCorridor/scripts.pory"

# 441 "data/maps/SSTidalCorridor/scripts.pory"

# 442 "data/maps/SSTidalCorridor/scripts.pory"
# 256 "data/maps/SSTidalCorridor/scripts.pory"
# 443 "data/maps/SSTidalCorridor/scripts.pory"
SSTidalCorridor_Movement_ScottApproachPlayer:
# 444 "data/maps/SSTidalCorridor/scripts.pory"
# 257 "data/maps/SSTidalCorridor/scripts.pory"
# 445 "data/maps/SSTidalCorridor/scripts.pory"
	walk_left
# 446 "data/maps/SSTidalCorridor/scripts.pory"
# 258 "data/maps/SSTidalCorridor/scripts.pory"
# 447 "data/maps/SSTidalCorridor/scripts.pory"
	walk_left
# 448 "data/maps/SSTidalCorridor/scripts.pory"
# 259 "data/maps/SSTidalCorridor/scripts.pory"
# 449 "data/maps/SSTidalCorridor/scripts.pory"
	walk_left
# 450 "data/maps/SSTidalCorridor/scripts.pory"
# 260 "data/maps/SSTidalCorridor/scripts.pory"
# 451 "data/maps/SSTidalCorridor/scripts.pory"
	walk_left
# 452 "data/maps/SSTidalCorridor/scripts.pory"
# 261 "data/maps/SSTidalCorridor/scripts.pory"
# 453 "data/maps/SSTidalCorridor/scripts.pory"
	walk_left
# 454 "data/maps/SSTidalCorridor/scripts.pory"
# 262 "data/maps/SSTidalCorridor/scripts.pory"
# 455 "data/maps/SSTidalCorridor/scripts.pory"
	walk_left
# 456 "data/maps/SSTidalCorridor/scripts.pory"
# 263 "data/maps/SSTidalCorridor/scripts.pory"
# 457 "data/maps/SSTidalCorridor/scripts.pory"
	walk_left
# 458 "data/maps/SSTidalCorridor/scripts.pory"
# 264 "data/maps/SSTidalCorridor/scripts.pory"
# 459 "data/maps/SSTidalCorridor/scripts.pory"
	step_end
# 460 "data/maps/SSTidalCorridor/scripts.pory"

# 461 "data/maps/SSTidalCorridor/scripts.pory"
# 267 "data/maps/SSTidalCorridor/scripts.pory"
# 462 "data/maps/SSTidalCorridor/scripts.pory"
SSTidalCorridor_Movement_ScottExit:
# 463 "data/maps/SSTidalCorridor/scripts.pory"
# 268 "data/maps/SSTidalCorridor/scripts.pory"
# 464 "data/maps/SSTidalCorridor/scripts.pory"
	walk_in_place_faster_down
# 465 "data/maps/SSTidalCorridor/scripts.pory"
# 269 "data/maps/SSTidalCorridor/scripts.pory"
# 466 "data/maps/SSTidalCorridor/scripts.pory"
	delay_16
# 467 "data/maps/SSTidalCorridor/scripts.pory"
# 270 "data/maps/SSTidalCorridor/scripts.pory"
# 468 "data/maps/SSTidalCorridor/scripts.pory"
	delay_16
# 469 "data/maps/SSTidalCorridor/scripts.pory"
# 271 "data/maps/SSTidalCorridor/scripts.pory"
# 470 "data/maps/SSTidalCorridor/scripts.pory"
	delay_16
# 471 "data/maps/SSTidalCorridor/scripts.pory"
# 272 "data/maps/SSTidalCorridor/scripts.pory"
# 472 "data/maps/SSTidalCorridor/scripts.pory"
	delay_16
# 473 "data/maps/SSTidalCorridor/scripts.pory"
# 273 "data/maps/SSTidalCorridor/scripts.pory"
# 474 "data/maps/SSTidalCorridor/scripts.pory"
	walk_down
# 475 "data/maps/SSTidalCorridor/scripts.pory"
# 274 "data/maps/SSTidalCorridor/scripts.pory"
# 476 "data/maps/SSTidalCorridor/scripts.pory"
	walk_left
# 477 "data/maps/SSTidalCorridor/scripts.pory"
# 275 "data/maps/SSTidalCorridor/scripts.pory"
# 478 "data/maps/SSTidalCorridor/scripts.pory"
	step_end
# 479 "data/maps/SSTidalCorridor/scripts.pory"

# 480 "data/maps/SSTidalCorridor/scripts.pory"
# 278 "data/maps/SSTidalCorridor/scripts.pory"
# 481 "data/maps/SSTidalCorridor/scripts.pory"
SSTidalCorridor_Movement_PlayerWatchScottExit:
# 482 "data/maps/SSTidalCorridor/scripts.pory"
# 279 "data/maps/SSTidalCorridor/scripts.pory"
# 483 "data/maps/SSTidalCorridor/scripts.pory"
	delay_16
# 484 "data/maps/SSTidalCorridor/scripts.pory"
# 280 "data/maps/SSTidalCorridor/scripts.pory"
# 485 "data/maps/SSTidalCorridor/scripts.pory"
	delay_16
# 486 "data/maps/SSTidalCorridor/scripts.pory"
# 281 "data/maps/SSTidalCorridor/scripts.pory"
# 487 "data/maps/SSTidalCorridor/scripts.pory"
	delay_16
# 488 "data/maps/SSTidalCorridor/scripts.pory"
# 282 "data/maps/SSTidalCorridor/scripts.pory"
# 489 "data/maps/SSTidalCorridor/scripts.pory"
	delay_16
# 490 "data/maps/SSTidalCorridor/scripts.pory"
# 283 "data/maps/SSTidalCorridor/scripts.pory"
# 491 "data/maps/SSTidalCorridor/scripts.pory"
	delay_8
# 492 "data/maps/SSTidalCorridor/scripts.pory"
# 284 "data/maps/SSTidalCorridor/scripts.pory"
# 493 "data/maps/SSTidalCorridor/scripts.pory"
	walk_in_place_faster_down
# 494 "data/maps/SSTidalCorridor/scripts.pory"
# 285 "data/maps/SSTidalCorridor/scripts.pory"
# 495 "data/maps/SSTidalCorridor/scripts.pory"
	step_end
# 496 "data/maps/SSTidalCorridor/scripts.pory"

# 497 "data/maps/SSTidalCorridor/scripts.pory"
# 288 "data/maps/SSTidalCorridor/scripts.pory"
# 498 "data/maps/SSTidalCorridor/scripts.pory"
SSTidalCorridor_Movement_SailorMoveForScott:
# 499 "data/maps/SSTidalCorridor/scripts.pory"
# 289 "data/maps/SSTidalCorridor/scripts.pory"
# 500 "data/maps/SSTidalCorridor/scripts.pory"
	delay_16
# 501 "data/maps/SSTidalCorridor/scripts.pory"
# 290 "data/maps/SSTidalCorridor/scripts.pory"
# 502 "data/maps/SSTidalCorridor/scripts.pory"
	walk_right
# 503 "data/maps/SSTidalCorridor/scripts.pory"
# 291 "data/maps/SSTidalCorridor/scripts.pory"
# 504 "data/maps/SSTidalCorridor/scripts.pory"
	walk_right
# 505 "data/maps/SSTidalCorridor/scripts.pory"
# 292 "data/maps/SSTidalCorridor/scripts.pory"
# 506 "data/maps/SSTidalCorridor/scripts.pory"
	walk_in_place_faster_up
# 507 "data/maps/SSTidalCorridor/scripts.pory"
# 293 "data/maps/SSTidalCorridor/scripts.pory"
# 508 "data/maps/SSTidalCorridor/scripts.pory"
	delay_16
# 509 "data/maps/SSTidalCorridor/scripts.pory"
# 294 "data/maps/SSTidalCorridor/scripts.pory"
# 510 "data/maps/SSTidalCorridor/scripts.pory"
	walk_in_place_faster_left
# 511 "data/maps/SSTidalCorridor/scripts.pory"
# 295 "data/maps/SSTidalCorridor/scripts.pory"
# 512 "data/maps/SSTidalCorridor/scripts.pory"
	step_end
# 513 "data/maps/SSTidalCorridor/scripts.pory"

# 514 "data/maps/SSTidalCorridor/scripts.pory"
# 298 "data/maps/SSTidalCorridor/scripts.pory"
# 515 "data/maps/SSTidalCorridor/scripts.pory"
SSTidalCorridor_Movement_SailorReturn:
# 516 "data/maps/SSTidalCorridor/scripts.pory"
# 299 "data/maps/SSTidalCorridor/scripts.pory"
# 517 "data/maps/SSTidalCorridor/scripts.pory"
	walk_left
# 518 "data/maps/SSTidalCorridor/scripts.pory"
# 300 "data/maps/SSTidalCorridor/scripts.pory"
# 519 "data/maps/SSTidalCorridor/scripts.pory"
	walk_left
# 520 "data/maps/SSTidalCorridor/scripts.pory"
# 301 "data/maps/SSTidalCorridor/scripts.pory"
# 521 "data/maps/SSTidalCorridor/scripts.pory"
	walk_in_place_faster_up
# 522 "data/maps/SSTidalCorridor/scripts.pory"
# 302 "data/maps/SSTidalCorridor/scripts.pory"
# 523 "data/maps/SSTidalCorridor/scripts.pory"
	step_end
# 524 "data/maps/SSTidalCorridor/scripts.pory"

# 525 "data/maps/SSTidalCorridor/scripts.pory"
SSTidalCorridor_Text_ScottBattleFrontierInvite::
# 526 "data/maps/SSTidalCorridor/scripts.pory"
# 305 "data/maps/SSTidalCorridor/scripts.pory"
# 527 "data/maps/SSTidalCorridor/scripts.pory"
	.string "SCOTT: Well, hi, hi!\n"
# 528 "data/maps/SSTidalCorridor/scripts.pory"
	.string "{PLAYER}{KUN}, {PLAYER}{KUN}!\p"
# 529 "data/maps/SSTidalCorridor/scripts.pory"
	.string "Something's come up, so I have to\n"
# 530 "data/maps/SSTidalCorridor/scripts.pory"
	.string "disembark, but am I glad to see you!\p"
# 531 "data/maps/SSTidalCorridor/scripts.pory"
	.string "Congratulations, LEAGUE CHAMPION!\p"
# 532 "data/maps/SSTidalCorridor/scripts.pory"
	.string "There's a place I'd like to invite\n"
# 533 "data/maps/SSTidalCorridor/scripts.pory"
	.string "someone like you.\p"
# 534 "data/maps/SSTidalCorridor/scripts.pory"
	.string "It's the…\n"
# 535 "data/maps/SSTidalCorridor/scripts.pory"
	.string "BATTLE FRONTIER!\p"
# 536 "data/maps/SSTidalCorridor/scripts.pory"
	.string "What's the place like?\n"
# 537 "data/maps/SSTidalCorridor/scripts.pory"
	.string "You'll understand when you see it!\p"
# 538 "data/maps/SSTidalCorridor/scripts.pory"
	.string "I've spoken with the ship's CAPTAIN\n"
# 539 "data/maps/SSTidalCorridor/scripts.pory"
	.string "about this.\p"
# 540 "data/maps/SSTidalCorridor/scripts.pory"
	.string "The next time you take a ferry,\n"
# 541 "data/maps/SSTidalCorridor/scripts.pory"
	.string "you should be able to sail to\l"
# 542 "data/maps/SSTidalCorridor/scripts.pory"
	.string "the BATTLE FRONTIER.\p"
# 543 "data/maps/SSTidalCorridor/scripts.pory"
	.string "Okay, {PLAYER}{KUN}, I'll be waiting for you\n"
# 544 "data/maps/SSTidalCorridor/scripts.pory"
	.string "at the BATTLE FRONTIER!$"
# 545 "data/maps/SSTidalCorridor/scripts.pory"

# 546 "data/maps/SSTidalCorridor/scripts.pory"
SSTidal_Text_FastCurrentsHopeYouEnjoyVoyage::
# 547 "data/maps/SSTidalCorridor/scripts.pory"
# 326 "data/maps/SSTidalCorridor/scripts.pory"
# 548 "data/maps/SSTidalCorridor/scripts.pory"
	.string "This ferry is built to plow through\n"
# 549 "data/maps/SSTidalCorridor/scripts.pory"
	.string "fast-running currents.\p"
# 550 "data/maps/SSTidalCorridor/scripts.pory"
	.string "We hope you enjoy your voyage with us.\n"
# 551 "data/maps/SSTidalCorridor/scripts.pory"
	.string "Feel free to explore the ship.$"
# 552 "data/maps/SSTidalCorridor/scripts.pory"

# 553 "data/maps/SSTidalCorridor/scripts.pory"
SSTidal_Text_HopeYouEnjoyVoyage::
# 554 "data/maps/SSTidalCorridor/scripts.pory"
# 333 "data/maps/SSTidalCorridor/scripts.pory"
# 555 "data/maps/SSTidalCorridor/scripts.pory"
	.string "We hope you enjoy your voyage on\n"
# 556 "data/maps/SSTidalCorridor/scripts.pory"
	.string "our ferry.$"
# 557 "data/maps/SSTidalCorridor/scripts.pory"

# 558 "data/maps/SSTidalCorridor/scripts.pory"
SSTidal_Text_MadeLandInSlateport::
# 559 "data/maps/SSTidalCorridor/scripts.pory"
# 338 "data/maps/SSTidalCorridor/scripts.pory"
# 560 "data/maps/SSTidalCorridor/scripts.pory"
	.string "We have made land in SLATEPORT CITY.\n"
# 561 "data/maps/SSTidalCorridor/scripts.pory"
	.string "Thank you for sailing with us.$"
# 562 "data/maps/SSTidalCorridor/scripts.pory"

# 563 "data/maps/SSTidalCorridor/scripts.pory"
SSTidal_Text_MadeLandInLilycove::
# 564 "data/maps/SSTidalCorridor/scripts.pory"
# 343 "data/maps/SSTidalCorridor/scripts.pory"
# 565 "data/maps/SSTidalCorridor/scripts.pory"
	.string "We have made land in LILYCOVE CITY.\n"
# 566 "data/maps/SSTidalCorridor/scripts.pory"
	.string "Thank you for sailing with us.$"
# 567 "data/maps/SSTidalCorridor/scripts.pory"

# 568 "data/maps/SSTidalCorridor/scripts.pory"
SSTidalCorridor_Text_CanRestInCabin2::
# 569 "data/maps/SSTidalCorridor/scripts.pory"
# 348 "data/maps/SSTidalCorridor/scripts.pory"
# 570 "data/maps/SSTidalCorridor/scripts.pory"
	.string "It'll be some time before we make land,\n"
# 571 "data/maps/SSTidalCorridor/scripts.pory"
	.string "I reckon.\p"
# 572 "data/maps/SSTidalCorridor/scripts.pory"
	.string "You can rest up in your cabin if you'd\n"
# 573 "data/maps/SSTidalCorridor/scripts.pory"
	.string "like. Your cabin's No. 2.\p"
# 574 "data/maps/SSTidalCorridor/scripts.pory"
	.string "The bed in there is soft and plushy.\n"
# 575 "data/maps/SSTidalCorridor/scripts.pory"
	.string "I can attest to how comfy it is!$"
# 576 "data/maps/SSTidalCorridor/scripts.pory"

# 577 "data/maps/SSTidalCorridor/scripts.pory"
SSTidalCorridor_Text_WeveArrived::
# 578 "data/maps/SSTidalCorridor/scripts.pory"
# 357 "data/maps/SSTidalCorridor/scripts.pory"
# 579 "data/maps/SSTidalCorridor/scripts.pory"
	.string "We've arrived!$"
# 580 "data/maps/SSTidalCorridor/scripts.pory"

# 581 "data/maps/SSTidalCorridor/scripts.pory"
SSTidalCorridor_Text_VisitOtherCabins::
# 582 "data/maps/SSTidalCorridor/scripts.pory"
# 361 "data/maps/SSTidalCorridor/scripts.pory"
# 583 "data/maps/SSTidalCorridor/scripts.pory"
	.string "Go visit other cabins.\n"
# 584 "data/maps/SSTidalCorridor/scripts.pory"
	.string "TRAINERS bored of the boat trip will\l"
# 585 "data/maps/SSTidalCorridor/scripts.pory"
	.string "be itching to battle.$"
# 586 "data/maps/SSTidalCorridor/scripts.pory"

# 587 "data/maps/SSTidalCorridor/scripts.pory"
SSTidalCorridor_Text_EnjoyYourCruise::
# 588 "data/maps/SSTidalCorridor/scripts.pory"
# 367 "data/maps/SSTidalCorridor/scripts.pory"
# 589 "data/maps/SSTidalCorridor/scripts.pory"
	.string "Enjoy your cruise!$"
# 590 "data/maps/SSTidalCorridor/scripts.pory"

# 591 "data/maps/SSTidalCorridor/scripts.pory"
SSTidalCorridor_Text_HorizonSpreadsBeyondPorthole::
# 592 "data/maps/SSTidalCorridor/scripts.pory"
# 371 "data/maps/SSTidalCorridor/scripts.pory"
# 593 "data/maps/SSTidalCorridor/scripts.pory"
	.string "The horizon spreads beyond\n"
# 594 "data/maps/SSTidalCorridor/scripts.pory"
	.string "the porthole.$"
# 595 "data/maps/SSTidalCorridor/scripts.pory"

# 596 "data/maps/SSTidalCorridor/scripts.pory"
SSTidalCorridor_Text_BrineyWelcomeAboard::
# 597 "data/maps/SSTidalCorridor/scripts.pory"
# 376 "data/maps/SSTidalCorridor/scripts.pory"
# 598 "data/maps/SSTidalCorridor/scripts.pory"
	.string "MR. BRINEY: Welcome aboard, {PLAYER}{KUN}!\p"
# 599 "data/maps/SSTidalCorridor/scripts.pory"
	.string "They made me honorary captain of\n"
# 600 "data/maps/SSTidalCorridor/scripts.pory"
	.string "the S.S. TIDAL!\p"
# 601 "data/maps/SSTidalCorridor/scripts.pory"
	.string "You can call me CAPTAIN BRINEY now!\p"
# 602 "data/maps/SSTidalCorridor/scripts.pory"
	.string "You know, I retired once before,\n"
# 603 "data/maps/SSTidalCorridor/scripts.pory"
	.string "but when I saw this majestic ship…\p"
# 604 "data/maps/SSTidalCorridor/scripts.pory"
	.string "Let me just say, it stirred my sleeping\n"
# 605 "data/maps/SSTidalCorridor/scripts.pory"
	.string "soul as a sailor!$"
# 606 "data/maps/SSTidalCorridor/scripts.pory"

# 607 "data/maps/SSTidalCorridor/scripts.pory"
SSTidalCorridor_Text_Peeko::
# 608 "data/maps/SSTidalCorridor/scripts.pory"
# 387 "data/maps/SSTidalCorridor/scripts.pory"
# 609 "data/maps/SSTidalCorridor/scripts.pory"
	.string "PEEKO: Pihyo pihyohyo…$"
# 610 "data/maps/SSTidalCorridor/scripts.pory"

# 611 "data/maps/SSTidalCorridor/scripts.pory"
SSTidalCorridor_Text_Cabin1::
# 612 "data/maps/SSTidalCorridor/scripts.pory"
# 391 "data/maps/SSTidalCorridor/scripts.pory"
# 613 "data/maps/SSTidalCorridor/scripts.pory"
	.string "Cabin 1$"
# 614 "data/maps/SSTidalCorridor/scripts.pory"

# 615 "data/maps/SSTidalCorridor/scripts.pory"
SSTidalCorridor_Text_Cabin2::
# 616 "data/maps/SSTidalCorridor/scripts.pory"
# 395 "data/maps/SSTidalCorridor/scripts.pory"
# 617 "data/maps/SSTidalCorridor/scripts.pory"
	.string "Cabin 2$"
# 618 "data/maps/SSTidalCorridor/scripts.pory"

# 619 "data/maps/SSTidalCorridor/scripts.pory"
SSTidalCorridor_Text_Cabin3::
# 620 "data/maps/SSTidalCorridor/scripts.pory"
# 399 "data/maps/SSTidalCorridor/scripts.pory"
# 621 "data/maps/SSTidalCorridor/scripts.pory"
	.string "Cabin 3$"
# 622 "data/maps/SSTidalCorridor/scripts.pory"

# 623 "data/maps/SSTidalCorridor/scripts.pory"
SSTidalCorridor_Text_Cabin4::
# 624 "data/maps/SSTidalCorridor/scripts.pory"
# 403 "data/maps/SSTidalCorridor/scripts.pory"
# 625 "data/maps/SSTidalCorridor/scripts.pory"
	.string "Cabin 4$"
