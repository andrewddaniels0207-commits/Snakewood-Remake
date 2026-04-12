OneIsland_PokemonCenter_1F_Frlg_MapScripts::
# 2 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, OneIsland_PokemonCenter_1F_OnTransition
# 3 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
# 4 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, OneIsland_PokemonCenter_1F_OnLoad
# 5 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, OneIsland_PokemonCenter_1F_Frlg_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

OneIsland_PokemonCenter_1F_Frlg_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 6 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	map_script_2 VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 0, OneIsland_PokemonCenter_1F_EventScript_MeetCelioScene
	.2byte 0


OneIsland_PokemonCenter_1F_OnLoad::
# 11 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 5
	goto_if_ge OneIsland_PokemonCenter_1F_OnLoad_2
OneIsland_PokemonCenter_1F_OnLoad_1:
# 14 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	goto_if_set FLAG_IS_CHAMPION, OneIsland_PokemonCenter_1F_OnLoad_5
OneIsland_PokemonCenter_1F_OnLoad_4:
	end

OneIsland_PokemonCenter_1F_OnLoad_2:
# 12 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	call OneIsland_PokemonCenter_1F_EventScript_SetRubyMetatile
	goto OneIsland_PokemonCenter_1F_OnLoad_1

OneIsland_PokemonCenter_1F_OnLoad_5:
# 15 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	call OneIsland_PokemonCenter_1F_EventScript_SetNetworkMachineOn
	goto OneIsland_PokemonCenter_1F_OnLoad_4


OneIsland_PokemonCenter_1F_EventScript_SetRubyMetatile::
# 21 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	setmetatile 13, 4, METATILE_PokemonCenterFrlg_NetworkMachine_Ruby, 1
	return


OneIsland_PokemonCenter_1F_EventScript_SetSapphireMetatile::
# 26 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	setmetatile 16, 4, METATILE_PokemonCenterFrlg_NetworkMachine_Sapphire, 1
	return


OneIsland_PokemonCenter_1F_EventScript_SetNetworkMachineOn::
# 31 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	call OneIsland_PokemonCenter_1F_EventScript_SetSapphireMetatile
# 32 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	setmetatile 14, 4, METATILE_PokemonCenterFrlg_NetworkMachine_ScreenLeft_On, 1
# 33 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	setmetatile 15, 4, METATILE_PokemonCenterFrlg_NetworkMachine_ScreenRight_On, 1
	return


OneIsland_PokemonCenter_1F_OnTransition::
# 38 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	setrespawn HEAL_LOCATION_ONE_ISLAND
# 39 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 6
	goto_if_eq OneIsland_PokemonCenter_1F_OnTransition_2
OneIsland_PokemonCenter_1F_OnTransition_1:
# 42 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 0
	goto_if_eq OneIsland_PokemonCenter_1F_OnTransition_5
OneIsland_PokemonCenter_1F_OnTransition_4:
# 45 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 2
	goto_if_eq OneIsland_PokemonCenter_1F_OnTransition_8
OneIsland_PokemonCenter_1F_OnTransition_7:
	end

OneIsland_PokemonCenter_1F_OnTransition_2:
# 40 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	call OneIsland_PokemonCenter_1F_EventScript_SetCelioQuestDone
	goto OneIsland_PokemonCenter_1F_OnTransition_1

OneIsland_PokemonCenter_1F_OnTransition_5:
# 43 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	call OneIsland_PokemonCenter_1F_EventScript_SetBillCelioFirstMeetingPos
	goto OneIsland_PokemonCenter_1F_OnTransition_4

OneIsland_PokemonCenter_1F_OnTransition_8:
# 46 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	call OneIsland_PokemonCenter_1F_EventScript_SetBillCelioReadyToLeavePos
	goto OneIsland_PokemonCenter_1F_OnTransition_7


OneIsland_PokemonCenter_1F_EventScript_SetCelioQuestDone::
# 52 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 7
	return


OneIsland_PokemonCenter_1F_EventScript_SetBillCelioFirstMeetingPos::
# 57 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	setobjectxyperm LOCALID_ONE_ISLAND_POKEMON_CENTER_BILL, 9, 8
# 58 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	setobjectmovementtype LOCALID_ONE_ISLAND_POKEMON_CENTER_BILL, MOVEMENT_TYPE_FACE_UP
# 59 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	setobjectxyperm LOCALID_CELIO, 15, 6
# 60 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	setobjectmovementtype LOCALID_CELIO, MOVEMENT_TYPE_FACE_UP
	return


OneIsland_PokemonCenter_1F_EventScript_SetBillCelioReadyToLeavePos::
# 65 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	setobjectxyperm LOCALID_ONE_ISLAND_POKEMON_CENTER_BILL, 14, 7
# 66 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	setobjectmovementtype LOCALID_ONE_ISLAND_POKEMON_CENTER_BILL, MOVEMENT_TYPE_FACE_LEFT
# 67 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	setobjectxyperm LOCALID_CELIO, 14, 8
# 68 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	setobjectmovementtype LOCALID_CELIO, MOVEMENT_TYPE_FACE_LEFT
	return


