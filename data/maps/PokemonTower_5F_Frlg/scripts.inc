PokemonTower_5F_Frlg_MapScripts::
	.byte 0


PokemonTower_5F_EventScript_Channeler::
# 4 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
	msgbox PokemonTower_5F_Text_RestHereInPurifiedSpace, MSGBOX_NPC
	end


PokemonTower_5F_EventScript_PurifiedZone::
# 9 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
	lockall
# 10 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
	fadescreen FADE_TO_WHITE
# 11 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
	special HealPlayerParty
# 12 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 13 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
	msgbox PokemonTower_5F_Text_PurifiedZoneMonsFullyHealed
# 14 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 1
# 15 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
	releaseall
	end


PokemonTower_5F_EventScript_ExitPurifiedZone::
# 20 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
	lockall
# 21 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 0
# 22 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
	releaseall
	end


PokemonTower_5F_EventScript_Tammy::
# 27 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_CHANNELER_TAMMY, PokemonTower_5F_Text_TammyIntro, PokemonTower_5F_Text_TammyDefeat
# 28 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
	msgbox PokemonTower_5F_Text_TammyPostBattle, MSGBOX_AUTOCLOSE
	end


PokemonTower_5F_EventScript_Ruth::
# 33 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_CHANNELER_RUTH, PokemonTower_5F_Text_RuthIntro, PokemonTower_5F_Text_RuthDefeat
# 34 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
	msgbox PokemonTower_5F_Text_RuthPostBattle, MSGBOX_AUTOCLOSE
	end


PokemonTower_5F_EventScript_Karina::
# 39 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_CHANNELER_KARINA, PokemonTower_5F_Text_KarinaIntro, PokemonTower_5F_Text_KarinaDefeat
# 40 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
	msgbox PokemonTower_5F_Text_KarinaPostBattle, MSGBOX_AUTOCLOSE
	end


PokemonTower_5F_EventScript_Janae::
# 45 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_CHANNELER_JANAE, PokemonTower_5F_Text_JanaeIntro, PokemonTower_5F_Text_JanaeDefeat
# 46 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
	msgbox PokemonTower_5F_Text_JanaePostBattle, MSGBOX_AUTOCLOSE
	end


PokemonTower_5F_Text_RestHereInPurifiedSpace::
# 50 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
	.string "Come, child!\n"
	.string "I have purified this space.\l"
	.string "You can rest here.$"

PokemonTower_5F_Text_TammyIntro::
# 56 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
	.string "Give…me…\n"
	.string "your…all…$"

PokemonTower_5F_Text_TammyDefeat::
# 61 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
	.string "Gasp!$"

PokemonTower_5F_Text_TammyPostBattle::
# 65 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
	.string "I was under possession.$"

PokemonTower_5F_Text_RuthIntro::
# 69 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
	.string "You…shall…\n"
	.string "join…us…$"

PokemonTower_5F_Text_RuthDefeat::
# 74 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
	.string "What a nightmare!$"

PokemonTower_5F_Text_RuthPostBattle::
# 78 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
	.string "I was possessed.$"

PokemonTower_5F_Text_KarinaIntro::
# 82 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
	.string "Zombies!$"

PokemonTower_5F_Text_KarinaDefeat::
# 86 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
	.string "Ha?$"

PokemonTower_5F_Text_KarinaPostBattle::
# 90 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
	.string "I regained my senses.$"

PokemonTower_5F_Text_JanaeIntro::
# 94 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
	.string "Urgah…\n"
	.string "Urff…$"

PokemonTower_5F_Text_JanaeDefeat::
# 99 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
	.string "Whoo!$"

PokemonTower_5F_Text_JanaePostBattle::
# 103 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
	.string "I fell to evil spirits despite my\n"
	.string "training in the mountains…$"

PokemonTower_5F_Text_PurifiedZoneMonsFullyHealed::
# 108 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
	.string "Entered the purified and protected\n"
	.string "zone.\p"
	.string "{PLAYER}'s POKéMON were fully\n"
	.string "healed.$"
