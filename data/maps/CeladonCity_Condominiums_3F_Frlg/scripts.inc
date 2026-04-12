# 1 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"

# 2 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
CeladonCity_Condominiums_3F_Frlg_MapScripts::
# 3 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
	.byte 0
# 4 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"

# 5 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"

# 6 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
CeladonCity_Condominiums_3F_EventScript_Programmer::
# 7 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
# 4 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
# 8 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
	msgbox CeladonCity_Condominiums_3F_Text_ImTheProgrammer, MSGBOX_NPC
# 9 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
	end
# 10 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"

# 11 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"

# 12 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
CeladonCity_Condominiums_3F_EventScript_GraphicArtist::
# 13 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
# 9 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
# 14 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
	msgbox CeladonCity_Condominiums_3F_Text_ImTheGraphicArtist, MSGBOX_NPC
# 15 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
	end
# 16 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"

# 17 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"

# 18 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
CeladonCity_Condominiums_3F_EventScript_Writer::
# 19 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
# 14 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
# 20 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
	msgbox CeladonCity_Condominiums_3F_Text_IWroteTheStory, MSGBOX_NPC
# 21 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
	end
# 22 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"

# 23 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"

# 24 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
CeladonCity_Condominiums_3F_EventScript_Designer::
# 25 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
# 19 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
# 26 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
	lock
# 27 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
# 20 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
# 28 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
	faceplayer
# 29 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
# 21 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
# 30 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
	specialvar VAR_RESULT, HasAllKantoMons
# 31 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
# 22 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
# 32 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
	compare VAR_RESULT, TRUE
# 33 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
	goto_if_eq CeladonCity_Condominiums_3F_EventScript_Designer_2
# 34 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
CeladonCity_Condominiums_3F_EventScript_Designer_1:
# 35 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
# 25 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
# 36 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
	msgbox CeladonCity_Condominiums_3F_Text_ImGameDesignerShowMeFinishedPokedex
# 37 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
# 26 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
# 38 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
	release
# 39 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
	end
# 40 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"

# 41 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
CeladonCity_Condominiums_3F_EventScript_Designer_2:
# 42 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
# 23 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
# 43 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
	goto CeladonCity_Condominiums_3F_EventScript_CompletedPokedex
# 44 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
	goto CeladonCity_Condominiums_3F_EventScript_Designer_1
# 45 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"

# 46 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"

# 47 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
CeladonCity_Condominiums_3F_EventScript_CompletedPokedex::
# 48 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
# 31 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
# 49 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
	goto CeladonCity_Condominiums_3F_EventScript_ShowDiploma
# 50 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
	end
# 51 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"

# 52 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"

# 53 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
CeladonCity_Condominiums_3F_EventScript_ShowDiploma::
# 54 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
# 36 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
# 55 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
	message CeladonCity_Condominiums_3F_Text_CompletedPokedexCongratulations
# 56 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
# 37 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
# 57 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
	waitmessage
# 58 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
# 38 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
# 59 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
	delay 60
# 60 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
# 39 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
# 61 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
	special Special_ShowDiploma
# 62 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
# 40 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
# 63 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
	waitstate
# 64 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
# 41 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
# 65 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
	release
# 66 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
	end
# 67 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"

# 68 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"

# 69 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
CeladonCity_Condominiums_3F_EventScript_DevelopmentRoomSign::
# 70 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
# 46 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
# 71 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
	msgbox CeladonCity_Condominiums_3F_Text_GameFreakDevelopmentRoom, MSGBOX_SIGN
# 72 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
	end
# 73 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"

# 74 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"

# 75 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
CeladonCity_Condominiums_3F_EventScript_Computer1::
# 76 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
# 51 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
# 77 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
	msgbox CeladonCity_Condominiums_3F_Text_ItsTheGameProgram, MSGBOX_SIGN
# 78 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
	end
# 79 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"

# 80 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"

# 81 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
CeladonCity_Condominiums_3F_EventScript_Computer2::
# 82 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
# 56 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
# 83 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
	msgbox CeladonCity_Condominiums_3F_Text_SomeonesPlayingGame, MSGBOX_SIGN
# 84 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
	end
# 85 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"

# 86 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"

# 87 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
CeladonCity_Condominiums_3F_EventScript_Computer3::
# 88 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
# 61 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
# 89 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
	msgbox CeladonCity_Condominiums_3F_Text_ItsScriptBetterNotLookAtEnding, MSGBOX_SIGN
# 90 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
	end
# 91 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"

# 92 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"

# 93 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
CeladonCity_Condominiums_3F_Text_ImTheProgrammer::
# 94 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
# 65 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
# 95 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
	.string "Me?\n"
# 96 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
	.string "I'm the programmer!$"
# 97 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"

# 98 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
CeladonCity_Condominiums_3F_Text_ImTheGraphicArtist::
# 99 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
# 70 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
# 100 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
	.string "I'm the graphic artist!\n"
# 101 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
	.string "I drew you!$"
# 102 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"

# 103 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
CeladonCity_Condominiums_3F_Text_IWroteTheStory::
# 104 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
# 75 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
# 105 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
	.string "I wrote the story!\n"
# 106 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
	.string "Isn't ERIKA cute?\p"
# 107 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
	.string "I like MISTY a lot, too!\n"
# 108 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
	.string "Oh, and SABRINA, I like her!$"
# 109 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"

# 110 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
CeladonCity_Condominiums_3F_Text_ImGameDesignerShowMeFinishedPokedex::
# 111 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
# 82 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
# 112 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
	.string "Is that right?\p"
# 113 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
	.string "I'm the game designer!\p"
# 114 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
	.string "Filling up your POKéDEX is tough,\n"
# 115 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
	.string "but don't quit!\p"
# 116 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
	.string "When you finish, come tell me!$"
# 117 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"

# 118 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
CeladonCity_Condominiums_3F_Text_CompletedPokedexCongratulations::
# 119 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
# 90 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
# 120 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
	.string "Wow! Excellent!\n"
# 121 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
	.string "You completed your POKéDEX!\l"
# 122 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
	.string "Congratulations!\l"
# 123 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
	.string "…$"
# 124 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"

# 125 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
CeladonCity_Condominiums_3F_Text_ItsTheGameProgram::
# 126 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
# 97 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
# 127 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
	.string "It's the game program! Messing with\n"
# 128 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
	.string "it could bug out the game!$"
# 129 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"

# 130 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
CeladonCity_Condominiums_3F_Text_SomeonesPlayingGame::
# 131 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
# 102 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
# 132 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
	.string "Someone's playing a game instead of\n"
# 133 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
	.string "working!$"
# 134 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"

# 135 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
CeladonCity_Condominiums_3F_Text_ItsScriptBetterNotLookAtEnding::
# 136 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
# 107 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
# 137 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
	.string "It's the script!\n"
# 138 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
	.string "Better not look at the ending!$"
# 139 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"

# 140 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
CeladonCity_Condominiums_3F_Text_GameFreakDevelopmentRoom::
# 141 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
# 112 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
# 142 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
	.string "GAME FREAK Development Room$"
