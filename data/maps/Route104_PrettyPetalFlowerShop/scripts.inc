# 1 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"

# 2 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
Route104_PrettyPetalFlowerShop_MapScripts::
# 3 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
# 2 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
# 4 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route104_PrettyPetalFlowerShop_OnTransition
# 5 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	.byte 0
# 6 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"

# 7 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"

# 8 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
Route104_PrettyPetalFlowerShop_OnTransition::
# 9 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
# 6 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
# 10 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	setflag FLAG_LANDMARK_FLOWER_SHOP
# 11 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
# 7 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
# 12 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	goto_if_unset FLAG_MET_PRETTY_PETAL_SHOP_OWNER, Route104_PrettyPetalFlowerShop_OnTransition_2
# 13 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
Route104_PrettyPetalFlowerShop_OnTransition_1:
# 14 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
# 10 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
# 15 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	goto_if_unset FLAG_BADGE03_GET, Route104_PrettyPetalFlowerShop_OnTransition_5
# 16 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
Route104_PrettyPetalFlowerShop_OnTransition_4:
# 17 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
# 13 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
# 18 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	setflag FLAG_TEMP_1
# 19 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	end
# 20 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"

# 21 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
Route104_PrettyPetalFlowerShop_OnTransition_2:
# 22 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
# 8 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
# 23 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	goto Route104_PrettyPetalFlowerShop_EventScript_MoveShopOwner
# 24 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	goto Route104_PrettyPetalFlowerShop_OnTransition_1
# 25 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"

# 26 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
Route104_PrettyPetalFlowerShop_OnTransition_5:
# 27 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
# 11 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
# 28 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	goto Route104_PrettyPetalFlowerShop_EventScript_MoveShopOwner
# 29 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	goto Route104_PrettyPetalFlowerShop_OnTransition_4
# 30 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"

# 31 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"

# 32 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
Route104_PrettyPetalFlowerShop_EventScript_MoveShopOwner::
# 33 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
# 18 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
# 34 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	setobjectxyperm LOCALID_FLOWER_SHOP_OWNER, 4, 6
# 35 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	end
# 36 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"

# 37 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"

# 38 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
Route104_PrettyPetalFlowerShop_EventScript_ShopOwner::
# 39 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
# 23 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
# 40 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	lock
# 41 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
# 24 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
# 42 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	faceplayer
# 43 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
# 25 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
# 44 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	goto_if_set FLAG_TEMP_1, Route104_PrettyPetalFlowerShop_EventScript_ShopOwner_2
# 45 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
Route104_PrettyPetalFlowerShop_EventScript_ShopOwner_1:
# 46 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
# 28 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
# 47 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	msgbox Route104_PrettyPetalFlowerShop_Text_ThisIsPrettyPetalFlowerShop, MSGBOX_DEFAULT
# 48 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
# 29 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
# 49 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	goto_if_set FLAG_MET_PRETTY_PETAL_SHOP_OWNER, Route104_PrettyPetalFlowerShop_EventScript_ShopOwner_5
# 50 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
Route104_PrettyPetalFlowerShop_EventScript_ShopOwner_4:
# 51 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
# 32 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
# 52 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	setflag FLAG_MET_PRETTY_PETAL_SHOP_OWNER
# 53 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
# 33 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
# 54 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	msgbox Route104_PrettyPetalFlowerShop_Text_IntroLearnAboutBerries, MSGBOX_YESNO
# 55 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
# 34 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
# 56 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	compare VAR_RESULT, YES
# 57 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	goto_if_eq Route104_PrettyPetalFlowerShop_EventScript_ShopOwner_8
# 58 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
Route104_PrettyPetalFlowerShop_EventScript_ShopOwner_7:
# 59 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
# 37 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
# 60 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	compare VAR_RESULT, NO
# 61 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	goto_if_eq Route104_PrettyPetalFlowerShop_EventScript_ShopOwner_11
# 62 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
Route104_PrettyPetalFlowerShop_EventScript_ShopOwner_10:
# 63 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
# 40 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
# 64 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	release
# 65 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	end
# 66 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"

# 67 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
Route104_PrettyPetalFlowerShop_EventScript_ShopOwner_2:
# 68 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
# 26 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
# 69 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	goto Route104_PrettyPetalFlowerShop_EventScript_SellDecorations
# 70 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	goto Route104_PrettyPetalFlowerShop_EventScript_ShopOwner_1
# 71 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"

# 72 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
Route104_PrettyPetalFlowerShop_EventScript_ShopOwner_5:
# 73 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
# 30 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
# 74 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	goto Route104_PrettyPetalFlowerShop_EventScript_AlreadyMet
# 75 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	goto Route104_PrettyPetalFlowerShop_EventScript_ShopOwner_4
# 76 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"

