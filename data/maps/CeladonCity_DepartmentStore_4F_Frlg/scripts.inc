# 1 "data/maps/CeladonCity_DepartmentStore_4F_Frlg/scripts.pory"

# 2 "data/maps/CeladonCity_DepartmentStore_4F_Frlg/scripts.pory"
CeladonCity_DepartmentStore_4F_Frlg_MapScripts::
# 3 "data/maps/CeladonCity_DepartmentStore_4F_Frlg/scripts.pory"
	.byte 0
# 4 "data/maps/CeladonCity_DepartmentStore_4F_Frlg/scripts.pory"

# 5 "data/maps/CeladonCity_DepartmentStore_4F_Frlg/scripts.pory"

# 6 "data/maps/CeladonCity_DepartmentStore_4F_Frlg/scripts.pory"
CeladonCity_DepartmentStore_4F_EventScript_Man::
# 7 "data/maps/CeladonCity_DepartmentStore_4F_Frlg/scripts.pory"
# 4 "data/maps/CeladonCity_DepartmentStore_4F_Frlg/scripts.pory"
# 8 "data/maps/CeladonCity_DepartmentStore_4F_Frlg/scripts.pory"
	msgbox CeladonCity_DepartmentStore_4F_Text_GettingPokeDollAsPresent, MSGBOX_NPC
# 9 "data/maps/CeladonCity_DepartmentStore_4F_Frlg/scripts.pory"
	end
# 10 "data/maps/CeladonCity_DepartmentStore_4F_Frlg/scripts.pory"

# 11 "data/maps/CeladonCity_DepartmentStore_4F_Frlg/scripts.pory"

# 12 "data/maps/CeladonCity_DepartmentStore_4F_Frlg/scripts.pory"
CeladonCity_DepartmentStore_4F_EventScript_Youngster::
# 13 "data/maps/CeladonCity_DepartmentStore_4F_Frlg/scripts.pory"
# 9 "data/maps/CeladonCity_DepartmentStore_4F_Frlg/scripts.pory"
# 14 "data/maps/CeladonCity_DepartmentStore_4F_Frlg/scripts.pory"
	msgbox CeladonCity_DepartmentStore_4F_Text_CanRunAwayWithPokeDoll, MSGBOX_NPC
# 15 "data/maps/CeladonCity_DepartmentStore_4F_Frlg/scripts.pory"
	end
# 16 "data/maps/CeladonCity_DepartmentStore_4F_Frlg/scripts.pory"

# 17 "data/maps/CeladonCity_DepartmentStore_4F_Frlg/scripts.pory"

# 18 "data/maps/CeladonCity_DepartmentStore_4F_Frlg/scripts.pory"
CeladonCity_DepartmentStore_4F_EventScript_FloorSign::
# 19 "data/maps/CeladonCity_DepartmentStore_4F_Frlg/scripts.pory"
# 14 "data/maps/CeladonCity_DepartmentStore_4F_Frlg/scripts.pory"
# 20 "data/maps/CeladonCity_DepartmentStore_4F_Frlg/scripts.pory"
	msgbox CeladonCity_DepartmentStore_4F_Text_FloorSign, MSGBOX_SIGN
# 21 "data/maps/CeladonCity_DepartmentStore_4F_Frlg/scripts.pory"
	end
# 22 "data/maps/CeladonCity_DepartmentStore_4F_Frlg/scripts.pory"

# 23 "data/maps/CeladonCity_DepartmentStore_4F_Frlg/scripts.pory"

# 24 "data/maps/CeladonCity_DepartmentStore_4F_Frlg/scripts.pory"
CeladonCity_DepartmentStore_4F_EventScript_Clerk::
# 25 "data/maps/CeladonCity_DepartmentStore_4F_Frlg/scripts.pory"
# 19 "data/maps/CeladonCity_DepartmentStore_4F_Frlg/scripts.pory"
# 26 "data/maps/CeladonCity_DepartmentStore_4F_Frlg/scripts.pory"
	lock
# 27 "data/maps/CeladonCity_DepartmentStore_4F_Frlg/scripts.pory"
# 20 "data/maps/CeladonCity_DepartmentStore_4F_Frlg/scripts.pory"
# 28 "data/maps/CeladonCity_DepartmentStore_4F_Frlg/scripts.pory"
	faceplayer
# 29 "data/maps/CeladonCity_DepartmentStore_4F_Frlg/scripts.pory"
# 21 "data/maps/CeladonCity_DepartmentStore_4F_Frlg/scripts.pory"
# 30 "data/maps/CeladonCity_DepartmentStore_4F_Frlg/scripts.pory"
	message gText_HowMayIServeYou
# 31 "data/maps/CeladonCity_DepartmentStore_4F_Frlg/scripts.pory"
# 22 "data/maps/CeladonCity_DepartmentStore_4F_Frlg/scripts.pory"
# 32 "data/maps/CeladonCity_DepartmentStore_4F_Frlg/scripts.pory"
	waitmessage
# 33 "data/maps/CeladonCity_DepartmentStore_4F_Frlg/scripts.pory"
# 23 "data/maps/CeladonCity_DepartmentStore_4F_Frlg/scripts.pory"
# 34 "data/maps/CeladonCity_DepartmentStore_4F_Frlg/scripts.pory"
	pokemart CeladonCity_DepartmentStore_4F_Items
