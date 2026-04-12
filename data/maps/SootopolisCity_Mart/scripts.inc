# 1 "data/maps/SootopolisCity_Mart/scripts.pory"

# 2 "data/maps/SootopolisCity_Mart/scripts.pory"
SootopolisCity_Mart_MapScripts::
# 3 "data/maps/SootopolisCity_Mart/scripts.pory"
	.byte 0
# 4 "data/maps/SootopolisCity_Mart/scripts.pory"

# 5 "data/maps/SootopolisCity_Mart/scripts.pory"

# 6 "data/maps/SootopolisCity_Mart/scripts.pory"
SootopolisCity_Mart_EventScript_Clerk::
# 7 "data/maps/SootopolisCity_Mart/scripts.pory"
# 4 "data/maps/SootopolisCity_Mart/scripts.pory"
# 8 "data/maps/SootopolisCity_Mart/scripts.pory"
	lock
# 9 "data/maps/SootopolisCity_Mart/scripts.pory"
# 5 "data/maps/SootopolisCity_Mart/scripts.pory"
# 10 "data/maps/SootopolisCity_Mart/scripts.pory"
	faceplayer
# 11 "data/maps/SootopolisCity_Mart/scripts.pory"
# 6 "data/maps/SootopolisCity_Mart/scripts.pory"
# 12 "data/maps/SootopolisCity_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 13 "data/maps/SootopolisCity_Mart/scripts.pory"
# 7 "data/maps/SootopolisCity_Mart/scripts.pory"
# 14 "data/maps/SootopolisCity_Mart/scripts.pory"
	waitmessage
# 15 "data/maps/SootopolisCity_Mart/scripts.pory"
# 8 "data/maps/SootopolisCity_Mart/scripts.pory"
# 16 "data/maps/SootopolisCity_Mart/scripts.pory"
	pokemart SootopolisCity_Mart_Pokemart
# 17 "data/maps/SootopolisCity_Mart/scripts.pory"
# 9 "data/maps/SootopolisCity_Mart/scripts.pory"
# 18 "data/maps/SootopolisCity_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 19 "data/maps/SootopolisCity_Mart/scripts.pory"
# 10 "data/maps/SootopolisCity_Mart/scripts.pory"
# 20 "data/maps/SootopolisCity_Mart/scripts.pory"
	release
# 21 "data/maps/SootopolisCity_Mart/scripts.pory"
	end
# 22 "data/maps/SootopolisCity_Mart/scripts.pory"

# 23 "data/maps/SootopolisCity_Mart/scripts.pory"

# 24 "data/maps/SootopolisCity_Mart/scripts.pory"
SootopolisCity_Mart_Pokemart::
# 25 "data/maps/SootopolisCity_Mart/scripts.pory"
# 15 "data/maps/SootopolisCity_Mart/scripts.pory"
# 26 "data/maps/SootopolisCity_Mart/scripts.pory"
	pokemartlistend
# 27 "data/maps/SootopolisCity_Mart/scripts.pory"
	return
# 28 "data/maps/SootopolisCity_Mart/scripts.pory"

# 29 "data/maps/SootopolisCity_Mart/scripts.pory"

# 30 "data/maps/SootopolisCity_Mart/scripts.pory"
SootopolisCity_Mart_EventScript_FatMan::
# 31 "data/maps/SootopolisCity_Mart/scripts.pory"
# 19 "data/maps/SootopolisCity_Mart/scripts.pory"
# 32 "data/maps/SootopolisCity_Mart/scripts.pory"
	lock
# 33 "data/maps/SootopolisCity_Mart/scripts.pory"
# 20 "data/maps/SootopolisCity_Mart/scripts.pory"
# 34 "data/maps/SootopolisCity_Mart/scripts.pory"
	faceplayer
# 35 "data/maps/SootopolisCity_Mart/scripts.pory"
# 21 "data/maps/SootopolisCity_Mart/scripts.pory"
# 36 "data/maps/SootopolisCity_Mart/scripts.pory"
	compare VAR_SKY_PILLAR_STATE, 2
