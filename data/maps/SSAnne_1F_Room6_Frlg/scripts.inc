# 1 "data/maps/SSAnne_1F_Room6_Frlg/scripts.pory"

# 2 "data/maps/SSAnne_1F_Room6_Frlg/scripts.pory"
SSAnne_1F_Room6_Frlg_MapScripts::
# 3 "data/maps/SSAnne_1F_Room6_Frlg/scripts.pory"
	.byte 0
# 4 "data/maps/SSAnne_1F_Room6_Frlg/scripts.pory"

# 5 "data/maps/SSAnne_1F_Room6_Frlg/scripts.pory"

# 6 "data/maps/SSAnne_1F_Room6_Frlg/scripts.pory"
SSAnne_1F_Room6_EventScript_Woman::
# 7 "data/maps/SSAnne_1F_Room6_Frlg/scripts.pory"
# 4 "data/maps/SSAnne_1F_Room6_Frlg/scripts.pory"
# 8 "data/maps/SSAnne_1F_Room6_Frlg/scripts.pory"
	lock
# 9 "data/maps/SSAnne_1F_Room6_Frlg/scripts.pory"
# 5 "data/maps/SSAnne_1F_Room6_Frlg/scripts.pory"
# 10 "data/maps/SSAnne_1F_Room6_Frlg/scripts.pory"
	faceplayer
# 11 "data/maps/SSAnne_1F_Room6_Frlg/scripts.pory"
# 6 "data/maps/SSAnne_1F_Room6_Frlg/scripts.pory"
# 12 "data/maps/SSAnne_1F_Room6_Frlg/scripts.pory"
	msgbox SSAnne_1F_Room6_Text_TakeAShortRest, MSGBOX_YESNO
# 13 "data/maps/SSAnne_1F_Room6_Frlg/scripts.pory"
# 7 "data/maps/SSAnne_1F_Room6_Frlg/scripts.pory"
# 14 "data/maps/SSAnne_1F_Room6_Frlg/scripts.pory"
	compare VAR_RESULT, NO
# 15 "data/maps/SSAnne_1F_Room6_Frlg/scripts.pory"
	goto_if_eq SSAnne_1F_Room6_EventScript_Woman_2
# 16 "data/maps/SSAnne_1F_Room6_Frlg/scripts.pory"
SSAnne_1F_Room6_EventScript_Woman_1:
# 17 "data/maps/SSAnne_1F_Room6_Frlg/scripts.pory"
# 10 "data/maps/SSAnne_1F_Room6_Frlg/scripts.pory"
# 18 "data/maps/SSAnne_1F_Room6_Frlg/scripts.pory"
	closemessage
# 19 "data/maps/SSAnne_1F_Room6_Frlg/scripts.pory"
# 11 "data/maps/SSAnne_1F_Room6_Frlg/scripts.pory"
# 20 "data/maps/SSAnne_1F_Room6_Frlg/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 21 "data/maps/SSAnne_1F_Room6_Frlg/scripts.pory"
# 12 "data/maps/SSAnne_1F_Room6_Frlg/scripts.pory"
# 22 "data/maps/SSAnne_1F_Room6_Frlg/scripts.pory"
	msgbox SSAnne_1F_Room6_Text_GladEveryoneIsRefreshed
# 23 "data/maps/SSAnne_1F_Room6_Frlg/scripts.pory"
# 13 "data/maps/SSAnne_1F_Room6_Frlg/scripts.pory"
# 24 "data/maps/SSAnne_1F_Room6_Frlg/scripts.pory"
	release
# 25 "data/maps/SSAnne_1F_Room6_Frlg/scripts.pory"
	end
# 26 "data/maps/SSAnne_1F_Room6_Frlg/scripts.pory"

# 27 "data/maps/SSAnne_1F_Room6_Frlg/scripts.pory"
SSAnne_1F_Room6_EventScript_Woman_2:
# 28 "data/maps/SSAnne_1F_Room6_Frlg/scripts.pory"
# 8 "data/maps/SSAnne_1F_Room6_Frlg/scripts.pory"
# 29 "data/maps/SSAnne_1F_Room6_Frlg/scripts.pory"
	goto SSAnne_1F_Room6_EventScript_DeclineHeal
# 30 "data/maps/SSAnne_1F_Room6_Frlg/scripts.pory"
	goto SSAnne_1F_Room6_EventScript_Woman_1
# 31 "data/maps/SSAnne_1F_Room6_Frlg/scripts.pory"

# 32 "data/maps/SSAnne_1F_Room6_Frlg/scripts.pory"

# 33 "data/maps/SSAnne_1F_Room6_Frlg/scripts.pory"
SSAnne_1F_Room6_EventScript_DeclineHeal::
# 34 "data/maps/SSAnne_1F_Room6_Frlg/scripts.pory"
# 18 "data/maps/SSAnne_1F_Room6_Frlg/scripts.pory"
# 35 "data/maps/SSAnne_1F_Room6_Frlg/scripts.pory"
	checkplayergender
# 36 "data/maps/SSAnne_1F_Room6_Frlg/scripts.pory"
# 19 "data/maps/SSAnne_1F_Room6_Frlg/scripts.pory"
# 37 "data/maps/SSAnne_1F_Room6_Frlg/scripts.pory"
	compare VAR_RESULT, MALE
# 38 "data/maps/SSAnne_1F_Room6_Frlg/scripts.pory"
	goto_if_eq SSAnne_1F_Room6_EventScript_DeclineHeal_2
