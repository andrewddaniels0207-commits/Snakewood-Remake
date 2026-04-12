# 1 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"

# 2 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
IndigoPlateau_PokemonCenter_1F_Frlg_MapScripts::
# 3 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
# 2 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
# 4 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, IndigoPlateau_PokemonCenter_1F_OnTransition
# 5 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
# 3 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
# 6 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
# 7 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
	.byte 0
# 8 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"

# 9 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"

# 10 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
IndigoPlateau_PokemonCenter_1F_OnTransition::
# 11 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
# 7 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
# 12 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
	setrespawn HEAL_LOCATION_INDIGO_PLATEAU
# 13 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
# 8 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
# 14 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
	specialvar VAR_RESULT, IsNationalPokedexEnabled
# 15 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
# 9 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
# 16 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
	compare VAR_RESULT, TRUE
# 17 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
	goto_if_eq IndigoPlateau_PokemonCenter_1F_OnTransition_2
# 18 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
IndigoPlateau_PokemonCenter_1F_OnTransition_1:
# 19 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 20 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"

# 21 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
IndigoPlateau_PokemonCenter_1F_OnTransition_2:
# 22 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
# 10 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
# 23 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
	call IndigoPlateau_PokemonCenter_1F_EventScript_CheckBlockDoor
# 24 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
	goto IndigoPlateau_PokemonCenter_1F_OnTransition_1
# 25 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"

# 26 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"

# 27 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
IndigoPlateau_PokemonCenter_1F_EventScript_CheckBlockDoor::
# 28 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
# 16 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
# 29 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
	goto_if_set FLAG_IS_CHAMPION, IndigoPlateau_PokemonCenter_1F_EventScript_CheckBlockDoor_2
# 30 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
IndigoPlateau_PokemonCenter_1F_EventScript_CheckBlockDoor_1:
# 31 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
# 19 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
# 32 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
	setobjectxyperm LOCALID_LEAGUE_DOOR_GUARD, 4, 2
# 33 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
	return
# 34 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"

# 35 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
IndigoPlateau_PokemonCenter_1F_EventScript_CheckBlockDoor_2:
# 36 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
# 17 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
# 37 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
	goto Common_EventScript_NopReturn
# 38 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
	goto IndigoPlateau_PokemonCenter_1F_EventScript_CheckBlockDoor_1
# 39 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"

# 40 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"

# 41 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
IndigoPlateau_PokemonCenter_1F_EventScript_DoorGuard::
# 42 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
# 24 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
# 43 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
	lock
# 44 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
# 25 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
# 45 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
	faceplayer
# 46 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
# 26 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
# 47 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
	specialvar VAR_RESULT, IsNationalPokedexEnabled
# 48 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
# 27 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
# 49 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
	compare VAR_RESULT, TRUE
# 50 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
	goto_if_eq IndigoPlateau_PokemonCenter_1F_EventScript_DoorGuard_2
# 51 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
IndigoPlateau_PokemonCenter_1F_EventScript_DoorGuard_1:
# 52 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
# 30 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
# 53 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox IndigoPlateau_PokemonCenter_1F_Text_FaceEliteFourGoodLuck
# 54 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
# 31 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
# 55 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
	release
# 56 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 57 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"

# 58 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
IndigoPlateau_PokemonCenter_1F_EventScript_DoorGuard_2:
# 59 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
# 28 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
# 60 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
	goto IndigoPlateau_PokemonCenter_1F_EventScript_CheckSeviiIslandComplete
# 61 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
	goto IndigoPlateau_PokemonCenter_1F_EventScript_DoorGuard_1
# 62 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"

# 63 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"

# 64 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
IndigoPlateau_PokemonCenter_1F_EventScript_CheckSeviiIslandComplete::
# 65 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
# 36 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
# 66 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
	goto_if_set FLAG_IS_CHAMPION, IndigoPlateau_PokemonCenter_1F_EventScript_CheckSeviiIslandComplete_2
# 67 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
IndigoPlateau_PokemonCenter_1F_EventScript_CheckSeviiIslandComplete_1:
# 68 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
# 39 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
# 69 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox IndigoPlateau_PokemonCenter_1F_Text_LoreleiIsAbsentClosedForTimeBeing
# 70 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
# 40 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
# 71 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
	release
# 72 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 73 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"

# 74 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
IndigoPlateau_PokemonCenter_1F_EventScript_CheckSeviiIslandComplete_2:
# 75 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
# 37 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
# 76 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
	goto IndigoPlateau_PokemonCenter_1F_EventScript_SeviiIslandComplete
# 77 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
	goto IndigoPlateau_PokemonCenter_1F_EventScript_CheckSeviiIslandComplete_1
