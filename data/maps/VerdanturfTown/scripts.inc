VerdanturfTown_MapScripts::
# 2 "data/maps/VerdanturfTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, VerdanturfTown_OnTransition
	.byte 0


VerdanturfTown_OnTransition::
# 6 "data/maps/VerdanturfTown/scripts.pory"
	setflag FLAG_VISITED_VERDANTURF_TOWN
# 7 "data/maps/VerdanturfTown/scripts.pory"
	setvar VAR_CONTEST_HALL_STATE, 0
	end


VerdanturfTown_EventScript_Twin::
# 12 "data/maps/VerdanturfTown/scripts.pory"
	lock
# 13 "data/maps/VerdanturfTown/scripts.pory"
	faceplayer
# 14 "data/maps/VerdanturfTown/scripts.pory"
	goto_if_set FLAG_RUSTURF_TUNNEL_OPENED, VerdanturfTown_EventScript_Twin_2
VerdanturfTown_EventScript_Twin_1:
# 17 "data/maps/VerdanturfTown/scripts.pory"
	msgbox VerdanturfTown_Text_ManTryingToDigTunnel, MSGBOX_DEFAULT
# 18 "data/maps/VerdanturfTown/scripts.pory"
	applymovement LOCALID_VERDANTURF_TWIN, Common_Movement_FaceOriginalDirection
# 19 "data/maps/VerdanturfTown/scripts.pory"
	waitmovement 0
# 20 "data/maps/VerdanturfTown/scripts.pory"
	release
	end

VerdanturfTown_EventScript_Twin_2:
# 15 "data/maps/VerdanturfTown/scripts.pory"
	goto VerdanturfTown_EventScript_TwinTunnelOpen
	goto VerdanturfTown_EventScript_Twin_1


VerdanturfTown_EventScript_TwinTunnelOpen::
# 25 "data/maps/VerdanturfTown/scripts.pory"
	msgbox VerdanturfTown_Text_ManDugTunnelForLove, MSGBOX_DEFAULT
# 26 "data/maps/VerdanturfTown/scripts.pory"
	applymovement LOCALID_VERDANTURF_TWIN, Common_Movement_FaceOriginalDirection
# 27 "data/maps/VerdanturfTown/scripts.pory"
	waitmovement 0
# 28 "data/maps/VerdanturfTown/scripts.pory"
	release
	end


VerdanturfTown_EventScript_Man::
# 33 "data/maps/VerdanturfTown/scripts.pory"
	msgbox VerdanturfTown_Text_AirCleanHere, MSGBOX_NPC
	end


VerdanturfTown_EventScript_Camper::
# 38 "data/maps/VerdanturfTown/scripts.pory"
	msgbox VerdanturfTown_Text_MakeBattleTentDebut, MSGBOX_NPC
	end


VerdanturfTown_EventScript_Boy::
# 43 "data/maps/VerdanturfTown/scripts.pory"
	lock
# 44 "data/maps/VerdanturfTown/scripts.pory"
	faceplayer
# 45 "data/maps/VerdanturfTown/scripts.pory"
	goto_if_set FLAG_RUSTURF_TUNNEL_OPENED, VerdanturfTown_EventScript_Boy_2
VerdanturfTown_EventScript_Boy_1:
# 48 "data/maps/VerdanturfTown/scripts.pory"
	msgbox VerdanturfTown_Text_GuyTryingToBustThroughCave, MSGBOX_DEFAULT
# 49 "data/maps/VerdanturfTown/scripts.pory"
	release
	end

VerdanturfTown_EventScript_Boy_2:
# 46 "data/maps/VerdanturfTown/scripts.pory"
	goto VerdanturfTown_EventScript_BoyTunnelOpen
	goto VerdanturfTown_EventScript_Boy_1


VerdanturfTown_EventScript_BoyTunnelOpen::
# 54 "data/maps/VerdanturfTown/scripts.pory"
	msgbox VerdanturfTown_Text_EasyToGetToRustboroNow, MSGBOX_DEFAULT
# 55 "data/maps/VerdanturfTown/scripts.pory"
	release
	end


