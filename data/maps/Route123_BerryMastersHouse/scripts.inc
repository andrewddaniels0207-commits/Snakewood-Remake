# 1 "data/maps/Route123_BerryMastersHouse/scripts.pory"

# 2 "data/maps/Route123_BerryMastersHouse/scripts.pory"
Route123_BerryMastersHouse_MapScripts::
# 3 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 2 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 4 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route123_BerryMastersHouse_OnTransition
# 5 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	.byte 0
# 6 "data/maps/Route123_BerryMastersHouse/scripts.pory"

# 7 "data/maps/Route123_BerryMastersHouse/scripts.pory"

# 8 "data/maps/Route123_BerryMastersHouse/scripts.pory"
Route123_BerryMastersHouse_OnTransition::
# 9 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 6 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 10 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	setflag FLAG_LANDMARK_BERRY_MASTERS_HOUSE
# 11 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	end
# 12 "data/maps/Route123_BerryMastersHouse/scripts.pory"

# 13 "data/maps/Route123_BerryMastersHouse/scripts.pory"

# 14 "data/maps/Route123_BerryMastersHouse/scripts.pory"
Route123_BerryMastersHouse_EventScript_BerryMaster::
# 15 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 11 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 16 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	lock
# 17 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 12 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 18 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	faceplayer
# 19 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 13 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 20 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	dotimebasedevents
# 21 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 14 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 22 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	goto_if_set FLAG_DAILY_BERRY_MASTER_RECEIVED_BERRY, Route123_BerryMastersHouse_EventScript_BerryMaster_2
# 23 "data/maps/Route123_BerryMastersHouse/scripts.pory"
Route123_BerryMastersHouse_EventScript_BerryMaster_1:
# 24 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 17 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 25 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	msgbox Route123_BerryMastersHouse_Text_YoureDeservingOfBerry, MSGBOX_DEFAULT
# 26 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 18 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 27 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	random NUM_BERRY_MASTER_BERRIES
# 28 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 19 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 29 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	addvar VAR_RESULT, NUM_BERRY_MASTER_BERRIES_SKIPPED
# 30 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 20 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 31 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	addvar VAR_RESULT, FIRST_BERRY_INDEX
# 32 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 21 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 33 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	giveitem VAR_RESULT
# 34 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 22 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 35 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	compare VAR_RESULT, FALSE
# 36 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	goto_if_eq Route123_BerryMastersHouse_EventScript_BerryMaster_5
# 37 "data/maps/Route123_BerryMastersHouse/scripts.pory"
Route123_BerryMastersHouse_EventScript_BerryMaster_4:
# 38 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 25 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 39 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	setflag FLAG_DAILY_BERRY_MASTER_RECEIVED_BERRY
# 40 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 26 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 41 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	msgbox Route123_BerryMastersHouse_Text_WhyBeStingyTakeAnother, MSGBOX_DEFAULT
# 42 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 27 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 43 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	random NUM_BERRY_MASTER_BERRIES
# 44 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 28 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 45 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	addvar VAR_RESULT, NUM_BERRY_MASTER_BERRIES_SKIPPED
# 46 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 29 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 47 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	addvar VAR_RESULT, FIRST_BERRY_INDEX
# 48 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 30 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 49 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	giveitem VAR_RESULT
# 50 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 31 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 51 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	compare VAR_RESULT, FALSE
# 52 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	goto_if_eq Route123_BerryMastersHouse_EventScript_BerryMaster_8
# 53 "data/maps/Route123_BerryMastersHouse/scripts.pory"
Route123_BerryMastersHouse_EventScript_BerryMaster_7:
# 54 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 34 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 55 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	msgbox Route123_BerryMastersHouse_Text_VisitPrettyPetalFlowerShop, MSGBOX_DEFAULT
# 56 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 35 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 57 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	release
# 58 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	end
# 59 "data/maps/Route123_BerryMastersHouse/scripts.pory"

# 60 "data/maps/Route123_BerryMastersHouse/scripts.pory"
Route123_BerryMastersHouse_EventScript_BerryMaster_2:
# 61 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 15 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 62 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	goto Route123_BerryMastersHouse_EventScript_ReceivedBerryToday
# 63 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	goto Route123_BerryMastersHouse_EventScript_BerryMaster_1
# 64 "data/maps/Route123_BerryMastersHouse/scripts.pory"

