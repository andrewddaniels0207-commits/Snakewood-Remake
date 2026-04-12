TwoIsland_Frlg_MapScripts::
# 2 "data/maps/TwoIsland_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, TwoIsland_OnTransition
	.byte 0


TwoIsland_OnTransition::
# 6 "data/maps/TwoIsland_Frlg/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_TWO_ISLAND
# 7 "data/maps/TwoIsland_Frlg/scripts.pory"
	setflag FLAG_VISITED_TWO_ISLAND
# 8 "data/maps/TwoIsland_Frlg/scripts.pory"
	call TwoIsland_EventScript_SetShopState
	end


TwoIsland_EventScript_SetShopState::
# 13 "data/maps/TwoIsland_Frlg/scripts.pory"
	goto_if_set FLAG_IS_CHAMPION, TwoIsland_EventScript_SetShopState_2
TwoIsland_EventScript_SetShopState_1:
# 16 "data/maps/TwoIsland_Frlg/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, TwoIsland_EventScript_SetShopState_5
TwoIsland_EventScript_SetShopState_4:
# 19 "data/maps/TwoIsland_Frlg/scripts.pory"
	goto_if_set FLAG_RESCUED_LOSTELLE, TwoIsland_EventScript_SetShopState_8
TwoIsland_EventScript_SetShopState_7:
# 22 "data/maps/TwoIsland_Frlg/scripts.pory"
	goto TwoIsland_EventScript_SetShopStateDefault
	end

TwoIsland_EventScript_SetShopState_2:
# 14 "data/maps/TwoIsland_Frlg/scripts.pory"
	goto TwoIsland_EventScript_SetShopStateAfterHoennLink
	goto TwoIsland_EventScript_SetShopState_1

TwoIsland_EventScript_SetShopState_5:
# 17 "data/maps/TwoIsland_Frlg/scripts.pory"
	goto TwoIsland_EventScript_SetShopStateAfterChampion
	goto TwoIsland_EventScript_SetShopState_4

TwoIsland_EventScript_SetShopState_8:
# 20 "data/maps/TwoIsland_Frlg/scripts.pory"
	goto TwoIsland_EventScript_SetShopStateAfterLostelleRescue
	goto TwoIsland_EventScript_SetShopState_7


TwoIsland_EventScript_SetShopStateAfterHoennLink::
# 27 "data/maps/TwoIsland_Frlg/scripts.pory"
	goto_if_unset FLAG_TWO_ISLAND_SHOP_INTRODUCED, TwoIsland_EventScript_SetShopStateAfterHoennLink_2
TwoIsland_EventScript_SetShopStateAfterHoennLink_1:
# 30 "data/maps/TwoIsland_Frlg/scripts.pory"
	goto_if_unset FLAG_TWO_ISLAND_SHOP_EXPANDED_1, TwoIsland_EventScript_SetShopStateAfterHoennLink_5
TwoIsland_EventScript_SetShopStateAfterHoennLink_4:
# 33 "data/maps/TwoIsland_Frlg/scripts.pory"
	goto_if_unset FLAG_TWO_ISLAND_SHOP_EXPANDED_2, TwoIsland_EventScript_SetShopStateAfterHoennLink_8
TwoIsland_EventScript_SetShopStateAfterHoennLink_7:
# 36 "data/maps/TwoIsland_Frlg/scripts.pory"
	goto TwoIsland_EventScript_SetShopExpanded3
	end

TwoIsland_EventScript_SetShopStateAfterHoennLink_2:
# 28 "data/maps/TwoIsland_Frlg/scripts.pory"
	goto TwoIsland_EventScript_SetShopInitial
	goto TwoIsland_EventScript_SetShopStateAfterHoennLink_1

TwoIsland_EventScript_SetShopStateAfterHoennLink_5:
# 31 "data/maps/TwoIsland_Frlg/scripts.pory"
	goto TwoIsland_EventScript_SetShopExpanded1
	goto TwoIsland_EventScript_SetShopStateAfterHoennLink_4

TwoIsland_EventScript_SetShopStateAfterHoennLink_8:
# 34 "data/maps/TwoIsland_Frlg/scripts.pory"
	goto TwoIsland_EventScript_SetShopExpanded2
	goto TwoIsland_EventScript_SetShopStateAfterHoennLink_7


