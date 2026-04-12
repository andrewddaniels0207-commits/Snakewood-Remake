# 1 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 2 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_MapScripts::
# 3 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.byte 0
# 4 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 5 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 6 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_Scott::
# 7 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 4 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 8 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	lock
# 9 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 5 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 10 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	faceplayer
# 11 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 6 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 12 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto_if_set FLAG_TEMP_4, BattleFrontier_ScottsHouse_EventScript_Scott_2
# 13 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_Scott_1:
# 14 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 9 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 15 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto_if_set FLAG_TEMP_3, BattleFrontier_ScottsHouse_EventScript_Scott_5
# 16 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_Scott_4:
# 17 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 12 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 18 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto_if_set FLAG_TEMP_2, BattleFrontier_ScottsHouse_EventScript_Scott_8
# 19 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_Scott_7:
# 20 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 15 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 21 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto BattleFrontier_ScottsHouse_EventScript_CheckGiveItems
# 22 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	end
# 23 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 24 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_Scott_2:
# 25 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 7 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 26 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto BattleFrontier_ScottsHouse_EventScript_GivenBerry
# 27 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto BattleFrontier_ScottsHouse_EventScript_Scott_1
# 28 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 29 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_Scott_5:
# 30 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 10 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 31 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto BattleFrontier_ScottsHouse_EventScript_GivenShield
# 32 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto BattleFrontier_ScottsHouse_EventScript_Scott_4
# 33 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 34 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_Scott_8:
# 35 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 13 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 36 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto BattleFrontier_ScottsHouse_EventScript_GivenBattlePoints
# 37 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto BattleFrontier_ScottsHouse_EventScript_Scott_7
# 38 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 39 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 40 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_CheckGiveItems::
# 41 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 20 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 42 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto_if_unset FLAG_SCOTT_GIVES_BATTLE_POINTS, BattleFrontier_ScottsHouse_EventScript_CheckGiveItems_2
# 43 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_CheckGiveItems_1:
# 44 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 23 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 45 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto_if_unset FLAG_COLLECTED_ALL_SILVER_SYMBOLS, BattleFrontier_ScottsHouse_EventScript_CheckGiveItems_5
# 46 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_CheckGiveItems_4:
# 47 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 26 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 48 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto_if_unset FLAG_COLLECTED_ALL_GOLD_SYMBOLS, BattleFrontier_ScottsHouse_EventScript_CheckGiveItems_8
# 49 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_CheckGiveItems_7:
# 50 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 29 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 51 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto BattleFrontier_ScottsHouse_EventScript_CheckGiveShield
# 52 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	end
# 53 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 54 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_CheckGiveItems_2:
# 55 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 21 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 56 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto BattleFrontier_ScottsHouse_EventScript_WelcomeToFrontier
# 57 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto BattleFrontier_ScottsHouse_EventScript_CheckGiveItems_1
# 58 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 59 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_CheckGiveItems_5:
# 60 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 24 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 61 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto BattleFrontier_ScottsHouse_EventScript_CheckSilverSymbols
# 62 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto BattleFrontier_ScottsHouse_EventScript_CheckGiveItems_4
# 63 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 64 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_CheckGiveItems_8:
# 65 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 27 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 66 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto BattleFrontier_ScottsHouse_EventScript_CheckGoldSymbols
# 67 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto BattleFrontier_ScottsHouse_EventScript_CheckGiveItems_7
# 68 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 69 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 70 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_CheckGiveShield::
# 71 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 34 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 72 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto_if_unset FLAG_RECEIVED_SILVER_SHIELD, BattleFrontier_ScottsHouse_EventScript_CheckGiveShield_2
# 73 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_CheckGiveShield_1:
# 74 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 37 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 75 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto_if_unset FLAG_RECEIVED_GOLD_SHIELD, BattleFrontier_ScottsHouse_EventScript_CheckGiveShield_5
# 76 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_CheckGiveShield_4:
# 77 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 40 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 78 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto BattleFrontier_ScottsHouse_EventScript_RandomComment
# 79 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	end
# 80 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 81 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_CheckGiveShield_2:
# 82 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 35 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 83 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto BattleFrontier_ScottsHouse_EventScript_CheckGiveSilverShield
# 84 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto BattleFrontier_ScottsHouse_EventScript_CheckGiveShield_1
# 85 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 86 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_CheckGiveShield_5:
# 87 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 38 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 88 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto BattleFrontier_ScottsHouse_EventScript_CheckGiveGoldShield
# 89 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto BattleFrontier_ScottsHouse_EventScript_CheckGiveShield_4
# 90 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 91 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 92 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_CheckSilverSymbols::
# 93 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 45 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 94 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto_if_unset FLAG_SYS_TOWER_SILVER, BattleFrontier_ScottsHouse_EventScript_CheckSilverSymbols_2
# 95 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_CheckSilverSymbols_1:
# 96 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 48 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 97 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto_if_unset FLAG_SYS_DOME_SILVER, BattleFrontier_ScottsHouse_EventScript_CheckSilverSymbols_5
# 98 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_CheckSilverSymbols_4:
# 99 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 51 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 100 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto_if_unset FLAG_SYS_PALACE_SILVER, BattleFrontier_ScottsHouse_EventScript_CheckSilverSymbols_8
# 101 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_CheckSilverSymbols_7:
# 102 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 54 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 103 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto_if_unset FLAG_SYS_ARENA_SILVER, BattleFrontier_ScottsHouse_EventScript_CheckSilverSymbols_11
# 104 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_CheckSilverSymbols_10:
# 105 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 57 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 106 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto_if_unset FLAG_SYS_FACTORY_SILVER, BattleFrontier_ScottsHouse_EventScript_CheckSilverSymbols_14
# 107 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_CheckSilverSymbols_13:
# 108 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 60 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 109 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto_if_unset FLAG_SYS_PIKE_SILVER, BattleFrontier_ScottsHouse_EventScript_CheckSilverSymbols_17
# 110 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_CheckSilverSymbols_16:
# 111 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 63 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 112 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto_if_unset FLAG_SYS_PYRAMID_SILVER, BattleFrontier_ScottsHouse_EventScript_CheckSilverSymbols_20
# 113 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_CheckSilverSymbols_19:
# 114 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 66 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 115 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	msgbox BattleFrontier_ScottsHouse_Text_YouveCollectedAllSilverSymbols, MSGBOX_DEFAULT
# 116 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 67 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 117 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	giveitem ITEM_LANSAT_BERRY
# 118 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 68 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 119 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	compare VAR_RESULT, FALSE
# 120 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto_if_eq BattleFrontier_ScottsHouse_EventScript_CheckSilverSymbols_23
# 121 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_CheckSilverSymbols_22:
# 122 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 71 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 123 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	setflag FLAG_COLLECTED_ALL_SILVER_SYMBOLS
# 124 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 72 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 125 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	setflag FLAG_TEMP_4
# 126 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 73 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 127 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	release
# 128 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	end
# 129 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 130 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_CheckSilverSymbols_2:
# 131 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 46 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 132 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto BattleFrontier_ScottsHouse_EventScript_CheckGiveShield
# 133 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto BattleFrontier_ScottsHouse_EventScript_CheckSilverSymbols_1
# 134 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 135 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_CheckSilverSymbols_5:
# 136 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 49 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 137 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto BattleFrontier_ScottsHouse_EventScript_CheckGiveShield
# 138 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto BattleFrontier_ScottsHouse_EventScript_CheckSilverSymbols_4
# 139 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 140 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_CheckSilverSymbols_8:
# 141 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 52 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 142 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto BattleFrontier_ScottsHouse_EventScript_CheckGiveShield
# 143 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto BattleFrontier_ScottsHouse_EventScript_CheckSilverSymbols_7
# 144 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 145 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_CheckSilverSymbols_11:
# 146 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 55 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 147 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto BattleFrontier_ScottsHouse_EventScript_CheckGiveShield
# 148 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto BattleFrontier_ScottsHouse_EventScript_CheckSilverSymbols_10
# 149 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 150 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_CheckSilverSymbols_14:
# 151 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 58 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 152 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto BattleFrontier_ScottsHouse_EventScript_CheckGiveShield
# 153 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto BattleFrontier_ScottsHouse_EventScript_CheckSilverSymbols_13
# 154 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 155 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_CheckSilverSymbols_17:
# 156 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 61 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 157 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto BattleFrontier_ScottsHouse_EventScript_CheckGiveShield
# 158 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto BattleFrontier_ScottsHouse_EventScript_CheckSilverSymbols_16
# 159 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 160 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_CheckSilverSymbols_20:
# 161 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 64 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 162 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto BattleFrontier_ScottsHouse_EventScript_CheckGiveShield
# 163 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto BattleFrontier_ScottsHouse_EventScript_CheckSilverSymbols_19
# 164 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 165 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_CheckSilverSymbols_23:
# 166 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 69 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 167 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto BattleFrontier_ScottsHouse_EventScript_BerryPocketFull
# 168 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto BattleFrontier_ScottsHouse_EventScript_CheckSilverSymbols_22
# 169 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 170 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 171 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_CheckGoldSymbols::
# 172 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 78 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 173 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto_if_unset FLAG_SYS_TOWER_GOLD, BattleFrontier_ScottsHouse_EventScript_CheckGoldSymbols_2
# 174 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_CheckGoldSymbols_1:
# 175 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 81 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 176 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto_if_unset FLAG_SYS_DOME_GOLD, BattleFrontier_ScottsHouse_EventScript_CheckGoldSymbols_5
# 177 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_CheckGoldSymbols_4:
# 178 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 84 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 179 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto_if_unset FLAG_SYS_PALACE_GOLD, BattleFrontier_ScottsHouse_EventScript_CheckGoldSymbols_8
# 180 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_CheckGoldSymbols_7:
# 181 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 87 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 182 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto_if_unset FLAG_SYS_ARENA_GOLD, BattleFrontier_ScottsHouse_EventScript_CheckGoldSymbols_11
# 183 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_CheckGoldSymbols_10:
# 184 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 90 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 185 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto_if_unset FLAG_SYS_FACTORY_GOLD, BattleFrontier_ScottsHouse_EventScript_CheckGoldSymbols_14
# 186 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_CheckGoldSymbols_13:
# 187 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 93 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 188 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto_if_unset FLAG_SYS_PIKE_GOLD, BattleFrontier_ScottsHouse_EventScript_CheckGoldSymbols_17
# 189 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_CheckGoldSymbols_16:
# 190 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 96 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 191 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto_if_unset FLAG_SYS_PYRAMID_GOLD, BattleFrontier_ScottsHouse_EventScript_CheckGoldSymbols_20
# 192 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_CheckGoldSymbols_19:
# 193 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 99 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 194 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	msgbox BattleFrontier_ScottsHouse_Text_YouveCollectedAllGoldSymbols, MSGBOX_DEFAULT
# 195 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 100 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 196 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	giveitem ITEM_STARF_BERRY
# 197 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 101 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 198 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	compare VAR_RESULT, FALSE
# 199 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto_if_eq BattleFrontier_ScottsHouse_EventScript_CheckGoldSymbols_23
# 200 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_CheckGoldSymbols_22:
# 201 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 104 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 202 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	setflag FLAG_COLLECTED_ALL_GOLD_SYMBOLS
# 203 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 105 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 204 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	setflag FLAG_TEMP_4
# 205 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 106 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 206 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	release
# 207 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	end
# 208 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 209 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_CheckGoldSymbols_2:
# 210 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 79 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 211 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto BattleFrontier_ScottsHouse_EventScript_CheckGiveShield
# 212 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto BattleFrontier_ScottsHouse_EventScript_CheckGoldSymbols_1
# 213 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 214 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_CheckGoldSymbols_5:
# 215 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 82 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 216 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto BattleFrontier_ScottsHouse_EventScript_CheckGiveShield
# 217 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto BattleFrontier_ScottsHouse_EventScript_CheckGoldSymbols_4
# 218 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 219 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_CheckGoldSymbols_8:
# 220 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 85 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 221 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto BattleFrontier_ScottsHouse_EventScript_CheckGiveShield
# 222 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto BattleFrontier_ScottsHouse_EventScript_CheckGoldSymbols_7
# 223 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 224 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_CheckGoldSymbols_11:
# 225 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 88 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 226 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto BattleFrontier_ScottsHouse_EventScript_CheckGiveShield
# 227 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto BattleFrontier_ScottsHouse_EventScript_CheckGoldSymbols_10
# 228 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 229 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_CheckGoldSymbols_14:
# 230 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 91 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 231 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto BattleFrontier_ScottsHouse_EventScript_CheckGiveShield
# 232 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto BattleFrontier_ScottsHouse_EventScript_CheckGoldSymbols_13
# 233 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 234 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_CheckGoldSymbols_17:
# 235 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 94 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 236 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto BattleFrontier_ScottsHouse_EventScript_CheckGiveShield
# 237 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto BattleFrontier_ScottsHouse_EventScript_CheckGoldSymbols_16
# 238 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 239 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_CheckGoldSymbols_20:
# 240 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 97 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 241 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto BattleFrontier_ScottsHouse_EventScript_CheckGiveShield
# 242 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto BattleFrontier_ScottsHouse_EventScript_CheckGoldSymbols_19
# 243 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 244 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_CheckGoldSymbols_23:
# 245 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 102 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 246 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto BattleFrontier_ScottsHouse_EventScript_BerryPocketFull
# 247 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto BattleFrontier_ScottsHouse_EventScript_CheckGoldSymbols_22
# 248 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 249 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 250 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_BerryPocketFull::
# 251 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 111 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 252 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	msgbox BattleFrontier_ScottsHouse_Text_BerryPocketStuffed, MSGBOX_DEFAULT
# 253 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 112 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 254 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	release
# 255 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	end
# 256 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 257 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 258 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_GivenBerry::
# 259 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 117 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 260 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	msgbox BattleFrontier_ScottsHouse_Text_SoGladIBroughtYouHere, MSGBOX_DEFAULT
# 261 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 118 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 262 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	release
# 263 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	end
# 264 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 265 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 266 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_RandomComment::
# 267 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 123 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 268 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	random 3
# 269 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 124 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 270 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	compare VAR_RESULT, 1
# 271 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto_if_eq BattleFrontier_ScottsHouse_EventScript_RandomComment_2
# 272 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_RandomComment_1:
# 273 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 127 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 274 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	compare VAR_RESULT, 2
# 275 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto_if_eq BattleFrontier_ScottsHouse_EventScript_RandomComment_5
# 276 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_RandomComment_4:
# 277 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 130 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 278 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	msgbox BattleFrontier_ScottsHouse_Text_WhyIGoSeekingTrainers, MSGBOX_DEFAULT
# 279 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 131 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 280 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	release
# 281 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	end
# 282 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 283 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_RandomComment_2:
# 284 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 125 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 285 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto BattleFrontier_ScottsHouse_EventScript_FrontierBrainComment
# 286 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto BattleFrontier_ScottsHouse_EventScript_RandomComment_1
# 287 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 288 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_RandomComment_5:
# 289 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 128 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 290 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto BattleFrontier_ScottsHouse_EventScript_ArtisanCaveComment
# 291 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto BattleFrontier_ScottsHouse_EventScript_RandomComment_4
# 292 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 293 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 294 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_FrontierBrainComment::
# 295 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 136 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 296 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	msgbox BattleFrontier_ScottsHouse_Text_HaveYouMetFrontierBrain, MSGBOX_DEFAULT
# 297 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 137 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 298 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	release
# 299 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	end
# 300 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 301 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 302 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_ArtisanCaveComment::
# 303 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 142 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 304 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	msgbox BattleFrontier_ScottsHouse_Text_MayFindWildMonsInFrontier, MSGBOX_DEFAULT
# 305 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 143 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 306 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	release
# 307 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	end
# 308 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 309 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 310 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_CheckGiveSilverShield::
# 311 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 148 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 312 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	setvar VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES
# 313 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 149 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 314 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	frontier_set FRONTIER_DATA_LVL_MODE, FRONTIER_LVL_50
# 315 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 150 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 316 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	tower_get TOWER_DATA_WIN_STREAK
# 317 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 151 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 318 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	compare VAR_RESULT, 50
# 319 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto_if_ge BattleFrontier_ScottsHouse_EventScript_CheckGiveSilverShield_2
# 320 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_CheckGiveSilverShield_1:
# 321 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 154 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 322 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	frontier_set FRONTIER_DATA_LVL_MODE, FRONTIER_LVL_OPEN
# 323 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 155 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 324 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	tower_get TOWER_DATA_WIN_STREAK
# 325 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 156 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 326 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	compare VAR_RESULT, 50
# 327 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto_if_ge BattleFrontier_ScottsHouse_EventScript_CheckGiveSilverShield_5
# 328 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_CheckGiveSilverShield_4:
# 329 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 159 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 330 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto BattleFrontier_ScottsHouse_EventScript_RandomComment
# 331 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	end
# 332 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 333 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_CheckGiveSilverShield_2:
# 334 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 152 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 335 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto BattleFrontier_ScottsHouse_EventScript_GiveSilverShield
# 336 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto BattleFrontier_ScottsHouse_EventScript_CheckGiveSilverShield_1
# 337 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 338 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_CheckGiveSilverShield_5:
# 339 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 157 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 340 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto BattleFrontier_ScottsHouse_EventScript_GiveSilverShield
# 341 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto BattleFrontier_ScottsHouse_EventScript_CheckGiveSilverShield_4
# 342 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 343 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 344 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_GiveSilverShield::
# 345 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 164 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 346 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	msgbox BattleFrontier_ScottsHouse_Text_Beat50TrainersInARow, MSGBOX_DEFAULT
# 347 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 165 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 348 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	givedecoration DECOR_SILVER_SHIELD
# 349 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 166 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 350 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	compare VAR_RESULT, FALSE
# 351 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto_if_eq BattleFrontier_ScottsHouse_EventScript_GiveSilverShield_2
# 352 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_GiveSilverShield_1:
# 353 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 169 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 354 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	setflag FLAG_RECEIVED_SILVER_SHIELD
# 355 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 170 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 356 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	setflag FLAG_TEMP_3
# 357 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 171 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 358 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto BattleFrontier_ScottsHouse_EventScript_GivenShield
# 359 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	end
# 360 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 361 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_GiveSilverShield_2:
# 362 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 167 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 363 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto BattleFrontier_ScottsHouse_EventScript_NoRoomForShield
# 364 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto BattleFrontier_ScottsHouse_EventScript_GiveSilverShield_1
# 365 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 366 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 367 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_NoRoomForShield::
# 368 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 176 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 369 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	msgbox BattleFrontier_ScottsHouse_Text_ComeBackForThisLater, MSGBOX_DEFAULT
# 370 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 177 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 371 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	release
# 372 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	end
# 373 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 374 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 375 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_GivenShield::
# 376 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 182 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 377 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	msgbox BattleFrontier_ScottsHouse_Text_ExpectingToHearEvenGreaterThings, MSGBOX_DEFAULT
# 378 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 183 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 379 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	release
# 380 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	end
# 381 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 382 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 383 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_CheckGiveGoldShield::
# 384 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 188 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 385 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	setvar VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES
# 386 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 189 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 387 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	frontier_set FRONTIER_DATA_LVL_MODE, FRONTIER_LVL_50
# 388 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 190 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 389 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	tower_get TOWER_DATA_WIN_STREAK
# 390 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 191 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 391 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	compare VAR_RESULT, 100
# 392 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto_if_ge BattleFrontier_ScottsHouse_EventScript_CheckGiveGoldShield_2
# 393 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_CheckGiveGoldShield_1:
# 394 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 194 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 395 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	frontier_set FRONTIER_DATA_LVL_MODE, FRONTIER_LVL_OPEN
# 396 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 195 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 397 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	tower_get TOWER_DATA_WIN_STREAK
# 398 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 196 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 399 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	compare VAR_RESULT, 100
# 400 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto_if_ge BattleFrontier_ScottsHouse_EventScript_CheckGiveGoldShield_5
# 401 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_CheckGiveGoldShield_4:
# 402 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 199 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 403 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto BattleFrontier_ScottsHouse_EventScript_RandomComment
# 404 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	end
# 405 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 406 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_CheckGiveGoldShield_2:
# 407 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 192 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 408 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto BattleFrontier_ScottsHouse_EventScript_GiveGoldShield
# 409 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto BattleFrontier_ScottsHouse_EventScript_CheckGiveGoldShield_1
# 410 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 411 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_CheckGiveGoldShield_5:
# 412 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 197 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 413 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto BattleFrontier_ScottsHouse_EventScript_GiveGoldShield
# 414 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto BattleFrontier_ScottsHouse_EventScript_CheckGiveGoldShield_4
# 415 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 416 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 417 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_GiveGoldShield::
# 418 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 204 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 419 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	msgbox BattleFrontier_ScottsHouse_Text_Beat100TrainersInARow, MSGBOX_DEFAULT
# 420 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 205 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 421 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	givedecoration DECOR_GOLD_SHIELD
# 422 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 206 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 423 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	compare VAR_RESULT, FALSE
# 424 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto_if_eq BattleFrontier_ScottsHouse_EventScript_GiveGoldShield_2
# 425 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_GiveGoldShield_1:
# 426 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 209 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 427 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	setflag FLAG_RECEIVED_GOLD_SHIELD
# 428 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 210 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 429 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	setflag FLAG_TEMP_3
# 430 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 211 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 431 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto BattleFrontier_ScottsHouse_EventScript_GivenShield
# 432 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	end
# 433 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 434 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_GiveGoldShield_2:
# 435 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 207 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 436 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto BattleFrontier_ScottsHouse_EventScript_NoRoomForShield
# 437 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto BattleFrontier_ScottsHouse_EventScript_GiveGoldShield_1
# 438 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 439 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 440 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_GivenBattlePoints::
# 441 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 216 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 442 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	msgbox BattleFrontier_ScottsHouse_Text_ExpectingGreatThings, MSGBOX_DEFAULT
# 443 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 217 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 444 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	release
# 445 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	end
# 446 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 447 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 448 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_WelcomeToFrontier::
# 449 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 222 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 450 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	msgbox BattleFrontier_ScottsHouse_Text_WelcomeToBattleFrontier, MSGBOX_DEFAULT
# 451 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 223 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 452 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	closemessage
# 453 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 224 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 454 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	delay 30
# 455 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 225 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 456 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	compare VAR_FACING, DIR_NORTH
# 457 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto_if_eq BattleFrontier_ScottsHouse_EventScript_WelcomeToFrontier_2
# 458 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_WelcomeToFrontier_1:
# 459 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 228 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 460 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	compare VAR_FACING, DIR_SOUTH
# 461 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto_if_eq BattleFrontier_ScottsHouse_EventScript_WelcomeToFrontier_5
# 462 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_WelcomeToFrontier_4:
# 463 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 231 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 464 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	compare VAR_FACING, DIR_EAST
# 465 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto_if_eq BattleFrontier_ScottsHouse_EventScript_WelcomeToFrontier_8
# 466 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_WelcomeToFrontier_7:
# 467 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 234 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 468 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	compare VAR_FACING, DIR_WEST
# 469 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto_if_eq BattleFrontier_ScottsHouse_EventScript_WelcomeToFrontier_11
# 470 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_WelcomeToFrontier_10:
# 471 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 237 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 472 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	msgbox BattleFrontier_ScottsHouse_Text_HowMuchEffortItTookToMakeReal, MSGBOX_DEFAULT
# 473 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 238 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 474 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	applymovement LOCALID_SCOTTS_HOUSE_SCOTT, Common_Movement_FacePlayer
# 475 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 239 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 476 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	waitmovement 0
# 477 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 240 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 478 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	msgbox BattleFrontier_ScottsHouse_Text_HaveThisAsMementoOfOurPathsCrossing, MSGBOX_DEFAULT
# 479 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 241 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 480 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	compare VAR_SCOTT_STATE, 13
# 481 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto_if_eq BattleFrontier_ScottsHouse_EventScript_WelcomeToFrontier_14
# 482 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_WelcomeToFrontier_13:
# 483 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 244 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 484 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	compare VAR_SCOTT_STATE, 9
# 485 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto_if_ge BattleFrontier_ScottsHouse_EventScript_WelcomeToFrontier_17
# 486 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_WelcomeToFrontier_16:
# 487 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 247 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 488 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	compare VAR_SCOTT_STATE, 6
# 489 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto_if_ge BattleFrontier_ScottsHouse_EventScript_WelcomeToFrontier_20
# 490 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_WelcomeToFrontier_19:
# 491 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 250 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 492 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto BattleFrontier_ScottsHouse_EventScript_Give1BattlePoint
# 493 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	end
# 494 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 495 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_WelcomeToFrontier_2:
# 496 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 226 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 497 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	call BattleFrontier_ScottsHouse_EventScript_ScottFaceAwayNorth
# 498 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto BattleFrontier_ScottsHouse_EventScript_WelcomeToFrontier_1
# 499 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 500 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_WelcomeToFrontier_5:
# 501 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 229 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 502 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	call BattleFrontier_ScottsHouse_EventScript_ScottFaceAwaySouth
# 503 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto BattleFrontier_ScottsHouse_EventScript_WelcomeToFrontier_4
# 504 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 505 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_WelcomeToFrontier_8:
# 506 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 232 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 507 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	call BattleFrontier_ScottsHouse_EventScript_ScottFaceAwayEast
# 508 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto BattleFrontier_ScottsHouse_EventScript_WelcomeToFrontier_7
# 509 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 510 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_WelcomeToFrontier_11:
# 511 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 235 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 512 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	call BattleFrontier_ScottsHouse_EventScript_ScottFaceAwayWest
# 513 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto BattleFrontier_ScottsHouse_EventScript_WelcomeToFrontier_10
# 514 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 515 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_WelcomeToFrontier_14:
# 516 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 242 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 517 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto BattleFrontier_ScottsHouse_EventScript_Give4BattlePoints
# 518 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto BattleFrontier_ScottsHouse_EventScript_WelcomeToFrontier_13
# 519 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 520 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_WelcomeToFrontier_17:
# 521 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 245 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 522 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto BattleFrontier_ScottsHouse_EventScript_Give3BattlePoints
# 523 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto BattleFrontier_ScottsHouse_EventScript_WelcomeToFrontier_16
# 524 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 525 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_WelcomeToFrontier_20:
# 526 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 248 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 527 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto BattleFrontier_ScottsHouse_EventScript_Give2BattlePoints
# 528 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto BattleFrontier_ScottsHouse_EventScript_WelcomeToFrontier_19
# 529 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 530 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 531 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_Give4BattlePoints::
# 532 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 255 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 533 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	buffernumberstring STR_VAR_1, 4
# 534 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 256 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 535 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	setvar VAR_0x8004, 4
# 536 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 257 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 537 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto BattleFrontier_ScottsHouse_EventScript_GiveBattlePoints
# 538 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	end
# 539 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 540 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 541 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_Give3BattlePoints::
# 542 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 262 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 543 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	buffernumberstring STR_VAR_1, 3
# 544 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 263 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 545 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	setvar VAR_0x8004, 3
# 546 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 264 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 547 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto BattleFrontier_ScottsHouse_EventScript_GiveBattlePoints
# 548 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	end
# 549 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 550 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 551 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_Give2BattlePoints::
# 552 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 269 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 553 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	buffernumberstring STR_VAR_1, 2
# 554 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 270 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 555 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	setvar VAR_0x8004, 2
# 556 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 271 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 557 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto BattleFrontier_ScottsHouse_EventScript_GiveBattlePoints
# 558 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	end
# 559 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 560 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 561 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_Give1BattlePoint::
# 562 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 276 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 563 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	buffernumberstring STR_VAR_1, 1
# 564 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 277 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 565 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	setvar VAR_0x8004, 1
# 566 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 278 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 567 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto BattleFrontier_ScottsHouse_EventScript_GiveBattlePoints
# 568 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	end
# 569 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 570 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 571 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_GiveBattlePoints::
# 572 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 283 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 573 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	special GiveFrontierBattlePoints
# 574 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 284 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 575 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	msgbox BattleFrontier_ScottsHouse_Text_ObtainedXBattlePoints, MSGBOX_GETPOINTS
# 576 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 285 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 577 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	msgbox BattleFrontier_ScottsHouse_Text_ExplainBattlePoints, MSGBOX_DEFAULT
# 578 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 286 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 579 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	setflag FLAG_SCOTT_GIVES_BATTLE_POINTS
# 580 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 287 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 581 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	setflag FLAG_TEMP_2
# 582 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 288 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 583 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	release
# 584 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	end
# 585 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 586 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 587 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_ScottFaceAwayNorth::
# 588 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 293 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 589 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	applymovement LOCALID_SCOTTS_HOUSE_SCOTT, Common_Movement_WalkInPlaceFasterUp
# 590 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 294 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 591 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	waitmovement 0
# 592 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	return
# 593 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 594 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 595 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_ScottFaceAwaySouth::
# 596 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 299 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 597 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	applymovement LOCALID_SCOTTS_HOUSE_SCOTT, Common_Movement_WalkInPlaceFasterDown
# 598 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 300 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 599 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	waitmovement 0
# 600 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	return
# 601 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 602 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 603 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_ScottFaceAwayEast::
# 604 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 305 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 605 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	applymovement LOCALID_SCOTTS_HOUSE_SCOTT, Common_Movement_WalkInPlaceFasterRight
# 606 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 306 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 607 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	waitmovement 0
# 608 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	return
# 609 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 610 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 611 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_ScottFaceAwayWest::
# 612 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 311 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 613 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	applymovement LOCALID_SCOTTS_HOUSE_SCOTT, Common_Movement_WalkInPlaceFasterLeft
# 614 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 312 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 615 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	waitmovement 0
# 616 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	return
# 617 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 618 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 619 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_Text_WelcomeToBattleFrontier::
# 620 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 316 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 621 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "SCOTT: Well, hello and welcome!\n"
# 622 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "Heheh… Sorry about the cramped space.\p"
# 623 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "Anyway, {PLAYER}{KUN}, let me formally\n"
# 624 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "welcome you to the BATTLE FRONTIER.\p"
# 625 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "This is my dream come true.\n"
# 626 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "It took me years and years, but I've\l"
# 627 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "finally given shape to my dream.$"
# 628 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 629 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_Text_HowMuchEffortItTookToMakeReal::
# 630 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 326 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 631 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "On reflection, it was a terribly long\n"
# 632 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "journey…\p"
# 633 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "I left home alone on a quest to find\n"
# 634 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "strong TRAINERS.\p"
# 635 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "No one can imagine how much effort\n"
# 636 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "or time it took to make this real.$"
# 637 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 638 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_Text_HaveThisAsMementoOfOurPathsCrossing::
# 639 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 335 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 640 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "But that's all in the past.\n"
# 641 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "No point dwelling on that!\p"
# 642 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "All I want for you is to enjoy battling\n"
# 643 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "to your heart's content here.\p"
# 644 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "{PLAYER}{KUN}, I want you to have this\n"
# 645 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "as a memento for all the time our\l"
# 646 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "paths crossed on our journeys.$"
# 647 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 648 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_Text_ObtainedXBattlePoints::
# 649 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 345 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 650 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "{PLAYER} obtained\n"
# 651 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "{STR_VAR_1} Battle Point(s).$"
# 652 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 653 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_Text_ExplainBattlePoints::
# 654 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 350 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 655 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "SCOTT: You can check your Battle\n"
# 656 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "Points on your FRONTIER PASS.\p"
# 657 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "The more success you have here at\n"
# 658 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "the BATTLE FRONTIER, the more Battle\l"
# 659 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "Points you will collect.\p"
# 660 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "Use your Battle Points the way you\n"
# 661 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "see fit, like trading them for items.$"
# 662 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 663 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_Text_ExpectingGreatThings::
# 664 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 360 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 665 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "I'm expecting great things from you!$"
# 666 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 667 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_Text_WhyIGoSeekingTrainers::
# 668 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 364 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 669 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "SCOTT: Every TRAINER is an individual.\n"
# 670 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "They all lead lives of their own.\p"
# 671 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "But when they're in a battle,\n"
# 672 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "it doesn't matter who they are.\p"
# 673 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "They're all the same!\p"
# 674 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "I love the purity of battle,\n"
# 675 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "where everyone is equal.\p"
# 676 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "That's why I go everywhere seeking\n"
# 677 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "TRAINERS who are serious about\l"
# 678 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "battling, and invite them here.$"
# 679 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 680 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_Text_HaveYouMetFrontierBrain::
# 681 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 377 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 682 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "SCOTT: Have you met any of\n"
# 683 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "the FRONTIER BRAINS?\p"
# 684 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "Better yet, have you obtained any\n"
# 685 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "symbols from them?\p"
# 686 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "I handpicked the FRONTIER BRAINS\n"
# 687 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "as the toughest TRAINERS anywhere.\p"
# 688 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "But I'm sure that seeing how tough\n"
# 689 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "you are will startle even them!$"
# 690 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 691 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_Text_MayFindWildMonsInFrontier::
# 692 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 388 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 693 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "SCOTT: You don't just train for battle,\n"
# 694 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "right?\p"
# 695 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "I think I remember you working on\n"
# 696 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "a POKéDEX as well.\p"
# 697 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "Well, guess what?\p"
# 698 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "You may run into wild POKéMON in\n"
# 699 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "the BATTLE FRONTIER somewhere…\l"
# 700 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "Fufufu!$"
# 701 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 702 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_Text_YouveCollectedAllSilverSymbols::
# 703 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 399 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 704 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "SCOTT: Are you enjoying things in\n"
# 705 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "the BATTLE FRONTIER?\p"
# 706 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "…Wait a second…\n"
# 707 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "Oh!\p"
# 708 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "Your FRONTIER PASS!\n"
# 709 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "You've collected the full set\l"
# 710 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "of silver symbols!\p"
# 711 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "That's more than impressive!\n"
# 712 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "You are tough, just as I suspected!\p"
# 713 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "Normally, I wouldn't do something\n"
# 714 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "like this, but this is a special time!\p"
# 715 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "I want you to have this.\n"
# 716 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "I'm sure you can put it to proper use.$"
# 717 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 718 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_Text_YouveCollectedAllGoldSymbols::
# 719 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 415 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 720 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "SCOTT: I hope you're enjoying\n"
# 721 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "everything in the BATTLE FRONTIER.\p"
# 722 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "…Wait a second…\n"
# 723 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "Oh, my disbelieving eyes!\p"
# 724 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "Your FRONTIER PASS!\n"
# 725 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "You've gathered up the full set\l"
# 726 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "of gold symbols!\p"
# 727 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "That's more than stupendous!\n"
# 728 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "You're incredible, just as I suspected!\p"
# 729 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "… … … … … …\p"
# 730 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "{PLAYER}, you've got to accept this!\p"
# 731 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "I think you will be able to\n"
# 732 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "appreciate the value of my gift!$"
# 733 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 734 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_Text_SoGladIBroughtYouHere::
# 735 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 431 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 736 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "I must say I have the gift of knowing\n"
# 737 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "a good TRAINER when I see one.\p"
# 738 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "I'm so glad I had the foresight to\n"
# 739 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "bring you here!$"
# 740 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 741 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_Text_BerryPocketStuffed::
# 742 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 438 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 743 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "Your BERRY POCKET seems to\n"
# 744 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "be stuffed.$"
# 745 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 746 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_Text_Beat50TrainersInARow::
# 747 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 443 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 748 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "SCOTT: Oh, I heard about you!\n"
# 749 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "How you ruled the BATTLE TOWER!\l"
# 750 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "You beat over 50 TRAINERS in a row?\p"
# 751 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "That's fantastic!\n"
# 752 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "I want you to have this!$"
# 753 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 754 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_Text_Beat100TrainersInARow::
# 755 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 451 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 756 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "SCOTT: Oh, my! I heard about you!\n"
# 757 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "How you overwhelmed the BATTLE TOWER!\l"
# 758 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "You beat over 100 TRAINERS in a row?\p"
# 759 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "That's ridiculously spectacular!\n"
# 760 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "You've got to have this!$"
# 761 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 762 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_Text_ExpectingToHearEvenGreaterThings::
# 763 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 459 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 764 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "I'll be expecting to hear even greater\n"
# 765 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "things about you now!$"
# 766 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 767 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_Text_ComeBackForThisLater::
# 768 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 464 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
# 769 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "Oops, well, if you have too much\n"
# 770 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "stuff, come back for this later.$"
