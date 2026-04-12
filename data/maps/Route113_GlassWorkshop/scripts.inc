# 1 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 2 "data/maps/Route113_GlassWorkshop/scripts.pory"
Route113_GlassWorkshop_MapScripts::
# 3 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 2 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 4 "data/maps/Route113_GlassWorkshop/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route113_GlassWorkshop_OnTransition
# 5 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.byte 0
# 6 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 7 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 8 "data/maps/Route113_GlassWorkshop/scripts.pory"
Route113_GlassWorkshop_OnTransition::
# 9 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 6 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 10 "data/maps/Route113_GlassWorkshop/scripts.pory"
	setflag FLAG_LANDMARK_GLASS_WORKSHOP
# 11 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 7 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 12 "data/maps/Route113_GlassWorkshop/scripts.pory"
	compare VAR_GLASS_WORKSHOP_STATE, 1
# 13 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto_if_eq Route113_GlassWorkshop_OnTransition_2
# 14 "data/maps/Route113_GlassWorkshop/scripts.pory"
Route113_GlassWorkshop_OnTransition_1:
# 15 "data/maps/Route113_GlassWorkshop/scripts.pory"
	end
# 16 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 17 "data/maps/Route113_GlassWorkshop/scripts.pory"
Route113_GlassWorkshop_OnTransition_2:
# 18 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 8 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 19 "data/maps/Route113_GlassWorkshop/scripts.pory"
	call Route113_GlassWorkshop_EventScript_ReenterWorkshopAfterSootSack
# 20 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto Route113_GlassWorkshop_OnTransition_1
# 21 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 22 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 23 "data/maps/Route113_GlassWorkshop/scripts.pory"
Route113_GlassWorkshop_EventScript_ReenterWorkshopAfterSootSack::
# 24 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 14 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 25 "data/maps/Route113_GlassWorkshop/scripts.pory"
	setvar VAR_GLASS_WORKSHOP_STATE, 2
# 26 "data/maps/Route113_GlassWorkshop/scripts.pory"
	return
# 27 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 28 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 29 "data/maps/Route113_GlassWorkshop/scripts.pory"
Route113_GlassWorkshop_EventScript_GlassWorker::
# 30 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 19 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 31 "data/maps/Route113_GlassWorkshop/scripts.pory"
	lock
# 32 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 20 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 33 "data/maps/Route113_GlassWorkshop/scripts.pory"
	faceplayer
# 34 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 21 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 35 "data/maps/Route113_GlassWorkshop/scripts.pory"
	compare VAR_GLASS_WORKSHOP_STATE, 10
# 36 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto_if_ge Route113_GlassWorkshop_EventScript_GlassWorker_2
# 37 "data/maps/Route113_GlassWorkshop/scripts.pory"
Route113_GlassWorkshop_EventScript_GlassWorker_1:
# 38 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 24 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 39 "data/maps/Route113_GlassWorkshop/scripts.pory"
	compare VAR_GLASS_WORKSHOP_STATE, 2
# 40 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto_if_eq Route113_GlassWorkshop_EventScript_GlassWorker_5
# 41 "data/maps/Route113_GlassWorkshop/scripts.pory"
Route113_GlassWorkshop_EventScript_GlassWorker_4:
# 42 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 27 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 43 "data/maps/Route113_GlassWorkshop/scripts.pory"
	compare VAR_GLASS_WORKSHOP_STATE, 1
# 44 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto_if_eq Route113_GlassWorkshop_EventScript_GlassWorker_8
# 45 "data/maps/Route113_GlassWorkshop/scripts.pory"
Route113_GlassWorkshop_EventScript_GlassWorker_7:
# 46 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 30 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 47 "data/maps/Route113_GlassWorkshop/scripts.pory"
	msgbox Route113_GlassWorkshop_Text_GoCollectAshWithThis, MSGBOX_DEFAULT
# 48 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 31 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 49 "data/maps/Route113_GlassWorkshop/scripts.pory"
	giveitem ITEM_SOOT_SACK
# 50 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 32 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 51 "data/maps/Route113_GlassWorkshop/scripts.pory"
	compare VAR_RESULT, FALSE
# 52 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto_if_eq Route113_GlassWorkshop_EventScript_GlassWorker_11
# 53 "data/maps/Route113_GlassWorkshop/scripts.pory"
Route113_GlassWorkshop_EventScript_GlassWorker_10:
# 54 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 35 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 55 "data/maps/Route113_GlassWorkshop/scripts.pory"
	setvar VAR_GLASS_WORKSHOP_STATE, 1
# 56 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 36 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 57 "data/maps/Route113_GlassWorkshop/scripts.pory"
	msgbox Route113_GlassWorkshop_Text_ExplainSootSack, MSGBOX_DEFAULT
# 58 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 37 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 59 "data/maps/Route113_GlassWorkshop/scripts.pory"
	release
# 60 "data/maps/Route113_GlassWorkshop/scripts.pory"
	end
# 61 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 62 "data/maps/Route113_GlassWorkshop/scripts.pory"
Route113_GlassWorkshop_EventScript_GlassWorker_2:
# 63 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 22 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 64 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto Route113_GlassWorkshop_EventScript_GiveItemAfterNoRoom
# 65 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto Route113_GlassWorkshop_EventScript_GlassWorker_1
# 66 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 67 "data/maps/Route113_GlassWorkshop/scripts.pory"
Route113_GlassWorkshop_EventScript_GlassWorker_5:
# 68 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 25 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 69 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto Route113_GlassWorkshop_EventScript_CheckCollectedAsh
# 70 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto Route113_GlassWorkshop_EventScript_GlassWorker_4
# 71 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 72 "data/maps/Route113_GlassWorkshop/scripts.pory"
Route113_GlassWorkshop_EventScript_GlassWorker_8:
# 73 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 28 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 74 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto Route113_GlassWorkshop_EventScript_ExplainSootSack
# 75 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto Route113_GlassWorkshop_EventScript_GlassWorker_7
# 76 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 77 "data/maps/Route113_GlassWorkshop/scripts.pory"
Route113_GlassWorkshop_EventScript_GlassWorker_11:
# 78 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 33 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 79 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
# 80 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto Route113_GlassWorkshop_EventScript_GlassWorker_10
# 81 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 82 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 83 "data/maps/Route113_GlassWorkshop/scripts.pory"
Route113_GlassWorkshop_EventScript_ExplainSootSack::
# 84 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 42 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 85 "data/maps/Route113_GlassWorkshop/scripts.pory"
	msgbox Route113_GlassWorkshop_Text_ExplainSootSack, MSGBOX_DEFAULT
# 86 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 43 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 87 "data/maps/Route113_GlassWorkshop/scripts.pory"
	release
# 88 "data/maps/Route113_GlassWorkshop/scripts.pory"
	end
# 89 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 90 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 91 "data/maps/Route113_GlassWorkshop/scripts.pory"
Route113_GlassWorkshop_EventScript_CheckCollectedAsh::
# 92 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 48 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 93 "data/maps/Route113_GlassWorkshop/scripts.pory"
	checkitem ITEM_SOOT_SACK
# 94 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 49 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 95 "data/maps/Route113_GlassWorkshop/scripts.pory"
	compare VAR_RESULT, FALSE
# 96 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto_if_eq Route113_GlassWorkshop_EventScript_CheckCollectedAsh_2
# 97 "data/maps/Route113_GlassWorkshop/scripts.pory"
Route113_GlassWorkshop_EventScript_CheckCollectedAsh_1:
# 98 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 52 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 99 "data/maps/Route113_GlassWorkshop/scripts.pory"
	msgbox Route113_GlassWorkshop_Text_LetsSeeCollectedAshes, MSGBOX_DEFAULT
# 100 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 53 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 101 "data/maps/Route113_GlassWorkshop/scripts.pory"
	compare VAR_ASH_GATHER_COUNT, LOWEST_ASH_PRICE
# 102 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto_if_lt Route113_GlassWorkshop_EventScript_CheckCollectedAsh_5
# 103 "data/maps/Route113_GlassWorkshop/scripts.pory"
Route113_GlassWorkshop_EventScript_CheckCollectedAsh_4:
# 104 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 56 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 105 "data/maps/Route113_GlassWorkshop/scripts.pory"
	message Route113_GlassWorkshop_Text_WhichGlassItemWoudYouLike