# 37 "data/maps/SootopolisCity_Mart/scripts.pory"
	goto_if_ge SootopolisCity_Mart_EventScript_FatMan_2
# 38 "data/maps/SootopolisCity_Mart/scripts.pory"
SootopolisCity_Mart_EventScript_FatMan_1:
# 39 "data/maps/SootopolisCity_Mart/scripts.pory"
# 24 "data/maps/SootopolisCity_Mart/scripts.pory"
# 40 "data/maps/SootopolisCity_Mart/scripts.pory"
	goto_if_unset FLAG_KYOGRE_ESCAPED_SEAFLOOR_CAVERN, SootopolisCity_Mart_EventScript_FatMan_5
# 41 "data/maps/SootopolisCity_Mart/scripts.pory"
SootopolisCity_Mart_EventScript_FatMan_4:
# 42 "data/maps/SootopolisCity_Mart/scripts.pory"
# 27 "data/maps/SootopolisCity_Mart/scripts.pory"
# 43 "data/maps/SootopolisCity_Mart/scripts.pory"
	msgbox SootopolisCity_Mart_Text_TooScaryOutside, MSGBOX_DEFAULT
# 44 "data/maps/SootopolisCity_Mart/scripts.pory"
# 28 "data/maps/SootopolisCity_Mart/scripts.pory"
# 45 "data/maps/SootopolisCity_Mart/scripts.pory"
	release
# 46 "data/maps/SootopolisCity_Mart/scripts.pory"
	end
# 47 "data/maps/SootopolisCity_Mart/scripts.pory"

# 48 "data/maps/SootopolisCity_Mart/scripts.pory"
SootopolisCity_Mart_EventScript_FatMan_2:
# 49 "data/maps/SootopolisCity_Mart/scripts.pory"
# 22 "data/maps/SootopolisCity_Mart/scripts.pory"
# 50 "data/maps/SootopolisCity_Mart/scripts.pory"
	goto SootopolisCity_Mart_EventScript_FatManNoLegendaries
# 51 "data/maps/SootopolisCity_Mart/scripts.pory"
	goto SootopolisCity_Mart_EventScript_FatMan_1
# 52 "data/maps/SootopolisCity_Mart/scripts.pory"

# 53 "data/maps/SootopolisCity_Mart/scripts.pory"
SootopolisCity_Mart_EventScript_FatMan_5:
# 54 "data/maps/SootopolisCity_Mart/scripts.pory"
# 25 "data/maps/SootopolisCity_Mart/scripts.pory"
# 55 "data/maps/SootopolisCity_Mart/scripts.pory"
	goto SootopolisCity_Mart_EventScript_FatManNoLegendaries
# 56 "data/maps/SootopolisCity_Mart/scripts.pory"
	goto SootopolisCity_Mart_EventScript_FatMan_4
# 57 "data/maps/SootopolisCity_Mart/scripts.pory"

# 58 "data/maps/SootopolisCity_Mart/scripts.pory"

# 59 "data/maps/SootopolisCity_Mart/scripts.pory"
SootopolisCity_Mart_EventScript_FatManNoLegendaries::
# 60 "data/maps/SootopolisCity_Mart/scripts.pory"
# 33 "data/maps/SootopolisCity_Mart/scripts.pory"
# 61 "data/maps/SootopolisCity_Mart/scripts.pory"
	msgbox SootopolisCity_Mart_Text_PPUpIsGreat, MSGBOX_DEFAULT
# 62 "data/maps/SootopolisCity_Mart/scripts.pory"
# 34 "data/maps/SootopolisCity_Mart/scripts.pory"
# 63 "data/maps/SootopolisCity_Mart/scripts.pory"
	release
# 64 "data/maps/SootopolisCity_Mart/scripts.pory"
	end
# 65 "data/maps/SootopolisCity_Mart/scripts.pory"

