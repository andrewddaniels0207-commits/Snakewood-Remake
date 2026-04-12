Route113_GlassWorkshop_MapScripts::
# 2 "data/maps/Route113_GlassWorkshop/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route113_GlassWorkshop_OnTransition
	.byte 0


Route113_GlassWorkshop_OnTransition::
# 6 "data/maps/Route113_GlassWorkshop/scripts.pory"
	setflag FLAG_LANDMARK_GLASS_WORKSHOP
# 7 "data/maps/Route113_GlassWorkshop/scripts.pory"
	compare VAR_GLASS_WORKSHOP_STATE, 1
	goto_if_eq Route113_GlassWorkshop_OnTransition_2
Route113_GlassWorkshop_OnTransition_1:
	end

Route113_GlassWorkshop_OnTransition_2:
# 8 "data/maps/Route113_GlassWorkshop/scripts.pory"
	call Route113_GlassWorkshop_EventScript_ReenterWorkshopAfterSootSack
	goto Route113_GlassWorkshop_OnTransition_1


Route113_GlassWorkshop_EventScript_ReenterWorkshopAfterSootSack::
# 14 "data/maps/Route113_GlassWorkshop/scripts.pory"
	setvar VAR_GLASS_WORKSHOP_STATE, 2
	return


Route113_GlassWorkshop_EventScript_GlassWorker::
# 19 "data/maps/Route113_GlassWorkshop/scripts.pory"
	lock
# 20 "data/maps/Route113_GlassWorkshop/scripts.pory"
	faceplayer
# 21 "data/maps/Route113_GlassWorkshop/scripts.pory"
	compare VAR_GLASS_WORKSHOP_STATE, 10
	goto_if_ge Route113_GlassWorkshop_EventScript_GlassWorker_2
Route113_GlassWorkshop_EventScript_GlassWorker_1:
# 24 "data/maps/Route113_GlassWorkshop/scripts.pory"
	compare VAR_GLASS_WORKSHOP_STATE, 2
	goto_if_eq Route113_GlassWorkshop_EventScript_GlassWorker_5
Route113_GlassWorkshop_EventScript_GlassWorker_4:
# 27 "data/maps/Route113_GlassWorkshop/scripts.pory"
	compare VAR_GLASS_WORKSHOP_STATE, 1
	goto_if_eq Route113_GlassWorkshop_EventScript_GlassWorker_8
Route113_GlassWorkshop_EventScript_GlassWorker_7:
# 30 "data/maps/Route113_GlassWorkshop/scripts.pory"
	msgbox Route113_GlassWorkshop_Text_GoCollectAshWithThis, MSGBOX_DEFAULT
# 31 "data/maps/Route113_GlassWorkshop/scripts.pory"
	giveitem ITEM_SOOT_SACK
# 32 "data/maps/Route113_GlassWorkshop/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route113_GlassWorkshop_EventScript_GlassWorker_11
Route113_GlassWorkshop_EventScript_GlassWorker_10:
# 35 "data/maps/Route113_GlassWorkshop/scripts.pory"
	setvar VAR_GLASS_WORKSHOP_STATE, 1
# 36 "data/maps/Route113_GlassWorkshop/scripts.pory"
	msgbox Route113_GlassWorkshop_Text_ExplainSootSack, MSGBOX_DEFAULT
# 37 "data/maps/Route113_GlassWorkshop/scripts.pory"
	release
	end

Route113_GlassWorkshop_EventScript_GlassWorker_2:
# 22 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto Route113_GlassWorkshop_EventScript_GiveItemAfterNoRoom
	goto Route113_GlassWorkshop_EventScript_GlassWorker_1

Route113_GlassWorkshop_EventScript_GlassWorker_5:
# 25 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto Route113_GlassWorkshop_EventScript_CheckCollectedAsh
	goto Route113_GlassWorkshop_EventScript_GlassWorker_4

Route113_GlassWorkshop_EventScript_GlassWorker_8:
# 28 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto Route113_GlassWorkshop_EventScript_ExplainSootSack
	goto Route113_GlassWorkshop_EventScript_GlassWorker_7

Route113_GlassWorkshop_EventScript_GlassWorker_11:
# 33 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
	goto Route113_GlassWorkshop_EventScript_GlassWorker_10


Route113_GlassWorkshop_EventScript_ExplainSootSack::
# 42 "data/maps/Route113_GlassWorkshop/scripts.pory"
	msgbox Route113_GlassWorkshop_Text_ExplainSootSack, MSGBOX_DEFAULT
# 43 "data/maps/Route113_GlassWorkshop/scripts.pory"
	release
	end


Route113_GlassWorkshop_EventScript_CheckCollectedAsh::
# 48 "data/maps/Route113_GlassWorkshop/scripts.pory"
	checkitem ITEM_SOOT_SACK
# 49 "data/maps/Route113_GlassWorkshop/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route113_GlassWorkshop_EventScript_CheckCollectedAsh_2
Route113_GlassWorkshop_EventScript_CheckCollectedAsh_1:
# 52 "data/maps/Route113_GlassWorkshop/scripts.pory"
	msgbox Route113_GlassWorkshop_Text_LetsSeeCollectedAshes, MSGBOX_DEFAULT
# 53 "data/maps/Route113_GlassWorkshop/scripts.pory"
	compare VAR_ASH_GATHER_COUNT, LOWEST_ASH_PRICE
	goto_if_lt Route113_GlassWorkshop_EventScript_CheckCollectedAsh_5
Route113_GlassWorkshop_EventScript_CheckCollectedAsh_4:
# 56 "data/maps/Route113_GlassWorkshop/scripts.pory"
	message Route113_GlassWorkshop_Text_WhichGlassItemWoudYouLike
# 57 "data/maps/Route113_GlassWorkshop/scripts.pory"
	waitmessage
