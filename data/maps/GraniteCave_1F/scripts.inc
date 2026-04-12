GraniteCave_1F_MapScripts::
	.byte 0


GraniteCave_1F_EventScript_Hiker::
# 4 "data/maps/GraniteCave_1F/scripts.pory"
	lock
# 5 "data/maps/GraniteCave_1F/scripts.pory"
	faceplayer
# 6 "data/maps/GraniteCave_1F/scripts.pory"
	goto_if_set FLAG_RECEIVED_HM_FLASH, GraniteCave_1F_EventScript_Hiker_2
GraniteCave_1F_EventScript_Hiker_1:
# 9 "data/maps/GraniteCave_1F/scripts.pory"
	msgbox GraniteCave_1F_Text_GetsDarkAheadHereYouGo, MSGBOX_DEFAULT
# 10 "data/maps/GraniteCave_1F/scripts.pory"
	giveitem ITEM_HM_FLASH
# 11 "data/maps/GraniteCave_1F/scripts.pory"
	setflag FLAG_RECEIVED_HM_FLASH
# 12 "data/maps/GraniteCave_1F/scripts.pory"
	msgbox GraniteCave_1F_Text_ExplainFlash, MSGBOX_DEFAULT
# 13 "data/maps/GraniteCave_1F/scripts.pory"
	release
	end

GraniteCave_1F_EventScript_Hiker_2:
# 7 "data/maps/GraniteCave_1F/scripts.pory"
	goto GraniteCave_1F_EventScript_ReceivedFlash
	goto GraniteCave_1F_EventScript_Hiker_1


GraniteCave_1F_EventScript_ReceivedFlash::
# 18 "data/maps/GraniteCave_1F/scripts.pory"
	msgbox GraniteCave_1F_Text_ExplainFlash, MSGBOX_DEFAULT
# 19 "data/maps/GraniteCave_1F/scripts.pory"
	release
	end


GraniteCave_1F_Text_GetsDarkAheadHereYouGo::
# 23 "data/maps/GraniteCave_1F/scripts.pory"
	.string "Hey, you.\n"
	.string "It gets awfully dark ahead.\l"
	.string "It'll be tough trying to explore.\p"
	.string "That guy who came by earlier…\n"
	.string "STEVEN, I think it was.\p"
	.string "He knew how to use FLASH, so he ought\n"
	.string "to be all right, but…\p"
	.string "Well, for us HIKERS, helping out those\n"
	.string "that we meet is our motto.\p"
	.string "Here you go, I'll pass this on to you.$"

GraniteCave_1F_Text_ExplainFlash::
# 36 "data/maps/GraniteCave_1F/scripts.pory"
	.string "Teach that hidden move FLASH to\n"
	.string "a POKéMON and use it.\p"
	.string "It lights up even the inky darkness\n"
	.string "of caves.\p"
	.string "But, to use it, you need the GYM BADGE\n"
	.string "from DEWFORD's POKéMON GYM.$"
