ThreeIsland_House1_Frlg_MapScripts::
	.byte 0


ThreeIsland_House1_EventScript_Lostelle::
# 4 "data/maps/ThreeIsland_House1_Frlg/scripts.pory"
	lock
# 5 "data/maps/ThreeIsland_House1_Frlg/scripts.pory"
	faceplayer
# 6 "data/maps/ThreeIsland_House1_Frlg/scripts.pory"
	special GetPlayerBigGuyGirlString
# 7 "data/maps/ThreeIsland_House1_Frlg/scripts.pory"
	msgbox ThreeIsland_House1_Text_YoureAlwaysSoCool
# 8 "data/maps/ThreeIsland_House1_Frlg/scripts.pory"
	release
	end


ThreeIsland_House1_EventScript_DisplayCase::
# 13 "data/maps/ThreeIsland_House1_Frlg/scripts.pory"
	msgbox ThreeIsland_House1_Text_RareRocksGemsDisplayed, MSGBOX_SIGN
	end


ThreeIsland_House1_Text_YoureAlwaysSoCool::
# 17 "data/maps/ThreeIsland_House1_Frlg/scripts.pory"
	.string "LOSTELLE: Hi, {PLAYER}!\n"
	.string "You're always so cool!\p"
	.string "I'll make lunch for you, too, one\n"
	.string "day, {PLAYER}.$"

ThreeIsland_House1_Text_RareRocksGemsDisplayed::
# 24 "data/maps/ThreeIsland_House1_Frlg/scripts.pory"
	.string "Rare rocks and gems are displayed.$"
