CeruleanCity_House4_Frlg_MapScripts::
	.byte 0


CeruleanCity_House4_EventScript_WonderNewsBerryMan::
# 4 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	lock
# 5 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	specialvar REWARD_TYPE, WonderNews_GetRewardInfo
# 6 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	copyvar REWARD_ITEM, VAR_RESULT
# 7 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	compare REWARD_TYPE, NEWS_REWARD_NONE
	goto_if_eq CeruleanCity_House4_EventScript_WonderNewsBerryMan_2
CeruleanCity_House4_EventScript_WonderNewsBerryMan_1:
# 10 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	compare REWARD_TYPE, NEWS_REWARD_RECV_SMALL
	goto_if_eq CeruleanCity_House4_EventScript_WonderNewsBerryMan_5
CeruleanCity_House4_EventScript_WonderNewsBerryMan_4:
# 13 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	compare REWARD_TYPE, NEWS_REWARD_RECV_BIG
	goto_if_eq CeruleanCity_House4_EventScript_WonderNewsBerryMan_8
CeruleanCity_House4_EventScript_WonderNewsBerryMan_7:
# 16 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	compare REWARD_TYPE, NEWS_REWARD_WAITING
	goto_if_eq CeruleanCity_House4_EventScript_WonderNewsBerryMan_11
CeruleanCity_House4_EventScript_WonderNewsBerryMan_10:
# 19 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	compare REWARD_TYPE, NEWS_REWARD_SENT_SMALL
	goto_if_eq CeruleanCity_House4_EventScript_WonderNewsBerryMan_14
CeruleanCity_House4_EventScript_WonderNewsBerryMan_13:
# 22 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	compare REWARD_TYPE, NEWS_REWARD_SENT_BIG
	goto_if_eq CeruleanCity_House4_EventScript_WonderNewsBerryMan_17
CeruleanCity_House4_EventScript_WonderNewsBerryMan_16:
# 25 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	compare REWARD_TYPE, NEWS_REWARD_AT_MAX
	goto_if_eq CeruleanCity_House4_EventScript_WonderNewsBerryMan_20
CeruleanCity_House4_EventScript_WonderNewsBerryMan_19:
	end

CeruleanCity_House4_EventScript_WonderNewsBerryMan_2:
# 8 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	goto CeruleanCity_House4_EventScript_NoNews
	goto CeruleanCity_House4_EventScript_WonderNewsBerryMan_1

CeruleanCity_House4_EventScript_WonderNewsBerryMan_5:
# 11 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	goto CeruleanCity_House4_EventScript_Reward_RecvSmall
	goto CeruleanCity_House4_EventScript_WonderNewsBerryMan_4

CeruleanCity_House4_EventScript_WonderNewsBerryMan_8:
# 14 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	goto CeruleanCity_House4_EventScript_Reward_RecvBig
	goto CeruleanCity_House4_EventScript_WonderNewsBerryMan_7

CeruleanCity_House4_EventScript_WonderNewsBerryMan_11:
# 17 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	goto CeruleanCity_House4_EventScript_Waiting
	goto CeruleanCity_House4_EventScript_WonderNewsBerryMan_10

CeruleanCity_House4_EventScript_WonderNewsBerryMan_14:
# 20 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	goto CeruleanCity_House4_EventScript_Reward_SentSmall
	goto CeruleanCity_House4_EventScript_WonderNewsBerryMan_13

CeruleanCity_House4_EventScript_WonderNewsBerryMan_17:
# 23 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	goto CeruleanCity_House4_EventScript_Reward_SentBig
	goto CeruleanCity_House4_EventScript_WonderNewsBerryMan_16

CeruleanCity_House4_EventScript_WonderNewsBerryMan_20:
# 26 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	goto CeruleanCity_House4_EventScript_AtMax
	goto CeruleanCity_House4_EventScript_WonderNewsBerryMan_19


CeruleanCity_House4_EventScript_NoNews::
# 32 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	msgbox CeruleanCity_House4_Text_NothingEntertaining
# 33 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	release
	end


CeruleanCity_House4_EventScript_Reward_RecvSmall::
# 38 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	call CeruleanCity_House4_EventScript_MovementReactionToNews
# 39 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	msgbox CeruleanCity_House4_Text_NewNewsInformativeHaveThis
# 40 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	giveitem REWARD_ITEM
# 41 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq CeruleanCity_House4_EventScript_Reward_RecvSmall_2
CeruleanCity_House4_EventScript_Reward_RecvSmall_1:
# 44 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	release
	end

CeruleanCity_House4_EventScript_Reward_RecvSmall_2:
# 42 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	goto CeruleanCity_House4_EventScript_NoRoomForBerries
	goto CeruleanCity_House4_EventScript_Reward_RecvSmall_1


CeruleanCity_House4_EventScript_Reward_RecvBig::
# 49 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	call CeruleanCity_House4_EventScript_MovementReactionToNews
# 50 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	msgbox CeruleanCity_House4_Text_IncredibleNewsHaveBerries
# 51 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	giveitem REWARD_ITEM, 4
# 52 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq CeruleanCity_House4_EventScript_Reward_RecvBig_2
CeruleanCity_House4_EventScript_Reward_RecvBig_1:
# 55 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	release
	end

CeruleanCity_House4_EventScript_Reward_RecvBig_2:
# 53 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	goto CeruleanCity_House4_EventScript_NoRoomForBerries
	goto CeruleanCity_House4_EventScript_Reward_RecvBig_1


