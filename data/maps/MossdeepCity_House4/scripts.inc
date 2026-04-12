# 1 "data/maps/MossdeepCity_House4/scripts.pory"

# 2 "data/maps/MossdeepCity_House4/scripts.pory"
MossdeepCity_House4_MapScripts::
# 3 "data/maps/MossdeepCity_House4/scripts.pory"
	.byte 0
# 4 "data/maps/MossdeepCity_House4/scripts.pory"

# 5 "data/maps/MossdeepCity_House4/scripts.pory"

# 6 "data/maps/MossdeepCity_House4/scripts.pory"
MossdeepCity_House4_EventScript_Woman::
# 7 "data/maps/MossdeepCity_House4/scripts.pory"
# 4 "data/maps/MossdeepCity_House4/scripts.pory"
# 8 "data/maps/MossdeepCity_House4/scripts.pory"
	lock
# 9 "data/maps/MossdeepCity_House4/scripts.pory"
# 5 "data/maps/MossdeepCity_House4/scripts.pory"
# 10 "data/maps/MossdeepCity_House4/scripts.pory"
	faceplayer
# 11 "data/maps/MossdeepCity_House4/scripts.pory"
# 6 "data/maps/MossdeepCity_House4/scripts.pory"
# 12 "data/maps/MossdeepCity_House4/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, MossdeepCity_House4_EventScript_Woman_2
# 13 "data/maps/MossdeepCity_House4/scripts.pory"
MossdeepCity_House4_EventScript_Woman_1:
# 14 "data/maps/MossdeepCity_House4/scripts.pory"
# 9 "data/maps/MossdeepCity_House4/scripts.pory"
# 15 "data/maps/MossdeepCity_House4/scripts.pory"
	msgbox MossdeepCity_House4_Text_BrotherLikesToFindBases, MSGBOX_DEFAULT
# 16 "data/maps/MossdeepCity_House4/scripts.pory"
# 10 "data/maps/MossdeepCity_House4/scripts.pory"
# 17 "data/maps/MossdeepCity_House4/scripts.pory"
	release
# 18 "data/maps/MossdeepCity_House4/scripts.pory"
	end
# 19 "data/maps/MossdeepCity_House4/scripts.pory"

# 20 "data/maps/MossdeepCity_House4/scripts.pory"
MossdeepCity_House4_EventScript_Woman_2:
# 21 "data/maps/MossdeepCity_House4/scripts.pory"
# 7 "data/maps/MossdeepCity_House4/scripts.pory"
# 22 "data/maps/MossdeepCity_House4/scripts.pory"
	goto MossdeepCity_House4_EventScript_CanBattleAtSecretBases
# 23 "data/maps/MossdeepCity_House4/scripts.pory"
	goto MossdeepCity_House4_EventScript_Woman_1
# 24 "data/maps/MossdeepCity_House4/scripts.pory"

# 25 "data/maps/MossdeepCity_House4/scripts.pory"

# 26 "data/maps/MossdeepCity_House4/scripts.pory"
MossdeepCity_House4_EventScript_CanBattleAtSecretBases::
# 27 "data/maps/MossdeepCity_House4/scripts.pory"
# 15 "data/maps/MossdeepCity_House4/scripts.pory"
# 28 "data/maps/MossdeepCity_House4/scripts.pory"
	msgbox MossdeepCity_House4_Text_BrotherLikesToVisitBasesAndBattle, MSGBOX_DEFAULT
# 29 "data/maps/MossdeepCity_House4/scripts.pory"
# 16 "data/maps/MossdeepCity_House4/scripts.pory"
# 30 "data/maps/MossdeepCity_House4/scripts.pory"
	release
# 31 "data/maps/MossdeepCity_House4/scripts.pory"
	end
# 32 "data/maps/MossdeepCity_House4/scripts.pory"

# 33 "data/maps/MossdeepCity_House4/scripts.pory"

# 34 "data/maps/MossdeepCity_House4/scripts.pory"
MossdeepCity_House4_EventScript_NinjaBoy::
# 35 "data/maps/MossdeepCity_House4/scripts.pory"
# 21 "data/maps/MossdeepCity_House4/scripts.pory"
# 36 "data/maps/MossdeepCity_House4/scripts.pory"
	lock
