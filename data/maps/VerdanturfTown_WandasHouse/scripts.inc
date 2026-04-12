# 1 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 2 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_MapScripts::
# 3 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.byte 0
# 4 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 5 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 6 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_EventScript_Wally::
# 7 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
# 4 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
# 8 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	lock
# 9 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
# 5 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
# 10 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	faceplayer
# 11 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
# 6 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
# 12 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	goto_if_set FLAG_WALLY_SPEECH, VerdanturfTown_WandasHouse_EventScript_Wally_2
# 13 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_EventScript_Wally_1:
# 14 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
# 9 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
# 15 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	msgbox VerdanturfTown_WandasHouse_Text_StrongerSpeech, MSGBOX_DEFAULT
# 16 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
# 10 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
# 17 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	setflag FLAG_WALLY_SPEECH
# 18 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
# 11 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
# 19 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	release
# 20 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	end
# 21 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 22 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_EventScript_Wally_2:
# 23 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
# 7 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
# 24 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	goto VerdanturfTown_WandasHouse_EventScript_WallyShortSpeech
# 25 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	goto VerdanturfTown_WandasHouse_EventScript_Wally_1
# 26 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 27 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 28 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_EventScript_WallyShortSpeech::
# 29 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
# 16 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
# 30 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	msgbox VerdanturfTown_WandasHouse_Text_StrongerSpeechShort, MSGBOX_DEFAULT
# 31 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
# 17 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
# 32 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	release
# 33 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	end
# 34 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 35 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 36 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_EventScript_WallysUncle::
# 37 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
# 22 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
# 38 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	lock
# 39 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
# 23 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
# 40 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	faceplayer
# 41 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
# 24 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
# 42 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	goto_if_set FLAG_DEFEATED_WALLY_VICTORY_ROAD, VerdanturfTown_WandasHouse_EventScript_WallysUncle_2
# 43 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_EventScript_WallysUncle_1:
# 44 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
# 27 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
# 45 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	goto_if_set FLAG_DEFEATED_LAVARIDGE_GYM, VerdanturfTown_WandasHouse_EventScript_WallysUncle_5
# 46 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_EventScript_WallysUncle_4:
# 47 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
# 30 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
# 48 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	msgbox VerdanturfTown_WandasHouse_Text_WallysNextDoor, MSGBOX_DEFAULT
# 49 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
# 31 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
# 50 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	release
# 51 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	end
# 52 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 53 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_EventScript_WallysUncle_2:
# 54 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
# 25 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
# 55 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	goto VerdanturfTown_WandasHouse_EventScript_WallysUncleEverGrande
# 56 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	goto VerdanturfTown_WandasHouse_EventScript_WallysUncle_1
# 57 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 58 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_EventScript_WallysUncle_5:
# 59 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
# 28 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
# 60 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	goto VerdanturfTown_WandasHouse_EventScript_WallysUncleSlippedOff
# 61 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	goto VerdanturfTown_WandasHouse_EventScript_WallysUncle_4
# 62 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 63 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 64 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_EventScript_WallysUncleSlippedOff::
# 65 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
# 36 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
# 66 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	msgbox VerdanturfTown_WandasHouse_Text_WallySlippedOff, MSGBOX_DEFAULT
# 67 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
# 37 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
# 68 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	release
# 69 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	end
# 70 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 71 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 72 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_EventScript_WallysUncleEverGrande::
# 73 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
# 42 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
# 74 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	msgbox VerdanturfTown_WandasHouse_Text_WallyGoneThatFar, MSGBOX_DEFAULT
# 75 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
# 43 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
# 76 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	release
# 77 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	end
# 78 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 79 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 80 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_EventScript_WandasBoyfriend::
# 81 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
# 48 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
# 82 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	msgbox VerdanturfTown_WandasHouse_Text_CanSeeGirlfriendEveryDay, MSGBOX_NPC
# 83 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	end
# 84 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 85 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 86 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_EventScript_Wanda::
# 87 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
# 53 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
# 88 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	lock
# 89 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
# 54 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
# 90 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	faceplayer
# 91 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
# 55 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
# 92 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	goto_if_set FLAG_DEFEATED_LAVARIDGE_GYM, VerdanturfTown_WandasHouse_EventScript_Wanda_2
# 93 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_EventScript_Wanda_1:
# 94 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
# 58 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
# 95 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	goto_if_set FLAG_DEFEATED_WALLY_MAUVILLE, VerdanturfTown_WandasHouse_EventScript_Wanda_5
# 96 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_EventScript_Wanda_4:
# 97 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
# 61 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
# 98 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	msgbox VerdanturfTown_WandasHouse_Text_DontWorryAboutWally, MSGBOX_DEFAULT
# 99 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
# 62 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
# 100 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	release
# 101 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	end
# 102 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 103 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_EventScript_Wanda_2:
# 104 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
# 56 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
# 105 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	goto VerdanturfTown_WandasHouse_EventScript_WandaDontWorry
# 106 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	goto VerdanturfTown_WandasHouse_EventScript_Wanda_1
# 107 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 108 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_EventScript_Wanda_5:
# 109 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
# 59 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
# 110 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	goto VerdanturfTown_WandasHouse_EventScript_MeetWanda
# 111 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	goto VerdanturfTown_WandasHouse_EventScript_Wanda_4
# 112 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 113 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 114 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_EventScript_MeetWanda::
# 115 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
# 67 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
# 116 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	msgbox VerdanturfTown_WandasHouse_Text_MeetWanda, MSGBOX_DEFAULT
# 117 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
# 68 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
# 118 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	release
# 119 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	end
# 120 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 121 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 122 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_EventScript_WandaDontWorry::
# 123 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
# 73 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
# 124 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	msgbox VerdanturfTown_WandasHouse_Text_DontWorryAboutWally, MSGBOX_DEFAULT
# 125 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
# 74 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
# 126 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	release
# 127 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	end
# 128 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 129 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 130 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_EventScript_WallysAunt::
# 131 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
# 79 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
# 132 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	lock
# 133 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
# 80 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
# 134 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	faceplayer
# 135 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
# 81 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
# 136 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	goto_if_set FLAG_DEFEATED_WALLY_VICTORY_ROAD, VerdanturfTown_WandasHouse_EventScript_WallysAunt_2
# 137 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_EventScript_WallysAunt_1:
# 138 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
# 84 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
# 139 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	goto_if_set FLAG_DEFEATED_LAVARIDGE_GYM, VerdanturfTown_WandasHouse_EventScript_WallysAunt_5
# 140 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_EventScript_WallysAunt_4:
# 141 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
# 87 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
# 142 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	goto_if_set FLAG_RUSTURF_TUNNEL_OPENED, VerdanturfTown_WandasHouse_EventScript_WallysAunt_8
# 143 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_EventScript_WallysAunt_7:
# 144 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
# 90 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
# 145 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	msgbox VerdanturfTown_WandasHouse_Text_DaughtersBoyfriendDriven, MSGBOX_DEFAULT
# 146 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
# 91 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
# 147 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	release
# 148 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	end
# 149 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 150 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_EventScript_WallysAunt_2:
# 151 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
# 82 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
# 152 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	goto VerdanturfTown_WandasHouse_EventScript_WallysAuntEverGrande
# 153 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	goto VerdanturfTown_WandasHouse_EventScript_WallysAunt_1
# 154 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 155 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_EventScript_WallysAunt_5:
# 156 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
# 85 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
# 157 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	goto VerdanturfTown_WandasHouse_EventScript_WallysAuntAnythingHappened
# 158 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	goto VerdanturfTown_WandasHouse_EventScript_WallysAunt_4
# 159 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 160 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_EventScript_WallysAunt_8:
# 161 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
# 88 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
# 162 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	goto VerdanturfTown_WandasHouse_EventScript_WallysAuntTunnelOpen
# 163 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	goto VerdanturfTown_WandasHouse_EventScript_WallysAunt_7
# 164 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 165 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 166 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_EventScript_WallysAuntTunnelOpen::
# 167 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
# 96 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
# 168 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	msgbox VerdanturfTown_WandasHouse_Text_DaughtersBoyfriendWasDigging, MSGBOX_DEFAULT
# 169 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
# 97 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
# 170 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	release
# 171 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	end
# 172 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 173 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 174 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_EventScript_WallysAuntAnythingHappened::
# 175 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
# 102 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
# 176 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	msgbox VerdanturfTown_WandasHouse_Text_IfAnythingHappenedToWally, MSGBOX_DEFAULT
# 177 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
# 103 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
# 178 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	release
# 179 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	end
# 180 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 181 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 182 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_EventScript_WallysAuntEverGrande::
# 183 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
# 108 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
# 184 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	msgbox VerdanturfTown_WandasHouse_Text_WallyWasInEverGrande, MSGBOX_DEFAULT
# 185 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
# 109 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
# 186 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	release
# 187 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	end
# 188 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 189 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 190 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_Text_StrongerSpeech::
# 191 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
# 113 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
# 192 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "WALLY: I lost to you, {PLAYER}, but I'm\n"
# 193 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "not feeling down anymore.\p"
# 194 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "Because I have a new purpose in life.\n"
# 195 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "Together with my RALTS, I'm going\l"
# 196 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "to challenge POKéMON GYMS and become\l"
# 197 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "a great TRAINER.\p"
# 198 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "Please watch me, {PLAYER}.\n"
# 199 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "I'm going to be stronger than you.\p"
# 200 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "When I do, I'm going to challenge you\n"
# 201 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "to another battle.$"
# 202 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 203 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_Text_StrongerSpeechShort::
# 204 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
# 126 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
# 205 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "WALLY: Please watch me, {PLAYER}.\n"
# 206 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "I'm going to get stronger than you.\p"
# 207 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "When I do, I'm going to challenge you\n"
# 208 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "to another battle.$"
# 209 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 210 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_Text_WallysNextDoor::
# 211 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
# 133 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
# 212 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "UNCLE: Oh! {PLAYER}{KUN}!\n"
# 213 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "WALLY's next door.\p"
# 214 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "But, boy, there's something I have to\n"
# 215 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "tell you.\p"
# 216 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "This natural environment is doing\n"
# 217 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "wonders for WALLY's health.\p"
# 218 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "Maybe it's not just the environment.\n"
# 219 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "It could be POKéMON that are giving\l"
# 220 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "the boy hope.$"
# 221 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 222 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_Text_WallySlippedOff::
# 223 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
# 145 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
# 224 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "WALLY's gone away…\n"
# 225 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "He slipped off on his own…$"
# 226 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 227 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_Text_WallyGoneThatFar::
# 228 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
# 150 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
# 229 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "UNCLE: Is that right?\n"
# 230 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "WALLY's gone away that far all by\l"
# 231 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "himself…\p"
# 232 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "Well, I have to give him credit--he is\n"
# 233 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "my little brother's son.$"
# 234 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 235 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_Text_MeetWanda::
# 236 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
# 158 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
# 237 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "WANDA: You are?\n"
# 238 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "Oh, right, I get it!\p"
# 239 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "You're the {PLAYER} who WALLY was\n"
# 240 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "telling me about.\p"
# 241 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "I'm WALLY's cousin.\n"
# 242 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "Glad to meet you!\p"
# 243 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "I think WALLY's become a lot more lively\n"
# 244 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "and healthy since he came here.$"
# 245 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 246 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_Text_DontWorryAboutWally::
# 247 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
# 169 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
# 248 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "WANDA: Don't worry about WALLY.\n"
# 249 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "He'll be just fine.\p"
# 250 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "I know my little cousin, and he has\n"
# 251 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "POKéMON with him, too.$"
# 252 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 253 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_Text_CanSeeGirlfriendEveryDay::
# 254 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
# 176 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
# 255 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "Thanks to you, I can see my girlfriend\n"
# 256 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "every day.\l"
# 257 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "Happy? You bet I am!$"
# 258 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 259 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_Text_DaughtersBoyfriendDriven::
# 260 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
# 182 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
# 261 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "My daughter's boyfriend is a very\n"
# 262 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "driven and passionate sort of person.\p"
# 263 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "He's been digging a tunnel nonstop\n"
# 264 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "just so he can see my daughter.\p"
# 265 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "My daughter's a little concerned,\n"
# 266 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "so she goes out to the tunnel a lot.$"
# 267 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 268 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_Text_DaughtersBoyfriendWasDigging::
# 269 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
# 191 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
# 270 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "It's amazing. My daughter's boyfriend\n"
# 271 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "was digging the tunnel by hand!\p"
# 272 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "It's so incredible!$"
# 273 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 274 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_Text_IfAnythingHappenedToWally::
# 275 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
# 197 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
# 276 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "If anything were to happen to WALLY,\n"
# 277 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "I would never be able to look his\l"
# 278 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "parents in PETALBURG in the eye…$"
# 279 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 280 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_Text_WallyWasInEverGrande::
# 281 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
# 203 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
# 282 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "WALLY was in EVER GRANDE?\p"
# 283 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "His parents in PETALBURG would be\n"
# 284 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "astonished to hear that!$"
