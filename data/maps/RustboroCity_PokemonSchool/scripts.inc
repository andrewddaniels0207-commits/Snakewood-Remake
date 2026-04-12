RustboroCity_PokemonSchool_MapScripts::
	.byte 0


RustboroCity_PokemonSchool_EventScript_Blackboard::
# 4 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	lockall
# 5 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_BlackboardListsStatusChanges, MSGBOX_DEFAULT
# 6 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic
	end


RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic::
# 11 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	message RustboroCity_PokemonSchool_Text_ReadWhichTopic
# 12 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	waitmessage
# 13 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	multichoicegrid 8, 1, MULTI_STATUS_INFO, 3, FALSE
# 14 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	switch VAR_RESULT
# 15 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	case 0, RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic_3
# 17 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	case 1, RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic_4
# 19 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	case 2, RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic_5
# 21 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	case 3, RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic_6
# 23 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	case 4, RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic_7
# 25 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	case 5, RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic_8
# 27 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	case MULTI_B_PRESSED, RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic_9
RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic_1:
	end

RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic_3:
# 16 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto RustboroCity_PokemonSchool_EventScript_Poison
	goto RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic_1

RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic_4:
# 18 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto RustboroCity_PokemonSchool_EventScript_Paralysis
	goto RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic_1

RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic_5:
# 20 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto RustboroCity_PokemonSchool_EventScript_Sleep
	goto RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic_1

RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic_6:
# 22 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto RustboroCity_PokemonSchool_EventScript_Burn
	goto RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic_1

RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic_7:
# 24 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto RustboroCity_PokemonSchool_EventScript_Freeze
	goto RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic_1

RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic_8:
# 26 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto RustboroCity_PokemonSchool_EventScript_ExitTopicSelect
	goto RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic_1

RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic_9:
# 28 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto RustboroCity_PokemonSchool_EventScript_ExitTopicSelect
	goto RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic_1


RustboroCity_PokemonSchool_EventScript_Poison::
# 34 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_ExplainPoison, MSGBOX_DEFAULT
# 35 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic
	end


RustboroCity_PokemonSchool_EventScript_Paralysis::
# 40 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_ExplainParalysis, MSGBOX_DEFAULT
# 41 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic
	end


RustboroCity_PokemonSchool_EventScript_Sleep::
# 46 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_ExplainSleep, MSGBOX_DEFAULT
# 47 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic
	end


RustboroCity_PokemonSchool_EventScript_Burn::
# 52 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_ExplainBurn, MSGBOX_DEFAULT
# 53 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic
	end


RustboroCity_PokemonSchool_EventScript_Freeze::
# 58 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_ExplainFreeze, MSGBOX_DEFAULT
# 59 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic
	end


RustboroCity_PokemonSchool_EventScript_ExitTopicSelect::
# 64 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	releaseall
	end


RustboroCity_PokemonSchool_EventScript_GameboyKid1::
# 69 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_TradingRightNow, MSGBOX_NPC
	end


RustboroCity_PokemonSchool_EventScript_GameboyKid2::
# 74 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_AlwaysWantedSeedot, MSGBOX_NPC
	end


RustboroCity_PokemonSchool_EventScript_RichBoy::
# 79 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_PokemontCantUseManMadeItems, MSGBOX_NPC
	end


RustboroCity_PokemonSchool_EventScript_Lass::
# 84 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_ConfusedPokemonAttacksItself, MSGBOX_NPC
	end


RustboroCity_PokemonSchool_EventScript_SchoolKidM::
# 89 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_PokemonHealItselfWithBerry, MSGBOX_NPC
	end


RustboroCity_PokemonSchool_EventScript_StudentNotebook::
# 94 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_StudentsNotes, MSGBOX_SIGN
	end


RustboroCity_PokemonSchool_EventScript_Teacher::
# 99 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	lock
# 100 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	faceplayer
# 101 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto_if_set FLAG_RECEIVED_QUICK_CLAW, RustboroCity_PokemonSchool_EventScript_Teacher_2
RustboroCity_PokemonSchool_EventScript_Teacher_1:
# 104 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	compare VAR_FACING, DIR_EAST
	goto_if_eq RustboroCity_PokemonSchool_EventScript_Teacher_5
RustboroCity_PokemonSchool_EventScript_Teacher_4:
# 107 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	compare VAR_FACING, DIR_WEST
	goto_if_eq RustboroCity_PokemonSchool_EventScript_Teacher_8
