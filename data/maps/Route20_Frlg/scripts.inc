# 1 "data/maps/Route20_Frlg/scripts.pory"

# 2 "data/maps/Route20_Frlg/scripts.pory"
Route20_Frlg_MapScripts::
# 3 "data/maps/Route20_Frlg/scripts.pory"
# 2 "data/maps/Route20_Frlg/scripts.pory"
# 4 "data/maps/Route20_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route20_OnTransition
# 5 "data/maps/Route20_Frlg/scripts.pory"
	.byte 0
# 6 "data/maps/Route20_Frlg/scripts.pory"

# 7 "data/maps/Route20_Frlg/scripts.pory"

# 8 "data/maps/Route20_Frlg/scripts.pory"
Route20_OnTransition::
# 9 "data/maps/Route20_Frlg/scripts.pory"
# 6 "data/maps/Route20_Frlg/scripts.pory"
# 10 "data/maps/Route20_Frlg/scripts.pory"
	goto_if_unset FLAG_STOPPED_SEAFOAM_B3F_CURRENT, Route20_OnTransition_2
# 11 "data/maps/Route20_Frlg/scripts.pory"
Route20_OnTransition_1:
# 12 "data/maps/Route20_Frlg/scripts.pory"
# 9 "data/maps/Route20_Frlg/scripts.pory"
# 13 "data/maps/Route20_Frlg/scripts.pory"
	goto_if_unset FLAG_STOPPED_SEAFOAM_B4F_CURRENT, Route20_OnTransition_5
# 14 "data/maps/Route20_Frlg/scripts.pory"
Route20_OnTransition_4:
# 15 "data/maps/Route20_Frlg/scripts.pory"
	end
# 16 "data/maps/Route20_Frlg/scripts.pory"

# 17 "data/maps/Route20_Frlg/scripts.pory"
Route20_OnTransition_2:
# 18 "data/maps/Route20_Frlg/scripts.pory"
# 7 "data/maps/Route20_Frlg/scripts.pory"
# 19 "data/maps/Route20_Frlg/scripts.pory"
	call Route20_EventScript_ResetSeafoamBouldersForB3F
# 20 "data/maps/Route20_Frlg/scripts.pory"
	goto Route20_OnTransition_1
# 21 "data/maps/Route20_Frlg/scripts.pory"

# 22 "data/maps/Route20_Frlg/scripts.pory"
Route20_OnTransition_5:
# 23 "data/maps/Route20_Frlg/scripts.pory"
# 10 "data/maps/Route20_Frlg/scripts.pory"
# 24 "data/maps/Route20_Frlg/scripts.pory"
	call Route20_EventScript_ResetSeafoamBouldersForB4F
# 25 "data/maps/Route20_Frlg/scripts.pory"
	goto Route20_OnTransition_4
# 26 "data/maps/Route20_Frlg/scripts.pory"

# 27 "data/maps/Route20_Frlg/scripts.pory"

# 28 "data/maps/Route20_Frlg/scripts.pory"
Route20_EventScript_ResetSeafoamBouldersForB3F::
# 29 "data/maps/Route20_Frlg/scripts.pory"
# 16 "data/maps/Route20_Frlg/scripts.pory"
# 30 "data/maps/Route20_Frlg/scripts.pory"
	clearflag FLAG_HIDE_SEAFOAM_1F_BOULDER_1
# 31 "data/maps/Route20_Frlg/scripts.pory"
# 17 "data/maps/Route20_Frlg/scripts.pory"
# 32 "data/maps/Route20_Frlg/scripts.pory"
	clearflag FLAG_HIDE_SEAFOAM_1F_BOULDER_2
# 33 "data/maps/Route20_Frlg/scripts.pory"
# 18 "data/maps/Route20_Frlg/scripts.pory"
# 34 "data/maps/Route20_Frlg/scripts.pory"
	setflag FLAG_HIDE_SEAFOAM_B1F_BOULDER_1
# 35 "data/maps/Route20_Frlg/scripts.pory"
# 19 "data/maps/Route20_Frlg/scripts.pory"
# 36 "data/maps/Route20_Frlg/scripts.pory"
	setflag FLAG_HIDE_SEAFOAM_B1F_BOULDER_2
