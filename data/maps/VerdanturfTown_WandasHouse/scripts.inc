VerdanturfTown_WandasHouse_MapScripts::
	.byte 0


VerdanturfTown_WandasHouse_EventScript_Wally::
# 4 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	lock
# 5 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	faceplayer
# 6 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	goto_if_set FLAG_WALLY_SPEECH, VerdanturfTown_WandasHouse_EventScript_Wally_2
VerdanturfTown_WandasHouse_EventScript_Wally_1:
# 9 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	msgbox VerdanturfTown_WandasHouse_Text_StrongerSpeech, MSGBOX_DEFAULT
# 10 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	setflag FLAG_WALLY_SPEECH
# 11 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	release
	end

VerdanturfTown_WandasHouse_EventScript_Wally_2:
# 7 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	goto VerdanturfTown_WandasHouse_EventScript_WallyShortSpeech
	goto VerdanturfTown_WandasHouse_EventScript_Wally_1


VerdanturfTown_WandasHouse_EventScript_WallyShortSpeech::
# 16 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	msgbox VerdanturfTown_WandasHouse_Text_StrongerSpeechShort, MSGBOX_DEFAULT
# 17 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	release
	end


VerdanturfTown_WandasHouse_EventScript_WallysUncle::
# 22 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	lock
# 23 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	faceplayer
# 24 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	goto_if_set FLAG_DEFEATED_WALLY_VICTORY_ROAD, VerdanturfTown_WandasHouse_EventScript_WallysUncle_2
VerdanturfTown_WandasHouse_EventScript_WallysUncle_1:
# 27 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	goto_if_set FLAG_DEFEATED_LAVARIDGE_GYM, VerdanturfTown_WandasHouse_EventScript_WallysUncle_5
VerdanturfTown_WandasHouse_EventScript_WallysUncle_4:
# 30 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	msgbox VerdanturfTown_WandasHouse_Text_WallysNextDoor, MSGBOX_DEFAULT
# 31 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	release
	end

VerdanturfTown_WandasHouse_EventScript_WallysUncle_2:
# 25 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	goto VerdanturfTown_WandasHouse_EventScript_WallysUncleEverGrande
	goto VerdanturfTown_WandasHouse_EventScript_WallysUncle_1

VerdanturfTown_WandasHouse_EventScript_WallysUncle_5:
# 28 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	goto VerdanturfTown_WandasHouse_EventScript_WallysUncleSlippedOff
	goto VerdanturfTown_WandasHouse_EventScript_WallysUncle_4


VerdanturfTown_WandasHouse_EventScript_WallysUncleSlippedOff::
# 36 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	msgbox VerdanturfTown_WandasHouse_Text_WallySlippedOff, MSGBOX_DEFAULT
# 37 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	release
	end


VerdanturfTown_WandasHouse_EventScript_WallysUncleEverGrande::
# 42 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	msgbox VerdanturfTown_WandasHouse_Text_WallyGoneThatFar, MSGBOX_DEFAULT
# 43 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	release
	end


VerdanturfTown_WandasHouse_EventScript_WandasBoyfriend::
# 48 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	msgbox VerdanturfTown_WandasHouse_Text_CanSeeGirlfriendEveryDay, MSGBOX_NPC
	end


VerdanturfTown_WandasHouse_EventScript_Wanda::
# 53 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	lock
# 54 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	faceplayer
# 55 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	goto_if_set FLAG_DEFEATED_LAVARIDGE_GYM, VerdanturfTown_WandasHouse_EventScript_Wanda_2
VerdanturfTown_WandasHouse_EventScript_Wanda_1:
# 58 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	goto_if_set FLAG_DEFEATED_WALLY_MAUVILLE, VerdanturfTown_WandasHouse_EventScript_Wanda_5
VerdanturfTown_WandasHouse_EventScript_Wanda_4:
# 61 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	msgbox VerdanturfTown_WandasHouse_Text_DontWorryAboutWally, MSGBOX_DEFAULT
# 62 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	release
	end

VerdanturfTown_WandasHouse_EventScript_Wanda_2:
# 56 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	goto VerdanturfTown_WandasHouse_EventScript_WandaDontWorry
	goto VerdanturfTown_WandasHouse_EventScript_Wanda_1

VerdanturfTown_WandasHouse_EventScript_Wanda_5:
# 59 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	goto VerdanturfTown_WandasHouse_EventScript_MeetWanda
	goto VerdanturfTown_WandasHouse_EventScript_Wanda_4


VerdanturfTown_WandasHouse_EventScript_MeetWanda::
# 67 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	msgbox VerdanturfTown_WandasHouse_Text_MeetWanda, MSGBOX_DEFAULT
# 68 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	release
	end


VerdanturfTown_WandasHouse_EventScript_WandaDontWorry::
# 73 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	msgbox VerdanturfTown_WandasHouse_Text_DontWorryAboutWally, MSGBOX_DEFAULT
# 74 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	release
	end


VerdanturfTown_WandasHouse_EventScript_WallysAunt::
# 79 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	lock
# 80 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	faceplayer
# 81 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	goto_if_set FLAG_DEFEATED_WALLY_VICTORY_ROAD, VerdanturfTown_WandasHouse_EventScript_WallysAunt_2
VerdanturfTown_WandasHouse_EventScript_WallysAunt_1:
# 84 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	goto_if_set FLAG_DEFEATED_LAVARIDGE_GYM, VerdanturfTown_WandasHouse_EventScript_WallysAunt_5
VerdanturfTown_WandasHouse_EventScript_WallysAunt_4:
# 87 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	goto_if_set FLAG_RUSTURF_TUNNEL_OPENED, VerdanturfTown_WandasHouse_EventScript_WallysAunt_8
VerdanturfTown_WandasHouse_EventScript_WallysAunt_7:
# 90 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	msgbox VerdanturfTown_WandasHouse_Text_DaughtersBoyfriendDriven, MSGBOX_DEFAULT
# 91 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	release
	end

