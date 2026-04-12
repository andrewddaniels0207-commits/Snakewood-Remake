# 1 "data/maps/Route12_Frlg/scripts.pory"

# 2 "data/maps/Route12_Frlg/scripts.pory"
Route12_Frlg_MapScripts::
# 3 "data/maps/Route12_Frlg/scripts.pory"
# 2 "data/maps/Route12_Frlg/scripts.pory"
# 4 "data/maps/Route12_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Route12_OnResume
# 5 "data/maps/Route12_Frlg/scripts.pory"
	.byte 0
# 6 "data/maps/Route12_Frlg/scripts.pory"

# 7 "data/maps/Route12_Frlg/scripts.pory"

# 8 "data/maps/Route12_Frlg/scripts.pory"
Route12_OnResume::
# 9 "data/maps/Route12_Frlg/scripts.pory"
# 6 "data/maps/Route12_Frlg/scripts.pory"
# 10 "data/maps/Route12_Frlg/scripts.pory"
	goto_if_set FLAG_SYS_CTRL_OBJ_DELETE, Route12_OnResume_2
# 11 "data/maps/Route12_Frlg/scripts.pory"
Route12_OnResume_1:
# 12 "data/maps/Route12_Frlg/scripts.pory"
	end
# 13 "data/maps/Route12_Frlg/scripts.pory"

# 14 "data/maps/Route12_Frlg/scripts.pory"
Route12_OnResume_2:
# 15 "data/maps/Route12_Frlg/scripts.pory"
# 7 "data/maps/Route12_Frlg/scripts.pory"
# 16 "data/maps/Route12_Frlg/scripts.pory"
	call Route12_EventScript_TryRemoveSnorlax
# 17 "data/maps/Route12_Frlg/scripts.pory"
	goto Route12_OnResume_1
# 18 "data/maps/Route12_Frlg/scripts.pory"

# 19 "data/maps/Route12_Frlg/scripts.pory"

# 20 "data/maps/Route12_Frlg/scripts.pory"
Route12_EventScript_TryRemoveSnorlax::
# 21 "data/maps/Route12_Frlg/scripts.pory"
# 13 "data/maps/Route12_Frlg/scripts.pory"
# 22 "data/maps/Route12_Frlg/scripts.pory"
	removeobject VAR_LAST_TALKED
# 23 "data/maps/Route12_Frlg/scripts.pory"
	return
# 24 "data/maps/Route12_Frlg/scripts.pory"

# 25 "data/maps/Route12_Frlg/scripts.pory"

# 26 "data/maps/Route12_Frlg/scripts.pory"
Route12_EventScript_Snorlax::
# 27 "data/maps/Route12_Frlg/scripts.pory"
# 18 "data/maps/Route12_Frlg/scripts.pory"
# 28 "data/maps/Route12_Frlg/scripts.pory"
	lock
# 29 "data/maps/Route12_Frlg/scripts.pory"
# 19 "data/maps/Route12_Frlg/scripts.pory"
# 30 "data/maps/Route12_Frlg/scripts.pory"
	faceplayer
# 31 "data/maps/Route12_Frlg/scripts.pory"
# 20 "data/maps/Route12_Frlg/scripts.pory"
# 32 "data/maps/Route12_Frlg/scripts.pory"
	goto_if_unset FLAG_GOT_POKE_FLUTE, Route12_EventScript_Snorlax_2
# 33 "data/maps/Route12_Frlg/scripts.pory"
Route12_EventScript_Snorlax_1:
# 34 "data/maps/Route12_Frlg/scripts.pory"
# 23 "data/maps/Route12_Frlg/scripts.pory"
# 35 "data/maps/Route12_Frlg/scripts.pory"
	msgbox Text_WantToUsePokeFlute, MSGBOX_YESNO
# 36 "data/maps/Route12_Frlg/scripts.pory"
# 24 "data/maps/Route12_Frlg/scripts.pory"
# 37 "data/maps/Route12_Frlg/scripts.pory"
	compare VAR_RESULT, NO
# 38 "data/maps/Route12_Frlg/scripts.pory"
	goto_if_eq Route12_EventScript_Snorlax_5
