BattleFrontier_Lounge1_MapScripts::
	.byte 0


BattleFrontier_Lounge1_EventScript_Breeder::
# 4 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	lock
# 5 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	faceplayer
# 6 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	goto_if_unset FLAG_MET_BATTLE_FRONTIER_BREEDER, BattleFrontier_Lounge1_EventScript_Breeder_2
BattleFrontier_Lounge1_EventScript_Breeder_1:
# 9 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	goto_if_set FLAG_MET_BATTLE_FRONTIER_BREEDER, BattleFrontier_Lounge1_EventScript_Breeder_5
BattleFrontier_Lounge1_EventScript_Breeder_4:
# 12 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	setflag FLAG_MET_BATTLE_FRONTIER_BREEDER
# 13 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	goto BattleFrontier_Lounge1_EventScript_ChooseMonToShowBreeder
	end

BattleFrontier_Lounge1_EventScript_Breeder_2:
# 7 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	call BattleFrontier_Lounge1_EventScript_BreederIntro
	goto BattleFrontier_Lounge1_EventScript_Breeder_1

BattleFrontier_Lounge1_EventScript_Breeder_5:
# 10 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	call BattleFrontier_Lounge1_EventScript_AlreadyMetBreeder
	goto BattleFrontier_Lounge1_EventScript_Breeder_4


BattleFrontier_Lounge1_EventScript_ChooseMonToShowBreeder::
# 18 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	chooseboxmon
# 19 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	waitstate
# 20 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_ne BattleFrontier_Lounge1_EventScript_ChooseMonToShowBreeder_2
BattleFrontier_Lounge1_EventScript_ChooseMonToShowBreeder_1:
# 23 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq BattleFrontier_Lounge1_EventScript_ChooseMonToShowBreeder_5
BattleFrontier_Lounge1_EventScript_ChooseMonToShowBreeder_4:
	end

BattleFrontier_Lounge1_EventScript_ChooseMonToShowBreeder_2:
# 21 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	goto BattleFrontier_Lounge1_EventScript_ShowMonToBreeder
	goto BattleFrontier_Lounge1_EventScript_ChooseMonToShowBreeder_1

BattleFrontier_Lounge1_EventScript_ChooseMonToShowBreeder_5:
# 24 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	goto BattleFrontier_Lounge1_EventScript_CancelMonSelect
	goto BattleFrontier_Lounge1_EventScript_ChooseMonToShowBreeder_4


BattleFrontier_Lounge1_EventScript_BreederIntro::
# 30 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	msgbox BattleFrontier_Lounge1_Text_PokemonBreederIntro, MSGBOX_DEFAULT
	return


BattleFrontier_Lounge1_EventScript_AlreadyMetBreeder::
# 35 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	msgbox BattleFrontier_Lounge1_Text_LetsLookAtYourPokemon, MSGBOX_DEFAULT
	return


BattleFrontier_Lounge1_EventScript_ShowMonToBreeder::
# 40 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 41 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	compare VAR_RESULT, SPECIES_EGG
	goto_if_eq BattleFrontier_Lounge1_EventScript_ShowMonToBreeder_2
BattleFrontier_Lounge1_EventScript_ShowMonToBreeder_1:
# 44 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	special BufferVarsForIVRater
# 45 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	compare VAR_0x8005, 90
	goto_if_le BattleFrontier_Lounge1_EventScript_ShowMonToBreeder_5
BattleFrontier_Lounge1_EventScript_ShowMonToBreeder_4:
# 48 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	compare VAR_0x8005, 120
	goto_if_le BattleFrontier_Lounge1_EventScript_ShowMonToBreeder_8
BattleFrontier_Lounge1_EventScript_ShowMonToBreeder_7:
# 51 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	compare VAR_0x8005, 150
	goto_if_le BattleFrontier_Lounge1_EventScript_ShowMonToBreeder_11
BattleFrontier_Lounge1_EventScript_ShowMonToBreeder_10:
# 54 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	compare VAR_0x8005, 151
	goto_if_ge BattleFrontier_Lounge1_EventScript_ShowMonToBreeder_14