# 35 "data/maps/CeladonCity_DepartmentStore_4F_Frlg/scripts.pory"
# 24 "data/maps/CeladonCity_DepartmentStore_4F_Frlg/scripts.pory"
# 36 "data/maps/CeladonCity_DepartmentStore_4F_Frlg/scripts.pory"
	msgbox gText_PleaseComeAgain
# 37 "data/maps/CeladonCity_DepartmentStore_4F_Frlg/scripts.pory"
# 25 "data/maps/CeladonCity_DepartmentStore_4F_Frlg/scripts.pory"
# 38 "data/maps/CeladonCity_DepartmentStore_4F_Frlg/scripts.pory"
	release
# 39 "data/maps/CeladonCity_DepartmentStore_4F_Frlg/scripts.pory"
	end
# 40 "data/maps/CeladonCity_DepartmentStore_4F_Frlg/scripts.pory"

# 41 "data/maps/CeladonCity_DepartmentStore_4F_Frlg/scripts.pory"

# 42 "data/maps/CeladonCity_DepartmentStore_4F_Frlg/scripts.pory"
CeladonCity_DepartmentStore_4F_Items::
# 43 "data/maps/CeladonCity_DepartmentStore_4F_Frlg/scripts.pory"
# 30 "data/maps/CeladonCity_DepartmentStore_4F_Frlg/scripts.pory"
# 44 "data/maps/CeladonCity_DepartmentStore_4F_Frlg/scripts.pory"
	release
# 45 "data/maps/CeladonCity_DepartmentStore_4F_Frlg/scripts.pory"
	end
# 46 "data/maps/CeladonCity_DepartmentStore_4F_Frlg/scripts.pory"

# 47 "data/maps/CeladonCity_DepartmentStore_4F_Frlg/scripts.pory"

# 48 "data/maps/CeladonCity_DepartmentStore_4F_Frlg/scripts.pory"
CeladonCity_DepartmentStore_4F_Text_GettingPokeDollAsPresent::
# 49 "data/maps/CeladonCity_DepartmentStore_4F_Frlg/scripts.pory"
# 34 "data/maps/CeladonCity_DepartmentStore_4F_Frlg/scripts.pory"
# 50 "data/maps/CeladonCity_DepartmentStore_4F_Frlg/scripts.pory"
	.string "I'm getting a present for my\n"
# 51 "data/maps/CeladonCity_DepartmentStore_4F_Frlg/scripts.pory"
	.string "girlfriend.\p"
# 52 "data/maps/CeladonCity_DepartmentStore_4F_Frlg/scripts.pory"
	.string "I guess a POKé DOLL will be it.\n"
# 53 "data/maps/CeladonCity_DepartmentStore_4F_Frlg/scripts.pory"
	.string "It's the popular thing.$"
# 54 "data/maps/CeladonCity_DepartmentStore_4F_Frlg/scripts.pory"

# 55 "data/maps/CeladonCity_DepartmentStore_4F_Frlg/scripts.pory"
CeladonCity_DepartmentStore_4F_Text_CanRunAwayWithPokeDoll::
# 56 "data/maps/CeladonCity_DepartmentStore_4F_Frlg/scripts.pory"
# 41 "data/maps/CeladonCity_DepartmentStore_4F_Frlg/scripts.pory"
# 57 "data/maps/CeladonCity_DepartmentStore_4F_Frlg/scripts.pory"
	.string "I heard something useful.\p"
# 58 "data/maps/CeladonCity_DepartmentStore_4F_Frlg/scripts.pory"
	.string "If a wild POKéMON appears, you can\n"
# 59 "data/maps/CeladonCity_DepartmentStore_4F_Frlg/scripts.pory"
	.string "distract it with a POKé DOLL.\p"
# 60 "data/maps/CeladonCity_DepartmentStore_4F_Frlg/scripts.pory"
	.string "You can run away while the wild\n"
# 61 "data/maps/CeladonCity_DepartmentStore_4F_Frlg/scripts.pory"
	.string "POKéMON is distracted.$"
# 62 "data/maps/CeladonCity_DepartmentStore_4F_Frlg/scripts.pory"

# 63 "data/maps/CeladonCity_DepartmentStore_4F_Frlg/scripts.pory"
CeladonCity_DepartmentStore_4F_Text_FloorSign::
# 64 "data/maps/CeladonCity_DepartmentStore_4F_Frlg/scripts.pory"
# 49 "data/maps/CeladonCity_DepartmentStore_4F_Frlg/scripts.pory"
# 65 "data/maps/CeladonCity_DepartmentStore_4F_Frlg/scripts.pory"
	.string "Express yourself with gifts!\n"
# 66 "data/maps/CeladonCity_DepartmentStore_4F_Frlg/scripts.pory"
	.string "4F: WISE MAN GIFTS\p"
# 67 "data/maps/CeladonCity_DepartmentStore_4F_Frlg/scripts.pory"
	.string "Evolution Special!\n"
# 68 "data/maps/CeladonCity_DepartmentStore_4F_Frlg/scripts.pory"
	.string "Element STONES on sale now!$"