# 65 "data/maps/Route123_BerryMastersHouse/scripts.pory"
Route123_BerryMastersHouse_EventScript_BerryMaster_5:
# 66 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 23 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 67 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
# 68 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	goto Route123_BerryMastersHouse_EventScript_BerryMaster_4
# 69 "data/maps/Route123_BerryMastersHouse/scripts.pory"

# 70 "data/maps/Route123_BerryMastersHouse/scripts.pory"
Route123_BerryMastersHouse_EventScript_BerryMaster_8:
# 71 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 32 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 72 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
# 73 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	goto Route123_BerryMastersHouse_EventScript_BerryMaster_7
# 74 "data/maps/Route123_BerryMastersHouse/scripts.pory"

# 75 "data/maps/Route123_BerryMastersHouse/scripts.pory"

# 76 "data/maps/Route123_BerryMastersHouse/scripts.pory"
Route123_BerryMastersHouse_EventScript_ReceivedBerryToday::
# 77 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 40 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 78 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	msgbox Route123_BerryMastersHouse_Text_DoneForToday, MSGBOX_DEFAULT
# 79 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 41 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 80 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	release
# 81 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	end
# 82 "data/maps/Route123_BerryMastersHouse/scripts.pory"

# 83 "data/maps/Route123_BerryMastersHouse/scripts.pory"

# 84 "data/maps/Route123_BerryMastersHouse/scripts.pory"
Route123_BerryMastersHouse_EventScript_BerryMastersWife::
# 85 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 46 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 86 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	lock
# 87 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 47 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 88 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	faceplayer
# 89 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 48 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 90 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	dotimebasedevents
# 91 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 49 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 92 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	goto_if_set FLAG_DAILY_BERRY_MASTERS_WIFE, Route123_BerryMastersHouse_EventScript_BerryMastersWife_2
# 93 "data/maps/Route123_BerryMastersHouse/scripts.pory"
Route123_BerryMastersHouse_EventScript_BerryMastersWife_1:
# 94 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 52 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 95 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	msgbox Route123_BerryMastersHouse_Text_HeardAGoodSayingLately, MSGBOX_DEFAULT
# 96 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 53 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 97 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	setvar VAR_0x8004, EASY_CHAT_TYPE_GOOD_SAYING
# 98 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 54 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 99 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	call Common_ShowEasyChatScreen
# 100 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 55 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 101 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	lock
# 102 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 56 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 103 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	faceplayer
# 104 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 57 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 105 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	compare VAR_RESULT, TRUE
# 106 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	goto_if_eq Route123_BerryMastersHouse_EventScript_BerryMastersWife_5
# 107 "data/maps/Route123_BerryMastersHouse/scripts.pory"
Route123_BerryMastersHouse_EventScript_BerryMastersWife_4:
# 108 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 60 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 109 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	compare VAR_RESULT, FALSE
# 110 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	goto_if_eq Route123_BerryMastersHouse_EventScript_BerryMastersWife_8
# 111 "data/maps/Route123_BerryMastersHouse/scripts.pory"
Route123_BerryMastersHouse_EventScript_BerryMastersWife_7:
# 112 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	end
# 113 "data/maps/Route123_BerryMastersHouse/scripts.pory"

# 114 "data/maps/Route123_BerryMastersHouse/scripts.pory"
Route123_BerryMastersHouse_EventScript_BerryMastersWife_2:
# 115 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 50 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 116 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	goto Route123_BerryMastersHouse_EventScript_ReceivedWifeBerryToday
# 117 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	goto Route123_BerryMastersHouse_EventScript_BerryMastersWife_1
# 118 "data/maps/Route123_BerryMastersHouse/scripts.pory"

# 119 "data/maps/Route123_BerryMastersHouse/scripts.pory"
Route123_BerryMastersHouse_EventScript_BerryMastersWife_5:
# 120 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 58 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 121 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	goto Route123_BerryMastersHouse_EventScript_GavePhrase
# 122 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	goto Route123_BerryMastersHouse_EventScript_BerryMastersWife_4
# 123 "data/maps/Route123_BerryMastersHouse/scripts.pory"