# 106 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 57 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 107 "data/maps/Route113_GlassWorkshop/scripts.pory"
	waitmessage
# 108 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 58 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 109 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto Route113_GlassWorkshop_EventScript_ChooseGlassItem
# 110 "data/maps/Route113_GlassWorkshop/scripts.pory"
	end
# 111 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 112 "data/maps/Route113_GlassWorkshop/scripts.pory"
Route113_GlassWorkshop_EventScript_CheckCollectedAsh_2:
# 113 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 50 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 114 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto Route113_GlassWorkshop_EventScript_SootSackNotInBag
# 115 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto Route113_GlassWorkshop_EventScript_CheckCollectedAsh_1
# 116 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 117 "data/maps/Route113_GlassWorkshop/scripts.pory"
Route113_GlassWorkshop_EventScript_CheckCollectedAsh_5:
# 118 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 54 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 119 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto Route113_GlassWorkshop_EventScript_NotEnoughAsh
# 120 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto Route113_GlassWorkshop_EventScript_CheckCollectedAsh_4
# 121 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 122 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 123 "data/maps/Route113_GlassWorkshop/scripts.pory"
Route113_GlassWorkshop_EventScript_SootSackNotInBag::
# 124 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 63 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 125 "data/maps/Route113_GlassWorkshop/scripts.pory"
	msgbox Route113_GlassWorkshop_Text_HaventGotYourSootSack, MSGBOX_DEFAULT
# 126 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 64 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 127 "data/maps/Route113_GlassWorkshop/scripts.pory"
	release
# 128 "data/maps/Route113_GlassWorkshop/scripts.pory"
	end
# 129 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 130 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 131 "data/maps/Route113_GlassWorkshop/scripts.pory"
Route113_GlassWorkshop_EventScript_ChooseGlassItem::
# 132 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 69 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 133 "data/maps/Route113_GlassWorkshop/scripts.pory"
	setvar VAR_0x8009, 0
# 134 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 70 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 135 "data/maps/Route113_GlassWorkshop/scripts.pory"
	setvar VAR_0x8004, SCROLL_MULTI_GLASS_WORKSHOP_VENDOR
# 136 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 71 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 137 "data/maps/Route113_GlassWorkshop/scripts.pory"
	special ShowScrollableMultichoice
# 138 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 72 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 139 "data/maps/Route113_GlassWorkshop/scripts.pory"
	waitstate
# 140 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 73 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 141 "data/maps/Route113_GlassWorkshop/scripts.pory"
	switch VAR_RESULT
# 142 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 74 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 143 "data/maps/Route113_GlassWorkshop/scripts.pory"
	case 0, Route113_GlassWorkshop_EventScript_ChooseGlassItem_3
# 144 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 76 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 145 "data/maps/Route113_GlassWorkshop/scripts.pory"
	case 1, Route113_GlassWorkshop_EventScript_ChooseGlassItem_4
# 146 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 78 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 147 "data/maps/Route113_GlassWorkshop/scripts.pory"
	case 2, Route113_GlassWorkshop_EventScript_ChooseGlassItem_5
# 148 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 80 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 149 "data/maps/Route113_GlassWorkshop/scripts.pory"
	case 3, Route113_GlassWorkshop_EventScript_ChooseGlassItem_6
# 150 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 82 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 151 "data/maps/Route113_GlassWorkshop/scripts.pory"
	case 4, Route113_GlassWorkshop_EventScript_ChooseGlassItem_7
# 152 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 84 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 153 "data/maps/Route113_GlassWorkshop/scripts.pory"
	case 5, Route113_GlassWorkshop_EventScript_ChooseGlassItem_8
# 154 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 86 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 155 "data/maps/Route113_GlassWorkshop/scripts.pory"
	case 6, Route113_GlassWorkshop_EventScript_ChooseGlassItem_9
# 156 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 88 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 157 "data/maps/Route113_GlassWorkshop/scripts.pory"
	case 7, Route113_GlassWorkshop_EventScript_ChooseGlassItem_10
# 158 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 90 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 159 "data/maps/Route113_GlassWorkshop/scripts.pory"
	case MULTI_B_PRESSED, Route113_GlassWorkshop_EventScript_ChooseGlassItem_11
# 160 "data/maps/Route113_GlassWorkshop/scripts.pory"
Route113_GlassWorkshop_EventScript_ChooseGlassItem_1:
# 161 "data/maps/Route113_GlassWorkshop/scripts.pory"
	end
# 162 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 163 "data/maps/Route113_GlassWorkshop/scripts.pory"
Route113_GlassWorkshop_EventScript_ChooseGlassItem_3:
# 164 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 75 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 165 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto Route113_GlassWorkshop_EventScript_BlueFlute
# 166 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto Route113_GlassWorkshop_EventScript_ChooseGlassItem_1
# 167 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 168 "data/maps/Route113_GlassWorkshop/scripts.pory"
Route113_GlassWorkshop_EventScript_ChooseGlassItem_4:
# 169 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 77 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 170 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto Route113_GlassWorkshop_EventScript_YellowFlute
# 171 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto Route113_GlassWorkshop_EventScript_ChooseGlassItem_1
# 172 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 173 "data/maps/Route113_GlassWorkshop/scripts.pory"
Route113_GlassWorkshop_EventScript_ChooseGlassItem_5:
# 174 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 79 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 175 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto Route113_GlassWorkshop_EventScript_RedFlute
# 176 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto Route113_GlassWorkshop_EventScript_ChooseGlassItem_1
# 177 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 178 "data/maps/Route113_GlassWorkshop/scripts.pory"
Route113_GlassWorkshop_EventScript_ChooseGlassItem_6:
# 179 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 81 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 180 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto Route113_GlassWorkshop_EventScript_WhiteFlute
# 181 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto Route113_GlassWorkshop_EventScript_ChooseGlassItem_1
# 182 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 183 "data/maps/Route113_GlassWorkshop/scripts.pory"
Route113_GlassWorkshop_EventScript_ChooseGlassItem_7:
# 184 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 83 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 185 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto Route113_GlassWorkshop_EventScript_BlackFlute
# 186 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto Route113_GlassWorkshop_EventScript_ChooseGlassItem_1
# 187 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 188 "data/maps/Route113_GlassWorkshop/scripts.pory"
Route113_GlassWorkshop_EventScript_ChooseGlassItem_8:
# 189 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 85 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 190 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto Route113_GlassWorkshop_EventScript_PrettyChair
# 191 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto Route113_GlassWorkshop_EventScript_ChooseGlassItem_1
# 192 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 193 "data/maps/Route113_GlassWorkshop/scripts.pory"
Route113_GlassWorkshop_EventScript_ChooseGlassItem_9:
# 194 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 87 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 195 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto Route113_GlassWorkshop_EventScript_PrettyDesk
# 196 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto Route113_GlassWorkshop_EventScript_ChooseGlassItem_1
# 197 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 198 "data/maps/Route113_GlassWorkshop/scripts.pory"
Route113_GlassWorkshop_EventScript_ChooseGlassItem_10:
# 199 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 89 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 200 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto Route113_GlassWorkshop_EventScript_CancelGlassItemSelect
# 201 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto Route113_GlassWorkshop_EventScript_ChooseGlassItem_1
# 202 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 203 "data/maps/Route113_GlassWorkshop/scripts.pory"
Route113_GlassWorkshop_EventScript_ChooseGlassItem_11:
# 204 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 91 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 205 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto Route113_GlassWorkshop_EventScript_CancelGlassItemSelect
# 206 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto Route113_GlassWorkshop_EventScript_ChooseGlassItem_1
# 207 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 208 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 209 "data/maps/Route113_GlassWorkshop/scripts.pory"
Route113_GlassWorkshop_EventScript_BlueFlute::
# 210 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 97 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 211 "data/maps/Route113_GlassWorkshop/scripts.pory"
	setvar VAR_0x8008, ITEM_BLUE_FLUTE
# 212 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 98 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 213 "data/maps/Route113_GlassWorkshop/scripts.pory"
	bufferitemname STR_VAR_1, VAR_0x8008
