# 1 "data/maps/LavaridgeTown_Mart/scripts.pory"

# 2 "data/maps/LavaridgeTown_Mart/scripts.pory"
LavaridgeTown_Mart_MapScripts::
# 3 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.byte 0
# 4 "data/maps/LavaridgeTown_Mart/scripts.pory"

# 5 "data/maps/LavaridgeTown_Mart/scripts.pory"

# 6 "data/maps/LavaridgeTown_Mart/scripts.pory"
LavaridgeTown_Mart_EventScript_Clerk::
# 7 "data/maps/LavaridgeTown_Mart/scripts.pory"
# 4 "data/maps/LavaridgeTown_Mart/scripts.pory"
# 8 "data/maps/LavaridgeTown_Mart/scripts.pory"
	lock
# 9 "data/maps/LavaridgeTown_Mart/scripts.pory"
# 5 "data/maps/LavaridgeTown_Mart/scripts.pory"
# 10 "data/maps/LavaridgeTown_Mart/scripts.pory"
	faceplayer
# 11 "data/maps/LavaridgeTown_Mart/scripts.pory"
# 6 "data/maps/LavaridgeTown_Mart/scripts.pory"
# 12 "data/maps/LavaridgeTown_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 13 "data/maps/LavaridgeTown_Mart/scripts.pory"
# 7 "data/maps/LavaridgeTown_Mart/scripts.pory"
# 14 "data/maps/LavaridgeTown_Mart/scripts.pory"
	waitmessage
# 15 "data/maps/LavaridgeTown_Mart/scripts.pory"
# 8 "data/maps/LavaridgeTown_Mart/scripts.pory"
# 16 "data/maps/LavaridgeTown_Mart/scripts.pory"
	pokemart LavaridgeTown_Mart_Pokemart
# 17 "data/maps/LavaridgeTown_Mart/scripts.pory"
# 9 "data/maps/LavaridgeTown_Mart/scripts.pory"
# 18 "data/maps/LavaridgeTown_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 19 "data/maps/LavaridgeTown_Mart/scripts.pory"
# 10 "data/maps/LavaridgeTown_Mart/scripts.pory"
# 20 "data/maps/LavaridgeTown_Mart/scripts.pory"
	release
# 21 "data/maps/LavaridgeTown_Mart/scripts.pory"
	end
# 22 "data/maps/LavaridgeTown_Mart/scripts.pory"

# 23 "data/maps/LavaridgeTown_Mart/scripts.pory"

# 24 "data/maps/LavaridgeTown_Mart/scripts.pory"
LavaridgeTown_Mart_Pokemart::
# 25 "data/maps/LavaridgeTown_Mart/scripts.pory"
# 15 "data/maps/LavaridgeTown_Mart/scripts.pory"
# 26 "data/maps/LavaridgeTown_Mart/scripts.pory"
	pokemartlistend
# 27 "data/maps/LavaridgeTown_Mart/scripts.pory"
	return
# 28 "data/maps/LavaridgeTown_Mart/scripts.pory"

# 29 "data/maps/LavaridgeTown_Mart/scripts.pory"

# 30 "data/maps/LavaridgeTown_Mart/scripts.pory"
LavaridgeTown_Mart_EventScript_ExpertM::
# 31 "data/maps/LavaridgeTown_Mart/scripts.pory"
# 19 "data/maps/LavaridgeTown_Mart/scripts.pory"
# 32 "data/maps/LavaridgeTown_Mart/scripts.pory"
	msgbox LavaridgeTown_Mart_Text_XSpeedFirstStrike, MSGBOX_NPC
# 33 "data/maps/LavaridgeTown_Mart/scripts.pory"
	end
# 34 "data/maps/LavaridgeTown_Mart/scripts.pory"

# 35 "data/maps/LavaridgeTown_Mart/scripts.pory"

# 36 "data/maps/LavaridgeTown_Mart/scripts.pory"
LavaridgeTown_Mart_EventScript_OldWoman::
# 37 "data/maps/LavaridgeTown_Mart/scripts.pory"
# 24 "data/maps/LavaridgeTown_Mart/scripts.pory"
# 38 "data/maps/LavaridgeTown_Mart/scripts.pory"
	msgbox LavaridgeTown_Mart_Text_LocalSpecialtyOnMtChimney, MSGBOX_NPC
# 39 "data/maps/LavaridgeTown_Mart/scripts.pory"
	end
# 40 "data/maps/LavaridgeTown_Mart/scripts.pory"

# 41 "data/maps/LavaridgeTown_Mart/scripts.pory"

# 42 "data/maps/LavaridgeTown_Mart/scripts.pory"
LavaridgeTown_Mart_Text_XSpeedFirstStrike::
# 43 "data/maps/LavaridgeTown_Mart/scripts.pory"
# 28 "data/maps/LavaridgeTown_Mart/scripts.pory"
# 44 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.string "Use X SPEED to add to a POKéMON's\n"
# 45 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.string "SPEED in battle.\p"
# 46 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.string "That will help it get in the first\n"
# 47 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.string "strike--a decided advantage!$"
# 48 "data/maps/LavaridgeTown_Mart/scripts.pory"

# 49 "data/maps/LavaridgeTown_Mart/scripts.pory"
LavaridgeTown_Mart_Text_LocalSpecialtyOnMtChimney::
# 50 "data/maps/LavaridgeTown_Mart/scripts.pory"
# 35 "data/maps/LavaridgeTown_Mart/scripts.pory"
# 51 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.string "On MT. CHIMNEY's peak, there's a local\n"
# 52 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.string "specialty that you can buy only there.\p"
# 53 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.string "Give it to a POKéMON--it will be elated.$"
