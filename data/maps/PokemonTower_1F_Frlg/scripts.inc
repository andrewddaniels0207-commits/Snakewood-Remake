# 1 "data/maps/PokemonTower_1F_Frlg/scripts.pory"

# 2 "data/maps/PokemonTower_1F_Frlg/scripts.pory"
PokemonTower_1F_Frlg_MapScripts::
# 3 "data/maps/PokemonTower_1F_Frlg/scripts.pory"
# 2 "data/maps/PokemonTower_1F_Frlg/scripts.pory"
# 4 "data/maps/PokemonTower_1F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PokemonTower_1F_OnTransition
# 5 "data/maps/PokemonTower_1F_Frlg/scripts.pory"
	.byte 0
# 6 "data/maps/PokemonTower_1F_Frlg/scripts.pory"

# 7 "data/maps/PokemonTower_1F_Frlg/scripts.pory"

# 8 "data/maps/PokemonTower_1F_Frlg/scripts.pory"
PokemonTower_1F_OnTransition::
# 9 "data/maps/PokemonTower_1F_Frlg/scripts.pory"
# 6 "data/maps/PokemonTower_1F_Frlg/scripts.pory"
# 10 "data/maps/PokemonTower_1F_Frlg/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_POKEMON_TOWER_1F
# 11 "data/maps/PokemonTower_1F_Frlg/scripts.pory"
	end
# 12 "data/maps/PokemonTower_1F_Frlg/scripts.pory"

# 13 "data/maps/PokemonTower_1F_Frlg/scripts.pory"

# 14 "data/maps/PokemonTower_1F_Frlg/scripts.pory"
PokemonTower_1F_EventScript_Channeler::
# 15 "data/maps/PokemonTower_1F_Frlg/scripts.pory"
# 11 "data/maps/PokemonTower_1F_Frlg/scripts.pory"
# 16 "data/maps/PokemonTower_1F_Frlg/scripts.pory"
	msgbox PokemonTower_1F_Text_SenseSpiritsUpToMischief, MSGBOX_NPC
# 17 "data/maps/PokemonTower_1F_Frlg/scripts.pory"
	end
# 18 "data/maps/PokemonTower_1F_Frlg/scripts.pory"

# 19 "data/maps/PokemonTower_1F_Frlg/scripts.pory"

# 20 "data/maps/PokemonTower_1F_Frlg/scripts.pory"
PokemonTower_1F_EventScript_Woman1::
# 21 "data/maps/PokemonTower_1F_Frlg/scripts.pory"
# 16 "data/maps/PokemonTower_1F_Frlg/scripts.pory"
# 22 "data/maps/PokemonTower_1F_Frlg/scripts.pory"
	msgbox PokemonTower_1F_Text_GrowlitheWhyDidYouDie, MSGBOX_NPC
# 23 "data/maps/PokemonTower_1F_Frlg/scripts.pory"
	end
# 24 "data/maps/PokemonTower_1F_Frlg/scripts.pory"

# 25 "data/maps/PokemonTower_1F_Frlg/scripts.pory"

# 26 "data/maps/PokemonTower_1F_Frlg/scripts.pory"
PokemonTower_1F_EventScript_BaldingMan::
# 27 "data/maps/PokemonTower_1F_Frlg/scripts.pory"
# 21 "data/maps/PokemonTower_1F_Frlg/scripts.pory"
# 28 "data/maps/PokemonTower_1F_Frlg/scripts.pory"
	msgbox PokemonTower_1F_Text_CameToPrayForDepartedClefairy, MSGBOX_NPC
# 29 "data/maps/PokemonTower_1F_Frlg/scripts.pory"
	end
# 30 "data/maps/PokemonTower_1F_Frlg/scripts.pory"

# 31 "data/maps/PokemonTower_1F_Frlg/scripts.pory"

# 32 "data/maps/PokemonTower_1F_Frlg/scripts.pory"
PokemonTower_1F_EventScript_Woman2::
# 33 "data/maps/PokemonTower_1F_Frlg/scripts.pory"
# 26 "data/maps/PokemonTower_1F_Frlg/scripts.pory"
# 34 "data/maps/PokemonTower_1F_Frlg/scripts.pory"
	lock
# 35 "data/maps/PokemonTower_1F_Frlg/scripts.pory"
# 27 "data/maps/PokemonTower_1F_Frlg/scripts.pory"
# 36 "data/maps/PokemonTower_1F_Frlg/scripts.pory"
	faceplayer
