# 1 "data/maps/GraniteCave_1F/scripts.pory"

# 2 "data/maps/GraniteCave_1F/scripts.pory"
GraniteCave_1F_MapScripts::
# 3 "data/maps/GraniteCave_1F/scripts.pory"
	.byte 0
# 4 "data/maps/GraniteCave_1F/scripts.pory"

# 5 "data/maps/GraniteCave_1F/scripts.pory"

# 6 "data/maps/GraniteCave_1F/scripts.pory"
GraniteCave_1F_EventScript_Hiker::
# 7 "data/maps/GraniteCave_1F/scripts.pory"
# 4 "data/maps/GraniteCave_1F/scripts.pory"
# 8 "data/maps/GraniteCave_1F/scripts.pory"
	lock
# 9 "data/maps/GraniteCave_1F/scripts.pory"
# 5 "data/maps/GraniteCave_1F/scripts.pory"
# 10 "data/maps/GraniteCave_1F/scripts.pory"
	faceplayer
# 11 "data/maps/GraniteCave_1F/scripts.pory"
# 6 "data/maps/GraniteCave_1F/scripts.pory"
# 12 "data/maps/GraniteCave_1F/scripts.pory"
	goto_if_set FLAG_RECEIVED_HM_FLASH, GraniteCave_1F_EventScript_Hiker_2
# 13 "data/maps/GraniteCave_1F/scripts.pory"
GraniteCave_1F_EventScript_Hiker_1:
# 14 "data/maps/GraniteCave_1F/scripts.pory"
# 9 "data/maps/GraniteCave_1F/scripts.pory"
# 15 "data/maps/GraniteCave_1F/scripts.pory"
	msgbox GraniteCave_1F_Text_GetsDarkAheadHereYouGo, MSGBOX_DEFAULT
# 16 "data/maps/GraniteCave_1F/scripts.pory"
# 10 "data/maps/GraniteCave_1F/scripts.pory"
# 17 "data/maps/GraniteCave_1F/scripts.pory"
	giveitem ITEM_HM_FLASH
# 18 "data/maps/GraniteCave_1F/scripts.pory"
# 11 "data/maps/GraniteCave_1F/scripts.pory"
# 19 "data/maps/GraniteCave_1F/scripts.pory"
	setflag FLAG_RECEIVED_HM_FLASH
# 20 "data/maps/GraniteCave_1F/scripts.pory"
# 12 "data/maps/GraniteCave_1F/scripts.pory"
# 21 "data/maps/GraniteCave_1F/scripts.pory"
	msgbox GraniteCave_1F_Text_ExplainFlash, MSGBOX_DEFAULT
# 22 "data/maps/GraniteCave_1F/scripts.pory"
# 13 "data/maps/GraniteCave_1F/scripts.pory"
# 23 "data/maps/GraniteCave_1F/scripts.pory"
	release
# 24 "data/maps/GraniteCave_1F/scripts.pory"
	end
# 25 "data/maps/GraniteCave_1F/scripts.pory"

# 26 "data/maps/GraniteCave_1F/scripts.pory"
GraniteCave_1F_EventScript_Hiker_2:
# 27 "data/maps/GraniteCave_1F/scripts.pory"
# 7 "data/maps/GraniteCave_1F/scripts.pory"
# 28 "data/maps/GraniteCave_1F/scripts.pory"
	goto GraniteCave_1F_EventScript_ReceivedFlash
# 29 "data/maps/GraniteCave_1F/scripts.pory"
	goto GraniteCave_1F_EventScript_Hiker_1
# 30 "data/maps/GraniteCave_1F/scripts.pory"

# 31 "data/maps/GraniteCave_1F/scripts.pory"

# 32 "data/maps/GraniteCave_1F/scripts.pory"
GraniteCave_1F_EventScript_ReceivedFlash::
# 33 "data/maps/GraniteCave_1F/scripts.pory"
# 18 "data/maps/GraniteCave_1F/scripts.pory"
# 34 "data/maps/GraniteCave_1F/scripts.pory"
	msgbox GraniteCave_1F_Text_ExplainFlash, MSGBOX_DEFAULT
# 35 "data/maps/GraniteCave_1F/scripts.pory"
# 19 "data/maps/GraniteCave_1F/scripts.pory"
# 36 "data/maps/GraniteCave_1F/scripts.pory"
	release
# 37 "data/maps/GraniteCave_1F/scripts.pory"
	end
# 38 "data/maps/GraniteCave_1F/scripts.pory"

# 39 "data/maps/GraniteCave_1F/scripts.pory"

# 40 "data/maps/GraniteCave_1F/scripts.pory"
GraniteCave_1F_Text_GetsDarkAheadHereYouGo::
# 41 "data/maps/GraniteCave_1F/scripts.pory"
# 23 "data/maps/GraniteCave_1F/scripts.pory"
# 42 "data/maps/GraniteCave_1F/scripts.pory"
	.string "Hey, you.\n"
# 43 "data/maps/GraniteCave_1F/scripts.pory"
	.string "It gets awfully dark ahead.\l"
# 44 "data/maps/GraniteCave_1F/scripts.pory"
	.string "It'll be tough trying to explore.\p"
# 45 "data/maps/GraniteCave_1F/scripts.pory"
	.string "That guy who came by earlier…\n"
# 46 "data/maps/GraniteCave_1F/scripts.pory"
	.string "STEVEN, I think it was.\p"
# 47 "data/maps/GraniteCave_1F/scripts.pory"
	.string "He knew how to use FLASH, so he ought\n"
# 48 "data/maps/GraniteCave_1F/scripts.pory"
	.string "to be all right, but…\p"
# 49 "data/maps/GraniteCave_1F/scripts.pory"
	.string "Well, for us HIKERS, helping out those\n"
# 50 "data/maps/GraniteCave_1F/scripts.pory"
	.string "that we meet is our motto.\p"
# 51 "data/maps/GraniteCave_1F/scripts.pory"
	.string "Here you go, I'll pass this on to you.$"
# 52 "data/maps/GraniteCave_1F/scripts.pory"

# 53 "data/maps/GraniteCave_1F/scripts.pory"
GraniteCave_1F_Text_ExplainFlash::
# 54 "data/maps/GraniteCave_1F/scripts.pory"
# 36 "data/maps/GraniteCave_1F/scripts.pory"
# 55 "data/maps/GraniteCave_1F/scripts.pory"
	.string "Teach that hidden move FLASH to\n"
# 56 "data/maps/GraniteCave_1F/scripts.pory"
	.string "a POKéMON and use it.\p"
# 57 "data/maps/GraniteCave_1F/scripts.pory"
	.string "It lights up even the inky darkness\n"
# 58 "data/maps/GraniteCave_1F/scripts.pory"
	.string "of caves.\p"
# 59 "data/maps/GraniteCave_1F/scripts.pory"
	.string "But, to use it, you need the GYM BADGE\n"
# 60 "data/maps/GraniteCave_1F/scripts.pory"
	.string "from DEWFORD's POKéMON GYM.$"
