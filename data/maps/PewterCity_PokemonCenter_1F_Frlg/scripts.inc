# 1 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"

# 2 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"
PewterCity_PokemonCenter_1F_Frlg_MapScripts::
# 3 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"
# 2 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"
# 4 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PewterCity_PokemonCenter_1F_OnTransition
# 5 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"
# 3 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"
# 6 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
# 7 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"
	.byte 0
# 8 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"

# 9 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"

# 10 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"
PewterCity_PokemonCenter_1F_OnTransition::
# 11 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"
# 7 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"
# 12 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"
	setrespawn HEAL_LOCATION_PEWTER_CITY
# 13 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 14 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"

# 15 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"

# 16 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"
PewterCity_PokemonCenter_1F_EventScript_Nurse::
# 17 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"
# 12 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"
# 18 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"
	lock
# 19 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"
# 13 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"
# 20 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"
	faceplayer
# 21 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"
# 14 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"
# 22 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"
	call EventScript_PkmnCenterNurse_Frlg
# 23 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"
# 15 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"
# 24 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"
	release
# 25 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 26 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"

# 27 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"

# 28 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"
PewterCity_PokemonCenter_1F_EventScript_Gentleman::
# 29 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"
# 20 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"
# 30 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox PewterCity_PokemonCenter_1F_Text_TeamRocketMtMoonImOnPhone, MSGBOX_NPC
# 31 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 32 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"

# 33 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"

# 34 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"
PewterCity_PokemonCenter_1F_EventScript_Jigglypuff::
# 35 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"
# 25 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"
# 36 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"
	lock
# 37 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"
# 26 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"
# 38 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"
	faceplayer
# 39 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"
# 27 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"
# 40 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"
	fadeoutbgm 0
# 41 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"
# 28 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"
# 42 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"
	playbgm MUS_RG_JIGGLYPUFF, 0
# 43 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"
# 29 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"
# 44 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"
	message PewterCity_PokemonCenter_1F_Text_Jigglypuff
# 45 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"
# 30 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"
# 46 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"
	waitmessage
# 47 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"
# 31 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"
# 48 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"
	delay 455
# 49 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"
# 32 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"
# 50 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"
	playbgm MUS_POKE_CENTER, 1
# 51 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"
# 33 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"
# 52 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"
	release
# 53 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 54 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"

# 55 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"

# 56 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"
PewterCity_PokemonCenter_1F_EventScript_Youngster::
# 57 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"
# 38 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"
# 58 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox PewterCity_PokemonCenter_1F_Text_WhenJiggylypuffSingsMonsGetDrowsy, MSGBOX_NPC
# 59 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 60 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"

# 61 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"

# 62 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"
PewterCity_PokemonCenter_1F_EventScript_GBAKid1::
# 63 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"
# 43 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"
# 64 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"
	lock
# 65 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"
# 44 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"
# 66 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox PewterCity_PokemonCenter_1F_Text_TradingMyClefairyForPikachu
# 67 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"
# 45 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"
# 68 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"
	release
# 69 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 70 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"

# 71 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"

# 72 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"
PewterCity_PokemonCenter_1F_EventScript_GBAKid2::
# 73 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"
# 50 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"
# 74 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox PewterCity_PokemonCenter_1F_Text_TradingPikachuWithKid, MSGBOX_NPC
# 75 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 76 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"

# 77 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"

# 78 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"
PewterCity_PokemonCenter_1F_Text_TeamRocketMtMoonImOnPhone::
# 79 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"
# 54 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"
# 80 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "What!?\p"
# 81 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "TEAM ROCKET is at MT. MOON?\n"
# 82 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Huh?\p"
# 83 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "I'm on the phone!\n"
# 84 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Scram!$"
# 85 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"

# 86 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"
PewterCity_PokemonCenter_1F_Text_Jigglypuff::
# 87 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"
# 62 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"
# 88 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "JIGGLYPUFF: Puu pupuu!$"
# 89 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"

# 90 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"
PewterCity_PokemonCenter_1F_Text_WhenJiggylypuffSingsMonsGetDrowsy::
# 91 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"
# 66 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"
# 92 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Yawn!\p"
# 93 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "When JIGGLYPUFF sings, POKéMON get\n"
# 94 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "drowsy…\p"
# 95 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "…Me, too…\n"
# 96 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Snore…$"
# 97 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"

# 98 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"
PewterCity_PokemonCenter_1F_Text_TradingMyClefairyForPikachu::
# 99 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"
# 74 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"
# 100 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "I really want a PIKACHU, so I'm\n"
# 101 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "trading my CLEFAIRY for one.$"
# 102 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"

# 103 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"
PewterCity_PokemonCenter_1F_Text_TradingPikachuWithKid::
# 104 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"
# 79 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"
# 105 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "I'm trading POKéMON with that kid\n"
# 106 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "there.\p"
# 107 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "I had two PIKACHU, so I figured\n"
# 108 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "I might as well trade one.$"
