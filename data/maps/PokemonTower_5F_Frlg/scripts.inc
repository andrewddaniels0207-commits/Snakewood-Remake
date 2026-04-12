# 1 "data/maps/PokemonTower_5F_Frlg/scripts.pory"

# 2 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
PokemonTower_5F_Frlg_MapScripts::
# 3 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
	.byte 0
# 4 "data/maps/PokemonTower_5F_Frlg/scripts.pory"

# 5 "data/maps/PokemonTower_5F_Frlg/scripts.pory"

# 6 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
PokemonTower_5F_EventScript_Channeler::
# 7 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
# 4 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
# 8 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
	msgbox PokemonTower_5F_Text_RestHereInPurifiedSpace, MSGBOX_NPC
# 9 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
	end
# 10 "data/maps/PokemonTower_5F_Frlg/scripts.pory"

# 11 "data/maps/PokemonTower_5F_Frlg/scripts.pory"

# 12 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
PokemonTower_5F_EventScript_PurifiedZone::
# 13 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
# 9 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
# 14 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
	lockall
# 15 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
# 10 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
# 16 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
	fadescreen FADE_TO_WHITE
# 17 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
# 11 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
# 18 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
	special HealPlayerParty
# 19 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
# 12 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
# 20 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 21 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
# 13 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
# 22 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
	msgbox PokemonTower_5F_Text_PurifiedZoneMonsFullyHealed
# 23 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
# 14 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
# 24 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 1
# 25 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
# 15 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
# 26 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
	releaseall
# 27 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
	end
# 28 "data/maps/PokemonTower_5F_Frlg/scripts.pory"

# 29 "data/maps/PokemonTower_5F_Frlg/scripts.pory"

# 30 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
PokemonTower_5F_EventScript_ExitPurifiedZone::
# 31 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
# 20 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
# 32 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
	lockall
# 33 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
# 21 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
# 34 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 0
# 35 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
# 22 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
# 36 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
	releaseall
# 37 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
	end
# 38 "data/maps/PokemonTower_5F_Frlg/scripts.pory"

# 39 "data/maps/PokemonTower_5F_Frlg/scripts.pory"

# 40 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
PokemonTower_5F_EventScript_Tammy::
# 41 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
# 27 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
# 42 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_CHANNELER_TAMMY, PokemonTower_5F_Text_TammyIntro, PokemonTower_5F_Text_TammyDefeat
# 43 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
# 28 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
# 44 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
	msgbox PokemonTower_5F_Text_TammyPostBattle, MSGBOX_AUTOCLOSE
# 45 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
	end
# 46 "data/maps/PokemonTower_5F_Frlg/scripts.pory"

# 47 "data/maps/PokemonTower_5F_Frlg/scripts.pory"

# 48 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
PokemonTower_5F_EventScript_Ruth::
# 49 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
# 33 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
# 50 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_CHANNELER_RUTH, PokemonTower_5F_Text_RuthIntro, PokemonTower_5F_Text_RuthDefeat
# 51 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
# 34 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
# 52 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
	msgbox PokemonTower_5F_Text_RuthPostBattle, MSGBOX_AUTOCLOSE
# 53 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
	end
# 54 "data/maps/PokemonTower_5F_Frlg/scripts.pory"

# 55 "data/maps/PokemonTower_5F_Frlg/scripts.pory"

# 56 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
PokemonTower_5F_EventScript_Karina::
# 57 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
# 39 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
# 58 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_CHANNELER_KARINA, PokemonTower_5F_Text_KarinaIntro, PokemonTower_5F_Text_KarinaDefeat
# 59 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
# 40 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
# 60 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
	msgbox PokemonTower_5F_Text_KarinaPostBattle, MSGBOX_AUTOCLOSE
# 61 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
	end
# 62 "data/maps/PokemonTower_5F_Frlg/scripts.pory"

# 63 "data/maps/PokemonTower_5F_Frlg/scripts.pory"

# 64 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
PokemonTower_5F_EventScript_Janae::
# 65 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
# 45 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
# 66 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_CHANNELER_JANAE, PokemonTower_5F_Text_JanaeIntro, PokemonTower_5F_Text_JanaeDefeat
# 67 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
# 46 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
# 68 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
	msgbox PokemonTower_5F_Text_JanaePostBattle, MSGBOX_AUTOCLOSE
