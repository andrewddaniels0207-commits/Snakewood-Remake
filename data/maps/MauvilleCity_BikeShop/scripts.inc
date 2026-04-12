# 1 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 2 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_MapScripts::
# 3 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.byte 0
# 4 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 5 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 6 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_Rydel::
# 7 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 4 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 8 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	lock
# 9 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 5 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 10 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	faceplayer
# 11 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 6 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 12 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto_if_set FLAG_RECEIVED_BIKE, MauvilleCity_BikeShop_EventScript_Rydel_2
# 13 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_Rydel_1:
# 14 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 9 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 15 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto_if_set FLAG_DECLINED_BIKE, MauvilleCity_BikeShop_EventScript_Rydel_5
# 16 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_Rydel_4:
# 17 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 12 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 18 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	msgbox MauvilleCity_BikeShop_Text_RydelGreeting, MSGBOX_DEFAULT
# 19 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 13 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 20 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	msgbox MauvilleCity_BikeShop_Text_DidYouComeFromFarAway, MSGBOX_YESNO
# 21 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 14 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 22 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	compare VAR_RESULT, YES
# 23 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto_if_eq MauvilleCity_BikeShop_EventScript_Rydel_8
# 24 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_Rydel_7:
# 25 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 17 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 26 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	compare VAR_RESULT, NO
# 27 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto_if_eq MauvilleCity_BikeShop_EventScript_Rydel_11
# 28 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_Rydel_10:
# 29 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 30 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 31 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_Rydel_2:
# 32 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 7 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 33 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_AskSwitchBikes
# 34 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_Rydel_1
# 35 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 36 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_Rydel_5:
# 37 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 10 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 38 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_SkipGreeting
# 39 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_Rydel_4
# 40 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 41 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_Rydel_8:
# 42 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 15 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 43 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_YesFar
# 44 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_Rydel_7
# 45 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 46 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_Rydel_11:
# 47 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 18 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 48 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_NotFar
# 49 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_Rydel_10
# 50 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 51 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 52 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_SkipGreeting::
# 53 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 24 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 54 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	msgbox MauvilleCity_BikeShop_Text_DidYouComeFromFarAway, MSGBOX_YESNO
# 55 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 25 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 56 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	compare VAR_RESULT, YES
# 57 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto_if_eq MauvilleCity_BikeShop_EventScript_SkipGreeting_2
# 58 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_SkipGreeting_1:
# 59 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 28 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 60 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	compare VAR_RESULT, NO
# 61 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto_if_eq MauvilleCity_BikeShop_EventScript_SkipGreeting_5
# 62 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_SkipGreeting_4:
# 63 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 64 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 65 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_SkipGreeting_2:
# 66 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 26 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 67 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_YesFar
# 68 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_SkipGreeting_1
# 69 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 70 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_SkipGreeting_5:
# 71 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 29 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 72 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_NotFar
# 73 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_SkipGreeting_4
# 74 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 75 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 76 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_ChooseBike::
# 77 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 35 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 78 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	message MauvilleCity_BikeShop_Text_ExplainBikesChooseWhichOne
# 79 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 36 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 80 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	waitmessage
# 81 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 37 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 82 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	multichoice 21, 8, MULTI_BIKE, TRUE
# 83 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 38 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 84 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	switch VAR_RESULT
# 85 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 39 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 86 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	case 0, MauvilleCity_BikeShop_EventScript_ChooseBike_3
# 87 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 41 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 88 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	case 1, MauvilleCity_BikeShop_EventScript_ChooseBike_4
# 89 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_ChooseBike_1:
# 90 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 91 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 92 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_ChooseBike_3:
# 93 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 40 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 94 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_GetMachBike
# 95 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_ChooseBike_1
# 96 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 97 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_ChooseBike_4:
# 98 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 42 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 99 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_GetAcroBike
# 100 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_ChooseBike_1
# 101 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 102 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 103 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_NotFar::
# 104 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 48 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 105 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	setflag FLAG_DECLINED_BIKE
# 106 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 49 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 107 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	msgbox MauvilleCity_BikeShop_Text_GuessYouDontNeedBike, MSGBOX_DEFAULT
# 108 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 50 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 109 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	release
# 110 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 111 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 112 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 113 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_YesFar::
# 114 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 55 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 115 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	setflag FLAG_RECEIVED_BIKE
# 116 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 56 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 117 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_ChooseBike
# 118 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 119 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 120 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 121 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_GetMachBike::
# 122 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 61 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 123 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	msgbox MauvilleCity_BikeShop_Text_ChoseMachBike, MSGBOX_DEFAULT
# 124 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 62 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 125 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	giveitem ITEM_MACH_BIKE
# 126 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 63 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 127 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	compare VAR_RESULT, FALSE
# 128 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto_if_eq MauvilleCity_BikeShop_EventScript_GetMachBike_2
# 129 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_GetMachBike_1:
# 130 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 66 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 131 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_ComeBackToSwitchBikes
# 132 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 133 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 134 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_GetMachBike_2:
# 135 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 64 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 136 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
# 137 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_GetMachBike_1
# 138 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 139 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 140 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_GetAcroBike::
# 141 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 71 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 142 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	msgbox MauvilleCity_BikeShop_Text_ChoseAcroBike, MSGBOX_DEFAULT
# 143 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 72 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 144 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	giveitem ITEM_ACRO_BIKE
# 145 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 73 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 146 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	compare VAR_RESULT, FALSE
# 147 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto_if_eq MauvilleCity_BikeShop_EventScript_GetAcroBike_2
# 148 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_GetAcroBike_1:
# 149 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 76 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 150 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_ComeBackToSwitchBikes
# 151 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 152 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 153 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_GetAcroBike_2:
# 154 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 74 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 155 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
# 156 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_GetAcroBike_1
# 157 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 158 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 159 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_ComeBackToSwitchBikes::
# 160 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 81 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 161 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	msgbox MauvilleCity_BikeShop_Text_ComeBackToSwitchBikes, MSGBOX_DEFAULT
# 162 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 82 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 163 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	special SwapRegisteredBike
# 164 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 83 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 165 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	release
# 166 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 167 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 168 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 169 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_AskSwitchBikes::
# 170 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 88 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 171 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	msgbox MauvilleCity_BikeShop_Text_WantToSwitchBikes, MSGBOX_YESNO
# 172 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 89 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 173 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	compare VAR_RESULT, YES
# 174 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto_if_eq MauvilleCity_BikeShop_EventScript_AskSwitchBikes_2
# 175 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_AskSwitchBikes_1:
# 176 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 92 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 177 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	compare VAR_RESULT, NO
# 178 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto_if_eq MauvilleCity_BikeShop_EventScript_AskSwitchBikes_5
# 179 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_AskSwitchBikes_4:
# 180 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 181 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 182 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_AskSwitchBikes_2:
# 183 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 90 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 184 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_SwitchBikes
# 185 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_AskSwitchBikes_1
# 186 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 187 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_AskSwitchBikes_5:
# 188 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 93 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 189 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_KeepBike
# 190 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_AskSwitchBikes_4
# 191 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 192 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 193 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_SwitchBikes::
# 194 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 99 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 195 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	msgbox MauvilleCity_BikeShop_Text_IllSwitchBikes, MSGBOX_DEFAULT
# 196 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 100 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 197 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	checkitem ITEM_ACRO_BIKE
# 198 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 101 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 199 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	compare VAR_RESULT, TRUE
# 200 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto_if_eq MauvilleCity_BikeShop_EventScript_SwitchBikes_2
# 201 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_SwitchBikes_1:
# 202 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 104 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 203 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	checkitem ITEM_MACH_BIKE
# 204 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 105 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 205 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	compare VAR_RESULT, TRUE
# 206 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto_if_eq MauvilleCity_BikeShop_EventScript_SwitchBikes_5
# 207 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_SwitchBikes_4:
# 208 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 108 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 209 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	msgbox MauvilleCity_BikeShop_Text_OhYourBikeIsInPC, MSGBOX_DEFAULT
# 210 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 109 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 211 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	release
# 212 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 213 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 214 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_SwitchBikes_2:
# 215 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 102 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 216 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_SwitchAcroForMach
# 217 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_SwitchBikes_1
# 218 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 219 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_SwitchBikes_5:
# 220 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 106 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 221 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_SwitchMachForAcro
# 222 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_SwitchBikes_4
# 223 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 224 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 225 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_KeepBike::
# 226 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 114 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 227 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	msgbox MauvilleCity_BikeShop_Text_HappyYouLikeIt, MSGBOX_DEFAULT
# 228 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 115 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 229 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	release
# 230 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 231 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 232 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 233 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_SwitchAcroForMach::
# 234 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 120 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 235 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	incrementgamestat GAME_STAT_TRADED_BIKES
# 236 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 121 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 237 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	msgbox MauvilleCity_BikeShop_Text_ExchangedAcroForMach, MSGBOX_DEFAULT
# 238 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 122 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 239 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	removeitem ITEM_ACRO_BIKE
# 240 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 123 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 241 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	giveitem ITEM_MACH_BIKE
# 242 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 124 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 243 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_ComeBackToSwitchBikes
# 244 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 245 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 246 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 247 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_SwitchMachForAcro::
# 248 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 129 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 249 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	incrementgamestat GAME_STAT_TRADED_BIKES
# 250 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 130 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 251 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	msgbox MauvilleCity_BikeShop_Text_ExchangedMachForAcro, MSGBOX_DEFAULT
# 252 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 131 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 253 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	removeitem ITEM_MACH_BIKE
# 254 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 132 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 255 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	giveitem ITEM_ACRO_BIKE
# 256 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 133 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 257 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_ComeBackToSwitchBikes
# 258 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 259 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 260 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 261 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_Assistant::
# 262 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 138 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 263 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	msgbox MauvilleCity_BikeShop_Text_HandbooksAreInBack, MSGBOX_NPC
# 264 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 265 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 266 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 267 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_MachBikeHandbook::
# 268 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 143 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 269 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	message MauvilleCity_BikeShop_Text_MachHandbookWhichPage
# 270 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 144 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 271 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	waitmessage
# 272 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 145 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 273 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_ChooseMachHandbookPage
# 274 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 275 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 276 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 277 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_ChooseMachHandbookPage::
# 278 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 150 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 279 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	multichoice 0, 0, MULTI_MACH_BIKE_INFO, FALSE
# 280 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 151 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 281 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	switch VAR_RESULT
# 282 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 152 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 283 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	case 0, MauvilleCity_BikeShop_EventScript_ChooseMachHandbookPage_3
# 284 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 154 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 285 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	case 1, MauvilleCity_BikeShop_EventScript_ChooseMachHandbookPage_4
# 286 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 156 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 287 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	case 2, MauvilleCity_BikeShop_EventScript_ChooseMachHandbookPage_5
# 288 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 158 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 289 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	case 3, MauvilleCity_BikeShop_EventScript_ChooseMachHandbookPage_6
# 290 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 160 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 291 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	case MULTI_B_PRESSED, MauvilleCity_BikeShop_EventScript_ChooseMachHandbookPage_7
# 292 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_ChooseMachHandbookPage_1:
# 293 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 294 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 295 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_ChooseMachHandbookPage_3:
# 296 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 153 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 297 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_HowToRide
# 298 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_ChooseMachHandbookPage_1
# 299 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 300 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_ChooseMachHandbookPage_4:
# 301 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 155 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 302 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_HowToTurn
# 303 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_ChooseMachHandbookPage_1
# 304 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 305 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_ChooseMachHandbookPage_5:
# 306 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 157 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 307 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_SandySlopes
# 308 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_ChooseMachHandbookPage_1
# 309 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 310 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_ChooseMachHandbookPage_6:
# 311 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 159 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 312 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_ExitMachHandbook
# 313 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_ChooseMachHandbookPage_1
# 314 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 315 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_ChooseMachHandbookPage_7:
# 316 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 161 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 317 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_ExitMachHandbook
# 318 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_ChooseMachHandbookPage_1
# 319 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 320 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 321 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_HowToRide::
# 322 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 167 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 323 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	message MauvilleCity_BikeShop_Text_HowToRideMachBike
# 324 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 168 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 325 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	waitmessage
# 326 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 169 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 327 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_ChooseMachHandbookPage
# 328 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 329 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 330 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 331 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_HowToTurn::
# 332 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 174 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 333 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	message MauvilleCity_BikeShop_Text_HowToTurnMachBike
# 334 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 175 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 335 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	waitmessage
# 336 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 176 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 337 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_ChooseMachHandbookPage
# 338 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 339 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 340 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 341 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_SandySlopes::
# 342 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 181 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 343 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	message MauvilleCity_BikeShop_Text_SandySlopes
# 344 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 182 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 345 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	waitmessage
# 346 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 183 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 347 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_ChooseMachHandbookPage
# 348 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 349 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 350 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 351 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_ExitMachHandbook::
# 352 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 188 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 353 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	release
# 354 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 355 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 356 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 357 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_AcroBikeHandbook::
# 358 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 193 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 359 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	message MauvilleCity_BikeShop_Text_AcroHandbookWhichPage
# 360 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 194 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 361 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	waitmessage
# 362 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 195 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 363 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_ChooseAcroHandbookPage
# 364 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 365 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 366 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 367 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_ChooseAcroHandbookPage::
# 368 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 200 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 369 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	multichoice 0, 0, MULTI_ACRO_BIKE_INFO, FALSE
# 370 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 201 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 371 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	switch VAR_RESULT
# 372 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 202 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 373 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	case 0, MauvilleCity_BikeShop_EventScript_ChooseAcroHandbookPage_3
# 374 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 204 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 375 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	case 1, MauvilleCity_BikeShop_EventScript_ChooseAcroHandbookPage_4
# 376 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 206 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 377 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	case 2, MauvilleCity_BikeShop_EventScript_ChooseAcroHandbookPage_5
# 378 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 208 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 379 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	case 3, MauvilleCity_BikeShop_EventScript_ChooseAcroHandbookPage_6
# 380 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 210 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 381 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	case MULTI_B_PRESSED, MauvilleCity_BikeShop_EventScript_ChooseAcroHandbookPage_7
# 382 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_ChooseAcroHandbookPage_1:
# 383 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 384 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 385 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_ChooseAcroHandbookPage_3:
# 386 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 203 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 387 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_Wheelies
# 388 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_ChooseAcroHandbookPage_1
# 389 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 390 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_ChooseAcroHandbookPage_4:
# 391 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 205 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 392 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_BunnyHops
# 393 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_ChooseAcroHandbookPage_1
# 394 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 395 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_ChooseAcroHandbookPage_5:
# 396 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 207 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 397 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_Jumps
# 398 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_ChooseAcroHandbookPage_1
# 399 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 400 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_ChooseAcroHandbookPage_6:
# 401 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 209 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 402 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_ExitAcroHandbook
# 403 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_ChooseAcroHandbookPage_1
# 404 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 405 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_ChooseAcroHandbookPage_7:
# 406 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 211 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 407 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_ExitAcroHandbook
# 408 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_ChooseAcroHandbookPage_1
# 409 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 410 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 411 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_Wheelies::
# 412 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 217 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 413 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	message MauvilleCity_BikeShop_Text_Wheelies
# 414 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 218 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 415 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	waitmessage
# 416 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 219 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 417 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_ChooseAcroHandbookPage
# 418 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 419 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 420 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 421 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_BunnyHops::
# 422 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 224 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 423 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	message MauvilleCity_BikeShop_Text_BunnyHops
# 424 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 225 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 425 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	waitmessage
# 426 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 226 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 427 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_ChooseAcroHandbookPage
# 428 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 429 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 430 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 431 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_Jumps::
# 432 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 231 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 433 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	message MauvilleCity_BikeShop_Text_Jumps
# 434 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 232 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 435 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	waitmessage
# 436 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 233 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 437 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_ChooseAcroHandbookPage
# 438 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 439 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 440 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 441 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_ExitAcroHandbook::
# 442 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 238 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 443 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	release
# 444 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 445 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 446 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 447 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_RydelGreeting::
# 448 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 242 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 449 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Well, well, what have we here?\n"
# 450 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "A most energetic customer!\p"
# 451 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Me? You may call me RYDEL.\n"
# 452 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "I'm the owner of this cycle shop.$"
# 453 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 454 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_DidYouComeFromFarAway::
# 455 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 249 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 456 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "RYDEL: Your RUNNING SHOES…\n"
# 457 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "They're awfully filthy.\p"
# 458 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Did you come from far away?$"
# 459 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 460 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_GuessYouDontNeedBike::
# 461 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 255 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 462 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "RYDEL: Is that right?\p"
# 463 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Then, I guess you have no need for\n"
# 464 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "any of my BIKES.$"
# 465 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 466 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_ExplainBikesChooseWhichOne::
# 467 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 261 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 468 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "RYDEL: Hm, hm… … … … …\p"
# 469 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "You're saying that you came all this\n"
# 470 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "way from LITTLEROOT?\p"
# 471 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "My goodness!\n"
# 472 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "That's ridiculously far!\p"
# 473 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "If you had one of my BIKES, you could\n"
# 474 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "go anywhere easily while feeling the\l"
# 475 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "gentle caress of the wind!\p"
# 476 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "I'll tell you what!\n"
# 477 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "I'll give you a BIKE!\p"
# 478 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Oh, wait a second!\p"
# 479 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "I forgot to tell you that there are\n"
# 480 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "two kinds of BIKES!\p"
# 481 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "They are the MACH BIKE and\n"
# 482 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "the ACRO BIKE!\p"
# 483 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "The MACH BIKE is for cyclists who want\n"
# 484 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "to feel the wind with their bodies!\p"
# 485 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "And an ACRO BIKE is for those who\n"
# 486 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "prefer technical rides!\p"
# 487 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "I'm a real sweetheart, so you can\n"
# 488 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "have whichever one you like!\p"
# 489 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Which one will you choose?$"
# 490 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 491 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_ChoseMachBike::
# 492 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 286 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 493 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "{PLAYER} chose the MACH BIKE.$"
# 494 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 495 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_ChoseAcroBike::
# 496 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 290 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 497 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "{PLAYER} chose the ACRO BIKE.$"
# 498 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 499 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_ComeBackToSwitchBikes::
# 500 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 294 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 501 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "RYDEL: If you get the urge to switch\n"
# 502 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "BIKES, just come see me!$"
# 503 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 504 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_WantToSwitchBikes::
# 505 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 299 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 506 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "RYDEL: Oh? Were you thinking about\n"
# 507 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "switching BIKES?$"
# 508 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 509 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_IllSwitchBikes::
# 510 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 304 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 511 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "RYDEL: Okay, no problem!\n"
# 512 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "I'll switch BIKES for you!$"
# 513 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 514 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_ExchangedMachForAcro::
# 515 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 309 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 516 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "{PLAYER} got the MACH BIKE exchanged\n"
# 517 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "for an ACRO BIKE.$"
# 518 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 519 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_ExchangedAcroForMach::
# 520 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 314 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 521 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "{PLAYER} got the ACRO BIKE exchanged\n"
# 522 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "for a MACH BIKE.$"
# 523 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 524 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_HappyYouLikeIt::
# 525 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 319 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 526 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "RYDEL: Good, good!\n"
# 527 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "I'm happy that you like it!$"
# 528 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 529 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_OhYourBikeIsInPC::
# 530 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 324 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 531 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Oh? What happened to that BIKE\n"
# 532 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "I gave you?\p"
# 533 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Oh, I get it, you stored it using your PC.\p"
# 534 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Well, take it out of PC storage,\n"
# 535 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "and I'll be happy to exchange it!\p"
# 536 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "May the wind always be at your back\n"
# 537 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "on your adventure!$"
# 538 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 539 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_HandbooksAreInBack::
# 540 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 334 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 541 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "I'm learning about BIKES while\n"
# 542 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "I work here.\p"
# 543 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "If you need advice on how to ride your\n"
# 544 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "BIKE, there're a couple handbooks in\l"
# 545 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "the back.$"
# 546 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 547 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_MachHandbookWhichPage::
# 548 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 342 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 549 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "It's a handbook on the MACH BIKE.\p"
# 550 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Which page do you want to read?$"
# 551 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 552 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_HowToRideMachBike::
# 553 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 347 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 554 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "A BIKE moves in the direction that\n"
# 555 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "the + Control Pad is pressed.\p"
# 556 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "It will speed up once it gets rolling.\p"
# 557 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "To stop, release the + Control Pad.\n"
# 558 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "The BIKE will slow to a stop.\p"
# 559 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Want to read a different page?$"
# 560 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 561 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_HowToTurnMachBike::
# 562 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 356 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 563 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "A MACH BIKE is speedy, but it can't\n"
# 564 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "stop very quickly.\p"
# 565 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "It gets a little tricky to get around\n"
# 566 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "a corner.\p"
# 567 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Release the + Control Pad a little\n"
# 568 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "before the corner and slow down.\p"
# 569 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Want to read a different page?$"
# 570 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 571 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_SandySlopes::
# 572 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 366 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 573 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "There are small sandy slopes\n"
# 574 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "throughout the HOENN region.\p"
# 575 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "The loose, crumbly sand makes it\n"
# 576 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "impossible to climb normally.\p"
# 577 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "But if you have a MACH BIKE, you can\n"
# 578 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "zip up a sandy slope.\p"
# 579 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Want to read a different page?$"
# 580 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 581 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_AcroHandbookWhichPage::
# 582 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 376 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 583 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "It's a handbook on the ACRO BIKE.\p"
# 584 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Which page do you want to read?$"
# 585 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 586 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_Wheelies::
# 587 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 381 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 588 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Press the B Button while riding,\n"
# 589 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "and the front wheel lifts up.\p"
# 590 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "You can zip around with the front\n"
# 591 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "wheel up using the + Control Pad.\p"
# 592 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "This technique is called a wheelie.\p"
# 593 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Want to read a different page?$"
# 594 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 595 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_BunnyHops::
# 596 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 390 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 597 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Keeping the B Button pressed,\n"
# 598 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "your BIKE can hop on the spot.\p"
# 599 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "This technique is called a bunny hop.\p"
# 600 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "You can ride while hopping, too.\p"
# 601 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Want to read a different page?$"
# 602 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 603 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_Jumps::
# 604 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 398 "data/maps/MauvilleCity_BikeShop/scripts.pory"
# 605 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Press the B Button and the + Control\n"
# 606 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Pad at the same time to jump.\p"
# 607 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Press the + Control Pad to the side\n"
# 608 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "to jump sideways.\p"
# 609 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Press it backwards to make the BIKE\n"
# 610 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "change directions while jumping.\p"
# 611 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Want to read a different page?$"