# 37 "data/maps/MossdeepCity_House4/scripts.pory"
# 22 "data/maps/MossdeepCity_House4/scripts.pory"
# 38 "data/maps/MossdeepCity_House4/scripts.pory"
	faceplayer
# 39 "data/maps/MossdeepCity_House4/scripts.pory"
# 23 "data/maps/MossdeepCity_House4/scripts.pory"
# 40 "data/maps/MossdeepCity_House4/scripts.pory"
	special CheckPlayerHasSecretBase
# 41 "data/maps/MossdeepCity_House4/scripts.pory"
# 24 "data/maps/MossdeepCity_House4/scripts.pory"
# 42 "data/maps/MossdeepCity_House4/scripts.pory"
	compare VAR_RESULT, FALSE
# 43 "data/maps/MossdeepCity_House4/scripts.pory"
	goto_if_eq MossdeepCity_House4_EventScript_NinjaBoy_2
# 44 "data/maps/MossdeepCity_House4/scripts.pory"
MossdeepCity_House4_EventScript_NinjaBoy_1:
# 45 "data/maps/MossdeepCity_House4/scripts.pory"
# 27 "data/maps/MossdeepCity_House4/scripts.pory"
# 46 "data/maps/MossdeepCity_House4/scripts.pory"
	special GetSecretBaseNearbyMapName
# 47 "data/maps/MossdeepCity_House4/scripts.pory"
# 28 "data/maps/MossdeepCity_House4/scripts.pory"
# 48 "data/maps/MossdeepCity_House4/scripts.pory"
	msgbox MossdeepCity_House4_Text_YouMadeSecretBaseNearX, MSGBOX_DEFAULT
# 49 "data/maps/MossdeepCity_House4/scripts.pory"
# 29 "data/maps/MossdeepCity_House4/scripts.pory"
# 50 "data/maps/MossdeepCity_House4/scripts.pory"
	release
# 51 "data/maps/MossdeepCity_House4/scripts.pory"
	end
# 52 "data/maps/MossdeepCity_House4/scripts.pory"

# 53 "data/maps/MossdeepCity_House4/scripts.pory"
MossdeepCity_House4_EventScript_NinjaBoy_2:
# 54 "data/maps/MossdeepCity_House4/scripts.pory"
# 25 "data/maps/MossdeepCity_House4/scripts.pory"
# 55 "data/maps/MossdeepCity_House4/scripts.pory"
	goto MossdeepCity_House4_EventScript_NoSecretBase
# 56 "data/maps/MossdeepCity_House4/scripts.pory"
	goto MossdeepCity_House4_EventScript_NinjaBoy_1
# 57 "data/maps/MossdeepCity_House4/scripts.pory"

# 58 "data/maps/MossdeepCity_House4/scripts.pory"

# 59 "data/maps/MossdeepCity_House4/scripts.pory"
MossdeepCity_House4_EventScript_NoSecretBase::
# 60 "data/maps/MossdeepCity_House4/scripts.pory"
# 34 "data/maps/MossdeepCity_House4/scripts.pory"
# 61 "data/maps/MossdeepCity_House4/scripts.pory"
	msgbox MossdeepCity_House4_Text_MakeSecretBase, MSGBOX_DEFAULT
# 62 "data/maps/MossdeepCity_House4/scripts.pory"
# 35 "data/maps/MossdeepCity_House4/scripts.pory"
# 63 "data/maps/MossdeepCity_House4/scripts.pory"
	release
# 64 "data/maps/MossdeepCity_House4/scripts.pory"
	end
# 65 "data/maps/MossdeepCity_House4/scripts.pory"

# 66 "data/maps/MossdeepCity_House4/scripts.pory"

# 67 "data/maps/MossdeepCity_House4/scripts.pory"
MossdeepCity_House4_EventScript_Skitty::
# 68 "data/maps/MossdeepCity_House4/scripts.pory"
# 40 "data/maps/MossdeepCity_House4/scripts.pory"
# 69 "data/maps/MossdeepCity_House4/scripts.pory"
	lock
# 70 "data/maps/MossdeepCity_House4/scripts.pory"
# 41 "data/maps/MossdeepCity_House4/scripts.pory"
# 71 "data/maps/MossdeepCity_House4/scripts.pory"
	faceplayer
# 72 "data/maps/MossdeepCity_House4/scripts.pory"
# 42 "data/maps/MossdeepCity_House4/scripts.pory"
# 73 "data/maps/MossdeepCity_House4/scripts.pory"
	waitse