# 39 "data/maps/Route12_Frlg/scripts.pory"
Route12_EventScript_Snorlax_4:
# 40 "data/maps/Route12_Frlg/scripts.pory"
# 27 "data/maps/Route12_Frlg/scripts.pory"
# 41 "data/maps/Route12_Frlg/scripts.pory"
	call EventScript_AwakenSnorlax
# 42 "data/maps/Route12_Frlg/scripts.pory"
# 28 "data/maps/Route12_Frlg/scripts.pory"
# 43 "data/maps/Route12_Frlg/scripts.pory"
	setwildbattle SPECIES_SNORLAX, 30
# 44 "data/maps/Route12_Frlg/scripts.pory"
# 29 "data/maps/Route12_Frlg/scripts.pory"
# 45 "data/maps/Route12_Frlg/scripts.pory"
	waitse
# 46 "data/maps/Route12_Frlg/scripts.pory"
# 30 "data/maps/Route12_Frlg/scripts.pory"
# 47 "data/maps/Route12_Frlg/scripts.pory"
	playmoncry SPECIES_SNORLAX, CRY_MODE_ENCOUNTER
# 48 "data/maps/Route12_Frlg/scripts.pory"
# 31 "data/maps/Route12_Frlg/scripts.pory"
# 49 "data/maps/Route12_Frlg/scripts.pory"
	delay 40
# 50 "data/maps/Route12_Frlg/scripts.pory"
# 32 "data/maps/Route12_Frlg/scripts.pory"
# 51 "data/maps/Route12_Frlg/scripts.pory"
	waitmoncry
# 52 "data/maps/Route12_Frlg/scripts.pory"
# 33 "data/maps/Route12_Frlg/scripts.pory"
# 53 "data/maps/Route12_Frlg/scripts.pory"
	setflag FLAG_HIDE_ROUTE_12_SNORLAX
# 54 "data/maps/Route12_Frlg/scripts.pory"
# 34 "data/maps/Route12_Frlg/scripts.pory"
# 55 "data/maps/Route12_Frlg/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 56 "data/maps/Route12_Frlg/scripts.pory"
# 35 "data/maps/Route12_Frlg/scripts.pory"
# 57 "data/maps/Route12_Frlg/scripts.pory"
	setflag FLAG_WOKE_UP_ROUTE_12_SNORLAX
# 58 "data/maps/Route12_Frlg/scripts.pory"
# 36 "data/maps/Route12_Frlg/scripts.pory"
# 59 "data/maps/Route12_Frlg/scripts.pory"
	dowildbattle
# 60 "data/maps/Route12_Frlg/scripts.pory"
# 37 "data/maps/Route12_Frlg/scripts.pory"
# 61 "data/maps/Route12_Frlg/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 62 "data/maps/Route12_Frlg/scripts.pory"
# 38 "data/maps/Route12_Frlg/scripts.pory"
# 63 "data/maps/Route12_Frlg/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 64 "data/maps/Route12_Frlg/scripts.pory"
# 39 "data/maps/Route12_Frlg/scripts.pory"
# 65 "data/maps/Route12_Frlg/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
# 66 "data/maps/Route12_Frlg/scripts.pory"
	goto_if_eq Route12_EventScript_Snorlax_8
# 67 "data/maps/Route12_Frlg/scripts.pory"
Route12_EventScript_Snorlax_7:
# 68 "data/maps/Route12_Frlg/scripts.pory"
# 42 "data/maps/Route12_Frlg/scripts.pory"
# 69 "data/maps/Route12_Frlg/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
# 70 "data/maps/Route12_Frlg/scripts.pory"
	goto_if_eq Route12_EventScript_Snorlax_11
# 71 "data/maps/Route12_Frlg/scripts.pory"
Route12_EventScript_Snorlax_10:
# 72 "data/maps/Route12_Frlg/scripts.pory"
# 45 "data/maps/Route12_Frlg/scripts.pory"
# 73 "data/maps/Route12_Frlg/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
# 74 "data/maps/Route12_Frlg/scripts.pory"
	goto_if_eq Route12_EventScript_Snorlax_14
# 75 "data/maps/Route12_Frlg/scripts.pory"
Route12_EventScript_Snorlax_13:
# 76 "data/maps/Route12_Frlg/scripts.pory"
# 48 "data/maps/Route12_Frlg/scripts.pory"
# 77 "data/maps/Route12_Frlg/scripts.pory"
	release