# 37 "data/maps/Route20_Frlg/scripts.pory"
# 20 "data/maps/Route20_Frlg/scripts.pory"
# 38 "data/maps/Route20_Frlg/scripts.pory"
	setflag FLAG_HIDE_SEAFOAM_B2F_BOULDER_1
# 39 "data/maps/Route20_Frlg/scripts.pory"
# 21 "data/maps/Route20_Frlg/scripts.pory"
# 40 "data/maps/Route20_Frlg/scripts.pory"
	setflag FLAG_HIDE_SEAFOAM_B2F_BOULDER_2
# 41 "data/maps/Route20_Frlg/scripts.pory"
# 22 "data/maps/Route20_Frlg/scripts.pory"
# 42 "data/maps/Route20_Frlg/scripts.pory"
	setflag FLAG_HIDE_SEAFOAM_B3F_BOULDER_1
# 43 "data/maps/Route20_Frlg/scripts.pory"
# 23 "data/maps/Route20_Frlg/scripts.pory"
# 44 "data/maps/Route20_Frlg/scripts.pory"
	setflag FLAG_HIDE_SEAFOAM_B3F_BOULDER_2
# 45 "data/maps/Route20_Frlg/scripts.pory"
	return
# 46 "data/maps/Route20_Frlg/scripts.pory"

# 47 "data/maps/Route20_Frlg/scripts.pory"

# 48 "data/maps/Route20_Frlg/scripts.pory"
Route20_EventScript_ResetSeafoamBouldersForB4F::
# 49 "data/maps/Route20_Frlg/scripts.pory"
# 28 "data/maps/Route20_Frlg/scripts.pory"
# 50 "data/maps/Route20_Frlg/scripts.pory"
	clearflag FLAG_HIDE_SEAFOAM_B3F_BOULDER_3
# 51 "data/maps/Route20_Frlg/scripts.pory"
# 29 "data/maps/Route20_Frlg/scripts.pory"
# 52 "data/maps/Route20_Frlg/scripts.pory"
	clearflag FLAG_HIDE_SEAFOAM_B3F_BOULDER_4
# 53 "data/maps/Route20_Frlg/scripts.pory"
# 30 "data/maps/Route20_Frlg/scripts.pory"
# 54 "data/maps/Route20_Frlg/scripts.pory"
	clearflag FLAG_HIDE_SEAFOAM_B3F_BOULDER_5
# 55 "data/maps/Route20_Frlg/scripts.pory"
# 31 "data/maps/Route20_Frlg/scripts.pory"
# 56 "data/maps/Route20_Frlg/scripts.pory"
	clearflag FLAG_HIDE_SEAFOAM_B3F_BOULDER_6
# 57 "data/maps/Route20_Frlg/scripts.pory"
# 32 "data/maps/Route20_Frlg/scripts.pory"
# 58 "data/maps/Route20_Frlg/scripts.pory"
	setflag FLAG_HIDE_SEAFOAM_B4F_BOULDER_1
# 59 "data/maps/Route20_Frlg/scripts.pory"
# 33 "data/maps/Route20_Frlg/scripts.pory"
# 60 "data/maps/Route20_Frlg/scripts.pory"
	setflag FLAG_HIDE_SEAFOAM_B4F_BOULDER_2
# 61 "data/maps/Route20_Frlg/scripts.pory"
	return
# 62 "data/maps/Route20_Frlg/scripts.pory"

# 63 "data/maps/Route20_Frlg/scripts.pory"

# 64 "data/maps/Route20_Frlg/scripts.pory"
Route20_EventScript_SeafoamIslandsSign::
# 65 "data/maps/Route20_Frlg/scripts.pory"
# 38 "data/maps/Route20_Frlg/scripts.pory"
# 66 "data/maps/Route20_Frlg/scripts.pory"
	msgbox Route20_Text_SeafoamIslands, MSGBOX_SIGN
# 67 "data/maps/Route20_Frlg/scripts.pory"
	end
