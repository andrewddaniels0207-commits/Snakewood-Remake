# 1 "data/maps/VerdanturfTown/scripts.pory"

# 2 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_MapScripts::
# 3 "data/maps/VerdanturfTown/scripts.pory"
# 2 "data/maps/VerdanturfTown/scripts.pory"
# 4 "data/maps/VerdanturfTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, VerdanturfTown_OnTransition
# 5 "data/maps/VerdanturfTown/scripts.pory"
	.byte 0
# 6 "data/maps/VerdanturfTown/scripts.pory"

# 7 "data/maps/VerdanturfTown/scripts.pory"

# 8 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_OnTransition::
# 9 "data/maps/VerdanturfTown/scripts.pory"
# 6 "data/maps/VerdanturfTown/scripts.pory"
# 10 "data/maps/VerdanturfTown/scripts.pory"
	setflag FLAG_VISITED_VERDANTURF_TOWN
# 11 "data/maps/VerdanturfTown/scripts.pory"
# 7 "data/maps/VerdanturfTown/scripts.pory"
# 12 "data/maps/VerdanturfTown/scripts.pory"
	setvar VAR_CONTEST_HALL_STATE, 0
# 13 "data/maps/VerdanturfTown/scripts.pory"
	end
# 14 "data/maps/VerdanturfTown/scripts.pory"

# 15 "data/maps/VerdanturfTown/scripts.pory"

# 16 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_EventScript_Twin::
# 17 "data/maps/VerdanturfTown/scripts.pory"
# 12 "data/maps/VerdanturfTown/scripts.pory"
# 18 "data/maps/VerdanturfTown/scripts.pory"
	lock
# 19 "data/maps/VerdanturfTown/scripts.pory"
# 13 "data/maps/VerdanturfTown/scripts.pory"
# 20 "data/maps/VerdanturfTown/scripts.pory"
	faceplayer
# 21 "data/maps/VerdanturfTown/scripts.pory"
# 14 "data/maps/VerdanturfTown/scripts.pory"
# 22 "data/maps/VerdanturfTown/scripts.pory"
	goto_if_set FLAG_RUSTURF_TUNNEL_OPENED, VerdanturfTown_EventScript_Twin_2
# 23 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_EventScript_Twin_1:
# 24 "data/maps/VerdanturfTown/scripts.pory"
# 17 "data/maps/VerdanturfTown/scripts.pory"
# 25 "data/maps/VerdanturfTown/scripts.pory"
	msgbox VerdanturfTown_Text_ManTryingToDigTunnel, MSGBOX_DEFAULT
# 26 "data/maps/VerdanturfTown/scripts.pory"
# 18 "data/maps/VerdanturfTown/scripts.pory"
# 27 "data/maps/VerdanturfTown/scripts.pory"
	applymovement LOCALID_VERDANTURF_TWIN, Common_Movement_FaceOriginalDirection
# 28 "data/maps/VerdanturfTown/scripts.pory"
# 19 "data/maps/VerdanturfTown/scripts.pory"
# 29 "data/maps/VerdanturfTown/scripts.pory"
	waitmovement 0
# 30 "data/maps/VerdanturfTown/scripts.pory"
# 20 "data/maps/VerdanturfTown/scripts.pory"
# 31 "data/maps/VerdanturfTown/scripts.pory"
	release
# 32 "data/maps/VerdanturfTown/scripts.pory"
	end
# 33 "data/maps/VerdanturfTown/scripts.pory"

# 34 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_EventScript_Twin_2:
# 35 "data/maps/VerdanturfTown/scripts.pory"
# 15 "data/maps/VerdanturfTown/scripts.pory"
# 36 "data/maps/VerdanturfTown/scripts.pory"
	goto VerdanturfTown_EventScript_TwinTunnelOpen
# 37 "data/maps/VerdanturfTown/scripts.pory"
	goto VerdanturfTown_EventScript_Twin_1
# 38 "data/maps/VerdanturfTown/scripts.pory"

# 39 "data/maps/VerdanturfTown/scripts.pory"

# 40 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_EventScript_TwinTunnelOpen::
# 41 "data/maps/VerdanturfTown/scripts.pory"
# 25 "data/maps/VerdanturfTown/scripts.pory"
# 42 "data/maps/VerdanturfTown/scripts.pory"
	msgbox VerdanturfTown_Text_ManDugTunnelForLove, MSGBOX_DEFAULT
# 43 "data/maps/VerdanturfTown/scripts.pory"
# 26 "data/maps/VerdanturfTown/scripts.pory"
# 44 "data/maps/VerdanturfTown/scripts.pory"
	applymovement LOCALID_VERDANTURF_TWIN, Common_Movement_FaceOriginalDirection
