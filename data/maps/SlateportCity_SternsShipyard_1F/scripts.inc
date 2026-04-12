# 1 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"

# 2 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
SlateportCity_SternsShipyard_1F_MapScripts::
# 3 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.byte 0
# 4 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"

# 5 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"

# 6 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
SlateportCity_SternsShipyard_1F_EventScript_Dock::
# 7 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
# 4 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
# 8 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	lockall
# 9 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
# 5 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
# 10 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, SlateportCity_SternsShipyard_1F_EventScript_Dock_2
# 11 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
SlateportCity_SternsShipyard_1F_EventScript_Dock_1:
# 12 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
# 8 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
# 13 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, SlateportCity_SternsShipyard_1F_EventScript_Dock_5
# 14 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
SlateportCity_SternsShipyard_1F_EventScript_Dock_4:
# 15 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
# 11 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
# 16 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	goto_if_set FLAG_DELIVERED_DEVON_GOODS, SlateportCity_SternsShipyard_1F_EventScript_Dock_8
# 17 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
SlateportCity_SternsShipyard_1F_EventScript_Dock_7:
# 18 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
# 14 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
# 19 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	goto_if_set FLAG_DOCK_REJECTED_DEVON_GOODS, SlateportCity_SternsShipyard_1F_EventScript_Dock_11
# 20 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
SlateportCity_SternsShipyard_1F_EventScript_Dock_10:
# 21 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
# 17 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
# 22 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	msgbox SlateportCity_SternsShipyard_1F_Text_CantMakeHeadsOrTails, MSGBOX_DEFAULT
# 23 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
# 18 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
# 24 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	applymovement LOCALID_DOCK, Common_Movement_FacePlayer
# 25 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
# 19 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
# 26 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	waitmovement 0
# 27 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
# 20 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
# 28 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	msgbox SlateportCity_SternsShipyard_1F_Text_MeetDockDeliverToStern, MSGBOX_DEFAULT
# 29 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
# 21 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
# 30 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	closemessage
# 31 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
# 22 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
# 32 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	applymovement LOCALID_DOCK, Common_Movement_FaceOriginalDirection
# 33 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
# 23 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
# 34 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	waitmovement 0
# 35 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
# 24 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
# 36 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	setflag FLAG_DOCK_REJECTED_DEVON_GOODS
# 37 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
# 25 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
# 38 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	setflag FLAG_HIDE_SLATEPORT_CITY_TEAM_AQUA
# 39 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
# 26 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
# 40 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	releaseall
# 41 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	end
# 42 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"

# 43 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
SlateportCity_SternsShipyard_1F_EventScript_Dock_2:
# 44 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
# 6 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
# 45 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	goto SlateportCity_SternsShipyard_1F_EventScript_FerryReady
# 46 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	goto SlateportCity_SternsShipyard_1F_EventScript_Dock_1
# 47 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"

# 48 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
SlateportCity_SternsShipyard_1F_EventScript_Dock_5:
# 49 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
# 9 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
# 50 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	goto SlateportCity_SternsShipyard_1F_EventScript_BrineyJoined
# 51 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	goto SlateportCity_SternsShipyard_1F_EventScript_Dock_4
# 52 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"

# 53 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
SlateportCity_SternsShipyard_1F_EventScript_Dock_8:
# 54 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
# 12 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
# 55 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	goto SlateportCity_SternsShipyard_1F_EventScript_NeedVeteran
# 56 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	goto SlateportCity_SternsShipyard_1F_EventScript_Dock_7
# 57 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"

# 58 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
SlateportCity_SternsShipyard_1F_EventScript_Dock_11:
# 59 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
# 15 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
# 60 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	goto SlateportCity_SternsShipyard_1F_EventScript_GoFindStern
# 61 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	goto SlateportCity_SternsShipyard_1F_EventScript_Dock_10
# 62 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"

# 63 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"

# 64 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
SlateportCity_SternsShipyard_1F_EventScript_FerryReady::
# 65 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
# 31 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
# 66 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	applymovement LOCALID_DOCK, Common_Movement_FacePlayer
# 67 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
# 32 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
# 68 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	waitmovement 0
# 69 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
# 33 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
# 70 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	msgbox SlateportCity_SternsShipyard_1F_Text_FerryIsReady, MSGBOX_DEFAULT
# 71 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
# 34 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
# 72 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	releaseall
# 73 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	end
# 74 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"

# 75 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"

# 76 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
SlateportCity_SternsShipyard_1F_EventScript_BrineyJoined::
# 77 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
# 39 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
# 78 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	applymovement LOCALID_DOCK, Common_Movement_FacePlayer
# 79 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
# 40 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
# 80 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	waitmovement 0
# 81 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
# 41 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
# 82 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	msgbox SlateportCity_SternsShipyard_1F_Text_BrineyJoinedUs, MSGBOX_DEFAULT
# 83 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
# 42 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
# 84 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	releaseall
# 85 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	end
# 86 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"

# 87 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"

# 88 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
SlateportCity_SternsShipyard_1F_EventScript_GoFindStern::
# 89 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
# 47 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
# 90 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	applymovement LOCALID_DOCK, Common_Movement_FacePlayer
# 91 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
# 48 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
# 92 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	waitmovement 0
# 93 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
# 49 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
# 94 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	msgbox SlateportCity_SternsShipyard_1F_Text_CouldYouFindStern, MSGBOX_DEFAULT
# 95 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
# 50 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
# 96 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	closemessage
# 97 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
# 51 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
# 98 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	applymovement LOCALID_DOCK, Common_Movement_FaceOriginalDirection
# 99 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
# 52 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
# 100 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	waitmovement 0
# 101 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
# 53 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
# 102 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	releaseall
# 103 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	end
# 104 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"

# 105 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"