# 78 "data/maps/Route12_Frlg/scripts.pory"
	end
# 79 "data/maps/Route12_Frlg/scripts.pory"

# 80 "data/maps/Route12_Frlg/scripts.pory"
Route12_EventScript_Snorlax_2:
# 81 "data/maps/Route12_Frlg/scripts.pory"
# 21 "data/maps/Route12_Frlg/scripts.pory"
# 82 "data/maps/Route12_Frlg/scripts.pory"
	goto Route12_EventScript_SnorlaxNoPokeFlute
# 83 "data/maps/Route12_Frlg/scripts.pory"
	goto Route12_EventScript_Snorlax_1
# 84 "data/maps/Route12_Frlg/scripts.pory"

# 85 "data/maps/Route12_Frlg/scripts.pory"
Route12_EventScript_Snorlax_5:
# 86 "data/maps/Route12_Frlg/scripts.pory"
# 25 "data/maps/Route12_Frlg/scripts.pory"
# 87 "data/maps/Route12_Frlg/scripts.pory"
	goto Route12_EventScript_DontUsePokeFlute
# 88 "data/maps/Route12_Frlg/scripts.pory"
	goto Route12_EventScript_Snorlax_4
# 89 "data/maps/Route12_Frlg/scripts.pory"

# 90 "data/maps/Route12_Frlg/scripts.pory"
Route12_EventScript_Snorlax_8:
# 91 "data/maps/Route12_Frlg/scripts.pory"
# 40 "data/maps/Route12_Frlg/scripts.pory"
# 92 "data/maps/Route12_Frlg/scripts.pory"
	goto Route12_EventScript_FoughtSnorlax
# 93 "data/maps/Route12_Frlg/scripts.pory"
	goto Route12_EventScript_Snorlax_7
# 94 "data/maps/Route12_Frlg/scripts.pory"

# 95 "data/maps/Route12_Frlg/scripts.pory"
Route12_EventScript_Snorlax_11:
# 96 "data/maps/Route12_Frlg/scripts.pory"
# 43 "data/maps/Route12_Frlg/scripts.pory"
# 97 "data/maps/Route12_Frlg/scripts.pory"
	goto Route12_EventScript_FoughtSnorlax
# 98 "data/maps/Route12_Frlg/scripts.pory"
	goto Route12_EventScript_Snorlax_10
# 99 "data/maps/Route12_Frlg/scripts.pory"

# 100 "data/maps/Route12_Frlg/scripts.pory"
Route12_EventScript_Snorlax_14:
# 101 "data/maps/Route12_Frlg/scripts.pory"
# 46 "data/maps/Route12_Frlg/scripts.pory"
# 102 "data/maps/Route12_Frlg/scripts.pory"
	goto Route12_EventScript_FoughtSnorlax
# 103 "data/maps/Route12_Frlg/scripts.pory"
	goto Route12_EventScript_Snorlax_13
# 104 "data/maps/Route12_Frlg/scripts.pory"

# 105 "data/maps/Route12_Frlg/scripts.pory"

# 106 "data/maps/Route12_Frlg/scripts.pory"
Route12_EventScript_DontUsePokeFlute::
# 107 "data/maps/Route12_Frlg/scripts.pory"
# 53 "data/maps/Route12_Frlg/scripts.pory"
# 108 "data/maps/Route12_Frlg/scripts.pory"
	release
# 109 "data/maps/Route12_Frlg/scripts.pory"
	end
# 110 "data/maps/Route12_Frlg/scripts.pory"

# 111 "data/maps/Route12_Frlg/scripts.pory"

# 112 "data/maps/Route12_Frlg/scripts.pory"
Route12_EventScript_FoughtSnorlax::
# 113 "data/maps/Route12_Frlg/scripts.pory"
# 58 "data/maps/Route12_Frlg/scripts.pory"
# 114 "data/maps/Route12_Frlg/scripts.pory"
	msgbox Text_SnorlaxReturnedToMountains
# 115 "data/maps/Route12_Frlg/scripts.pory"
# 59 "data/maps/Route12_Frlg/scripts.pory"
# 116 "data/maps/Route12_Frlg/scripts.pory"
	release
# 117 "data/maps/Route12_Frlg/scripts.pory"
	end
