# 1 "data/maps/PacifidlogTown_House4/scripts.pory"

# 2 "data/maps/PacifidlogTown_House4/scripts.pory"
PacifidlogTown_House4_MapScripts::
# 3 "data/maps/PacifidlogTown_House4/scripts.pory"
	.byte 0
# 4 "data/maps/PacifidlogTown_House4/scripts.pory"

# 5 "data/maps/PacifidlogTown_House4/scripts.pory"

# 6 "data/maps/PacifidlogTown_House4/scripts.pory"
PacifidlogTown_House4_EventScript_LittleGirl::
# 7 "data/maps/PacifidlogTown_House4/scripts.pory"
# 4 "data/maps/PacifidlogTown_House4/scripts.pory"
# 8 "data/maps/PacifidlogTown_House4/scripts.pory"
	msgbox PacifidlogTown_House4_Text_SkyPokemon, MSGBOX_NPC
# 9 "data/maps/PacifidlogTown_House4/scripts.pory"
	end
# 10 "data/maps/PacifidlogTown_House4/scripts.pory"

# 11 "data/maps/PacifidlogTown_House4/scripts.pory"

# 12 "data/maps/PacifidlogTown_House4/scripts.pory"
PacifidlogTown_House4_EventScript_Woman::
# 13 "data/maps/PacifidlogTown_House4/scripts.pory"
# 9 "data/maps/PacifidlogTown_House4/scripts.pory"
# 14 "data/maps/PacifidlogTown_House4/scripts.pory"
	msgbox PacifidlogTown_House4_Text_PeopleSawHighFlyingPokemon, MSGBOX_NPC
# 15 "data/maps/PacifidlogTown_House4/scripts.pory"
	end
# 16 "data/maps/PacifidlogTown_House4/scripts.pory"

# 17 "data/maps/PacifidlogTown_House4/scripts.pory"

# 18 "data/maps/PacifidlogTown_House4/scripts.pory"
PacifidlogTown_House4_EventScript_Boy::
# 19 "data/maps/PacifidlogTown_House4/scripts.pory"
# 14 "data/maps/PacifidlogTown_House4/scripts.pory"
# 20 "data/maps/PacifidlogTown_House4/scripts.pory"
	lock
# 21 "data/maps/PacifidlogTown_House4/scripts.pory"
# 15 "data/maps/PacifidlogTown_House4/scripts.pory"
# 22 "data/maps/PacifidlogTown_House4/scripts.pory"
	faceplayer
# 23 "data/maps/PacifidlogTown_House4/scripts.pory"
# 16 "data/maps/PacifidlogTown_House4/scripts.pory"
# 24 "data/maps/PacifidlogTown_House4/scripts.pory"
	msgbox PacifidlogTown_House4_Text_WhereDidYouComeFrom, MSGBOX_YESNO
# 25 "data/maps/PacifidlogTown_House4/scripts.pory"
# 17 "data/maps/PacifidlogTown_House4/scripts.pory"
# 26 "data/maps/PacifidlogTown_House4/scripts.pory"
	compare VAR_RESULT, YES
# 27 "data/maps/PacifidlogTown_House4/scripts.pory"
	goto_if_eq PacifidlogTown_House4_EventScript_Boy_2
# 28 "data/maps/PacifidlogTown_House4/scripts.pory"
PacifidlogTown_House4_EventScript_Boy_1:
# 29 "data/maps/PacifidlogTown_House4/scripts.pory"
# 20 "data/maps/PacifidlogTown_House4/scripts.pory"
# 30 "data/maps/PacifidlogTown_House4/scripts.pory"
	compare VAR_RESULT, NO
# 31 "data/maps/PacifidlogTown_House4/scripts.pory"
	goto_if_eq PacifidlogTown_House4_EventScript_Boy_5
# 32 "data/maps/PacifidlogTown_House4/scripts.pory"
PacifidlogTown_House4_EventScript_Boy_4:
# 33 "data/maps/PacifidlogTown_House4/scripts.pory"
	end
# 34 "data/maps/PacifidlogTown_House4/scripts.pory"

# 35 "data/maps/PacifidlogTown_House4/scripts.pory"
PacifidlogTown_House4_EventScript_Boy_2:
# 36 "data/maps/PacifidlogTown_House4/scripts.pory"
# 18 "data/maps/PacifidlogTown_House4/scripts.pory"
# 37 "data/maps/PacifidlogTown_House4/scripts.pory"
	goto PacifidlogTown_House4_EventScript_Yes
# 38 "data/maps/PacifidlogTown_House4/scripts.pory"
	goto PacifidlogTown_House4_EventScript_Boy_1
# 39 "data/maps/PacifidlogTown_House4/scripts.pory"

# 40 "data/maps/PacifidlogTown_House4/scripts.pory"
PacifidlogTown_House4_EventScript_Boy_5:
# 41 "data/maps/PacifidlogTown_House4/scripts.pory"
# 21 "data/maps/PacifidlogTown_House4/scripts.pory"
# 42 "data/maps/PacifidlogTown_House4/scripts.pory"
	goto PacifidlogTown_House4_EventScript_No
# 43 "data/maps/PacifidlogTown_House4/scripts.pory"
	goto PacifidlogTown_House4_EventScript_Boy_4
# 44 "data/maps/PacifidlogTown_House4/scripts.pory"

