SootopolisCity_Mart_MapScripts::
	.byte 0


SootopolisCity_Mart_EventScript_Clerk::
# 4 "data/maps/SootopolisCity_Mart/scripts.pory"
	lock
# 5 "data/maps/SootopolisCity_Mart/scripts.pory"
	faceplayer
# 6 "data/maps/SootopolisCity_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 7 "data/maps/SootopolisCity_Mart/scripts.pory"
	waitmessage
# 8 "data/maps/SootopolisCity_Mart/scripts.pory"
	pokemart SootopolisCity_Mart_Pokemart
# 9 "data/maps/SootopolisCity_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 10 "data/maps/SootopolisCity_Mart/scripts.pory"
	release
	end


SootopolisCity_Mart_Pokemart::
# 15 "data/maps/SootopolisCity_Mart/scripts.pory"
	pokemartlistend
	return


SootopolisCity_Mart_EventScript_FatMan::
# 19 "data/maps/SootopolisCity_Mart/scripts.pory"
	lock
# 20 "data/maps/SootopolisCity_Mart/scripts.pory"
	faceplayer
# 21 "data/maps/SootopolisCity_Mart/scripts.pory"
	compare VAR_SKY_PILLAR_STATE, 2
	goto_if_ge SootopolisCity_Mart_EventScript_FatMan_2
SootopolisCity_Mart_EventScript_FatMan_1:
# 24 "data/maps/SootopolisCity_Mart/scripts.pory"
	goto_if_unset FLAG_KYOGRE_ESCAPED_SEAFLOOR_CAVERN, SootopolisCity_Mart_EventScript_FatMan_5
SootopolisCity_Mart_EventScript_FatMan_4:
# 27 "data/maps/SootopolisCity_Mart/scripts.pory"
	msgbox SootopolisCity_Mart_Text_TooScaryOutside, MSGBOX_DEFAULT
# 28 "data/maps/SootopolisCity_Mart/scripts.pory"
	release
	end

SootopolisCity_Mart_EventScript_FatMan_2:
# 22 "data/maps/SootopolisCity_Mart/scripts.pory"
	goto SootopolisCity_Mart_EventScript_FatManNoLegendaries
	goto SootopolisCity_Mart_EventScript_FatMan_1

SootopolisCity_Mart_EventScript_FatMan_5:
# 25 "data/maps/SootopolisCity_Mart/scripts.pory"
	goto SootopolisCity_Mart_EventScript_FatManNoLegendaries
	goto SootopolisCity_Mart_EventScript_FatMan_4


SootopolisCity_Mart_EventScript_FatManNoLegendaries::
# 33 "data/maps/SootopolisCity_Mart/scripts.pory"
	msgbox SootopolisCity_Mart_Text_PPUpIsGreat, MSGBOX_DEFAULT
# 34 "data/maps/SootopolisCity_Mart/scripts.pory"
	release
	end


SootopolisCity_Mart_EventScript_Gentleman::
# 39 "data/maps/SootopolisCity_Mart/scripts.pory"
	lock
# 40 "data/maps/SootopolisCity_Mart/scripts.pory"
	faceplayer
# 41 "data/maps/SootopolisCity_Mart/scripts.pory"
	compare VAR_SKY_PILLAR_STATE, 2
	goto_if_ge SootopolisCity_Mart_EventScript_Gentleman_2
SootopolisCity_Mart_EventScript_Gentleman_1:
# 44 "data/maps/SootopolisCity_Mart/scripts.pory"
	goto_if_unset FLAG_KYOGRE_ESCAPED_SEAFLOOR_CAVERN, SootopolisCity_Mart_EventScript_Gentleman_5
SootopolisCity_Mart_EventScript_Gentleman_4:
# 47 "data/maps/SootopolisCity_Mart/scripts.pory"
	msgbox SootopolisCity_Mart_Text_DidSomethingAwaken, MSGBOX_DEFAULT
# 48 "data/maps/SootopolisCity_Mart/scripts.pory"
	release
	end

SootopolisCity_Mart_EventScript_Gentleman_2:
# 42 "data/maps/SootopolisCity_Mart/scripts.pory"
	goto SootopolisCity_Mart_EventScript_GentlemanNoLegendaries
	goto SootopolisCity_Mart_EventScript_Gentleman_1

SootopolisCity_Mart_EventScript_Gentleman_5:
# 45 "data/maps/SootopolisCity_Mart/scripts.pory"
	goto SootopolisCity_Mart_EventScript_GentlemanNoLegendaries
	goto SootopolisCity_Mart_EventScript_Gentleman_4


SootopolisCity_Mart_EventScript_GentlemanNoLegendaries::
# 53 "data/maps/SootopolisCity_Mart/scripts.pory"
	msgbox SootopolisCity_Mart_Text_FullRestoreItemOfDreams, MSGBOX_DEFAULT
# 54 "data/maps/SootopolisCity_Mart/scripts.pory"
	release
	end


SootopolisCity_Mart_Text_PPUpIsGreat::
# 58 "data/maps/SootopolisCity_Mart/scripts.pory"
	.string "PP UP is great!\p"
	.string "It raises the POWER POINTS, the PP,\n"
	.string "of a POKéMON move.$"

SootopolisCity_Mart_Text_TooScaryOutside::
# 64 "data/maps/SootopolisCity_Mart/scripts.pory"
	.string "What…\n"
	.string "What is happening?\p"
	.string "I really want to know, but it's too\n"
	.string "scary to go outside.$"

SootopolisCity_Mart_Text_FullRestoreItemOfDreams::
# 71 "data/maps/SootopolisCity_Mart/scripts.pory"
	.string "Do you know FULL RESTORE?\p"
	.string "Full restoration of HP!\n"
	.string "Eradication of all status problems!\p"
	.string "It's truly an item of your dreams!$"

SootopolisCity_Mart_Text_DidSomethingAwaken::
# 78 "data/maps/SootopolisCity_Mart/scripts.pory"
	.string "This weather…\n"
	.string "Did something awaken?$"