# 118 "data/maps/Route12_Frlg/scripts.pory"

# 119 "data/maps/Route12_Frlg/scripts.pory"

# 120 "data/maps/Route12_Frlg/scripts.pory"
Route12_EventScript_SnorlaxNoPokeFlute::
# 121 "data/maps/Route12_Frlg/scripts.pory"
# 64 "data/maps/Route12_Frlg/scripts.pory"
# 122 "data/maps/Route12_Frlg/scripts.pory"
	msgbox Route12_Text_MonSprawledOutInSlumber
# 123 "data/maps/Route12_Frlg/scripts.pory"
# 65 "data/maps/Route12_Frlg/scripts.pory"
# 124 "data/maps/Route12_Frlg/scripts.pory"
	release
# 125 "data/maps/Route12_Frlg/scripts.pory"
	end
# 126 "data/maps/Route12_Frlg/scripts.pory"

# 127 "data/maps/Route12_Frlg/scripts.pory"

# 128 "data/maps/Route12_Frlg/scripts.pory"
Route12_EventScript_RouteSign::
# 129 "data/maps/Route12_Frlg/scripts.pory"
# 70 "data/maps/Route12_Frlg/scripts.pory"
# 130 "data/maps/Route12_Frlg/scripts.pory"
	msgbox Route12_Text_RouteSign, MSGBOX_SIGN
# 131 "data/maps/Route12_Frlg/scripts.pory"
	end
# 132 "data/maps/Route12_Frlg/scripts.pory"

# 133 "data/maps/Route12_Frlg/scripts.pory"

# 134 "data/maps/Route12_Frlg/scripts.pory"
Route12_EventScript_FishingSign::
# 135 "data/maps/Route12_Frlg/scripts.pory"
# 75 "data/maps/Route12_Frlg/scripts.pory"
# 136 "data/maps/Route12_Frlg/scripts.pory"
	msgbox Route12_Text_SportfishingArea, MSGBOX_SIGN
# 137 "data/maps/Route12_Frlg/scripts.pory"
	end
# 138 "data/maps/Route12_Frlg/scripts.pory"

# 139 "data/maps/Route12_Frlg/scripts.pory"

# 140 "data/maps/Route12_Frlg/scripts.pory"
Route12_Text_MonSprawledOutInSlumber::
# 141 "data/maps/Route12_Frlg/scripts.pory"
# 79 "data/maps/Route12_Frlg/scripts.pory"
# 142 "data/maps/Route12_Frlg/scripts.pory"
	.string "A POKéMON is sprawled out in\n"
# 143 "data/maps/Route12_Frlg/scripts.pory"
	.string "a deep and comfortable slumber.$"
# 144 "data/maps/Route12_Frlg/scripts.pory"

# 145 "data/maps/Route12_Frlg/scripts.pory"
Text_SnorlaxWokeUp::
# 146 "data/maps/Route12_Frlg/scripts.pory"
# 84 "data/maps/Route12_Frlg/scripts.pory"
# 147 "data/maps/Route12_Frlg/scripts.pory"
	.string "SNORLAX woke up!\p"
# 148 "data/maps/Route12_Frlg/scripts.pory"
	.string "It attacked in a grumpy rage!$"
# 149 "data/maps/Route12_Frlg/scripts.pory"

# 150 "data/maps/Route12_Frlg/scripts.pory"
Text_SnorlaxReturnedToMountains::
# 151 "data/maps/Route12_Frlg/scripts.pory"
# 89 "data/maps/Route12_Frlg/scripts.pory"
# 152 "data/maps/Route12_Frlg/scripts.pory"
	.string "SNORLAX calmed down.\n"
# 153 "data/maps/Route12_Frlg/scripts.pory"
	.string "It gave a huge yawn…\l"
# 154 "data/maps/Route12_Frlg/scripts.pory"
	.string "And returned to the mountains.$"
# 155 "data/maps/Route12_Frlg/scripts.pory"

# 156 "data/maps/Route12_Frlg/scripts.pory"
Text_WantToUsePokeFlute::
# 157 "data/maps/Route12_Frlg/scripts.pory"
# 95 "data/maps/Route12_Frlg/scripts.pory"
# 158 "data/maps/Route12_Frlg/scripts.pory"
	.string "Want to use the POKé FLUTE?$"