# 77 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
Route104_PrettyPetalFlowerShop_EventScript_ShopOwner_8:
# 78 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
# 35 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
# 79 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	call Route104_PrettyPetalFlowerShop_EventScript_ExplainBerries
# 80 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	goto Route104_PrettyPetalFlowerShop_EventScript_ShopOwner_7
# 81 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"

# 82 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
Route104_PrettyPetalFlowerShop_EventScript_ShopOwner_11:
# 83 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
# 38 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
# 84 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	call Route104_PrettyPetalFlowerShop_EventScript_DontExplainBerries
# 85 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	goto Route104_PrettyPetalFlowerShop_EventScript_ShopOwner_10
# 86 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"

# 87 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"

# 88 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
Route104_PrettyPetalFlowerShop_EventScript_AlreadyMet::
# 89 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
# 45 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
# 90 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	msgbox Route104_PrettyPetalFlowerShop_Text_LearnAboutBerries, MSGBOX_YESNO
# 91 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
# 46 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
# 92 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	compare VAR_RESULT, YES
# 93 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	goto_if_eq Route104_PrettyPetalFlowerShop_EventScript_AlreadyMet_2
# 94 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
Route104_PrettyPetalFlowerShop_EventScript_AlreadyMet_1:
# 95 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
# 49 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
# 96 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	compare VAR_RESULT, NO
# 97 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	goto_if_eq Route104_PrettyPetalFlowerShop_EventScript_AlreadyMet_5
# 98 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
Route104_PrettyPetalFlowerShop_EventScript_AlreadyMet_4:
# 99 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
# 52 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
# 100 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	release
# 101 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	end
# 102 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"

# 103 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
Route104_PrettyPetalFlowerShop_EventScript_AlreadyMet_2:
# 104 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
# 47 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
# 105 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	call Route104_PrettyPetalFlowerShop_EventScript_ExplainBerries
# 106 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	goto Route104_PrettyPetalFlowerShop_EventScript_AlreadyMet_1
# 107 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"

# 108 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
Route104_PrettyPetalFlowerShop_EventScript_AlreadyMet_5:
# 109 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
# 50 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
# 110 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	call Route104_PrettyPetalFlowerShop_EventScript_DontExplainBerries
# 111 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	goto Route104_PrettyPetalFlowerShop_EventScript_AlreadyMet_4
# 112 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"

# 113 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"

# 114 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
Route104_PrettyPetalFlowerShop_EventScript_ExplainBerries::
# 115 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
# 57 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
# 116 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	msgbox Route104_PrettyPetalFlowerShop_Text_BerriesExplanation, MSGBOX_DEFAULT
# 117 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	return
# 118 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"

# 119 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"

# 120 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
Route104_PrettyPetalFlowerShop_EventScript_DontExplainBerries::
# 121 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
# 62 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
# 122 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	msgbox Route104_PrettyPetalFlowerShop_Text_FlowersBringHappiness, MSGBOX_DEFAULT
# 123 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	return
# 124 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"

# 125 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"

# 126 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
Route104_PrettyPetalFlowerShop_EventScript_SellDecorations::
# 127 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
# 67 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
# 128 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	message gText_PlayerWhatCanIDoForYou
# 129 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
# 68 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
# 130 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	waitmessage
# 131 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
# 69 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
# 132 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	pokemartdecoration2 Route104_PrettyPetalFlowerShop_Pokemart_Plants
# 133 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
# 70 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
# 134 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 135 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
# 71 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
# 136 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	release
# 137 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	end
# 138 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"

# 139 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"

# 140 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
Route104_PrettyPetalFlowerShop_Pokemart_Plants::
# 141 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
# 76 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
# 142 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	pokemartlistend
# 143 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	return
# 144 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"

# 145 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"

# 146 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
Route104_PrettyPetalFlowerShop_EventScript_WailmerPailGirl::
# 147 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
# 80 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
# 148 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	lock
# 149 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
# 81 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
# 150 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	faceplayer
# 151 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
# 82 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
# 152 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	goto_if_unset FLAG_RECEIVED_WAILMER_PAIL, Route104_PrettyPetalFlowerShop_EventScript_WailmerPailGirl_2
# 153 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
Route104_PrettyPetalFlowerShop_EventScript_WailmerPailGirl_1:
# 154 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
# 85 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
# 155 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	msgbox Route104_PrettyPetalFlowerShop_Text_WailmerPailExplanation, MSGBOX_DEFAULT
# 156 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
# 86 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
# 157 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	release
# 158 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	end
# 159 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"