OneIsland_PokemonCenter_1F_EventScript_MeetCelioScene::
# 73 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	lockall
# 74 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 75 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, OneIsland_PokemonCenter_1F_Movement_PlayerWalkToCelio
# 76 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	applymovement LOCALID_ONE_ISLAND_POKEMON_CENTER_BILL, OneIsland_PokemonCenter_1F_Movement_BillWalkToCelio
# 77 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	waitmovement 0
# 78 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_BillHeyThereCelio
# 79 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 80 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	waitmovement 0
# 81 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	playse SE_PIN
# 82 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	applymovement LOCALID_CELIO, Common_Movement_ExclamationMark
# 83 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	waitmovement 0
# 84 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	applymovement LOCALID_CELIO, Common_Movement_WalkInPlaceFasterLeft
# 85 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	waitmovement 0
# 86 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	applymovement LOCALID_CELIO, Common_Movement_Delay48
# 87 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	waitmovement 0
# 88 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_CelioCantBelieveYouCameOut
# 89 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_BillHowsYourResearchComing
# 90 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	applymovement LOCALID_ONE_ISLAND_POKEMON_CENTER_BILL, Common_Movement_WalkInPlaceFasterDown
# 91 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 92 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	waitmovement 0
# 93 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_ThisIsMyBuddyCelio
# 94 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	applymovement LOCALID_ONE_ISLAND_POKEMON_CENTER_BILL, Common_Movement_WalkInPlaceFasterRight
# 95 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	waitmovement 0
# 96 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 97 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	waitmovement 0
# 98 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, OneIsland_PokemonCenter_1F_EventScript_MeetCelioScene_2
OneIsland_PokemonCenter_1F_EventScript_MeetCelioScene_1:
# 101 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	goto_if_unset FLAG_SYS_GAME_CLEAR, OneIsland_PokemonCenter_1F_EventScript_MeetCelioScene_5
OneIsland_PokemonCenter_1F_EventScript_MeetCelioScene_4:
# 104 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	applymovement LOCALID_CELIO, Common_Movement_WalkInPlaceFasterDown
# 105 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	waitmovement 0
# 106 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_CelioThatsReallyImpressive
# 107 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_BillBringMeUpToSpeed
# 108 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	applymovement LOCALID_CELIO, Common_Movement_WalkInPlaceFasterLeft
# 109 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	waitmovement 0
# 110 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_CelioPCsCantLinkWithYours
# 111 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	closemessage
# 112 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	applymovement LOCALID_ONE_ISLAND_POKEMON_CENTER_BILL, Common_Movement_WalkInPlaceFasterUp
# 113 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	waitmovement 0
# 114 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_BillLetMeHelpYou
# 115 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	applymovement LOCALID_ONE_ISLAND_POKEMON_CENTER_BILL, Common_Movement_WalkInPlaceFasterDown
# 116 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	waitmovement 0
# 117 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 118 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	waitmovement 0
# 119 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_CanYouDeliverThisMeteoritePlayer
# 120 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgreceiveditem OneIsland_PokemonCenter_1F_Text_AcceptedMeteoriteFromBill, ITEM_METEORITE, 1, MUS_RG_OBTAIN_KEY_ITEM
# 121 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	additem ITEM_METEORITE
# 122 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	applymovement LOCALID_CELIO, Common_Movement_WalkInPlaceFasterDown
# 123 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	waitmovement 0
# 124 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_CelioPleaseTakeThis
# 125 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	giveitem_msg OneIsland_PokemonCenter_1F_Text_ObtainedTriPass, ITEM_TRI_PASS, 1, MUS_RG_OBTAIN_KEY_ITEM
# 126 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_PassLetsYouTravelBetweenIslands
# 127 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_PALLET_TOWN_RIVALS_HOUSE, 2
	goto_if_ge OneIsland_PokemonCenter_1F_EventScript_MeetCelioScene_8
OneIsland_PokemonCenter_1F_EventScript_MeetCelioScene_7:
# 130 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_PALLET_TOWN_RIVALS_HOUSE, 2
	goto_if_lt OneIsland_PokemonCenter_1F_EventScript_MeetCelioScene_11
OneIsland_PokemonCenter_1F_EventScript_MeetCelioScene_10:
# 133 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	setflag FLAG_SYS_SEVII_MAP_123
# 134 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_BillCatchYouLater
# 135 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	closemessage
# 136 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	applymovement LOCALID_ONE_ISLAND_POKEMON_CENTER_BILL, Common_Movement_WalkInPlaceFasterUp
# 137 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	waitmovement 0
# 138 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	applymovement LOCALID_CELIO, Common_Movement_WalkInPlaceFasterUp
# 139 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	waitmovement 0
# 140 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	setflag FLAG_SYS_PC_STORAGE_DISABLED
# 141 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 1
# 142 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	releaseall
	end

OneIsland_PokemonCenter_1F_EventScript_MeetCelioScene_2:
# 99 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	call OneIsland_PokemonCenter_1F_EventScript_IntroducePlayerChamp
	goto OneIsland_PokemonCenter_1F_EventScript_MeetCelioScene_1

OneIsland_PokemonCenter_1F_EventScript_MeetCelioScene_5:
# 102 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	call OneIsland_PokemonCenter_1F_EventScript_IntroducePlayerNotChamp
	goto OneIsland_PokemonCenter_1F_EventScript_MeetCelioScene_4

OneIsland_PokemonCenter_1F_EventScript_MeetCelioScene_8:
# 128 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	call OneIsland_PokemonCenter_1F_EventScript_ReceiveTownMapPage
	goto OneIsland_PokemonCenter_1F_EventScript_MeetCelioScene_7

OneIsland_PokemonCenter_1F_EventScript_MeetCelioScene_11:
# 131 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	call OneIsland_PokemonCenter_1F_EventScript_ReceiveTownMap
	goto OneIsland_PokemonCenter_1F_EventScript_MeetCelioScene_10


OneIsland_PokemonCenter_1F_EventScript_IntroducePlayerChamp::
# 147 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_PlayerIsReigningPokemonChamp
	return


OneIsland_PokemonCenter_1F_EventScript_IntroducePlayerNotChamp::
# 152 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_PlayerIsRisingPokemonChamp
	return


OneIsland_PokemonCenter_1F_EventScript_ReceiveTownMapPage::
# 157 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 158 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	playfanfare MUS_RG_OBTAIN_KEY_ITEM
# 159 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	message OneIsland_PokemonCenter_1F_Text_ReceivedExtraPageForTownMap
# 160 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	waitmessage
# 161 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	waitfanfare
# 162 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	call EventScript_RestorePrevTextColor
	return


OneIsland_PokemonCenter_1F_EventScript_ReceiveTownMap::
# 167 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	setflag FLAG_HIDE_TOWN_MAP
# 168 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_RIVALS_HOUSE, 2
# 169 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	giveitem_msg OneIsland_PokemonCenter_1F_Text_ReceivedTownMap, ITEM_TOWN_MAP, 1, MUS_RG_OBTAIN_KEY_ITEM
	return


# 173 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
OneIsland_PokemonCenter_1F_Movement_PlayerWalkToCelio:
# 174 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_up
# 175 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_up
# 176 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_right
# 177 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_right
# 178 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_right
# 179 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_right
# 180 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_right
# 181 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_in_place_faster_up
# 182 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	step_end

# 185 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
OneIsland_PokemonCenter_1F_Movement_BillWalkToCelio:
# 186 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_up
# 187 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_right
# 188 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_right
# 189 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_right
# 190 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_right
# 191 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_right
# 192 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_up
# 193 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_in_place_faster_right
# 194 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	step_end

# 197 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
OneIsland_PokemonCenter_1F_Movement_WalkUp:
# 198 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_up
# 199 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	step_end

# 202 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
OneIsland_PokemonCenter_1F_Movement_StepAsideLeft:
# 203 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_left
# 204 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_in_place_faster_right
# 205 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	step_end

OneIsland_PokemonCenter_1F_EventScript_Nurse::
# 209 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	lock
# 210 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	faceplayer
# 211 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	call EventScript_PkmnCenterNurse_Frlg
# 212 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	release
	end


OneIsland_PokemonCenter_1F_EventScript_Bill::
# 217 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	lock
# 218 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	goto_if_set FLAG_SEVII_DETOUR_FINISHED, OneIsland_PokemonCenter_1F_EventScript_Bill_2
OneIsland_PokemonCenter_1F_EventScript_Bill_1:
# 221 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_HmmHowAboutLikeThis
# 222 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	release
	end