# 58 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto Route113_GlassWorkshop_EventScript_ChooseGlassItem
	end

Route113_GlassWorkshop_EventScript_CheckCollectedAsh_2:
# 50 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto Route113_GlassWorkshop_EventScript_SootSackNotInBag
	goto Route113_GlassWorkshop_EventScript_CheckCollectedAsh_1

Route113_GlassWorkshop_EventScript_CheckCollectedAsh_5:
# 54 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto Route113_GlassWorkshop_EventScript_NotEnoughAsh
	goto Route113_GlassWorkshop_EventScript_CheckCollectedAsh_4


Route113_GlassWorkshop_EventScript_SootSackNotInBag::
# 63 "data/maps/Route113_GlassWorkshop/scripts.pory"
	msgbox Route113_GlassWorkshop_Text_HaventGotYourSootSack, MSGBOX_DEFAULT
# 64 "data/maps/Route113_GlassWorkshop/scripts.pory"
	release
	end


Route113_GlassWorkshop_EventScript_ChooseGlassItem::
# 69 "data/maps/Route113_GlassWorkshop/scripts.pory"
	setvar VAR_0x8009, 0
# 70 "data/maps/Route113_GlassWorkshop/scripts.pory"
	setvar VAR_0x8004, SCROLL_MULTI_GLASS_WORKSHOP_VENDOR
# 71 "data/maps/Route113_GlassWorkshop/scripts.pory"
	special ShowScrollableMultichoice
# 72 "data/maps/Route113_GlassWorkshop/scripts.pory"
	waitstate
# 73 "data/maps/Route113_GlassWorkshop/scripts.pory"
	switch VAR_RESULT
# 74 "data/maps/Route113_GlassWorkshop/scripts.pory"
	case 0, Route113_GlassWorkshop_EventScript_ChooseGlassItem_3
# 76 "data/maps/Route113_GlassWorkshop/scripts.pory"
	case 1, Route113_GlassWorkshop_EventScript_ChooseGlassItem_4
# 78 "data/maps/Route113_GlassWorkshop/scripts.pory"
	case 2, Route113_GlassWorkshop_EventScript_ChooseGlassItem_5
# 80 "data/maps/Route113_GlassWorkshop/scripts.pory"
	case 3, Route113_GlassWorkshop_EventScript_ChooseGlassItem_6
# 82 "data/maps/Route113_GlassWorkshop/scripts.pory"
	case 4, Route113_GlassWorkshop_EventScript_ChooseGlassItem_7
# 84 "data/maps/Route113_GlassWorkshop/scripts.pory"
	case 5, Route113_GlassWorkshop_EventScript_ChooseGlassItem_8
# 86 "data/maps/Route113_GlassWorkshop/scripts.pory"
	case 6, Route113_GlassWorkshop_EventScript_ChooseGlassItem_9
# 88 "data/maps/Route113_GlassWorkshop/scripts.pory"
	case 7, Route113_GlassWorkshop_EventScript_ChooseGlassItem_10
# 90 "data/maps/Route113_GlassWorkshop/scripts.pory"
	case MULTI_B_PRESSED, Route113_GlassWorkshop_EventScript_ChooseGlassItem_11
Route113_GlassWorkshop_EventScript_ChooseGlassItem_1:
	end

Route113_GlassWorkshop_EventScript_ChooseGlassItem_3:
# 75 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto Route113_GlassWorkshop_EventScript_BlueFlute
	goto Route113_GlassWorkshop_EventScript_ChooseGlassItem_1

Route113_GlassWorkshop_EventScript_ChooseGlassItem_4:
# 77 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto Route113_GlassWorkshop_EventScript_YellowFlute
	goto Route113_GlassWorkshop_EventScript_ChooseGlassItem_1

Route113_GlassWorkshop_EventScript_ChooseGlassItem_5:
# 79 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto Route113_GlassWorkshop_EventScript_RedFlute
	goto Route113_GlassWorkshop_EventScript_ChooseGlassItem_1

Route113_GlassWorkshop_EventScript_ChooseGlassItem_6:
# 81 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto Route113_GlassWorkshop_EventScript_WhiteFlute
	goto Route113_GlassWorkshop_EventScript_ChooseGlassItem_1

Route113_GlassWorkshop_EventScript_ChooseGlassItem_7:
# 83 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto Route113_GlassWorkshop_EventScript_BlackFlute
	goto Route113_GlassWorkshop_EventScript_ChooseGlassItem_1

Route113_GlassWorkshop_EventScript_ChooseGlassItem_8:
# 85 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto Route113_GlassWorkshop_EventScript_PrettyChair
	goto Route113_GlassWorkshop_EventScript_ChooseGlassItem_1

Route113_GlassWorkshop_EventScript_ChooseGlassItem_9:
# 87 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto Route113_GlassWorkshop_EventScript_PrettyDesk
	goto Route113_GlassWorkshop_EventScript_ChooseGlassItem_1

Route113_GlassWorkshop_EventScript_ChooseGlassItem_10:
# 89 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto Route113_GlassWorkshop_EventScript_CancelGlassItemSelect
	goto Route113_GlassWorkshop_EventScript_ChooseGlassItem_1

Route113_GlassWorkshop_EventScript_ChooseGlassItem_11:
# 91 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto Route113_GlassWorkshop_EventScript_CancelGlassItemSelect
	goto Route113_GlassWorkshop_EventScript_ChooseGlassItem_1


Route113_GlassWorkshop_EventScript_BlueFlute::
# 97 "data/maps/Route113_GlassWorkshop/scripts.pory"
	setvar VAR_0x8008, ITEM_BLUE_FLUTE
# 98 "data/maps/Route113_GlassWorkshop/scripts.pory"
	bufferitemname STR_VAR_1, VAR_0x8008
# 99 "data/maps/Route113_GlassWorkshop/scripts.pory"
	setvar VAR_0x800A, BLUE_FLUTE_PRICE