CeruleanCity_House4_EventScript_Waiting::
# 60 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	applymovement LOCALID_WONDER_NEWS_BERRY_MAN, Common_Movement_FacePlayer
# 61 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	waitmovement 0
# 62 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	msgbox CeruleanCity_House4_Text_WishCouldShareNewsWithOthers
# 63 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	release
	end


CeruleanCity_House4_EventScript_Reward_SentSmall::
# 68 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	call CeruleanCity_House4_EventScript_MovementReactionToNews
# 69 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	msgbox CeruleanCity_House4_Text_ThanksForSpreadingNewsTakeThis
# 70 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	giveitem REWARD_ITEM
# 71 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq CeruleanCity_House4_EventScript_Reward_SentSmall_2
CeruleanCity_House4_EventScript_Reward_SentSmall_1:
# 74 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	release
	end

CeruleanCity_House4_EventScript_Reward_SentSmall_2:
# 72 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	goto CeruleanCity_House4_EventScript_NoRoomForBerries
	goto CeruleanCity_House4_EventScript_Reward_SentSmall_1


CeruleanCity_House4_EventScript_Reward_SentBig::
# 79 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	call CeruleanCity_House4_EventScript_MovementReactionToNews
# 80 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	msgbox CeruleanCity_House4_Text_MagnificentNewsSpreadHaveBerries
# 81 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	giveitem REWARD_ITEM, 4
# 82 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq CeruleanCity_House4_EventScript_Reward_SentBig_2
CeruleanCity_House4_EventScript_Reward_SentBig_1:
# 85 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	release
	end

CeruleanCity_House4_EventScript_Reward_SentBig_2:
# 83 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	goto CeruleanCity_House4_EventScript_NoRoomForBerries
	goto CeruleanCity_House4_EventScript_Reward_SentBig_1


CeruleanCity_House4_EventScript_AtMax::
# 90 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	applymovement LOCALID_WONDER_NEWS_BERRY_MAN, Common_Movement_FacePlayer
# 91 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	waitmovement 0
# 92 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	msgbox CeruleanCity_House4_Text_EnjoyingMyselfWithAllSortsOfNews
# 93 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	release
	end


CeruleanCity_House4_EventScript_MovementReactionToNews::
# 98 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	playse SE_PIN
# 99 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	applymovement LOCALID_WONDER_NEWS_BERRY_MAN, Common_Movement_ExclamationMark
# 100 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	waitmovement 0
# 101 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	applymovement LOCALID_WONDER_NEWS_BERRY_MAN, Common_Movement_FacePlayer
# 102 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	waitmovement 0
# 103 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	applymovement LOCALID_WONDER_NEWS_BERRY_MAN, Common_Movement_Delay48
# 104 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	waitmovement 0
	return


CeruleanCity_House4_EventScript_NoRoomForBerries::
# 109 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	msgbox CeruleanCity_House4_Text_YourBerryPouchIsFull
# 110 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	release
	end


CeruleanCity_House4_Text_NothingEntertaining::
# 114 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	.string "Sigh…\n"
	.string "Too much time, too little to do…\p"
	.string "Is nothing entertaining happening\n"
	.string "anywhere?$"

CeruleanCity_House4_Text_NewNewsInformativeHaveThis::
# 121 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	.string "Ah!\n"
	.string "A new news report!\p"
	.string "Hmm…\p"
	.string "I see!\n"
	.string "That was quite informative!\p"
	.string "I applaud you for taking interest\n"
	.string "in the news at your young age.\p"
	.string "As my thanks for sharing the news\n"
	.string "with me, I want you to have this.$"

CeruleanCity_House4_Text_IncredibleNewsHaveBerries::
# 133 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	.string "Oh, oh!\n"
	.string "Th-this news report!\p"
	.string "Hmm…\p"
	.string "Amazing!\n"
	.string "What an incredible piece of news!\p"
	.string "I haven't seen a news story this\n"
	.string "incredible in too long a time!\p"
	.string "Thanks for sharing this fantastic\n"
	.string "news. Have a bunch of BERRIES!$"

CeruleanCity_House4_Text_WishCouldShareNewsWithOthers::
# 145 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	.string "It seems such a shame to not share\n"
	.string "this news with other folks…\p"
	.string "I wish I could tell someone…\n"
	.string "Let others know the news…$"

CeruleanCity_House4_Text_ThanksForSpreadingNewsTakeThis::
# 152 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	.string "Ah, you've spread the news for me?\p"
	.string "Good news becomes worthwhile when\n"
	.string "all sorts of people share it.\p"
	.string "As my thanks for your spreading\n"
	.string "the news, take this!$"

CeruleanCity_House4_Text_MagnificentNewsSpreadHaveBerries::
# 160 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	.string "You've spread the news some more?\n"
	.string "Magnificent!\p"
	.string "That piece of news must be\n"
	.string "delighted to be passed around so.\p"
	.string "Yes, indeed!\p"
	.string "Consider this a show of\n"
	.string "appreciation from me and the news.\p"
	.string "I'll give you more BERRIES than\n"
	.string "I usually do.$"

CeruleanCity_House4_Text_EnjoyingMyselfWithAllSortsOfNews::
# 172 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	.string "I'm quite enjoying myself with all\n"
	.string "sorts of news.\p"
	.string "Yes, I am satisfied!\n"
	.string "I won't be bored for a while.$"

CeruleanCity_House4_Text_YourBerryPouchIsFull::
# 179 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	.string "Hm? Your BERRY POUCH is full.\n"
	.string "My gift remains ungiven, then.$"
