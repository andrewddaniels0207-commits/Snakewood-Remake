PokemonTower_4F_Frlg_MapScripts::
	.byte 0


PokemonTower_4F_EventScript_Paula::
# 4 "data/maps/PokemonTower_4F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_CHANNELER_PAULA, PokemonTower_4F_Text_PaulaIntro, PokemonTower_4F_Text_PaulaDefeat
# 5 "data/maps/PokemonTower_4F_Frlg/scripts.pory"
	msgbox PokemonTower_4F_Text_PaulaPostBattle, MSGBOX_AUTOCLOSE
	end


PokemonTower_4F_EventScript_Laurel::
# 10 "data/maps/PokemonTower_4F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_CHANNELER_LAUREL, PokemonTower_4F_Text_LaurelIntro, PokemonTower_4F_Text_LaurelDefeat
# 11 "data/maps/PokemonTower_4F_Frlg/scripts.pory"
	msgbox PokemonTower_4F_Text_LaurelPostBattle, MSGBOX_AUTOCLOSE
	end


PokemonTower_4F_EventScript_Jody::
# 16 "data/maps/PokemonTower_4F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_CHANNELER_JODY, PokemonTower_4F_Text_JodyIntro, PokemonTower_4F_Text_JodyDefeat
# 17 "data/maps/PokemonTower_4F_Frlg/scripts.pory"
	msgbox PokemonTower_4F_Text_JodyPostBattle, MSGBOX_AUTOCLOSE
	end


PokemonTower_4F_Text_PaulaIntro::
# 21 "data/maps/PokemonTower_4F_Frlg/scripts.pory"
	.string "Ghost! No!\n"
	.string "Kwaaah!$"

PokemonTower_4F_Text_PaulaDefeat::
# 26 "data/maps/PokemonTower_4F_Frlg/scripts.pory"
	.string "Where is the ghost?$"

PokemonTower_4F_Text_PaulaPostBattle::
# 30 "data/maps/PokemonTower_4F_Frlg/scripts.pory"
	.string "I must have been dreaming…$"

PokemonTower_4F_Text_LaurelIntro::
# 34 "data/maps/PokemonTower_4F_Frlg/scripts.pory"
	.string "Be cursed with me!\n"
	.string "Kwaaah!$"

PokemonTower_4F_Text_LaurelDefeat::
# 39 "data/maps/PokemonTower_4F_Frlg/scripts.pory"
	.string "What!$"

PokemonTower_4F_Text_LaurelPostBattle::
# 43 "data/maps/PokemonTower_4F_Frlg/scripts.pory"
	.string "We can't determine the identity of\n"
	.string "the ghosts…$"

PokemonTower_4F_Text_JodyIntro::
# 48 "data/maps/PokemonTower_4F_Frlg/scripts.pory"
	.string "Huhuhu…\n"
	.string "Beat me not!$"

PokemonTower_4F_Text_JodyDefeat::
# 53 "data/maps/PokemonTower_4F_Frlg/scripts.pory"
	.string "Huh?\n"
	.string "Who? What?$"

PokemonTower_4F_Text_JodyPostBattle::
# 58 "data/maps/PokemonTower_4F_Frlg/scripts.pory"
	.string "May the departed POKéMON rest in\n"
	.string "peace…$"