BattleFrontier_Lounge1_EventScript_ShowMonToBreeder_13:
	end

BattleFrontier_Lounge1_EventScript_ShowMonToBreeder_2:
# 42 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	goto BattleFrontier_Lounge1_EventScript_ShowEggToBreeder
	goto BattleFrontier_Lounge1_EventScript_ShowMonToBreeder_1

BattleFrontier_Lounge1_EventScript_ShowMonToBreeder_5:
# 46 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	goto BattleFrontier_Lounge1_EventScript_AverageTotalIVs
	goto BattleFrontier_Lounge1_EventScript_ShowMonToBreeder_4

BattleFrontier_Lounge1_EventScript_ShowMonToBreeder_8:
# 49 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	goto BattleFrontier_Lounge1_EventScript_AboveAverageTotalIVs
	goto BattleFrontier_Lounge1_EventScript_ShowMonToBreeder_7

BattleFrontier_Lounge1_EventScript_ShowMonToBreeder_11:
# 52 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	goto BattleFrontier_Lounge1_EventScript_HighTotalIVs
	goto BattleFrontier_Lounge1_EventScript_ShowMonToBreeder_10

BattleFrontier_Lounge1_EventScript_ShowMonToBreeder_14:
# 55 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	goto BattleFrontier_Lounge1_EventScript_VeryHighTotalIVs
	goto BattleFrontier_Lounge1_EventScript_ShowMonToBreeder_13


BattleFrontier_Lounge1_EventScript_ShowEggToBreeder::
# 61 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	msgbox BattleFrontier_Lounge1_Text_EvenICantTell, MSGBOX_DEFAULT
# 62 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	goto BattleFrontier_Lounge1_EventScript_ChooseMonToShowBreeder
	end


BattleFrontier_Lounge1_EventScript_HighestIVStat::
# 67 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	compare VAR_0x8006, STAT_HP
	goto_if_eq BattleFrontier_Lounge1_EventScript_HighestIVStat_2
BattleFrontier_Lounge1_EventScript_HighestIVStat_1:
# 70 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	compare VAR_0x8006, STAT_ATK
	goto_if_eq BattleFrontier_Lounge1_EventScript_HighestIVStat_5
BattleFrontier_Lounge1_EventScript_HighestIVStat_4:
# 73 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	compare VAR_0x8006, STAT_DEF
	goto_if_eq BattleFrontier_Lounge1_EventScript_HighestIVStat_8
BattleFrontier_Lounge1_EventScript_HighestIVStat_7:
# 76 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	compare VAR_0x8006, STAT_SPEED
	goto_if_eq BattleFrontier_Lounge1_EventScript_HighestIVStat_11
BattleFrontier_Lounge1_EventScript_HighestIVStat_10:
# 79 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	compare VAR_0x8006, STAT_SPATK
	goto_if_eq BattleFrontier_Lounge1_EventScript_HighestIVStat_14
BattleFrontier_Lounge1_EventScript_HighestIVStat_13:
# 82 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	compare VAR_0x8006, STAT_SPDEF
	goto_if_eq BattleFrontier_Lounge1_EventScript_HighestIVStat_17
BattleFrontier_Lounge1_EventScript_HighestIVStat_16:
	end

BattleFrontier_Lounge1_EventScript_HighestIVStat_2:
# 68 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	goto BattleFrontier_Lounge1_EventScript_HighestIVHP
	goto BattleFrontier_Lounge1_EventScript_HighestIVStat_1

BattleFrontier_Lounge1_EventScript_HighestIVStat_5:
# 71 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	goto BattleFrontier_Lounge1_EventScript_HighestIVAtk
	goto BattleFrontier_Lounge1_EventScript_HighestIVStat_4

BattleFrontier_Lounge1_EventScript_HighestIVStat_8:
# 74 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	goto BattleFrontier_Lounge1_EventScript_HighestIVDef
	goto BattleFrontier_Lounge1_EventScript_HighestIVStat_7

