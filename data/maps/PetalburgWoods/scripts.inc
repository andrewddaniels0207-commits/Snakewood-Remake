# 1 "data/maps/PetalburgWoods/scripts.pory"

# 2 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_MapScripts::
# 3 "data/maps/PetalburgWoods/scripts.pory"
	.byte 0
# 4 "data/maps/PetalburgWoods/scripts.pory"

# 5 "data/maps/PetalburgWoods/scripts.pory"

# 6 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcherLeft::
# 7 "data/maps/PetalburgWoods/scripts.pory"
# 4 "data/maps/PetalburgWoods/scripts.pory"
# 8 "data/maps/PetalburgWoods/scripts.pory"
	lockall
# 9 "data/maps/PetalburgWoods/scripts.pory"
# 5 "data/maps/PetalburgWoods/scripts.pory"
# 10 "data/maps/PetalburgWoods/scripts.pory"
	call PetalburgWoods_EventScript_DevonResearcherIntro
# 11 "data/maps/PetalburgWoods/scripts.pory"
# 6 "data/maps/PetalburgWoods/scripts.pory"
# 12 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherApproachPlayerLeft
# 13 "data/maps/PetalburgWoods/scripts.pory"
# 7 "data/maps/PetalburgWoods/scripts.pory"
# 14 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 15 "data/maps/PetalburgWoods/scripts.pory"
# 8 "data/maps/PetalburgWoods/scripts.pory"
# 16 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_HaveYouSeenShroomish, MSGBOX_DEFAULT
# 17 "data/maps/PetalburgWoods/scripts.pory"
# 9 "data/maps/PetalburgWoods/scripts.pory"
# 18 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 19 "data/maps/PetalburgWoods/scripts.pory"
# 10 "data/maps/PetalburgWoods/scripts.pory"
# 20 "data/maps/PetalburgWoods/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 21 "data/maps/PetalburgWoods/scripts.pory"
# 11 "data/maps/PetalburgWoods/scripts.pory"
# 22 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_GRUNT, PetalburgWoods_Movement_AquaEntrance
# 23 "data/maps/PetalburgWoods/scripts.pory"
# 12 "data/maps/PetalburgWoods/scripts.pory"
# 24 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 25 "data/maps/PetalburgWoods/scripts.pory"
# 13 "data/maps/PetalburgWoods/scripts.pory"
# 26 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_IWasGoingToAmbushYou, MSGBOX_DEFAULT
# 27 "data/maps/PetalburgWoods/scripts.pory"
# 14 "data/maps/PetalburgWoods/scripts.pory"
# 28 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 29 "data/maps/PetalburgWoods/scripts.pory"
# 15 "data/maps/PetalburgWoods/scripts.pory"
# 30 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_GRUNT, PetalburgWoods_Movement_AquaApproachResearcherLeft
# 31 "data/maps/PetalburgWoods/scripts.pory"
# 16 "data/maps/PetalburgWoods/scripts.pory"
# 32 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 33 "data/maps/PetalburgWoods/scripts.pory"
# 17 "data/maps/PetalburgWoods/scripts.pory"
# 34 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterUp
# 35 "data/maps/PetalburgWoods/scripts.pory"
# 18 "data/maps/PetalburgWoods/scripts.pory"
# 36 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 37 "data/maps/PetalburgWoods/scripts.pory"
# 19 "data/maps/PetalburgWoods/scripts.pory"
# 38 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_HandOverThosePapers, MSGBOX_DEFAULT
# 39 "data/maps/PetalburgWoods/scripts.pory"
# 20 "data/maps/PetalburgWoods/scripts.pory"
# 40 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 41 "data/maps/PetalburgWoods/scripts.pory"
# 21 "data/maps/PetalburgWoods/scripts.pory"
# 42 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherFleeToPlayerLeft
# 43 "data/maps/PetalburgWoods/scripts.pory"
# 22 "data/maps/PetalburgWoods/scripts.pory"
# 44 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 45 "data/maps/PetalburgWoods/scripts.pory"
# 23 "data/maps/PetalburgWoods/scripts.pory"
# 46 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_YouHaveToHelpMe, MSGBOX_DEFAULT
# 47 "data/maps/PetalburgWoods/scripts.pory"
# 24 "data/maps/PetalburgWoods/scripts.pory"
# 48 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 49 "data/maps/PetalburgWoods/scripts.pory"
# 25 "data/maps/PetalburgWoods/scripts.pory"
# 50 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_GRUNT, PetalburgWoods_Movement_AquaApproachPlayer
# 51 "data/maps/PetalburgWoods/scripts.pory"
# 26 "data/maps/PetalburgWoods/scripts.pory"
# 52 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 53 "data/maps/PetalburgWoods/scripts.pory"
# 27 "data/maps/PetalburgWoods/scripts.pory"
# 54 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_NoOneCrossesTeamAqua, MSGBOX_DEFAULT
# 55 "data/maps/PetalburgWoods/scripts.pory"
# 28 "data/maps/PetalburgWoods/scripts.pory"
# 56 "data/maps/PetalburgWoods/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_PETALBURG_WOODS, PetalburgWoods_Text_YoureKiddingMe
# 57 "data/maps/PetalburgWoods/scripts.pory"
# 29 "data/maps/PetalburgWoods/scripts.pory"
# 58 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_GRUNT, PetalburgWoods_Movement_AquaBackOff
# 59 "data/maps/PetalburgWoods/scripts.pory"
# 30 "data/maps/PetalburgWoods/scripts.pory"
# 60 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 61 "data/maps/PetalburgWoods/scripts.pory"
# 31 "data/maps/PetalburgWoods/scripts.pory"
# 62 "data/maps/PetalburgWoods/scripts.pory"
	call PetalburgWoods_EventScript_DevonResearcherPostBattle
# 63 "data/maps/PetalburgWoods/scripts.pory"
# 32 "data/maps/PetalburgWoods/scripts.pory"
# 64 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgWoods_Movement_WatchResearcherLeave
# 65 "data/maps/PetalburgWoods/scripts.pory"
# 33 "data/maps/PetalburgWoods/scripts.pory"
# 66 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherExitLeft
# 67 "data/maps/PetalburgWoods/scripts.pory"
# 34 "data/maps/PetalburgWoods/scripts.pory"
# 68 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 69 "data/maps/PetalburgWoods/scripts.pory"
# 35 "data/maps/PetalburgWoods/scripts.pory"
# 70 "data/maps/PetalburgWoods/scripts.pory"
	goto PetalburgWoods_EventScript_RemoveDevonResearcher
# 71 "data/maps/PetalburgWoods/scripts.pory"
	end
# 72 "data/maps/PetalburgWoods/scripts.pory"

# 73 "data/maps/PetalburgWoods/scripts.pory"

# 74 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcherRight::
# 75 "data/maps/PetalburgWoods/scripts.pory"
# 40 "data/maps/PetalburgWoods/scripts.pory"
# 76 "data/maps/PetalburgWoods/scripts.pory"
	lockall
# 77 "data/maps/PetalburgWoods/scripts.pory"
# 41 "data/maps/PetalburgWoods/scripts.pory"
# 78 "data/maps/PetalburgWoods/scripts.pory"
	call PetalburgWoods_EventScript_DevonResearcherIntro
