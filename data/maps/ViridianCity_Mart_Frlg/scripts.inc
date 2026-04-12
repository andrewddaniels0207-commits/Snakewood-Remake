# 1 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"

# 2 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
ViridianCity_Mart_Frlg_MapScripts::
# 3 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
# 2 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
# 4 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, ViridianCity_Mart_OnLoad
# 5 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
# 3 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
# 6 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, ViridianCity_Mart_Frlg_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 7 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
	.byte 0
# 8 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"

# 9 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
ViridianCity_Mart_Frlg_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 10 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
# 4 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
# 11 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
	map_script_2 VAR_MAP_SCENE_VIRIDIAN_CITY_MART, 0, ViridianCity_Mart_EventScript_ParcelScene
# 12 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
	.2byte 0
# 13 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"

# 14 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"

# 15 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
ViridianCity_Mart_OnLoad::
# 16 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
# 9 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
# 17 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
	goto_if_unset FLAG_SYS_POKEDEX_GET, ViridianCity_Mart_OnLoad_2
# 18 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
ViridianCity_Mart_OnLoad_1:
# 19 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
	end
# 20 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"

# 21 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
ViridianCity_Mart_OnLoad_2:
# 22 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
# 10 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
# 23 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
	goto ViridianCity_Mart_EventScript_HideQuestionnaire
# 24 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
	goto ViridianCity_Mart_OnLoad_1
# 25 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"

# 26 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"

# 27 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
ViridianCity_Mart_EventScript_HideQuestionnaire::
# 28 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
# 16 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
# 29 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
	setmetatile 1, 3, METATILE_Mart_CounterMid_Top, 1
# 30 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
# 17 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
# 31 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
	setmetatile 1, 4, METATILE_Mart_CounterMid_Bottom, 1
# 32 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
	end
# 33 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"

# 34 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"

# 35 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
ViridianCity_Mart_EventScript_ParcelScene::
# 36 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
# 22 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
# 37 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
	lockall
# 38 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
# 23 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
# 39 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 40 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
# 24 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
# 41 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
	applymovement LOCALID_VIRIDIAN_MART_CLERK, Common_Movement_WalkInPlaceFasterDown
# 42 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
# 25 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
# 43 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
	waitmovement 0
# 44 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
# 26 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
# 45 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
	msgbox ViridianCity_Mart_Text_YouCameFromPallet
# 46 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
# 27 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
# 47 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
	closemessage
# 48 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
# 28 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
# 49 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
	applymovement LOCALID_VIRIDIAN_MART_CLERK, ViridianCity_Mart_Movement_FacePlayer
# 50 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
# 29 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
# 51 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, ViridianCity_Mart_Movement_ApproachCounter
# 52 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
# 30 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
# 53 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
	waitmovement 0
# 54 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
# 31 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
# 55 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
	msgbox ViridianCity_Mart_Text_TakeThisToProfOak
# 56 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
# 32 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
# 57 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_VIRIDIAN_CITY_MART, 1
# 58 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
# 33 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
# 59 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
	giveitem_msg ViridianCity_Mart_Text_ReceivedOaksParcelFromClerk, ITEM_OAKS_PARCEL, 1, MUS_RG_OBTAIN_KEY_ITEM
# 60 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
# 34 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
# 61 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 5
# 62 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
# 35 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
# 63 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
	releaseall
# 64 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
	end
# 65 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"

# 66 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"

# 67 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
# 39 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
# 68 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
ViridianCity_Mart_Movement_ApproachCounter:
# 69 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
# 40 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
# 70 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
	walk_up
# 71 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
# 41 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
# 72 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
	walk_up
# 73 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
# 42 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
# 74 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
	walk_up
# 75 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
# 43 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
# 76 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
	walk_up
# 77 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
# 44 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
# 78 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
	walk_in_place_faster_left
# 79 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
# 45 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
# 80 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
	step_end
# 81 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"

# 82 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
# 48 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
# 83 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
ViridianCity_Mart_Movement_FacePlayer:
# 84 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
# 49 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
# 85 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
	delay_16
# 86 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
# 50 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
# 87 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
	delay_16