# 68 "data/maps/Route20_Frlg/scripts.pory"

# 69 "data/maps/Route20_Frlg/scripts.pory"

# 70 "data/maps/Route20_Frlg/scripts.pory"
Route20_Text_BarryIntro::
# 71 "data/maps/Route20_Frlg/scripts.pory"
# 42 "data/maps/Route20_Frlg/scripts.pory"
# 72 "data/maps/Route20_Frlg/scripts.pory"
	.string "The water is shallow here.\n"
# 73 "data/maps/Route20_Frlg/scripts.pory"
	.string "There are many people swimming.$"
# 74 "data/maps/Route20_Frlg/scripts.pory"

# 75 "data/maps/Route20_Frlg/scripts.pory"
Route20_Text_BarryDefeat::
# 76 "data/maps/Route20_Frlg/scripts.pory"
# 47 "data/maps/Route20_Frlg/scripts.pory"
# 77 "data/maps/Route20_Frlg/scripts.pory"
	.string "Splash!$"
# 78 "data/maps/Route20_Frlg/scripts.pory"

# 79 "data/maps/Route20_Frlg/scripts.pory"
Route20_Text_BarryPostBattle::
# 80 "data/maps/Route20_Frlg/scripts.pory"
# 51 "data/maps/Route20_Frlg/scripts.pory"
# 81 "data/maps/Route20_Frlg/scripts.pory"
	.string "I wish I could ride my POKéMON.\n"
# 82 "data/maps/Route20_Frlg/scripts.pory"
	.string "I bet you're not tired.$"
# 83 "data/maps/Route20_Frlg/scripts.pory"

# 84 "data/maps/Route20_Frlg/scripts.pory"
Route20_Text_ShirleyIntro::
# 85 "data/maps/Route20_Frlg/scripts.pory"
# 56 "data/maps/Route20_Frlg/scripts.pory"
# 86 "data/maps/Route20_Frlg/scripts.pory"
	.string "SEAFOAM is a quiet getaway.\n"
# 87 "data/maps/Route20_Frlg/scripts.pory"
	.string "I'm vacationing here.$"
# 88 "data/maps/Route20_Frlg/scripts.pory"

# 89 "data/maps/Route20_Frlg/scripts.pory"
Route20_Text_ShirleyDefeat::
# 90 "data/maps/Route20_Frlg/scripts.pory"
# 61 "data/maps/Route20_Frlg/scripts.pory"
# 91 "data/maps/Route20_Frlg/scripts.pory"
	.string "Quit it!$"
# 92 "data/maps/Route20_Frlg/scripts.pory"

# 93 "data/maps/Route20_Frlg/scripts.pory"
Route20_Text_ShirleyPostBattle::
# 94 "data/maps/Route20_Frlg/scripts.pory"
# 65 "data/maps/Route20_Frlg/scripts.pory"
# 95 "data/maps/Route20_Frlg/scripts.pory"
	.string "There's a huge cavern underneath\n"
# 96 "data/maps/Route20_Frlg/scripts.pory"
	.string "this island.$"
# 97 "data/maps/Route20_Frlg/scripts.pory"

# 98 "data/maps/Route20_Frlg/scripts.pory"
Route20_Text_TiffanyIntro::
# 99 "data/maps/Route20_Frlg/scripts.pory"
# 70 "data/maps/Route20_Frlg/scripts.pory"
# 100 "data/maps/Route20_Frlg/scripts.pory"
	.string "I love floating with the fishes\n"
# 101 "data/maps/Route20_Frlg/scripts.pory"
	.string "here among the waves.$"
# 102 "data/maps/Route20_Frlg/scripts.pory"

# 103 "data/maps/Route20_Frlg/scripts.pory"
Route20_Text_TiffanyDefeat::
# 104 "data/maps/Route20_Frlg/scripts.pory"
# 75 "data/maps/Route20_Frlg/scripts.pory"
# 105 "data/maps/Route20_Frlg/scripts.pory"
	.string "Yowch!$"
# 106 "data/maps/Route20_Frlg/scripts.pory"