# 159 "data/maps/Route12_Frlg/scripts.pory"

# 160 "data/maps/Route12_Frlg/scripts.pory"
Text_PlayedPokeFlute::
# 161 "data/maps/Route12_Frlg/scripts.pory"
# 99 "data/maps/Route12_Frlg/scripts.pory"
# 162 "data/maps/Route12_Frlg/scripts.pory"
	.string "{PLAYER} played the POKé FLUTE.$"
# 163 "data/maps/Route12_Frlg/scripts.pory"

# 164 "data/maps/Route12_Frlg/scripts.pory"
Route12_Text_NedIntro::
# 165 "data/maps/Route12_Frlg/scripts.pory"
# 103 "data/maps/Route12_Frlg/scripts.pory"
# 166 "data/maps/Route12_Frlg/scripts.pory"
	.string "Yeah!\n"
# 167 "data/maps/Route12_Frlg/scripts.pory"
	.string "I got a bite here!$"
# 168 "data/maps/Route12_Frlg/scripts.pory"

# 169 "data/maps/Route12_Frlg/scripts.pory"
Route12_Text_NedDefeat::
# 170 "data/maps/Route12_Frlg/scripts.pory"
# 108 "data/maps/Route12_Frlg/scripts.pory"
# 171 "data/maps/Route12_Frlg/scripts.pory"
	.string "Tch!\n"
# 172 "data/maps/Route12_Frlg/scripts.pory"
	.string "Just a small fry…$"
# 173 "data/maps/Route12_Frlg/scripts.pory"

# 174 "data/maps/Route12_Frlg/scripts.pory"
Route12_Text_NedPostBattle::
# 175 "data/maps/Route12_Frlg/scripts.pory"
# 113 "data/maps/Route12_Frlg/scripts.pory"
# 176 "data/maps/Route12_Frlg/scripts.pory"
	.string "Hang on!\n"
# 177 "data/maps/Route12_Frlg/scripts.pory"
	.string "My line's snagged!$"
# 178 "data/maps/Route12_Frlg/scripts.pory"

# 179 "data/maps/Route12_Frlg/scripts.pory"
Route12_Text_ChipIntro::
# 180 "data/maps/Route12_Frlg/scripts.pory"
# 118 "data/maps/Route12_Frlg/scripts.pory"
# 181 "data/maps/Route12_Frlg/scripts.pory"
	.string "Be patient.\n"
# 182 "data/maps/Route12_Frlg/scripts.pory"
	.string "Fishing is a waiting game.$"
# 183 "data/maps/Route12_Frlg/scripts.pory"

# 184 "data/maps/Route12_Frlg/scripts.pory"
Route12_Text_ChipDefeat::
# 185 "data/maps/Route12_Frlg/scripts.pory"
# 123 "data/maps/Route12_Frlg/scripts.pory"
# 186 "data/maps/Route12_Frlg/scripts.pory"
	.string "That one got away!$"
# 187 "data/maps/Route12_Frlg/scripts.pory"

# 188 "data/maps/Route12_Frlg/scripts.pory"
Route12_Text_ChipPostBattle::
# 189 "data/maps/Route12_Frlg/scripts.pory"
# 127 "data/maps/Route12_Frlg/scripts.pory"
# 190 "data/maps/Route12_Frlg/scripts.pory"
	.string "With a better ROD, I could catch\n"
# 191 "data/maps/Route12_Frlg/scripts.pory"
	.string "better POKéMON…$"
# 192 "data/maps/Route12_Frlg/scripts.pory"

# 193 "data/maps/Route12_Frlg/scripts.pory"
Route12_Text_JustinIntro::
# 194 "data/maps/Route12_Frlg/scripts.pory"
# 132 "data/maps/Route12_Frlg/scripts.pory"
# 195 "data/maps/Route12_Frlg/scripts.pory"
	.string "I'm searching for a MOON STONE.\n"
# 196 "data/maps/Route12_Frlg/scripts.pory"
	.string "Have you found one?$"
# 197 "data/maps/Route12_Frlg/scripts.pory"

# 198 "data/maps/Route12_Frlg/scripts.pory"
Route12_Text_JustinDefeat::
# 199 "data/maps/Route12_Frlg/scripts.pory"
# 137 "data/maps/Route12_Frlg/scripts.pory"
# 200 "data/maps/Route12_Frlg/scripts.pory"
	.string "Oww!$"
