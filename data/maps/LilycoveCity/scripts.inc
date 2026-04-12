# 1 "data/maps/LilycoveCity/scripts.pory"

# 2 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_MapScripts::
# 3 "data/maps/LilycoveCity/scripts.pory"
# 2 "data/maps/LilycoveCity/scripts.pory"
# 4 "data/maps/LilycoveCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LilycoveCity_OnTransition
# 5 "data/maps/LilycoveCity/scripts.pory"
# 3 "data/maps/LilycoveCity/scripts.pory"
# 6 "data/maps/LilycoveCity/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, LilycoveCity_OnLoad
# 7 "data/maps/LilycoveCity/scripts.pory"
	.byte 0
# 8 "data/maps/LilycoveCity/scripts.pory"

# 9 "data/maps/LilycoveCity/scripts.pory"

# 10 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_OnTransition::
# 11 "data/maps/LilycoveCity/scripts.pory"
# 7 "data/maps/LilycoveCity/scripts.pory"
# 12 "data/maps/LilycoveCity/scripts.pory"
	setflag FLAG_VISITED_LILYCOVE_CITY
# 13 "data/maps/LilycoveCity/scripts.pory"
# 8 "data/maps/LilycoveCity/scripts.pory"
# 14 "data/maps/LilycoveCity/scripts.pory"
	setvar VAR_CONTEST_HALL_STATE, 0
# 15 "data/maps/LilycoveCity/scripts.pory"
# 9 "data/maps/LilycoveCity/scripts.pory"
# 16 "data/maps/LilycoveCity/scripts.pory"
	setflag FLAG_HIDE_LILYCOVE_CONTEST_HALL_REPORTER
# 17 "data/maps/LilycoveCity/scripts.pory"
# 10 "data/maps/LilycoveCity/scripts.pory"
# 18 "data/maps/LilycoveCity/scripts.pory"
	goto_if_set FLAG_SYS_WEATHER_CTRL, LilycoveCity_OnTransition_2
# 19 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_OnTransition_1:
# 20 "data/maps/LilycoveCity/scripts.pory"
# 13 "data/maps/LilycoveCity/scripts.pory"
# 21 "data/maps/LilycoveCity/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 22 "data/maps/LilycoveCity/scripts.pory"
	end
# 23 "data/maps/LilycoveCity/scripts.pory"

# 24 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_OnTransition_2:
# 25 "data/maps/LilycoveCity/scripts.pory"
# 11 "data/maps/LilycoveCity/scripts.pory"
# 26 "data/maps/LilycoveCity/scripts.pory"
	call Common_EventScript_SetAbnormalWeather
# 27 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_OnTransition_1
# 28 "data/maps/LilycoveCity/scripts.pory"

# 29 "data/maps/LilycoveCity/scripts.pory"

# 30 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_OnLoad::
# 31 "data/maps/LilycoveCity/scripts.pory"
# 18 "data/maps/LilycoveCity/scripts.pory"
# 32 "data/maps/LilycoveCity/scripts.pory"
	goto_if_unset FLAG_TEAM_AQUA_ESCAPED_IN_SUBMARINE, LilycoveCity_OnLoad_2
# 33 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_OnLoad_1:
# 34 "data/maps/LilycoveCity/scripts.pory"
	end
# 35 "data/maps/LilycoveCity/scripts.pory"

# 36 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_OnLoad_2:
# 37 "data/maps/LilycoveCity/scripts.pory"
# 19 "data/maps/LilycoveCity/scripts.pory"
# 38 "data/maps/LilycoveCity/scripts.pory"
	call LilycoveCity_EventScript_SetWailmerMetatiles
# 39 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_OnLoad_1
# 40 "data/maps/LilycoveCity/scripts.pory"

# 41 "data/maps/LilycoveCity/scripts.pory"

# 42 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_SetWailmerMetatiles::
# 43 "data/maps/LilycoveCity/scripts.pory"
# 25 "data/maps/LilycoveCity/scripts.pory"
# 44 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 76, 12, METATILE_Lilycove_Wailmer0, TRUE
# 45 "data/maps/LilycoveCity/scripts.pory"
# 26 "data/maps/LilycoveCity/scripts.pory"
# 46 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 77, 12, METATILE_Lilycove_Wailmer1, TRUE
# 47 "data/maps/LilycoveCity/scripts.pory"
# 27 "data/maps/LilycoveCity/scripts.pory"
# 48 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 76, 13, METATILE_Lilycove_Wailmer2, TRUE
# 49 "data/maps/LilycoveCity/scripts.pory"
# 28 "data/maps/LilycoveCity/scripts.pory"
# 50 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 77, 13, METATILE_Lilycove_Wailmer3, TRUE
# 51 "data/maps/LilycoveCity/scripts.pory"
# 29 "data/maps/LilycoveCity/scripts.pory"
# 52 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 76, 14, METATILE_Lilycove_Wailmer0_Alt, TRUE
# 53 "data/maps/LilycoveCity/scripts.pory"
# 30 "data/maps/LilycoveCity/scripts.pory"
# 54 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 77, 14, METATILE_Lilycove_Wailmer1_Alt, TRUE
# 55 "data/maps/LilycoveCity/scripts.pory"
# 31 "data/maps/LilycoveCity/scripts.pory"
# 56 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 76, 15, METATILE_Lilycove_Wailmer2, TRUE
# 57 "data/maps/LilycoveCity/scripts.pory"
# 32 "data/maps/LilycoveCity/scripts.pory"
# 58 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 77, 15, METATILE_Lilycove_Wailmer3, TRUE
# 59 "data/maps/LilycoveCity/scripts.pory"
# 33 "data/maps/LilycoveCity/scripts.pory"
# 60 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 77, 16, METATILE_Lilycove_Wailmer0_Alt, TRUE
# 61 "data/maps/LilycoveCity/scripts.pory"
# 34 "data/maps/LilycoveCity/scripts.pory"
# 62 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 78, 16, METATILE_Lilycove_Wailmer1_Alt, TRUE
# 63 "data/maps/LilycoveCity/scripts.pory"
# 35 "data/maps/LilycoveCity/scripts.pory"
# 64 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 77, 17, METATILE_Lilycove_Wailmer2, TRUE
# 65 "data/maps/LilycoveCity/scripts.pory"
# 36 "data/maps/LilycoveCity/scripts.pory"
# 66 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 78, 17, METATILE_Lilycove_Wailmer3, TRUE
# 67 "data/maps/LilycoveCity/scripts.pory"
	return
# 68 "data/maps/LilycoveCity/scripts.pory"

# 69 "data/maps/LilycoveCity/scripts.pory"

# 70 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_BerryGentleman::
# 71 "data/maps/LilycoveCity/scripts.pory"
# 41 "data/maps/LilycoveCity/scripts.pory"
# 72 "data/maps/LilycoveCity/scripts.pory"
	lock
# 73 "data/maps/LilycoveCity/scripts.pory"
# 42 "data/maps/LilycoveCity/scripts.pory"
# 74 "data/maps/LilycoveCity/scripts.pory"
	faceplayer
# 75 "data/maps/LilycoveCity/scripts.pory"
# 43 "data/maps/LilycoveCity/scripts.pory"
# 76 "data/maps/LilycoveCity/scripts.pory"
	dotimebasedevents
# 77 "data/maps/LilycoveCity/scripts.pory"
# 44 "data/maps/LilycoveCity/scripts.pory"
# 78 "data/maps/LilycoveCity/scripts.pory"
	goto_if_set FLAG_DAILY_LILYCOVE_RECEIVED_BERRY, LilycoveCity_EventScript_BerryGentleman_2
# 79 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_BerryGentleman_1:
# 80 "data/maps/LilycoveCity/scripts.pory"
# 47 "data/maps/LilycoveCity/scripts.pory"
# 81 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_BerrySuitsYou, MSGBOX_DEFAULT
# 82 "data/maps/LilycoveCity/scripts.pory"
# 48 "data/maps/LilycoveCity/scripts.pory"
# 83 "data/maps/LilycoveCity/scripts.pory"
	random 10
# 84 "data/maps/LilycoveCity/scripts.pory"
# 49 "data/maps/LilycoveCity/scripts.pory"
# 85 "data/maps/LilycoveCity/scripts.pory"
	addvar VAR_RESULT, FIRST_BERRY_INDEX
# 86 "data/maps/LilycoveCity/scripts.pory"
# 50 "data/maps/LilycoveCity/scripts.pory"
# 87 "data/maps/LilycoveCity/scripts.pory"
	giveitem VAR_RESULT
# 88 "data/maps/LilycoveCity/scripts.pory"
# 51 "data/maps/LilycoveCity/scripts.pory"
# 89 "data/maps/LilycoveCity/scripts.pory"
	compare VAR_RESULT, FALSE
# 90 "data/maps/LilycoveCity/scripts.pory"
	goto_if_eq LilycoveCity_EventScript_BerryGentleman_5
# 91 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_BerryGentleman_4:
# 92 "data/maps/LilycoveCity/scripts.pory"
# 54 "data/maps/LilycoveCity/scripts.pory"
# 93 "data/maps/LilycoveCity/scripts.pory"
	setflag FLAG_DAILY_LILYCOVE_RECEIVED_BERRY
# 94 "data/maps/LilycoveCity/scripts.pory"
# 55 "data/maps/LilycoveCity/scripts.pory"
# 95 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_BecauseYoureTrainer, MSGBOX_DEFAULT
# 96 "data/maps/LilycoveCity/scripts.pory"
# 56 "data/maps/LilycoveCity/scripts.pory"
# 97 "data/maps/LilycoveCity/scripts.pory"
	release
# 98 "data/maps/LilycoveCity/scripts.pory"
	end
# 99 "data/maps/LilycoveCity/scripts.pory"

# 100 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_BerryGentleman_2:
# 101 "data/maps/LilycoveCity/scripts.pory"
# 45 "data/maps/LilycoveCity/scripts.pory"
# 102 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_ReceivedBerry
# 103 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_BerryGentleman_1
# 104 "data/maps/LilycoveCity/scripts.pory"

# 105 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_BerryGentleman_5:
# 106 "data/maps/LilycoveCity/scripts.pory"
# 52 "data/maps/LilycoveCity/scripts.pory"
# 107 "data/maps/LilycoveCity/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
# 108 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_BerryGentleman_4
# 109 "data/maps/LilycoveCity/scripts.pory"

# 110 "data/maps/LilycoveCity/scripts.pory"

# 111 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_ReceivedBerry::
# 112 "data/maps/LilycoveCity/scripts.pory"
# 61 "data/maps/LilycoveCity/scripts.pory"
# 113 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_PokeblocksSuitPokemon, MSGBOX_DEFAULT
# 114 "data/maps/LilycoveCity/scripts.pory"
# 62 "data/maps/LilycoveCity/scripts.pory"
# 115 "data/maps/LilycoveCity/scripts.pory"
	release
# 116 "data/maps/LilycoveCity/scripts.pory"
	end
# 117 "data/maps/LilycoveCity/scripts.pory"

# 118 "data/maps/LilycoveCity/scripts.pory"

# 119 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Man3::
# 120 "data/maps/LilycoveCity/scripts.pory"
# 67 "data/maps/LilycoveCity/scripts.pory"
# 121 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_ContestHallInTown, MSGBOX_NPC
# 122 "data/maps/LilycoveCity/scripts.pory"
	end
# 123 "data/maps/LilycoveCity/scripts.pory"

# 124 "data/maps/LilycoveCity/scripts.pory"

# 125 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Girl::
# 126 "data/maps/LilycoveCity/scripts.pory"
# 72 "data/maps/LilycoveCity/scripts.pory"
# 127 "data/maps/LilycoveCity/scripts.pory"
	lock
# 128 "data/maps/LilycoveCity/scripts.pory"
# 73 "data/maps/LilycoveCity/scripts.pory"
# 129 "data/maps/LilycoveCity/scripts.pory"
	faceplayer
# 130 "data/maps/LilycoveCity/scripts.pory"
# 74 "data/maps/LilycoveCity/scripts.pory"
# 131 "data/maps/LilycoveCity/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, LilycoveCity_EventScript_Girl_2
# 132 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Girl_1:
# 133 "data/maps/LilycoveCity/scripts.pory"
# 77 "data/maps/LilycoveCity/scripts.pory"
# 134 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_StrangeCaveInCove, MSGBOX_DEFAULT
# 135 "data/maps/LilycoveCity/scripts.pory"
# 78 "data/maps/LilycoveCity/scripts.pory"
# 136 "data/maps/LilycoveCity/scripts.pory"
	release
# 137 "data/maps/LilycoveCity/scripts.pory"
	end
# 138 "data/maps/LilycoveCity/scripts.pory"

# 139 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Girl_2:
# 140 "data/maps/LilycoveCity/scripts.pory"
# 75 "data/maps/LilycoveCity/scripts.pory"
# 141 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_GirlAquaGone
# 142 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_Girl_1
# 143 "data/maps/LilycoveCity/scripts.pory"

# 144 "data/maps/LilycoveCity/scripts.pory"

# 145 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_GirlAquaGone::
# 146 "data/maps/LilycoveCity/scripts.pory"
# 83 "data/maps/LilycoveCity/scripts.pory"
# 147 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_GoingToMoveDeleterForHMs, MSGBOX_DEFAULT
# 148 "data/maps/LilycoveCity/scripts.pory"
# 84 "data/maps/LilycoveCity/scripts.pory"
# 149 "data/maps/LilycoveCity/scripts.pory"
	release
# 150 "data/maps/LilycoveCity/scripts.pory"
	end
# 151 "data/maps/LilycoveCity/scripts.pory"

# 152 "data/maps/LilycoveCity/scripts.pory"

# 153 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_RichBoy::
# 154 "data/maps/LilycoveCity/scripts.pory"
# 89 "data/maps/LilycoveCity/scripts.pory"
# 155 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_ImFromKanto, MSGBOX_NPC
# 156 "data/maps/LilycoveCity/scripts.pory"
	end
# 157 "data/maps/LilycoveCity/scripts.pory"

# 158 "data/maps/LilycoveCity/scripts.pory"

# 159 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Sailor2::
# 160 "data/maps/LilycoveCity/scripts.pory"
# 94 "data/maps/LilycoveCity/scripts.pory"
# 161 "data/maps/LilycoveCity/scripts.pory"
	lock
# 162 "data/maps/LilycoveCity/scripts.pory"
# 95 "data/maps/LilycoveCity/scripts.pory"
# 163 "data/maps/LilycoveCity/scripts.pory"
	faceplayer
