# 1 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 2 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgCity_PokemonCenter_1F_MapScripts::
# 3 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
# 2 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
# 4 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PetalburgCity_PokemonCenter_1F_OnTransition
# 5 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
# 3 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
# 6 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
# 7 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.byte 0
# 8 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 9 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 10 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgCity_PokemonCenter_1F_OnTransition::
# 11 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
# 7 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
# 12 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_PETALBURG_CITY
# 13 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
# 8 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
# 14 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_UpdateBrineyLocation
# 15 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	end
# 16 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 17 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 18 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgCity_PokemonCenter_1F_EventScript_Nurse::
# 19 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
# 13 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
# 20 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x800B, LOCALID_PETALBURG_NURSE
# 21 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
# 14 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
# 22 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 23 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
# 15 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
# 24 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	waitmessage
# 25 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
# 16 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
# 26 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	waitbuttonpress
# 27 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
# 17 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
# 28 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	release
# 29 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	end
# 30 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 31 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 32 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgCity_PokemonCenter_1F_EventScript_FatMan::
# 33 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
# 22 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
# 34 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgCity_PokemonCenter_1F_Text_PCStorageSystem, MSGBOX_NPC
# 35 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	end
# 36 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 37 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 38 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgCity_PokemonCenter_1F_EventScript_Youngster::
# 39 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
# 27 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
# 40 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgCity_PokemonCenter_1F_Text_OranBerryRegainedHP, MSGBOX_NPC
# 41 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	end
# 42 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 43 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 44 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgCity_PokemonCenter_1F_EventScript_Woman::
# 45 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
# 32 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
# 46 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	lock
# 47 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
# 33 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
# 48 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	faceplayer
# 49 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
# 34 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
# 50 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgCity_PokemonCenter_1F_Text_ManyTypesOfPokemon, MSGBOX_DEFAULT
# 51 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
# 35 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
# 52 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	specialvar VAR_RESULT, IsStarterInParty
# 53 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
# 36 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
# 54 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, TRUE
# 55 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	goto_if_eq PetalburgCity_PokemonCenter_1F_EventScript_Woman_2
# 56 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgCity_PokemonCenter_1F_EventScript_Woman_1:
# 57 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
# 39 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
# 58 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	release
# 59 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	end
# 60 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 61 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgCity_PokemonCenter_1F_EventScript_Woman_2:
# 62 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
# 37 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
# 63 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	goto PetalburgCity_PokemonCenter_1F_EventScript_SayStarterTypeInfo
# 64 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	goto PetalburgCity_PokemonCenter_1F_EventScript_Woman_1
# 65 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 66 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 67 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgCity_PokemonCenter_1F_EventScript_SayStarterTypeInfo::
# 68 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
# 44 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
# 69 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	compare VAR_STARTER_MON, 0
# 70 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	goto_if_eq PetalburgCity_PokemonCenter_1F_EventScript_SayStarterTypeInfo_2
# 71 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgCity_PokemonCenter_1F_EventScript_SayStarterTypeInfo_1:
# 72 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
# 47 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
# 73 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	compare VAR_STARTER_MON, 1
# 74 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	goto_if_eq PetalburgCity_PokemonCenter_1F_EventScript_SayStarterTypeInfo_5
# 75 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgCity_PokemonCenter_1F_EventScript_SayStarterTypeInfo_4:
# 76 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
# 50 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
# 77 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	compare VAR_STARTER_MON, 2
# 78 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	goto_if_eq PetalburgCity_PokemonCenter_1F_EventScript_SayStarterTypeInfo_8
# 79 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgCity_PokemonCenter_1F_EventScript_SayStarterTypeInfo_7:
# 80 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
# 53 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
# 81 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	release
# 82 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	end
# 83 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 84 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgCity_PokemonCenter_1F_EventScript_SayStarterTypeInfo_2:
# 85 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
# 45 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
# 86 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	call PetalburgCity_PokemonCenter_1F_EventScript_SayTreeckoType
# 87 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	goto PetalburgCity_PokemonCenter_1F_EventScript_SayStarterTypeInfo_1
# 88 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 89 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgCity_PokemonCenter_1F_EventScript_SayStarterTypeInfo_5:
# 90 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
# 48 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
# 91 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	call PetalburgCity_PokemonCenter_1F_EventScript_SayTorchicType
# 92 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	goto PetalburgCity_PokemonCenter_1F_EventScript_SayStarterTypeInfo_4
# 93 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 94 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgCity_PokemonCenter_1F_EventScript_SayStarterTypeInfo_8:
# 95 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
# 51 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
# 96 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	call PetalburgCity_PokemonCenter_1F_EventScript_SayMudkipType
# 97 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	goto PetalburgCity_PokemonCenter_1F_EventScript_SayStarterTypeInfo_7
# 98 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 99 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 100 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgCity_PokemonCenter_1F_EventScript_SayTreeckoType::
# 101 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
# 58 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
# 102 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgCity_PokemonCenter_1F_Text_TreeckoIsGrassType, MSGBOX_DEFAULT
# 103 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	return
# 104 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 105 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 106 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgCity_PokemonCenter_1F_EventScript_SayTorchicType::
# 107 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
# 63 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
# 108 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgCity_PokemonCenter_1F_Text_TorchicIsFireType, MSGBOX_DEFAULT
# 109 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	return
# 110 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 111 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 112 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgCity_PokemonCenter_1F_EventScript_SayMudkipType::
# 113 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
# 68 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
# 114 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgCity_PokemonCenter_1F_Text_MudkipIsWaterType, MSGBOX_DEFAULT
# 115 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	return
# 116 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 117 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 118 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgCity_PokemonCenter_1F_Text_PCStorageSystem::
# 119 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
# 72 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
# 120 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "That PC-based POKéMON Storage\n"
# 121 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "System…\p"
# 122 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "Whoever made it must be some kind\n"
# 123 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "of a scientific wizard!$"
# 124 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 125 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgCity_PokemonCenter_1F_Text_OranBerryRegainedHP::
# 126 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
# 79 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
# 127 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "When my POKéMON ate an\n"
# 128 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "ORAN BERRY, it regained HP!$"
# 129 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 130 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgCity_PokemonCenter_1F_Text_ManyTypesOfPokemon::
# 131 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
# 84 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
# 132 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "There are many types of POKéMON.\p"
# 133 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "All types have their strengths and\n"
# 134 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "weaknesses against other types.\p"
# 135 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "Depending on the types of POKéMON,\n"
# 136 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "a battle could be easy or hard.$"
# 137 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 138 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgCity_PokemonCenter_1F_Text_TreeckoIsGrassType::
# 139 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
# 92 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
# 140 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "For example, your TREECKO\n"
# 141 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "is a GRASS type.\p"
# 142 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "It's strong against the WATER and\n"
# 143 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "GROUND types.\p"
# 144 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "But, it's weak against FIRE-type\n"
# 145 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "POKéMON.$"
# 146 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 147 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgCity_PokemonCenter_1F_Text_TorchicIsFireType::
# 148 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
# 101 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
# 149 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "For example, your TORCHIC\n"
# 150 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "is a FIRE type.\p"
# 151 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "It's strong against the GRASS and\n"
# 152 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "BUG types.\p"
# 153 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "But, it's weak against WATER-type\n"
# 154 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "POKéMON.$"
# 155 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 156 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgCity_PokemonCenter_1F_Text_MudkipIsWaterType::
# 157 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
# 110 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
# 158 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "For example, your MUDKIP\n"
# 159 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "is a WATER type.\p"
# 160 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "It's strong against the FIRE type.\p"
# 161 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "But, it's weak against GRASS-type\n"
# 162 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "and ELECTRIC-type POKéMON.$"