# 66 "data/maps/SootopolisCity_Mart/scripts.pory"

# 67 "data/maps/SootopolisCity_Mart/scripts.pory"
SootopolisCity_Mart_EventScript_Gentleman::
# 68 "data/maps/SootopolisCity_Mart/scripts.pory"
# 39 "data/maps/SootopolisCity_Mart/scripts.pory"
# 69 "data/maps/SootopolisCity_Mart/scripts.pory"
	lock
# 70 "data/maps/SootopolisCity_Mart/scripts.pory"
# 40 "data/maps/SootopolisCity_Mart/scripts.pory"
# 71 "data/maps/SootopolisCity_Mart/scripts.pory"
	faceplayer
# 72 "data/maps/SootopolisCity_Mart/scripts.pory"
# 41 "data/maps/SootopolisCity_Mart/scripts.pory"
# 73 "data/maps/SootopolisCity_Mart/scripts.pory"
	compare VAR_SKY_PILLAR_STATE, 2
# 74 "data/maps/SootopolisCity_Mart/scripts.pory"
	goto_if_ge SootopolisCity_Mart_EventScript_Gentleman_2
# 75 "data/maps/SootopolisCity_Mart/scripts.pory"
SootopolisCity_Mart_EventScript_Gentleman_1:
# 76 "data/maps/SootopolisCity_Mart/scripts.pory"
# 44 "data/maps/SootopolisCity_Mart/scripts.pory"
# 77 "data/maps/SootopolisCity_Mart/scripts.pory"
	goto_if_unset FLAG_KYOGRE_ESCAPED_SEAFLOOR_CAVERN, SootopolisCity_Mart_EventScript_Gentleman_5
# 78 "data/maps/SootopolisCity_Mart/scripts.pory"
SootopolisCity_Mart_EventScript_Gentleman_4:
# 79 "data/maps/SootopolisCity_Mart/scripts.pory"
# 47 "data/maps/SootopolisCity_Mart/scripts.pory"
# 80 "data/maps/SootopolisCity_Mart/scripts.pory"
	msgbox SootopolisCity_Mart_Text_DidSomethingAwaken, MSGBOX_DEFAULT
# 81 "data/maps/SootopolisCity_Mart/scripts.pory"
# 48 "data/maps/SootopolisCity_Mart/scripts.pory"
# 82 "data/maps/SootopolisCity_Mart/scripts.pory"
	release
# 83 "data/maps/SootopolisCity_Mart/scripts.pory"
	end
# 84 "data/maps/SootopolisCity_Mart/scripts.pory"

# 85 "data/maps/SootopolisCity_Mart/scripts.pory"
SootopolisCity_Mart_EventScript_Gentleman_2:
# 86 "data/maps/SootopolisCity_Mart/scripts.pory"
# 42 "data/maps/SootopolisCity_Mart/scripts.pory"
# 87 "data/maps/SootopolisCity_Mart/scripts.pory"
	goto SootopolisCity_Mart_EventScript_GentlemanNoLegendaries
# 88 "data/maps/SootopolisCity_Mart/scripts.pory"
	goto SootopolisCity_Mart_EventScript_Gentleman_1
# 89 "data/maps/SootopolisCity_Mart/scripts.pory"

# 90 "data/maps/SootopolisCity_Mart/scripts.pory"
SootopolisCity_Mart_EventScript_Gentleman_5:
# 91 "data/maps/SootopolisCity_Mart/scripts.pory"
# 45 "data/maps/SootopolisCity_Mart/scripts.pory"
# 92 "data/maps/SootopolisCity_Mart/scripts.pory"
	goto SootopolisCity_Mart_EventScript_GentlemanNoLegendaries
# 93 "data/maps/SootopolisCity_Mart/scripts.pory"
	goto SootopolisCity_Mart_EventScript_Gentleman_4
# 94 "data/maps/SootopolisCity_Mart/scripts.pory"

