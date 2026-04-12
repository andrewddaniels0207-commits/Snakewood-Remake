# 1 "data/maps/MtMoon_1F_Frlg/scripts.pory"

# 2 "data/maps/MtMoon_1F_Frlg/scripts.pory"
MtMoon_1F_Frlg_MapScripts::
# 3 "data/maps/MtMoon_1F_Frlg/scripts.pory"
# 2 "data/maps/MtMoon_1F_Frlg/scripts.pory"
# 4 "data/maps/MtMoon_1F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MtMoon_1F_OnTransition
# 5 "data/maps/MtMoon_1F_Frlg/scripts.pory"
	.byte 0
# 6 "data/maps/MtMoon_1F_Frlg/scripts.pory"

# 7 "data/maps/MtMoon_1F_Frlg/scripts.pory"

# 8 "data/maps/MtMoon_1F_Frlg/scripts.pory"
MtMoon_1F_OnTransition::
# 9 "data/maps/MtMoon_1F_Frlg/scripts.pory"
# 6 "data/maps/MtMoon_1F_Frlg/scripts.pory"
# 10 "data/maps/MtMoon_1F_Frlg/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_MT_MOON_1F
# 11 "data/maps/MtMoon_1F_Frlg/scripts.pory"
	end
# 12 "data/maps/MtMoon_1F_Frlg/scripts.pory"

# 13 "data/maps/MtMoon_1F_Frlg/scripts.pory"

# 14 "data/maps/MtMoon_1F_Frlg/scripts.pory"
MtMoon_1F_EventScript_ZubatSign::
# 15 "data/maps/MtMoon_1F_Frlg/scripts.pory"
# 11 "data/maps/MtMoon_1F_Frlg/scripts.pory"
# 16 "data/maps/MtMoon_1F_Frlg/scripts.pory"
	msgbox MtMoon_1F_Text_ZubatIsABloodsucker, MSGBOX_SIGN
# 17 "data/maps/MtMoon_1F_Frlg/scripts.pory"
	end
# 18 "data/maps/MtMoon_1F_Frlg/scripts.pory"

# 19 "data/maps/MtMoon_1F_Frlg/scripts.pory"

# 20 "data/maps/MtMoon_1F_Frlg/scripts.pory"
MtMoon_1F_EventScript_Marcos::
# 21 "data/maps/MtMoon_1F_Frlg/scripts.pory"
# 16 "data/maps/MtMoon_1F_Frlg/scripts.pory"
# 22 "data/maps/MtMoon_1F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_HIKER_MARCOS, MtMoon_1F_Text_MarcosIntro, MtMoon_1F_Text_MarcosDefeat
# 23 "data/maps/MtMoon_1F_Frlg/scripts.pory"
# 17 "data/maps/MtMoon_1F_Frlg/scripts.pory"
# 24 "data/maps/MtMoon_1F_Frlg/scripts.pory"
	msgbox MtMoon_1F_Text_MarcosPostBattle, MSGBOX_AUTOCLOSE
# 25 "data/maps/MtMoon_1F_Frlg/scripts.pory"
	end
# 26 "data/maps/MtMoon_1F_Frlg/scripts.pory"

# 27 "data/maps/MtMoon_1F_Frlg/scripts.pory"

# 28 "data/maps/MtMoon_1F_Frlg/scripts.pory"
MtMoon_1F_EventScript_Josh::
# 29 "data/maps/MtMoon_1F_Frlg/scripts.pory"
# 22 "data/maps/MtMoon_1F_Frlg/scripts.pory"
# 30 "data/maps/MtMoon_1F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_YOUNGSTER_JOSH, MtMoon_1F_Text_JoshIntro, MtMoon_1F_Text_JoshDefeat
# 31 "data/maps/MtMoon_1F_Frlg/scripts.pory"
# 23 "data/maps/MtMoon_1F_Frlg/scripts.pory"
# 32 "data/maps/MtMoon_1F_Frlg/scripts.pory"
	msgbox MtMoon_1F_Text_JoshPostBattle, MSGBOX_AUTOCLOSE