BattleFrontier_Lounge1_EventScript_HighestIVStat_11:
# 77 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	goto BattleFrontier_Lounge1_EventScript_HighestIVSpeed
	goto BattleFrontier_Lounge1_EventScript_HighestIVStat_10

BattleFrontier_Lounge1_EventScript_HighestIVStat_14:
# 80 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	goto BattleFrontier_Lounge1_EventScript_HighestIVSpAtk
	goto BattleFrontier_Lounge1_EventScript_HighestIVStat_13

BattleFrontier_Lounge1_EventScript_HighestIVStat_17:
# 83 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	goto BattleFrontier_Lounge1_EventScript_HighestIVSpDef
	goto BattleFrontier_Lounge1_EventScript_HighestIVStat_16


BattleFrontier_Lounge1_EventScript_HighestIVValue::
# 89 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	compare VAR_0x8007, 15
	goto_if_le BattleFrontier_Lounge1_EventScript_HighestIVValue_2
BattleFrontier_Lounge1_EventScript_HighestIVValue_1:
# 92 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	compare VAR_0x8007, 25
	goto_if_le BattleFrontier_Lounge1_EventScript_HighestIVValue_5
BattleFrontier_Lounge1_EventScript_HighestIVValue_4:
# 95 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	compare VAR_0x8007, 30
	goto_if_le BattleFrontier_Lounge1_EventScript_HighestIVValue_8
BattleFrontier_Lounge1_EventScript_HighestIVValue_7:
# 98 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	compare VAR_0x8007, 31
	goto_if_ge BattleFrontier_Lounge1_EventScript_HighestIVValue_11
BattleFrontier_Lounge1_EventScript_HighestIVValue_10:
	end

BattleFrontier_Lounge1_EventScript_HighestIVValue_2:
# 90 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	goto BattleFrontier_Lounge1_EventScript_HighestIVLow
	goto BattleFrontier_Lounge1_EventScript_HighestIVValue_1

BattleFrontier_Lounge1_EventScript_HighestIVValue_5:
# 93 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	goto BattleFrontier_Lounge1_EventScript_HighestIVMid
	goto BattleFrontier_Lounge1_EventScript_HighestIVValue_4

BattleFrontier_Lounge1_EventScript_HighestIVValue_8:
# 96 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	goto BattleFrontier_Lounge1_EventScript_HighestIVHigh
	goto BattleFrontier_Lounge1_EventScript_HighestIVValue_7

BattleFrontier_Lounge1_EventScript_HighestIVValue_11:
# 99 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	goto BattleFrontier_Lounge1_EventScript_HighestIVMax
	goto BattleFrontier_Lounge1_EventScript_HighestIVValue_10


BattleFrontier_Lounge1_EventScript_EndBreederComments::
# 105 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	release
	end


BattleFrontier_Lounge1_EventScript_AverageTotalIVs::
# 110 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	msgbox BattleFrontier_Lounge1_Text_AverageAbility, MSGBOX_DEFAULT
# 111 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	goto BattleFrontier_Lounge1_EventScript_HighestIVStat
	end


BattleFrontier_Lounge1_EventScript_AboveAverageTotalIVs::
# 116 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	msgbox BattleFrontier_Lounge1_Text_BetterThanAverageAbility, MSGBOX_DEFAULT
# 117 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	goto BattleFrontier_Lounge1_EventScript_HighestIVStat
	end


BattleFrontier_Lounge1_EventScript_HighTotalIVs::
# 122 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	msgbox BattleFrontier_Lounge1_Text_ImpressiveAbility, MSGBOX_DEFAULT
# 123 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	goto BattleFrontier_Lounge1_EventScript_HighestIVStat
	end


BattleFrontier_Lounge1_EventScript_VeryHighTotalIVs::
# 128 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	msgbox BattleFrontier_Lounge1_Text_OutstandingAbility, MSGBOX_DEFAULT
# 129 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	goto BattleFrontier_Lounge1_EventScript_HighestIVStat
	end


