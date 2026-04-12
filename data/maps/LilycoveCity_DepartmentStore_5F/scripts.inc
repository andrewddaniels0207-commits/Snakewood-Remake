LilycoveCity_DepartmentStore_5F_MapScripts::
# 2 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, LilycoveCity_DepartmentStore_5F_OnWarp
	.byte 0


# 5 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"

# 6 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
LilycoveCity_DepartmentStore_5F_OnWarp:
# 7 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	map_script_2 VAR_SOOTOPOLIS_CITY_STATE, 1, LilycoveCity_DepartmentStore_5F_EventScript_BlockRoofStairs
# 8 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	map_script_2 VAR_SOOTOPOLIS_CITY_STATE, 2, LilycoveCity_DepartmentStore_5F_EventScript_BlockRoofStairs
# 9 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	map_script_2 VAR_SOOTOPOLIS_CITY_STATE, 3, LilycoveCity_DepartmentStore_5F_EventScript_BlockRoofStairs
# 10 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte 0

LilycoveCity_DepartmentStore_5F_EventScript_BlockRoofStairs::
# 15 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	setobjectxy LOCALID_DEPARTMENT_STORE_STAIRS_WOMAN, 16, 2
# 16 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	turnobject LOCALID_DEPARTMENT_STORE_STAIRS_WOMAN, DIR_NORTH
	end


LilycoveCity_DepartmentStore_5F_EventScript_ClerkFarLeft::
# 21 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	lock
# 22 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	faceplayer
# 23 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	message gText_HowMayIServeYou
# 24 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	waitmessage
# 25 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	pokemartdecoration2 LilycoveCity_DepartmentStore_5F_Pokemart_Dolls
# 26 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 27 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	release
	end


LilycoveCity_DepartmentStore_5F_Pokemart_Dolls::
# 32 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	pokemartlistend
	return


LilycoveCity_DepartmentStore_5F_EventScript_ClerkMidLeft::
# 36 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	lock
# 37 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	faceplayer
# 38 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	message gText_HowMayIServeYou
# 39 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	waitmessage
# 40 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	pokemartdecoration2 LilycoveCity_DepartmentStore_5F_Pokemart_Cushions
# 41 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 42 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	release
	end


LilycoveCity_DepartmentStore_5F_Pokemart_Cushions::
# 47 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	pokemartlistend
	return


LilycoveCity_DepartmentStore_5F_EventScript_ClerkMidRight::
# 51 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	lock
# 52 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	faceplayer
# 53 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	message gText_HowMayIServeYou
# 54 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	waitmessage
# 55 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	pokemartdecoration2 LilycoveCity_DepartmentStore_5F_Pokemart_Posters
# 56 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 57 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	release
	end


LilycoveCity_DepartmentStore_5F_Pokemart_Posters::
# 62 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	pokemartlistend
	return


LilycoveCity_DepartmentStore_5F_EventScript_ClerkFarRight::
# 66 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	lock
# 67 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	faceplayer
# 68 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	message gText_HowMayIServeYou
# 69 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	waitmessage
# 70 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	pokemartdecoration2 LilycoveCity_DepartmentStore_5F_Pokemart_Mats
# 71 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 72 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	release
	end


LilycoveCity_DepartmentStore_5F_Pokemart_Mats::
# 77 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	pokemartlistend
	return


LilycoveCity_DepartmentStore_5F_EventScript_PokefanF::
# 81 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_5F_Text_PlaceFullOfCuteDolls, MSGBOX_NPC
	end


LilycoveCity_DepartmentStore_5F_EventScript_Woman::
# 86 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	lockall
# 87 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	applymovement LOCALID_DEPARTMENT_STORE_STAIRS_WOMAN, Common_Movement_FacePlayer
# 88 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	waitmovement 0
# 89 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	compare VAR_SOOTOPOLIS_CITY_STATE, 0
	goto_if_eq LilycoveCity_DepartmentStore_5F_EventScript_Woman_2
LilycoveCity_DepartmentStore_5F_EventScript_Woman_1:
# 92 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	compare VAR_SOOTOPOLIS_CITY_STATE, 4
	goto_if_ge LilycoveCity_DepartmentStore_5F_EventScript_Woman_5
LilycoveCity_DepartmentStore_5F_EventScript_Woman_4:
# 95 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	goto LilycoveCity_DepartmentStore_5F_EventScript_WomanLegendaryWeather
	end

LilycoveCity_DepartmentStore_5F_EventScript_Woman_2:
# 90 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	goto LilycoveCity_DepartmentStore_5F_EventScript_WomanNormal
	goto LilycoveCity_DepartmentStore_5F_EventScript_Woman_1

LilycoveCity_DepartmentStore_5F_EventScript_Woman_5:
# 93 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	goto LilycoveCity_DepartmentStore_5F_EventScript_WomanNormal
	goto LilycoveCity_DepartmentStore_5F_EventScript_Woman_4


LilycoveCity_DepartmentStore_5F_EventScript_WomanNormal::
# 100 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_5F_Text_SellManyCuteMatsHere, MSGBOX_DEFAULT
# 101 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	closemessage
# 102 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	releaseall
	end


LilycoveCity_DepartmentStore_5F_EventScript_WomanLegendaryWeather::
# 107 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_5F_Text_ClosedRooftopForWeather, MSGBOX_DEFAULT
# 108 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	closemessage
# 109 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	applymovement LOCALID_DEPARTMENT_STORE_STAIRS_WOMAN, Common_Movement_WalkInPlaceFasterUp
# 110 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	waitmovement 0
# 111 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	releaseall
	end


LilycoveCity_DepartmentStore_5F_EventScript_LittleGirl::
# 116 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_5F_Text_GettingDollInsteadOfPokemon, MSGBOX_NPC
	end


LilycoveCity_DepartmentStore_5F_Text_PlaceFullOfCuteDolls::
# 120 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.string "This place is full of cute DOLLS.\p"
	.string "I should buy some for me, instead of\n"
	.string "just for my children.$"

LilycoveCity_DepartmentStore_5F_Text_GettingDollInsteadOfPokemon::
# 126 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.string "I'm not big enough to raise POKéMON,\n"
	.string "so I'm getting a cute DOLL instead.$"

LilycoveCity_DepartmentStore_5F_Text_SellManyCuteMatsHere::
# 131 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.string "They sell many cute MATS here.\p"
	.string "I wonder which one I should get?\n"
	.string "Maybe I'll buy them all…$"

LilycoveCity_DepartmentStore_5F_Text_ClosedRooftopForWeather::
# 137 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.string "I think they closed the rooftop\n"
	.string "because the weather is wild today.$"