# 214 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 99 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 215 "data/maps/Route113_GlassWorkshop/scripts.pory"
	setvar VAR_0x800A, BLUE_FLUTE_PRICE
# 216 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 100 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 217 "data/maps/Route113_GlassWorkshop/scripts.pory"
	compare VAR_ASH_GATHER_COUNT, BLUE_FLUTE_PRICE
# 218 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto_if_lt Route113_GlassWorkshop_EventScript_BlueFlute_2
# 219 "data/maps/Route113_GlassWorkshop/scripts.pory"
Route113_GlassWorkshop_EventScript_BlueFlute_1:
# 220 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 103 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 221 "data/maps/Route113_GlassWorkshop/scripts.pory"
	msgbox Route113_GlassWorkshop_Text_IsThatTheItemForYou, MSGBOX_YESNO
# 222 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 104 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 223 "data/maps/Route113_GlassWorkshop/scripts.pory"
	compare VAR_RESULT, NO
# 224 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto_if_eq Route113_GlassWorkshop_EventScript_BlueFlute_5
# 225 "data/maps/Route113_GlassWorkshop/scripts.pory"
Route113_GlassWorkshop_EventScript_BlueFlute_4:
# 226 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 107 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 227 "data/maps/Route113_GlassWorkshop/scripts.pory"
	setvar VAR_GLASS_WORKSHOP_STATE, 10
# 228 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 108 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 229 "data/maps/Route113_GlassWorkshop/scripts.pory"
	subvar VAR_ASH_GATHER_COUNT, BLUE_FLUTE_PRICE
# 230 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 109 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 231 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto Route113_GlassWorkshop_EventScript_MakeGlassItem
# 232 "data/maps/Route113_GlassWorkshop/scripts.pory"
	end
# 233 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 234 "data/maps/Route113_GlassWorkshop/scripts.pory"
Route113_GlassWorkshop_EventScript_BlueFlute_2:
# 235 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 101 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 236 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto Route113_GlassWorkshop_EventScript_NotEnoughAshForItem
# 237 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto Route113_GlassWorkshop_EventScript_BlueFlute_1
# 238 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 239 "data/maps/Route113_GlassWorkshop/scripts.pory"
Route113_GlassWorkshop_EventScript_BlueFlute_5:
# 240 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 105 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 241 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto Route113_GlassWorkshop_EventScript_ChooseDifferentItem
# 242 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto Route113_GlassWorkshop_EventScript_BlueFlute_4
# 243 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 244 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 245 "data/maps/Route113_GlassWorkshop/scripts.pory"
Route113_GlassWorkshop_EventScript_YellowFlute::
# 246 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 114 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 247 "data/maps/Route113_GlassWorkshop/scripts.pory"
	setvar VAR_0x8008, ITEM_YELLOW_FLUTE
# 248 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 115 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 249 "data/maps/Route113_GlassWorkshop/scripts.pory"
	bufferitemname STR_VAR_1, VAR_0x8008
# 250 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 116 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 251 "data/maps/Route113_GlassWorkshop/scripts.pory"
	setvar VAR_0x800A, YELLOW_FLUTE_PRICE
# 252 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 117 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 253 "data/maps/Route113_GlassWorkshop/scripts.pory"
	compare VAR_ASH_GATHER_COUNT, YELLOW_FLUTE_PRICE
# 254 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto_if_lt Route113_GlassWorkshop_EventScript_YellowFlute_2
# 255 "data/maps/Route113_GlassWorkshop/scripts.pory"
Route113_GlassWorkshop_EventScript_YellowFlute_1:
# 256 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 120 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 257 "data/maps/Route113_GlassWorkshop/scripts.pory"
	msgbox Route113_GlassWorkshop_Text_IsThatTheItemForYou, MSGBOX_YESNO
# 258 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 121 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 259 "data/maps/Route113_GlassWorkshop/scripts.pory"
	compare VAR_RESULT, NO
# 260 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto_if_eq Route113_GlassWorkshop_EventScript_YellowFlute_5
# 261 "data/maps/Route113_GlassWorkshop/scripts.pory"
Route113_GlassWorkshop_EventScript_YellowFlute_4:
# 262 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 124 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 263 "data/maps/Route113_GlassWorkshop/scripts.pory"
	setvar VAR_GLASS_WORKSHOP_STATE, 11
# 264 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 125 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 265 "data/maps/Route113_GlassWorkshop/scripts.pory"
	subvar VAR_ASH_GATHER_COUNT, YELLOW_FLUTE_PRICE
# 266 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 126 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 267 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto Route113_GlassWorkshop_EventScript_MakeGlassItem
# 268 "data/maps/Route113_GlassWorkshop/scripts.pory"
	end
# 269 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 270 "data/maps/Route113_GlassWorkshop/scripts.pory"
Route113_GlassWorkshop_EventScript_YellowFlute_2:
# 271 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 118 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 272 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto Route113_GlassWorkshop_EventScript_NotEnoughAshForItem
# 273 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto Route113_GlassWorkshop_EventScript_YellowFlute_1
# 274 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 275 "data/maps/Route113_GlassWorkshop/scripts.pory"
Route113_GlassWorkshop_EventScript_YellowFlute_5:
# 276 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 122 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 277 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto Route113_GlassWorkshop_EventScript_ChooseDifferentItem
# 278 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto Route113_GlassWorkshop_EventScript_YellowFlute_4
# 279 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 280 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 281 "data/maps/Route113_GlassWorkshop/scripts.pory"
Route113_GlassWorkshop_EventScript_RedFlute::
# 282 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 131 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 283 "data/maps/Route113_GlassWorkshop/scripts.pory"
	setvar VAR_0x8008, ITEM_RED_FLUTE
# 284 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 132 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 285 "data/maps/Route113_GlassWorkshop/scripts.pory"
	bufferitemname STR_VAR_1, VAR_0x8008
# 286 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 133 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 287 "data/maps/Route113_GlassWorkshop/scripts.pory"
	setvar VAR_0x800A, RED_FLUTE_PRICE
# 288 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 134 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 289 "data/maps/Route113_GlassWorkshop/scripts.pory"
	compare VAR_ASH_GATHER_COUNT, RED_FLUTE_PRICE
# 290 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto_if_lt Route113_GlassWorkshop_EventScript_RedFlute_2
# 291 "data/maps/Route113_GlassWorkshop/scripts.pory"
Route113_GlassWorkshop_EventScript_RedFlute_1:
# 292 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 137 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 293 "data/maps/Route113_GlassWorkshop/scripts.pory"
	msgbox Route113_GlassWorkshop_Text_IsThatTheItemForYou, MSGBOX_YESNO
# 294 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 138 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 295 "data/maps/Route113_GlassWorkshop/scripts.pory"
	compare VAR_RESULT, NO
# 296 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto_if_eq Route113_GlassWorkshop_EventScript_RedFlute_5
# 297 "data/maps/Route113_GlassWorkshop/scripts.pory"
Route113_GlassWorkshop_EventScript_RedFlute_4:
# 298 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 141 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 299 "data/maps/Route113_GlassWorkshop/scripts.pory"
	setvar VAR_GLASS_WORKSHOP_STATE, 12
# 300 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 142 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 301 "data/maps/Route113_GlassWorkshop/scripts.pory"
	subvar VAR_ASH_GATHER_COUNT, RED_FLUTE_PRICE
# 302 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 143 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 303 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto Route113_GlassWorkshop_EventScript_MakeGlassItem
# 304 "data/maps/Route113_GlassWorkshop/scripts.pory"
	end
# 305 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 306 "data/maps/Route113_GlassWorkshop/scripts.pory"
Route113_GlassWorkshop_EventScript_RedFlute_2:
# 307 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 135 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 308 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto Route113_GlassWorkshop_EventScript_NotEnoughAshForItem
# 309 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto Route113_GlassWorkshop_EventScript_RedFlute_1
# 310 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 311 "data/maps/Route113_GlassWorkshop/scripts.pory"
Route113_GlassWorkshop_EventScript_RedFlute_5:
# 312 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 139 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 313 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto Route113_GlassWorkshop_EventScript_ChooseDifferentItem
# 314 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto Route113_GlassWorkshop_EventScript_RedFlute_4
# 315 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 316 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 317 "data/maps/Route113_GlassWorkshop/scripts.pory"
Route113_GlassWorkshop_EventScript_WhiteFlute::
# 318 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 148 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 319 "data/maps/Route113_GlassWorkshop/scripts.pory"
	setvar VAR_0x8008, ITEM_WHITE_FLUTE