# 33 "data/maps/MtMoon_1F_Frlg/scripts.pory"
	end
# 34 "data/maps/MtMoon_1F_Frlg/scripts.pory"

# 35 "data/maps/MtMoon_1F_Frlg/scripts.pory"

# 36 "data/maps/MtMoon_1F_Frlg/scripts.pory"
MtMoon_1F_EventScript_Miriam::
# 37 "data/maps/MtMoon_1F_Frlg/scripts.pory"
# 28 "data/maps/MtMoon_1F_Frlg/scripts.pory"
# 38 "data/maps/MtMoon_1F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_LASS_MIRIAM, MtMoon_1F_Text_MiriamIntro, MtMoon_1F_Text_MiriamDefeat
# 39 "data/maps/MtMoon_1F_Frlg/scripts.pory"
# 29 "data/maps/MtMoon_1F_Frlg/scripts.pory"
# 40 "data/maps/MtMoon_1F_Frlg/scripts.pory"
	msgbox MtMoon_1F_Text_MiriamPostBattle, MSGBOX_AUTOCLOSE
# 41 "data/maps/MtMoon_1F_Frlg/scripts.pory"
	end
# 42 "data/maps/MtMoon_1F_Frlg/scripts.pory"

# 43 "data/maps/MtMoon_1F_Frlg/scripts.pory"

# 44 "data/maps/MtMoon_1F_Frlg/scripts.pory"
MtMoon_1F_EventScript_Iris::
# 45 "data/maps/MtMoon_1F_Frlg/scripts.pory"
# 34 "data/maps/MtMoon_1F_Frlg/scripts.pory"
# 46 "data/maps/MtMoon_1F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_LASS_IRIS, MtMoon_1F_Text_IrisIntro, MtMoon_1F_Text_IrisDefeat
# 47 "data/maps/MtMoon_1F_Frlg/scripts.pory"
# 35 "data/maps/MtMoon_1F_Frlg/scripts.pory"
# 48 "data/maps/MtMoon_1F_Frlg/scripts.pory"
	msgbox MtMoon_1F_Text_IrisPostBattle, MSGBOX_AUTOCLOSE
# 49 "data/maps/MtMoon_1F_Frlg/scripts.pory"
	end
# 50 "data/maps/MtMoon_1F_Frlg/scripts.pory"

# 51 "data/maps/MtMoon_1F_Frlg/scripts.pory"

# 52 "data/maps/MtMoon_1F_Frlg/scripts.pory"
MtMoon_1F_EventScript_Jovan::
# 53 "data/maps/MtMoon_1F_Frlg/scripts.pory"
# 40 "data/maps/MtMoon_1F_Frlg/scripts.pory"
# 54 "data/maps/MtMoon_1F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_SUPER_NERD_JOVAN, MtMoon_1F_Text_JovanIntro, MtMoon_1F_Text_JovanDefeat
# 55 "data/maps/MtMoon_1F_Frlg/scripts.pory"
# 41 "data/maps/MtMoon_1F_Frlg/scripts.pory"
# 56 "data/maps/MtMoon_1F_Frlg/scripts.pory"
	msgbox MtMoon_1F_Text_JovanPostBattle, MSGBOX_AUTOCLOSE
# 57 "data/maps/MtMoon_1F_Frlg/scripts.pory"
	end
# 58 "data/maps/MtMoon_1F_Frlg/scripts.pory"

# 59 "data/maps/MtMoon_1F_Frlg/scripts.pory"

# 60 "data/maps/MtMoon_1F_Frlg/scripts.pory"
MtMoon_1F_EventScript_Kent::
# 61 "data/maps/MtMoon_1F_Frlg/scripts.pory"
# 46 "data/maps/MtMoon_1F_Frlg/scripts.pory"
# 62 "data/maps/MtMoon_1F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_BUG_CATCHER_KENT, MtMoon_1F_Text_KentIntro, MtMoon_1F_Text_KentDefeat
# 63 "data/maps/MtMoon_1F_Frlg/scripts.pory"
# 47 "data/maps/MtMoon_1F_Frlg/scripts.pory"
# 64 "data/maps/MtMoon_1F_Frlg/scripts.pory"
	msgbox MtMoon_1F_Text_KentPostBattle, MSGBOX_AUTOCLOSE
