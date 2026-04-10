Route103_MapScripts::
# 2 "data/maps/Route103/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route103_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 6 "data/maps/Route103/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route103_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

Route103_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/Route103/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 4 "data/maps/Route103/scripts.pory"
	call ProfBirch_EventScript_UpdateLocation
	return

Route103_MapScripts_MAP_SCRIPT_ON_LOAD:
# 7 "data/maps/Route103/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, Route103_MapScripts_MAP_SCRIPT_ON_LOAD_1
	return

Route103_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 8 "data/maps/Route103/scripts.pory"
	call Route103_EventScript_OpenAlteringCave
	return


Route103_EventScript_OpenAlteringCave::
# 14 "data/maps/Route103/scripts.pory"
	setmetatile 45, 5, METATILE_General_CaveEntrance_Top, TRUE
# 15 "data/maps/Route103/scripts.pory"
	setmetatile 45, 6, METATILE_General_CaveEntrance_Bottom, FALSE
	return


Route103_EventScript_Rival::
# 28 "data/maps/Route103/scripts.pory"
	lock
# 29 "data/maps/Route103/scripts.pory"
	faceplayer
# 30 "data/maps/Route103/scripts.pory"
	goto_if_set FLAG_RECEIVED_BIRCH_EGG, Route103_EventScript_Rival_2
# 36 "data/maps/Route103/scripts.pory"
	msgbox Route103_EventScript_Rival_Text_1
# 39 "data/maps/Route103/scripts.pory"
	closemessage
# 40 "data/maps/Route103/scripts.pory"
	random 3
# 41 "data/maps/Route103/scripts.pory"
	switch VAR_RESULT
# 42 "data/maps/Route103/scripts.pory"
	case 0, Route103_EventScript_Rival_6
# 45 "data/maps/Route103/scripts.pory"
	case 1, Route103_EventScript_Rival_7
# 48 "data/maps/Route103/scripts.pory"
	case 2, Route103_EventScript_Rival_8
Route103_EventScript_Rival_4:
# 52 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route103_EventScript_Rival_10
# 57 "data/maps/Route103/scripts.pory"
	msgbox Route103_EventScript_Rival_Text_3
# 60 "data/maps/Route103/scripts.pory"
	closemessage
# 61 "data/maps/Route103/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 62 "data/maps/Route103/scripts.pory"
	msgbox Route103_EventScript_Rival_Text_4
# 63 "data/maps/Route103/scripts.pory"
	waitfanfare
# 64 "data/maps/Route103/scripts.pory"
	setflag FLAG_SYS_POKENAV_GET
# 65 "data/maps/Route103/scripts.pory"
	setflag FLAG_RECEIVED_POKENAV
# 66 "data/maps/Route103/scripts.pory"
	msgbox Route103_EventScript_Rival_Text_5
# 68 "data/maps/Route103/scripts.pory"
	closemessage
# 69 "data/maps/Route103/scripts.pory"
	setflag FLAG_RECEIVED_BIRCH_EGG
# 70 "data/maps/Route103/scripts.pory"
	msgbox Route103_EventScript_Rival_Text_6
# 71 "data/maps/Route103/scripts.pory"
	release
	end

Route103_EventScript_Rival_2:
# 31 "data/maps/Route103/scripts.pory"
	msgbox Route103_EventScript_Rival_Text_0
# 33 "data/maps/Route103/scripts.pory"
	release
	end

Route103_EventScript_Rival_6:
# 44 "data/maps/Route103/scripts.pory"
	giveegg SPECIES_WYNAUT
	goto Route103_EventScript_Rival_4

Route103_EventScript_Rival_7:
# 47 "data/maps/Route103/scripts.pory"
	giveegg SPECIES_WYNAUT
	goto Route103_EventScript_Rival_4

Route103_EventScript_Rival_8:
# 50 "data/maps/Route103/scripts.pory"
	giveegg SPECIES_WYNAUT
	goto Route103_EventScript_Rival_4

Route103_EventScript_Rival_10:
# 53 "data/maps/Route103/scripts.pory"
	msgbox Route103_EventScript_Rival_Text_2