TwoIsland_EventScript_SetShopStateAfterChampion::
# 41 "data/maps/TwoIsland_Frlg/scripts.pory"
	goto_if_unset FLAG_TWO_ISLAND_SHOP_INTRODUCED, TwoIsland_EventScript_SetShopStateAfterChampion_2
TwoIsland_EventScript_SetShopStateAfterChampion_1:
# 44 "data/maps/TwoIsland_Frlg/scripts.pory"
	goto_if_unset FLAG_RESCUED_LOSTELLE, TwoIsland_EventScript_SetShopStateAfterChampion_5
TwoIsland_EventScript_SetShopStateAfterChampion_4:
# 47 "data/maps/TwoIsland_Frlg/scripts.pory"
	goto_if_unset FLAG_TWO_ISLAND_SHOP_EXPANDED_1, TwoIsland_EventScript_SetShopStateAfterChampion_8
TwoIsland_EventScript_SetShopStateAfterChampion_7:
# 50 "data/maps/TwoIsland_Frlg/scripts.pory"
	goto TwoIsland_EventScript_SetShopExpanded2
	end

TwoIsland_EventScript_SetShopStateAfterChampion_2:
# 42 "data/maps/TwoIsland_Frlg/scripts.pory"
	goto TwoIsland_EventScript_SetShopInitial
	goto TwoIsland_EventScript_SetShopStateAfterChampion_1

TwoIsland_EventScript_SetShopStateAfterChampion_5:
# 45 "data/maps/TwoIsland_Frlg/scripts.pory"
	goto TwoIsland_EventScript_SetShopInitial
	goto TwoIsland_EventScript_SetShopStateAfterChampion_4

TwoIsland_EventScript_SetShopStateAfterChampion_8:
# 48 "data/maps/TwoIsland_Frlg/scripts.pory"
	goto TwoIsland_EventScript_SetShopExpanded1
	goto TwoIsland_EventScript_SetShopStateAfterChampion_7


TwoIsland_EventScript_SetShopStateAfterLostelleRescue::
# 55 "data/maps/TwoIsland_Frlg/scripts.pory"
	goto_if_unset FLAG_TWO_ISLAND_SHOP_INTRODUCED, TwoIsland_EventScript_SetShopStateAfterLostelleRescue_2
TwoIsland_EventScript_SetShopStateAfterLostelleRescue_1:
# 58 "data/maps/TwoIsland_Frlg/scripts.pory"
	goto TwoIsland_EventScript_SetShopExpanded1
	end

TwoIsland_EventScript_SetShopStateAfterLostelleRescue_2:
# 56 "data/maps/TwoIsland_Frlg/scripts.pory"
	goto TwoIsland_EventScript_SetShopInitial
	goto TwoIsland_EventScript_SetShopStateAfterLostelleRescue_1


TwoIsland_EventScript_SetShopStateDefault::
# 63 "data/maps/TwoIsland_Frlg/scripts.pory"
	goto TwoIsland_EventScript_SetShopInitial
	end


TwoIsland_EventScript_SetShopInitial::
# 68 "data/maps/TwoIsland_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_TWO_ISLAND, 1
	return


TwoIsland_EventScript_SetShopExpanded1::
# 73 "data/maps/TwoIsland_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_TWO_ISLAND, 2
# 74 "data/maps/TwoIsland_Frlg/scripts.pory"
	clearflag FLAG_HIDE_TWO_ISLAND_WOMAN
	return


TwoIsland_EventScript_SetShopExpanded2::
# 79 "data/maps/TwoIsland_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_TWO_ISLAND, 3
# 80 "data/maps/TwoIsland_Frlg/scripts.pory"
	clearflag FLAG_HIDE_TWO_ISLAND_BEAUTY
	return


TwoIsland_EventScript_SetShopExpanded3::
# 85 "data/maps/TwoIsland_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_TWO_ISLAND, 4
# 86 "data/maps/TwoIsland_Frlg/scripts.pory"
	clearflag FLAG_HIDE_TWO_ISLAND_SUPER_NERD
	return


TwoIsland_EventScript_Clerk::
# 91 "data/maps/TwoIsland_Frlg/scripts.pory"
	lock
# 92 "data/maps/TwoIsland_Frlg/scripts.pory"
	faceplayer