OneIsland_PokemonCenter_1F_EventScript_Bill_2:
# 219 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	goto OneIsland_PokemonCenter_1F_EventScript_BillGoTakeStroll
	goto OneIsland_PokemonCenter_1F_EventScript_Bill_1


OneIsland_PokemonCenter_1F_EventScript_BillGoTakeStroll::
# 227 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	applymovement LOCALID_ONE_ISLAND_POKEMON_CENTER_BILL, Common_Movement_FacePlayer
# 228 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	waitmovement 0
# 229 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_GotPCWorkingStrollAWhileMore
# 230 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	release
	end


OneIsland_PokemonCenter_1F_EventScript_Celio::
# 235 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	lock
# 236 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	faceplayer
# 237 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 7
	goto_if_eq OneIsland_PokemonCenter_1F_EventScript_Celio_2
OneIsland_PokemonCenter_1F_EventScript_Celio_1:
# 240 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 6
	goto_if_eq OneIsland_PokemonCenter_1F_EventScript_Celio_5
OneIsland_PokemonCenter_1F_EventScript_Celio_4:
# 243 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	goto_if_set FLAG_RECOVERED_SAPPHIRE, OneIsland_PokemonCenter_1F_EventScript_Celio_8
OneIsland_PokemonCenter_1F_EventScript_Celio_7:
# 246 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 5
	goto_if_eq OneIsland_PokemonCenter_1F_EventScript_Celio_11
OneIsland_PokemonCenter_1F_EventScript_Celio_10:
# 249 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	goto_if_set FLAG_GOT_RUBY, OneIsland_PokemonCenter_1F_EventScript_Celio_14
OneIsland_PokemonCenter_1F_EventScript_Celio_13:
# 252 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 4
	goto_if_eq OneIsland_PokemonCenter_1F_EventScript_Celio_17
OneIsland_PokemonCenter_1F_EventScript_Celio_16:
# 255 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	specialvar VAR_RESULT, IsNationalPokedexEnabled
# 256 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq OneIsland_PokemonCenter_1F_EventScript_Celio_20
OneIsland_PokemonCenter_1F_EventScript_Celio_19:
# 259 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 3
	goto_if_eq OneIsland_PokemonCenter_1F_EventScript_Celio_23
OneIsland_PokemonCenter_1F_EventScript_Celio_22:
# 262 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_SorryForBeingPoorHost
# 263 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	closemessage
# 264 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	applymovement LOCALID_CELIO, Common_Movement_FaceOriginalDirection
# 265 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	waitmovement 0
# 266 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	release
	end

OneIsland_PokemonCenter_1F_EventScript_Celio_2:
# 238 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	goto OneIsland_PokemonCenter_1F_EventScript_CelioGiveBillFact
	goto OneIsland_PokemonCenter_1F_EventScript_Celio_1

OneIsland_PokemonCenter_1F_EventScript_Celio_5:
# 241 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	goto OneIsland_PokemonCenter_1F_EventScript_CelioJustGivenSapphire
	goto OneIsland_PokemonCenter_1F_EventScript_Celio_4

OneIsland_PokemonCenter_1F_EventScript_Celio_8:
# 244 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	goto OneIsland_PokemonCenter_1F_EventScript_GiveCelioSapphire
	goto OneIsland_PokemonCenter_1F_EventScript_Celio_7

OneIsland_PokemonCenter_1F_EventScript_Celio_11:
# 247 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	goto OneIsland_PokemonCenter_1F_EventScript_ExplainRainbowPass
	goto OneIsland_PokemonCenter_1F_EventScript_Celio_10

OneIsland_PokemonCenter_1F_EventScript_Celio_14:
# 250 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	goto OneIsland_PokemonCenter_1F_EventScript_GiveCelioRuby
	goto OneIsland_PokemonCenter_1F_EventScript_Celio_13

OneIsland_PokemonCenter_1F_EventScript_Celio_17:
# 253 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	goto OneIsland_PokemonCenter_1F_EventScript_CelioWaitingForRuby
	goto OneIsland_PokemonCenter_1F_EventScript_Celio_16

OneIsland_PokemonCenter_1F_EventScript_Celio_20:
# 257 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	goto OneIsland_PokemonCenter_1F_EventScript_CelioRequestRuby
	goto OneIsland_PokemonCenter_1F_EventScript_Celio_19

OneIsland_PokemonCenter_1F_EventScript_Celio_23:
# 260 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	goto OneIsland_PokemonCenter_1F_EventScript_CelioPlayerMissingNationalDex
	goto OneIsland_PokemonCenter_1F_EventScript_Celio_22


OneIsland_PokemonCenter_1F_EventScript_CelioGiveBillFact::
# 271 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_CelioHearingRumorsAboutYou
# 272 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	random 3
# 273 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq OneIsland_PokemonCenter_1F_EventScript_CelioGiveBillFact_2
OneIsland_PokemonCenter_1F_EventScript_CelioGiveBillFact_1:
# 276 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq OneIsland_PokemonCenter_1F_EventScript_CelioGiveBillFact_5
OneIsland_PokemonCenter_1F_EventScript_CelioGiveBillFact_4:
# 279 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	famechecker FAMECHECKER_BILL, 5
# 280 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_BillCantStomachMilk
# 281 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	release
	end

OneIsland_PokemonCenter_1F_EventScript_CelioGiveBillFact_2:
# 274 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	goto OneIsland_PokemonCenter_1F_EventScript_BillFact1
	goto OneIsland_PokemonCenter_1F_EventScript_CelioGiveBillFact_1

OneIsland_PokemonCenter_1F_EventScript_CelioGiveBillFact_5:
# 277 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	goto OneIsland_PokemonCenter_1F_EventScript_BillFact2
	goto OneIsland_PokemonCenter_1F_EventScript_CelioGiveBillFact_4


OneIsland_PokemonCenter_1F_EventScript_BillFact1::
# 286 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	famechecker FAMECHECKER_BILL, 3
# 287 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_BillsFirstMonWasAbra
# 288 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	release
	end


OneIsland_PokemonCenter_1F_EventScript_BillFact2::
# 293 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	famechecker FAMECHECKER_BILL, 4
# 294 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_BillsHometownInGoldenrod
# 295 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	release
	end


OneIsland_PokemonCenter_1F_EventScript_CelioJustGivenSapphire::
# 300 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_WishYouBestOfLuck
# 301 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	release
	end