# 37 "data/maps/PokemonTower_1F_Frlg/scripts.pory"
# 28 "data/maps/PokemonTower_1F_Frlg/scripts.pory"
# 38 "data/maps/PokemonTower_1F_Frlg/scripts.pory"
	checkplayergender
# 39 "data/maps/PokemonTower_1F_Frlg/scripts.pory"
# 29 "data/maps/PokemonTower_1F_Frlg/scripts.pory"
# 40 "data/maps/PokemonTower_1F_Frlg/scripts.pory"
	compare VAR_RESULT, MALE
# 41 "data/maps/PokemonTower_1F_Frlg/scripts.pory"
	goto_if_eq PokemonTower_1F_EventScript_Woman2_2
# 42 "data/maps/PokemonTower_1F_Frlg/scripts.pory"
PokemonTower_1F_EventScript_Woman2_1:
# 43 "data/maps/PokemonTower_1F_Frlg/scripts.pory"
# 32 "data/maps/PokemonTower_1F_Frlg/scripts.pory"
# 44 "data/maps/PokemonTower_1F_Frlg/scripts.pory"
	msgbox PokemonTower_1F_Text_ComeToPayRespectsGirl
# 45 "data/maps/PokemonTower_1F_Frlg/scripts.pory"
# 33 "data/maps/PokemonTower_1F_Frlg/scripts.pory"
# 46 "data/maps/PokemonTower_1F_Frlg/scripts.pory"
	release
# 47 "data/maps/PokemonTower_1F_Frlg/scripts.pory"
	end
# 48 "data/maps/PokemonTower_1F_Frlg/scripts.pory"

# 49 "data/maps/PokemonTower_1F_Frlg/scripts.pory"
PokemonTower_1F_EventScript_Woman2_2:
# 50 "data/maps/PokemonTower_1F_Frlg/scripts.pory"
# 30 "data/maps/PokemonTower_1F_Frlg/scripts.pory"
# 51 "data/maps/PokemonTower_1F_Frlg/scripts.pory"
	goto PokemonTower_1F_EventScript_Woman2MalePlayer
# 52 "data/maps/PokemonTower_1F_Frlg/scripts.pory"
	goto PokemonTower_1F_EventScript_Woman2_1
# 53 "data/maps/PokemonTower_1F_Frlg/scripts.pory"

# 54 "data/maps/PokemonTower_1F_Frlg/scripts.pory"

# 55 "data/maps/PokemonTower_1F_Frlg/scripts.pory"
PokemonTower_1F_EventScript_Woman2MalePlayer::
# 56 "data/maps/PokemonTower_1F_Frlg/scripts.pory"
# 38 "data/maps/PokemonTower_1F_Frlg/scripts.pory"
# 57 "data/maps/PokemonTower_1F_Frlg/scripts.pory"
	msgbox PokemonTower_1F_Text_ComeToPayRespectsSon
# 58 "data/maps/PokemonTower_1F_Frlg/scripts.pory"
# 39 "data/maps/PokemonTower_1F_Frlg/scripts.pory"
# 59 "data/maps/PokemonTower_1F_Frlg/scripts.pory"
	release
# 60 "data/maps/PokemonTower_1F_Frlg/scripts.pory"
	end
# 61 "data/maps/PokemonTower_1F_Frlg/scripts.pory"

# 62 "data/maps/PokemonTower_1F_Frlg/scripts.pory"

# 63 "data/maps/PokemonTower_1F_Frlg/scripts.pory"
PokemonTower_1F_EventScript_WorkerF::
# 64 "data/maps/PokemonTower_1F_Frlg/scripts.pory"
# 44 "data/maps/PokemonTower_1F_Frlg/scripts.pory"
# 65 "data/maps/PokemonTower_1F_Frlg/scripts.pory"
	msgbox PokemonTower_1F_Text_ErectedInMemoryOfDeadMons, MSGBOX_NPC
# 66 "data/maps/PokemonTower_1F_Frlg/scripts.pory"
	end
# 67 "data/maps/PokemonTower_1F_Frlg/scripts.pory"

# 68 "data/maps/PokemonTower_1F_Frlg/scripts.pory"

