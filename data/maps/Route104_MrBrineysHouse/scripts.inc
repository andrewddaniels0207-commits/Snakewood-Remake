# 1 "data/maps/Route104_MrBrineysHouse/scripts.pory"

# 2 "data/maps/Route104_MrBrineysHouse/scripts.pory"
Route104_MrBrineysHouse_MapScripts::
# 3 "data/maps/Route104_MrBrineysHouse/scripts.pory"
# 2 "data/maps/Route104_MrBrineysHouse/scripts.pory"
# 4 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route104_MrBrineysHouse_OnTransition
# 5 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.byte 0
# 6 "data/maps/Route104_MrBrineysHouse/scripts.pory"

# 7 "data/maps/Route104_MrBrineysHouse/scripts.pory"

# 8 "data/maps/Route104_MrBrineysHouse/scripts.pory"
Route104_MrBrineysHouse_OnTransition::
# 9 "data/maps/Route104_MrBrineysHouse/scripts.pory"
# 6 "data/maps/Route104_MrBrineysHouse/scripts.pory"
# 10 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	setflag FLAG_LANDMARK_MR_BRINEY_HOUSE
# 11 "data/maps/Route104_MrBrineysHouse/scripts.pory"
# 7 "data/maps/Route104_MrBrineysHouse/scripts.pory"
# 12 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	compare VAR_BRINEY_HOUSE_STATE, 1
# 13 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	goto_if_eq Route104_MrBrineysHouse_OnTransition_2
# 14 "data/maps/Route104_MrBrineysHouse/scripts.pory"
Route104_MrBrineysHouse_OnTransition_1:
# 15 "data/maps/Route104_MrBrineysHouse/scripts.pory"
# 10 "data/maps/Route104_MrBrineysHouse/scripts.pory"
# 16 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	goto_if_set FLAG_RECEIVED_POKENAV, Route104_MrBrineysHouse_OnTransition_5
# 17 "data/maps/Route104_MrBrineysHouse/scripts.pory"
Route104_MrBrineysHouse_OnTransition_4:
# 18 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	end
# 19 "data/maps/Route104_MrBrineysHouse/scripts.pory"

# 20 "data/maps/Route104_MrBrineysHouse/scripts.pory"
Route104_MrBrineysHouse_OnTransition_2:
# 21 "data/maps/Route104_MrBrineysHouse/scripts.pory"
# 8 "data/maps/Route104_MrBrineysHouse/scripts.pory"
# 22 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	call Route104_MrBrineysHouse_EventScript_SetBrineyPeekoPos
# 23 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	goto Route104_MrBrineysHouse_OnTransition_1
# 24 "data/maps/Route104_MrBrineysHouse/scripts.pory"

# 25 "data/maps/Route104_MrBrineysHouse/scripts.pory"
Route104_MrBrineysHouse_OnTransition_5:
# 26 "data/maps/Route104_MrBrineysHouse/scripts.pory"
# 11 "data/maps/Route104_MrBrineysHouse/scripts.pory"
# 27 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	call Route104_MrBrineysHouse_EventScript_HideRustboroRival
# 28 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	goto Route104_MrBrineysHouse_OnTransition_4
# 29 "data/maps/Route104_MrBrineysHouse/scripts.pory"

# 30 "data/maps/Route104_MrBrineysHouse/scripts.pory"

# 31 "data/maps/Route104_MrBrineysHouse/scripts.pory"
Route104_MrBrineysHouse_EventScript_HideRustboroRival::
# 32 "data/maps/Route104_MrBrineysHouse/scripts.pory"
# 17 "data/maps/Route104_MrBrineysHouse/scripts.pory"
# 33 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	setflag FLAG_HIDE_RUSTBORO_CITY_RIVAL
# 34 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	return
# 35 "data/maps/Route104_MrBrineysHouse/scripts.pory"

# 36 "data/maps/Route104_MrBrineysHouse/scripts.pory"