# 201 "data/maps/Route12_Frlg/scripts.pory"

# 202 "data/maps/Route12_Frlg/scripts.pory"
Route12_Text_JustinPostBattle::
# 203 "data/maps/Route12_Frlg/scripts.pory"
# 141 "data/maps/Route12_Frlg/scripts.pory"
# 204 "data/maps/Route12_Frlg/scripts.pory"
	.string "I could have made my POKéMON\n"
# 205 "data/maps/Route12_Frlg/scripts.pory"
	.string "evolve with a MOON STONE.\p"
# 206 "data/maps/Route12_Frlg/scripts.pory"
	.string "I would have won then, I bet.$"
# 207 "data/maps/Route12_Frlg/scripts.pory"

# 208 "data/maps/Route12_Frlg/scripts.pory"
Route12_Text_LucaIntro::
# 209 "data/maps/Route12_Frlg/scripts.pory"
# 147 "data/maps/Route12_Frlg/scripts.pory"
# 210 "data/maps/Route12_Frlg/scripts.pory"
	.string "Electricity is my specialty.\p"
# 211 "data/maps/Route12_Frlg/scripts.pory"
	.string "I don't know a thing about POKéMON\n"
# 212 "data/maps/Route12_Frlg/scripts.pory"
	.string "of the sea, though.$"
# 213 "data/maps/Route12_Frlg/scripts.pory"

# 214 "data/maps/Route12_Frlg/scripts.pory"
Route12_Text_LucaDefeat::
# 215 "data/maps/Route12_Frlg/scripts.pory"
# 153 "data/maps/Route12_Frlg/scripts.pory"
# 216 "data/maps/Route12_Frlg/scripts.pory"
	.string "Unplugged!$"
# 217 "data/maps/Route12_Frlg/scripts.pory"

# 218 "data/maps/Route12_Frlg/scripts.pory"
Route12_Text_LucaPostBattle::
# 219 "data/maps/Route12_Frlg/scripts.pory"
# 157 "data/maps/Route12_Frlg/scripts.pory"
# 220 "data/maps/Route12_Frlg/scripts.pory"
	.string "Water conducts electricity, so you\n"
# 221 "data/maps/Route12_Frlg/scripts.pory"
	.string "should zap sea POKéMON.$"
# 222 "data/maps/Route12_Frlg/scripts.pory"

# 223 "data/maps/Route12_Frlg/scripts.pory"
Route12_Text_HankIntro::
# 224 "data/maps/Route12_Frlg/scripts.pory"
# 162 "data/maps/Route12_Frlg/scripts.pory"
# 225 "data/maps/Route12_Frlg/scripts.pory"
	.string "The FISHING FOOL versus POKéMON\n"
# 226 "data/maps/Route12_Frlg/scripts.pory"
	.string "KID!$"
# 227 "data/maps/Route12_Frlg/scripts.pory"

# 228 "data/maps/Route12_Frlg/scripts.pory"
Route12_Text_HankDefeat::
# 229 "data/maps/Route12_Frlg/scripts.pory"
# 167 "data/maps/Route12_Frlg/scripts.pory"
# 230 "data/maps/Route12_Frlg/scripts.pory"
	.string "Touch too much!$"
# 231 "data/maps/Route12_Frlg/scripts.pory"

# 232 "data/maps/Route12_Frlg/scripts.pory"
Route12_Text_HankPostBattle::
# 233 "data/maps/Route12_Frlg/scripts.pory"
# 171 "data/maps/Route12_Frlg/scripts.pory"
# 234 "data/maps/Route12_Frlg/scripts.pory"
	.string "I guess you get to be good at\n"
# 235 "data/maps/Route12_Frlg/scripts.pory"
	.string "what you like.\p"
# 236 "data/maps/Route12_Frlg/scripts.pory"
	.string "Well, you beat me at POKéMON,\n"
# 237 "data/maps/Route12_Frlg/scripts.pory"
	.string "but you can't top me at fishing.$"
# 238 "data/maps/Route12_Frlg/scripts.pory"

