# 1 "data/maps/LilycoveCity_House2/scripts.pory"

# 2 "data/maps/LilycoveCity_House2/scripts.pory"
LilycoveCity_House2_MapScripts::
# 3 "data/maps/LilycoveCity_House2/scripts.pory"
	.byte 0
# 4 "data/maps/LilycoveCity_House2/scripts.pory"

# 5 "data/maps/LilycoveCity_House2/scripts.pory"

# 6 "data/maps/LilycoveCity_House2/scripts.pory"
LilycoveCity_House2_EventScript_FatMan::
# 7 "data/maps/LilycoveCity_House2/scripts.pory"
# 4 "data/maps/LilycoveCity_House2/scripts.pory"
# 8 "data/maps/LilycoveCity_House2/scripts.pory"
	lock
# 9 "data/maps/LilycoveCity_House2/scripts.pory"
# 5 "data/maps/LilycoveCity_House2/scripts.pory"
# 10 "data/maps/LilycoveCity_House2/scripts.pory"
	faceplayer
# 11 "data/maps/LilycoveCity_House2/scripts.pory"
# 6 "data/maps/LilycoveCity_House2/scripts.pory"
# 12 "data/maps/LilycoveCity_House2/scripts.pory"
	goto_if_set FLAG_RECEIVED_TM_REST, LilycoveCity_House2_EventScript_FatMan_2
# 13 "data/maps/LilycoveCity_House2/scripts.pory"
LilycoveCity_House2_EventScript_FatMan_1:
# 14 "data/maps/LilycoveCity_House2/scripts.pory"
# 9 "data/maps/LilycoveCity_House2/scripts.pory"
# 15 "data/maps/LilycoveCity_House2/scripts.pory"
	msgbox LilycoveCity_House2_Text_NotAwakeYetHaveThis, MSGBOX_DEFAULT
# 16 "data/maps/LilycoveCity_House2/scripts.pory"
# 10 "data/maps/LilycoveCity_House2/scripts.pory"
# 17 "data/maps/LilycoveCity_House2/scripts.pory"
	giveitem ITEM_TM_REST
# 18 "data/maps/LilycoveCity_House2/scripts.pory"
# 11 "data/maps/LilycoveCity_House2/scripts.pory"
# 19 "data/maps/LilycoveCity_House2/scripts.pory"
	compare VAR_RESULT, FALSE
# 20 "data/maps/LilycoveCity_House2/scripts.pory"
	goto_if_eq LilycoveCity_House2_EventScript_FatMan_5
# 21 "data/maps/LilycoveCity_House2/scripts.pory"
LilycoveCity_House2_EventScript_FatMan_4:
# 22 "data/maps/LilycoveCity_House2/scripts.pory"
# 14 "data/maps/LilycoveCity_House2/scripts.pory"
# 23 "data/maps/LilycoveCity_House2/scripts.pory"
	setflag FLAG_RECEIVED_TM_REST
# 24 "data/maps/LilycoveCity_House2/scripts.pory"
# 15 "data/maps/LilycoveCity_House2/scripts.pory"
# 25 "data/maps/LilycoveCity_House2/scripts.pory"
	msgbox LilycoveCity_House2_Text_SleepIsEssential, MSGBOX_DEFAULT
# 26 "data/maps/LilycoveCity_House2/scripts.pory"
# 16 "data/maps/LilycoveCity_House2/scripts.pory"
# 27 "data/maps/LilycoveCity_House2/scripts.pory"
	release
# 28 "data/maps/LilycoveCity_House2/scripts.pory"
	end
# 29 "data/maps/LilycoveCity_House2/scripts.pory"

# 30 "data/maps/LilycoveCity_House2/scripts.pory"
LilycoveCity_House2_EventScript_FatMan_2:
# 31 "data/maps/LilycoveCity_House2/scripts.pory"
# 7 "data/maps/LilycoveCity_House2/scripts.pory"
# 32 "data/maps/LilycoveCity_House2/scripts.pory"
	goto LilycoveCity_House2_EventScript_ReceivedRest
# 33 "data/maps/LilycoveCity_House2/scripts.pory"
	goto LilycoveCity_House2_EventScript_FatMan_1
# 34 "data/maps/LilycoveCity_House2/scripts.pory"

# 35 "data/maps/LilycoveCity_House2/scripts.pory"
LilycoveCity_House2_EventScript_FatMan_5:
# 36 "data/maps/LilycoveCity_House2/scripts.pory"
# 12 "data/maps/LilycoveCity_House2/scripts.pory"
# 37 "data/maps/LilycoveCity_House2/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
# 38 "data/maps/LilycoveCity_House2/scripts.pory"
	goto LilycoveCity_House2_EventScript_FatMan_4
# 39 "data/maps/LilycoveCity_House2/scripts.pory"

# 40 "data/maps/LilycoveCity_House2/scripts.pory"

# 41 "data/maps/LilycoveCity_House2/scripts.pory"
LilycoveCity_House2_EventScript_ReceivedRest::
# 42 "data/maps/LilycoveCity_House2/scripts.pory"
# 21 "data/maps/LilycoveCity_House2/scripts.pory"
# 43 "data/maps/LilycoveCity_House2/scripts.pory"
	msgbox LilycoveCity_House2_Text_SleepIsEssential, MSGBOX_DEFAULT
# 44 "data/maps/LilycoveCity_House2/scripts.pory"
# 22 "data/maps/LilycoveCity_House2/scripts.pory"
# 45 "data/maps/LilycoveCity_House2/scripts.pory"
	release
# 46 "data/maps/LilycoveCity_House2/scripts.pory"
	end
# 47 "data/maps/LilycoveCity_House2/scripts.pory"

# 48 "data/maps/LilycoveCity_House2/scripts.pory"

# 49 "data/maps/LilycoveCity_House2/scripts.pory"
LilycoveCity_House2_Text_NotAwakeYetHaveThis::
# 50 "data/maps/LilycoveCity_House2/scripts.pory"
# 26 "data/maps/LilycoveCity_House2/scripts.pory"
# 51 "data/maps/LilycoveCity_House2/scripts.pory"
	.string "Huh? What? What's that?\p"
# 52 "data/maps/LilycoveCity_House2/scripts.pory"
	.string "I'm not near awake yet…\n"
# 53 "data/maps/LilycoveCity_House2/scripts.pory"
	.string "You can have this…$"
# 54 "data/maps/LilycoveCity_House2/scripts.pory"

# 55 "data/maps/LilycoveCity_House2/scripts.pory"
LilycoveCity_House2_Text_SleepIsEssential::
# 56 "data/maps/LilycoveCity_House2/scripts.pory"
# 32 "data/maps/LilycoveCity_House2/scripts.pory"
# 57 "data/maps/LilycoveCity_House2/scripts.pory"
	.string "Yawn…\p"
# 58 "data/maps/LilycoveCity_House2/scripts.pory"
	.string "Sleep is essential for good health…\n"
# 59 "data/maps/LilycoveCity_House2/scripts.pory"
	.string "Sleep and regain health…$"
