# 1 "data/maps/FortreeCity/scripts.pory"

# 2 "data/maps/FortreeCity/scripts.pory"
FortreeCity_MapScripts::
# 3 "data/maps/FortreeCity/scripts.pory"
# 2 "data/maps/FortreeCity/scripts.pory"
# 4 "data/maps/FortreeCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, FortreeCity_OnTransition
# 5 "data/maps/FortreeCity/scripts.pory"
# 3 "data/maps/FortreeCity/scripts.pory"
# 6 "data/maps/FortreeCity/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, FortreeCity_OnResume
# 7 "data/maps/FortreeCity/scripts.pory"
	.byte 0
# 8 "data/maps/FortreeCity/scripts.pory"

# 9 "data/maps/FortreeCity/scripts.pory"

# 10 "data/maps/FortreeCity/scripts.pory"
FortreeCity_OnTransition::
# 11 "data/maps/FortreeCity/scripts.pory"
# 7 "data/maps/FortreeCity/scripts.pory"
# 12 "data/maps/FortreeCity/scripts.pory"
	setflag FLAG_VISITED_FORTREE_CITY
# 13 "data/maps/FortreeCity/scripts.pory"
	end
# 14 "data/maps/FortreeCity/scripts.pory"

# 15 "data/maps/FortreeCity/scripts.pory"

# 16 "data/maps/FortreeCity/scripts.pory"
FortreeCity_OnResume::
# 17 "data/maps/FortreeCity/scripts.pory"
# 12 "data/maps/FortreeCity/scripts.pory"
# 18 "data/maps/FortreeCity/scripts.pory"
	setstepcallback STEP_CB_FORTREE_BRIDGE
# 19 "data/maps/FortreeCity/scripts.pory"
	end
# 20 "data/maps/FortreeCity/scripts.pory"

# 21 "data/maps/FortreeCity/scripts.pory"

# 22 "data/maps/FortreeCity/scripts.pory"
FortreeCity_EventScript_Man::
# 23 "data/maps/FortreeCity/scripts.pory"
# 17 "data/maps/FortreeCity/scripts.pory"
# 24 "data/maps/FortreeCity/scripts.pory"
	msgbox FortreeCity_Text_SawGiganticPokemonInSky, MSGBOX_NPC
# 25 "data/maps/FortreeCity/scripts.pory"
	end
# 26 "data/maps/FortreeCity/scripts.pory"

# 27 "data/maps/FortreeCity/scripts.pory"

# 28 "data/maps/FortreeCity/scripts.pory"
FortreeCity_EventScript_Woman::
# 29 "data/maps/FortreeCity/scripts.pory"
# 22 "data/maps/FortreeCity/scripts.pory"
# 30 "data/maps/FortreeCity/scripts.pory"
	lock
# 31 "data/maps/FortreeCity/scripts.pory"
# 23 "data/maps/FortreeCity/scripts.pory"
# 32 "data/maps/FortreeCity/scripts.pory"
	faceplayer
# 33 "data/maps/FortreeCity/scripts.pory"
# 24 "data/maps/FortreeCity/scripts.pory"
# 34 "data/maps/FortreeCity/scripts.pory"
	goto_if_set FLAG_KECLEON_FLED_FORTREE, FortreeCity_EventScript_Woman_2
# 35 "data/maps/FortreeCity/scripts.pory"
FortreeCity_EventScript_Woman_1:
# 36 "data/maps/FortreeCity/scripts.pory"
# 27 "data/maps/FortreeCity/scripts.pory"
# 37 "data/maps/FortreeCity/scripts.pory"
	msgbox FortreeCity_Text_SomethingBlockingGym, MSGBOX_DEFAULT
# 38 "data/maps/FortreeCity/scripts.pory"
# 28 "data/maps/FortreeCity/scripts.pory"
# 39 "data/maps/FortreeCity/scripts.pory"
	release
# 40 "data/maps/FortreeCity/scripts.pory"
	end
# 41 "data/maps/FortreeCity/scripts.pory"

# 42 "data/maps/FortreeCity/scripts.pory"
FortreeCity_EventScript_Woman_2:
# 43 "data/maps/FortreeCity/scripts.pory"
# 25 "data/maps/FortreeCity/scripts.pory"
# 44 "data/maps/FortreeCity/scripts.pory"
	goto FortreeCity_EventScript_WomanGymAccessible
