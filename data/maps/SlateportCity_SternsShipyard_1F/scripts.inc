SlateportCity_SternsShipyard_1F_MapScripts::
	.byte 0


SlateportCity_SternsShipyard_1F_EventScript_Dock::
# 4 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	lockall
# 5 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, SlateportCity_SternsShipyard_1F_EventScript_Dock_2
SlateportCity_SternsShipyard_1F_EventScript_Dock_1:
# 8 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, SlateportCity_SternsShipyard_1F_EventScript_Dock_5
SlateportCity_SternsShipyard_1F_EventScript_Dock_4:
# 11 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	goto_if_set FLAG_DELIVERED_DEVON_GOODS, SlateportCity_SternsShipyard_1F_EventScript_Dock_8
SlateportCity_SternsShipyard_1F_EventScript_Dock_7:
# 14 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	goto_if_set FLAG_DOCK_REJECTED_DEVON_GOODS, SlateportCity_SternsShipyard_1F_EventScript_Dock_11
SlateportCity_SternsShipyard_1F_EventScript_Dock_10:
# 17 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	msgbox SlateportCity_SternsShipyard_1F_Text_CantMakeHeadsOrTails, MSGBOX_DEFAULT
# 18 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	applymovement LOCALID_DOCK, Common_Movement_FacePlayer
# 19 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	waitmovement 0
# 20 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	msgbox SlateportCity_SternsShipyard_1F_Text_MeetDockDeliverToStern, MSGBOX_DEFAULT
# 21 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	closemessage
# 22 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	applymovement LOCALID_DOCK, Common_Movement_FaceOriginalDirection
# 23 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	waitmovement 0
# 24 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	setflag FLAG_DOCK_REJECTED_DEVON_GOODS
# 25 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	setflag FLAG_HIDE_SLATEPORT_CITY_TEAM_AQUA
# 26 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	releaseall
	end

SlateportCity_SternsShipyard_1F_EventScript_Dock_2:
# 6 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	goto SlateportCity_SternsShipyard_1F_EventScript_FerryReady
	goto SlateportCity_SternsShipyard_1F_EventScript_Dock_1

SlateportCity_SternsShipyard_1F_EventScript_Dock_5:
# 9 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	goto SlateportCity_SternsShipyard_1F_EventScript_BrineyJoined
	goto SlateportCity_SternsShipyard_1F_EventScript_Dock_4

SlateportCity_SternsShipyard_1F_EventScript_Dock_8:
# 12 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	goto SlateportCity_SternsShipyard_1F_EventScript_NeedVeteran
	goto SlateportCity_SternsShipyard_1F_EventScript_Dock_7

SlateportCity_SternsShipyard_1F_EventScript_Dock_11:
# 15 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	goto SlateportCity_SternsShipyard_1F_EventScript_GoFindStern
	goto SlateportCity_SternsShipyard_1F_EventScript_Dock_10


SlateportCity_SternsShipyard_1F_EventScript_FerryReady::
# 31 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	applymovement LOCALID_DOCK, Common_Movement_FacePlayer
# 32 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	waitmovement 0
# 33 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	msgbox SlateportCity_SternsShipyard_1F_Text_FerryIsReady, MSGBOX_DEFAULT
# 34 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	releaseall
	end


SlateportCity_SternsShipyard_1F_EventScript_BrineyJoined::
# 39 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	applymovement LOCALID_DOCK, Common_Movement_FacePlayer
# 40 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	waitmovement 0
# 41 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	msgbox SlateportCity_SternsShipyard_1F_Text_BrineyJoinedUs, MSGBOX_DEFAULT
# 42 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	releaseall
	end


SlateportCity_SternsShipyard_1F_EventScript_GoFindStern::
# 47 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	applymovement LOCALID_DOCK, Common_Movement_FacePlayer
# 48 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	waitmovement 0
# 49 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	msgbox SlateportCity_SternsShipyard_1F_Text_CouldYouFindStern, MSGBOX_DEFAULT
# 50 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	closemessage
# 51 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	applymovement LOCALID_DOCK, Common_Movement_FaceOriginalDirection
# 52 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	waitmovement 0
# 53 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	releaseall
	end


