RockTunnel_1F_Frlg_MapScripts::
# 2 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, RockTunnel_1F_OnTransition
	.byte 0


RockTunnel_1F_OnTransition::
# 6 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_ROCK_TUNNEL_1F
	end


RockTunnel_1F_EventScript_RouteSign::
# 11 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
	msgbox RockTunnel_1F_Text_RouteSign, MSGBOX_SIGN
	end


RockTunnel_1F_EventScript_Lenny::
# 16 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_HIKER_LENNY, RockTunnel_1F_Text_LennyIntro, RockTunnel_1F_Text_LennyDefeat
# 17 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
	msgbox RockTunnel_1F_Text_LennyPostBattle, MSGBOX_AUTOCLOSE
	end


RockTunnel_1F_EventScript_Oliver::
# 22 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_HIKER_OLIVER, RockTunnel_1F_Text_OliverIntro, RockTunnel_1F_Text_OliverDefeat
# 23 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
	msgbox RockTunnel_1F_Text_OliverPostBattle, MSGBOX_AUTOCLOSE
	end


RockTunnel_1F_EventScript_Lucas::
# 28 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_HIKER_LUCAS, RockTunnel_1F_Text_LucasIntro, RockTunnel_1F_Text_LucasDefeat
# 29 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
	msgbox RockTunnel_1F_Text_LucasPostBattle, MSGBOX_AUTOCLOSE
	end


RockTunnel_1F_EventScript_Ashton::
# 34 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_POKEMANIAC_ASHTON, RockTunnel_1F_Text_AshtonIntro, RockTunnel_1F_Text_AshtonDefeat
# 35 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
	msgbox RockTunnel_1F_Text_AshtonPostBattle, MSGBOX_AUTOCLOSE
	end


RockTunnel_1F_EventScript_Leah::
# 40 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_PICNICKER_LEAH, RockTunnel_1F_Text_LeahIntro, RockTunnel_1F_Text_LeahDefeat
# 41 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
	msgbox RockTunnel_1F_Text_LeahPostBattle, MSGBOX_AUTOCLOSE
	end


RockTunnel_1F_EventScript_Ariana::
# 46 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_PICNICKER_ARIANA, RockTunnel_1F_Text_ArianaIntro, RockTunnel_1F_Text_ArianaDefeat
# 47 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
	msgbox RockTunnel_1F_Text_ArianaPostBattle, MSGBOX_AUTOCLOSE
	end


RockTunnel_1F_EventScript_Dana::
# 52 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_PICNICKER_DANA, RockTunnel_1F_Text_DanaIntro, RockTunnel_1F_Text_DanaDefeat
# 53 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
	msgbox RockTunnel_1F_Text_DanaPostBattle, MSGBOX_AUTOCLOSE
	end


RockTunnel_1F_Text_LennyIntro::
# 57 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
	.string "This tunnel goes a long way, kid!$"

RockTunnel_1F_Text_LennyDefeat::
# 61 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
	.string "Doh!\n"
	.string "You win!$"

RockTunnel_1F_Text_LennyPostBattle::
# 66 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
	.string "Watch for ONIX.\n"
	.string "They appear only occasionally.\p"
	.string "High-level ones can put the\n"
	.string "squeeze on you!$"

RockTunnel_1F_Text_OliverIntro::
# 73 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
	.string "Hmm.\n"
	.string "Maybe I'm lost in here…$"

RockTunnel_1F_Text_OliverDefeat::
# 78 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
	.string "Ease up!\n"
	.string "What am I doing?\l"
	.string "Which way is out?$"

RockTunnel_1F_Text_OliverPostBattle::
# 84 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
	.string "That sleeping POKéMON on ROUTE 12\n"
	.string "forced me to take this detour.$"

RockTunnel_1F_Text_LucasIntro::
# 89 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
	.string "Outsiders like you need to show me\n"
	.string "some respect!$"

RockTunnel_1F_Text_LucasDefeat::
# 94 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
	.string "I give!$"

RockTunnel_1F_Text_LucasPostBattle::
# 98 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
	.string "You're talented enough to hike!$"

RockTunnel_1F_Text_AshtonIntro::
# 102 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
	.string "POKéMON fight!\n"
	.string "Ready, go!$"

RockTunnel_1F_Text_AshtonDefeat::
# 107 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
	.string "Game over!$"

RockTunnel_1F_Text_AshtonPostBattle::
# 111 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
	.string "Oh well, I'll get a ZUBAT as I go!$"

RockTunnel_1F_Text_LeahIntro::
# 115 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
	.string "Eek!\p"
	.string "Don't try anything funny in the\n"
	.string "dark!$"

RockTunnel_1F_Text_LeahDefeat::
# 121 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
	.string "It was too dark…$"

RockTunnel_1F_Text_LeahPostBattle::
# 125 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
	.string "I saw a MACHOP in this tunnel.$"

RockTunnel_1F_Text_DanaIntro::
# 129 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
	.string "I came this far looking for wild\n"
	.string "POKéMON.$"

RockTunnel_1F_Text_DanaDefeat::
# 134 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
	.string "I'm out of POKéMON!$"

RockTunnel_1F_Text_DanaPostBattle::
# 138 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
	.string "You looked cute and harmless.\n"
	.string "Was I ever wrong!$"

RockTunnel_1F_Text_ArianaIntro::
# 143 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
	.string "You have POKéMON!\n"
	.string "Let's start!$"

RockTunnel_1F_Text_ArianaDefeat::
# 148 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
	.string "You play hard!$"

RockTunnel_1F_Text_ArianaPostBattle::
# 152 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
	.string "Whew!\n"
	.string "I'm all sweaty now.$"

RockTunnel_1F_Text_RouteSign::
# 157 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
	.string "ROCK TUNNEL\n"
	.string "CERULEAN CITY - LAVENDER TOWN$"