RustboroCity_PokemonSchool_EventScript_Teacher_7:
# 110 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_StudentsWhoDontStudyGetQuickClaw, MSGBOX_DEFAULT
# 111 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	giveitem ITEM_QUICK_CLAW
# 112 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq RustboroCity_PokemonSchool_EventScript_Teacher_11
RustboroCity_PokemonSchool_EventScript_Teacher_10:
# 115 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	closemessage
# 116 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceFasterDown
# 117 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	waitmovement 0
# 118 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	setflag FLAG_RECEIVED_QUICK_CLAW
# 119 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	release
	end

RustboroCity_PokemonSchool_EventScript_Teacher_2:
# 102 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto RustboroCity_PokemonSchool_EventScript_GaveQuickClaw
	goto RustboroCity_PokemonSchool_EventScript_Teacher_1

RustboroCity_PokemonSchool_EventScript_Teacher_5:
# 105 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	call RustboroCity_PokemonSchool_EventScript_TeacherCheckOnStudentsEast
	goto RustboroCity_PokemonSchool_EventScript_Teacher_4

RustboroCity_PokemonSchool_EventScript_Teacher_8:
# 108 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	call RustboroCity_PokemonSchool_EventScript_TeacherCheckOnStudentsWest
	goto RustboroCity_PokemonSchool_EventScript_Teacher_7

RustboroCity_PokemonSchool_EventScript_Teacher_11:
# 113 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
	goto RustboroCity_PokemonSchool_EventScript_Teacher_10


RustboroCity_PokemonSchool_EventScript_TeacherCheckOnStudentsEast::
# 124 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	applymovement VAR_LAST_TALKED, RustboroCity_PokemonSchool_Movement_TeacherCheckOnStudentsEast
# 125 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	waitmovement 0
	return


RustboroCity_PokemonSchool_EventScript_TeacherCheckOnStudentsWest::
# 130 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	applymovement VAR_LAST_TALKED, RustboroCity_PokemonSchool_Movement_TeacherCheckOnStudentsWest
# 131 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	waitmovement 0
	return


RustboroCity_PokemonSchool_EventScript_GaveQuickClaw::
# 136 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_ExplainQuickClaw, MSGBOX_DEFAULT
# 137 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	closemessage
# 138 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceFasterDown
# 139 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	waitmovement 0
# 140 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	release
	end


# 144 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Movement_TeacherCheckOnStudentsWest:
# 145 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_left
# 146 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_down
# 147 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_down
# 148 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_right
# 149 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_in_place_faster_down
# 150 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_16
# 151 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_16
# 152 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_16
# 153 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_down
# 154 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_in_place_faster_left
# 155 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_16
# 156 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_16
# 157 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_right
# 158 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_16
# 159 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_16
# 160 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_8
# 161 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_up
# 162 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_left
# 163 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_left
# 164 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_up
# 165 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_up
# 166 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_right
# 167 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	step_end

# 170 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Movement_TeacherCheckOnStudentsEast:
# 171 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_right
# 172 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_right
# 173 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_down
# 174 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_down
# 175 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_left
# 176 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_left
# 177 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_in_place_faster_down
# 178 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_16
# 179 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_16
# 180 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_16
# 181 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_down
# 182 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_in_place_faster_left
# 183 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_16
# 184 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_16
# 185 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_right
# 186 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_16
# 187 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_16
# 188 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_8
# 189 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_up
# 190 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_right
# 191 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_up
# 192 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_up
# 193 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_left
# 194 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_left
# 195 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	step_end

RustboroCity_PokemonSchool_EventScript_Scott::
# 199 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	lock
# 200 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	faceplayer
# 201 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto_if_set FLAG_MET_SCOTT_AFTER_OBTAINING_STONE_BADGE, RustboroCity_PokemonSchool_EventScript_Scott_2
RustboroCity_PokemonSchool_EventScript_Scott_1:
# 204 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto_if_set FLAG_MET_SCOTT_RUSTBORO, RustboroCity_PokemonSchool_EventScript_Scott_5
RustboroCity_PokemonSchool_EventScript_Scott_4:
# 207 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, RustboroCity_PokemonSchool_EventScript_Scott_8
RustboroCity_PokemonSchool_EventScript_Scott_7:
# 210 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_ScottMetAlreadyCut, MSGBOX_DEFAULT
# 211 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	addvar VAR_SCOTT_STATE, 1
# 212 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	setflag FLAG_MET_SCOTT_RUSTBORO
# 213 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	release
	end

RustboroCity_PokemonSchool_EventScript_Scott_2:
# 202 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto RustboroCity_PokemonSchool_EventScript_ScottWatchStudents
	goto RustboroCity_PokemonSchool_EventScript_Scott_1