# 54 "data/maps/Route103/scripts.pory"
	release
	end


Route103_EventScript_Daisy::
# 80 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_DAISY, Route103_EventScript_Daisy_Text_0, Route103_EventScript_Daisy_Text_1
# 81 "data/maps/Route103/scripts.pory"
	msgbox Route103_EventScript_Daisy_Text_2, MSGBOX_AUTOCLOSE
	end


Route103_EventScript_Amy::
# 86 "data/maps/Route103/scripts.pory"
	trainerbattle_double TRAINER_AMY_AND_LIV_1, Route103_EventScript_Amy_Text_0, Route103_EventScript_Amy_Text_1, Route103_EventScript_Amy_Text_2, Route102_EventScript_AmyRegisterMatchCallAfterBattle
# 91 "data/maps/Route103/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 92 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route103_EventScript_Amy_2
# 96 "data/maps/Route103/scripts.pory"
	msgbox Route103_EventScript_Amy_Text_3, MSGBOX_AUTOCLOSE
	end

Route103_EventScript_Amy_2:
# 93 "data/maps/Route103/scripts.pory"
	call Route102_EventScript_AmyRematch
	end


Route102_EventScript_AmyRegisterMatchCallAfterBattle::
# 101 "data/maps/Route103/scripts.pory"
	msgbox Route102_EventScript_AmyRegisterMatchCallAfterBattle_Text_0
# 102 "data/maps/Route103/scripts.pory"
	register_matchcall TRAINER_AMY_AND_LIV_1
# 103 "data/maps/Route103/scripts.pory"
	release
	end


Route102_EventScript_AmyRematch::
# 108 "data/maps/Route103/scripts.pory"
	trainerbattle_rematch_double TRAINER_AMY_AND_LIV_1, Route102_EventScript_AmyRematch_Text_0, Route102_EventScript_AmyRematch_Text_1, Route102_EventScript_AmyRematch_Text_2
# 112 "data/maps/Route103/scripts.pory"
	msgbox Route102_EventScript_AmyRematch_Text_3, MSGBOX_AUTOCLOSE
	end


Route103_EventScript_Liv::
# 117 "data/maps/Route103/scripts.pory"
	trainerbattle_double TRAINER_AMY_AND_LIV_1, Route103_EventScript_Liv_Text_0, Route103_EventScript_Liv_Text_1, Route103_EventScript_Liv_Text_2, Route102_EventScript_LivRegisterMatchCallAfterBattle
# 122 "data/maps/Route103/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 123 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route103_EventScript_Liv_2
# 127 "data/maps/Route103/scripts.pory"
	msgbox Route103_EventScript_Liv_Text_3, MSGBOX_AUTOCLOSE
	end

Route103_EventScript_Liv_2:
# 124 "data/maps/Route103/scripts.pory"
	call Route102_EventScript_LivRematch
	end


Route102_EventScript_LivRegisterMatchCallAfterBattle::
# 132 "data/maps/Route103/scripts.pory"
	msgbox Route102_EventScript_AmyRegisterMatchCallAfterBattle_Text_0
# 133 "data/maps/Route103/scripts.pory"
	register_matchcall TRAINER_AMY_AND_LIV_1
# 134 "data/maps/Route103/scripts.pory"
	release
	end


Route102_EventScript_LivRematch::
# 139 "data/maps/Route103/scripts.pory"
	trainerbattle_rematch_double TRAINER_AMY_AND_LIV_1, Route102_EventScript_LivRematch_Text_0, Route102_EventScript_LivRematch_Text_1, Route102_EventScript_LivRematch_Text_2
# 143 "data/maps/Route103/scripts.pory"
	msgbox Route102_EventScript_LivRematch_Text_3, MSGBOX_AUTOCLOSE
	end


Route103_EventScript_Andrew::
# 148 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_ANDREW, Route103_EventScript_Andrew_Text_0, Route103_EventScript_Andrew_Text_1
# 151 "data/maps/Route103/scripts.pory"
	msgbox Route103_EventScript_Andrew_Text_2, MSGBOX_AUTOCLOSE
	end