OneIsland_PokemonCenter_1F_EventScript_GiveCelioSapphire::
# 306 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 307 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	playfanfare MUS_OBTAIN_TMHM
# 308 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	message OneIsland_PokemonCenter_1F_Text_HandedSapphireToCelio
# 309 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	waitmessage
# 310 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	waitfanfare
# 311 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	call EventScript_RestorePrevTextColor
# 312 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	removeitem ITEM_SAPPHIRE
# 313 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_ThankYouGiveMeTime
# 314 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	closemessage
# 315 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	applymovement LOCALID_CELIO, OneIsland_PokemonCenter_1F_Movement_CelioPutGemInMachine
# 316 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	waitmovement 0
# 317 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	playse SE_CLICK
# 318 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	call OneIsland_PokemonCenter_1F_EventScript_SetSapphireMetatile
# 319 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	special DrawWholeMapView
# 320 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_OkayThisIsGood
# 321 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	closemessage
# 322 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	delay 60
# 323 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	applymovement LOCALID_CELIO, OneIsland_PokemonCenter_1F_Movement_CelioCheckMachine
# 324 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	waitmovement 0
# 325 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	delay 30
# 326 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	applymovement LOCALID_CELIO, OneIsland_PokemonCenter_1F_Movement_CelioCheckMachine
# 327 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	waitmovement 0
# 328 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	delay 40
# 329 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	playse SE_PC_ON
# 330 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	call OneIsland_PokemonCenter_1F_EventScript_SetNetworkMachineOn
# 331 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	special DrawWholeMapView
# 332 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_LinkedUpWithLanette
# 333 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	applymovement LOCALID_CELIO, Common_Movement_FacePlayer
# 334 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	waitmovement 0
# 335 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_ManagedToLinkWithHoennThankYou
# 336 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	special SetPostgameFlags
# 337 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	setflag FLAG_IS_CHAMPION
# 338 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	setflag FLAG_HIDE_CERULEAN_CAVE_GUARD
# 339 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	setflag FLAG_HIDE_LORELEI_IN_HER_HOUSE
# 340 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 6
# 341 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	special InitRoamer
# 342 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	release
	end


OneIsland_PokemonCenter_1F_EventScript_ExplainRainbowPass::
# 347 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_PassLetYouGetToAllIslands
# 348 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	release
	end


OneIsland_PokemonCenter_1F_EventScript_GiveCelioRuby::
# 353 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_OhThats
# 354 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 355 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	playfanfare MUS_OBTAIN_TMHM
# 356 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	message OneIsland_PokemonCenter_1F_Text_HandedRubyToCelio
# 357 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	waitmessage
# 358 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	waitfanfare
# 359 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	call EventScript_RestorePrevTextColor
# 360 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	closemessage
# 361 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	applymovement LOCALID_CELIO, OneIsland_PokemonCenter_1F_Movement_CelioPutGemInMachine
# 362 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	waitmovement 0
# 363 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	playse SE_CLICK
# 364 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	call OneIsland_PokemonCenter_1F_EventScript_SetRubyMetatile
# 365 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	special DrawWholeMapView
# 366 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	delay 30
# 367 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	applymovement LOCALID_CELIO, Common_Movement_FacePlayer
# 368 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	waitmovement 0
# 369 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_MayIAskOneMoreFavor, MSGBOX_YESNO
# 370 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq OneIsland_PokemonCenter_1F_EventScript_GiveCelioRuby_2
OneIsland_PokemonCenter_1F_EventScript_GiveCelioRuby_1:
# 373 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	goto OneIsland_PokemonCenter_1F_EventScript_GiveRainbowPass
	end

OneIsland_PokemonCenter_1F_EventScript_GiveCelioRuby_2:
# 371 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	goto OneIsland_PokemonCenter_1F_EventScript_DeclineHelpCelio
	goto OneIsland_PokemonCenter_1F_EventScript_GiveCelioRuby_1


OneIsland_PokemonCenter_1F_EventScript_DeclineHelpCelio::
# 378 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_PleaseINeedYourHelp, MSGBOX_YESNO
# 379 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq OneIsland_PokemonCenter_1F_EventScript_DeclineHelpCelio_2
OneIsland_PokemonCenter_1F_EventScript_DeclineHelpCelio_1:
# 382 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	goto OneIsland_PokemonCenter_1F_EventScript_GiveRainbowPass
	end

OneIsland_PokemonCenter_1F_EventScript_DeclineHelpCelio_2:
# 380 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	goto OneIsland_PokemonCenter_1F_EventScript_DeclineHelpCelio
	goto OneIsland_PokemonCenter_1F_EventScript_DeclineHelpCelio_1


OneIsland_PokemonCenter_1F_EventScript_GiveRainbowPass::
# 387 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_AnotherGemstoneInSeviiIslands
# 388 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	removeitem ITEM_RUBY
# 389 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	removeitem ITEM_TRI_PASS
# 390 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 5
# 391 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	additem ITEM_RAINBOW_PASS
# 392 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	setflag FLAG_SYS_SEVII_MAP_4567
# 393 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 394 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	playfanfare MUS_RG_OBTAIN_KEY_ITEM
# 395 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	message OneIsland_PokemonCenter_1F_Text_ReturnedTriPassForRainbowPass
# 396 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	waitmessage
# 397 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	waitfanfare
# 398 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	playfanfare MUS_RG_OBTAIN_KEY_ITEM
# 399 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	message OneIsland_PokemonCenter_1F_Text_ObtainedExtraMapPage
# 400 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	waitmessage
# 401 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	waitfanfare
# 402 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	call EventScript_RestorePrevTextColor
# 403 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	goto OneIsland_PokemonCenter_1F_EventScript_ExplainRainbowPass
	end


OneIsland_PokemonCenter_1F_EventScript_CelioWaitingForRuby::
# 408 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_TryingToFindGem
# 409 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	release
	end


OneIsland_PokemonCenter_1F_EventScript_CelioRequestRuby::
# 414 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_CelioCaughtMoreMonMaybeICanBeUseful
# 415 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	applymovement LOCALID_CELIO, Common_Movement_WalkInPlaceFasterUp
# 416 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	waitmovement 0
# 417 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_YoullBeTradingFromTrainersFarAway
# 418 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	applymovement LOCALID_CELIO, Common_Movement_FacePlayer
# 419 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	waitmovement 0
# 420 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_NeedsSpecialGemstone
# 421 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_MT_EMBER_EXTERIOR, 1
# 422 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 4
# 423 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	release
	end


OneIsland_PokemonCenter_1F_EventScript_CelioPlayerMissingNationalDex::
# 428 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_CelioImModifyingMyNetworkMachine
# 429 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	release
	end


# 433 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
OneIsland_PokemonCenter_1F_Movement_CelioCheckMachine:
# 434 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_in_place_up
# 435 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	delay_8
# 436 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_in_place_up
# 437 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	step_end

# 440 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
OneIsland_PokemonCenter_1F_Movement_CelioPutGemInMachine:
# 441 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_in_place_faster_up
# 442 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_in_place_up
# 443 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	delay_16
# 444 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_in_place_up
# 445 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_in_place_up
# 446 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	step_end

