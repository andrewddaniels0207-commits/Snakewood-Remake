ThreeIsland_DunsparceTunnel_Frlg_MapScripts::
# 2 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ThreeIsland_DunsparceTunnel_OnTransition
	.byte 0


ThreeIsland_DunsparceTunnel_OnTransition::
# 6 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_THREE_ISLAND_DUNSPARCE_TUNNEL
# 7 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
	specialvar VAR_RESULT, IsNationalPokedexEnabled
# 8 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
	copyvar VAR_0x8008, VAR_RESULT
# 9 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
	compare VAR_0x8008, TRUE
	goto_if_eq ThreeIsland_DunsparceTunnel_OnTransition_2
ThreeIsland_DunsparceTunnel_OnTransition_1:
# 12 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
	compare VAR_0x8008, FALSE
	goto_if_eq ThreeIsland_DunsparceTunnel_OnTransition_5
ThreeIsland_DunsparceTunnel_OnTransition_4:
	end

ThreeIsland_DunsparceTunnel_OnTransition_2:
# 10 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
	call ThreeIsland_DunsparceTunnel_EventScript_SetLayoutDugOut
	goto ThreeIsland_DunsparceTunnel_OnTransition_1

ThreeIsland_DunsparceTunnel_OnTransition_5:
# 13 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
	call ThreeIsland_DunsparceTunnel_EventScript_MoveProspectorToWall
	goto ThreeIsland_DunsparceTunnel_OnTransition_4


ThreeIsland_DunsparceTunnel_EventScript_SetLayoutDugOut::
# 19 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
	setmaplayoutindex LAYOUT_THREE_ISLAND_DUNSPARCE_TUNNEL_DUG_OUT
	return


ThreeIsland_DunsparceTunnel_EventScript_MoveProspectorToWall::
# 24 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
	setobjectxyperm LOCALID_PROSPECTOR, 6, 3
# 25 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
	setobjectmovementtype LOCALID_PROSPECTOR, MOVEMENT_TYPE_FACE_RIGHT
	return


ThreeIsland_DunsparceTunnel_EventScript_Prospector::
# 30 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
	lock
# 31 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
	faceplayer
# 32 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
	goto_if_set FLAG_GOT_NUGGET_FROM_DUNSPARCE_TUNNEL, ThreeIsland_DunsparceTunnel_EventScript_Prospector_2
ThreeIsland_DunsparceTunnel_EventScript_Prospector_1:
# 35 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
	specialvar VAR_RESULT, IsNationalPokedexEnabled
# 36 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq ThreeIsland_DunsparceTunnel_EventScript_Prospector_5
ThreeIsland_DunsparceTunnel_EventScript_Prospector_4:
# 39 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
	msgbox ThreeIsland_DunsparceTunnel_Text_ProspectingForGold
# 40 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
	closemessage
# 41 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
	applymovement LOCALID_PROSPECTOR, Common_Movement_FaceOriginalDirection
# 42 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
	waitmovement 0
# 43 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
	release
	end

ThreeIsland_DunsparceTunnel_EventScript_Prospector_2:
# 33 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
	goto ThreeIsland_DunsparceTunnel_EventScript_ProspectorAlreadyGaveNugget
	goto ThreeIsland_DunsparceTunnel_EventScript_Prospector_1

ThreeIsland_DunsparceTunnel_EventScript_Prospector_5:
# 37 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
	goto ThreeIsland_DunsparceTunnel_EventScript_ProspectorStruckGold
	goto ThreeIsland_DunsparceTunnel_EventScript_Prospector_4


ThreeIsland_DunsparceTunnel_EventScript_ProspectorStruckGold::
# 48 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
	msgbox ThreeIsland_DunsparceTunnel_Text_StruckGoldThisIsForYou
# 49 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
	giveitem ITEM_NUGGET
# 50 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq ThreeIsland_DunsparceTunnel_EventScript_ProspectorStruckGold_2
ThreeIsland_DunsparceTunnel_EventScript_ProspectorStruckGold_1:
# 53 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
	setflag FLAG_GOT_NUGGET_FROM_DUNSPARCE_TUNNEL
# 54 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
	goto ThreeIsland_DunsparceTunnel_EventScript_ProspectorAlreadyGaveNugget
	end

ThreeIsland_DunsparceTunnel_EventScript_ProspectorStruckGold_2:
# 51 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
	goto ThreeIsland_DunsparceTunnel_EventScript_NoRoomForNugget
	goto ThreeIsland_DunsparceTunnel_EventScript_ProspectorStruckGold_1


ThreeIsland_DunsparceTunnel_EventScript_NoRoomForNugget::
# 59 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
	msgbox ThreeIsland_DunsparceTunnel_Text_WhoopsBagCrammedFull
# 60 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
	release
	end


ThreeIsland_DunsparceTunnel_EventScript_ProspectorAlreadyGaveNugget::
# 65 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
	msgbox ThreeIsland_DunsparceTunnel_Text_ThatsANugget
# 66 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
	release
	end


ThreeIsland_DunsparceTunnel_Text_ProspectingForGold::
# 70 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
	.string "Hey, there!\n"
	.string "How's it going?\p"
	.string "What am I doing here, you ask?\n"
	.string "Why, I'm prospecting for gold!\p"
	.string "When I strike it rich, I'm buying\n"
	.string "a house in KANTO.$"

ThreeIsland_DunsparceTunnel_Text_StruckGoldThisIsForYou::
# 79 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
	.string "Hey, there! How's it going?\n"
	.string "Did you hear? I've struck gold!\p"
	.string "You remembered that I was\n"
	.string "prospecting, didn't you?\p"
	.string "You can't begin to imagine just\n"
	.string "how happy I am.\p"
	.string "So, I'll show you!\n"
	.string "This is for you!$"

ThreeIsland_DunsparceTunnel_Text_ThatsANugget::
# 90 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
	.string "That's a NUGGET!\p"
	.string "I can't give you any nuggets of\n"
	.string "wisdom, so that'll have to do!$"

ThreeIsland_DunsparceTunnel_Text_WhoopsBagCrammedFull::
# 96 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
	.string "Whoops, your BAG is crammed full!\n"
	.string "I'll give this to you later.$"