# 239 "data/maps/Route12_Frlg/scripts.pory"
Route12_Text_ElliotIntro::
# 240 "data/maps/Route12_Frlg/scripts.pory"
# 178 "data/maps/Route12_Frlg/scripts.pory"
# 241 "data/maps/Route12_Frlg/scripts.pory"
	.string "I love fishing, don't get me wrong.\p"
# 242 "data/maps/Route12_Frlg/scripts.pory"
	.string "But it'd be best if I also had more\n"
# 243 "data/maps/Route12_Frlg/scripts.pory"
	.string "work.$"
# 244 "data/maps/Route12_Frlg/scripts.pory"

# 245 "data/maps/Route12_Frlg/scripts.pory"
Route12_Text_ElliotDefeat::
# 246 "data/maps/Route12_Frlg/scripts.pory"
# 184 "data/maps/Route12_Frlg/scripts.pory"
# 247 "data/maps/Route12_Frlg/scripts.pory"
	.string "It's not easy…$"
# 248 "data/maps/Route12_Frlg/scripts.pory"

# 249 "data/maps/Route12_Frlg/scripts.pory"
Route12_Text_ElliotPostBattle::
# 250 "data/maps/Route12_Frlg/scripts.pory"
# 188 "data/maps/Route12_Frlg/scripts.pory"
# 251 "data/maps/Route12_Frlg/scripts.pory"
	.string "It's all right.\n"
# 252 "data/maps/Route12_Frlg/scripts.pory"
	.string "Losing doesn't bug me anymore.$"
# 253 "data/maps/Route12_Frlg/scripts.pory"

# 254 "data/maps/Route12_Frlg/scripts.pory"
Route12_Text_AndrewIntro::
# 255 "data/maps/Route12_Frlg/scripts.pory"
# 193 "data/maps/Route12_Frlg/scripts.pory"
# 256 "data/maps/Route12_Frlg/scripts.pory"
	.string "What's catching?\p"
# 257 "data/maps/Route12_Frlg/scripts.pory"
	.string "You never know what you could\n"
# 258 "data/maps/Route12_Frlg/scripts.pory"
	.string "catch!$"
# 259 "data/maps/Route12_Frlg/scripts.pory"

# 260 "data/maps/Route12_Frlg/scripts.pory"
Route12_Text_AndrewDefeat::
# 261 "data/maps/Route12_Frlg/scripts.pory"
# 199 "data/maps/Route12_Frlg/scripts.pory"
# 262 "data/maps/Route12_Frlg/scripts.pory"
	.string "Lost it!$"
# 263 "data/maps/Route12_Frlg/scripts.pory"

# 264 "data/maps/Route12_Frlg/scripts.pory"
Route12_Text_AndrewPostBattle::
# 265 "data/maps/Route12_Frlg/scripts.pory"
# 203 "data/maps/Route12_Frlg/scripts.pory"
# 266 "data/maps/Route12_Frlg/scripts.pory"
	.string "What, MAGIKARP?\p"
# 267 "data/maps/Route12_Frlg/scripts.pory"
	.string "I catch them all the time, sure.\n"
# 268 "data/maps/Route12_Frlg/scripts.pory"
	.string "But, boy are they wimpy.$"
# 269 "data/maps/Route12_Frlg/scripts.pory"

# 270 "data/maps/Route12_Frlg/scripts.pory"
Route12_Text_RouteSign::
# 271 "data/maps/Route12_Frlg/scripts.pory"
# 209 "data/maps/Route12_Frlg/scripts.pory"
# 272 "data/maps/Route12_Frlg/scripts.pory"
	.string "ROUTE 12 \n"
# 273 "data/maps/Route12_Frlg/scripts.pory"
	.string "North to LAVENDER$"
# 274 "data/maps/Route12_Frlg/scripts.pory"

# 275 "data/maps/Route12_Frlg/scripts.pory"
Route12_Text_SportfishingArea::
# 276 "data/maps/Route12_Frlg/scripts.pory"
# 214 "data/maps/Route12_Frlg/scripts.pory"
# 277 "data/maps/Route12_Frlg/scripts.pory"
	.string "SPORTFISHING AREA$"
# 278 "data/maps/Route12_Frlg/scripts.pory"