# 320 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 149 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 321 "data/maps/Route113_GlassWorkshop/scripts.pory"
	bufferitemname STR_VAR_1, VAR_0x8008
# 322 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 150 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 323 "data/maps/Route113_GlassWorkshop/scripts.pory"
	setvar VAR_0x800A, WHITE_FLUTE_PRICE
# 324 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 151 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 325 "data/maps/Route113_GlassWorkshop/scripts.pory"
	compare VAR_ASH_GATHER_COUNT, WHITE_FLUTE_PRICE
# 326 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto_if_lt Route113_GlassWorkshop_EventScript_WhiteFlute_2
# 327 "data/maps/Route113_GlassWorkshop/scripts.pory"
Route113_GlassWorkshop_EventScript_WhiteFlute_1:
# 328 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 154 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 329 "data/maps/Route113_GlassWorkshop/scripts.pory"
	msgbox Route113_GlassWorkshop_Text_IsThatTheItemForYou, MSGBOX_YESNO
# 330 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 155 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 331 "data/maps/Route113_GlassWorkshop/scripts.pory"
	compare VAR_RESULT, NO
# 332 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto_if_eq Route113_GlassWorkshop_EventScript_WhiteFlute_5
# 333 "data/maps/Route113_GlassWorkshop/scripts.pory"
Route113_GlassWorkshop_EventScript_WhiteFlute_4:
# 334 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 158 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 335 "data/maps/Route113_GlassWorkshop/scripts.pory"
	setvar VAR_GLASS_WORKSHOP_STATE, 13
# 336 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 159 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 337 "data/maps/Route113_GlassWorkshop/scripts.pory"
	subvar VAR_ASH_GATHER_COUNT, WHITE_FLUTE_PRICE
# 338 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 160 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 339 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto Route113_GlassWorkshop_EventScript_MakeGlassItem
# 340 "data/maps/Route113_GlassWorkshop/scripts.pory"
	end
# 341 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 342 "data/maps/Route113_GlassWorkshop/scripts.pory"
Route113_GlassWorkshop_EventScript_WhiteFlute_2:
# 343 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 152 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 344 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto Route113_GlassWorkshop_EventScript_NotEnoughAshForItem
# 345 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto Route113_GlassWorkshop_EventScript_WhiteFlute_1
# 346 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 347 "data/maps/Route113_GlassWorkshop/scripts.pory"
Route113_GlassWorkshop_EventScript_WhiteFlute_5:
# 348 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 156 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 349 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto Route113_GlassWorkshop_EventScript_ChooseDifferentItem
# 350 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto Route113_GlassWorkshop_EventScript_WhiteFlute_4
# 351 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 352 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 353 "data/maps/Route113_GlassWorkshop/scripts.pory"
Route113_GlassWorkshop_EventScript_BlackFlute::
# 354 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 165 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 355 "data/maps/Route113_GlassWorkshop/scripts.pory"
	setvar VAR_0x8008, ITEM_BLACK_FLUTE
# 356 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 166 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 357 "data/maps/Route113_GlassWorkshop/scripts.pory"
	bufferitemname STR_VAR_1, VAR_0x8008
# 358 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 167 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 359 "data/maps/Route113_GlassWorkshop/scripts.pory"
	setvar VAR_0x800A, BLACK_FLUTE_PRICE
# 360 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 168 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 361 "data/maps/Route113_GlassWorkshop/scripts.pory"
	compare VAR_ASH_GATHER_COUNT, BLACK_FLUTE_PRICE
# 362 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto_if_lt Route113_GlassWorkshop_EventScript_BlackFlute_2
# 363 "data/maps/Route113_GlassWorkshop/scripts.pory"
Route113_GlassWorkshop_EventScript_BlackFlute_1:
# 364 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 171 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 365 "data/maps/Route113_GlassWorkshop/scripts.pory"
	msgbox Route113_GlassWorkshop_Text_IsThatTheItemForYou, MSGBOX_YESNO
# 366 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 172 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 367 "data/maps/Route113_GlassWorkshop/scripts.pory"
	compare VAR_RESULT, NO
# 368 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto_if_eq Route113_GlassWorkshop_EventScript_BlackFlute_5
# 369 "data/maps/Route113_GlassWorkshop/scripts.pory"
Route113_GlassWorkshop_EventScript_BlackFlute_4:
# 370 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 175 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 371 "data/maps/Route113_GlassWorkshop/scripts.pory"
	setvar VAR_GLASS_WORKSHOP_STATE, 14
# 372 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 176 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 373 "data/maps/Route113_GlassWorkshop/scripts.pory"
	subvar VAR_ASH_GATHER_COUNT, BLACK_FLUTE_PRICE
# 374 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 177 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 375 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto Route113_GlassWorkshop_EventScript_MakeGlassItem
# 376 "data/maps/Route113_GlassWorkshop/scripts.pory"
	end
# 377 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 378 "data/maps/Route113_GlassWorkshop/scripts.pory"
Route113_GlassWorkshop_EventScript_BlackFlute_2:
# 379 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 169 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 380 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto Route113_GlassWorkshop_EventScript_NotEnoughAshForItem
# 381 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto Route113_GlassWorkshop_EventScript_BlackFlute_1
# 382 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 383 "data/maps/Route113_GlassWorkshop/scripts.pory"
Route113_GlassWorkshop_EventScript_BlackFlute_5:
# 384 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 173 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 385 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto Route113_GlassWorkshop_EventScript_ChooseDifferentItem
# 386 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto Route113_GlassWorkshop_EventScript_BlackFlute_4
# 387 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 388 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 389 "data/maps/Route113_GlassWorkshop/scripts.pory"
Route113_GlassWorkshop_EventScript_PrettyChair::
# 390 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 182 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 391 "data/maps/Route113_GlassWorkshop/scripts.pory"
	setvar VAR_0x8009, 1
# 392 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 183 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 393 "data/maps/Route113_GlassWorkshop/scripts.pory"
	setvar VAR_0x8008, DECOR_PRETTY_CHAIR
# 394 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 184 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 395 "data/maps/Route113_GlassWorkshop/scripts.pory"
	bufferdecorationname STR_VAR_1, VAR_0x8008
# 396 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 185 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 397 "data/maps/Route113_GlassWorkshop/scripts.pory"
	setvar VAR_0x800A, PRETTY_CHAIR_PRICE
# 398 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 186 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 399 "data/maps/Route113_GlassWorkshop/scripts.pory"
	compare VAR_ASH_GATHER_COUNT, PRETTY_CHAIR_PRICE
# 400 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto_if_lt Route113_GlassWorkshop_EventScript_PrettyChair_2
# 401 "data/maps/Route113_GlassWorkshop/scripts.pory"
Route113_GlassWorkshop_EventScript_PrettyChair_1:
# 402 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 189 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 403 "data/maps/Route113_GlassWorkshop/scripts.pory"
	msgbox Route113_GlassWorkshop_Text_IsThatTheItemForYou, MSGBOX_YESNO
# 404 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 190 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 405 "data/maps/Route113_GlassWorkshop/scripts.pory"
	compare VAR_RESULT, NO
# 406 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto_if_eq Route113_GlassWorkshop_EventScript_PrettyChair_5
# 407 "data/maps/Route113_GlassWorkshop/scripts.pory"
Route113_GlassWorkshop_EventScript_PrettyChair_4:
# 408 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 193 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 409 "data/maps/Route113_GlassWorkshop/scripts.pory"
	setvar VAR_GLASS_WORKSHOP_STATE, 15
# 410 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 194 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 411 "data/maps/Route113_GlassWorkshop/scripts.pory"
	subvar VAR_ASH_GATHER_COUNT, PRETTY_CHAIR_PRICE
# 412 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 195 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 413 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto Route113_GlassWorkshop_EventScript_MakeGlassItem
# 414 "data/maps/Route113_GlassWorkshop/scripts.pory"
	end
