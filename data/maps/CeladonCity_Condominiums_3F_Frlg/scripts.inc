CeladonCity_Condominiums_3F_Frlg_MapScripts::
	.byte 0


CeladonCity_Condominiums_3F_EventScript_Programmer::
# 4 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
	msgbox CeladonCity_Condominiums_3F_Text_ImTheProgrammer, MSGBOX_NPC
	end


CeladonCity_Condominiums_3F_EventScript_GraphicArtist::
# 9 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
	msgbox CeladonCity_Condominiums_3F_Text_ImTheGraphicArtist, MSGBOX_NPC
	end


CeladonCity_Condominiums_3F_EventScript_Writer::
# 14 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
	msgbox CeladonCity_Condominiums_3F_Text_IWroteTheStory, MSGBOX_NPC
	end


CeladonCity_Condominiums_3F_EventScript_Designer::
# 19 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
	lock
# 20 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
	faceplayer
# 21 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
	specialvar VAR_RESULT, HasAllKantoMons
# 22 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq CeladonCity_Condominiums_3F_EventScript_Designer_2
CeladonCity_Condominiums_3F_EventScript_Designer_1:
# 25 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
	msgbox CeladonCity_Condominiums_3F_Text_ImGameDesignerShowMeFinishedPokedex
# 26 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
	release
	end

CeladonCity_Condominiums_3F_EventScript_Designer_2:
# 23 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
	goto CeladonCity_Condominiums_3F_EventScript_CompletedPokedex
	goto CeladonCity_Condominiums_3F_EventScript_Designer_1


CeladonCity_Condominiums_3F_EventScript_CompletedPokedex::
# 31 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
	goto CeladonCity_Condominiums_3F_EventScript_ShowDiploma
	end


CeladonCity_Condominiums_3F_EventScript_ShowDiploma::
# 36 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
	message CeladonCity_Condominiums_3F_Text_CompletedPokedexCongratulations
# 37 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
	waitmessage
# 38 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
	delay 60
# 39 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
	special Special_ShowDiploma
# 40 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
	waitstate
# 41 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
	release
	end


CeladonCity_Condominiums_3F_EventScript_DevelopmentRoomSign::
# 46 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
	msgbox CeladonCity_Condominiums_3F_Text_GameFreakDevelopmentRoom, MSGBOX_SIGN
	end


CeladonCity_Condominiums_3F_EventScript_Computer1::
# 51 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
	msgbox CeladonCity_Condominiums_3F_Text_ItsTheGameProgram, MSGBOX_SIGN
	end


CeladonCity_Condominiums_3F_EventScript_Computer2::
# 56 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
	msgbox CeladonCity_Condominiums_3F_Text_SomeonesPlayingGame, MSGBOX_SIGN
	end


CeladonCity_Condominiums_3F_EventScript_Computer3::
# 61 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
	msgbox CeladonCity_Condominiums_3F_Text_ItsScriptBetterNotLookAtEnding, MSGBOX_SIGN
	end


CeladonCity_Condominiums_3F_Text_ImTheProgrammer::
# 65 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
	.string "Me?\n"
	.string "I'm the programmer!$"

CeladonCity_Condominiums_3F_Text_ImTheGraphicArtist::
# 70 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
	.string "I'm the graphic artist!\n"
	.string "I drew you!$"

CeladonCity_Condominiums_3F_Text_IWroteTheStory::
# 75 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
	.string "I wrote the story!\n"
	.string "Isn't ERIKA cute?\p"
	.string "I like MISTY a lot, too!\n"
	.string "Oh, and SABRINA, I like her!$"

CeladonCity_Condominiums_3F_Text_ImGameDesignerShowMeFinishedPokedex::
# 82 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
	.string "Is that right?\p"
	.string "I'm the game designer!\p"
	.string "Filling up your POKéDEX is tough,\n"
	.string "but don't quit!\p"
	.string "When you finish, come tell me!$"

CeladonCity_Condominiums_3F_Text_CompletedPokedexCongratulations::
# 90 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
	.string "Wow! Excellent!\n"
	.string "You completed your POKéDEX!\l"
	.string "Congratulations!\l"
	.string "…$"

CeladonCity_Condominiums_3F_Text_ItsTheGameProgram::
# 97 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
	.string "It's the game program! Messing with\n"
	.string "it could bug out the game!$"

CeladonCity_Condominiums_3F_Text_SomeonesPlayingGame::
# 102 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
	.string "Someone's playing a game instead of\n"
	.string "working!$"

CeladonCity_Condominiums_3F_Text_ItsScriptBetterNotLookAtEnding::
# 107 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
	.string "It's the script!\n"
	.string "Better not look at the ending!$"

CeladonCity_Condominiums_3F_Text_GameFreakDevelopmentRoom::
# 112 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
	.string "GAME FREAK Development Room$"
