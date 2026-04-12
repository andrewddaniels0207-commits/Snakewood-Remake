# 1 "data/maps/DewfordTown_House2/scripts.pory"

# 2 "data/maps/DewfordTown_House2/scripts.pory"
DewfordTown_House2_MapScripts::
# 3 "data/maps/DewfordTown_House2/scripts.pory"
	.byte 0
# 4 "data/maps/DewfordTown_House2/scripts.pory"

# 5 "data/maps/DewfordTown_House2/scripts.pory"

# 6 "data/maps/DewfordTown_House2/scripts.pory"
DewfordTown_House2_EventScript_Man::
# 7 "data/maps/DewfordTown_House2/scripts.pory"
# 4 "data/maps/DewfordTown_House2/scripts.pory"
# 8 "data/maps/DewfordTown_House2/scripts.pory"
	lock
# 9 "data/maps/DewfordTown_House2/scripts.pory"
# 5 "data/maps/DewfordTown_House2/scripts.pory"
# 10 "data/maps/DewfordTown_House2/scripts.pory"
	faceplayer
# 11 "data/maps/DewfordTown_House2/scripts.pory"
# 6 "data/maps/DewfordTown_House2/scripts.pory"
# 12 "data/maps/DewfordTown_House2/scripts.pory"
	goto_if_set FLAG_RECEIVED_SILK_SCARF, DewfordTown_House2_EventScript_Man_2
# 13 "data/maps/DewfordTown_House2/scripts.pory"
DewfordTown_House2_EventScript_Man_1:
# 14 "data/maps/DewfordTown_House2/scripts.pory"
# 9 "data/maps/DewfordTown_House2/scripts.pory"
# 15 "data/maps/DewfordTown_House2/scripts.pory"
	msgbox DewfordTown_House2_Text_WantYouToHaveSilkScarf, MSGBOX_DEFAULT
# 16 "data/maps/DewfordTown_House2/scripts.pory"
# 10 "data/maps/DewfordTown_House2/scripts.pory"
# 17 "data/maps/DewfordTown_House2/scripts.pory"
	giveitem ITEM_SILK_SCARF
# 18 "data/maps/DewfordTown_House2/scripts.pory"
# 11 "data/maps/DewfordTown_House2/scripts.pory"
# 19 "data/maps/DewfordTown_House2/scripts.pory"
	compare VAR_RESULT, FALSE
# 20 "data/maps/DewfordTown_House2/scripts.pory"
	goto_if_eq DewfordTown_House2_EventScript_Man_5
# 21 "data/maps/DewfordTown_House2/scripts.pory"
DewfordTown_House2_EventScript_Man_4:
# 22 "data/maps/DewfordTown_House2/scripts.pory"
# 14 "data/maps/DewfordTown_House2/scripts.pory"
# 23 "data/maps/DewfordTown_House2/scripts.pory"
	setflag FLAG_RECEIVED_SILK_SCARF
# 24 "data/maps/DewfordTown_House2/scripts.pory"
# 15 "data/maps/DewfordTown_House2/scripts.pory"
# 25 "data/maps/DewfordTown_House2/scripts.pory"
	release
# 26 "data/maps/DewfordTown_House2/scripts.pory"
	end
# 27 "data/maps/DewfordTown_House2/scripts.pory"

# 28 "data/maps/DewfordTown_House2/scripts.pory"
DewfordTown_House2_EventScript_Man_2:
# 29 "data/maps/DewfordTown_House2/scripts.pory"
# 7 "data/maps/DewfordTown_House2/scripts.pory"
# 30 "data/maps/DewfordTown_House2/scripts.pory"
	goto DewfordTown_House2_EventScript_ExplainSilkScarf
# 31 "data/maps/DewfordTown_House2/scripts.pory"
	goto DewfordTown_House2_EventScript_Man_1
# 32 "data/maps/DewfordTown_House2/scripts.pory"

# 33 "data/maps/DewfordTown_House2/scripts.pory"
DewfordTown_House2_EventScript_Man_5:
# 34 "data/maps/DewfordTown_House2/scripts.pory"
# 12 "data/maps/DewfordTown_House2/scripts.pory"
# 35 "data/maps/DewfordTown_House2/scripts.pory"
	goto DewfordTown_House2_EventScript_NoRoomForScarf
# 36 "data/maps/DewfordTown_House2/scripts.pory"
	goto DewfordTown_House2_EventScript_Man_4
# 37 "data/maps/DewfordTown_House2/scripts.pory"

# 38 "data/maps/DewfordTown_House2/scripts.pory"

# 39 "data/maps/DewfordTown_House2/scripts.pory"
DewfordTown_House2_EventScript_NoRoomForScarf::
# 40 "data/maps/DewfordTown_House2/scripts.pory"
# 20 "data/maps/DewfordTown_House2/scripts.pory"
# 41 "data/maps/DewfordTown_House2/scripts.pory"
	msgbox DewfordTown_House2_Text_NoRoom, MSGBOX_DEFAULT
# 42 "data/maps/DewfordTown_House2/scripts.pory"
# 21 "data/maps/DewfordTown_House2/scripts.pory"
# 43 "data/maps/DewfordTown_House2/scripts.pory"
	release
# 44 "data/maps/DewfordTown_House2/scripts.pory"
	end
# 45 "data/maps/DewfordTown_House2/scripts.pory"