# 164 "data/maps/LilycoveCity/scripts.pory"
# 96 "data/maps/LilycoveCity/scripts.pory"
# 165 "data/maps/LilycoveCity/scripts.pory"
	goto_if_set FLAG_TEAM_AQUA_ESCAPED_IN_SUBMARINE, LilycoveCity_EventScript_Sailor2_2
# 166 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Sailor2_1:
# 167 "data/maps/LilycoveCity/scripts.pory"
# 99 "data/maps/LilycoveCity/scripts.pory"
# 168 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_TeamAquaBeenTrainingWailmer, MSGBOX_DEFAULT
# 169 "data/maps/LilycoveCity/scripts.pory"
# 100 "data/maps/LilycoveCity/scripts.pory"
# 170 "data/maps/LilycoveCity/scripts.pory"
	release
# 171 "data/maps/LilycoveCity/scripts.pory"
	end
# 172 "data/maps/LilycoveCity/scripts.pory"

# 173 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Sailor2_2:
# 174 "data/maps/LilycoveCity/scripts.pory"
# 97 "data/maps/LilycoveCity/scripts.pory"
# 175 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_Sailor2AquaGone
# 176 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_Sailor2_1
# 177 "data/maps/LilycoveCity/scripts.pory"

# 178 "data/maps/LilycoveCity/scripts.pory"

# 179 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Sailor2AquaGone::
# 180 "data/maps/LilycoveCity/scripts.pory"
# 105 "data/maps/LilycoveCity/scripts.pory"
# 181 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_SomeonePuntedTeamAquaOut, MSGBOX_DEFAULT
# 182 "data/maps/LilycoveCity/scripts.pory"
# 106 "data/maps/LilycoveCity/scripts.pory"
# 183 "data/maps/LilycoveCity/scripts.pory"
	release
# 184 "data/maps/LilycoveCity/scripts.pory"
	end
# 185 "data/maps/LilycoveCity/scripts.pory"

# 186 "data/maps/LilycoveCity/scripts.pory"

# 187 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Woman2::
# 188 "data/maps/LilycoveCity/scripts.pory"
# 111 "data/maps/LilycoveCity/scripts.pory"
# 189 "data/maps/LilycoveCity/scripts.pory"
	lock
# 190 "data/maps/LilycoveCity/scripts.pory"
# 112 "data/maps/LilycoveCity/scripts.pory"
# 191 "data/maps/LilycoveCity/scripts.pory"
	faceplayer
# 192 "data/maps/LilycoveCity/scripts.pory"
# 113 "data/maps/LilycoveCity/scripts.pory"
# 193 "data/maps/LilycoveCity/scripts.pory"
	goto_if_set FLAG_TEAM_AQUA_ESCAPED_IN_SUBMARINE, LilycoveCity_EventScript_Woman2_2
# 194 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Woman2_1:
# 195 "data/maps/LilycoveCity/scripts.pory"
# 116 "data/maps/LilycoveCity/scripts.pory"
# 196 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_SomeoneStoleMyPokemon, MSGBOX_DEFAULT
# 197 "data/maps/LilycoveCity/scripts.pory"
# 117 "data/maps/LilycoveCity/scripts.pory"
# 198 "data/maps/LilycoveCity/scripts.pory"
	release
# 199 "data/maps/LilycoveCity/scripts.pory"
	end
# 200 "data/maps/LilycoveCity/scripts.pory"

# 201 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Woman2_2:
# 202 "data/maps/LilycoveCity/scripts.pory"
# 114 "data/maps/LilycoveCity/scripts.pory"
# 203 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_Woman2AquaGone
# 204 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_Woman2_1
# 205 "data/maps/LilycoveCity/scripts.pory"

# 206 "data/maps/LilycoveCity/scripts.pory"

# 207 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Woman2AquaGone::
# 208 "data/maps/LilycoveCity/scripts.pory"
# 122 "data/maps/LilycoveCity/scripts.pory"
# 209 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MissingPokemonCameBack, MSGBOX_DEFAULT
# 210 "data/maps/LilycoveCity/scripts.pory"
# 123 "data/maps/LilycoveCity/scripts.pory"
# 211 "data/maps/LilycoveCity/scripts.pory"
	release
# 212 "data/maps/LilycoveCity/scripts.pory"
	end
# 213 "data/maps/LilycoveCity/scripts.pory"

# 214 "data/maps/LilycoveCity/scripts.pory"

# 215 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Man2::
# 216 "data/maps/LilycoveCity/scripts.pory"
# 128 "data/maps/LilycoveCity/scripts.pory"
# 217 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_ImArtDealer, MSGBOX_NPC
# 218 "data/maps/LilycoveCity/scripts.pory"
	end
# 219 "data/maps/LilycoveCity/scripts.pory"

# 220 "data/maps/LilycoveCity/scripts.pory"

# 221 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_ExpertM1::
# 222 "data/maps/LilycoveCity/scripts.pory"
# 133 "data/maps/LilycoveCity/scripts.pory"
# 223 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_SeaRemainsForeverYoung, MSGBOX_SIGN
# 224 "data/maps/LilycoveCity/scripts.pory"
	end
# 225 "data/maps/LilycoveCity/scripts.pory"

# 226 "data/maps/LilycoveCity/scripts.pory"

# 227 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_ExpertF::
# 228 "data/maps/LilycoveCity/scripts.pory"
# 138 "data/maps/LilycoveCity/scripts.pory"
# 229 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_SixtyYearsAgoHusbandProposed, MSGBOX_SIGN
# 230 "data/maps/LilycoveCity/scripts.pory"
	end
# 231 "data/maps/LilycoveCity/scripts.pory"

# 232 "data/maps/LilycoveCity/scripts.pory"

# 233 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_ExpertM2::
# 234 "data/maps/LilycoveCity/scripts.pory"
# 143 "data/maps/LilycoveCity/scripts.pory"
# 235 "data/maps/LilycoveCity/scripts.pory"
	lock
# 236 "data/maps/LilycoveCity/scripts.pory"
# 144 "data/maps/LilycoveCity/scripts.pory"
# 237 "data/maps/LilycoveCity/scripts.pory"
	faceplayer
# 238 "data/maps/LilycoveCity/scripts.pory"
# 145 "data/maps/LilycoveCity/scripts.pory"
# 239 "data/maps/LilycoveCity/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, LilycoveCity_EventScript_ExpertM2_2
# 240 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_ExpertM2_1:
# 241 "data/maps/LilycoveCity/scripts.pory"
# 148 "data/maps/LilycoveCity/scripts.pory"
# 242 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_TeamAquaRenovatedCavern, MSGBOX_DEFAULT
# 243 "data/maps/LilycoveCity/scripts.pory"
# 149 "data/maps/LilycoveCity/scripts.pory"
# 244 "data/maps/LilycoveCity/scripts.pory"
	release
# 245 "data/maps/LilycoveCity/scripts.pory"
	end
# 246 "data/maps/LilycoveCity/scripts.pory"

# 247 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_ExpertM2_2:
# 248 "data/maps/LilycoveCity/scripts.pory"
# 146 "data/maps/LilycoveCity/scripts.pory"
# 249 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_ExpertM2AquaGone
# 250 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_ExpertM2_1
# 251 "data/maps/LilycoveCity/scripts.pory"

# 252 "data/maps/LilycoveCity/scripts.pory"

# 253 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_ExpertM2AquaGone::
# 254 "data/maps/LilycoveCity/scripts.pory"
# 154 "data/maps/LilycoveCity/scripts.pory"
# 255 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_TeamAquaLotGoneForGood, MSGBOX_DEFAULT
# 256 "data/maps/LilycoveCity/scripts.pory"
# 155 "data/maps/LilycoveCity/scripts.pory"
# 257 "data/maps/LilycoveCity/scripts.pory"
	release
# 258 "data/maps/LilycoveCity/scripts.pory"
	end
# 259 "data/maps/LilycoveCity/scripts.pory"

# 260 "data/maps/LilycoveCity/scripts.pory"

# 261 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Sailor1::
# 262 "data/maps/LilycoveCity/scripts.pory"
# 160 "data/maps/LilycoveCity/scripts.pory"
# 263 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_HeardTowerCalledSkyPillar, MSGBOX_NPC
# 264 "data/maps/LilycoveCity/scripts.pory"
	end
# 265 "data/maps/LilycoveCity/scripts.pory"

# 266 "data/maps/LilycoveCity/scripts.pory"

# 267 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_FatMan::
# 268 "data/maps/LilycoveCity/scripts.pory"
# 165 "data/maps/LilycoveCity/scripts.pory"
# 269 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_SawTallTowerOnRoute131, MSGBOX_NPC
# 270 "data/maps/LilycoveCity/scripts.pory"
	end
# 271 "data/maps/LilycoveCity/scripts.pory"

# 272 "data/maps/LilycoveCity/scripts.pory"

# 273 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Man1::
# 274 "data/maps/LilycoveCity/scripts.pory"
# 170 "data/maps/LilycoveCity/scripts.pory"
# 275 "data/maps/LilycoveCity/scripts.pory"
	lockall
# 276 "data/maps/LilycoveCity/scripts.pory"
# 171 "data/maps/LilycoveCity/scripts.pory"
# 277 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_JustArrivedAndSawRarePokemon, MSGBOX_NPC
# 278 "data/maps/LilycoveCity/scripts.pory"
# 172 "data/maps/LilycoveCity/scripts.pory"
# 279 "data/maps/LilycoveCity/scripts.pory"
	applymovement LOCALID_LILYCOVE_MAN_1, Common_Movement_FaceOriginalDirection
# 280 "data/maps/LilycoveCity/scripts.pory"
	end
# 281 "data/maps/LilycoveCity/scripts.pory"

# 282 "data/maps/LilycoveCity/scripts.pory"

# 283 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Woman1::
# 284 "data/maps/LilycoveCity/scripts.pory"
# 177 "data/maps/LilycoveCity/scripts.pory"
# 285 "data/maps/LilycoveCity/scripts.pory"
	lockall
# 286 "data/maps/LilycoveCity/scripts.pory"
# 178 "data/maps/LilycoveCity/scripts.pory"
# 287 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_HoneymoonVowToSeeRarePokemon, MSGBOX_NPC
# 288 "data/maps/LilycoveCity/scripts.pory"
# 179 "data/maps/LilycoveCity/scripts.pory"
# 289 "data/maps/LilycoveCity/scripts.pory"
	applymovement LOCALID_LILYCOVE_WOMAN_1, Common_Movement_FaceOriginalDirection
# 290 "data/maps/LilycoveCity/scripts.pory"
	end
# 291 "data/maps/LilycoveCity/scripts.pory"

# 292 "data/maps/LilycoveCity/scripts.pory"

# 293 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_CitySign::
# 294 "data/maps/LilycoveCity/scripts.pory"
# 184 "data/maps/LilycoveCity/scripts.pory"
# 295 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_CitySign, MSGBOX_SIGN
# 296 "data/maps/LilycoveCity/scripts.pory"
	end
# 297 "data/maps/LilycoveCity/scripts.pory"

# 298 "data/maps/LilycoveCity/scripts.pory"

# 299 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_ContestHallSign::
# 300 "data/maps/LilycoveCity/scripts.pory"
# 189 "data/maps/LilycoveCity/scripts.pory"
# 301 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_ContestHallSign, MSGBOX_SIGN
# 302 "data/maps/LilycoveCity/scripts.pory"
	end
# 303 "data/maps/LilycoveCity/scripts.pory"

# 304 "data/maps/LilycoveCity/scripts.pory"

# 305 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_MotelSign::
# 306 "data/maps/LilycoveCity/scripts.pory"
# 194 "data/maps/LilycoveCity/scripts.pory"
# 307 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MotelSign, MSGBOX_SIGN
# 308 "data/maps/LilycoveCity/scripts.pory"
	end
# 309 "data/maps/LilycoveCity/scripts.pory"

# 310 "data/maps/LilycoveCity/scripts.pory"

# 311 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_MuseumSign::
# 312 "data/maps/LilycoveCity/scripts.pory"
# 199 "data/maps/LilycoveCity/scripts.pory"
# 313 "data/maps/LilycoveCity/scripts.pory"
	lockall
# 314 "data/maps/LilycoveCity/scripts.pory"
# 200 "data/maps/LilycoveCity/scripts.pory"
# 315 "data/maps/LilycoveCity/scripts.pory"
	specialvar VAR_0x8004, CountPlayerMuseumPaintings
# 316 "data/maps/LilycoveCity/scripts.pory"
# 201 "data/maps/LilycoveCity/scripts.pory"
# 317 "data/maps/LilycoveCity/scripts.pory"
	switch VAR_0x8004
# 318 "data/maps/LilycoveCity/scripts.pory"
# 202 "data/maps/LilycoveCity/scripts.pory"
# 319 "data/maps/LilycoveCity/scripts.pory"
	case 0, LilycoveCity_EventScript_MuseumSign_3
# 320 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_MuseumSign_1:
# 321 "data/maps/LilycoveCity/scripts.pory"
# 205 "data/maps/LilycoveCity/scripts.pory"
# 322 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MuseumSignPlayersExhibit, MSGBOX_DEFAULT
# 323 "data/maps/LilycoveCity/scripts.pory"
# 206 "data/maps/LilycoveCity/scripts.pory"
# 324 "data/maps/LilycoveCity/scripts.pory"
	releaseall
# 325 "data/maps/LilycoveCity/scripts.pory"
	end
# 326 "data/maps/LilycoveCity/scripts.pory"

# 327 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_MuseumSign_3:
# 328 "data/maps/LilycoveCity/scripts.pory"
# 203 "data/maps/LilycoveCity/scripts.pory"
# 329 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_MuseumSignNoPaintings
# 330 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_MuseumSign_1
# 331 "data/maps/LilycoveCity/scripts.pory"

# 332 "data/maps/LilycoveCity/scripts.pory"

# 333 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_MuseumSignNoPaintings::
# 334 "data/maps/LilycoveCity/scripts.pory"
# 211 "data/maps/LilycoveCity/scripts.pory"
# 335 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MuseumSign, MSGBOX_DEFAULT
# 336 "data/maps/LilycoveCity/scripts.pory"
# 212 "data/maps/LilycoveCity/scripts.pory"
# 337 "data/maps/LilycoveCity/scripts.pory"
	releaseall
# 338 "data/maps/LilycoveCity/scripts.pory"
	end
# 339 "data/maps/LilycoveCity/scripts.pory"

# 340 "data/maps/LilycoveCity/scripts.pory"

# 341 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_HarborSign::
# 342 "data/maps/LilycoveCity/scripts.pory"
# 217 "data/maps/LilycoveCity/scripts.pory"
# 343 "data/maps/LilycoveCity/scripts.pory"
	lockall
