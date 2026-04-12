# 1 "data/maps/FuchsiaCity_Frlg/scripts.pory"

# 2 "data/maps/FuchsiaCity_Frlg/scripts.pory"
FuchsiaCity_Frlg_MapScripts::
# 3 "data/maps/FuchsiaCity_Frlg/scripts.pory"
# 2 "data/maps/FuchsiaCity_Frlg/scripts.pory"
# 4 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, FuchsiaCity_OnTransition
# 5 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	.byte 0
# 6 "data/maps/FuchsiaCity_Frlg/scripts.pory"

# 7 "data/maps/FuchsiaCity_Frlg/scripts.pory"

# 8 "data/maps/FuchsiaCity_Frlg/scripts.pory"
FuchsiaCity_OnTransition::
# 9 "data/maps/FuchsiaCity_Frlg/scripts.pory"
# 6 "data/maps/FuchsiaCity_Frlg/scripts.pory"
# 10 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_FUCHSIA_CITY
# 11 "data/maps/FuchsiaCity_Frlg/scripts.pory"
# 7 "data/maps/FuchsiaCity_Frlg/scripts.pory"
# 12 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	goto_if_set FLAG_GOT_DOME_FOSSIL, FuchsiaCity_OnTransition_2
# 13 "data/maps/FuchsiaCity_Frlg/scripts.pory"
FuchsiaCity_OnTransition_1:
# 14 "data/maps/FuchsiaCity_Frlg/scripts.pory"
# 10 "data/maps/FuchsiaCity_Frlg/scripts.pory"
# 15 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	goto_if_unset FLAG_GOT_DOME_FOSSIL, FuchsiaCity_OnTransition_5
# 16 "data/maps/FuchsiaCity_Frlg/scripts.pory"
FuchsiaCity_OnTransition_4:
# 17 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	end
# 18 "data/maps/FuchsiaCity_Frlg/scripts.pory"

# 19 "data/maps/FuchsiaCity_Frlg/scripts.pory"
FuchsiaCity_OnTransition_2:
# 20 "data/maps/FuchsiaCity_Frlg/scripts.pory"
# 8 "data/maps/FuchsiaCity_Frlg/scripts.pory"
# 21 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	call FuchsiaCity_EventScript_SetOmanyteGfx
# 22 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	goto FuchsiaCity_OnTransition_1
# 23 "data/maps/FuchsiaCity_Frlg/scripts.pory"

# 24 "data/maps/FuchsiaCity_Frlg/scripts.pory"
FuchsiaCity_OnTransition_5:
# 25 "data/maps/FuchsiaCity_Frlg/scripts.pory"
# 11 "data/maps/FuchsiaCity_Frlg/scripts.pory"
# 26 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	call FuchsiaCity_EventScript_SetKabutoGfx
# 27 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	goto FuchsiaCity_OnTransition_4
# 28 "data/maps/FuchsiaCity_Frlg/scripts.pory"

# 29 "data/maps/FuchsiaCity_Frlg/scripts.pory"

# 30 "data/maps/FuchsiaCity_Frlg/scripts.pory"
FuchsiaCity_EventScript_SetOmanyteGfx::
# 31 "data/maps/FuchsiaCity_Frlg/scripts.pory"
# 17 "data/maps/FuchsiaCity_Frlg/scripts.pory"
# 32 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_OMANYTE
# 33 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	return
# 34 "data/maps/FuchsiaCity_Frlg/scripts.pory"

# 35 "data/maps/FuchsiaCity_Frlg/scripts.pory"

# 36 "data/maps/FuchsiaCity_Frlg/scripts.pory"
FuchsiaCity_EventScript_SetKabutoGfx::
# 37 "data/maps/FuchsiaCity_Frlg/scripts.pory"
# 22 "data/maps/FuchsiaCity_Frlg/scripts.pory"
# 38 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_KABUTO
# 39 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	return
# 40 "data/maps/FuchsiaCity_Frlg/scripts.pory"

# 41 "data/maps/FuchsiaCity_Frlg/scripts.pory"

# 42 "data/maps/FuchsiaCity_Frlg/scripts.pory"
FuchsiaCity_EventScript_LittleBoy::
# 43 "data/maps/FuchsiaCity_Frlg/scripts.pory"
# 27 "data/maps/FuchsiaCity_Frlg/scripts.pory"
# 44 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	msgbox FuchsiaCity_Text_DidYouTrySafariGame, MSGBOX_NPC
# 45 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	end
# 46 "data/maps/FuchsiaCity_Frlg/scripts.pory"

# 47 "data/maps/FuchsiaCity_Frlg/scripts.pory"

