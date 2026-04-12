# 1 "data/maps/RockTunnel_1F_Frlg/scripts.pory"

# 2 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
RockTunnel_1F_Frlg_MapScripts::
# 3 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
# 2 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
# 4 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, RockTunnel_1F_OnTransition
# 5 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
	.byte 0
# 6 "data/maps/RockTunnel_1F_Frlg/scripts.pory"

# 7 "data/maps/RockTunnel_1F_Frlg/scripts.pory"

# 8 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
RockTunnel_1F_OnTransition::
# 9 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
# 6 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
# 10 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_ROCK_TUNNEL_1F
# 11 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
	end
# 12 "data/maps/RockTunnel_1F_Frlg/scripts.pory"

# 13 "data/maps/RockTunnel_1F_Frlg/scripts.pory"

# 14 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
RockTunnel_1F_EventScript_RouteSign::
# 15 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
# 11 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
# 16 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
	msgbox RockTunnel_1F_Text_RouteSign, MSGBOX_SIGN
# 17 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
	end
# 18 "data/maps/RockTunnel_1F_Frlg/scripts.pory"

# 19 "data/maps/RockTunnel_1F_Frlg/scripts.pory"

# 20 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
RockTunnel_1F_EventScript_Lenny::
# 21 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
# 16 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
# 22 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_HIKER_LENNY, RockTunnel_1F_Text_LennyIntro, RockTunnel_1F_Text_LennyDefeat
# 23 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
# 17 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
# 24 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
	msgbox RockTunnel_1F_Text_LennyPostBattle, MSGBOX_AUTOCLOSE
# 25 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
	end
# 26 "data/maps/RockTunnel_1F_Frlg/scripts.pory"

# 27 "data/maps/RockTunnel_1F_Frlg/scripts.pory"

# 28 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
RockTunnel_1F_EventScript_Oliver::
# 29 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
# 22 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
# 30 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_HIKER_OLIVER, RockTunnel_1F_Text_OliverIntro, RockTunnel_1F_Text_OliverDefeat
# 31 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
# 23 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
# 32 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
	msgbox RockTunnel_1F_Text_OliverPostBattle, MSGBOX_AUTOCLOSE
# 33 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
	end
# 34 "data/maps/RockTunnel_1F_Frlg/scripts.pory"

# 35 "data/maps/RockTunnel_1F_Frlg/scripts.pory"

# 36 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
RockTunnel_1F_EventScript_Lucas::
# 37 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
# 28 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
# 38 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_HIKER_LUCAS, RockTunnel_1F_Text_LucasIntro, RockTunnel_1F_Text_LucasDefeat
# 39 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
# 29 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
# 40 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
	msgbox RockTunnel_1F_Text_LucasPostBattle, MSGBOX_AUTOCLOSE
# 41 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
	end
# 42 "data/maps/RockTunnel_1F_Frlg/scripts.pory"

# 43 "data/maps/RockTunnel_1F_Frlg/scripts.pory"

# 44 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
RockTunnel_1F_EventScript_Ashton::
# 45 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
# 34 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
# 46 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_POKEMANIAC_ASHTON, RockTunnel_1F_Text_AshtonIntro, RockTunnel_1F_Text_AshtonDefeat
# 47 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
# 35 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
# 48 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
	msgbox RockTunnel_1F_Text_AshtonPostBattle, MSGBOX_AUTOCLOSE
# 49 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
	end
# 50 "data/maps/RockTunnel_1F_Frlg/scripts.pory"

# 51 "data/maps/RockTunnel_1F_Frlg/scripts.pory"

# 52 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
RockTunnel_1F_EventScript_Leah::
# 53 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
# 40 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
# 54 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_PICNICKER_LEAH, RockTunnel_1F_Text_LeahIntro, RockTunnel_1F_Text_LeahDefeat
# 55 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
# 41 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
# 56 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
	msgbox RockTunnel_1F_Text_LeahPostBattle, MSGBOX_AUTOCLOSE
# 57 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
	end
# 58 "data/maps/RockTunnel_1F_Frlg/scripts.pory"

# 59 "data/maps/RockTunnel_1F_Frlg/scripts.pory"

# 60 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
RockTunnel_1F_EventScript_Ariana::
# 61 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
# 46 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
# 62 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_PICNICKER_ARIANA, RockTunnel_1F_Text_ArianaIntro, RockTunnel_1F_Text_ArianaDefeat
# 63 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
# 47 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
# 64 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
	msgbox RockTunnel_1F_Text_ArianaPostBattle, MSGBOX_AUTOCLOSE
# 65 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
	end
# 66 "data/maps/RockTunnel_1F_Frlg/scripts.pory"

# 67 "data/maps/RockTunnel_1F_Frlg/scripts.pory"

# 68 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
RockTunnel_1F_EventScript_Dana::
# 69 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
# 52 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
# 70 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_PICNICKER_DANA, RockTunnel_1F_Text_DanaIntro, RockTunnel_1F_Text_DanaDefeat
# 71 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
# 53 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
# 72 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
	msgbox RockTunnel_1F_Text_DanaPostBattle, MSGBOX_AUTOCLOSE
# 73 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
	end
# 74 "data/maps/RockTunnel_1F_Frlg/scripts.pory"

# 75 "data/maps/RockTunnel_1F_Frlg/scripts.pory"

# 76 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
RockTunnel_1F_Text_LennyIntro::
# 77 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
# 57 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
# 78 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
	.string "This tunnel goes a long way, kid!$"
# 79 "data/maps/RockTunnel_1F_Frlg/scripts.pory"

# 80 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
RockTunnel_1F_Text_LennyDefeat::
# 81 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
# 61 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
# 82 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
	.string "Doh!\n"