# 79 "data/maps/PetalburgWoods/scripts.pory"
# 42 "data/maps/PetalburgWoods/scripts.pory"
# 80 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherApproachPlayerRight
# 81 "data/maps/PetalburgWoods/scripts.pory"
# 43 "data/maps/PetalburgWoods/scripts.pory"
# 82 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 83 "data/maps/PetalburgWoods/scripts.pory"
# 44 "data/maps/PetalburgWoods/scripts.pory"
# 84 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 85 "data/maps/PetalburgWoods/scripts.pory"
# 45 "data/maps/PetalburgWoods/scripts.pory"
# 86 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 87 "data/maps/PetalburgWoods/scripts.pory"
# 46 "data/maps/PetalburgWoods/scripts.pory"
# 88 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_HaveYouSeenShroomish, MSGBOX_DEFAULT
# 89 "data/maps/PetalburgWoods/scripts.pory"
# 47 "data/maps/PetalburgWoods/scripts.pory"
# 90 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 91 "data/maps/PetalburgWoods/scripts.pory"
# 48 "data/maps/PetalburgWoods/scripts.pory"
# 92 "data/maps/PetalburgWoods/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 93 "data/maps/PetalburgWoods/scripts.pory"
# 49 "data/maps/PetalburgWoods/scripts.pory"
# 94 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_GRUNT, PetalburgWoods_Movement_AquaEntrance
# 95 "data/maps/PetalburgWoods/scripts.pory"
# 50 "data/maps/PetalburgWoods/scripts.pory"
# 96 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 97 "data/maps/PetalburgWoods/scripts.pory"
# 51 "data/maps/PetalburgWoods/scripts.pory"
# 98 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_IWasGoingToAmbushYou, MSGBOX_DEFAULT
# 99 "data/maps/PetalburgWoods/scripts.pory"
# 52 "data/maps/PetalburgWoods/scripts.pory"
# 100 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 101 "data/maps/PetalburgWoods/scripts.pory"
# 53 "data/maps/PetalburgWoods/scripts.pory"
# 102 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_GRUNT, PetalburgWoods_Movement_AquaApproachResearcherRight
# 103 "data/maps/PetalburgWoods/scripts.pory"
# 54 "data/maps/PetalburgWoods/scripts.pory"
# 104 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 105 "data/maps/PetalburgWoods/scripts.pory"
# 55 "data/maps/PetalburgWoods/scripts.pory"
# 106 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterUp
# 107 "data/maps/PetalburgWoods/scripts.pory"
# 56 "data/maps/PetalburgWoods/scripts.pory"
# 108 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 109 "data/maps/PetalburgWoods/scripts.pory"
# 57 "data/maps/PetalburgWoods/scripts.pory"
# 110 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_HandOverThosePapers, MSGBOX_DEFAULT
# 111 "data/maps/PetalburgWoods/scripts.pory"
# 58 "data/maps/PetalburgWoods/scripts.pory"
# 112 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 113 "data/maps/PetalburgWoods/scripts.pory"
# 59 "data/maps/PetalburgWoods/scripts.pory"
# 114 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherFleeToPlayerRight
# 115 "data/maps/PetalburgWoods/scripts.pory"
# 60 "data/maps/PetalburgWoods/scripts.pory"
# 116 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 117 "data/maps/PetalburgWoods/scripts.pory"
# 61 "data/maps/PetalburgWoods/scripts.pory"
# 118 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_YouHaveToHelpMe, MSGBOX_DEFAULT
# 119 "data/maps/PetalburgWoods/scripts.pory"
# 62 "data/maps/PetalburgWoods/scripts.pory"
# 120 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 121 "data/maps/PetalburgWoods/scripts.pory"
# 63 "data/maps/PetalburgWoods/scripts.pory"
# 122 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 123 "data/maps/PetalburgWoods/scripts.pory"
# 64 "data/maps/PetalburgWoods/scripts.pory"
# 124 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_NoOneCrossesTeamAqua, MSGBOX_DEFAULT
# 125 "data/maps/PetalburgWoods/scripts.pory"
# 65 "data/maps/PetalburgWoods/scripts.pory"
# 126 "data/maps/PetalburgWoods/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_PETALBURG_WOODS, PetalburgWoods_Text_YoureKiddingMe
# 127 "data/maps/PetalburgWoods/scripts.pory"
# 66 "data/maps/PetalburgWoods/scripts.pory"
# 128 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_GRUNT, PetalburgWoods_Movement_AquaBackOff
# 129 "data/maps/PetalburgWoods/scripts.pory"
# 67 "data/maps/PetalburgWoods/scripts.pory"
# 130 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 131 "data/maps/PetalburgWoods/scripts.pory"
# 68 "data/maps/PetalburgWoods/scripts.pory"
# 132 "data/maps/PetalburgWoods/scripts.pory"
	call PetalburgWoods_EventScript_DevonResearcherPostBattle
# 133 "data/maps/PetalburgWoods/scripts.pory"
# 69 "data/maps/PetalburgWoods/scripts.pory"
# 134 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgWoods_Movement_WatchResearcherLeave
# 135 "data/maps/PetalburgWoods/scripts.pory"
# 70 "data/maps/PetalburgWoods/scripts.pory"
# 136 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherExitRight
# 137 "data/maps/PetalburgWoods/scripts.pory"
# 71 "data/maps/PetalburgWoods/scripts.pory"
# 138 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 139 "data/maps/PetalburgWoods/scripts.pory"
# 72 "data/maps/PetalburgWoods/scripts.pory"
# 140 "data/maps/PetalburgWoods/scripts.pory"
	goto PetalburgWoods_EventScript_RemoveDevonResearcher
# 141 "data/maps/PetalburgWoods/scripts.pory"
	end
# 142 "data/maps/PetalburgWoods/scripts.pory"

# 143 "data/maps/PetalburgWoods/scripts.pory"

# 144 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcherIntro::
# 145 "data/maps/PetalburgWoods/scripts.pory"
# 77 "data/maps/PetalburgWoods/scripts.pory"
# 146 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherLookAround
# 147 "data/maps/PetalburgWoods/scripts.pory"
# 78 "data/maps/PetalburgWoods/scripts.pory"
# 148 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 149 "data/maps/PetalburgWoods/scripts.pory"
# 79 "data/maps/PetalburgWoods/scripts.pory"
# 150 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_NotAOneToBeFound, MSGBOX_DEFAULT
# 151 "data/maps/PetalburgWoods/scripts.pory"
# 80 "data/maps/PetalburgWoods/scripts.pory"
# 152 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 153 "data/maps/PetalburgWoods/scripts.pory"
	return
# 154 "data/maps/PetalburgWoods/scripts.pory"

# 155 "data/maps/PetalburgWoods/scripts.pory"

# 156 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcherPostBattle::
# 157 "data/maps/PetalburgWoods/scripts.pory"
# 85 "data/maps/PetalburgWoods/scripts.pory"
# 158 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_YouveGotSomeNerve, MSGBOX_DEFAULT
# 159 "data/maps/PetalburgWoods/scripts.pory"
# 86 "data/maps/PetalburgWoods/scripts.pory"
# 160 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 161 "data/maps/PetalburgWoods/scripts.pory"
# 87 "data/maps/PetalburgWoods/scripts.pory"
# 162 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_GRUNT, PetalburgWoods_Movement_AquaRunAway
# 163 "data/maps/PetalburgWoods/scripts.pory"
# 88 "data/maps/PetalburgWoods/scripts.pory"
# 164 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 165 "data/maps/PetalburgWoods/scripts.pory"
# 89 "data/maps/PetalburgWoods/scripts.pory"
# 166 "data/maps/PetalburgWoods/scripts.pory"
	removeobject LOCALID_PETALBURG_WOODS_GRUNT
# 167 "data/maps/PetalburgWoods/scripts.pory"
# 90 "data/maps/PetalburgWoods/scripts.pory"
# 168 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 169 "data/maps/PetalburgWoods/scripts.pory"
# 91 "data/maps/PetalburgWoods/scripts.pory"
# 170 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 171 "data/maps/PetalburgWoods/scripts.pory"
# 92 "data/maps/PetalburgWoods/scripts.pory"
# 172 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_ThatWasAwfullyClose, MSGBOX_DEFAULT
# 173 "data/maps/PetalburgWoods/scripts.pory"
# 93 "data/maps/PetalburgWoods/scripts.pory"
# 174 "data/maps/PetalburgWoods/scripts.pory"
	giveitem ITEM_GREAT_BALL
# 175 "data/maps/PetalburgWoods/scripts.pory"
# 94 "data/maps/PetalburgWoods/scripts.pory"
# 176 "data/maps/PetalburgWoods/scripts.pory"
	compare VAR_RESULT, FALSE
# 177 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_eq PetalburgWoods_EventScript_DevonResearcherPostBattle_2
# 178 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcherPostBattle_1:
# 179 "data/maps/PetalburgWoods/scripts.pory"
# 97 "data/maps/PetalburgWoods/scripts.pory"
# 180 "data/maps/PetalburgWoods/scripts.pory"
	goto PetalburgWoods_EventScript_DevonResearcherFinish
# 181 "data/maps/PetalburgWoods/scripts.pory"
	end
# 182 "data/maps/PetalburgWoods/scripts.pory"

# 183 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcherPostBattle_2:
# 184 "data/maps/PetalburgWoods/scripts.pory"
# 95 "data/maps/PetalburgWoods/scripts.pory"
# 185 "data/maps/PetalburgWoods/scripts.pory"
	goto PetalburgWoods_EventScript_BagFull
# 186 "data/maps/PetalburgWoods/scripts.pory"
	goto PetalburgWoods_EventScript_DevonResearcherPostBattle_1
# 187 "data/maps/PetalburgWoods/scripts.pory"

# 188 "data/maps/PetalburgWoods/scripts.pory"

# 189 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_BagFull::
# 190 "data/maps/PetalburgWoods/scripts.pory"
# 102 "data/maps/PetalburgWoods/scripts.pory"
# 191 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_YoureLoadedWithItems, MSGBOX_DEFAULT
# 192 "data/maps/PetalburgWoods/scripts.pory"
# 103 "data/maps/PetalburgWoods/scripts.pory"
# 193 "data/maps/PetalburgWoods/scripts.pory"
	goto PetalburgWoods_EventScript_DevonResearcherFinish
# 194 "data/maps/PetalburgWoods/scripts.pory"
	end
# 195 "data/maps/PetalburgWoods/scripts.pory"

# 196 "data/maps/PetalburgWoods/scripts.pory"