# 415 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 416 "data/maps/Route113_GlassWorkshop/scripts.pory"
Route113_GlassWorkshop_EventScript_PrettyChair_2:
# 417 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 187 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 418 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto Route113_GlassWorkshop_EventScript_NotEnoughAshForItem
# 419 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto Route113_GlassWorkshop_EventScript_PrettyChair_1
# 420 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 421 "data/maps/Route113_GlassWorkshop/scripts.pory"
Route113_GlassWorkshop_EventScript_PrettyChair_5:
# 422 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 191 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 423 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto Route113_GlassWorkshop_EventScript_ChooseDifferentItem
# 424 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto Route113_GlassWorkshop_EventScript_PrettyChair_4
# 425 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 426 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 427 "data/maps/Route113_GlassWorkshop/scripts.pory"
Route113_GlassWorkshop_EventScript_PrettyDesk::
# 428 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 200 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 429 "data/maps/Route113_GlassWorkshop/scripts.pory"
	setvar VAR_0x8009, 1
# 430 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 201 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 431 "data/maps/Route113_GlassWorkshop/scripts.pory"
	setvar VAR_0x8008, DECOR_PRETTY_DESK
# 432 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 202 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 433 "data/maps/Route113_GlassWorkshop/scripts.pory"
	bufferdecorationname STR_VAR_1, VAR_0x8008
# 434 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 203 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 435 "data/maps/Route113_GlassWorkshop/scripts.pory"
	setvar VAR_0x800A, PRETTY_DESK_PRICE
# 436 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 204 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 437 "data/maps/Route113_GlassWorkshop/scripts.pory"
	compare VAR_ASH_GATHER_COUNT, PRETTY_DESK_PRICE
# 438 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto_if_lt Route113_GlassWorkshop_EventScript_PrettyDesk_2
# 439 "data/maps/Route113_GlassWorkshop/scripts.pory"
Route113_GlassWorkshop_EventScript_PrettyDesk_1:
# 440 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 207 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 441 "data/maps/Route113_GlassWorkshop/scripts.pory"
	msgbox Route113_GlassWorkshop_Text_IsThatTheItemForYou, MSGBOX_YESNO
# 442 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 208 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 443 "data/maps/Route113_GlassWorkshop/scripts.pory"
	compare VAR_RESULT, NO
# 444 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto_if_eq Route113_GlassWorkshop_EventScript_PrettyDesk_5
# 445 "data/maps/Route113_GlassWorkshop/scripts.pory"
Route113_GlassWorkshop_EventScript_PrettyDesk_4:
# 446 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 211 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 447 "data/maps/Route113_GlassWorkshop/scripts.pory"
	setvar VAR_GLASS_WORKSHOP_STATE, 16
# 448 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 212 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 449 "data/maps/Route113_GlassWorkshop/scripts.pory"
	subvar VAR_ASH_GATHER_COUNT, PRETTY_DESK_PRICE
# 450 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 213 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 451 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto Route113_GlassWorkshop_EventScript_MakeGlassItem
# 452 "data/maps/Route113_GlassWorkshop/scripts.pory"
	end
# 453 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 454 "data/maps/Route113_GlassWorkshop/scripts.pory"
Route113_GlassWorkshop_EventScript_PrettyDesk_2:
# 455 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 205 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 456 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto Route113_GlassWorkshop_EventScript_NotEnoughAshForItem
# 457 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto Route113_GlassWorkshop_EventScript_PrettyDesk_1
# 458 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 459 "data/maps/Route113_GlassWorkshop/scripts.pory"
Route113_GlassWorkshop_EventScript_PrettyDesk_5:
# 460 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 209 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 461 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto Route113_GlassWorkshop_EventScript_ChooseDifferentItem
# 462 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto Route113_GlassWorkshop_EventScript_PrettyDesk_4
# 463 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 464 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 465 "data/maps/Route113_GlassWorkshop/scripts.pory"
Route113_GlassWorkshop_EventScript_CancelGlassItemSelect::
# 466 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 218 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 467 "data/maps/Route113_GlassWorkshop/scripts.pory"
	msgbox Route113_GlassWorkshop_Text_AllThatAshButDontWantAnything, MSGBOX_DEFAULT
# 468 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 219 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 469 "data/maps/Route113_GlassWorkshop/scripts.pory"
	release
# 470 "data/maps/Route113_GlassWorkshop/scripts.pory"
	end
# 471 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 472 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 473 "data/maps/Route113_GlassWorkshop/scripts.pory"
Route113_GlassWorkshop_EventScript_NotEnoughAsh::
# 474 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 224 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 475 "data/maps/Route113_GlassWorkshop/scripts.pory"
	setvar VAR_0x800A, LOWEST_ASH_PRICE
# 476 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 225 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 477 "data/maps/Route113_GlassWorkshop/scripts.pory"
	subvar VAR_0x800A, VAR_ASH_GATHER_COUNT
# 478 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 226 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 479 "data/maps/Route113_GlassWorkshop/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_0x800A
# 480 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 227 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 481 "data/maps/Route113_GlassWorkshop/scripts.pory"
	msgbox Route113_GlassWorkshop_Text_NotEnoughAshNeedX, MSGBOX_DEFAULT
# 482 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 228 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 483 "data/maps/Route113_GlassWorkshop/scripts.pory"
	release
# 484 "data/maps/Route113_GlassWorkshop/scripts.pory"
	end
# 485 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 486 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 487 "data/maps/Route113_GlassWorkshop/scripts.pory"
Route113_GlassWorkshop_EventScript_NotEnoughAshForItem::
# 488 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 233 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 489 "data/maps/Route113_GlassWorkshop/scripts.pory"
	subvar VAR_0x800A, VAR_ASH_GATHER_COUNT
# 490 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 234 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 491 "data/maps/Route113_GlassWorkshop/scripts.pory"
	buffernumberstring STR_VAR_2, VAR_0x800A
# 492 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 235 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 493 "data/maps/Route113_GlassWorkshop/scripts.pory"
	message Route113_GlassWorkshop_Text_NotEnoughAshToMakeItem
# 494 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 236 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 495 "data/maps/Route113_GlassWorkshop/scripts.pory"
	waitmessage
# 496 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 237 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 497 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto Route113_GlassWorkshop_EventScript_ChooseGlassItem
# 498 "data/maps/Route113_GlassWorkshop/scripts.pory"
	end
# 499 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 500 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 501 "data/maps/Route113_GlassWorkshop/scripts.pory"
Route113_GlassWorkshop_EventScript_ChooseDifferentItem::
# 502 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 242 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 503 "data/maps/Route113_GlassWorkshop/scripts.pory"
	message Route113_GlassWorkshop_Text_WhichWouldYouLike
# 504 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 243 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 505 "data/maps/Route113_GlassWorkshop/scripts.pory"
	waitmessage
# 506 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 244 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 507 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto Route113_GlassWorkshop_EventScript_ChooseGlassItem
# 508 "data/maps/Route113_GlassWorkshop/scripts.pory"
	end
# 509 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 510 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 511 "data/maps/Route113_GlassWorkshop/scripts.pory"
Route113_GlassWorkshop_EventScript_MakeGlassItem::
# 512 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 249 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 513 "data/maps/Route113_GlassWorkshop/scripts.pory"
	msgbox Route113_GlassWorkshop_Text_IllMakeItemForYou, MSGBOX_DEFAULT
# 514 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 250 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 515 "data/maps/Route113_GlassWorkshop/scripts.pory"
	closemessage
# 516 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 251 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 517 "data/maps/Route113_GlassWorkshop/scripts.pory"
	fadescreen FADE_TO_BLACK
# 518 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 252 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 519 "data/maps/Route113_GlassWorkshop/scripts.pory"
	playse SE_SELECT
# 520 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 253 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 521 "data/maps/Route113_GlassWorkshop/scripts.pory"
	delay 30
# 522 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 254 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 523 "data/maps/Route113_GlassWorkshop/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 524 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 255 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 525 "data/maps/Route113_GlassWorkshop/scripts.pory"
	msgbox Route113_GlassWorkshop_Text_IveFinishedGlassItem, MSGBOX_DEFAULT
# 526 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 256 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 527 "data/maps/Route113_GlassWorkshop/scripts.pory"
	compare VAR_0x8009, 0