# 344 "data/maps/LilycoveCity/scripts.pory"
# 218 "data/maps/LilycoveCity/scripts.pory"
# 345 "data/maps/LilycoveCity/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, LilycoveCity_EventScript_HarborSign_2
# 346 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_HarborSign_1:
# 347 "data/maps/LilycoveCity/scripts.pory"
# 221 "data/maps/LilycoveCity/scripts.pory"
# 348 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_HarborSignUnderConstruction, MSGBOX_DEFAULT
# 349 "data/maps/LilycoveCity/scripts.pory"
# 222 "data/maps/LilycoveCity/scripts.pory"
# 350 "data/maps/LilycoveCity/scripts.pory"
	releaseall
# 351 "data/maps/LilycoveCity/scripts.pory"
	end
# 352 "data/maps/LilycoveCity/scripts.pory"

# 353 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_HarborSign_2:
# 354 "data/maps/LilycoveCity/scripts.pory"
# 219 "data/maps/LilycoveCity/scripts.pory"
# 355 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_HarborSignFerryReady
# 356 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_HarborSign_1
# 357 "data/maps/LilycoveCity/scripts.pory"

# 358 "data/maps/LilycoveCity/scripts.pory"

# 359 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_HarborSignFerryReady::
# 360 "data/maps/LilycoveCity/scripts.pory"
# 227 "data/maps/LilycoveCity/scripts.pory"
# 361 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_HarborSign, MSGBOX_DEFAULT
# 362 "data/maps/LilycoveCity/scripts.pory"
# 228 "data/maps/LilycoveCity/scripts.pory"
# 363 "data/maps/LilycoveCity/scripts.pory"
	releaseall
# 364 "data/maps/LilycoveCity/scripts.pory"
	end
# 365 "data/maps/LilycoveCity/scripts.pory"

# 366 "data/maps/LilycoveCity/scripts.pory"

# 367 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_TrainerFanClubSign::
# 368 "data/maps/LilycoveCity/scripts.pory"
# 233 "data/maps/LilycoveCity/scripts.pory"
# 369 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_TrainerFanClubSign, MSGBOX_SIGN
# 370 "data/maps/LilycoveCity/scripts.pory"
	end
# 371 "data/maps/LilycoveCity/scripts.pory"

# 372 "data/maps/LilycoveCity/scripts.pory"

# 373 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_DepartmentStoreSign::
# 374 "data/maps/LilycoveCity/scripts.pory"
# 238 "data/maps/LilycoveCity/scripts.pory"
# 375 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_DepartmentStoreSign, MSGBOX_SIGN
# 376 "data/maps/LilycoveCity/scripts.pory"
	end
# 377 "data/maps/LilycoveCity/scripts.pory"

# 378 "data/maps/LilycoveCity/scripts.pory"

# 379 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_MoveDeletersHouseSign::
# 380 "data/maps/LilycoveCity/scripts.pory"
# 243 "data/maps/LilycoveCity/scripts.pory"
# 381 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MoveDeletersHouseSign, MSGBOX_SIGN
# 382 "data/maps/LilycoveCity/scripts.pory"
	end
# 383 "data/maps/LilycoveCity/scripts.pory"

# 384 "data/maps/LilycoveCity/scripts.pory"

# 385 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_WailmerTrainerGrunt::
# 386 "data/maps/LilycoveCity/scripts.pory"
# 248 "data/maps/LilycoveCity/scripts.pory"
# 387 "data/maps/LilycoveCity/scripts.pory"
	lockall
# 388 "data/maps/LilycoveCity/scripts.pory"
# 249 "data/maps/LilycoveCity/scripts.pory"
# 389 "data/maps/LilycoveCity/scripts.pory"
	goto_if_set FLAG_MET_WAILMER_TRAINER, LilycoveCity_EventScript_WailmerTrainerGrunt_2
# 390 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_WailmerTrainerGrunt_1:
# 391 "data/maps/LilycoveCity/scripts.pory"
# 252 "data/maps/LilycoveCity/scripts.pory"
# 392 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_WailmerLeapOutOfWater, MSGBOX_DEFAULT
# 393 "data/maps/LilycoveCity/scripts.pory"
# 253 "data/maps/LilycoveCity/scripts.pory"
# 394 "data/maps/LilycoveCity/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FacePlayer
# 395 "data/maps/LilycoveCity/scripts.pory"
# 254 "data/maps/LilycoveCity/scripts.pory"
# 396 "data/maps/LilycoveCity/scripts.pory"
	waitmovement 0
# 397 "data/maps/LilycoveCity/scripts.pory"
# 255 "data/maps/LilycoveCity/scripts.pory"
# 398 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_GetLostMessingUpTraining, MSGBOX_DEFAULT
# 399 "data/maps/LilycoveCity/scripts.pory"
# 256 "data/maps/LilycoveCity/scripts.pory"
# 400 "data/maps/LilycoveCity/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 401 "data/maps/LilycoveCity/scripts.pory"
# 257 "data/maps/LilycoveCity/scripts.pory"
# 402 "data/maps/LilycoveCity/scripts.pory"
	waitmovement 0
# 403 "data/maps/LilycoveCity/scripts.pory"
# 258 "data/maps/LilycoveCity/scripts.pory"
# 404 "data/maps/LilycoveCity/scripts.pory"
	setflag FLAG_MET_WAILMER_TRAINER
# 405 "data/maps/LilycoveCity/scripts.pory"
# 259 "data/maps/LilycoveCity/scripts.pory"
# 406 "data/maps/LilycoveCity/scripts.pory"
	releaseall
# 407 "data/maps/LilycoveCity/scripts.pory"
	end
# 408 "data/maps/LilycoveCity/scripts.pory"

# 409 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_WailmerTrainerGrunt_2:
# 410 "data/maps/LilycoveCity/scripts.pory"
# 250 "data/maps/LilycoveCity/scripts.pory"
# 411 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_MetWailmerTrainer
# 412 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_WailmerTrainerGrunt_1
# 413 "data/maps/LilycoveCity/scripts.pory"

# 414 "data/maps/LilycoveCity/scripts.pory"

# 415 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_MetWailmerTrainer::
# 416 "data/maps/LilycoveCity/scripts.pory"
# 264 "data/maps/LilycoveCity/scripts.pory"
# 417 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_WailmerLeapOutOfWater, MSGBOX_DEFAULT
# 418 "data/maps/LilycoveCity/scripts.pory"
# 265 "data/maps/LilycoveCity/scripts.pory"
# 419 "data/maps/LilycoveCity/scripts.pory"
	releaseall
# 420 "data/maps/LilycoveCity/scripts.pory"
	end
# 421 "data/maps/LilycoveCity/scripts.pory"

# 422 "data/maps/LilycoveCity/scripts.pory"

# 423 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_AquaGrunt1::
# 424 "data/maps/LilycoveCity/scripts.pory"
# 270 "data/maps/LilycoveCity/scripts.pory"
# 425 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MovedLootIntoHideoutToday, MSGBOX_NPC
# 426 "data/maps/LilycoveCity/scripts.pory"
	end
# 427 "data/maps/LilycoveCity/scripts.pory"

# 428 "data/maps/LilycoveCity/scripts.pory"

# 429 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_AquaGrunt2::
# 430 "data/maps/LilycoveCity/scripts.pory"
# 275 "data/maps/LilycoveCity/scripts.pory"
# 431 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_ChanceToDoBigThings, MSGBOX_NPC
# 432 "data/maps/LilycoveCity/scripts.pory"
	end
# 433 "data/maps/LilycoveCity/scripts.pory"

# 434 "data/maps/LilycoveCity/scripts.pory"

# 435 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_AquaGrunt3::
# 436 "data/maps/LilycoveCity/scripts.pory"
# 280 "data/maps/LilycoveCity/scripts.pory"
# 437 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_DontGoNearCaveInCove, MSGBOX_NPC
# 438 "data/maps/LilycoveCity/scripts.pory"
	end
# 439 "data/maps/LilycoveCity/scripts.pory"

# 440 "data/maps/LilycoveCity/scripts.pory"

# 441 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_AquaGrunt4::
# 442 "data/maps/LilycoveCity/scripts.pory"
# 285 "data/maps/LilycoveCity/scripts.pory"
# 443 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_IfWorldBecomesOurs, MSGBOX_NPC
# 444 "data/maps/LilycoveCity/scripts.pory"
	end
# 445 "data/maps/LilycoveCity/scripts.pory"

# 446 "data/maps/LilycoveCity/scripts.pory"

# 447 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Rival::
# 448 "data/maps/LilycoveCity/scripts.pory"
# 290 "data/maps/LilycoveCity/scripts.pory"
# 449 "data/maps/LilycoveCity/scripts.pory"
	lock
# 450 "data/maps/LilycoveCity/scripts.pory"
# 291 "data/maps/LilycoveCity/scripts.pory"
# 451 "data/maps/LilycoveCity/scripts.pory"
	faceplayer
# 452 "data/maps/LilycoveCity/scripts.pory"
# 292 "data/maps/LilycoveCity/scripts.pory"
# 453 "data/maps/LilycoveCity/scripts.pory"
	checkplayergender
# 454 "data/maps/LilycoveCity/scripts.pory"
# 293 "data/maps/LilycoveCity/scripts.pory"
# 455 "data/maps/LilycoveCity/scripts.pory"
	compare VAR_RESULT, MALE
# 456 "data/maps/LilycoveCity/scripts.pory"
	goto_if_eq LilycoveCity_EventScript_Rival_2
# 457 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Rival_1:
# 458 "data/maps/LilycoveCity/scripts.pory"
# 296 "data/maps/LilycoveCity/scripts.pory"
# 459 "data/maps/LilycoveCity/scripts.pory"
	compare VAR_RESULT, FEMALE
# 460 "data/maps/LilycoveCity/scripts.pory"
	goto_if_eq LilycoveCity_EventScript_Rival_5
# 461 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Rival_4:
# 462 "data/maps/LilycoveCity/scripts.pory"
	end
# 463 "data/maps/LilycoveCity/scripts.pory"

# 464 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Rival_2:
# 465 "data/maps/LilycoveCity/scripts.pory"
# 294 "data/maps/LilycoveCity/scripts.pory"
# 466 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_May
# 467 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_Rival_1
# 468 "data/maps/LilycoveCity/scripts.pory"

# 469 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Rival_5:
# 470 "data/maps/LilycoveCity/scripts.pory"
# 297 "data/maps/LilycoveCity/scripts.pory"
# 471 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_Brendan
# 472 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_Rival_4
# 473 "data/maps/LilycoveCity/scripts.pory"

# 474 "data/maps/LilycoveCity/scripts.pory"

# 475 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_May::
# 476 "data/maps/LilycoveCity/scripts.pory"
# 303 "data/maps/LilycoveCity/scripts.pory"
# 477 "data/maps/LilycoveCity/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 478 "data/maps/LilycoveCity/scripts.pory"
# 304 "data/maps/LilycoveCity/scripts.pory"
# 479 "data/maps/LilycoveCity/scripts.pory"
	goto_if_set FLAG_DECLINED_RIVAL_BATTLE_LILYCOVE, LilycoveCity_EventScript_May_2
# 480 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_May_1:
# 481 "data/maps/LilycoveCity/scripts.pory"
# 307 "data/maps/LilycoveCity/scripts.pory"
# 482 "data/maps/LilycoveCity/scripts.pory"
	goto_if_unset FLAG_DECLINED_RIVAL_BATTLE_LILYCOVE, LilycoveCity_EventScript_May_5
# 483 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_May_4:
# 484 "data/maps/LilycoveCity/scripts.pory"
# 310 "data/maps/LilycoveCity/scripts.pory"
# 485 "data/maps/LilycoveCity/scripts.pory"
	compare VAR_RESULT, NO
# 486 "data/maps/LilycoveCity/scripts.pory"
	goto_if_eq LilycoveCity_EventScript_May_8
# 487 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_May_7:
# 488 "data/maps/LilycoveCity/scripts.pory"
# 313 "data/maps/LilycoveCity/scripts.pory"
# 489 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MayWontBeBeaten, MSGBOX_DEFAULT
# 490 "data/maps/LilycoveCity/scripts.pory"
# 314 "data/maps/LilycoveCity/scripts.pory"
# 491 "data/maps/LilycoveCity/scripts.pory"
	switch VAR_STARTER_MON
# 492 "data/maps/LilycoveCity/scripts.pory"
# 315 "data/maps/LilycoveCity/scripts.pory"
# 493 "data/maps/LilycoveCity/scripts.pory"
	case 0, LilycoveCity_EventScript_May_12
# 494 "data/maps/LilycoveCity/scripts.pory"
# 317 "data/maps/LilycoveCity/scripts.pory"
# 495 "data/maps/LilycoveCity/scripts.pory"
	case 1, LilycoveCity_EventScript_May_13
# 496 "data/maps/LilycoveCity/scripts.pory"
# 319 "data/maps/LilycoveCity/scripts.pory"
# 497 "data/maps/LilycoveCity/scripts.pory"
	case 2, LilycoveCity_EventScript_May_14
# 498 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_May_10:
# 499 "data/maps/LilycoveCity/scripts.pory"
	end
# 500 "data/maps/LilycoveCity/scripts.pory"

# 501 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_May_2:
# 502 "data/maps/LilycoveCity/scripts.pory"
# 305 "data/maps/LilycoveCity/scripts.pory"
# 503 "data/maps/LilycoveCity/scripts.pory"
	call LilycoveCity_EventScript_MayAskToBattleAgain
# 504 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_May_1
# 505 "data/maps/LilycoveCity/scripts.pory"

# 506 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_May_5:
# 507 "data/maps/LilycoveCity/scripts.pory"
# 308 "data/maps/LilycoveCity/scripts.pory"
# 508 "data/maps/LilycoveCity/scripts.pory"
	call LilycoveCity_EventScript_MayAskToBattle
# 509 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_May_4
# 510 "data/maps/LilycoveCity/scripts.pory"

# 511 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_May_8:
# 512 "data/maps/LilycoveCity/scripts.pory"
# 311 "data/maps/LilycoveCity/scripts.pory"
# 513 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_DeclineMayBattle
# 514 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_May_7
# 515 "data/maps/LilycoveCity/scripts.pory"

# 516 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_May_12:
# 517 "data/maps/LilycoveCity/scripts.pory"
# 316 "data/maps/LilycoveCity/scripts.pory"
# 518 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_BattleMayTreecko
# 519 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_May_10
# 520 "data/maps/LilycoveCity/scripts.pory"

# 521 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_May_13:
# 522 "data/maps/LilycoveCity/scripts.pory"
# 318 "data/maps/LilycoveCity/scripts.pory"
# 523 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_BattleMayTorchic
# 524 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_May_10
# 525 "data/maps/LilycoveCity/scripts.pory"

