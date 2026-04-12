# 1 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"

# 2 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
CeruleanCity_BikeShop_Frlg_MapScripts::
# 3 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	.byte 0
# 4 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"

# 5 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"

# 6 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
CeruleanCity_BikeShop_EventScript_Clerk::
# 7 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
# 4 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
# 8 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	lock
# 9 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
# 5 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
# 10 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	faceplayer
# 11 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
# 6 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
# 12 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	goto_if_set FLAG_GOT_BICYCLE, CeruleanCity_BikeShop_EventScript_Clerk_2
# 13 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
CeruleanCity_BikeShop_EventScript_Clerk_1:
# 14 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
# 9 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
# 15 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	goto_if_set FLAG_GOT_BIKE_VOUCHER, CeruleanCity_BikeShop_EventScript_Clerk_5
# 16 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
CeruleanCity_BikeShop_EventScript_Clerk_4:
# 17 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
# 12 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
# 18 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	showmoneybox 0, 0
# 19 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
# 13 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
# 20 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	message CeruleanCity_BikeShop_Text_WelcomeToBikeShop
# 21 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
# 14 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
# 22 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	waitmessage
# 23 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
# 15 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
# 24 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	multichoice 11, 0, MULTI_BIKE_SHOP, FALSE
# 25 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
# 16 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
# 26 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	hidemoneybox
# 27 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
# 17 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
# 28 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	showmoneybox 0, 0
# 29 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
# 18 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
# 30 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	switch VAR_RESULT
# 31 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
# 19 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
# 32 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	case 0, CeruleanCity_BikeShop_EventScript_Clerk_9
# 33 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
# 21 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
# 34 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	case 1, CeruleanCity_BikeShop_EventScript_Clerk_10
# 35 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
# 23 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
# 36 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	case 127, CeruleanCity_BikeShop_EventScript_Clerk_11
# 37 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
CeruleanCity_BikeShop_EventScript_Clerk_7:
# 38 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	end
# 39 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"

# 40 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
CeruleanCity_BikeShop_EventScript_Clerk_2:
# 41 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
# 7 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
# 42 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	goto CeruleanCity_BikeShop_EventScript_AlreadyGotBicycle
# 43 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	goto CeruleanCity_BikeShop_EventScript_Clerk_1
# 44 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"

# 45 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
CeruleanCity_BikeShop_EventScript_Clerk_5:
# 46 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
# 10 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
# 47 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	goto CeruleanCity_BikeShop_EventScript_ExchangeBikeVoucher
# 48 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	goto CeruleanCity_BikeShop_EventScript_Clerk_4
# 49 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"

# 50 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
CeruleanCity_BikeShop_EventScript_Clerk_9:
# 51 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
# 20 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
# 52 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	goto CeruleanCity_BikeShop_EventScript_TryPurchaseBicycle
# 53 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	goto CeruleanCity_BikeShop_EventScript_Clerk_7
# 54 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"

# 55 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
CeruleanCity_BikeShop_EventScript_Clerk_10:
# 56 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
# 22 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
# 57 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	goto CeruleanCity_BikeShop_EventScript_ClerkGoodbye
# 58 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	goto CeruleanCity_BikeShop_EventScript_Clerk_7
# 59 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"

# 60 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
CeruleanCity_BikeShop_EventScript_Clerk_11:
# 61 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
# 24 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
# 62 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	goto CeruleanCity_BikeShop_EventScript_ClerkGoodbye
# 63 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	goto CeruleanCity_BikeShop_EventScript_Clerk_7
# 64 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"

# 65 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"

# 66 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
CeruleanCity_BikeShop_EventScript_TryPurchaseBicycle::
# 67 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
# 30 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
# 68 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	msgbox CeruleanCity_BikeShop_Text_SorryYouCantAffordIt
# 69 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
# 31 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
# 70 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	goto CeruleanCity_BikeShop_EventScript_ClerkGoodbye
# 71 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	end
# 72 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"

# 73 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"

# 74 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
CeruleanCity_BikeShop_EventScript_ClerkGoodbye::
# 75 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
# 36 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
# 76 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	msgbox CeruleanCity_BikeShop_Text_ThankYouComeAgain
# 77 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
# 37 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
# 78 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	hidemoneybox
# 79 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
# 38 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
# 80 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	release
# 81 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	end
# 82 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"

# 83 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"

# 84 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
CeruleanCity_BikeShop_EventScript_ExchangeBikeVoucher::
# 85 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
# 43 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
# 86 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	msgbox CeruleanCity_BikeShop_Text_OhBikeVoucherHereYouGo
# 87 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
# 44 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
# 88 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	msgreceiveditem CeruleanCity_BikeShop_Text_ExchangedVoucherForBicycle, ITEM_BICYCLE, 1, MUS_RG_OBTAIN_KEY_ITEM
# 89 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
# 45 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
# 90 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	setflag FLAG_GOT_BICYCLE
# 91 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
# 46 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
# 92 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	additem ITEM_BICYCLE
# 93 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
# 47 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
# 94 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	removeitem ITEM_BIKE_VOUCHER
# 95 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
# 48 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
# 96 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	msgbox CeruleanCity_BikeShop_Text_ThankYouComeAgain
# 97 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
# 49 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
# 98 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	release
# 99 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	end
# 100 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"

# 101 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"

# 102 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
CeruleanCity_BikeShop_EventScript_AlreadyGotBicycle::
# 103 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
# 54 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
# 104 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	msgbox CeruleanCity_BikeShop_Text_HowDoYouLikeNewBicycle
# 105 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
# 55 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
# 106 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	release
# 107 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	end
# 108 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"

# 109 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"