# 45 "data/maps/FortreeCity/scripts.pory"
	goto FortreeCity_EventScript_Woman_1
# 46 "data/maps/FortreeCity/scripts.pory"

# 47 "data/maps/FortreeCity/scripts.pory"

# 48 "data/maps/FortreeCity/scripts.pory"
FortreeCity_EventScript_WomanGymAccessible::
# 49 "data/maps/FortreeCity/scripts.pory"
# 33 "data/maps/FortreeCity/scripts.pory"
# 50 "data/maps/FortreeCity/scripts.pory"
	msgbox FortreeCity_Text_ThisTimeIllBeatWinona, MSGBOX_DEFAULT
# 51 "data/maps/FortreeCity/scripts.pory"
# 34 "data/maps/FortreeCity/scripts.pory"
# 52 "data/maps/FortreeCity/scripts.pory"
	release
# 53 "data/maps/FortreeCity/scripts.pory"
	end
# 54 "data/maps/FortreeCity/scripts.pory"

# 55 "data/maps/FortreeCity/scripts.pory"

# 56 "data/maps/FortreeCity/scripts.pory"
FortreeCity_EventScript_Girl::
# 57 "data/maps/FortreeCity/scripts.pory"
# 39 "data/maps/FortreeCity/scripts.pory"
# 58 "data/maps/FortreeCity/scripts.pory"
	msgbox FortreeCity_Text_TreesGrowByDrinkingRainwater, MSGBOX_NPC
# 59 "data/maps/FortreeCity/scripts.pory"
	end
# 60 "data/maps/FortreeCity/scripts.pory"

# 61 "data/maps/FortreeCity/scripts.pory"

# 62 "data/maps/FortreeCity/scripts.pory"
FortreeCity_EventScript_OldMan::
# 63 "data/maps/FortreeCity/scripts.pory"
# 44 "data/maps/FortreeCity/scripts.pory"
# 64 "data/maps/FortreeCity/scripts.pory"
	msgbox FortreeCity_Text_EveryoneHealthyAndLively, MSGBOX_NPC
# 65 "data/maps/FortreeCity/scripts.pory"
	end
# 66 "data/maps/FortreeCity/scripts.pory"

# 67 "data/maps/FortreeCity/scripts.pory"

# 68 "data/maps/FortreeCity/scripts.pory"
FortreeCity_EventScript_Boy::
# 69 "data/maps/FortreeCity/scripts.pory"
# 49 "data/maps/FortreeCity/scripts.pory"
# 70 "data/maps/FortreeCity/scripts.pory"
	msgbox FortreeCity_Text_BugPokemonComeThroughWindow, MSGBOX_NPC
# 71 "data/maps/FortreeCity/scripts.pory"
	end
# 72 "data/maps/FortreeCity/scripts.pory"

# 73 "data/maps/FortreeCity/scripts.pory"

# 74 "data/maps/FortreeCity/scripts.pory"
FortreeCity_EventScript_GameboyKid::
# 75 "data/maps/FortreeCity/scripts.pory"
# 54 "data/maps/FortreeCity/scripts.pory"
# 76 "data/maps/FortreeCity/scripts.pory"
	msgbox FortreeCity_Text_PokemonThatEvolveWhenTraded, MSGBOX_NPC
# 77 "data/maps/FortreeCity/scripts.pory"
	end
# 78 "data/maps/FortreeCity/scripts.pory"

# 79 "data/maps/FortreeCity/scripts.pory"

# 80 "data/maps/FortreeCity/scripts.pory"
FortreeCity_EventScript_CitySign::
# 81 "data/maps/FortreeCity/scripts.pory"
# 59 "data/maps/FortreeCity/scripts.pory"
# 82 "data/maps/FortreeCity/scripts.pory"
	msgbox FortreeCity_Text_CitySign, MSGBOX_SIGN
# 83 "data/maps/FortreeCity/scripts.pory"
	end
# 84 "data/maps/FortreeCity/scripts.pory"

# 85 "data/maps/FortreeCity/scripts.pory"

# 86 "data/maps/FortreeCity/scripts.pory"
FortreeCity_EventScript_GymSign::
# 87 "data/maps/FortreeCity/scripts.pory"
# 64 "data/maps/FortreeCity/scripts.pory"
# 88 "data/maps/FortreeCity/scripts.pory"
	msgbox FortreeCity_Text_GymSign, MSGBOX_SIGN