# 100 "data/maps/Route113_GlassWorkshop/scripts.pory"
	compare VAR_ASH_GATHER_COUNT, BLUE_FLUTE_PRICE
	goto_if_lt Route113_GlassWorkshop_EventScript_BlueFlute_2
Route113_GlassWorkshop_EventScript_BlueFlute_1:
# 103 "data/maps/Route113_GlassWorkshop/scripts.pory"
	msgbox Route113_GlassWorkshop_Text_IsThatTheItemForYou, MSGBOX_YESNO
# 104 "data/maps/Route113_GlassWorkshop/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Route113_GlassWorkshop_EventScript_BlueFlute_5
Route113_GlassWorkshop_EventScript_BlueFlute_4:
# 107 "data/maps/Route113_GlassWorkshop/scripts.pory"
	setvar VAR_GLASS_WORKSHOP_STATE, 10
# 108 "data/maps/Route113_GlassWorkshop/scripts.pory"
	subvar VAR_ASH_GATHER_COUNT, BLUE_FLUTE_PRICE
# 109 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto Route113_GlassWorkshop_EventScript_MakeGlassItem
	end

Route113_GlassWorkshop_EventScript_BlueFlute_2:
# 101 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto Route113_GlassWorkshop_EventScript_NotEnoughAshForItem
	goto Route113_GlassWorkshop_EventScript_BlueFlute_1

Route113_GlassWorkshop_EventScript_BlueFlute_5:
# 105 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto Route113_GlassWorkshop_EventScript_ChooseDifferentItem
	goto Route113_GlassWorkshop_EventScript_BlueFlute_4


Route113_GlassWorkshop_EventScript_YellowFlute::
# 114 "data/maps/Route113_GlassWorkshop/scripts.pory"
	setvar VAR_0x8008, ITEM_YELLOW_FLUTE
# 115 "data/maps/Route113_GlassWorkshop/scripts.pory"
	bufferitemname STR_VAR_1, VAR_0x8008
# 116 "data/maps/Route113_GlassWorkshop/scripts.pory"
	setvar VAR_0x800A, YELLOW_FLUTE_PRICE
# 117 "data/maps/Route113_GlassWorkshop/scripts.pory"
	compare VAR_ASH_GATHER_COUNT, YELLOW_FLUTE_PRICE
	goto_if_lt Route113_GlassWorkshop_EventScript_YellowFlute_2
Route113_GlassWorkshop_EventScript_YellowFlute_1:
# 120 "data/maps/Route113_GlassWorkshop/scripts.pory"
	msgbox Route113_GlassWorkshop_Text_IsThatTheItemForYou, MSGBOX_YESNO
# 121 "data/maps/Route113_GlassWorkshop/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Route113_GlassWorkshop_EventScript_YellowFlute_5
Route113_GlassWorkshop_EventScript_YellowFlute_4:
# 124 "data/maps/Route113_GlassWorkshop/scripts.pory"
	setvar VAR_GLASS_WORKSHOP_STATE, 11
# 125 "data/maps/Route113_GlassWorkshop/scripts.pory"
	subvar VAR_ASH_GATHER_COUNT, YELLOW_FLUTE_PRICE
# 126 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto Route113_GlassWorkshop_EventScript_MakeGlassItem
	end

Route113_GlassWorkshop_EventScript_YellowFlute_2:
# 118 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto Route113_GlassWorkshop_EventScript_NotEnoughAshForItem
	goto Route113_GlassWorkshop_EventScript_YellowFlute_1

Route113_GlassWorkshop_EventScript_YellowFlute_5:
# 122 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto Route113_GlassWorkshop_EventScript_ChooseDifferentItem
	goto Route113_GlassWorkshop_EventScript_YellowFlute_4


Route113_GlassWorkshop_EventScript_RedFlute::
# 131 "data/maps/Route113_GlassWorkshop/scripts.pory"
	setvar VAR_0x8008, ITEM_RED_FLUTE
# 132 "data/maps/Route113_GlassWorkshop/scripts.pory"
	bufferitemname STR_VAR_1, VAR_0x8008
# 133 "data/maps/Route113_GlassWorkshop/scripts.pory"
	setvar VAR_0x800A, RED_FLUTE_PRICE
# 134 "data/maps/Route113_GlassWorkshop/scripts.pory"
	compare VAR_ASH_GATHER_COUNT, RED_FLUTE_PRICE
	goto_if_lt Route113_GlassWorkshop_EventScript_RedFlute_2
Route113_GlassWorkshop_EventScript_RedFlute_1:
# 137 "data/maps/Route113_GlassWorkshop/scripts.pory"
	msgbox Route113_GlassWorkshop_Text_IsThatTheItemForYou, MSGBOX_YESNO
# 138 "data/maps/Route113_GlassWorkshop/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Route113_GlassWorkshop_EventScript_RedFlute_5
Route113_GlassWorkshop_EventScript_RedFlute_4:
# 141 "data/maps/Route113_GlassWorkshop/scripts.pory"
	setvar VAR_GLASS_WORKSHOP_STATE, 12
# 142 "data/maps/Route113_GlassWorkshop/scripts.pory"
	subvar VAR_ASH_GATHER_COUNT, RED_FLUTE_PRICE
# 143 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto Route113_GlassWorkshop_EventScript_MakeGlassItem
	end

Route113_GlassWorkshop_EventScript_RedFlute_2:
# 135 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto Route113_GlassWorkshop_EventScript_NotEnoughAshForItem
	goto Route113_GlassWorkshop_EventScript_RedFlute_1

Route113_GlassWorkshop_EventScript_RedFlute_5:
# 139 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto Route113_GlassWorkshop_EventScript_ChooseDifferentItem
	goto Route113_GlassWorkshop_EventScript_RedFlute_4


