LilycoveCity_House3_MapScripts::
# 2 "data/maps/LilycoveCity_House3/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LilycoveCity_House3_OnTransition
	.byte 0


LilycoveCity_House3_OnTransition::
# 6 "data/maps/LilycoveCity_House3/scripts.pory"
	random 4
# 7 "data/maps/LilycoveCity_House3/scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
	end


LilycoveCity_House3_EventScript_PokefanF::
# 12 "data/maps/LilycoveCity_House3/scripts.pory"
	lock
# 13 "data/maps/LilycoveCity_House3/scripts.pory"
	faceplayer
# 14 "data/maps/LilycoveCity_House3/scripts.pory"
	msgbox LilycoveCity_House3_Text_LearnFromMasterOfPokeblocks, MSGBOX_YESNO
# 15 "data/maps/LilycoveCity_House3/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq LilycoveCity_House3_EventScript_PokefanF_2
LilycoveCity_House3_EventScript_PokefanF_1:
# 18 "data/maps/LilycoveCity_House3/scripts.pory"
	msgbox LilycoveCity_House3_Text_ExplainPokeblocks, MSGBOX_DEFAULT
# 19 "data/maps/LilycoveCity_House3/scripts.pory"
	closemessage
# 20 "data/maps/LilycoveCity_House3/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 21 "data/maps/LilycoveCity_House3/scripts.pory"
	waitmovement 0
# 22 "data/maps/LilycoveCity_House3/scripts.pory"
	release
	end

LilycoveCity_House3_EventScript_PokefanF_2:
# 16 "data/maps/LilycoveCity_House3/scripts.pory"
	goto LilycoveCity_House3_EventScript_DeclinePokeblockLearn
	goto LilycoveCity_House3_EventScript_PokefanF_1


LilycoveCity_House3_EventScript_DeclinePokeblockLearn::
# 27 "data/maps/LilycoveCity_House3/scripts.pory"
	msgbox LilycoveCity_House3_Text_OhAreYouSure, MSGBOX_DEFAULT
# 28 "data/maps/LilycoveCity_House3/scripts.pory"
	closemessage
# 29 "data/maps/LilycoveCity_House3/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 30 "data/maps/LilycoveCity_House3/scripts.pory"
	waitmovement 0
# 31 "data/maps/LilycoveCity_House3/scripts.pory"
	release
	end


LilycoveCity_House3_EventScript_Man::
# 36 "data/maps/LilycoveCity_House3/scripts.pory"
	lock
# 37 "data/maps/LilycoveCity_House3/scripts.pory"
	faceplayer
# 38 "data/maps/LilycoveCity_House3/scripts.pory"
	msgbox LilycoveCity_House3_Text_HappyToHaveQuadruplets, MSGBOX_DEFAULT
# 39 "data/maps/LilycoveCity_House3/scripts.pory"
	closemessage
# 40 "data/maps/LilycoveCity_House3/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 41 "data/maps/LilycoveCity_House3/scripts.pory"
	waitmovement 0
# 42 "data/maps/LilycoveCity_House3/scripts.pory"
	release
	end


LilycoveCity_House3_EventScript_GameBoyKid1::
# 47 "data/maps/LilycoveCity_House3/scripts.pory"
	lock
# 48 "data/maps/LilycoveCity_House3/scripts.pory"
	faceplayer
# 49 "data/maps/LilycoveCity_House3/scripts.pory"
	switch VAR_TEMP_1
# 50 "data/maps/LilycoveCity_House3/scripts.pory"
	case 0, LilycoveCity_House3_EventScript_GameBoyKid1_3
# 52 "data/maps/LilycoveCity_House3/scripts.pory"
	case 1, LilycoveCity_House3_EventScript_GameBoyKid1_4
# 54 "data/maps/LilycoveCity_House3/scripts.pory"
	case 2, LilycoveCity_House3_EventScript_GameBoyKid1_5
# 56 "data/maps/LilycoveCity_House3/scripts.pory"
	case 3, LilycoveCity_House3_EventScript_GameBoyKid1_6
LilycoveCity_House3_EventScript_GameBoyKid1_1:
	end

