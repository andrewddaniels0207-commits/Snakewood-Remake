FiveIsland_MemorialPillar_Frlg_MapScripts::
	.byte 0


FiveIsland_MemorialPillar_EventScript_MemorialMan::
# 4 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	lock
# 5 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	goto_if_set FLAG_GOT_TM42_AT_MEMORIAL_PILLAR, FiveIsland_MemorialPillar_EventScript_MemorialMan_2
FiveIsland_MemorialPillar_EventScript_MemorialMan_1:
# 8 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	goto_if_set FLAG_NO_ROOM_FOR_TM42_AT_MEMORIAL_PILLAR, FiveIsland_MemorialPillar_EventScript_MemorialMan_5
FiveIsland_MemorialPillar_EventScript_MemorialMan_4:
# 11 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	msgbox FiveIsland_MemorialPillar_Text_ScrubScrub
# 12 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	closemessage
# 13 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	applymovement LOCALID_MEMORIAL_MAN, Common_Movement_FacePlayer
# 14 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	waitmovement 0
# 15 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	delay 45
# 16 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	msgbox FiveIsland_MemorialPillar_Text_YourMonsLookHealthy
# 17 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	applymovement LOCALID_MEMORIAL_MAN, Common_Movement_WalkInPlaceFasterUp
# 18 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	waitmovement 0
# 19 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	msgbox FiveIsland_MemorialPillar_Text_ThisIsWhereIBuriedMyOnix
# 20 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	release
	end

FiveIsland_MemorialPillar_EventScript_MemorialMan_2:
# 6 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	goto FiveIsland_MemorialPillar_EventScript_AlreadyGotTM42
	goto FiveIsland_MemorialPillar_EventScript_MemorialMan_1

FiveIsland_MemorialPillar_EventScript_MemorialMan_5:
# 9 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	goto FiveIsland_MemorialPillar_EventScript_ReturnedForTM42
	goto FiveIsland_MemorialPillar_EventScript_MemorialMan_4


FiveIsland_MemorialPillar_EventScript_AlreadyGotTM42::
# 25 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	msgbox FiveIsland_MemorialPillar_Text_ScrubScrubTectonix
# 26 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	release
	end


FiveIsland_MemorialPillar_EventScript_ReturnedForTM42::
# 31 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	msgbox FiveIsland_MemorialPillar_Text_StillHaveThingAsMyThanks
# 32 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	giveitem ITEM_TM42
# 33 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq FiveIsland_MemorialPillar_EventScript_ReturnedForTM42_2
FiveIsland_MemorialPillar_EventScript_ReturnedForTM42_1:
# 36 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	call FiveIsland_MemorialPillar_EventScript_ReceivedTM42
# 37 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	release
	end

FiveIsland_MemorialPillar_EventScript_ReturnedForTM42_2:
# 34 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	goto FiveIsland_MemorialPillar_EventScript_NoRoomForTM42
	goto FiveIsland_MemorialPillar_EventScript_ReturnedForTM42_1


FiveIsland_MemorialPillar_EventScript_Memorial::
# 42 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	lockall
# 43 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	goto_if_set FLAG_GOT_TM42_AT_MEMORIAL_PILLAR, FiveIsland_MemorialPillar_EventScript_Memorial_2
FiveIsland_MemorialPillar_EventScript_Memorial_1:
# 46 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	goto_if_set FLAG_NO_ROOM_FOR_TM42_AT_MEMORIAL_PILLAR, FiveIsland_MemorialPillar_EventScript_Memorial_5
FiveIsland_MemorialPillar_EventScript_Memorial_4:
# 49 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	msgbox FiveIsland_MemorialPillar_Text_HereLiesTectonixLemonadeOffering
# 50 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	checkitem ITEM_LEMONADE
# 51 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq FiveIsland_MemorialPillar_EventScript_Memorial_8
FiveIsland_MemorialPillar_EventScript_Memorial_7:
# 54 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	releaseall
	end