# 37 "data/maps/Route104_MrBrineysHouse/scripts.pory"
Route104_MrBrineysHouse_EventScript_SetBrineyPeekoPos::
# 38 "data/maps/Route104_MrBrineysHouse/scripts.pory"
# 22 "data/maps/Route104_MrBrineysHouse/scripts.pory"
# 39 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	setobjectxyperm LOCALID_BRINEYS_HOUSE_BRINEY, 9, 3
# 40 "data/maps/Route104_MrBrineysHouse/scripts.pory"
# 23 "data/maps/Route104_MrBrineysHouse/scripts.pory"
# 41 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	setobjectmovementtype LOCALID_BRINEYS_HOUSE_BRINEY, MOVEMENT_TYPE_WALK_SEQUENCE_DOWN_LEFT_UP_RIGHT
# 42 "data/maps/Route104_MrBrineysHouse/scripts.pory"
# 24 "data/maps/Route104_MrBrineysHouse/scripts.pory"
# 43 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	setobjectxyperm LOCALID_BRINEYS_HOUSE_PEEKO, 9, 6
# 44 "data/maps/Route104_MrBrineysHouse/scripts.pory"
# 25 "data/maps/Route104_MrBrineysHouse/scripts.pory"
# 45 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	setobjectmovementtype LOCALID_BRINEYS_HOUSE_PEEKO, MOVEMENT_TYPE_WALK_SEQUENCE_LEFT_UP_RIGHT_DOWN
# 46 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	return
# 47 "data/maps/Route104_MrBrineysHouse/scripts.pory"

# 48 "data/maps/Route104_MrBrineysHouse/scripts.pory"

# 49 "data/maps/Route104_MrBrineysHouse/scripts.pory"
Route104_MrBrineysHouse_EventScript_Briney::
# 50 "data/maps/Route104_MrBrineysHouse/scripts.pory"
# 30 "data/maps/Route104_MrBrineysHouse/scripts.pory"
# 51 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	lock
# 52 "data/maps/Route104_MrBrineysHouse/scripts.pory"
# 31 "data/maps/Route104_MrBrineysHouse/scripts.pory"
# 53 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	faceplayer
# 54 "data/maps/Route104_MrBrineysHouse/scripts.pory"
# 32 "data/maps/Route104_MrBrineysHouse/scripts.pory"
# 55 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	goto_if_unset FLAG_MR_BRINEY_SAILING_INTRO, Route104_MrBrineysHouse_EventScript_Briney_2
# 56 "data/maps/Route104_MrBrineysHouse/scripts.pory"
Route104_MrBrineysHouse_EventScript_Briney_1:
# 57 "data/maps/Route104_MrBrineysHouse/scripts.pory"
# 35 "data/maps/Route104_MrBrineysHouse/scripts.pory"
# 58 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	goto_if_unset FLAG_DELIVERED_STEVEN_LETTER, Route104_MrBrineysHouse_EventScript_Briney_5
# 59 "data/maps/Route104_MrBrineysHouse/scripts.pory"
Route104_MrBrineysHouse_EventScript_Briney_4:
# 60 "data/maps/Route104_MrBrineysHouse/scripts.pory"
# 38 "data/maps/Route104_MrBrineysHouse/scripts.pory"
# 61 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	goto_if_unset FLAG_DELIVERED_DEVON_GOODS, Route104_MrBrineysHouse_EventScript_Briney_8
# 62 "data/maps/Route104_MrBrineysHouse/scripts.pory"
Route104_MrBrineysHouse_EventScript_Briney_7:
# 63 "data/maps/Route104_MrBrineysHouse/scripts.pory"
# 41 "data/maps/Route104_MrBrineysHouse/scripts.pory"
# 64 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	goto Route104_MrBrineysHouse_EventScript_WhereAreWeBound
# 65 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	end
# 66 "data/maps/Route104_MrBrineysHouse/scripts.pory"

# 67 "data/maps/Route104_MrBrineysHouse/scripts.pory"
Route104_MrBrineysHouse_EventScript_Briney_2:
# 68 "data/maps/Route104_MrBrineysHouse/scripts.pory"
# 33 "data/maps/Route104_MrBrineysHouse/scripts.pory"
# 69 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	call Route104_MrBrineysHouse_EventScript_SailingIntro
# 70 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	goto Route104_MrBrineysHouse_EventScript_Briney_1
# 71 "data/maps/Route104_MrBrineysHouse/scripts.pory"

