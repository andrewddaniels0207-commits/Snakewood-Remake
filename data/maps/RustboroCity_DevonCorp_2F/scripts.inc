# 1 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 2 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_MapScripts::
# 3 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 2 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 4 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, RustboroCity_DevonCorp_2F_OnTransition
# 5 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.byte 0
# 6 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 7 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 8 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_OnTransition::
# 9 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 6 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 10 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_FOSSIL_RESURRECTION_STATE, 1
# 11 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_eq RustboroCity_DevonCorp_2F_OnTransition_2
# 12 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_OnTransition_1:
# 13 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 14 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 15 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_OnTransition_2:
# 16 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 7 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 17 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call RustboroCity_DevonCorp_2F_EventScript_SetFossilReady
# 18 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_OnTransition_1
# 19 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 20 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 21 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_SetFossilReady::
# 22 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 13 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 23 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_FOSSIL_RESURRECTION_STATE, 2
# 24 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	return
# 25 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 26 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 27 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_TalkToPokemonScientist::
# 28 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 18 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 29 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	lock
# 30 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 19 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 31 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	faceplayer
# 32 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 20 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 33 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_FOSSIL_RESURRECTION_STATE, 1
# 34 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_TalkToPokemonScientist_2
# 35 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_TalkToPokemonScientist_1:
# 36 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 23 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 37 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_DeviceForTalkingToPokemon, MSGBOX_DEFAULT
# 38 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 24 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 39 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
# 40 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 41 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 42 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_TalkToPokemonScientist_2:
# 43 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 21 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 44 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call RustboroCity_DevonCorp_2F_EventScript_SetFossilReady
# 45 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_TalkToPokemonScientist_1
# 46 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 47 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 48 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_BallScientist::
# 49 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 29 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 50 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	lock
# 51 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 30 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 52 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	faceplayer
# 53 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 31 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 54 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_FOSSIL_RESURRECTION_STATE, 1
# 55 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_BallScientist_2
# 56 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_BallScientist_1:
# 57 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 34 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 58 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_set FLAG_MET_DEVON_EMPLOYEE, RustboroCity_DevonCorp_2F_EventScript_BallScientist_5
# 59 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_BallScientist_4:
# 60 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 37 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 61 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_DevelopingNewBalls, MSGBOX_DEFAULT
# 62 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 38 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 63 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
# 64 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 65 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 66 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_BallScientist_2:
# 67 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 32 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 68 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call RustboroCity_DevonCorp_2F_EventScript_SetFossilReady
# 69 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_BallScientist_1
# 70 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 71 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_BallScientist_5:
# 72 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 35 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 73 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_DevelopedBalls
# 74 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_BallScientist_4
# 75 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 76 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 77 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_DevelopedBalls::
# 78 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 43 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 79 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_WeFinallyMadeNewBalls, MSGBOX_DEFAULT
# 80 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 44 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 81 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
# 82 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 83 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 84 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 85 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_PokenavScientist::
# 86 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 49 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 87 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	lock
# 88 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 50 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 89 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	faceplayer
# 90 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 51 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 91 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_FOSSIL_RESURRECTION_STATE, 1
# 92 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_PokenavScientist_2
# 93 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_PokenavScientist_1:
# 94 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 54 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 95 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_set FLAG_RECEIVED_POKENAV, RustboroCity_DevonCorp_2F_EventScript_PokenavScientist_5
# 96 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_PokenavScientist_4:
# 97 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 57 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 98 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_IMadePokenav, MSGBOX_DEFAULT
# 99 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 58 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 100 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
# 101 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 102 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 103 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_PokenavScientist_2:
# 104 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 52 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 105 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call RustboroCity_DevonCorp_2F_EventScript_SetFossilReady
# 106 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_PokenavScientist_1
# 107 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 108 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_PokenavScientist_5:
# 109 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 55 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 110 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_HasPokenav
# 111 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_PokenavScientist_4
# 112 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 113 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 114 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_HasPokenav::
# 115 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 63 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 116 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_WowThatsAPokenav, MSGBOX_DEFAULT
# 117 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 64 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 118 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
# 119 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 120 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 121 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 122 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_PokemonDreamsScientist::
# 123 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 69 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 124 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	lock
# 125 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 70 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 126 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	faceplayer
# 127 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 71 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 128 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_FOSSIL_RESURRECTION_STATE, 1
# 129 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_PokemonDreamsScientist_2
# 130 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_PokemonDreamsScientist_1:
# 131 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 74 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 132 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_DeviceToVisualizePokemonDreams, MSGBOX_DEFAULT
# 133 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 75 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 134 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
# 135 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 136 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 137 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_PokemonDreamsScientist_2:
# 138 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 72 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 139 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call RustboroCity_DevonCorp_2F_EventScript_SetFossilReady
# 140 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_PokemonDreamsScientist_1
# 141 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 142 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 143 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_FossilScientist::
# 144 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 80 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 145 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	lock
# 146 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 81 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 147 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	faceplayer
# 148 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 82 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 149 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_FOSSIL_RESURRECTION_STATE, 2
# 150 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_FossilScientist_2
# 151 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_FossilScientist_1:
# 152 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 85 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 153 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_FOSSIL_RESURRECTION_STATE, 1
# 154 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_FossilScientist_5
# 155 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_FossilScientist_4:
# 156 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 88 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 157 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_DevelopDeviceToResurrectFossils, MSGBOX_DEFAULT
# 158 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 89 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 159 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	checkitem ITEM_ROOT_FOSSIL
# 160 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 90 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 161 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, TRUE
# 162 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_FossilScientist_8
# 163 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_FossilScientist_7:
# 164 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 93 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 165 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	checkitem ITEM_CLAW_FOSSIL
# 166 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 94 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 167 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, TRUE
# 168 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_FossilScientist_11
# 169 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_FossilScientist_10:
# 170 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 97 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 171 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
# 172 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 173 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 174 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_FossilScientist_2:
# 175 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 83 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 176 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_FossilMonReady
# 177 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_FossilScientist_1
# 178 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 179 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_FossilScientist_5:
# 180 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 86 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 181 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_StillRegenerating
# 182 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_FossilScientist_4
# 183 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 184 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_FossilScientist_8:
# 185 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 91 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 186 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_NoticeRootFossil
# 187 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_FossilScientist_7
# 188 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 189 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_FossilScientist_11:
# 190 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 95 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 191 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_NoticeClawFossil
# 192 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_FossilScientist_10
# 193 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 194 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 195 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_NoticeRootFossil::
# 196 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 102 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 197 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	closemessage
# 198 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 103 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 199 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	playse SE_PIN
# 200 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 104 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 201 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	applymovement LOCALID_FOSSIL_SCIENTIST, Common_Movement_ExclamationMark
# 202 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 105 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 203 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitmovement 0
# 204 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 106 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 205 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	applymovement LOCALID_FOSSIL_SCIENTIST, Common_Movement_Delay48
# 206 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 107 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 207 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitmovement 0
# 208 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 108 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 209 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_WantToBringFossilBackToLife, MSGBOX_YESNO
# 210 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 109 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 211 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, NO
# 212 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_NoticeRootFossil_2
# 213 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_NoticeRootFossil_1:
# 214 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 112 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 215 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	checkitem ITEM_CLAW_FOSSIL
# 216 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 113 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 217 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, TRUE
# 218 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_NoticeRootFossil_5
# 219 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_NoticeRootFossil_4:
# 220 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 116 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 221 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_GiveRootFossil
# 222 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 223 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 224 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_NoticeRootFossil_2:
# 225 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 110 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 226 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_DeclineGiveFossil
# 227 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_NoticeRootFossil_1
# 228 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 229 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_NoticeRootFossil_5:
# 230 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 114 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 231 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_ChooseFossil
# 232 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_NoticeRootFossil_4
# 233 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 234 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 235 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_GiveRootFossil::
# 236 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 121 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 237 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_ROOT_FOSSIL
# 238 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 122 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 239 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_HandedFossilToResearcher, MSGBOX_DEFAULT
# 240 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 123 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 241 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	removeitem ITEM_ROOT_FOSSIL
# 242 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 124 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 243 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_FOSSIL_RESURRECTION_STATE, 1
# 244 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 125 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 245 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_WHICH_FOSSIL_REVIVED, 1
# 246 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 126 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 247 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
# 248 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 249 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 250 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 251 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_NoticeClawFossil::
# 252 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 131 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 253 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	closemessage
# 254 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 132 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 255 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	playse SE_PIN
# 256 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 133 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 257 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	applymovement LOCALID_FOSSIL_SCIENTIST, Common_Movement_ExclamationMark
# 258 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 134 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 259 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitmovement 0
# 260 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 135 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 261 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	applymovement LOCALID_FOSSIL_SCIENTIST, Common_Movement_Delay48
# 262 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 136 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 263 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitmovement 0
# 264 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 137 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 265 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_WantToBringFossilBackToLife, MSGBOX_YESNO
# 266 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 138 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 267 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, NO
# 268 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_NoticeClawFossil_2
# 269 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_NoticeClawFossil_1:
# 270 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 141 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 271 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	checkitem ITEM_ROOT_FOSSIL
# 272 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 142 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 273 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, TRUE
# 274 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_NoticeClawFossil_5
# 275 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_NoticeClawFossil_4:
# 276 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 145 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 277 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_GiveClawFossil
# 278 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 279 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 280 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_NoticeClawFossil_2:
# 281 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 139 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 282 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_DeclineGiveFossil
# 283 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_NoticeClawFossil_1
# 284 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 285 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_NoticeClawFossil_5:
# 286 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 143 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 287 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_ChooseFossil
# 288 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_NoticeClawFossil_4
# 289 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 290 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 291 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_GiveClawFossil::
# 292 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 150 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 293 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_CLAW_FOSSIL
# 294 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 151 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 295 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_HandedFossilToResearcher, MSGBOX_DEFAULT
# 296 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 152 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 297 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	removeitem ITEM_CLAW_FOSSIL
# 298 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 153 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 299 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_FOSSIL_RESURRECTION_STATE, 1
# 300 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 154 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 301 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_WHICH_FOSSIL_REVIVED, 2
# 302 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 155 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 303 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
# 304 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 305 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 306 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 307 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_DeclineGiveFossil::
# 308 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 160 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 309 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_OhIsThatSo, MSGBOX_DEFAULT
# 310 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 161 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 311 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
# 312 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 313 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 314 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 315 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_StillRegenerating::
# 316 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 166 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 317 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_FossilRegeneratorTakesTime, MSGBOX_DEFAULT
# 318 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 167 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 319 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
# 320 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 321 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 322 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 323 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_FossilMonReady::
# 324 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 172 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 325 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_WHICH_FOSSIL_REVIVED, 1
# 326 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_FossilMonReady_2
# 327 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_FossilMonReady_1:
# 328 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 175 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 329 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_WHICH_FOSSIL_REVIVED, 2
# 330 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_FossilMonReady_5
# 331 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_FossilMonReady_4:
# 332 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 333 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 334 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_FossilMonReady_2:
# 335 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 173 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 336 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_LileepReady
# 337 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_FossilMonReady_1
# 338 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 339 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_FossilMonReady_5:
# 340 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 176 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 341 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_AnorithReady
# 342 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_FossilMonReady_4
# 343 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 344 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 345 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_LileepReady::
# 346 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 182 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 347 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_LILEEP
# 348 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 183 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 349 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_FossilizedMonBroughtBackToLife, MSGBOX_DEFAULT
# 350 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 184 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 351 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_ReceiveLileep
# 352 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 353 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 354 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 355 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_AnorithReady::
# 356 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 189 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 357 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_ANORITH
# 358 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 190 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 359 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_FossilizedMonBroughtBackToLife, MSGBOX_DEFAULT
# 360 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 191 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 361 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_ReceiveAnorith
# 362 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 363 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 364 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 365 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_ReceiveLileep::
# 366 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 196 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 367 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_LILEEP
# 368 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 197 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 369 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	givemon SPECIES_LILEEP, 20
# 370 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 198 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 371 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
# 372 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_ReceiveLileep_2
# 373 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_ReceiveLileep_1:
# 374 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 201 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 375 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
# 376 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_ReceiveLileep_5
# 377 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_ReceiveLileep_4:
# 378 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 204 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 379 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
# 380 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 381 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 382 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_ReceiveLileep_2:
# 383 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 199 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 384 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_ReceiveLileepParty
# 385 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_ReceiveLileep_1
# 386 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 387 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_ReceiveLileep_5:
# 388 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 202 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 389 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_ReceiveLileepPC
# 390 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_ReceiveLileep_4
# 391 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 392 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 393 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_ReceiveLileepParty::
# 394 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 209 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 395 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call RustboroCity_DevonCorp_2F_EventScript_ReceivedLileepFanfare
# 396 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 210 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 397 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 398 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 211 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 399 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, NO
# 400 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_ReceiveLileepParty_2
# 401 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_ReceiveLileepParty_1:
# 402 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 214 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 403 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 404 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 215 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 405 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 406 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 216 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 407 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_FinishReceivingLileep
# 408 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 409 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 410 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_ReceiveLileepParty_2:
# 411 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 212 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 412 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_FinishReceivingLileep
# 413 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_ReceiveLileepParty_1
# 414 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 415 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 416 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_ReceiveLileepPC::
# 417 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 221 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 418 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call RustboroCity_DevonCorp_2F_EventScript_ReceivedLileepFanfare
# 419 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 222 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 420 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 421 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 223 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 422 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, NO
# 423 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_ReceiveLileepPC_2
# 424 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_ReceiveLileepPC_1:
# 425 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 226 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 426 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
# 427 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 227 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 428 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_TransferLileepToPC
# 429 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 430 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 431 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_ReceiveLileepPC_2:
# 432 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 224 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 433 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_TransferLileepToPC
# 434 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_ReceiveLileepPC_1
# 435 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 436 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 437 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_TransferLileepToPC::
# 438 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 232 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 439 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call Common_EventScript_TransferredToPC
# 440 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 233 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 441 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_FinishReceivingLileep
# 442 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 443 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 444 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 445 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_ReceivedLileepFanfare::
# 446 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 238 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 447 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_LILEEP
# 448 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 239 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 449 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 450 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 240 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 451 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	message RustboroCity_DevonCorp_2F_Text_ReceivedMonFromResearcher
# 452 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 241 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 453 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitmessage
# 454 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 242 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 455 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitfanfare
# 456 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 243 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 457 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_LILEEP
# 458 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	return
# 459 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 460 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 461 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_FinishReceivingLileep::
# 462 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 248 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 463 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_FOSSIL_RESURRECTION_STATE, 0
# 464 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 249 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 465 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setflag FLAG_RECEIVED_REVIVED_FOSSIL_MON
# 466 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 250 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 467 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
# 468 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 469 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 470 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 471 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_ReceiveAnorith::
# 472 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 255 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 473 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_ANORITH
# 474 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 256 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 475 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	givemon SPECIES_ANORITH, 20
# 476 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 257 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 477 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
# 478 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_ReceiveAnorith_2
# 479 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_ReceiveAnorith_1:
# 480 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 260 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 481 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
# 482 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_ReceiveAnorith_5
# 483 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_ReceiveAnorith_4:
# 484 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 263 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 485 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
# 486 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 487 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 488 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_ReceiveAnorith_2:
# 489 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 258 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 490 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_ReceiveAnorithParty
# 491 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_ReceiveAnorith_1
# 492 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 493 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_ReceiveAnorith_5:
# 494 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 261 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 495 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_ReceiveAnorithPC
# 496 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_ReceiveAnorith_4
# 497 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 498 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 499 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_ReceiveAnorithParty::
# 500 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 268 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 501 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call RustboroCity_DevonCorp_2F_EventScript_ReceivedAnorithFanfare
# 502 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 269 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 503 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 504 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 270 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 505 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, NO
# 506 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_ReceiveAnorithParty_2
# 507 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_ReceiveAnorithParty_1:
# 508 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 273 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 509 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 510 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 274 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 511 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 512 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 275 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 513 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_FinishReceivingAnorith
# 514 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 515 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 516 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_ReceiveAnorithParty_2:
# 517 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 271 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 518 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_FinishReceivingAnorith
# 519 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_ReceiveAnorithParty_1
# 520 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 521 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 522 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_ReceiveAnorithPC::
# 523 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 280 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 524 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call RustboroCity_DevonCorp_2F_EventScript_ReceivedAnorithFanfare
# 525 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 281 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 526 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 527 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 282 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 528 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, NO
# 529 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_ReceiveAnorithPC_2
# 530 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_ReceiveAnorithPC_1:
# 531 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 285 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 532 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
# 533 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 286 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 534 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_TransferAnorithToPC
# 535 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 536 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 537 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_ReceiveAnorithPC_2:
# 538 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 283 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 539 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_TransferAnorithToPC
# 540 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_ReceiveAnorithPC_1
# 541 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 542 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 543 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_TransferAnorithToPC::
# 544 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 291 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 545 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call Common_EventScript_TransferredToPC
# 546 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 292 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 547 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_FinishReceivingAnorith
# 548 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 549 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 550 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 551 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_ReceivedAnorithFanfare::
# 552 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 297 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 553 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_ANORITH
# 554 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 298 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 555 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 556 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 299 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 557 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	message RustboroCity_DevonCorp_2F_Text_ReceivedMonFromResearcher
# 558 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 300 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 559 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitmessage
# 560 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 301 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 561 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitfanfare
# 562 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 302 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 563 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_ANORITH
# 564 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	return
# 565 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 566 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 567 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_FinishReceivingAnorith::
# 568 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 307 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 569 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_FOSSIL_RESURRECTION_STATE, 0
# 570 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 308 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 571 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setflag FLAG_RECEIVED_REVIVED_FOSSIL_MON
# 572 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 309 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 573 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
# 574 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 575 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 576 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 577 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_ChooseFossil::
# 578 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 314 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 579 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	message RustboroCity_DevonCorp_2F_Text_TwoFossilsPickOne
# 580 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 315 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 581 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitmessage
# 582 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 316 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 583 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	multichoice 17, 6, MULTI_FOSSIL, FALSE
# 584 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 317 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 585 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	switch VAR_RESULT
# 586 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 318 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 587 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case 0, RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_3
# 588 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 320 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 589 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case 1, RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_4
# 590 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 322 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 591 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case 2, RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_5
# 592 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 324 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 593 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case MULTI_B_PRESSED, RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_6
# 594 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_1:
# 595 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 596 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 597 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_3:
# 598 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 319 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 599 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_ChooseClawFossil
# 600 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_1
# 601 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 602 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_4:
# 603 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 321 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 604 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_ChooseRootFossil
# 605 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_1
# 606 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 607 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_5:
# 608 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 323 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 609 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_CancelFossilSelect
# 610 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_1
# 611 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 612 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_6:
# 613 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 325 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 614 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_CancelFossilSelect
# 615 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_1
# 616 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 617 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 618 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_ChooseClawFossil::
# 619 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 331 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 620 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_GiveClawFossil
# 621 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 622 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 623 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 624 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_ChooseRootFossil::
# 625 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 336 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 626 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_GiveRootFossil
# 627 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 628 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 629 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 630 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_CancelFossilSelect::
# 631 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 341 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 632 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
# 633 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 634 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 635 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 636 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_MatchCallScientist::
# 637 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 346 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 638 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	lock
# 639 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 347 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 640 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	faceplayer
# 641 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 348 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 642 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_FOSSIL_RESURRECTION_STATE, 1
# 643 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_MatchCallScientist_2
# 644 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_MatchCallScientist_1:
# 645 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 351 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 646 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RUSTBORO_CITY_STATE, 6
# 647 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_ge RustboroCity_DevonCorp_2F_EventScript_MatchCallScientist_5
# 648 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_MatchCallScientist_4:
# 649 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 354 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 650 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_DevelopNewPokenavFeature, MSGBOX_DEFAULT
# 651 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 355 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 652 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
# 653 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 654 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 655 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_MatchCallScientist_2:
# 656 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 349 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 657 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call RustboroCity_DevonCorp_2F_EventScript_SetFossilReady
# 658 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_MatchCallScientist_1
# 659 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 660 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_MatchCallScientist_5:
# 661 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 352 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 662 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_WorkOnNext
# 663 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_MatchCallScientist_4
# 664 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 665 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 666 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_WorkOnNext::
# 667 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 360 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 668 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_WhatToWorkOnNext, MSGBOX_DEFAULT
# 669 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 361 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 670 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
# 671 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 672 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 673 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 674 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Text_DeviceForTalkingToPokemon::
# 675 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 365 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 676 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "We're developing a device for talking\n"
# 677 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "with POKéMON.\p"
# 678 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "But we haven't had much success…$"
# 679 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 680 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Text_DevelopingNewBalls::
# 681 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 371 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 682 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "I'm developing new kinds of\n"
# 683 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "POKé BALLS…\p"
# 684 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "But I haven't made much headway…$"
# 685 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 686 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Text_WeFinallyMadeNewBalls::
# 687 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 377 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 688 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "We finally made new kinds of\n"
# 689 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "POKé BALLS!\p"
# 690 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "The REPEAT BALL makes it easier to\n"
# 691 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "catch POKéMON you've caught before.\p"
# 692 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "The TIMER BALL gets better at catching\n"
# 693 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "POKéMON the longer a battle runs.\p"
# 694 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Both are proudly developed by\n"
# 695 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "the DEVON CORPORATION.\p"
# 696 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Please give them a try!$"
# 697 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 698 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Text_IMadePokenav::
# 699 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 389 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 700 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "I made the POKéNAV!\p"
# 701 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "As an engineer, I feel blessed to have\n"
# 702 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "made something so great!$"
# 703 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 704 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Text_WowThatsAPokenav::
# 705 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 395 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 706 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Oh, wow!\n"
# 707 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "That's a POKéNAV!\p"
# 708 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "It came about as a result of our\n"
# 709 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "PRESIDENT's desire to learn about\l"
# 710 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "the feelings of POKéMON.\p"
# 711 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Would you like me to describe its\n"
# 712 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "features in detail?\p"
# 713 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "No, no. I think you'll find out just by\n"
# 714 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "trying the POKéNAV out.$"
# 715 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 716 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Text_DeviceToVisualizePokemonDreams::
# 717 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 407 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 718 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "I'm trying to develop a device that\n"
# 719 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "visually reproduces the dreams of\l"
# 720 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "POKéMON…\p"
# 721 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "But it's not going well.$"
# 722 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 723 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Text_DevelopDeviceToResurrectFossils::
# 724 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 414 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 725 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "I've been trying to develop a device\n"
# 726 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "that resurrects POKéMON from fossils…\p"
# 727 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "And, it's working!$"
# 728 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 729 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Text_WantToBringFossilBackToLife::
# 730 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 420 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 731 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Wait! That thing you have there…\n"
# 732 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Is that a POKéMON fossil?\p"
# 733 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Would you like to bring that POKéMON\n"
# 734 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "back to life?\p"
# 735 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "I can with my newly developed\n"
# 736 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "FOSSIL REGENERATOR.$"
# 737 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 738 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Text_OhIsThatSo::
# 739 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 429 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 740 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Oh, is that so?\p"
# 741 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "DEVON's technological expertise\n"
# 742 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "is outstanding, I tell you.$"
# 743 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 744 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Text_TwoFossilsPickOne::
# 745 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 435 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 746 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Oh, now that's a surprise!\n"
# 747 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "You have not one, but two, fossils?\p"
# 748 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Unfortunately, my machine can only\n"
# 749 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "regenerate one POKéMON at a time.\p"
# 750 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Would you like to pick one of your\n"
# 751 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "fossils for regeneration?$"
# 752 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 753 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Text_HandedFossilToResearcher::
# 754 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 444 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 755 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Excellent!\n"
# 756 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Let's do this right away.\p"
# 757 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "{PLAYER} handed the {STR_VAR_1} to\n"
# 758 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "the DEVON RESEARCHER.$"
# 759 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 760 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Text_FossilRegeneratorTakesTime::
# 761 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 451 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 762 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "The FOSSIL REGENERATOR, which I made,\n"
# 763 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "is incredible.\p"
# 764 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "But it has one drawback--it takes\n"
# 765 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "a long time to work.\p"
# 766 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "So, uh… How about you go for a stroll\n"
# 767 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "and look around for a while?$"
# 768 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 769 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Text_FossilizedMonBroughtBackToLife::
# 770 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 460 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 771 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Thanks for waiting!\p"
# 772 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Your fossilized POKéMON has been\n"
# 773 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "brought back to life!\p"
# 774 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "The fossil was an ancient POKéMON.\n"
# 775 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "{STR_VAR_2}, it was!$"
# 776 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 777 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Text_ReceivedMonFromResearcher::
# 778 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 468 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 779 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "{PLAYER} received {STR_VAR_2} from\n"
# 780 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "the DEVON RESEARCHER.$"
# 781 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 782 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Text_TooManyPokemon::
# 783 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 473 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 784 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Uh-oh, you've got too many POKéMON.\n"
# 785 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "You have no room for this one.$"
# 786 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 787 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Text_DevelopNewPokenavFeature::
# 788 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 478 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 789 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "I'm trying to develop a new feature\n"
# 790 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "for the POKéNAV…\p"
# 791 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "But it's not going well.$"
# 792 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 793 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Text_WhatToWorkOnNext::
# 794 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 484 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
# 795 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Well, now what shall I work on\n"
# 796 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "developing next?\p"
# 797 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Our company allows us to make our\n"
# 798 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "inspirations into reality.\p"
# 799 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "One couldn't ask for a better\n"
# 800 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "environment as an engineer.$"