# 45 "data/maps/VerdanturfTown/scripts.pory"
# 27 "data/maps/VerdanturfTown/scripts.pory"
# 46 "data/maps/VerdanturfTown/scripts.pory"
	waitmovement 0
# 47 "data/maps/VerdanturfTown/scripts.pory"
# 28 "data/maps/VerdanturfTown/scripts.pory"
# 48 "data/maps/VerdanturfTown/scripts.pory"
	release
# 49 "data/maps/VerdanturfTown/scripts.pory"
	end
# 50 "data/maps/VerdanturfTown/scripts.pory"

# 51 "data/maps/VerdanturfTown/scripts.pory"

# 52 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_EventScript_Man::
# 53 "data/maps/VerdanturfTown/scripts.pory"
# 33 "data/maps/VerdanturfTown/scripts.pory"
# 54 "data/maps/VerdanturfTown/scripts.pory"
	msgbox VerdanturfTown_Text_AirCleanHere, MSGBOX_NPC
# 55 "data/maps/VerdanturfTown/scripts.pory"
	end
# 56 "data/maps/VerdanturfTown/scripts.pory"

# 57 "data/maps/VerdanturfTown/scripts.pory"

# 58 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_EventScript_Camper::
# 59 "data/maps/VerdanturfTown/scripts.pory"
# 38 "data/maps/VerdanturfTown/scripts.pory"
# 60 "data/maps/VerdanturfTown/scripts.pory"
	msgbox VerdanturfTown_Text_MakeBattleTentDebut, MSGBOX_NPC
# 61 "data/maps/VerdanturfTown/scripts.pory"
	end
# 62 "data/maps/VerdanturfTown/scripts.pory"

# 63 "data/maps/VerdanturfTown/scripts.pory"

# 64 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_EventScript_Boy::
# 65 "data/maps/VerdanturfTown/scripts.pory"
# 43 "data/maps/VerdanturfTown/scripts.pory"
# 66 "data/maps/VerdanturfTown/scripts.pory"
	lock
# 67 "data/maps/VerdanturfTown/scripts.pory"
# 44 "data/maps/VerdanturfTown/scripts.pory"
# 68 "data/maps/VerdanturfTown/scripts.pory"
	faceplayer
# 69 "data/maps/VerdanturfTown/scripts.pory"
# 45 "data/maps/VerdanturfTown/scripts.pory"
# 70 "data/maps/VerdanturfTown/scripts.pory"
	goto_if_set FLAG_RUSTURF_TUNNEL_OPENED, VerdanturfTown_EventScript_Boy_2
# 71 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_EventScript_Boy_1:
# 72 "data/maps/VerdanturfTown/scripts.pory"
# 48 "data/maps/VerdanturfTown/scripts.pory"
# 73 "data/maps/VerdanturfTown/scripts.pory"
	msgbox VerdanturfTown_Text_GuyTryingToBustThroughCave, MSGBOX_DEFAULT
# 74 "data/maps/VerdanturfTown/scripts.pory"
# 49 "data/maps/VerdanturfTown/scripts.pory"
# 75 "data/maps/VerdanturfTown/scripts.pory"
	release
# 76 "data/maps/VerdanturfTown/scripts.pory"
	end
# 77 "data/maps/VerdanturfTown/scripts.pory"

# 78 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_EventScript_Boy_2:
# 79 "data/maps/VerdanturfTown/scripts.pory"
# 46 "data/maps/VerdanturfTown/scripts.pory"
# 80 "data/maps/VerdanturfTown/scripts.pory"
	goto VerdanturfTown_EventScript_BoyTunnelOpen
# 81 "data/maps/VerdanturfTown/scripts.pory"
	goto VerdanturfTown_EventScript_Boy_1
# 82 "data/maps/VerdanturfTown/scripts.pory"

# 83 "data/maps/VerdanturfTown/scripts.pory"

# 84 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_EventScript_BoyTunnelOpen::
# 85 "data/maps/VerdanturfTown/scripts.pory"
# 54 "data/maps/VerdanturfTown/scripts.pory"
# 86 "data/maps/VerdanturfTown/scripts.pory"
	msgbox VerdanturfTown_Text_EasyToGetToRustboroNow, MSGBOX_DEFAULT
# 87 "data/maps/VerdanturfTown/scripts.pory"
# 55 "data/maps/VerdanturfTown/scripts.pory"
# 88 "data/maps/VerdanturfTown/scripts.pory"
	release
# 89 "data/maps/VerdanturfTown/scripts.pory"
	end
# 90 "data/maps/VerdanturfTown/scripts.pory"

# 91 "data/maps/VerdanturfTown/scripts.pory"