# 89 "data/maps/FortreeCity/scripts.pory"
	end
# 90 "data/maps/FortreeCity/scripts.pory"

# 91 "data/maps/FortreeCity/scripts.pory"

# 92 "data/maps/FortreeCity/scripts.pory"
FortreeCity_EventScript_Kecleon::
# 93 "data/maps/FortreeCity/scripts.pory"
# 69 "data/maps/FortreeCity/scripts.pory"
# 94 "data/maps/FortreeCity/scripts.pory"
	lock
# 95 "data/maps/FortreeCity/scripts.pory"
# 70 "data/maps/FortreeCity/scripts.pory"
# 96 "data/maps/FortreeCity/scripts.pory"
	faceplayer
# 97 "data/maps/FortreeCity/scripts.pory"
# 71 "data/maps/FortreeCity/scripts.pory"
# 98 "data/maps/FortreeCity/scripts.pory"
	checkitem ITEM_DEVON_SCOPE
# 99 "data/maps/FortreeCity/scripts.pory"
# 72 "data/maps/FortreeCity/scripts.pory"
# 100 "data/maps/FortreeCity/scripts.pory"
	compare VAR_RESULT, TRUE
# 101 "data/maps/FortreeCity/scripts.pory"
	goto_if_eq FortreeCity_EventScript_Kecleon_2
# 102 "data/maps/FortreeCity/scripts.pory"
FortreeCity_EventScript_Kecleon_1:
# 103 "data/maps/FortreeCity/scripts.pory"
# 75 "data/maps/FortreeCity/scripts.pory"
# 104 "data/maps/FortreeCity/scripts.pory"
	msgbox FortreeCity_Text_SomethingUnseeable, MSGBOX_DEFAULT
# 105 "data/maps/FortreeCity/scripts.pory"
# 76 "data/maps/FortreeCity/scripts.pory"
# 106 "data/maps/FortreeCity/scripts.pory"
	release
# 107 "data/maps/FortreeCity/scripts.pory"
	end
# 108 "data/maps/FortreeCity/scripts.pory"

# 109 "data/maps/FortreeCity/scripts.pory"
FortreeCity_EventScript_Kecleon_2:
# 110 "data/maps/FortreeCity/scripts.pory"
# 73 "data/maps/FortreeCity/scripts.pory"
# 111 "data/maps/FortreeCity/scripts.pory"
	goto FortreeCity_EventScript_AskUseDevonScope
# 112 "data/maps/FortreeCity/scripts.pory"
	goto FortreeCity_EventScript_Kecleon_1
# 113 "data/maps/FortreeCity/scripts.pory"

# 114 "data/maps/FortreeCity/scripts.pory"

# 115 "data/maps/FortreeCity/scripts.pory"
FortreeCity_EventScript_AskUseDevonScope::
# 116 "data/maps/FortreeCity/scripts.pory"
# 81 "data/maps/FortreeCity/scripts.pory"
# 117 "data/maps/FortreeCity/scripts.pory"
	msgbox FortreeCity_Text_UnseeableUseDevonScope, MSGBOX_YESNO
# 118 "data/maps/FortreeCity/scripts.pory"
# 82 "data/maps/FortreeCity/scripts.pory"
# 119 "data/maps/FortreeCity/scripts.pory"
	compare VAR_RESULT, YES
# 120 "data/maps/FortreeCity/scripts.pory"
	goto_if_eq FortreeCity_EventScript_AskUseDevonScope_2
# 121 "data/maps/FortreeCity/scripts.pory"
FortreeCity_EventScript_AskUseDevonScope_1:
# 122 "data/maps/FortreeCity/scripts.pory"
# 85 "data/maps/FortreeCity/scripts.pory"
# 123 "data/maps/FortreeCity/scripts.pory"
	release
# 124 "data/maps/FortreeCity/scripts.pory"
	end
# 125 "data/maps/FortreeCity/scripts.pory"

# 126 "data/maps/FortreeCity/scripts.pory"
FortreeCity_EventScript_AskUseDevonScope_2:
# 127 "data/maps/FortreeCity/scripts.pory"
# 83 "data/maps/FortreeCity/scripts.pory"
# 128 "data/maps/FortreeCity/scripts.pory"
	goto FortreeCity_EventScript_UseDevonScope
