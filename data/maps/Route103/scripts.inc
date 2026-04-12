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
# 42 "data/maps/Route103/scripts.pory"
	random 3
# 43 "data/maps/Route103/scripts.pory"
	copyvar VAR_SNAKEWOOD_STARTER, VAR_RESULT
# 44 "data/maps/Route103/scripts.pory"
	switch VAR_SNAKEWOOD_STARTER
# 45 "data/maps/Route103/scripts.pory"
	case 0, Route103_EventScript_Rival_6
# 48 "data/maps/Route103/scripts.pory"
	case 1, Route103_EventScript_Rival_7
# 51 "data/maps/Route103/scripts.pory"
	case 2, Route103_EventScript_Rival_8
Route103_EventScript_Rival_4:
# 55 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route103_EventScript_Rival_10
# 60 "data/maps/Route103/scripts.pory"
	msgbox Route103_EventScript_Rival_Text_3
# 63 "data/maps/Route103/scripts.pory"
	closemessage
# 64 "data/maps/Route103/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 65 "data/maps/Route103/scripts.pory"
	msgbox Route103_EventScript_Rival_Text_4
# 66 "data/maps/Route103/scripts.pory"
	waitfanfare
# 67 "data/maps/Route103/scripts.pory"
	setflag FLAG_SYS_POKENAV_GET
# 68 "data/maps/Route103/scripts.pory"
	setflag FLAG_RECEIVED_POKENAV
# 69 "data/maps/Route103/scripts.pory"
	msgbox Route103_EventScript_Rival_Text_5
# 71 "data/maps/Route103/scripts.pory"
	closemessage
# 72 "data/maps/Route103/scripts.pory"
	setflag FLAG_RECEIVED_BIRCH_EGG
# 73 "data/maps/Route103/scripts.pory"
	msgbox Route103_EventScript_Rival_Text_6
# 74 "data/maps/Route103/scripts.pory"
	release
	end

Route103_EventScript_Rival_2:
# 31 "data/maps/Route103/scripts.pory"
	msgbox Route103_EventScript_Rival_Text_0
# 33 "data/maps/Route103/scripts.pory"
	release
	end

Route103_EventScript_Rival_6:
# 47 "data/maps/Route103/scripts.pory"
	giveegg SPECIES_WYNAUT
	goto Route103_EventScript_Rival_4

Route103_EventScript_Rival_7:
# 50 "data/maps/Route103/scripts.pory"
	giveegg SPECIES_WYNAUT
	goto Route103_EventScript_Rival_4

Route103_EventScript_Rival_8:
# 53 "data/maps/Route103/scripts.pory"
	giveegg SPECIES_WYNAUT
	goto Route103_EventScript_Rival_4

Route103_EventScript_Rival_10:
# 56 "data/maps/Route103/scripts.pory"
	msgbox Route103_EventScript_Rival_Text_2
# 57 "data/maps/Route103/scripts.pory"
	release
	end


Route103_EventScript_Daisy::
# 83 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_DAISY, Route103_EventScript_Daisy_Text_0, Route103_EventScript_Daisy_Text_1
# 84 "data/maps/Route103/scripts.pory"
	msgbox Route103_EventScript_Daisy_Text_2, MSGBOX_AUTOCLOSE
	end


Route103_EventScript_Amy::
# 89 "data/maps/Route103/scripts.pory"
	trainerbattle_double TRAINER_AMY_AND_LIV_1, Route103_EventScript_Amy_Text_0, Route103_EventScript_Amy_Text_1, Route103_EventScript_Amy_Text_2, Route102_EventScript_AmyRegisterMatchCallAfterBattle
# 90 "data/maps/Route103/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 91 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route103_EventScript_Amy_2
# 95 "data/maps/Route103/scripts.pory"
	msgbox Route103_EventScript_Amy_Text_3, MSGBOX_AUTOCLOSE
	end

Route103_EventScript_Amy_2:
# 92 "data/maps/Route103/scripts.pory"
	call Route102_EventScript_AmyRematch
	end


Route102_EventScript_AmyRegisterMatchCallAfterBattle::
# 100 "data/maps/Route103/scripts.pory"
	msgbox Route102_EventScript_AmyRegisterMatchCallAfterBattle_Text_0
# 101 "data/maps/Route103/scripts.pory"
	register_matchcall TRAINER_AMY_AND_LIV_1
# 102 "data/maps/Route103/scripts.pory"
	release
	end


Route102_EventScript_AmyRematch::
# 107 "data/maps/Route103/scripts.pory"
	trainerbattle_rematch_double TRAINER_AMY_AND_LIV_1, Route102_EventScript_AmyRematch_Text_0, Route102_EventScript_AmyRematch_Text_1, Route102_EventScript_AmyRematch_Text_2