# 197 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcherFinish::
# 198 "data/maps/PetalburgWoods/scripts.pory"
# 108 "data/maps/PetalburgWoods/scripts.pory"
# 199 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_TeamAquaAfterSomethingInRustboro, MSGBOX_DEFAULT
# 200 "data/maps/PetalburgWoods/scripts.pory"
# 109 "data/maps/PetalburgWoods/scripts.pory"
# 201 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherStartExit
# 202 "data/maps/PetalburgWoods/scripts.pory"
# 110 "data/maps/PetalburgWoods/scripts.pory"
# 203 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 204 "data/maps/PetalburgWoods/scripts.pory"
# 111 "data/maps/PetalburgWoods/scripts.pory"
# 205 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_ICantBeWastingTime, MSGBOX_DEFAULT
# 206 "data/maps/PetalburgWoods/scripts.pory"
# 112 "data/maps/PetalburgWoods/scripts.pory"
# 207 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 208 "data/maps/PetalburgWoods/scripts.pory"
	return
# 209 "data/maps/PetalburgWoods/scripts.pory"

# 210 "data/maps/PetalburgWoods/scripts.pory"

# 211 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_RemoveDevonResearcher::
# 212 "data/maps/PetalburgWoods/scripts.pory"
# 117 "data/maps/PetalburgWoods/scripts.pory"
# 213 "data/maps/PetalburgWoods/scripts.pory"
	removeobject LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE
# 214 "data/maps/PetalburgWoods/scripts.pory"
# 118 "data/maps/PetalburgWoods/scripts.pory"
# 215 "data/maps/PetalburgWoods/scripts.pory"
	setvar VAR_PETALBURG_WOODS_STATE, 1
# 216 "data/maps/PetalburgWoods/scripts.pory"
# 119 "data/maps/PetalburgWoods/scripts.pory"
# 217 "data/maps/PetalburgWoods/scripts.pory"
	releaseall
# 218 "data/maps/PetalburgWoods/scripts.pory"
	end
# 219 "data/maps/PetalburgWoods/scripts.pory"

# 220 "data/maps/PetalburgWoods/scripts.pory"

# 221 "data/maps/PetalburgWoods/scripts.pory"
# 123 "data/maps/PetalburgWoods/scripts.pory"
# 222 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherLookAround:
# 223 "data/maps/PetalburgWoods/scripts.pory"
# 124 "data/maps/PetalburgWoods/scripts.pory"
# 224 "data/maps/PetalburgWoods/scripts.pory"
	face_up
# 225 "data/maps/PetalburgWoods/scripts.pory"
# 125 "data/maps/PetalburgWoods/scripts.pory"
# 226 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 227 "data/maps/PetalburgWoods/scripts.pory"
# 126 "data/maps/PetalburgWoods/scripts.pory"
# 228 "data/maps/PetalburgWoods/scripts.pory"
	delay_4
# 229 "data/maps/PetalburgWoods/scripts.pory"
# 127 "data/maps/PetalburgWoods/scripts.pory"
# 230 "data/maps/PetalburgWoods/scripts.pory"
	face_right
# 231 "data/maps/PetalburgWoods/scripts.pory"
# 128 "data/maps/PetalburgWoods/scripts.pory"
# 232 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 233 "data/maps/PetalburgWoods/scripts.pory"
# 129 "data/maps/PetalburgWoods/scripts.pory"
# 234 "data/maps/PetalburgWoods/scripts.pory"
	delay_8
# 235 "data/maps/PetalburgWoods/scripts.pory"
# 130 "data/maps/PetalburgWoods/scripts.pory"
# 236 "data/maps/PetalburgWoods/scripts.pory"
	face_left
# 237 "data/maps/PetalburgWoods/scripts.pory"
# 131 "data/maps/PetalburgWoods/scripts.pory"
# 238 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 239 "data/maps/PetalburgWoods/scripts.pory"
# 132 "data/maps/PetalburgWoods/scripts.pory"
# 240 "data/maps/PetalburgWoods/scripts.pory"
	delay_8
# 241 "data/maps/PetalburgWoods/scripts.pory"
# 133 "data/maps/PetalburgWoods/scripts.pory"
# 242 "data/maps/PetalburgWoods/scripts.pory"
	face_down
# 243 "data/maps/PetalburgWoods/scripts.pory"
# 134 "data/maps/PetalburgWoods/scripts.pory"
# 244 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 245 "data/maps/PetalburgWoods/scripts.pory"
# 135 "data/maps/PetalburgWoods/scripts.pory"
# 246 "data/maps/PetalburgWoods/scripts.pory"
	face_right
# 247 "data/maps/PetalburgWoods/scripts.pory"
# 136 "data/maps/PetalburgWoods/scripts.pory"
# 248 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 249 "data/maps/PetalburgWoods/scripts.pory"
# 137 "data/maps/PetalburgWoods/scripts.pory"
# 250 "data/maps/PetalburgWoods/scripts.pory"
	delay_8
# 251 "data/maps/PetalburgWoods/scripts.pory"
# 138 "data/maps/PetalburgWoods/scripts.pory"
# 252 "data/maps/PetalburgWoods/scripts.pory"
	face_up
# 253 "data/maps/PetalburgWoods/scripts.pory"
# 139 "data/maps/PetalburgWoods/scripts.pory"
# 254 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 255 "data/maps/PetalburgWoods/scripts.pory"
# 140 "data/maps/PetalburgWoods/scripts.pory"
# 256 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 257 "data/maps/PetalburgWoods/scripts.pory"

# 258 "data/maps/PetalburgWoods/scripts.pory"
# 143 "data/maps/PetalburgWoods/scripts.pory"
# 259 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherExitLeft:
# 260 "data/maps/PetalburgWoods/scripts.pory"
# 144 "data/maps/PetalburgWoods/scripts.pory"
# 261 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_right
# 262 "data/maps/PetalburgWoods/scripts.pory"
# 145 "data/maps/PetalburgWoods/scripts.pory"
# 263 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 264 "data/maps/PetalburgWoods/scripts.pory"
# 146 "data/maps/PetalburgWoods/scripts.pory"
# 265 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 266 "data/maps/PetalburgWoods/scripts.pory"
# 147 "data/maps/PetalburgWoods/scripts.pory"
# 267 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 268 "data/maps/PetalburgWoods/scripts.pory"
# 148 "data/maps/PetalburgWoods/scripts.pory"
# 269 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 270 "data/maps/PetalburgWoods/scripts.pory"
# 149 "data/maps/PetalburgWoods/scripts.pory"
# 271 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 272 "data/maps/PetalburgWoods/scripts.pory"
# 150 "data/maps/PetalburgWoods/scripts.pory"
# 273 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 274 "data/maps/PetalburgWoods/scripts.pory"
# 151 "data/maps/PetalburgWoods/scripts.pory"
# 275 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 276 "data/maps/PetalburgWoods/scripts.pory"
# 152 "data/maps/PetalburgWoods/scripts.pory"
# 277 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 278 "data/maps/PetalburgWoods/scripts.pory"

# 279 "data/maps/PetalburgWoods/scripts.pory"
# 155 "data/maps/PetalburgWoods/scripts.pory"
# 280 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherApproachPlayerLeft:
# 281 "data/maps/PetalburgWoods/scripts.pory"
# 156 "data/maps/PetalburgWoods/scripts.pory"
# 282 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 283 "data/maps/PetalburgWoods/scripts.pory"
# 157 "data/maps/PetalburgWoods/scripts.pory"
# 284 "data/maps/PetalburgWoods/scripts.pory"
	face_player
# 285 "data/maps/PetalburgWoods/scripts.pory"
# 158 "data/maps/PetalburgWoods/scripts.pory"
# 286 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 287 "data/maps/PetalburgWoods/scripts.pory"
# 159 "data/maps/PetalburgWoods/scripts.pory"
# 288 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 289 "data/maps/PetalburgWoods/scripts.pory"
# 160 "data/maps/PetalburgWoods/scripts.pory"
# 290 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 291 "data/maps/PetalburgWoods/scripts.pory"

# 292 "data/maps/PetalburgWoods/scripts.pory"
# 163 "data/maps/PetalburgWoods/scripts.pory"
# 293 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherApproachPlayerRight:
# 294 "data/maps/PetalburgWoods/scripts.pory"
# 164 "data/maps/PetalburgWoods/scripts.pory"
# 295 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 296 "data/maps/PetalburgWoods/scripts.pory"
# 165 "data/maps/PetalburgWoods/scripts.pory"
# 297 "data/maps/PetalburgWoods/scripts.pory"
	face_player
# 298 "data/maps/PetalburgWoods/scripts.pory"
# 166 "data/maps/PetalburgWoods/scripts.pory"
# 299 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 300 "data/maps/PetalburgWoods/scripts.pory"
# 167 "data/maps/PetalburgWoods/scripts.pory"
# 301 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 302 "data/maps/PetalburgWoods/scripts.pory"
# 168 "data/maps/PetalburgWoods/scripts.pory"
# 303 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 304 "data/maps/PetalburgWoods/scripts.pory"
# 169 "data/maps/PetalburgWoods/scripts.pory"
# 305 "data/maps/PetalburgWoods/scripts.pory"
	walk_in_place_faster_right
# 306 "data/maps/PetalburgWoods/scripts.pory"
# 170 "data/maps/PetalburgWoods/scripts.pory"
# 307 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 308 "data/maps/PetalburgWoods/scripts.pory"

