MtPyre_2F_MapScripts::
# 2 "data/maps/MtPyre_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, CaveHole_CheckFallDownHole
# 3 "data/maps/MtPyre_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, CaveHole_FixCrackedGround
# 4 "data/maps/MtPyre_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, MtPyre_2F_SetHoleWarp
	.byte 0


MtPyre_2F_SetHoleWarp::
# 8 "data/maps/MtPyre_2F/scripts.pory"
	setstepcallback STEP_CB_CRACKED_FLOOR
# 9 "data/maps/MtPyre_2F/scripts.pory"
	setholewarp MAP_MT_PYRE_1F
	end


MtPyre_2F_EventScript_Woman::
# 14 "data/maps/MtPyre_2F/scripts.pory"
	msgbox MtPyre_2F_Text_MemoriesOfSkitty, MSGBOX_NPC
	end


MtPyre_2F_EventScript_PokefanM::
# 19 "data/maps/MtPyre_2F/scripts.pory"
	msgbox MtPyre_2F_Text_TumbledFromFloorAbove, MSGBOX_NPC
	end


MtPyre_2F_EventScript_Mark::
# 24 "data/maps/MtPyre_2F/scripts.pory"
	trainerbattle_single TRAINER_MARK, MtPyre_2F_Text_MarkIntro, MtPyre_2F_Text_MarkDefeat
# 25 "data/maps/MtPyre_2F/scripts.pory"
	msgbox MtPyre_2F_Text_MarkPostBattle, MSGBOX_AUTOCLOSE
	end


MtPyre_2F_EventScript_Luke::
# 30 "data/maps/MtPyre_2F/scripts.pory"
	trainerbattle_double TRAINER_DEZ_AND_LUKE, MtPyre_2F_Text_LukeIntro, MtPyre_2F_Text_LukeDefeat, MtPyre_2F_Text_LukeNotEnoughMons
# 31 "data/maps/MtPyre_2F/scripts.pory"
	msgbox MtPyre_2F_Text_LukePostBattle, MSGBOX_AUTOCLOSE
	end


MtPyre_2F_EventScript_Dez::
# 36 "data/maps/MtPyre_2F/scripts.pory"
	trainerbattle_double TRAINER_DEZ_AND_LUKE, MtPyre_2F_Text_DezIntro, MtPyre_2F_Text_DezDefeat, MtPyre_2F_Text_DezNotEnoughMons
# 37 "data/maps/MtPyre_2F/scripts.pory"
	msgbox MtPyre_2F_Text_DezPostBattle, MSGBOX_AUTOCLOSE
	end


MtPyre_2F_EventScript_Leah::
# 42 "data/maps/MtPyre_2F/scripts.pory"
	trainerbattle_single TRAINER_LEAH, MtPyre_2F_Text_LeahIntro, MtPyre_2F_Text_LeahDefeat
# 43 "data/maps/MtPyre_2F/scripts.pory"
	msgbox MtPyre_2F_Text_LeahPostBattle, MSGBOX_AUTOCLOSE
	end


MtPyre_2F_EventScript_Zander::
# 48 "data/maps/MtPyre_2F/scripts.pory"
	trainerbattle_single TRAINER_ZANDER, MtPyre_2F_Text_ZanderIntro, MtPyre_2F_Text_ZanderDefeat
# 49 "data/maps/MtPyre_2F/scripts.pory"
	msgbox MtPyre_2F_Text_ZanderPostBattle, MSGBOX_AUTOCLOSE
	end


MtPyre_2F_Text_MemoriesOfSkitty::
# 53 "data/maps/MtPyre_2F/scripts.pory"
	.string "Memories of my darling SKITTY…\n"
	.string "My eyes overflow thinking about it.$"

MtPyre_2F_Text_TumbledFromFloorAbove::
# 58 "data/maps/MtPyre_2F/scripts.pory"
	.string "Ooch, ouch… There are holes in the\n"
	.string "ground here and there.\p"
	.string "I didn't notice and took a tumble from\n"
	.string "the floor above.$"

MtPyre_2F_Text_MarkIntro::
# 65 "data/maps/MtPyre_2F/scripts.pory"
	.string "Hey! Are you searching for POKéMON?\n"
	.string "You came along after me! You're rude!$"

