SaffronCity_Mart_Frlg_MapScripts::
	.byte 0


SaffronCity_Mart_EventScript_Lass::
# 4 "data/maps/SaffronCity_Mart_Frlg/scripts.pory"
	msgbox SaffronCity_Mart_Text_ReviveIsCostly, MSGBOX_NPC
	end


SaffronCity_Mart_EventScript_Youngster::
# 9 "data/maps/SaffronCity_Mart_Frlg/scripts.pory"
	msgbox SaffronCity_Mart_Text_MaxRepelMoreEffectiveThanSuper, MSGBOX_NPC
	end


SaffronCity_Mart_EventScript_Clerk::
# 14 "data/maps/SaffronCity_Mart_Frlg/scripts.pory"
	lock
# 15 "data/maps/SaffronCity_Mart_Frlg/scripts.pory"
	faceplayer
# 16 "data/maps/SaffronCity_Mart_Frlg/scripts.pory"
	message gText_HowMayIServeYou
# 17 "data/maps/SaffronCity_Mart_Frlg/scripts.pory"
	waitmessage
# 18 "data/maps/SaffronCity_Mart_Frlg/scripts.pory"
	pokemart SaffronCity_Mart_Items
# 19 "data/maps/SaffronCity_Mart_Frlg/scripts.pory"
	msgbox gText_PleaseComeAgain
# 20 "data/maps/SaffronCity_Mart_Frlg/scripts.pory"
	release
	end


SaffronCity_Mart_Items::
# 25 "data/maps/SaffronCity_Mart_Frlg/scripts.pory"
	release
	end


SaffronCity_Mart_Text_MaxRepelMoreEffectiveThanSuper::
# 29 "data/maps/SaffronCity_Mart_Frlg/scripts.pory"
	.string "MAX REPEL keeps weaker POKéMON\n"
	.string "from appearing.\p"
	.string "MAX REPEL stays effective longer\n"
	.string "than SUPER REPEL.$"

SaffronCity_Mart_Text_ReviveIsCostly::
# 36 "data/maps/SaffronCity_Mart_Frlg/scripts.pory"
	.string "REVIVE is costly, but it revives\n"
	.string "fainted POKéMON!$"