# 39 "data/maps/SSAnne_1F_Room6_Frlg/scripts.pory"
SSAnne_1F_Room6_EventScript_DeclineHeal_1:
# 40 "data/maps/SSAnne_1F_Room6_Frlg/scripts.pory"
# 22 "data/maps/SSAnne_1F_Room6_Frlg/scripts.pory"
# 41 "data/maps/SSAnne_1F_Room6_Frlg/scripts.pory"
	msgbox SSAnne_1F_Room6_Text_SorryYouLookLikeMySister
# 42 "data/maps/SSAnne_1F_Room6_Frlg/scripts.pory"
# 23 "data/maps/SSAnne_1F_Room6_Frlg/scripts.pory"
# 43 "data/maps/SSAnne_1F_Room6_Frlg/scripts.pory"
	release
# 44 "data/maps/SSAnne_1F_Room6_Frlg/scripts.pory"
	end
# 45 "data/maps/SSAnne_1F_Room6_Frlg/scripts.pory"

# 46 "data/maps/SSAnne_1F_Room6_Frlg/scripts.pory"
SSAnne_1F_Room6_EventScript_DeclineHeal_2:
# 47 "data/maps/SSAnne_1F_Room6_Frlg/scripts.pory"
# 20 "data/maps/SSAnne_1F_Room6_Frlg/scripts.pory"
# 48 "data/maps/SSAnne_1F_Room6_Frlg/scripts.pory"
	goto SSAnne_1F_Room6_EventScript_DeclineHealMale
# 49 "data/maps/SSAnne_1F_Room6_Frlg/scripts.pory"
	goto SSAnne_1F_Room6_EventScript_DeclineHeal_1
# 50 "data/maps/SSAnne_1F_Room6_Frlg/scripts.pory"

# 51 "data/maps/SSAnne_1F_Room6_Frlg/scripts.pory"

# 52 "data/maps/SSAnne_1F_Room6_Frlg/scripts.pory"
SSAnne_1F_Room6_EventScript_DeclineHealMale::
# 53 "data/maps/SSAnne_1F_Room6_Frlg/scripts.pory"
# 28 "data/maps/SSAnne_1F_Room6_Frlg/scripts.pory"
# 54 "data/maps/SSAnne_1F_Room6_Frlg/scripts.pory"
	msgbox SSAnne_1F_Room6_Text_SorryYouLookLikeMyBrother
# 55 "data/maps/SSAnne_1F_Room6_Frlg/scripts.pory"
# 29 "data/maps/SSAnne_1F_Room6_Frlg/scripts.pory"
# 56 "data/maps/SSAnne_1F_Room6_Frlg/scripts.pory"
	release
# 57 "data/maps/SSAnne_1F_Room6_Frlg/scripts.pory"
	end
# 58 "data/maps/SSAnne_1F_Room6_Frlg/scripts.pory"

# 59 "data/maps/SSAnne_1F_Room6_Frlg/scripts.pory"

# 60 "data/maps/SSAnne_1F_Room6_Frlg/scripts.pory"
SSAnne_1F_Room6_Text_TakeAShortRest::
# 61 "data/maps/SSAnne_1F_Room6_Frlg/scripts.pory"
# 33 "data/maps/SSAnne_1F_Room6_Frlg/scripts.pory"
# 62 "data/maps/SSAnne_1F_Room6_Frlg/scripts.pory"
	.string "You look tired. Would you like to\n"
# 63 "data/maps/SSAnne_1F_Room6_Frlg/scripts.pory"
	.string "take a short rest?$"
# 64 "data/maps/SSAnne_1F_Room6_Frlg/scripts.pory"

# 65 "data/maps/SSAnne_1F_Room6_Frlg/scripts.pory"
SSAnne_1F_Room6_Text_GladEveryoneIsRefreshed::
# 66 "data/maps/SSAnne_1F_Room6_Frlg/scripts.pory"
# 38 "data/maps/SSAnne_1F_Room6_Frlg/scripts.pory"
# 67 "data/maps/SSAnne_1F_Room6_Frlg/scripts.pory"
	.string "I'm glad to see that everyone is\n"
# 68 "data/maps/SSAnne_1F_Room6_Frlg/scripts.pory"
	.string "looking refreshed and chipper.$"
# 69 "data/maps/SSAnne_1F_Room6_Frlg/scripts.pory"

# 70 "data/maps/SSAnne_1F_Room6_Frlg/scripts.pory"
SSAnne_1F_Room6_Text_SorryYouLookLikeMyBrother::
# 71 "data/maps/SSAnne_1F_Room6_Frlg/scripts.pory"
# 43 "data/maps/SSAnne_1F_Room6_Frlg/scripts.pory"
# 72 "data/maps/SSAnne_1F_Room6_Frlg/scripts.pory"
	.string "Oh, I'm sorry for fussing over you.\n"
# 73 "data/maps/SSAnne_1F_Room6_Frlg/scripts.pory"
	.string "You look like my little brother…$"
# 74 "data/maps/SSAnne_1F_Room6_Frlg/scripts.pory"

# 75 "data/maps/SSAnne_1F_Room6_Frlg/scripts.pory"
SSAnne_1F_Room6_Text_SorryYouLookLikeMySister::
# 76 "data/maps/SSAnne_1F_Room6_Frlg/scripts.pory"
# 48 "data/maps/SSAnne_1F_Room6_Frlg/scripts.pory"
# 77 "data/maps/SSAnne_1F_Room6_Frlg/scripts.pory"
	.string "Oh, I'm sorry for fussing over you.\n"
# 78 "data/maps/SSAnne_1F_Room6_Frlg/scripts.pory"
	.string "You look like my little sister…$"