SlateportCity_SternsShipyard_1F_EventScript_NeedVeteran::
# 58 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	applymovement LOCALID_DOCK, Common_Movement_FacePlayer
# 59 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	waitmovement 0
# 60 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	msgbox SlateportCity_SternsShipyard_1F_Text_CouldUseAdviceFromVeteran, MSGBOX_DEFAULT
# 61 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	releaseall
	end


SlateportCity_SternsShipyard_1F_EventScript_Scientist1::
# 66 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	msgbox SlateportCity_SternsShipyard_1F_Text_SeaIsLikeLivingThing, MSGBOX_NPC
	end


SlateportCity_SternsShipyard_1F_EventScript_Scientist2::
# 71 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	msgbox SlateportCity_SternsShipyard_1F_Text_GetSeasickEasily, MSGBOX_NPC
	end


SlateportCity_SternsShipyard_1F_EventScript_Briney::
# 76 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	msgbox SlateportCity_SternsShipyard_1F_Text_DecidedToHelpDock, MSGBOX_NPC
	end


SlateportCity_SternsShipyard_1F_Text_CantMakeHeadsOrTails::
# 80 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "Umm… If this goes here, and that\n"
	.string "goes over there…\p"
	.string "Then where does this thing go?\n"
	.string "And what about that doohickey?\p"
	.string "Aaargh! I can't make heads or tails\n"
	.string "of this!$"

SlateportCity_SternsShipyard_1F_Text_MeetDockDeliverToStern::
# 89 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "Hm?\n"
	.string "Hi, I'm DOCK.\p"
	.string "CAPT. STERN commissioned me to\n"
	.string "design a ferry.\p"
	.string "Oh! That there…\n"
	.string "Are they DEVON GOODS?\p"
	.string "But, hmm…\n"
	.string "This won't do…\p"
	.string "CAPT. STERN went off somewhere.\n"
	.string "He said he had some work to do.\p"
	.string "Could I get you to go find CAPT.\n"
	.string "STERN and deliver that to him?$"

SlateportCity_SternsShipyard_1F_Text_CouldYouFindStern::
# 104 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "DOCK: Where could CAPT. STERN have\n"
	.string "gone off to?\p"
	.string "Could you go find CAPT. STERN and\n"
	.string "deliver that parcel to him?$"

SlateportCity_SternsShipyard_1F_Text_CouldUseAdviceFromVeteran::
# 111 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "DOCK: Shipbuilding is an art.\p"
	.string "A lot of things can't be figured out\n"
	.string "just by calculating.\p"
	.string "I really could use advice from a veteran\n"
	.string "who knows the seas…$"

SlateportCity_SternsShipyard_1F_Text_BrineyJoinedUs::
# 119 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "DOCK: Hi! MR. BRINEY's joined us to\n"
	.string "lend us his help.\p"
	.string "Thanks to the veteran sailor, the\n"
	.string "ferry is steadily coming together.$"

SlateportCity_SternsShipyard_1F_Text_FerryIsReady::
# 126 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "DOCK: The ferry is finally ready!\p"
	.string "The new S.S. TIDAL is truly a marvel\n"
	.string "of technology!\p"
	.string "But, I get the feeling that we can\n"
	.string "make something even better.\p"
	.string "You know, there's never an end to\n"
	.string "technology's march.$"

SlateportCity_SternsShipyard_1F_Text_DecidedToHelpDock::
# 136 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "MR. BRINEY: Ah, {PLAYER}{KUN}!\n"
	.string "It's been too long!\p"
	.string "Aye, since I met you, this old sea dog's\n"
	.string "been feeling frisky!\p"
	.string "So I've decided to help DOCK make\n"
	.string "a ferry.\p"
	.string "Aye, after all, a ferry would be able\n"
	.string "to carry a lot of people.\p"
	.string "But, you know, that DOCK is really\n"
	.string "something special.\p"
	.string "With his knack for technology and\n"
	.string "my experience, I'm sure that we can\l"
	.string "build one great ship, aye!$"

SlateportCity_SternsShipyard_1F_Text_SeaIsLikeLivingThing::
# 152 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "The seasons, the weather, where\n"
	.string "the moon sits in the sky…\p"
	.string "These and other conditions make\n"
	.string "the sea change its expression.\p"
	.string "That's right!\n"
	.string "The sea is like a living thing!$"

SlateportCity_SternsShipyard_1F_Text_GetSeasickEasily::
# 161 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "I get seasick real easily.\n"
	.string "So I get to help out here instead.$"