# 124 "data/maps/Route123_BerryMastersHouse/scripts.pory"
Route123_BerryMastersHouse_EventScript_BerryMastersWife_8:
# 125 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 61 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 126 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	goto Route123_BerryMastersHouse_EventScript_CancelPhrase
# 127 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	goto Route123_BerryMastersHouse_EventScript_BerryMastersWife_7
# 128 "data/maps/Route123_BerryMastersHouse/scripts.pory"

# 129 "data/maps/Route123_BerryMastersHouse/scripts.pory"

# 130 "data/maps/Route123_BerryMastersHouse/scripts.pory"
Route123_BerryMastersHouse_EventScript_CancelPhrase::
# 131 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 67 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 132 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	msgbox Route123_BerryMastersHouse_Text_Ah, MSGBOX_DEFAULT
# 133 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 68 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 134 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	msgbox Route123_BerryMastersHouse_Text_JoyNeverGoesOutOfMyLife, MSGBOX_DEFAULT
# 135 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 69 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 136 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	release
# 137 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	end
# 138 "data/maps/Route123_BerryMastersHouse/scripts.pory"

# 139 "data/maps/Route123_BerryMastersHouse/scripts.pory"

# 140 "data/maps/Route123_BerryMastersHouse/scripts.pory"
Route123_BerryMastersHouse_EventScript_GavePhrase::
# 141 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 74 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 142 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	compare VAR_0x8004, NOT_SPECIAL_PHRASE
# 143 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	goto_if_eq Route123_BerryMastersHouse_EventScript_GavePhrase_2
# 144 "data/maps/Route123_BerryMastersHouse/scripts.pory"
Route123_BerryMastersHouse_EventScript_GavePhrase_1:
# 145 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 77 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 146 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	compare VAR_0x8004, PHRASE_GREAT_BATTLE
# 147 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	goto_if_eq Route123_BerryMastersHouse_EventScript_GavePhrase_5
# 148 "data/maps/Route123_BerryMastersHouse/scripts.pory"
Route123_BerryMastersHouse_EventScript_GavePhrase_4:
# 149 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 80 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 150 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	compare VAR_0x8004, PHRASE_CHALLENGE_CONTEST
# 151 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	goto_if_eq Route123_BerryMastersHouse_EventScript_GavePhrase_8
# 152 "data/maps/Route123_BerryMastersHouse/scripts.pory"
Route123_BerryMastersHouse_EventScript_GavePhrase_7:
# 153 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 83 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 154 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	compare VAR_0x8004, PHRASE_OVERWHELMING_LATIAS
# 155 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	goto_if_eq Route123_BerryMastersHouse_EventScript_GavePhrase_11
# 156 "data/maps/Route123_BerryMastersHouse/scripts.pory"
Route123_BerryMastersHouse_EventScript_GavePhrase_10:
# 157 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 86 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 158 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	compare VAR_0x8004, PHRASE_COOL_LATIOS
# 159 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	goto_if_eq Route123_BerryMastersHouse_EventScript_GavePhrase_14
# 160 "data/maps/Route123_BerryMastersHouse/scripts.pory"
Route123_BerryMastersHouse_EventScript_GavePhrase_13:
# 161 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 89 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 162 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	compare VAR_0x8004, PHRASE_SUPER_HUSTLE
# 163 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	goto_if_eq Route123_BerryMastersHouse_EventScript_GavePhrase_17
# 164 "data/maps/Route123_BerryMastersHouse/scripts.pory"
Route123_BerryMastersHouse_EventScript_GavePhrase_16:
# 165 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	end
# 166 "data/maps/Route123_BerryMastersHouse/scripts.pory"

# 167 "data/maps/Route123_BerryMastersHouse/scripts.pory"
Route123_BerryMastersHouse_EventScript_GavePhrase_2:
# 168 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 75 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 169 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	goto Route123_BerryMastersHouse_EventScript_GiveNormalBerry
# 170 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	goto Route123_BerryMastersHouse_EventScript_GavePhrase_1
# 171 "data/maps/Route123_BerryMastersHouse/scripts.pory"