Route103_EventScript_Miguel::
# 156 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_MIGUEL_1, Route103_EventScript_Miguel_Text_0, Route103_EventScript_Miguel_Text_1, Route102_EventScript_MiguelRegisterMatchCallAfterBattle
# 160 "data/maps/Route103/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 161 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route103_EventScript_Miguel_2
# 165 "data/maps/Route103/scripts.pory"
	msgbox Route103_EventScript_Miguel_Text_2
# 166 "data/maps/Route103/scripts.pory"
	release
	end

Route103_EventScript_Miguel_2:
# 162 "data/maps/Route103/scripts.pory"
	call Route103_EventScript_MiguelRematch
	end


Route102_EventScript_MiguelRegisterMatchCallAfterBattle::
# 171 "data/maps/Route103/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 172 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 173 "data/maps/Route103/scripts.pory"
	msgbox Route102_EventScript_MiguelRegisterMatchCallAfterBattle_Text_0
# 174 "data/maps/Route103/scripts.pory"
	register_matchcall TRAINER_MIGUEL_1
# 175 "data/maps/Route103/scripts.pory"
	release
	end


Route103_EventScript_MiguelRematch::
# 180 "data/maps/Route103/scripts.pory"
	trainerbattle_rematch TRAINER_MIGUEL_1, Route103_EventScript_MiguelRematch_Text_0, Route103_EventScript_MiguelRematch_Text_1
# 183 "data/maps/Route103/scripts.pory"
	msgbox Route103_EventScript_MiguelRematch_Text_2, MSGBOX_AUTOCLOSE
	end


Route103_EventScript_Marcos::
# 188 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_MARCOS, Route103_EventScript_Marcos_Text_0, Route103_EventScript_Marcos_Text_1
# 191 "data/maps/Route103/scripts.pory"
	msgbox Route103_EventScript_Marcos_Text_2, MSGBOX_AUTOCLOSE
	end


Route103_EventScript_Rhett::
# 196 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_RHETT, Route103_EventScript_Rhett_Text_0, Route103_EventScript_Rhett_Text_1
# 199 "data/maps/Route103/scripts.pory"
	msgbox Route103_EventScript_Rhett_Text_2, MSGBOX_AUTOCLOSE
	end


Route103_EventScript_Pete::
# 204 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_PETE, Route103_EventScript_Pete_Text_0, Route103_EventScript_Pete_Text_1
# 207 "data/maps/Route103/scripts.pory"
	msgbox Route103_EventScript_Pete_Text_2, MSGBOX_AUTOCLOSE
	end


Route103_EventScript_Isabelle::
# 212 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_ISABELLE, Route103_EventScript_Isabelle_Text_0, Route103_EventScript_Isabelle_Text_1
# 215 "data/maps/Route103/scripts.pory"
	msgbox Route103_EventScript_Isabelle_Text_2, MSGBOX_AUTOCLOSE
	end


Route103_EventScript_Boy::
# 224 "data/maps/Route103/scripts.pory"
	msgbox Route103_EventScript_Boy_Text_0, MSGBOX_NPC
	end


Route103_EventScript_Man::
# 229 "data/maps/Route103/scripts.pory"
	msgbox Route103_EventScript_Man_Text_0, MSGBOX_NPC
	end


Route103_EventScript_RouteSign::
# 234 "data/maps/Route103/scripts.pory"
	msgbox Route103_EventScript_RouteSign_Text_0, MSGBOX_SIGN
	end


Route103_EventScript_Rival_Text_0:
# 31 "data/maps/Route103/scripts.pory"
	.string "Placeholder: I've already given you an egg.\p"
	.string "Take good care of it!$"

Route103_EventScript_Rival_Text_1:
# 36 "data/maps/Route103/scripts.pory"
	.string "Placeholder: Birch greets the player.\p"
	.string "I've been looking for you!\p"
	.string "I have something important to give you.$"

Route103_EventScript_Rival_Text_2:
# 53 "data/maps/Route103/scripts.pory"
	.string "Placeholder: Your bag is full - come back when you have space!$"