LilycoveCity_House3_EventScript_GameBoyKid1_3:
# 51 "data/maps/LilycoveCity_House3/scripts.pory"
	goto LilycoveCity_House3_EventScript_WereDoingMultiBattle
	goto LilycoveCity_House3_EventScript_GameBoyKid1_1

LilycoveCity_House3_EventScript_GameBoyKid1_4:
# 53 "data/maps/LilycoveCity_House3/scripts.pory"
	goto LilycoveCity_House3_EventScript_WereMixingRecords
	goto LilycoveCity_House3_EventScript_GameBoyKid1_1

LilycoveCity_House3_EventScript_GameBoyKid1_5:
# 55 "data/maps/LilycoveCity_House3/scripts.pory"
	goto LilycoveCity_House3_EventScript_WereBlendingBerries
	goto LilycoveCity_House3_EventScript_GameBoyKid1_1

LilycoveCity_House3_EventScript_GameBoyKid1_6:
# 57 "data/maps/LilycoveCity_House3/scripts.pory"
	goto LilycoveCity_House3_EventScript_WereDoingContest
	goto LilycoveCity_House3_EventScript_GameBoyKid1_1


LilycoveCity_House3_EventScript_GameBoyKid2::
# 63 "data/maps/LilycoveCity_House3/scripts.pory"
	lock
# 64 "data/maps/LilycoveCity_House3/scripts.pory"
	faceplayer
# 65 "data/maps/LilycoveCity_House3/scripts.pory"
	switch VAR_TEMP_1
# 66 "data/maps/LilycoveCity_House3/scripts.pory"
	case 0, LilycoveCity_House3_EventScript_GameBoyKid2_3
# 68 "data/maps/LilycoveCity_House3/scripts.pory"
	case 1, LilycoveCity_House3_EventScript_GameBoyKid2_4
# 70 "data/maps/LilycoveCity_House3/scripts.pory"
	case 2, LilycoveCity_House3_EventScript_GameBoyKid2_5
# 72 "data/maps/LilycoveCity_House3/scripts.pory"
	case 3, LilycoveCity_House3_EventScript_GameBoyKid2_6
LilycoveCity_House3_EventScript_GameBoyKid2_1:
	end

LilycoveCity_House3_EventScript_GameBoyKid2_3:
# 67 "data/maps/LilycoveCity_House3/scripts.pory"
	goto LilycoveCity_House3_EventScript_WereDoingMultiBattle
	goto LilycoveCity_House3_EventScript_GameBoyKid2_1

LilycoveCity_House3_EventScript_GameBoyKid2_4:
# 69 "data/maps/LilycoveCity_House3/scripts.pory"
	goto LilycoveCity_House3_EventScript_WereMixingRecords
	goto LilycoveCity_House3_EventScript_GameBoyKid2_1

LilycoveCity_House3_EventScript_GameBoyKid2_5:
# 71 "data/maps/LilycoveCity_House3/scripts.pory"
	goto LilycoveCity_House3_EventScript_WereBlendingBerries
	goto LilycoveCity_House3_EventScript_GameBoyKid2_1

LilycoveCity_House3_EventScript_GameBoyKid2_6:
# 73 "data/maps/LilycoveCity_House3/scripts.pory"
	goto LilycoveCity_House3_EventScript_WereDoingContest
	goto LilycoveCity_House3_EventScript_GameBoyKid2_1


LilycoveCity_House3_EventScript_GameBoyKid3::
# 79 "data/maps/LilycoveCity_House3/scripts.pory"
	lock
# 80 "data/maps/LilycoveCity_House3/scripts.pory"
	faceplayer
# 81 "data/maps/LilycoveCity_House3/scripts.pory"
	switch VAR_TEMP_1
# 82 "data/maps/LilycoveCity_House3/scripts.pory"
	case 0, LilycoveCity_House3_EventScript_GameBoyKid3_3
# 84 "data/maps/LilycoveCity_House3/scripts.pory"
	case 1, LilycoveCity_House3_EventScript_GameBoyKid3_4
# 86 "data/maps/LilycoveCity_House3/scripts.pory"
	case 2, LilycoveCity_House3_EventScript_GameBoyKid3_5