# 108 "data/maps/Route103/scripts.pory"
	msgbox Route102_EventScript_AmyRematch_Text_3, MSGBOX_AUTOCLOSE
	end


Route103_EventScript_Liv::
# 113 "data/maps/Route103/scripts.pory"
	trainerbattle_double TRAINER_AMY_AND_LIV_1, Route103_EventScript_Liv_Text_0, Route103_EventScript_Liv_Text_1, Route103_EventScript_Liv_Text_2, Route102_EventScript_LivRegisterMatchCallAfterBattle
# 114 "data/maps/Route103/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 115 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route103_EventScript_Liv_2
# 119 "data/maps/Route103/scripts.pory"
	msgbox Route103_EventScript_Liv_Text_3, MSGBOX_AUTOCLOSE
	end

Route103_EventScript_Liv_2:
# 116 "data/maps/Route103/scripts.pory"
	call Route102_EventScript_LivRematch
	end


Route102_EventScript_LivRegisterMatchCallAfterBattle::
# 124 "data/maps/Route103/scripts.pory"
	msgbox Route102_EventScript_AmyRegisterMatchCallAfterBattle_Text_0
# 125 "data/maps/Route103/scripts.pory"
	register_matchcall TRAINER_AMY_AND_LIV_1
# 126 "data/maps/Route103/scripts.pory"
	release
	end


Route102_EventScript_LivRematch::
# 131 "data/maps/Route103/scripts.pory"
	trainerbattle_rematch_double TRAINER_AMY_AND_LIV_1, Route102_EventScript_LivRematch_Text_0, Route102_EventScript_LivRematch_Text_1, Route102_EventScript_LivRematch_Text_2
# 132 "data/maps/Route103/scripts.pory"
	msgbox Route102_EventScript_LivRematch_Text_3, MSGBOX_AUTOCLOSE
	end


Route103_EventScript_Andrew::
# 137 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_ANDREW, Route103_EventScript_Andrew_Text_0, Route103_EventScript_Andrew_Text_1
# 138 "data/maps/Route103/scripts.pory"
	msgbox Route103_EventScript_Andrew_Text_2, MSGBOX_AUTOCLOSE
	end


Route103_EventScript_Miguel::
# 143 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_MIGUEL_1, Route103_EventScript_Miguel_Text_0, Route103_EventScript_Miguel_Text_1, Route102_EventScript_MiguelRegisterMatchCallAfterBattle
# 144 "data/maps/Route103/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 145 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route103_EventScript_Miguel_2
# 149 "data/maps/Route103/scripts.pory"
	msgbox Route103_EventScript_Miguel_Text_2
# 150 "data/maps/Route103/scripts.pory"
	release
	end

Route103_EventScript_Miguel_2:
# 146 "data/maps/Route103/scripts.pory"
	call Route103_EventScript_MiguelRematch
	end


Route102_EventScript_MiguelRegisterMatchCallAfterBattle::
# 155 "data/maps/Route103/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 156 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 157 "data/maps/Route103/scripts.pory"
	msgbox Route102_EventScript_MiguelRegisterMatchCallAfterBattle_Text_0
# 158 "data/maps/Route103/scripts.pory"
	register_matchcall TRAINER_MIGUEL_1
# 159 "data/maps/Route103/scripts.pory"
	release
	end


Route103_EventScript_MiguelRematch::
# 164 "data/maps/Route103/scripts.pory"
	trainerbattle_rematch TRAINER_MIGUEL_1, Route103_EventScript_MiguelRematch_Text_0, Route103_EventScript_MiguelRematch_Text_1
# 165 "data/maps/Route103/scripts.pory"
	msgbox Route103_EventScript_MiguelRematch_Text_2, MSGBOX_AUTOCLOSE
	end


Route103_EventScript_Marcos::
# 170 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_MARCOS, Route103_EventScript_Marcos_Text_0, Route103_EventScript_Marcos_Text_1
# 171 "data/maps/Route103/scripts.pory"
	msgbox Route103_EventScript_Marcos_Text_2, MSGBOX_AUTOCLOSE
	end


Route103_EventScript_Rhett::
# 176 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_RHETT, Route103_EventScript_Rhett_Text_0, Route103_EventScript_Rhett_Text_1
# 177 "data/maps/Route103/scripts.pory"
	msgbox Route103_EventScript_Rhett_Text_2, MSGBOX_AUTOCLOSE
	end