# 107 "data/maps/Route20_Frlg/scripts.pory"
Route20_Text_TiffanyPostBattle::
# 108 "data/maps/Route20_Frlg/scripts.pory"
# 79 "data/maps/Route20_Frlg/scripts.pory"
# 109 "data/maps/Route20_Frlg/scripts.pory"
	.string "Want to float with me?$"
# 110 "data/maps/Route20_Frlg/scripts.pory"

# 111 "data/maps/Route20_Frlg/scripts.pory"
Route20_Text_IreneIntro::
# 112 "data/maps/Route20_Frlg/scripts.pory"
# 83 "data/maps/Route20_Frlg/scripts.pory"
# 113 "data/maps/Route20_Frlg/scripts.pory"
	.string "Are you on vacation, too?$"
# 114 "data/maps/Route20_Frlg/scripts.pory"

# 115 "data/maps/Route20_Frlg/scripts.pory"
Route20_Text_IreneDefeat::
# 116 "data/maps/Route20_Frlg/scripts.pory"
# 87 "data/maps/Route20_Frlg/scripts.pory"
# 117 "data/maps/Route20_Frlg/scripts.pory"
	.string "No mercy at all!$"
# 118 "data/maps/Route20_Frlg/scripts.pory"

# 119 "data/maps/Route20_Frlg/scripts.pory"
Route20_Text_IrenePostBattle::
# 120 "data/maps/Route20_Frlg/scripts.pory"
# 91 "data/maps/Route20_Frlg/scripts.pory"
# 121 "data/maps/Route20_Frlg/scripts.pory"
	.string "SEAFOAM used to be a single island\n"
# 122 "data/maps/Route20_Frlg/scripts.pory"
	.string "in the distant past.$"
# 123 "data/maps/Route20_Frlg/scripts.pory"

# 124 "data/maps/Route20_Frlg/scripts.pory"
Route20_Text_DeanIntro::
# 125 "data/maps/Route20_Frlg/scripts.pory"
# 96 "data/maps/Route20_Frlg/scripts.pory"
# 126 "data/maps/Route20_Frlg/scripts.pory"
	.string "Check out my buff physique!$"
# 127 "data/maps/Route20_Frlg/scripts.pory"

# 128 "data/maps/Route20_Frlg/scripts.pory"
Route20_Text_DeanDefeat::
# 129 "data/maps/Route20_Frlg/scripts.pory"
# 100 "data/maps/Route20_Frlg/scripts.pory"
# 130 "data/maps/Route20_Frlg/scripts.pory"
	.string "Wimpy!$"
# 131 "data/maps/Route20_Frlg/scripts.pory"

# 132 "data/maps/Route20_Frlg/scripts.pory"
Route20_Text_DeanPostBattle::
# 133 "data/maps/Route20_Frlg/scripts.pory"
# 104 "data/maps/Route20_Frlg/scripts.pory"
# 134 "data/maps/Route20_Frlg/scripts.pory"
	.string "I should've been buffing up my\n"
# 135 "data/maps/Route20_Frlg/scripts.pory"
	.string "POKéMON, not me!$"
# 136 "data/maps/Route20_Frlg/scripts.pory"

# 137 "data/maps/Route20_Frlg/scripts.pory"
Route20_Text_DarrinIntro::
# 138 "data/maps/Route20_Frlg/scripts.pory"
# 109 "data/maps/Route20_Frlg/scripts.pory"
# 139 "data/maps/Route20_Frlg/scripts.pory"
	.string "Why are you riding a POKéMON?\n"
# 140 "data/maps/Route20_Frlg/scripts.pory"
	.string "Can't you swim?$"
# 141 "data/maps/Route20_Frlg/scripts.pory"

# 142 "data/maps/Route20_Frlg/scripts.pory"
Route20_Text_DarrinDefeat::
# 143 "data/maps/Route20_Frlg/scripts.pory"
# 114 "data/maps/Route20_Frlg/scripts.pory"
# 144 "data/maps/Route20_Frlg/scripts.pory"
	.string "Ouch!\n"
# 145 "data/maps/Route20_Frlg/scripts.pory"
	.string "Torpedoed!$"
