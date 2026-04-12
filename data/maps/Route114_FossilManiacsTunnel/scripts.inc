# 1 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"

# 2 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
Route114_FossilManiacsTunnel_MapScripts::
# 3 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
# 2 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
# 4 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route114_FossilManiacsTunnel_OnTransition
# 5 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
# 3 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
# 6 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route114_FossilManiacsTunnel_OnLoad
# 7 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.byte 0
# 8 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"

# 9 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"

# 10 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
Route114_FossilManiacsTunnel_OnTransition::
# 11 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
# 7 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
# 12 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, Route114_FossilManiacsTunnel_OnTransition_2
# 13 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
Route114_FossilManiacsTunnel_OnTransition_1:
# 14 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	end
# 15 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"

# 16 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
Route114_FossilManiacsTunnel_OnTransition_2:
# 17 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
# 8 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
# 18 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	call Route114_FossilManiacsTunnel_EventScript_MoveFossilManiac
# 19 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	goto Route114_FossilManiacsTunnel_OnTransition_1
# 20 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"

# 21 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"

# 22 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
Route114_FossilManiacsTunnel_EventScript_MoveFossilManiac::
# 23 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
# 14 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
# 24 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	setobjectxyperm LOCALID_FOSSIL_MANIAC, 6, 5
# 25 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
# 15 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
# 26 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	setobjectmovementtype LOCALID_FOSSIL_MANIAC, MOVEMENT_TYPE_FACE_DOWN
# 27 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	return
# 28 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"

# 29 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"

# 30 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
Route114_FossilManiacsTunnel_OnLoad::
# 31 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
# 20 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
# 32 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	goto_if_unset FLAG_SYS_GAME_CLEAR, Route114_FossilManiacsTunnel_OnLoad_2
# 33 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
Route114_FossilManiacsTunnel_OnLoad_1:
# 34 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	end
# 35 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"

# 36 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
Route114_FossilManiacsTunnel_OnLoad_2:
# 37 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
# 21 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
# 38 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	call Route114_FossilManiacsTunnel_EventScript_CloseDesertUnderpass
# 39 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	goto Route114_FossilManiacsTunnel_OnLoad_1
# 40 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"

# 41 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"

# 42 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
Route114_FossilManiacsTunnel_EventScript_CloseDesertUnderpass::
# 43 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
# 27 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
# 44 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	setmetatile 6, 1, METATILE_Fallarbor_RedRockWall, TRUE
# 45 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
# 28 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
# 46 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	setmetatile 6, 2, METATILE_Fallarbor_RedRockWall, TRUE
# 47 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	return
# 48 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"

# 49 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"

# 50 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
Route114_FossilManiacsTunnel_EventScript_ManiacMentionCaveIn::
# 51 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
# 33 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
# 52 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	lockall
# 53 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
# 34 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
# 54 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	applymovement LOCALID_FOSSIL_MANIAC, Common_Movement_WalkInPlaceFasterUp
# 55 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
# 35 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
# 56 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 57 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
# 36 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
# 58 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	waitmovement 0
# 59 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
# 37 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
# 60 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	msgbox Route114_FossilManiacsTunnel_Text_NotSafeThatWay, MSGBOX_DEFAULT
# 61 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
# 38 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
# 62 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	setvar VAR_FOSSIL_MANIAC_STATE, 2
# 63 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
# 39 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
# 64 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	releaseall
# 65 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	end
# 66 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"

# 67 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"

# 68 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
Route114_FossilManiacsTunnel_EventScript_FossilManiac::
# 69 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
# 44 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
# 70 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	lock
# 71 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
# 45 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
# 72 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	faceplayer
# 73 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
# 46 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
# 74 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	goto_if_set FLAG_RECEIVED_REVIVED_FOSSIL_MON, Route114_FossilManiacsTunnel_EventScript_FossilManiac_2
# 75 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
Route114_FossilManiacsTunnel_EventScript_FossilManiac_1:
# 76 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
# 49 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
# 77 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	checkitem ITEM_ROOT_FOSSIL
# 78 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
# 50 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
# 79 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	compare VAR_RESULT, TRUE
# 80 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	goto_if_eq Route114_FossilManiacsTunnel_EventScript_FossilManiac_5
# 81 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
Route114_FossilManiacsTunnel_EventScript_FossilManiac_4:
# 82 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
# 53 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
# 83 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	checkitem ITEM_CLAW_FOSSIL
# 84 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
# 54 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
# 85 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	compare VAR_RESULT, TRUE
# 86 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	goto_if_eq Route114_FossilManiacsTunnel_EventScript_FossilManiac_8
# 87 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
Route114_FossilManiacsTunnel_EventScript_FossilManiac_7:
# 88 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
# 57 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
# 89 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	msgbox Route114_FossilManiacsTunnel_Text_LookInDesertForFossils, MSGBOX_DEFAULT
# 90 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
# 58 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
# 91 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	release
# 92 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	end
# 93 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"