# 160 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
Route104_PrettyPetalFlowerShop_EventScript_WailmerPailGirl_2:
# 161 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
# 83 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
# 162 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	goto Route104_PrettyPetalFlowerShop_EventScript_GiveWailmerPail
# 163 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	goto Route104_PrettyPetalFlowerShop_EventScript_WailmerPailGirl_1
# 164 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"

# 165 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"

# 166 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
Route104_PrettyPetalFlowerShop_EventScript_GiveWailmerPail::
# 167 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
# 91 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
# 168 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	msgbox Route104_PrettyPetalFlowerShop_Text_YouCanHaveThis, MSGBOX_DEFAULT
# 169 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
# 92 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
# 170 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	giveitem ITEM_WAILMER_PAIL
# 171 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
# 93 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
# 172 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	compare VAR_RESULT, FALSE
# 173 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	goto_if_eq Route104_PrettyPetalFlowerShop_EventScript_GiveWailmerPail_2
# 174 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
Route104_PrettyPetalFlowerShop_EventScript_GiveWailmerPail_1:
# 175 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
# 96 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
# 176 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	msgbox Route104_PrettyPetalFlowerShop_Text_WailmerPailExplanation, MSGBOX_DEFAULT
# 177 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
# 97 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
# 178 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	setflag FLAG_RECEIVED_WAILMER_PAIL
# 179 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
# 98 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
# 180 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	release
# 181 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	end
# 182 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"

# 183 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
Route104_PrettyPetalFlowerShop_EventScript_GiveWailmerPail_2:
# 184 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
# 94 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
# 185 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
# 186 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	goto Route104_PrettyPetalFlowerShop_EventScript_GiveWailmerPail_1
# 187 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"

# 188 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"

# 189 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
Route104_PrettyPetalFlowerShop_EventScript_RandomBerryGirl::
# 190 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
# 103 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
# 191 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	lock
# 192 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
# 104 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
# 193 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	faceplayer
# 194 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
# 105 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
# 195 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	dotimebasedevents
# 196 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
# 106 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
# 197 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	goto_if_set FLAG_DAILY_FLOWER_SHOP_RECEIVED_BERRY, Route104_PrettyPetalFlowerShop_EventScript_RandomBerryGirl_2
# 198 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
Route104_PrettyPetalFlowerShop_EventScript_RandomBerryGirl_1:
# 199 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
# 109 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
# 200 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	msgbox Route104_PrettyPetalFlowerShop_Text_ImGrowingFlowers, MSGBOX_DEFAULT
# 201 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
# 110 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
# 202 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	random 8
# 203 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
# 111 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
# 204 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	addvar VAR_RESULT, FIRST_BERRY_INDEX
# 205 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
# 112 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
# 206 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	giveitem VAR_RESULT
# 207 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
# 113 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
# 208 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	compare VAR_RESULT, 0
# 209 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	goto_if_eq Route104_PrettyPetalFlowerShop_EventScript_RandomBerryGirl_5
# 210 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
Route104_PrettyPetalFlowerShop_EventScript_RandomBerryGirl_4:
# 211 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
# 116 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
# 212 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	setflag FLAG_DAILY_FLOWER_SHOP_RECEIVED_BERRY
# 213 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
# 117 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
# 214 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	msgbox Route104_PrettyPetalFlowerShop_Text_MachineMixesBerries, MSGBOX_DEFAULT
# 215 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
# 118 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
# 216 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	release
# 217 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	end
# 218 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"

# 219 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
Route104_PrettyPetalFlowerShop_EventScript_RandomBerryGirl_2:
# 220 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
# 107 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
# 221 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	goto Route104_PrettyPetalFlowerShop_EventScript_AlreadyReceivedBerry
# 222 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	goto Route104_PrettyPetalFlowerShop_EventScript_RandomBerryGirl_1
# 223 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"

# 224 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
Route104_PrettyPetalFlowerShop_EventScript_RandomBerryGirl_5:
# 225 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
# 114 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
# 226 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
# 227 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	goto Route104_PrettyPetalFlowerShop_EventScript_RandomBerryGirl_4
# 228 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"

# 229 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"

# 230 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
Route104_PrettyPetalFlowerShop_EventScript_AlreadyReceivedBerry::
# 231 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
# 123 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
# 232 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	msgbox Route104_PrettyPetalFlowerShop_Text_MachineMixesBerries, MSGBOX_DEFAULT
# 233 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
# 124 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
# 234 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	release
# 235 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	end