# 65 "data/maps/MtMoon_1F_Frlg/scripts.pory"
	end
# 66 "data/maps/MtMoon_1F_Frlg/scripts.pory"

# 67 "data/maps/MtMoon_1F_Frlg/scripts.pory"

# 68 "data/maps/MtMoon_1F_Frlg/scripts.pory"
MtMoon_1F_EventScript_Robby::
# 69 "data/maps/MtMoon_1F_Frlg/scripts.pory"
# 52 "data/maps/MtMoon_1F_Frlg/scripts.pory"
# 70 "data/maps/MtMoon_1F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_BUG_CATCHER_ROBBY, MtMoon_1F_Text_RobbyIntro, MtMoon_1F_Text_RobbyDefeat
# 71 "data/maps/MtMoon_1F_Frlg/scripts.pory"
# 53 "data/maps/MtMoon_1F_Frlg/scripts.pory"
# 72 "data/maps/MtMoon_1F_Frlg/scripts.pory"
	msgbox MtMoon_1F_Text_RobbyPostBattle, MSGBOX_AUTOCLOSE
# 73 "data/maps/MtMoon_1F_Frlg/scripts.pory"
	end
# 74 "data/maps/MtMoon_1F_Frlg/scripts.pory"

# 75 "data/maps/MtMoon_1F_Frlg/scripts.pory"

# 76 "data/maps/MtMoon_1F_Frlg/scripts.pory"
MtMoon_1F_Text_MarcosIntro::
# 77 "data/maps/MtMoon_1F_Frlg/scripts.pory"
# 57 "data/maps/MtMoon_1F_Frlg/scripts.pory"
# 78 "data/maps/MtMoon_1F_Frlg/scripts.pory"
	.string "WHOA!\n"
# 79 "data/maps/MtMoon_1F_Frlg/scripts.pory"
	.string "You shocked me!\l"
# 80 "data/maps/MtMoon_1F_Frlg/scripts.pory"
	.string "…Oh, you're just a kid!$"
# 81 "data/maps/MtMoon_1F_Frlg/scripts.pory"

# 82 "data/maps/MtMoon_1F_Frlg/scripts.pory"
MtMoon_1F_Text_MarcosDefeat::
# 83 "data/maps/MtMoon_1F_Frlg/scripts.pory"
# 63 "data/maps/MtMoon_1F_Frlg/scripts.pory"
# 84 "data/maps/MtMoon_1F_Frlg/scripts.pory"
	.string "Wow!\n"
# 85 "data/maps/MtMoon_1F_Frlg/scripts.pory"
	.string "Shocked again!$"
# 86 "data/maps/MtMoon_1F_Frlg/scripts.pory"

# 87 "data/maps/MtMoon_1F_Frlg/scripts.pory"
MtMoon_1F_Text_MarcosPostBattle::
# 88 "data/maps/MtMoon_1F_Frlg/scripts.pory"
# 68 "data/maps/MtMoon_1F_Frlg/scripts.pory"
# 89 "data/maps/MtMoon_1F_Frlg/scripts.pory"
	.string "Kids like you shouldn't be\n"
# 90 "data/maps/MtMoon_1F_Frlg/scripts.pory"
	.string "wandering around here in the dark.$"
# 91 "data/maps/MtMoon_1F_Frlg/scripts.pory"

# 92 "data/maps/MtMoon_1F_Frlg/scripts.pory"
MtMoon_1F_Text_JoshIntro::
# 93 "data/maps/MtMoon_1F_Frlg/scripts.pory"
# 73 "data/maps/MtMoon_1F_Frlg/scripts.pory"
# 94 "data/maps/MtMoon_1F_Frlg/scripts.pory"
	.string "Did you come to explore the cave,\n"