# 526 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_May_14:
# 527 "data/maps/LilycoveCity/scripts.pory"
# 320 "data/maps/LilycoveCity/scripts.pory"
# 528 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_BattleMayMudkip
# 529 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_May_10
# 530 "data/maps/LilycoveCity/scripts.pory"

# 531 "data/maps/LilycoveCity/scripts.pory"

# 532 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_MayAskToBattleAgain::
# 533 "data/maps/LilycoveCity/scripts.pory"
# 326 "data/maps/LilycoveCity/scripts.pory"
# 534 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MayBattleMe, MSGBOX_YESNO
# 535 "data/maps/LilycoveCity/scripts.pory"
	return
# 536 "data/maps/LilycoveCity/scripts.pory"

# 537 "data/maps/LilycoveCity/scripts.pory"

# 538 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_MayAskToBattle::
# 539 "data/maps/LilycoveCity/scripts.pory"
# 331 "data/maps/LilycoveCity/scripts.pory"
# 540 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MayShoppingLetsBattle, MSGBOX_YESNO
# 541 "data/maps/LilycoveCity/scripts.pory"
	return
# 542 "data/maps/LilycoveCity/scripts.pory"

# 543 "data/maps/LilycoveCity/scripts.pory"

# 544 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_DeclineMayBattle::
# 545 "data/maps/LilycoveCity/scripts.pory"
# 336 "data/maps/LilycoveCity/scripts.pory"
# 546 "data/maps/LilycoveCity/scripts.pory"
	setflag FLAG_DECLINED_RIVAL_BATTLE_LILYCOVE
# 547 "data/maps/LilycoveCity/scripts.pory"
# 337 "data/maps/LilycoveCity/scripts.pory"
# 548 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MayNotRaisingPokemon, MSGBOX_DEFAULT
# 549 "data/maps/LilycoveCity/scripts.pory"
# 338 "data/maps/LilycoveCity/scripts.pory"
# 550 "data/maps/LilycoveCity/scripts.pory"
	savebgm MUS_DUMMY
# 551 "data/maps/LilycoveCity/scripts.pory"
# 339 "data/maps/LilycoveCity/scripts.pory"
# 552 "data/maps/LilycoveCity/scripts.pory"
	fadedefaultbgm
# 553 "data/maps/LilycoveCity/scripts.pory"
# 340 "data/maps/LilycoveCity/scripts.pory"
# 554 "data/maps/LilycoveCity/scripts.pory"
	release
# 555 "data/maps/LilycoveCity/scripts.pory"
	end
# 556 "data/maps/LilycoveCity/scripts.pory"

# 557 "data/maps/LilycoveCity/scripts.pory"

# 558 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Brendan::
# 559 "data/maps/LilycoveCity/scripts.pory"
# 345 "data/maps/LilycoveCity/scripts.pory"
# 560 "data/maps/LilycoveCity/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 561 "data/maps/LilycoveCity/scripts.pory"
# 346 "data/maps/LilycoveCity/scripts.pory"
# 562 "data/maps/LilycoveCity/scripts.pory"
	goto_if_set FLAG_DECLINED_RIVAL_BATTLE_LILYCOVE, LilycoveCity_EventScript_Brendan_2
# 563 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Brendan_1:
# 564 "data/maps/LilycoveCity/scripts.pory"
# 349 "data/maps/LilycoveCity/scripts.pory"
# 565 "data/maps/LilycoveCity/scripts.pory"
	goto_if_unset FLAG_DECLINED_RIVAL_BATTLE_LILYCOVE, LilycoveCity_EventScript_Brendan_5
# 566 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Brendan_4:
# 567 "data/maps/LilycoveCity/scripts.pory"
# 352 "data/maps/LilycoveCity/scripts.pory"
# 568 "data/maps/LilycoveCity/scripts.pory"
	compare VAR_RESULT, NO
# 569 "data/maps/LilycoveCity/scripts.pory"
	goto_if_eq LilycoveCity_EventScript_Brendan_8
# 570 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Brendan_7:
# 571 "data/maps/LilycoveCity/scripts.pory"
# 355 "data/maps/LilycoveCity/scripts.pory"
# 572 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_BrendanWontBeBeaten, MSGBOX_DEFAULT
# 573 "data/maps/LilycoveCity/scripts.pory"
# 356 "data/maps/LilycoveCity/scripts.pory"
# 574 "data/maps/LilycoveCity/scripts.pory"
	switch VAR_STARTER_MON
# 575 "data/maps/LilycoveCity/scripts.pory"
# 357 "data/maps/LilycoveCity/scripts.pory"
# 576 "data/maps/LilycoveCity/scripts.pory"
	case 0, LilycoveCity_EventScript_Brendan_12
# 577 "data/maps/LilycoveCity/scripts.pory"
# 359 "data/maps/LilycoveCity/scripts.pory"
# 578 "data/maps/LilycoveCity/scripts.pory"
	case 1, LilycoveCity_EventScript_Brendan_13
# 579 "data/maps/LilycoveCity/scripts.pory"
# 361 "data/maps/LilycoveCity/scripts.pory"
# 580 "data/maps/LilycoveCity/scripts.pory"
	case 2, LilycoveCity_EventScript_Brendan_14
# 581 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Brendan_10:
# 582 "data/maps/LilycoveCity/scripts.pory"
	end
# 583 "data/maps/LilycoveCity/scripts.pory"

# 584 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Brendan_2:
# 585 "data/maps/LilycoveCity/scripts.pory"
# 347 "data/maps/LilycoveCity/scripts.pory"
# 586 "data/maps/LilycoveCity/scripts.pory"
	call LilycoveCity_EventScript_BrendanAskToBattleAgain
# 587 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_Brendan_1
# 588 "data/maps/LilycoveCity/scripts.pory"

# 589 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Brendan_5:
# 590 "data/maps/LilycoveCity/scripts.pory"
# 350 "data/maps/LilycoveCity/scripts.pory"
# 591 "data/maps/LilycoveCity/scripts.pory"
	call LilycoveCity_EventScript_BrendanAskToBattle
# 592 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_Brendan_4
# 593 "data/maps/LilycoveCity/scripts.pory"

# 594 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Brendan_8:
# 595 "data/maps/LilycoveCity/scripts.pory"
# 353 "data/maps/LilycoveCity/scripts.pory"
# 596 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_DeclineBrendanBattle
# 597 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_Brendan_7
# 598 "data/maps/LilycoveCity/scripts.pory"

# 599 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Brendan_12:
# 600 "data/maps/LilycoveCity/scripts.pory"
# 358 "data/maps/LilycoveCity/scripts.pory"
# 601 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_BattleBrendanTreecko
# 602 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_Brendan_10
# 603 "data/maps/LilycoveCity/scripts.pory"

# 604 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Brendan_13:
# 605 "data/maps/LilycoveCity/scripts.pory"
# 360 "data/maps/LilycoveCity/scripts.pory"
# 606 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_BattleBrendanTorchic
# 607 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_Brendan_10
# 608 "data/maps/LilycoveCity/scripts.pory"

# 609 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Brendan_14:
# 610 "data/maps/LilycoveCity/scripts.pory"
# 362 "data/maps/LilycoveCity/scripts.pory"
# 611 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_BattleBrendanMudkip
# 612 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_Brendan_10
# 613 "data/maps/LilycoveCity/scripts.pory"

# 614 "data/maps/LilycoveCity/scripts.pory"

# 615 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_BrendanAskToBattleAgain::
# 616 "data/maps/LilycoveCity/scripts.pory"
# 368 "data/maps/LilycoveCity/scripts.pory"
# 617 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_BrendanBattleMe, MSGBOX_YESNO
# 618 "data/maps/LilycoveCity/scripts.pory"
	return
# 619 "data/maps/LilycoveCity/scripts.pory"

# 620 "data/maps/LilycoveCity/scripts.pory"

# 621 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_BrendanAskToBattle::
# 622 "data/maps/LilycoveCity/scripts.pory"
# 373 "data/maps/LilycoveCity/scripts.pory"
# 623 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_BrendanShoppingLetsBattle, MSGBOX_YESNO
# 624 "data/maps/LilycoveCity/scripts.pory"
	return
# 625 "data/maps/LilycoveCity/scripts.pory"

# 626 "data/maps/LilycoveCity/scripts.pory"

# 627 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_DeclineBrendanBattle::
# 628 "data/maps/LilycoveCity/scripts.pory"
# 378 "data/maps/LilycoveCity/scripts.pory"
# 629 "data/maps/LilycoveCity/scripts.pory"
	setflag FLAG_DECLINED_RIVAL_BATTLE_LILYCOVE
# 630 "data/maps/LilycoveCity/scripts.pory"
# 379 "data/maps/LilycoveCity/scripts.pory"
# 631 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_BrendanNoConfidence, MSGBOX_DEFAULT
# 632 "data/maps/LilycoveCity/scripts.pory"
# 380 "data/maps/LilycoveCity/scripts.pory"
# 633 "data/maps/LilycoveCity/scripts.pory"
	savebgm MUS_DUMMY
# 634 "data/maps/LilycoveCity/scripts.pory"
# 381 "data/maps/LilycoveCity/scripts.pory"
# 635 "data/maps/LilycoveCity/scripts.pory"
	fadedefaultbgm
# 636 "data/maps/LilycoveCity/scripts.pory"
# 382 "data/maps/LilycoveCity/scripts.pory"
# 637 "data/maps/LilycoveCity/scripts.pory"
	release
# 638 "data/maps/LilycoveCity/scripts.pory"
	end
# 639 "data/maps/LilycoveCity/scripts.pory"

# 640 "data/maps/LilycoveCity/scripts.pory"

# 641 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_BattleMayTreecko::
# 642 "data/maps/LilycoveCity/scripts.pory"
# 387 "data/maps/LilycoveCity/scripts.pory"
# 643 "data/maps/LilycoveCity/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_LILYCOVE_TREECKO, LilycoveCity_Text_MayDefeat
# 644 "data/maps/LilycoveCity/scripts.pory"
# 388 "data/maps/LilycoveCity/scripts.pory"
# 645 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_DefeatedMay
# 646 "data/maps/LilycoveCity/scripts.pory"
	end
# 647 "data/maps/LilycoveCity/scripts.pory"

# 648 "data/maps/LilycoveCity/scripts.pory"

# 649 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_BattleMayTorchic::
# 650 "data/maps/LilycoveCity/scripts.pory"
# 393 "data/maps/LilycoveCity/scripts.pory"
# 651 "data/maps/LilycoveCity/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_LILYCOVE_TORCHIC, LilycoveCity_Text_MayDefeat
# 652 "data/maps/LilycoveCity/scripts.pory"
# 394 "data/maps/LilycoveCity/scripts.pory"
# 653 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_DefeatedMay
# 654 "data/maps/LilycoveCity/scripts.pory"
	end
# 655 "data/maps/LilycoveCity/scripts.pory"

# 656 "data/maps/LilycoveCity/scripts.pory"

# 657 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_BattleMayMudkip::
# 658 "data/maps/LilycoveCity/scripts.pory"
# 399 "data/maps/LilycoveCity/scripts.pory"
# 659 "data/maps/LilycoveCity/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_LILYCOVE_MUDKIP, LilycoveCity_Text_MayDefeat
# 660 "data/maps/LilycoveCity/scripts.pory"
# 400 "data/maps/LilycoveCity/scripts.pory"
# 661 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_DefeatedMay
# 662 "data/maps/LilycoveCity/scripts.pory"
	end
# 663 "data/maps/LilycoveCity/scripts.pory"

# 664 "data/maps/LilycoveCity/scripts.pory"

# 665 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_BattleBrendanTreecko::
# 666 "data/maps/LilycoveCity/scripts.pory"
# 405 "data/maps/LilycoveCity/scripts.pory"
# 667 "data/maps/LilycoveCity/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_LILYCOVE_TREECKO, LilycoveCity_Text_BrendanDefeat
# 668 "data/maps/LilycoveCity/scripts.pory"
# 406 "data/maps/LilycoveCity/scripts.pory"
# 669 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_DefeatedBrendan
# 670 "data/maps/LilycoveCity/scripts.pory"
	end
# 671 "data/maps/LilycoveCity/scripts.pory"

# 672 "data/maps/LilycoveCity/scripts.pory"

# 673 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_BattleBrendanTorchic::
# 674 "data/maps/LilycoveCity/scripts.pory"
# 411 "data/maps/LilycoveCity/scripts.pory"
# 675 "data/maps/LilycoveCity/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_LILYCOVE_TORCHIC, LilycoveCity_Text_BrendanDefeat
# 676 "data/maps/LilycoveCity/scripts.pory"
# 412 "data/maps/LilycoveCity/scripts.pory"
# 677 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_DefeatedBrendan
# 678 "data/maps/LilycoveCity/scripts.pory"
	end
# 679 "data/maps/LilycoveCity/scripts.pory"

# 680 "data/maps/LilycoveCity/scripts.pory"

# 681 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_BattleBrendanMudkip::
# 682 "data/maps/LilycoveCity/scripts.pory"
# 417 "data/maps/LilycoveCity/scripts.pory"
# 683 "data/maps/LilycoveCity/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_LILYCOVE_MUDKIP, LilycoveCity_Text_BrendanDefeat
# 684 "data/maps/LilycoveCity/scripts.pory"
# 418 "data/maps/LilycoveCity/scripts.pory"
# 685 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_DefeatedBrendan
# 686 "data/maps/LilycoveCity/scripts.pory"
	end
# 687 "data/maps/LilycoveCity/scripts.pory"

# 688 "data/maps/LilycoveCity/scripts.pory"

# 689 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_DefeatedMay::
# 690 "data/maps/LilycoveCity/scripts.pory"
# 423 "data/maps/LilycoveCity/scripts.pory"
# 691 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MayGoingBackToLittleroot, MSGBOX_DEFAULT
# 692 "data/maps/LilycoveCity/scripts.pory"
# 424 "data/maps/LilycoveCity/scripts.pory"
# 693 "data/maps/LilycoveCity/scripts.pory"
	setvar VAR_RESULT, FALSE
# 694 "data/maps/LilycoveCity/scripts.pory"
# 425 "data/maps/LilycoveCity/scripts.pory"
# 695 "data/maps/LilycoveCity/scripts.pory"
	goto_if_set FLAG_BADGE06_GET, LilycoveCity_EventScript_DefeatedMay_2
# 696 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_DefeatedMay_1:
# 697 "data/maps/LilycoveCity/scripts.pory"
# 428 "data/maps/LilycoveCity/scripts.pory"
# 698 "data/maps/LilycoveCity/scripts.pory"
	compare VAR_RESULT, FALSE
# 699 "data/maps/LilycoveCity/scripts.pory"
	goto_if_eq LilycoveCity_EventScript_DefeatedMay_5