FiveIsland_MemorialPillar_EventScript_Memorial_2:
# 44 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	goto FiveIsland_MemorialPillar_EventScript_MemorialLemonadeAlreadyPlaced
	goto FiveIsland_MemorialPillar_EventScript_Memorial_1

FiveIsland_MemorialPillar_EventScript_Memorial_5:
# 47 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	goto FiveIsland_MemorialPillar_EventScript_MemorialLemonadeAlreadyPlaced
	goto FiveIsland_MemorialPillar_EventScript_Memorial_4

FiveIsland_MemorialPillar_EventScript_Memorial_8:
# 52 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	goto FiveIsland_MemorialPillar_EventScript_AskPlaceLemonade
	goto FiveIsland_MemorialPillar_EventScript_Memorial_7


FiveIsland_MemorialPillar_EventScript_AskPlaceLemonade::
# 59 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	msgbox FiveIsland_MemorialPillar_Text_LeaveAnotherLemonadeOffering, MSGBOX_YESNO
# 60 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq FiveIsland_MemorialPillar_EventScript_AskPlaceLemonade_2
FiveIsland_MemorialPillar_EventScript_AskPlaceLemonade_1:
# 63 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	releaseall
	end

FiveIsland_MemorialPillar_EventScript_AskPlaceLemonade_2:
# 61 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	goto FiveIsland_MemorialPillar_EventScript_PlaceLemonade
	goto FiveIsland_MemorialPillar_EventScript_AskPlaceLemonade_1


FiveIsland_MemorialPillar_EventScript_PlaceLemonade::
# 68 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	removeitem ITEM_LEMONADE
# 69 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	msgbox FiveIsland_MemorialPillar_Text_PlacedCanOfLemonade
# 70 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	closemessage
# 71 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	applymovement LOCALID_MEMORIAL_MAN, Common_Movement_WalkInPlaceFasterRight
# 72 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	waitmovement 0
# 73 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	delay 45
# 74 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 75 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	waitmovement 0
# 76 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 77 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	msgbox FiveIsland_MemorialPillar_Text_ThankYouPleaseTakeThis
# 78 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	giveitem ITEM_TM42
# 79 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq FiveIsland_MemorialPillar_EventScript_PlaceLemonade_2
FiveIsland_MemorialPillar_EventScript_PlaceLemonade_1:
# 82 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	call FiveIsland_MemorialPillar_EventScript_ReceivedTM42
# 83 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	releaseall
	end

FiveIsland_MemorialPillar_EventScript_PlaceLemonade_2:
# 80 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	goto FiveIsland_MemorialPillar_EventScript_NoRoomForTM42
	goto FiveIsland_MemorialPillar_EventScript_PlaceLemonade_1


FiveIsland_MemorialPillar_EventScript_ReceivedTM42::
# 88 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	msgbox FiveIsland_MemorialPillar_Text_BeGoodToYourMonsToo
# 89 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	applymovement LOCALID_MEMORIAL_MAN, Common_Movement_WalkInPlaceFasterUp
# 90 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	waitmovement 0
# 91 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	setflag FLAG_GOT_TM42_AT_MEMORIAL_PILLAR
	return


FiveIsland_MemorialPillar_EventScript_NoRoomForTM42::
# 96 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	setflag FLAG_NO_ROOM_FOR_TM42_AT_MEMORIAL_PILLAR
# 97 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	msgbox FiveIsland_MemorialPillar_Text_DontHaveRoomForIt
# 98 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	releaseall
	end


FiveIsland_MemorialPillar_EventScript_MemorialLemonadeAlreadyPlaced::
# 103 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	msgbox FiveIsland_MemorialPillar_Text_HereLiesTectonix
# 104 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	releaseall
	end


FiveIsland_MemorialPillar_Text_MiloIntro::
# 108 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	.string "I'm the eldest of the BIRD\n"
	.string "BROTHERS.\p"
	.string "The best thing about birds…\n"
	.string "It has to be the beak.$"