# 93 "data/maps/TwoIsland_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_TWO_ISLAND, 4
	goto_if_eq TwoIsland_EventScript_Clerk_2
TwoIsland_EventScript_Clerk_1:
# 96 "data/maps/TwoIsland_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_TWO_ISLAND, 3
	goto_if_eq TwoIsland_EventScript_Clerk_5
TwoIsland_EventScript_Clerk_4:
# 99 "data/maps/TwoIsland_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_TWO_ISLAND, 2
	goto_if_eq TwoIsland_EventScript_Clerk_8
TwoIsland_EventScript_Clerk_7:
# 102 "data/maps/TwoIsland_Frlg/scripts.pory"
	goto TwoIsland_EventScript_ClerkShopInitial
	end

TwoIsland_EventScript_Clerk_2:
# 94 "data/maps/TwoIsland_Frlg/scripts.pory"
	goto TwoIsland_EventScript_ClerkShopExpanded3
	goto TwoIsland_EventScript_Clerk_1

TwoIsland_EventScript_Clerk_5:
# 97 "data/maps/TwoIsland_Frlg/scripts.pory"
	goto TwoIsland_EventScript_ClerkShopExpanded2
	goto TwoIsland_EventScript_Clerk_4

TwoIsland_EventScript_Clerk_8:
# 100 "data/maps/TwoIsland_Frlg/scripts.pory"
	goto TwoIsland_EventScript_ClerkShopExpanded1
	goto TwoIsland_EventScript_Clerk_7


TwoIsland_EventScript_ClerkShopExpanded3::
# 107 "data/maps/TwoIsland_Frlg/scripts.pory"
	goto_if_set FLAG_TWO_ISLAND_SHOP_EXPANDED_3, TwoIsland_EventScript_ClerkShopExpanded3_2
TwoIsland_EventScript_ClerkShopExpanded3_1:
# 110 "data/maps/TwoIsland_Frlg/scripts.pory"
	setflag FLAG_TWO_ISLAND_SHOP_EXPANDED_3
# 111 "data/maps/TwoIsland_Frlg/scripts.pory"
	message TwoIsland_Text_BringingItemsFromDistantLands
# 112 "data/maps/TwoIsland_Frlg/scripts.pory"
	waitmessage
# 113 "data/maps/TwoIsland_Frlg/scripts.pory"
	goto TwoIsland_EventScript_ShopExpanded3
	end

TwoIsland_EventScript_ClerkShopExpanded3_2:
# 108 "data/maps/TwoIsland_Frlg/scripts.pory"
	goto TwoIsland_EventScript_ClerkShopSkipIntro
	goto TwoIsland_EventScript_ClerkShopExpanded3_1


TwoIsland_EventScript_ClerkShopExpanded2::
# 118 "data/maps/TwoIsland_Frlg/scripts.pory"
	goto_if_set FLAG_TWO_ISLAND_SHOP_EXPANDED_2, TwoIsland_EventScript_ClerkShopExpanded2_2
TwoIsland_EventScript_ClerkShopExpanded2_1:
# 121 "data/maps/TwoIsland_Frlg/scripts.pory"
	setflag FLAG_TWO_ISLAND_SHOP_EXPANDED_2
# 122 "data/maps/TwoIsland_Frlg/scripts.pory"
	message TwoIsland_Text_HopeYouGiveItYourBest
# 123 "data/maps/TwoIsland_Frlg/scripts.pory"
	waitmessage
# 124 "data/maps/TwoIsland_Frlg/scripts.pory"
	goto TwoIsland_EventScript_ShopExpanded2
	end

TwoIsland_EventScript_ClerkShopExpanded2_2:
# 119 "data/maps/TwoIsland_Frlg/scripts.pory"
	goto TwoIsland_EventScript_ClerkShopSkipIntro
	goto TwoIsland_EventScript_ClerkShopExpanded2_1


TwoIsland_EventScript_ClerkShopExpanded1::
# 129 "data/maps/TwoIsland_Frlg/scripts.pory"
	goto_if_set FLAG_TWO_ISLAND_SHOP_EXPANDED_1, TwoIsland_EventScript_ClerkShopExpanded1_2
TwoIsland_EventScript_ClerkShopExpanded1_1:
# 132 "data/maps/TwoIsland_Frlg/scripts.pory"
	setflag FLAG_TWO_ISLAND_SHOP_EXPANDED_1
