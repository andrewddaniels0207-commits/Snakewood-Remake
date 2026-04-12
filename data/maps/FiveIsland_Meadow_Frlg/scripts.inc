# 1 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"

# 2 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
FiveIsland_Meadow_Frlg_MapScripts::
# 3 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
# 2 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
# 4 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, FiveIsland_Meadow_OnLoad
# 5 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
	.byte 0
# 6 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"

# 7 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"

# 8 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
FiveIsland_Meadow_OnLoad::
# 9 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
# 6 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
# 10 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
	goto_if_set FLAG_UNLOCKED_ROCKET_WAREHOUSE, FiveIsland_Meadow_OnLoad_2
# 11 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
FiveIsland_Meadow_OnLoad_1:
# 12 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
	end
# 13 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"

# 14 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
FiveIsland_Meadow_OnLoad_2:
# 15 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
# 7 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
# 16 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
	call FiveIsland_Meadow_EventScript_SetWarehouseDoorUnlocked
# 17 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
	goto FiveIsland_Meadow_OnLoad_1
# 18 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"

# 19 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"

# 20 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
FiveIsland_Meadow_EventScript_WarehouseDoor::
# 21 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
# 13 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
# 22 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
	lockall
# 23 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
# 14 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
# 24 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
	goto_if_set FLAG_UNLOCKED_ROCKET_WAREHOUSE, FiveIsland_Meadow_EventScript_WarehouseDoor_2
# 25 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
FiveIsland_Meadow_EventScript_WarehouseDoor_1:
# 26 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
# 17 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
# 27 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
	goto_if_set FLAG_LEARNED_YES_NAH_CHANSEY, FiveIsland_Meadow_EventScript_WarehouseDoor_5
# 28 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
FiveIsland_Meadow_EventScript_WarehouseDoor_4:
# 29 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
# 20 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
# 30 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
	msgbox FiveIsland_Meadow_Text_EnteredPasswordAnotherNeeded
# 31 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
# 21 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
# 32 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
	releaseall
# 33 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
	end
# 34 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"

# 35 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
FiveIsland_Meadow_EventScript_WarehouseDoor_2:
# 36 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
# 15 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
# 37 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
	goto FiveIsland_Meadow_EventScript_WarehouseDoorAlreadyOpen
# 38 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
	goto FiveIsland_Meadow_EventScript_WarehouseDoor_1
# 39 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"

# 40 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
FiveIsland_Meadow_EventScript_WarehouseDoor_5:
# 41 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
# 18 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
# 42 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
	goto FiveIsland_Meadow_EventScript_OpenWarehouseDoor
# 43 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
	goto FiveIsland_Meadow_EventScript_WarehouseDoor_4
# 44 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"

# 45 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"

# 46 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
FiveIsland_Meadow_EventScript_OpenWarehouseDoor::
# 47 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
# 26 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
# 48 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
	setflag FLAG_UNLOCKED_ROCKET_WAREHOUSE
# 49 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
# 27 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
# 50 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
	message FiveIsland_Meadow_Text_EnteredPasswordDoorOpened
# 51 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
# 28 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
# 52 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
	waitmessage
# 53 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
# 29 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
# 54 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
	delay 60
# 55 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
# 30 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
# 56 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
	call FiveIsland_Meadow_EventScript_SetWarehouseDoorUnlocked
# 57 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
# 31 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
# 58 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
	special DrawWholeMapView
# 59 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
# 32 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
# 60 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
	playse SE_PIN
# 61 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
# 33 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
# 62 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
	waitse
# 63 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
# 34 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
# 64 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
	releaseall
# 65 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
	end
# 66 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"

# 67 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"

# 68 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
FiveIsland_Meadow_EventScript_WarehouseDoorAlreadyOpen::
# 69 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
# 39 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
# 70 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
	msgbox FiveIsland_Meadow_Text_WarehouseDoorAlreadyOpen
# 71 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
# 40 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
# 72 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
	releaseall
# 73 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
	end
# 74 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"

# 75 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"

# 76 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
FiveIsland_Meadow_EventScript_SetWarehouseDoorUnlocked::
# 77 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
# 45 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
# 78 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
	setmetatile 12, 21, METATILE_SeviiIslands45_RocketWarehouseDoor_Unlocked, 1
# 79 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
	return
# 80 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"

# 81 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"

# 82 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
FiveIsland_Meadow_EventScript_Rocket1::
# 83 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
# 50 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
# 84 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_49, FiveIsland_Meadow_Text_Rocket1Intro, FiveIsland_Meadow_Text_Rocket1Defeat
# 85 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
# 51 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
# 86 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
	msgbox FiveIsland_Meadow_Text_Rocket1PostBattle, MSGBOX_AUTOCLOSE