# 72 "data/maps/Route104_MrBrineysHouse/scripts.pory"
Route104_MrBrineysHouse_EventScript_Briney_5:
# 73 "data/maps/Route104_MrBrineysHouse/scripts.pory"
# 36 "data/maps/Route104_MrBrineysHouse/scripts.pory"
# 74 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	goto Route104_MrBrineysHouse_EventScript_SailBothDeliveries
# 75 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	goto Route104_MrBrineysHouse_EventScript_Briney_4
# 76 "data/maps/Route104_MrBrineysHouse/scripts.pory"

# 77 "data/maps/Route104_MrBrineysHouse/scripts.pory"
Route104_MrBrineysHouse_EventScript_Briney_8:
# 78 "data/maps/Route104_MrBrineysHouse/scripts.pory"
# 39 "data/maps/Route104_MrBrineysHouse/scripts.pory"
# 79 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	goto Route104_MrBrineysHouse_EventScript_SailDeliverPackage
# 80 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	goto Route104_MrBrineysHouse_EventScript_Briney_7
# 81 "data/maps/Route104_MrBrineysHouse/scripts.pory"

# 82 "data/maps/Route104_MrBrineysHouse/scripts.pory"

# 83 "data/maps/Route104_MrBrineysHouse/scripts.pory"
Route104_MrBrineysHouse_EventScript_SailingIntro::
# 84 "data/maps/Route104_MrBrineysHouse/scripts.pory"
# 46 "data/maps/Route104_MrBrineysHouse/scripts.pory"
# 85 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	setflag FLAG_MR_BRINEY_SAILING_INTRO
# 86 "data/maps/Route104_MrBrineysHouse/scripts.pory"
# 47 "data/maps/Route104_MrBrineysHouse/scripts.pory"
# 87 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	msgbox Route104_MrBrineysHouse_Text_WaitUpPeeko, MSGBOX_DEFAULT
# 88 "data/maps/Route104_MrBrineysHouse/scripts.pory"
# 48 "data/maps/Route104_MrBrineysHouse/scripts.pory"
# 89 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	msgbox Route104_MrBrineysHouse_Text_ItsYouLetsSailToDewford, MSGBOX_YESNO
# 90 "data/maps/Route104_MrBrineysHouse/scripts.pory"
# 49 "data/maps/Route104_MrBrineysHouse/scripts.pory"
# 91 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	compare VAR_RESULT, NO
# 92 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	goto_if_eq Route104_MrBrineysHouse_EventScript_SailingIntro_2
# 93 "data/maps/Route104_MrBrineysHouse/scripts.pory"
Route104_MrBrineysHouse_EventScript_SailingIntro_1:
# 94 "data/maps/Route104_MrBrineysHouse/scripts.pory"
# 52 "data/maps/Route104_MrBrineysHouse/scripts.pory"
# 95 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	goto Route104_MrBrineysHouse_EventScript_SailToDewford
# 96 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	end
# 97 "data/maps/Route104_MrBrineysHouse/scripts.pory"

# 98 "data/maps/Route104_MrBrineysHouse/scripts.pory"
Route104_MrBrineysHouse_EventScript_SailingIntro_2:
# 99 "data/maps/Route104_MrBrineysHouse/scripts.pory"
# 50 "data/maps/Route104_MrBrineysHouse/scripts.pory"
# 100 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	goto Route104_MrBrineysHouse_EventScript_DeclineDeliverySailing
# 101 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	goto Route104_MrBrineysHouse_EventScript_SailingIntro_1
# 102 "data/maps/Route104_MrBrineysHouse/scripts.pory"

# 103 "data/maps/Route104_MrBrineysHouse/scripts.pory"