# 309 "data/maps/PetalburgWoods/scripts.pory"
# 173 "data/maps/PetalburgWoods/scripts.pory"
# 310 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherExitRight:
# 311 "data/maps/PetalburgWoods/scripts.pory"
# 174 "data/maps/PetalburgWoods/scripts.pory"
# 312 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_left
# 313 "data/maps/PetalburgWoods/scripts.pory"
# 175 "data/maps/PetalburgWoods/scripts.pory"
# 314 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 315 "data/maps/PetalburgWoods/scripts.pory"
# 176 "data/maps/PetalburgWoods/scripts.pory"
# 316 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 317 "data/maps/PetalburgWoods/scripts.pory"
# 177 "data/maps/PetalburgWoods/scripts.pory"
# 318 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 319 "data/maps/PetalburgWoods/scripts.pory"
# 178 "data/maps/PetalburgWoods/scripts.pory"
# 320 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 321 "data/maps/PetalburgWoods/scripts.pory"
# 179 "data/maps/PetalburgWoods/scripts.pory"
# 322 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 323 "data/maps/PetalburgWoods/scripts.pory"
# 180 "data/maps/PetalburgWoods/scripts.pory"
# 324 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 325 "data/maps/PetalburgWoods/scripts.pory"
# 181 "data/maps/PetalburgWoods/scripts.pory"
# 326 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 327 "data/maps/PetalburgWoods/scripts.pory"
# 182 "data/maps/PetalburgWoods/scripts.pory"
# 328 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 329 "data/maps/PetalburgWoods/scripts.pory"

# 330 "data/maps/PetalburgWoods/scripts.pory"
# 185 "data/maps/PetalburgWoods/scripts.pory"
# 331 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_WatchResearcherLeave:
# 332 "data/maps/PetalburgWoods/scripts.pory"
# 186 "data/maps/PetalburgWoods/scripts.pory"
# 333 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 334 "data/maps/PetalburgWoods/scripts.pory"
# 187 "data/maps/PetalburgWoods/scripts.pory"
# 335 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 336 "data/maps/PetalburgWoods/scripts.pory"
# 188 "data/maps/PetalburgWoods/scripts.pory"
# 337 "data/maps/PetalburgWoods/scripts.pory"
	walk_in_place_faster_up
# 338 "data/maps/PetalburgWoods/scripts.pory"
# 189 "data/maps/PetalburgWoods/scripts.pory"
# 339 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 340 "data/maps/PetalburgWoods/scripts.pory"

# 341 "data/maps/PetalburgWoods/scripts.pory"
# 192 "data/maps/PetalburgWoods/scripts.pory"
# 342 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherFleeToPlayerLeft:
# 343 "data/maps/PetalburgWoods/scripts.pory"
# 193 "data/maps/PetalburgWoods/scripts.pory"
# 344 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_right
# 345 "data/maps/PetalburgWoods/scripts.pory"
# 194 "data/maps/PetalburgWoods/scripts.pory"
# 346 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 347 "data/maps/PetalburgWoods/scripts.pory"
# 195 "data/maps/PetalburgWoods/scripts.pory"
# 348 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 349 "data/maps/PetalburgWoods/scripts.pory"
# 196 "data/maps/PetalburgWoods/scripts.pory"
# 350 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_left
# 351 "data/maps/PetalburgWoods/scripts.pory"
# 197 "data/maps/PetalburgWoods/scripts.pory"
# 352 "data/maps/PetalburgWoods/scripts.pory"
	walk_in_place_faster_up
# 353 "data/maps/PetalburgWoods/scripts.pory"
# 198 "data/maps/PetalburgWoods/scripts.pory"
# 354 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 355 "data/maps/PetalburgWoods/scripts.pory"

# 356 "data/maps/PetalburgWoods/scripts.pory"
# 201 "data/maps/PetalburgWoods/scripts.pory"
# 357 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherFleeToPlayerRight:
# 358 "data/maps/PetalburgWoods/scripts.pory"
# 202 "data/maps/PetalburgWoods/scripts.pory"
# 359 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 360 "data/maps/PetalburgWoods/scripts.pory"
# 203 "data/maps/PetalburgWoods/scripts.pory"
# 361 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_right
# 362 "data/maps/PetalburgWoods/scripts.pory"
# 204 "data/maps/PetalburgWoods/scripts.pory"
# 363 "data/maps/PetalburgWoods/scripts.pory"
	walk_in_place_faster_up
# 364 "data/maps/PetalburgWoods/scripts.pory"
# 205 "data/maps/PetalburgWoods/scripts.pory"
# 365 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 366 "data/maps/PetalburgWoods/scripts.pory"

# 367 "data/maps/PetalburgWoods/scripts.pory"
# 208 "data/maps/PetalburgWoods/scripts.pory"
# 368 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherStartExit:
# 369 "data/maps/PetalburgWoods/scripts.pory"
# 209 "data/maps/PetalburgWoods/scripts.pory"
# 370 "data/maps/PetalburgWoods/scripts.pory"
	walk_in_place_faster_down
# 371 "data/maps/PetalburgWoods/scripts.pory"
# 210 "data/maps/PetalburgWoods/scripts.pory"
# 372 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 373 "data/maps/PetalburgWoods/scripts.pory"
# 211 "data/maps/PetalburgWoods/scripts.pory"
# 374 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 375 "data/maps/PetalburgWoods/scripts.pory"
# 212 "data/maps/PetalburgWoods/scripts.pory"
# 376 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 377 "data/maps/PetalburgWoods/scripts.pory"
# 213 "data/maps/PetalburgWoods/scripts.pory"
# 378 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 379 "data/maps/PetalburgWoods/scripts.pory"
# 214 "data/maps/PetalburgWoods/scripts.pory"
# 380 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 381 "data/maps/PetalburgWoods/scripts.pory"
# 215 "data/maps/PetalburgWoods/scripts.pory"
# 382 "data/maps/PetalburgWoods/scripts.pory"
	face_up
# 383 "data/maps/PetalburgWoods/scripts.pory"
# 216 "data/maps/PetalburgWoods/scripts.pory"
# 384 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 385 "data/maps/PetalburgWoods/scripts.pory"

# 386 "data/maps/PetalburgWoods/scripts.pory"
# 219 "data/maps/PetalburgWoods/scripts.pory"
# 387 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_AquaApproachResearcherLeft:
# 388 "data/maps/PetalburgWoods/scripts.pory"
# 220 "data/maps/PetalburgWoods/scripts.pory"
# 389 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 390 "data/maps/PetalburgWoods/scripts.pory"
# 221 "data/maps/PetalburgWoods/scripts.pory"
# 391 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 392 "data/maps/PetalburgWoods/scripts.pory"
# 222 "data/maps/PetalburgWoods/scripts.pory"
# 393 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 394 "data/maps/PetalburgWoods/scripts.pory"

# 395 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_AquaBackOff::
# 396 "data/maps/PetalburgWoods/scripts.pory"
# 226 "data/maps/PetalburgWoods/scripts.pory"
# 397 "data/maps/PetalburgWoods/scripts.pory"
	lock_facing_direction
# 398 "data/maps/PetalburgWoods/scripts.pory"
# 227 "data/maps/PetalburgWoods/scripts.pory"
# 399 "data/maps/PetalburgWoods/scripts.pory"
	walk_up
# 400 "data/maps/PetalburgWoods/scripts.pory"
# 228 "data/maps/PetalburgWoods/scripts.pory"
# 401 "data/maps/PetalburgWoods/scripts.pory"
	unlock_facing_direction
# 402 "data/maps/PetalburgWoods/scripts.pory"
# 229 "data/maps/PetalburgWoods/scripts.pory"
# 403 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 404 "data/maps/PetalburgWoods/scripts.pory"
	return
# 405 "data/maps/PetalburgWoods/scripts.pory"

# 406 "data/maps/PetalburgWoods/scripts.pory"

# 407 "data/maps/PetalburgWoods/scripts.pory"
# 232 "data/maps/PetalburgWoods/scripts.pory"
# 408 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_AquaRunAway:
# 409 "data/maps/PetalburgWoods/scripts.pory"
# 233 "data/maps/PetalburgWoods/scripts.pory"
# 410 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 411 "data/maps/PetalburgWoods/scripts.pory"
# 234 "data/maps/PetalburgWoods/scripts.pory"
# 412 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 413 "data/maps/PetalburgWoods/scripts.pory"
# 235 "data/maps/PetalburgWoods/scripts.pory"
# 414 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 415 "data/maps/PetalburgWoods/scripts.pory"
# 236 "data/maps/PetalburgWoods/scripts.pory"
# 416 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 417 "data/maps/PetalburgWoods/scripts.pory"
# 237 "data/maps/PetalburgWoods/scripts.pory"
# 418 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 419 "data/maps/PetalburgWoods/scripts.pory"
# 238 "data/maps/PetalburgWoods/scripts.pory"
# 420 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 421 "data/maps/PetalburgWoods/scripts.pory"
# 239 "data/maps/PetalburgWoods/scripts.pory"
# 422 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 423 "data/maps/PetalburgWoods/scripts.pory"
# 240 "data/maps/PetalburgWoods/scripts.pory"
# 424 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 425 "data/maps/PetalburgWoods/scripts.pory"