# 87 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
	end
# 88 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"

# 89 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"

# 90 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
FiveIsland_Meadow_EventScript_Rocket2::
# 91 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
# 56 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
# 92 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_50, FiveIsland_Meadow_Text_Rocket2Intro, FiveIsland_Meadow_Text_Rocket2Defeat
# 93 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
# 57 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
# 94 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
	msgbox FiveIsland_Meadow_Text_Rocket2PostBattle, MSGBOX_AUTOCLOSE
# 95 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
	end
# 96 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"

# 97 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"

# 98 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
FiveIsland_Meadow_EventScript_Rocket3::
# 99 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
# 62 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
# 100 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_51, FiveIsland_Meadow_Text_Rocket3Intro, FiveIsland_Meadow_Text_Rocket3Defeat
# 101 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
# 63 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
# 102 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
	msgbox FiveIsland_Meadow_Text_Rocket3PostBattle, MSGBOX_AUTOCLOSE
# 103 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
	end
# 104 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"

# 105 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"

# 106 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
FiveIsland_Meadow_Text_DoorNeedsTwoPasswords::
# 107 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
# 67 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
# 108 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
	.string "とびらを　あけるには\n"
# 109 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
	.string "パスワードが　2つ　いるようだ$"
# 110 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"

# 111 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
FiveIsland_Meadow_Text_EnteredPasswordAnotherNeeded::
# 112 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
# 72 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
# 113 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
	.string "{PLAYER} entered a password.\p"
# 114 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
	.string "“GOLDEEN need log.”\p"
# 115 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
	.string "… …  … …  … …\p"
# 116 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
	.string "Another password is needed to\n"
# 117 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
	.string "open the door…$"
# 118 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"

# 119 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
FiveIsland_Meadow_Text_EnteredPasswordDoorOpened::
# 120 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
# 80 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
# 121 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
	.string "{PLAYER} entered two passwords.\p"
# 122 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
	.string "“GOLDEEN need log.”\n"
# 123 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
	.string "“Yes, nah, CHANSEY.”\p"
# 124 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
	.string "… …  … …  … …\p"
# 125 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
	.string "The WAREHOUSE's door opened!$"
# 126 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"

# 127 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
FiveIsland_Meadow_Text_WarehouseDoorAlreadyOpen::
# 128 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
# 88 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
# 129 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
	.string "The WAREHOUSE's door is already\n"
# 130 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
	.string "open.$"
# 131 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"

# 132 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
FiveIsland_Meadow_Text_Rocket1Intro::
# 133 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
# 93 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
# 134 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
	.string "This area's strictly off-limits!\n"
# 135 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
	.string "Out, out!$"
# 136 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"

# 137 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
FiveIsland_Meadow_Text_Rocket1Defeat::
# 138 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
# 98 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
# 139 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
	.string "Is this for real?$"
# 140 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"

# 141 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
FiveIsland_Meadow_Text_Rocket1PostBattle::
# 142 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
# 102 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
# 143 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
	.string "You don't have any business here!\n"
# 144 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
	.string "Go home!$"
# 145 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"

# 146 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
FiveIsland_Meadow_Text_Rocket2Intro::
# 147 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
# 107 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
# 148 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
	.string "There's nothing past here except\n"
# 149 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
	.string "our WAREHOUSE.\p"
# 150 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
	.string "So what brings you here?$"
# 151 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"

# 152 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
FiveIsland_Meadow_Text_Rocket2Defeat::
# 153 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
# 113 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
# 154 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
	.string "That wasn't supposed to happen…$"
# 155 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"

# 156 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
FiveIsland_Meadow_Text_Rocket2PostBattle::
# 157 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
# 117 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
# 158 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
	.string "You're wanting to know what's inside\n"
# 159 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
	.string "this WAREHOUSE?\p"
# 160 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
	.string "It's better you didn't know.\n"
# 161 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
	.string "For your own sake, I mean.$"
# 162 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"

# 163 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
FiveIsland_Meadow_Text_Rocket3Intro::
# 164 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
# 124 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
# 165 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
	.string "You'd be wasting time even if you\n"
# 166 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
	.string "were to get by me.$"
# 167 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"

# 168 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
FiveIsland_Meadow_Text_Rocket3Defeat::
# 169 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
# 129 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
# 170 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
	.string "Oh, that makes me furious!$"
# 171 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"

# 172 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
FiveIsland_Meadow_Text_Rocket3PostBattle::
# 173 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
# 133 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
# 174 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
	.string "You won't be able to get in without\n"
# 175 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
	.string "the passwords anyway.$"
