# 1 "data/maps/SSTidalRooms/scripts.pory"

# 2 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_MapScripts::
# 3 "data/maps/SSTidalRooms/scripts.pory"
	.byte 0
# 4 "data/maps/SSTidalRooms/scripts.pory"

# 5 "data/maps/SSTidalRooms/scripts.pory"

# 6 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_EventScript_SnatchGiver::
# 7 "data/maps/SSTidalRooms/scripts.pory"
# 4 "data/maps/SSTidalRooms/scripts.pory"
# 8 "data/maps/SSTidalRooms/scripts.pory"
	lock
# 9 "data/maps/SSTidalRooms/scripts.pory"
# 5 "data/maps/SSTidalRooms/scripts.pory"
# 10 "data/maps/SSTidalRooms/scripts.pory"
	faceplayer
# 11 "data/maps/SSTidalRooms/scripts.pory"
# 6 "data/maps/SSTidalRooms/scripts.pory"
# 12 "data/maps/SSTidalRooms/scripts.pory"
	goto_if_set FLAG_RECEIVED_TM_SNATCH, SSTidalRooms_EventScript_SnatchGiver_2
# 13 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_EventScript_SnatchGiver_1:
# 14 "data/maps/SSTidalRooms/scripts.pory"
# 9 "data/maps/SSTidalRooms/scripts.pory"
# 15 "data/maps/SSTidalRooms/scripts.pory"
	msgbox SSTidalRooms_Text_NotSuspiciousTakeThis, MSGBOX_DEFAULT
# 16 "data/maps/SSTidalRooms/scripts.pory"
# 10 "data/maps/SSTidalRooms/scripts.pory"
# 17 "data/maps/SSTidalRooms/scripts.pory"
	giveitem ITEM_TM_SNATCH
# 18 "data/maps/SSTidalRooms/scripts.pory"
# 11 "data/maps/SSTidalRooms/scripts.pory"
# 19 "data/maps/SSTidalRooms/scripts.pory"
	compare VAR_RESULT, FALSE
# 20 "data/maps/SSTidalRooms/scripts.pory"
	goto_if_eq SSTidalRooms_EventScript_SnatchGiver_5
# 21 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_EventScript_SnatchGiver_4:
# 22 "data/maps/SSTidalRooms/scripts.pory"
# 14 "data/maps/SSTidalRooms/scripts.pory"
# 23 "data/maps/SSTidalRooms/scripts.pory"
	setflag FLAG_RECEIVED_TM_SNATCH
# 24 "data/maps/SSTidalRooms/scripts.pory"
# 15 "data/maps/SSTidalRooms/scripts.pory"
# 25 "data/maps/SSTidalRooms/scripts.pory"
	msgbox SSTidalRooms_Text_ExplainSnatch, MSGBOX_DEFAULT
# 26 "data/maps/SSTidalRooms/scripts.pory"
# 16 "data/maps/SSTidalRooms/scripts.pory"
# 27 "data/maps/SSTidalRooms/scripts.pory"
	release
# 28 "data/maps/SSTidalRooms/scripts.pory"
	end
# 29 "data/maps/SSTidalRooms/scripts.pory"

# 30 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_EventScript_SnatchGiver_2:
# 31 "data/maps/SSTidalRooms/scripts.pory"
# 7 "data/maps/SSTidalRooms/scripts.pory"
# 32 "data/maps/SSTidalRooms/scripts.pory"
	goto SSTidalRooms_EventScript_ExplainSnatch
# 33 "data/maps/SSTidalRooms/scripts.pory"
	goto SSTidalRooms_EventScript_SnatchGiver_1
# 34 "data/maps/SSTidalRooms/scripts.pory"

# 35 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_EventScript_SnatchGiver_5:
# 36 "data/maps/SSTidalRooms/scripts.pory"
# 12 "data/maps/SSTidalRooms/scripts.pory"
# 37 "data/maps/SSTidalRooms/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
# 38 "data/maps/SSTidalRooms/scripts.pory"
	goto SSTidalRooms_EventScript_SnatchGiver_4
# 39 "data/maps/SSTidalRooms/scripts.pory"

# 40 "data/maps/SSTidalRooms/scripts.pory"

# 41 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_EventScript_ExplainSnatch::
# 42 "data/maps/SSTidalRooms/scripts.pory"
# 21 "data/maps/SSTidalRooms/scripts.pory"
# 43 "data/maps/SSTidalRooms/scripts.pory"
	msgbox SSTidalRooms_Text_ExplainSnatch, MSGBOX_DEFAULT