Route113_GlassWorkshop_EventScript_WhiteFlute::
# 148 "data/maps/Route113_GlassWorkshop/scripts.pory"
	setvar VAR_0x8008, ITEM_WHITE_FLUTE
# 149 "data/maps/Route113_GlassWorkshop/scripts.pory"
	bufferitemname STR_VAR_1, VAR_0x8008
# 150 "data/maps/Route113_GlassWorkshop/scripts.pory"
	setvar VAR_0x800A, WHITE_FLUTE_PRICE
# 151 "data/maps/Route113_GlassWorkshop/scripts.pory"
	compare VAR_ASH_GATHER_COUNT, WHITE_FLUTE_PRICE
	goto_if_lt Route113_GlassWorkshop_EventScript_WhiteFlute_2
Route113_GlassWorkshop_EventScript_WhiteFlute_1:
# 154 "data/maps/Route113_GlassWorkshop/scripts.pory"
	msgbox Route113_GlassWorkshop_Text_IsThatTheItemForYou, MSGBOX_YESNO
# 155 "data/maps/Route113_GlassWorkshop/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Route113_GlassWorkshop_EventScript_WhiteFlute_5
Route113_GlassWorkshop_EventScript_WhiteFlute_4:
# 158 "data/maps/Route113_GlassWorkshop/scripts.pory"
	setvar VAR_GLASS_WORKSHOP_STATE, 13
# 159 "data/maps/Route113_GlassWorkshop/scripts.pory"
	subvar VAR_ASH_GATHER_COUNT, WHITE_FLUTE_PRICE
# 160 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto Route113_GlassWorkshop_EventScript_MakeGlassItem
	end

Route113_GlassWorkshop_EventScript_WhiteFlute_2:
# 152 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto Route113_GlassWorkshop_EventScript_NotEnoughAshForItem
	goto Route113_GlassWorkshop_EventScript_WhiteFlute_1

Route113_GlassWorkshop_EventScript_WhiteFlute_5:
# 156 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto Route113_GlassWorkshop_EventScript_ChooseDifferentItem
	goto Route113_GlassWorkshop_EventScript_WhiteFlute_4


Route113_GlassWorkshop_EventScript_BlackFlute::
# 165 "data/maps/Route113_GlassWorkshop/scripts.pory"
	setvar VAR_0x8008, ITEM_BLACK_FLUTE
# 166 "data/maps/Route113_GlassWorkshop/scripts.pory"
	bufferitemname STR_VAR_1, VAR_0x8008
# 167 "data/maps/Route113_GlassWorkshop/scripts.pory"
	setvar VAR_0x800A, BLACK_FLUTE_PRICE
# 168 "data/maps/Route113_GlassWorkshop/scripts.pory"
	compare VAR_ASH_GATHER_COUNT, BLACK_FLUTE_PRICE
	goto_if_lt Route113_GlassWorkshop_EventScript_BlackFlute_2
Route113_GlassWorkshop_EventScript_BlackFlute_1:
# 171 "data/maps/Route113_GlassWorkshop/scripts.pory"
	msgbox Route113_GlassWorkshop_Text_IsThatTheItemForYou, MSGBOX_YESNO
# 172 "data/maps/Route113_GlassWorkshop/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Route113_GlassWorkshop_EventScript_BlackFlute_5
Route113_GlassWorkshop_EventScript_BlackFlute_4:
# 175 "data/maps/Route113_GlassWorkshop/scripts.pory"
	setvar VAR_GLASS_WORKSHOP_STATE, 14
# 176 "data/maps/Route113_GlassWorkshop/scripts.pory"
	subvar VAR_ASH_GATHER_COUNT, BLACK_FLUTE_PRICE
# 177 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto Route113_GlassWorkshop_EventScript_MakeGlassItem
	end

Route113_GlassWorkshop_EventScript_BlackFlute_2:
# 169 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto Route113_GlassWorkshop_EventScript_NotEnoughAshForItem
	goto Route113_GlassWorkshop_EventScript_BlackFlute_1

Route113_GlassWorkshop_EventScript_BlackFlute_5:
# 173 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto Route113_GlassWorkshop_EventScript_ChooseDifferentItem
	goto Route113_GlassWorkshop_EventScript_BlackFlute_4


Route113_GlassWorkshop_EventScript_PrettyChair::
# 182 "data/maps/Route113_GlassWorkshop/scripts.pory"
	setvar VAR_0x8009, 1
# 183 "data/maps/Route113_GlassWorkshop/scripts.pory"
	setvar VAR_0x8008, DECOR_PRETTY_CHAIR
# 184 "data/maps/Route113_GlassWorkshop/scripts.pory"
	bufferdecorationname STR_VAR_1, VAR_0x8008
# 185 "data/maps/Route113_GlassWorkshop/scripts.pory"
	setvar VAR_0x800A, PRETTY_CHAIR_PRICE
# 186 "data/maps/Route113_GlassWorkshop/scripts.pory"
	compare VAR_ASH_GATHER_COUNT, PRETTY_CHAIR_PRICE
	goto_if_lt Route113_GlassWorkshop_EventScript_PrettyChair_2
Route113_GlassWorkshop_EventScript_PrettyChair_1:
# 189 "data/maps/Route113_GlassWorkshop/scripts.pory"
	msgbox Route113_GlassWorkshop_Text_IsThatTheItemForYou, MSGBOX_YESNO
# 190 "data/maps/Route113_GlassWorkshop/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Route113_GlassWorkshop_EventScript_PrettyChair_5
Route113_GlassWorkshop_EventScript_PrettyChair_4:
# 193 "data/maps/Route113_GlassWorkshop/scripts.pory"
	setvar VAR_GLASS_WORKSHOP_STATE, 15