VerdanturfTown_WandasHouse_EventScript_WallysAunt_2:
# 82 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	goto VerdanturfTown_WandasHouse_EventScript_WallysAuntEverGrande
	goto VerdanturfTown_WandasHouse_EventScript_WallysAunt_1

VerdanturfTown_WandasHouse_EventScript_WallysAunt_5:
# 85 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	goto VerdanturfTown_WandasHouse_EventScript_WallysAuntAnythingHappened
	goto VerdanturfTown_WandasHouse_EventScript_WallysAunt_4

VerdanturfTown_WandasHouse_EventScript_WallysAunt_8:
# 88 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	goto VerdanturfTown_WandasHouse_EventScript_WallysAuntTunnelOpen
	goto VerdanturfTown_WandasHouse_EventScript_WallysAunt_7


VerdanturfTown_WandasHouse_EventScript_WallysAuntTunnelOpen::
# 96 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	msgbox VerdanturfTown_WandasHouse_Text_DaughtersBoyfriendWasDigging, MSGBOX_DEFAULT
# 97 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	release
	end


VerdanturfTown_WandasHouse_EventScript_WallysAuntAnythingHappened::
# 102 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	msgbox VerdanturfTown_WandasHouse_Text_IfAnythingHappenedToWally, MSGBOX_DEFAULT
# 103 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	release
	end


VerdanturfTown_WandasHouse_EventScript_WallysAuntEverGrande::
# 108 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	msgbox VerdanturfTown_WandasHouse_Text_WallyWasInEverGrande, MSGBOX_DEFAULT
# 109 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	release
	end


VerdanturfTown_WandasHouse_Text_StrongerSpeech::
# 113 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "WALLY: I lost to you, {PLAYER}, but I'm\n"
	.string "not feeling down anymore.\p"
	.string "Because I have a new purpose in life.\n"
	.string "Together with my RALTS, I'm going\l"
	.string "to challenge POKéMON GYMS and become\l"
	.string "a great TRAINER.\p"
	.string "Please watch me, {PLAYER}.\n"
	.string "I'm going to be stronger than you.\p"
	.string "When I do, I'm going to challenge you\n"
	.string "to another battle.$"

VerdanturfTown_WandasHouse_Text_StrongerSpeechShort::
# 126 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "WALLY: Please watch me, {PLAYER}.\n"
	.string "I'm going to get stronger than you.\p"
	.string "When I do, I'm going to challenge you\n"
	.string "to another battle.$"

VerdanturfTown_WandasHouse_Text_WallysNextDoor::
# 133 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "UNCLE: Oh! {PLAYER}{KUN}!\n"
	.string "WALLY's next door.\p"
	.string "But, boy, there's something I have to\n"
	.string "tell you.\p"
	.string "This natural environment is doing\n"
	.string "wonders for WALLY's health.\p"
	.string "Maybe it's not just the environment.\n"
	.string "It could be POKéMON that are giving\l"
	.string "the boy hope.$"

VerdanturfTown_WandasHouse_Text_WallySlippedOff::
# 145 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "WALLY's gone away…\n"
	.string "He slipped off on his own…$"

VerdanturfTown_WandasHouse_Text_WallyGoneThatFar::
# 150 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "UNCLE: Is that right?\n"
	.string "WALLY's gone away that far all by\l"
	.string "himself…\p"
	.string "Well, I have to give him credit--he is\n"
	.string "my little brother's son.$"

VerdanturfTown_WandasHouse_Text_MeetWanda::
# 158 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "WANDA: You are?\n"
	.string "Oh, right, I get it!\p"
	.string "You're the {PLAYER} who WALLY was\n"
	.string "telling me about.\p"
	.string "I'm WALLY's cousin.\n"
	.string "Glad to meet you!\p"
	.string "I think WALLY's become a lot more lively\n"
	.string "and healthy since he came here.$"

VerdanturfTown_WandasHouse_Text_DontWorryAboutWally::
# 169 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "WANDA: Don't worry about WALLY.\n"
	.string "He'll be just fine.\p"
	.string "I know my little cousin, and he has\n"
	.string "POKéMON with him, too.$"

VerdanturfTown_WandasHouse_Text_CanSeeGirlfriendEveryDay::
# 176 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "Thanks to you, I can see my girlfriend\n"
	.string "every day.\l"
	.string "Happy? You bet I am!$"

VerdanturfTown_WandasHouse_Text_DaughtersBoyfriendDriven::
# 182 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "My daughter's boyfriend is a very\n"
	.string "driven and passionate sort of person.\p"
	.string "He's been digging a tunnel nonstop\n"
	.string "just so he can see my daughter.\p"
	.string "My daughter's a little concerned,\n"
	.string "so she goes out to the tunnel a lot.$"

VerdanturfTown_WandasHouse_Text_DaughtersBoyfriendWasDigging::
# 191 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "It's amazing. My daughter's boyfriend\n"
	.string "was digging the tunnel by hand!\p"
	.string "It's so incredible!$"

VerdanturfTown_WandasHouse_Text_IfAnythingHappenedToWally::
# 197 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "If anything were to happen to WALLY,\n"
	.string "I would never be able to look his\l"
	.string "parents in PETALBURG in the eye…$"

VerdanturfTown_WandasHouse_Text_WallyWasInEverGrande::
# 203 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "WALLY was in EVER GRANDE?\p"
	.string "His parents in PETALBURG would be\n"
	.string "astonished to hear that!$"