# 95 "data/maps/MtMoon_1F_Frlg/scripts.pory"
	.string "too?$"
# 96 "data/maps/MtMoon_1F_Frlg/scripts.pory"

# 97 "data/maps/MtMoon_1F_Frlg/scripts.pory"
MtMoon_1F_Text_JoshDefeat::
# 98 "data/maps/MtMoon_1F_Frlg/scripts.pory"
# 78 "data/maps/MtMoon_1F_Frlg/scripts.pory"
# 99 "data/maps/MtMoon_1F_Frlg/scripts.pory"
	.string "Losing stinks!\n"
# 100 "data/maps/MtMoon_1F_Frlg/scripts.pory"
	.string "It's so uncool.$"
# 101 "data/maps/MtMoon_1F_Frlg/scripts.pory"

# 102 "data/maps/MtMoon_1F_Frlg/scripts.pory"
MtMoon_1F_Text_JoshPostBattle::
# 103 "data/maps/MtMoon_1F_Frlg/scripts.pory"
# 83 "data/maps/MtMoon_1F_Frlg/scripts.pory"
# 104 "data/maps/MtMoon_1F_Frlg/scripts.pory"
	.string "I came all the way down here to\n"
# 105 "data/maps/MtMoon_1F_Frlg/scripts.pory"
	.string "show off to girls.$"
# 106 "data/maps/MtMoon_1F_Frlg/scripts.pory"

# 107 "data/maps/MtMoon_1F_Frlg/scripts.pory"
MtMoon_1F_Text_MiriamIntro::
# 108 "data/maps/MtMoon_1F_Frlg/scripts.pory"
# 88 "data/maps/MtMoon_1F_Frlg/scripts.pory"
# 109 "data/maps/MtMoon_1F_Frlg/scripts.pory"
	.string "Wow! It's way bigger in here than\n"
# 110 "data/maps/MtMoon_1F_Frlg/scripts.pory"
	.string "I thought!$"
# 111 "data/maps/MtMoon_1F_Frlg/scripts.pory"

# 112 "data/maps/MtMoon_1F_Frlg/scripts.pory"
MtMoon_1F_Text_MiriamDefeat::
# 113 "data/maps/MtMoon_1F_Frlg/scripts.pory"
# 93 "data/maps/MtMoon_1F_Frlg/scripts.pory"
# 114 "data/maps/MtMoon_1F_Frlg/scripts.pory"
	.string "Oh!\n"
# 115 "data/maps/MtMoon_1F_Frlg/scripts.pory"
	.string "I lost it!$"
# 116 "data/maps/MtMoon_1F_Frlg/scripts.pory"

# 117 "data/maps/MtMoon_1F_Frlg/scripts.pory"
MtMoon_1F_Text_MiriamPostBattle::
# 118 "data/maps/MtMoon_1F_Frlg/scripts.pory"
# 98 "data/maps/MtMoon_1F_Frlg/scripts.pory"
# 119 "data/maps/MtMoon_1F_Frlg/scripts.pory"
	.string "How do you get out of here?\n"
# 120 "data/maps/MtMoon_1F_Frlg/scripts.pory"
	.string "It's so big, I may get lost.$"
# 121 "data/maps/MtMoon_1F_Frlg/scripts.pory"

# 122 "data/maps/MtMoon_1F_Frlg/scripts.pory"
MtMoon_1F_Text_JovanIntro::
# 123 "data/maps/MtMoon_1F_Frlg/scripts.pory"
# 103 "data/maps/MtMoon_1F_Frlg/scripts.pory"
# 124 "data/maps/MtMoon_1F_Frlg/scripts.pory"
	.string "What!\n"
# 125 "data/maps/MtMoon_1F_Frlg/scripts.pory"
	.string "Don't sneak up on me!$"
# 126 "data/maps/MtMoon_1F_Frlg/scripts.pory"