# 106 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
SlateportCity_SternsShipyard_1F_EventScript_NeedVeteran::
# 107 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
# 58 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
# 108 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	applymovement LOCALID_DOCK, Common_Movement_FacePlayer
# 109 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
# 59 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
# 110 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	waitmovement 0
# 111 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
# 60 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
# 112 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	msgbox SlateportCity_SternsShipyard_1F_Text_CouldUseAdviceFromVeteran, MSGBOX_DEFAULT
# 113 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
# 61 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
# 114 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	releaseall
# 115 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	end
# 116 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"

# 117 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"

# 118 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
SlateportCity_SternsShipyard_1F_EventScript_Scientist1::
# 119 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
# 66 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
# 120 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	msgbox SlateportCity_SternsShipyard_1F_Text_SeaIsLikeLivingThing, MSGBOX_NPC
# 121 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	end
# 122 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"

# 123 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"

# 124 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
SlateportCity_SternsShipyard_1F_EventScript_Scientist2::
# 125 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
# 71 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
# 126 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	msgbox SlateportCity_SternsShipyard_1F_Text_GetSeasickEasily, MSGBOX_NPC
# 127 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	end
# 128 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"

# 129 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"

# 130 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
SlateportCity_SternsShipyard_1F_EventScript_Briney::
# 131 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
# 76 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
# 132 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	msgbox SlateportCity_SternsShipyard_1F_Text_DecidedToHelpDock, MSGBOX_NPC
# 133 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	end
# 134 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"

# 135 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"

# 136 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
SlateportCity_SternsShipyard_1F_Text_CantMakeHeadsOrTails::
# 137 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
# 80 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
# 138 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "Umm… If this goes here, and that\n"
# 139 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "goes over there…\p"
# 140 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "Then where does this thing go?\n"
# 141 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "And what about that doohickey?\p"
# 142 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "Aaargh! I can't make heads or tails\n"
# 143 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "of this!$"
# 144 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"

# 145 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
SlateportCity_SternsShipyard_1F_Text_MeetDockDeliverToStern::
# 146 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
# 89 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
# 147 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "Hm?\n"
# 148 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "Hi, I'm DOCK.\p"
# 149 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "CAPT. STERN commissioned me to\n"
# 150 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "design a ferry.\p"
# 151 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "Oh! That there…\n"
# 152 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "Are they DEVON GOODS?\p"
# 153 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "But, hmm…\n"
# 154 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "This won't do…\p"
# 155 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "CAPT. STERN went off somewhere.\n"
# 156 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "He said he had some work to do.\p"
# 157 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "Could I get you to go find CAPT.\n"
# 158 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "STERN and deliver that to him?$"
# 159 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"

# 160 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
SlateportCity_SternsShipyard_1F_Text_CouldYouFindStern::
# 161 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
# 104 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
# 162 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "DOCK: Where could CAPT. STERN have\n"
# 163 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "gone off to?\p"
# 164 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "Could you go find CAPT. STERN and\n"
# 165 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "deliver that parcel to him?$"
# 166 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"

# 167 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
SlateportCity_SternsShipyard_1F_Text_CouldUseAdviceFromVeteran::
# 168 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
# 111 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
# 169 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "DOCK: Shipbuilding is an art.\p"
# 170 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "A lot of things can't be figured out\n"
# 171 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "just by calculating.\p"
# 172 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "I really could use advice from a veteran\n"
# 173 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "who knows the seas…$"
# 174 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"

# 175 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
SlateportCity_SternsShipyard_1F_Text_BrineyJoinedUs::
# 176 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
# 119 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
# 177 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "DOCK: Hi! MR. BRINEY's joined us to\n"
# 178 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "lend us his help.\p"
# 179 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "Thanks to the veteran sailor, the\n"
# 180 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "ferry is steadily coming together.$"
# 181 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"

# 182 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
SlateportCity_SternsShipyard_1F_Text_FerryIsReady::
# 183 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
# 126 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
# 184 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "DOCK: The ferry is finally ready!\p"
# 185 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "The new S.S. TIDAL is truly a marvel\n"
# 186 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "of technology!\p"
# 187 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "But, I get the feeling that we can\n"
# 188 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "make something even better.\p"
# 189 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "You know, there's never an end to\n"
# 190 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "technology's march.$"
# 191 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"

# 192 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
SlateportCity_SternsShipyard_1F_Text_DecidedToHelpDock::
# 193 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
# 136 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
# 194 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "MR. BRINEY: Ah, {PLAYER}{KUN}!\n"
# 195 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "It's been too long!\p"
# 196 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "Aye, since I met you, this old sea dog's\n"
# 197 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "been feeling frisky!\p"
# 198 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "So I've decided to help DOCK make\n"
# 199 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "a ferry.\p"
# 200 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "Aye, after all, a ferry would be able\n"
# 201 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "to carry a lot of people.\p"
# 202 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "But, you know, that DOCK is really\n"
# 203 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "something special.\p"
# 204 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "With his knack for technology and\n"
# 205 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "my experience, I'm sure that we can\l"
# 206 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "build one great ship, aye!$"
# 207 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"

# 208 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
SlateportCity_SternsShipyard_1F_Text_SeaIsLikeLivingThing::
# 209 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
# 152 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
# 210 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "The seasons, the weather, where\n"
# 211 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "the moon sits in the sky…\p"
# 212 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "These and other conditions make\n"
# 213 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "the sea change its expression.\p"
# 214 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "That's right!\n"
# 215 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "The sea is like a living thing!$"
# 216 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"

# 217 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
SlateportCity_SternsShipyard_1F_Text_GetSeasickEasily::
# 218 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
# 161 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
# 219 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "I get seasick real easily.\n"
# 220 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "So I get to help out here instead.$"
