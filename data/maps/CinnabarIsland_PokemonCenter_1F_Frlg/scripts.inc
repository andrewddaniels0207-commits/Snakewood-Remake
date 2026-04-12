CinnabarIsland_PokemonCenter_1F_Frlg_MapScripts::
# 2 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, CinnabarIsland_PokemonCenter_1F_OnTransition
# 3 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0


CinnabarIsland_PokemonCenter_1F_OnTransition::
# 7 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	setrespawn HEAL_LOCATION_CINNABAR_ISLAND
	end


CinnabarIsland_PokemonCenter_1F_EventScript_Nurse::
# 12 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	lock
# 13 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	faceplayer
# 14 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	call EventScript_PkmnCenterNurse_Frlg
# 15 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	release
	end


CinnabarIsland_PokemonCenter_1F_EventScript_Gentleman::
# 20 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox CinnabarIsland_PokemonCenter_1F_Text_VisitUnionRoom, MSGBOX_NPC
	end


CinnabarIsland_PokemonCenter_1F_EventScript_CooltrainerF::
# 25 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox CinnabarIsland_PokemonCenter_1F_Text_CinnabarGymLocked, MSGBOX_NPC
	end


CinnabarIsland_PokemonCenter_1F_EventScript_Youngster::
# 30 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox CinnabarIsland_PokemonCenter_1F_Text_EvolutionCanWaitForNewMoves, MSGBOX_NPC
	end


CinnabarIsland_PokemonCenter_1F_EventScript_Bill::
# 35 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	lock
# 36 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	faceplayer
# 37 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox CinnabarIsland_PokemonCenter_1F_Text_ReadyToSailToOneIsland, MSGBOX_YESNO
# 38 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq CinnabarIsland_PokemonCenter_1F_EventScript_Bill_2
CinnabarIsland_PokemonCenter_1F_EventScript_Bill_1:
# 41 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox CinnabarIsland_PokemonCenter_1F_Text_LetsGo
# 42 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	closemessage
# 43 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	playbgm MUS_FOLLOW_ME, 1
# 44 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	savebgm MUS_FOLLOW_ME
# 45 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	setflag FLAG_DONT_TRANSITION_MUSIC
# 46 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	setflag FLAG_HIDE_CINNABAR_POKECENTER_BILL
# 47 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	delay 20
# 48 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	compare VAR_FACING, DIR_SOUTH
	goto_if_eq CinnabarIsland_PokemonCenter_1F_EventScript_Bill_5
CinnabarIsland_PokemonCenter_1F_EventScript_Bill_4:
# 51 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	compare VAR_FACING, DIR_EAST
	goto_if_eq CinnabarIsland_PokemonCenter_1F_EventScript_Bill_8
CinnabarIsland_PokemonCenter_1F_EventScript_Bill_7:
# 54 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	compare VAR_FACING, DIR_WEST
	goto_if_eq CinnabarIsland_PokemonCenter_1F_EventScript_Bill_11
CinnabarIsland_PokemonCenter_1F_EventScript_Bill_10:
# 57 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	removeobject LOCALID_CINNABAR_POKEMON_CENTER_BILL
# 58 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_CINNABAR_ISLAND_2, 1
# 59 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	clearflag FLAG_HIDE_CINNABAR_BILL
# 60 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	warp MAP_CINNABAR_ISLAND, 14, 11
# 61 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	waitstate
# 62 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	release
	end

CinnabarIsland_PokemonCenter_1F_EventScript_Bill_2:
# 39 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	goto CinnabarIsland_PokemonCenter_1F_EventScript_NotReadyToSail
	goto CinnabarIsland_PokemonCenter_1F_EventScript_Bill_1

CinnabarIsland_PokemonCenter_1F_EventScript_Bill_5:
# 49 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	call CinnabarIsland_PokemonCenter_1F_EventScript_ExitWithBillSouth
	goto CinnabarIsland_PokemonCenter_1F_EventScript_Bill_4

CinnabarIsland_PokemonCenter_1F_EventScript_Bill_8:
# 52 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	call CinnabarIsland_PokemonCenter_1F_EventScript_ExitWithBillEast
	goto CinnabarIsland_PokemonCenter_1F_EventScript_Bill_7

CinnabarIsland_PokemonCenter_1F_EventScript_Bill_11:
# 55 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	call CinnabarIsland_PokemonCenter_1F_EventScript_ExitWithBillWest
	goto CinnabarIsland_PokemonCenter_1F_EventScript_Bill_10


