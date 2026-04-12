LavenderTown_Frlg_MapScripts::
# 2 "data/maps/LavenderTown_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LavenderTown_OnTransition
	.byte 0


LavenderTown_OnTransition::
# 6 "data/maps/LavenderTown_Frlg/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_LAVENDER_TOWN
# 7 "data/maps/LavenderTown_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_S_S_ANNE_2F_CORRIDOR, 1
# 8 "data/maps/LavenderTown_Frlg/scripts.pory"
	setflag FLAG_HIDE_SS_ANNE_RIVAL
	end


LavenderTown_EventScript_LittleGirl::
# 13 "data/maps/LavenderTown_Frlg/scripts.pory"
	lock
# 14 "data/maps/LavenderTown_Frlg/scripts.pory"
	faceplayer
# 15 "data/maps/LavenderTown_Frlg/scripts.pory"
	msgbox LavenderTown_Text_DoYouBelieveInGhosts, MSGBOX_YESNO
# 16 "data/maps/LavenderTown_Frlg/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LavenderTown_EventScript_LittleGirl_2
LavenderTown_EventScript_LittleGirl_1:
# 19 "data/maps/LavenderTown_Frlg/scripts.pory"
	msgbox LavenderTown_Text_JustImaginingWhiteHand
# 20 "data/maps/LavenderTown_Frlg/scripts.pory"
	release
	end

LavenderTown_EventScript_LittleGirl_2:
# 17 "data/maps/LavenderTown_Frlg/scripts.pory"
	goto LavenderTown_EventScript_LittleGirlBelieve
	goto LavenderTown_EventScript_LittleGirl_1


LavenderTown_EventScript_LittleGirlBelieve::
# 25 "data/maps/LavenderTown_Frlg/scripts.pory"
	msgbox LavenderTown_Text_SoThereAreBelievers
# 26 "data/maps/LavenderTown_Frlg/scripts.pory"
	release
	end


LavenderTown_EventScript_WorkerM::
# 31 "data/maps/LavenderTown_Frlg/scripts.pory"
	msgbox LavenderTown_Text_TownKnownAsMonGraveSite, MSGBOX_NPC
	end


LavenderTown_EventScript_Boy::
# 36 "data/maps/LavenderTown_Frlg/scripts.pory"
	msgbox LavenderTown_Text_GhostsAppearedInTower, MSGBOX_NPC
	end


LavenderTown_EventScript_TownSign::
# 41 "data/maps/LavenderTown_Frlg/scripts.pory"
	msgbox LavenderTown_Text_TownSign, MSGBOX_SIGN
	end


LavenderTown_EventScript_SilphScopeNotice::
# 46 "data/maps/LavenderTown_Frlg/scripts.pory"
	msgbox LavenderTown_Text_SilphScopeNotice, MSGBOX_SIGN
	end


LavenderTown_EventScript_VolunteerHouseSign::
# 51 "data/maps/LavenderTown_Frlg/scripts.pory"
	msgbox LavenderTown_Text_VolunteerPokemonHouse, MSGBOX_SIGN
	end


LavenderTown_EventScript_PokemonTowerSign::
# 56 "data/maps/LavenderTown_Frlg/scripts.pory"
	msgbox LavenderTown_Text_PokemonTowerSign, MSGBOX_SIGN
	end


LavenderTown_Text_DoYouBelieveInGhosts::
# 60 "data/maps/LavenderTown_Frlg/scripts.pory"
	.string "Do you believe in ghosts?$"

LavenderTown_Text_SoThereAreBelievers::
# 64 "data/maps/LavenderTown_Frlg/scripts.pory"
	.string "Really?\n"
	.string "So there are believers…$"

LavenderTown_Text_JustImaginingWhiteHand::
# 69 "data/maps/LavenderTown_Frlg/scripts.pory"
	.string "Hahaha, I guess not.\p"
	.string "That white hand on your shoulder…\n"
	.string "I'm just imagining it.$"

LavenderTown_Text_TownKnownAsMonGraveSite::
# 75 "data/maps/LavenderTown_Frlg/scripts.pory"
	.string "This town is known as the grave\n"
	.string "site of POKéMON.\p"
	.string "Memorial services are held in\n"
	.string "POKéMON TOWER.$"

LavenderTown_Text_GhostsAppearedInTower::
# 82 "data/maps/LavenderTown_Frlg/scripts.pory"
	.string "Ghosts appeared in POKéMON TOWER.\p"
	.string "I think they're the spirits of\n"
	.string "POKéMON that the ROCKETS killed.$"

LavenderTown_Text_TownSign::
# 88 "data/maps/LavenderTown_Frlg/scripts.pory"
	.string "LAVENDER TOWN\n"
	.string "The Noble Purple Town$"

LavenderTown_Text_SilphScopeNotice::
# 93 "data/maps/LavenderTown_Frlg/scripts.pory"
	.string "New SILPH SCOPE!\n"
	.string "Make the Invisible Plain to See!\p"
	.string "SILPH CO.$"

LavenderTown_Text_VolunteerPokemonHouse::
# 99 "data/maps/LavenderTown_Frlg/scripts.pory"
	.string "LAVENDER VOLUNTEER\n"
	.string "POKéMON HOUSE$"

LavenderTown_Text_PokemonTowerSign::
# 104 "data/maps/LavenderTown_Frlg/scripts.pory"
	.string "POKéMON TOWER\n"
	.string "Becalm the Spirits of POKéMON$"