OneIsland_PokemonCenter_1F_EventScript_LittleBoy::
# 450 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_CameFromPalletDontKnowIt, MSGBOX_NPC
	end


OneIsland_PokemonCenter_1F_EventScript_Hiker::
# 455 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_EnormousVolcanoOnIsland, MSGBOX_NPC
	end


OneIsland_PokemonCenter_1F_EventScript_BattleGirl::
# 460 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	lock
# 461 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	faceplayer
# 462 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	goto_if_set FLAG_IS_CHAMPION, OneIsland_PokemonCenter_1F_EventScript_BattleGirl_2
OneIsland_PokemonCenter_1F_EventScript_BattleGirl_1:
# 465 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_WishICouldTradeWithBoyfriend
# 466 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	release
	end

OneIsland_PokemonCenter_1F_EventScript_BattleGirl_2:
# 463 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	goto OneIsland_PokemonCenter_1F_EventScript_BattleGirlHoennLinked
	goto OneIsland_PokemonCenter_1F_EventScript_BattleGirl_1


OneIsland_PokemonCenter_1F_EventScript_BattleGirlHoennLinked::
# 471 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_TradedWithFarAwayBoyfriend
# 472 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	release
	end


OneIsland_PokemonCenter_1F_EventScript_NetworkMachine::
# 477 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	lockall
# 478 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	goto_if_set FLAG_IS_CHAMPION, OneIsland_PokemonCenter_1F_EventScript_NetworkMachine_2
OneIsland_PokemonCenter_1F_EventScript_NetworkMachine_1:
# 481 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	goto_if_set FLAG_SEVII_DETOUR_FINISHED, OneIsland_PokemonCenter_1F_EventScript_NetworkMachine_5
OneIsland_PokemonCenter_1F_EventScript_NetworkMachine_4:
# 484 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_MachineUnderAdjustment
# 485 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	releaseall
	end

OneIsland_PokemonCenter_1F_EventScript_NetworkMachine_2:
# 479 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	goto OneIsland_PokemonCenter_1F_EventScript_NetworkMachineLinkedWithHoenn
	goto OneIsland_PokemonCenter_1F_EventScript_NetworkMachine_1

OneIsland_PokemonCenter_1F_EventScript_NetworkMachine_5:
# 482 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	goto OneIsland_PokemonCenter_1F_EventScript_NetworkMachineLinkedWithKanto
	goto OneIsland_PokemonCenter_1F_EventScript_NetworkMachine_4


OneIsland_PokemonCenter_1F_EventScript_NetworkMachineLinkedWithKanto::
# 490 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_MachineLinkedWithKanto
# 491 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	releaseall
	end


OneIsland_PokemonCenter_1F_EventScript_NetworkMachineLinkedWithHoenn::
# 496 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_MachineLinkedWithKantoAndHoenn
# 497 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	releaseall
	end


OneIsland_PokemonCenter_1F_EventScript_LeaveOneIslandTriggerTop::
# 502 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	lockall
# 503 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 1
# 504 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	goto OneIsland_PokemonCenter_1F_EventScript_LeaveOneIslandScene
	end


OneIsland_PokemonCenter_1F_EventScript_LeaveOneIslandTriggerMidTop::
# 509 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	lockall
# 510 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 2
# 511 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	goto OneIsland_PokemonCenter_1F_EventScript_LeaveOneIslandScene
	end


OneIsland_PokemonCenter_1F_EventScript_LeaveOneIslandTriggerMidBottom::
# 516 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	lockall
# 517 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 3
# 518 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	goto OneIsland_PokemonCenter_1F_EventScript_LeaveOneIslandScene
	end


OneIsland_PokemonCenter_1F_EventScript_LeaveOneIslandTriggerBottom::
# 523 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	lockall
# 524 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 4
# 525 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	goto OneIsland_PokemonCenter_1F_EventScript_LeaveOneIslandScene
	end


OneIsland_PokemonCenter_1F_EventScript_LeaveOneIslandScene::
# 530 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 531 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	playse SE_PIN
# 532 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	applymovement LOCALID_ONE_ISLAND_POKEMON_CENTER_BILL, Common_Movement_ExclamationMark
# 533 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	waitmovement 0
# 534 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_BillOhHeyPlayer
# 535 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	closemessage
# 536 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq OneIsland_PokemonCenter_1F_EventScript_LeaveOneIslandScene_2
OneIsland_PokemonCenter_1F_EventScript_LeaveOneIslandScene_1:
# 539 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	compare VAR_TEMP_1, 2
	goto_if_eq OneIsland_PokemonCenter_1F_EventScript_LeaveOneIslandScene_5
OneIsland_PokemonCenter_1F_EventScript_LeaveOneIslandScene_4:
# 542 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	compare VAR_TEMP_1, 3
	goto_if_eq OneIsland_PokemonCenter_1F_EventScript_LeaveOneIslandScene_8
OneIsland_PokemonCenter_1F_EventScript_LeaveOneIslandScene_7:
# 545 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	compare VAR_TEMP_1, 4
	goto_if_eq OneIsland_PokemonCenter_1F_EventScript_LeaveOneIslandScene_11
OneIsland_PokemonCenter_1F_EventScript_LeaveOneIslandScene_10:
# 548 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	delay 10
# 549 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_BillWeGotItDone
# 550 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 551 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	waitmovement 0
# 552 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_CelioJobWentQuick
# 553 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	applymovement LOCALID_ONE_ISLAND_POKEMON_CENTER_BILL, Common_Movement_WalkInPlaceFasterDown
# 554 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	waitmovement 0
# 555 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	applymovement LOCALID_CELIO, Common_Movement_WalkInPlaceFasterUp
# 556 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	waitmovement 0
# 557 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_BillYouveLearnedALot
# 558 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_CelioOhReallyEhehe
# 559 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	closemessage
# 560 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	applymovement LOCALID_ONE_ISLAND_POKEMON_CENTER_BILL, Common_Movement_WalkInPlaceFasterLeft
# 561 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	waitmovement 0
# 562 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	delay 10
# 563 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 564 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	waitmovement 0
# 565 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	delay 15
# 566 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_BillWeShouldHeadBackToKanto
# 567 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	closemessage
# 568 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	applymovement LOCALID_ONE_ISLAND_POKEMON_CENTER_BILL, Common_Movement_WalkInPlaceFasterDown
# 569 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	waitmovement 0
# 570 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	delay 15
# 571 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	applymovement LOCALID_CELIO, Common_Movement_WalkInPlaceFasterLeft
# 572 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	waitmovement 0
# 573 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 574 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	waitmovement 0
# 575 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_CelioPromiseIllShowYouAroundSometime
# 576 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	closemessage
# 577 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	delay 25
# 578 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, OneIsland_PokemonCenter_1F_Movement_PlayerExit
# 579 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	applymovement LOCALID_ONE_ISLAND_POKEMON_CENTER_BILL, OneIsland_PokemonCenter_1F_Movement_BillExit
# 580 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	waitmovement 0
# 581 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	playse SE_EXIT
# 582 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	setflag FLAG_HIDE_ONE_ISLAND_POKECENTER_BILL
# 583 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 3
# 584 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	clearflag FLAG_HIDE_CINNABAR_BILL
# 585 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_CINNABAR_ISLAND, 3
# 586 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	setvar VAR_0x8004, SEAGALLOP_ONE_ISLAND
# 587 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	setvar VAR_0x8006, SEAGALLOP_CINNABAR_ISLAND
# 588 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	goto EventScript_SetSail
	end