MtPyre_2F_Text_MarkDefeat::
# 70 "data/maps/MtPyre_2F/scripts.pory"
	.string "Ayieeeeh!\n"
	.string "I'm sorry, forgive me, please!$"

MtPyre_2F_Text_MarkPostBattle::
# 75 "data/maps/MtPyre_2F/scripts.pory"
	.string "People don't come here often, so\n"
	.string "I thought there'd be rare POKéMON.$"

MtPyre_2F_Text_LukeIntro::
# 80 "data/maps/MtPyre_2F/scripts.pory"
	.string "LUKE: We're here on a dare.\p"
	.string "Heheh, if I show her how cool I am,\n"
	.string "she'll fall for me. I know it!\p"
	.string "I know! I'll cream you and show her\n"
	.string "how cool I am!$"

MtPyre_2F_Text_LukeDefeat::
# 88 "data/maps/MtPyre_2F/scripts.pory"
	.string "LUKE: Whoopsie!$"

MtPyre_2F_Text_LukePostBattle::
# 92 "data/maps/MtPyre_2F/scripts.pory"
	.string "LUKE: Well, we lost but that's okay!\n"
	.string "I'm right here by your side.\l"
	.string "We'll make it through this dare!$"

MtPyre_2F_Text_LukeNotEnoughMons::
# 98 "data/maps/MtPyre_2F/scripts.pory"
	.string "LUKE: If you want to take me on,\n"
	.string "bring some more POKéMON.\p"
	.string "If you don't, I won't be able to show\n"
	.string "off to my girl how cool I am!$"

MtPyre_2F_Text_DezIntro::
# 105 "data/maps/MtPyre_2F/scripts.pory"
	.string "DEZ: I came here on a dare with my\n"
	.string "boyfriend.\p"
	.string "It's really scary, but I'm with my\n"
	.string "boyfriend. It's okay.\p"
	.string "I know! I'll get my boyfriend to look\n"
	.string "cool by beating you!$"

MtPyre_2F_Text_DezDefeat::
# 114 "data/maps/MtPyre_2F/scripts.pory"
	.string "DEZ: Waaaah! I'm scared!$"

MtPyre_2F_Text_DezPostBattle::
# 118 "data/maps/MtPyre_2F/scripts.pory"
	.string "DEZ: We're lovey-dovey, so we don't\n"
	.string "care if we lose!$"

MtPyre_2F_Text_DezNotEnoughMons::
# 123 "data/maps/MtPyre_2F/scripts.pory"
	.string "DEZ: If you want to challenge us, you\n"
	.string "should bring at least two POKéMON.\p"
	.string "My boyfriend's strong.\n"
	.string "Just one POKéMON won't do at all.$"

MtPyre_2F_Text_LeahIntro::
# 130 "data/maps/MtPyre_2F/scripts.pory"
	.string "You are an unfamiliar sight…\n"
	.string "Depart before anything befalls you!$"

MtPyre_2F_Text_LeahDefeat::
# 135 "data/maps/MtPyre_2F/scripts.pory"
	.string "Hmm…\n"
	.string "You're durable.$"

MtPyre_2F_Text_LeahPostBattle::
# 140 "data/maps/MtPyre_2F/scripts.pory"
	.string "Our family has been TRAINERS here\n"
	.string "since my great-grandmother's time…\p"
	.string "It is my duty to protect this\n"
	.string "mountain…$"

MtPyre_2F_Text_ZanderIntro::
# 147 "data/maps/MtPyre_2F/scripts.pory"
	.string "Kiyaaaaah!\n"
	.string "I'm terrified!$"

MtPyre_2F_Text_ZanderDefeat::
# 152 "data/maps/MtPyre_2F/scripts.pory"
	.string "Nooooooo!\n"
	.string "I lost my wits!$"

MtPyre_2F_Text_ZanderPostBattle::
# 157 "data/maps/MtPyre_2F/scripts.pory"
	.string "I get freaked out every time I see\n"
	.string "anything move…\p"
	.string "I shouldn't have come here to train…$"