# 88 "data/maps/LilycoveCity_House3/scripts.pory"
	case 3, LilycoveCity_House3_EventScript_GameBoyKid3_6
LilycoveCity_House3_EventScript_GameBoyKid3_1:
	end

LilycoveCity_House3_EventScript_GameBoyKid3_3:
# 83 "data/maps/LilycoveCity_House3/scripts.pory"
	goto LilycoveCity_House3_EventScript_WereDoingMultiBattle
	goto LilycoveCity_House3_EventScript_GameBoyKid3_1

LilycoveCity_House3_EventScript_GameBoyKid3_4:
# 85 "data/maps/LilycoveCity_House3/scripts.pory"
	goto LilycoveCity_House3_EventScript_WereMixingRecords
	goto LilycoveCity_House3_EventScript_GameBoyKid3_1

LilycoveCity_House3_EventScript_GameBoyKid3_5:
# 87 "data/maps/LilycoveCity_House3/scripts.pory"
	goto LilycoveCity_House3_EventScript_WereBlendingBerries
	goto LilycoveCity_House3_EventScript_GameBoyKid3_1

LilycoveCity_House3_EventScript_GameBoyKid3_6:
# 89 "data/maps/LilycoveCity_House3/scripts.pory"
	goto LilycoveCity_House3_EventScript_WereDoingContest
	goto LilycoveCity_House3_EventScript_GameBoyKid3_1


LilycoveCity_House3_EventScript_GameBoyKid4::
# 95 "data/maps/LilycoveCity_House3/scripts.pory"
	lock
# 96 "data/maps/LilycoveCity_House3/scripts.pory"
	faceplayer
# 97 "data/maps/LilycoveCity_House3/scripts.pory"
	switch VAR_TEMP_1
# 98 "data/maps/LilycoveCity_House3/scripts.pory"
	case 0, LilycoveCity_House3_EventScript_GameBoyKid4_3
# 100 "data/maps/LilycoveCity_House3/scripts.pory"
	case 1, LilycoveCity_House3_EventScript_GameBoyKid4_4
# 102 "data/maps/LilycoveCity_House3/scripts.pory"
	case 2, LilycoveCity_House3_EventScript_GameBoyKid4_5
# 104 "data/maps/LilycoveCity_House3/scripts.pory"
	case 3, LilycoveCity_House3_EventScript_GameBoyKid4_6
LilycoveCity_House3_EventScript_GameBoyKid4_1:
	end

LilycoveCity_House3_EventScript_GameBoyKid4_3:
# 99 "data/maps/LilycoveCity_House3/scripts.pory"
	goto LilycoveCity_House3_EventScript_WereDoingMultiBattle
	goto LilycoveCity_House3_EventScript_GameBoyKid4_1

LilycoveCity_House3_EventScript_GameBoyKid4_4:
# 101 "data/maps/LilycoveCity_House3/scripts.pory"
	goto LilycoveCity_House3_EventScript_WereMixingRecords
	goto LilycoveCity_House3_EventScript_GameBoyKid4_1

LilycoveCity_House3_EventScript_GameBoyKid4_5:
# 103 "data/maps/LilycoveCity_House3/scripts.pory"
	goto LilycoveCity_House3_EventScript_WereBlendingBerries
	goto LilycoveCity_House3_EventScript_GameBoyKid4_1

LilycoveCity_House3_EventScript_GameBoyKid4_6:
# 105 "data/maps/LilycoveCity_House3/scripts.pory"
	goto LilycoveCity_House3_EventScript_WereDoingContest
	goto LilycoveCity_House3_EventScript_GameBoyKid4_1


LilycoveCity_House3_EventScript_WereDoingMultiBattle::
# 111 "data/maps/LilycoveCity_House3/scripts.pory"
	msgbox LilycoveCity_House3_Text_GoingToWinMultiBattles, MSGBOX_DEFAULT
# 112 "data/maps/LilycoveCity_House3/scripts.pory"
	release
	end


LilycoveCity_House3_EventScript_WereMixingRecords::
# 117 "data/maps/LilycoveCity_House3/scripts.pory"
	msgbox LilycoveCity_House3_Text_LikeMixingAtRecordCorner, MSGBOX_DEFAULT