# 700 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_DefeatedMay_4:
# 701 "data/maps/LilycoveCity/scripts.pory"
# 431 "data/maps/LilycoveCity/scripts.pory"
# 702 "data/maps/LilycoveCity/scripts.pory"
	compare VAR_RESULT, TRUE
# 703 "data/maps/LilycoveCity/scripts.pory"
	goto_if_eq LilycoveCity_EventScript_DefeatedMay_8
# 704 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_DefeatedMay_7:
# 705 "data/maps/LilycoveCity/scripts.pory"
# 434 "data/maps/LilycoveCity/scripts.pory"
# 706 "data/maps/LilycoveCity/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_BEDROOM
# 707 "data/maps/LilycoveCity/scripts.pory"
# 435 "data/maps/LilycoveCity/scripts.pory"
# 708 "data/maps/LilycoveCity/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_2F_PICHU_DOLL
# 709 "data/maps/LilycoveCity/scripts.pory"
# 436 "data/maps/LilycoveCity/scripts.pory"
# 710 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_RivalFlyAway
# 711 "data/maps/LilycoveCity/scripts.pory"
	end
# 712 "data/maps/LilycoveCity/scripts.pory"

# 713 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_DefeatedMay_2:
# 714 "data/maps/LilycoveCity/scripts.pory"
# 426 "data/maps/LilycoveCity/scripts.pory"
# 715 "data/maps/LilycoveCity/scripts.pory"
	call LilycoveCity_EventScript_CheckFinalBadge
# 716 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_DefeatedMay_1
# 717 "data/maps/LilycoveCity/scripts.pory"

# 718 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_DefeatedMay_5:
# 719 "data/maps/LilycoveCity/scripts.pory"
# 429 "data/maps/LilycoveCity/scripts.pory"
# 720 "data/maps/LilycoveCity/scripts.pory"
	call LilycoveCity_EventScript_MayCollectBadges
# 721 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_DefeatedMay_4
# 722 "data/maps/LilycoveCity/scripts.pory"

# 723 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_DefeatedMay_8:
# 724 "data/maps/LilycoveCity/scripts.pory"
# 432 "data/maps/LilycoveCity/scripts.pory"
# 725 "data/maps/LilycoveCity/scripts.pory"
	call LilycoveCity_EventScript_MayPokemonLeague
# 726 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_DefeatedMay_7
# 727 "data/maps/LilycoveCity/scripts.pory"

# 728 "data/maps/LilycoveCity/scripts.pory"

# 729 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_CheckFinalBadge::
# 730 "data/maps/LilycoveCity/scripts.pory"
# 441 "data/maps/LilycoveCity/scripts.pory"
# 731 "data/maps/LilycoveCity/scripts.pory"
	goto_if_set FLAG_BADGE08_GET, LilycoveCity_EventScript_CheckFinalBadge_2
# 732 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_CheckFinalBadge_1:
# 733 "data/maps/LilycoveCity/scripts.pory"
	return
# 734 "data/maps/LilycoveCity/scripts.pory"

# 735 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_CheckFinalBadge_2:
# 736 "data/maps/LilycoveCity/scripts.pory"
# 442 "data/maps/LilycoveCity/scripts.pory"
# 737 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_HasFinalBadge
# 738 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_CheckFinalBadge_1
# 739 "data/maps/LilycoveCity/scripts.pory"

# 740 "data/maps/LilycoveCity/scripts.pory"

# 741 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_HasFinalBadge::
# 742 "data/maps/LilycoveCity/scripts.pory"
# 448 "data/maps/LilycoveCity/scripts.pory"
# 743 "data/maps/LilycoveCity/scripts.pory"
	setvar VAR_RESULT, TRUE
# 744 "data/maps/LilycoveCity/scripts.pory"
	return
# 745 "data/maps/LilycoveCity/scripts.pory"

# 746 "data/maps/LilycoveCity/scripts.pory"

# 747 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_MayCollectBadges::
# 748 "data/maps/LilycoveCity/scripts.pory"
# 453 "data/maps/LilycoveCity/scripts.pory"
# 749 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MayYouGoingToCollectBadges, MSGBOX_DEFAULT
# 750 "data/maps/LilycoveCity/scripts.pory"
	return
# 751 "data/maps/LilycoveCity/scripts.pory"

# 752 "data/maps/LilycoveCity/scripts.pory"

# 753 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_MayPokemonLeague::
# 754 "data/maps/LilycoveCity/scripts.pory"
# 458 "data/maps/LilycoveCity/scripts.pory"
# 755 "data/maps/LilycoveCity/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, LilycoveCity_EventScript_MayPokemonLeague_2
# 756 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_MayPokemonLeague_1:
# 757 "data/maps/LilycoveCity/scripts.pory"
# 461 "data/maps/LilycoveCity/scripts.pory"
# 758 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MayYouGoingToPokemonLeague, MSGBOX_DEFAULT
# 759 "data/maps/LilycoveCity/scripts.pory"
	return
# 760 "data/maps/LilycoveCity/scripts.pory"

# 761 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_MayPokemonLeague_2:
# 762 "data/maps/LilycoveCity/scripts.pory"
# 459 "data/maps/LilycoveCity/scripts.pory"
# 763 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_MayBattleFrontier
# 764 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_MayPokemonLeague_1
# 765 "data/maps/LilycoveCity/scripts.pory"

# 766 "data/maps/LilycoveCity/scripts.pory"

# 767 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_MayBattleFrontier::
# 768 "data/maps/LilycoveCity/scripts.pory"
# 466 "data/maps/LilycoveCity/scripts.pory"
# 769 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MayYouGoingToBattleFrontier, MSGBOX_DEFAULT
# 770 "data/maps/LilycoveCity/scripts.pory"
	return
# 771 "data/maps/LilycoveCity/scripts.pory"

# 772 "data/maps/LilycoveCity/scripts.pory"

# 773 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_DefeatedBrendan::
# 774 "data/maps/LilycoveCity/scripts.pory"
# 471 "data/maps/LilycoveCity/scripts.pory"
# 775 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_BrendanGoingBackToLittleroot, MSGBOX_DEFAULT
# 776 "data/maps/LilycoveCity/scripts.pory"
# 472 "data/maps/LilycoveCity/scripts.pory"
# 777 "data/maps/LilycoveCity/scripts.pory"
	setvar VAR_RESULT, FALSE
# 778 "data/maps/LilycoveCity/scripts.pory"
# 473 "data/maps/LilycoveCity/scripts.pory"
# 779 "data/maps/LilycoveCity/scripts.pory"
	goto_if_set FLAG_BADGE06_GET, LilycoveCity_EventScript_DefeatedBrendan_2
# 780 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_DefeatedBrendan_1:
# 781 "data/maps/LilycoveCity/scripts.pory"
# 476 "data/maps/LilycoveCity/scripts.pory"
# 782 "data/maps/LilycoveCity/scripts.pory"
	compare VAR_RESULT, FALSE
# 783 "data/maps/LilycoveCity/scripts.pory"
	goto_if_eq LilycoveCity_EventScript_DefeatedBrendan_5
# 784 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_DefeatedBrendan_4:
# 785 "data/maps/LilycoveCity/scripts.pory"
# 479 "data/maps/LilycoveCity/scripts.pory"
# 786 "data/maps/LilycoveCity/scripts.pory"
	compare VAR_RESULT, TRUE
# 787 "data/maps/LilycoveCity/scripts.pory"
	goto_if_eq LilycoveCity_EventScript_DefeatedBrendan_8
# 788 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_DefeatedBrendan_7:
# 789 "data/maps/LilycoveCity/scripts.pory"
# 482 "data/maps/LilycoveCity/scripts.pory"
# 790 "data/maps/LilycoveCity/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_BEDROOM
# 791 "data/maps/LilycoveCity/scripts.pory"
# 483 "data/maps/LilycoveCity/scripts.pory"
# 792 "data/maps/LilycoveCity/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F_SWABLU_DOLL
# 793 "data/maps/LilycoveCity/scripts.pory"
# 484 "data/maps/LilycoveCity/scripts.pory"
# 794 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_RivalFlyAway
# 795 "data/maps/LilycoveCity/scripts.pory"
	end
# 796 "data/maps/LilycoveCity/scripts.pory"

# 797 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_DefeatedBrendan_2:
# 798 "data/maps/LilycoveCity/scripts.pory"
# 474 "data/maps/LilycoveCity/scripts.pory"
# 799 "data/maps/LilycoveCity/scripts.pory"
	call LilycoveCity_EventScript_CheckFinalBadge
# 800 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_DefeatedBrendan_1
# 801 "data/maps/LilycoveCity/scripts.pory"

# 802 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_DefeatedBrendan_5:
# 803 "data/maps/LilycoveCity/scripts.pory"
# 477 "data/maps/LilycoveCity/scripts.pory"
# 804 "data/maps/LilycoveCity/scripts.pory"
	call LilycoveCity_EventScript_BrendanCollectBadges
# 805 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_DefeatedBrendan_4
# 806 "data/maps/LilycoveCity/scripts.pory"

# 807 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_DefeatedBrendan_8:
# 808 "data/maps/LilycoveCity/scripts.pory"
# 480 "data/maps/LilycoveCity/scripts.pory"
# 809 "data/maps/LilycoveCity/scripts.pory"
	call LilycoveCity_EventScript_BrendanPokemonLeague
# 810 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_DefeatedBrendan_7
# 811 "data/maps/LilycoveCity/scripts.pory"

# 812 "data/maps/LilycoveCity/scripts.pory"

# 813 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_BrendanCollectBadges::
# 814 "data/maps/LilycoveCity/scripts.pory"
# 489 "data/maps/LilycoveCity/scripts.pory"
# 815 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_BrendanYouGoingToCollectBadges, MSGBOX_DEFAULT
# 816 "data/maps/LilycoveCity/scripts.pory"
	return
# 817 "data/maps/LilycoveCity/scripts.pory"

# 818 "data/maps/LilycoveCity/scripts.pory"

# 819 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_BrendanPokemonLeague::
# 820 "data/maps/LilycoveCity/scripts.pory"
# 494 "data/maps/LilycoveCity/scripts.pory"
# 821 "data/maps/LilycoveCity/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, LilycoveCity_EventScript_BrendanPokemonLeague_2
# 822 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_BrendanPokemonLeague_1:
# 823 "data/maps/LilycoveCity/scripts.pory"
# 497 "data/maps/LilycoveCity/scripts.pory"
# 824 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_BrendanYouGoingToPokemonLeague, MSGBOX_DEFAULT
# 825 "data/maps/LilycoveCity/scripts.pory"
	return
# 826 "data/maps/LilycoveCity/scripts.pory"

# 827 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_BrendanPokemonLeague_2:
# 828 "data/maps/LilycoveCity/scripts.pory"
# 495 "data/maps/LilycoveCity/scripts.pory"
# 829 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_BrendanBattleFrontier
# 830 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_BrendanPokemonLeague_1
# 831 "data/maps/LilycoveCity/scripts.pory"

# 832 "data/maps/LilycoveCity/scripts.pory"

# 833 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_BrendanBattleFrontier::
# 834 "data/maps/LilycoveCity/scripts.pory"
# 502 "data/maps/LilycoveCity/scripts.pory"
# 835 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_BrendanYouGoingToBattleFrontier, MSGBOX_DEFAULT
# 836 "data/maps/LilycoveCity/scripts.pory"
	return
# 837 "data/maps/LilycoveCity/scripts.pory"

# 838 "data/maps/LilycoveCity/scripts.pory"

# 839 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_RivalFlyAway::
# 840 "data/maps/LilycoveCity/scripts.pory"
# 507 "data/maps/LilycoveCity/scripts.pory"
# 841 "data/maps/LilycoveCity/scripts.pory"
	closemessage
# 842 "data/maps/LilycoveCity/scripts.pory"
# 508 "data/maps/LilycoveCity/scripts.pory"
# 843 "data/maps/LilycoveCity/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceFasterDown
# 844 "data/maps/LilycoveCity/scripts.pory"
# 509 "data/maps/LilycoveCity/scripts.pory"
# 845 "data/maps/LilycoveCity/scripts.pory"
	waitmovement 0
# 846 "data/maps/LilycoveCity/scripts.pory"
# 510 "data/maps/LilycoveCity/scripts.pory"
# 847 "data/maps/LilycoveCity/scripts.pory"
	delay 50
# 848 "data/maps/LilycoveCity/scripts.pory"
# 511 "data/maps/LilycoveCity/scripts.pory"
# 849 "data/maps/LilycoveCity/scripts.pory"
	setfieldeffectargument 0, 1
# 850 "data/maps/LilycoveCity/scripts.pory"
# 512 "data/maps/LilycoveCity/scripts.pory"
# 851 "data/maps/LilycoveCity/scripts.pory"
	dofieldeffect FLDEFF_NPCFLY_OUT
# 852 "data/maps/LilycoveCity/scripts.pory"
# 513 "data/maps/LilycoveCity/scripts.pory"
# 853 "data/maps/LilycoveCity/scripts.pory"
	delay 15
# 854 "data/maps/LilycoveCity/scripts.pory"
# 514 "data/maps/LilycoveCity/scripts.pory"
# 855 "data/maps/LilycoveCity/scripts.pory"
	removeobject VAR_LAST_TALKED
# 856 "data/maps/LilycoveCity/scripts.pory"
# 515 "data/maps/LilycoveCity/scripts.pory"
# 857 "data/maps/LilycoveCity/scripts.pory"
	waitfieldeffect FLDEFF_NPCFLY_OUT
# 858 "data/maps/LilycoveCity/scripts.pory"
# 516 "data/maps/LilycoveCity/scripts.pory"
# 859 "data/maps/LilycoveCity/scripts.pory"
	savebgm MUS_DUMMY
# 860 "data/maps/LilycoveCity/scripts.pory"
# 517 "data/maps/LilycoveCity/scripts.pory"
# 861 "data/maps/LilycoveCity/scripts.pory"
	fadedefaultbgm
# 862 "data/maps/LilycoveCity/scripts.pory"
# 518 "data/maps/LilycoveCity/scripts.pory"
# 863 "data/maps/LilycoveCity/scripts.pory"
	setflag FLAG_MET_RIVAL_LILYCOVE
# 864 "data/maps/LilycoveCity/scripts.pory"
# 519 "data/maps/LilycoveCity/scripts.pory"
# 865 "data/maps/LilycoveCity/scripts.pory"
	release
# 866 "data/maps/LilycoveCity/scripts.pory"
	end
# 867 "data/maps/LilycoveCity/scripts.pory"

# 868 "data/maps/LilycoveCity/scripts.pory"

