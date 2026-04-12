# 1 "data/maps/MtPyre_2F/scripts.pory"

# 2 "data/maps/MtPyre_2F/scripts.pory"
MtPyre_2F_MapScripts::
# 3 "data/maps/MtPyre_2F/scripts.pory"
# 2 "data/maps/MtPyre_2F/scripts.pory"
# 4 "data/maps/MtPyre_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, CaveHole_CheckFallDownHole
# 5 "data/maps/MtPyre_2F/scripts.pory"
# 3 "data/maps/MtPyre_2F/scripts.pory"
# 6 "data/maps/MtPyre_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, CaveHole_FixCrackedGround
# 7 "data/maps/MtPyre_2F/scripts.pory"
# 4 "data/maps/MtPyre_2F/scripts.pory"
# 8 "data/maps/MtPyre_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, MtPyre_2F_SetHoleWarp
# 9 "data/maps/MtPyre_2F/scripts.pory"
	.byte 0
# 10 "data/maps/MtPyre_2F/scripts.pory"

# 11 "data/maps/MtPyre_2F/scripts.pory"

# 12 "data/maps/MtPyre_2F/scripts.pory"
MtPyre_2F_SetHoleWarp::
# 13 "data/maps/MtPyre_2F/scripts.pory"
# 8 "data/maps/MtPyre_2F/scripts.pory"
# 14 "data/maps/MtPyre_2F/scripts.pory"
	setstepcallback STEP_CB_CRACKED_FLOOR
# 15 "data/maps/MtPyre_2F/scripts.pory"
# 9 "data/maps/MtPyre_2F/scripts.pory"
# 16 "data/maps/MtPyre_2F/scripts.pory"
	setholewarp MAP_MT_PYRE_1F
# 17 "data/maps/MtPyre_2F/scripts.pory"
	end
# 18 "data/maps/MtPyre_2F/scripts.pory"

# 19 "data/maps/MtPyre_2F/scripts.pory"

# 20 "data/maps/MtPyre_2F/scripts.pory"
MtPyre_2F_EventScript_Woman::
# 21 "data/maps/MtPyre_2F/scripts.pory"
# 14 "data/maps/MtPyre_2F/scripts.pory"
# 22 "data/maps/MtPyre_2F/scripts.pory"
	msgbox MtPyre_2F_Text_MemoriesOfSkitty, MSGBOX_NPC
# 23 "data/maps/MtPyre_2F/scripts.pory"
	end
# 24 "data/maps/MtPyre_2F/scripts.pory"

# 25 "data/maps/MtPyre_2F/scripts.pory"

# 26 "data/maps/MtPyre_2F/scripts.pory"
MtPyre_2F_EventScript_PokefanM::
# 27 "data/maps/MtPyre_2F/scripts.pory"
# 19 "data/maps/MtPyre_2F/scripts.pory"
# 28 "data/maps/MtPyre_2F/scripts.pory"
	msgbox MtPyre_2F_Text_TumbledFromFloorAbove, MSGBOX_NPC
# 29 "data/maps/MtPyre_2F/scripts.pory"
	end
# 30 "data/maps/MtPyre_2F/scripts.pory"

# 31 "data/maps/MtPyre_2F/scripts.pory"

# 32 "data/maps/MtPyre_2F/scripts.pory"
MtPyre_2F_EventScript_Mark::
# 33 "data/maps/MtPyre_2F/scripts.pory"
# 24 "data/maps/MtPyre_2F/scripts.pory"
# 34 "data/maps/MtPyre_2F/scripts.pory"
	trainerbattle_single TRAINER_MARK, MtPyre_2F_Text_MarkIntro, MtPyre_2F_Text_MarkDefeat
# 35 "data/maps/MtPyre_2F/scripts.pory"
# 25 "data/maps/MtPyre_2F/scripts.pory"
# 36 "data/maps/MtPyre_2F/scripts.pory"
	msgbox MtPyre_2F_Text_MarkPostBattle, MSGBOX_AUTOCLOSE
# 37 "data/maps/MtPyre_2F/scripts.pory"
	end
# 38 "data/maps/MtPyre_2F/scripts.pory"