BattleFrontier_Lounge1_EventScript_HighestIVHP::
# 134 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	msgbox BattleFrontier_Lounge1_Text_BestAspectHP, MSGBOX_DEFAULT
# 135 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	goto BattleFrontier_Lounge1_EventScript_HighestIVValue
	end


BattleFrontier_Lounge1_EventScript_HighestIVAtk::
# 140 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	msgbox BattleFrontier_Lounge1_Text_BestAspectAtk, MSGBOX_DEFAULT
# 141 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	goto BattleFrontier_Lounge1_EventScript_HighestIVValue
	end


BattleFrontier_Lounge1_EventScript_HighestIVDef::
# 146 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	msgbox BattleFrontier_Lounge1_Text_BestAspectDef, MSGBOX_DEFAULT
# 147 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	goto BattleFrontier_Lounge1_EventScript_HighestIVValue
	end


BattleFrontier_Lounge1_EventScript_HighestIVSpeed::
# 152 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	msgbox BattleFrontier_Lounge1_Text_BestAspectSpeed, MSGBOX_DEFAULT
# 153 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	goto BattleFrontier_Lounge1_EventScript_HighestIVValue
	end


BattleFrontier_Lounge1_EventScript_HighestIVSpAtk::
# 158 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	msgbox BattleFrontier_Lounge1_Text_BestAspectSpAtk, MSGBOX_DEFAULT
# 159 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	goto BattleFrontier_Lounge1_EventScript_HighestIVValue
	end


BattleFrontier_Lounge1_EventScript_HighestIVSpDef::
# 164 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	msgbox BattleFrontier_Lounge1_Text_BestAspectSpDef, MSGBOX_DEFAULT
# 165 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	goto BattleFrontier_Lounge1_EventScript_HighestIVValue
	end


BattleFrontier_Lounge1_EventScript_HighestIVLow::
# 170 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	msgbox BattleFrontier_Lounge1_Text_StatRelativelyGood, MSGBOX_DEFAULT
# 171 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	goto BattleFrontier_Lounge1_EventScript_EndBreederComments
	end


BattleFrontier_Lounge1_EventScript_HighestIVMid::
# 176 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	msgbox BattleFrontier_Lounge1_Text_StatImpressive, MSGBOX_DEFAULT
# 177 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	goto BattleFrontier_Lounge1_EventScript_EndBreederComments
	end


BattleFrontier_Lounge1_EventScript_HighestIVHigh::
# 182 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	msgbox BattleFrontier_Lounge1_Text_StatOutstanding, MSGBOX_DEFAULT
# 183 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	goto BattleFrontier_Lounge1_EventScript_EndBreederComments
	end


BattleFrontier_Lounge1_EventScript_HighestIVMax::
# 188 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	msgbox BattleFrontier_Lounge1_Text_StatFlawless, MSGBOX_DEFAULT
# 189 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	goto BattleFrontier_Lounge1_EventScript_EndBreederComments
	end


BattleFrontier_Lounge1_EventScript_CancelMonSelect::
# 194 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	msgbox BattleFrontier_Lounge1_Text_NoTimeForMyAdvice, MSGBOX_DEFAULT
# 195 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	release
	end


BattleFrontier_Lounge1_EventScript_Boy1::
# 200 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	msgbox BattleFrontier_Lounge1_Text_SaidMyMonIsOutstanding, MSGBOX_NPC
	end


BattleFrontier_Lounge1_EventScript_Boy2::
# 205 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	msgbox BattleFrontier_Lounge1_Text_DidntDoAnythingSpecialRaisingIt, MSGBOX_NPC
	end


BattleFrontier_Lounge1_Text_PokemonBreederIntro::
# 209 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "For 70 years I have raised POKéMON!\n"
	.string "I am the man they revere as\l"
	.string "the legendary top POKéMON BREEDER!\p"
	.string "If you ever become as seasoned as me,\n"
	.string "you'll see the abilities of POKéMON\l"
	.string "at a glance.\p"
	.string "You're a TRAINER. Doesn't it interest\n"
	.string "you to know your own POKéMON's\l"
	.string "abilities?\p"
	.string "Here!\n"
	.string "Let's have a look at your POKéMON!$"