OneIsland_PokemonCenter_1F_EventScript_LeaveOneIslandScene_2:
# 537 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	call OneIsland_PokemonCenter_1F_EventScript_PlayerWalkToBillTop
	goto OneIsland_PokemonCenter_1F_EventScript_LeaveOneIslandScene_1

OneIsland_PokemonCenter_1F_EventScript_LeaveOneIslandScene_5:
# 540 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	call OneIsland_PokemonCenter_1F_EventScript_PlayerWalkToBillMidTop
	goto OneIsland_PokemonCenter_1F_EventScript_LeaveOneIslandScene_4

OneIsland_PokemonCenter_1F_EventScript_LeaveOneIslandScene_8:
# 543 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	call OneIsland_PokemonCenter_1F_EventScript_PlayerWalkToBillMidBottom
	goto OneIsland_PokemonCenter_1F_EventScript_LeaveOneIslandScene_7

OneIsland_PokemonCenter_1F_EventScript_LeaveOneIslandScene_11:
# 546 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	call OneIsland_PokemonCenter_1F_EventScript_PlayerWalkToBillBottom
	goto OneIsland_PokemonCenter_1F_EventScript_LeaveOneIslandScene_10


OneIsland_PokemonCenter_1F_EventScript_PlayerWalkToBillTop::
# 593 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, OneIsland_PokemonCenter_1F_Movement_PlayerWalkToBillTop
# 594 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	waitmovement 0
	return


OneIsland_PokemonCenter_1F_EventScript_PlayerWalkToBillMidTop::
# 599 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, OneIsland_PokemonCenter_1F_Movement_PlayerWalkToBillMidTop
# 600 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	waitmovement 0
	return


OneIsland_PokemonCenter_1F_EventScript_PlayerWalkToBillMidBottom::
# 605 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, OneIsland_PokemonCenter_1F_Movement_PlayerWalkToBillMidBottom
# 606 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	waitmovement 0
	return


OneIsland_PokemonCenter_1F_EventScript_PlayerWalkToBillBottom::
# 611 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, OneIsland_PokemonCenter_1F_Movement_PlayerWalkToBillBottom
# 612 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	waitmovement 0
	return


# 616 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
OneIsland_PokemonCenter_1F_Movement_PlayerWalkToBillTop:
# 617 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_right
# 618 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_down
# 619 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_in_place_faster_right
# 620 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	step_end

# 623 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
OneIsland_PokemonCenter_1F_Movement_PlayerWalkToBillMidTop:
# 624 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_right
# 625 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	step_end

# 628 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
OneIsland_PokemonCenter_1F_Movement_PlayerWalkToBillMidBottom:
# 629 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_right
# 630 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_up
# 631 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_in_place_faster_right
# 632 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	step_end

# 635 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
OneIsland_PokemonCenter_1F_Movement_PlayerWalkToBillBottom:
# 636 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_right
# 637 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_up
# 638 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_up
# 639 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_in_place_faster_right
# 640 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	step_end

# 643 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
OneIsland_PokemonCenter_1F_Movement_DelayWalkInPlaceLeft:
# 644 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	delay_16
# 645 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	delay_16
# 646 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	delay_4
# 647 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_in_place_faster_left
# 648 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	step_end

OneIsland_PokemonCenter_1F_Movement_WalkInPlaceDown::
# 652 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_in_place_fast_down
# 653 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	step_end
	return


# 656 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
OneIsland_PokemonCenter_1F_Movement_PlayerExit:
# 657 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_left
# 658 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_left
# 659 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_left
# 660 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_left
# 661 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_down
# 662 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_down
# 663 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	step_end

# 666 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
OneIsland_PokemonCenter_1F_Movement_BillExit:
# 667 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_left
# 668 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_left
# 669 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_left
# 670 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_left
# 671 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_left
# 672 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_down
# 673 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	step_end

OneIsland_PokemonCenter_1F_Text_BillHeyThereCelio::
# 676 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "BILL: Hey, there!\n"
	.string "CELIO!$"

OneIsland_PokemonCenter_1F_Text_CelioCantBelieveYouCameOut::
# 681 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "CELIO: BILL!\n"
	.string "I can't believe you came out here.$"

OneIsland_PokemonCenter_1F_Text_BillHowsYourResearchComing::
# 686 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "BILL: Well, absolutely!\n"
	.string "How's your research coming along?\p"
	.string "…Oh, wait a sec.$"

OneIsland_PokemonCenter_1F_Text_ThisIsMyBuddyCelio::
# 692 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "{PLAYER}, this is my buddy CELIO.\n"
	.string "He's one dedicated PC MANIAC!$"

OneIsland_PokemonCenter_1F_Text_PlayerIsRisingPokemonChamp::
# 697 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "CELIO, this is {PLAYER}, a rising\n"
	.string "contender as the POKéMON CHAMP!$"

OneIsland_PokemonCenter_1F_Text_PlayerIsReigningPokemonChamp::
# 702 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "CELIO, this is {PLAYER}, the\n"
	.string "reigning POKéMON CHAMP!$"

OneIsland_PokemonCenter_1F_Text_CelioThatsReallyImpressive::
# 707 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "CELIO: That's really impressive.\p"
	.string "I hate to say it, but I have zero\n"
	.string "aptitude for battling.\p"
	.string "Anyways, I'm glad to meet you.$"

OneIsland_PokemonCenter_1F_Text_BillBringMeUpToSpeed::
# 714 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "BILL: So, bring me up to speed.\n"
	.string "How's your machine running?$"

OneIsland_PokemonCenter_1F_Text_CelioPCsCantLinkWithYours::
# 719 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "CELIO: It's running fine, but we're\n"
	.string "too remote out here.\p"
	.string "The PCs on this island just can't\n"
	.string "link with your PC, BILL.$"

OneIsland_PokemonCenter_1F_Text_BillLetMeHelpYou::
# 726 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "BILL: Oh, yeah?\n"
	.string "Okay, let me take a look-see.\p"
	.string "…Hang on here…\n"
	.string "I think we can make it work.\l"
	.string "Let me help you, okay?$"

