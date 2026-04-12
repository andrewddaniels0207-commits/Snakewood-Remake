# 1 "data/maps/PacifidlogTown_House5/scripts.pory"

# 2 "data/maps/PacifidlogTown_House5/scripts.pory"
PacifidlogTown_House5_MapScripts::
# 3 "data/maps/PacifidlogTown_House5/scripts.pory"
	.byte 0
# 4 "data/maps/PacifidlogTown_House5/scripts.pory"

# 5 "data/maps/PacifidlogTown_House5/scripts.pory"

# 6 "data/maps/PacifidlogTown_House5/scripts.pory"
PacifidlogTown_House5_EventScript_MirageIslandWatcher::
# 7 "data/maps/PacifidlogTown_House5/scripts.pory"
# 4 "data/maps/PacifidlogTown_House5/scripts.pory"
# 8 "data/maps/PacifidlogTown_House5/scripts.pory"
	lock
# 9 "data/maps/PacifidlogTown_House5/scripts.pory"
# 5 "data/maps/PacifidlogTown_House5/scripts.pory"
# 10 "data/maps/PacifidlogTown_House5/scripts.pory"
	faceplayer
# 11 "data/maps/PacifidlogTown_House5/scripts.pory"
# 6 "data/maps/PacifidlogTown_House5/scripts.pory"
# 12 "data/maps/PacifidlogTown_House5/scripts.pory"
	specialvar VAR_RESULT, IsMirageIslandPresent
# 13 "data/maps/PacifidlogTown_House5/scripts.pory"
# 7 "data/maps/PacifidlogTown_House5/scripts.pory"
# 14 "data/maps/PacifidlogTown_House5/scripts.pory"
	compare VAR_RESULT, TRUE
# 15 "data/maps/PacifidlogTown_House5/scripts.pory"
	goto_if_eq PacifidlogTown_House5_EventScript_MirageIslandWatcher_2
# 16 "data/maps/PacifidlogTown_House5/scripts.pory"
PacifidlogTown_House5_EventScript_MirageIslandWatcher_1:
# 17 "data/maps/PacifidlogTown_House5/scripts.pory"
# 10 "data/maps/PacifidlogTown_House5/scripts.pory"
# 18 "data/maps/PacifidlogTown_House5/scripts.pory"
	msgbox PacifidlogTown_House5_Text_CantSeeMirageIslandToday, MSGBOX_DEFAULT
# 19 "data/maps/PacifidlogTown_House5/scripts.pory"
# 11 "data/maps/PacifidlogTown_House5/scripts.pory"
# 20 "data/maps/PacifidlogTown_House5/scripts.pory"
	release
# 21 "data/maps/PacifidlogTown_House5/scripts.pory"
	end
# 22 "data/maps/PacifidlogTown_House5/scripts.pory"

# 23 "data/maps/PacifidlogTown_House5/scripts.pory"
PacifidlogTown_House5_EventScript_MirageIslandWatcher_2:
# 24 "data/maps/PacifidlogTown_House5/scripts.pory"
# 8 "data/maps/PacifidlogTown_House5/scripts.pory"
# 25 "data/maps/PacifidlogTown_House5/scripts.pory"
	goto PacifidlogTown_House5_EventScript_MirageIslandPresent
# 26 "data/maps/PacifidlogTown_House5/scripts.pory"
	goto PacifidlogTown_House5_EventScript_MirageIslandWatcher_1
# 27 "data/maps/PacifidlogTown_House5/scripts.pory"

# 28 "data/maps/PacifidlogTown_House5/scripts.pory"

# 29 "data/maps/PacifidlogTown_House5/scripts.pory"
PacifidlogTown_House5_EventScript_MirageIslandPresent::
# 30 "data/maps/PacifidlogTown_House5/scripts.pory"
# 16 "data/maps/PacifidlogTown_House5/scripts.pory"
# 31 "data/maps/PacifidlogTown_House5/scripts.pory"
	msgbox PacifidlogTown_House5_Text_CanSeeMirageIslandToday, MSGBOX_DEFAULT
# 32 "data/maps/PacifidlogTown_House5/scripts.pory"
# 17 "data/maps/PacifidlogTown_House5/scripts.pory"
# 33 "data/maps/PacifidlogTown_House5/scripts.pory"
	release
# 34 "data/maps/PacifidlogTown_House5/scripts.pory"
	end
# 35 "data/maps/PacifidlogTown_House5/scripts.pory"

# 36 "data/maps/PacifidlogTown_House5/scripts.pory"

# 37 "data/maps/PacifidlogTown_House5/scripts.pory"
PacifidlogTown_House5_EventScript_Gentleman::
# 38 "data/maps/PacifidlogTown_House5/scripts.pory"
# 22 "data/maps/PacifidlogTown_House5/scripts.pory"
# 39 "data/maps/PacifidlogTown_House5/scripts.pory"
	msgbox PacifidlogTown_House5_Text_MirageIslandAppearDependingOnWeather, MSGBOX_NPC
# 40 "data/maps/PacifidlogTown_House5/scripts.pory"
	end
# 41 "data/maps/PacifidlogTown_House5/scripts.pory"

# 42 "data/maps/PacifidlogTown_House5/scripts.pory"

# 43 "data/maps/PacifidlogTown_House5/scripts.pory"
PacifidlogTown_House5_Text_CantSeeMirageIslandToday::
# 44 "data/maps/PacifidlogTown_House5/scripts.pory"
# 26 "data/maps/PacifidlogTown_House5/scripts.pory"
# 45 "data/maps/PacifidlogTown_House5/scripts.pory"
	.string "I can't see MIRAGE ISLAND today…$"
# 46 "data/maps/PacifidlogTown_House5/scripts.pory"

# 47 "data/maps/PacifidlogTown_House5/scripts.pory"
PacifidlogTown_House5_Text_CanSeeMirageIslandToday::
# 48 "data/maps/PacifidlogTown_House5/scripts.pory"
# 30 "data/maps/PacifidlogTown_House5/scripts.pory"
# 49 "data/maps/PacifidlogTown_House5/scripts.pory"
	.string "Oh! Oh my!\n"
# 50 "data/maps/PacifidlogTown_House5/scripts.pory"
	.string "I can see MIRAGE ISLAND today!$"
# 51 "data/maps/PacifidlogTown_House5/scripts.pory"

# 52 "data/maps/PacifidlogTown_House5/scripts.pory"
PacifidlogTown_House5_Text_MirageIslandAppearDependingOnWeather::
# 53 "data/maps/PacifidlogTown_House5/scripts.pory"
# 35 "data/maps/PacifidlogTown_House5/scripts.pory"
# 54 "data/maps/PacifidlogTown_House5/scripts.pory"
	.string "MIRAGE ISLAND…\p"
# 55 "data/maps/PacifidlogTown_House5/scripts.pory"
	.string "It must become visible and invisible\n"
# 56 "data/maps/PacifidlogTown_House5/scripts.pory"
	.string "depending on the weather conditions\l"
# 57 "data/maps/PacifidlogTown_House5/scripts.pory"
	.string "that make mirages appear.\p"
# 58 "data/maps/PacifidlogTown_House5/scripts.pory"
	.string "Or is it really appearing and\n"
# 59 "data/maps/PacifidlogTown_House5/scripts.pory"
	.string "disappearing?$"