# 39 "data/maps/MtPyre_2F/scripts.pory"

# 40 "data/maps/MtPyre_2F/scripts.pory"
MtPyre_2F_EventScript_Luke::
# 41 "data/maps/MtPyre_2F/scripts.pory"
# 30 "data/maps/MtPyre_2F/scripts.pory"
# 42 "data/maps/MtPyre_2F/scripts.pory"
	trainerbattle_double TRAINER_DEZ_AND_LUKE, MtPyre_2F_Text_LukeIntro, MtPyre_2F_Text_LukeDefeat, MtPyre_2F_Text_LukeNotEnoughMons
# 43 "data/maps/MtPyre_2F/scripts.pory"
# 31 "data/maps/MtPyre_2F/scripts.pory"
# 44 "data/maps/MtPyre_2F/scripts.pory"
	msgbox MtPyre_2F_Text_LukePostBattle, MSGBOX_AUTOCLOSE
# 45 "data/maps/MtPyre_2F/scripts.pory"
	end
# 46 "data/maps/MtPyre_2F/scripts.pory"

# 47 "data/maps/MtPyre_2F/scripts.pory"

# 48 "data/maps/MtPyre_2F/scripts.pory"
MtPyre_2F_EventScript_Dez::
# 49 "data/maps/MtPyre_2F/scripts.pory"
# 36 "data/maps/MtPyre_2F/scripts.pory"
# 50 "data/maps/MtPyre_2F/scripts.pory"
	trainerbattle_double TRAINER_DEZ_AND_LUKE, MtPyre_2F_Text_DezIntro, MtPyre_2F_Text_DezDefeat, MtPyre_2F_Text_DezNotEnoughMons
# 51 "data/maps/MtPyre_2F/scripts.pory"
# 37 "data/maps/MtPyre_2F/scripts.pory"
# 52 "data/maps/MtPyre_2F/scripts.pory"
	msgbox MtPyre_2F_Text_DezPostBattle, MSGBOX_AUTOCLOSE
# 53 "data/maps/MtPyre_2F/scripts.pory"
	end
# 54 "data/maps/MtPyre_2F/scripts.pory"

# 55 "data/maps/MtPyre_2F/scripts.pory"

# 56 "data/maps/MtPyre_2F/scripts.pory"
MtPyre_2F_EventScript_Leah::
# 57 "data/maps/MtPyre_2F/scripts.pory"
# 42 "data/maps/MtPyre_2F/scripts.pory"
# 58 "data/maps/MtPyre_2F/scripts.pory"
	trainerbattle_single TRAINER_LEAH, MtPyre_2F_Text_LeahIntro, MtPyre_2F_Text_LeahDefeat
# 59 "data/maps/MtPyre_2F/scripts.pory"
# 43 "data/maps/MtPyre_2F/scripts.pory"
# 60 "data/maps/MtPyre_2F/scripts.pory"
	msgbox MtPyre_2F_Text_LeahPostBattle, MSGBOX_AUTOCLOSE
# 61 "data/maps/MtPyre_2F/scripts.pory"
	end
# 62 "data/maps/MtPyre_2F/scripts.pory"

# 63 "data/maps/MtPyre_2F/scripts.pory"

# 64 "data/maps/MtPyre_2F/scripts.pory"
MtPyre_2F_EventScript_Zander::
# 65 "data/maps/MtPyre_2F/scripts.pory"
# 48 "data/maps/MtPyre_2F/scripts.pory"
# 66 "data/maps/MtPyre_2F/scripts.pory"
	trainerbattle_single TRAINER_ZANDER, MtPyre_2F_Text_ZanderIntro, MtPyre_2F_Text_ZanderDefeat
# 67 "data/maps/MtPyre_2F/scripts.pory"
# 49 "data/maps/MtPyre_2F/scripts.pory"
# 68 "data/maps/MtPyre_2F/scripts.pory"
	msgbox MtPyre_2F_Text_ZanderPostBattle, MSGBOX_AUTOCLOSE
# 69 "data/maps/MtPyre_2F/scripts.pory"
	end