# 44 "data/maps/SSTidalRooms/scripts.pory"
# 22 "data/maps/SSTidalRooms/scripts.pory"
# 45 "data/maps/SSTidalRooms/scripts.pory"
	release
# 46 "data/maps/SSTidalRooms/scripts.pory"
	end
# 47 "data/maps/SSTidalRooms/scripts.pory"

# 48 "data/maps/SSTidalRooms/scripts.pory"

# 49 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_EventScript_Bed::
# 50 "data/maps/SSTidalRooms/scripts.pory"
# 27 "data/maps/SSTidalRooms/scripts.pory"
# 51 "data/maps/SSTidalRooms/scripts.pory"
	lockall
# 52 "data/maps/SSTidalRooms/scripts.pory"
# 28 "data/maps/SSTidalRooms/scripts.pory"
# 53 "data/maps/SSTidalRooms/scripts.pory"
	msgbox SSTidalRooms_Text_TakeRestOnBed, MSGBOX_DEFAULT
# 54 "data/maps/SSTidalRooms/scripts.pory"
# 29 "data/maps/SSTidalRooms/scripts.pory"
# 55 "data/maps/SSTidalRooms/scripts.pory"
	closemessage
# 56 "data/maps/SSTidalRooms/scripts.pory"
# 30 "data/maps/SSTidalRooms/scripts.pory"
# 57 "data/maps/SSTidalRooms/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 58 "data/maps/SSTidalRooms/scripts.pory"
# 31 "data/maps/SSTidalRooms/scripts.pory"
# 59 "data/maps/SSTidalRooms/scripts.pory"
	call SSTidalRooms_EventScript_ProgessCruiseAfterBed
# 60 "data/maps/SSTidalRooms/scripts.pory"
# 32 "data/maps/SSTidalRooms/scripts.pory"
# 61 "data/maps/SSTidalRooms/scripts.pory"
	releaseall
# 62 "data/maps/SSTidalRooms/scripts.pory"
	end
# 63 "data/maps/SSTidalRooms/scripts.pory"

# 64 "data/maps/SSTidalRooms/scripts.pory"

# 65 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_EventScript_Colton::
# 66 "data/maps/SSTidalRooms/scripts.pory"
# 37 "data/maps/SSTidalRooms/scripts.pory"
# 67 "data/maps/SSTidalRooms/scripts.pory"
	trainerbattle_single TRAINER_COLTON, SSTidalRooms_Text_ColtonIntro, SSTidalRooms_Text_ColtonDefeat
# 68 "data/maps/SSTidalRooms/scripts.pory"
# 38 "data/maps/SSTidalRooms/scripts.pory"
# 69 "data/maps/SSTidalRooms/scripts.pory"
	msgbox SSTidalRooms_Text_ColtonPostBattle, MSGBOX_AUTOCLOSE
# 70 "data/maps/SSTidalRooms/scripts.pory"
	end
# 71 "data/maps/SSTidalRooms/scripts.pory"

# 72 "data/maps/SSTidalRooms/scripts.pory"

# 73 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_EventScript_Micah::
# 74 "data/maps/SSTidalRooms/scripts.pory"
# 43 "data/maps/SSTidalRooms/scripts.pory"
# 75 "data/maps/SSTidalRooms/scripts.pory"
	trainerbattle_single TRAINER_MICAH, SSTidalRooms_Text_MicahIntro, SSTidalRooms_Text_MicahDefeat
# 76 "data/maps/SSTidalRooms/scripts.pory"
# 44 "data/maps/SSTidalRooms/scripts.pory"
# 77 "data/maps/SSTidalRooms/scripts.pory"
	msgbox SSTidalRooms_Text_MicahPostBattle, MSGBOX_AUTOCLOSE
# 78 "data/maps/SSTidalRooms/scripts.pory"
	end
# 79 "data/maps/SSTidalRooms/scripts.pory"

# 80 "data/maps/SSTidalRooms/scripts.pory"

# 81 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_EventScript_Thomas::
# 82 "data/maps/SSTidalRooms/scripts.pory"
# 49 "data/maps/SSTidalRooms/scripts.pory"
# 83 "data/maps/SSTidalRooms/scripts.pory"
	trainerbattle_single TRAINER_THOMAS, SSTidalRooms_Text_ThomasIntro, SSTidalRooms_Text_ThomasDefeat
