# 1 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 2 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_MapScripts::
# 3 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 2 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 4 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route124_DivingTreasureHuntersHouse_OnTransition
# 5 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	.byte 0
# 6 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 7 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 8 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_OnTransition::
# 9 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 6 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 10 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	setflag FLAG_LANDMARK_HUNTERS_HOUSE
# 11 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	end
# 12 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 13 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 14 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_TreasureHunter::
# 15 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 11 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 16 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	lock
# 17 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 12 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 18 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	faceplayer
# 19 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 13 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 20 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto_if_set FLAG_MET_DIVING_TREASURE_HUNTER, Route124_DivingTreasureHuntersHouse_EventScript_TreasureHunter_2
# 21 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_TreasureHunter_1:
# 22 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 16 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 23 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	msgbox Route124_DivingTreasureHuntersHouse_Text_Greeting, MSGBOX_DEFAULT
# 24 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 17 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 25 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	setflag FLAG_MET_DIVING_TREASURE_HUNTER
# 26 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 18 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 27 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_CheckPlayerHasShard
# 28 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	end
# 29 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 30 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_TreasureHunter_2:
# 31 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 14 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 32 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_SkipGreeting
# 33 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_TreasureHunter_1
# 34 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 35 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 36 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_SkipGreeting::
# 37 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 23 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 38 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	msgbox Route124_DivingTreasureHuntersHouse_Text_HaveYouSeenAnyShards, MSGBOX_DEFAULT
# 39 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 24 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 40 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_CheckPlayerHasShard
# 41 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	end
# 42 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 43 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 44 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_CheckPlayerHasShard::
# 45 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 29 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 46 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	call Route124_DivingTreasureHuntersHouse_EventScript_GetPlayersShards
# 47 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 30 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 48 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	compare VAR_TEMP_1, 0
# 49 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto_if_eq Route124_DivingTreasureHuntersHouse_EventScript_CheckPlayerHasShard_2
# 50 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_CheckPlayerHasShard_1:
# 51 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 33 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 52 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_HasShard
# 53 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	end
# 54 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 55 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_CheckPlayerHasShard_2:
# 56 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 31 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 57 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_NoShards
# 58 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_CheckPlayerHasShard_1
# 59 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 60 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 61 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_GetPlayersShards::
# 62 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 38 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 63 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	setvar VAR_TEMP_1, 0
# 64 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 39 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 65 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	checkitem ITEM_RED_SHARD
# 66 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 40 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 67 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	compare VAR_RESULT, TRUE
# 68 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto_if_eq Route124_DivingTreasureHuntersHouse_EventScript_GetPlayersShards_2
# 69 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_GetPlayersShards_1:
# 70 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 43 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 71 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	checkitem ITEM_YELLOW_SHARD
# 72 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 44 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 73 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	compare VAR_RESULT, TRUE
# 74 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto_if_eq Route124_DivingTreasureHuntersHouse_EventScript_GetPlayersShards_5
# 75 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_GetPlayersShards_4:
# 76 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 47 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 77 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	checkitem ITEM_BLUE_SHARD
# 78 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 48 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 79 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	compare VAR_RESULT, TRUE
# 80 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto_if_eq Route124_DivingTreasureHuntersHouse_EventScript_GetPlayersShards_8
# 81 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_GetPlayersShards_7:
# 82 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 51 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 83 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	checkitem ITEM_GREEN_SHARD
# 84 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 52 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 85 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	compare VAR_RESULT, TRUE
# 86 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto_if_eq Route124_DivingTreasureHuntersHouse_EventScript_GetPlayersShards_11
# 87 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_GetPlayersShards_10:
# 88 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	return
# 89 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 90 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_GetPlayersShards_2:
# 91 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 41 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 92 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	call Route124_DivingTreasureHuntersHouse_EventScript_HasRedShard
# 93 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_GetPlayersShards_1
# 94 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 95 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_GetPlayersShards_5:
# 96 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 45 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 97 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	call Route124_DivingTreasureHuntersHouse_EventScript_HasYellowShard
# 98 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_GetPlayersShards_4
# 99 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 100 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_GetPlayersShards_8:
# 101 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 49 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 102 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	call Route124_DivingTreasureHuntersHouse_EventScript_HasBlueShard
# 103 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_GetPlayersShards_7
# 104 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 105 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_GetPlayersShards_11:
# 106 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 53 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 107 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	call Route124_DivingTreasureHuntersHouse_EventScript_HasGreenShard
# 108 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_GetPlayersShards_10
# 109 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 110 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 111 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_HasRedShard::
# 112 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 59 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 113 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	addvar VAR_TEMP_1, 1
# 114 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	return
# 115 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 116 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 117 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_HasYellowShard::
# 118 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 64 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 119 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	addvar VAR_TEMP_1, 2
# 120 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	return
# 121 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 122 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 123 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_HasBlueShard::
# 124 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 69 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 125 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	addvar VAR_TEMP_1, 4
# 126 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	return
# 127 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 128 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 129 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_HasGreenShard::
# 130 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 74 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 131 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	addvar VAR_TEMP_1, 8
# 132 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	return
# 133 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 134 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 135 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_HasShard::
# 136 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 79 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 137 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	msgbox Route124_DivingTreasureHuntersHouse_Text_ThatsAShardIllTradeYou, MSGBOX_DEFAULT
# 138 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 80 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 139 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_ShowTradeOptions
# 140 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	end
# 141 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 142 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 143 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_ShowTradeOptions::
# 144 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 85 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 145 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	message Route124_DivingTreasureHuntersHouse_Text_WhatDoYouWantToTrade
# 146 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 86 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 147 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	waitmessage
# 148 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 87 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 149 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	switch VAR_TEMP_1
# 150 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 88 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 151 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 1, Route124_DivingTreasureHuntersHouse_EventScript_ShowTradeOptions_3
# 152 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 90 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 153 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 2, Route124_DivingTreasureHuntersHouse_EventScript_ShowTradeOptions_4
# 154 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 92 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 155 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 3, Route124_DivingTreasureHuntersHouse_EventScript_ShowTradeOptions_5
# 156 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 94 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 157 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 4, Route124_DivingTreasureHuntersHouse_EventScript_ShowTradeOptions_6
# 158 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 96 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 159 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 5, Route124_DivingTreasureHuntersHouse_EventScript_ShowTradeOptions_7
# 160 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 98 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 161 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 6, Route124_DivingTreasureHuntersHouse_EventScript_ShowTradeOptions_8
# 162 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 100 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 163 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 7, Route124_DivingTreasureHuntersHouse_EventScript_ShowTradeOptions_9
# 164 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 102 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 165 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 8, Route124_DivingTreasureHuntersHouse_EventScript_ShowTradeOptions_10
# 166 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 104 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 167 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 9, Route124_DivingTreasureHuntersHouse_EventScript_ShowTradeOptions_11
# 168 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 106 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 169 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 10, Route124_DivingTreasureHuntersHouse_EventScript_ShowTradeOptions_12
# 170 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 108 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 171 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 11, Route124_DivingTreasureHuntersHouse_EventScript_ShowTradeOptions_13
# 172 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 110 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 173 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 12, Route124_DivingTreasureHuntersHouse_EventScript_ShowTradeOptions_14
# 174 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 112 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 175 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 13, Route124_DivingTreasureHuntersHouse_EventScript_ShowTradeOptions_15
# 176 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 114 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 177 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 14, Route124_DivingTreasureHuntersHouse_EventScript_ShowTradeOptions_16
# 178 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 116 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 179 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 15, Route124_DivingTreasureHuntersHouse_EventScript_ShowTradeOptions_17
# 180 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_ShowTradeOptions_1:
# 181 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	end
# 182 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 183 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_ShowTradeOptions_3:
# 184 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 89 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 185 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsR
# 186 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_ShowTradeOptions_1
# 187 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 188 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_ShowTradeOptions_4:
# 189 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 91 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 190 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsY
# 191 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_ShowTradeOptions_1
# 192 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 193 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_ShowTradeOptions_5:
# 194 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 93 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 195 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsRY
# 196 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_ShowTradeOptions_1
# 197 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 198 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_ShowTradeOptions_6:
# 199 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 95 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 200 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsB
# 201 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_ShowTradeOptions_1
# 202 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 203 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_ShowTradeOptions_7:
# 204 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 97 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 205 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsRB
# 206 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_ShowTradeOptions_1
# 207 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 208 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_ShowTradeOptions_8:
# 209 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 99 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 210 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsYB
# 211 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_ShowTradeOptions_1
# 212 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 213 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_ShowTradeOptions_9:
# 214 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 101 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 215 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsRYB
# 216 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_ShowTradeOptions_1
# 217 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 218 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_ShowTradeOptions_10:
# 219 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 103 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 220 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsG
# 221 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_ShowTradeOptions_1
# 222 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 223 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_ShowTradeOptions_11:
# 224 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 105 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 225 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsRG
# 226 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_ShowTradeOptions_1
# 227 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 228 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_ShowTradeOptions_12:
# 229 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 107 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 230 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsYG
# 231 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_ShowTradeOptions_1
# 232 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 233 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_ShowTradeOptions_13:
# 234 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 109 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 235 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsRYG
# 236 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_ShowTradeOptions_1
# 237 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 238 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_ShowTradeOptions_14:
# 239 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 111 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 240 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsBG
# 241 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_ShowTradeOptions_1
# 242 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 243 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_ShowTradeOptions_15:
# 244 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 113 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 245 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsRBG
# 246 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_ShowTradeOptions_1
# 247 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 248 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_ShowTradeOptions_16:
# 249 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 115 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 250 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsYBG
# 251 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_ShowTradeOptions_1
# 252 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 253 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_ShowTradeOptions_17:
# 254 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 117 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 255 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsRYBG
# 256 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_ShowTradeOptions_1
# 257 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 258 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 259 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsR::
# 260 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 123 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 261 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	multichoice 0, 0, MULTI_SHARDS_R, FALSE
# 262 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 124 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 263 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	switch VAR_RESULT
# 264 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 125 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 265 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 0, Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsR_3
# 266 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 127 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 267 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 1, Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsR_4
# 268 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsR_1:
# 269 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 130 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 270 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_DeclineTrade
# 271 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	end
# 272 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 273 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsR_3:
# 274 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 126 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 275 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_TradeRedShard
# 276 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsR_1
# 277 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 278 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsR_4:
# 279 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 128 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 280 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_DeclineTrade
# 281 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsR_1
# 282 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 283 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 284 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsY::
# 285 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 135 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 286 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	multichoice 0, 0, MULTI_SHARDS_Y, FALSE
# 287 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 136 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 288 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	switch VAR_RESULT
# 289 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 137 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 290 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 0, Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsY_3
# 291 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 139 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 292 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 1, Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsY_4
# 293 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsY_1:
# 294 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 142 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 295 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_DeclineTrade
# 296 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	end
# 297 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 298 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsY_3:
# 299 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 138 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 300 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_TradeYellowShard
# 301 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsY_1
# 302 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 303 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsY_4:
# 304 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 140 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 305 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_DeclineTrade
# 306 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsY_1
# 307 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 308 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 309 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsRY::
# 310 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 147 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 311 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	multichoice 0, 0, MULTI_SHARDS_RY, FALSE
# 312 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 148 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 313 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	switch VAR_RESULT
# 314 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 149 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 315 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 0, Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsRY_3
# 316 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 151 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 317 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 1, Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsRY_4
# 318 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 153 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 319 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 2, Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsRY_5
# 320 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsRY_1:
# 321 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 156 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 322 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_DeclineTrade
# 323 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	end
# 324 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 325 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsRY_3:
# 326 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 150 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 327 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_TradeRedShard
# 328 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsRY_1
# 329 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 330 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsRY_4:
# 331 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 152 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 332 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_TradeYellowShard
# 333 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsRY_1
# 334 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 335 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsRY_5:
# 336 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 154 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 337 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_DeclineTrade
# 338 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsRY_1
# 339 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 340 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 341 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsB::
# 342 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 161 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 343 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	multichoice 0, 0, MULTI_SHARDS_B, FALSE
# 344 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 162 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 345 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	switch VAR_RESULT
# 346 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 163 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 347 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 0, Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsB_3
# 348 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 165 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 349 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 1, Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsB_4
# 350 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsB_1:
# 351 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 168 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 352 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_DeclineTrade
# 353 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	end
# 354 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 355 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsB_3:
# 356 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 164 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 357 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_TradeBlueShard
# 358 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsB_1
# 359 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 360 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsB_4:
# 361 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 166 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 362 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_DeclineTrade
# 363 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsB_1
# 364 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 365 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 366 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsRB::
# 367 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 173 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 368 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	multichoice 0, 0, MULTI_SHARDS_RB, FALSE
# 369 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 174 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 370 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	switch VAR_RESULT
# 371 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 175 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 372 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 0, Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsRB_3
# 373 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 177 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 374 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 1, Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsRB_4
# 375 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 179 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 376 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 2, Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsRB_5
# 377 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsRB_1:
# 378 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 182 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 379 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_DeclineTrade
# 380 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	end
# 381 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 382 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsRB_3:
# 383 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 176 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 384 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_TradeRedShard
# 385 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsRB_1
# 386 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 387 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsRB_4:
# 388 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 178 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 389 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_TradeBlueShard
# 390 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsRB_1
# 391 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 392 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsRB_5:
# 393 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 180 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 394 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_DeclineTrade
# 395 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsRB_1
# 396 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 397 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 398 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsYB::
# 399 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 187 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 400 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	multichoice 0, 0, MULTI_SHARDS_YB, FALSE
# 401 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 188 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 402 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	switch VAR_RESULT
# 403 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 189 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 404 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 0, Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsYB_3
# 405 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 191 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 406 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 1, Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsYB_4
# 407 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 193 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 408 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 2, Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsYB_5
# 409 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsYB_1:
# 410 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 196 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 411 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_DeclineTrade
# 412 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	end
# 413 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 414 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsYB_3:
# 415 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 190 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 416 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_TradeYellowShard
# 417 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsYB_1
# 418 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 419 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsYB_4:
# 420 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 192 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 421 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_TradeBlueShard
# 422 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsYB_1
# 423 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 424 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsYB_5:
# 425 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 194 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 426 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_DeclineTrade
# 427 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsYB_1
# 428 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 429 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 430 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsRYB::
# 431 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 201 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 432 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	multichoice 0, 0, MULTI_SHARDS_RYB, FALSE
# 433 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 202 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 434 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	switch VAR_RESULT
# 435 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 203 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 436 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 0, Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsRYB_3
# 437 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 205 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 438 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 1, Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsRYB_4
# 439 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 207 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 440 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 2, Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsRYB_5
# 441 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 209 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 442 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 3, Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsRYB_6
# 443 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsRYB_1:
# 444 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 212 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 445 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_DeclineTrade
# 446 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	end
# 447 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 448 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsRYB_3:
# 449 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 204 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 450 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_TradeRedShard
# 451 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsRYB_1
# 452 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 453 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsRYB_4:
# 454 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 206 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 455 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_TradeYellowShard
# 456 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsRYB_1
# 457 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 458 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsRYB_5:
# 459 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 208 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 460 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_TradeBlueShard
# 461 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsRYB_1
# 462 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 463 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsRYB_6:
# 464 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 210 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 465 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_DeclineTrade
# 466 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsRYB_1
# 467 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 468 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 469 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsG::
# 470 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 217 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 471 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	multichoice 0, 0, MULTI_SHARDS_G, FALSE
# 472 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 218 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 473 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	switch VAR_RESULT
# 474 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 219 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 475 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 0, Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsG_3
# 476 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 221 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 477 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 1, Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsG_4
# 478 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsG_1:
# 479 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 224 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 480 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_DeclineTrade
# 481 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	end
# 482 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 483 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsG_3:
# 484 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 220 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 485 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_TradeGreenShard
# 486 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsG_1
# 487 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 488 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsG_4:
# 489 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 222 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 490 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_DeclineTrade
# 491 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsG_1
# 492 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 493 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 494 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsRG::
# 495 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 229 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 496 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	multichoice 0, 0, MULTI_SHARDS_RG, FALSE
# 497 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 230 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 498 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	switch VAR_RESULT
# 499 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 231 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 500 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 0, Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsRG_3
# 501 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 233 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 502 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 1, Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsRG_4
# 503 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 235 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 504 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 2, Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsRG_5
# 505 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsRG_1:
# 506 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 238 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 507 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_DeclineTrade
# 508 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	end
# 509 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 510 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsRG_3:
# 511 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 232 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 512 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_TradeRedShard
# 513 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsRG_1
# 514 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 515 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsRG_4:
# 516 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 234 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 517 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_TradeGreenShard
# 518 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsRG_1
# 519 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 520 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsRG_5:
# 521 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 236 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 522 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_DeclineTrade
# 523 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsRG_1
# 524 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 525 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 526 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsYG::
# 527 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 243 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 528 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	multichoice 0, 0, MULTI_SHARDS_YG, FALSE
# 529 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 244 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 530 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	switch VAR_RESULT
# 531 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 245 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 532 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 0, Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsYG_3
# 533 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 247 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 534 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 1, Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsYG_4
# 535 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 249 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 536 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 2, Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsYG_5
# 537 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsYG_1:
# 538 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 252 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 539 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_DeclineTrade
# 540 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	end
# 541 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 542 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsYG_3:
# 543 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 246 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 544 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_TradeYellowShard
# 545 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsYG_1
# 546 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 547 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsYG_4:
# 548 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 248 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 549 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_TradeGreenShard
# 550 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsYG_1
# 551 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 552 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsYG_5:
# 553 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 250 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 554 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_DeclineTrade
# 555 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsYG_1
# 556 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 557 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 558 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsRYG::
# 559 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 257 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 560 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	multichoice 0, 0, MULTI_SHARDS_RYG, FALSE
# 561 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 258 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 562 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	switch VAR_RESULT
# 563 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 259 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 564 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 0, Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsRYG_3
# 565 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 261 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 566 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 1, Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsRYG_4
# 567 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 263 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 568 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 2, Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsRYG_5
# 569 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 265 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 570 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 3, Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsRYG_6
# 571 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsRYG_1:
# 572 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 268 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 573 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_DeclineTrade
# 574 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	end
# 575 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 576 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsRYG_3:
# 577 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 260 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 578 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_TradeRedShard
# 579 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsRYG_1
# 580 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 581 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsRYG_4:
# 582 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 262 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 583 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_TradeYellowShard
# 584 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsRYG_1
# 585 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 586 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsRYG_5:
# 587 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 264 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 588 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_TradeGreenShard
# 589 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsRYG_1
# 590 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 591 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsRYG_6:
# 592 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 266 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 593 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_DeclineTrade
# 594 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsRYG_1
# 595 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 596 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 597 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsBG::
# 598 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 273 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 599 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	multichoice 0, 0, MULTI_SHARDS_BG, FALSE
# 600 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 274 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 601 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	switch VAR_RESULT
# 602 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 275 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 603 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 0, Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsBG_3
# 604 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 277 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 605 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 1, Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsBG_4
# 606 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 279 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 607 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 2, Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsBG_5
# 608 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsBG_1:
# 609 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 282 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 610 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_DeclineTrade
# 611 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	end
# 612 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 613 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsBG_3:
# 614 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 276 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 615 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_TradeBlueShard
# 616 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsBG_1
# 617 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 618 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsBG_4:
# 619 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 278 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 620 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_TradeGreenShard
# 621 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsBG_1
# 622 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 623 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsBG_5:
# 624 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 280 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 625 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_DeclineTrade
# 626 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsBG_1
# 627 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 628 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 629 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsRBG::
# 630 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 287 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 631 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	multichoice 0, 0, MULTI_SHARDS_RBG, FALSE
# 632 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 288 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 633 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	switch VAR_RESULT
# 634 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 289 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 635 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 0, Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsRBG_3
# 636 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 291 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 637 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 1, Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsRBG_4
# 638 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 293 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 639 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 2, Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsRBG_5
# 640 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 295 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 641 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 3, Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsRBG_6
# 642 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsRBG_1:
# 643 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 298 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 644 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_DeclineTrade
# 645 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	end
# 646 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 647 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsRBG_3:
# 648 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 290 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 649 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_TradeRedShard
# 650 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsRBG_1
# 651 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 652 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsRBG_4:
# 653 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 292 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 654 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_TradeBlueShard
# 655 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsRBG_1
# 656 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 657 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsRBG_5:
# 658 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 294 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 659 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_TradeGreenShard
# 660 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsRBG_1
# 661 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 662 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsRBG_6:
# 663 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 296 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 664 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_DeclineTrade
# 665 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsRBG_1
# 666 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 667 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 668 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsYBG::
# 669 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 303 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 670 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	multichoice 0, 0, MULTI_SHARDS_YBG, FALSE
# 671 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 304 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 672 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	switch VAR_RESULT
# 673 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 305 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 674 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 0, Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsYBG_3
# 675 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 307 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 676 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 1, Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsYBG_4
# 677 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 309 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 678 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 2, Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsYBG_5
# 679 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 311 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 680 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 3, Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsYBG_6
# 681 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsYBG_1:
# 682 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 314 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 683 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_DeclineTrade
# 684 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	end
# 685 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 686 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsYBG_3:
# 687 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 306 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 688 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_TradeYellowShard
# 689 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsYBG_1
# 690 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 691 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsYBG_4:
# 692 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 308 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 693 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_TradeBlueShard
# 694 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsYBG_1
# 695 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 696 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsYBG_5:
# 697 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 310 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 698 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_TradeGreenShard
# 699 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsYBG_1
# 700 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 701 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsYBG_6:
# 702 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 312 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 703 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_DeclineTrade
# 704 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsYBG_1
# 705 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 706 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 707 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsRYBG::
# 708 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 319 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 709 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	multichoice 0, 0, MULTI_SHARDS_RYBG, FALSE
# 710 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 320 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 711 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	switch VAR_RESULT
# 712 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 321 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 713 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 0, Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsRYBG_3
# 714 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 323 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 715 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 1, Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsRYBG_4
# 716 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 325 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 717 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 2, Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsRYBG_5
# 718 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 327 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 719 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 3, Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsRYBG_6
# 720 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 329 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 721 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 4, Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsRYBG_7
# 722 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsRYBG_1:
# 723 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 332 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 724 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_DeclineTrade
# 725 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	end
# 726 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 727 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsRYBG_3:
# 728 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 322 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 729 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_TradeRedShard
# 730 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsRYBG_1
# 731 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 732 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsRYBG_4:
# 733 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 324 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 734 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_TradeYellowShard
# 735 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsRYBG_1
# 736 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 737 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsRYBG_5:
# 738 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 326 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 739 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_TradeBlueShard
# 740 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsRYBG_1
# 741 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 742 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsRYBG_6:
# 743 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 328 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 744 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_TradeGreenShard
# 745 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsRYBG_1
# 746 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 747 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsRYBG_7:
# 748 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 330 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 749 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_DeclineTrade
# 750 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsRYBG_1
# 751 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 752 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 753 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_TradeRedShard::
# 754 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 337 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 755 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	setvar VAR_0x8008, ITEM_RED_SHARD
# 756 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 338 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 757 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	setvar VAR_0x8009, ITEM_FIRE_STONE
# 758 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 339 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 759 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_TryTradeShard
# 760 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	return
# 761 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 762 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 763 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_TradeYellowShard::
# 764 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 343 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 765 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	setvar VAR_0x8008, ITEM_YELLOW_SHARD
# 766 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 344 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 767 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	setvar VAR_0x8009, ITEM_THUNDER_STONE
# 768 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 345 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 769 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_TryTradeShard
# 770 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	return
# 771 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 772 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 773 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_TradeBlueShard::
# 774 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 349 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 775 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	setvar VAR_0x8008, ITEM_BLUE_SHARD
# 776 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 350 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 777 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	setvar VAR_0x8009, ITEM_WATER_STONE
# 778 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 351 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 779 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_TryTradeShard
# 780 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	return
# 781 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 782 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 783 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_TradeGreenShard::
# 784 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 355 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 785 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	setvar VAR_0x8008, ITEM_GREEN_SHARD
# 786 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 356 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 787 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	setvar VAR_0x8009, ITEM_LEAF_STONE
# 788 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 357 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 789 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_TryTradeShard
# 790 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	return
# 791 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 792 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 793 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_TryTradeShard::
# 794 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 361 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 795 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	bufferitemname STR_VAR_1, VAR_0x8008
# 796 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 362 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 797 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	bufferitemname STR_VAR_2, VAR_0x8009
# 798 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 363 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 799 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	msgbox Route124_DivingTreasureHuntersHouse_Text_YoullTradeShardForStone, MSGBOX_YESNO
# 800 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 364 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 801 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	compare VAR_RESULT, NO
# 802 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto_if_eq Route124_DivingTreasureHuntersHouse_EventScript_TryTradeShard_2
# 803 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_TryTradeShard_1:
# 804 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 367 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 805 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	checkitemspace VAR_0x8009
# 806 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 368 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 807 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	compare VAR_RESULT, TRUE
# 808 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto_if_eq Route124_DivingTreasureHuntersHouse_EventScript_TryTradeShard_5
# 809 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_TryTradeShard_4:
# 810 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 371 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 811 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	checkitem VAR_0x8008, 2
# 812 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 372 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 813 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	compare VAR_RESULT, FALSE
# 814 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto_if_eq Route124_DivingTreasureHuntersHouse_EventScript_TryTradeShard_8
# 815 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_TryTradeShard_7:
# 816 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 375 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 817 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_BagFull
# 818 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	end
# 819 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 820 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_TryTradeShard_2:
# 821 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 365 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 822 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_DeclineTrade
# 823 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_TryTradeShard_1
# 824 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 825 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_TryTradeShard_5:
# 826 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 369 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 827 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_TradeShard
# 828 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_TryTradeShard_4
# 829 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 830 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_TryTradeShard_8:
# 831 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 373 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 832 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_TradeShard
# 833 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_TryTradeShard_7
# 834 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 835 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 836 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_TradeShard::
# 837 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 380 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 838 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	removeitem VAR_0x8008
# 839 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 381 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 840 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	giveitem VAR_0x8009
# 841 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 382 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 842 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	msgbox Route124_DivingTreasureHuntersHouse_Text_ItsADeal, MSGBOX_DEFAULT
# 843 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 383 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 844 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	call Route124_DivingTreasureHuntersHouse_EventScript_GetPlayersShards
# 845 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 384 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 846 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	compare VAR_TEMP_1, 0
# 847 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto_if_eq Route124_DivingTreasureHuntersHouse_EventScript_TradeShard_2
# 848 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_TradeShard_1:
# 849 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 387 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 850 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	msgbox Route124_DivingTreasureHuntersHouse_Text_TradeSomethingElse, MSGBOX_YESNO
# 851 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 388 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 852 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	compare VAR_RESULT, YES
# 853 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto_if_eq Route124_DivingTreasureHuntersHouse_EventScript_TradeShard_5
# 854 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_TradeShard_4:
# 855 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 391 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 856 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_DeclineTrade
# 857 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	end
# 858 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 859 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_TradeShard_2:
# 860 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 385 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 861 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_EndTrade
# 862 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_TradeShard_1
# 863 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 864 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_TradeShard_5:
# 865 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 389 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 866 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_ShowTradeOptions
# 867 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_TradeShard_4
# 868 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 869 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 870 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_BagFull::
# 871 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 396 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 872 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	msgbox Route124_DivingTreasureHuntersHouse_Text_BagFull, MSGBOX_DEFAULT
# 873 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 397 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 874 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	release
# 875 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	end
# 876 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 877 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 878 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_DeclineTrade::
# 879 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 402 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 880 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	msgbox Route124_DivingTreasureHuntersHouse_Text_ComeBackIfYouChangeMind, MSGBOX_DEFAULT
# 881 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 403 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 882 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	release
# 883 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	end
# 884 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 885 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 886 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_NoShards::
# 887 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 408 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 888 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	msgbox Route124_DivingTreasureHuntersHouse_Text_YouHaventGotAnyShards, MSGBOX_DEFAULT
# 889 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 409 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 890 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	release
# 891 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	end
# 892 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 893 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 894 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_EndTrade::
# 895 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 414 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 896 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	release
# 897 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	end
# 898 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 899 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 900 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_EventScript_ShardTradeBoard::
# 901 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 419 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 902 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	msgbox Route124_DivingTreasureHuntersHouse_Text_ShardTradeBoard, MSGBOX_SIGN
# 903 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	end
# 904 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 905 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 906 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_Text_Greeting::
# 907 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 423 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 908 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	.string "I'm the DIVING TREASURE HUNTER!\p"
# 909 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	.string "I'm the awesome dude who makes\n"
# 910 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	.string "deep-sea dives to gather treasures\l"
# 911 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	.string "resting at the bottom.$"
# 912 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 913 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_Text_HaveYouSeenAnyShards::
# 914 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 430 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 915 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	.string "Tell me, have you seen any SHARDS of\n"
# 916 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	.string "tools made in ancient times?$"
# 917 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 918 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_Text_YouHaventGotAnyShards::
# 919 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 435 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 920 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	.string "You haven't got any treasures\n"
# 921 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	.string "for me…\p"
# 922 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	.string "If you see any SHARDS, like the RED\n"
# 923 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	.string "SHARD, you've got to trade it with me!$"
# 924 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 925 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_Text_ThatsAShardIllTradeYou::
# 926 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 442 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 927 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	.string "Oh, hey! That…\n"
# 928 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	.string "That's a SHARD! I'm looking for those!\p"
# 929 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	.string "Oh, man, you've got to trade that\n"
# 930 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	.string "with me! I'll give you something good!$"
# 931 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 932 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_Text_WhatDoYouWantToTrade::
# 933 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 449 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 934 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	.string "What do you want to trade?$"
# 935 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 936 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_Text_YoullTradeShardForStone::
# 937 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 453 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 938 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	.string "You'll trade your {STR_VAR_1} for\n"
# 939 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	.string "my {STR_VAR_2}, then?$"
# 940 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 941 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_Text_ItsADeal::
# 942 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 458 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 943 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	.string "It's a done deal!\n"
# 944 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	.string "Use that wisely!$"
# 945 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 946 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_Text_TradeSomethingElse::
# 947 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 463 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 948 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	.string "Do you want to trade something else?$"
# 949 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 950 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_Text_BagFull::
# 951 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 467 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 952 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	.string "Whoops, your BAG's full.\n"
# 953 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	.string "Get rid of some items, friend!$"
# 954 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 955 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_Text_ComeBackIfYouChangeMind::
# 956 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 472 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 957 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	.string "No? That's a downer.\n"
# 958 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	.string "Well, if you change your mind, come back.$"
# 959 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"

