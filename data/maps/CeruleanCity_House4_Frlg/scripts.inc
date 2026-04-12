# 1 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"

# 2 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
CeruleanCity_House4_Frlg_MapScripts::
# 3 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	.byte 0
# 4 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"

# 5 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"

# 6 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
CeruleanCity_House4_EventScript_WonderNewsBerryMan::
# 7 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
# 4 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
# 8 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	lock
# 9 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
# 5 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
# 10 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	specialvar REWARD_TYPE, WonderNews_GetRewardInfo
# 11 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
# 6 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
# 12 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	copyvar REWARD_ITEM, VAR_RESULT
# 13 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
# 7 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
# 14 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	compare REWARD_TYPE, NEWS_REWARD_NONE
# 15 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	goto_if_eq CeruleanCity_House4_EventScript_WonderNewsBerryMan_2
# 16 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
CeruleanCity_House4_EventScript_WonderNewsBerryMan_1:
# 17 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
# 10 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
# 18 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	compare REWARD_TYPE, NEWS_REWARD_RECV_SMALL
# 19 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	goto_if_eq CeruleanCity_House4_EventScript_WonderNewsBerryMan_5
# 20 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
CeruleanCity_House4_EventScript_WonderNewsBerryMan_4:
# 21 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
# 13 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
# 22 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	compare REWARD_TYPE, NEWS_REWARD_RECV_BIG
# 23 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	goto_if_eq CeruleanCity_House4_EventScript_WonderNewsBerryMan_8
# 24 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
CeruleanCity_House4_EventScript_WonderNewsBerryMan_7:
# 25 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
# 16 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
# 26 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	compare REWARD_TYPE, NEWS_REWARD_WAITING
# 27 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	goto_if_eq CeruleanCity_House4_EventScript_WonderNewsBerryMan_11
# 28 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
CeruleanCity_House4_EventScript_WonderNewsBerryMan_10:
# 29 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
# 19 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
# 30 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	compare REWARD_TYPE, NEWS_REWARD_SENT_SMALL
# 31 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	goto_if_eq CeruleanCity_House4_EventScript_WonderNewsBerryMan_14
# 32 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
CeruleanCity_House4_EventScript_WonderNewsBerryMan_13:
# 33 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
# 22 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
# 34 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	compare REWARD_TYPE, NEWS_REWARD_SENT_BIG
# 35 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	goto_if_eq CeruleanCity_House4_EventScript_WonderNewsBerryMan_17
# 36 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
CeruleanCity_House4_EventScript_WonderNewsBerryMan_16:
# 37 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
# 25 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
# 38 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	compare REWARD_TYPE, NEWS_REWARD_AT_MAX
# 39 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	goto_if_eq CeruleanCity_House4_EventScript_WonderNewsBerryMan_20
# 40 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
CeruleanCity_House4_EventScript_WonderNewsBerryMan_19:
# 41 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	end
# 42 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"

# 43 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
CeruleanCity_House4_EventScript_WonderNewsBerryMan_2:
# 44 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
# 8 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
# 45 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	goto CeruleanCity_House4_EventScript_NoNews
# 46 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	goto CeruleanCity_House4_EventScript_WonderNewsBerryMan_1
# 47 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"

# 48 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
CeruleanCity_House4_EventScript_WonderNewsBerryMan_5:
# 49 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
# 11 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
# 50 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	goto CeruleanCity_House4_EventScript_Reward_RecvSmall
# 51 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	goto CeruleanCity_House4_EventScript_WonderNewsBerryMan_4
# 52 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"

# 53 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
CeruleanCity_House4_EventScript_WonderNewsBerryMan_8:
# 54 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
# 14 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
# 55 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	goto CeruleanCity_House4_EventScript_Reward_RecvBig
# 56 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	goto CeruleanCity_House4_EventScript_WonderNewsBerryMan_7
# 57 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"