CinnabarIsland_PokemonCenter_1F_EventScript_ExitWithBillSouth::
# 67 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	applymovement LOCALID_CINNABAR_POKEMON_CENTER_BILL, CinnabarIsland_PokemonCenter_1F_Movement_BillExit
# 68 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, CinnabarIsland_PokemonCenter_1F_Movement_PlayerExitSouth
# 69 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	waitmovement 0
	return


CinnabarIsland_PokemonCenter_1F_EventScript_ExitWithBillEast::
# 74 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	applymovement LOCALID_CINNABAR_POKEMON_CENTER_BILL, CinnabarIsland_PokemonCenter_1F_Movement_BillExitEast
# 75 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, CinnabarIsland_PokemonCenter_1F_Movement_PlayerExitEast
# 76 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	waitmovement 0
	return


CinnabarIsland_PokemonCenter_1F_EventScript_ExitWithBillWest::
# 81 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	applymovement LOCALID_CINNABAR_POKEMON_CENTER_BILL, CinnabarIsland_PokemonCenter_1F_Movement_BillExit
# 82 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, CinnabarIsland_PokemonCenter_1F_Movement_PlayerExitWest
# 83 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	waitmovement 0
	return


CinnabarIsland_PokemonCenter_1F_EventScript_NotReadyToSail::
# 88 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox CinnabarIsland_PokemonCenter_1F_Text_OhNotDoneYet
# 89 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	release
	end


# 93 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
CinnabarIsland_PokemonCenter_1F_Movement_BillExit:
# 94 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_left
# 95 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_left
# 96 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_left
# 97 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_left
# 98 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_down
# 99 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_down
# 100 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_down
# 101 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	delay_8
# 102 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	set_invisible
# 103 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	step_end

# 106 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
CinnabarIsland_PokemonCenter_1F_Movement_PlayerExitSouth:
# 107 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_down
# 108 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_left
# 109 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_left
# 110 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_left
# 111 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_left
# 112 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_down
# 113 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_down
# 114 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	delay_16
# 115 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_down
# 116 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	step_end

# 119 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
CinnabarIsland_PokemonCenter_1F_Movement_BillExitEast:
# 120 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_up
# 121 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_left
# 122 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_left
# 123 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_down
# 124 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_left
# 125 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_left
# 126 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_down
# 127 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_down
# 128 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_down
# 129 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	delay_8
# 130 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	set_invisible
# 131 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	step_end

# 134 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
CinnabarIsland_PokemonCenter_1F_Movement_PlayerExitEast:
# 135 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	delay_16
# 136 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	delay_16
# 137 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	delay_16
# 138 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	face_left
# 139 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	delay_16
# 140 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_left
# 141 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_left
# 142 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_left
# 143 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_down
# 144 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_down
# 145 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	delay_8
# 146 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_down
# 147 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	delay_8
# 148 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	set_invisible
# 149 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	step_end

# 152 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
CinnabarIsland_PokemonCenter_1F_Movement_PlayerExitWest:
# 153 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_left
# 154 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_left
# 155 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_left
# 156 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_left
# 157 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_left
# 158 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_down
# 159 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_down
# 160 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	delay_16
# 161 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_down
# 162 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	step_end

CinnabarIsland_PokemonCenter_1F_Text_CinnabarGymLocked::
# 165 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "I came to visit the CINNABAR GYM,\n"
	.string "but the door is locked tight.\p"
	.string "There should be a key for it\n"
	.string "somewhere.\p"
	.string "Could it be in that burned-out\n"
	.string "mansion?\p"
	.string "The GYM LEADER's friend used to\n"
	.string "live there, they say.$"

CinnabarIsland_PokemonCenter_1F_Text_VisitUnionRoom::
# 176 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Do you have lots of friends?\p"
	.string "Linking up with the usual friends\n"
	.string "is fun, of course.\p"
	.string "But how about visiting the\n"
	.string "UNION ROOM every so often?\p"
	.string "Who knows, you may end up making\n"
	.string "new friends.\p"
	.string "I think it would be worth your time\n"
	.string "to check the UNION ROOM.$"

CinnabarIsland_PokemonCenter_1F_Text_EvolutionCanWaitForNewMoves::
# 188 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "POKéMON can still learn techniques\n"
	.string "after canceling evolution.\p"
	.string "Evolution can wait until new moves\n"
	.string "have been learned.$"

CinnabarIsland_PokemonCenter_1F_Text_ReadyToSailToOneIsland::
# 195 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "BILL: Hey, you kept me waiting!\n"
	.string "Ready to set sail to ONE ISLAND?$"

CinnabarIsland_PokemonCenter_1F_Text_OhNotDoneYet::
# 200 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Oh, you're still not done yet?$"

CinnabarIsland_PokemonCenter_1F_Text_LetsGo::
# 204 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Well, that's it.\n"
	.string "Let's go!$"