# 172 "data/maps/Route123_BerryMastersHouse/scripts.pory"
Route123_BerryMastersHouse_EventScript_GavePhrase_5:
# 173 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 78 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 174 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	goto Route123_BerryMastersHouse_EventScript_GiveSpelonBerry
# 175 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	goto Route123_BerryMastersHouse_EventScript_GavePhrase_4
# 176 "data/maps/Route123_BerryMastersHouse/scripts.pory"

# 177 "data/maps/Route123_BerryMastersHouse/scripts.pory"
Route123_BerryMastersHouse_EventScript_GavePhrase_8:
# 178 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 81 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 179 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	goto Route123_BerryMastersHouse_EventScript_GivePamtreBerry
# 180 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	goto Route123_BerryMastersHouse_EventScript_GavePhrase_7
# 181 "data/maps/Route123_BerryMastersHouse/scripts.pory"

# 182 "data/maps/Route123_BerryMastersHouse/scripts.pory"
Route123_BerryMastersHouse_EventScript_GavePhrase_11:
# 183 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 84 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 184 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	goto Route123_BerryMastersHouse_EventScript_GiveWatmelBerry
# 185 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	goto Route123_BerryMastersHouse_EventScript_GavePhrase_10
# 186 "data/maps/Route123_BerryMastersHouse/scripts.pory"

# 187 "data/maps/Route123_BerryMastersHouse/scripts.pory"
Route123_BerryMastersHouse_EventScript_GavePhrase_14:
# 188 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 87 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 189 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	goto Route123_BerryMastersHouse_EventScript_GiveDurinBerry
# 190 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	goto Route123_BerryMastersHouse_EventScript_GavePhrase_13
# 191 "data/maps/Route123_BerryMastersHouse/scripts.pory"

# 192 "data/maps/Route123_BerryMastersHouse/scripts.pory"
Route123_BerryMastersHouse_EventScript_GavePhrase_17:
# 193 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 90 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 194 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	goto Route123_BerryMastersHouse_EventScript_GiveBelueBerry
# 195 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	goto Route123_BerryMastersHouse_EventScript_GavePhrase_16
# 196 "data/maps/Route123_BerryMastersHouse/scripts.pory"

# 197 "data/maps/Route123_BerryMastersHouse/scripts.pory"

# 198 "data/maps/Route123_BerryMastersHouse/scripts.pory"
Route123_BerryMastersHouse_EventScript_GiveNormalBerry::
# 199 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 96 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 200 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	msgbox Route123_BerryMastersHouse_Text_GoodSayingTakeThis, MSGBOX_DEFAULT
# 201 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 97 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 202 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	random NUM_BERRY_MASTER_WIFE_BERRIES
# 203 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 98 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 204 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	addvar VAR_RESULT, FIRST_BERRY_INDEX
# 205 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 99 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 206 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	giveitem VAR_RESULT
# 207 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 100 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 208 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	compare VAR_RESULT, FALSE
# 209 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	goto_if_eq Route123_BerryMastersHouse_EventScript_GiveNormalBerry_2
# 210 "data/maps/Route123_BerryMastersHouse/scripts.pory"
Route123_BerryMastersHouse_EventScript_GiveNormalBerry_1:
# 211 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 103 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 212 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	goto Route123_BerryMastersHouse_EventScript_GaveBerry
# 213 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 104 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 214 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	release
# 215 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	end
# 216 "data/maps/Route123_BerryMastersHouse/scripts.pory"

# 217 "data/maps/Route123_BerryMastersHouse/scripts.pory"
Route123_BerryMastersHouse_EventScript_GiveNormalBerry_2:
# 218 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 101 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 219 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
# 220 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	goto Route123_BerryMastersHouse_EventScript_GiveNormalBerry_1
# 221 "data/maps/Route123_BerryMastersHouse/scripts.pory"

# 222 "data/maps/Route123_BerryMastersHouse/scripts.pory"