# 48 "data/maps/FuchsiaCity_Frlg/scripts.pory"
FuchsiaCity_EventScript_OldMan::
# 49 "data/maps/FuchsiaCity_Frlg/scripts.pory"
# 32 "data/maps/FuchsiaCity_Frlg/scripts.pory"
# 50 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	msgbox FuchsiaCity_Text_SafariZoneZooInFront, MSGBOX_NPC
# 51 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	end
# 52 "data/maps/FuchsiaCity_Frlg/scripts.pory"

# 53 "data/maps/FuchsiaCity_Frlg/scripts.pory"

# 54 "data/maps/FuchsiaCity_Frlg/scripts.pory"
FuchsiaCity_EventScript_Erik::
# 55 "data/maps/FuchsiaCity_Frlg/scripts.pory"
# 37 "data/maps/FuchsiaCity_Frlg/scripts.pory"
# 56 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	msgbox FuchsiaCity_Text_WheresSara, MSGBOX_NPC
# 57 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	end
# 58 "data/maps/FuchsiaCity_Frlg/scripts.pory"

# 59 "data/maps/FuchsiaCity_Frlg/scripts.pory"

# 60 "data/maps/FuchsiaCity_Frlg/scripts.pory"
FuchsiaCity_EventScript_Youngster::
# 61 "data/maps/FuchsiaCity_Frlg/scripts.pory"
# 42 "data/maps/FuchsiaCity_Frlg/scripts.pory"
# 62 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	msgbox FuchsiaCity_Text_ItemBallInThere, MSGBOX_NPC
# 63 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	end
# 64 "data/maps/FuchsiaCity_Frlg/scripts.pory"

# 65 "data/maps/FuchsiaCity_Frlg/scripts.pory"

# 66 "data/maps/FuchsiaCity_Frlg/scripts.pory"
FuchsiaCity_EventScript_Lass::
# 67 "data/maps/FuchsiaCity_Frlg/scripts.pory"
# 47 "data/maps/FuchsiaCity_Frlg/scripts.pory"
# 68 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	lock
# 69 "data/maps/FuchsiaCity_Frlg/scripts.pory"
# 48 "data/maps/FuchsiaCity_Frlg/scripts.pory"
# 70 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	faceplayer
# 71 "data/maps/FuchsiaCity_Frlg/scripts.pory"
# 49 "data/maps/FuchsiaCity_Frlg/scripts.pory"
# 72 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	famechecker FAMECHECKER_KOGA, 3
# 73 "data/maps/FuchsiaCity_Frlg/scripts.pory"
# 50 "data/maps/FuchsiaCity_Frlg/scripts.pory"
# 74 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	msgbox FuchsiaCity_Text_MyFatherIsGymLeader
# 75 "data/maps/FuchsiaCity_Frlg/scripts.pory"
# 51 "data/maps/FuchsiaCity_Frlg/scripts.pory"
# 76 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	release
# 77 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	end
# 78 "data/maps/FuchsiaCity_Frlg/scripts.pory"

# 79 "data/maps/FuchsiaCity_Frlg/scripts.pory"

# 80 "data/maps/FuchsiaCity_Frlg/scripts.pory"
FuchsiaCity_EventScript_CitySign::
# 81 "data/maps/FuchsiaCity_Frlg/scripts.pory"
# 56 "data/maps/FuchsiaCity_Frlg/scripts.pory"
# 82 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	msgbox FuchsiaCity_Text_CitySign, MSGBOX_SIGN
# 83 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	end
# 84 "data/maps/FuchsiaCity_Frlg/scripts.pory"

# 85 "data/maps/FuchsiaCity_Frlg/scripts.pory"

# 86 "data/maps/FuchsiaCity_Frlg/scripts.pory"
FuchsiaCity_EventScript_SafariZoneSign::
# 87 "data/maps/FuchsiaCity_Frlg/scripts.pory"
# 61 "data/maps/FuchsiaCity_Frlg/scripts.pory"
# 88 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	msgbox FuchsiaCity_Text_SafariZoneSign, MSGBOX_SIGN
# 89 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	end
# 90 "data/maps/FuchsiaCity_Frlg/scripts.pory"

# 91 "data/maps/FuchsiaCity_Frlg/scripts.pory"

# 92 "data/maps/FuchsiaCity_Frlg/scripts.pory"
FuchsiaCity_EventScript_SafariGameSign::
# 93 "data/maps/FuchsiaCity_Frlg/scripts.pory"
# 66 "data/maps/FuchsiaCity_Frlg/scripts.pory"
# 94 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	msgbox FuchsiaCity_Text_SafariGameSign, MSGBOX_SIGN
# 95 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	end
# 96 "data/maps/FuchsiaCity_Frlg/scripts.pory"