# 95 "data/maps/SootopolisCity_Mart/scripts.pory"

# 96 "data/maps/SootopolisCity_Mart/scripts.pory"
SootopolisCity_Mart_EventScript_GentlemanNoLegendaries::
# 97 "data/maps/SootopolisCity_Mart/scripts.pory"
# 53 "data/maps/SootopolisCity_Mart/scripts.pory"
# 98 "data/maps/SootopolisCity_Mart/scripts.pory"
	msgbox SootopolisCity_Mart_Text_FullRestoreItemOfDreams, MSGBOX_DEFAULT
# 99 "data/maps/SootopolisCity_Mart/scripts.pory"
# 54 "data/maps/SootopolisCity_Mart/scripts.pory"
# 100 "data/maps/SootopolisCity_Mart/scripts.pory"
	release
# 101 "data/maps/SootopolisCity_Mart/scripts.pory"
	end
# 102 "data/maps/SootopolisCity_Mart/scripts.pory"

# 103 "data/maps/SootopolisCity_Mart/scripts.pory"

# 104 "data/maps/SootopolisCity_Mart/scripts.pory"
SootopolisCity_Mart_Text_PPUpIsGreat::
# 105 "data/maps/SootopolisCity_Mart/scripts.pory"
# 58 "data/maps/SootopolisCity_Mart/scripts.pory"
# 106 "data/maps/SootopolisCity_Mart/scripts.pory"
	.string "PP UP is great!\p"
# 107 "data/maps/SootopolisCity_Mart/scripts.pory"
	.string "It raises the POWER POINTS, the PP,\n"
# 108 "data/maps/SootopolisCity_Mart/scripts.pory"
	.string "of a POKéMON move.$"
# 109 "data/maps/SootopolisCity_Mart/scripts.pory"

# 110 "data/maps/SootopolisCity_Mart/scripts.pory"
SootopolisCity_Mart_Text_TooScaryOutside::
# 111 "data/maps/SootopolisCity_Mart/scripts.pory"
# 64 "data/maps/SootopolisCity_Mart/scripts.pory"
# 112 "data/maps/SootopolisCity_Mart/scripts.pory"
	.string "What…\n"
# 113 "data/maps/SootopolisCity_Mart/scripts.pory"
	.string "What is happening?\p"
# 114 "data/maps/SootopolisCity_Mart/scripts.pory"
	.string "I really want to know, but it's too\n"
# 115 "data/maps/SootopolisCity_Mart/scripts.pory"
	.string "scary to go outside.$"
# 116 "data/maps/SootopolisCity_Mart/scripts.pory"

# 117 "data/maps/SootopolisCity_Mart/scripts.pory"
SootopolisCity_Mart_Text_FullRestoreItemOfDreams::
# 118 "data/maps/SootopolisCity_Mart/scripts.pory"
# 71 "data/maps/SootopolisCity_Mart/scripts.pory"
# 119 "data/maps/SootopolisCity_Mart/scripts.pory"
	.string "Do you know FULL RESTORE?\p"
# 120 "data/maps/SootopolisCity_Mart/scripts.pory"
	.string "Full restoration of HP!\n"
# 121 "data/maps/SootopolisCity_Mart/scripts.pory"
	.string "Eradication of all status problems!\p"
# 122 "data/maps/SootopolisCity_Mart/scripts.pory"
	.string "It's truly an item of your dreams!$"
# 123 "data/maps/SootopolisCity_Mart/scripts.pory"

# 124 "data/maps/SootopolisCity_Mart/scripts.pory"
SootopolisCity_Mart_Text_DidSomethingAwaken::
# 125 "data/maps/SootopolisCity_Mart/scripts.pory"
# 78 "data/maps/SootopolisCity_Mart/scripts.pory"
# 126 "data/maps/SootopolisCity_Mart/scripts.pory"
	.string "This weather…\n"
# 127 "data/maps/SootopolisCity_Mart/scripts.pory"
	.string "Did something awaken?$"