# 118 "data/maps/LilycoveCity_House3/scripts.pory"
	release
	end


LilycoveCity_House3_EventScript_WereBlendingBerries::
# 123 "data/maps/LilycoveCity_House3/scripts.pory"
	msgbox LilycoveCity_House3_Text_MakePokeblocksWithBerryBlender, MSGBOX_DEFAULT
# 124 "data/maps/LilycoveCity_House3/scripts.pory"
	release
	end


LilycoveCity_House3_EventScript_WereDoingContest::
# 129 "data/maps/LilycoveCity_House3/scripts.pory"
	msgbox LilycoveCity_House3_Text_GoingToEnterContest, MSGBOX_DEFAULT
# 130 "data/maps/LilycoveCity_House3/scripts.pory"
	release
	end


LilycoveCity_House3_Text_LearnFromMasterOfPokeblocks::
# 134 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "Oh, my, my! Are you traveling alone?\n"
	.string "But you're so young! Good for you!\p"
	.string "I'm sure my kids could learn a thing\n"
	.string "or two from you!\p"
	.string "Me? I'm a master of {POKEBLOCK}S.\p"
	.string "If I get serious just a little, why,\n"
	.string "I can concoct great {POKEBLOCK}S.\p"
	.string "Would you like to learn from me,\n"
	.string "a master of {POKEBLOCK}S?$"

LilycoveCity_House3_Text_OhAreYouSure::
# 146 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "Oh? Are you sure?\p"
	.string "You shouldn't always try to do\n"
	.string "everything by yourself, dear!$"

LilycoveCity_House3_Text_ExplainPokeblocks::
# 152 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "Oh, good! You're a smart soul!\n"
	.string "This is a bit long, so listen up!\p"
	.string "Are you ready?\p"
	.string "If you look at {POKEBLOCK}S, you should see\n"
	.string "that they are rated on how they feel.\p"
	.string "The lower the feel rating,\n"
	.string "the better it is. Don't forget this!\p"
	.string "A good {POKEBLOCK} has a low feel\n"
	.string "rating and a high level.\p"
	.string "A POKéMON can eat more good\n"
	.string "{POKEBLOCK}S than ordinary ones, too.\p"
	.string "And this is important.\p"
	.string "If you want to make smooth {POKEBLOCK}S,\n"
	.string "use different kinds of BERRIES.\p"
	.string "Don't be stingy--the kinds of BERRIES\n"
	.string "affect the smoothness of {POKEBLOCK}S.\p"
	.string "And another thing.\p"
	.string "The more people blending BERRIES,\n"
	.string "the smoother the {POKEBLOCK}S.\p"
	.string "That's why you should talk to other\n"
	.string "people and make {POKEBLOCK}S together.\p"
	.string "That's about all you need to know to\n"
	.string "make good {POKEBLOCK}S.\p"
	.string "If everyone had POKéMON they love,\n"
	.string "smooth {POKEBLOCK}S, and a loving family,\l"
	.string "the world would be a happier place.\p"
	.string "Don't give up, dear!$"

LilycoveCity_House3_Text_HappyToHaveQuadruplets::
# 182 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "When my wife gave birth to quadruplets,\n"
	.string "you bet I was shocked.\p"
	.string "But, now, seeing them play together,\n"
	.string "it makes me happy.$"

LilycoveCity_House3_Text_GoingToWinMultiBattles::
# 189 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "We're having MULTI BATTLES, but I know\n"
	.string "I'm going to win.$"

LilycoveCity_House3_Text_LikeMixingAtRecordCorner::
# 194 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "We like mixing stuff at\n"
	.string "the RECORD CORNER.\p"
	.string "But what gets mixed up?$"

LilycoveCity_House3_Text_MakePokeblocksWithBerryBlender::
# 200 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "We're going to make super {POKEBLOCK}S\n"
	.string "with a BERRY BLENDER!$"

LilycoveCity_House3_Text_GoingToEnterContest::
# 205 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "I want to brag about how tough my\n"
	.string "POKéMON is, so we're going to enter\l"
	.string "a CONTEST together.$"