# 70 "data/maps/MtPyre_2F/scripts.pory"

# 71 "data/maps/MtPyre_2F/scripts.pory"

# 72 "data/maps/MtPyre_2F/scripts.pory"
MtPyre_2F_Text_MemoriesOfSkitty::
# 73 "data/maps/MtPyre_2F/scripts.pory"
# 53 "data/maps/MtPyre_2F/scripts.pory"
# 74 "data/maps/MtPyre_2F/scripts.pory"
	.string "Memories of my darling SKITTY…\n"
# 75 "data/maps/MtPyre_2F/scripts.pory"
	.string "My eyes overflow thinking about it.$"
# 76 "data/maps/MtPyre_2F/scripts.pory"

# 77 "data/maps/MtPyre_2F/scripts.pory"
MtPyre_2F_Text_TumbledFromFloorAbove::
# 78 "data/maps/MtPyre_2F/scripts.pory"
# 58 "data/maps/MtPyre_2F/scripts.pory"
# 79 "data/maps/MtPyre_2F/scripts.pory"
	.string "Ooch, ouch… There are holes in the\n"
# 80 "data/maps/MtPyre_2F/scripts.pory"
	.string "ground here and there.\p"
# 81 "data/maps/MtPyre_2F/scripts.pory"
	.string "I didn't notice and took a tumble from\n"
# 82 "data/maps/MtPyre_2F/scripts.pory"
	.string "the floor above.$"
# 83 "data/maps/MtPyre_2F/scripts.pory"

# 84 "data/maps/MtPyre_2F/scripts.pory"
MtPyre_2F_Text_MarkIntro::
# 85 "data/maps/MtPyre_2F/scripts.pory"
# 65 "data/maps/MtPyre_2F/scripts.pory"
# 86 "data/maps/MtPyre_2F/scripts.pory"
	.string "Hey! Are you searching for POKéMON?\n"
# 87 "data/maps/MtPyre_2F/scripts.pory"
	.string "You came along after me! You're rude!$"
# 88 "data/maps/MtPyre_2F/scripts.pory"

# 89 "data/maps/MtPyre_2F/scripts.pory"
MtPyre_2F_Text_MarkDefeat::
# 90 "data/maps/MtPyre_2F/scripts.pory"
# 70 "data/maps/MtPyre_2F/scripts.pory"
# 91 "data/maps/MtPyre_2F/scripts.pory"
	.string "Ayieeeeh!\n"
# 92 "data/maps/MtPyre_2F/scripts.pory"
	.string "I'm sorry, forgive me, please!$"
# 93 "data/maps/MtPyre_2F/scripts.pory"

# 94 "data/maps/MtPyre_2F/scripts.pory"
MtPyre_2F_Text_MarkPostBattle::
# 95 "data/maps/MtPyre_2F/scripts.pory"
# 75 "data/maps/MtPyre_2F/scripts.pory"
# 96 "data/maps/MtPyre_2F/scripts.pory"
	.string "People don't come here often, so\n"
# 97 "data/maps/MtPyre_2F/scripts.pory"
	.string "I thought there'd be rare POKéMON.$"
# 98 "data/maps/MtPyre_2F/scripts.pory"

# 99 "data/maps/MtPyre_2F/scripts.pory"
MtPyre_2F_Text_LukeIntro::
# 100 "data/maps/MtPyre_2F/scripts.pory"
# 80 "data/maps/MtPyre_2F/scripts.pory"
# 101 "data/maps/MtPyre_2F/scripts.pory"
	.string "LUKE: We're here on a dare.\p"
# 102 "data/maps/MtPyre_2F/scripts.pory"
	.string "Heheh, if I show her how cool I am,\n"
# 103 "data/maps/MtPyre_2F/scripts.pory"
	.string "she'll fall for me. I know it!\p"
# 104 "data/maps/MtPyre_2F/scripts.pory"
	.string "I know! I'll cream you and show her\n"
# 105 "data/maps/MtPyre_2F/scripts.pory"
	.string "how cool I am!$"
# 106 "data/maps/MtPyre_2F/scripts.pory"

