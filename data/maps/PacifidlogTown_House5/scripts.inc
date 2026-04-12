PacifidlogTown_House5_MapScripts::
	.byte 0


PacifidlogTown_House5_EventScript_MirageIslandWatcher::
# 4 "data/maps/PacifidlogTown_House5/scripts.pory"
	lock
# 5 "data/maps/PacifidlogTown_House5/scripts.pory"
	faceplayer
# 6 "data/maps/PacifidlogTown_House5/scripts.pory"
	specialvar VAR_RESULT, IsMirageIslandPresent
# 7 "data/maps/PacifidlogTown_House5/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq PacifidlogTown_House5_EventScript_MirageIslandWatcher_2
PacifidlogTown_House5_EventScript_MirageIslandWatcher_1:
# 10 "data/maps/PacifidlogTown_House5/scripts.pory"
	msgbox PacifidlogTown_House5_Text_CantSeeMirageIslandToday, MSGBOX_DEFAULT
# 11 "data/maps/PacifidlogTown_House5/scripts.pory"
	release
	end

PacifidlogTown_House5_EventScript_MirageIslandWatcher_2:
# 8 "data/maps/PacifidlogTown_House5/scripts.pory"
	goto PacifidlogTown_House5_EventScript_MirageIslandPresent
	goto PacifidlogTown_House5_EventScript_MirageIslandWatcher_1


PacifidlogTown_House5_EventScript_MirageIslandPresent::
# 16 "data/maps/PacifidlogTown_House5/scripts.pory"
	msgbox PacifidlogTown_House5_Text_CanSeeMirageIslandToday, MSGBOX_DEFAULT
# 17 "data/maps/PacifidlogTown_House5/scripts.pory"
	release
	end


PacifidlogTown_House5_EventScript_Gentleman::
# 22 "data/maps/PacifidlogTown_House5/scripts.pory"
	msgbox PacifidlogTown_House5_Text_MirageIslandAppearDependingOnWeather, MSGBOX_NPC
	end


PacifidlogTown_House5_Text_CantSeeMirageIslandToday::
# 26 "data/maps/PacifidlogTown_House5/scripts.pory"
	.string "I can't see MIRAGE ISLAND today…$"

PacifidlogTown_House5_Text_CanSeeMirageIslandToday::
# 30 "data/maps/PacifidlogTown_House5/scripts.pory"
	.string "Oh! Oh my!\n"
	.string "I can see MIRAGE ISLAND today!$"

PacifidlogTown_House5_Text_MirageIslandAppearDependingOnWeather::
# 35 "data/maps/PacifidlogTown_House5/scripts.pory"
	.string "MIRAGE ISLAND…\p"
	.string "It must become visible and invisible\n"
	.string "depending on the weather conditions\l"
	.string "that make mirages appear.\p"
	.string "Or is it really appearing and\n"
	.string "disappearing?$"