# 127 "data/maps/MtMoon_1F_Frlg/scripts.pory"
MtMoon_1F_Text_JovanDefeat::
# 128 "data/maps/MtMoon_1F_Frlg/scripts.pory"
# 108 "data/maps/MtMoon_1F_Frlg/scripts.pory"
# 129 "data/maps/MtMoon_1F_Frlg/scripts.pory"
	.string "My POKéMON won't do!$"
# 130 "data/maps/MtMoon_1F_Frlg/scripts.pory"

# 131 "data/maps/MtMoon_1F_Frlg/scripts.pory"
MtMoon_1F_Text_JovanPostBattle::
# 132 "data/maps/MtMoon_1F_Frlg/scripts.pory"
# 112 "data/maps/MtMoon_1F_Frlg/scripts.pory"
# 133 "data/maps/MtMoon_1F_Frlg/scripts.pory"
	.string "I have to find stronger POKéMON.\n"
# 134 "data/maps/MtMoon_1F_Frlg/scripts.pory"
	.string "Where might they be?$"
# 135 "data/maps/MtMoon_1F_Frlg/scripts.pory"

# 136 "data/maps/MtMoon_1F_Frlg/scripts.pory"
MtMoon_1F_Text_IrisIntro::
# 137 "data/maps/MtMoon_1F_Frlg/scripts.pory"
# 117 "data/maps/MtMoon_1F_Frlg/scripts.pory"
# 138 "data/maps/MtMoon_1F_Frlg/scripts.pory"
	.string "What?\n"
# 139 "data/maps/MtMoon_1F_Frlg/scripts.pory"
	.string "I'm waiting for my friends to find\l"
# 140 "data/maps/MtMoon_1F_Frlg/scripts.pory"
	.string "me here.$"
# 141 "data/maps/MtMoon_1F_Frlg/scripts.pory"

# 142 "data/maps/MtMoon_1F_Frlg/scripts.pory"
MtMoon_1F_Text_IrisDefeat::
# 143 "data/maps/MtMoon_1F_Frlg/scripts.pory"
# 123 "data/maps/MtMoon_1F_Frlg/scripts.pory"
# 144 "data/maps/MtMoon_1F_Frlg/scripts.pory"
	.string "I lost?$"
# 145 "data/maps/MtMoon_1F_Frlg/scripts.pory"

# 146 "data/maps/MtMoon_1F_Frlg/scripts.pory"
MtMoon_1F_Text_IrisPostBattle::
# 147 "data/maps/MtMoon_1F_Frlg/scripts.pory"
# 127 "data/maps/MtMoon_1F_Frlg/scripts.pory"
# 148 "data/maps/MtMoon_1F_Frlg/scripts.pory"
	.string "I came because I heard there are\n"
# 149 "data/maps/MtMoon_1F_Frlg/scripts.pory"
	.string "some very rare fossils here.$"
# 150 "data/maps/MtMoon_1F_Frlg/scripts.pory"

# 151 "data/maps/MtMoon_1F_Frlg/scripts.pory"
MtMoon_1F_Text_KentIntro::
# 152 "data/maps/MtMoon_1F_Frlg/scripts.pory"
# 132 "data/maps/MtMoon_1F_Frlg/scripts.pory"
# 153 "data/maps/MtMoon_1F_Frlg/scripts.pory"
	.string "Suspicious men are in the cave.\n"
# 154 "data/maps/MtMoon_1F_Frlg/scripts.pory"
	.string "What about you?$"
# 155 "data/maps/MtMoon_1F_Frlg/scripts.pory"

# 156 "data/maps/MtMoon_1F_Frlg/scripts.pory"
MtMoon_1F_Text_KentDefeat::
# 157 "data/maps/MtMoon_1F_Frlg/scripts.pory"
# 137 "data/maps/MtMoon_1F_Frlg/scripts.pory"
# 158 "data/maps/MtMoon_1F_Frlg/scripts.pory"
	.string "You got me!$"
# 159 "data/maps/MtMoon_1F_Frlg/scripts.pory"