# 146 "data/maps/Route20_Frlg/scripts.pory"

# 147 "data/maps/Route20_Frlg/scripts.pory"
Route20_Text_DarrinPostBattle::
# 148 "data/maps/Route20_Frlg/scripts.pory"
# 119 "data/maps/Route20_Frlg/scripts.pory"
# 149 "data/maps/Route20_Frlg/scripts.pory"
	.string "Riding a POKéMON sure looks fun!$"
# 150 "data/maps/Route20_Frlg/scripts.pory"

# 151 "data/maps/Route20_Frlg/scripts.pory"
Route20_Text_RogerIntro::
# 152 "data/maps/Route20_Frlg/scripts.pory"
# 123 "data/maps/Route20_Frlg/scripts.pory"
# 153 "data/maps/Route20_Frlg/scripts.pory"
	.string "I rode my bird POKéMON here.$"
# 154 "data/maps/Route20_Frlg/scripts.pory"

# 155 "data/maps/Route20_Frlg/scripts.pory"
Route20_Text_RogerDefeat::
# 156 "data/maps/Route20_Frlg/scripts.pory"
# 127 "data/maps/Route20_Frlg/scripts.pory"
# 157 "data/maps/Route20_Frlg/scripts.pory"
	.string "Oh, no!\n"
# 158 "data/maps/Route20_Frlg/scripts.pory"
	.string "Now what am I to do?$"
# 159 "data/maps/Route20_Frlg/scripts.pory"

# 160 "data/maps/Route20_Frlg/scripts.pory"
Route20_Text_RogerPostBattle::
# 161 "data/maps/Route20_Frlg/scripts.pory"
# 132 "data/maps/Route20_Frlg/scripts.pory"
# 162 "data/maps/Route20_Frlg/scripts.pory"
	.string "My birds are exhausted.\n"
# 163 "data/maps/Route20_Frlg/scripts.pory"
	.string "They can't FLY me back!$"
# 164 "data/maps/Route20_Frlg/scripts.pory"

# 165 "data/maps/Route20_Frlg/scripts.pory"
Route20_Text_NoraIntro::
# 166 "data/maps/Route20_Frlg/scripts.pory"
# 137 "data/maps/Route20_Frlg/scripts.pory"
# 167 "data/maps/Route20_Frlg/scripts.pory"
	.string "My boyfriend gave me big pearls.$"
# 168 "data/maps/Route20_Frlg/scripts.pory"

# 169 "data/maps/Route20_Frlg/scripts.pory"
Route20_Text_NoraDefeat::
# 170 "data/maps/Route20_Frlg/scripts.pory"
# 141 "data/maps/Route20_Frlg/scripts.pory"
# 171 "data/maps/Route20_Frlg/scripts.pory"
	.string "Oh, no!\n"
# 172 "data/maps/Route20_Frlg/scripts.pory"
	.string "My pearls were in them!$"
# 173 "data/maps/Route20_Frlg/scripts.pory"

# 174 "data/maps/Route20_Frlg/scripts.pory"
Route20_Text_NoraPostBattle::
# 175 "data/maps/Route20_Frlg/scripts.pory"
# 146 "data/maps/Route20_Frlg/scripts.pory"
# 176 "data/maps/Route20_Frlg/scripts.pory"
	.string "Will my pearls grow bigger inside\n"
# 177 "data/maps/Route20_Frlg/scripts.pory"
	.string "CLOYSTER?$"
# 178 "data/maps/Route20_Frlg/scripts.pory"

# 179 "data/maps/Route20_Frlg/scripts.pory"
Route20_Text_MissyIntro::
# 180 "data/maps/Route20_Frlg/scripts.pory"
# 151 "data/maps/Route20_Frlg/scripts.pory"
# 181 "data/maps/Route20_Frlg/scripts.pory"
	.string "I swam here from CINNABAR ISLAND.\n"
# 182 "data/maps/Route20_Frlg/scripts.pory"
	.string "It wasn't easy, I tell you.$"
# 183 "data/maps/Route20_Frlg/scripts.pory"