# 129 "data/maps/FortreeCity/scripts.pory"
	goto FortreeCity_EventScript_AskUseDevonScope_1
# 130 "data/maps/FortreeCity/scripts.pory"

# 131 "data/maps/FortreeCity/scripts.pory"

# 132 "data/maps/FortreeCity/scripts.pory"
FortreeCity_EventScript_UseDevonScope::
# 133 "data/maps/FortreeCity/scripts.pory"
# 90 "data/maps/FortreeCity/scripts.pory"
# 134 "data/maps/FortreeCity/scripts.pory"
	msgbox FortreeCity_Text_UsedDevonScopePokemonFled, MSGBOX_DEFAULT
# 135 "data/maps/FortreeCity/scripts.pory"
# 91 "data/maps/FortreeCity/scripts.pory"
# 136 "data/maps/FortreeCity/scripts.pory"
	closemessage
# 137 "data/maps/FortreeCity/scripts.pory"
# 92 "data/maps/FortreeCity/scripts.pory"
# 138 "data/maps/FortreeCity/scripts.pory"
	applymovement VAR_LAST_TALKED, Movement_KecleonAppears
# 139 "data/maps/FortreeCity/scripts.pory"
# 93 "data/maps/FortreeCity/scripts.pory"
# 140 "data/maps/FortreeCity/scripts.pory"
	waitmovement 0
# 141 "data/maps/FortreeCity/scripts.pory"
# 94 "data/maps/FortreeCity/scripts.pory"
# 142 "data/maps/FortreeCity/scripts.pory"
	waitse
# 143 "data/maps/FortreeCity/scripts.pory"
# 95 "data/maps/FortreeCity/scripts.pory"
# 144 "data/maps/FortreeCity/scripts.pory"
	playmoncry SPECIES_KECLEON, CRY_MODE_ENCOUNTER
# 145 "data/maps/FortreeCity/scripts.pory"
# 96 "data/maps/FortreeCity/scripts.pory"
# 146 "data/maps/FortreeCity/scripts.pory"
	delay 40
# 147 "data/maps/FortreeCity/scripts.pory"
# 97 "data/maps/FortreeCity/scripts.pory"
# 148 "data/maps/FortreeCity/scripts.pory"
	waitmoncry
# 149 "data/maps/FortreeCity/scripts.pory"
# 98 "data/maps/FortreeCity/scripts.pory"
# 150 "data/maps/FortreeCity/scripts.pory"
	applymovement VAR_LAST_TALKED, FortreeCity_Movement_KecleonFlee
# 151 "data/maps/FortreeCity/scripts.pory"
# 99 "data/maps/FortreeCity/scripts.pory"
# 152 "data/maps/FortreeCity/scripts.pory"
	waitmovement 0
# 153 "data/maps/FortreeCity/scripts.pory"
# 100 "data/maps/FortreeCity/scripts.pory"
# 154 "data/maps/FortreeCity/scripts.pory"
	removeobject VAR_LAST_TALKED
# 155 "data/maps/FortreeCity/scripts.pory"
# 101 "data/maps/FortreeCity/scripts.pory"
# 156 "data/maps/FortreeCity/scripts.pory"
	setflag FLAG_KECLEON_FLED_FORTREE
# 157 "data/maps/FortreeCity/scripts.pory"
# 102 "data/maps/FortreeCity/scripts.pory"
# 158 "data/maps/FortreeCity/scripts.pory"
	release
# 159 "data/maps/FortreeCity/scripts.pory"
	end
# 160 "data/maps/FortreeCity/scripts.pory"

# 161 "data/maps/FortreeCity/scripts.pory"

# 162 "data/maps/FortreeCity/scripts.pory"
# 106 "data/maps/FortreeCity/scripts.pory"
# 163 "data/maps/FortreeCity/scripts.pory"
FortreeCity_Movement_KecleonFlee:
# 164 "data/maps/FortreeCity/scripts.pory"
# 107 "data/maps/FortreeCity/scripts.pory"
# 165 "data/maps/FortreeCity/scripts.pory"
	walk_right