# 97 "data/maps/FuchsiaCity_Frlg/scripts.pory"

# 98 "data/maps/FuchsiaCity_Frlg/scripts.pory"
FuchsiaCity_EventScript_WardensHomeSign::
# 99 "data/maps/FuchsiaCity_Frlg/scripts.pory"
# 71 "data/maps/FuchsiaCity_Frlg/scripts.pory"
# 100 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	msgbox FuchsiaCity_Text_WardensHomeSign, MSGBOX_SIGN
# 101 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	end
# 102 "data/maps/FuchsiaCity_Frlg/scripts.pory"

# 103 "data/maps/FuchsiaCity_Frlg/scripts.pory"

# 104 "data/maps/FuchsiaCity_Frlg/scripts.pory"
FuchsiaCity_EventScript_SafariZoneOfficeSign::
# 105 "data/maps/FuchsiaCity_Frlg/scripts.pory"
# 76 "data/maps/FuchsiaCity_Frlg/scripts.pory"
# 106 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	msgbox FuchsiaCity_Text_SafariZoneOfficeSign, MSGBOX_SIGN
# 107 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	end
# 108 "data/maps/FuchsiaCity_Frlg/scripts.pory"

# 109 "data/maps/FuchsiaCity_Frlg/scripts.pory"

# 110 "data/maps/FuchsiaCity_Frlg/scripts.pory"
FuchsiaCity_EventScript_GymSign::
# 111 "data/maps/FuchsiaCity_Frlg/scripts.pory"
# 81 "data/maps/FuchsiaCity_Frlg/scripts.pory"
# 112 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	lockall
# 113 "data/maps/FuchsiaCity_Frlg/scripts.pory"
# 82 "data/maps/FuchsiaCity_Frlg/scripts.pory"
# 114 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	famechecker FAMECHECKER_KOGA, 0
# 115 "data/maps/FuchsiaCity_Frlg/scripts.pory"
# 83 "data/maps/FuchsiaCity_Frlg/scripts.pory"
# 116 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	msgbox FuchsiaCity_Text_GymSign
# 117 "data/maps/FuchsiaCity_Frlg/scripts.pory"
# 84 "data/maps/FuchsiaCity_Frlg/scripts.pory"
# 118 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	releaseall
# 119 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	end
# 120 "data/maps/FuchsiaCity_Frlg/scripts.pory"

# 121 "data/maps/FuchsiaCity_Frlg/scripts.pory"

# 122 "data/maps/FuchsiaCity_Frlg/scripts.pory"
FuchsiaCity_EventScript_ChanseySign::
# 123 "data/maps/FuchsiaCity_Frlg/scripts.pory"
# 89 "data/maps/FuchsiaCity_Frlg/scripts.pory"
# 124 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	lockall
# 125 "data/maps/FuchsiaCity_Frlg/scripts.pory"
# 90 "data/maps/FuchsiaCity_Frlg/scripts.pory"
# 126 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	setvar VAR_0x8004, SPECIES_CHANSEY
# 127 "data/maps/FuchsiaCity_Frlg/scripts.pory"
# 91 "data/maps/FuchsiaCity_Frlg/scripts.pory"
# 128 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	special SetSeenMon
# 129 "data/maps/FuchsiaCity_Frlg/scripts.pory"
# 92 "data/maps/FuchsiaCity_Frlg/scripts.pory"
# 130 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	showmonpic SPECIES_CHANSEY, 10, 3
# 131 "data/maps/FuchsiaCity_Frlg/scripts.pory"
# 93 "data/maps/FuchsiaCity_Frlg/scripts.pory"
# 132 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	msgbox FuchsiaCity_Text_ChanseySign
# 133 "data/maps/FuchsiaCity_Frlg/scripts.pory"
# 94 "data/maps/FuchsiaCity_Frlg/scripts.pory"
# 134 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	hidemonpic
# 135 "data/maps/FuchsiaCity_Frlg/scripts.pory"
# 95 "data/maps/FuchsiaCity_Frlg/scripts.pory"
# 136 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	releaseall
# 137 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	end
# 138 "data/maps/FuchsiaCity_Frlg/scripts.pory"

# 139 "data/maps/FuchsiaCity_Frlg/scripts.pory"