RustboroCity_PokemonSchool_EventScript_Scott_5:
# 205 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto RustboroCity_PokemonSchool_EventScript_ScottSpokeAlready
	goto RustboroCity_PokemonSchool_EventScript_Scott_4

RustboroCity_PokemonSchool_EventScript_Scott_8:
# 208 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto RustboroCity_PokemonSchool_EventScript_ScottGreetHasBadge
	goto RustboroCity_PokemonSchool_EventScript_Scott_7


RustboroCity_PokemonSchool_EventScript_ScottSpokeAlready::
# 218 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, RustboroCity_PokemonSchool_EventScript_ScottSpokeAlready_2
RustboroCity_PokemonSchool_EventScript_ScottSpokeAlready_1:
# 221 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_StudentTalentLevelUnknown, MSGBOX_DEFAULT
# 222 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	release
	end

RustboroCity_PokemonSchool_EventScript_ScottSpokeAlready_2:
# 219 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto RustboroCity_PokemonSchool_EventScript_ScottNoticeBadge
	goto RustboroCity_PokemonSchool_EventScript_ScottSpokeAlready_1


RustboroCity_PokemonSchool_EventScript_ScottGreetHasBadge::
# 227 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_ScottMetAlreadyStoneBadge, MSGBOX_DEFAULT
# 228 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto RustboroCity_PokemonSchool_EventScript_MetScottAfterBadge
	end


RustboroCity_PokemonSchool_EventScript_ScottNoticeBadge::
# 233 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_ScottStoneBadge, MSGBOX_DEFAULT
# 234 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto RustboroCity_PokemonSchool_EventScript_MetScottAfterBadge
	end


RustboroCity_PokemonSchool_EventScript_MetScottAfterBadge::
# 239 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	addvar VAR_SCOTT_STATE, 1
# 240 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	setflag FLAG_MET_SCOTT_AFTER_OBTAINING_STONE_BADGE
# 241 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	release
	end


RustboroCity_PokemonSchool_EventScript_ScottWatchStudents::
# 246 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_StudentTalentLevelUnknown, MSGBOX_DEFAULT
# 247 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	release
	end


RustboroCity_PokemonSchool_Text_BlackboardListsStatusChanges::
# 251 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "The blackboard lists status changes\n"
	.string "that may affect POKéMON in battle.$"

RustboroCity_PokemonSchool_Text_ReadWhichTopic::
# 256 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Which topic do you want to read?$"

RustboroCity_PokemonSchool_Text_ExplainPoison::
# 260 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "If a POKéMON is poisoned, it will\n"
	.string "steadily lose HP.\p"
	.string "The effects of poison remain after\n"
	.string "a battle.\p"
	.string "A poisoned POKéMON's HP will drop\n"
	.string "while it is traveling.\p"
	.string "Heal a poisoning using an ANTIDOTE.$"

RustboroCity_PokemonSchool_Text_ExplainParalysis::
# 270 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "If a POKéMON becomes paralyzed,\n"
	.string "its SPEED drops.\p"
	.string "It may also not be able to move while\n"
	.string "it is in battle.\p"
	.string "Paralysis remains after battle.\n"
	.string "Cure it using a PARLYZ HEAL.$"

RustboroCity_PokemonSchool_Text_ExplainSleep::
# 279 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "If a POKéMON falls asleep, it will be\n"
	.string "unable to attack.\p"
	.string "A POKéMON may wake up on its own,\n"
	.string "but if a battle ends while it is\l"
	.string "sleeping, it will stay asleep.\p"
	.string "Wake it up using an AWAKENING.$"

RustboroCity_PokemonSchool_Text_ExplainBurn::
# 288 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "A burn reduces ATTACK power, and it\n"
	.string "steadily reduces the victim's HP.\p"
	.string "A burn lingers after battle.\n"
	.string "Cure a burn using a BURN HEAL.$"

RustboroCity_PokemonSchool_Text_ExplainFreeze::
# 295 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "If a POKéMON is frozen, it becomes\n"
	.string "completely helpless.\p"
	.string "It will remain frozen after battle.\n"
	.string "Thaw it out using an ICE HEAL.$"

RustboroCity_PokemonSchool_Text_StudentsWhoDontStudyGetQuickClaw::
# 302 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Students who don't study get a little\n"
	.string "taste of my QUICK CLAW.\p"
	.string "Whether or not you are a good student \n"
	.string "will be evident from the way you use\l"
	.string "this item.$"