# 104 "data/maps/Route104_MrBrineysHouse/scripts.pory"
Route104_MrBrineysHouse_EventScript_WhereAreWeBound::
# 105 "data/maps/Route104_MrBrineysHouse/scripts.pory"
# 57 "data/maps/Route104_MrBrineysHouse/scripts.pory"
# 106 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	message Route104_MrBrineysHouse_Text_WhereAreWeBound
# 107 "data/maps/Route104_MrBrineysHouse/scripts.pory"
# 58 "data/maps/Route104_MrBrineysHouse/scripts.pory"
# 108 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	waitmessage
# 109 "data/maps/Route104_MrBrineysHouse/scripts.pory"
# 59 "data/maps/Route104_MrBrineysHouse/scripts.pory"
# 110 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	multichoicedefault 20, 8, MULTI_BRINEY_OFF_DEWFORD, 1, FALSE
# 111 "data/maps/Route104_MrBrineysHouse/scripts.pory"
# 60 "data/maps/Route104_MrBrineysHouse/scripts.pory"
# 112 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	switch VAR_RESULT
# 113 "data/maps/Route104_MrBrineysHouse/scripts.pory"
# 61 "data/maps/Route104_MrBrineysHouse/scripts.pory"
# 114 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	case 0, Route104_MrBrineysHouse_EventScript_WhereAreWeBound_3
# 115 "data/maps/Route104_MrBrineysHouse/scripts.pory"
# 63 "data/maps/Route104_MrBrineysHouse/scripts.pory"
# 116 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	case 1, Route104_MrBrineysHouse_EventScript_WhereAreWeBound_4
# 117 "data/maps/Route104_MrBrineysHouse/scripts.pory"
# 65 "data/maps/Route104_MrBrineysHouse/scripts.pory"
# 118 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	case MULTI_B_PRESSED, Route104_MrBrineysHouse_EventScript_WhereAreWeBound_5
# 119 "data/maps/Route104_MrBrineysHouse/scripts.pory"
Route104_MrBrineysHouse_EventScript_WhereAreWeBound_1:
# 120 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	end
# 121 "data/maps/Route104_MrBrineysHouse/scripts.pory"

# 122 "data/maps/Route104_MrBrineysHouse/scripts.pory"
Route104_MrBrineysHouse_EventScript_WhereAreWeBound_3:
# 123 "data/maps/Route104_MrBrineysHouse/scripts.pory"
# 62 "data/maps/Route104_MrBrineysHouse/scripts.pory"
# 124 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	goto Route104_MrBrineysHouse_EventScript_SailToDewford
# 125 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	goto Route104_MrBrineysHouse_EventScript_WhereAreWeBound_1
# 126 "data/maps/Route104_MrBrineysHouse/scripts.pory"

# 127 "data/maps/Route104_MrBrineysHouse/scripts.pory"
Route104_MrBrineysHouse_EventScript_WhereAreWeBound_4:
# 128 "data/maps/Route104_MrBrineysHouse/scripts.pory"
# 64 "data/maps/Route104_MrBrineysHouse/scripts.pory"
# 129 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	goto Route104_MrBrineysHouse_EventScript_DeclineSailing
# 130 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	goto Route104_MrBrineysHouse_EventScript_WhereAreWeBound_1
# 131 "data/maps/Route104_MrBrineysHouse/scripts.pory"

# 132 "data/maps/Route104_MrBrineysHouse/scripts.pory"
Route104_MrBrineysHouse_EventScript_WhereAreWeBound_5:
# 133 "data/maps/Route104_MrBrineysHouse/scripts.pory"
# 66 "data/maps/Route104_MrBrineysHouse/scripts.pory"
# 134 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	goto Route104_MrBrineysHouse_EventScript_DeclineSailing
# 135 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	goto Route104_MrBrineysHouse_EventScript_WhereAreWeBound_1
# 136 "data/maps/Route104_MrBrineysHouse/scripts.pory"

# 137 "data/maps/Route104_MrBrineysHouse/scripts.pory"

