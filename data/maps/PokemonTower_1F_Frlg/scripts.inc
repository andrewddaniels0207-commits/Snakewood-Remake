PokemonTower_1F_Frlg_MapScripts::
# 2 "data/maps/PokemonTower_1F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PokemonTower_1F_OnTransition
	.byte 0


PokemonTower_1F_OnTransition::
# 6 "data/maps/PokemonTower_1F_Frlg/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_POKEMON_TOWER_1F
	end


PokemonTower_1F_EventScript_Channeler::
# 11 "data/maps/PokemonTower_1F_Frlg/scripts.pory"
	msgbox PokemonTower_1F_Text_SenseSpiritsUpToMischief, MSGBOX_NPC
	end


PokemonTower_1F_EventScript_Woman1::
# 16 "data/maps/PokemonTower_1F_Frlg/scripts.pory"
	msgbox PokemonTower_1F_Text_GrowlitheWhyDidYouDie, MSGBOX_NPC
	end


PokemonTower_1F_EventScript_BaldingMan::
# 21 "data/maps/PokemonTower_1F_Frlg/scripts.pory"
	msgbox PokemonTower_1F_Text_CameToPrayForDepartedClefairy, MSGBOX_NPC
	end


PokemonTower_1F_EventScript_Woman2::
# 26 "data/maps/PokemonTower_1F_Frlg/scripts.pory"
	lock
# 27 "data/maps/PokemonTower_1F_Frlg/scripts.pory"
	faceplayer
# 28 "data/maps/PokemonTower_1F_Frlg/scripts.pory"
	checkplayergender
# 29 "data/maps/PokemonTower_1F_Frlg/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq PokemonTower_1F_EventScript_Woman2_2
PokemonTower_1F_EventScript_Woman2_1:
# 32 "data/maps/PokemonTower_1F_Frlg/scripts.pory"
	msgbox PokemonTower_1F_Text_ComeToPayRespectsGirl
# 33 "data/maps/PokemonTower_1F_Frlg/scripts.pory"
	release
	end

PokemonTower_1F_EventScript_Woman2_2:
# 30 "data/maps/PokemonTower_1F_Frlg/scripts.pory"
	goto PokemonTower_1F_EventScript_Woman2MalePlayer
	goto PokemonTower_1F_EventScript_Woman2_1


PokemonTower_1F_EventScript_Woman2MalePlayer::
# 38 "data/maps/PokemonTower_1F_Frlg/scripts.pory"
	msgbox PokemonTower_1F_Text_ComeToPayRespectsSon
# 39 "data/maps/PokemonTower_1F_Frlg/scripts.pory"
	release
	end


PokemonTower_1F_EventScript_WorkerF::
# 44 "data/maps/PokemonTower_1F_Frlg/scripts.pory"
	msgbox PokemonTower_1F_Text_ErectedInMemoryOfDeadMons, MSGBOX_NPC
	end


PokemonTower_1F_Text_ErectedInMemoryOfDeadMons::
# 48 "data/maps/PokemonTower_1F_Frlg/scripts.pory"
	.string "POKéMON TOWER was erected in the\n"
	.string "memory of POKéMON that died.$"

PokemonTower_1F_Text_ComeToPayRespectsSon::
# 53 "data/maps/PokemonTower_1F_Frlg/scripts.pory"
	.string "Did you come to pay respects?\p"
	.string "Bless your POKéMON-loving heart,\n"
	.string "son.$"

PokemonTower_1F_Text_ComeToPayRespectsGirl::
# 59 "data/maps/PokemonTower_1F_Frlg/scripts.pory"
	.string "Did you come to pay respects?\p"
	.string "Bless your POKéMON-loving heart,\n"
	.string "girl.$"

PokemonTower_1F_Text_CameToPrayForDepartedClefairy::
# 65 "data/maps/PokemonTower_1F_Frlg/scripts.pory"
	.string "I came to pray for my dearly\n"
	.string "departed CLEFAIRY.\p"
	.string "Sniff!\n"
	.string "I'm awash in tears…$"

PokemonTower_1F_Text_GrowlitheWhyDidYouDie::
# 72 "data/maps/PokemonTower_1F_Frlg/scripts.pory"
	.string "My GROWLITHE…\n"
	.string "Why did you die?$"

PokemonTower_1F_Text_SenseSpiritsUpToMischief::
# 77 "data/maps/PokemonTower_1F_Frlg/scripts.pory"
	.string "I am a CHANNELER.\p"
	.string "There are spirits up to mischief.\n"
	.string "I sense them high in the TOWER.$"