# 69 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
	end
# 70 "data/maps/PokemonTower_5F_Frlg/scripts.pory"

# 71 "data/maps/PokemonTower_5F_Frlg/scripts.pory"

# 72 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
PokemonTower_5F_Text_RestHereInPurifiedSpace::
# 73 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
# 50 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
# 74 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
	.string "Come, child!\n"
# 75 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
	.string "I have purified this space.\l"
# 76 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
	.string "You can rest here.$"
# 77 "data/maps/PokemonTower_5F_Frlg/scripts.pory"

# 78 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
PokemonTower_5F_Text_TammyIntro::
# 79 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
# 56 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
# 80 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
	.string "Give…me…\n"
# 81 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
	.string "your…all…$"
# 82 "data/maps/PokemonTower_5F_Frlg/scripts.pory"

# 83 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
PokemonTower_5F_Text_TammyDefeat::
# 84 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
# 61 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
# 85 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
	.string "Gasp!$"
# 86 "data/maps/PokemonTower_5F_Frlg/scripts.pory"

# 87 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
PokemonTower_5F_Text_TammyPostBattle::
# 88 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
# 65 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
# 89 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
	.string "I was under possession.$"
# 90 "data/maps/PokemonTower_5F_Frlg/scripts.pory"

# 91 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
PokemonTower_5F_Text_RuthIntro::
# 92 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
# 69 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
# 93 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
	.string "You…shall…\n"
# 94 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
	.string "join…us…$"
# 95 "data/maps/PokemonTower_5F_Frlg/scripts.pory"

# 96 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
PokemonTower_5F_Text_RuthDefeat::
# 97 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
# 74 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
# 98 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
	.string "What a nightmare!$"
# 99 "data/maps/PokemonTower_5F_Frlg/scripts.pory"

# 100 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
PokemonTower_5F_Text_RuthPostBattle::
# 101 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
# 78 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
# 102 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
	.string "I was possessed.$"
# 103 "data/maps/PokemonTower_5F_Frlg/scripts.pory"

# 104 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
PokemonTower_5F_Text_KarinaIntro::
# 105 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
# 82 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
# 106 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
	.string "Zombies!$"
# 107 "data/maps/PokemonTower_5F_Frlg/scripts.pory"

# 108 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
PokemonTower_5F_Text_KarinaDefeat::
# 109 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
# 86 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
# 110 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
	.string "Ha?$"
# 111 "data/maps/PokemonTower_5F_Frlg/scripts.pory"

# 112 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
PokemonTower_5F_Text_KarinaPostBattle::
# 113 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
# 90 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
# 114 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
	.string "I regained my senses.$"
# 115 "data/maps/PokemonTower_5F_Frlg/scripts.pory"

# 116 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
PokemonTower_5F_Text_JanaeIntro::
# 117 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
# 94 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
# 118 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
	.string "Urgah…\n"
# 119 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
	.string "Urff…$"
# 120 "data/maps/PokemonTower_5F_Frlg/scripts.pory"

# 121 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
PokemonTower_5F_Text_JanaeDefeat::
# 122 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
# 99 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
# 123 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
	.string "Whoo!$"
# 124 "data/maps/PokemonTower_5F_Frlg/scripts.pory"

# 125 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
PokemonTower_5F_Text_JanaePostBattle::
# 126 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
# 103 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
# 127 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
	.string "I fell to evil spirits despite my\n"
# 128 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
	.string "training in the mountains…$"
# 129 "data/maps/PokemonTower_5F_Frlg/scripts.pory"

# 130 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
PokemonTower_5F_Text_PurifiedZoneMonsFullyHealed::
# 131 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
# 108 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
# 132 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
	.string "Entered the purified and protected\n"
# 133 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
	.string "zone.\p"
# 134 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
	.string "{PLAYER}'s POKéMON were fully\n"
# 135 "data/maps/PokemonTower_5F_Frlg/scripts.pory"
	.string "healed.$"