# 160 "data/maps/MtMoon_1F_Frlg/scripts.pory"
MtMoon_1F_Text_KentPostBattle::
# 161 "data/maps/MtMoon_1F_Frlg/scripts.pory"
# 141 "data/maps/MtMoon_1F_Frlg/scripts.pory"
# 162 "data/maps/MtMoon_1F_Frlg/scripts.pory"
	.string "I saw them!\n"
# 163 "data/maps/MtMoon_1F_Frlg/scripts.pory"
	.string "I'm sure they're from TEAM ROCKET!$"
# 164 "data/maps/MtMoon_1F_Frlg/scripts.pory"

# 165 "data/maps/MtMoon_1F_Frlg/scripts.pory"
MtMoon_1F_Text_RobbyIntro::
# 166 "data/maps/MtMoon_1F_Frlg/scripts.pory"
# 146 "data/maps/MtMoon_1F_Frlg/scripts.pory"
# 167 "data/maps/MtMoon_1F_Frlg/scripts.pory"
	.string "You need to go through this cave\n"
# 168 "data/maps/MtMoon_1F_Frlg/scripts.pory"
	.string "to get to CERULEAN CITY.$"
# 169 "data/maps/MtMoon_1F_Frlg/scripts.pory"

# 170 "data/maps/MtMoon_1F_Frlg/scripts.pory"
MtMoon_1F_Text_RobbyDefeat::
# 171 "data/maps/MtMoon_1F_Frlg/scripts.pory"
# 151 "data/maps/MtMoon_1F_Frlg/scripts.pory"
# 172 "data/maps/MtMoon_1F_Frlg/scripts.pory"
	.string "I lost.$"
# 173 "data/maps/MtMoon_1F_Frlg/scripts.pory"

# 174 "data/maps/MtMoon_1F_Frlg/scripts.pory"
MtMoon_1F_Text_RobbyPostBattle::
# 175 "data/maps/MtMoon_1F_Frlg/scripts.pory"
# 155 "data/maps/MtMoon_1F_Frlg/scripts.pory"
# 176 "data/maps/MtMoon_1F_Frlg/scripts.pory"
	.string "ZUBAT is tough!\n"
# 177 "data/maps/MtMoon_1F_Frlg/scripts.pory"
	.string "But if you can catch one, you'll\l"
# 178 "data/maps/MtMoon_1F_Frlg/scripts.pory"
	.string "be able to count on it.$"
# 179 "data/maps/MtMoon_1F_Frlg/scripts.pory"

# 180 "data/maps/MtMoon_1F_Frlg/scripts.pory"
MtMoon_1F_Text_ZubatIsABloodsucker::
# 181 "data/maps/MtMoon_1F_Frlg/scripts.pory"
# 161 "data/maps/MtMoon_1F_Frlg/scripts.pory"
# 182 "data/maps/MtMoon_1F_Frlg/scripts.pory"
	.string "Beware!\n"
# 183 "data/maps/MtMoon_1F_Frlg/scripts.pory"
	.string "ZUBAT is a bloodsucker!$"
# 184 "data/maps/MtMoon_1F_Frlg/scripts.pory"

# 185 "data/maps/MtMoon_1F_Frlg/scripts.pory"
MtMoon_1F_Text_BrockHelpsExcavateFossils::
# 186 "data/maps/MtMoon_1F_Frlg/scripts.pory"
# 166 "data/maps/MtMoon_1F_Frlg/scripts.pory"
# 187 "data/maps/MtMoon_1F_Frlg/scripts.pory"
	.string "Hi, I'm excavating for fossils here\n"
# 188 "data/maps/MtMoon_1F_Frlg/scripts.pory"
	.string "under MT. MOON.\p"
# 189 "data/maps/MtMoon_1F_Frlg/scripts.pory"
	.string "Sometimes, BROCK of PEWTER GYM\n"
# 190 "data/maps/MtMoon_1F_Frlg/scripts.pory"
	.string "lends me a hand.$"