# 869 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_SchoolKidM::
# 870 "data/maps/LilycoveCity/scripts.pory"
# 524 "data/maps/LilycoveCity/scripts.pory"
# 871 "data/maps/LilycoveCity/scripts.pory"
	lock
# 872 "data/maps/LilycoveCity/scripts.pory"
# 525 "data/maps/LilycoveCity/scripts.pory"
# 873 "data/maps/LilycoveCity/scripts.pory"
	faceplayer
# 874 "data/maps/LilycoveCity/scripts.pory"
# 526 "data/maps/LilycoveCity/scripts.pory"
# 875 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_DoYouKnowAboutBerryBlender, MSGBOX_YESNO
# 876 "data/maps/LilycoveCity/scripts.pory"
# 527 "data/maps/LilycoveCity/scripts.pory"
# 877 "data/maps/LilycoveCity/scripts.pory"
	compare VAR_RESULT, YES
# 878 "data/maps/LilycoveCity/scripts.pory"
	goto_if_eq LilycoveCity_EventScript_SchoolKidM_2
# 879 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_SchoolKidM_1:
# 880 "data/maps/LilycoveCity/scripts.pory"
# 530 "data/maps/LilycoveCity/scripts.pory"
# 881 "data/maps/LilycoveCity/scripts.pory"
	compare VAR_RESULT, NO
# 882 "data/maps/LilycoveCity/scripts.pory"
	goto_if_eq LilycoveCity_EventScript_SchoolKidM_5
# 883 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_SchoolKidM_4:
# 884 "data/maps/LilycoveCity/scripts.pory"
# 533 "data/maps/LilycoveCity/scripts.pory"
# 885 "data/maps/LilycoveCity/scripts.pory"
	release
# 886 "data/maps/LilycoveCity/scripts.pory"
	end
# 887 "data/maps/LilycoveCity/scripts.pory"

# 888 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_SchoolKidM_2:
# 889 "data/maps/LilycoveCity/scripts.pory"
# 528 "data/maps/LilycoveCity/scripts.pory"
# 890 "data/maps/LilycoveCity/scripts.pory"
	call LilycoveCity_EventScript_KnowAboutBerryBlender
# 891 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_SchoolKidM_1
# 892 "data/maps/LilycoveCity/scripts.pory"

# 893 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_SchoolKidM_5:
# 894 "data/maps/LilycoveCity/scripts.pory"
# 531 "data/maps/LilycoveCity/scripts.pory"
# 895 "data/maps/LilycoveCity/scripts.pory"
	call LilycoveCity_EventScript_DontKnowAboutBerryBlender
# 896 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_SchoolKidM_4
# 897 "data/maps/LilycoveCity/scripts.pory"

# 898 "data/maps/LilycoveCity/scripts.pory"

# 899 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_KnowAboutBerryBlender::
# 900 "data/maps/LilycoveCity/scripts.pory"
# 538 "data/maps/LilycoveCity/scripts.pory"
# 901 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_FasterSpinBetterPokeblocks, MSGBOX_DEFAULT
# 902 "data/maps/LilycoveCity/scripts.pory"
	return
# 903 "data/maps/LilycoveCity/scripts.pory"

# 904 "data/maps/LilycoveCity/scripts.pory"

# 905 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_DontKnowAboutBerryBlender::
# 906 "data/maps/LilycoveCity/scripts.pory"
# 543 "data/maps/LilycoveCity/scripts.pory"
# 907 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_ExplainBerryBlender, MSGBOX_DEFAULT
# 908 "data/maps/LilycoveCity/scripts.pory"
	return
# 909 "data/maps/LilycoveCity/scripts.pory"

# 910 "data/maps/LilycoveCity/scripts.pory"

# 911 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MayShoppingLetsBattle::
# 912 "data/maps/LilycoveCity/scripts.pory"
# 547 "data/maps/LilycoveCity/scripts.pory"
# 913 "data/maps/LilycoveCity/scripts.pory"
	.string "MAY: Oh, hey?\n"
# 914 "data/maps/LilycoveCity/scripts.pory"
	.string "{PLAYER}{KUN}, are you shopping, too?\p"
# 915 "data/maps/LilycoveCity/scripts.pory"
	.string "I bought a whole bunch of DOLLS and\n"
# 916 "data/maps/LilycoveCity/scripts.pory"
	.string "POSTERS.\p"
# 917 "data/maps/LilycoveCity/scripts.pory"
	.string "Of course, I've also caught a lot of\n"
# 918 "data/maps/LilycoveCity/scripts.pory"
	.string "POKéMON, and I'm raising them\l"
# 919 "data/maps/LilycoveCity/scripts.pory"
	.string "properly, too.\p"
# 920 "data/maps/LilycoveCity/scripts.pory"
	.string "Actually, I'm more worried if you're\n"
# 921 "data/maps/LilycoveCity/scripts.pory"
	.string "raising POKéMON properly, {PLAYER}{KUN}.\p"
# 922 "data/maps/LilycoveCity/scripts.pory"
	.string "I'll battle with you, so you can show\n"
# 923 "data/maps/LilycoveCity/scripts.pory"
	.string "me your POKéMON, {PLAYER}{KUN}.$"
# 924 "data/maps/LilycoveCity/scripts.pory"

# 925 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MayNotRaisingPokemon::
# 926 "data/maps/LilycoveCity/scripts.pory"
# 561 "data/maps/LilycoveCity/scripts.pory"
# 927 "data/maps/LilycoveCity/scripts.pory"
	.string "MAY: Oh, why? {PLAYER}{KUN}, haven't you\n"
# 928 "data/maps/LilycoveCity/scripts.pory"
	.string "been raising your POKéMON?\p"
# 929 "data/maps/LilycoveCity/scripts.pory"
	.string "That's not a very good showing as a\n"
# 930 "data/maps/LilycoveCity/scripts.pory"
	.string "TRAINER…$"
# 931 "data/maps/LilycoveCity/scripts.pory"

# 932 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MayBattleMe::
# 933 "data/maps/LilycoveCity/scripts.pory"
# 568 "data/maps/LilycoveCity/scripts.pory"
# 934 "data/maps/LilycoveCity/scripts.pory"
	.string "MAY: Come on, battle with me, so I can\n"
# 935 "data/maps/LilycoveCity/scripts.pory"
	.string "check out your POKéMON!$"
# 936 "data/maps/LilycoveCity/scripts.pory"

# 937 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MayWontBeBeaten::
# 938 "data/maps/LilycoveCity/scripts.pory"
# 573 "data/maps/LilycoveCity/scripts.pory"
# 939 "data/maps/LilycoveCity/scripts.pory"
	.string "MAY: The POKéMON I raised won't be\n"
# 940 "data/maps/LilycoveCity/scripts.pory"
	.string "beaten by your POKéMON, {PLAYER}{KUN}!$"
# 941 "data/maps/LilycoveCity/scripts.pory"

# 942 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MayDefeat::
# 943 "data/maps/LilycoveCity/scripts.pory"
# 578 "data/maps/LilycoveCity/scripts.pory"
# 944 "data/maps/LilycoveCity/scripts.pory"
	.string "… … … … … … … …\p"
# 945 "data/maps/LilycoveCity/scripts.pory"
	.string "I remember the battle I had with you,\n"
# 946 "data/maps/LilycoveCity/scripts.pory"
	.string "{PLAYER}{KUN}, on ROUTE 103.\p"
# 947 "data/maps/LilycoveCity/scripts.pory"
	.string "That battle helped you become this\n"
# 948 "data/maps/LilycoveCity/scripts.pory"
	.string "strong, {PLAYER}{KUN}, didn't it?$"
# 949 "data/maps/LilycoveCity/scripts.pory"

# 950 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MayGoingBackToLittleroot::
# 951 "data/maps/LilycoveCity/scripts.pory"
# 586 "data/maps/LilycoveCity/scripts.pory"
# 952 "data/maps/LilycoveCity/scripts.pory"
	.string "MAY: I'm thinking of going back to\n"
# 953 "data/maps/LilycoveCity/scripts.pory"
	.string "LITTLEROOT soon.\p"
# 954 "data/maps/LilycoveCity/scripts.pory"
	.string "I've caught a decent group of POKéMON,\n"
# 955 "data/maps/LilycoveCity/scripts.pory"
	.string "and my POKéDEX is coming along, so\l"
# 956 "data/maps/LilycoveCity/scripts.pory"
	.string "I'm going home to show my dad.$"
# 957 "data/maps/LilycoveCity/scripts.pory"

# 958 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MayYouGoingToCollectBadges::
# 959 "data/maps/LilycoveCity/scripts.pory"
# 594 "data/maps/LilycoveCity/scripts.pory"
# 960 "data/maps/LilycoveCity/scripts.pory"
	.string "{PLAYER}{KUN}, what are you going to do?\p"
# 961 "data/maps/LilycoveCity/scripts.pory"
	.string "Collect all the GYM BADGES and take\n"
# 962 "data/maps/LilycoveCity/scripts.pory"
	.string "the POKéMON LEAGUE challenge?\p"
# 963 "data/maps/LilycoveCity/scripts.pory"
	.string "Well, while you're collecting BADGES,\n"
# 964 "data/maps/LilycoveCity/scripts.pory"
	.string "{PLAYER}{KUN}, I'm going to work on my\l"
# 965 "data/maps/LilycoveCity/scripts.pory"
	.string "POKéDEX. I'll complete it before you!\p"
# 966 "data/maps/LilycoveCity/scripts.pory"
	.string "See you!$"
# 967 "data/maps/LilycoveCity/scripts.pory"

# 968 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MayYouGoingToPokemonLeague::
# 969 "data/maps/LilycoveCity/scripts.pory"
# 604 "data/maps/LilycoveCity/scripts.pory"
# 970 "data/maps/LilycoveCity/scripts.pory"
	.string "{PLAYER}{KUN}, what are you going to do?\p"
# 971 "data/maps/LilycoveCity/scripts.pory"
	.string "Are you taking the POKéMON LEAGUE\n"
# 972 "data/maps/LilycoveCity/scripts.pory"
	.string "challenge?\p"
# 973 "data/maps/LilycoveCity/scripts.pory"
	.string "Or, are you going to complete your\n"
# 974 "data/maps/LilycoveCity/scripts.pory"
	.string "POKéDEX?\p"
# 975 "data/maps/LilycoveCity/scripts.pory"
	.string "I might've lost to you in battling,\n"
# 976 "data/maps/LilycoveCity/scripts.pory"
	.string "but I'll finish my POKéDEX before you!\p"
# 977 "data/maps/LilycoveCity/scripts.pory"
	.string "See you!$"
# 978 "data/maps/LilycoveCity/scripts.pory"

# 979 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MayYouGoingToBattleFrontier::
# 980 "data/maps/LilycoveCity/scripts.pory"
# 615 "data/maps/LilycoveCity/scripts.pory"
# 981 "data/maps/LilycoveCity/scripts.pory"
	.string "{PLAYER}{KUN}, what are you going to do?\p"
# 982 "data/maps/LilycoveCity/scripts.pory"
	.string "Are you taking the BATTLE FRONTIER\n"
# 983 "data/maps/LilycoveCity/scripts.pory"
	.string "challenge?\p"
# 984 "data/maps/LilycoveCity/scripts.pory"
	.string "Or, are you going to complete your\n"
# 985 "data/maps/LilycoveCity/scripts.pory"
	.string "POKéDEX?\p"
# 986 "data/maps/LilycoveCity/scripts.pory"
	.string "I might've lost to you in battling,\n"
# 987 "data/maps/LilycoveCity/scripts.pory"
	.string "but I'll finish my POKéDEX before you!\p"
# 988 "data/maps/LilycoveCity/scripts.pory"
	.string "See you!$"
# 989 "data/maps/LilycoveCity/scripts.pory"

# 990 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_BrendanShoppingLetsBattle::
# 991 "data/maps/LilycoveCity/scripts.pory"
# 626 "data/maps/LilycoveCity/scripts.pory"
# 992 "data/maps/LilycoveCity/scripts.pory"
	.string "BRENDAN: Oh, hey, it's {PLAYER}.\p"
# 993 "data/maps/LilycoveCity/scripts.pory"
	.string "I'm running an errand for my dad.\n"
# 994 "data/maps/LilycoveCity/scripts.pory"
	.string "No, I'm not buying any DOLLS.\p"
# 995 "data/maps/LilycoveCity/scripts.pory"
	.string "Anyways, it's been a while.\p"
# 996 "data/maps/LilycoveCity/scripts.pory"
	.string "Want to have a battle to see who's been\n"
# 997 "data/maps/LilycoveCity/scripts.pory"
	.string "raising POKéMON better?$"
# 998 "data/maps/LilycoveCity/scripts.pory"

# 999 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_BrendanNoConfidence::
# 1000 "data/maps/LilycoveCity/scripts.pory"
# 635 "data/maps/LilycoveCity/scripts.pory"
# 1001 "data/maps/LilycoveCity/scripts.pory"
	.string "BRENDAN: Oh, what's the matter?\n"
# 1002 "data/maps/LilycoveCity/scripts.pory"
	.string "Don't have the confidence?$"
# 1003 "data/maps/LilycoveCity/scripts.pory"

# 1004 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_BrendanBattleMe::
# 1005 "data/maps/LilycoveCity/scripts.pory"
# 640 "data/maps/LilycoveCity/scripts.pory"
# 1006 "data/maps/LilycoveCity/scripts.pory"
	.string "BRENDAN: Want to battle to see who's\n"
# 1007 "data/maps/LilycoveCity/scripts.pory"
	.string "been raising POKéMON better?$"
# 1008 "data/maps/LilycoveCity/scripts.pory"

# 1009 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_BrendanWontBeBeaten::
# 1010 "data/maps/LilycoveCity/scripts.pory"
# 645 "data/maps/LilycoveCity/scripts.pory"
# 1011 "data/maps/LilycoveCity/scripts.pory"
	.string "BRENDAN: Aww, but you know I'm not\n"
# 1012 "data/maps/LilycoveCity/scripts.pory"
	.string "going to lose to no {PLAYER}.$"
# 1013 "data/maps/LilycoveCity/scripts.pory"

# 1014 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_BrendanDefeat::
# 1015 "data/maps/LilycoveCity/scripts.pory"
# 650 "data/maps/LilycoveCity/scripts.pory"
# 1016 "data/maps/LilycoveCity/scripts.pory"
	.string "Humph…\n"
# 1017 "data/maps/LilycoveCity/scripts.pory"
	.string "You've done a lot of raising.\p"
# 1018 "data/maps/LilycoveCity/scripts.pory"
	.string "That stings a bit--I had a head start\n"
# 1019 "data/maps/LilycoveCity/scripts.pory"
	.string "on you as a TRAINER…$"