RustboroCity_PokemonSchool_Text_ExplainQuickClaw::
# 310 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "A POKéMON holding the QUICK CLAW will\n"
	.string "occasionally speed up and get to move\l"
	.string "before its opponent.\p"
	.string "There are many other items that are\n"
	.string "meant to be held by POKéMON.\p"
	.string "Just those alone will give you many\n"
	.string "topics to study!$"

RustboroCity_PokemonSchool_Text_TradingRightNow::
# 320 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "I'm trading POKéMON with my friend\n"
	.string "right now.$"

RustboroCity_PokemonSchool_Text_AlwaysWantedSeedot::
# 325 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "I always wanted a SEEDOT, and\n"
	.string "I'm finally getting one!$"

RustboroCity_PokemonSchool_Text_PokemontCantUseManMadeItems::
# 330 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "POKéMON can hold items, but they\n"
	.string "don't know what to do with man-made\l"
	.string "items like POTION and ANTIDOTE.$"

RustboroCity_PokemonSchool_Text_ConfusedPokemonAttacksItself::
# 336 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "You know how some POKéMON moves can\n"
	.string "confuse a POKéMON?\p"
	.string "A confused POKéMON will sometimes\n"
	.string "attack itself without meaning to.\p"
	.string "But once it leaves battle, it will\n"
	.string "return to normal.$"

RustboroCity_PokemonSchool_Text_PokemonHealItselfWithBerry::
# 345 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "A POKéMON holding a BERRY will heal\n"
	.string "itself…\p"
	.string "There are many kinds of items that\n"
	.string "POKéMON can hold…\p"
	.string "Boy, it sure is hard taking notes\n"
	.string "down…$"

RustboroCity_PokemonSchool_Text_StudentsNotes::
# 354 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "It's this student's notebook…\p"
	.string "POKéMON are to be caught using\n"
	.string "POKé BALLS.\p"
	.string "Up to six POKéMON can accompany\n"
	.string "a TRAINER.\p"
	.string "A TRAINER is someone who catches\n"
	.string "POKéMON, raises them, and battles\l"
	.string "with them.\p"
	.string "A TRAINER's mission is to defeat\n"
	.string "the strong TRAINERS who await\l"
	.string "challengers in POKéMON GYMS.$"

RustboroCity_PokemonSchool_Text_ScottMetAlreadyCut::
# 368 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Hello? Didn't we meet before?\n"
	.string "I think back in PETALBURG CITY.\p"
	.string "Let me introduce myself.\n"
	.string "My name's SCOTT.\p"
	.string "I've been traveling everywhere in\n"
	.string "search of outstanding TRAINERS.\p"
	.string "More specifically, I'm looking for\n"
	.string "POKéMON battle experts.\p"
	.string "So, what brings you to this SCHOOL?\n"
	.string "Are you a TRAINER, too?\p"
	.string "The first thing you should do is to\n"
	.string "have a POKéMON learn the move CUT.\p"
	.string "If I remember correctly, someone in\n"
	.string "this town has CUT.$"

RustboroCity_PokemonSchool_Text_StudentTalentLevelUnknown::
# 385 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "SCOTT: Hmm…\p"
	.string "The talent levels of the students here\n"
	.string "are unknown. The potential's there.$"

RustboroCity_PokemonSchool_Text_ScottStoneBadge::
# 391 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "SCOTT: Oh, what's that?\p"
	.string "It's a STONE BADGE, isn't it?\n"
	.string "That's pretty impressive, I'd say.\p"
	.string "But, you know, I would've loved to see\n"
	.string "you in battle.\p"
	.string "It's hard to tell what you're like as\n"
	.string "a TRAINER from a LEAGUE BADGE.$"

RustboroCity_PokemonSchool_Text_ScottMetAlreadyStoneBadge::
# 401 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Hello? Didn't we meet before?\n"
	.string "I think back in PETALBURG CITY.\p"
	.string "Let me introduce myself.\n"
	.string "My name's SCOTT.\p"
	.string "I've been traveling everywhere in\n"
	.string "search of outstanding TRAINERS.\p"
	.string "More specifically, I'm looking for\n"
	.string "POKéMON battle experts.\p"
	.string "Oh, what's that?\n"
	.string "It's a STONE BADGE, isn't it?\p"
	.string "That's pretty impressive, I'd say, for\n"
	.string "a starting TRAINER like yourself.\p"
	.string "But, you know, I would've loved to see\n"
	.string "you in battle.\p"
	.string "It's hard to tell what you're like as\n"
	.string "a TRAINER from a LEAGUE BADGE.$"