# 528 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto_if_eq Route113_GlassWorkshop_EventScript_MakeGlassItem_2
# 529 "data/maps/Route113_GlassWorkshop/scripts.pory"
Route113_GlassWorkshop_EventScript_MakeGlassItem_1:
# 530 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 259 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 531 "data/maps/Route113_GlassWorkshop/scripts.pory"
	compare VAR_0x8009, 1
# 532 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto_if_eq Route113_GlassWorkshop_EventScript_MakeGlassItem_5
# 533 "data/maps/Route113_GlassWorkshop/scripts.pory"
Route113_GlassWorkshop_EventScript_MakeGlassItem_4:
# 534 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 262 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 535 "data/maps/Route113_GlassWorkshop/scripts.pory"
	setvar VAR_GLASS_WORKSHOP_STATE, 2
# 536 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 263 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 537 "data/maps/Route113_GlassWorkshop/scripts.pory"
	release
# 538 "data/maps/Route113_GlassWorkshop/scripts.pory"
	end
# 539 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 540 "data/maps/Route113_GlassWorkshop/scripts.pory"
Route113_GlassWorkshop_EventScript_MakeGlassItem_2:
# 541 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 257 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 542 "data/maps/Route113_GlassWorkshop/scripts.pory"
	call Route113_GlassWorkshop_EventScript_GiveGlassFlute
# 543 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto Route113_GlassWorkshop_EventScript_MakeGlassItem_1
# 544 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 545 "data/maps/Route113_GlassWorkshop/scripts.pory"
Route113_GlassWorkshop_EventScript_MakeGlassItem_5:
# 546 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 260 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 547 "data/maps/Route113_GlassWorkshop/scripts.pory"
	call Route113_GlassWorkshop_EventScript_GiveGlassDecor
# 548 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto Route113_GlassWorkshop_EventScript_MakeGlassItem_4
# 549 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 550 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 551 "data/maps/Route113_GlassWorkshop/scripts.pory"
Route113_GlassWorkshop_EventScript_GiveGlassFlute::
# 552 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 268 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 553 "data/maps/Route113_GlassWorkshop/scripts.pory"
	giveitem VAR_0x8008
# 554 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 269 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 555 "data/maps/Route113_GlassWorkshop/scripts.pory"
	compare VAR_RESULT, FALSE
# 556 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto_if_eq Route113_GlassWorkshop_EventScript_GiveGlassFlute_2
# 557 "data/maps/Route113_GlassWorkshop/scripts.pory"
Route113_GlassWorkshop_EventScript_GiveGlassFlute_1:
# 558 "data/maps/Route113_GlassWorkshop/scripts.pory"
	return
# 559 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 560 "data/maps/Route113_GlassWorkshop/scripts.pory"
Route113_GlassWorkshop_EventScript_GiveGlassFlute_2:
# 561 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 270 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 562 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto Route113_GlassWorkshop_EventScript_NoRoomForFlute
# 563 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto Route113_GlassWorkshop_EventScript_GiveGlassFlute_1
# 564 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 565 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 566 "data/maps/Route113_GlassWorkshop/scripts.pory"
Route113_GlassWorkshop_EventScript_GiveGlassDecor::
# 567 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 276 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 568 "data/maps/Route113_GlassWorkshop/scripts.pory"
	givedecoration VAR_0x8008
# 569 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 277 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 570 "data/maps/Route113_GlassWorkshop/scripts.pory"
	compare VAR_RESULT, FALSE
# 571 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto_if_eq Route113_GlassWorkshop_EventScript_GiveGlassDecor_2
# 572 "data/maps/Route113_GlassWorkshop/scripts.pory"
Route113_GlassWorkshop_EventScript_GiveGlassDecor_1:
# 573 "data/maps/Route113_GlassWorkshop/scripts.pory"
	return
# 574 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 575 "data/maps/Route113_GlassWorkshop/scripts.pory"
Route113_GlassWorkshop_EventScript_GiveGlassDecor_2:
# 576 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 278 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 577 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto Route113_GlassWorkshop_EventScript_NoRoomForDecor
# 578 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto Route113_GlassWorkshop_EventScript_GiveGlassDecor_1
# 579 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 580 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 581 "data/maps/Route113_GlassWorkshop/scripts.pory"
Route113_GlassWorkshop_EventScript_NoRoomForFlute::
# 582 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 284 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 583 "data/maps/Route113_GlassWorkshop/scripts.pory"
	call Common_EventScript_BagIsFull
# 584 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 285 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 585 "data/maps/Route113_GlassWorkshop/scripts.pory"
	msgbox Route113_GlassWorkshop_Text_NoRoomInBag, MSGBOX_DEFAULT
# 586 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 286 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 587 "data/maps/Route113_GlassWorkshop/scripts.pory"
	release
# 588 "data/maps/Route113_GlassWorkshop/scripts.pory"
	end
# 589 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 590 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 591 "data/maps/Route113_GlassWorkshop/scripts.pory"
Route113_GlassWorkshop_EventScript_NoRoomForDecor::
# 592 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 291 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 593 "data/maps/Route113_GlassWorkshop/scripts.pory"
	call Common_EventScript_NoRoomForDecor
# 594 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 292 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 595 "data/maps/Route113_GlassWorkshop/scripts.pory"
	msgbox Route113_GlassWorkshop_Text_NoRoomInPC, MSGBOX_DEFAULT
# 596 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 293 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 597 "data/maps/Route113_GlassWorkshop/scripts.pory"
	release
# 598 "data/maps/Route113_GlassWorkshop/scripts.pory"
	end
# 599 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 600 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 601 "data/maps/Route113_GlassWorkshop/scripts.pory"
Route113_GlassWorkshop_EventScript_GiveItemAfterNoRoom::
# 602 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 298 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 603 "data/maps/Route113_GlassWorkshop/scripts.pory"
	switch VAR_GLASS_WORKSHOP_STATE
# 604 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 299 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 605 "data/maps/Route113_GlassWorkshop/scripts.pory"
	case 10, Route113_GlassWorkshop_EventScript_GiveItemAfterNoRoom_3
# 606 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 301 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 607 "data/maps/Route113_GlassWorkshop/scripts.pory"
	case 11, Route113_GlassWorkshop_EventScript_GiveItemAfterNoRoom_4
# 608 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 303 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 609 "data/maps/Route113_GlassWorkshop/scripts.pory"
	case 12, Route113_GlassWorkshop_EventScript_GiveItemAfterNoRoom_5
# 610 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 305 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 611 "data/maps/Route113_GlassWorkshop/scripts.pory"
	case 13, Route113_GlassWorkshop_EventScript_GiveItemAfterNoRoom_6
# 612 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 307 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 613 "data/maps/Route113_GlassWorkshop/scripts.pory"
	case 14, Route113_GlassWorkshop_EventScript_GiveItemAfterNoRoom_7
# 614 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 309 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 615 "data/maps/Route113_GlassWorkshop/scripts.pory"
	case 15, Route113_GlassWorkshop_EventScript_GiveItemAfterNoRoom_8
# 616 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 311 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 617 "data/maps/Route113_GlassWorkshop/scripts.pory"
	case 16, Route113_GlassWorkshop_EventScript_GiveItemAfterNoRoom_9
# 618 "data/maps/Route113_GlassWorkshop/scripts.pory"
Route113_GlassWorkshop_EventScript_GiveItemAfterNoRoom_1:
# 619 "data/maps/Route113_GlassWorkshop/scripts.pory"
	end