# 140 "data/maps/FuchsiaCity_Frlg/scripts.pory"
FuchsiaCity_EventScript_VoltorbSign::
# 141 "data/maps/FuchsiaCity_Frlg/scripts.pory"
# 100 "data/maps/FuchsiaCity_Frlg/scripts.pory"
# 142 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	lockall
# 143 "data/maps/FuchsiaCity_Frlg/scripts.pory"
# 101 "data/maps/FuchsiaCity_Frlg/scripts.pory"
# 144 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	setvar VAR_0x8004, SPECIES_VOLTORB
# 145 "data/maps/FuchsiaCity_Frlg/scripts.pory"
# 102 "data/maps/FuchsiaCity_Frlg/scripts.pory"
# 146 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	special SetSeenMon
# 147 "data/maps/FuchsiaCity_Frlg/scripts.pory"
# 103 "data/maps/FuchsiaCity_Frlg/scripts.pory"
# 148 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	showmonpic SPECIES_VOLTORB, 10, 3
# 149 "data/maps/FuchsiaCity_Frlg/scripts.pory"
# 104 "data/maps/FuchsiaCity_Frlg/scripts.pory"
# 150 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	msgbox FuchsiaCity_Text_VoltorbSign
# 151 "data/maps/FuchsiaCity_Frlg/scripts.pory"
# 105 "data/maps/FuchsiaCity_Frlg/scripts.pory"
# 152 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	hidemonpic
# 153 "data/maps/FuchsiaCity_Frlg/scripts.pory"
# 106 "data/maps/FuchsiaCity_Frlg/scripts.pory"
# 154 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	releaseall
# 155 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	end
# 156 "data/maps/FuchsiaCity_Frlg/scripts.pory"

# 157 "data/maps/FuchsiaCity_Frlg/scripts.pory"

# 158 "data/maps/FuchsiaCity_Frlg/scripts.pory"
FuchsiaCity_EventScript_KangaskhanSign::
# 159 "data/maps/FuchsiaCity_Frlg/scripts.pory"
# 111 "data/maps/FuchsiaCity_Frlg/scripts.pory"
# 160 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	lockall
# 161 "data/maps/FuchsiaCity_Frlg/scripts.pory"
# 112 "data/maps/FuchsiaCity_Frlg/scripts.pory"
# 162 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	setvar VAR_0x8004, SPECIES_KANGASKHAN
# 163 "data/maps/FuchsiaCity_Frlg/scripts.pory"
# 113 "data/maps/FuchsiaCity_Frlg/scripts.pory"
# 164 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	special SetSeenMon
# 165 "data/maps/FuchsiaCity_Frlg/scripts.pory"
# 114 "data/maps/FuchsiaCity_Frlg/scripts.pory"
# 166 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	showmonpic SPECIES_KANGASKHAN, 10, 3
# 167 "data/maps/FuchsiaCity_Frlg/scripts.pory"
# 115 "data/maps/FuchsiaCity_Frlg/scripts.pory"
# 168 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	msgbox FuchsiaCity_Text_KangaskhanSign
# 169 "data/maps/FuchsiaCity_Frlg/scripts.pory"
# 116 "data/maps/FuchsiaCity_Frlg/scripts.pory"
# 170 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	hidemonpic
# 171 "data/maps/FuchsiaCity_Frlg/scripts.pory"
# 117 "data/maps/FuchsiaCity_Frlg/scripts.pory"
# 172 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	releaseall
# 173 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	end
# 174 "data/maps/FuchsiaCity_Frlg/scripts.pory"

# 175 "data/maps/FuchsiaCity_Frlg/scripts.pory"

# 176 "data/maps/FuchsiaCity_Frlg/scripts.pory"
FuchsiaCity_EventScript_SlowpokeSign::
# 177 "data/maps/FuchsiaCity_Frlg/scripts.pory"
# 122 "data/maps/FuchsiaCity_Frlg/scripts.pory"
# 178 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	lockall
# 179 "data/maps/FuchsiaCity_Frlg/scripts.pory"
# 123 "data/maps/FuchsiaCity_Frlg/scripts.pory"
# 180 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	setvar VAR_0x8004, SPECIES_SLOWPOKE
# 181 "data/maps/FuchsiaCity_Frlg/scripts.pory"
# 124 "data/maps/FuchsiaCity_Frlg/scripts.pory"
# 182 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	special SetSeenMon
# 183 "data/maps/FuchsiaCity_Frlg/scripts.pory"
# 125 "data/maps/FuchsiaCity_Frlg/scripts.pory"
# 184 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	showmonpic SPECIES_SLOWPOKE, 10, 3
# 185 "data/maps/FuchsiaCity_Frlg/scripts.pory"
# 126 "data/maps/FuchsiaCity_Frlg/scripts.pory"
# 186 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	msgbox FuchsiaCity_Text_SlowpokeSign
# 187 "data/maps/FuchsiaCity_Frlg/scripts.pory"
# 127 "data/maps/FuchsiaCity_Frlg/scripts.pory"
# 188 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	hidemonpic
# 189 "data/maps/FuchsiaCity_Frlg/scripts.pory"
# 128 "data/maps/FuchsiaCity_Frlg/scripts.pory"
# 190 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	releaseall
# 191 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	end
# 192 "data/maps/FuchsiaCity_Frlg/scripts.pory"