# 426 "data/maps/PetalburgWoods/scripts.pory"
# 243 "data/maps/PetalburgWoods/scripts.pory"
# 427 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_AquaApproachResearcherRight:
# 428 "data/maps/PetalburgWoods/scripts.pory"
# 244 "data/maps/PetalburgWoods/scripts.pory"
# 429 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 430 "data/maps/PetalburgWoods/scripts.pory"
# 245 "data/maps/PetalburgWoods/scripts.pory"
# 431 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 432 "data/maps/PetalburgWoods/scripts.pory"
# 246 "data/maps/PetalburgWoods/scripts.pory"
# 433 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 434 "data/maps/PetalburgWoods/scripts.pory"
# 247 "data/maps/PetalburgWoods/scripts.pory"
# 435 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 436 "data/maps/PetalburgWoods/scripts.pory"

# 437 "data/maps/PetalburgWoods/scripts.pory"
# 250 "data/maps/PetalburgWoods/scripts.pory"
# 438 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_AquaEntrance:
# 439 "data/maps/PetalburgWoods/scripts.pory"
# 251 "data/maps/PetalburgWoods/scripts.pory"
# 440 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 441 "data/maps/PetalburgWoods/scripts.pory"
# 252 "data/maps/PetalburgWoods/scripts.pory"
# 442 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 443 "data/maps/PetalburgWoods/scripts.pory"
# 253 "data/maps/PetalburgWoods/scripts.pory"
# 444 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 445 "data/maps/PetalburgWoods/scripts.pory"
# 254 "data/maps/PetalburgWoods/scripts.pory"
# 446 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 447 "data/maps/PetalburgWoods/scripts.pory"
# 255 "data/maps/PetalburgWoods/scripts.pory"
# 448 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 449 "data/maps/PetalburgWoods/scripts.pory"

# 450 "data/maps/PetalburgWoods/scripts.pory"
# 258 "data/maps/PetalburgWoods/scripts.pory"
# 451 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_AquaApproachPlayer:
# 452 "data/maps/PetalburgWoods/scripts.pory"
# 259 "data/maps/PetalburgWoods/scripts.pory"
# 453 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 454 "data/maps/PetalburgWoods/scripts.pory"
# 260 "data/maps/PetalburgWoods/scripts.pory"
# 455 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 456 "data/maps/PetalburgWoods/scripts.pory"

# 457 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_Boy1::
# 458 "data/maps/PetalburgWoods/scripts.pory"
# 264 "data/maps/PetalburgWoods/scripts.pory"
# 459 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_StayOutOfTallGrass, MSGBOX_NPC
# 460 "data/maps/PetalburgWoods/scripts.pory"
	end
# 461 "data/maps/PetalburgWoods/scripts.pory"

# 462 "data/maps/PetalburgWoods/scripts.pory"

# 463 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_Boy2::
# 464 "data/maps/PetalburgWoods/scripts.pory"
# 269 "data/maps/PetalburgWoods/scripts.pory"
# 465 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_HiddenItemsExplanation, MSGBOX_NPC
# 466 "data/maps/PetalburgWoods/scripts.pory"
	end
# 467 "data/maps/PetalburgWoods/scripts.pory"

# 468 "data/maps/PetalburgWoods/scripts.pory"

# 469 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_Girl::
# 470 "data/maps/PetalburgWoods/scripts.pory"
# 274 "data/maps/PetalburgWoods/scripts.pory"
# 471 "data/maps/PetalburgWoods/scripts.pory"
	lock
# 472 "data/maps/PetalburgWoods/scripts.pory"
# 275 "data/maps/PetalburgWoods/scripts.pory"
# 473 "data/maps/PetalburgWoods/scripts.pory"
	faceplayer
# 474 "data/maps/PetalburgWoods/scripts.pory"
# 276 "data/maps/PetalburgWoods/scripts.pory"
# 475 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_set FLAG_RECEIVED_MIRACLE_SEED, PetalburgWoods_EventScript_Girl_2
# 476 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_Girl_1:
# 477 "data/maps/PetalburgWoods/scripts.pory"
# 279 "data/maps/PetalburgWoods/scripts.pory"
# 478 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_TryUsingThisItem, MSGBOX_DEFAULT
# 479 "data/maps/PetalburgWoods/scripts.pory"
# 280 "data/maps/PetalburgWoods/scripts.pory"
# 480 "data/maps/PetalburgWoods/scripts.pory"
	giveitem ITEM_MIRACLE_SEED
# 481 "data/maps/PetalburgWoods/scripts.pory"
# 281 "data/maps/PetalburgWoods/scripts.pory"
# 482 "data/maps/PetalburgWoods/scripts.pory"
	compare VAR_RESULT, FALSE
# 483 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_eq PetalburgWoods_EventScript_Girl_5
# 484 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_Girl_4:
# 485 "data/maps/PetalburgWoods/scripts.pory"
# 284 "data/maps/PetalburgWoods/scripts.pory"
# 486 "data/maps/PetalburgWoods/scripts.pory"
	setflag FLAG_RECEIVED_MIRACLE_SEED
# 487 "data/maps/PetalburgWoods/scripts.pory"
# 285 "data/maps/PetalburgWoods/scripts.pory"
# 488 "data/maps/PetalburgWoods/scripts.pory"
	release
# 489 "data/maps/PetalburgWoods/scripts.pory"
	end
# 490 "data/maps/PetalburgWoods/scripts.pory"

# 491 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_Girl_2:
# 492 "data/maps/PetalburgWoods/scripts.pory"
# 277 "data/maps/PetalburgWoods/scripts.pory"
# 493 "data/maps/PetalburgWoods/scripts.pory"
	goto PetalburgWoods_EventScript_ExplainMiracleSeed
# 494 "data/maps/PetalburgWoods/scripts.pory"
	goto PetalburgWoods_EventScript_Girl_1
# 495 "data/maps/PetalburgWoods/scripts.pory"

# 496 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_Girl_5:
# 497 "data/maps/PetalburgWoods/scripts.pory"
# 282 "data/maps/PetalburgWoods/scripts.pory"
# 498 "data/maps/PetalburgWoods/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
# 499 "data/maps/PetalburgWoods/scripts.pory"
	goto PetalburgWoods_EventScript_Girl_4
# 500 "data/maps/PetalburgWoods/scripts.pory"

# 501 "data/maps/PetalburgWoods/scripts.pory"

# 502 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_ExplainMiracleSeed::
# 503 "data/maps/PetalburgWoods/scripts.pory"
# 290 "data/maps/PetalburgWoods/scripts.pory"
# 504 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_MiracleSeedExplanation, MSGBOX_DEFAULT
# 505 "data/maps/PetalburgWoods/scripts.pory"
# 291 "data/maps/PetalburgWoods/scripts.pory"
# 506 "data/maps/PetalburgWoods/scripts.pory"
	release
# 507 "data/maps/PetalburgWoods/scripts.pory"
	end
# 508 "data/maps/PetalburgWoods/scripts.pory"

# 509 "data/maps/PetalburgWoods/scripts.pory"

# 510 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_Sign1::
# 511 "data/maps/PetalburgWoods/scripts.pory"
# 296 "data/maps/PetalburgWoods/scripts.pory"
# 512 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_TrainerTipsExperience, MSGBOX_SIGN
# 513 "data/maps/PetalburgWoods/scripts.pory"
	end
# 514 "data/maps/PetalburgWoods/scripts.pory"

# 515 "data/maps/PetalburgWoods/scripts.pory"

# 516 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_Sign2::
# 517 "data/maps/PetalburgWoods/scripts.pory"
# 301 "data/maps/PetalburgWoods/scripts.pory"
# 518 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_TrainerTipsPP, MSGBOX_SIGN
# 519 "data/maps/PetalburgWoods/scripts.pory"
	end
# 520 "data/maps/PetalburgWoods/scripts.pory"

# 521 "data/maps/PetalburgWoods/scripts.pory"

# 522 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_Lyle::
# 523 "data/maps/PetalburgWoods/scripts.pory"
# 306 "data/maps/PetalburgWoods/scripts.pory"
# 524 "data/maps/PetalburgWoods/scripts.pory"
	trainerbattle_single TRAINER_LYLE, PetalburgWoods_Text_GoBugPokemonTeam, PetalburgWoods_Text_ICouldntWin
# 525 "data/maps/PetalburgWoods/scripts.pory"
# 307 "data/maps/PetalburgWoods/scripts.pory"
# 526 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_ImOutOfPokeBalls, MSGBOX_AUTOCLOSE
# 527 "data/maps/PetalburgWoods/scripts.pory"
	end
# 528 "data/maps/PetalburgWoods/scripts.pory"

# 529 "data/maps/PetalburgWoods/scripts.pory"