# 83 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
	.string "You win!$"
# 84 "data/maps/RockTunnel_1F_Frlg/scripts.pory"

# 85 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
RockTunnel_1F_Text_LennyPostBattle::
# 86 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
# 66 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
# 87 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
	.string "Watch for ONIX.\n"
# 88 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
	.string "They appear only occasionally.\p"
# 89 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
	.string "High-level ones can put the\n"
# 90 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
	.string "squeeze on you!$"
# 91 "data/maps/RockTunnel_1F_Frlg/scripts.pory"

# 92 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
RockTunnel_1F_Text_OliverIntro::
# 93 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
# 73 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
# 94 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
	.string "Hmm.\n"
# 95 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
	.string "Maybe I'm lost in here…$"
# 96 "data/maps/RockTunnel_1F_Frlg/scripts.pory"

# 97 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
RockTunnel_1F_Text_OliverDefeat::
# 98 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
# 78 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
# 99 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
	.string "Ease up!\n"
# 100 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
	.string "What am I doing?\l"
# 101 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
	.string "Which way is out?$"
# 102 "data/maps/RockTunnel_1F_Frlg/scripts.pory"

# 103 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
RockTunnel_1F_Text_OliverPostBattle::
# 104 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
# 84 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
# 105 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
	.string "That sleeping POKéMON on ROUTE 12\n"
# 106 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
	.string "forced me to take this detour.$"
# 107 "data/maps/RockTunnel_1F_Frlg/scripts.pory"

# 108 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
RockTunnel_1F_Text_LucasIntro::
# 109 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
# 89 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
# 110 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
	.string "Outsiders like you need to show me\n"
# 111 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
	.string "some respect!$"
# 112 "data/maps/RockTunnel_1F_Frlg/scripts.pory"

# 113 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
RockTunnel_1F_Text_LucasDefeat::
# 114 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
# 94 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
# 115 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
	.string "I give!$"
# 116 "data/maps/RockTunnel_1F_Frlg/scripts.pory"

# 117 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
RockTunnel_1F_Text_LucasPostBattle::
# 118 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
# 98 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
# 119 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
	.string "You're talented enough to hike!$"
# 120 "data/maps/RockTunnel_1F_Frlg/scripts.pory"

# 121 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
RockTunnel_1F_Text_AshtonIntro::
# 122 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
# 102 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
# 123 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
	.string "POKéMON fight!\n"
# 124 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
	.string "Ready, go!$"
# 125 "data/maps/RockTunnel_1F_Frlg/scripts.pory"

# 126 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
RockTunnel_1F_Text_AshtonDefeat::
# 127 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
# 107 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
# 128 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
	.string "Game over!$"
# 129 "data/maps/RockTunnel_1F_Frlg/scripts.pory"

# 130 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
RockTunnel_1F_Text_AshtonPostBattle::
# 131 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
# 111 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
# 132 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
	.string "Oh well, I'll get a ZUBAT as I go!$"
# 133 "data/maps/RockTunnel_1F_Frlg/scripts.pory"

# 134 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
RockTunnel_1F_Text_LeahIntro::
# 135 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
# 115 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
# 136 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
	.string "Eek!\p"
# 137 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
	.string "Don't try anything funny in the\n"
# 138 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
	.string "dark!$"
# 139 "data/maps/RockTunnel_1F_Frlg/scripts.pory"

# 140 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
RockTunnel_1F_Text_LeahDefeat::
# 141 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
# 121 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
# 142 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
	.string "It was too dark…$"
# 143 "data/maps/RockTunnel_1F_Frlg/scripts.pory"

# 144 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
RockTunnel_1F_Text_LeahPostBattle::
# 145 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
# 125 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
# 146 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
	.string "I saw a MACHOP in this tunnel.$"
# 147 "data/maps/RockTunnel_1F_Frlg/scripts.pory"

# 148 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
RockTunnel_1F_Text_DanaIntro::
# 149 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
# 129 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
# 150 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
	.string "I came this far looking for wild\n"
# 151 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
	.string "POKéMON.$"
# 152 "data/maps/RockTunnel_1F_Frlg/scripts.pory"

# 153 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
RockTunnel_1F_Text_DanaDefeat::
# 154 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
# 134 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
# 155 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
	.string "I'm out of POKéMON!$"
# 156 "data/maps/RockTunnel_1F_Frlg/scripts.pory"

# 157 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
RockTunnel_1F_Text_DanaPostBattle::
# 158 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
# 138 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
# 159 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
	.string "You looked cute and harmless.\n"
# 160 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
	.string "Was I ever wrong!$"
# 161 "data/maps/RockTunnel_1F_Frlg/scripts.pory"

# 162 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
RockTunnel_1F_Text_ArianaIntro::
# 163 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
# 143 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
# 164 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
	.string "You have POKéMON!\n"
# 165 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
	.string "Let's start!$"
# 166 "data/maps/RockTunnel_1F_Frlg/scripts.pory"

# 167 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
RockTunnel_1F_Text_ArianaDefeat::
# 168 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
# 148 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
# 169 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
	.string "You play hard!$"
# 170 "data/maps/RockTunnel_1F_Frlg/scripts.pory"

# 171 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
RockTunnel_1F_Text_ArianaPostBattle::
# 172 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
# 152 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
# 173 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
	.string "Whew!\n"
# 174 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
	.string "I'm all sweaty now.$"
# 175 "data/maps/RockTunnel_1F_Frlg/scripts.pory"

# 176 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
RockTunnel_1F_Text_RouteSign::
# 177 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
# 157 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
# 178 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
	.string "ROCK TUNNEL\n"
# 179 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
	.string "CERULEAN CITY - LAVENDER TOWN$"