OneIsland_PokemonCenter_1F_Text_CanYouDeliverThisMeteoritePlayer::
# 734 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "{PLAYER}, can I get you to wait for\n"
	.string "me just a bit?\p"
	.string "…Actually, can I get you to do\n"
	.string "me a favor?\p"
	.string "The island next to this one's\n"
	.string "called TWO ISLAND.\p"
	.string "There's a guy there that runs\n"
	.string "a GAME CORNER.\p"
	.string "He has this thing for rare rocks\n"
	.string "and gems.\p"
	.string "We keep in touch, being fellow\n"
	.string "maniacs.\p"
	.string "So, can I get you to deliver this\n"
	.string "METEORITE to him?$"

OneIsland_PokemonCenter_1F_Text_AcceptedMeteoriteFromBill::
# 751 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "{PLAYER} accepted the METEORITE\n"
	.string "from BILL.$"

OneIsland_PokemonCenter_1F_Text_CelioPleaseTakeThis::
# 756 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "CELIO: {PLAYER}, if you are going\n"
	.string "to TWO ISLAND, please take this.$"

OneIsland_PokemonCenter_1F_Text_PassLetsYouTravelBetweenIslands::
# 761 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "It's a PASS for the ferry service\n"
	.string "serving the local islands.\p"
	.string "It will let you travel between the\n"
	.string "ISLANDS ONE, TWO, and THREE.\p"
	.string "Oh, you should have this, too.$"

OneIsland_PokemonCenter_1F_Text_ReceivedExtraPageForTownMap::
# 769 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "{PLAYER} received an extra page\n"
	.string "for the TOWN MAP!$"

OneIsland_PokemonCenter_1F_Text_ReceivedTownMap::
# 774 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "{PLAYER} received\n"
	.string "a TOWN MAP!$"

OneIsland_PokemonCenter_1F_Text_BillCatchYouLater::
# 779 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "BILL: I'll catch you later!\n"
	.string "Say hi to the guy for me!$"

OneIsland_PokemonCenter_1F_Text_HmmHowAboutLikeThis::
# 784 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Hmm…\p"
	.string "How about we try this like this…$"

OneIsland_PokemonCenter_1F_Text_GotPCWorkingStrollAWhileMore::
# 789 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Oh, hey, {PLAYER}!\p"
	.string "Did you see?\n"
	.string "We got the PC working!\p"
	.string "I've got a few things to show\n"
	.string "CELIO here.\p"
	.string "Can you go out on a stroll or\n"
	.string "something for a while more?$"

OneIsland_PokemonCenter_1F_Text_SorryForBeingPoorHost::
# 799 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "I'm sorry for taking up so much of\n"
	.string "BILL's time.\p"
	.string "I'm also sorry for being such a \n"
	.string "poor host on your visit here.$"

OneIsland_PokemonCenter_1F_Text_UsualPCServicesUnavailable::
# 806 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "The usual PC services aren't\n"
	.string "available…$"

OneIsland_PokemonCenter_1F_Text_BillOhHeyPlayer::
# 811 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "BILL: Oh, hey!\n"
	.string "{PLAYER}!$"

OneIsland_PokemonCenter_1F_Text_BillWeGotItDone::
# 816 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "BILL: What kept you so long?\n"
	.string "Been out having a good time?\p"
	.string "We got it done.\n"
	.string "The PCs are up and running!$"

OneIsland_PokemonCenter_1F_Text_CelioJobWentQuick::
# 823 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "CELIO: The job went incredibly\n"
	.string "quick.\p"
	.string "BILL is one amazing guy…$"

OneIsland_PokemonCenter_1F_Text_BillYouveLearnedALot::
# 829 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "BILL: No, no! There was almost\n"
	.string "nothing left for me to do.\p"
	.string "CELIO, I have to hand it to you.\n"
	.string "You've learned a lot.$"

OneIsland_PokemonCenter_1F_Text_CelioOhReallyEhehe::
# 836 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "CELIO: Oh, really?\n"
	.string "Ehehe…$"

OneIsland_PokemonCenter_1F_Text_BillWeShouldHeadBackToKanto::
# 841 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "BILL: Well, there you have it.\n"
	.string "I'm finished with the job.\l"
	.string "We should head back to KANTO.\p"
	.string "CELIO, I'll be seeing you again.$"

OneIsland_PokemonCenter_1F_Text_CelioPromiseIllShowYouAroundSometime::
# 848 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "CELIO: {PLAYER}, I'm really sorry\n"
	.string "that we sent you off alone today.\p"
	.string "I promise, I will show you around\n"
	.string "these islands sometime.$"

OneIsland_PokemonCenter_1F_Text_CelioImModifyingMyNetworkMachine::
# 855 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "CELIO: Hello!\n"
	.string "You look awfully busy as always.\p"
	.string "How am I doing?\p"
	.string "Well, I'm modifying my Network\n"
	.string "Machine.\p"
	.string "When I get done with the machine,\n"
	.string "I hope you'll be first to use it,\l"
	.string "{PLAYER}.$"

OneIsland_PokemonCenter_1F_Text_CelioCaughtMoreMonMaybeICanBeUseful::
# 866 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "CELIO: {PLAYER}, how have things\n"
	.string "been for you?\p"
	.string "Oh, is that right?\n"
	.string "You've caught more POKéMON.\p"
	.string "Do you know what?\n"
	.string "Maybe I can be useful to you.$"

OneIsland_PokemonCenter_1F_Text_YoullBeTradingFromTrainersFarAway::
# 875 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "I'm modifying the Network Machine\n"
	.string "right now.\p"
	.string "I'm changing it so it can handle\n"
	.string "trades over long distances.\p"
	.string "When I get finished, you'll be\n"
	.string "trading for exotic POKéMON from\l"
	.string "TRAINERS far away.$"

OneIsland_PokemonCenter_1F_Text_NeedsSpecialGemstone::
# 885 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "But, there is a slight catch.\p"
	.string "For the link to work, the Machine\n"
	.string "needs a special gemstone.\p"
	.string "It's supposed to be on ONE ISLAND,\n"
	.string "but I haven't found one yet.\p"
	.string "Who knows where it could be.$"

OneIsland_PokemonCenter_1F_Text_TryingToFindGem::
# 894 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "I was trying to find the gem\n"
	.string "even while I was studying.\p"
	.string "As a result, I've made no headway\n"
	.string "in both my search and studies…\p"
	.string "If I relied on BILL, I'm sure my\n"
	.string "research would progress.\p"
	.string "But this time, I want to try to do\n"
	.string "things by myself.$"

OneIsland_PokemonCenter_1F_Text_OhThats::
# 905 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Oh!\n"
	.string "Th-that's…$"

OneIsland_PokemonCenter_1F_Text_HandedRubyToCelio::
# 910 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "{PLAYER} handed the RUBY\n"
	.string "to CELIO.$"