# 46 "data/maps/DewfordTown_House2/scripts.pory"

# 47 "data/maps/DewfordTown_House2/scripts.pory"
DewfordTown_House2_EventScript_ExplainSilkScarf::
# 48 "data/maps/DewfordTown_House2/scripts.pory"
# 26 "data/maps/DewfordTown_House2/scripts.pory"
# 49 "data/maps/DewfordTown_House2/scripts.pory"
	msgbox DewfordTown_House2_Text_ExplainSilkScarf, MSGBOX_DEFAULT
# 50 "data/maps/DewfordTown_House2/scripts.pory"
# 27 "data/maps/DewfordTown_House2/scripts.pory"
# 51 "data/maps/DewfordTown_House2/scripts.pory"
	release
# 52 "data/maps/DewfordTown_House2/scripts.pory"
	end
# 53 "data/maps/DewfordTown_House2/scripts.pory"

# 54 "data/maps/DewfordTown_House2/scripts.pory"

# 55 "data/maps/DewfordTown_House2/scripts.pory"
DewfordTown_House2_EventScript_Boy::
# 56 "data/maps/DewfordTown_House2/scripts.pory"
# 32 "data/maps/DewfordTown_House2/scripts.pory"
# 57 "data/maps/DewfordTown_House2/scripts.pory"
	msgbox DewfordTown_House2_Text_BrawlySoCool, MSGBOX_NPC
# 58 "data/maps/DewfordTown_House2/scripts.pory"
	end
# 59 "data/maps/DewfordTown_House2/scripts.pory"

# 60 "data/maps/DewfordTown_House2/scripts.pory"

# 61 "data/maps/DewfordTown_House2/scripts.pory"
DewfordTown_House2_Text_WantYouToHaveSilkScarf::
# 62 "data/maps/DewfordTown_House2/scripts.pory"
# 36 "data/maps/DewfordTown_House2/scripts.pory"
# 63 "data/maps/DewfordTown_House2/scripts.pory"
	.string "Gorge your eyes on this!\p"
# 64 "data/maps/DewfordTown_House2/scripts.pory"
	.string "It's a SILK SCARF. It's right at the\n"
# 65 "data/maps/DewfordTown_House2/scripts.pory"
	.string "cutting edge of fashion, yeah!\p"
# 66 "data/maps/DewfordTown_House2/scripts.pory"
	.string "Oh, I can see your eyes twinkling!\n"
# 67 "data/maps/DewfordTown_House2/scripts.pory"
	.string "You appreciate my dazzling style!\p"
# 68 "data/maps/DewfordTown_House2/scripts.pory"
	.string "Oh, you're a delight!\n"
# 69 "data/maps/DewfordTown_House2/scripts.pory"
	.string "Here you go. I want you to have it!$"
# 70 "data/maps/DewfordTown_House2/scripts.pory"

# 71 "data/maps/DewfordTown_House2/scripts.pory"
DewfordTown_House2_Text_NoRoom::
# 72 "data/maps/DewfordTown_House2/scripts.pory"
# 46 "data/maps/DewfordTown_House2/scripts.pory"
# 73 "data/maps/DewfordTown_House2/scripts.pory"
	.string "Oh, you don't have room?\p"
# 74 "data/maps/DewfordTown_House2/scripts.pory"
	.string "Now, listen tight, this SCARF is a must-\n"
# 75 "data/maps/DewfordTown_House2/scripts.pory"
	.string "have! Why, I would sell all my items\l"
# 76 "data/maps/DewfordTown_House2/scripts.pory"
	.string "in order to get it!$"
# 77 "data/maps/DewfordTown_House2/scripts.pory"

# 78 "data/maps/DewfordTown_House2/scripts.pory"
DewfordTown_House2_Text_ExplainSilkScarf::
# 79 "data/maps/DewfordTown_House2/scripts.pory"
# 53 "data/maps/DewfordTown_House2/scripts.pory"
# 80 "data/maps/DewfordTown_House2/scripts.pory"
	.string "The SILK SCARF raises the power of\n"
# 81 "data/maps/DewfordTown_House2/scripts.pory"
	.string "NORMAL-type moves.\p"
# 82 "data/maps/DewfordTown_House2/scripts.pory"
	.string "It's a marvelous SCARF that will go\n"
# 83 "data/maps/DewfordTown_House2/scripts.pory"
	.string "with almost all POKéMON!$"
# 84 "data/maps/DewfordTown_House2/scripts.pory"

# 85 "data/maps/DewfordTown_House2/scripts.pory"
DewfordTown_House2_Text_BrawlySoCool::
# 86 "data/maps/DewfordTown_House2/scripts.pory"
# 60 "data/maps/DewfordTown_House2/scripts.pory"
# 87 "data/maps/DewfordTown_House2/scripts.pory"
	.string "Wow, you bothered to cross the sea\n"
# 88 "data/maps/DewfordTown_House2/scripts.pory"
	.string "to visit DEWFORD?\p"
# 89 "data/maps/DewfordTown_House2/scripts.pory"
	.string "Did you maybe come here because you\n"
# 90 "data/maps/DewfordTown_House2/scripts.pory"
	.string "heard about BRAWLY?\p"
# 91 "data/maps/DewfordTown_House2/scripts.pory"
	.string "He's so cool…\n"
# 92 "data/maps/DewfordTown_House2/scripts.pory"
	.string "Everyone idolizes him.$"
