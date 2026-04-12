# 1 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 2 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_MapScripts::
# 3 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.byte 0
# 4 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 5 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 6 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_EventScript_Greeter::
# 7 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 4 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 8 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_1F_Text_WelcomeToLilycoveMuseum, MSGBOX_SIGN
# 9 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	end
# 10 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 11 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 12 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_EventScript_Curator::
# 13 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 9 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 14 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	lockall
# 15 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 10 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 16 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	applymovement LOCALID_MUSEUM_1F_CURATOR, Common_Movement_FacePlayer
# 17 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 11 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 18 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	message LilycoveCity_LilycoveMuseum_1F_Text_ImCuratorHaveYouViewedOurPaintings
# 19 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 12 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 20 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	waitmessage
# 21 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 13 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 22 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	multichoice 20, 8, MULTI_VIEWED_PAINTINGS, TRUE
# 23 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 14 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 24 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	compare VAR_RESULT, 0
# 25 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	goto_if_eq LilycoveCity_LilycoveMuseum_1F_EventScript_Curator_2
# 26 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_EventScript_Curator_1:
# 27 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 17 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 28 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	compare VAR_RESULT, 1
# 29 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	goto_if_eq LilycoveCity_LilycoveMuseum_1F_EventScript_Curator_5
# 30 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_EventScript_Curator_4:
# 31 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	end
# 32 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 33 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_EventScript_Curator_2:
# 34 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 15 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 35 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	goto LilycoveCity_LilycoveMuseum_1F_EventScript_SawPaintings
# 36 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	goto LilycoveCity_LilycoveMuseum_1F_EventScript_Curator_1
# 37 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 38 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_EventScript_Curator_5:
# 39 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 18 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 40 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	goto LilycoveCity_LilycoveMuseum_1F_EventScript_NotYet
# 41 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	goto LilycoveCity_LilycoveMuseum_1F_EventScript_Curator_4
# 42 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 43 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 44 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_EventScript_NotYet::
# 45 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 24 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 46 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_1F_Text_NotDisturbYouTakeYourTime, MSGBOX_NPC
# 47 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	end
# 48 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 49 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 50 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_EventScript_SawPaintings::
# 51 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 29 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 52 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_1F_Text_HaveYouAnInterestInPaintings, MSGBOX_YESNO
# 53 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 30 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 54 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	compare VAR_RESULT, NO
# 55 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	goto_if_eq LilycoveCity_LilycoveMuseum_1F_EventScript_SawPaintings_2
# 56 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_EventScript_SawPaintings_1:
# 57 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 33 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 58 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	compare VAR_RESULT, YES
# 59 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	goto_if_eq LilycoveCity_LilycoveMuseum_1F_EventScript_SawPaintings_5
# 60 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_EventScript_SawPaintings_4:
# 61 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	end
# 62 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 63 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_EventScript_SawPaintings_2:
# 64 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 31 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 65 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	goto LilycoveCity_LilycoveMuseum_1F_EventScript_NotInterested
# 66 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	goto LilycoveCity_LilycoveMuseum_1F_EventScript_SawPaintings_1
# 67 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 68 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_EventScript_SawPaintings_5:
# 69 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 34 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 70 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	goto LilycoveCity_LilycoveMuseum_1F_EventScript_InterestedInPaintings
# 71 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	goto LilycoveCity_LilycoveMuseum_1F_EventScript_SawPaintings_4
# 72 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 73 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 74 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_EventScript_NotInterested::
# 75 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 40 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 76 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_1F_Text_HonoredYoudVisitInSpiteOfThat, MSGBOX_SIGN
# 77 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 41 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 78 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	releaseall
# 79 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	end
# 80 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 81 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 82 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_EventScript_InterestedInPaintings::
# 83 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 46 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 84 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_1F_Text_ExcellentCanYouComeWithMe, MSGBOX_SIGN
# 85 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 47 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 86 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	applymovement LOCALID_MUSEUM_1F_CURATOR, LilycoveCity_LilycoveMuseum_1F_Movement_CuratorEnterStairs
# 87 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 48 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 88 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	waitmovement 0
# 89 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 49 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 90 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	removeobject LOCALID_MUSEUM_1F_CURATOR
# 91 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 50 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 92 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	switch VAR_FACING
# 93 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 51 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 94 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	case DIR_NORTH, LilycoveCity_LilycoveMuseum_1F_EventScript_InterestedInPaintings_3
# 95 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 53 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 96 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	case DIR_WEST, LilycoveCity_LilycoveMuseum_1F_EventScript_InterestedInPaintings_4
# 97 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 55 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 98 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	case DIR_EAST, LilycoveCity_LilycoveMuseum_1F_EventScript_InterestedInPaintings_5
# 99 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_EventScript_InterestedInPaintings_1:
# 100 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	end
# 101 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 102 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_EventScript_InterestedInPaintings_3:
# 103 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 52 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 104 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	goto LilycoveCity_LilycoveMuseum_1F_EventScript_FollowCuratorNorth
# 105 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	goto LilycoveCity_LilycoveMuseum_1F_EventScript_InterestedInPaintings_1
# 106 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 107 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_EventScript_InterestedInPaintings_4:
# 108 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 54 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 109 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	goto LilycoveCity_LilycoveMuseum_1F_EventScript_FollowCuratorWest
# 110 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	goto LilycoveCity_LilycoveMuseum_1F_EventScript_InterestedInPaintings_1
# 111 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 112 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_EventScript_InterestedInPaintings_5:
# 113 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 56 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 114 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	goto LilycoveCity_LilycoveMuseum_1F_EventScript_FollowCuratorEast
# 115 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	goto LilycoveCity_LilycoveMuseum_1F_EventScript_InterestedInPaintings_1
# 116 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 117 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 118 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_EventScript_FollowCuratorNorth::
# 119 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 62 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 120 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	lockall
# 121 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 63 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 122 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	applymovement LOCALID_PLAYER, LilycoveCity_LilycoveMuseum_1F_Movement_FollowCuratorNorth
# 123 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 64 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 124 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	waitmovement 0
# 125 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 65 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 126 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	warp MAP_LILYCOVE_CITY_LILYCOVE_MUSEUM_2F, 11, 8
# 127 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 66 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 128 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	waitstate
# 129 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	end
# 130 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 131 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 132 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_EventScript_FollowCuratorWest::
# 133 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 71 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 134 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	lockall
# 135 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 72 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 136 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	applymovement LOCALID_PLAYER, LilycoveCity_LilycoveMuseum_1F_Movement_FollowCuratorWest
# 137 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 73 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 138 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	waitmovement 0
# 139 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 74 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 140 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	warp MAP_LILYCOVE_CITY_LILYCOVE_MUSEUM_2F, 11, 8
# 141 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 75 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 142 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	waitstate
# 143 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	end
# 144 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 145 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 146 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_EventScript_FollowCuratorEast::
# 147 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 80 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 148 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	lockall
# 149 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 81 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 150 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	applymovement LOCALID_PLAYER, LilycoveCity_LilycoveMuseum_1F_Movement_FollowCuratorEast
# 151 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 82 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 152 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	waitmovement 0
# 153 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 83 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 154 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	warp MAP_LILYCOVE_CITY_LILYCOVE_MUSEUM_2F, 11, 8
# 155 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 84 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 156 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	waitstate
# 157 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	end
# 158 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 159 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 160 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 88 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 161 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_Movement_CuratorEnterStairs:
# 162 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 89 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 163 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	walk_up
# 164 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 90 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 165 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	step_end
# 166 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 167 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 93 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 168 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_Movement_FollowCuratorWest:
# 169 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 94 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 170 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	walk_left
# 171 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 95 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 172 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	walk_up
# 173 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 96 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 174 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	step_end
# 175 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 176 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 99 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 177 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_Movement_FollowCuratorEast:
# 178 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 100 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 179 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	walk_right
# 180 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 101 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 181 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	walk_up
# 182 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 102 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 183 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	step_end
# 184 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 185 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 105 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 186 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_Movement_FollowCuratorNorth:
# 187 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 106 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 188 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	walk_up
# 189 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 107 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 190 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	walk_up
# 191 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 108 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 192 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	step_end
# 193 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 194 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_EventScript_OldPainting::
# 195 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 112 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 196 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_1F_Text_VeryOldPainting, MSGBOX_SIGN
# 197 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	end
# 198 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 199 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 200 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_EventScript_FantasyPainting::
# 201 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 117 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 202 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_1F_Text_OddLandscapeFantasticScenery, MSGBOX_SIGN
# 203 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	end
# 204 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 205 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 206 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_EventScript_WomanPainting::
# 207 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 122 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 208 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_1F_Text_PaintingOfBeautifulWoman, MSGBOX_SIGN
# 209 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	end
# 210 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 211 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 212 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_EventScript_LegendaryPokemonPainting::
# 213 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 127 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 214 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_1F_Text_PaintingOfLegendaryPokemon, MSGBOX_SIGN
# 215 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	end
# 216 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 217 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 218 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_EventScript_GrassPokemonPainting::
# 219 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 132 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 220 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_1F_Text_PaintingOfGrassPokemon, MSGBOX_SIGN
# 221 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	end
# 222 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 223 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 224 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_EventScript_BerryPainting::
# 225 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 137 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 226 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_1F_Text_PaintingOfBerries, MSGBOX_SIGN
# 227 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	end
# 228 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 229 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 230 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_EventScript_BirdSculpture::
# 231 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 142 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 232 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_Text_BirdPokemonSculptureReplica, MSGBOX_SIGN
# 233 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	end
# 234 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 235 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 236 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_EventScript_PokeBallSculpture::
# 237 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 147 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 238 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_1F_Text_BigPokeBallCarvedFromStone, MSGBOX_SIGN
# 239 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	end
# 240 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 241 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 242 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_EventScript_StoneTablet::
# 243 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 152 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 244 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_1F_Text_StoneTabletWithAncientText, MSGBOX_SIGN
# 245 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	end
# 246 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 247 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 248 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_EventScript_SchoolKidM::
# 249 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 157 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 250 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_1F_Text_MustntForgetLoveForFineArts, MSGBOX_NPC
# 251 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	end
# 252 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 253 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 254 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_EventScript_Artist1::
# 255 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 162 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 256 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_1F_Text_ThisMuseumIsInspiration, MSGBOX_NPC
# 257 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	end
# 258 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 259 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 260 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_EventScript_NinjaBoy::
# 261 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 167 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 262 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_1F_Text_ThisLadyIsPretty, MSGBOX_SIGN
# 263 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	end
# 264 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 265 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 266 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_EventScript_Woman1::
# 267 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 172 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 268 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_1F_Text_ThisPokemonIsAdorable, MSGBOX_SIGN
# 269 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	end
# 270 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 271 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 272 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_EventScript_Woman2::
# 273 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 177 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 274 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_1F_Text_HeardMuseumGotNewPaintings, MSGBOX_NPC
# 275 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	end
# 276 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 277 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 278 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_EventScript_PsychicM::
# 279 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 182 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 280 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_1F_Text_CuratorHasBeenCheerful, MSGBOX_NPC
# 281 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	end
# 282 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 283 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 284 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_EventScript_Artist2::
# 285 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 187 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 286 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	lock
# 287 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 188 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 288 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	faceplayer
# 289 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 189 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 290 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_1F_Text_AimToSeeGreatPaintings, MSGBOX_DEFAULT
# 291 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 190 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 292 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	closemessage
# 293 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 191 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 294 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	applymovement LOCALID_MUSEUM_1F_ARTIST_2, Common_Movement_FaceOriginalDirection
# 295 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 192 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 296 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	waitmovement 0
# 297 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 193 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 298 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	release
# 299 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	end
# 300 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 301 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 302 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_EventScript_FatMan::
# 303 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 198 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 304 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_1F_Text_MuseumTouristDestination, MSGBOX_NPC
# 305 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	end
# 306 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 307 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 308 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_Text_WelcomeToLilycoveMuseum::
# 309 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 202 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 310 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "Welcome to LILYCOVE MUSEUM.\p"
# 311 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "Please take the time to enjoy our\n"
# 312 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "collection of fantastic artwork\l"
# 313 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "featuring POKéMON.$"
# 314 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 315 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_Text_ImCuratorHaveYouViewedOurPaintings::
# 316 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 209 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 317 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "I'm the CURATOR of this MUSEUM of\n"
# 318 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "fine arts.\p"
# 319 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "It's heartening to see someone so\n"
# 320 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "young as you in our MUSEUM.\p"
# 321 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "Have you viewed our collection of\n"
# 322 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "paintings already?$"
# 323 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 324 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_Text_NotDisturbYouTakeYourTime::
# 325 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 218 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 326 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "Ah, then let me not disturb you.\n"
# 327 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "Please, do take your time.$"
# 328 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 329 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_Text_HaveYouAnInterestInPaintings::
# 330 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 223 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 331 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "Oh? I do believe that you seem to\n"
# 332 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "be a POKéMON TRAINER.\p"
# 333 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "Have you an interest in paintings,\n"
# 334 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "too?$"
# 335 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 336 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_Text_HonoredYoudVisitInSpiteOfThat::
# 337 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 230 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 338 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "I see…\p"
# 339 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "I'm honored that you would visit\n"
# 340 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "us in spite of that.$"
# 341 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 342 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_Text_ExcellentCanYouComeWithMe::
# 343 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 236 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 344 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "Ah, excellent!\n"
# 345 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "You do like paintings!\p"
# 346 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "Then, may I ask you to come with me?$"
# 347 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 348 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_Text_VeryOldPainting::
# 349 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 242 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 350 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "It's a very old painting.\n"
# 351 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "The paint is peeling here and there.$"
# 352 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 353 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_Text_OddLandscapeFantasticScenery::
# 354 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 247 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 355 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "It's an odd landscape with bizarre\n"
# 356 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "and fantastic scenery.$"
# 357 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 358 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_Text_PaintingOfBeautifulWoman::
# 359 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 252 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 360 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "It's a painting of a beautiful, smiling\n"
# 361 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "woman with a POKéMON on her lap.$"
# 362 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 363 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_Text_PaintingOfLegendaryPokemon::
# 364 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 257 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 365 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "It's a painting of a legendary POKéMON\n"
# 366 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "from long ago.\p"
# 367 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "The artist painted this from\n"
# 368 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "imagination.$"
# 369 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 370 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_Text_PaintingOfGrassPokemon::
# 371 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 264 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 372 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "It's a painting of GRASS POKéMON\n"
# 373 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "swaying in a breeze.\p"
# 374 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "They appear to be enjoying the wind's\n"
# 375 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "gentle caress.$"
# 376 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 377 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_Text_PaintingOfBerries::
# 378 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 271 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 379 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "It's a delicious-looking painting\n"
# 380 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "of BERRIES.\p"
# 381 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "This painting could make you hungry!$"
# 382 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 383 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_Text_BirdPokemonSculptureReplica::
# 384 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 277 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 385 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "It's a replica of a famous sculpture.\p"
# 386 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "It depicts an ancient BIRD POKéMON.$"
# 387 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 388 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_Text_BigPokeBallCarvedFromStone::
# 389 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 282 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 390 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "It's a big POKé BALL carved from\n"
# 391 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "a black stone.\p"
# 392 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "It was apparently used in festivals\n"
# 393 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "in the olden days.$"
# 394 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 395 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_Text_StoneTabletWithAncientText::
# 396 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 289 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 397 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "It's a huge stone tablet inscribed\n"
# 398 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "with POKéMON and dense text in the\l"
# 399 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "small characters of an ancient,\l"
# 400 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "unreadable language.$"
# 401 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 402 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_Text_WorksOfMagnificence::
# 403 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 296 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 404 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "Hmmm…\n"
# 405 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "What works of great magnificence…$"
# 406 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 407 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_Text_MustntForgetLoveForFineArts::
# 408 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 301 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 409 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "Battling with POKéMON is fun,\n"
# 410 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "I'll grant you that.\p"
# 411 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "But one mustn't forget our love for\n"
# 412 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "the fine arts.$"
# 413 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 414 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_Text_ThisMuseumIsInspiration::
# 415 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 308 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 416 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "This ART MUSEUM… Well, you could\n"
# 417 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "see many fantastic paintings.\p"
# 418 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "And the CURATOR is a wonderful person.\p"
# 419 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "Among artists like myself, this MUSEUM\n"
# 420 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "is an inspiration.$"
# 421 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 422 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_Text_ThisLadyIsPretty::
# 423 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 316 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 424 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "This lady is pretty!\n"
# 425 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "She's like Mommy!$"
# 426 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 427 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_Text_ThisPokemonIsAdorable::
# 428 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 321 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 429 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "This POKéMON is adorable!\n"
# 430 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "Just like our little boy!$"
# 431 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 432 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_Text_HeardMuseumGotNewPaintings::
# 433 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 326 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 434 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "I'd heard that this ART MUSEUM got\n"
# 435 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "in some new paintings.\p"
# 436 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "So, naturally I hurried over.\p"
# 437 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "Are the new paintings up on\n"
# 438 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "the second floor?$"
# 439 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 440 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_Text_CuratorHasBeenCheerful::
# 441 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 334 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 442 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "Lately, the CURATOR has been\n"
# 443 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "unusually cheerful.\p"
# 444 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "I bet something good happened for him.\n"
# 445 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "Definitely.$"
# 446 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 447 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_Text_AimToSeeGreatPaintings::
# 448 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 341 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 449 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "I aim to see many great paintings\n"
# 450 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "here and learn from them.\p"
# 451 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "I have this dream of one day having\n"
# 452 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "my artwork exhibited here.$"
# 453 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 454 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_Text_MuseumTouristDestination::
# 455 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 348 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
# 456 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "The ART MUSEUM has become a favorite\n"
# 457 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "tourist destination.\p"
# 458 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "It's great for LILYCOVE…\n"
# 459 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "No, great for the HOENN region!\p"
# 460 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "This is what I've heard--a lone TRAINER\n"
# 461 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "procured all the paintings upstairs.$"