# 138 "data/maps/Route104_MrBrineysHouse/scripts.pory"
Route104_MrBrineysHouse_EventScript_SailBothDeliveries::
# 139 "data/maps/Route104_MrBrineysHouse/scripts.pory"
# 72 "data/maps/Route104_MrBrineysHouse/scripts.pory"
# 140 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	msgbox Route104_MrBrineysHouse_Text_NeedToMakeDeliveriesSailToDewford, MSGBOX_YESNO
# 141 "data/maps/Route104_MrBrineysHouse/scripts.pory"
# 73 "data/maps/Route104_MrBrineysHouse/scripts.pory"
# 142 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	compare VAR_RESULT, NO
# 143 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	goto_if_eq Route104_MrBrineysHouse_EventScript_SailBothDeliveries_2
# 144 "data/maps/Route104_MrBrineysHouse/scripts.pory"
Route104_MrBrineysHouse_EventScript_SailBothDeliveries_1:
# 145 "data/maps/Route104_MrBrineysHouse/scripts.pory"
# 76 "data/maps/Route104_MrBrineysHouse/scripts.pory"
# 146 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	goto Route104_MrBrineysHouse_EventScript_SailToDewford
# 147 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	end
# 148 "data/maps/Route104_MrBrineysHouse/scripts.pory"

# 149 "data/maps/Route104_MrBrineysHouse/scripts.pory"
Route104_MrBrineysHouse_EventScript_SailBothDeliveries_2:
# 150 "data/maps/Route104_MrBrineysHouse/scripts.pory"
# 74 "data/maps/Route104_MrBrineysHouse/scripts.pory"
# 151 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	goto Route104_MrBrineysHouse_EventScript_DeclineDeliverySailing
# 152 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	goto Route104_MrBrineysHouse_EventScript_SailBothDeliveries_1
# 153 "data/maps/Route104_MrBrineysHouse/scripts.pory"

# 154 "data/maps/Route104_MrBrineysHouse/scripts.pory"

# 155 "data/maps/Route104_MrBrineysHouse/scripts.pory"
Route104_MrBrineysHouse_EventScript_SailDeliverPackage::
# 156 "data/maps/Route104_MrBrineysHouse/scripts.pory"
# 81 "data/maps/Route104_MrBrineysHouse/scripts.pory"
# 157 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	msgbox Route104_MrBrineysHouse_Text_NeedToDeliverPackageSailToDewford, MSGBOX_YESNO
# 158 "data/maps/Route104_MrBrineysHouse/scripts.pory"
# 82 "data/maps/Route104_MrBrineysHouse/scripts.pory"
# 159 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	compare VAR_RESULT, NO
# 160 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	goto_if_eq Route104_MrBrineysHouse_EventScript_SailDeliverPackage_2
# 161 "data/maps/Route104_MrBrineysHouse/scripts.pory"
Route104_MrBrineysHouse_EventScript_SailDeliverPackage_1:
# 162 "data/maps/Route104_MrBrineysHouse/scripts.pory"
# 85 "data/maps/Route104_MrBrineysHouse/scripts.pory"
# 163 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	goto Route104_MrBrineysHouse_EventScript_SailToDewford
# 164 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	end
# 165 "data/maps/Route104_MrBrineysHouse/scripts.pory"

# 166 "data/maps/Route104_MrBrineysHouse/scripts.pory"
Route104_MrBrineysHouse_EventScript_SailDeliverPackage_2:
# 167 "data/maps/Route104_MrBrineysHouse/scripts.pory"
# 83 "data/maps/Route104_MrBrineysHouse/scripts.pory"
# 168 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	goto Route104_MrBrineysHouse_EventScript_DeclineDeliverySailing
# 169 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	goto Route104_MrBrineysHouse_EventScript_SailDeliverPackage_1
# 170 "data/maps/Route104_MrBrineysHouse/scripts.pory"

# 171 "data/maps/Route104_MrBrineysHouse/scripts.pory"

# 172 "data/maps/Route104_MrBrineysHouse/scripts.pory"
Route104_MrBrineysHouse_EventScript_DeclineDeliverySailing::
# 173 "data/maps/Route104_MrBrineysHouse/scripts.pory"
# 90 "data/maps/Route104_MrBrineysHouse/scripts.pory"
# 174 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	msgbox Route104_MrBrineysHouse_Text_DeclineDeliverySail, MSGBOX_DEFAULT
# 175 "data/maps/Route104_MrBrineysHouse/scripts.pory"
# 91 "data/maps/Route104_MrBrineysHouse/scripts.pory"
# 176 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	release
# 177 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	end
# 178 "data/maps/Route104_MrBrineysHouse/scripts.pory"

