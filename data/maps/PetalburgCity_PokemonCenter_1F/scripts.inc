PetalburgCity_PokemonCenter_1F_MapScripts::
# 2 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PetalburgCity_PokemonCenter_1F_OnTransition
# 3 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0


PetalburgCity_PokemonCenter_1F_OnTransition::
# 7 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_PETALBURG_CITY
# 8 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_UpdateBrineyLocation
	end


PetalburgCity_PokemonCenter_1F_EventScript_Nurse::
# 13 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x800B, LOCALID_PETALBURG_NURSE
# 14 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 15 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	waitmessage
# 16 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	waitbuttonpress
# 17 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	release
	end


PetalburgCity_PokemonCenter_1F_EventScript_FatMan::
# 22 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgCity_PokemonCenter_1F_Text_PCStorageSystem, MSGBOX_NPC
	end


PetalburgCity_PokemonCenter_1F_EventScript_Youngster::
# 27 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgCity_PokemonCenter_1F_Text_OranBerryRegainedHP, MSGBOX_NPC
	end


PetalburgCity_PokemonCenter_1F_EventScript_Woman::
# 32 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	lock
# 33 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	faceplayer
# 34 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgCity_PokemonCenter_1F_Text_ManyTypesOfPokemon, MSGBOX_DEFAULT
# 35 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	specialvar VAR_RESULT, IsStarterInParty
# 36 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq PetalburgCity_PokemonCenter_1F_EventScript_Woman_2
PetalburgCity_PokemonCenter_1F_EventScript_Woman_1:
# 39 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	release
	end

PetalburgCity_PokemonCenter_1F_EventScript_Woman_2:
# 37 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	goto PetalburgCity_PokemonCenter_1F_EventScript_SayStarterTypeInfo
	goto PetalburgCity_PokemonCenter_1F_EventScript_Woman_1


PetalburgCity_PokemonCenter_1F_EventScript_SayStarterTypeInfo::
# 44 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	compare VAR_STARTER_MON, 0
	goto_if_eq PetalburgCity_PokemonCenter_1F_EventScript_SayStarterTypeInfo_2
PetalburgCity_PokemonCenter_1F_EventScript_SayStarterTypeInfo_1:
# 47 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	compare VAR_STARTER_MON, 1
	goto_if_eq PetalburgCity_PokemonCenter_1F_EventScript_SayStarterTypeInfo_5
PetalburgCity_PokemonCenter_1F_EventScript_SayStarterTypeInfo_4:
# 50 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	compare VAR_STARTER_MON, 2
	goto_if_eq PetalburgCity_PokemonCenter_1F_EventScript_SayStarterTypeInfo_8
PetalburgCity_PokemonCenter_1F_EventScript_SayStarterTypeInfo_7:
# 53 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	release
	end

PetalburgCity_PokemonCenter_1F_EventScript_SayStarterTypeInfo_2:
# 45 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	call PetalburgCity_PokemonCenter_1F_EventScript_SayTreeckoType
	goto PetalburgCity_PokemonCenter_1F_EventScript_SayStarterTypeInfo_1

PetalburgCity_PokemonCenter_1F_EventScript_SayStarterTypeInfo_5:
# 48 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	call PetalburgCity_PokemonCenter_1F_EventScript_SayTorchicType
	goto PetalburgCity_PokemonCenter_1F_EventScript_SayStarterTypeInfo_4

PetalburgCity_PokemonCenter_1F_EventScript_SayStarterTypeInfo_8:
# 51 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	call PetalburgCity_PokemonCenter_1F_EventScript_SayMudkipType
	goto PetalburgCity_PokemonCenter_1F_EventScript_SayStarterTypeInfo_7


PetalburgCity_PokemonCenter_1F_EventScript_SayTreeckoType::
# 58 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgCity_PokemonCenter_1F_Text_TreeckoIsGrassType, MSGBOX_DEFAULT
	return


PetalburgCity_PokemonCenter_1F_EventScript_SayTorchicType::
# 63 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgCity_PokemonCenter_1F_Text_TorchicIsFireType, MSGBOX_DEFAULT
	return


PetalburgCity_PokemonCenter_1F_EventScript_SayMudkipType::
# 68 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgCity_PokemonCenter_1F_Text_MudkipIsWaterType, MSGBOX_DEFAULT
	return


PetalburgCity_PokemonCenter_1F_Text_PCStorageSystem::
# 72 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "That PC-based POKéMON Storage\n"
	.string "System…\p"
	.string "Whoever made it must be some kind\n"
	.string "of a scientific wizard!$"

PetalburgCity_PokemonCenter_1F_Text_OranBerryRegainedHP::
# 79 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "When my POKéMON ate an\n"
	.string "ORAN BERRY, it regained HP!$"

PetalburgCity_PokemonCenter_1F_Text_ManyTypesOfPokemon::
# 84 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "There are many types of POKéMON.\p"
	.string "All types have their strengths and\n"
	.string "weaknesses against other types.\p"
	.string "Depending on the types of POKéMON,\n"
	.string "a battle could be easy or hard.$"

PetalburgCity_PokemonCenter_1F_Text_TreeckoIsGrassType::
# 92 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "For example, your TREECKO\n"
	.string "is a GRASS type.\p"
	.string "It's strong against the WATER and\n"
	.string "GROUND types.\p"
	.string "But, it's weak against FIRE-type\n"
	.string "POKéMON.$"

PetalburgCity_PokemonCenter_1F_Text_TorchicIsFireType::
# 101 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "For example, your TORCHIC\n"
	.string "is a FIRE type.\p"
	.string "It's strong against the GRASS and\n"
	.string "BUG types.\p"
	.string "But, it's weak against WATER-type\n"
	.string "POKéMON.$"

PetalburgCity_PokemonCenter_1F_Text_MudkipIsWaterType::
# 110 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "For example, your MUDKIP\n"
	.string "is a WATER type.\p"
	.string "It's strong against the FIRE type.\p"
	.string "But, it's weak against GRASS-type\n"
	.string "and ELECTRIC-type POKéMON.$"
