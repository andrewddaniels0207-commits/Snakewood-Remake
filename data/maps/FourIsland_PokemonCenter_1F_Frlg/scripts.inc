# 1 "data/maps/FourIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 2 "data/maps/FourIsland_PokemonCenter_1F_Frlg/scripts.pory"
FourIsland_PokemonCenter_1F_Frlg_MapScripts::
# 3 "data/maps/FourIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 2 "data/maps/FourIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 4 "data/maps/FourIsland_PokemonCenter_1F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, FourIsland_PokemonCenter_1F_OnTransition
# 5 "data/maps/FourIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 3 "data/maps/FourIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 6 "data/maps/FourIsland_PokemonCenter_1F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
# 7 "data/maps/FourIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.byte 0
# 8 "data/maps/FourIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 9 "data/maps/FourIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 10 "data/maps/FourIsland_PokemonCenter_1F_Frlg/scripts.pory"
FourIsland_PokemonCenter_1F_OnTransition::
# 11 "data/maps/FourIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 7 "data/maps/FourIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 12 "data/maps/FourIsland_PokemonCenter_1F_Frlg/scripts.pory"
	setrespawn HEAL_LOCATION_FOUR_ISLAND
# 13 "data/maps/FourIsland_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 14 "data/maps/FourIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 15 "data/maps/FourIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 16 "data/maps/FourIsland_PokemonCenter_1F_Frlg/scripts.pory"
FourIsland_PokemonCenter_1F_EventScript_Nurse::
# 17 "data/maps/FourIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 12 "data/maps/FourIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 18 "data/maps/FourIsland_PokemonCenter_1F_Frlg/scripts.pory"
	lock
# 19 "data/maps/FourIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 13 "data/maps/FourIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 20 "data/maps/FourIsland_PokemonCenter_1F_Frlg/scripts.pory"
	faceplayer
# 21 "data/maps/FourIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 14 "data/maps/FourIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 22 "data/maps/FourIsland_PokemonCenter_1F_Frlg/scripts.pory"
	call EventScript_PkmnCenterNurse_Frlg
# 23 "data/maps/FourIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 15 "data/maps/FourIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 24 "data/maps/FourIsland_PokemonCenter_1F_Frlg/scripts.pory"
	release