# 194 "data/maps/Route113_GlassWorkshop/scripts.pory"
	subvar VAR_ASH_GATHER_COUNT, PRETTY_CHAIR_PRICE
# 195 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto Route113_GlassWorkshop_EventScript_MakeGlassItem
	end

Route113_GlassWorkshop_EventScript_PrettyChair_2:
# 187 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto Route113_GlassWorkshop_EventScript_NotEnoughAshForItem
	goto Route113_GlassWorkshop_EventScript_PrettyChair_1

Route113_GlassWorkshop_EventScript_PrettyChair_5:
# 191 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto Route113_GlassWorkshop_EventScript_ChooseDifferentItem
	goto Route113_GlassWorkshop_EventScript_PrettyChair_4


Route113_GlassWorkshop_EventScript_PrettyDesk::
# 200 "data/maps/Route113_GlassWorkshop/scripts.pory"
	setvar VAR_0x8009, 1
# 201 "data/maps/Route113_GlassWorkshop/scripts.pory"
	setvar VAR_0x8008, DECOR_PRETTY_DESK
# 202 "data/maps/Route113_GlassWorkshop/scripts.pory"
	bufferdecorationname STR_VAR_1, VAR_0x8008
# 203 "data/maps/Route113_GlassWorkshop/scripts.pory"
	setvar VAR_0x800A, PRETTY_DESK_PRICE
# 204 "data/maps/Route113_GlassWorkshop/scripts.pory"
	compare VAR_ASH_GATHER_COUNT, PRETTY_DESK_PRICE
	goto_if_lt Route113_GlassWorkshop_EventScript_PrettyDesk_2
Route113_GlassWorkshop_EventScript_PrettyDesk_1:
# 207 "data/maps/Route113_GlassWorkshop/scripts.pory"
	msgbox Route113_GlassWorkshop_Text_IsThatTheItemForYou, MSGBOX_YESNO
# 208 "data/maps/Route113_GlassWorkshop/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Route113_GlassWorkshop_EventScript_PrettyDesk_5
Route113_GlassWorkshop_EventScript_PrettyDesk_4:
# 211 "data/maps/Route113_GlassWorkshop/scripts.pory"
	setvar VAR_GLASS_WORKSHOP_STATE, 16
# 212 "data/maps/Route113_GlassWorkshop/scripts.pory"
	subvar VAR_ASH_GATHER_COUNT, PRETTY_DESK_PRICE
# 213 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto Route113_GlassWorkshop_EventScript_MakeGlassItem
	end

Route113_GlassWorkshop_EventScript_PrettyDesk_2:
# 205 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto Route113_GlassWorkshop_EventScript_NotEnoughAshForItem
	goto Route113_GlassWorkshop_EventScript_PrettyDesk_1

Route113_GlassWorkshop_EventScript_PrettyDesk_5:
# 209 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto Route113_GlassWorkshop_EventScript_ChooseDifferentItem
	goto Route113_GlassWorkshop_EventScript_PrettyDesk_4


Route113_GlassWorkshop_EventScript_CancelGlassItemSelect::
# 218 "data/maps/Route113_GlassWorkshop/scripts.pory"
	msgbox Route113_GlassWorkshop_Text_AllThatAshButDontWantAnything, MSGBOX_DEFAULT
# 219 "data/maps/Route113_GlassWorkshop/scripts.pory"
	release
	end


Route113_GlassWorkshop_EventScript_NotEnoughAsh::
# 224 "data/maps/Route113_GlassWorkshop/scripts.pory"
	setvar VAR_0x800A, LOWEST_ASH_PRICE
# 225 "data/maps/Route113_GlassWorkshop/scripts.pory"
	subvar VAR_0x800A, VAR_ASH_GATHER_COUNT
# 226 "data/maps/Route113_GlassWorkshop/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_0x800A
# 227 "data/maps/Route113_GlassWorkshop/scripts.pory"
	msgbox Route113_GlassWorkshop_Text_NotEnoughAshNeedX, MSGBOX_DEFAULT
# 228 "data/maps/Route113_GlassWorkshop/scripts.pory"
	release
	end


Route113_GlassWorkshop_EventScript_NotEnoughAshForItem::
# 233 "data/maps/Route113_GlassWorkshop/scripts.pory"
	subvar VAR_0x800A, VAR_ASH_GATHER_COUNT
# 234 "data/maps/Route113_GlassWorkshop/scripts.pory"
	buffernumberstring STR_VAR_2, VAR_0x800A
# 235 "data/maps/Route113_GlassWorkshop/scripts.pory"
	message Route113_GlassWorkshop_Text_NotEnoughAshToMakeItem
# 236 "data/maps/Route113_GlassWorkshop/scripts.pory"
	waitmessage
# 237 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto Route113_GlassWorkshop_EventScript_ChooseGlassItem
	end


Route113_GlassWorkshop_EventScript_ChooseDifferentItem::
# 242 "data/maps/Route113_GlassWorkshop/scripts.pory"
	message Route113_GlassWorkshop_Text_WhichWouldYouLike
# 243 "data/maps/Route113_GlassWorkshop/scripts.pory"
	waitmessage
# 244 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto Route113_GlassWorkshop_EventScript_ChooseGlassItem
	end


Route113_GlassWorkshop_EventScript_MakeGlassItem::
# 249 "data/maps/Route113_GlassWorkshop/scripts.pory"
	msgbox Route113_GlassWorkshop_Text_IllMakeItemForYou, MSGBOX_DEFAULT
# 250 "data/maps/Route113_GlassWorkshop/scripts.pory"
	closemessage
# 251 "data/maps/Route113_GlassWorkshop/scripts.pory"
	fadescreen FADE_TO_BLACK
# 252 "data/maps/Route113_GlassWorkshop/scripts.pory"
	playse SE_SELECT
# 253 "data/maps/Route113_GlassWorkshop/scripts.pory"
	delay 30