# 58 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
CeruleanCity_House4_EventScript_WonderNewsBerryMan_11:
# 59 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
# 17 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
# 60 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	goto CeruleanCity_House4_EventScript_Waiting
# 61 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	goto CeruleanCity_House4_EventScript_WonderNewsBerryMan_10
# 62 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"

# 63 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
CeruleanCity_House4_EventScript_WonderNewsBerryMan_14:
# 64 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
# 20 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
# 65 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	goto CeruleanCity_House4_EventScript_Reward_SentSmall
# 66 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	goto CeruleanCity_House4_EventScript_WonderNewsBerryMan_13
# 67 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"

# 68 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
CeruleanCity_House4_EventScript_WonderNewsBerryMan_17:
# 69 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
# 23 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
# 70 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	goto CeruleanCity_House4_EventScript_Reward_SentBig
# 71 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	goto CeruleanCity_House4_EventScript_WonderNewsBerryMan_16
# 72 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"

# 73 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
CeruleanCity_House4_EventScript_WonderNewsBerryMan_20:
# 74 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
# 26 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
# 75 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	goto CeruleanCity_House4_EventScript_AtMax
# 76 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	goto CeruleanCity_House4_EventScript_WonderNewsBerryMan_19
# 77 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"

# 78 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"

# 79 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
CeruleanCity_House4_EventScript_NoNews::
# 80 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
# 32 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
# 81 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	msgbox CeruleanCity_House4_Text_NothingEntertaining
# 82 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
# 33 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
# 83 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	release
# 84 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	end
# 85 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"

# 86 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"

# 87 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
CeruleanCity_House4_EventScript_Reward_RecvSmall::
# 88 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
# 38 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
# 89 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	call CeruleanCity_House4_EventScript_MovementReactionToNews
# 90 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
# 39 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
# 91 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	msgbox CeruleanCity_House4_Text_NewNewsInformativeHaveThis
# 92 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
# 40 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
# 93 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	giveitem REWARD_ITEM
# 94 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
# 41 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
# 95 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	compare VAR_RESULT, FALSE
# 96 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	goto_if_eq CeruleanCity_House4_EventScript_Reward_RecvSmall_2
# 97 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
CeruleanCity_House4_EventScript_Reward_RecvSmall_1:
# 98 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
# 44 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
# 99 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	release
# 100 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	end
# 101 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"

# 102 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
CeruleanCity_House4_EventScript_Reward_RecvSmall_2:
# 103 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
# 42 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
# 104 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	goto CeruleanCity_House4_EventScript_NoRoomForBerries
# 105 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	goto CeruleanCity_House4_EventScript_Reward_RecvSmall_1
# 106 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"

# 107 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"

# 108 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
CeruleanCity_House4_EventScript_Reward_RecvBig::
# 109 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
# 49 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
# 110 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	call CeruleanCity_House4_EventScript_MovementReactionToNews
# 111 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
# 50 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
# 112 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	msgbox CeruleanCity_House4_Text_IncredibleNewsHaveBerries
# 113 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
# 51 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
# 114 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	giveitem REWARD_ITEM, 4
# 115 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
# 52 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
# 116 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	compare VAR_RESULT, FALSE
# 117 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	goto_if_eq CeruleanCity_House4_EventScript_Reward_RecvBig_2
# 118 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
CeruleanCity_House4_EventScript_Reward_RecvBig_1:
# 119 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
# 55 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
# 120 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	release
# 121 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	end
# 122 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"

# 123 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
CeruleanCity_House4_EventScript_Reward_RecvBig_2:
# 124 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
# 53 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
# 125 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	goto CeruleanCity_House4_EventScript_NoRoomForBerries
# 126 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	goto CeruleanCity_House4_EventScript_Reward_RecvBig_1
# 127 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"

# 128 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"