# 133 "data/maps/TwoIsland_Frlg/scripts.pory"
	message TwoIsland_Text_AddedMerchandiseForLostelle
# 134 "data/maps/TwoIsland_Frlg/scripts.pory"
	waitmessage
# 135 "data/maps/TwoIsland_Frlg/scripts.pory"
	goto TwoIsland_EventScript_ShopExpanded1
	end

TwoIsland_EventScript_ClerkShopExpanded1_2:
# 130 "data/maps/TwoIsland_Frlg/scripts.pory"
	goto TwoIsland_EventScript_ClerkShopSkipIntro
	goto TwoIsland_EventScript_ClerkShopExpanded1_1


TwoIsland_EventScript_ClerkShopInitial::
# 140 "data/maps/TwoIsland_Frlg/scripts.pory"
	goto_if_set FLAG_TWO_ISLAND_SHOP_INTRODUCED, TwoIsland_EventScript_ClerkShopInitial_2
TwoIsland_EventScript_ClerkShopInitial_1:
# 143 "data/maps/TwoIsland_Frlg/scripts.pory"
	setflag FLAG_TWO_ISLAND_SHOP_INTRODUCED
# 144 "data/maps/TwoIsland_Frlg/scripts.pory"
	message TwoIsland_Text_WelcomeToShopMerchandiseLimited
# 145 "data/maps/TwoIsland_Frlg/scripts.pory"
	waitmessage
# 146 "data/maps/TwoIsland_Frlg/scripts.pory"
	goto TwoIsland_EventScript_ShopInitial
	end

TwoIsland_EventScript_ClerkShopInitial_2:
# 141 "data/maps/TwoIsland_Frlg/scripts.pory"
	goto TwoIsland_EventScript_ClerkShopSkipIntro
	goto TwoIsland_EventScript_ClerkShopInitial_1


TwoIsland_EventScript_ClerkShopSkipIntro::
# 151 "data/maps/TwoIsland_Frlg/scripts.pory"
	message gText_HowMayIServeYou
# 152 "data/maps/TwoIsland_Frlg/scripts.pory"
	waitmessage
# 153 "data/maps/TwoIsland_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_TWO_ISLAND, 4
	goto_if_eq TwoIsland_EventScript_ClerkShopSkipIntro_2
TwoIsland_EventScript_ClerkShopSkipIntro_1:
# 156 "data/maps/TwoIsland_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_TWO_ISLAND, 3
	goto_if_eq TwoIsland_EventScript_ClerkShopSkipIntro_5
TwoIsland_EventScript_ClerkShopSkipIntro_4:
# 159 "data/maps/TwoIsland_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_TWO_ISLAND, 2
	goto_if_eq TwoIsland_EventScript_ClerkShopSkipIntro_8
TwoIsland_EventScript_ClerkShopSkipIntro_7:
# 162 "data/maps/TwoIsland_Frlg/scripts.pory"
	goto TwoIsland_EventScript_ShopInitial
	end

TwoIsland_EventScript_ClerkShopSkipIntro_2:
# 154 "data/maps/TwoIsland_Frlg/scripts.pory"
	goto TwoIsland_EventScript_ShopExpanded3
	goto TwoIsland_EventScript_ClerkShopSkipIntro_1

TwoIsland_EventScript_ClerkShopSkipIntro_5:
# 157 "data/maps/TwoIsland_Frlg/scripts.pory"
	goto TwoIsland_EventScript_ShopExpanded2
	goto TwoIsland_EventScript_ClerkShopSkipIntro_4

TwoIsland_EventScript_ClerkShopSkipIntro_8:
# 160 "data/maps/TwoIsland_Frlg/scripts.pory"
	goto TwoIsland_EventScript_ShopExpanded1
	goto TwoIsland_EventScript_ClerkShopSkipIntro_7


TwoIsland_EventScript_ShopInitial::
# 167 "data/maps/TwoIsland_Frlg/scripts.pory"
	pokemart TwoIsland_Items_ShopInitial
# 168 "data/maps/TwoIsland_Frlg/scripts.pory"
	msgbox gText_PleaseComeAgain
# 169 "data/maps/TwoIsland_Frlg/scripts.pory"
	release
	end


TwoIsland_Items_ShopInitial::
# 174 "data/maps/TwoIsland_Frlg/scripts.pory"
	release
	end


