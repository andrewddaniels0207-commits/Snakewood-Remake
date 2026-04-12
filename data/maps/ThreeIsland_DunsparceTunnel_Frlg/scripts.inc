# 1 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"

# 2 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
ThreeIsland_DunsparceTunnel_Frlg_MapScripts::
# 3 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
# 2 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
# 4 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ThreeIsland_DunsparceTunnel_OnTransition
# 5 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
	.byte 0
# 6 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"

# 7 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"

# 8 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
ThreeIsland_DunsparceTunnel_OnTransition::
# 9 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
# 6 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
# 10 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_THREE_ISLAND_DUNSPARCE_TUNNEL
# 11 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
# 7 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
# 12 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
	specialvar VAR_RESULT, IsNationalPokedexEnabled
# 13 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
# 8 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
# 14 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
	copyvar VAR_0x8008, VAR_RESULT
# 15 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
# 9 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
# 16 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
	compare VAR_0x8008, TRUE
# 17 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
	goto_if_eq ThreeIsland_DunsparceTunnel_OnTransition_2
# 18 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
ThreeIsland_DunsparceTunnel_OnTransition_1:
# 19 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
# 12 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
# 20 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
	compare VAR_0x8008, FALSE
# 21 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
	goto_if_eq ThreeIsland_DunsparceTunnel_OnTransition_5
# 22 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
ThreeIsland_DunsparceTunnel_OnTransition_4:
# 23 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
	end
# 24 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"

# 25 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
ThreeIsland_DunsparceTunnel_OnTransition_2:
# 26 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
# 10 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
# 27 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
	call ThreeIsland_DunsparceTunnel_EventScript_SetLayoutDugOut
# 28 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
	goto ThreeIsland_DunsparceTunnel_OnTransition_1
# 29 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"

# 30 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
ThreeIsland_DunsparceTunnel_OnTransition_5:
# 31 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
# 13 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
# 32 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
	call ThreeIsland_DunsparceTunnel_EventScript_MoveProspectorToWall
# 33 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
	goto ThreeIsland_DunsparceTunnel_OnTransition_4
# 34 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"

# 35 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"

# 36 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
ThreeIsland_DunsparceTunnel_EventScript_SetLayoutDugOut::
# 37 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
# 19 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
# 38 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
	setmaplayoutindex LAYOUT_THREE_ISLAND_DUNSPARCE_TUNNEL_DUG_OUT
# 39 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
	return
# 40 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"

# 41 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"

# 42 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
ThreeIsland_DunsparceTunnel_EventScript_MoveProspectorToWall::
# 43 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
# 24 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
# 44 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
	setobjectxyperm LOCALID_PROSPECTOR, 6, 3
# 45 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
# 25 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
# 46 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
	setobjectmovementtype LOCALID_PROSPECTOR, MOVEMENT_TYPE_FACE_RIGHT
# 47 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
	return
# 48 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"

# 49 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"

# 50 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
ThreeIsland_DunsparceTunnel_EventScript_Prospector::
# 51 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
# 30 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
# 52 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
	lock
# 53 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
# 31 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
# 54 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
	faceplayer
# 55 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
# 32 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
# 56 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
	goto_if_set FLAG_GOT_NUGGET_FROM_DUNSPARCE_TUNNEL, ThreeIsland_DunsparceTunnel_EventScript_Prospector_2
# 57 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
ThreeIsland_DunsparceTunnel_EventScript_Prospector_1:
# 58 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
# 35 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
# 59 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
	specialvar VAR_RESULT, IsNationalPokedexEnabled
# 60 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
# 36 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
# 61 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
	compare VAR_RESULT, TRUE
# 62 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
	goto_if_eq ThreeIsland_DunsparceTunnel_EventScript_Prospector_5
# 63 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
ThreeIsland_DunsparceTunnel_EventScript_Prospector_4:
# 64 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
# 39 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
# 65 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
	msgbox ThreeIsland_DunsparceTunnel_Text_ProspectingForGold
# 66 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
# 40 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
# 67 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
	closemessage
# 68 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
# 41 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
# 69 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
	applymovement LOCALID_PROSPECTOR, Common_Movement_FaceOriginalDirection
# 70 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
# 42 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
# 71 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
	waitmovement 0
# 72 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
# 43 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
# 73 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
	release
# 74 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
	end
# 75 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"