# 223 "data/maps/Route123_BerryMastersHouse/scripts.pory"
Route123_BerryMastersHouse_EventScript_GiveSpelonBerry::
# 224 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 109 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 225 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	goto_if_set FLAG_RECEIVED_SPELON_BERRY, Route123_BerryMastersHouse_EventScript_GiveSpelonBerry_2
# 226 "data/maps/Route123_BerryMastersHouse/scripts.pory"
Route123_BerryMastersHouse_EventScript_GiveSpelonBerry_1:
# 227 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 112 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 228 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	msgbox Route123_BerryMastersHouse_Text_InspirationalTakeThis, MSGBOX_DEFAULT
# 229 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 113 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 230 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	giveitem ITEM_SPELON_BERRY
# 231 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 114 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 232 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	compare VAR_RESULT, FALSE
# 233 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	goto_if_eq Route123_BerryMastersHouse_EventScript_GiveSpelonBerry_5
# 234 "data/maps/Route123_BerryMastersHouse/scripts.pory"
Route123_BerryMastersHouse_EventScript_GiveSpelonBerry_4:
# 235 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 117 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 236 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	setflag FLAG_RECEIVED_SPELON_BERRY
# 237 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 118 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 238 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	goto Route123_BerryMastersHouse_EventScript_GaveBerry
# 239 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	end
# 240 "data/maps/Route123_BerryMastersHouse/scripts.pory"

# 241 "data/maps/Route123_BerryMastersHouse/scripts.pory"
Route123_BerryMastersHouse_EventScript_GiveSpelonBerry_2:
# 242 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 110 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 243 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	goto Route123_BerryMastersHouse_EventScript_GiveNormalBerry
# 244 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	goto Route123_BerryMastersHouse_EventScript_GiveSpelonBerry_1
# 245 "data/maps/Route123_BerryMastersHouse/scripts.pory"

# 246 "data/maps/Route123_BerryMastersHouse/scripts.pory"
Route123_BerryMastersHouse_EventScript_GiveSpelonBerry_5:
# 247 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 115 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 248 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
# 249 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	goto Route123_BerryMastersHouse_EventScript_GiveSpelonBerry_4
# 250 "data/maps/Route123_BerryMastersHouse/scripts.pory"

# 251 "data/maps/Route123_BerryMastersHouse/scripts.pory"

# 252 "data/maps/Route123_BerryMastersHouse/scripts.pory"
Route123_BerryMastersHouse_EventScript_GivePamtreBerry::
# 253 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 123 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 254 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	goto_if_set FLAG_RECEIVED_PAMTRE_BERRY, Route123_BerryMastersHouse_EventScript_GivePamtreBerry_2
# 255 "data/maps/Route123_BerryMastersHouse/scripts.pory"
Route123_BerryMastersHouse_EventScript_GivePamtreBerry_1:
# 256 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 126 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 257 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	msgbox Route123_BerryMastersHouse_Text_InspirationalTakeThis, MSGBOX_DEFAULT
# 258 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 127 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 259 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	giveitem ITEM_PAMTRE_BERRY
# 260 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 128 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 261 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	compare VAR_RESULT, FALSE
# 262 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	goto_if_eq Route123_BerryMastersHouse_EventScript_GivePamtreBerry_5
# 263 "data/maps/Route123_BerryMastersHouse/scripts.pory"
Route123_BerryMastersHouse_EventScript_GivePamtreBerry_4:
# 264 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 131 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 265 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	setflag FLAG_RECEIVED_PAMTRE_BERRY
# 266 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 132 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 267 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	goto Route123_BerryMastersHouse_EventScript_GaveBerry
# 268 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	end
# 269 "data/maps/Route123_BerryMastersHouse/scripts.pory"

# 270 "data/maps/Route123_BerryMastersHouse/scripts.pory"
Route123_BerryMastersHouse_EventScript_GivePamtreBerry_2:
# 271 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 124 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 272 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	goto Route123_BerryMastersHouse_EventScript_GiveNormalBerry
# 273 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	goto Route123_BerryMastersHouse_EventScript_GivePamtreBerry_1
# 274 "data/maps/Route123_BerryMastersHouse/scripts.pory"

