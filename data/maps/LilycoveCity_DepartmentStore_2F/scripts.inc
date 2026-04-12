# 1 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"

# 2 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
LilycoveCity_DepartmentStore_2F_MapScripts::
# 3 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.byte 0
# 4 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"

# 5 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"

# 6 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
LilycoveCity_DepartmentStore_2F_EventScript_Cook::
# 7 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
# 4 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
# 8 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_2F_Text_LearnToUseItemsProperly, MSGBOX_NPC
# 9 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	end
# 10 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"

# 11 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"

# 12 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
LilycoveCity_DepartmentStore_2F_EventScript_PokefanF::
# 13 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
# 9 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
# 14 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_2F_Text_GoodGiftForHusband, MSGBOX_NPC
# 15 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	end
# 16 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"

# 17 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"

# 18 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
LilycoveCity_DepartmentStore_2F_EventScript_Sailor::
# 19 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
# 14 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
# 20 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_2F_Text_StockUpOnItems, MSGBOX_NPC
# 21 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	end
# 22 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"

# 23 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"

# 24 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
LilycoveCity_DepartmentStore_2F_EventScript_ClerkLeft::
# 25 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
# 19 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
# 26 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	lock
# 27 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
# 20 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
# 28 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	faceplayer
# 29 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
# 21 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
# 30 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	message gText_HowMayIServeYou
# 31 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
# 22 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
# 32 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	waitmessage
# 33 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
# 23 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
# 34 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	pokemart LilycoveCity_DepartmentStore_2F_Pokemart1
# 35 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
# 24 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
# 36 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 37 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
# 25 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
# 38 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	release
# 39 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	end
# 40 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"

# 41 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"

# 42 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
LilycoveCity_DepartmentStore_2F_Pokemart1::
# 43 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
# 30 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
# 44 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	pokemartlistend
# 45 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	return
# 46 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"

# 47 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"

# 48 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
LilycoveCity_DepartmentStore_2F_EventScript_ClerkRight::
# 49 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
# 34 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
# 50 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	lock
# 51 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
# 35 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
# 52 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	faceplayer
# 53 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
# 36 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
# 54 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	message gText_HowMayIServeYou
# 55 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
# 37 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
# 56 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	waitmessage
# 57 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
# 38 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
# 58 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	pokemart LilycoveCity_DepartmentStore_2F_Pokemart2
# 59 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
# 39 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
# 60 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 61 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
# 40 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
# 62 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	release
# 63 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	end
# 64 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"

# 65 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"

# 66 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
LilycoveCity_DepartmentStore_2F_Pokemart2::
# 67 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
# 45 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
# 68 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	pokemartlistend
# 69 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	return
# 70 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"

# 71 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"

# 72 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
LilycoveCity_DepartmentStore_2F_Text_LearnToUseItemsProperly::
# 73 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
# 48 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
# 74 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.string "Learn to use items properly.\n"
# 75 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.string "That's basic, really.$"
# 76 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"

# 77 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
LilycoveCity_DepartmentStore_2F_Text_GoodGiftForHusband::
# 78 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
# 53 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
# 79 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.string "My husband is waiting at home.\n"
# 80 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.string "What would make a good gift for him?$"
# 81 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"

# 82 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
LilycoveCity_DepartmentStore_2F_Text_StockUpOnItems::
# 83 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
# 58 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
# 84 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.string "I'm leaving on a long journey soon.\n"
# 85 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.string "I need to stock up on items.$"
