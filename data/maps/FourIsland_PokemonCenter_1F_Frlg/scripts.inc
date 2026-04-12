FourIsland_PokemonCenter_1F_Frlg_MapScripts::
# 2 "data/maps/FourIsland_PokemonCenter_1F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, FourIsland_PokemonCenter_1F_OnTransition
# 3 "data/maps/FourIsland_PokemonCenter_1F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0


FourIsland_PokemonCenter_1F_OnTransition::
# 7 "data/maps/FourIsland_PokemonCenter_1F_Frlg/scripts.pory"
	setrespawn HEAL_LOCATION_FOUR_ISLAND
	end


FourIsland_PokemonCenter_1F_EventScript_Nurse::
# 12 "data/maps/FourIsland_PokemonCenter_1F_Frlg/scripts.pory"
	lock
# 13 "data/maps/FourIsland_PokemonCenter_1F_Frlg/scripts.pory"
	faceplayer
# 14 "data/maps/FourIsland_PokemonCenter_1F_Frlg/scripts.pory"
	call EventScript_PkmnCenterNurse_Frlg
# 15 "data/maps/FourIsland_PokemonCenter_1F_Frlg/scripts.pory"
	release
	end


FourIsland_PokemonCenter_1F_EventScript_Man::
# 20 "data/maps/FourIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox FourIsland_PokemonCenter_1F_Text_RareIceMonsInCave, MSGBOX_NPC
	end


FourIsland_PokemonCenter_1F_EventScript_Woman::
# 25 "data/maps/FourIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox FourIsland_PokemonCenter_1F_Text_DayCarePeopleFoundEggBefore, MSGBOX_NPC
	end


FourIsland_PokemonCenter_1F_EventScript_Gentleman::
# 30 "data/maps/FourIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox FourIsland_PokemonCenter_1F_Text_NewPokemonJournalHasntArrived, MSGBOX_NPC
	end


Text_BodySlamTeach::
# 34 "data/maps/FourIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Ready?\n"
	.string "Boing!\p"
	.string "We're having a BODY SLAM match\n"
	.string "to see who wimps out first.\p"
	.string "If you were to join us, you'd be\n"
	.string "squashed like a bug, though…\p"
	.string "How about I teach BODY SLAM to\n"
	.string "a POKéMON of yours instead?$"

Text_BodySlamDeclined::
# 45 "data/maps/FourIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Come again!\n"
	.string "Boing!$"

Text_BodySlamWhichMon::
# 50 "data/maps/FourIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Which POKéMON wants to learn how\n"
	.string "to BODY SLAM?$"

Text_BodySlamTaught::
# 55 "data/maps/FourIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Boioing!$"

FourIsland_House1_Text_FatMan::
# 59 "data/maps/FourIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "それ　ぼよーん！\n"
	.string "おまえ　おもいなあー！$"

FourIsland_PokemonCenter_1F_Text_RareIceMonsInCave::
# 64 "data/maps/FourIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "There's a rare kind of ICE POKéMON\n"
	.string "that lives in the cave.\p"
	.string "We get a lot of visitors hoping to\n"
	.string "see that POKéMON.$"

FourIsland_PokemonCenter_1F_Text_DayCarePeopleFoundEggBefore::
# 71 "data/maps/FourIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Oh? A POKéMON EGG?\n"
	.string "…I have no idea.\p"
	.string "…Oh, wait. The DAY-CARE people\n"
	.string "in town were saying something.\p"
	.string "They said that they'd found EGGS\n"
	.string "before on their property.$"

FourIsland_PokemonCenter_1F_Text_NewPokemonJournalHasntArrived::
# 80 "data/maps/FourIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "What's this?\p"
	.string "The new POKéMON JOURNAL hasn't\n"
	.string "arrived on this island?$"
