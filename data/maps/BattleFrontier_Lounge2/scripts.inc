# 1 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 2 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_MapScripts::
# 3 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.byte 0
# 4 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 5 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 6 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_EventScript_FrontierManiac::
# 7 "data/maps/BattleFrontier_Lounge2/scripts.pory"
# 4 "data/maps/BattleFrontier_Lounge2/scripts.pory"
# 8 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	lock
# 9 "data/maps/BattleFrontier_Lounge2/scripts.pory"
# 5 "data/maps/BattleFrontier_Lounge2/scripts.pory"
# 10 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	faceplayer
# 11 "data/maps/BattleFrontier_Lounge2/scripts.pory"
# 6 "data/maps/BattleFrontier_Lounge2/scripts.pory"
# 12 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	goto_if_set FLAG_MET_BATTLE_FRONTIER_MANIAC, BattleFrontier_Lounge2_EventScript_FrontierManiac_2
# 13 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_EventScript_FrontierManiac_1:
# 14 "data/maps/BattleFrontier_Lounge2/scripts.pory"
# 9 "data/maps/BattleFrontier_Lounge2/scripts.pory"
# 15 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	setflag FLAG_MET_BATTLE_FRONTIER_MANIAC
# 16 "data/maps/BattleFrontier_Lounge2/scripts.pory"
# 10 "data/maps/BattleFrontier_Lounge2/scripts.pory"
# 17 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	msgbox BattleFrontier_Lounge2_Text_FrontierManiacIntro, MSGBOX_DEFAULT
# 18 "data/maps/BattleFrontier_Lounge2/scripts.pory"
# 11 "data/maps/BattleFrontier_Lounge2/scripts.pory"
# 19 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	goto BattleFrontier_Lounge2_EventScript_GiveAdvice
# 20 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	end
# 21 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 22 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_EventScript_FrontierManiac_2:
# 23 "data/maps/BattleFrontier_Lounge2/scripts.pory"
# 7 "data/maps/BattleFrontier_Lounge2/scripts.pory"
# 24 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	goto BattleFrontier_Lounge2_EventScript_AlreadyMetManiac
# 25 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	goto BattleFrontier_Lounge2_EventScript_FrontierManiac_1
# 26 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 27 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 28 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_EventScript_AlreadyMetManiac::
# 29 "data/maps/BattleFrontier_Lounge2/scripts.pory"
# 16 "data/maps/BattleFrontier_Lounge2/scripts.pory"
# 30 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	msgbox BattleFrontier_Lounge2_Text_SwingByForTheLatestWord, MSGBOX_DEFAULT
# 31 "data/maps/BattleFrontier_Lounge2/scripts.pory"
# 17 "data/maps/BattleFrontier_Lounge2/scripts.pory"
# 32 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	goto BattleFrontier_Lounge2_EventScript_GiveAdvice
# 33 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	end
# 34 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 35 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 36 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_EventScript_GiveAdvice::
# 37 "data/maps/BattleFrontier_Lounge2/scripts.pory"
# 22 "data/maps/BattleFrontier_Lounge2/scripts.pory"
# 38 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	compare VAR_FRONTIER_MANIAC_FACILITY, FRONTIER_MANIAC_TOWER_SINGLES
# 39 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	goto_if_eq BattleFrontier_Lounge2_EventScript_GiveAdvice_2
# 40 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_EventScript_GiveAdvice_1:
# 41 "data/maps/BattleFrontier_Lounge2/scripts.pory"
# 25 "data/maps/BattleFrontier_Lounge2/scripts.pory"
# 42 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	compare VAR_FRONTIER_MANIAC_FACILITY, FRONTIER_MANIAC_TOWER_DOUBLES
# 43 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	goto_if_eq BattleFrontier_Lounge2_EventScript_GiveAdvice_5
# 44 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_EventScript_GiveAdvice_4:
# 45 "data/maps/BattleFrontier_Lounge2/scripts.pory"
# 28 "data/maps/BattleFrontier_Lounge2/scripts.pory"
# 46 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	compare VAR_FRONTIER_MANIAC_FACILITY, FRONTIER_MANIAC_TOWER_MULTIS
# 47 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	goto_if_eq BattleFrontier_Lounge2_EventScript_GiveAdvice_8
# 48 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_EventScript_GiveAdvice_7:
# 49 "data/maps/BattleFrontier_Lounge2/scripts.pory"
# 31 "data/maps/BattleFrontier_Lounge2/scripts.pory"
# 50 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	compare VAR_FRONTIER_MANIAC_FACILITY, FRONTIER_MANIAC_TOWER_LINK
# 51 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	goto_if_eq BattleFrontier_Lounge2_EventScript_GiveAdvice_11
# 52 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_EventScript_GiveAdvice_10:
# 53 "data/maps/BattleFrontier_Lounge2/scripts.pory"
# 34 "data/maps/BattleFrontier_Lounge2/scripts.pory"
# 54 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	compare VAR_FRONTIER_MANIAC_FACILITY, FRONTIER_MANIAC_DOME
# 55 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	goto_if_eq BattleFrontier_Lounge2_EventScript_GiveAdvice_14
# 56 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_EventScript_GiveAdvice_13:
# 57 "data/maps/BattleFrontier_Lounge2/scripts.pory"
# 37 "data/maps/BattleFrontier_Lounge2/scripts.pory"
# 58 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	compare VAR_FRONTIER_MANIAC_FACILITY, FRONTIER_MANIAC_FACTORY
# 59 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	goto_if_eq BattleFrontier_Lounge2_EventScript_GiveAdvice_17
# 60 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_EventScript_GiveAdvice_16:
# 61 "data/maps/BattleFrontier_Lounge2/scripts.pory"
# 40 "data/maps/BattleFrontier_Lounge2/scripts.pory"
# 62 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	compare VAR_FRONTIER_MANIAC_FACILITY, FRONTIER_MANIAC_PALACE
# 63 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	goto_if_eq BattleFrontier_Lounge2_EventScript_GiveAdvice_20
# 64 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_EventScript_GiveAdvice_19:
# 65 "data/maps/BattleFrontier_Lounge2/scripts.pory"
# 43 "data/maps/BattleFrontier_Lounge2/scripts.pory"
# 66 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	compare VAR_FRONTIER_MANIAC_FACILITY, FRONTIER_MANIAC_ARENA
# 67 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	goto_if_eq BattleFrontier_Lounge2_EventScript_GiveAdvice_23
# 68 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_EventScript_GiveAdvice_22:
# 69 "data/maps/BattleFrontier_Lounge2/scripts.pory"
# 46 "data/maps/BattleFrontier_Lounge2/scripts.pory"
# 70 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	compare VAR_FRONTIER_MANIAC_FACILITY, FRONTIER_MANIAC_PIKE
# 71 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	goto_if_eq BattleFrontier_Lounge2_EventScript_GiveAdvice_26
# 72 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_EventScript_GiveAdvice_25:
# 73 "data/maps/BattleFrontier_Lounge2/scripts.pory"
# 49 "data/maps/BattleFrontier_Lounge2/scripts.pory"
# 74 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	compare VAR_FRONTIER_MANIAC_FACILITY, FRONTIER_MANIAC_PYRAMID
# 75 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	goto_if_eq BattleFrontier_Lounge2_EventScript_GiveAdvice_29
# 76 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_EventScript_GiveAdvice_28:
# 77 "data/maps/BattleFrontier_Lounge2/scripts.pory"
# 52 "data/maps/BattleFrontier_Lounge2/scripts.pory"
# 78 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	compare VAR_FRONTIER_MANIAC_FACILITY, FRONTIER_MANIAC_TOWER_LINK
# 79 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	goto_if_le BattleFrontier_Lounge2_EventScript_GiveAdvice_32
# 80 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_EventScript_GiveAdvice_31:
# 81 "data/maps/BattleFrontier_Lounge2/scripts.pory"
# 55 "data/maps/BattleFrontier_Lounge2/scripts.pory"
# 82 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	compare VAR_FRONTIER_MANIAC_FACILITY, FRONTIER_MANIAC_DOME
# 83 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	goto_if_ge BattleFrontier_Lounge2_EventScript_GiveAdvice_35
# 84 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_EventScript_GiveAdvice_34:
# 85 "data/maps/BattleFrontier_Lounge2/scripts.pory"
# 58 "data/maps/BattleFrontier_Lounge2/scripts.pory"
# 86 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	special ShowFrontierManiacMessage
# 87 "data/maps/BattleFrontier_Lounge2/scripts.pory"
# 59 "data/maps/BattleFrontier_Lounge2/scripts.pory"
# 88 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	waitmessage
# 89 "data/maps/BattleFrontier_Lounge2/scripts.pory"
# 60 "data/maps/BattleFrontier_Lounge2/scripts.pory"
# 90 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	waitbuttonpress
# 91 "data/maps/BattleFrontier_Lounge2/scripts.pory"
# 61 "data/maps/BattleFrontier_Lounge2/scripts.pory"
# 92 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	release
# 93 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	end
# 94 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 95 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_EventScript_GiveAdvice_2:
# 96 "data/maps/BattleFrontier_Lounge2/scripts.pory"
# 23 "data/maps/BattleFrontier_Lounge2/scripts.pory"
# 97 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	call BattleFrontier_Lounge2_EventScript_BufferSingle
# 98 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	goto BattleFrontier_Lounge2_EventScript_GiveAdvice_1
# 99 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 100 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_EventScript_GiveAdvice_5:
# 101 "data/maps/BattleFrontier_Lounge2/scripts.pory"
# 26 "data/maps/BattleFrontier_Lounge2/scripts.pory"
# 102 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	call BattleFrontier_Lounge2_EventScript_BufferDouble
# 103 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	goto BattleFrontier_Lounge2_EventScript_GiveAdvice_4
# 104 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 105 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_EventScript_GiveAdvice_8:
# 106 "data/maps/BattleFrontier_Lounge2/scripts.pory"
# 29 "data/maps/BattleFrontier_Lounge2/scripts.pory"
# 107 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	call BattleFrontier_Lounge2_EventScript_BufferMulti
# 108 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	goto BattleFrontier_Lounge2_EventScript_GiveAdvice_7
# 109 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 110 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_EventScript_GiveAdvice_11:
# 111 "data/maps/BattleFrontier_Lounge2/scripts.pory"
# 32 "data/maps/BattleFrontier_Lounge2/scripts.pory"
# 112 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	call BattleFrontier_Lounge2_EventScript_BufferMultiLink
# 113 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	goto BattleFrontier_Lounge2_EventScript_GiveAdvice_10
# 114 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 115 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_EventScript_GiveAdvice_14:
# 116 "data/maps/BattleFrontier_Lounge2/scripts.pory"
# 35 "data/maps/BattleFrontier_Lounge2/scripts.pory"
# 117 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	call BattleFrontier_Lounge2_EventScript_BufferBattleDome
# 118 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	goto BattleFrontier_Lounge2_EventScript_GiveAdvice_13
# 119 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 120 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_EventScript_GiveAdvice_17:
# 121 "data/maps/BattleFrontier_Lounge2/scripts.pory"
# 38 "data/maps/BattleFrontier_Lounge2/scripts.pory"
# 122 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	call BattleFrontier_Lounge2_EventScript_BufferBattleFactory
# 123 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	goto BattleFrontier_Lounge2_EventScript_GiveAdvice_16
# 124 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 125 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_EventScript_GiveAdvice_20:
# 126 "data/maps/BattleFrontier_Lounge2/scripts.pory"
# 41 "data/maps/BattleFrontier_Lounge2/scripts.pory"
# 127 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	call BattleFrontier_Lounge2_EventScript_BufferBattlePalace
# 128 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	goto BattleFrontier_Lounge2_EventScript_GiveAdvice_19
# 129 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 130 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_EventScript_GiveAdvice_23:
# 131 "data/maps/BattleFrontier_Lounge2/scripts.pory"
# 44 "data/maps/BattleFrontier_Lounge2/scripts.pory"
# 132 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	call BattleFrontier_Lounge2_EventScript_BufferBattleArena
# 133 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	goto BattleFrontier_Lounge2_EventScript_GiveAdvice_22
# 134 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 135 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_EventScript_GiveAdvice_26:
# 136 "data/maps/BattleFrontier_Lounge2/scripts.pory"
# 47 "data/maps/BattleFrontier_Lounge2/scripts.pory"
# 137 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	call BattleFrontier_Lounge2_EventScript_BufferBattlePike
# 138 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	goto BattleFrontier_Lounge2_EventScript_GiveAdvice_25
# 139 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 140 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_EventScript_GiveAdvice_29:
# 141 "data/maps/BattleFrontier_Lounge2/scripts.pory"
# 50 "data/maps/BattleFrontier_Lounge2/scripts.pory"
# 142 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	call BattleFrontier_Lounge2_EventScript_BufferBattlePyramid
# 143 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	goto BattleFrontier_Lounge2_EventScript_GiveAdvice_28
# 144 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 145 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_EventScript_GiveAdvice_32:
# 146 "data/maps/BattleFrontier_Lounge2/scripts.pory"
# 53 "data/maps/BattleFrontier_Lounge2/scripts.pory"
# 147 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	call BattleFrontier_Lounge2_EventScript_BattleTowerNews
# 148 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	goto BattleFrontier_Lounge2_EventScript_GiveAdvice_31
# 149 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 150 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_EventScript_GiveAdvice_35:
# 151 "data/maps/BattleFrontier_Lounge2/scripts.pory"
# 56 "data/maps/BattleFrontier_Lounge2/scripts.pory"
# 152 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	call BattleFrontier_Lounge2_EventScript_FacilityNews
# 153 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	goto BattleFrontier_Lounge2_EventScript_GiveAdvice_34
# 154 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 155 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 156 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_EventScript_BattleTowerNews::
# 157 "data/maps/BattleFrontier_Lounge2/scripts.pory"
# 66 "data/maps/BattleFrontier_Lounge2/scripts.pory"
# 158 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	msgbox BattleFrontier_Lounge2_Text_BattleTowerIsHottest, MSGBOX_DEFAULT
# 159 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	return
# 160 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 161 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 162 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_EventScript_FacilityNews::
# 163 "data/maps/BattleFrontier_Lounge2/scripts.pory"
# 71 "data/maps/BattleFrontier_Lounge2/scripts.pory"
# 164 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	msgbox BattleFrontier_Lounge2_Text_FacilityIsHottest, MSGBOX_DEFAULT
# 165 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	return
# 166 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 167 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 168 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_EventScript_BufferSingle::
# 169 "data/maps/BattleFrontier_Lounge2/scripts.pory"
# 76 "data/maps/BattleFrontier_Lounge2/scripts.pory"
# 170 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	bufferstdstring STR_VAR_1, STDSTRING_SINGLE
# 171 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	return
# 172 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 173 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 174 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_EventScript_BufferDouble::
# 175 "data/maps/BattleFrontier_Lounge2/scripts.pory"
# 81 "data/maps/BattleFrontier_Lounge2/scripts.pory"
# 176 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	bufferstdstring STR_VAR_1, STDSTRING_DOUBLE
# 177 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	return
# 178 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 179 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 180 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_EventScript_BufferMulti::
# 181 "data/maps/BattleFrontier_Lounge2/scripts.pory"
# 86 "data/maps/BattleFrontier_Lounge2/scripts.pory"
# 182 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	bufferstdstring STR_VAR_1, STDSTRING_MULTI
# 183 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	return
# 184 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 185 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 186 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_EventScript_BufferMultiLink::
# 187 "data/maps/BattleFrontier_Lounge2/scripts.pory"
# 91 "data/maps/BattleFrontier_Lounge2/scripts.pory"
# 188 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	bufferstdstring STR_VAR_1, STDSTRING_MULTI_LINK
# 189 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	return
# 190 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 191 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 192 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_EventScript_BufferBattleDome::
# 193 "data/maps/BattleFrontier_Lounge2/scripts.pory"
# 96 "data/maps/BattleFrontier_Lounge2/scripts.pory"
# 194 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	bufferstdstring STR_VAR_1, STDSTRING_BATTLE_DOME
# 195 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	return
# 196 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 197 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 198 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_EventScript_BufferBattleFactory::
# 199 "data/maps/BattleFrontier_Lounge2/scripts.pory"
# 101 "data/maps/BattleFrontier_Lounge2/scripts.pory"
# 200 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	bufferstdstring STR_VAR_1, STDSTRING_BATTLE_FACTORY
# 201 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	return
# 202 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 203 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 204 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_EventScript_BufferBattlePalace::
# 205 "data/maps/BattleFrontier_Lounge2/scripts.pory"
# 106 "data/maps/BattleFrontier_Lounge2/scripts.pory"
# 206 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	bufferstdstring STR_VAR_1, STDSTRING_BATTLE_PALACE
# 207 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	return
# 208 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 209 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 210 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_EventScript_BufferBattleArena::
# 211 "data/maps/BattleFrontier_Lounge2/scripts.pory"
# 111 "data/maps/BattleFrontier_Lounge2/scripts.pory"
# 212 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	bufferstdstring STR_VAR_1, STDSTRING_BATTLE_ARENA
# 213 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	return
# 214 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 215 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 216 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_EventScript_BufferBattlePike::
# 217 "data/maps/BattleFrontier_Lounge2/scripts.pory"
# 116 "data/maps/BattleFrontier_Lounge2/scripts.pory"
# 218 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	bufferstdstring STR_VAR_1, STDSTRING_BATTLE_PIKE
# 219 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	return
# 220 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 221 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 222 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_EventScript_BufferBattlePyramid::
# 223 "data/maps/BattleFrontier_Lounge2/scripts.pory"
# 121 "data/maps/BattleFrontier_Lounge2/scripts.pory"
# 224 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	bufferstdstring STR_VAR_1, STDSTRING_BATTLE_PYRAMID
# 225 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	return
# 226 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 227 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 228 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_EventScript_Maniac1::
# 229 "data/maps/BattleFrontier_Lounge2/scripts.pory"
# 126 "data/maps/BattleFrontier_Lounge2/scripts.pory"
# 230 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	lock
# 231 "data/maps/BattleFrontier_Lounge2/scripts.pory"
# 127 "data/maps/BattleFrontier_Lounge2/scripts.pory"
# 232 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	msgbox BattleFrontier_Lounge2_Text_NewsGatheringPower, MSGBOX_DEFAULT
# 233 "data/maps/BattleFrontier_Lounge2/scripts.pory"
# 128 "data/maps/BattleFrontier_Lounge2/scripts.pory"
# 234 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	release
# 235 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	end
# 236 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 237 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 238 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_EventScript_Maniac2::
# 239 "data/maps/BattleFrontier_Lounge2/scripts.pory"
# 133 "data/maps/BattleFrontier_Lounge2/scripts.pory"
# 240 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	lock
# 241 "data/maps/BattleFrontier_Lounge2/scripts.pory"
# 134 "data/maps/BattleFrontier_Lounge2/scripts.pory"
# 242 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	msgbox BattleFrontier_Lounge2_Text_AmazingPowersOfObservation, MSGBOX_DEFAULT
# 243 "data/maps/BattleFrontier_Lounge2/scripts.pory"
# 135 "data/maps/BattleFrontier_Lounge2/scripts.pory"
# 244 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	release
# 245 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	end
# 246 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 247 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 248 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_EventScript_Maniac3::
# 249 "data/maps/BattleFrontier_Lounge2/scripts.pory"
# 140 "data/maps/BattleFrontier_Lounge2/scripts.pory"
# 250 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	lock
# 251 "data/maps/BattleFrontier_Lounge2/scripts.pory"
# 141 "data/maps/BattleFrontier_Lounge2/scripts.pory"
# 252 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	msgbox BattleFrontier_Lounge2_Text_AmazingPowerOfPersuasion, MSGBOX_DEFAULT
# 253 "data/maps/BattleFrontier_Lounge2/scripts.pory"
# 142 "data/maps/BattleFrontier_Lounge2/scripts.pory"
# 254 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	release
# 255 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	end
# 256 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 257 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 258 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_EventScript_TriathleteF::
# 259 "data/maps/BattleFrontier_Lounge2/scripts.pory"
# 147 "data/maps/BattleFrontier_Lounge2/scripts.pory"
# 260 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	msgbox BattleFrontier_Lounge2_Text_ThisPlaceIsScaringMe, MSGBOX_NPC
# 261 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	end
# 262 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 263 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 264 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_Text_FrontierManiacIntro::
# 265 "data/maps/BattleFrontier_Lounge2/scripts.pory"
# 151 "data/maps/BattleFrontier_Lounge2/scripts.pory"
# 266 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Howdy! When it comes to news about\n"
# 267 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "the BATTLE FRONTIER, I'm no. 1.\p"
# 268 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "You can think of me as\n"
# 269 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "the FRONTIER MANIAC.\p"
# 270 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Just checking, but you are a TRAINER,\n"
# 271 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "isn't that right?\p"
# 272 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "I'll happily share the hottest news\n"
# 273 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "I gathered about the BATTLE FRONTIER.$"
# 274 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 275 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_Text_SwingByForTheLatestWord::
# 276 "data/maps/BattleFrontier_Lounge2/scripts.pory"
# 162 "data/maps/BattleFrontier_Lounge2/scripts.pory"
# 277 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Howdy! Did you swing by to grill me\n"
# 278 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "about the latest word? Oh, all right!$"
# 279 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 280 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_Text_MyInformationsBeenUsefulRight::
# 281 "data/maps/BattleFrontier_Lounge2/scripts.pory"
# 167 "data/maps/BattleFrontier_Lounge2/scripts.pory"
# 282 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Well? Well? Well?\p"
# 283 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "I'm sure my information's been\n"
# 284 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "seriously useful to you, right?$"
# 285 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 286 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_Text_FacilityIsHottest::
# 287 "data/maps/BattleFrontier_Lounge2/scripts.pory"
# 173 "data/maps/BattleFrontier_Lounge2/scripts.pory"
# 288 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Let's see now…\p"
# 289 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "It sounds like the {STR_VAR_1}\n"
# 290 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "is the hottest place going.$"
# 291 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 292 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_Text_BattleTowerIsHottest::
# 293 "data/maps/BattleFrontier_Lounge2/scripts.pory"
# 179 "data/maps/BattleFrontier_Lounge2/scripts.pory"
# 294 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Let's see now…\p"
# 295 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "It sounds like BATTLE TOWER\n"
# 296 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "{STR_VAR_1} is the hottest.$"
# 297 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 298 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_Text_SalonMaidenIsThere::
# 299 "data/maps/BattleFrontier_Lounge2/scripts.pory"
# 185 "data/maps/BattleFrontier_Lounge2/scripts.pory"
# 300 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Bet you didn't know this!\p"
# 301 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "One of those top TRAINERS that SCOTT\n"
# 302 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "calls the FRONTIER BRAINS is there.\p"
# 303 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "It's this mysterious TRAINER called\n"
# 304 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "the SALON MAIDEN that runs the place.$"
# 305 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 306 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_Text_SalonMaidenSilverMons::
# 307 "data/maps/BattleFrontier_Lounge2/scripts.pory"
# 193 "data/maps/BattleFrontier_Lounge2/scripts.pory"
# 308 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Have you battled the SALON MAIDEN?\p"
# 309 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "When she's measuring up her opponent,\n"
# 310 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "she apparently uses these POKéMON:\p"
# 311 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "A PSYCHIC-type PSI POKéMON,\n"
# 312 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "a FIRE-type VOLCANO POKéMON,\l"
# 313 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "and a NORMAL-type SLEEPING POKéMON.$"
# 314 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 315 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_Text_SalonMaidenGoldMons::
# 316 "data/maps/BattleFrontier_Lounge2/scripts.pory"
# 202 "data/maps/BattleFrontier_Lounge2/scripts.pory"
# 317 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Have you battled the SALON MAIDEN\n"
# 318 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "when she's serious?\p"
# 319 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "When she's battling flat out,\n"
# 320 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "she apparently uses these POKéMON:\p"
# 321 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "A DRAGON & PSYCHIC EON POKéMON,\n"
# 322 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "an ELECTRIC-type THUNDER POKéMON,\l"
# 323 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "and a NORMAL-type SLEEPING POKéMON.$"
# 324 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 325 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_Text_DomeAceIsThere::
# 326 "data/maps/BattleFrontier_Lounge2/scripts.pory"
# 212 "data/maps/BattleFrontier_Lounge2/scripts.pory"
# 327 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Bet you didn't know this!\p"
# 328 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "One of those top TRAINERS that SCOTT\n"
# 329 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "calls the FRONTIER BRAINS is there.\p"
# 330 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "It's this flamboyant TRAINER called\n"
# 331 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "the DOME ACE that runs the place.$"
# 332 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 333 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_Text_DomeAceSilverMons::
# 334 "data/maps/BattleFrontier_Lounge2/scripts.pory"
# 220 "data/maps/BattleFrontier_Lounge2/scripts.pory"
# 335 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Have you battled the DOME ACE?\p"
# 336 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "When he's treating the opponent\n"
# 337 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "lightly, he uses these three POKéMON:\p"
# 338 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "A DRAGON & FLYING DRAGON POKéMON,\n"
# 339 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "a WATER & GROUND MUD FISH POKéMON,\l"
# 340 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "and a FIRE & FLYING FLAME POKéMON.$"
# 341 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 342 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_Text_DomeAceGoldMons::
# 343 "data/maps/BattleFrontier_Lounge2/scripts.pory"
# 229 "data/maps/BattleFrontier_Lounge2/scripts.pory"
# 344 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Have you battled the DOME ACE\n"
# 345 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "when he's serious?\p"
# 346 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "When he's demonstrating his strategy,\n"
# 347 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "he uses these three POKéMON:\p"
# 348 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "A DRAGON & FLYING EON POKéMON,\n"
# 349 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "a WATER & GROUND MUD FISH POKéMON,\l"
# 350 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "and a STEEL- & PSYCHIC-type IRON LEG\l"
# 351 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "POKéMON.$"
# 352 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 353 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_Text_FactoryHeadIsThere::
# 354 "data/maps/BattleFrontier_Lounge2/scripts.pory"
# 240 "data/maps/BattleFrontier_Lounge2/scripts.pory"
# 355 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Bet you didn't know this!\p"
# 356 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "One of those top TRAINERS that SCOTT\n"
# 357 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "calls the FRONTIER BRAINS is there.\p"
# 358 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "It's this freaky TRAINER called\n"
# 359 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "the FACTORY HEAD that runs the place.$"
# 360 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 361 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_Text_FactoryHeadSilverMons::
# 362 "data/maps/BattleFrontier_Lounge2/scripts.pory"
# 248 "data/maps/BattleFrontier_Lounge2/scripts.pory"
# 363 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Have you battled the FACTORY HEAD\n"
# 364 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "already?\p"
# 365 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Let me think… When he goes to battle,\n"
# 366 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "he just gets three rental POKéMON.\p"
# 367 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "He battles under pretty much the same\n"
# 368 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "conditions as you.$"
# 369 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 370 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_Text_FactoryHeadGoldMons::
# 371 "data/maps/BattleFrontier_Lounge2/scripts.pory"
# 257 "data/maps/BattleFrontier_Lounge2/scripts.pory"
# 372 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Have you battled the FACTORY HEAD\n"
# 373 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "when he's serious?\p"
# 374 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "When he goes seriously to battle,\n"
# 375 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "he still gets three rental POKéMON.\p"
# 376 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "He battles under virtually the same\n"
# 377 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "conditions as you.$"
# 378 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 379 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_Text_PikeQueenIsThere::
# 380 "data/maps/BattleFrontier_Lounge2/scripts.pory"
# 266 "data/maps/BattleFrontier_Lounge2/scripts.pory"
# 381 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Bet you didn't know this!\p"
# 382 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "One of those top TRAINERS that SCOTT\n"
# 383 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "calls the FRONTIER BRAINS is there.\p"
# 384 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "It's this scary TRAINER called\n"
# 385 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "the PIKE QUEEN that runs the place.$"
# 386 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 387 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_Text_PikeQueenSilverMons::
# 388 "data/maps/BattleFrontier_Lounge2/scripts.pory"
# 274 "data/maps/BattleFrontier_Lounge2/scripts.pory"
# 389 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Have you battled the PIKE QUEEN\n"
# 390 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "before?\p"
# 391 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "When she's in a good mood, they say\n"
# 392 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "she uses these three POKéMON:\p"
# 393 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "A POISON-type FANG SNAKE POKéMON,\n"
# 394 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "a BUG & ROCK MOLD POKéMON,\l"
# 395 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "and a WATER-type TENDER POKéMON.$"
# 396 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 397 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_Text_PikeQueenGoldMons::
# 398 "data/maps/BattleFrontier_Lounge2/scripts.pory"
# 284 "data/maps/BattleFrontier_Lounge2/scripts.pory"
# 399 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Have you battled the PIKE QUEEN\n"
# 400 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "when she's serious?\p"
# 401 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "When she's seriously annoyed, they say\n"
# 402 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "she uses these three POKéMON:\p"
# 403 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "A POISON-type FANG SNAKE POKéMON,\n"
# 404 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "a STEEL & GROUND IRON SNAKE POKéMON,\l"
# 405 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "and a WATER- & FLYING-type ATROCIOUS\l"
# 406 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "POKéMON.$"
# 407 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 408 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_Text_ArenaTycoonIsThere::
# 409 "data/maps/BattleFrontier_Lounge2/scripts.pory"
# 295 "data/maps/BattleFrontier_Lounge2/scripts.pory"
# 410 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Bet you didn't know this!\p"
# 411 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "One of those top TRAINERS that SCOTT\n"
# 412 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "calls the FRONTIER BRAINS is there.\p"
# 413 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "It's this cute TRAINER called\n"
# 414 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "the ARENA TYCOON that runs the place.$"
# 415 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 416 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_Text_ArenaTycoonSilverMons::
# 417 "data/maps/BattleFrontier_Lounge2/scripts.pory"
# 303 "data/maps/BattleFrontier_Lounge2/scripts.pory"
# 418 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Have you battled the ARENA TYCOON\n"
# 419 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "before?\p"
# 420 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "When she's assessing the foe's ability,\n"
# 421 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "she supposedly uses these POKéMON:\p"
# 422 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "A BUG & FIGHTING SINGLE HORN POKéMON,\n"
# 423 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "a DARK-type MOONLIGHT POKéMON,\l"
# 424 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "and a BUG & GHOST SHED POKéMON.$"
# 425 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 426 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_Text_ArenaTycoonGoldMons::
# 427 "data/maps/BattleFrontier_Lounge2/scripts.pory"
# 313 "data/maps/BattleFrontier_Lounge2/scripts.pory"
# 428 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Have you battled the ARENA TYCOON\n"
# 429 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "when she's serious?\p"
# 430 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "When she battles for keeps,\n"
# 431 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "she supposedly uses these POKéMON:\p"
# 432 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "A DARK-type MOONLIGHT POKéMON,\n"
# 433 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "a GHOST & POISON SHADOW POKéMON\l"
# 434 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "and a GRASS- & FIGHTING-type\l"
# 435 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "MUSHROOM POKéMON.$"
# 436 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 437 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_Text_PalaceMavenIsThere::
# 438 "data/maps/BattleFrontier_Lounge2/scripts.pory"
# 324 "data/maps/BattleFrontier_Lounge2/scripts.pory"
# 439 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Bet you didn't know this!\p"
# 440 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "One of those top TRAINERS that SCOTT\n"
# 441 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "calls the FRONTIER BRAINS is there.\p"
# 442 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "It's this sinister TRAINER called\n"
# 443 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "the PALACE MAVEN that runs the place.$"
# 444 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 445 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_Text_PalaceMavenSilverMons::
# 446 "data/maps/BattleFrontier_Lounge2/scripts.pory"
# 332 "data/maps/BattleFrontier_Lounge2/scripts.pory"
# 447 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Have you battled the PALACE MAVEN\n"
# 448 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "before?\p"
# 449 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "When he's testing the opponent's\n"
# 450 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "spirit, he's said to use these POKéMON:\p"
# 451 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "A POISON & FLYING-type BAT POKéMON,\n"
# 452 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "a NORMAL-type LAZY POKéMON, and a\l"
# 453 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "WATER- & ICE-type TRANSPORT POKéMON.$"
# 454 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 455 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_Text_PalaceMavenGoldMons::
# 456 "data/maps/BattleFrontier_Lounge2/scripts.pory"
# 342 "data/maps/BattleFrontier_Lounge2/scripts.pory"
# 457 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Have you battled the PALACE MAVEN\n"
# 458 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "when he's serious?\p"
# 459 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "When he throws his entire might into\n"
# 460 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "battle, he's said to use these POKéMON:\p"
# 461 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "A FIRE-type LEGENDARY POKéMON,\n"
# 462 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "a NORMAL-type LAZY POKéMON,\l"
# 463 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "and a WATER-type AURORA POKéMON.$"
# 464 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 465 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_Text_PyramidKingIsThere::
# 466 "data/maps/BattleFrontier_Lounge2/scripts.pory"
# 352 "data/maps/BattleFrontier_Lounge2/scripts.pory"
# 467 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Bet you didn't know this!\p"
# 468 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "One of those top TRAINERS that SCOTT\n"
# 469 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "calls the FRONTIER BRAINS is there.\p"
# 470 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "It's this fiery-hot TRAINER called\n"
# 471 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "the PYRAMID KING that runs the place.$"
# 472 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 473 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_Text_PyramidKingSilverMons::
# 474 "data/maps/BattleFrontier_Lounge2/scripts.pory"
# 360 "data/maps/BattleFrontier_Lounge2/scripts.pory"
# 475 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Have you battled the PYRAMID KING\n"
# 476 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "before?\p"
# 477 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "When he's checking the foe's power,\n"
# 478 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "he apparently uses these POKéMON:\p"
# 479 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "A ROCK-type ROCK PEAK POKéMON,\n"
# 480 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "an ICE-type ICEBERG POKéMON,\l"
# 481 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "and a STEEL-type IRON POKéMON.$"
# 482 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 483 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_Text_PyramidKingGoldMons::
# 484 "data/maps/BattleFrontier_Lounge2/scripts.pory"
# 370 "data/maps/BattleFrontier_Lounge2/scripts.pory"
# 485 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Have you battled the PYRAMID KING\n"
# 486 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "when he's serious?\p"
# 487 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "When he's pumped with hot power,\n"
# 488 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "he apparently uses these POKéMON:\p"
# 489 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "An ICE & FLYING FREEZE POKéMON, an\n"
# 490 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "ELECTRIC & FLYING ELECTRIC POKéMON,\l"
# 491 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "and a FIRE- & FLYING-type FLAME\l"
# 492 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "POKéMON.$"
# 493 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 494 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_Text_DoubleBattleAdvice1::
# 495 "data/maps/BattleFrontier_Lounge2/scripts.pory"
# 381 "data/maps/BattleFrontier_Lounge2/scripts.pory"
# 496 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Sure, there are several places where\n"
# 497 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "you can enter DOUBLE BATTLES.\p"
# 498 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "But the DOUBLE BATTLE ROOMS of\n"
# 499 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "the BATTLE TOWER are, like, basic!\p"
# 500 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "They're where you should learn about\n"
# 501 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "how DOUBLE BATTLES are played here\l"
# 502 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "in the BATTLE FRONTIER.$"
# 503 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 504 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_Text_DoubleBattleAdvice2::
# 505 "data/maps/BattleFrontier_Lounge2/scripts.pory"
# 391 "data/maps/BattleFrontier_Lounge2/scripts.pory"
# 506 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Watch yourself in the battles here.\p"
# 507 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "I hear there are TRAINERS that have\n"
# 508 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "strategies they developed just for\l"
# 509 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "DOUBLE BATTLES.$"
# 510 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 511 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_Text_DoubleBattleAdvice3::
# 512 "data/maps/BattleFrontier_Lounge2/scripts.pory"
# 398 "data/maps/BattleFrontier_Lounge2/scripts.pory"
# 513 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Once you're confident and comfortable\n"
# 514 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "with DOUBLE BATTLES here, you should\l"
# 515 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "think about challenging other places\l"
# 516 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "offering DOUBLE BATTLES.$"
# 517 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 518 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_Text_MultiBattleAdvice::
# 519 "data/maps/BattleFrontier_Lounge2/scripts.pory"
# 405 "data/maps/BattleFrontier_Lounge2/scripts.pory"
# 520 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "All sorts of TRAINERS gather in\n"
# 521 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "the BATTLE SALON.\p"
# 522 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Just think--you may run into your\n"
# 523 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "friends or followers!\l"
# 524 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "You should look carefully!$"
# 525 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 526 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_Text_LinkMultiBattleAdvice::
# 527 "data/maps/BattleFrontier_Lounge2/scripts.pory"
# 413 "data/maps/BattleFrontier_Lounge2/scripts.pory"
# 528 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "If you're with a friend, head for the\n"
# 529 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "LINK MULTI BATTLE ROOM.\p"
# 530 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "If you play with a strong friend,\n"
# 531 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "you can expect to see tough foes!$"
# 532 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 533 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_Text_NewsGatheringPower::
# 534 "data/maps/BattleFrontier_Lounge2/scripts.pory"
# 420 "data/maps/BattleFrontier_Lounge2/scripts.pory"
# 535 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "What amazing news-gathering power!\n"
# 536 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "My mentor's like none other!$"
# 537 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 538 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_Text_AmazingPowersOfObservation::
# 539 "data/maps/BattleFrontier_Lounge2/scripts.pory"
# 425 "data/maps/BattleFrontier_Lounge2/scripts.pory"
# 540 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "What amazing powers of observation!\n"
# 541 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "My mentor's like none other!$"
# 542 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 543 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_Text_AmazingPowerOfPersuasion::
# 544 "data/maps/BattleFrontier_Lounge2/scripts.pory"
# 430 "data/maps/BattleFrontier_Lounge2/scripts.pory"
# 545 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "What amazing power of persuasion!\n"
# 546 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "My mentor's like none other!$"
# 547 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 548 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_Text_ThisPlaceIsScaringMe::
# 549 "data/maps/BattleFrontier_Lounge2/scripts.pory"
# 435 "data/maps/BattleFrontier_Lounge2/scripts.pory"
# 550 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "…What is this place?\n"
# 551 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "It's scaring me…$"