# 110 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
CeruleanCity_BikeShop_EventScript_NoRoomForBicycle::
# 111 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
# 60 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
# 112 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	msgbox CeruleanCity_BikeShop_Text_MakeRoomForBicycle
# 113 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
# 61 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
# 114 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	release
# 115 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	end
# 116 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"

# 117 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"

# 118 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
CeruleanCity_BikeShop_EventScript_Woman::
# 119 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
# 66 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
# 120 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	msgbox CeruleanCity_BikeShop_Text_CityBikeGoodEnoughForMe, MSGBOX_NPC
# 121 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	end
# 122 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"

# 123 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"

# 124 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
CeruleanCity_BikeShop_EventScript_Youngster::
# 125 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
# 71 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
# 126 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	lock
# 127 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
# 72 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
# 128 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	faceplayer
# 129 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
# 73 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
# 130 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	goto_if_set FLAG_GOT_BICYCLE, CeruleanCity_BikeShop_EventScript_Youngster_2
# 131 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
CeruleanCity_BikeShop_EventScript_Youngster_1:
# 132 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
# 76 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
# 133 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	msgbox CeruleanCity_BikeShop_Text_BikesCoolButExpensive
# 134 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
# 77 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
# 135 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	release
# 136 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	end
# 137 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"

# 138 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
CeruleanCity_BikeShop_EventScript_Youngster_2:
# 139 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
# 74 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
# 140 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	goto CeruleanCity_BikeShop_EventScript_YoungsterHaveBike
# 141 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	goto CeruleanCity_BikeShop_EventScript_Youngster_1
# 142 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"

# 143 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"

# 144 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
CeruleanCity_BikeShop_EventScript_YoungsterHaveBike::
# 145 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
# 82 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
# 146 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	msgbox CeruleanCity_BikeShop_Text_WowYourBikeIsCool
# 147 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
# 83 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
# 148 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	release
# 149 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	end
# 150 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"

# 151 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"

# 152 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
CeruleanCity_BikeShop_EventScript_Bicycle::
# 153 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
# 88 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
# 154 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	msgbox CeruleanCity_BikeShop_Text_ShinyNewBicycle, MSGBOX_SIGN
# 155 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	end
# 156 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"

# 157 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"

# 158 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
CeruleanCity_BikeShop_Text_WelcomeToBikeShop::
# 159 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
# 92 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
# 160 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	.string "Hi!\n"
# 161 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	.string "Welcome to our BIKE SHOP.\p"
# 162 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	.string "Have we got just the BIKE for\n"
# 163 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	.string "you!$"
# 164 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"

# 165 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
CeruleanCity_BikeShop_Text_SorryYouCantAffordIt::
# 166 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
# 99 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
# 167 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	.string "Sorry!\n"
# 168 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	.string "You can't afford it!$"
# 169 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"

# 170 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
CeruleanCity_BikeShop_Text_OhBikeVoucherHereYouGo::
# 171 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
# 104 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
# 172 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	.string "Oh, that's…\p"
# 173 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	.string "A BIKE VOUCHER!\p"
# 174 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	.string "Okay!\n"
# 175 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	.string "Here you go!$"
# 176 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"

# 177 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
CeruleanCity_BikeShop_Text_ExchangedVoucherForBicycle::
# 178 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
# 111 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
# 179 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	.string "{PLAYER} exchanged the\n"
# 180 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	.string "BIKE VOUCHER for a BICYCLE.$"
# 181 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"

# 182 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
CeruleanCity_BikeShop_Text_ThankYouComeAgain::
# 183 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
# 116 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
# 184 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	.string "Thank you!\n"
# 185 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	.string "Come back again sometime!$"
# 186 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"

# 187 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
CeruleanCity_BikeShop_Text_HowDoYouLikeNewBicycle::
# 188 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
# 121 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
# 189 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	.string "How do you like your new BICYCLE?\n"
# 190 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	.string "Do you like how it rides?\p"
# 191 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	.string "You can take it out on CYCLING\n"
# 192 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	.string "ROAD and even into caves!$"
# 193 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"

# 194 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
CeruleanCity_BikeShop_Text_MakeRoomForBicycle::
# 195 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
# 128 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
# 196 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	.string "You better make room for your\n"
# 197 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	.string "BICYCLE!$"
# 198 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"

# 199 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
CeruleanCity_BikeShop_Text_CityBikeGoodEnoughForMe::
# 200 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
# 133 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
# 201 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	.string "A plain city bike is good enough\n"
# 202 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	.string "for me.\p"
# 203 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	.string "After all, you can't put a shopping\n"
# 204 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	.string "basket on a mountain bike.$"
# 205 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"

# 206 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
CeruleanCity_BikeShop_Text_BikesCoolButExpensive::
# 207 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
# 140 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
# 208 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	.string "These bikes are cool, but they're\n"
# 209 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	.string "way expensive!$"
# 210 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"

# 211 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
CeruleanCity_BikeShop_Text_WowYourBikeIsCool::
# 212 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
# 145 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
# 213 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	.string "Wow.\n"
# 214 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	.string "Your BIKE is really cool!$"
# 215 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"

# 216 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
CeruleanCity_BikeShop_Text_GermanFoldableBicyleFinallyOnMarket::
# 217 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
# 150 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
# 218 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	.string "ついに　はつばい！\p"
# 219 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	.string "ドイツ　せい　さいこうきゅう\n"
# 220 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	.string "おりたたみ　じてんしゃ！$"
# 221 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"

# 222 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
CeruleanCity_BikeShop_Text_ShinyNewBicycle::
# 223 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
# 156 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
# 224 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	.string "A shiny new BICYCLE!$"