# 254 "data/maps/Route113_GlassWorkshop/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 255 "data/maps/Route113_GlassWorkshop/scripts.pory"
	msgbox Route113_GlassWorkshop_Text_IveFinishedGlassItem, MSGBOX_DEFAULT
# 256 "data/maps/Route113_GlassWorkshop/scripts.pory"
	compare VAR_0x8009, 0
	goto_if_eq Route113_GlassWorkshop_EventScript_MakeGlassItem_2
Route113_GlassWorkshop_EventScript_MakeGlassItem_1:
# 259 "data/maps/Route113_GlassWorkshop/scripts.pory"
	compare VAR_0x8009, 1
	goto_if_eq Route113_GlassWorkshop_EventScript_MakeGlassItem_5
Route113_GlassWorkshop_EventScript_MakeGlassItem_4:
# 262 "data/maps/Route113_GlassWorkshop/scripts.pory"
	setvar VAR_GLASS_WORKSHOP_STATE, 2
# 263 "data/maps/Route113_GlassWorkshop/scripts.pory"
	release
	end

Route113_GlassWorkshop_EventScript_MakeGlassItem_2:
# 257 "data/maps/Route113_GlassWorkshop/scripts.pory"
	call Route113_GlassWorkshop_EventScript_GiveGlassFlute
	goto Route113_GlassWorkshop_EventScript_MakeGlassItem_1

Route113_GlassWorkshop_EventScript_MakeGlassItem_5:
# 260 "data/maps/Route113_GlassWorkshop/scripts.pory"
	call Route113_GlassWorkshop_EventScript_GiveGlassDecor
	goto Route113_GlassWorkshop_EventScript_MakeGlassItem_4


Route113_GlassWorkshop_EventScript_GiveGlassFlute::
# 268 "data/maps/Route113_GlassWorkshop/scripts.pory"
	giveitem VAR_0x8008
# 269 "data/maps/Route113_GlassWorkshop/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route113_GlassWorkshop_EventScript_GiveGlassFlute_2
Route113_GlassWorkshop_EventScript_GiveGlassFlute_1:
	return

Route113_GlassWorkshop_EventScript_GiveGlassFlute_2:
# 270 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto Route113_GlassWorkshop_EventScript_NoRoomForFlute
	goto Route113_GlassWorkshop_EventScript_GiveGlassFlute_1


Route113_GlassWorkshop_EventScript_GiveGlassDecor::
# 276 "data/maps/Route113_GlassWorkshop/scripts.pory"
	givedecoration VAR_0x8008
# 277 "data/maps/Route113_GlassWorkshop/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route113_GlassWorkshop_EventScript_GiveGlassDecor_2
Route113_GlassWorkshop_EventScript_GiveGlassDecor_1:
	return

Route113_GlassWorkshop_EventScript_GiveGlassDecor_2:
# 278 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto Route113_GlassWorkshop_EventScript_NoRoomForDecor
	goto Route113_GlassWorkshop_EventScript_GiveGlassDecor_1


Route113_GlassWorkshop_EventScript_NoRoomForFlute::
# 284 "data/maps/Route113_GlassWorkshop/scripts.pory"
	call Common_EventScript_BagIsFull
# 285 "data/maps/Route113_GlassWorkshop/scripts.pory"
	msgbox Route113_GlassWorkshop_Text_NoRoomInBag, MSGBOX_DEFAULT
# 286 "data/maps/Route113_GlassWorkshop/scripts.pory"
	release
	end


Route113_GlassWorkshop_EventScript_NoRoomForDecor::
# 291 "data/maps/Route113_GlassWorkshop/scripts.pory"
	call Common_EventScript_NoRoomForDecor
# 292 "data/maps/Route113_GlassWorkshop/scripts.pory"
	msgbox Route113_GlassWorkshop_Text_NoRoomInPC, MSGBOX_DEFAULT
# 293 "data/maps/Route113_GlassWorkshop/scripts.pory"
	release
	end


Route113_GlassWorkshop_EventScript_GiveItemAfterNoRoom::
# 298 "data/maps/Route113_GlassWorkshop/scripts.pory"
	switch VAR_GLASS_WORKSHOP_STATE
# 299 "data/maps/Route113_GlassWorkshop/scripts.pory"
	case 10, Route113_GlassWorkshop_EventScript_GiveItemAfterNoRoom_3
# 301 "data/maps/Route113_GlassWorkshop/scripts.pory"
	case 11, Route113_GlassWorkshop_EventScript_GiveItemAfterNoRoom_4
# 303 "data/maps/Route113_GlassWorkshop/scripts.pory"
	case 12, Route113_GlassWorkshop_EventScript_GiveItemAfterNoRoom_5
# 305 "data/maps/Route113_GlassWorkshop/scripts.pory"
	case 13, Route113_GlassWorkshop_EventScript_GiveItemAfterNoRoom_6
# 307 "data/maps/Route113_GlassWorkshop/scripts.pory"
	case 14, Route113_GlassWorkshop_EventScript_GiveItemAfterNoRoom_7
# 309 "data/maps/Route113_GlassWorkshop/scripts.pory"
	case 15, Route113_GlassWorkshop_EventScript_GiveItemAfterNoRoom_8
# 311 "data/maps/Route113_GlassWorkshop/scripts.pory"
	case 16, Route113_GlassWorkshop_EventScript_GiveItemAfterNoRoom_9
Route113_GlassWorkshop_EventScript_GiveItemAfterNoRoom_1:
	end

Route113_GlassWorkshop_EventScript_GiveItemAfterNoRoom_3:
# 300 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto Route113_GlassWorkshop_EventScript_GiveBlueFlute
	goto Route113_GlassWorkshop_EventScript_GiveItemAfterNoRoom_1