# 179 "data/maps/Route104_MrBrineysHouse/scripts.pory"

# 180 "data/maps/Route104_MrBrineysHouse/scripts.pory"
Route104_MrBrineysHouse_EventScript_DeclineSailing::
# 181 "data/maps/Route104_MrBrineysHouse/scripts.pory"
# 96 "data/maps/Route104_MrBrineysHouse/scripts.pory"
# 182 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	msgbox Route104_MrBrineysHouse_Text_TellMeWheneverYouWantToSail, MSGBOX_DEFAULT
# 183 "data/maps/Route104_MrBrineysHouse/scripts.pory"
# 97 "data/maps/Route104_MrBrineysHouse/scripts.pory"
# 184 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	release
# 185 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	end
# 186 "data/maps/Route104_MrBrineysHouse/scripts.pory"

# 187 "data/maps/Route104_MrBrineysHouse/scripts.pory"

# 188 "data/maps/Route104_MrBrineysHouse/scripts.pory"
Route104_MrBrineysHouse_EventScript_SailToDewford::
# 189 "data/maps/Route104_MrBrineysHouse/scripts.pory"
# 102 "data/maps/Route104_MrBrineysHouse/scripts.pory"
# 190 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	msgbox Route104_MrBrineysHouse_Text_SetSailForDewford, MSGBOX_DEFAULT
# 191 "data/maps/Route104_MrBrineysHouse/scripts.pory"
# 103 "data/maps/Route104_MrBrineysHouse/scripts.pory"
# 192 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	call EventScript_BackupMrBrineyLocation
# 193 "data/maps/Route104_MrBrineysHouse/scripts.pory"
# 104 "data/maps/Route104_MrBrineysHouse/scripts.pory"
# 194 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	setvar VAR_BOARD_BRINEY_BOAT_STATE, 1
# 195 "data/maps/Route104_MrBrineysHouse/scripts.pory"
# 105 "data/maps/Route104_MrBrineysHouse/scripts.pory"
# 196 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_104_MR_BRINEY
# 197 "data/maps/Route104_MrBrineysHouse/scripts.pory"
# 106 "data/maps/Route104_MrBrineysHouse/scripts.pory"
# 198 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	setflag FLAG_HIDE_BRINEYS_HOUSE_MR_BRINEY
# 199 "data/maps/Route104_MrBrineysHouse/scripts.pory"
# 107 "data/maps/Route104_MrBrineysHouse/scripts.pory"
# 200 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	setflag FLAG_HIDE_BRINEYS_HOUSE_PEEKO
# 201 "data/maps/Route104_MrBrineysHouse/scripts.pory"
# 108 "data/maps/Route104_MrBrineysHouse/scripts.pory"
# 202 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 8
# 203 "data/maps/Route104_MrBrineysHouse/scripts.pory"
# 109 "data/maps/Route104_MrBrineysHouse/scripts.pory"
# 204 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	setvar VAR_ROUTE104_STATE, 2
# 205 "data/maps/Route104_MrBrineysHouse/scripts.pory"
# 110 "data/maps/Route104_MrBrineysHouse/scripts.pory"
# 206 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	setflag FLAG_HIDE_RUSTBORO_CITY_RIVAL
# 207 "data/maps/Route104_MrBrineysHouse/scripts.pory"
# 111 "data/maps/Route104_MrBrineysHouse/scripts.pory"
# 208 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	setflag FLAG_HIDE_ROUTE_104_RIVAL
# 209 "data/maps/Route104_MrBrineysHouse/scripts.pory"
# 112 "data/maps/Route104_MrBrineysHouse/scripts.pory"
# 210 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	warp MAP_ROUTE104, 13, 51
# 211 "data/maps/Route104_MrBrineysHouse/scripts.pory"
# 113 "data/maps/Route104_MrBrineysHouse/scripts.pory"
# 212 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	waitstate
# 213 "data/maps/Route104_MrBrineysHouse/scripts.pory"
# 114 "data/maps/Route104_MrBrineysHouse/scripts.pory"
# 214 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	releaseall
# 215 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	end
# 216 "data/maps/Route104_MrBrineysHouse/scripts.pory"