# 275 "data/maps/Route123_BerryMastersHouse/scripts.pory"
Route123_BerryMastersHouse_EventScript_GivePamtreBerry_5:
# 276 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 129 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 277 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
# 278 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	goto Route123_BerryMastersHouse_EventScript_GivePamtreBerry_4
# 279 "data/maps/Route123_BerryMastersHouse/scripts.pory"

# 280 "data/maps/Route123_BerryMastersHouse/scripts.pory"

# 281 "data/maps/Route123_BerryMastersHouse/scripts.pory"
Route123_BerryMastersHouse_EventScript_GiveWatmelBerry::
# 282 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 137 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 283 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	goto_if_set FLAG_RECEIVED_WATMEL_BERRY, Route123_BerryMastersHouse_EventScript_GiveWatmelBerry_2
# 284 "data/maps/Route123_BerryMastersHouse/scripts.pory"
Route123_BerryMastersHouse_EventScript_GiveWatmelBerry_1:
# 285 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 140 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 286 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	msgbox Route123_BerryMastersHouse_Text_InspirationalTakeThis, MSGBOX_DEFAULT
# 287 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 141 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 288 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	giveitem ITEM_WATMEL_BERRY
# 289 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 142 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 290 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	compare VAR_RESULT, FALSE
# 291 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	goto_if_eq Route123_BerryMastersHouse_EventScript_GiveWatmelBerry_5
# 292 "data/maps/Route123_BerryMastersHouse/scripts.pory"
Route123_BerryMastersHouse_EventScript_GiveWatmelBerry_4:
# 293 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 145 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 294 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	setflag FLAG_RECEIVED_WATMEL_BERRY
# 295 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 146 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 296 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	goto Route123_BerryMastersHouse_EventScript_GaveBerry
# 297 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	end
# 298 "data/maps/Route123_BerryMastersHouse/scripts.pory"

# 299 "data/maps/Route123_BerryMastersHouse/scripts.pory"
Route123_BerryMastersHouse_EventScript_GiveWatmelBerry_2:
# 300 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 138 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 301 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	goto Route123_BerryMastersHouse_EventScript_GiveNormalBerry
# 302 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	goto Route123_BerryMastersHouse_EventScript_GiveWatmelBerry_1
# 303 "data/maps/Route123_BerryMastersHouse/scripts.pory"

# 304 "data/maps/Route123_BerryMastersHouse/scripts.pory"
Route123_BerryMastersHouse_EventScript_GiveWatmelBerry_5:
# 305 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 143 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 306 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
# 307 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	goto Route123_BerryMastersHouse_EventScript_GiveWatmelBerry_4
# 308 "data/maps/Route123_BerryMastersHouse/scripts.pory"

# 309 "data/maps/Route123_BerryMastersHouse/scripts.pory"

# 310 "data/maps/Route123_BerryMastersHouse/scripts.pory"
Route123_BerryMastersHouse_EventScript_GiveDurinBerry::
# 311 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 151 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 312 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	goto_if_set FLAG_RECEIVED_DURIN_BERRY, Route123_BerryMastersHouse_EventScript_GiveDurinBerry_2
# 313 "data/maps/Route123_BerryMastersHouse/scripts.pory"
Route123_BerryMastersHouse_EventScript_GiveDurinBerry_1:
# 314 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 154 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 315 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	msgbox Route123_BerryMastersHouse_Text_InspirationalTakeThis, MSGBOX_DEFAULT
# 316 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 155 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 317 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	giveitem ITEM_DURIN_BERRY
# 318 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 156 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 319 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	compare VAR_RESULT, FALSE
# 320 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	goto_if_eq Route123_BerryMastersHouse_EventScript_GiveDurinBerry_5
# 321 "data/maps/Route123_BerryMastersHouse/scripts.pory"
Route123_BerryMastersHouse_EventScript_GiveDurinBerry_4:
# 322 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 159 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 323 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	setflag FLAG_RECEIVED_DURIN_BERRY
# 324 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 160 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 325 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	goto Route123_BerryMastersHouse_EventScript_GaveBerry
# 326 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	end
# 327 "data/maps/Route123_BerryMastersHouse/scripts.pory"