# 166 "data/maps/FortreeCity/scripts.pory"
# 108 "data/maps/FortreeCity/scripts.pory"
# 167 "data/maps/FortreeCity/scripts.pory"
	step_end
# 168 "data/maps/FortreeCity/scripts.pory"

# 169 "data/maps/FortreeCity/scripts.pory"
FortreeCity_Text_SawGiganticPokemonInSky::
# 170 "data/maps/FortreeCity/scripts.pory"
# 111 "data/maps/FortreeCity/scripts.pory"
# 171 "data/maps/FortreeCity/scripts.pory"
	.string "No one believes me, but I saw this\n"
# 172 "data/maps/FortreeCity/scripts.pory"
	.string "gigantic POKéMON in the sky.\p"
# 173 "data/maps/FortreeCity/scripts.pory"
	.string "It seemed to squirm as it flew toward\n"
# 174 "data/maps/FortreeCity/scripts.pory"
	.string "ROUTE 131.\p"
# 175 "data/maps/FortreeCity/scripts.pory"
	.string "By the way… Sniff…\n"
# 176 "data/maps/FortreeCity/scripts.pory"
	.string "Um… You, uh…smell singed.\p"
# 177 "data/maps/FortreeCity/scripts.pory"
	.string "Were you at a volcano or something?$"
# 178 "data/maps/FortreeCity/scripts.pory"

# 179 "data/maps/FortreeCity/scripts.pory"
FortreeCity_Text_SomethingBlockingGym::
# 180 "data/maps/FortreeCity/scripts.pory"
# 121 "data/maps/FortreeCity/scripts.pory"
# 181 "data/maps/FortreeCity/scripts.pory"
	.string "I want to go to the POKéMON GYM,\n"
# 182 "data/maps/FortreeCity/scripts.pory"
	.string "but something's blocking the way.\p"
# 183 "data/maps/FortreeCity/scripts.pory"
	.string "After all the bother I went through\n"
# 184 "data/maps/FortreeCity/scripts.pory"
	.string "training on ROUTE 120…$"
# 185 "data/maps/FortreeCity/scripts.pory"

# 186 "data/maps/FortreeCity/scripts.pory"
FortreeCity_Text_ThisTimeIllBeatWinona::
# 187 "data/maps/FortreeCity/scripts.pory"
# 128 "data/maps/FortreeCity/scripts.pory"
# 188 "data/maps/FortreeCity/scripts.pory"
	.string "I've got my pride-and-joy POKéMON\n"
# 189 "data/maps/FortreeCity/scripts.pory"
	.string "with me. This time, I'll beat WINONA.$"
# 190 "data/maps/FortreeCity/scripts.pory"

# 191 "data/maps/FortreeCity/scripts.pory"
FortreeCity_Text_TreesGrowByDrinkingRainwater::
# 192 "data/maps/FortreeCity/scripts.pory"
# 133 "data/maps/FortreeCity/scripts.pory"
# 193 "data/maps/FortreeCity/scripts.pory"
	.string "The ground absorbs rainwater, and\n"
# 194 "data/maps/FortreeCity/scripts.pory"
	.string "trees grow by drinking that water…\p"
# 195 "data/maps/FortreeCity/scripts.pory"
	.string "Our FORTREE CITY exists because\n"
# 196 "data/maps/FortreeCity/scripts.pory"
	.string "there's both water and soil.$"
# 197 "data/maps/FortreeCity/scripts.pory"

# 198 "data/maps/FortreeCity/scripts.pory"
FortreeCity_Text_EveryoneHealthyAndLively::
# 199 "data/maps/FortreeCity/scripts.pory"
# 140 "data/maps/FortreeCity/scripts.pory"
# 200 "data/maps/FortreeCity/scripts.pory"
	.string "The CITY consists of homes built on\n"
# 201 "data/maps/FortreeCity/scripts.pory"
	.string "trees.\p"
# 202 "data/maps/FortreeCity/scripts.pory"
	.string "Perhaps because of that lifestyle,\n"
# 203 "data/maps/FortreeCity/scripts.pory"
	.string "everyone is healthy and lively.\p"
# 204 "data/maps/FortreeCity/scripts.pory"
	.string "Why, even myself--I feel as if I've\n"
# 205 "data/maps/FortreeCity/scripts.pory"
	.string "grown thirty years younger.$"