TwoIsland_EventScript_ShopExpanded1::
# 179 "data/maps/TwoIsland_Frlg/scripts.pory"
	pokemart TwoIsland_Items_ShopExpanded1
# 180 "data/maps/TwoIsland_Frlg/scripts.pory"
	msgbox gText_PleaseComeAgain
# 181 "data/maps/TwoIsland_Frlg/scripts.pory"
	release
	end


TwoIsland_Items_ShopExpanded1::
# 186 "data/maps/TwoIsland_Frlg/scripts.pory"
	release
	end


TwoIsland_EventScript_ShopExpanded2::
# 191 "data/maps/TwoIsland_Frlg/scripts.pory"
	pokemart TwoIsland_Items_ShopExpanded2
# 192 "data/maps/TwoIsland_Frlg/scripts.pory"
	msgbox gText_PleaseComeAgain
# 193 "data/maps/TwoIsland_Frlg/scripts.pory"
	release
	end


TwoIsland_Items_ShopExpanded2::
# 198 "data/maps/TwoIsland_Frlg/scripts.pory"
	release
	end


TwoIsland_EventScript_ShopExpanded3::
# 203 "data/maps/TwoIsland_Frlg/scripts.pory"
	pokemart TwoIsland_Items_ShopExpanded3
# 204 "data/maps/TwoIsland_Frlg/scripts.pory"
	msgbox gText_PleaseComeAgain
# 205 "data/maps/TwoIsland_Frlg/scripts.pory"
	release
	end


TwoIsland_Items_ShopExpanded3::
# 210 "data/maps/TwoIsland_Frlg/scripts.pory"
	release
	end


TwoIsland_EventScript_Sailor::
# 215 "data/maps/TwoIsland_Frlg/scripts.pory"
	msgbox TwoIsland_Text_FellowMovedFromCeladonCity, MSGBOX_NPC
	end


TwoIsland_EventScript_Woman::
# 220 "data/maps/TwoIsland_Frlg/scripts.pory"
	msgbox TwoIsland_Text_ShopkeepersBrotherWorksGameCorner, MSGBOX_NPC
	end


TwoIsland_EventScript_Beauty::
# 225 "data/maps/TwoIsland_Frlg/scripts.pory"
	lock
# 226 "data/maps/TwoIsland_Frlg/scripts.pory"
	faceplayer
# 227 "data/maps/TwoIsland_Frlg/scripts.pory"
	famechecker FAMECHECKER_BRUNO, 4
# 228 "data/maps/TwoIsland_Frlg/scripts.pory"
	msgbox TwoIsland_Text_BrunoCameToIslandWhileBack
# 229 "data/maps/TwoIsland_Frlg/scripts.pory"
	release
	end


TwoIsland_EventScript_SuperNerd::
# 234 "data/maps/TwoIsland_Frlg/scripts.pory"
	msgbox TwoIsland_Text_BuyRareItemsHere, MSGBOX_NPC
	end


TwoIsland_EventScript_Boy::
# 239 "data/maps/TwoIsland_Frlg/scripts.pory"
	msgbox TwoIsland_Text_OldWomanLivesOutOnCape, MSGBOX_NPC
	end


TwoIsland_EventScript_LittleBoy::
# 244 "data/maps/TwoIsland_Frlg/scripts.pory"
	msgbox TwoIsland_Text_HaveYouTriedJumpingGame, MSGBOX_NPC
	end


TwoIsland_EventScript_IslandSign::
# 249 "data/maps/TwoIsland_Frlg/scripts.pory"
	msgbox TwoIsland_Text_IslandSign, MSGBOX_SIGN
	end


TwoIsland_EventScript_JoyfulGameCornerSign::
# 254 "data/maps/TwoIsland_Frlg/scripts.pory"
	msgbox TwoIsland_Text_JoyfulGameCornerSign, MSGBOX_SIGN
	end


TwoIsland_EventScript_FastCurrentSign::
# 259 "data/maps/TwoIsland_Frlg/scripts.pory"
	msgbox TwoIsland_Text_DangerFastCurrent, MSGBOX_SIGN
	end


TwoIsland_Text_IslandSign::
# 263 "data/maps/TwoIsland_Frlg/scripts.pory"
	.string "TWO ISLAND\n"
	.string "Boon Island for Two$"