# 328 "data/maps/Route123_BerryMastersHouse/scripts.pory"
Route123_BerryMastersHouse_EventScript_GiveDurinBerry_2:
# 329 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 152 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 330 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	goto Route123_BerryMastersHouse_EventScript_GiveNormalBerry
# 331 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	goto Route123_BerryMastersHouse_EventScript_GiveDurinBerry_1
# 332 "data/maps/Route123_BerryMastersHouse/scripts.pory"

# 333 "data/maps/Route123_BerryMastersHouse/scripts.pory"
Route123_BerryMastersHouse_EventScript_GiveDurinBerry_5:
# 334 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 157 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 335 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
# 336 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	goto Route123_BerryMastersHouse_EventScript_GiveDurinBerry_4
# 337 "data/maps/Route123_BerryMastersHouse/scripts.pory"

# 338 "data/maps/Route123_BerryMastersHouse/scripts.pory"

# 339 "data/maps/Route123_BerryMastersHouse/scripts.pory"
Route123_BerryMastersHouse_EventScript_GiveBelueBerry::
# 340 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 165 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 341 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	goto_if_set FLAG_RECEIVED_BELUE_BERRY, Route123_BerryMastersHouse_EventScript_GiveBelueBerry_2
# 342 "data/maps/Route123_BerryMastersHouse/scripts.pory"
Route123_BerryMastersHouse_EventScript_GiveBelueBerry_1:
# 343 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 168 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 344 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	msgbox Route123_BerryMastersHouse_Text_InspirationalTakeThis, MSGBOX_DEFAULT
# 345 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 169 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 346 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	giveitem ITEM_BELUE_BERRY
# 347 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 170 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 348 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	compare VAR_RESULT, FALSE
# 349 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	goto_if_eq Route123_BerryMastersHouse_EventScript_GiveBelueBerry_5
# 350 "data/maps/Route123_BerryMastersHouse/scripts.pory"
Route123_BerryMastersHouse_EventScript_GiveBelueBerry_4:
# 351 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 173 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 352 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	setflag FLAG_RECEIVED_BELUE_BERRY
# 353 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 174 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 354 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	goto Route123_BerryMastersHouse_EventScript_GaveBerry
# 355 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	end
# 356 "data/maps/Route123_BerryMastersHouse/scripts.pory"

# 357 "data/maps/Route123_BerryMastersHouse/scripts.pory"
Route123_BerryMastersHouse_EventScript_GiveBelueBerry_2:
# 358 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 166 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 359 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	goto Route123_BerryMastersHouse_EventScript_GiveNormalBerry
# 360 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	goto Route123_BerryMastersHouse_EventScript_GiveBelueBerry_1
# 361 "data/maps/Route123_BerryMastersHouse/scripts.pory"

# 362 "data/maps/Route123_BerryMastersHouse/scripts.pory"
Route123_BerryMastersHouse_EventScript_GiveBelueBerry_5:
# 363 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 171 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 364 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
# 365 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	goto Route123_BerryMastersHouse_EventScript_GiveBelueBerry_4
# 366 "data/maps/Route123_BerryMastersHouse/scripts.pory"

# 367 "data/maps/Route123_BerryMastersHouse/scripts.pory"

# 368 "data/maps/Route123_BerryMastersHouse/scripts.pory"
Route123_BerryMastersHouse_EventScript_ReceivedWifeBerryToday::
# 369 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 179 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 370 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	msgbox Route123_BerryMastersHouse_Text_JoyNeverGoesOutOfMyLife, MSGBOX_DEFAULT
# 371 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 180 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 372 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	release
# 373 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	end
# 374 "data/maps/Route123_BerryMastersHouse/scripts.pory"

# 375 "data/maps/Route123_BerryMastersHouse/scripts.pory"

# 376 "data/maps/Route123_BerryMastersHouse/scripts.pory"
Route123_BerryMastersHouse_EventScript_GaveBerry::
# 377 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 185 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 378 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	setflag FLAG_DAILY_BERRY_MASTERS_WIFE
# 379 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 186 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 380 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	msgbox Route123_BerryMastersHouse_Text_JoyNeverGoesOutOfMyLife, MSGBOX_DEFAULT
# 381 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 187 "data/maps/Route123_BerryMastersHouse/scripts.pory"
# 382 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	release
# 383 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	end
