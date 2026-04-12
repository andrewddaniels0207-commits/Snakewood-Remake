# 1 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"

# 2 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
VermilionCity_PokemonCenter_1F_Frlg_MapScripts::
# 3 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
# 2 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
# 4 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, VermilionCity_PokemonCenter_1F_OnTransition
# 5 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
# 3 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
# 6 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
# 7 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
	.byte 0
# 8 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"

# 9 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"

# 10 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
VermilionCity_PokemonCenter_1F_OnTransition::
# 11 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
# 7 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
# 12 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
	setrespawn HEAL_LOCATION_VERMILION_CITY
# 13 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 14 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"

# 15 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"

# 16 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
VermilionCity_PokemonCenter_1F_EventScript_Nurse::
# 17 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
# 12 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
# 18 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
	lock
# 19 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
# 13 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
# 20 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
	faceplayer
# 21 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
# 14 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
# 22 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
	call EventScript_PkmnCenterNurse_Frlg
# 23 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
# 15 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
# 24 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
	release
# 25 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 26 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"

# 27 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"

# 28 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
VermilionCity_PokemonCenter_1F_EventScript_Man::
# 29 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
# 20 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
# 30 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox VermilionCity_PokemonCenter_1F_Text_PoisonedMonFaintedWhileWalking, MSGBOX_NPC
# 31 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 32 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"

# 33 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"

# 34 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
VermilionCity_PokemonCenter_1F_EventScript_Hiker::
# 35 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
# 25 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
# 36 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox VermilionCity_PokemonCenter_1F_Text_TrainerMonsStrongerThanWild, MSGBOX_NPC
# 37 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 38 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"

# 39 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"

# 40 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
VermilionCity_PokemonCenter_1F_EventScript_Youngster::
# 41 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
# 30 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
# 42 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox VermilionCity_PokemonCenter_1F_Text_AllMonWeakToSpecificTypes, MSGBOX_NPC
# 43 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 44 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"

# 45 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"

# 46 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
VermilionCity_PokemonCenter_1F_EventScript_VSSeekerWoman::
# 47 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
# 35 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
# 48 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
	lock
# 49 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
# 36 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
# 50 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
	faceplayer
# 51 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
# 37 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
# 52 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
	goto_if_set FLAG_GOT_VS_SEEKER, VermilionCity_PokemonCenter_1F_EventScript_VSSeekerWoman_2
# 53 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
VermilionCity_PokemonCenter_1F_EventScript_VSSeekerWoman_1:
# 54 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
# 40 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
# 55 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox VermilionCity_PokemonCenter_1F_Text_UrgeToBattleSomeoneAgain
# 56 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
# 41 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
# 57 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
	setflag FLAG_GOT_VS_SEEKER
# 58 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
# 42 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
# 59 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
	giveitem ITEM_VS_SEEKER
# 60 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
# 43 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
# 61 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
	compare VAR_RESULT, FALSE
# 62 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
	goto_if_eq VermilionCity_PokemonCenter_1F_EventScript_VSSeekerWoman_5
# 63 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
VermilionCity_PokemonCenter_1F_EventScript_VSSeekerWoman_4:
# 64 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
# 46 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
# 65 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox VermilionCity_PokemonCenter_1F_Text_UseDeviceForRematches
# 66 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
# 47 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
# 67 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
	release
# 68 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 69 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"

# 70 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
VermilionCity_PokemonCenter_1F_EventScript_VSSeekerWoman_2:
# 71 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
# 38 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
# 72 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
	goto VermilionCity_PokemonCenter_1F_EventScript_ExplainVSSeeker
# 73 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
	goto VermilionCity_PokemonCenter_1F_EventScript_VSSeekerWoman_1
# 74 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"

# 75 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
VermilionCity_PokemonCenter_1F_EventScript_VSSeekerWoman_5:
# 76 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
# 44 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
# 77 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
	goto EventScript_BagIsFull
# 78 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
	goto VermilionCity_PokemonCenter_1F_EventScript_VSSeekerWoman_4
# 79 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"

# 80 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"

# 81 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
VermilionCity_PokemonCenter_1F_EventScript_ExplainVSSeeker::
# 82 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
# 52 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
# 83 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox VermilionCity_PokemonCenter_1F_Text_ExplainVSSeeker
# 84 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
# 53 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
# 85 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
	release
# 86 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 87 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"

# 88 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"

# 89 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
VermilionCity_PokemonCenter_1F_Text_TrainerMonsStrongerThanWild::
# 90 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
# 57 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
# 91 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Even if they are the same level,\n"
# 92 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "POKéMON can have very different\l"
# 93 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "stats and abilities.\p"
# 94 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "A POKéMON raised by a TRAINER is\n"
# 95 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "stronger than one in the wild.$"
# 96 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"

# 97 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
VermilionCity_PokemonCenter_1F_Text_PoisonedMonFaintedWhileWalking::
# 98 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
# 65 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
# 99 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "My POKéMON was poisoned!\n"
# 100 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "It fainted while we were walking!$"
# 101 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"

# 102 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
VermilionCity_PokemonCenter_1F_Text_AllMonWeakToSpecificTypes::
# 103 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
# 70 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
# 104 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "It is true that a higher-level\n"
# 105 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "POKéMON will be more powerful…\p"
# 106 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "But, all POKéMON will have weak\n"
# 107 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "points against specific types.\p"
# 108 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "So, there appears to be no\n"
# 109 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "universally strong POKéMON.$"
# 110 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"

# 111 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
VermilionCity_PokemonCenter_1F_Text_UrgeToBattleSomeoneAgain::
# 112 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
# 79 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
# 113 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "The urge to battle with someone\n"
# 114 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "you've tangled with before…\p"
# 115 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Have you ever had that urge?\n"
# 116 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "I'm sure you have.\p"
# 117 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "I wanted to battle certain people\n"
# 118 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "again over and over, too.\p"
# 119 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "So, I've been giving these away.\n"
# 120 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Please, take one!$"
# 121 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"

# 122 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
VermilionCity_PokemonCenter_1F_Text_UseDeviceForRematches::
# 123 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
# 90 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
# 124 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Use that device and you'll find\n"
# 125 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "TRAINERS looking for a rematch.\p"
# 126 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "You have to charge its battery to\n"
# 127 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "use it, though.$"
# 128 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"

# 129 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
VermilionCity_PokemonCenter_1F_Text_ExplainVSSeeker::
# 130 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
# 97 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
# 131 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "How do you use the VS SEEKER?\n"
# 132 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "There's nothing to it.\p"
# 133 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Use it like beep-beep-beep, and\n"
# 134 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "TRAINERS around you will notice.\p"
# 135 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "If any TRAINER wants a rematch,\n"
# 136 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "it will let you know immediately.\p"
# 137 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Charge its battery and use it\n"
# 138 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "while you're on a road.$"
