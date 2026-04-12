# 1 "data/maps/SaffronCity_Mart_Frlg/scripts.pory"

# 2 "data/maps/SaffronCity_Mart_Frlg/scripts.pory"
SaffronCity_Mart_Frlg_MapScripts::
# 3 "data/maps/SaffronCity_Mart_Frlg/scripts.pory"
	.byte 0
# 4 "data/maps/SaffronCity_Mart_Frlg/scripts.pory"

# 5 "data/maps/SaffronCity_Mart_Frlg/scripts.pory"

# 6 "data/maps/SaffronCity_Mart_Frlg/scripts.pory"
SaffronCity_Mart_EventScript_Lass::
# 7 "data/maps/SaffronCity_Mart_Frlg/scripts.pory"
# 4 "data/maps/SaffronCity_Mart_Frlg/scripts.pory"
# 8 "data/maps/SaffronCity_Mart_Frlg/scripts.pory"
	msgbox SaffronCity_Mart_Text_ReviveIsCostly, MSGBOX_NPC
# 9 "data/maps/SaffronCity_Mart_Frlg/scripts.pory"
	end
# 10 "data/maps/SaffronCity_Mart_Frlg/scripts.pory"

# 11 "data/maps/SaffronCity_Mart_Frlg/scripts.pory"

# 12 "data/maps/SaffronCity_Mart_Frlg/scripts.pory"
SaffronCity_Mart_EventScript_Youngster::
# 13 "data/maps/SaffronCity_Mart_Frlg/scripts.pory"
# 9 "data/maps/SaffronCity_Mart_Frlg/scripts.pory"
# 14 "data/maps/SaffronCity_Mart_Frlg/scripts.pory"
	msgbox SaffronCity_Mart_Text_MaxRepelMoreEffectiveThanSuper, MSGBOX_NPC
# 15 "data/maps/SaffronCity_Mart_Frlg/scripts.pory"
	end
# 16 "data/maps/SaffronCity_Mart_Frlg/scripts.pory"

# 17 "data/maps/SaffronCity_Mart_Frlg/scripts.pory"

# 18 "data/maps/SaffronCity_Mart_Frlg/scripts.pory"
SaffronCity_Mart_EventScript_Clerk::
# 19 "data/maps/SaffronCity_Mart_Frlg/scripts.pory"
# 14 "data/maps/SaffronCity_Mart_Frlg/scripts.pory"
# 20 "data/maps/SaffronCity_Mart_Frlg/scripts.pory"
	lock
# 21 "data/maps/SaffronCity_Mart_Frlg/scripts.pory"
# 15 "data/maps/SaffronCity_Mart_Frlg/scripts.pory"
# 22 "data/maps/SaffronCity_Mart_Frlg/scripts.pory"
	faceplayer
# 23 "data/maps/SaffronCity_Mart_Frlg/scripts.pory"
# 16 "data/maps/SaffronCity_Mart_Frlg/scripts.pory"
# 24 "data/maps/SaffronCity_Mart_Frlg/scripts.pory"
	message gText_HowMayIServeYou
# 25 "data/maps/SaffronCity_Mart_Frlg/scripts.pory"
# 17 "data/maps/SaffronCity_Mart_Frlg/scripts.pory"
# 26 "data/maps/SaffronCity_Mart_Frlg/scripts.pory"
	waitmessage
# 27 "data/maps/SaffronCity_Mart_Frlg/scripts.pory"
# 18 "data/maps/SaffronCity_Mart_Frlg/scripts.pory"
# 28 "data/maps/SaffronCity_Mart_Frlg/scripts.pory"
	pokemart SaffronCity_Mart_Items
# 29 "data/maps/SaffronCity_Mart_Frlg/scripts.pory"
# 19 "data/maps/SaffronCity_Mart_Frlg/scripts.pory"
# 30 "data/maps/SaffronCity_Mart_Frlg/scripts.pory"
	msgbox gText_PleaseComeAgain
# 31 "data/maps/SaffronCity_Mart_Frlg/scripts.pory"
# 20 "data/maps/SaffronCity_Mart_Frlg/scripts.pory"
# 32 "data/maps/SaffronCity_Mart_Frlg/scripts.pory"
	release
# 33 "data/maps/SaffronCity_Mart_Frlg/scripts.pory"
	end
# 34 "data/maps/SaffronCity_Mart_Frlg/scripts.pory"

# 35 "data/maps/SaffronCity_Mart_Frlg/scripts.pory"

# 36 "data/maps/SaffronCity_Mart_Frlg/scripts.pory"
SaffronCity_Mart_Items::
# 37 "data/maps/SaffronCity_Mart_Frlg/scripts.pory"
# 25 "data/maps/SaffronCity_Mart_Frlg/scripts.pory"
# 38 "data/maps/SaffronCity_Mart_Frlg/scripts.pory"
	release
# 39 "data/maps/SaffronCity_Mart_Frlg/scripts.pory"
	end
# 40 "data/maps/SaffronCity_Mart_Frlg/scripts.pory"

# 41 "data/maps/SaffronCity_Mart_Frlg/scripts.pory"

# 42 "data/maps/SaffronCity_Mart_Frlg/scripts.pory"
SaffronCity_Mart_Text_MaxRepelMoreEffectiveThanSuper::
# 43 "data/maps/SaffronCity_Mart_Frlg/scripts.pory"
# 29 "data/maps/SaffronCity_Mart_Frlg/scripts.pory"
# 44 "data/maps/SaffronCity_Mart_Frlg/scripts.pory"
	.string "MAX REPEL keeps weaker POKéMON\n"
# 45 "data/maps/SaffronCity_Mart_Frlg/scripts.pory"
	.string "from appearing.\p"
# 46 "data/maps/SaffronCity_Mart_Frlg/scripts.pory"
	.string "MAX REPEL stays effective longer\n"
# 47 "data/maps/SaffronCity_Mart_Frlg/scripts.pory"
	.string "than SUPER REPEL.$"
# 48 "data/maps/SaffronCity_Mart_Frlg/scripts.pory"

# 49 "data/maps/SaffronCity_Mart_Frlg/scripts.pory"
SaffronCity_Mart_Text_ReviveIsCostly::
# 50 "data/maps/SaffronCity_Mart_Frlg/scripts.pory"
# 36 "data/maps/SaffronCity_Mart_Frlg/scripts.pory"
# 51 "data/maps/SaffronCity_Mart_Frlg/scripts.pory"
	.string "REVIVE is costly, but it revives\n"
# 52 "data/maps/SaffronCity_Mart_Frlg/scripts.pory"
	.string "fainted POKéMON!$"