# 620 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 621 "data/maps/Route113_GlassWorkshop/scripts.pory"
Route113_GlassWorkshop_EventScript_GiveItemAfterNoRoom_3:
# 622 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 300 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 623 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto Route113_GlassWorkshop_EventScript_GiveBlueFlute
# 624 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto Route113_GlassWorkshop_EventScript_GiveItemAfterNoRoom_1
# 625 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 626 "data/maps/Route113_GlassWorkshop/scripts.pory"
Route113_GlassWorkshop_EventScript_GiveItemAfterNoRoom_4:
# 627 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 302 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 628 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto Route113_GlassWorkshop_EventScript_GiveYellowFlute
# 629 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto Route113_GlassWorkshop_EventScript_GiveItemAfterNoRoom_1
# 630 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 631 "data/maps/Route113_GlassWorkshop/scripts.pory"
Route113_GlassWorkshop_EventScript_GiveItemAfterNoRoom_5:
# 632 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 304 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 633 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto Route113_GlassWorkshop_EventScript_GiveRedFlute
# 634 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto Route113_GlassWorkshop_EventScript_GiveItemAfterNoRoom_1
# 635 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 636 "data/maps/Route113_GlassWorkshop/scripts.pory"
Route113_GlassWorkshop_EventScript_GiveItemAfterNoRoom_6:
# 637 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 306 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 638 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto Route113_GlassWorkshop_EventScript_GiveWhiteFlute
# 639 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto Route113_GlassWorkshop_EventScript_GiveItemAfterNoRoom_1
# 640 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 641 "data/maps/Route113_GlassWorkshop/scripts.pory"
Route113_GlassWorkshop_EventScript_GiveItemAfterNoRoom_7:
# 642 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 308 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 643 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto Route113_GlassWorkshop_EventScript_GiveBlackFlute
# 644 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto Route113_GlassWorkshop_EventScript_GiveItemAfterNoRoom_1
# 645 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 646 "data/maps/Route113_GlassWorkshop/scripts.pory"
Route113_GlassWorkshop_EventScript_GiveItemAfterNoRoom_8:
# 647 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 310 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 648 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto Route113_GlassWorkshop_EventScript_GivePrettyChair
# 649 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto Route113_GlassWorkshop_EventScript_GiveItemAfterNoRoom_1
# 650 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 651 "data/maps/Route113_GlassWorkshop/scripts.pory"
Route113_GlassWorkshop_EventScript_GiveItemAfterNoRoom_9:
# 652 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 312 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 653 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto Route113_GlassWorkshop_EventScript_GivePrettyDesk
# 654 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto Route113_GlassWorkshop_EventScript_GiveItemAfterNoRoom_1
# 655 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 656 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 657 "data/maps/Route113_GlassWorkshop/scripts.pory"
Route113_GlassWorkshop_EventScript_GiveBlueFlute::
# 658 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 318 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 659 "data/maps/Route113_GlassWorkshop/scripts.pory"
	setvar VAR_0x8009, 0
# 660 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 319 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 661 "data/maps/Route113_GlassWorkshop/scripts.pory"
	setvar VAR_0x8008, ITEM_BLUE_FLUTE
# 662 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 320 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 663 "data/maps/Route113_GlassWorkshop/scripts.pory"
	bufferitemname STR_VAR_1, VAR_0x8008
# 664 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 321 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 665 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto Route113_GlassWorkshop_EventScript_TryGiveItemAgain
# 666 "data/maps/Route113_GlassWorkshop/scripts.pory"
	end
# 667 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 668 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 669 "data/maps/Route113_GlassWorkshop/scripts.pory"
Route113_GlassWorkshop_EventScript_GiveYellowFlute::
# 670 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 326 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 671 "data/maps/Route113_GlassWorkshop/scripts.pory"
	setvar VAR_0x8009, 0
# 672 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 327 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 673 "data/maps/Route113_GlassWorkshop/scripts.pory"
	setvar VAR_0x8008, ITEM_YELLOW_FLUTE
# 674 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 328 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 675 "data/maps/Route113_GlassWorkshop/scripts.pory"
	bufferitemname STR_VAR_1, VAR_0x8008
# 676 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 329 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 677 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto Route113_GlassWorkshop_EventScript_TryGiveItemAgain
# 678 "data/maps/Route113_GlassWorkshop/scripts.pory"
	end
# 679 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 680 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 681 "data/maps/Route113_GlassWorkshop/scripts.pory"
Route113_GlassWorkshop_EventScript_GiveRedFlute::
# 682 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 334 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 683 "data/maps/Route113_GlassWorkshop/scripts.pory"
	setvar VAR_0x8009, 0
# 684 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 335 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 685 "data/maps/Route113_GlassWorkshop/scripts.pory"
	setvar VAR_0x8008, ITEM_RED_FLUTE
# 686 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 336 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 687 "data/maps/Route113_GlassWorkshop/scripts.pory"
	bufferitemname STR_VAR_1, VAR_0x8008
# 688 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 337 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 689 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto Route113_GlassWorkshop_EventScript_TryGiveItemAgain
# 690 "data/maps/Route113_GlassWorkshop/scripts.pory"
	end
# 691 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 692 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 693 "data/maps/Route113_GlassWorkshop/scripts.pory"
Route113_GlassWorkshop_EventScript_GiveWhiteFlute::
# 694 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 342 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 695 "data/maps/Route113_GlassWorkshop/scripts.pory"
	setvar VAR_0x8009, 0
# 696 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 343 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 697 "data/maps/Route113_GlassWorkshop/scripts.pory"
	setvar VAR_0x8008, ITEM_WHITE_FLUTE
# 698 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 344 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 699 "data/maps/Route113_GlassWorkshop/scripts.pory"
	bufferitemname STR_VAR_1, VAR_0x8008
# 700 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 345 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 701 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto Route113_GlassWorkshop_EventScript_TryGiveItemAgain
# 702 "data/maps/Route113_GlassWorkshop/scripts.pory"
	end
# 703 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 704 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 705 "data/maps/Route113_GlassWorkshop/scripts.pory"
Route113_GlassWorkshop_EventScript_GiveBlackFlute::
# 706 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 350 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 707 "data/maps/Route113_GlassWorkshop/scripts.pory"
	setvar VAR_0x8009, 0
# 708 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 351 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 709 "data/maps/Route113_GlassWorkshop/scripts.pory"
	setvar VAR_0x8008, ITEM_BLACK_FLUTE
# 710 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 352 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 711 "data/maps/Route113_GlassWorkshop/scripts.pory"
	bufferitemname STR_VAR_1, VAR_0x8008
# 712 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 353 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 713 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto Route113_GlassWorkshop_EventScript_TryGiveItemAgain
# 714 "data/maps/Route113_GlassWorkshop/scripts.pory"
	end
# 715 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 716 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 717 "data/maps/Route113_GlassWorkshop/scripts.pory"
Route113_GlassWorkshop_EventScript_GivePrettyChair::
# 718 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 358 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 719 "data/maps/Route113_GlassWorkshop/scripts.pory"
	setvar VAR_0x8009, 1
# 720 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 359 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 721 "data/maps/Route113_GlassWorkshop/scripts.pory"
	setvar VAR_0x8008, DECOR_PRETTY_CHAIR
# 722 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 360 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 723 "data/maps/Route113_GlassWorkshop/scripts.pory"
	bufferdecorationname STR_VAR_1, DECOR_PRETTY_CHAIR
# 724 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 361 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 725 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto Route113_GlassWorkshop_EventScript_TryGiveItemAgain
# 726 "data/maps/Route113_GlassWorkshop/scripts.pory"
	end
# 727 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 728 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 729 "data/maps/Route113_GlassWorkshop/scripts.pory"
Route113_GlassWorkshop_EventScript_GivePrettyDesk::
# 730 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 366 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 731 "data/maps/Route113_GlassWorkshop/scripts.pory"
	setvar VAR_0x8009, 1
# 732 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 367 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 733 "data/maps/Route113_GlassWorkshop/scripts.pory"
	setvar VAR_0x8008, DECOR_PRETTY_DESK
# 734 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 368 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 735 "data/maps/Route113_GlassWorkshop/scripts.pory"
	bufferdecorationname STR_VAR_1, DECOR_PRETTY_DESK
# 736 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 369 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 737 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto Route113_GlassWorkshop_EventScript_TryGiveItemAgain
# 738 "data/maps/Route113_GlassWorkshop/scripts.pory"
	end
# 739 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 740 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 741 "data/maps/Route113_GlassWorkshop/scripts.pory"
Route113_GlassWorkshop_EventScript_TryGiveItemAgain::
# 742 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 374 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 743 "data/maps/Route113_GlassWorkshop/scripts.pory"
	msgbox Route113_GlassWorkshop_Text_IveFinishedGlassItem, MSGBOX_DEFAULT
# 744 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 375 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 745 "data/maps/Route113_GlassWorkshop/scripts.pory"
	compare VAR_0x8009, 0