Route103_EventScript_Rival_Text_3:
# 57 "data/maps/Route103/scripts.pory"
	.string "Placeholder: Birch explains the egg.\p"
	.string "This egg was found near here.\p"
	.string "Something is alive inside it - take good care of it.$"

Route103_EventScript_Rival_Text_4:
# 62 "data/maps/Route103/scripts.pory"
	.string "Placeholder: You received the PokéNav!$"

Route103_EventScript_Rival_Text_5:
# 66 "data/maps/Route103/scripts.pory"
	.string "Placeholder: Birch explains the PokéNav and registers his number.\p"
	.string "You can reach me any time on that.$"

Route103_EventScript_Rival_Text_6:
# 70 "data/maps/Route103/scripts.pory"
	.string "Placeholder: Good luck out there. Head back through Oldale when you're ready.$"

Route103_EventScript_Daisy_Text_0:
# 80 "data/maps/Route103/scripts.pory"
	.string "Placeholder: Daisy intro.$"

Route103_EventScript_Daisy_Text_1:
# 80 "data/maps/Route103/scripts.pory"
	.string "Placeholder: Daisy defeated.$"

Route103_EventScript_Daisy_Text_2:
# 81 "data/maps/Route103/scripts.pory"
	.string "Placeholder: Daisy post-battle.$"

Route103_EventScript_Amy_Text_0:
# 87 "data/maps/Route103/scripts.pory"
	.string "Placeholder: Amy intro.$"

Route103_EventScript_Amy_Text_1:
# 88 "data/maps/Route103/scripts.pory"
	.string "Placeholder: Amy defeated.$"

Route103_EventScript_Amy_Text_2:
# 89 "data/maps/Route103/scripts.pory"
	.string "Placeholder: Amy not enough Pokémon.$"

Route103_EventScript_Amy_Text_3:
# 96 "data/maps/Route103/scripts.pory"
	.string "Placeholder: Amy post-battle.$"

Route102_EventScript_AmyRegisterMatchCallAfterBattle_Text_0:
# 101 "data/maps/Route103/scripts.pory"
	.string "Placeholder: Amy & Liv register.$"

Route102_EventScript_AmyRematch_Text_0:
# 109 "data/maps/Route103/scripts.pory"
	.string "Placeholder: Amy rematch intro.$"

Route102_EventScript_AmyRematch_Text_1:
# 110 "data/maps/Route103/scripts.pory"
	.string "Placeholder: Amy rematch defeated.$"

Route102_EventScript_AmyRematch_Text_2:
# 111 "data/maps/Route103/scripts.pory"
	.string "Placeholder: Amy rematch not enough Pokémon.$"

Route102_EventScript_AmyRematch_Text_3:
# 112 "data/maps/Route103/scripts.pory"
	.string "Placeholder: Amy rematch post-battle.$"

Route103_EventScript_Liv_Text_0:
# 118 "data/maps/Route103/scripts.pory"
	.string "Placeholder: Liv intro.$"

Route103_EventScript_Liv_Text_1:
# 119 "data/maps/Route103/scripts.pory"
	.string "Placeholder: Liv defeated.$"

Route103_EventScript_Liv_Text_2:
# 120 "data/maps/Route103/scripts.pory"
	.string "Placeholder: Liv not enough Pokémon.$"

Route103_EventScript_Liv_Text_3:
# 127 "data/maps/Route103/scripts.pory"
	.string "Placeholder: Liv post-battle.$"

Route102_EventScript_LivRematch_Text_0:
# 140 "data/maps/Route103/scripts.pory"
	.string "Placeholder: Liv rematch intro.$"

Route102_EventScript_LivRematch_Text_1:
# 141 "data/maps/Route103/scripts.pory"
	.string "Placeholder: Liv rematch defeated.$"

Route102_EventScript_LivRematch_Text_2:
# 142 "data/maps/Route103/scripts.pory"
	.string "Placeholder: Liv rematch not enough Pokémon.$"

Route102_EventScript_LivRematch_Text_3:
# 143 "data/maps/Route103/scripts.pory"
	.string "Placeholder: Liv rematch post-battle.$"