# 184 "data/maps/Route20_Frlg/scripts.pory"
Route20_Text_MissyDefeat::
# 185 "data/maps/Route20_Frlg/scripts.pory"
# 156 "data/maps/Route20_Frlg/scripts.pory"
# 186 "data/maps/Route20_Frlg/scripts.pory"
	.string "I'm so disappointed!$"
# 187 "data/maps/Route20_Frlg/scripts.pory"

# 188 "data/maps/Route20_Frlg/scripts.pory"
Route20_Text_MissyPostBattle::
# 189 "data/maps/Route20_Frlg/scripts.pory"
# 160 "data/maps/Route20_Frlg/scripts.pory"
# 190 "data/maps/Route20_Frlg/scripts.pory"
	.string "POKéMON have taken over an\n"
# 191 "data/maps/Route20_Frlg/scripts.pory"
	.string "abandoned mansion on CINNABAR.\p"
# 192 "data/maps/Route20_Frlg/scripts.pory"
	.string "They call it the POKéMON MANSION\n"
# 193 "data/maps/Route20_Frlg/scripts.pory"
	.string "now.$"
# 194 "data/maps/Route20_Frlg/scripts.pory"

# 195 "data/maps/Route20_Frlg/scripts.pory"
Route20_Text_MelissaIntro::
# 196 "data/maps/Route20_Frlg/scripts.pory"
# 167 "data/maps/Route20_Frlg/scripts.pory"
# 197 "data/maps/Route20_Frlg/scripts.pory"
	.string "CINNABAR, in the west, has a LAB\n"
# 198 "data/maps/Route20_Frlg/scripts.pory"
	.string "for POKéMON.\p"
# 199 "data/maps/Route20_Frlg/scripts.pory"
	.string "My daddy works there.$"
# 200 "data/maps/Route20_Frlg/scripts.pory"

# 201 "data/maps/Route20_Frlg/scripts.pory"
Route20_Text_MelissaDefeat::
# 202 "data/maps/Route20_Frlg/scripts.pory"
# 173 "data/maps/Route20_Frlg/scripts.pory"
# 203 "data/maps/Route20_Frlg/scripts.pory"
	.string "Wait!\n"
# 204 "data/maps/Route20_Frlg/scripts.pory"
	.string "You're supposed to wait!$"
# 205 "data/maps/Route20_Frlg/scripts.pory"

# 206 "data/maps/Route20_Frlg/scripts.pory"
Route20_Text_MelissaPostBattle::
# 207 "data/maps/Route20_Frlg/scripts.pory"
# 178 "data/maps/Route20_Frlg/scripts.pory"
# 208 "data/maps/Route20_Frlg/scripts.pory"
	.string "CINNABAR is a volcanic island.\p"
# 209 "data/maps/Route20_Frlg/scripts.pory"
	.string "I heard it rose out of the sea\n"
# 210 "data/maps/Route20_Frlg/scripts.pory"
	.string "when a volcano erupted.$"
# 211 "data/maps/Route20_Frlg/scripts.pory"

# 212 "data/maps/Route20_Frlg/scripts.pory"
Route20_Text_SeafoamIslands::
# 213 "data/maps/Route20_Frlg/scripts.pory"
# 184 "data/maps/Route20_Frlg/scripts.pory"
# 214 "data/maps/Route20_Frlg/scripts.pory"
	.string "SEAFOAM ISLANDS$"
# 215 "data/maps/Route20_Frlg/scripts.pory"

# 216 "data/maps/Route20_Frlg/scripts.pory"
Route20_Text_MistyTrainsHere::
# 217 "data/maps/Route20_Frlg/scripts.pory"
# 188 "data/maps/Route20_Frlg/scripts.pory"
# 218 "data/maps/Route20_Frlg/scripts.pory"
	.string "Strong TRAINERS and WATER POKéMON\n"
# 219 "data/maps/Route20_Frlg/scripts.pory"
	.string "are common sights in these parts.\p"
# 220 "data/maps/Route20_Frlg/scripts.pory"
	.string "They say that MISTY of the\n"
# 221 "data/maps/Route20_Frlg/scripts.pory"
	.string "CERULEAN GYM trains here.$"