# 193 "data/maps/FuchsiaCity_Frlg/scripts.pory"

# 194 "data/maps/FuchsiaCity_Frlg/scripts.pory"
FuchsiaCity_EventScript_LaprasSign::
# 195 "data/maps/FuchsiaCity_Frlg/scripts.pory"
# 133 "data/maps/FuchsiaCity_Frlg/scripts.pory"
# 196 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	lockall
# 197 "data/maps/FuchsiaCity_Frlg/scripts.pory"
# 134 "data/maps/FuchsiaCity_Frlg/scripts.pory"
# 198 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	setvar VAR_0x8004, SPECIES_LAPRAS
# 199 "data/maps/FuchsiaCity_Frlg/scripts.pory"
# 135 "data/maps/FuchsiaCity_Frlg/scripts.pory"
# 200 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	special SetSeenMon
# 201 "data/maps/FuchsiaCity_Frlg/scripts.pory"
# 136 "data/maps/FuchsiaCity_Frlg/scripts.pory"
# 202 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	showmonpic SPECIES_LAPRAS, 10, 3
# 203 "data/maps/FuchsiaCity_Frlg/scripts.pory"
# 137 "data/maps/FuchsiaCity_Frlg/scripts.pory"
# 204 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	msgbox FuchsiaCity_Text_LaprasSign
# 205 "data/maps/FuchsiaCity_Frlg/scripts.pory"
# 138 "data/maps/FuchsiaCity_Frlg/scripts.pory"
# 206 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	hidemonpic
# 207 "data/maps/FuchsiaCity_Frlg/scripts.pory"
# 139 "data/maps/FuchsiaCity_Frlg/scripts.pory"
# 208 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	releaseall
# 209 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	end
# 210 "data/maps/FuchsiaCity_Frlg/scripts.pory"

# 211 "data/maps/FuchsiaCity_Frlg/scripts.pory"

# 212 "data/maps/FuchsiaCity_Frlg/scripts.pory"
FuchsiaCity_EventScript_FossilMonSign::
# 213 "data/maps/FuchsiaCity_Frlg/scripts.pory"
# 144 "data/maps/FuchsiaCity_Frlg/scripts.pory"
# 214 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	lockall
# 215 "data/maps/FuchsiaCity_Frlg/scripts.pory"
# 145 "data/maps/FuchsiaCity_Frlg/scripts.pory"
# 216 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	goto_if_set FLAG_GOT_DOME_FOSSIL, FuchsiaCity_EventScript_FossilMonSign_2
# 217 "data/maps/FuchsiaCity_Frlg/scripts.pory"
FuchsiaCity_EventScript_FossilMonSign_1:
# 218 "data/maps/FuchsiaCity_Frlg/scripts.pory"
# 148 "data/maps/FuchsiaCity_Frlg/scripts.pory"
# 219 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	setvar VAR_0x8004, SPECIES_KABUTO
# 220 "data/maps/FuchsiaCity_Frlg/scripts.pory"
# 149 "data/maps/FuchsiaCity_Frlg/scripts.pory"
# 221 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	special SetSeenMon
# 222 "data/maps/FuchsiaCity_Frlg/scripts.pory"
# 150 "data/maps/FuchsiaCity_Frlg/scripts.pory"
# 223 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	showmonpic SPECIES_KABUTO, 10, 3
# 224 "data/maps/FuchsiaCity_Frlg/scripts.pory"
# 151 "data/maps/FuchsiaCity_Frlg/scripts.pory"
# 225 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	msgbox FuchsiaCity_Text_KabutoSign
# 226 "data/maps/FuchsiaCity_Frlg/scripts.pory"
# 152 "data/maps/FuchsiaCity_Frlg/scripts.pory"
# 227 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	hidemonpic
# 228 "data/maps/FuchsiaCity_Frlg/scripts.pory"
# 153 "data/maps/FuchsiaCity_Frlg/scripts.pory"
# 229 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	releaseall
# 230 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	end
# 231 "data/maps/FuchsiaCity_Frlg/scripts.pory"

# 232 "data/maps/FuchsiaCity_Frlg/scripts.pory"
FuchsiaCity_EventScript_FossilMonSign_2:
# 233 "data/maps/FuchsiaCity_Frlg/scripts.pory"
# 146 "data/maps/FuchsiaCity_Frlg/scripts.pory"
# 234 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	goto FuchsiaCity_EventScript_OmanyteSign
# 235 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	goto FuchsiaCity_EventScript_FossilMonSign_1
# 236 "data/maps/FuchsiaCity_Frlg/scripts.pory"