# 217 "data/maps/Route104_MrBrineysHouse/scripts.pory"

# 218 "data/maps/Route104_MrBrineysHouse/scripts.pory"
Route104_MrBrineysHouse_EventScript_Peeko::
# 219 "data/maps/Route104_MrBrineysHouse/scripts.pory"
# 119 "data/maps/Route104_MrBrineysHouse/scripts.pory"
# 220 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	lock
# 221 "data/maps/Route104_MrBrineysHouse/scripts.pory"
# 120 "data/maps/Route104_MrBrineysHouse/scripts.pory"
# 222 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	faceplayer
# 223 "data/maps/Route104_MrBrineysHouse/scripts.pory"
# 121 "data/maps/Route104_MrBrineysHouse/scripts.pory"
# 224 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	waitse
# 225 "data/maps/Route104_MrBrineysHouse/scripts.pory"
# 122 "data/maps/Route104_MrBrineysHouse/scripts.pory"
# 226 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	playmoncry SPECIES_WINGULL, CRY_MODE_NORMAL
# 227 "data/maps/Route104_MrBrineysHouse/scripts.pory"
# 123 "data/maps/Route104_MrBrineysHouse/scripts.pory"
# 228 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	msgbox Route104_MrBrineysHouse_Text_Peeko, MSGBOX_DEFAULT
# 229 "data/maps/Route104_MrBrineysHouse/scripts.pory"
# 124 "data/maps/Route104_MrBrineysHouse/scripts.pory"
# 230 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	waitmoncry
# 231 "data/maps/Route104_MrBrineysHouse/scripts.pory"
# 125 "data/maps/Route104_MrBrineysHouse/scripts.pory"
# 232 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	release
# 233 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	end
# 234 "data/maps/Route104_MrBrineysHouse/scripts.pory"

# 235 "data/maps/Route104_MrBrineysHouse/scripts.pory"

# 236 "data/maps/Route104_MrBrineysHouse/scripts.pory"
Route104_MrBrineysHouse_Text_WaitUpPeeko::
# 237 "data/maps/Route104_MrBrineysHouse/scripts.pory"
# 129 "data/maps/Route104_MrBrineysHouse/scripts.pory"
# 238 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.string "MR. BRINEY: Hold on, lass!\n"
# 239 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.string "Wait up, PEEKO!$"
# 240 "data/maps/Route104_MrBrineysHouse/scripts.pory"

# 241 "data/maps/Route104_MrBrineysHouse/scripts.pory"
Route104_MrBrineysHouse_Text_ItsYouLetsSailToDewford::
# 242 "data/maps/Route104_MrBrineysHouse/scripts.pory"
# 134 "data/maps/Route104_MrBrineysHouse/scripts.pory"
# 243 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.string "Hm? You're {PLAYER}{KUN}!\n"
# 244 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.string "You saved my darling PEEKO!\l"
# 245 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.string "We owe so much to you!\p"
# 246 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.string "What's that?\n"
# 247 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.string "You want to sail with me?\p"
# 248 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.string "Hmhm…\p"
# 249 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.string "You have a LETTER bound for DEWFORD\n"
# 250 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.string "and a package for SLATEPORT, then?\p"
# 251 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.string "Quite the busy life you must lead!\p"
# 252 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.string "But, certainly, what you're asking is\n"
# 253 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.string "no problem at all.\p"
# 254 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.string "You've come to the right man!\n"
# 255 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.string "We'll set sail for DEWFORD.$"
# 256 "data/maps/Route104_MrBrineysHouse/scripts.pory"

# 257 "data/maps/Route104_MrBrineysHouse/scripts.pory"
Route104_MrBrineysHouse_Text_SetSailForDewford::
# 258 "data/maps/Route104_MrBrineysHouse/scripts.pory"
# 150 "data/maps/Route104_MrBrineysHouse/scripts.pory"
# 259 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.string "MR. BRINEY: DEWFORD it is, then!\p"
# 260 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.string "Anchors aweigh!\n"
# 261 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.string "PEEKO, we're setting sail, my darling!$"
# 262 "data/maps/Route104_MrBrineysHouse/scripts.pory"