# 530 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_James::
# 531 "data/maps/PetalburgWoods/scripts.pory"
# 312 "data/maps/PetalburgWoods/scripts.pory"
# 532 "data/maps/PetalburgWoods/scripts.pory"
	trainerbattle_single TRAINER_JAMES_1, PetalburgWoods_Text_InstantlyPopularWithBugPokemon, PetalburgWoods_Text_CantBePopularIfILose, PetalburgWoods_EventScript_TryRegisterJames
# 533 "data/maps/PetalburgWoods/scripts.pory"
# 313 "data/maps/PetalburgWoods/scripts.pory"
# 534 "data/maps/PetalburgWoods/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 535 "data/maps/PetalburgWoods/scripts.pory"
# 314 "data/maps/PetalburgWoods/scripts.pory"
# 536 "data/maps/PetalburgWoods/scripts.pory"
	compare VAR_RESULT, TRUE
# 537 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_eq PetalburgWoods_EventScript_James_2
# 538 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_James_1:
# 539 "data/maps/PetalburgWoods/scripts.pory"
# 317 "data/maps/PetalburgWoods/scripts.pory"
# 540 "data/maps/PetalburgWoods/scripts.pory"
	setvar VAR_0x8004, TRAINER_JAMES_1
# 541 "data/maps/PetalburgWoods/scripts.pory"
# 318 "data/maps/PetalburgWoods/scripts.pory"
# 542 "data/maps/PetalburgWoods/scripts.pory"
	specialvar VAR_RESULT, IsTrainerRegistered
# 543 "data/maps/PetalburgWoods/scripts.pory"
# 319 "data/maps/PetalburgWoods/scripts.pory"
# 544 "data/maps/PetalburgWoods/scripts.pory"
	compare VAR_RESULT, FALSE
# 545 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_eq PetalburgWoods_EventScript_James_5
# 546 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_James_4:
# 547 "data/maps/PetalburgWoods/scripts.pory"
# 322 "data/maps/PetalburgWoods/scripts.pory"
# 548 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_PeopleRespectYou, MSGBOX_DEFAULT
# 549 "data/maps/PetalburgWoods/scripts.pory"
# 323 "data/maps/PetalburgWoods/scripts.pory"
# 550 "data/maps/PetalburgWoods/scripts.pory"
	release
# 551 "data/maps/PetalburgWoods/scripts.pory"
	end
# 552 "data/maps/PetalburgWoods/scripts.pory"

# 553 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_James_2:
# 554 "data/maps/PetalburgWoods/scripts.pory"
# 315 "data/maps/PetalburgWoods/scripts.pory"
# 555 "data/maps/PetalburgWoods/scripts.pory"
	goto PetalburgWoods_EventScript_JamesRematch
# 556 "data/maps/PetalburgWoods/scripts.pory"
	goto PetalburgWoods_EventScript_James_1
# 557 "data/maps/PetalburgWoods/scripts.pory"

# 558 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_James_5:
# 559 "data/maps/PetalburgWoods/scripts.pory"
# 320 "data/maps/PetalburgWoods/scripts.pory"
# 560 "data/maps/PetalburgWoods/scripts.pory"
	goto PetalburgWoods_EventScript_TryRegisterJames2
# 561 "data/maps/PetalburgWoods/scripts.pory"
	goto PetalburgWoods_EventScript_James_4
# 562 "data/maps/PetalburgWoods/scripts.pory"

# 563 "data/maps/PetalburgWoods/scripts.pory"

# 564 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_TryRegisterJames::
# 565 "data/maps/PetalburgWoods/scripts.pory"
# 328 "data/maps/PetalburgWoods/scripts.pory"
# 566 "data/maps/PetalburgWoods/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 567 "data/maps/PetalburgWoods/scripts.pory"
# 329 "data/maps/PetalburgWoods/scripts.pory"
# 568 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 569 "data/maps/PetalburgWoods/scripts.pory"
# 330 "data/maps/PetalburgWoods/scripts.pory"
# 570 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, PetalburgWoods_EventScript_TryRegisterJames_2
# 571 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_TryRegisterJames_1:
# 572 "data/maps/PetalburgWoods/scripts.pory"
# 333 "data/maps/PetalburgWoods/scripts.pory"
# 573 "data/maps/PetalburgWoods/scripts.pory"
	release
# 574 "data/maps/PetalburgWoods/scripts.pory"
	end
# 575 "data/maps/PetalburgWoods/scripts.pory"

# 576 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_TryRegisterJames_2:
# 577 "data/maps/PetalburgWoods/scripts.pory"
# 331 "data/maps/PetalburgWoods/scripts.pory"
# 578 "data/maps/PetalburgWoods/scripts.pory"
	goto PetalburgWoods_EventScript_RegisterJames
# 579 "data/maps/PetalburgWoods/scripts.pory"
	goto PetalburgWoods_EventScript_TryRegisterJames_1
# 580 "data/maps/PetalburgWoods/scripts.pory"

# 581 "data/maps/PetalburgWoods/scripts.pory"

# 582 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_RegisterJames::
# 583 "data/maps/PetalburgWoods/scripts.pory"
# 338 "data/maps/PetalburgWoods/scripts.pory"
# 584 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_IWantRematch1, MSGBOX_DEFAULT
# 585 "data/maps/PetalburgWoods/scripts.pory"
# 339 "data/maps/PetalburgWoods/scripts.pory"
# 586 "data/maps/PetalburgWoods/scripts.pory"
	register_matchcall TRAINER_JAMES_1
# 587 "data/maps/PetalburgWoods/scripts.pory"
# 340 "data/maps/PetalburgWoods/scripts.pory"
# 588 "data/maps/PetalburgWoods/scripts.pory"
	release
# 589 "data/maps/PetalburgWoods/scripts.pory"
	end
# 590 "data/maps/PetalburgWoods/scripts.pory"

# 591 "data/maps/PetalburgWoods/scripts.pory"

# 592 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_TryRegisterJames2::
# 593 "data/maps/PetalburgWoods/scripts.pory"
# 345 "data/maps/PetalburgWoods/scripts.pory"
# 594 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, PetalburgWoods_EventScript_TryRegisterJames2_2
# 595 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_TryRegisterJames2_1:
# 596 "data/maps/PetalburgWoods/scripts.pory"
# 348 "data/maps/PetalburgWoods/scripts.pory"
# 597 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_PeopleRespectYou, MSGBOX_DEFAULT
# 598 "data/maps/PetalburgWoods/scripts.pory"
# 349 "data/maps/PetalburgWoods/scripts.pory"
# 599 "data/maps/PetalburgWoods/scripts.pory"
	release
# 600 "data/maps/PetalburgWoods/scripts.pory"
	end
# 601 "data/maps/PetalburgWoods/scripts.pory"

# 602 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_TryRegisterJames2_2:
# 603 "data/maps/PetalburgWoods/scripts.pory"
# 346 "data/maps/PetalburgWoods/scripts.pory"
# 604 "data/maps/PetalburgWoods/scripts.pory"
	goto PetalburgWoods_EventScript_RegisterJames2
# 605 "data/maps/PetalburgWoods/scripts.pory"
	goto PetalburgWoods_EventScript_TryRegisterJames2_1
# 606 "data/maps/PetalburgWoods/scripts.pory"

# 607 "data/maps/PetalburgWoods/scripts.pory"

# 608 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_RegisterJames2::
# 609 "data/maps/PetalburgWoods/scripts.pory"
# 354 "data/maps/PetalburgWoods/scripts.pory"
# 610 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_IWantRematch2, MSGBOX_DEFAULT
# 611 "data/maps/PetalburgWoods/scripts.pory"
# 355 "data/maps/PetalburgWoods/scripts.pory"
# 612 "data/maps/PetalburgWoods/scripts.pory"
	register_matchcall TRAINER_JAMES_1
# 613 "data/maps/PetalburgWoods/scripts.pory"
# 356 "data/maps/PetalburgWoods/scripts.pory"
# 614 "data/maps/PetalburgWoods/scripts.pory"
	release
# 615 "data/maps/PetalburgWoods/scripts.pory"
	end
# 616 "data/maps/PetalburgWoods/scripts.pory"

# 617 "data/maps/PetalburgWoods/scripts.pory"

# 618 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_JamesRematch::
# 619 "data/maps/PetalburgWoods/scripts.pory"
# 361 "data/maps/PetalburgWoods/scripts.pory"
# 620 "data/maps/PetalburgWoods/scripts.pory"
	trainerbattle_rematch TRAINER_JAMES_1, PetalburgWoods_Text_MyPokemonHaveGrown, PetalburgWoods_Text_CantBePopularIfLose
# 621 "data/maps/PetalburgWoods/scripts.pory"
# 362 "data/maps/PetalburgWoods/scripts.pory"
# 622 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_IveBeenTrainingHard, MSGBOX_AUTOCLOSE
# 623 "data/maps/PetalburgWoods/scripts.pory"
	end
# 624 "data/maps/PetalburgWoods/scripts.pory"

# 625 "data/maps/PetalburgWoods/scripts.pory"