# 746 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto_if_eq Route113_GlassWorkshop_EventScript_TryGiveItemAgain_2
# 747 "data/maps/Route113_GlassWorkshop/scripts.pory"
Route113_GlassWorkshop_EventScript_TryGiveItemAgain_1:
# 748 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 378 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 749 "data/maps/Route113_GlassWorkshop/scripts.pory"
	compare VAR_0x8009, 1
# 750 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto_if_eq Route113_GlassWorkshop_EventScript_TryGiveItemAgain_5
# 751 "data/maps/Route113_GlassWorkshop/scripts.pory"
Route113_GlassWorkshop_EventScript_TryGiveItemAgain_4:
# 752 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 381 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 753 "data/maps/Route113_GlassWorkshop/scripts.pory"
	setvar VAR_GLASS_WORKSHOP_STATE, 2
# 754 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 382 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 755 "data/maps/Route113_GlassWorkshop/scripts.pory"
	release
# 756 "data/maps/Route113_GlassWorkshop/scripts.pory"
	end
# 757 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 758 "data/maps/Route113_GlassWorkshop/scripts.pory"
Route113_GlassWorkshop_EventScript_TryGiveItemAgain_2:
# 759 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 376 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 760 "data/maps/Route113_GlassWorkshop/scripts.pory"
	call Route113_GlassWorkshop_EventScript_GiveGlassFlute
# 761 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto Route113_GlassWorkshop_EventScript_TryGiveItemAgain_1
# 762 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 763 "data/maps/Route113_GlassWorkshop/scripts.pory"
Route113_GlassWorkshop_EventScript_TryGiveItemAgain_5:
# 764 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 379 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 765 "data/maps/Route113_GlassWorkshop/scripts.pory"
	call Route113_GlassWorkshop_EventScript_GiveGlassDecor
# 766 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto Route113_GlassWorkshop_EventScript_TryGiveItemAgain_4
# 767 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 768 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 769 "data/maps/Route113_GlassWorkshop/scripts.pory"
Route113_GlassWorkshop_EventScript_NinjaBoy::
# 770 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 387 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 771 "data/maps/Route113_GlassWorkshop/scripts.pory"
	msgbox Route113_GlassWorkshop_Text_FunToBlowGlassFlute, MSGBOX_NPC
# 772 "data/maps/Route113_GlassWorkshop/scripts.pory"
	end
# 773 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 774 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 775 "data/maps/Route113_GlassWorkshop/scripts.pory"
Route113_GlassWorkshop_Text_GoCollectAshWithThis::
# 776 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 391 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 777 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "This area is covered in volcanic ash,\n"
# 778 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "huff-puff!\p"
# 779 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "I'm specially gifted, huff-puff.\p"
# 780 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "I make glass out of volcanic ash\n"
# 781 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "and make items, huff-puff.\p"
# 782 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "Go collect ashes with this, huff-puff.$"
# 783 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 784 "data/maps/Route113_GlassWorkshop/scripts.pory"
Route113_GlassWorkshop_Text_ExplainSootSack::
# 785 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 400 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 786 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "Just take that SOOT SACK and walk\n"
# 787 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "through piles of ash, huff-puff.\p"
# 788 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "And it will fill up with the volcanic ash,\n"
# 789 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "huff-puff.\p"
# 790 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "Once you think you've collected a good\n"
# 791 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "amount, come see me, huff-puff.$"
# 792 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 793 "data/maps/Route113_GlassWorkshop/scripts.pory"
Route113_GlassWorkshop_Text_LetsSeeCollectedAshes::
# 794 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 409 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 795 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "Have you collected ashes, huff-puff?\n"
# 796 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "Let me see, huff-puff.$"
# 797 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 798 "data/maps/Route113_GlassWorkshop/scripts.pory"
Route113_GlassWorkshop_Text_NotEnoughAshNeedX::
# 799 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 414 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 800 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "Hmmm…\n"
# 801 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "There's not enough ash here, huff-puff.\l"
# 802 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "I can't make glass with this, huff-puff.\p"
# 803 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "Let's see… {STR_VAR_1} is the number of steps\n"
# 804 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "you'll need to walk for me to make you\l"
# 805 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "a BLUE FLUTE, huff-puff.$"
# 806 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 807 "data/maps/Route113_GlassWorkshop/scripts.pory"
Route113_GlassWorkshop_Text_WhichGlassItemWoudYouLike::
# 808 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 423 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 809 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "Oh!\n"
# 810 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "You've got a lot of ashes, huff-puff!\p"
# 811 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "I'll make you a glass item, huff-puff!\n"
# 812 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "Which one would you like, huff-puff?$"
# 813 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 814 "data/maps/Route113_GlassWorkshop/scripts.pory"
Route113_GlassWorkshop_Text_IsThatTheItemForYou::
# 815 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 430 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 816 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "A {STR_VAR_1}, huff-puff?\n"
# 817 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "Is that the one for you, huff-puff?$"
# 818 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 819 "data/maps/Route113_GlassWorkshop/scripts.pory"
Route113_GlassWorkshop_Text_WhichWouldYouLike::
# 820 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 435 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 821 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "Which one would you like, huff-puff?$"
# 822 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 823 "data/maps/Route113_GlassWorkshop/scripts.pory"
Route113_GlassWorkshop_Text_IllMakeItemForYou::
# 824 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 439 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 825 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "A {STR_VAR_1} it is, then, huff-puff!\p"
# 826 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "Okay! I'll make it for you, huff-puff.\n"
# 827 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "Just wait a little while, huff-puff.$"
# 828 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 829 "data/maps/Route113_GlassWorkshop/scripts.pory"
Route113_GlassWorkshop_Text_NotEnoughAshToMakeItem::
# 830 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 445 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 831 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "A {STR_VAR_1}, huff-puff?\p"
# 832 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "There's not enough ash here to make\n"
# 833 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "that, though, huff-puff.\p"
# 834 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "Let's see… {STR_VAR_2} is the number of steps\n"
# 835 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "you'll need to walk through volcanic ash\l"
# 836 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "for me to make that item, huff-puff.\p"
# 837 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "Which item would you rather have me\n"
# 838 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "make instead, huff-puff?$"
# 839 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 840 "data/maps/Route113_GlassWorkshop/scripts.pory"
Route113_GlassWorkshop_Text_AllThatAshButDontWantAnything::
# 841 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 456 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 842 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "You've collected all that ash, but you\n"
# 843 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "don't want anything, huff-puff?$"
# 844 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 845 "data/maps/Route113_GlassWorkshop/scripts.pory"
Route113_GlassWorkshop_Text_IveFinishedGlassItem::
# 846 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 461 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 847 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "Ah, I've finished your {STR_VAR_1}.\n"
# 848 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "Take it, huff-puff.$"
# 849 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 850 "data/maps/Route113_GlassWorkshop/scripts.pory"
Route113_GlassWorkshop_Text_NoRoomInBag::
# 851 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 466 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 852 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "Oh?\n"
# 853 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "You've no room in your BAG, huff-puff.\p"
# 854 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "I'll hold on to it, so come back later,\n"
# 855 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "huff-puff.$"
# 856 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 857 "data/maps/Route113_GlassWorkshop/scripts.pory"
Route113_GlassWorkshop_Text_NoRoomInPC::
# 858 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 473 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 859 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "Oh?\n"
# 860 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "You've no room in your PC, huff-puff?\p"
# 861 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "I'll hold on to it, so come back later,\n"
# 862 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "huff-puff.$"
# 863 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 864 "data/maps/Route113_GlassWorkshop/scripts.pory"
Route113_GlassWorkshop_Text_HaventGotYourSootSack::
# 865 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 480 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 866 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "Hah? You haven't got your SOOT SACK\n"
# 867 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "with you, huff-puff.\p"
# 868 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "You have to keep it with you to collect\n"
# 869 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "volcanic ash, huff-puff.$"
# 870 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 871 "data/maps/Route113_GlassWorkshop/scripts.pory"
Route113_GlassWorkshop_Text_FunToBlowGlassFlute::
# 872 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 487 "data/maps/Route113_GlassWorkshop/scripts.pory"
# 873 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "It's fun to blow a glass flute while\n"
# 874 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "my boss is talking.\p"
# 875 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "Huff-huff! Puff-puff!$"