# 84 "data/maps/SSTidalRooms/scripts.pory"
# 50 "data/maps/SSTidalRooms/scripts.pory"
# 85 "data/maps/SSTidalRooms/scripts.pory"
	msgbox SSTidalRooms_Text_ThomasPostBattle, MSGBOX_AUTOCLOSE
# 86 "data/maps/SSTidalRooms/scripts.pory"
	end
# 87 "data/maps/SSTidalRooms/scripts.pory"

# 88 "data/maps/SSTidalRooms/scripts.pory"

# 89 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_EventScript_Jed::
# 90 "data/maps/SSTidalRooms/scripts.pory"
# 55 "data/maps/SSTidalRooms/scripts.pory"
# 91 "data/maps/SSTidalRooms/scripts.pory"
	trainerbattle_double TRAINER_LEA_AND_JED, SSTidalRooms_Text_JedIntro, SSTidalRooms_Text_JedDefeat, SSTidalRooms_Text_JedNotEnoughMons
# 92 "data/maps/SSTidalRooms/scripts.pory"
# 56 "data/maps/SSTidalRooms/scripts.pory"
# 93 "data/maps/SSTidalRooms/scripts.pory"
	msgbox SSTidalRooms_Text_JedPostBattle, MSGBOX_AUTOCLOSE
# 94 "data/maps/SSTidalRooms/scripts.pory"
	end
# 95 "data/maps/SSTidalRooms/scripts.pory"

# 96 "data/maps/SSTidalRooms/scripts.pory"

# 97 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_EventScript_Lea::
# 98 "data/maps/SSTidalRooms/scripts.pory"
# 61 "data/maps/SSTidalRooms/scripts.pory"
# 99 "data/maps/SSTidalRooms/scripts.pory"
	trainerbattle_double TRAINER_LEA_AND_JED, SSTidalRooms_Text_LeaIntro, SSTidalRooms_Text_LeaDefeat, SSTidalRooms_Text_LeaNotEnoughMons
# 100 "data/maps/SSTidalRooms/scripts.pory"
# 62 "data/maps/SSTidalRooms/scripts.pory"
# 101 "data/maps/SSTidalRooms/scripts.pory"
	msgbox SSTidalRooms_Text_LeaPostBattle, MSGBOX_AUTOCLOSE
# 102 "data/maps/SSTidalRooms/scripts.pory"
	end
# 103 "data/maps/SSTidalRooms/scripts.pory"

# 104 "data/maps/SSTidalRooms/scripts.pory"

# 105 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_EventScript_Garret::
# 106 "data/maps/SSTidalRooms/scripts.pory"
# 67 "data/maps/SSTidalRooms/scripts.pory"
# 107 "data/maps/SSTidalRooms/scripts.pory"
	trainerbattle_single TRAINER_GARRET, SSTidalRooms_Text_GarretIntro, SSTidalRooms_Text_GarretDefeat
# 108 "data/maps/SSTidalRooms/scripts.pory"
# 68 "data/maps/SSTidalRooms/scripts.pory"
# 109 "data/maps/SSTidalRooms/scripts.pory"
	msgbox SSTidalRooms_Text_GarretPostBattle, MSGBOX_AUTOCLOSE
# 110 "data/maps/SSTidalRooms/scripts.pory"
	end
# 111 "data/maps/SSTidalRooms/scripts.pory"

# 112 "data/maps/SSTidalRooms/scripts.pory"

# 113 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_EventScript_Naomi::
# 114 "data/maps/SSTidalRooms/scripts.pory"
# 73 "data/maps/SSTidalRooms/scripts.pory"
# 115 "data/maps/SSTidalRooms/scripts.pory"
	trainerbattle_single TRAINER_NAOMI, SSTidalRooms_Text_NaomiIntro, SSTidalRooms_Text_NaomiDefeat
# 116 "data/maps/SSTidalRooms/scripts.pory"
# 74 "data/maps/SSTidalRooms/scripts.pory"
# 117 "data/maps/SSTidalRooms/scripts.pory"
	msgbox SSTidalRooms_Text_NaomiPostBattle, MSGBOX_AUTOCLOSE
# 118 "data/maps/SSTidalRooms/scripts.pory"
	end
# 119 "data/maps/SSTidalRooms/scripts.pory"

# 120 "data/maps/SSTidalRooms/scripts.pory"