OneIsland_PokemonCenter_1F_Text_MayIAskOneMoreFavor::
# 915 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Thank you!\n"
	.string "{PLAYER}, you're simply amazing.\p"
	.string "… … …  … … …\p"
	.string "Um… May I ask one more giant favor\n"
	.string "of you?$"

OneIsland_PokemonCenter_1F_Text_PleaseINeedYourHelp::
# 923 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "It… It's not anything weird.\n"
	.string "Please, I need your help.$"

OneIsland_PokemonCenter_1F_Text_AnotherGemstoneInSeviiIslands::
# 928 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "While I was studying gemstones,\n"
	.string "I discovered something important.\p"
	.string "There is another gem that forms\n"
	.string "a pair with this RUBY.\p"
	.string "That other gemstone is supposed to\n"
	.string "be in the SEVII ISLANDS.\p"
	.string "{PLAYER}, please, I need you to go\n"
	.string "find the other gem.\p"
	.string "{PLAYER}, may I have your ferry\n"
	.string "PASS and the TOWN MAP?$"

OneIsland_PokemonCenter_1F_Text_ReturnedTriPassForRainbowPass::
# 941 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "{PLAYER} returned the TRI-PASS and\n"
	.string "received the RAINBOW PASS.$"

OneIsland_PokemonCenter_1F_Text_ObtainedExtraMapPage::
# 946 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Obtained an extra page for the\n"
	.string "TOWN MAP!$"

OneIsland_PokemonCenter_1F_Text_PassLetYouGetToAllIslands::
# 951 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "This is my own ferry PASS.\p"
	.string "It will let you get to all the\n"
	.string "SEVII ISLANDS.\p"
	.string "{PLAYER}, please, I can't do\n"
	.string "it without your help.$"

OneIsland_PokemonCenter_1F_Text_HandedSapphireToCelio::
# 959 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "{PLAYER} handed the SAPPHIRE\n"
	.string "to CELIO.$"

OneIsland_PokemonCenter_1F_Text_ThankYouGiveMeTime::
# 964 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "CELIO: So this is the gem that\n"
	.string "forms a pair with the RUBY…\p"
	.string "{PLAYER}, you've gone through a lot\n"
	.string "to get this, didn't you?\p"
	.string "You don't have to tell me. I know\n"
	.string "it wasn't easy.\p"
	.string "Thank you so much!\p"
	.string "Now it's my turn to work for you!\n"
	.string "Please give me a little time.$"

OneIsland_PokemonCenter_1F_Text_OkayThisIsGood::
# 976 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Okay, this is good…$"

OneIsland_PokemonCenter_1F_Text_LinkedUpWithLanette::
# 980 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "I did it!\n"
	.string "I linked up with LANETTE!$"

OneIsland_PokemonCenter_1F_Text_ManagedToLinkWithHoennThankYou::
# 985 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "{PLAYER}…\n"
	.string "{PLAYER}, I did it!\p"
	.string "I've managed to link up with\n"
	.string "TRAINERS in the HOENN region!\p"
	.string "Finally, the Network Machine is\n"
	.string "fully operational!\p"
	.string "{PLAYER}, I owe it all to you!\p"
	.string "Thanks to you, my dream came\n"
	.string "true…$"

OneIsland_PokemonCenter_1F_Text_WishYouBestOfLuck::
# 997 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "I…\n"
	.string "I'm not crying.\p"
	.string "That's enough about me!\p"
	.string "{PLAYER}, you're going to keep\n"
	.string "looking for exotic POKéMON, right?\p"
	.string "I wish you the best of luck!$"

OneIsland_PokemonCenter_1F_Text_CelioHearingRumorsAboutYou::
# 1006 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "CELIO: Hello!\p"
	.string "{PLAYER}, I've been hearing rumors\n"
	.string "about you.$"

OneIsland_PokemonCenter_1F_Text_BillsFirstMonWasAbra::
# 1012 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "{PLAYER}, what's your favorite kind\n"
	.string "of POKéMON?\p"
	.string "BILL is a POKéMANIAC, so he loves\n"
	.string "every kind.\p"
	.string "Apparently, the first one he caught\n"
	.string "was an ABRA.$"

OneIsland_PokemonCenter_1F_Text_BillsHometownInGoldenrod::
# 1021 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "By the way, {PLAYER}, you're from\n"
	.string "PALLET TOWN, aren't you?\p"
	.string "I've heard that it's a quiet and\n"
	.string "pleasant place.\p"
	.string "BILL's hometown is GOLDENROD CITY,\n"
	.string "where his folks still live.\p"
	.string "I've heard that it's quite the\n"
	.string "festive, bustling city.\p"
	.string "I'd like to go there one day.$"

OneIsland_PokemonCenter_1F_Text_BillCantStomachMilk::
# 1033 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "{PLAYER}, is there anything that\n"
	.string "you can't stand?\p"
	.string "Apparently, BILL simply can't\n"
	.string "stomach milk at all.$"

OneIsland_PokemonCenter_1F_Text_CameFromPalletDontKnowIt::
# 1040 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Oh, you're a stranger here!\n"
	.string "Hi! Where did you come from?\p"
	.string "…PALLET TOWN?\n"
	.string "I don't know it!$"

OneIsland_PokemonCenter_1F_Text_EnormousVolcanoOnIsland::
# 1047 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "On this island, there's an enormous\n"
	.string "volcano.\p"
	.string "It hasn't erupted lately, so why\n"
	.string "not enjoy a hike?$"

OneIsland_PokemonCenter_1F_Text_WishICouldTradeWithBoyfriend::
# 1054 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "I wish I could trade POKéMON with\n"
	.string "my boyfriend who lives far away…$"

OneIsland_PokemonCenter_1F_Text_TradedWithFarAwayBoyfriend::
# 1059 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "I traded POKéMON with my boyfriend\n"
	.string "far away!\p"
	.string "Everyone's saying that we can\n"
	.string "thank you and CELIO.\p"
	.string "So, thank you!$"

OneIsland_PokemonCenter_1F_Text_MachineUnderAdjustment::
# 1067 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Network Machine\n"
	.string "Link Level 0\p"
	.string "…POKéMON Storage System under\n"
	.string "adjustment…$"

OneIsland_PokemonCenter_1F_Text_MachineLinkedWithKanto::
# 1074 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Network Machine\n"
	.string "Link Level 1\p"
	.string "Link established with the KANTO\n"
	.string "region.$"

OneIsland_PokemonCenter_1F_Text_MachineLinkedWithKantoAndHoenn::
# 1081 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Network Machine\n"
	.string "Link Level 2\p"
	.string "Link established with the KANTO\n"
	.string "and HOENN regions.$"

OneIsland_PokemonCenter_1F_Text_ObtainedTriPass::
# 1088 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Obtained the TRI-PASS!$"