# 94 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
Route114_FossilManiacsTunnel_EventScript_FossilManiac_2:
# 95 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
# 47 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
# 96 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	goto Route114_FossilManiacsTunnel_EventScript_PlayerRevivedFossil
# 97 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	goto Route114_FossilManiacsTunnel_EventScript_FossilManiac_1
# 98 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"

# 99 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
Route114_FossilManiacsTunnel_EventScript_FossilManiac_5:
# 100 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
# 51 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
# 101 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	goto Route114_FossilManiacsTunnel_EventScript_PlayerHasFossil
# 102 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	goto Route114_FossilManiacsTunnel_EventScript_FossilManiac_4
# 103 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"

# 104 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
Route114_FossilManiacsTunnel_EventScript_FossilManiac_8:
# 105 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
# 55 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
# 106 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	goto Route114_FossilManiacsTunnel_EventScript_PlayerHasFossil
# 107 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	goto Route114_FossilManiacsTunnel_EventScript_FossilManiac_7
# 108 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"

# 109 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"

# 110 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
Route114_FossilManiacsTunnel_EventScript_PlayerHasFossil::
# 111 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
# 63 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
# 112 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	msgbox Route114_FossilManiacsTunnel_Text_DevonCorpRevivingFossils, MSGBOX_DEFAULT
# 113 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
# 64 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
# 114 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	release
# 115 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	end
# 116 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"

# 117 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"

# 118 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
Route114_FossilManiacsTunnel_EventScript_PlayerRevivedFossil::
# 119 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
# 69 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
# 120 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	msgbox Route114_FossilManiacsTunnel_Text_FossilsAreWonderful, MSGBOX_DEFAULT
# 121 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
# 70 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
# 122 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	release
# 123 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	end
# 124 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"

# 125 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"

# 126 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
Route114_FossilManiacsTunnel_Text_LookInDesertForFossils::
# 127 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
# 74 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
# 128 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "I'm the FOSSIL MANIAC…\n"
# 129 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "I'm a nice guy who loves FOSSILS…\p"
# 130 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "Do you want a FOSSIL?\p"
# 131 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "But the FOSSILS around these parts all\n"
# 132 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "belong to me… None for you…\p"
# 133 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "If you can't bear to go without\n"
# 134 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "a FOSSIL, look in a desert where there\l"
# 135 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "are boulders and sand that may hide\l"
# 136 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "FOSSILS…$"
# 137 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"

# 138 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
Route114_FossilManiacsTunnel_Text_DevonCorpRevivingFossils::
# 139 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
# 86 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
# 140 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "You found a FOSSIL, didn't you?\n"
# 141 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "That's so nice… It's so dreamy…\p"
# 142 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "What are you going to do with that\n"
# 143 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "FOSSIL?\p"
# 144 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "From what I've heard, DEVON is doing\n"
# 145 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "research on reviving POKéMON from\l"
# 146 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "FOSSILS…\p"
# 147 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "I love my FOSSILS, so I would never\n"
# 148 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "do anything like that…$"
# 149 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"

# 150 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
Route114_FossilManiacsTunnel_Text_FossilsAreWonderful::
# 151 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
# 98 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
# 152 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "FOSSILS are so… Wonderful…\n"
# 153 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "It's so dreamy…$"
# 154 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"

# 155 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
Route114_FossilManiacsTunnel_Text_NotSafeThatWay::
# 156 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
# 103 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
# 157 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "Oh…\n"
# 158 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "It's not safe that way…\p"
# 159 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "I was digging away, you see…\n"
# 160 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "When the whole wall collapsed…\p"
# 161 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "I think there's a giant cavern\n"
# 162 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "underneath now…\p"
# 163 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "But I've left it alone because I don't\n"
# 164 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "think there are any FOSSILS there…$"