Route113_GlassWorkshop_EventScript_GiveItemAfterNoRoom_4:
# 302 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto Route113_GlassWorkshop_EventScript_GiveYellowFlute
	goto Route113_GlassWorkshop_EventScript_GiveItemAfterNoRoom_1

Route113_GlassWorkshop_EventScript_GiveItemAfterNoRoom_5:
# 304 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto Route113_GlassWorkshop_EventScript_GiveRedFlute
	goto Route113_GlassWorkshop_EventScript_GiveItemAfterNoRoom_1

Route113_GlassWorkshop_EventScript_GiveItemAfterNoRoom_6:
# 306 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto Route113_GlassWorkshop_EventScript_GiveWhiteFlute
	goto Route113_GlassWorkshop_EventScript_GiveItemAfterNoRoom_1

Route113_GlassWorkshop_EventScript_GiveItemAfterNoRoom_7:
# 308 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto Route113_GlassWorkshop_EventScript_GiveBlackFlute
	goto Route113_GlassWorkshop_EventScript_GiveItemAfterNoRoom_1

Route113_GlassWorkshop_EventScript_GiveItemAfterNoRoom_8:
# 310 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto Route113_GlassWorkshop_EventScript_GivePrettyChair
	goto Route113_GlassWorkshop_EventScript_GiveItemAfterNoRoom_1

Route113_GlassWorkshop_EventScript_GiveItemAfterNoRoom_9:
# 312 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto Route113_GlassWorkshop_EventScript_GivePrettyDesk
	goto Route113_GlassWorkshop_EventScript_GiveItemAfterNoRoom_1


Route113_GlassWorkshop_EventScript_GiveBlueFlute::
# 318 "data/maps/Route113_GlassWorkshop/scripts.pory"
	setvar VAR_0x8009, 0
# 319 "data/maps/Route113_GlassWorkshop/scripts.pory"
	setvar VAR_0x8008, ITEM_BLUE_FLUTE
# 320 "data/maps/Route113_GlassWorkshop/scripts.pory"
	bufferitemname STR_VAR_1, VAR_0x8008
# 321 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto Route113_GlassWorkshop_EventScript_TryGiveItemAgain
	end


Route113_GlassWorkshop_EventScript_GiveYellowFlute::
# 326 "data/maps/Route113_GlassWorkshop/scripts.pory"
	setvar VAR_0x8009, 0
# 327 "data/maps/Route113_GlassWorkshop/scripts.pory"
	setvar VAR_0x8008, ITEM_YELLOW_FLUTE
# 328 "data/maps/Route113_GlassWorkshop/scripts.pory"
	bufferitemname STR_VAR_1, VAR_0x8008
# 329 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto Route113_GlassWorkshop_EventScript_TryGiveItemAgain
	end


Route113_GlassWorkshop_EventScript_GiveRedFlute::
# 334 "data/maps/Route113_GlassWorkshop/scripts.pory"
	setvar VAR_0x8009, 0
# 335 "data/maps/Route113_GlassWorkshop/scripts.pory"
	setvar VAR_0x8008, ITEM_RED_FLUTE
# 336 "data/maps/Route113_GlassWorkshop/scripts.pory"
	bufferitemname STR_VAR_1, VAR_0x8008
# 337 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto Route113_GlassWorkshop_EventScript_TryGiveItemAgain
	end


Route113_GlassWorkshop_EventScript_GiveWhiteFlute::
# 342 "data/maps/Route113_GlassWorkshop/scripts.pory"
	setvar VAR_0x8009, 0
# 343 "data/maps/Route113_GlassWorkshop/scripts.pory"
	setvar VAR_0x8008, ITEM_WHITE_FLUTE
# 344 "data/maps/Route113_GlassWorkshop/scripts.pory"
	bufferitemname STR_VAR_1, VAR_0x8008
# 345 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto Route113_GlassWorkshop_EventScript_TryGiveItemAgain
	end


Route113_GlassWorkshop_EventScript_GiveBlackFlute::
# 350 "data/maps/Route113_GlassWorkshop/scripts.pory"
	setvar VAR_0x8009, 0
# 351 "data/maps/Route113_GlassWorkshop/scripts.pory"
	setvar VAR_0x8008, ITEM_BLACK_FLUTE
# 352 "data/maps/Route113_GlassWorkshop/scripts.pory"
	bufferitemname STR_VAR_1, VAR_0x8008
# 353 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto Route113_GlassWorkshop_EventScript_TryGiveItemAgain
	end


Route113_GlassWorkshop_EventScript_GivePrettyChair::
# 358 "data/maps/Route113_GlassWorkshop/scripts.pory"
	setvar VAR_0x8009, 1
# 359 "data/maps/Route113_GlassWorkshop/scripts.pory"
	setvar VAR_0x8008, DECOR_PRETTY_CHAIR
# 360 "data/maps/Route113_GlassWorkshop/scripts.pory"
	bufferdecorationname STR_VAR_1, DECOR_PRETTY_CHAIR
# 361 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto Route113_GlassWorkshop_EventScript_TryGiveItemAgain
	end


Route113_GlassWorkshop_EventScript_GivePrettyDesk::
# 366 "data/maps/Route113_GlassWorkshop/scripts.pory"
	setvar VAR_0x8009, 1
# 367 "data/maps/Route113_GlassWorkshop/scripts.pory"
	setvar VAR_0x8008, DECOR_PRETTY_DESK
# 368 "data/maps/Route113_GlassWorkshop/scripts.pory"
	bufferdecorationname STR_VAR_1, DECOR_PRETTY_DESK
# 369 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto Route113_GlassWorkshop_EventScript_TryGiveItemAgain
	end


Route113_GlassWorkshop_EventScript_TryGiveItemAgain::
# 374 "data/maps/Route113_GlassWorkshop/scripts.pory"
	msgbox Route113_GlassWorkshop_Text_IveFinishedGlassItem, MSGBOX_DEFAULT
