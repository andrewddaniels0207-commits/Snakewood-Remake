# 1 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 2 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_MapScripts::
# 3 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.byte 0
# 4 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 5 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 6 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_Blackboard::
# 7 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 4 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 8 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	lockall
# 9 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 5 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 10 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_BlackboardListsStatusChanges, MSGBOX_DEFAULT
# 11 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 6 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 12 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic
# 13 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 14 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 15 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 16 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic::
# 17 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 11 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 18 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	message RustboroCity_PokemonSchool_Text_ReadWhichTopic
# 19 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 12 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 20 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	waitmessage
# 21 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 13 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 22 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	multichoicegrid 8, 1, MULTI_STATUS_INFO, 3, FALSE
# 23 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 14 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 24 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	switch VAR_RESULT
# 25 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 15 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 26 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	case 0, RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic_3
# 27 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 17 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 28 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	case 1, RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic_4
# 29 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 19 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 30 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	case 2, RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic_5
# 31 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 21 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 32 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	case 3, RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic_6
# 33 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 23 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 34 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	case 4, RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic_7
# 35 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 25 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 36 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	case 5, RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic_8
# 37 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 27 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 38 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	case MULTI_B_PRESSED, RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic_9
# 39 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic_1:
# 40 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 41 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 42 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic_3:
# 43 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 16 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 44 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto RustboroCity_PokemonSchool_EventScript_Poison
# 45 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic_1
# 46 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 47 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic_4:
# 48 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 18 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 49 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto RustboroCity_PokemonSchool_EventScript_Paralysis
# 50 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic_1
# 51 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 52 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic_5:
# 53 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 20 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 54 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto RustboroCity_PokemonSchool_EventScript_Sleep
# 55 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic_1
# 56 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 57 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic_6:
# 58 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 22 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 59 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto RustboroCity_PokemonSchool_EventScript_Burn
# 60 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic_1
# 61 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 62 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic_7:
# 63 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 24 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 64 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto RustboroCity_PokemonSchool_EventScript_Freeze
# 65 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic_1
# 66 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 67 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic_8:
# 68 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 26 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 69 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto RustboroCity_PokemonSchool_EventScript_ExitTopicSelect
# 70 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic_1
# 71 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 72 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic_9:
# 73 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 28 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 74 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto RustboroCity_PokemonSchool_EventScript_ExitTopicSelect
# 75 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic_1
# 76 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 77 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 78 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_Poison::
# 79 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 34 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 80 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_ExplainPoison, MSGBOX_DEFAULT
# 81 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 35 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 82 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic
# 83 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 84 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 85 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 86 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_Paralysis::
# 87 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 40 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 88 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_ExplainParalysis, MSGBOX_DEFAULT
# 89 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 41 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 90 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic
# 91 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 92 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 93 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 94 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_Sleep::
# 95 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 46 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 96 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_ExplainSleep, MSGBOX_DEFAULT
# 97 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 47 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 98 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic
# 99 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 100 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 101 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 102 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_Burn::
# 103 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 52 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 104 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_ExplainBurn, MSGBOX_DEFAULT
# 105 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 53 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 106 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic
# 107 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 108 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 109 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 110 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_Freeze::
# 111 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 58 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 112 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_ExplainFreeze, MSGBOX_DEFAULT
# 113 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 59 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 114 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic
# 115 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 116 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 117 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 118 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_ExitTopicSelect::
# 119 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 64 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 120 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	releaseall
# 121 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 122 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 123 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 124 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_GameboyKid1::
# 125 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 69 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 126 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_TradingRightNow, MSGBOX_NPC
# 127 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 128 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 129 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 130 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_GameboyKid2::
# 131 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 74 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 132 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_AlwaysWantedSeedot, MSGBOX_NPC
# 133 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 134 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 135 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 136 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_RichBoy::
# 137 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 79 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 138 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_PokemontCantUseManMadeItems, MSGBOX_NPC
# 139 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 140 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 141 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 142 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_Lass::
# 143 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 84 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 144 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_ConfusedPokemonAttacksItself, MSGBOX_NPC
# 145 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 146 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 147 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 148 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_SchoolKidM::
# 149 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 89 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 150 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_PokemonHealItselfWithBerry, MSGBOX_NPC
# 151 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 152 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 153 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 154 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_StudentNotebook::
# 155 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 94 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 156 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_StudentsNotes, MSGBOX_SIGN
# 157 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 158 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 159 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 160 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_Teacher::
# 161 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 99 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 162 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	lock
# 163 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 100 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 164 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	faceplayer
# 165 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 101 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 166 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto_if_set FLAG_RECEIVED_QUICK_CLAW, RustboroCity_PokemonSchool_EventScript_Teacher_2
# 167 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_Teacher_1:
# 168 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 104 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 169 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	compare VAR_FACING, DIR_EAST
# 170 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto_if_eq RustboroCity_PokemonSchool_EventScript_Teacher_5
# 171 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_Teacher_4:
# 172 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 107 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 173 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	compare VAR_FACING, DIR_WEST
# 174 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto_if_eq RustboroCity_PokemonSchool_EventScript_Teacher_8
# 175 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_Teacher_7:
# 176 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 110 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 177 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_StudentsWhoDontStudyGetQuickClaw, MSGBOX_DEFAULT
# 178 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 111 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 179 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	giveitem ITEM_QUICK_CLAW
# 180 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 112 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 181 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	compare VAR_RESULT, 0
# 182 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto_if_eq RustboroCity_PokemonSchool_EventScript_Teacher_11
# 183 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_Teacher_10:
# 184 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 115 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 185 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	closemessage
# 186 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 116 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 187 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceFasterDown
# 188 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 117 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 189 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	waitmovement 0
# 190 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 118 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 191 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	setflag FLAG_RECEIVED_QUICK_CLAW
# 192 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 119 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 193 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	release
# 194 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 195 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 196 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_Teacher_2:
# 197 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 102 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 198 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto RustboroCity_PokemonSchool_EventScript_GaveQuickClaw
# 199 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto RustboroCity_PokemonSchool_EventScript_Teacher_1
# 200 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 201 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_Teacher_5:
# 202 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 105 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 203 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	call RustboroCity_PokemonSchool_EventScript_TeacherCheckOnStudentsEast
# 204 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto RustboroCity_PokemonSchool_EventScript_Teacher_4
# 205 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 206 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_Teacher_8:
# 207 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 108 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 208 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	call RustboroCity_PokemonSchool_EventScript_TeacherCheckOnStudentsWest
# 209 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto RustboroCity_PokemonSchool_EventScript_Teacher_7
# 210 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 211 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_Teacher_11:
# 212 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 113 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 213 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
# 214 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto RustboroCity_PokemonSchool_EventScript_Teacher_10
# 215 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 216 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 217 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_TeacherCheckOnStudentsEast::
# 218 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 124 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 219 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	applymovement VAR_LAST_TALKED, RustboroCity_PokemonSchool_Movement_TeacherCheckOnStudentsEast
# 220 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 125 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 221 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	waitmovement 0
# 222 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	return
# 223 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 224 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 225 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_TeacherCheckOnStudentsWest::
# 226 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 130 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 227 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	applymovement VAR_LAST_TALKED, RustboroCity_PokemonSchool_Movement_TeacherCheckOnStudentsWest
# 228 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 131 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 229 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	waitmovement 0
# 230 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	return
# 231 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 232 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 233 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_GaveQuickClaw::
# 234 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 136 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 235 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_ExplainQuickClaw, MSGBOX_DEFAULT
# 236 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 137 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 237 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	closemessage
# 238 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 138 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 239 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceFasterDown
# 240 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 139 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 241 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	waitmovement 0
# 242 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 140 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 243 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	release
# 244 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 245 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 246 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 247 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 144 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 248 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Movement_TeacherCheckOnStudentsWest:
# 249 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 145 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 250 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_left
# 251 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 146 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 252 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_down
# 253 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 147 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 254 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_down
# 255 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 148 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 256 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_right
# 257 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 149 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 258 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_in_place_faster_down
# 259 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 150 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 260 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_16
# 261 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 151 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 262 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_16
# 263 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 152 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 264 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_16
# 265 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 153 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 266 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_down
# 267 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 154 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 268 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_in_place_faster_left
# 269 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 155 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 270 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_16
# 271 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 156 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 272 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_16
# 273 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 157 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 274 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_right
# 275 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 158 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 276 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_16
# 277 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 159 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 278 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_16
# 279 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 160 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 280 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_8
# 281 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 161 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 282 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_up
# 283 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 162 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 284 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_left
# 285 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 163 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 286 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_left
# 287 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 164 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 288 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_up
# 289 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 165 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 290 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_up
# 291 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 166 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 292 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_right
# 293 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 167 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 294 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	step_end
# 295 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 296 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 170 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 297 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Movement_TeacherCheckOnStudentsEast:
# 298 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 171 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 299 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_right
# 300 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 172 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 301 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_right
# 302 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 173 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 303 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_down
# 304 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 174 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 305 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_down
# 306 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 175 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 307 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_left
# 308 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 176 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 309 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_left
# 310 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 177 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 311 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_in_place_faster_down
# 312 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 178 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 313 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_16
# 314 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 179 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 315 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_16
# 316 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 180 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 317 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_16
# 318 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 181 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 319 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_down
# 320 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 182 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 321 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_in_place_faster_left
# 322 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 183 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 323 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_16
# 324 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 184 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 325 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_16
# 326 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 185 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 327 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_right
# 328 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 186 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 329 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_16
# 330 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 187 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 331 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_16
# 332 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 188 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 333 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_8
# 334 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 189 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 335 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_up
# 336 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 190 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 337 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_right
# 338 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 191 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 339 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_up
# 340 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 192 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 341 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_up
# 342 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 193 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 343 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_left
# 344 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 194 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 345 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_left
# 346 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 195 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 347 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	step_end
# 348 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 349 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_Scott::
# 350 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 199 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 351 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	lock
# 352 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 200 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 353 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	faceplayer
# 354 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 201 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 355 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto_if_set FLAG_MET_SCOTT_AFTER_OBTAINING_STONE_BADGE, RustboroCity_PokemonSchool_EventScript_Scott_2
# 356 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_Scott_1:
# 357 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 204 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 358 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto_if_set FLAG_MET_SCOTT_RUSTBORO, RustboroCity_PokemonSchool_EventScript_Scott_5
# 359 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_Scott_4:
# 360 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 207 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 361 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, RustboroCity_PokemonSchool_EventScript_Scott_8
# 362 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_Scott_7:
# 363 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 210 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 364 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_ScottMetAlreadyCut, MSGBOX_DEFAULT
# 365 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 211 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 366 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	addvar VAR_SCOTT_STATE, 1
# 367 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 212 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 368 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	setflag FLAG_MET_SCOTT_RUSTBORO
# 369 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 213 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 370 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	release
# 371 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 372 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 373 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_Scott_2:
# 374 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 202 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 375 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto RustboroCity_PokemonSchool_EventScript_ScottWatchStudents
# 376 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto RustboroCity_PokemonSchool_EventScript_Scott_1
# 377 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 378 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_Scott_5:
# 379 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 205 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 380 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto RustboroCity_PokemonSchool_EventScript_ScottSpokeAlready
# 381 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto RustboroCity_PokemonSchool_EventScript_Scott_4
# 382 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 383 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_Scott_8:
# 384 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 208 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 385 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto RustboroCity_PokemonSchool_EventScript_ScottGreetHasBadge
# 386 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto RustboroCity_PokemonSchool_EventScript_Scott_7
# 387 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 388 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 389 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_ScottSpokeAlready::
# 390 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 218 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 391 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, RustboroCity_PokemonSchool_EventScript_ScottSpokeAlready_2
# 392 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_ScottSpokeAlready_1:
# 393 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 221 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 394 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_StudentTalentLevelUnknown, MSGBOX_DEFAULT
# 395 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 222 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 396 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	release
# 397 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 398 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 399 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_ScottSpokeAlready_2:
# 400 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 219 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 401 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto RustboroCity_PokemonSchool_EventScript_ScottNoticeBadge
# 402 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto RustboroCity_PokemonSchool_EventScript_ScottSpokeAlready_1
# 403 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 404 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 405 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_ScottGreetHasBadge::
# 406 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 227 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 407 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_ScottMetAlreadyStoneBadge, MSGBOX_DEFAULT
# 408 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 228 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 409 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto RustboroCity_PokemonSchool_EventScript_MetScottAfterBadge
# 410 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 411 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 412 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 413 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_ScottNoticeBadge::
# 414 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 233 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 415 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_ScottStoneBadge, MSGBOX_DEFAULT
# 416 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 234 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 417 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto RustboroCity_PokemonSchool_EventScript_MetScottAfterBadge
# 418 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 419 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 420 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 421 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_MetScottAfterBadge::
# 422 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 239 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 423 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	addvar VAR_SCOTT_STATE, 1
# 424 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 240 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 425 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	setflag FLAG_MET_SCOTT_AFTER_OBTAINING_STONE_BADGE
# 426 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 241 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 427 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	release
# 428 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 429 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 430 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 431 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_ScottWatchStudents::
# 432 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 246 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 433 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_StudentTalentLevelUnknown, MSGBOX_DEFAULT
# 434 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 247 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 435 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	release
# 436 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 437 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 438 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 439 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_BlackboardListsStatusChanges::
# 440 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 251 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 441 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "The blackboard lists status changes\n"
# 442 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "that may affect POKéMON in battle.$"
# 443 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 444 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_ReadWhichTopic::
# 445 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 256 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 446 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Which topic do you want to read?$"
# 447 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 448 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_ExplainPoison::
# 449 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 260 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 450 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "If a POKéMON is poisoned, it will\n"
# 451 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "steadily lose HP.\p"
# 452 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "The effects of poison remain after\n"
# 453 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "a battle.\p"
# 454 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "A poisoned POKéMON's HP will drop\n"
# 455 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "while it is traveling.\p"
# 456 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Heal a poisoning using an ANTIDOTE.$"
# 457 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 458 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_ExplainParalysis::
# 459 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 270 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 460 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "If a POKéMON becomes paralyzed,\n"
# 461 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "its SPEED drops.\p"
# 462 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "It may also not be able to move while\n"
# 463 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "it is in battle.\p"
# 464 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Paralysis remains after battle.\n"
# 465 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Cure it using a PARLYZ HEAL.$"
# 466 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 467 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_ExplainSleep::
# 468 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 279 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 469 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "If a POKéMON falls asleep, it will be\n"
# 470 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "unable to attack.\p"
# 471 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "A POKéMON may wake up on its own,\n"
# 472 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "but if a battle ends while it is\l"
# 473 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "sleeping, it will stay asleep.\p"
# 474 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Wake it up using an AWAKENING.$"
# 475 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 476 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_ExplainBurn::
# 477 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 288 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 478 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "A burn reduces ATTACK power, and it\n"
# 479 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "steadily reduces the victim's HP.\p"
# 480 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "A burn lingers after battle.\n"
# 481 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Cure a burn using a BURN HEAL.$"
# 482 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 483 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_ExplainFreeze::
# 484 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 295 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 485 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "If a POKéMON is frozen, it becomes\n"
# 486 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "completely helpless.\p"
# 487 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "It will remain frozen after battle.\n"
# 488 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Thaw it out using an ICE HEAL.$"
# 489 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 490 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_StudentsWhoDontStudyGetQuickClaw::
# 491 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 302 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 492 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Students who don't study get a little\n"
# 493 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "taste of my QUICK CLAW.\p"
# 494 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Whether or not you are a good student \n"
# 495 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "will be evident from the way you use\l"
# 496 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "this item.$"
# 497 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 498 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_ExplainQuickClaw::
# 499 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 310 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 500 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "A POKéMON holding the QUICK CLAW will\n"
# 501 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "occasionally speed up and get to move\l"
# 502 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "before its opponent.\p"
# 503 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "There are many other items that are\n"
# 504 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "meant to be held by POKéMON.\p"
# 505 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Just those alone will give you many\n"
# 506 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "topics to study!$"
# 507 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 508 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_TradingRightNow::
# 509 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 320 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 510 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "I'm trading POKéMON with my friend\n"
# 511 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "right now.$"
# 512 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 513 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_AlwaysWantedSeedot::
# 514 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 325 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 515 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "I always wanted a SEEDOT, and\n"
# 516 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "I'm finally getting one!$"
# 517 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 518 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_PokemontCantUseManMadeItems::
# 519 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 330 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 520 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "POKéMON can hold items, but they\n"
# 521 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "don't know what to do with man-made\l"
# 522 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "items like POTION and ANTIDOTE.$"
# 523 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 524 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_ConfusedPokemonAttacksItself::
# 525 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 336 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 526 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "You know how some POKéMON moves can\n"
# 527 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "confuse a POKéMON?\p"
# 528 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "A confused POKéMON will sometimes\n"
# 529 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "attack itself without meaning to.\p"
# 530 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "But once it leaves battle, it will\n"
# 531 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "return to normal.$"
# 532 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 533 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_PokemonHealItselfWithBerry::
# 534 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 345 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 535 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "A POKéMON holding a BERRY will heal\n"
# 536 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "itself…\p"
# 537 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "There are many kinds of items that\n"
# 538 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "POKéMON can hold…\p"
# 539 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Boy, it sure is hard taking notes\n"
# 540 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "down…$"
# 541 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 542 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_StudentsNotes::
# 543 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 354 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 544 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "It's this student's notebook…\p"
# 545 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "POKéMON are to be caught using\n"
# 546 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "POKé BALLS.\p"
# 547 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Up to six POKéMON can accompany\n"
# 548 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "a TRAINER.\p"
# 549 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "A TRAINER is someone who catches\n"
# 550 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "POKéMON, raises them, and battles\l"
# 551 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "with them.\p"
# 552 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "A TRAINER's mission is to defeat\n"
# 553 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "the strong TRAINERS who await\l"
# 554 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "challengers in POKéMON GYMS.$"
# 555 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 556 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_ScottMetAlreadyCut::
# 557 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 368 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 558 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Hello? Didn't we meet before?\n"
# 559 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "I think back in PETALBURG CITY.\p"
# 560 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Let me introduce myself.\n"
# 561 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "My name's SCOTT.\p"
# 562 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "I've been traveling everywhere in\n"
# 563 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "search of outstanding TRAINERS.\p"
# 564 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "More specifically, I'm looking for\n"
# 565 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "POKéMON battle experts.\p"
# 566 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "So, what brings you to this SCHOOL?\n"
# 567 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Are you a TRAINER, too?\p"
# 568 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "The first thing you should do is to\n"
# 569 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "have a POKéMON learn the move CUT.\p"
# 570 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "If I remember correctly, someone in\n"
# 571 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "this town has CUT.$"
# 572 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 573 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_StudentTalentLevelUnknown::
# 574 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 385 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 575 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "SCOTT: Hmm…\p"
# 576 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "The talent levels of the students here\n"
# 577 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "are unknown. The potential's there.$"
# 578 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 579 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_ScottStoneBadge::
# 580 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 391 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 581 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "SCOTT: Oh, what's that?\p"
# 582 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "It's a STONE BADGE, isn't it?\n"
# 583 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "That's pretty impressive, I'd say.\p"
# 584 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "But, you know, I would've loved to see\n"
# 585 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "you in battle.\p"
# 586 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "It's hard to tell what you're like as\n"
# 587 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "a TRAINER from a LEAGUE BADGE.$"
# 588 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 589 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_ScottMetAlreadyStoneBadge::
# 590 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 401 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
# 591 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Hello? Didn't we meet before?\n"
# 592 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "I think back in PETALBURG CITY.\p"
# 593 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Let me introduce myself.\n"
# 594 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "My name's SCOTT.\p"
# 595 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "I've been traveling everywhere in\n"
# 596 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "search of outstanding TRAINERS.\p"
# 597 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "More specifically, I'm looking for\n"
# 598 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "POKéMON battle experts.\p"
# 599 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Oh, what's that?\n"
# 600 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "It's a STONE BADGE, isn't it?\p"
# 601 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "That's pretty impressive, I'd say, for\n"
# 602 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "a starting TRAINER like yourself.\p"
# 603 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "But, you know, I would've loved to see\n"
# 604 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "you in battle.\p"
# 605 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "It's hard to tell what you're like as\n"
# 606 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "a TRAINER from a LEAGUE BADGE.$"