# 45 "data/maps/PacifidlogTown_House4/scripts.pory"

# 46 "data/maps/PacifidlogTown_House4/scripts.pory"
PacifidlogTown_House4_EventScript_Yes::
# 47 "data/maps/PacifidlogTown_House4/scripts.pory"
# 27 "data/maps/PacifidlogTown_House4/scripts.pory"
# 48 "data/maps/PacifidlogTown_House4/scripts.pory"
	msgbox PacifidlogTown_House4_Text_YesTown, MSGBOX_DEFAULT
# 49 "data/maps/PacifidlogTown_House4/scripts.pory"
# 28 "data/maps/PacifidlogTown_House4/scripts.pory"
# 50 "data/maps/PacifidlogTown_House4/scripts.pory"
	release
# 51 "data/maps/PacifidlogTown_House4/scripts.pory"
	end
# 52 "data/maps/PacifidlogTown_House4/scripts.pory"

# 53 "data/maps/PacifidlogTown_House4/scripts.pory"

# 54 "data/maps/PacifidlogTown_House4/scripts.pory"
PacifidlogTown_House4_EventScript_No::
# 55 "data/maps/PacifidlogTown_House4/scripts.pory"
# 33 "data/maps/PacifidlogTown_House4/scripts.pory"
# 56 "data/maps/PacifidlogTown_House4/scripts.pory"
	msgbox PacifidlogTown_House4_Text_YouHaveToComeFromSomewhere, MSGBOX_DEFAULT
# 57 "data/maps/PacifidlogTown_House4/scripts.pory"
# 34 "data/maps/PacifidlogTown_House4/scripts.pory"
# 58 "data/maps/PacifidlogTown_House4/scripts.pory"
	release
# 59 "data/maps/PacifidlogTown_House4/scripts.pory"
	end
# 60 "data/maps/PacifidlogTown_House4/scripts.pory"

# 61 "data/maps/PacifidlogTown_House4/scripts.pory"

# 62 "data/maps/PacifidlogTown_House4/scripts.pory"
PacifidlogTown_House4_Text_PeopleSawHighFlyingPokemon::
# 63 "data/maps/PacifidlogTown_House4/scripts.pory"
# 38 "data/maps/PacifidlogTown_House4/scripts.pory"
# 64 "data/maps/PacifidlogTown_House4/scripts.pory"
	.string "People were saying they saw a POKéMON\n"
# 65 "data/maps/PacifidlogTown_House4/scripts.pory"
	.string "flying high above HOENN.\p"
# 66 "data/maps/PacifidlogTown_House4/scripts.pory"
	.string "Is it flying around all the time?\n"
# 67 "data/maps/PacifidlogTown_House4/scripts.pory"
	.string "Doesn't it need to rest somewhere?$"
# 68 "data/maps/PacifidlogTown_House4/scripts.pory"

# 69 "data/maps/PacifidlogTown_House4/scripts.pory"
PacifidlogTown_House4_Text_SkyPokemon::
# 70 "data/maps/PacifidlogTown_House4/scripts.pory"
# 45 "data/maps/PacifidlogTown_House4/scripts.pory"
# 71 "data/maps/PacifidlogTown_House4/scripts.pory"
	.string "A sky POKéMON!\n"
# 72 "data/maps/PacifidlogTown_House4/scripts.pory"
	.string "A sky POKéMON!$"
# 73 "data/maps/PacifidlogTown_House4/scripts.pory"

# 74 "data/maps/PacifidlogTown_House4/scripts.pory"
PacifidlogTown_House4_Text_WhereDidYouComeFrom::
# 75 "data/maps/PacifidlogTown_House4/scripts.pory"
# 50 "data/maps/PacifidlogTown_House4/scripts.pory"
# 76 "data/maps/PacifidlogTown_House4/scripts.pory"
	.string "Where did you come from?$"
# 77 "data/maps/PacifidlogTown_House4/scripts.pory"

# 78 "data/maps/PacifidlogTown_House4/scripts.pory"
PacifidlogTown_House4_Text_YesTown::
# 79 "data/maps/PacifidlogTown_House4/scripts.pory"
# 54 "data/maps/PacifidlogTown_House4/scripts.pory"
# 80 "data/maps/PacifidlogTown_House4/scripts.pory"
	.string "Yes?\n"
# 81 "data/maps/PacifidlogTown_House4/scripts.pory"
	.string "YES TOWN?\p"
# 82 "data/maps/PacifidlogTown_House4/scripts.pory"
	.string "I've never heard of a place like that.$"
# 83 "data/maps/PacifidlogTown_House4/scripts.pory"

# 84 "data/maps/PacifidlogTown_House4/scripts.pory"
PacifidlogTown_House4_Text_YouHaveToComeFromSomewhere::
# 85 "data/maps/PacifidlogTown_House4/scripts.pory"
# 60 "data/maps/PacifidlogTown_House4/scripts.pory"
# 86 "data/maps/PacifidlogTown_House4/scripts.pory"
	.string "No? That doesn't make any sense.\n"
# 87 "data/maps/PacifidlogTown_House4/scripts.pory"
	.string "You have to come from somewhere.\p"
# 88 "data/maps/PacifidlogTown_House4/scripts.pory"
	.string "Oh! Wait! You're not going to say you\n"
# 89 "data/maps/PacifidlogTown_House4/scripts.pory"
	.string "were born at the bottom of the sea?$"