# 121 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_Text_TakeRestOnBed::
# 122 "data/maps/SSTidalRooms/scripts.pory"
# 78 "data/maps/SSTidalRooms/scripts.pory"
# 123 "data/maps/SSTidalRooms/scripts.pory"
	.string "There's a bed…\n"
# 124 "data/maps/SSTidalRooms/scripts.pory"
	.string "Let's take a rest.$"
# 125 "data/maps/SSTidalRooms/scripts.pory"

# 126 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_Text_ColtonIntro::
# 127 "data/maps/SSTidalRooms/scripts.pory"
# 83 "data/maps/SSTidalRooms/scripts.pory"
# 128 "data/maps/SSTidalRooms/scripts.pory"
	.string "I often sail to LILYCOVE CITY.\p"
# 129 "data/maps/SSTidalRooms/scripts.pory"
	.string "I enjoy attending CONTESTS,\n"
# 130 "data/maps/SSTidalRooms/scripts.pory"
	.string "you see.$"
# 131 "data/maps/SSTidalRooms/scripts.pory"

# 132 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_Text_ColtonDefeat::
# 133 "data/maps/SSTidalRooms/scripts.pory"
# 89 "data/maps/SSTidalRooms/scripts.pory"
# 134 "data/maps/SSTidalRooms/scripts.pory"
	.string "That was an enjoyable match!$"
# 135 "data/maps/SSTidalRooms/scripts.pory"

# 136 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_Text_ColtonPostBattle::
# 137 "data/maps/SSTidalRooms/scripts.pory"
# 93 "data/maps/SSTidalRooms/scripts.pory"
# 138 "data/maps/SSTidalRooms/scripts.pory"
	.string "I get so excited imagining what kinds\n"
# 139 "data/maps/SSTidalRooms/scripts.pory"
	.string "of POKéMON I'll get to see in the next\l"
# 140 "data/maps/SSTidalRooms/scripts.pory"
	.string "CONTEST. The anticipation of it thrills!$"
# 141 "data/maps/SSTidalRooms/scripts.pory"

# 142 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_Text_MicahIntro::
# 143 "data/maps/SSTidalRooms/scripts.pory"
# 99 "data/maps/SSTidalRooms/scripts.pory"
# 144 "data/maps/SSTidalRooms/scripts.pory"
	.string "Are your friends strong?$"
# 145 "data/maps/SSTidalRooms/scripts.pory"

# 146 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_Text_MicahDefeat::
# 147 "data/maps/SSTidalRooms/scripts.pory"
# 103 "data/maps/SSTidalRooms/scripts.pory"
# 148 "data/maps/SSTidalRooms/scripts.pory"
	.string "Your friends are, indeed, strong.$"
# 149 "data/maps/SSTidalRooms/scripts.pory"

# 150 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_Text_MicahPostBattle::
# 151 "data/maps/SSTidalRooms/scripts.pory"
# 107 "data/maps/SSTidalRooms/scripts.pory"
# 152 "data/maps/SSTidalRooms/scripts.pory"
	.string "Friends need not be human.\n"
# 153 "data/maps/SSTidalRooms/scripts.pory"
	.string "For me, POKéMON are treasured friends!$"
# 154 "data/maps/SSTidalRooms/scripts.pory"

# 155 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_Text_ThomasIntro::
# 156 "data/maps/SSTidalRooms/scripts.pory"
# 112 "data/maps/SSTidalRooms/scripts.pory"
# 157 "data/maps/SSTidalRooms/scripts.pory"
	.string "Child…\n"
# 158 "data/maps/SSTidalRooms/scripts.pory"
	.string "Did you knock on the door?$"
# 159 "data/maps/SSTidalRooms/scripts.pory"

# 160 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_Text_ThomasDefeat::
# 161 "data/maps/SSTidalRooms/scripts.pory"
# 117 "data/maps/SSTidalRooms/scripts.pory"
# 162 "data/maps/SSTidalRooms/scripts.pory"
	.string "A loss is to be accepted without haste\n"
# 163 "data/maps/SSTidalRooms/scripts.pory"
	.string "or panic.$"
# 164 "data/maps/SSTidalRooms/scripts.pory"

# 165 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_Text_ThomasPostBattle::
# 166 "data/maps/SSTidalRooms/scripts.pory"
# 122 "data/maps/SSTidalRooms/scripts.pory"
# 167 "data/maps/SSTidalRooms/scripts.pory"
	.string "To be never ruffled in any situation is\n"