# 92 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_EventScript_TownSign::
# 93 "data/maps/VerdanturfTown/scripts.pory"
# 60 "data/maps/VerdanturfTown/scripts.pory"
# 94 "data/maps/VerdanturfTown/scripts.pory"
	msgbox VerdanturfTown_Text_TownSign, MSGBOX_SIGN
# 95 "data/maps/VerdanturfTown/scripts.pory"
	end
# 96 "data/maps/VerdanturfTown/scripts.pory"

# 97 "data/maps/VerdanturfTown/scripts.pory"

# 98 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_EventScript_WandasHouseSign::
# 99 "data/maps/VerdanturfTown/scripts.pory"
# 65 "data/maps/VerdanturfTown/scripts.pory"
# 100 "data/maps/VerdanturfTown/scripts.pory"
	msgbox VerdanturfTown_Text_WandasHouse, MSGBOX_SIGN
# 101 "data/maps/VerdanturfTown/scripts.pory"
	end
# 102 "data/maps/VerdanturfTown/scripts.pory"

# 103 "data/maps/VerdanturfTown/scripts.pory"

# 104 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_EventScript_BattleTentSign::
# 105 "data/maps/VerdanturfTown/scripts.pory"
# 70 "data/maps/VerdanturfTown/scripts.pory"
# 106 "data/maps/VerdanturfTown/scripts.pory"
	msgbox VerdanturfTown_Text_BattleTentSign, MSGBOX_SIGN
# 107 "data/maps/VerdanturfTown/scripts.pory"
	end
# 108 "data/maps/VerdanturfTown/scripts.pory"

# 109 "data/maps/VerdanturfTown/scripts.pory"

# 110 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_EventScript_RusturfTunnelSign::
# 111 "data/maps/VerdanturfTown/scripts.pory"
# 75 "data/maps/VerdanturfTown/scripts.pory"
# 112 "data/maps/VerdanturfTown/scripts.pory"
	msgbox VerdanturfTown_Text_RusturfTunnelSign, MSGBOX_SIGN
# 113 "data/maps/VerdanturfTown/scripts.pory"
	end
# 114 "data/maps/VerdanturfTown/scripts.pory"

# 115 "data/maps/VerdanturfTown/scripts.pory"

# 116 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_Text_ManTryingToDigTunnel::
# 117 "data/maps/VerdanturfTown/scripts.pory"
# 79 "data/maps/VerdanturfTown/scripts.pory"
# 118 "data/maps/VerdanturfTown/scripts.pory"
	.string "My papa told me.\p"
# 119 "data/maps/VerdanturfTown/scripts.pory"
	.string "He says this tunnel is full of\n"
# 120 "data/maps/VerdanturfTown/scripts.pory"
	.string "timid POKéMON.\p"
# 121 "data/maps/VerdanturfTown/scripts.pory"
	.string "They get all scared of loud noise and\n"
# 122 "data/maps/VerdanturfTown/scripts.pory"
	.string "make a big uproar.\p"
# 123 "data/maps/VerdanturfTown/scripts.pory"
	.string "So they had to stop the big tunnel\n"
# 124 "data/maps/VerdanturfTown/scripts.pory"
	.string "project.\p"
# 125 "data/maps/VerdanturfTown/scripts.pory"
	.string "But there's one man. He's trying to dig\n"
# 126 "data/maps/VerdanturfTown/scripts.pory"
	.string "the tunnel by himself!$"
# 127 "data/maps/VerdanturfTown/scripts.pory"

# 128 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_Text_ManDugTunnelForLove::
# 129 "data/maps/VerdanturfTown/scripts.pory"
# 91 "data/maps/VerdanturfTown/scripts.pory"
# 130 "data/maps/VerdanturfTown/scripts.pory"
	.string "There was a man who dug a tunnel for\n"
# 131 "data/maps/VerdanturfTown/scripts.pory"
	.string "a lady he loved.\p"
# 132 "data/maps/VerdanturfTown/scripts.pory"
	.string "I don't really get it, but hey!$"
# 133 "data/maps/VerdanturfTown/scripts.pory"

# 134 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_Text_AirCleanHere::
# 135 "data/maps/VerdanturfTown/scripts.pory"
# 97 "data/maps/VerdanturfTown/scripts.pory"
# 136 "data/maps/VerdanturfTown/scripts.pory"
	.string "The way the winds blow, volcanic ash\n"
# 137 "data/maps/VerdanturfTown/scripts.pory"
	.string "is never blown in this direction.\p"
# 138 "data/maps/VerdanturfTown/scripts.pory"
	.string "The air is clean and delicious here.\n"
# 139 "data/maps/VerdanturfTown/scripts.pory"
	.string "Living here should do wonders for even\l"
# 140 "data/maps/VerdanturfTown/scripts.pory"
	.string "frail and sickly people.$"