# 69 "data/maps/PokemonTower_1F_Frlg/scripts.pory"
PokemonTower_1F_Text_ErectedInMemoryOfDeadMons::
# 70 "data/maps/PokemonTower_1F_Frlg/scripts.pory"
# 48 "data/maps/PokemonTower_1F_Frlg/scripts.pory"
# 71 "data/maps/PokemonTower_1F_Frlg/scripts.pory"
	.string "POKéMON TOWER was erected in the\n"
# 72 "data/maps/PokemonTower_1F_Frlg/scripts.pory"
	.string "memory of POKéMON that died.$"
# 73 "data/maps/PokemonTower_1F_Frlg/scripts.pory"

# 74 "data/maps/PokemonTower_1F_Frlg/scripts.pory"
PokemonTower_1F_Text_ComeToPayRespectsSon::
# 75 "data/maps/PokemonTower_1F_Frlg/scripts.pory"
# 53 "data/maps/PokemonTower_1F_Frlg/scripts.pory"
# 76 "data/maps/PokemonTower_1F_Frlg/scripts.pory"
	.string "Did you come to pay respects?\p"
# 77 "data/maps/PokemonTower_1F_Frlg/scripts.pory"
	.string "Bless your POKéMON-loving heart,\n"
# 78 "data/maps/PokemonTower_1F_Frlg/scripts.pory"
	.string "son.$"
# 79 "data/maps/PokemonTower_1F_Frlg/scripts.pory"

# 80 "data/maps/PokemonTower_1F_Frlg/scripts.pory"
PokemonTower_1F_Text_ComeToPayRespectsGirl::
# 81 "data/maps/PokemonTower_1F_Frlg/scripts.pory"
# 59 "data/maps/PokemonTower_1F_Frlg/scripts.pory"
# 82 "data/maps/PokemonTower_1F_Frlg/scripts.pory"
	.string "Did you come to pay respects?\p"
# 83 "data/maps/PokemonTower_1F_Frlg/scripts.pory"
	.string "Bless your POKéMON-loving heart,\n"
# 84 "data/maps/PokemonTower_1F_Frlg/scripts.pory"
	.string "girl.$"
# 85 "data/maps/PokemonTower_1F_Frlg/scripts.pory"

# 86 "data/maps/PokemonTower_1F_Frlg/scripts.pory"
PokemonTower_1F_Text_CameToPrayForDepartedClefairy::
# 87 "data/maps/PokemonTower_1F_Frlg/scripts.pory"
# 65 "data/maps/PokemonTower_1F_Frlg/scripts.pory"
# 88 "data/maps/PokemonTower_1F_Frlg/scripts.pory"
	.string "I came to pray for my dearly\n"
# 89 "data/maps/PokemonTower_1F_Frlg/scripts.pory"
	.string "departed CLEFAIRY.\p"
# 90 "data/maps/PokemonTower_1F_Frlg/scripts.pory"
	.string "Sniff!\n"
# 91 "data/maps/PokemonTower_1F_Frlg/scripts.pory"
	.string "I'm awash in tears…$"
# 92 "data/maps/PokemonTower_1F_Frlg/scripts.pory"

# 93 "data/maps/PokemonTower_1F_Frlg/scripts.pory"
PokemonTower_1F_Text_GrowlitheWhyDidYouDie::
# 94 "data/maps/PokemonTower_1F_Frlg/scripts.pory"
# 72 "data/maps/PokemonTower_1F_Frlg/scripts.pory"
# 95 "data/maps/PokemonTower_1F_Frlg/scripts.pory"
	.string "My GROWLITHE…\n"
# 96 "data/maps/PokemonTower_1F_Frlg/scripts.pory"
	.string "Why did you die?$"
# 97 "data/maps/PokemonTower_1F_Frlg/scripts.pory"

# 98 "data/maps/PokemonTower_1F_Frlg/scripts.pory"
PokemonTower_1F_Text_SenseSpiritsUpToMischief::
# 99 "data/maps/PokemonTower_1F_Frlg/scripts.pory"
# 77 "data/maps/PokemonTower_1F_Frlg/scripts.pory"
# 100 "data/maps/PokemonTower_1F_Frlg/scripts.pory"
	.string "I am a CHANNELER.\p"
# 101 "data/maps/PokemonTower_1F_Frlg/scripts.pory"
	.string "There are spirits up to mischief.\n"
# 102 "data/maps/PokemonTower_1F_Frlg/scripts.pory"
	.string "I sense them high in the TOWER.$"