# 1020 "data/maps/LilycoveCity/scripts.pory"

# 1021 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_BrendanGoingBackToLittleroot::
# 1022 "data/maps/LilycoveCity/scripts.pory"
# 657 "data/maps/LilycoveCity/scripts.pory"
# 1023 "data/maps/LilycoveCity/scripts.pory"
	.string "BRENDAN: I…\n"
# 1024 "data/maps/LilycoveCity/scripts.pory"
	.string "I plan on going home to LITTLEROOT.\p"
# 1025 "data/maps/LilycoveCity/scripts.pory"
	.string "You know I'm helping out my dad on his\n"
# 1026 "data/maps/LilycoveCity/scripts.pory"
	.string "POKéDEX. It's coming together pretty\l"
# 1027 "data/maps/LilycoveCity/scripts.pory"
	.string "decently, so I should go show him.$"
# 1028 "data/maps/LilycoveCity/scripts.pory"

# 1029 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_BrendanYouGoingToCollectBadges::
# 1030 "data/maps/LilycoveCity/scripts.pory"
# 665 "data/maps/LilycoveCity/scripts.pory"
# 1031 "data/maps/LilycoveCity/scripts.pory"
	.string "{PLAYER}, what are you going to do?\p"
# 1032 "data/maps/LilycoveCity/scripts.pory"
	.string "Collect all the GYM BADGES and take\n"
# 1033 "data/maps/LilycoveCity/scripts.pory"
	.string "the POKéMON LEAGUE challenge?\p"
# 1034 "data/maps/LilycoveCity/scripts.pory"
	.string "Maybe I'll do that, too…\p"
# 1035 "data/maps/LilycoveCity/scripts.pory"
	.string "Well, anyway, hang in there!$"
# 1036 "data/maps/LilycoveCity/scripts.pory"

# 1037 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_BrendanYouGoingToPokemonLeague::
# 1038 "data/maps/LilycoveCity/scripts.pory"
# 673 "data/maps/LilycoveCity/scripts.pory"
# 1039 "data/maps/LilycoveCity/scripts.pory"
	.string "{PLAYER}, what are you going to do?\p"
# 1040 "data/maps/LilycoveCity/scripts.pory"
	.string "Since you're that strong, are you\n"
# 1041 "data/maps/LilycoveCity/scripts.pory"
	.string "taking the POKéMON LEAGUE challenge?\p"
# 1042 "data/maps/LilycoveCity/scripts.pory"
	.string "Heh, even me--if I trained my POKéMON\n"
# 1043 "data/maps/LilycoveCity/scripts.pory"
	.string "a bit more, I should be stronger than\l"
# 1044 "data/maps/LilycoveCity/scripts.pory"
	.string "you, {PLAYER}.\p"
# 1045 "data/maps/LilycoveCity/scripts.pory"
	.string "Well, anyway, hang in there!$"
# 1046 "data/maps/LilycoveCity/scripts.pory"

# 1047 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_BrendanYouGoingToBattleFrontier::
# 1048 "data/maps/LilycoveCity/scripts.pory"
# 683 "data/maps/LilycoveCity/scripts.pory"
# 1049 "data/maps/LilycoveCity/scripts.pory"
	.string "{PLAYER}, what are you going to do?\p"
# 1050 "data/maps/LilycoveCity/scripts.pory"
	.string "Are you taking the BATTLE FRONTIER\n"
# 1051 "data/maps/LilycoveCity/scripts.pory"
	.string "challenge?\p"
# 1052 "data/maps/LilycoveCity/scripts.pory"
	.string "Or, are you going to complete your\n"
# 1053 "data/maps/LilycoveCity/scripts.pory"
	.string "POKéDEX?\p"
# 1054 "data/maps/LilycoveCity/scripts.pory"
	.string "Since you're that strong, you should\n"
# 1055 "data/maps/LilycoveCity/scripts.pory"
	.string "consider the BATTLE FRONTIER.\p"
# 1056 "data/maps/LilycoveCity/scripts.pory"
	.string "Heh, if I train my POKéMON a bit more,\n"
# 1057 "data/maps/LilycoveCity/scripts.pory"
	.string "I'll get stronger than you, {PLAYER}.\p"
# 1058 "data/maps/LilycoveCity/scripts.pory"
	.string "Maybe I should go to the BATTLE\n"
# 1059 "data/maps/LilycoveCity/scripts.pory"
	.string "FRONTIER.\p"
# 1060 "data/maps/LilycoveCity/scripts.pory"
	.string "Well, anyway, hang in there!$"
# 1061 "data/maps/LilycoveCity/scripts.pory"

# 1062 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MovedLootIntoHideoutToday::
# 1063 "data/maps/LilycoveCity/scripts.pory"
# 698 "data/maps/LilycoveCity/scripts.pory"
# 1064 "data/maps/LilycoveCity/scripts.pory"
	.string "Fufufu…\p"
# 1065 "data/maps/LilycoveCity/scripts.pory"
	.string "We moved more loot into our secret\n"
# 1066 "data/maps/LilycoveCity/scripts.pory"
	.string "HIDEOUT today…\p"
# 1067 "data/maps/LilycoveCity/scripts.pory"
	.string "Wh-who are you?!\n"
# 1068 "data/maps/LilycoveCity/scripts.pory"
	.string "I was just talking to myself!$"
# 1069 "data/maps/LilycoveCity/scripts.pory"

# 1070 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_ChanceToDoBigThings::
# 1071 "data/maps/LilycoveCity/scripts.pory"
# 706 "data/maps/LilycoveCity/scripts.pory"
# 1072 "data/maps/LilycoveCity/scripts.pory"
	.string "I'm just a GRUNT, so I don't know what\n"
# 1073 "data/maps/LilycoveCity/scripts.pory"
	.string "the BOSS is thinking…\p"
# 1074 "data/maps/LilycoveCity/scripts.pory"
	.string "But being on TEAM AQUA, I know I'll get\n"
# 1075 "data/maps/LilycoveCity/scripts.pory"
	.string "the chance to do big things!\p"
# 1076 "data/maps/LilycoveCity/scripts.pory"
	.string "Wh-who are you?!\n"
# 1077 "data/maps/LilycoveCity/scripts.pory"
	.string "I was just talking to myself!$"
# 1078 "data/maps/LilycoveCity/scripts.pory"

# 1079 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_DontGoNearCaveInCove::
# 1080 "data/maps/LilycoveCity/scripts.pory"
# 715 "data/maps/LilycoveCity/scripts.pory"
# 1081 "data/maps/LilycoveCity/scripts.pory"
	.string "Hey, you!\p"
# 1082 "data/maps/LilycoveCity/scripts.pory"
	.string "Don't go near the cave in the cove!\p"
# 1083 "data/maps/LilycoveCity/scripts.pory"
	.string "Why? You don't need a reason why!\n"
# 1084 "data/maps/LilycoveCity/scripts.pory"
	.string "I'm an adult, so you just listen to me!$"
# 1085 "data/maps/LilycoveCity/scripts.pory"

# 1086 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_IfWorldBecomesOurs::
# 1087 "data/maps/LilycoveCity/scripts.pory"
# 722 "data/maps/LilycoveCity/scripts.pory"
# 1088 "data/maps/LilycoveCity/scripts.pory"
	.string "If this whole wide world becomes ours,\n"
# 1089 "data/maps/LilycoveCity/scripts.pory"
	.string "TEAM AQUA's, it will be a happier\l"
# 1090 "data/maps/LilycoveCity/scripts.pory"
	.string "place for POKéMON, too.$"
# 1091 "data/maps/LilycoveCity/scripts.pory"

# 1092 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_WailmerLeapOutOfWater::
# 1093 "data/maps/LilycoveCity/scripts.pory"
# 728 "data/maps/LilycoveCity/scripts.pory"
# 1094 "data/maps/LilycoveCity/scripts.pory"
	.string "There! WAILMER!\n"
# 1095 "data/maps/LilycoveCity/scripts.pory"
	.string "Leap out of the water now!$"
# 1096 "data/maps/LilycoveCity/scripts.pory"

# 1097 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_GetLostMessingUpTraining::
# 1098 "data/maps/LilycoveCity/scripts.pory"
# 733 "data/maps/LilycoveCity/scripts.pory"
# 1099 "data/maps/LilycoveCity/scripts.pory"
	.string "Hunh? What do you want?\p"
# 1100 "data/maps/LilycoveCity/scripts.pory"
	.string "You're messing up our training,\n"
# 1101 "data/maps/LilycoveCity/scripts.pory"
	.string "so can you, like, get lost?$"
# 1102 "data/maps/LilycoveCity/scripts.pory"

# 1103 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_ContestHallInTown::
# 1104 "data/maps/LilycoveCity/scripts.pory"
# 739 "data/maps/LilycoveCity/scripts.pory"
# 1105 "data/maps/LilycoveCity/scripts.pory"
	.string "There's a POKéMON CONTEST HALL\n"
# 1106 "data/maps/LilycoveCity/scripts.pory"
	.string "right in this here town. \p"
# 1107 "data/maps/LilycoveCity/scripts.pory"
	.string "That means well-raised POKéMON will\n"
# 1108 "data/maps/LilycoveCity/scripts.pory"
	.string "come from all over the country.\p"
# 1109 "data/maps/LilycoveCity/scripts.pory"
	.string "My heart swells with excitement!$"
# 1110 "data/maps/LilycoveCity/scripts.pory"

# 1111 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_StrangeCaveInCove::
# 1112 "data/maps/LilycoveCity/scripts.pory"
# 747 "data/maps/LilycoveCity/scripts.pory"
# 1113 "data/maps/LilycoveCity/scripts.pory"
	.string "Have you seen that strange cave in\n"
# 1114 "data/maps/LilycoveCity/scripts.pory"
	.string "the cove at the edge of town?$"
# 1115 "data/maps/LilycoveCity/scripts.pory"

# 1116 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_GoingToMoveDeleterForHMs::
# 1117 "data/maps/LilycoveCity/scripts.pory"
# 752 "data/maps/LilycoveCity/scripts.pory"
# 1118 "data/maps/LilycoveCity/scripts.pory"
	.string "I'm going to teach my POKéMON some new\n"
# 1119 "data/maps/LilycoveCity/scripts.pory"
	.string "moves for entering a CONTEST.\p"
# 1120 "data/maps/LilycoveCity/scripts.pory"
	.string "So, I'm going to see the MOVE DELETER\n"
# 1121 "data/maps/LilycoveCity/scripts.pory"
	.string "and make it forget HM moves.$"
# 1122 "data/maps/LilycoveCity/scripts.pory"

# 1123 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_ImFromKanto::
# 1124 "data/maps/LilycoveCity/scripts.pory"
# 759 "data/maps/LilycoveCity/scripts.pory"
# 1125 "data/maps/LilycoveCity/scripts.pory"
	.string "I came from KANTO.\p"
# 1126 "data/maps/LilycoveCity/scripts.pory"
	.string "The HOENN region is beautiful with\n"
# 1127 "data/maps/LilycoveCity/scripts.pory"
	.string "all its water and verdant nature.\p"
# 1128 "data/maps/LilycoveCity/scripts.pory"
	.string "Hunh? Wait a second…\p"
# 1129 "data/maps/LilycoveCity/scripts.pory"
	.string "Could there be rare POKéMON that live\n"
# 1130 "data/maps/LilycoveCity/scripts.pory"
	.string "only in this area?$"
# 1131 "data/maps/LilycoveCity/scripts.pory"

# 1132 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_TeamAquaBeenTrainingWailmer::
# 1133 "data/maps/LilycoveCity/scripts.pory"
# 768 "data/maps/LilycoveCity/scripts.pory"
# 1134 "data/maps/LilycoveCity/scripts.pory"
	.string "TEAM AQUA's been training their\n"
# 1135 "data/maps/LilycoveCity/scripts.pory"
	.string "WAILMER in the cove.\p"
# 1136 "data/maps/LilycoveCity/scripts.pory"
	.string "We SAILORS can't get our boats out\n"
# 1137 "data/maps/LilycoveCity/scripts.pory"
	.string "to sea with them in the way!$"
# 1138 "data/maps/LilycoveCity/scripts.pory"

# 1139 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_SomeonePuntedTeamAquaOut::
# 1140 "data/maps/LilycoveCity/scripts.pory"
# 775 "data/maps/LilycoveCity/scripts.pory"
# 1141 "data/maps/LilycoveCity/scripts.pory"
	.string "Ahoy, did you know?\p"
# 1142 "data/maps/LilycoveCity/scripts.pory"
	.string "Someone punted TEAM AQUA out of\n"
# 1143 "data/maps/LilycoveCity/scripts.pory"
	.string "the way for us!\p"
# 1144 "data/maps/LilycoveCity/scripts.pory"
	.string "That got the WAILMER out of the cove,\n"
# 1145 "data/maps/LilycoveCity/scripts.pory"
	.string "so we can get our boats out again.$"
# 1146 "data/maps/LilycoveCity/scripts.pory"

# 1147 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_SomeoneStoleMyPokemon::
# 1148 "data/maps/LilycoveCity/scripts.pory"
# 783 "data/maps/LilycoveCity/scripts.pory"
# 1149 "data/maps/LilycoveCity/scripts.pory"
	.string "I was taking a relaxing snooze at the\n"
# 1150 "data/maps/LilycoveCity/scripts.pory"
	.string "seaside inn to the sound of waves…\p"
# 1151 "data/maps/LilycoveCity/scripts.pory"
	.string "When someone stole my POKéMON!\p"
# 1152 "data/maps/LilycoveCity/scripts.pory"
	.string "Who's the abductor?\n"
# 1153 "data/maps/LilycoveCity/scripts.pory"
	.string "TEAM AQUA? Is it TEAM AQUA?$"
# 1154 "data/maps/LilycoveCity/scripts.pory"

# 1155 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MissingPokemonCameBack::
# 1156 "data/maps/LilycoveCity/scripts.pory"
# 791 "data/maps/LilycoveCity/scripts.pory"
# 1157 "data/maps/LilycoveCity/scripts.pory"
	.string "My missing POKéMON…\n"
# 1158 "data/maps/LilycoveCity/scripts.pory"
	.string "It came back without me noticing!$"
# 1159 "data/maps/LilycoveCity/scripts.pory"

# 1160 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_ImArtDealer::
# 1161 "data/maps/LilycoveCity/scripts.pory"
# 796 "data/maps/LilycoveCity/scripts.pory"
# 1162 "data/maps/LilycoveCity/scripts.pory"
	.string "I'm an ART DEALER.\p"
# 1163 "data/maps/LilycoveCity/scripts.pory"
	.string "I am a buyer and seller of fine art,\n"
