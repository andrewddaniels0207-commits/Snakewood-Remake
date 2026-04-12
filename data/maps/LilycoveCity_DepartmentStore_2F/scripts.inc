LilycoveCity_DepartmentStore_2F_MapScripts::
	.byte 0


LilycoveCity_DepartmentStore_2F_EventScript_Cook::
# 4 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_2F_Text_LearnToUseItemsProperly, MSGBOX_NPC
	end


LilycoveCity_DepartmentStore_2F_EventScript_PokefanF::
# 9 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_2F_Text_GoodGiftForHusband, MSGBOX_NPC
	end


LilycoveCity_DepartmentStore_2F_EventScript_Sailor::
# 14 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_2F_Text_StockUpOnItems, MSGBOX_NPC
	end


LilycoveCity_DepartmentStore_2F_EventScript_ClerkLeft::
# 19 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	lock
# 20 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	faceplayer
# 21 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	message gText_HowMayIServeYou
# 22 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	waitmessage
# 23 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	pokemart LilycoveCity_DepartmentStore_2F_Pokemart1
# 24 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 25 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	release
	end


LilycoveCity_DepartmentStore_2F_Pokemart1::
# 30 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	pokemartlistend
	return


LilycoveCity_DepartmentStore_2F_EventScript_ClerkRight::
# 34 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	lock
# 35 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	faceplayer
# 36 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	message gText_HowMayIServeYou
# 37 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	waitmessage
# 38 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	pokemart LilycoveCity_DepartmentStore_2F_Pokemart2
# 39 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 40 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	release
	end


LilycoveCity_DepartmentStore_2F_Pokemart2::
# 45 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	pokemartlistend
	return


LilycoveCity_DepartmentStore_2F_Text_LearnToUseItemsProperly::
# 48 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.string "Learn to use items properly.\n"
	.string "That's basic, really.$"

LilycoveCity_DepartmentStore_2F_Text_GoodGiftForHusband::
# 53 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.string "My husband is waiting at home.\n"
	.string "What would make a good gift for him?$"

LilycoveCity_DepartmentStore_2F_Text_StockUpOnItems::
# 58 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.string "I'm leaving on a long journey soon.\n"
	.string "I need to stock up on items.$"