FiveIsland_MemorialPillar_Text_MiloDefeat::
# 115 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	.string "Oh, so sharp!$"

FiveIsland_MemorialPillar_Text_MiloPostBattle::
# 119 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	.string "You can fly to FOUR ISLAND from\n"
	.string "here.$"

FiveIsland_MemorialPillar_Text_ChazIntro::
# 124 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	.string "I'm the middle kid of the BIRD\n"
	.string "BROTHERS.\p"
	.string "The best thing about birds…\n"
	.string "It has to be the wings.$"

FiveIsland_MemorialPillar_Text_ChazDefeat::
# 131 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	.string "Flap, flap!$"

FiveIsland_MemorialPillar_Text_ChazPostBattle::
# 135 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	.string "There was a really somber guy\n"
	.string "over that way.$"

FiveIsland_MemorialPillar_Text_HaroldIntro::
# 140 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	.string "I'm the youngest of the BIRD\n"
	.string "BROTHERS.\p"
	.string "The best thing about birds…\n"
	.string "It has to be the down.$"

FiveIsland_MemorialPillar_Text_HaroldDefeat::
# 147 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	.string "Down is so comfy…\n"
	.string "It makes me drowsy…$"

FiveIsland_MemorialPillar_Text_HaroldPostBattle::
# 152 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	.string "It fills me with happiness when\n"
	.string "bird POKéMON beg playfully…$"

FiveIsland_MemorialPillar_Text_ScrubScrub::
# 157 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	.string "Scrub, scrub…$"

FiveIsland_MemorialPillar_Text_YourMonsLookHealthy::
# 161 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	.string "Hello…\n"
	.string "Your POKéMON look healthy…$"

FiveIsland_MemorialPillar_Text_ThisIsWhereIBuriedMyOnix::
# 166 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	.string "This is where I buried my ONIX…\n"
	.string "It was named TECTONIX…$"

FiveIsland_MemorialPillar_Text_HereLiesTectonixLemonadeOffering::
# 171 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	.string "“Here lies TECTONIX” is engraved\n"
	.string "on a boulder.\p"
	.string "There is a LEMONADE placed as an\n"
	.string "offering in front of the grave.$"

FiveIsland_MemorialPillar_Text_LeaveAnotherLemonadeOffering::
# 178 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	.string "Would you like to leave another\n"
	.string "LEMONADE as an offering?$"

FiveIsland_MemorialPillar_Text_PlacedCanOfLemonade::
# 183 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	.string "{PLAYER} placed a can of LEMONADE\n"
	.string "in front of the grave.$"

FiveIsland_MemorialPillar_Text_ThankYouPleaseTakeThis::
# 188 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	.string "Th-thank you…\p"
	.string "That was my TECTONIX's favorite\n"
	.string "drink…\p"
	.string "I don't even know you, but your\n"
	.string "act of kindness…\p"
	.string "It's uplifted me a little.\p"
	.string "Can you please take this as my\n"
	.string "thanks?$"

FiveIsland_MemorialPillar_Text_BeGoodToYourMonsToo::
# 199 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	.string "Please be good to your POKéMON,\n"
	.string "too.$"

FiveIsland_MemorialPillar_Text_DontHaveRoomForIt::
# 204 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	.string "If you don't have room for it,\n"
	.string "I'll hold it for you till next time.$"

FiveIsland_MemorialPillar_Text_StillHaveThingAsMyThanks::
# 209 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	.string "Oh, it's you from that time…\p"
	.string "I still have that thing I wanted\n"
	.string "you to have as my thanks.$"

FiveIsland_MemorialPillar_Text_ScrubScrubTectonix::
# 215 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	.string "Scrub, scrub…\p"
	.string "… … …\n"
	.string "TECTONIX…$"

FiveIsland_MemorialPillar_Text_HereLiesTectonix::
# 221 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	.string "Boulders and rocks are neatly piled\n"
	.string "up as a cairn.\p"
	.string "“Here lies TECTONIX” is engraved\n"
	.string "on a boulder.$"