# 263 "data/maps/Route104_MrBrineysHouse/scripts.pory"
Route104_MrBrineysHouse_Text_DeclineDeliverySail::
# 264 "data/maps/Route104_MrBrineysHouse/scripts.pory"
# 156 "data/maps/Route104_MrBrineysHouse/scripts.pory"
# 265 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.string "MR. BRINEY: Is that so?\n"
# 266 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.string "Your deliveries can wait?\p"
# 267 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.string "You just go on and tell me whenever\n"
# 268 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.string "you want to set sail!$"
# 269 "data/maps/Route104_MrBrineysHouse/scripts.pory"

# 270 "data/maps/Route104_MrBrineysHouse/scripts.pory"
Route104_MrBrineysHouse_Text_NeedToMakeDeliveriesSailToDewford::
# 271 "data/maps/Route104_MrBrineysHouse/scripts.pory"
# 163 "data/maps/Route104_MrBrineysHouse/scripts.pory"
# 272 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.string "MR. BRINEY: Ahoy!\n"
# 273 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.string "I know exactly what you want to say!\p"
# 274 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.string "You're to deliver a LETTER to DEWFORD\n"
# 275 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.string "and a package to SLATEPORT.\p"
# 276 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.string "What you need me to do is no problem\n"
# 277 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.string "at all--I'm the man for the job!\p"
# 278 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.string "First, we'll set sail for DEWFORD.$"
# 279 "data/maps/Route104_MrBrineysHouse/scripts.pory"

# 280 "data/maps/Route104_MrBrineysHouse/scripts.pory"
Route104_MrBrineysHouse_Text_NeedToDeliverPackageSailToDewford::
# 281 "data/maps/Route104_MrBrineysHouse/scripts.pory"
# 173 "data/maps/Route104_MrBrineysHouse/scripts.pory"
# 282 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.string "MR. BRINEY: Ahoy!\n"
# 283 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.string "I know exactly what you want to say!\p"
# 284 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.string "You're to deliver a package to\n"
# 285 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.string "CAPT. STERN in SLATEPORT.\p"
# 286 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.string "What you need me to do is no problem\n"
# 287 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.string "at all--I'm the man for the job!\p"
# 288 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.string "First, we'll set sail for DEWFORD.$"
# 289 "data/maps/Route104_MrBrineysHouse/scripts.pory"

# 290 "data/maps/Route104_MrBrineysHouse/scripts.pory"
Route104_MrBrineysHouse_Text_WhereAreWeBound::
# 291 "data/maps/Route104_MrBrineysHouse/scripts.pory"
# 183 "data/maps/Route104_MrBrineysHouse/scripts.pory"
# 292 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.string "MR. BRINEY: Ahoy!\n"
# 293 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.string "For you, I'll go out to sea anytime!\p"
# 294 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.string "Now, my friend, where are we bound?$"
# 295 "data/maps/Route104_MrBrineysHouse/scripts.pory"

# 296 "data/maps/Route104_MrBrineysHouse/scripts.pory"
Route104_MrBrineysHouse_Text_TellMeWheneverYouWantToSail::
# 297 "data/maps/Route104_MrBrineysHouse/scripts.pory"
# 189 "data/maps/Route104_MrBrineysHouse/scripts.pory"
# 298 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.string "MR. BRINEY: Is that so?\n"
# 299 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.string "Well, PEEKO owes her life to you.\p"
# 300 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.string "You just go on and tell me whenever\n"
# 301 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.string "you want to set sail!$"
# 302 "data/maps/Route104_MrBrineysHouse/scripts.pory"

# 303 "data/maps/Route104_MrBrineysHouse/scripts.pory"
Route104_MrBrineysHouse_Text_Peeko::
# 304 "data/maps/Route104_MrBrineysHouse/scripts.pory"
# 196 "data/maps/Route104_MrBrineysHouse/scripts.pory"
# 305 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.string "PEEKO: Pii piihyoro!$"