# 141 "data/maps/VerdanturfTown/scripts.pory"

# 142 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_Text_MakeBattleTentDebut::
# 143 "data/maps/VerdanturfTown/scripts.pory"
# 105 "data/maps/VerdanturfTown/scripts.pory"
# 144 "data/maps/VerdanturfTown/scripts.pory"
	.string "My POKéMON and I, we've been riding\n"
# 145 "data/maps/VerdanturfTown/scripts.pory"
	.string "a hot winning streak.\p"
# 146 "data/maps/VerdanturfTown/scripts.pory"
	.string "So I decided to make my BATTLE TENT\n"
# 147 "data/maps/VerdanturfTown/scripts.pory"
	.string "debut in this town.$"
# 148 "data/maps/VerdanturfTown/scripts.pory"

# 149 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_Text_GuyTryingToBustThroughCave::
# 150 "data/maps/VerdanturfTown/scripts.pory"
# 112 "data/maps/VerdanturfTown/scripts.pory"
# 151 "data/maps/VerdanturfTown/scripts.pory"
	.string "Did you see the cave next to the\n"
# 152 "data/maps/VerdanturfTown/scripts.pory"
	.string "POKéMON MART?\p"
# 153 "data/maps/VerdanturfTown/scripts.pory"
	.string "There's a guy in there who's trying to\n"
# 154 "data/maps/VerdanturfTown/scripts.pory"
	.string "bust up boulders so he can bust out\l"
# 155 "data/maps/VerdanturfTown/scripts.pory"
	.string "through to the other side.\p"
# 156 "data/maps/VerdanturfTown/scripts.pory"
	.string "It'd be great if we could go through…\n"
# 157 "data/maps/VerdanturfTown/scripts.pory"
	.string "It'll make it easy to visit RUSTBORO.$"
# 158 "data/maps/VerdanturfTown/scripts.pory"

# 159 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_Text_EasyToGetToRustboroNow::
# 160 "data/maps/VerdanturfTown/scripts.pory"
# 122 "data/maps/VerdanturfTown/scripts.pory"
# 161 "data/maps/VerdanturfTown/scripts.pory"
	.string "That cave next to the POKéMON MART\n"
# 162 "data/maps/VerdanturfTown/scripts.pory"
	.string "is now a tunnel to the other side.\p"
# 163 "data/maps/VerdanturfTown/scripts.pory"
	.string "It's great--it's easy to go shop for\n"
# 164 "data/maps/VerdanturfTown/scripts.pory"
	.string "new DEVON products in RUSTBORO now.$"
# 165 "data/maps/VerdanturfTown/scripts.pory"

# 166 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_Text_TownSign::
# 167 "data/maps/VerdanturfTown/scripts.pory"
# 129 "data/maps/VerdanturfTown/scripts.pory"
# 168 "data/maps/VerdanturfTown/scripts.pory"
	.string "VERDANTURF TOWN\p"
# 169 "data/maps/VerdanturfTown/scripts.pory"
	.string "“The windswept highlands with the\n"
# 170 "data/maps/VerdanturfTown/scripts.pory"
	.string "sweet fragrance of grass.”$"
# 171 "data/maps/VerdanturfTown/scripts.pory"

# 172 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_Text_WandasHouse::
# 173 "data/maps/VerdanturfTown/scripts.pory"
# 135 "data/maps/VerdanturfTown/scripts.pory"
# 174 "data/maps/VerdanturfTown/scripts.pory"
	.string "WANDA'S HOUSE$"
# 175 "data/maps/VerdanturfTown/scripts.pory"

# 176 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_Text_BattleTentSign::
# 177 "data/maps/VerdanturfTown/scripts.pory"
# 139 "data/maps/VerdanturfTown/scripts.pory"
# 178 "data/maps/VerdanturfTown/scripts.pory"
	.string "BATTLE TENT VERDANTURF SITE\n"
# 179 "data/maps/VerdanturfTown/scripts.pory"
	.string "“Feast Your Eyes on Battles!”$"
# 180 "data/maps/VerdanturfTown/scripts.pory"

# 181 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_Text_RusturfTunnelSign::
# 182 "data/maps/VerdanturfTown/scripts.pory"
# 144 "data/maps/VerdanturfTown/scripts.pory"
# 183 "data/maps/VerdanturfTown/scripts.pory"
	.string "RUSTURF TUNNEL\n"
# 184 "data/maps/VerdanturfTown/scripts.pory"
	.string "“Linking RUSTBORO and VERDANTURF\p"
# 185 "data/maps/VerdanturfTown/scripts.pory"
	.string "“The tunnel project has been\n"
# 186 "data/maps/VerdanturfTown/scripts.pory"
	.string "canceled.”$"
