Route114_FossilManiacsTunnel_MapScripts::
# 2 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route114_FossilManiacsTunnel_OnTransition
# 3 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route114_FossilManiacsTunnel_OnLoad
	.byte 0


Route114_FossilManiacsTunnel_OnTransition::
# 7 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, Route114_FossilManiacsTunnel_OnTransition_2
Route114_FossilManiacsTunnel_OnTransition_1:
	end

Route114_FossilManiacsTunnel_OnTransition_2:
# 8 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	call Route114_FossilManiacsTunnel_EventScript_MoveFossilManiac
	goto Route114_FossilManiacsTunnel_OnTransition_1


Route114_FossilManiacsTunnel_EventScript_MoveFossilManiac::
# 14 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	setobjectxyperm LOCALID_FOSSIL_MANIAC, 6, 5
# 15 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	setobjectmovementtype LOCALID_FOSSIL_MANIAC, MOVEMENT_TYPE_FACE_DOWN
	return


Route114_FossilManiacsTunnel_OnLoad::
# 20 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	goto_if_unset FLAG_SYS_GAME_CLEAR, Route114_FossilManiacsTunnel_OnLoad_2
Route114_FossilManiacsTunnel_OnLoad_1:
	end

Route114_FossilManiacsTunnel_OnLoad_2:
# 21 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	call Route114_FossilManiacsTunnel_EventScript_CloseDesertUnderpass
	goto Route114_FossilManiacsTunnel_OnLoad_1


Route114_FossilManiacsTunnel_EventScript_CloseDesertUnderpass::
# 27 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	setmetatile 6, 1, METATILE_Fallarbor_RedRockWall, TRUE
# 28 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	setmetatile 6, 2, METATILE_Fallarbor_RedRockWall, TRUE
	return


Route114_FossilManiacsTunnel_EventScript_ManiacMentionCaveIn::
# 33 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	lockall
# 34 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	applymovement LOCALID_FOSSIL_MANIAC, Common_Movement_WalkInPlaceFasterUp
# 35 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 36 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	waitmovement 0
# 37 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	msgbox Route114_FossilManiacsTunnel_Text_NotSafeThatWay, MSGBOX_DEFAULT
# 38 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	setvar VAR_FOSSIL_MANIAC_STATE, 2
# 39 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	releaseall
	end


Route114_FossilManiacsTunnel_EventScript_FossilManiac::
# 44 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	lock
# 45 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	faceplayer
# 46 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	goto_if_set FLAG_RECEIVED_REVIVED_FOSSIL_MON, Route114_FossilManiacsTunnel_EventScript_FossilManiac_2
Route114_FossilManiacsTunnel_EventScript_FossilManiac_1:
# 49 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	checkitem ITEM_ROOT_FOSSIL
# 50 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route114_FossilManiacsTunnel_EventScript_FossilManiac_5
Route114_FossilManiacsTunnel_EventScript_FossilManiac_4:
# 53 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	checkitem ITEM_CLAW_FOSSIL
# 54 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route114_FossilManiacsTunnel_EventScript_FossilManiac_8
Route114_FossilManiacsTunnel_EventScript_FossilManiac_7:
# 57 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	msgbox Route114_FossilManiacsTunnel_Text_LookInDesertForFossils, MSGBOX_DEFAULT
# 58 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	release
	end

Route114_FossilManiacsTunnel_EventScript_FossilManiac_2:
# 47 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	goto Route114_FossilManiacsTunnel_EventScript_PlayerRevivedFossil
	goto Route114_FossilManiacsTunnel_EventScript_FossilManiac_1

Route114_FossilManiacsTunnel_EventScript_FossilManiac_5:
# 51 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	goto Route114_FossilManiacsTunnel_EventScript_PlayerHasFossil
	goto Route114_FossilManiacsTunnel_EventScript_FossilManiac_4

Route114_FossilManiacsTunnel_EventScript_FossilManiac_8:
# 55 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	goto Route114_FossilManiacsTunnel_EventScript_PlayerHasFossil
	goto Route114_FossilManiacsTunnel_EventScript_FossilManiac_7


Route114_FossilManiacsTunnel_EventScript_PlayerHasFossil::
# 63 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	msgbox Route114_FossilManiacsTunnel_Text_DevonCorpRevivingFossils, MSGBOX_DEFAULT
# 64 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	release
	end


Route114_FossilManiacsTunnel_EventScript_PlayerRevivedFossil::
# 69 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	msgbox Route114_FossilManiacsTunnel_Text_FossilsAreWonderful, MSGBOX_DEFAULT
# 70 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	release
	end


Route114_FossilManiacsTunnel_Text_LookInDesertForFossils::
# 74 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "I'm the FOSSIL MANIAC…\n"
	.string "I'm a nice guy who loves FOSSILS…\p"
	.string "Do you want a FOSSIL?\p"
	.string "But the FOSSILS around these parts all\n"
	.string "belong to me… None for you…\p"
	.string "If you can't bear to go without\n"
	.string "a FOSSIL, look in a desert where there\l"
	.string "are boulders and sand that may hide\l"
	.string "FOSSILS…$"

Route114_FossilManiacsTunnel_Text_DevonCorpRevivingFossils::
# 86 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "You found a FOSSIL, didn't you?\n"
	.string "That's so nice… It's so dreamy…\p"
	.string "What are you going to do with that\n"
	.string "FOSSIL?\p"
	.string "From what I've heard, DEVON is doing\n"
	.string "research on reviving POKéMON from\l"
	.string "FOSSILS…\p"
	.string "I love my FOSSILS, so I would never\n"
	.string "do anything like that…$"

Route114_FossilManiacsTunnel_Text_FossilsAreWonderful::
# 98 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "FOSSILS are so… Wonderful…\n"
	.string "It's so dreamy…$"

Route114_FossilManiacsTunnel_Text_NotSafeThatWay::
# 103 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "Oh…\n"
	.string "It's not safe that way…\p"
	.string "I was digging away, you see…\n"
	.string "When the whole wall collapsed…\p"
	.string "I think there's a giant cavern\n"
	.string "underneath now…\p"
	.string "But I've left it alone because I don't\n"
	.string "think there are any FOSSILS there…$"