# 279 "data/maps/Route12_Frlg/scripts.pory"
Route12_Text_JesIntro::
# 280 "data/maps/Route12_Frlg/scripts.pory"
# 218 "data/maps/Route12_Frlg/scripts.pory"
# 281 "data/maps/Route12_Frlg/scripts.pory"
	.string "JES: If I win, I'm going to\n"
# 282 "data/maps/Route12_Frlg/scripts.pory"
	.string "propose to GIA.$"
# 283 "data/maps/Route12_Frlg/scripts.pory"

# 284 "data/maps/Route12_Frlg/scripts.pory"
Route12_Text_JesDefeat::
# 285 "data/maps/Route12_Frlg/scripts.pory"
# 223 "data/maps/Route12_Frlg/scripts.pory"
# 286 "data/maps/Route12_Frlg/scripts.pory"
	.string "JES: Oh, please, why couldn't you\n"
# 287 "data/maps/Route12_Frlg/scripts.pory"
	.string "let us win?$"
# 288 "data/maps/Route12_Frlg/scripts.pory"

# 289 "data/maps/Route12_Frlg/scripts.pory"
Route12_Text_JesPostBattle::
# 290 "data/maps/Route12_Frlg/scripts.pory"
# 228 "data/maps/Route12_Frlg/scripts.pory"
# 291 "data/maps/Route12_Frlg/scripts.pory"
	.string "JES: Oh, GIA, forgive me,\n"
# 292 "data/maps/Route12_Frlg/scripts.pory"
	.string "my love!$"
# 293 "data/maps/Route12_Frlg/scripts.pory"

# 294 "data/maps/Route12_Frlg/scripts.pory"
Route12_Text_JesNotEnoughMons::
# 295 "data/maps/Route12_Frlg/scripts.pory"
# 233 "data/maps/Route12_Frlg/scripts.pory"
# 296 "data/maps/Route12_Frlg/scripts.pory"
	.string "JES: GIA and I, we'll be\n"
# 297 "data/maps/Route12_Frlg/scripts.pory"
	.string "together forever.\p"
# 298 "data/maps/Route12_Frlg/scripts.pory"
	.string "We won't battle unless you have\n"
# 299 "data/maps/Route12_Frlg/scripts.pory"
	.string "two POKéMON of your own.$"
# 300 "data/maps/Route12_Frlg/scripts.pory"

# 301 "data/maps/Route12_Frlg/scripts.pory"
Route12_Text_GiaIntro::
# 302 "data/maps/Route12_Frlg/scripts.pory"
# 240 "data/maps/Route12_Frlg/scripts.pory"
# 303 "data/maps/Route12_Frlg/scripts.pory"
	.string "GIA: Hey, JES…\p"
# 304 "data/maps/Route12_Frlg/scripts.pory"
	.string "If we win, I'll marry you!$"
# 305 "data/maps/Route12_Frlg/scripts.pory"

# 306 "data/maps/Route12_Frlg/scripts.pory"
Route12_Text_GiaDefeat::
# 307 "data/maps/Route12_Frlg/scripts.pory"
# 245 "data/maps/Route12_Frlg/scripts.pory"
# 308 "data/maps/Route12_Frlg/scripts.pory"
	.string "GIA: Oh, but why?$"
# 309 "data/maps/Route12_Frlg/scripts.pory"

# 310 "data/maps/Route12_Frlg/scripts.pory"
Route12_Text_GiaPostBattle::
# 311 "data/maps/Route12_Frlg/scripts.pory"
# 249 "data/maps/Route12_Frlg/scripts.pory"
# 312 "data/maps/Route12_Frlg/scripts.pory"
	.string "GIA: JES, you silly!\n"
# 313 "data/maps/Route12_Frlg/scripts.pory"
	.string "You ruined this!$"
# 314 "data/maps/Route12_Frlg/scripts.pory"

# 315 "data/maps/Route12_Frlg/scripts.pory"
Route12_Text_GiaNotEnoughMons::
# 316 "data/maps/Route12_Frlg/scripts.pory"
# 254 "data/maps/Route12_Frlg/scripts.pory"
# 317 "data/maps/Route12_Frlg/scripts.pory"
	.string "GIA: I can't bear to battle\n"
# 318 "data/maps/Route12_Frlg/scripts.pory"
	.string "without my JES!\p"
# 319 "data/maps/Route12_Frlg/scripts.pory"
	.string "Don't you have one more POKéMON?$"