# 168 "data/maps/SSTidalRooms/scripts.pory"
	.string "the GENTLEMAN's code of conduct.$"
# 169 "data/maps/SSTidalRooms/scripts.pory"

# 170 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_Text_JedIntro::
# 171 "data/maps/SSTidalRooms/scripts.pory"
# 127 "data/maps/SSTidalRooms/scripts.pory"
# 172 "data/maps/SSTidalRooms/scripts.pory"
	.string "JED: I feel a little shy about this, but…\n"
# 173 "data/maps/SSTidalRooms/scripts.pory"
	.string "We'll show you our lovey-dovey power!$"
# 174 "data/maps/SSTidalRooms/scripts.pory"

# 175 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_Text_JedDefeat::
# 176 "data/maps/SSTidalRooms/scripts.pory"
# 132 "data/maps/SSTidalRooms/scripts.pory"
# 177 "data/maps/SSTidalRooms/scripts.pory"
	.string "JED: Sigh…$"
# 178 "data/maps/SSTidalRooms/scripts.pory"

# 179 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_Text_JedPostBattle::
# 180 "data/maps/SSTidalRooms/scripts.pory"
# 136 "data/maps/SSTidalRooms/scripts.pory"
# 181 "data/maps/SSTidalRooms/scripts.pory"
	.string "JED: It's the first time that our lovey-\n"
# 182 "data/maps/SSTidalRooms/scripts.pory"
	.string "dovey power couldn't prevail!\l"
# 183 "data/maps/SSTidalRooms/scripts.pory"
	.string "You must be an awesome TRAINER!$"
# 184 "data/maps/SSTidalRooms/scripts.pory"

# 185 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_Text_JedNotEnoughMons::
# 186 "data/maps/SSTidalRooms/scripts.pory"
# 142 "data/maps/SSTidalRooms/scripts.pory"
# 187 "data/maps/SSTidalRooms/scripts.pory"
	.string "JED: You only have one POKéMON?\n"
# 188 "data/maps/SSTidalRooms/scripts.pory"
	.string "Isn't that just too lonesome?$"
# 189 "data/maps/SSTidalRooms/scripts.pory"

# 190 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_Text_LeaIntro::
# 191 "data/maps/SSTidalRooms/scripts.pory"
# 147 "data/maps/SSTidalRooms/scripts.pory"
# 192 "data/maps/SSTidalRooms/scripts.pory"
	.string "LEA: I feel a little silly, but…\n"
# 193 "data/maps/SSTidalRooms/scripts.pory"
	.string "We'll show you our lovey-dovey power!$"
# 194 "data/maps/SSTidalRooms/scripts.pory"

# 195 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_Text_LeaDefeat::
# 196 "data/maps/SSTidalRooms/scripts.pory"
# 152 "data/maps/SSTidalRooms/scripts.pory"
# 197 "data/maps/SSTidalRooms/scripts.pory"
	.string "LEA: Oh, boo!$"
# 198 "data/maps/SSTidalRooms/scripts.pory"

# 199 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_Text_LeaPostBattle::
# 200 "data/maps/SSTidalRooms/scripts.pory"
# 156 "data/maps/SSTidalRooms/scripts.pory"
# 201 "data/maps/SSTidalRooms/scripts.pory"
	.string "LEA: I can't believe it!\n"
# 202 "data/maps/SSTidalRooms/scripts.pory"
	.string "Our lovey-dovey power failed…\l"
# 203 "data/maps/SSTidalRooms/scripts.pory"
	.string "You must be an awesome TRAINER!$"
# 204 "data/maps/SSTidalRooms/scripts.pory"

# 205 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_Text_LeaNotEnoughMons::
# 206 "data/maps/SSTidalRooms/scripts.pory"
# 162 "data/maps/SSTidalRooms/scripts.pory"
# 207 "data/maps/SSTidalRooms/scripts.pory"
	.string "LEA: I wanted to battle…\n"
# 208 "data/maps/SSTidalRooms/scripts.pory"
	.string "But you don't even have two POKéMON…$"
# 209 "data/maps/SSTidalRooms/scripts.pory"

# 210 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_Text_GarretIntro::
# 211 "data/maps/SSTidalRooms/scripts.pory"
# 167 "data/maps/SSTidalRooms/scripts.pory"
# 212 "data/maps/SSTidalRooms/scripts.pory"
	.string "Ah, you've come just in time.\p"