# 237 "data/maps/FuchsiaCity_Frlg/scripts.pory"

# 238 "data/maps/FuchsiaCity_Frlg/scripts.pory"
FuchsiaCity_EventScript_OmanyteSign::
# 239 "data/maps/FuchsiaCity_Frlg/scripts.pory"
# 158 "data/maps/FuchsiaCity_Frlg/scripts.pory"
# 240 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	setvar VAR_0x8004, SPECIES_OMANYTE
# 241 "data/maps/FuchsiaCity_Frlg/scripts.pory"
# 159 "data/maps/FuchsiaCity_Frlg/scripts.pory"
# 242 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	special SetSeenMon
# 243 "data/maps/FuchsiaCity_Frlg/scripts.pory"
# 160 "data/maps/FuchsiaCity_Frlg/scripts.pory"
# 244 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	showmonpic SPECIES_OMANYTE, 10, 3
# 245 "data/maps/FuchsiaCity_Frlg/scripts.pory"
# 161 "data/maps/FuchsiaCity_Frlg/scripts.pory"
# 246 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	msgbox FuchsiaCity_Text_OmanyteSign
# 247 "data/maps/FuchsiaCity_Frlg/scripts.pory"
# 162 "data/maps/FuchsiaCity_Frlg/scripts.pory"
# 248 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	hidemonpic
# 249 "data/maps/FuchsiaCity_Frlg/scripts.pory"
# 163 "data/maps/FuchsiaCity_Frlg/scripts.pory"
# 250 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	releaseall
# 251 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	end
# 252 "data/maps/FuchsiaCity_Frlg/scripts.pory"

# 253 "data/maps/FuchsiaCity_Frlg/scripts.pory"

# 254 "data/maps/FuchsiaCity_Frlg/scripts.pory"
FuchsiaCity_Text_DidYouTrySafariGame::
# 255 "data/maps/FuchsiaCity_Frlg/scripts.pory"
# 167 "data/maps/FuchsiaCity_Frlg/scripts.pory"
# 256 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	.string "Did you try the SAFARI GAME?\p"
# 257 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	.string "There are some rare POKéMON that\n"
# 258 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	.string "can only be caught there.$"
# 259 "data/maps/FuchsiaCity_Frlg/scripts.pory"

# 260 "data/maps/FuchsiaCity_Frlg/scripts.pory"
FuchsiaCity_Text_SafariZoneZooInFront::
# 261 "data/maps/FuchsiaCity_Frlg/scripts.pory"
# 173 "data/maps/FuchsiaCity_Frlg/scripts.pory"
# 262 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	.string "The SAFARI ZONE has a zoo in front\n"
# 263 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	.string "of the entrance.\p"
# 264 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	.string "Out back is the SAFARI GAME for\n"
# 265 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	.string "catching POKéMON.$"
# 266 "data/maps/FuchsiaCity_Frlg/scripts.pory"

# 267 "data/maps/FuchsiaCity_Frlg/scripts.pory"
FuchsiaCity_Text_WheresSara::
# 268 "data/maps/FuchsiaCity_Frlg/scripts.pory"
# 180 "data/maps/FuchsiaCity_Frlg/scripts.pory"
# 269 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	.string "ERIK: Where's SARA?\n"
# 270 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	.string "I said I'd meet her here.$"
# 271 "data/maps/FuchsiaCity_Frlg/scripts.pory"

# 272 "data/maps/FuchsiaCity_Frlg/scripts.pory"
FuchsiaCity_Text_ItemBallInThere::
# 273 "data/maps/FuchsiaCity_Frlg/scripts.pory"
# 185 "data/maps/FuchsiaCity_Frlg/scripts.pory"
# 274 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	.string "That item ball in there…\n"
# 275 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	.string "Were you wanting that?\p"
# 276 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	.string "Me, too!\n"
# 277 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	.string "…Huh? That's a POKéMON?$"
# 278 "data/maps/FuchsiaCity_Frlg/scripts.pory"

# 279 "data/maps/FuchsiaCity_Frlg/scripts.pory"
FuchsiaCity_Text_CitySign::
# 280 "data/maps/FuchsiaCity_Frlg/scripts.pory"
# 192 "data/maps/FuchsiaCity_Frlg/scripts.pory"
# 281 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	.string "FUCHSIA CITY\n"
# 282 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	.string "Behold! It's Passion Pink!$"
# 283 "data/maps/FuchsiaCity_Frlg/scripts.pory"

