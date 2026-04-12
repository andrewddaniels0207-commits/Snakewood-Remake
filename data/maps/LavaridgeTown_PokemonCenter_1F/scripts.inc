# 1 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"

# 2 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
LavaridgeTown_PokemonCenter_1F_MapScripts::
# 3 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
# 2 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
# 4 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LavaridgeTown_PokemonCenter_1F_OnTransition
# 5 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
# 3 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
# 6 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
# 7 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	.byte 0
# 8 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"

# 9 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"

# 10 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
LavaridgeTown_PokemonCenter_1F_OnTransition::
# 11 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
# 7 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
# 12 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_LAVARIDGE_TOWN
# 13 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
# 8 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
# 14 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_UpdateBrineyLocation
# 15 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	end
# 16 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"

# 17 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"

# 18 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
LavaridgeTown_PokemonCenter_1F_EventScript_Nurse::
# 19 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
# 13 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
# 20 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x800B, LOCALID_LAVARIDGE_NURSE
# 21 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
# 14 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
# 22 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 23 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
# 15 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
# 24 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	waitmessage
# 25 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
# 16 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
# 26 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	waitbuttonpress
# 27 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
# 17 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
# 28 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	release
# 29 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	end
# 30 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"

# 31 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"

# 32 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
LavaridgeTown_PokemonCenter_1F_EventScript_Youngster::
# 33 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
# 22 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
# 34 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	msgbox LavaridgeTown_PokemonCenter_1F_Text_HotSpringCanInvigorate, MSGBOX_NPC
# 35 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	end
# 36 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"

# 37 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"

# 38 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
LavaridgeTown_PokemonCenter_1F_EventScript_Woman::
# 39 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
# 27 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
# 40 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	msgbox LavaridgeTown_PokemonCenter_1F_Text_TrainersPokemonSpendTimeTogether, MSGBOX_NPC
# 41 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	end
# 42 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"

# 43 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"

# 44 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
LavaridgeTown_PokemonCenter_1F_EventScript_Gentleman::
# 45 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
# 32 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
# 46 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	msgbox LavaridgeTown_PokemonCenter_1F_Text_TrainersShouldRestToo, MSGBOX_NPC
# 47 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	end
# 48 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"

# 49 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"

# 50 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
LavaridgeTown_PokemonCenter_1F_Text_TrainersPokemonSpendTimeTogether::
# 51 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
# 36 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
# 52 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	.string "I think POKéMON get closer to their\n"
# 53 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	.string "TRAINERS if they spend time together.\p"
# 54 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	.string "The longer the better.\n"
# 55 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	.string "That's what I think.$"
# 56 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"

# 57 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
LavaridgeTown_PokemonCenter_1F_Text_HotSpringCanInvigorate::
# 58 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
# 43 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
# 59 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	.string "It's sort of magical how just sitting\n"
# 60 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	.string "in a hot-spring pool can invigorate.\p"
# 61 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	.string "I wish I could let my POKéMON\n"
# 62 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	.string "soak, too.$"
# 63 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"

# 64 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
LavaridgeTown_PokemonCenter_1F_Text_TrainersShouldRestToo::
# 65 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
# 50 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
# 66 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	.string "Hohoho! Hey, kid, you can reach\n"
# 67 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	.string "the hot springs from here.\p"
# 68 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	.string "If POKéMON are getting rest, so too\n"
# 69 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	.string "should their TRAINERS.$"
