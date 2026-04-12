CeruleanCity_Gym_Frlg_MapScripts::
	.byte 0


CeruleanCity_Gym_EventScript_Misty::
# 4 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	famechecker FAMECHECKER_MISTY, FCPICKSTATE_COLORED, UpdatePickStateFromSpecialVar8005
# 5 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	trainerbattle_single TRAINER_LEADER_MISTY, CeruleanCity_Gym_Text_MistyIntro, CeruleanCity_Gym_Text_MistyDefeat, CeruleanCity_Gym_EventScript_MistyDefeated, NO_MUSIC
# 6 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	goto_if_unset FLAG_GOT_TM03_FROM_MISTY, CeruleanCity_Gym_EventScript_Misty_2
CeruleanCity_Gym_EventScript_Misty_1:
# 9 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	msgbox CeruleanCity_Gym_Text_ExplainTM03
# 10 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	release
	end

CeruleanCity_Gym_EventScript_Misty_2:
# 7 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	goto CeruleanCity_Gym_EventScript_GiveTM03
	goto CeruleanCity_Gym_EventScript_Misty_1


CeruleanCity_Gym_EventScript_MistyDefeated::
# 15 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	famechecker FAMECHECKER_MISTY, 1
# 16 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	setflag FLAG_DEFEATED_MISTY
# 17 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	setflag FLAG_BADGE02_GET
# 18 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	setrespawn HEAL_LOCATION_CERULEAN_CITY
# 19 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	set_gym_trainers_frlg 2
# 20 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	goto CeruleanCity_Gym_EventScript_GiveTM03
	end


CeruleanCity_Gym_EventScript_GiveTM03::
# 25 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	msgbox CeruleanCity_Gym_Text_ExplainCascadeBadge
# 26 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	checkitemspace ITEM_TM03
# 27 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq CeruleanCity_Gym_EventScript_GiveTM03_2
CeruleanCity_Gym_EventScript_GiveTM03_1:
# 30 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	giveitem_msg CeruleanCity_Gym_Text_ReceivedTM03FromMisty, ITEM_TM03
# 31 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	setflag FLAG_GOT_TM03_FROM_MISTY
# 32 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	msgbox CeruleanCity_Gym_Text_ExplainTM03
# 33 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	release
	end

CeruleanCity_Gym_EventScript_GiveTM03_2:
# 28 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	goto CeruleanCity_Gym_EventScript_NoRoomForTM03
	goto CeruleanCity_Gym_EventScript_GiveTM03_1


CeruleanCity_Gym_EventScript_NoRoomForTM03::
# 38 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	msgbox CeruleanCity_Gym_Text_BetterMakeRoomForThis
# 39 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	release
	end


CeruleanCity_Gym_EventScript_Diana::
# 44 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	trainerbattle_single TRAINER_PICNICKER_DIANA, CeruleanCity_Gym_Text_DianaIntro, CeruleanCity_Gym_Text_DianaDefeat
# 45 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	msgbox CeruleanCity_Gym_Text_DianaPostBattle, MSGBOX_AUTOCLOSE
	end


CeruleanCity_Gym_EventScript_Luis::
# 50 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	trainerbattle_single TRAINER_SWIMMER_MALE_LUIS, CeruleanCity_Gym_Text_LuisIntro, CeruleanCity_Gym_Text_LuisDefeat
# 51 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	famechecker FAMECHECKER_MISTY, 2
# 52 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	msgbox CeruleanCity_Gym_Text_LuisPostBattle, MSGBOX_AUTOCLOSE
	end


CeruleanCity_Gym_EventScript_GymGuy::
# 57 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	lock
# 58 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	faceplayer
# 59 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	goto_if_set FLAG_DEFEATED_MISTY, CeruleanCity_Gym_EventScript_GymGuy_2
CeruleanCity_Gym_EventScript_GymGuy_1:
# 62 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	msgbox CeruleanCity_Gym_Text_GymGuyAdvice
# 63 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	release
	end

CeruleanCity_Gym_EventScript_GymGuy_2:
# 60 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	goto CeruleanCity_Gym_EventScript_GymGuyPostVictory
	goto CeruleanCity_Gym_EventScript_GymGuy_1


CeruleanCity_Gym_EventScript_GymGuyPostVictory::
# 68 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	msgbox CeruleanCity_Gym_Text_WeMakePrettyGoodTeam
# 69 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	release
	end