# 107 "data/maps/MtPyre_2F/scripts.pory"
MtPyre_2F_Text_LukeDefeat::
# 108 "data/maps/MtPyre_2F/scripts.pory"
# 88 "data/maps/MtPyre_2F/scripts.pory"
# 109 "data/maps/MtPyre_2F/scripts.pory"
	.string "LUKE: Whoopsie!$"
# 110 "data/maps/MtPyre_2F/scripts.pory"

# 111 "data/maps/MtPyre_2F/scripts.pory"
MtPyre_2F_Text_LukePostBattle::
# 112 "data/maps/MtPyre_2F/scripts.pory"
# 92 "data/maps/MtPyre_2F/scripts.pory"
# 113 "data/maps/MtPyre_2F/scripts.pory"
	.string "LUKE: Well, we lost but that's okay!\n"
# 114 "data/maps/MtPyre_2F/scripts.pory"
	.string "I'm right here by your side.\l"
# 115 "data/maps/MtPyre_2F/scripts.pory"
	.string "We'll make it through this dare!$"
# 116 "data/maps/MtPyre_2F/scripts.pory"

# 117 "data/maps/MtPyre_2F/scripts.pory"
MtPyre_2F_Text_LukeNotEnoughMons::
# 118 "data/maps/MtPyre_2F/scripts.pory"
# 98 "data/maps/MtPyre_2F/scripts.pory"
# 119 "data/maps/MtPyre_2F/scripts.pory"
	.string "LUKE: If you want to take me on,\n"
# 120 "data/maps/MtPyre_2F/scripts.pory"
	.string "bring some more POKéMON.\p"
# 121 "data/maps/MtPyre_2F/scripts.pory"
	.string "If you don't, I won't be able to show\n"
# 122 "data/maps/MtPyre_2F/scripts.pory"
	.string "off to my girl how cool I am!$"
# 123 "data/maps/MtPyre_2F/scripts.pory"

# 124 "data/maps/MtPyre_2F/scripts.pory"
MtPyre_2F_Text_DezIntro::
# 125 "data/maps/MtPyre_2F/scripts.pory"
# 105 "data/maps/MtPyre_2F/scripts.pory"
# 126 "data/maps/MtPyre_2F/scripts.pory"
	.string "DEZ: I came here on a dare with my\n"
# 127 "data/maps/MtPyre_2F/scripts.pory"
	.string "boyfriend.\p"
# 128 "data/maps/MtPyre_2F/scripts.pory"
	.string "It's really scary, but I'm with my\n"
# 129 "data/maps/MtPyre_2F/scripts.pory"
	.string "boyfriend. It's okay.\p"
# 130 "data/maps/MtPyre_2F/scripts.pory"
	.string "I know! I'll get my boyfriend to look\n"
# 131 "data/maps/MtPyre_2F/scripts.pory"
	.string "cool by beating you!$"
# 132 "data/maps/MtPyre_2F/scripts.pory"

# 133 "data/maps/MtPyre_2F/scripts.pory"
MtPyre_2F_Text_DezDefeat::
# 134 "data/maps/MtPyre_2F/scripts.pory"
# 114 "data/maps/MtPyre_2F/scripts.pory"
# 135 "data/maps/MtPyre_2F/scripts.pory"
	.string "DEZ: Waaaah! I'm scared!$"
# 136 "data/maps/MtPyre_2F/scripts.pory"

# 137 "data/maps/MtPyre_2F/scripts.pory"
MtPyre_2F_Text_DezPostBattle::
# 138 "data/maps/MtPyre_2F/scripts.pory"
# 118 "data/maps/MtPyre_2F/scripts.pory"
# 139 "data/maps/MtPyre_2F/scripts.pory"
	.string "DEZ: We're lovey-dovey, so we don't\n"
# 140 "data/maps/MtPyre_2F/scripts.pory"
	.string "care if we lose!$"
# 141 "data/maps/MtPyre_2F/scripts.pory"

# 142 "data/maps/MtPyre_2F/scripts.pory"
MtPyre_2F_Text_DezNotEnoughMons::
# 143 "data/maps/MtPyre_2F/scripts.pory"
# 123 "data/maps/MtPyre_2F/scripts.pory"
# 144 "data/maps/MtPyre_2F/scripts.pory"
	.string "DEZ: If you want to challenge us, you\n"