# 626 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_NotAOneToBeFound::
# 627 "data/maps/PetalburgWoods/scripts.pory"
# 366 "data/maps/PetalburgWoods/scripts.pory"
# 628 "data/maps/PetalburgWoods/scripts.pory"
	.string "Hmmm…\n"
# 629 "data/maps/PetalburgWoods/scripts.pory"
	.string "Not a one to be found…$"
# 630 "data/maps/PetalburgWoods/scripts.pory"

# 631 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_HaveYouSeenShroomish::
# 632 "data/maps/PetalburgWoods/scripts.pory"
# 371 "data/maps/PetalburgWoods/scripts.pory"
# 633 "data/maps/PetalburgWoods/scripts.pory"
	.string "Hello, have you seen any POKéMON\n"
# 634 "data/maps/PetalburgWoods/scripts.pory"
	.string "called SHROOMISH around here?\p"
# 635 "data/maps/PetalburgWoods/scripts.pory"
	.string "I really love that POKéMON.$"
# 636 "data/maps/PetalburgWoods/scripts.pory"

# 637 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_IWasGoingToAmbushYou::
# 638 "data/maps/PetalburgWoods/scripts.pory"
# 377 "data/maps/PetalburgWoods/scripts.pory"
# 639 "data/maps/PetalburgWoods/scripts.pory"
	.string "I was going to ambush you, but you\n"
# 640 "data/maps/PetalburgWoods/scripts.pory"
	.string "had to dawdle in PETALBURG WOODS\l"
# 641 "data/maps/PetalburgWoods/scripts.pory"
	.string "forever, didn't you?\p"
# 642 "data/maps/PetalburgWoods/scripts.pory"
	.string "I got sick of waiting, so here I am!$"
# 643 "data/maps/PetalburgWoods/scripts.pory"

# 644 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_HandOverThosePapers::
# 645 "data/maps/PetalburgWoods/scripts.pory"
# 384 "data/maps/PetalburgWoods/scripts.pory"
# 646 "data/maps/PetalburgWoods/scripts.pory"
	.string "You! DEVON RESEARCHER!\p"
# 647 "data/maps/PetalburgWoods/scripts.pory"
	.string "Hand over those papers!$"
# 648 "data/maps/PetalburgWoods/scripts.pory"

# 649 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_YouHaveToHelpMe::
# 650 "data/maps/PetalburgWoods/scripts.pory"
# 389 "data/maps/PetalburgWoods/scripts.pory"
# 651 "data/maps/PetalburgWoods/scripts.pory"
	.string "Aiyeeeh!\p"
# 652 "data/maps/PetalburgWoods/scripts.pory"
	.string "You're a POKéMON TRAINER, aren't you?\n"
# 653 "data/maps/PetalburgWoods/scripts.pory"
	.string "You've got to help me, please!$"
# 654 "data/maps/PetalburgWoods/scripts.pory"

# 655 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_NoOneCrossesTeamAqua::
# 656 "data/maps/PetalburgWoods/scripts.pory"
# 395 "data/maps/PetalburgWoods/scripts.pory"
# 657 "data/maps/PetalburgWoods/scripts.pory"
	.string "Hunh? What do you think you're doing?\n"
# 658 "data/maps/PetalburgWoods/scripts.pory"
	.string "What, you're going to protect him?\p"
# 659 "data/maps/PetalburgWoods/scripts.pory"
	.string "No one who crosses TEAM AQUA\n"
# 660 "data/maps/PetalburgWoods/scripts.pory"
	.string "gets any mercy, not even a kid!\p"
# 661 "data/maps/PetalburgWoods/scripts.pory"
	.string "Come on and battle me!$"
# 662 "data/maps/PetalburgWoods/scripts.pory"

# 663 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_YoureKiddingMe::
# 664 "data/maps/PetalburgWoods/scripts.pory"
# 403 "data/maps/PetalburgWoods/scripts.pory"
# 665 "data/maps/PetalburgWoods/scripts.pory"
	.string "You're kidding me! You're tough!$"
# 666 "data/maps/PetalburgWoods/scripts.pory"

# 667 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_YouveGotSomeNerve::
# 668 "data/maps/PetalburgWoods/scripts.pory"
# 407 "data/maps/PetalburgWoods/scripts.pory"
# 669 "data/maps/PetalburgWoods/scripts.pory"
	.string "Grrr… You've got some nerve\n"
# 670 "data/maps/PetalburgWoods/scripts.pory"
	.string "meddling with TEAM AQUA!\l"
# 671 "data/maps/PetalburgWoods/scripts.pory"
	.string "Come on and battle me again!\p"
# 672 "data/maps/PetalburgWoods/scripts.pory"
	.string "I wish I could say that, but I'm out of\n"
# 673 "data/maps/PetalburgWoods/scripts.pory"
	.string "POKéMON…\p"
# 674 "data/maps/PetalburgWoods/scripts.pory"
	.string "And, hey, we of TEAM AQUA are also\n"
# 675 "data/maps/PetalburgWoods/scripts.pory"
	.string "after something in RUSTBORO.\p"
# 676 "data/maps/PetalburgWoods/scripts.pory"
	.string "I'll let you go today!$"
# 677 "data/maps/PetalburgWoods/scripts.pory"

# 678 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_ThatWasAwfullyClose::
# 679 "data/maps/PetalburgWoods/scripts.pory"
# 418 "data/maps/PetalburgWoods/scripts.pory"
# 680 "data/maps/PetalburgWoods/scripts.pory"
	.string "Whew…\n"
# 681 "data/maps/PetalburgWoods/scripts.pory"
	.string "That was awfully close!\p"
# 682 "data/maps/PetalburgWoods/scripts.pory"
	.string "Thanks to you, he didn't rob me of\n"
# 683 "data/maps/PetalburgWoods/scripts.pory"
	.string "these important papers.\p"
# 684 "data/maps/PetalburgWoods/scripts.pory"
	.string "I know, I'll give you a GREAT BALL as\n"
# 685 "data/maps/PetalburgWoods/scripts.pory"
	.string "my thanks!$"
# 686 "data/maps/PetalburgWoods/scripts.pory"

# 687 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_TeamAquaAfterSomethingInRustboro::
# 688 "data/maps/PetalburgWoods/scripts.pory"
# 427 "data/maps/PetalburgWoods/scripts.pory"
# 689 "data/maps/PetalburgWoods/scripts.pory"
	.string "Didn't that TEAM AQUA thug say\n"
# 690 "data/maps/PetalburgWoods/scripts.pory"
	.string "they were after something in\l"
# 691 "data/maps/PetalburgWoods/scripts.pory"
	.string "RUSTBORO, too?$"
# 692 "data/maps/PetalburgWoods/scripts.pory"

# 693 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_ICantBeWastingTime::
# 694 "data/maps/PetalburgWoods/scripts.pory"
# 433 "data/maps/PetalburgWoods/scripts.pory"
# 695 "data/maps/PetalburgWoods/scripts.pory"
	.string "Uh-oh! It's a crisis!\n"
# 696 "data/maps/PetalburgWoods/scripts.pory"
	.string "I can't be wasting time!$"
# 697 "data/maps/PetalburgWoods/scripts.pory"

# 698 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_YoureLoadedWithItems::
# 699 "data/maps/PetalburgWoods/scripts.pory"
# 438 "data/maps/PetalburgWoods/scripts.pory"
# 700 "data/maps/PetalburgWoods/scripts.pory"
	.string "You're loaded with items.\n"
# 701 "data/maps/PetalburgWoods/scripts.pory"
	.string "I can't give you this GREAT BALL.$"
# 702 "data/maps/PetalburgWoods/scripts.pory"

# 703 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_GoBugPokemonTeam::
# 704 "data/maps/PetalburgWoods/scripts.pory"
# 443 "data/maps/PetalburgWoods/scripts.pory"
# 705 "data/maps/PetalburgWoods/scripts.pory"
	.string "I caught a whole bunch of POKéMON!\p"
# 706 "data/maps/PetalburgWoods/scripts.pory"
	.string "Go, go, go!\n"
# 707 "data/maps/PetalburgWoods/scripts.pory"
	.string "My BUG POKéMON team!$"
# 708 "data/maps/PetalburgWoods/scripts.pory"

# 709 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_ICouldntWin::
# 710 "data/maps/PetalburgWoods/scripts.pory"
# 449 "data/maps/PetalburgWoods/scripts.pory"
# 711 "data/maps/PetalburgWoods/scripts.pory"
	.string "I have all these POKéMON,\n"
# 712 "data/maps/PetalburgWoods/scripts.pory"
	.string "but I couldn't win…$"
# 713 "data/maps/PetalburgWoods/scripts.pory"

# 714 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_ImOutOfPokeBalls::
# 715 "data/maps/PetalburgWoods/scripts.pory"
# 454 "data/maps/PetalburgWoods/scripts.pory"
# 716 "data/maps/PetalburgWoods/scripts.pory"
	.string "I caught a bunch of POKéMON.\n"
# 717 "data/maps/PetalburgWoods/scripts.pory"
	.string "Now I'm out of POKé BALLS.$"
# 718 "data/maps/PetalburgWoods/scripts.pory"