# 74 "data/maps/MossdeepCity_House4/scripts.pory"
# 43 "data/maps/MossdeepCity_House4/scripts.pory"
# 75 "data/maps/MossdeepCity_House4/scripts.pory"
	playmoncry SPECIES_SKITTY, CRY_MODE_NORMAL
# 76 "data/maps/MossdeepCity_House4/scripts.pory"
# 44 "data/maps/MossdeepCity_House4/scripts.pory"
# 77 "data/maps/MossdeepCity_House4/scripts.pory"
	msgbox MossdeepCity_House4_Text_Skitty, MSGBOX_DEFAULT
# 78 "data/maps/MossdeepCity_House4/scripts.pory"
# 45 "data/maps/MossdeepCity_House4/scripts.pory"
# 79 "data/maps/MossdeepCity_House4/scripts.pory"
	waitmoncry
# 80 "data/maps/MossdeepCity_House4/scripts.pory"
# 46 "data/maps/MossdeepCity_House4/scripts.pory"
# 81 "data/maps/MossdeepCity_House4/scripts.pory"
	release
# 82 "data/maps/MossdeepCity_House4/scripts.pory"
	end
# 83 "data/maps/MossdeepCity_House4/scripts.pory"

# 84 "data/maps/MossdeepCity_House4/scripts.pory"

# 85 "data/maps/MossdeepCity_House4/scripts.pory"
MossdeepCity_House4_Text_BrotherLikesToFindBases::
# 86 "data/maps/MossdeepCity_House4/scripts.pory"
# 50 "data/maps/MossdeepCity_House4/scripts.pory"
# 87 "data/maps/MossdeepCity_House4/scripts.pory"
	.string "My little brother says he likes to go\n"
# 88 "data/maps/MossdeepCity_House4/scripts.pory"
	.string "find people's SECRET BASES.$"
# 89 "data/maps/MossdeepCity_House4/scripts.pory"

# 90 "data/maps/MossdeepCity_House4/scripts.pory"
MossdeepCity_House4_Text_BrotherLikesToVisitBasesAndBattle::
# 91 "data/maps/MossdeepCity_House4/scripts.pory"
# 55 "data/maps/MossdeepCity_House4/scripts.pory"
# 92 "data/maps/MossdeepCity_House4/scripts.pory"
	.string "My little brother says he likes to\n"
# 93 "data/maps/MossdeepCity_House4/scripts.pory"
	.string "visit people's SECRET BASES and have\l"
# 94 "data/maps/MossdeepCity_House4/scripts.pory"
	.string "POKéMON battles.$"
# 95 "data/maps/MossdeepCity_House4/scripts.pory"

# 96 "data/maps/MossdeepCity_House4/scripts.pory"
MossdeepCity_House4_Text_YouMadeSecretBaseNearX::
# 97 "data/maps/MossdeepCity_House4/scripts.pory"
# 61 "data/maps/MossdeepCity_House4/scripts.pory"
# 98 "data/maps/MossdeepCity_House4/scripts.pory"
	.string "Was it you who made a SECRET BASE\n"
# 99 "data/maps/MossdeepCity_House4/scripts.pory"
	.string "near {STR_VAR_1}?$"
# 100 "data/maps/MossdeepCity_House4/scripts.pory"

# 101 "data/maps/MossdeepCity_House4/scripts.pory"
MossdeepCity_House4_Text_MakeSecretBase::
# 102 "data/maps/MossdeepCity_House4/scripts.pory"
# 66 "data/maps/MossdeepCity_House4/scripts.pory"
# 103 "data/maps/MossdeepCity_House4/scripts.pory"
	.string "You should make a SECRET BASE\n"
# 104 "data/maps/MossdeepCity_House4/scripts.pory"
	.string "somewhere. I'll go find it!$"
# 105 "data/maps/MossdeepCity_House4/scripts.pory"

# 106 "data/maps/MossdeepCity_House4/scripts.pory"
MossdeepCity_House4_Text_Skitty::
# 107 "data/maps/MossdeepCity_House4/scripts.pory"
# 71 "data/maps/MossdeepCity_House4/scripts.pory"
# 108 "data/maps/MossdeepCity_House4/scripts.pory"
	.string "SKITTY: Miyaan?$"