BattleFrontier_Lounge1_Text_AverageAbility::
# 223 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "…Hmm…\p"
	.string "This one, overall, I would describe\n"
	.string "as being of average ability.$"

BattleFrontier_Lounge1_Text_BetterThanAverageAbility::
# 229 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "…Hmm…\p"
	.string "This one, overall, I would describe as\n"
	.string "having better-than-average ability.$"

BattleFrontier_Lounge1_Text_ImpressiveAbility::
# 235 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "…Hmm…\p"
	.string "This one, overall, I would say is\n"
	.string "quite impressive in ability!$"

BattleFrontier_Lounge1_Text_OutstandingAbility::
# 241 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "…Hmm…\p"
	.string "This one, overall, I would say is\n"
	.string "wonderfully outstanding in ability!$"

BattleFrontier_Lounge1_Text_BestAspectHP::
# 247 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "Incidentally, the best aspect of it,\n"
	.string "I would say, is its HP…$"

BattleFrontier_Lounge1_Text_BestAspectAtk::
# 252 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "Incidentally, the best aspect of it,\n"
	.string "I would say, is its ATTACK…$"

BattleFrontier_Lounge1_Text_BestAspectDef::
# 257 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "Incidentally, the best aspect of it,\n"
	.string "I would say, is its DEFENSE…$"

BattleFrontier_Lounge1_Text_BestAspectSpAtk::
# 262 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "Incidentally, the best aspect of it,\n"
	.string "I would say, is its SPECIAL ATTACK…$"

BattleFrontier_Lounge1_Text_BestAspectSpDef::
# 267 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "Incidentally, the best aspect of it,\n"
	.string "I would say, is its SPECIAL DEFENSE…$"

BattleFrontier_Lounge1_Text_BestAspectSpeed::
# 272 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "Incidentally, the best aspect of it,\n"
	.string "I would say, is its SPEED…$"

BattleFrontier_Lounge1_Text_StatRelativelyGood::
# 277 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "That stat is relatively good.\n"
	.string "…Hm… That's how I call it.$"

BattleFrontier_Lounge1_Text_StatImpressive::
# 282 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "That stat is quite impressive.\n"
	.string "…Hm… That's how I call it.$"

BattleFrontier_Lounge1_Text_StatOutstanding::
# 287 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "That stat is outstanding!\n"
	.string "…Hm… That's how I call it.$"

BattleFrontier_Lounge1_Text_StatFlawless::
# 292 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "It's flawless! A thing of perfection!\n"
	.string "…Hm… That's how I call it.$"

BattleFrontier_Lounge1_Text_NoTimeForMyAdvice::
# 297 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "What?\n"
	.string "You have no time for my advice?\p"
	.string "You should always be eager to learn\n"
	.string "from the experiences of your elders!$"

BattleFrontier_Lounge1_Text_HaveBusinessNeedsTending::
# 304 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "Yes, what is it now?\p"
	.string "I have business that needs tending!\n"
	.string "Save it for next time!$"

BattleFrontier_Lounge1_Text_LetsLookAtYourPokemon::
# 310 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "Ah, youngster! Do your POKéMON's\n"
	.string "abilities intrigue you?\p"
	.string "Here, here!\n"
	.string "Let's have a look at your POKéMON!$"

BattleFrontier_Lounge1_Text_EvenICantTell::
# 317 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "An expert I am, but even I can't tell\n"
	.string "anything about an unhatched POKéMON!\p"
	.string "Show me a POKéMON!\n"
	.string "A POKéMON is what I need to see!$"

BattleFrontier_Lounge1_Text_SaidMyMonIsOutstanding::
# 324 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "He said my POKéMON is outstanding!\n"
	.string "I'm glad I raised it carefully!$"

BattleFrontier_Lounge1_Text_DidntDoAnythingSpecialRaisingIt::
# 329 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "He said my POKéMON is outstanding!\n"
	.string "But I didn't do anything special\l"
	.string "raising it…$"