# 284 "data/maps/FuchsiaCity_Frlg/scripts.pory"
FuchsiaCity_Text_SafariZoneSign::
# 285 "data/maps/FuchsiaCity_Frlg/scripts.pory"
# 197 "data/maps/FuchsiaCity_Frlg/scripts.pory"
# 286 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	.string "POKéMON PARADISE\n"
# 287 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	.string "SAFARI ZONE$"
# 288 "data/maps/FuchsiaCity_Frlg/scripts.pory"

# 289 "data/maps/FuchsiaCity_Frlg/scripts.pory"
FuchsiaCity_Text_SafariGameSign::
# 290 "data/maps/FuchsiaCity_Frlg/scripts.pory"
# 202 "data/maps/FuchsiaCity_Frlg/scripts.pory"
# 291 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	.string "SAFARI GAME\n"
# 292 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	.string "POKéMON-U-CATCH!$"
# 293 "data/maps/FuchsiaCity_Frlg/scripts.pory"

# 294 "data/maps/FuchsiaCity_Frlg/scripts.pory"
FuchsiaCity_Text_WardensHomeSign::
# 295 "data/maps/FuchsiaCity_Frlg/scripts.pory"
# 207 "data/maps/FuchsiaCity_Frlg/scripts.pory"
# 296 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	.string "SAFARI ZONE\n"
# 297 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	.string "WARDEN'S HOME$"
# 298 "data/maps/FuchsiaCity_Frlg/scripts.pory"

# 299 "data/maps/FuchsiaCity_Frlg/scripts.pory"
FuchsiaCity_Text_SafariZoneOfficeSign::
# 300 "data/maps/FuchsiaCity_Frlg/scripts.pory"
# 212 "data/maps/FuchsiaCity_Frlg/scripts.pory"
# 301 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	.string "POKéMON PARADISE!\n"
# 302 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	.string "Welcome to the SAFARI ZONE!\l"
# 303 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	.string "SAFARI ZONE OFFICE$"
# 304 "data/maps/FuchsiaCity_Frlg/scripts.pory"

# 305 "data/maps/FuchsiaCity_Frlg/scripts.pory"
FuchsiaCity_Text_GymSign::
# 306 "data/maps/FuchsiaCity_Frlg/scripts.pory"
# 218 "data/maps/FuchsiaCity_Frlg/scripts.pory"
# 307 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	.string "FUCHSIA CITY POKéMON GYM\n"
# 308 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	.string "LEADER: KOGA\l"
# 309 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	.string "The Poisonous Ninja Master$"
# 310 "data/maps/FuchsiaCity_Frlg/scripts.pory"

# 311 "data/maps/FuchsiaCity_Frlg/scripts.pory"
FuchsiaCity_Text_ChanseySign::
# 312 "data/maps/FuchsiaCity_Frlg/scripts.pory"
# 224 "data/maps/FuchsiaCity_Frlg/scripts.pory"
# 313 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	.string "Name: CHANSEY\n"
# 314 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	.string "Catching one is all up to chance.$"
# 315 "data/maps/FuchsiaCity_Frlg/scripts.pory"

# 316 "data/maps/FuchsiaCity_Frlg/scripts.pory"
FuchsiaCity_Text_VoltorbSign::
# 317 "data/maps/FuchsiaCity_Frlg/scripts.pory"
# 229 "data/maps/FuchsiaCity_Frlg/scripts.pory"
# 318 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	.string "Name: VOLTORB\n"
# 319 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	.string "The very image of a POKé BALL.$"
# 320 "data/maps/FuchsiaCity_Frlg/scripts.pory"

# 321 "data/maps/FuchsiaCity_Frlg/scripts.pory"
FuchsiaCity_Text_KangaskhanSign::
# 322 "data/maps/FuchsiaCity_Frlg/scripts.pory"
# 234 "data/maps/FuchsiaCity_Frlg/scripts.pory"
# 323 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	.string "Name: KANGASKHAN\p"
# 324 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	.string "A maternal POKéMON that raises its\n"
# 325 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	.string "young in a pouch on its belly.$"
# 326 "data/maps/FuchsiaCity_Frlg/scripts.pory"

# 327 "data/maps/FuchsiaCity_Frlg/scripts.pory"
FuchsiaCity_Text_SlowpokeSign::
# 328 "data/maps/FuchsiaCity_Frlg/scripts.pory"
# 240 "data/maps/FuchsiaCity_Frlg/scripts.pory"
# 329 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	.string "Name: SLOWPOKE\n"
# 330 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	.string "Friendly and very slow moving.$"
# 331 "data/maps/FuchsiaCity_Frlg/scripts.pory"

