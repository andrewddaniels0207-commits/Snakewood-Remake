FortreeCity_MapScripts::
# 2 "data/maps/FortreeCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, FortreeCity_OnTransition
# 3 "data/maps/FortreeCity/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, FortreeCity_OnResume
	.byte 0


FortreeCity_OnTransition::
# 7 "data/maps/FortreeCity/scripts.pory"
	setflag FLAG_VISITED_FORTREE_CITY
	end


FortreeCity_OnResume::
# 12 "data/maps/FortreeCity/scripts.pory"
	setstepcallback STEP_CB_FORTREE_BRIDGE
	end


FortreeCity_EventScript_Man::
# 17 "data/maps/FortreeCity/scripts.pory"
	msgbox FortreeCity_Text_SawGiganticPokemonInSky, MSGBOX_NPC
	end


FortreeCity_EventScript_Woman::
# 22 "data/maps/FortreeCity/scripts.pory"
	lock
# 23 "data/maps/FortreeCity/scripts.pory"
	faceplayer
# 24 "data/maps/FortreeCity/scripts.pory"
	goto_if_set FLAG_KECLEON_FLED_FORTREE, FortreeCity_EventScript_Woman_2
FortreeCity_EventScript_Woman_1:
# 27 "data/maps/FortreeCity/scripts.pory"
	msgbox FortreeCity_Text_SomethingBlockingGym, MSGBOX_DEFAULT
# 28 "data/maps/FortreeCity/scripts.pory"
	release
	end

FortreeCity_EventScript_Woman_2:
# 25 "data/maps/FortreeCity/scripts.pory"
	goto FortreeCity_EventScript_WomanGymAccessible
	goto FortreeCity_EventScript_Woman_1


FortreeCity_EventScript_WomanGymAccessible::
# 33 "data/maps/FortreeCity/scripts.pory"
	msgbox FortreeCity_Text_ThisTimeIllBeatWinona, MSGBOX_DEFAULT
# 34 "data/maps/FortreeCity/scripts.pory"
	release
	end


FortreeCity_EventScript_Girl::
# 39 "data/maps/FortreeCity/scripts.pory"
	msgbox FortreeCity_Text_TreesGrowByDrinkingRainwater, MSGBOX_NPC
	end


FortreeCity_EventScript_OldMan::
# 44 "data/maps/FortreeCity/scripts.pory"
	msgbox FortreeCity_Text_EveryoneHealthyAndLively, MSGBOX_NPC
	end


FortreeCity_EventScript_Boy::
# 49 "data/maps/FortreeCity/scripts.pory"
	msgbox FortreeCity_Text_BugPokemonComeThroughWindow, MSGBOX_NPC
	end


FortreeCity_EventScript_GameboyKid::
# 54 "data/maps/FortreeCity/scripts.pory"
	msgbox FortreeCity_Text_PokemonThatEvolveWhenTraded, MSGBOX_NPC
	end


FortreeCity_EventScript_CitySign::
# 59 "data/maps/FortreeCity/scripts.pory"
	msgbox FortreeCity_Text_CitySign, MSGBOX_SIGN
	end


FortreeCity_EventScript_GymSign::
# 64 "data/maps/FortreeCity/scripts.pory"
	msgbox FortreeCity_Text_GymSign, MSGBOX_SIGN
	end


FortreeCity_EventScript_Kecleon::
# 69 "data/maps/FortreeCity/scripts.pory"
	lock
# 70 "data/maps/FortreeCity/scripts.pory"
	faceplayer
# 71 "data/maps/FortreeCity/scripts.pory"
	checkitem ITEM_DEVON_SCOPE
# 72 "data/maps/FortreeCity/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq FortreeCity_EventScript_Kecleon_2
FortreeCity_EventScript_Kecleon_1:
# 75 "data/maps/FortreeCity/scripts.pory"
	msgbox FortreeCity_Text_SomethingUnseeable, MSGBOX_DEFAULT
# 76 "data/maps/FortreeCity/scripts.pory"
	release
	end

FortreeCity_EventScript_Kecleon_2:
# 73 "data/maps/FortreeCity/scripts.pory"
	goto FortreeCity_EventScript_AskUseDevonScope
	goto FortreeCity_EventScript_Kecleon_1


FortreeCity_EventScript_AskUseDevonScope::
# 81 "data/maps/FortreeCity/scripts.pory"
	msgbox FortreeCity_Text_UnseeableUseDevonScope, MSGBOX_YESNO
# 82 "data/maps/FortreeCity/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq FortreeCity_EventScript_AskUseDevonScope_2
FortreeCity_EventScript_AskUseDevonScope_1:
# 85 "data/maps/FortreeCity/scripts.pory"
	release
	end

FortreeCity_EventScript_AskUseDevonScope_2:
# 83 "data/maps/FortreeCity/scripts.pory"
	goto FortreeCity_EventScript_UseDevonScope
	goto FortreeCity_EventScript_AskUseDevonScope_1


FortreeCity_EventScript_UseDevonScope::
# 90 "data/maps/FortreeCity/scripts.pory"
	msgbox FortreeCity_Text_UsedDevonScopePokemonFled, MSGBOX_DEFAULT
