DewfordTown_House2_MapScripts::
	.byte 0


DewfordTown_House2_EventScript_Man::
# 4 "data/maps/DewfordTown_House2/scripts.pory"
	lock
# 5 "data/maps/DewfordTown_House2/scripts.pory"
	faceplayer
# 6 "data/maps/DewfordTown_House2/scripts.pory"
	goto_if_set FLAG_RECEIVED_SILK_SCARF, DewfordTown_House2_EventScript_Man_2
DewfordTown_House2_EventScript_Man_1:
# 9 "data/maps/DewfordTown_House2/scripts.pory"
	msgbox DewfordTown_House2_Text_WantYouToHaveSilkScarf, MSGBOX_DEFAULT
# 10 "data/maps/DewfordTown_House2/scripts.pory"
	giveitem ITEM_SILK_SCARF
# 11 "data/maps/DewfordTown_House2/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq DewfordTown_House2_EventScript_Man_5
DewfordTown_House2_EventScript_Man_4:
# 14 "data/maps/DewfordTown_House2/scripts.pory"
	setflag FLAG_RECEIVED_SILK_SCARF
# 15 "data/maps/DewfordTown_House2/scripts.pory"
	release
	end

DewfordTown_House2_EventScript_Man_2:
# 7 "data/maps/DewfordTown_House2/scripts.pory"
	goto DewfordTown_House2_EventScript_ExplainSilkScarf
	goto DewfordTown_House2_EventScript_Man_1

DewfordTown_House2_EventScript_Man_5:
# 12 "data/maps/DewfordTown_House2/scripts.pory"
	goto DewfordTown_House2_EventScript_NoRoomForScarf
	goto DewfordTown_House2_EventScript_Man_4


DewfordTown_House2_EventScript_NoRoomForScarf::
# 20 "data/maps/DewfordTown_House2/scripts.pory"
	msgbox DewfordTown_House2_Text_NoRoom, MSGBOX_DEFAULT
# 21 "data/maps/DewfordTown_House2/scripts.pory"
	release
	end


DewfordTown_House2_EventScript_ExplainSilkScarf::
# 26 "data/maps/DewfordTown_House2/scripts.pory"
	msgbox DewfordTown_House2_Text_ExplainSilkScarf, MSGBOX_DEFAULT
# 27 "data/maps/DewfordTown_House2/scripts.pory"
	release
	end


DewfordTown_House2_EventScript_Boy::
# 32 "data/maps/DewfordTown_House2/scripts.pory"
	msgbox DewfordTown_House2_Text_BrawlySoCool, MSGBOX_NPC
	end


DewfordTown_House2_Text_WantYouToHaveSilkScarf::
# 36 "data/maps/DewfordTown_House2/scripts.pory"
	.string "Gorge your eyes on this!\p"
	.string "It's a SILK SCARF. It's right at the\n"
	.string "cutting edge of fashion, yeah!\p"
	.string "Oh, I can see your eyes twinkling!\n"
	.string "You appreciate my dazzling style!\p"
	.string "Oh, you're a delight!\n"
	.string "Here you go. I want you to have it!$"

DewfordTown_House2_Text_NoRoom::
# 46 "data/maps/DewfordTown_House2/scripts.pory"
	.string "Oh, you don't have room?\p"
	.string "Now, listen tight, this SCARF is a must-\n"
	.string "have! Why, I would sell all my items\l"
	.string "in order to get it!$"

DewfordTown_House2_Text_ExplainSilkScarf::
# 53 "data/maps/DewfordTown_House2/scripts.pory"
	.string "The SILK SCARF raises the power of\n"
	.string "NORMAL-type moves.\p"
	.string "It's a marvelous SCARF that will go\n"
	.string "with almost all POKéMON!$"

DewfordTown_House2_Text_BrawlySoCool::
# 60 "data/maps/DewfordTown_House2/scripts.pory"
	.string "Wow, you bothered to cross the sea\n"
	.string "to visit DEWFORD?\p"
	.string "Did you maybe come here because you\n"
	.string "heard about BRAWLY?\p"
	.string "He's so cool…\n"
	.string "Everyone idolizes him.$"