# 129 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
CeruleanCity_House4_EventScript_Waiting::
# 130 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
# 60 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
# 131 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	applymovement LOCALID_WONDER_NEWS_BERRY_MAN, Common_Movement_FacePlayer
# 132 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
# 61 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
# 133 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	waitmovement 0
# 134 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
# 62 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
# 135 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	msgbox CeruleanCity_House4_Text_WishCouldShareNewsWithOthers
# 136 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
# 63 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
# 137 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	release
# 138 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	end
# 139 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"

# 140 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"

# 141 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
CeruleanCity_House4_EventScript_Reward_SentSmall::
# 142 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
# 68 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
# 143 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	call CeruleanCity_House4_EventScript_MovementReactionToNews
# 144 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
# 69 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
# 145 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	msgbox CeruleanCity_House4_Text_ThanksForSpreadingNewsTakeThis
# 146 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
# 70 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
# 147 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	giveitem REWARD_ITEM
# 148 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
# 71 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
# 149 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	compare VAR_RESULT, FALSE
# 150 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	goto_if_eq CeruleanCity_House4_EventScript_Reward_SentSmall_2
# 151 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
CeruleanCity_House4_EventScript_Reward_SentSmall_1:
# 152 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
# 74 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
# 153 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	release
# 154 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	end
# 155 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"

# 156 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
CeruleanCity_House4_EventScript_Reward_SentSmall_2:
# 157 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
# 72 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
# 158 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	goto CeruleanCity_House4_EventScript_NoRoomForBerries
# 159 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	goto CeruleanCity_House4_EventScript_Reward_SentSmall_1
# 160 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"

# 161 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"

# 162 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
CeruleanCity_House4_EventScript_Reward_SentBig::
# 163 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
# 79 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
# 164 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	call CeruleanCity_House4_EventScript_MovementReactionToNews
# 165 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
# 80 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
# 166 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	msgbox CeruleanCity_House4_Text_MagnificentNewsSpreadHaveBerries
# 167 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
# 81 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
# 168 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	giveitem REWARD_ITEM, 4
# 169 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
# 82 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
# 170 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	compare VAR_RESULT, FALSE
# 171 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	goto_if_eq CeruleanCity_House4_EventScript_Reward_SentBig_2
# 172 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
CeruleanCity_House4_EventScript_Reward_SentBig_1:
# 173 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
# 85 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
# 174 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	release
# 175 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	end
# 176 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"

# 177 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
CeruleanCity_House4_EventScript_Reward_SentBig_2:
# 178 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
# 83 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
# 179 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	goto CeruleanCity_House4_EventScript_NoRoomForBerries
# 180 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	goto CeruleanCity_House4_EventScript_Reward_SentBig_1
# 181 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"

# 182 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"

# 183 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
CeruleanCity_House4_EventScript_AtMax::
# 184 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
# 90 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
# 185 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	applymovement LOCALID_WONDER_NEWS_BERRY_MAN, Common_Movement_FacePlayer
# 186 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
# 91 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
# 187 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	waitmovement 0
# 188 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
# 92 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
# 189 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	msgbox CeruleanCity_House4_Text_EnjoyingMyselfWithAllSortsOfNews
# 190 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
# 93 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
# 191 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	release
# 192 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	end
# 193 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"

# 194 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"

# 195 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
CeruleanCity_House4_EventScript_MovementReactionToNews::
# 196 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
# 98 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
# 197 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	playse SE_PIN
# 198 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
# 99 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
# 199 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	applymovement LOCALID_WONDER_NEWS_BERRY_MAN, Common_Movement_ExclamationMark
# 200 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
# 100 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
# 201 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	waitmovement 0
# 202 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
# 101 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
# 203 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	applymovement LOCALID_WONDER_NEWS_BERRY_MAN, Common_Movement_FacePlayer
# 204 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
# 102 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
# 205 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	waitmovement 0
# 206 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
# 103 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
# 207 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	applymovement LOCALID_WONDER_NEWS_BERRY_MAN, Common_Movement_Delay48
# 208 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
# 104 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
# 209 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	waitmovement 0
# 210 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	return
# 211 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"

# 212 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"