# 91 "data/maps/FortreeCity/scripts.pory"
	closemessage
# 92 "data/maps/FortreeCity/scripts.pory"
	applymovement VAR_LAST_TALKED, Movement_KecleonAppears
# 93 "data/maps/FortreeCity/scripts.pory"
	waitmovement 0
# 94 "data/maps/FortreeCity/scripts.pory"
	waitse
# 95 "data/maps/FortreeCity/scripts.pory"
	playmoncry SPECIES_KECLEON, CRY_MODE_ENCOUNTER
# 96 "data/maps/FortreeCity/scripts.pory"
	delay 40
# 97 "data/maps/FortreeCity/scripts.pory"
	waitmoncry
# 98 "data/maps/FortreeCity/scripts.pory"
	applymovement VAR_LAST_TALKED, FortreeCity_Movement_KecleonFlee
# 99 "data/maps/FortreeCity/scripts.pory"
	waitmovement 0
# 100 "data/maps/FortreeCity/scripts.pory"
	removeobject VAR_LAST_TALKED
# 101 "data/maps/FortreeCity/scripts.pory"
	setflag FLAG_KECLEON_FLED_FORTREE
# 102 "data/maps/FortreeCity/scripts.pory"
	release
	end


# 106 "data/maps/FortreeCity/scripts.pory"
FortreeCity_Movement_KecleonFlee:
# 107 "data/maps/FortreeCity/scripts.pory"
	walk_right
# 108 "data/maps/FortreeCity/scripts.pory"
	step_end

FortreeCity_Text_SawGiganticPokemonInSky::
# 111 "data/maps/FortreeCity/scripts.pory"
	.string "No one believes me, but I saw this\n"
	.string "gigantic POKéMON in the sky.\p"
	.string "It seemed to squirm as it flew toward\n"
	.string "ROUTE 131.\p"
	.string "By the way… Sniff…\n"
	.string "Um… You, uh…smell singed.\p"
	.string "Were you at a volcano or something?$"

FortreeCity_Text_SomethingBlockingGym::
# 121 "data/maps/FortreeCity/scripts.pory"
	.string "I want to go to the POKéMON GYM,\n"
	.string "but something's blocking the way.\p"
	.string "After all the bother I went through\n"
	.string "training on ROUTE 120…$"

FortreeCity_Text_ThisTimeIllBeatWinona::
# 128 "data/maps/FortreeCity/scripts.pory"
	.string "I've got my pride-and-joy POKéMON\n"
	.string "with me. This time, I'll beat WINONA.$"

FortreeCity_Text_TreesGrowByDrinkingRainwater::
# 133 "data/maps/FortreeCity/scripts.pory"
	.string "The ground absorbs rainwater, and\n"
	.string "trees grow by drinking that water…\p"
	.string "Our FORTREE CITY exists because\n"
	.string "there's both water and soil.$"

FortreeCity_Text_EveryoneHealthyAndLively::
# 140 "data/maps/FortreeCity/scripts.pory"
	.string "The CITY consists of homes built on\n"
	.string "trees.\p"
	.string "Perhaps because of that lifestyle,\n"
	.string "everyone is healthy and lively.\p"
	.string "Why, even myself--I feel as if I've\n"
	.string "grown thirty years younger.$"

FortreeCity_Text_BugPokemonComeThroughWindow::
# 149 "data/maps/FortreeCity/scripts.pory"
	.string "Living on top of trees is okay.\p"
	.string "But sometimes BUG POKéMON come in\n"
	.string "through windows.\l"
	.string "It can be really startling.$"

FortreeCity_Text_PokemonThatEvolveWhenTraded::
# 156 "data/maps/FortreeCity/scripts.pory"
	.string "There are POKéMON that evolve when\n"
	.string "you trade them! That's what I heard.$"

FortreeCity_Text_SomethingUnseeable::
# 161 "data/maps/FortreeCity/scripts.pory"
	.string "Something unseeable is in the way.$"

FortreeCity_Text_UnseeableUseDevonScope::
# 165 "data/maps/FortreeCity/scripts.pory"
	.string "Something unseeable is in the way.\p"
	.string "Want to use the DEVON SCOPE?$"

FortreeCity_Text_UsedDevonScopePokemonFled::
# 170 "data/maps/FortreeCity/scripts.pory"
	.string "{PLAYER} used the DEVON SCOPE.\p"
	.string "An invisible POKéMON became completely\n"
	.string "visible!\p"
	.string "The startled POKéMON fled!$"

FortreeCity_Text_CitySign::
# 177 "data/maps/FortreeCity/scripts.pory"
	.string "FORTREE CITY\n"
	.string "“The treetop city that frolics with\l"
	.string "nature.”$"

FortreeCity_Text_GymSign::
# 183 "data/maps/FortreeCity/scripts.pory"
	.string "FORTREE CITY POKéMON GYM\n"
	.string "LEADER: WINONA\p"
	.string "“The bird user taking flight into\n"
	.string "the world.”$"