# 206 "data/maps/FortreeCity/scripts.pory"

# 207 "data/maps/FortreeCity/scripts.pory"
FortreeCity_Text_BugPokemonComeThroughWindow::
# 208 "data/maps/FortreeCity/scripts.pory"
# 149 "data/maps/FortreeCity/scripts.pory"
# 209 "data/maps/FortreeCity/scripts.pory"
	.string "Living on top of trees is okay.\p"
# 210 "data/maps/FortreeCity/scripts.pory"
	.string "But sometimes BUG POKéMON come in\n"
# 211 "data/maps/FortreeCity/scripts.pory"
	.string "through windows.\l"
# 212 "data/maps/FortreeCity/scripts.pory"
	.string "It can be really startling.$"
# 213 "data/maps/FortreeCity/scripts.pory"

# 214 "data/maps/FortreeCity/scripts.pory"
FortreeCity_Text_PokemonThatEvolveWhenTraded::
# 215 "data/maps/FortreeCity/scripts.pory"
# 156 "data/maps/FortreeCity/scripts.pory"
# 216 "data/maps/FortreeCity/scripts.pory"
	.string "There are POKéMON that evolve when\n"
# 217 "data/maps/FortreeCity/scripts.pory"
	.string "you trade them! That's what I heard.$"
# 218 "data/maps/FortreeCity/scripts.pory"

# 219 "data/maps/FortreeCity/scripts.pory"
FortreeCity_Text_SomethingUnseeable::
# 220 "data/maps/FortreeCity/scripts.pory"
# 161 "data/maps/FortreeCity/scripts.pory"
# 221 "data/maps/FortreeCity/scripts.pory"
	.string "Something unseeable is in the way.$"
# 222 "data/maps/FortreeCity/scripts.pory"

# 223 "data/maps/FortreeCity/scripts.pory"
FortreeCity_Text_UnseeableUseDevonScope::
# 224 "data/maps/FortreeCity/scripts.pory"
# 165 "data/maps/FortreeCity/scripts.pory"
# 225 "data/maps/FortreeCity/scripts.pory"
	.string "Something unseeable is in the way.\p"
# 226 "data/maps/FortreeCity/scripts.pory"
	.string "Want to use the DEVON SCOPE?$"
# 227 "data/maps/FortreeCity/scripts.pory"

# 228 "data/maps/FortreeCity/scripts.pory"
FortreeCity_Text_UsedDevonScopePokemonFled::
# 229 "data/maps/FortreeCity/scripts.pory"
# 170 "data/maps/FortreeCity/scripts.pory"
# 230 "data/maps/FortreeCity/scripts.pory"
	.string "{PLAYER} used the DEVON SCOPE.\p"
# 231 "data/maps/FortreeCity/scripts.pory"
	.string "An invisible POKéMON became completely\n"
# 232 "data/maps/FortreeCity/scripts.pory"
	.string "visible!\p"
# 233 "data/maps/FortreeCity/scripts.pory"
	.string "The startled POKéMON fled!$"
# 234 "data/maps/FortreeCity/scripts.pory"

# 235 "data/maps/FortreeCity/scripts.pory"
FortreeCity_Text_CitySign::
# 236 "data/maps/FortreeCity/scripts.pory"
# 177 "data/maps/FortreeCity/scripts.pory"
# 237 "data/maps/FortreeCity/scripts.pory"
	.string "FORTREE CITY\n"
# 238 "data/maps/FortreeCity/scripts.pory"
	.string "“The treetop city that frolics with\l"
# 239 "data/maps/FortreeCity/scripts.pory"
	.string "nature.”$"
# 240 "data/maps/FortreeCity/scripts.pory"

# 241 "data/maps/FortreeCity/scripts.pory"
FortreeCity_Text_GymSign::
# 242 "data/maps/FortreeCity/scripts.pory"
# 183 "data/maps/FortreeCity/scripts.pory"
# 243 "data/maps/FortreeCity/scripts.pory"
	.string "FORTREE CITY POKéMON GYM\n"
# 244 "data/maps/FortreeCity/scripts.pory"
	.string "LEADER: WINONA\p"
# 245 "data/maps/FortreeCity/scripts.pory"
	.string "“The bird user taking flight into\n"
# 246 "data/maps/FortreeCity/scripts.pory"
	.string "the world.”$"
