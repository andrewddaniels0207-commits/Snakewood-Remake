# 1 "data/maps/RustboroCity_Flat2_2F/scripts.pory"

# 2 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
RustboroCity_Flat2_2F_MapScripts::
# 3 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
	.byte 0
# 4 "data/maps/RustboroCity_Flat2_2F/scripts.pory"

# 5 "data/maps/RustboroCity_Flat2_2F/scripts.pory"

# 6 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
RustboroCity_Flat2_2F_EventScript_OldMan::
# 7 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
# 4 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
# 8 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
	msgbox RustboroCity_Flat2_2F_Text_DevonWasTinyInOldDays, MSGBOX_NPC
# 9 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
	end
# 10 "data/maps/RustboroCity_Flat2_2F/scripts.pory"

# 11 "data/maps/RustboroCity_Flat2_2F/scripts.pory"

# 12 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
RustboroCity_Flat2_2F_EventScript_NinjaBoy::
# 13 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
# 9 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
# 14 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
	lock
# 15 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
# 10 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
# 16 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
	faceplayer
# 17 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
# 11 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
# 18 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
	goto_if_set FLAG_RECEIVED_PREMIER_BALL_RUSTBORO, RustboroCity_Flat2_2F_EventScript_NinjaBoy_2
# 19 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
RustboroCity_Flat2_2F_EventScript_NinjaBoy_1:
# 20 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
# 14 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
# 21 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
	msgbox RustboroCity_Flat2_2F_Text_MyDaddyMadeThisYouCanHaveIt, MSGBOX_DEFAULT
# 22 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
# 15 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
# 23 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
	giveitem ITEM_PREMIER_BALL
# 24 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
# 16 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
# 25 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
	compare VAR_RESULT, FALSE
# 26 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
	goto_if_eq RustboroCity_Flat2_2F_EventScript_NinjaBoy_5
# 27 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
RustboroCity_Flat2_2F_EventScript_NinjaBoy_4:
# 28 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
# 19 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
# 29 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
	setflag FLAG_RECEIVED_PREMIER_BALL_RUSTBORO
# 30 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
# 20 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
# 31 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
	release
# 32 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
	end
# 33 "data/maps/RustboroCity_Flat2_2F/scripts.pory"

# 34 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
RustboroCity_Flat2_2F_EventScript_NinjaBoy_2:
# 35 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
# 12 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
# 36 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
	goto RustboroCity_Flat2_2F_EventScript_GavePremierBall
# 37 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
	goto RustboroCity_Flat2_2F_EventScript_NinjaBoy_1
# 38 "data/maps/RustboroCity_Flat2_2F/scripts.pory"

# 39 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
RustboroCity_Flat2_2F_EventScript_NinjaBoy_5:
# 40 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
# 17 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
# 41 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
# 42 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
	goto RustboroCity_Flat2_2F_EventScript_NinjaBoy_4
# 43 "data/maps/RustboroCity_Flat2_2F/scripts.pory"

# 44 "data/maps/RustboroCity_Flat2_2F/scripts.pory"

# 45 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
RustboroCity_Flat2_2F_EventScript_GavePremierBall::
# 46 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
# 25 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
# 47 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
	msgbox RustboroCity_Flat2_2F_Text_GoingToWorkAtDevonToo, MSGBOX_DEFAULT
# 48 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
# 26 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
# 49 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
	release
# 50 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
	end
# 51 "data/maps/RustboroCity_Flat2_2F/scripts.pory"

# 52 "data/maps/RustboroCity_Flat2_2F/scripts.pory"

# 53 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
RustboroCity_Flat2_2F_Text_DevonWasTinyInOldDays::
# 54 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
# 30 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
# 55 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
	.string "Way back in the old days, DEVON was just\n"
# 56 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
	.string "a teeny, tiny company.$"
# 57 "data/maps/RustboroCity_Flat2_2F/scripts.pory"

# 58 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
RustboroCity_Flat2_2F_Text_MyDaddyMadeThisYouCanHaveIt::
# 59 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
# 35 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
# 60 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
	.string "My daddy's working at the CORPORATION.\p"
# 61 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
	.string "My daddy made this!\n"
# 62 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
	.string "But I can't use it, so you can have it.$"
# 63 "data/maps/RustboroCity_Flat2_2F/scripts.pory"

# 64 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
RustboroCity_Flat2_2F_Text_GoingToWorkAtDevonToo::
# 65 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
# 41 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
# 66 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
	.string "My daddy's working at the CORPORATION.\p"
# 67 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
	.string "When I grow up, I'm going to work for\n"
# 68 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
	.string "DEVON, too.$"