Route103_EventScript_Andrew_Text_0:
# 149 "data/maps/Route103/scripts.pory"
	.string "Placeholder: Andrew intro.$"

Route103_EventScript_Andrew_Text_1:
# 150 "data/maps/Route103/scripts.pory"
	.string "Placeholder: Andrew defeated.$"

Route103_EventScript_Andrew_Text_2:
# 151 "data/maps/Route103/scripts.pory"
	.string "Placeholder: Andrew post-battle.$"

Route103_EventScript_Miguel_Text_0:
# 157 "data/maps/Route103/scripts.pory"
	.string "Placeholder: Miguel intro.$"

Route103_EventScript_Miguel_Text_1:
# 158 "data/maps/Route103/scripts.pory"
	.string "Placeholder: Miguel defeated.$"

Route103_EventScript_Miguel_Text_2:
# 165 "data/maps/Route103/scripts.pory"
	.string "Placeholder: Miguel post-battle.$"

Route102_EventScript_MiguelRegisterMatchCallAfterBattle_Text_0:
# 173 "data/maps/Route103/scripts.pory"
	.string "Placeholder: Miguel register.$"

Route103_EventScript_MiguelRematch_Text_0:
# 181 "data/maps/Route103/scripts.pory"
	.string "Placeholder: Miguel rematch intro.$"

Route103_EventScript_MiguelRematch_Text_1:
# 182 "data/maps/Route103/scripts.pory"
	.string "Placeholder: Miguel rematch defeated.$"

Route103_EventScript_MiguelRematch_Text_2:
# 183 "data/maps/Route103/scripts.pory"
	.string "Placeholder: Miguel rematch post-battle.$"

Route103_EventScript_Marcos_Text_0:
# 189 "data/maps/Route103/scripts.pory"
	.string "Placeholder: Marcos intro.$"

Route103_EventScript_Marcos_Text_1:
# 190 "data/maps/Route103/scripts.pory"
	.string "Placeholder: Marcos defeated.$"

Route103_EventScript_Marcos_Text_2:
# 191 "data/maps/Route103/scripts.pory"
	.string "Placeholder: Marcos post-battle.$"

Route103_EventScript_Rhett_Text_0:
# 197 "data/maps/Route103/scripts.pory"
	.string "Placeholder: Rhett intro.$"

Route103_EventScript_Rhett_Text_1:
# 198 "data/maps/Route103/scripts.pory"
	.string "Placeholder: Rhett defeated.$"

Route103_EventScript_Rhett_Text_2:
# 199 "data/maps/Route103/scripts.pory"
	.string "Placeholder: Rhett post-battle.$"

Route103_EventScript_Pete_Text_0:
# 205 "data/maps/Route103/scripts.pory"
	.string "Placeholder: Pete intro.$"

Route103_EventScript_Pete_Text_1:
# 206 "data/maps/Route103/scripts.pory"
	.string "Placeholder: Pete defeated.$"

Route103_EventScript_Pete_Text_2:
# 207 "data/maps/Route103/scripts.pory"
	.string "Placeholder: Pete post-battle.$"

Route103_EventScript_Isabelle_Text_0:
# 213 "data/maps/Route103/scripts.pory"
	.string "Placeholder: Isabelle intro.$"

Route103_EventScript_Isabelle_Text_1:
# 214 "data/maps/Route103/scripts.pory"
	.string "Placeholder: Isabelle defeated.$"

Route103_EventScript_Isabelle_Text_2:
# 215 "data/maps/Route103/scripts.pory"
	.string "Placeholder: Isabelle post-battle.$"

Route103_EventScript_Boy_Text_0:
# 224 "data/maps/Route103/scripts.pory"
	.string "Placeholder: Boy dialogue.$"

Route103_EventScript_Man_Text_0:
# 229 "data/maps/Route103/scripts.pory"
	.string "Placeholder: Shortcut to Oldale across the sea.$"

Route103_EventScript_RouteSign_Text_0:
# 234 "data/maps/Route103/scripts.pory"
	.string "ROUTE 103\n"
	.string "{DOWN_ARROW} OLDALE TOWN$"