# 332 "data/maps/FuchsiaCity_Frlg/scripts.pory"
FuchsiaCity_Text_LaprasSign::
# 333 "data/maps/FuchsiaCity_Frlg/scripts.pory"
# 245 "data/maps/FuchsiaCity_Frlg/scripts.pory"
# 334 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	.string "Name: LAPRAS\n"
# 335 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	.string "AKA the king of the seas.$"
# 336 "data/maps/FuchsiaCity_Frlg/scripts.pory"

# 337 "data/maps/FuchsiaCity_Frlg/scripts.pory"
FuchsiaCity_Text_OmanyteSign::
# 338 "data/maps/FuchsiaCity_Frlg/scripts.pory"
# 250 "data/maps/FuchsiaCity_Frlg/scripts.pory"
# 339 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	.string "Name: OMANYTE\n"
# 340 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	.string "An extremely rare POKéMON that was\l"
# 341 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	.string "regenerated from a fossil.$"
# 342 "data/maps/FuchsiaCity_Frlg/scripts.pory"

# 343 "data/maps/FuchsiaCity_Frlg/scripts.pory"
FuchsiaCity_Text_KabutoSign::
# 344 "data/maps/FuchsiaCity_Frlg/scripts.pory"
# 256 "data/maps/FuchsiaCity_Frlg/scripts.pory"
# 345 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	.string "Name: KABUTO\n"
# 346 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	.string "An extremely rare POKéMON that was\l"
# 347 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	.string "regenerated from a fossil.$"
# 348 "data/maps/FuchsiaCity_Frlg/scripts.pory"

# 349 "data/maps/FuchsiaCity_Frlg/scripts.pory"
FuchsiaCity_Text_Ellipsis::
# 350 "data/maps/FuchsiaCity_Frlg/scripts.pory"
# 262 "data/maps/FuchsiaCity_Frlg/scripts.pory"
# 351 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	.string "……$"
# 352 "data/maps/FuchsiaCity_Frlg/scripts.pory"

# 353 "data/maps/FuchsiaCity_Frlg/scripts.pory"
Text_SubstituteTeach::
# 354 "data/maps/FuchsiaCity_Frlg/scripts.pory"
# 266 "data/maps/FuchsiaCity_Frlg/scripts.pory"
# 355 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	.string "Aww, I wish I was a KANGASKHAN\n"
# 356 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	.string "baby.\p"
# 357 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	.string "I'd love to be a substitute for the\n"
# 358 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	.string "baby…\p"
# 359 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	.string "And snuggle in the mother\n"
# 360 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	.string "KANGASKHAN's belly pouch.\p"
# 361 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	.string "But only POKéMON can use the\n"
# 362 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	.string "technique SUBSTITUTE…\p"
# 363 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	.string "Want me to teach SUBSTITUTE to\n"
# 364 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	.string "one of your POKéMON?$"
# 365 "data/maps/FuchsiaCity_Frlg/scripts.pory"

# 366 "data/maps/FuchsiaCity_Frlg/scripts.pory"
Text_SubstituteDeclined::
# 367 "data/maps/FuchsiaCity_Frlg/scripts.pory"
# 279 "data/maps/FuchsiaCity_Frlg/scripts.pory"
# 368 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	.string "Oh, really?\n"
# 369 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	.string "SUBSTITUTE seems so fun…$"
# 370 "data/maps/FuchsiaCity_Frlg/scripts.pory"

# 371 "data/maps/FuchsiaCity_Frlg/scripts.pory"
Text_SubstituteWhichMon::
# 372 "data/maps/FuchsiaCity_Frlg/scripts.pory"
# 284 "data/maps/FuchsiaCity_Frlg/scripts.pory"
# 373 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	.string "Which POKéMON wants to learn\n"
# 374 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	.string "SUBSTITUTE?$"
# 375 "data/maps/FuchsiaCity_Frlg/scripts.pory"

# 376 "data/maps/FuchsiaCity_Frlg/scripts.pory"
Text_SubstituteTaught::
# 377 "data/maps/FuchsiaCity_Frlg/scripts.pory"
# 289 "data/maps/FuchsiaCity_Frlg/scripts.pory"
# 378 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	.string "Boy, what I'd give to crawl inside\n"
# 379 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	.string "a KANGASKHAN belly pouch…$"
# 380 "data/maps/FuchsiaCity_Frlg/scripts.pory"

# 381 "data/maps/FuchsiaCity_Frlg/scripts.pory"
FuchsiaCity_Text_MyFatherIsGymLeader::
# 382 "data/maps/FuchsiaCity_Frlg/scripts.pory"
# 294 "data/maps/FuchsiaCity_Frlg/scripts.pory"
# 383 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	.string "My father is the GYM LEADER of\n"
# 384 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	.string "this town.\p"
# 385 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	.string "I'm training to use POISON POKéMON\n"
# 386 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	.string "as well as my father.$"
