# 1 "data/maps/MauvilleCity_House1/scripts.pory"

# 2 "data/maps/MauvilleCity_House1/scripts.pory"
MauvilleCity_House1_MapScripts::
# 3 "data/maps/MauvilleCity_House1/scripts.pory"
	.byte 0
# 4 "data/maps/MauvilleCity_House1/scripts.pory"

# 5 "data/maps/MauvilleCity_House1/scripts.pory"

# 6 "data/maps/MauvilleCity_House1/scripts.pory"
MauvilleCity_House1_EventScript_RockSmashDude::
# 7 "data/maps/MauvilleCity_House1/scripts.pory"
# 4 "data/maps/MauvilleCity_House1/scripts.pory"
# 8 "data/maps/MauvilleCity_House1/scripts.pory"
	lock
# 9 "data/maps/MauvilleCity_House1/scripts.pory"
# 5 "data/maps/MauvilleCity_House1/scripts.pory"
# 10 "data/maps/MauvilleCity_House1/scripts.pory"
	faceplayer
# 11 "data/maps/MauvilleCity_House1/scripts.pory"
# 6 "data/maps/MauvilleCity_House1/scripts.pory"
# 12 "data/maps/MauvilleCity_House1/scripts.pory"
	goto_if_set FLAG_RECEIVED_HM_ROCK_SMASH, MauvilleCity_House1_EventScript_RockSmashDude_2
# 13 "data/maps/MauvilleCity_House1/scripts.pory"
MauvilleCity_House1_EventScript_RockSmashDude_1:
# 14 "data/maps/MauvilleCity_House1/scripts.pory"
# 9 "data/maps/MauvilleCity_House1/scripts.pory"
# 15 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox MauvilleCity_House1_Text_ImRockSmashDudeTakeThis, MSGBOX_DEFAULT
# 16 "data/maps/MauvilleCity_House1/scripts.pory"
# 10 "data/maps/MauvilleCity_House1/scripts.pory"
# 17 "data/maps/MauvilleCity_House1/scripts.pory"
	giveitem ITEM_HM_ROCK_SMASH
# 18 "data/maps/MauvilleCity_House1/scripts.pory"
# 11 "data/maps/MauvilleCity_House1/scripts.pory"
# 19 "data/maps/MauvilleCity_House1/scripts.pory"
	setflag FLAG_RECEIVED_HM_ROCK_SMASH
# 20 "data/maps/MauvilleCity_House1/scripts.pory"
# 12 "data/maps/MauvilleCity_House1/scripts.pory"
# 21 "data/maps/MauvilleCity_House1/scripts.pory"
	setflag FLAG_HIDE_ROUTE_111_ROCK_SMASH_TIP_GUY
# 22 "data/maps/MauvilleCity_House1/scripts.pory"
# 13 "data/maps/MauvilleCity_House1/scripts.pory"
# 23 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox MauvilleCity_House1_Text_ExplainRockSmash, MSGBOX_DEFAULT
# 24 "data/maps/MauvilleCity_House1/scripts.pory"
# 14 "data/maps/MauvilleCity_House1/scripts.pory"
# 25 "data/maps/MauvilleCity_House1/scripts.pory"
	release
# 26 "data/maps/MauvilleCity_House1/scripts.pory"
	end
# 27 "data/maps/MauvilleCity_House1/scripts.pory"

# 28 "data/maps/MauvilleCity_House1/scripts.pory"
MauvilleCity_House1_EventScript_RockSmashDude_2:
# 29 "data/maps/MauvilleCity_House1/scripts.pory"
# 7 "data/maps/MauvilleCity_House1/scripts.pory"
# 30 "data/maps/MauvilleCity_House1/scripts.pory"
	goto MauvilleCity_House1_EventScript_ReceivedRockSmash
# 31 "data/maps/MauvilleCity_House1/scripts.pory"
	goto MauvilleCity_House1_EventScript_RockSmashDude_1
# 32 "data/maps/MauvilleCity_House1/scripts.pory"

# 33 "data/maps/MauvilleCity_House1/scripts.pory"

# 34 "data/maps/MauvilleCity_House1/scripts.pory"
MauvilleCity_House1_EventScript_ReceivedRockSmash::
# 35 "data/maps/MauvilleCity_House1/scripts.pory"
# 19 "data/maps/MauvilleCity_House1/scripts.pory"
# 36 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox MauvilleCity_House1_Text_MonCanFlyOutOfSmashedRock, MSGBOX_DEFAULT
# 37 "data/maps/MauvilleCity_House1/scripts.pory"
# 20 "data/maps/MauvilleCity_House1/scripts.pory"
# 38 "data/maps/MauvilleCity_House1/scripts.pory"
	release
# 39 "data/maps/MauvilleCity_House1/scripts.pory"
	end
# 40 "data/maps/MauvilleCity_House1/scripts.pory"

# 41 "data/maps/MauvilleCity_House1/scripts.pory"

# 42 "data/maps/MauvilleCity_House1/scripts.pory"
MauvilleCity_House1_Text_ImRockSmashDudeTakeThis::
# 43 "data/maps/MauvilleCity_House1/scripts.pory"
# 24 "data/maps/MauvilleCity_House1/scripts.pory"
# 44 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Woohoo!\p"
# 45 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "I hear people call me the ROCK SMASH\n"
# 46 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "GUY, but I find that sort of degrading.\p"
# 47 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "I think I deserve a bit more respect,\n"
# 48 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "like maybe the ROCK SMASH DUDE.\p"
# 49 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Woohoo!\p"
# 50 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Anyways, your POKéMON look pretty\n"
# 51 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "strong.\p"
# 52 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "I like that!\n"
# 53 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Here, take this HIDDEN MACHINE!$"
# 54 "data/maps/MauvilleCity_House1/scripts.pory"

# 55 "data/maps/MauvilleCity_House1/scripts.pory"
MauvilleCity_House1_Text_ExplainRockSmash::
# 56 "data/maps/MauvilleCity_House1/scripts.pory"
# 37 "data/maps/MauvilleCity_House1/scripts.pory"
# 57 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "That HM contains ROCK SMASH.\p"
# 58 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "If you come across large boulders\n"
# 59 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "that block your path…\p"
# 60 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Well, use that HM move and smash\n"
# 61 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "them right out of your way!\p"
# 62 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Yes, sir! Smash rocks aside, I say!\n"
# 63 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Woohoo!$"
# 64 "data/maps/MauvilleCity_House1/scripts.pory"

# 65 "data/maps/MauvilleCity_House1/scripts.pory"
MauvilleCity_House1_Text_MonCanFlyOutOfSmashedRock::
# 66 "data/maps/MauvilleCity_House1/scripts.pory"
# 47 "data/maps/MauvilleCity_House1/scripts.pory"
# 67 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Oh, yes, if you smash a rock, a POKéMON\n"
# 68 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "could come flying out of hiding.\p"
# 69 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Woohoo!$"