# 145 "data/maps/MtPyre_2F/scripts.pory"
	.string "should bring at least two POKéMON.\p"
# 146 "data/maps/MtPyre_2F/scripts.pory"
	.string "My boyfriend's strong.\n"
# 147 "data/maps/MtPyre_2F/scripts.pory"
	.string "Just one POKéMON won't do at all.$"
# 148 "data/maps/MtPyre_2F/scripts.pory"

# 149 "data/maps/MtPyre_2F/scripts.pory"
MtPyre_2F_Text_LeahIntro::
# 150 "data/maps/MtPyre_2F/scripts.pory"
# 130 "data/maps/MtPyre_2F/scripts.pory"
# 151 "data/maps/MtPyre_2F/scripts.pory"
	.string "You are an unfamiliar sight…\n"
# 152 "data/maps/MtPyre_2F/scripts.pory"
	.string "Depart before anything befalls you!$"
# 153 "data/maps/MtPyre_2F/scripts.pory"

# 154 "data/maps/MtPyre_2F/scripts.pory"
MtPyre_2F_Text_LeahDefeat::
# 155 "data/maps/MtPyre_2F/scripts.pory"
# 135 "data/maps/MtPyre_2F/scripts.pory"
# 156 "data/maps/MtPyre_2F/scripts.pory"
	.string "Hmm…\n"
# 157 "data/maps/MtPyre_2F/scripts.pory"
	.string "You're durable.$"
# 158 "data/maps/MtPyre_2F/scripts.pory"

# 159 "data/maps/MtPyre_2F/scripts.pory"
MtPyre_2F_Text_LeahPostBattle::
# 160 "data/maps/MtPyre_2F/scripts.pory"
# 140 "data/maps/MtPyre_2F/scripts.pory"
# 161 "data/maps/MtPyre_2F/scripts.pory"
	.string "Our family has been TRAINERS here\n"
# 162 "data/maps/MtPyre_2F/scripts.pory"
	.string "since my great-grandmother's time…\p"
# 163 "data/maps/MtPyre_2F/scripts.pory"
	.string "It is my duty to protect this\n"
# 164 "data/maps/MtPyre_2F/scripts.pory"
	.string "mountain…$"
# 165 "data/maps/MtPyre_2F/scripts.pory"

# 166 "data/maps/MtPyre_2F/scripts.pory"
MtPyre_2F_Text_ZanderIntro::
# 167 "data/maps/MtPyre_2F/scripts.pory"
# 147 "data/maps/MtPyre_2F/scripts.pory"
# 168 "data/maps/MtPyre_2F/scripts.pory"
	.string "Kiyaaaaah!\n"
# 169 "data/maps/MtPyre_2F/scripts.pory"
	.string "I'm terrified!$"
# 170 "data/maps/MtPyre_2F/scripts.pory"

# 171 "data/maps/MtPyre_2F/scripts.pory"
MtPyre_2F_Text_ZanderDefeat::
# 172 "data/maps/MtPyre_2F/scripts.pory"
# 152 "data/maps/MtPyre_2F/scripts.pory"
# 173 "data/maps/MtPyre_2F/scripts.pory"
	.string "Nooooooo!\n"
# 174 "data/maps/MtPyre_2F/scripts.pory"
	.string "I lost my wits!$"
# 175 "data/maps/MtPyre_2F/scripts.pory"

# 176 "data/maps/MtPyre_2F/scripts.pory"
MtPyre_2F_Text_ZanderPostBattle::
# 177 "data/maps/MtPyre_2F/scripts.pory"
# 157 "data/maps/MtPyre_2F/scripts.pory"
# 178 "data/maps/MtPyre_2F/scripts.pory"
	.string "I get freaked out every time I see\n"
# 179 "data/maps/MtPyre_2F/scripts.pory"
	.string "anything move…\p"
# 180 "data/maps/MtPyre_2F/scripts.pory"
	.string "I shouldn't have come here to train…$"