TwoIsland_Text_JoyfulGameCornerSign::
# 268 "data/maps/TwoIsland_Frlg/scripts.pory"
	.string "Skip & Chomp!\n"
	.string "Joyful GAME CORNER$"

TwoIsland_Text_DangerFastCurrent::
# 273 "data/maps/TwoIsland_Frlg/scripts.pory"
	.string "DANGER! FAST CURRENT!\n"
	.string "Fishing and surfing prohibited!$"

TwoIsland_Text_WelcomeToShopMerchandiseLimited::
# 278 "data/maps/TwoIsland_Frlg/scripts.pory"
	.string "Oh!\n"
	.string "Hello, welcome to my shop!\p"
	.string "We've only opened up recently.\p"
	.string "Our merchandise is limited, but I\n"
	.string "hope we can serve your needs.$"

TwoIsland_Text_AddedMerchandiseForLostelle::
# 286 "data/maps/TwoIsland_Frlg/scripts.pory"
	.string "I can't tell you how grateful I am\n"
	.string "for your rescue of LOSTELLE.\p"
	.string "Thanks to your feat, the people of\n"
	.string "THREE ISLAND have changed their\l"
	.string "attitudes about KANTO people.\p"
	.string "And, I'm from KANTO, you see.\p"
	.string "The people of THREE ISLAND\n"
	.string "helped me add to my merchandise.$"

TwoIsland_Text_HopeYouGiveItYourBest::
# 297 "data/maps/TwoIsland_Frlg/scripts.pory"
	.string "Hi! I'm giving it my best here.\n"
	.string "I hope you do too, {PLAYER}.$"

TwoIsland_Text_BringingItemsFromDistantLands::
# 302 "data/maps/TwoIsland_Frlg/scripts.pory"
	.string "Oh, hello, {PLAYER}!\n"
	.string "Welcome!\p"
	.string "I've started bringing in items from\n"
	.string "distant lands.\p"
	.string "I've got some rare items in, too.\n"
	.string "Please have a look!$"

TwoIsland_Text_FellowMovedFromCeladonCity::
# 311 "data/maps/TwoIsland_Frlg/scripts.pory"
	.string "That fellow there, he moved here\n"
	.string "from CELADON CITY.\p"
	.string "He started up a shop with his\n"
	.string "younger brother.\p"
	.string "You have to wonder if he knew what\n"
	.string "he was getting into.$"

TwoIsland_Text_ShopkeepersBrotherWorksGameCorner::
# 320 "data/maps/TwoIsland_Frlg/scripts.pory"
	.string "The shopkeeper's brother took\n"
	.string "a job at the GAME CORNER.\p"
	.string "He's trying to pull together money\n"
	.string "so they can buy more merchandise.$"

TwoIsland_Text_BrunoCameToIslandWhileBack::
# 327 "data/maps/TwoIsland_Frlg/scripts.pory"
	.string "Listen, listen.\n"
	.string "Did you know?\p"
	.string "A famous TRAINER came to the\n"
	.string "ISLAND a little while back.\p"
	.string "He's one of the ELITE FOUR.\n"
	.string "His name is BRUNO.\p"
	.string "He went away disappointed when he\n"
	.string "found out that they were all sold\l"
	.string "out of Rage Candybars.$"

TwoIsland_Text_BuyRareItemsHere::
# 339 "data/maps/TwoIsland_Frlg/scripts.pory"
	.string "The discerning TRAINER knows to\n"
	.string "buy rare items here!$"

TwoIsland_Text_OldWomanLivesOutOnCape::
# 344 "data/maps/TwoIsland_Frlg/scripts.pory"
	.string "There's an old woman who lives in\n"
	.string "a cottage out on the cape.\p"
	.string "She gives the eye to POKéMON.\n"
	.string "It's a bit unnerving.$"

TwoIsland_Text_HaveYouTriedJumpingGame::
# 351 "data/maps/TwoIsland_Frlg/scripts.pory"
	.string "Boing! Boing!\n"
	.string "Have you tried the jumping game?\p"
	.string "The POKéMON you can enter…\n"
	.string "Boing!\p"
	.string "Some go boing!\p"
	.string "And some go boooooooing!\p"
	.string "Did you know that?\n"
	.string "Boing!$"