# 25 "data/maps/FourIsland_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 26 "data/maps/FourIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 27 "data/maps/FourIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 28 "data/maps/FourIsland_PokemonCenter_1F_Frlg/scripts.pory"
FourIsland_PokemonCenter_1F_EventScript_Man::
# 29 "data/maps/FourIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 20 "data/maps/FourIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 30 "data/maps/FourIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox FourIsland_PokemonCenter_1F_Text_RareIceMonsInCave, MSGBOX_NPC
# 31 "data/maps/FourIsland_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 32 "data/maps/FourIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 33 "data/maps/FourIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 34 "data/maps/FourIsland_PokemonCenter_1F_Frlg/scripts.pory"
FourIsland_PokemonCenter_1F_EventScript_Woman::
# 35 "data/maps/FourIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 25 "data/maps/FourIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 36 "data/maps/FourIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox FourIsland_PokemonCenter_1F_Text_DayCarePeopleFoundEggBefore, MSGBOX_NPC
# 37 "data/maps/FourIsland_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 38 "data/maps/FourIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 39 "data/maps/FourIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 40 "data/maps/FourIsland_PokemonCenter_1F_Frlg/scripts.pory"
FourIsland_PokemonCenter_1F_EventScript_Gentleman::
# 41 "data/maps/FourIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 30 "data/maps/FourIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 42 "data/maps/FourIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox FourIsland_PokemonCenter_1F_Text_NewPokemonJournalHasntArrived, MSGBOX_NPC
# 43 "data/maps/FourIsland_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 44 "data/maps/FourIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 45 "data/maps/FourIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 46 "data/maps/FourIsland_PokemonCenter_1F_Frlg/scripts.pory"
Text_BodySlamTeach::
# 47 "data/maps/FourIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 34 "data/maps/FourIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 48 "data/maps/FourIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Ready?\n"
# 49 "data/maps/FourIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Boing!\p"
# 50 "data/maps/FourIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "We're having a BODY SLAM match\n"
# 51 "data/maps/FourIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "to see who wimps out first.\p"
# 52 "data/maps/FourIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "If you were to join us, you'd be\n"
# 53 "data/maps/FourIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "squashed like a bug, though…\p"
# 54 "data/maps/FourIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "How about I teach BODY SLAM to\n"
# 55 "data/maps/FourIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "a POKéMON of yours instead?$"
# 56 "data/maps/FourIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 57 "data/maps/FourIsland_PokemonCenter_1F_Frlg/scripts.pory"
Text_BodySlamDeclined::
# 58 "data/maps/FourIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 45 "data/maps/FourIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 59 "data/maps/FourIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Come again!\n"
# 60 "data/maps/FourIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Boing!$"
# 61 "data/maps/FourIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 62 "data/maps/FourIsland_PokemonCenter_1F_Frlg/scripts.pory"
Text_BodySlamWhichMon::
# 63 "data/maps/FourIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 50 "data/maps/FourIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 64 "data/maps/FourIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Which POKéMON wants to learn how\n"
# 65 "data/maps/FourIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "to BODY SLAM?$"
# 66 "data/maps/FourIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 67 "data/maps/FourIsland_PokemonCenter_1F_Frlg/scripts.pory"
Text_BodySlamTaught::
# 68 "data/maps/FourIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 55 "data/maps/FourIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 69 "data/maps/FourIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Boioing!$"
# 70 "data/maps/FourIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 71 "data/maps/FourIsland_PokemonCenter_1F_Frlg/scripts.pory"
FourIsland_House1_Text_FatMan::
# 72 "data/maps/FourIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 59 "data/maps/FourIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 73 "data/maps/FourIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "それ　ぼよーん！\n"
# 74 "data/maps/FourIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "おまえ　おもいなあー！$"
# 75 "data/maps/FourIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 76 "data/maps/FourIsland_PokemonCenter_1F_Frlg/scripts.pory"
FourIsland_PokemonCenter_1F_Text_RareIceMonsInCave::
# 77 "data/maps/FourIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 64 "data/maps/FourIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 78 "data/maps/FourIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "There's a rare kind of ICE POKéMON\n"
# 79 "data/maps/FourIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "that lives in the cave.\p"
# 80 "data/maps/FourIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "We get a lot of visitors hoping to\n"
# 81 "data/maps/FourIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "see that POKéMON.$"
# 82 "data/maps/FourIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 83 "data/maps/FourIsland_PokemonCenter_1F_Frlg/scripts.pory"
FourIsland_PokemonCenter_1F_Text_DayCarePeopleFoundEggBefore::
# 84 "data/maps/FourIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 71 "data/maps/FourIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 85 "data/maps/FourIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Oh? A POKéMON EGG?\n"
# 86 "data/maps/FourIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "…I have no idea.\p"
# 87 "data/maps/FourIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "…Oh, wait. The DAY-CARE people\n"
# 88 "data/maps/FourIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "in town were saying something.\p"
# 89 "data/maps/FourIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "They said that they'd found EGGS\n"
# 90 "data/maps/FourIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "before on their property.$"
# 91 "data/maps/FourIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 92 "data/maps/FourIsland_PokemonCenter_1F_Frlg/scripts.pory"
FourIsland_PokemonCenter_1F_Text_NewPokemonJournalHasntArrived::
# 93 "data/maps/FourIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 80 "data/maps/FourIsland_PokemonCenter_1F_Frlg/scripts.pory"
# 94 "data/maps/FourIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "What's this?\p"
# 95 "data/maps/FourIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "The new POKéMON JOURNAL hasn't\n"
# 96 "data/maps/FourIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "arrived on this island?$"