# 78 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"

# 79 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"

# 80 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
IndigoPlateau_PokemonCenter_1F_EventScript_SeviiIslandComplete::
# 81 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
# 45 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
# 82 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox IndigoPlateau_PokemonCenter_1F_Text_FaceEliteFourGoodLuck
# 83 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
# 46 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
# 84 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
	release
# 85 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 86 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"

# 87 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"

# 88 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
IndigoPlateau_PokemonCenter_1F_EventScript_GymGuy::
# 89 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
# 51 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
# 90 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox IndigoPlateau_PokemonCenter_1F_Text_GymGuyAdvice, MSGBOX_NPC
# 91 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 92 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"

# 93 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"

# 94 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
IndigoPlateau_PokemonCenter_1F_EventScript_Clerk::
# 95 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
# 56 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
# 96 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
	lock
# 97 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
# 57 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
# 98 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
	faceplayer
# 99 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
# 58 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
# 100 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
	message gText_HowMayIServeYou
# 101 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
# 59 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
# 102 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
	waitmessage
# 103 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
# 60 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
# 104 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
	pokemart IndigoPlateau_PokemonCenter_1F_Items
# 105 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
# 61 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
# 106 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox gText_PleaseComeAgain
# 107 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
# 62 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
# 108 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
	release
# 109 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 110 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"

# 111 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"

# 112 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
IndigoPlateau_PokemonCenter_1F_Items::
# 113 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
# 67 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
# 114 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
	release
# 115 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 116 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"

# 117 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"

# 118 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
IndigoPlateau_PokemonCenter_1F_EventScript_Nurse::
# 119 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
# 72 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
# 120 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
	lock
# 121 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
# 73 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
# 122 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
	faceplayer
# 123 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
# 74 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
# 124 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
	call EventScript_PkmnCenterNurse_Frlg
# 125 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
# 75 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
# 126 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
	release
# 127 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 128 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"

# 129 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"

# 130 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
IndigoPlateau_PokemonCenter_1F_Text_GymGuyAdvice::
# 131 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
# 79 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
# 132 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Yo!\n"
# 133 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Champ in the making!\p"
# 134 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
	.string "At the POKéMON LEAGUE, you will\n"
# 135 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
	.string "face the ELITE FOUR all in a row.\p"
# 136 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
	.string "If you lose, you have to start all\n"
# 137 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
	.string "over again!\p"
# 138 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
	.string "This is it!\n"
# 139 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Go for it!$"
# 140 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"

# 141 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
IndigoPlateau_PokemonCenter_1F_Text_FaceEliteFourGoodLuck::
# 142 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
# 90 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
# 143 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
	.string "From here on, you face the\n"
# 144 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
	.string "ELITE FOUR one by one.\p"
# 145 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
	.string "If you win, a door opens to the\n"
# 146 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
	.string "next TRAINER. Good luck!$"
# 147 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"

# 148 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
IndigoPlateau_PokemonCenter_1F_Text_LoreleiIsAbsentClosedForTimeBeing::
# 149 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
# 97 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
# 150 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
	.string "I am so sorry, but you've wasted\n"
# 151 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
	.string "your time coming here.\p"
# 152 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
	.string "LORELEI of the ELITE FOUR is\n"
# 153 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
	.string "absent, you see.\p"
# 154 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
	.string "As a result, the POKéMON LEAGUE is\n"
# 155 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
	.string "closed for the time being.$"
# 156 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"

# 157 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
IndigoPlateau_PokemonCenter_1F_Text_AgathaWhuppedUs::
# 158 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
# 106 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
# 159 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
	.string "AGATHA's GHOST-type POKéMON are\n"
# 160 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
	.string "horrifically terrifying in toughness.\p"
# 161 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
	.string "I took my FIGHTING-type POKéMON\n"
# 162 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
	.string "and raised them to the max.\p"
# 163 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
	.string "I went at AGATHA feeling pretty\n"
# 164 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
	.string "confident, but she whupped us.\p"
# 165 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
	.string "That old lady's also got a really\n"
# 166 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
	.string "short fuse, too.\p"
# 167 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
	.string "It doesn't take anything to get\n"
# 168 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
	.string "that scary lady hollering.$"
# 169 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"

# 170 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
IndigoPlateau_PokemonCenter_1F_Text_LancesCousinGymLeaderFarAway::
# 171 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
# 119 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
# 172 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Maybe becoming an ELITE FOUR\n"
# 173 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
	.string "member is in the blood.\p"
# 174 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
	.string "From what I've heard, LANCE has\n"
# 175 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
	.string "a cousin who's a GYM LEADER\l"
# 176 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
	.string "somewhere far away.$"