# 213 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
CeruleanCity_House4_EventScript_NoRoomForBerries::
# 214 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
# 109 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
# 215 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	msgbox CeruleanCity_House4_Text_YourBerryPouchIsFull
# 216 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
# 110 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
# 217 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	release
# 218 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	end
# 219 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"

# 220 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"

# 221 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
CeruleanCity_House4_Text_NothingEntertaining::
# 222 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
# 114 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
# 223 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	.string "Sigh…\n"
# 224 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	.string "Too much time, too little to do…\p"
# 225 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	.string "Is nothing entertaining happening\n"
# 226 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	.string "anywhere?$"
# 227 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"

# 228 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
CeruleanCity_House4_Text_NewNewsInformativeHaveThis::
# 229 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
# 121 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
# 230 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	.string "Ah!\n"
# 231 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	.string "A new news report!\p"
# 232 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	.string "Hmm…\p"
# 233 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	.string "I see!\n"
# 234 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	.string "That was quite informative!\p"
# 235 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	.string "I applaud you for taking interest\n"
# 236 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	.string "in the news at your young age.\p"
# 237 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	.string "As my thanks for sharing the news\n"
# 238 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	.string "with me, I want you to have this.$"
# 239 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"

# 240 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
CeruleanCity_House4_Text_IncredibleNewsHaveBerries::
# 241 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
# 133 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
# 242 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	.string "Oh, oh!\n"
# 243 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	.string "Th-this news report!\p"
# 244 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	.string "Hmm…\p"
# 245 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	.string "Amazing!\n"
# 246 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	.string "What an incredible piece of news!\p"
# 247 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	.string "I haven't seen a news story this\n"
# 248 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	.string "incredible in too long a time!\p"
# 249 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	.string "Thanks for sharing this fantastic\n"
# 250 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	.string "news. Have a bunch of BERRIES!$"
# 251 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"

# 252 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
CeruleanCity_House4_Text_WishCouldShareNewsWithOthers::
# 253 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
# 145 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
# 254 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	.string "It seems such a shame to not share\n"
# 255 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	.string "this news with other folks…\p"
# 256 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	.string "I wish I could tell someone…\n"
# 257 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	.string "Let others know the news…$"
# 258 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"

# 259 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
CeruleanCity_House4_Text_ThanksForSpreadingNewsTakeThis::
# 260 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
# 152 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
# 261 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	.string "Ah, you've spread the news for me?\p"
# 262 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	.string "Good news becomes worthwhile when\n"
# 263 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	.string "all sorts of people share it.\p"
# 264 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	.string "As my thanks for your spreading\n"
# 265 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	.string "the news, take this!$"
# 266 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"

# 267 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
CeruleanCity_House4_Text_MagnificentNewsSpreadHaveBerries::
# 268 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
# 160 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
# 269 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	.string "You've spread the news some more?\n"
# 270 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	.string "Magnificent!\p"
# 271 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	.string "That piece of news must be\n"
# 272 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	.string "delighted to be passed around so.\p"
# 273 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	.string "Yes, indeed!\p"
# 274 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	.string "Consider this a show of\n"
# 275 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	.string "appreciation from me and the news.\p"
# 276 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	.string "I'll give you more BERRIES than\n"
# 277 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	.string "I usually do.$"
# 278 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"

# 279 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
CeruleanCity_House4_Text_EnjoyingMyselfWithAllSortsOfNews::
# 280 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
# 172 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
# 281 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	.string "I'm quite enjoying myself with all\n"
# 282 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	.string "sorts of news.\p"
# 283 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	.string "Yes, I am satisfied!\n"
# 284 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	.string "I won't be bored for a while.$"
# 285 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"

# 286 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
CeruleanCity_House4_Text_YourBerryPouchIsFull::
# 287 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
# 179 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
# 288 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	.string "Hm? Your BERRY POUCH is full.\n"
# 289 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	.string "My gift remains ungiven, then.$"