Route103_EventScript_Pete::
# 182 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_PETE, Route103_EventScript_Pete_Text_0, Route103_EventScript_Pete_Text_1
# 183 "data/maps/Route103/scripts.pory"
	msgbox Route103_EventScript_Pete_Text_2, MSGBOX_AUTOCLOSE
	end


Route103_EventScript_Isabelle::
# 188 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_ISABELLE, Route103_EventScript_Isabelle_Text_0, Route103_EventScript_Isabelle_Text_1
# 189 "data/maps/Route103/scripts.pory"
	msgbox Route103_EventScript_Isabelle_Text_2, MSGBOX_AUTOCLOSE
	end


Route103_EventScript_Boy::
# 198 "data/maps/Route103/scripts.pory"
	msgbox Route103_EventScript_Boy_Text_0, MSGBOX_NPC
	end


Route103_EventScript_Man::
# 203 "data/maps/Route103/scripts.pory"
	msgbox Route103_EventScript_Man_Text_0, MSGBOX_NPC
	end


Route103_EventScript_RouteSign::
# 208 "data/maps/Route103/scripts.pory"
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
# 56 "data/maps/Route103/scripts.pory"
	.string "Placeholder: Your bag is full - come back when you have space!$"

Route103_EventScript_Rival_Text_3:
# 60 "data/maps/Route103/scripts.pory"
	.string "Placeholder: Birch explains the egg.\p"
	.string "This egg was found near here.\p"
	.string "Something is alive inside it - take good care of it.$"

Route103_EventScript_Rival_Text_4:
# 65 "data/maps/Route103/scripts.pory"
	.string "Placeholder: You received the PokéNav!$"

Route103_EventScript_Rival_Text_5:
# 69 "data/maps/Route103/scripts.pory"
	.string "Placeholder: Birch explains the PokéNav and registers his number.\p"
	.string "You can reach me any time on that.$"

Route103_EventScript_Rival_Text_6:
# 73 "data/maps/Route103/scripts.pory"
	.string "Placeholder: Good luck out there. Head back through Oldale when you're ready.$"

Route103_EventScript_Daisy_Text_0:
# 83 "data/maps/Route103/scripts.pory"
	.string "Placeholder: Daisy intro.$"

Route103_EventScript_Daisy_Text_1:
# 83 "data/maps/Route103/scripts.pory"
	.string "Placeholder: Daisy defeated.$"

Route103_EventScript_Daisy_Text_2:
# 84 "data/maps/Route103/scripts.pory"
	.string "Placeholder: Daisy post-battle.$"

Route103_EventScript_Amy_Text_0:
# 89 "data/maps/Route103/scripts.pory"
	.string "Placeholder: Amy intro.$"

Route103_EventScript_Amy_Text_1:
# 89 "data/maps/Route103/scripts.pory"
	.string "Placeholder: Amy defeated.$"

Route103_EventScript_Amy_Text_2:
# 89 "data/maps/Route103/scripts.pory"
	.string "Placeholder: Amy not enough Pokémon.$"

Route103_EventScript_Amy_Text_3:
# 95 "data/maps/Route103/scripts.pory"
	.string "Placeholder: Amy post-battle.$"

Route102_EventScript_AmyRegisterMatchCallAfterBattle_Text_0:
# 100 "data/maps/Route103/scripts.pory"
	.string "Placeholder: Amy & Liv register.$"

Route102_EventScript_AmyRematch_Text_0:
# 107 "data/maps/Route103/scripts.pory"
	.string "Placeholder: Amy rematch intro.$"

Route102_EventScript_AmyRematch_Text_1:
# 107 "data/maps/Route103/scripts.pory"
	.string "Placeholder: Amy rematch defeated.$"

Route102_EventScript_AmyRematch_Text_2:
# 107 "data/maps/Route103/scripts.pory"
	.string "Placeholder: Amy rematch not enough Pokémon.$"

Route102_EventScript_AmyRematch_Text_3:
# 108 "data/maps/Route103/scripts.pory"
	.string "Placeholder: Amy rematch post-battle.$"

Route103_EventScript_Liv_Text_0:
# 113 "data/maps/Route103/scripts.pory"
	.string "Placeholder: Liv intro.$"

Route103_EventScript_Liv_Text_1:
# 113 "data/maps/Route103/scripts.pory"
	.string "Placeholder: Liv defeated.$"

Route103_EventScript_Liv_Text_2:
# 113 "data/maps/Route103/scripts.pory"
	.string "Placeholder: Liv not enough Pokémon.$"

Route103_EventScript_Liv_Text_3:
# 119 "data/maps/Route103/scripts.pory"
	.string "Placeholder: Liv post-battle.$"

Route102_EventScript_LivRematch_Text_0:
# 131 "data/maps/Route103/scripts.pory"
	.string "Placeholder: Liv rematch intro.$"

