PokemonTower_3F_Frlg_MapScripts::
	.byte 0


PokemonTower_3F_EventScript_Patricia::
# 4 "data/maps/PokemonTower_3F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_CHANNELER_PATRICIA, PokemonTower_3F_Text_PatriciaIntro, PokemonTower_3F_Text_PatriciaDefeat
# 5 "data/maps/PokemonTower_3F_Frlg/scripts.pory"
	msgbox PokemonTower_3F_Text_PatriciaPostBattle, MSGBOX_AUTOCLOSE
	end


PokemonTower_3F_EventScript_Carly::
# 10 "data/maps/PokemonTower_3F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_CHANNELER_CARLY, PokemonTower_3F_Text_CarlyIntro, PokemonTower_3F_Text_CarlyDefeat
# 11 "data/maps/PokemonTower_3F_Frlg/scripts.pory"
	msgbox PokemonTower_3F_Text_CarlyPostBattle, MSGBOX_AUTOCLOSE
	end


PokemonTower_3F_EventScript_Hope::
# 16 "data/maps/PokemonTower_3F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_CHANNELER_HOPE, PokemonTower_3F_Text_HopeIntro, PokemonTower_3F_Text_HopeDefeat
# 17 "data/maps/PokemonTower_3F_Frlg/scripts.pory"
	msgbox PokemonTower_3F_Text_HopePostBattle, MSGBOX_AUTOCLOSE
	end


PokemonTower_3F_Text_HopeIntro::
# 21 "data/maps/PokemonTower_3F_Frlg/scripts.pory"
	.string "Urrg… Awaa…\n"
	.string "Huhu… Graa…$"

PokemonTower_3F_Text_HopeDefeat::
# 26 "data/maps/PokemonTower_3F_Frlg/scripts.pory"
	.string "Hwa!\n"
	.string "I'm saved!$"

PokemonTower_3F_Text_HopePostBattle::
# 31 "data/maps/PokemonTower_3F_Frlg/scripts.pory"
	.string "The ghosts can be identified by\n"
	.string "the SILPH SCOPE.$"

PokemonTower_3F_Text_CarlyIntro::
# 36 "data/maps/PokemonTower_3F_Frlg/scripts.pory"
	.string "Kekeke…\n"
	.string "Kwaaah!$"

PokemonTower_3F_Text_CarlyDefeat::
# 41 "data/maps/PokemonTower_3F_Frlg/scripts.pory"
	.string "Hmm?\n"
	.string "What am I doing?$"

PokemonTower_3F_Text_CarlyPostBattle::
# 46 "data/maps/PokemonTower_3F_Frlg/scripts.pory"
	.string "Sorry!\n"
	.string "I was possessed!$"

PokemonTower_3F_Text_PatriciaIntro::
# 51 "data/maps/PokemonTower_3F_Frlg/scripts.pory"
	.string "Be gone!\n"
	.string "Malevolent spirit!$"

PokemonTower_3F_Text_PatriciaDefeat::
# 56 "data/maps/PokemonTower_3F_Frlg/scripts.pory"
	.string "Whew!\n"
	.string "The spirit left!$"

PokemonTower_3F_Text_PatriciaPostBattle::
# 61 "data/maps/PokemonTower_3F_Frlg/scripts.pory"
	.string "The others above…\n"
	.string "They must have been possessed.$"