VerdanturfTown_EventScript_TownSign::
# 60 "data/maps/VerdanturfTown/scripts.pory"
	msgbox VerdanturfTown_Text_TownSign, MSGBOX_SIGN
	end


VerdanturfTown_EventScript_WandasHouseSign::
# 65 "data/maps/VerdanturfTown/scripts.pory"
	msgbox VerdanturfTown_Text_WandasHouse, MSGBOX_SIGN
	end


VerdanturfTown_EventScript_BattleTentSign::
# 70 "data/maps/VerdanturfTown/scripts.pory"
	msgbox VerdanturfTown_Text_BattleTentSign, MSGBOX_SIGN
	end


VerdanturfTown_EventScript_RusturfTunnelSign::
# 75 "data/maps/VerdanturfTown/scripts.pory"
	msgbox VerdanturfTown_Text_RusturfTunnelSign, MSGBOX_SIGN
	end


VerdanturfTown_Text_ManTryingToDigTunnel::
# 79 "data/maps/VerdanturfTown/scripts.pory"
	.string "My papa told me.\p"
	.string "He says this tunnel is full of\n"
	.string "timid POKéMON.\p"
	.string "They get all scared of loud noise and\n"
	.string "make a big uproar.\p"
	.string "So they had to stop the big tunnel\n"
	.string "project.\p"
	.string "But there's one man. He's trying to dig\n"
	.string "the tunnel by himself!$"

VerdanturfTown_Text_ManDugTunnelForLove::
# 91 "data/maps/VerdanturfTown/scripts.pory"
	.string "There was a man who dug a tunnel for\n"
	.string "a lady he loved.\p"
	.string "I don't really get it, but hey!$"

VerdanturfTown_Text_AirCleanHere::
# 97 "data/maps/VerdanturfTown/scripts.pory"
	.string "The way the winds blow, volcanic ash\n"
	.string "is never blown in this direction.\p"
	.string "The air is clean and delicious here.\n"
	.string "Living here should do wonders for even\l"
	.string "frail and sickly people.$"

VerdanturfTown_Text_MakeBattleTentDebut::
# 105 "data/maps/VerdanturfTown/scripts.pory"
	.string "My POKéMON and I, we've been riding\n"
	.string "a hot winning streak.\p"
	.string "So I decided to make my BATTLE TENT\n"
	.string "debut in this town.$"

VerdanturfTown_Text_GuyTryingToBustThroughCave::
# 112 "data/maps/VerdanturfTown/scripts.pory"
	.string "Did you see the cave next to the\n"
	.string "POKéMON MART?\p"
	.string "There's a guy in there who's trying to\n"
	.string "bust up boulders so he can bust out\l"
	.string "through to the other side.\p"
	.string "It'd be great if we could go through…\n"
	.string "It'll make it easy to visit RUSTBORO.$"

VerdanturfTown_Text_EasyToGetToRustboroNow::
# 122 "data/maps/VerdanturfTown/scripts.pory"
	.string "That cave next to the POKéMON MART\n"
	.string "is now a tunnel to the other side.\p"
	.string "It's great--it's easy to go shop for\n"
	.string "new DEVON products in RUSTBORO now.$"

VerdanturfTown_Text_TownSign::
# 129 "data/maps/VerdanturfTown/scripts.pory"
	.string "VERDANTURF TOWN\p"
	.string "“The windswept highlands with the\n"
	.string "sweet fragrance of grass.”$"

VerdanturfTown_Text_WandasHouse::
# 135 "data/maps/VerdanturfTown/scripts.pory"
	.string "WANDA'S HOUSE$"

VerdanturfTown_Text_BattleTentSign::
# 139 "data/maps/VerdanturfTown/scripts.pory"
	.string "BATTLE TENT VERDANTURF SITE\n"
	.string "“Feast Your Eyes on Battles!”$"

VerdanturfTown_Text_RusturfTunnelSign::
# 144 "data/maps/VerdanturfTown/scripts.pory"
	.string "RUSTURF TUNNEL\n"
	.string "“Linking RUSTBORO and VERDANTURF\p"
	.string "“The tunnel project has been\n"
	.string "canceled.”$"