Route102_EventScript_LivRematch_Text_1:
# 131 "data/maps/Route103/scripts.pory"
	.string "Placeholder: Liv rematch defeated.$"

Route102_EventScript_LivRematch_Text_2:
# 131 "data/maps/Route103/scripts.pory"
	.string "Placeholder: Liv rematch not enough Pokémon.$"

Route102_EventScript_LivRematch_Text_3:
# 132 "data/maps/Route103/scripts.pory"
	.string "Placeholder: Liv rematch post-battle.$"

Route103_EventScript_Andrew_Text_0:
# 137 "data/maps/Route103/scripts.pory"
	.string "Placeholder: Andrew intro.$"

Route103_EventScript_Andrew_Text_1:
# 137 "data/maps/Route103/scripts.pory"
	.string "Placeholder: Andrew defeated.$"

Route103_EventScript_Andrew_Text_2:
# 138 "data/maps/Route103/scripts.pory"
	.string "Placeholder: Andrew post-battle.$"

Route103_EventScript_Miguel_Text_0:
# 143 "data/maps/Route103/scripts.pory"
	.string "Placeholder: Miguel intro.$"

Route103_EventScript_Miguel_Text_1:
# 143 "data/maps/Route103/scripts.pory"
	.string "Placeholder: Miguel defeated.$"

Route103_EventScript_Miguel_Text_2:
# 149 "data/maps/Route103/scripts.pory"
	.string "Placeholder: Miguel post-battle.$"

Route102_EventScript_MiguelRegisterMatchCallAfterBattle_Text_0:
# 157 "data/maps/Route103/scripts.pory"
	.string "Placeholder: Miguel register.$"

Route103_EventScript_MiguelRematch_Text_0:
# 164 "data/maps/Route103/scripts.pory"
	.string "Placeholder: Miguel rematch intro.$"

Route103_EventScript_MiguelRematch_Text_1:
# 164 "data/maps/Route103/scripts.pory"
	.string "Placeholder: Miguel rematch defeated.$"

Route103_EventScript_MiguelRematch_Text_2:
# 165 "data/maps/Route103/scripts.pory"
	.string "Placeholder: Miguel rematch post-battle.$"

Route103_EventScript_Marcos_Text_0:
# 170 "data/maps/Route103/scripts.pory"
	.string "Placeholder: Marcos intro.$"

Route103_EventScript_Marcos_Text_1:
# 170 "data/maps/Route103/scripts.pory"
	.string "Placeholder: Marcos defeated.$"

Route103_EventScript_Marcos_Text_2:
# 171 "data/maps/Route103/scripts.pory"
	.string "Placeholder: Marcos post-battle.$"

Route103_EventScript_Rhett_Text_0:
# 176 "data/maps/Route103/scripts.pory"
	.string "Placeholder: Rhett intro.$"

Route103_EventScript_Rhett_Text_1:
# 176 "data/maps/Route103/scripts.pory"
	.string "Placeholder: Rhett defeated.$"

Route103_EventScript_Rhett_Text_2:
# 177 "data/maps/Route103/scripts.pory"
	.string "Placeholder: Rhett post-battle.$"

Route103_EventScript_Pete_Text_0:
# 182 "data/maps/Route103/scripts.pory"
	.string "Placeholder: Pete intro.$"

Route103_EventScript_Pete_Text_1:
# 182 "data/maps/Route103/scripts.pory"
	.string "Placeholder: Pete defeated.$"

Route103_EventScript_Pete_Text_2:
# 183 "data/maps/Route103/scripts.pory"
	.string "Placeholder: Pete post-battle.$"

Route103_EventScript_Isabelle_Text_0:
# 188 "data/maps/Route103/scripts.pory"
	.string "Placeholder: Isabelle intro.$"

Route103_EventScript_Isabelle_Text_1:
# 188 "data/maps/Route103/scripts.pory"
	.string "Placeholder: Isabelle defeated.$"

Route103_EventScript_Isabelle_Text_2:
# 189 "data/maps/Route103/scripts.pory"
	.string "Placeholder: Isabelle post-battle.$"

Route103_EventScript_Boy_Text_0:
# 198 "data/maps/Route103/scripts.pory"
	.string "Placeholder: Boy dialogue.$"

Route103_EventScript_Man_Text_0:
# 203 "data/maps/Route103/scripts.pory"
	.string "Placeholder: Shortcut to Oldale across the sea.$"

Route103_EventScript_RouteSign_Text_0:
# 208 "data/maps/Route103/scripts.pory"
	.string "ROUTE 103\n"
	.string "{DOWN_ARROW} OLDALE TOWN$"