# 88 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
# 51 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
# 89 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
	delay_16
# 90 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
# 52 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
# 91 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
	delay_16
# 92 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
# 53 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
# 93 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
	walk_in_place_faster_right
# 94 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
# 54 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
# 95 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
	step_end
# 96 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"

# 97 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
ViridianCity_Mart_EventScript_Clerk::
# 98 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
# 58 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
# 99 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
	lock
# 100 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
# 59 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
# 101 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
	faceplayer
# 102 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
# 60 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
# 103 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_VIRIDIAN_CITY_MART, 1
# 104 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
	goto_if_eq ViridianCity_Mart_EventScript_Clerk_2
# 105 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
ViridianCity_Mart_EventScript_Clerk_1:
# 106 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
# 63 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
# 107 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
	message gText_HowMayIServeYou
# 108 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
# 64 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
# 109 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
	waitmessage
# 110 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
# 65 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
# 111 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
	pokemart ViridianCity_Mart_Items
# 112 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
# 66 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
# 113 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
	msgbox gText_PleaseComeAgain
# 114 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
# 67 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
# 115 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
	release
# 116 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
	end
# 117 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"

# 118 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
ViridianCity_Mart_EventScript_Clerk_2:
# 119 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
# 61 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
# 120 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
	goto ViridianCity_Mart_EventScript_SayHiToOak
# 121 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
	goto ViridianCity_Mart_EventScript_Clerk_1
# 122 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"

# 123 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"

# 124 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
ViridianCity_Mart_Items::
# 125 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
# 72 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
# 126 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
	release
# 127 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
	end
# 128 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"

# 129 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"

# 130 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
ViridianCity_Mart_EventScript_SayHiToOak::
# 131 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
# 77 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
# 132 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
	msgbox ViridianCity_Mart_Text_SayHiToOakForMe
# 133 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
# 78 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
# 134 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
	release
# 135 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
	end
# 136 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"

# 137 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"

# 138 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
ViridianCity_Mart_EventScript_Woman::
# 139 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
# 83 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
# 140 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
	msgbox ViridianCity_Mart_Text_ShopDoesGoodBusinessInAntidotes, MSGBOX_NPC
# 141 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
	end
# 142 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"

# 143 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"

# 144 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
ViridianCity_Mart_EventScript_Youngster::
# 145 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
# 88 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
# 146 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
	msgbox ViridianCity_Mart_Text_GotToBuySomePotions, MSGBOX_NPC
# 147 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
	end
# 148 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"

# 149 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"

# 150 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
ViridianCity_Mart_Text_YouCameFromPallet::
# 151 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
# 92 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
# 152 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
	.string "Hey!\n"
# 153 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
	.string "You came from PALLET TOWN?$"
# 154 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"

# 155 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
ViridianCity_Mart_Text_TakeThisToProfOak::
# 156 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
# 97 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
# 157 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
	.string "You know PROF. OAK, right?\p"
# 158 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
	.string "His order came in.\n"
# 159 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
	.string "Can I get you to take it to him?$"
# 160 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"

# 161 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
ViridianCity_Mart_Text_ReceivedOaksParcelFromClerk::
# 162 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
# 103 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
# 163 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
	.string "{PLAYER} received OAK'S PARCEL\n"
# 164 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
	.string "from the POKéMON MART clerk.$"
# 165 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"

# 166 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
ViridianCity_Mart_Text_SayHiToOakForMe::
# 167 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
# 108 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
# 168 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
	.string "Okay, thanks! Please say hi to\n"
# 169 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
	.string "PROF. OAK for me, too.$"
# 170 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"

# 171 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
ViridianCity_Mart_Text_ShopDoesGoodBusinessInAntidotes::
# 172 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
# 113 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
# 173 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
	.string "This shop does good business in\n"
# 174 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
	.string "ANTIDOTES, I've heard.$"
# 175 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"

# 176 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
ViridianCity_Mart_Text_GotToBuySomePotions::
# 177 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
# 118 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
# 178 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
	.string "I've got to buy some POTIONS.\p"
# 179 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
	.string "You never know when your POKéMON\n"
# 180 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
	.string "will need quick healing.$"