CeruleanCity_Gym_EventScript_GymStatue::
# 74 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	lockall
# 75 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, CeruleanCity_Gym_EventScript_GymStatue_2
CeruleanCity_Gym_EventScript_GymStatue_1:
# 78 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	msgbox CeruleanCity_Gym_Text_GymStatue
# 79 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	releaseall
	end

CeruleanCity_Gym_EventScript_GymStatue_2:
# 76 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	goto CeruleanCity_Gym_EventScript_GymStatuePostVictory
	goto CeruleanCity_Gym_EventScript_GymStatue_1


CeruleanCity_Gym_EventScript_GymStatuePostVictory::
# 84 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	msgbox CeruleanCity_Gym_Text_GymStatuePlayerWon
# 85 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	releaseall
	end


CeruleanCity_Gym_Text_MistyIntro::
# 89 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "Hi, you're a new face!\p"
	.string "Only those TRAINERS who have a\n"
	.string "policy about POKéMON can turn pro.\p"
	.string "What is your approach when you\n"
	.string "catch and train POKéMON?\p"
	.string "My policy is an all-out offensive\n"
	.string "with WATER-type POKéMON!{PLAY_BGM}{MUS_RG_ENCOUNTER_GYM_LEADER}$"

CeruleanCity_Gym_Text_ExplainTM03::
# 99 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "TM03 teaches WATER PULSE.\p"
	.string "Use it on an aquatic POKéMON!$"

CeruleanCity_Gym_Text_ExplainCascadeBadge::
# 104 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "The CASCADEBADGE makes all\n"
	.string "POKéMON up to Lv. 30 obey.\p"
	.string "That includes even outsiders you\n"
	.string "got in trades.\p"
	.string "There's more. You can now use CUT\n"
	.string "anytime, even out of battle.\p"
	.string "You can CUT down small trees to\n"
	.string "open new pathways.\p"
	.string "You can also have my favorite TM.$"

CeruleanCity_Gym_Text_ReceivedTM03FromMisty::
# 116 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "{PLAYER} received TM03\n"
	.string "from MISTY.$"

CeruleanCity_Gym_Text_BetterMakeRoomForThis::
# 121 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "You better make room for this!$"

CeruleanCity_Gym_Text_MistyDefeat::
# 125 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "Wow!\n"
	.string "You're too much!\p"
	.string "All right!\p"
	.string "You can have the CASCADEBADGE to\n"
	.string "show you beat me.$"

CeruleanCity_Gym_Text_DianaIntro::
# 133 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "What? You?\n"
	.string "I'm more than good enough for you!\p"
	.string "MISTY won't have to be bothered.$"

CeruleanCity_Gym_Text_DianaDefeat::
# 139 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "You overwhelmed me!$"

CeruleanCity_Gym_Text_DianaPostBattle::
# 143 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "You have to face other TRAINERS\n"
	.string "to see how good you really are.$"

CeruleanCity_Gym_Text_LuisIntro::
# 148 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "Splash!\p"
	.string "I'm first up!\n"
	.string "Let's do it!$"

CeruleanCity_Gym_Text_LuisDefeat::
# 154 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "That can't be!$"

CeruleanCity_Gym_Text_LuisPostBattle::
# 158 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "MISTY is a TRAINER who's going to\n"
	.string "keep improving.\p"
	.string "She won't lose to someone like you!$"

CeruleanCity_Gym_Text_GymGuyAdvice::
# 164 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "Yo!\n"
	.string "Champ in the making!\p"
	.string "Let me give you some advice!\p"
	.string "The LEADER, MISTY, is a pro who\n"
	.string "uses WATER-type POKéMON.\p"
	.string "You can drain all their water with\n"
	.string "GRASS-type POKéMON.\p"
	.string "Or, you might use ELECTRIC-type\n"
	.string "POKéMON and zap them!$"

CeruleanCity_Gym_Text_WeMakePrettyGoodTeam::
# 176 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "You beat MISTY!\n"
	.string "See, what'd I tell ya?\p"
	.string "You and me, kid, we make a pretty\n"
	.string "darn-good team!$"

CeruleanCity_Gym_Text_GymStatue::
# 183 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "CERULEAN POKéMON GYM\n"
	.string "LEADER: MISTY\p"
	.string "WINNING TRAINERS:\n"
	.string "{RIVAL}$"

CeruleanCity_Gym_Text_GymStatuePlayerWon::
# 190 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "CERULEAN POKéMON GYM\n"
	.string "LEADER: MISTY\p"
	.string "WINNING TRAINERS:\n"
	.string "{RIVAL}, {PLAYER}$"