# 719 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_InstantlyPopularWithBugPokemon::
# 720 "data/maps/PetalburgWoods/scripts.pory"
# 459 "data/maps/PetalburgWoods/scripts.pory"
# 721 "data/maps/PetalburgWoods/scripts.pory"
	.string "If you take BUG POKéMON to school,\n"
# 722 "data/maps/PetalburgWoods/scripts.pory"
	.string "you get to be instantly popular!$"
# 723 "data/maps/PetalburgWoods/scripts.pory"

# 724 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_CantBePopularIfILose::
# 725 "data/maps/PetalburgWoods/scripts.pory"
# 464 "data/maps/PetalburgWoods/scripts.pory"
# 726 "data/maps/PetalburgWoods/scripts.pory"
	.string "I can't be popular if I lose.$"
# 727 "data/maps/PetalburgWoods/scripts.pory"

# 728 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_PeopleRespectYou::
# 729 "data/maps/PetalburgWoods/scripts.pory"
# 468 "data/maps/PetalburgWoods/scripts.pory"
# 730 "data/maps/PetalburgWoods/scripts.pory"
	.string "If you have a big BUG POKéMON,\n"
# 731 "data/maps/PetalburgWoods/scripts.pory"
	.string "people respect you for it.$"
# 732 "data/maps/PetalburgWoods/scripts.pory"

# 733 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_IWantRematch1::
# 734 "data/maps/PetalburgWoods/scripts.pory"
# 473 "data/maps/PetalburgWoods/scripts.pory"
# 735 "data/maps/PetalburgWoods/scripts.pory"
	.string "I want a rematch when my BUG\n"
# 736 "data/maps/PetalburgWoods/scripts.pory"
	.string "POKéMON grow up!\p"
# 737 "data/maps/PetalburgWoods/scripts.pory"
	.string "I'm registering you in my POKéNAV!$"
# 738 "data/maps/PetalburgWoods/scripts.pory"

# 739 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_IWantRematch2::
# 740 "data/maps/PetalburgWoods/scripts.pory"
# 479 "data/maps/PetalburgWoods/scripts.pory"
# 741 "data/maps/PetalburgWoods/scripts.pory"
	.string "I want a rematch when my BUG \n"
# 742 "data/maps/PetalburgWoods/scripts.pory"
	.string "POKéMON grow up!\p"
# 743 "data/maps/PetalburgWoods/scripts.pory"
	.string "I'm registering you in my POKéNAV!$"
# 744 "data/maps/PetalburgWoods/scripts.pory"

# 745 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_MyPokemonHaveGrown::
# 746 "data/maps/PetalburgWoods/scripts.pory"
# 485 "data/maps/PetalburgWoods/scripts.pory"
# 747 "data/maps/PetalburgWoods/scripts.pory"
	.string "My BUG POKéMON have grown.\n"
# 748 "data/maps/PetalburgWoods/scripts.pory"
	.string "I'll be popular again.$"
# 749 "data/maps/PetalburgWoods/scripts.pory"

# 750 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_CantBePopularIfLose::
# 751 "data/maps/PetalburgWoods/scripts.pory"
# 490 "data/maps/PetalburgWoods/scripts.pory"
# 752 "data/maps/PetalburgWoods/scripts.pory"
	.string "I can't be popular if I lose.$"
# 753 "data/maps/PetalburgWoods/scripts.pory"

# 754 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_IveBeenTrainingHard::
# 755 "data/maps/PetalburgWoods/scripts.pory"
# 494 "data/maps/PetalburgWoods/scripts.pory"
# 756 "data/maps/PetalburgWoods/scripts.pory"
	.string "You get to be popular if you have\n"
# 757 "data/maps/PetalburgWoods/scripts.pory"
	.string "strong POKéMON, right?\l"
# 758 "data/maps/PetalburgWoods/scripts.pory"
	.string "So, I've been training hard.$"
# 759 "data/maps/PetalburgWoods/scripts.pory"

# 760 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_StayOutOfTallGrass::
# 761 "data/maps/PetalburgWoods/scripts.pory"
# 500 "data/maps/PetalburgWoods/scripts.pory"
# 762 "data/maps/PetalburgWoods/scripts.pory"
	.string "Yo, there!\n"
# 763 "data/maps/PetalburgWoods/scripts.pory"
	.string "Your POKéMON doing okay?\p"
# 764 "data/maps/PetalburgWoods/scripts.pory"
	.string "If your POKéMON are weak and you want\n"
# 765 "data/maps/PetalburgWoods/scripts.pory"
	.string "to avoid battles, you should stay out\l"
# 766 "data/maps/PetalburgWoods/scripts.pory"
	.string "of tall grass.$"
# 767 "data/maps/PetalburgWoods/scripts.pory"

# 768 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_HiddenItemsExplanation::
# 769 "data/maps/PetalburgWoods/scripts.pory"
# 508 "data/maps/PetalburgWoods/scripts.pory"
# 770 "data/maps/PetalburgWoods/scripts.pory"
	.string "Sometimes, there are things on the\n"
# 771 "data/maps/PetalburgWoods/scripts.pory"
	.string "ground even if you can't see them.\p"
# 772 "data/maps/PetalburgWoods/scripts.pory"
	.string "That's why I always check where I'm\n"
# 773 "data/maps/PetalburgWoods/scripts.pory"
	.string "walking.$"
# 774 "data/maps/PetalburgWoods/scripts.pory"

# 775 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_TryUsingThisItem::
# 776 "data/maps/PetalburgWoods/scripts.pory"
# 515 "data/maps/PetalburgWoods/scripts.pory"
# 777 "data/maps/PetalburgWoods/scripts.pory"
	.string "Oh, neat!\n"
# 778 "data/maps/PetalburgWoods/scripts.pory"
	.string "That's the BADGE from RUSTBORO GYM!\p"
# 779 "data/maps/PetalburgWoods/scripts.pory"
	.string "You must be a TRAINER.\n"
# 780 "data/maps/PetalburgWoods/scripts.pory"
	.string "You should try using this item.$"
# 781 "data/maps/PetalburgWoods/scripts.pory"

# 782 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_MiracleSeedExplanation::
# 783 "data/maps/PetalburgWoods/scripts.pory"
# 522 "data/maps/PetalburgWoods/scripts.pory"
# 784 "data/maps/PetalburgWoods/scripts.pory"
	.string "It's a MIRACLE SEED.\n"
# 785 "data/maps/PetalburgWoods/scripts.pory"
	.string "If a POKéMON holds that item, its\l"
# 786 "data/maps/PetalburgWoods/scripts.pory"
	.string "GRASS-type moves become stronger.\p"
# 787 "data/maps/PetalburgWoods/scripts.pory"
	.string "Besides MIRACLE SEED, I think there are\n"
# 788 "data/maps/PetalburgWoods/scripts.pory"
	.string "other convenient items for POKéMON\l"
# 789 "data/maps/PetalburgWoods/scripts.pory"
	.string "to hold.$"
# 790 "data/maps/PetalburgWoods/scripts.pory"

# 791 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_TrainerTipsExperience::
# 792 "data/maps/PetalburgWoods/scripts.pory"
# 531 "data/maps/PetalburgWoods/scripts.pory"
# 793 "data/maps/PetalburgWoods/scripts.pory"
	.string "TRAINER TIPS\p"
# 794 "data/maps/PetalburgWoods/scripts.pory"
	.string "Any POKéMON that appears even once\n"
# 795 "data/maps/PetalburgWoods/scripts.pory"
	.string "in a battle is awarded EXP Points.\p"
# 796 "data/maps/PetalburgWoods/scripts.pory"
	.string "To raise a weak POKéMON, put it at the\n"
# 797 "data/maps/PetalburgWoods/scripts.pory"
	.string "left of the team list.\p"
# 798 "data/maps/PetalburgWoods/scripts.pory"
	.string "As soon as a battle starts, switch it\n"
# 799 "data/maps/PetalburgWoods/scripts.pory"
	.string "out. It will earn EXP Points without\l"
# 800 "data/maps/PetalburgWoods/scripts.pory"
	.string "being exposed to any harm.$"
# 801 "data/maps/PetalburgWoods/scripts.pory"

# 802 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_TrainerTipsPP::
# 803 "data/maps/PetalburgWoods/scripts.pory"
# 542 "data/maps/PetalburgWoods/scripts.pory"
# 804 "data/maps/PetalburgWoods/scripts.pory"
	.string "TRAINER TIPS\p"
# 805 "data/maps/PetalburgWoods/scripts.pory"
	.string "In addition to Hit Points (HP), POKéMON\n"
# 806 "data/maps/PetalburgWoods/scripts.pory"
	.string "have Power Points (PP) that are used to\l"
# 807 "data/maps/PetalburgWoods/scripts.pory"
	.string "make moves during battle.\p"
# 808 "data/maps/PetalburgWoods/scripts.pory"
	.string "If a POKéMON runs out of PP, it must be\n"
# 809 "data/maps/PetalburgWoods/scripts.pory"
	.string "taken to a POKéMON CENTER.$"