# 375 "data/maps/Route113_GlassWorkshop/scripts.pory"
	compare VAR_0x8009, 0
	goto_if_eq Route113_GlassWorkshop_EventScript_TryGiveItemAgain_2
Route113_GlassWorkshop_EventScript_TryGiveItemAgain_1:
# 378 "data/maps/Route113_GlassWorkshop/scripts.pory"
	compare VAR_0x8009, 1
	goto_if_eq Route113_GlassWorkshop_EventScript_TryGiveItemAgain_5
Route113_GlassWorkshop_EventScript_TryGiveItemAgain_4:
# 381 "data/maps/Route113_GlassWorkshop/scripts.pory"
	setvar VAR_GLASS_WORKSHOP_STATE, 2
# 382 "data/maps/Route113_GlassWorkshop/scripts.pory"
	release
	end

Route113_GlassWorkshop_EventScript_TryGiveItemAgain_2:
# 376 "data/maps/Route113_GlassWorkshop/scripts.pory"
	call Route113_GlassWorkshop_EventScript_GiveGlassFlute
	goto Route113_GlassWorkshop_EventScript_TryGiveItemAgain_1

Route113_GlassWorkshop_EventScript_TryGiveItemAgain_5:
# 379 "data/maps/Route113_GlassWorkshop/scripts.pory"
	call Route113_GlassWorkshop_EventScript_GiveGlassDecor
	goto Route113_GlassWorkshop_EventScript_TryGiveItemAgain_4


Route113_GlassWorkshop_EventScript_NinjaBoy::
# 387 "data/maps/Route113_GlassWorkshop/scripts.pory"
	msgbox Route113_GlassWorkshop_Text_FunToBlowGlassFlute, MSGBOX_NPC
	end


Route113_GlassWorkshop_Text_GoCollectAshWithThis::
# 391 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "This area is covered in volcanic ash,\n"
	.string "huff-puff!\p"
	.string "I'm specially gifted, huff-puff.\p"
	.string "I make glass out of volcanic ash\n"
	.string "and make items, huff-puff.\p"
	.string "Go collect ashes with this, huff-puff.$"

Route113_GlassWorkshop_Text_ExplainSootSack::
# 400 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "Just take that SOOT SACK and walk\n"
	.string "through piles of ash, huff-puff.\p"
	.string "And it will fill up with the volcanic ash,\n"
	.string "huff-puff.\p"
	.string "Once you think you've collected a good\n"
	.string "amount, come see me, huff-puff.$"

Route113_GlassWorkshop_Text_LetsSeeCollectedAshes::
# 409 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "Have you collected ashes, huff-puff?\n"
	.string "Let me see, huff-puff.$"

Route113_GlassWorkshop_Text_NotEnoughAshNeedX::
# 414 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "Hmmm…\n"
	.string "There's not enough ash here, huff-puff.\l"
	.string "I can't make glass with this, huff-puff.\p"
	.string "Let's see… {STR_VAR_1} is the number of steps\n"
	.string "you'll need to walk for me to make you\l"
	.string "a BLUE FLUTE, huff-puff.$"

Route113_GlassWorkshop_Text_WhichGlassItemWoudYouLike::
# 423 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "Oh!\n"
	.string "You've got a lot of ashes, huff-puff!\p"
	.string "I'll make you a glass item, huff-puff!\n"
	.string "Which one would you like, huff-puff?$"

Route113_GlassWorkshop_Text_IsThatTheItemForYou::
# 430 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "A {STR_VAR_1}, huff-puff?\n"
	.string "Is that the one for you, huff-puff?$"

Route113_GlassWorkshop_Text_WhichWouldYouLike::
# 435 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "Which one would you like, huff-puff?$"

Route113_GlassWorkshop_Text_IllMakeItemForYou::
# 439 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "A {STR_VAR_1} it is, then, huff-puff!\p"
	.string "Okay! I'll make it for you, huff-puff.\n"
	.string "Just wait a little while, huff-puff.$"

Route113_GlassWorkshop_Text_NotEnoughAshToMakeItem::
# 445 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "A {STR_VAR_1}, huff-puff?\p"
	.string "There's not enough ash here to make\n"
	.string "that, though, huff-puff.\p"
	.string "Let's see… {STR_VAR_2} is the number of steps\n"
	.string "you'll need to walk through volcanic ash\l"
	.string "for me to make that item, huff-puff.\p"
	.string "Which item would you rather have me\n"
	.string "make instead, huff-puff?$"

Route113_GlassWorkshop_Text_AllThatAshButDontWantAnything::
# 456 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "You've collected all that ash, but you\n"
	.string "don't want anything, huff-puff?$"

Route113_GlassWorkshop_Text_IveFinishedGlassItem::
# 461 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "Ah, I've finished your {STR_VAR_1}.\n"
	.string "Take it, huff-puff.$"

Route113_GlassWorkshop_Text_NoRoomInBag::
# 466 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "Oh?\n"
	.string "You've no room in your BAG, huff-puff.\p"
	.string "I'll hold on to it, so come back later,\n"
	.string "huff-puff.$"

Route113_GlassWorkshop_Text_NoRoomInPC::
# 473 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "Oh?\n"
	.string "You've no room in your PC, huff-puff?\p"
	.string "I'll hold on to it, so come back later,\n"
	.string "huff-puff.$"

Route113_GlassWorkshop_Text_HaventGotYourSootSack::
# 480 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "Hah? You haven't got your SOOT SACK\n"
	.string "with you, huff-puff.\p"
	.string "You have to keep it with you to collect\n"
	.string "volcanic ash, huff-puff.$"

Route113_GlassWorkshop_Text_FunToBlowGlassFlute::
# 487 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "It's fun to blow a glass flute while\n"
	.string "my boss is talking.\p"
	.string "Huff-huff! Puff-puff!$"