# 213 "data/maps/SSTidalRooms/scripts.pory"
	.string "I'm bored, you see.\n"
# 214 "data/maps/SSTidalRooms/scripts.pory"
	.string "You may entertain me.$"
# 215 "data/maps/SSTidalRooms/scripts.pory"

# 216 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_Text_GarretDefeat::
# 217 "data/maps/SSTidalRooms/scripts.pory"
# 173 "data/maps/SSTidalRooms/scripts.pory"
# 218 "data/maps/SSTidalRooms/scripts.pory"
	.string "…That will do.$"
# 219 "data/maps/SSTidalRooms/scripts.pory"

# 220 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_Text_GarretPostBattle::
# 221 "data/maps/SSTidalRooms/scripts.pory"
# 177 "data/maps/SSTidalRooms/scripts.pory"
# 222 "data/maps/SSTidalRooms/scripts.pory"
	.string "Perhaps I shall get Father to acquire\n"
# 223 "data/maps/SSTidalRooms/scripts.pory"
	.string "a yacht for me.\l"
# 224 "data/maps/SSTidalRooms/scripts.pory"
	.string "A yacht for me and POKéMON!$"
# 225 "data/maps/SSTidalRooms/scripts.pory"

# 226 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_Text_NaomiIntro::
# 227 "data/maps/SSTidalRooms/scripts.pory"
# 183 "data/maps/SSTidalRooms/scripts.pory"
# 228 "data/maps/SSTidalRooms/scripts.pory"
	.string "Oh, you're such an adorable TRAINER.\n"
# 229 "data/maps/SSTidalRooms/scripts.pory"
	.string "Would you like to have tea?\l"
# 230 "data/maps/SSTidalRooms/scripts.pory"
	.string "Or would you rather battle?$"
# 231 "data/maps/SSTidalRooms/scripts.pory"

# 232 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_Text_NaomiDefeat::
# 233 "data/maps/SSTidalRooms/scripts.pory"
# 189 "data/maps/SSTidalRooms/scripts.pory"
# 234 "data/maps/SSTidalRooms/scripts.pory"
	.string "I see.\n"
# 235 "data/maps/SSTidalRooms/scripts.pory"
	.string "You're the active sort.$"
# 236 "data/maps/SSTidalRooms/scripts.pory"

# 237 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_Text_NaomiPostBattle::
# 238 "data/maps/SSTidalRooms/scripts.pory"
# 194 "data/maps/SSTidalRooms/scripts.pory"
# 239 "data/maps/SSTidalRooms/scripts.pory"
	.string "A world cruise on a luxury liner has its\n"
# 240 "data/maps/SSTidalRooms/scripts.pory"
	.string "charms, I must say…\p"
# 241 "data/maps/SSTidalRooms/scripts.pory"
	.string "But, I will admit there is an appealing\n"
# 242 "data/maps/SSTidalRooms/scripts.pory"
	.string "side to touring HOENN by ferry.$"
# 243 "data/maps/SSTidalRooms/scripts.pory"

# 244 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_Text_NotSuspiciousTakeThis::
# 245 "data/maps/SSTidalRooms/scripts.pory"
# 201 "data/maps/SSTidalRooms/scripts.pory"
# 246 "data/maps/SSTidalRooms/scripts.pory"
	.string "Uh… Hi! I… I'm not acting suspicious!\n"
# 247 "data/maps/SSTidalRooms/scripts.pory"
	.string "Uh… You can have this! For free!\p"
# 248 "data/maps/SSTidalRooms/scripts.pory"
	.string "It… Honestly, I didn't SNATCH it from\n"
# 249 "data/maps/SSTidalRooms/scripts.pory"
	.string "someone! I'd never do such a thing!\l"
# 250 "data/maps/SSTidalRooms/scripts.pory"
	.string "It's clean! You can use it!$"
# 251 "data/maps/SSTidalRooms/scripts.pory"

# 252 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_Text_ExplainSnatch::
# 253 "data/maps/SSTidalRooms/scripts.pory"
# 209 "data/maps/SSTidalRooms/scripts.pory"
# 254 "data/maps/SSTidalRooms/scripts.pory"
	.string "SNATCH steals the beneficial effects\n"
# 255 "data/maps/SSTidalRooms/scripts.pory"
	.string "of certain moves before they can be\l"
# 256 "data/maps/SSTidalRooms/scripts.pory"
	.string "used by a foe or ally.$"