# 76 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
ThreeIsland_DunsparceTunnel_EventScript_Prospector_2:
# 77 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
# 33 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
# 78 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
	goto ThreeIsland_DunsparceTunnel_EventScript_ProspectorAlreadyGaveNugget
# 79 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
	goto ThreeIsland_DunsparceTunnel_EventScript_Prospector_1
# 80 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"

# 81 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
ThreeIsland_DunsparceTunnel_EventScript_Prospector_5:
# 82 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
# 37 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
# 83 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
	goto ThreeIsland_DunsparceTunnel_EventScript_ProspectorStruckGold
# 84 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
	goto ThreeIsland_DunsparceTunnel_EventScript_Prospector_4
# 85 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"

# 86 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"

# 87 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
ThreeIsland_DunsparceTunnel_EventScript_ProspectorStruckGold::
# 88 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
# 48 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
# 89 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
	msgbox ThreeIsland_DunsparceTunnel_Text_StruckGoldThisIsForYou
# 90 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
# 49 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
# 91 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
	giveitem ITEM_NUGGET
# 92 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
# 50 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
# 93 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
	compare VAR_RESULT, FALSE
# 94 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
	goto_if_eq ThreeIsland_DunsparceTunnel_EventScript_ProspectorStruckGold_2
# 95 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
ThreeIsland_DunsparceTunnel_EventScript_ProspectorStruckGold_1:
# 96 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
# 53 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
# 97 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
	setflag FLAG_GOT_NUGGET_FROM_DUNSPARCE_TUNNEL
# 98 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
# 54 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
# 99 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
	goto ThreeIsland_DunsparceTunnel_EventScript_ProspectorAlreadyGaveNugget
# 100 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
	end
# 101 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"

# 102 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
ThreeIsland_DunsparceTunnel_EventScript_ProspectorStruckGold_2:
# 103 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
# 51 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
# 104 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
	goto ThreeIsland_DunsparceTunnel_EventScript_NoRoomForNugget
# 105 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
	goto ThreeIsland_DunsparceTunnel_EventScript_ProspectorStruckGold_1
# 106 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"

# 107 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"

# 108 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
ThreeIsland_DunsparceTunnel_EventScript_NoRoomForNugget::
# 109 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
# 59 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
# 110 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
	msgbox ThreeIsland_DunsparceTunnel_Text_WhoopsBagCrammedFull
# 111 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
# 60 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
# 112 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
	release
# 113 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
	end
# 114 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"

# 115 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"

# 116 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
ThreeIsland_DunsparceTunnel_EventScript_ProspectorAlreadyGaveNugget::
# 117 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
# 65 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
# 118 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
	msgbox ThreeIsland_DunsparceTunnel_Text_ThatsANugget
# 119 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
# 66 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
# 120 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
	release
# 121 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
	end
# 122 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"

# 123 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"

# 124 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
ThreeIsland_DunsparceTunnel_Text_ProspectingForGold::
# 125 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
# 70 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
# 126 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
	.string "Hey, there!\n"
# 127 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
	.string "How's it going?\p"
# 128 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
	.string "What am I doing here, you ask?\n"
# 129 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
	.string "Why, I'm prospecting for gold!\p"
# 130 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
	.string "When I strike it rich, I'm buying\n"
# 131 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
	.string "a house in KANTO.$"
# 132 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"

# 133 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
ThreeIsland_DunsparceTunnel_Text_StruckGoldThisIsForYou::
# 134 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
# 79 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
# 135 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
	.string "Hey, there! How's it going?\n"
# 136 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
	.string "Did you hear? I've struck gold!\p"
# 137 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
	.string "You remembered that I was\n"
# 138 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
	.string "prospecting, didn't you?\p"
# 139 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
	.string "You can't begin to imagine just\n"
# 140 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
	.string "how happy I am.\p"
# 141 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
	.string "So, I'll show you!\n"
# 142 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
	.string "This is for you!$"
# 143 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"

# 144 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
ThreeIsland_DunsparceTunnel_Text_ThatsANugget::
# 145 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
# 90 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
# 146 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
	.string "That's a NUGGET!\p"
# 147 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
	.string "I can't give you any nuggets of\n"
# 148 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
	.string "wisdom, so that'll have to do!$"
# 149 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"

# 150 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
ThreeIsland_DunsparceTunnel_Text_WhoopsBagCrammedFull::
# 151 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
# 96 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
# 152 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
	.string "Whoops, your BAG is crammed full!\n"
# 153 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
	.string "I'll give this to you later.$"
