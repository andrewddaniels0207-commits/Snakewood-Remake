# 1 "data/maps/FuchsiaCity_Mart_Frlg/scripts.pory"

# 2 "data/maps/FuchsiaCity_Mart_Frlg/scripts.pory"
FuchsiaCity_Mart_Frlg_MapScripts::
# 3 "data/maps/FuchsiaCity_Mart_Frlg/scripts.pory"
	.byte 0
# 4 "data/maps/FuchsiaCity_Mart_Frlg/scripts.pory"

# 5 "data/maps/FuchsiaCity_Mart_Frlg/scripts.pory"

# 6 "data/maps/FuchsiaCity_Mart_Frlg/scripts.pory"
FuchsiaCity_Mart_EventScript_CooltrainerF::
# 7 "data/maps/FuchsiaCity_Mart_Frlg/scripts.pory"
# 4 "data/maps/FuchsiaCity_Mart_Frlg/scripts.pory"
# 8 "data/maps/FuchsiaCity_Mart_Frlg/scripts.pory"
	msgbox FuchsiaCity_Mart_Text_DidYouTryXSpeed, MSGBOX_NPC
# 9 "data/maps/FuchsiaCity_Mart_Frlg/scripts.pory"
	end
# 10 "data/maps/FuchsiaCity_Mart_Frlg/scripts.pory"

# 11 "data/maps/FuchsiaCity_Mart_Frlg/scripts.pory"

# 12 "data/maps/FuchsiaCity_Mart_Frlg/scripts.pory"
FuchsiaCity_Mart_EventScript_Gentleman::
# 13 "data/maps/FuchsiaCity_Mart_Frlg/scripts.pory"
# 9 "data/maps/FuchsiaCity_Mart_Frlg/scripts.pory"
# 14 "data/maps/FuchsiaCity_Mart_Frlg/scripts.pory"
	msgbox FuchsiaCity_Mart_Text_DontTheyHaveSafariZonePennants, MSGBOX_NPC
# 15 "data/maps/FuchsiaCity_Mart_Frlg/scripts.pory"
	end
# 16 "data/maps/FuchsiaCity_Mart_Frlg/scripts.pory"

# 17 "data/maps/FuchsiaCity_Mart_Frlg/scripts.pory"

# 18 "data/maps/FuchsiaCity_Mart_Frlg/scripts.pory"
FuchsiaCity_Mart_EventScript_Clerk::
# 19 "data/maps/FuchsiaCity_Mart_Frlg/scripts.pory"
# 14 "data/maps/FuchsiaCity_Mart_Frlg/scripts.pory"
# 20 "data/maps/FuchsiaCity_Mart_Frlg/scripts.pory"
	lock
# 21 "data/maps/FuchsiaCity_Mart_Frlg/scripts.pory"
# 15 "data/maps/FuchsiaCity_Mart_Frlg/scripts.pory"
# 22 "data/maps/FuchsiaCity_Mart_Frlg/scripts.pory"
	faceplayer
# 23 "data/maps/FuchsiaCity_Mart_Frlg/scripts.pory"
# 16 "data/maps/FuchsiaCity_Mart_Frlg/scripts.pory"
# 24 "data/maps/FuchsiaCity_Mart_Frlg/scripts.pory"
	message gText_HowMayIServeYou
# 25 "data/maps/FuchsiaCity_Mart_Frlg/scripts.pory"
# 17 "data/maps/FuchsiaCity_Mart_Frlg/scripts.pory"
# 26 "data/maps/FuchsiaCity_Mart_Frlg/scripts.pory"
	waitmessage
# 27 "data/maps/FuchsiaCity_Mart_Frlg/scripts.pory"
# 18 "data/maps/FuchsiaCity_Mart_Frlg/scripts.pory"
# 28 "data/maps/FuchsiaCity_Mart_Frlg/scripts.pory"
	pokemart FuchsiaCity_Mart_Items
# 29 "data/maps/FuchsiaCity_Mart_Frlg/scripts.pory"
# 19 "data/maps/FuchsiaCity_Mart_Frlg/scripts.pory"
# 30 "data/maps/FuchsiaCity_Mart_Frlg/scripts.pory"
	msgbox gText_PleaseComeAgain
# 31 "data/maps/FuchsiaCity_Mart_Frlg/scripts.pory"
# 20 "data/maps/FuchsiaCity_Mart_Frlg/scripts.pory"
# 32 "data/maps/FuchsiaCity_Mart_Frlg/scripts.pory"
	release
# 33 "data/maps/FuchsiaCity_Mart_Frlg/scripts.pory"
	end
# 34 "data/maps/FuchsiaCity_Mart_Frlg/scripts.pory"

# 35 "data/maps/FuchsiaCity_Mart_Frlg/scripts.pory"

# 36 "data/maps/FuchsiaCity_Mart_Frlg/scripts.pory"
FuchsiaCity_Mart_Items::
# 37 "data/maps/FuchsiaCity_Mart_Frlg/scripts.pory"
# 25 "data/maps/FuchsiaCity_Mart_Frlg/scripts.pory"
# 38 "data/maps/FuchsiaCity_Mart_Frlg/scripts.pory"
	release
# 39 "data/maps/FuchsiaCity_Mart_Frlg/scripts.pory"
	end
# 40 "data/maps/FuchsiaCity_Mart_Frlg/scripts.pory"

# 41 "data/maps/FuchsiaCity_Mart_Frlg/scripts.pory"

# 42 "data/maps/FuchsiaCity_Mart_Frlg/scripts.pory"
FuchsiaCity_Mart_Text_DontTheyHaveSafariZonePennants::
# 43 "data/maps/FuchsiaCity_Mart_Frlg/scripts.pory"
# 29 "data/maps/FuchsiaCity_Mart_Frlg/scripts.pory"
# 44 "data/maps/FuchsiaCity_Mart_Frlg/scripts.pory"
	.string "Don't they have any pennants\n"
# 45 "data/maps/FuchsiaCity_Mart_Frlg/scripts.pory"
	.string "promoting the SAFARI ZONE?\p"
# 46 "data/maps/FuchsiaCity_Mart_Frlg/scripts.pory"
	.string "How about some paper lanterns?\n"
# 47 "data/maps/FuchsiaCity_Mart_Frlg/scripts.pory"
	.string "Aren't there even any calendars?$"
# 48 "data/maps/FuchsiaCity_Mart_Frlg/scripts.pory"

# 49 "data/maps/FuchsiaCity_Mart_Frlg/scripts.pory"
FuchsiaCity_Mart_Text_DidYouTryXSpeed::
# 50 "data/maps/FuchsiaCity_Mart_Frlg/scripts.pory"
# 36 "data/maps/FuchsiaCity_Mart_Frlg/scripts.pory"
# 51 "data/maps/FuchsiaCity_Mart_Frlg/scripts.pory"
	.string "Did you try X SPEED?\n"
# 52 "data/maps/FuchsiaCity_Mart_Frlg/scripts.pory"
	.string "It speeds up a POKéMON in battle.$"