# 960 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
Route124_DivingTreasureHuntersHouse_Text_ShardTradeBoard::
# 961 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 477 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
# 962 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	.string "{CLEAR_TO 0x0a}Wanted item{CLEAR_TO 0x7c}Trade item\n"
# 963 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	.string "{CLEAR_TO 0x0f}RED SHARD{CLEAR_TO 0x59}{LEFT_ARROW}{RIGHT_ARROW}{CLEAR_TO 0x7b}FIRE STONE{CLEAR_TO 0xc8}\p"
# 964 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	.string "{CLEAR_TO 0x0a}Wanted item{CLEAR_TO 0x7c}Trade item\n"
# 965 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	.string "{CLEAR_TO 0x06}YELLOW SHARD{CLEAR_TO 0x59}{LEFT_ARROW}{RIGHT_ARROW}{CLEAR_TO 0x73}THUNDERSTONE{CLEAR_TO 0xc8}\p"
# 966 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	.string "{CLEAR_TO 0x0a}Wanted item{CLEAR_TO 0x7c}Trade item\n"
# 967 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	.string "{CLEAR_TO 0x0c}BLUE SHARD{CLEAR_TO 0x59}{LEFT_ARROW}{RIGHT_ARROW}{CLEAR_TO 0x79}WATER STONE{CLEAR_TO 0xc8}\p"
# 968 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	.string "{CLEAR_TO 0x0a}Wanted item{CLEAR_TO 0x7c}Trade item\n"
# 969 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	.string "{CLEAR_TO 0x08}GREEN SHARD{CLEAR_TO 0x59}{LEFT_ARROW}{RIGHT_ARROW}{CLEAR_TO 0x7b}LEAF STONE$"