# 1164 "data/maps/LilycoveCity/scripts.pory"
	.string "especially paintings.\p"
# 1165 "data/maps/LilycoveCity/scripts.pory"
	.string "I've heard that the MUSEUM here has\n"
# 1166 "data/maps/LilycoveCity/scripts.pory"
	.string "magnificent works on exhibit…$"
# 1167 "data/maps/LilycoveCity/scripts.pory"

# 1168 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_SeaRemainsForeverYoung::
# 1169 "data/maps/LilycoveCity/scripts.pory"
# 804 "data/maps/LilycoveCity/scripts.pory"
# 1170 "data/maps/LilycoveCity/scripts.pory"
	.string "Even as we grow old and wrinkled,\n"
# 1171 "data/maps/LilycoveCity/scripts.pory"
	.string "the sea remains forever young with\l"
# 1172 "data/maps/LilycoveCity/scripts.pory"
	.string "the vivid brilliance of life…\p"
# 1173 "data/maps/LilycoveCity/scripts.pory"
	.string "Fwohoho fwohohohoho…$"
# 1174 "data/maps/LilycoveCity/scripts.pory"

# 1175 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_SixtyYearsAgoHusbandProposed::
# 1176 "data/maps/LilycoveCity/scripts.pory"
# 811 "data/maps/LilycoveCity/scripts.pory"
# 1177 "data/maps/LilycoveCity/scripts.pory"
	.string "It was sixty years ago that my husband\n"
# 1178 "data/maps/LilycoveCity/scripts.pory"
	.string "proposed to me here.\l"
# 1179 "data/maps/LilycoveCity/scripts.pory"
	.string "The sea remains as beautiful as ever.\p"
# 1180 "data/maps/LilycoveCity/scripts.pory"
	.string "Mufufufu mufufufufufu…$"
# 1181 "data/maps/LilycoveCity/scripts.pory"

# 1182 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_TeamAquaRenovatedCavern::
# 1183 "data/maps/LilycoveCity/scripts.pory"
# 818 "data/maps/LilycoveCity/scripts.pory"
# 1184 "data/maps/LilycoveCity/scripts.pory"
	.string "Hm, you know of the peculiar cavern\n"
# 1185 "data/maps/LilycoveCity/scripts.pory"
	.string "in this cove?\p"
# 1186 "data/maps/LilycoveCity/scripts.pory"
	.string "That had been a natural formation,\n"
# 1187 "data/maps/LilycoveCity/scripts.pory"
	.string "but then that TEAM AQUA lot came\l"
# 1188 "data/maps/LilycoveCity/scripts.pory"
	.string "along and made their renovations.\p"
# 1189 "data/maps/LilycoveCity/scripts.pory"
	.string "They call themselves\n"
# 1190 "data/maps/LilycoveCity/scripts.pory"
	.string "the “nature-loving TEAM AQUA”!\p"
# 1191 "data/maps/LilycoveCity/scripts.pory"
	.string "But what they do and what they say\n"
# 1192 "data/maps/LilycoveCity/scripts.pory"
	.string "don't match at all!$"
# 1193 "data/maps/LilycoveCity/scripts.pory"

# 1194 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_TeamAquaLotGoneForGood::
# 1195 "data/maps/LilycoveCity/scripts.pory"
# 830 "data/maps/LilycoveCity/scripts.pory"
# 1196 "data/maps/LilycoveCity/scripts.pory"
	.string "That cave in the cove…\p"
# 1197 "data/maps/LilycoveCity/scripts.pory"
	.string "I didn't notice it right away,\n"
# 1198 "data/maps/LilycoveCity/scripts.pory"
	.string "but it's completely empty now.\p"
# 1199 "data/maps/LilycoveCity/scripts.pory"
	.string "That TEAM AQUA lot, they must\n"
# 1200 "data/maps/LilycoveCity/scripts.pory"
	.string "have gone away for good.$"
# 1201 "data/maps/LilycoveCity/scripts.pory"

# 1202 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_CitySign::
# 1203 "data/maps/LilycoveCity/scripts.pory"
# 838 "data/maps/LilycoveCity/scripts.pory"
# 1204 "data/maps/LilycoveCity/scripts.pory"
	.string "LILYCOVE CITY\p"
# 1205 "data/maps/LilycoveCity/scripts.pory"
	.string "“Where the land ends and the\n"
# 1206 "data/maps/LilycoveCity/scripts.pory"
	.string "sea begins.”$"
# 1207 "data/maps/LilycoveCity/scripts.pory"

# 1208 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_ContestHallSign::
# 1209 "data/maps/LilycoveCity/scripts.pory"
# 844 "data/maps/LilycoveCity/scripts.pory"
# 1210 "data/maps/LilycoveCity/scripts.pory"
	.string "POKéMON CONTEST HALL\n"
# 1211 "data/maps/LilycoveCity/scripts.pory"
	.string "“The gathering place for TRAINERS!”$"
# 1212 "data/maps/LilycoveCity/scripts.pory"

# 1213 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MotelSign::
# 1214 "data/maps/LilycoveCity/scripts.pory"
# 849 "data/maps/LilycoveCity/scripts.pory"
# 1215 "data/maps/LilycoveCity/scripts.pory"
	.string "COVE LILY MOTEL\p"
# 1216 "data/maps/LilycoveCity/scripts.pory"
	.string "“Remember us as COVE LILY of\n"
# 1217 "data/maps/LilycoveCity/scripts.pory"
	.string "LILYCOVE.”$"
# 1218 "data/maps/LilycoveCity/scripts.pory"

# 1219 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MuseumSign::
# 1220 "data/maps/LilycoveCity/scripts.pory"
# 855 "data/maps/LilycoveCity/scripts.pory"
# 1221 "data/maps/LilycoveCity/scripts.pory"
	.string "LILYCOVE MUSEUM\p"
# 1222 "data/maps/LilycoveCity/scripts.pory"
	.string "“POKéMON Masterpiece Collection\n"
# 1223 "data/maps/LilycoveCity/scripts.pory"
	.string "on exhibit!”$"
# 1224 "data/maps/LilycoveCity/scripts.pory"

# 1225 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MuseumSignPlayersExhibit::
# 1226 "data/maps/LilycoveCity/scripts.pory"
# 861 "data/maps/LilycoveCity/scripts.pory"
# 1227 "data/maps/LilycoveCity/scripts.pory"
	.string "LILYCOVE MUSEUM\p"
# 1228 "data/maps/LilycoveCity/scripts.pory"
	.string "“{PLAYER}'s POKéMON Collection\n"
# 1229 "data/maps/LilycoveCity/scripts.pory"
	.string "on exhibit!”$"
# 1230 "data/maps/LilycoveCity/scripts.pory"

# 1231 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_HarborSignUnderConstruction::
# 1232 "data/maps/LilycoveCity/scripts.pory"
# 867 "data/maps/LilycoveCity/scripts.pory"
# 1233 "data/maps/LilycoveCity/scripts.pory"
	.string "LILYCOVE CITY HARBOR\p"
# 1234 "data/maps/LilycoveCity/scripts.pory"
	.string "“The ferry S.S. TIDAL is under\n"
# 1235 "data/maps/LilycoveCity/scripts.pory"
	.string "construction in SLATEPORT CITY.\p"
# 1236 "data/maps/LilycoveCity/scripts.pory"
	.string "“Service is scheduled to begin\n"
# 1237 "data/maps/LilycoveCity/scripts.pory"
	.string "shortly.”$"
# 1238 "data/maps/LilycoveCity/scripts.pory"

# 1239 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_HarborSign::
# 1240 "data/maps/LilycoveCity/scripts.pory"
# 875 "data/maps/LilycoveCity/scripts.pory"
# 1241 "data/maps/LilycoveCity/scripts.pory"
	.string "LILYCOVE CITY HARBOR\p"
# 1242 "data/maps/LilycoveCity/scripts.pory"
	.string "“Enjoy a delightful cruise on\n"
# 1243 "data/maps/LilycoveCity/scripts.pory"
	.string "the ferry S.S. TIDAL.”$"
# 1244 "data/maps/LilycoveCity/scripts.pory"

# 1245 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_TrainerFanClubSign::
# 1246 "data/maps/LilycoveCity/scripts.pory"
# 881 "data/maps/LilycoveCity/scripts.pory"
# 1247 "data/maps/LilycoveCity/scripts.pory"
	.string "POKéMON TRAINER FAN CLUB\p"
# 1248 "data/maps/LilycoveCity/scripts.pory"
	.string "The names of TRAINERS are scribbled\n"
# 1249 "data/maps/LilycoveCity/scripts.pory"
	.string "all over the sign…$"
# 1250 "data/maps/LilycoveCity/scripts.pory"

# 1251 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_DepartmentStoreSign::
# 1252 "data/maps/LilycoveCity/scripts.pory"
# 887 "data/maps/LilycoveCity/scripts.pory"
# 1253 "data/maps/LilycoveCity/scripts.pory"
	.string "LILYCOVE DEPARTMENT STORE\p"
# 1254 "data/maps/LilycoveCity/scripts.pory"
	.string "“Overflowing with great merchandise\n"
# 1255 "data/maps/LilycoveCity/scripts.pory"
	.string "and excitement!\p"
# 1256 "data/maps/LilycoveCity/scripts.pory"
	.string "“A great place to find that something\n"
# 1257 "data/maps/LilycoveCity/scripts.pory"
	.string "you need!”$"
# 1258 "data/maps/LilycoveCity/scripts.pory"

# 1259 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MoveDeletersHouseSign::
# 1260 "data/maps/LilycoveCity/scripts.pory"
# 895 "data/maps/LilycoveCity/scripts.pory"
# 1261 "data/maps/LilycoveCity/scripts.pory"
	.string "MOVE DELETER'S HOUSE\p"
# 1262 "data/maps/LilycoveCity/scripts.pory"
	.string "“Unwanted POKéMON moves deleted.”$"
# 1263 "data/maps/LilycoveCity/scripts.pory"

# 1264 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_DoYouKnowAboutBerryBlender::
# 1265 "data/maps/LilycoveCity/scripts.pory"
# 900 "data/maps/LilycoveCity/scripts.pory"
# 1266 "data/maps/LilycoveCity/scripts.pory"
	.string "Do you know about the machine\n"
# 1267 "data/maps/LilycoveCity/scripts.pory"
	.string "BERRY BLENDER?$"
# 1268 "data/maps/LilycoveCity/scripts.pory"

# 1269 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_FasterSpinBetterPokeblocks::
# 1270 "data/maps/LilycoveCity/scripts.pory"
# 905 "data/maps/LilycoveCity/scripts.pory"
# 1271 "data/maps/LilycoveCity/scripts.pory"
	.string "People have to work together to get it\n"
# 1272 "data/maps/LilycoveCity/scripts.pory"
	.string "to spin faster.\p"
# 1273 "data/maps/LilycoveCity/scripts.pory"
	.string "The faster you can make it spin, the\n"
# 1274 "data/maps/LilycoveCity/scripts.pory"
	.string "better {POKEBLOCK}S you can get, I've heard.$"
# 1275 "data/maps/LilycoveCity/scripts.pory"

# 1276 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_ExplainBerryBlender::
# 1277 "data/maps/LilycoveCity/scripts.pory"
# 912 "data/maps/LilycoveCity/scripts.pory"
# 1278 "data/maps/LilycoveCity/scripts.pory"
	.string "It's used for making a kind of candy\n"
# 1279 "data/maps/LilycoveCity/scripts.pory"
	.string "called a {POKEBLOCK}.\p"
# 1280 "data/maps/LilycoveCity/scripts.pory"
	.string "If you give a good {POKEBLOCK} to a POKéMON,\n"
# 1281 "data/maps/LilycoveCity/scripts.pory"
	.string "its condition will improve by a lot.$"
# 1282 "data/maps/LilycoveCity/scripts.pory"

# 1283 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_HeardTowerCalledSkyPillar::
# 1284 "data/maps/LilycoveCity/scripts.pory"
# 919 "data/maps/LilycoveCity/scripts.pory"
# 1285 "data/maps/LilycoveCity/scripts.pory"
	.string "I heard there's a tower somewhere out\n"
# 1286 "data/maps/LilycoveCity/scripts.pory"
	.string "on the sea routes.\p"
# 1287 "data/maps/LilycoveCity/scripts.pory"
	.string "It's called the SKY PILLAR, I hear.$"
# 1288 "data/maps/LilycoveCity/scripts.pory"

# 1289 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_SawTallTowerOnRoute131::
# 1290 "data/maps/LilycoveCity/scripts.pory"
# 925 "data/maps/LilycoveCity/scripts.pory"
# 1291 "data/maps/LilycoveCity/scripts.pory"
	.string "I saw this tall tower somewhere\n"
# 1292 "data/maps/LilycoveCity/scripts.pory"
	.string "around ROUTE 131.\p"
# 1293 "data/maps/LilycoveCity/scripts.pory"
	.string "Could that possibly be…?$"
# 1294 "data/maps/LilycoveCity/scripts.pory"

# 1295 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_JustArrivedAndSawRarePokemon::
# 1296 "data/maps/LilycoveCity/scripts.pory"
# 931 "data/maps/LilycoveCity/scripts.pory"
# 1297 "data/maps/LilycoveCity/scripts.pory"
	.string "We just arrived here on our\n"
# 1298 "data/maps/LilycoveCity/scripts.pory"
	.string "honeymoon vacation.\p"
# 1299 "data/maps/LilycoveCity/scripts.pory"
	.string "We happened to see a DRAGON-type\n"
# 1300 "data/maps/LilycoveCity/scripts.pory"
	.string "POKéMON flying way up in the sky.\p"
# 1301 "data/maps/LilycoveCity/scripts.pory"
	.string "Do cool POKéMON like that live in\n"
# 1302 "data/maps/LilycoveCity/scripts.pory"
	.string "the HOENN region?$"
# 1303 "data/maps/LilycoveCity/scripts.pory"

# 1304 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_HoneymoonVowToSeeRarePokemon::
# 1305 "data/maps/LilycoveCity/scripts.pory"
# 940 "data/maps/LilycoveCity/scripts.pory"
# 1306 "data/maps/LilycoveCity/scripts.pory"
	.string "On our honeymoon, we vowed to see as\n"
# 1307 "data/maps/LilycoveCity/scripts.pory"
	.string "many rare POKéMON as we can.\p"
# 1308 "data/maps/LilycoveCity/scripts.pory"
	.string "So we were delighted to see a rare\n"
# 1309 "data/maps/LilycoveCity/scripts.pory"
	.string "POKéMON as soon as we arrived.\p"
# 1310 "data/maps/LilycoveCity/scripts.pory"
	.string "I mean, we are totally happy!$"
