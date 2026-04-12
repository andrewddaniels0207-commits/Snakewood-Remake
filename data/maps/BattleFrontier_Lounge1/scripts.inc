# 1 "data/maps/BattleFrontier_Lounge1/scripts.pory"

# 2 "data/maps/BattleFrontier_Lounge1/scripts.pory"
BattleFrontier_Lounge1_MapScripts::
# 3 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.byte 0
# 4 "data/maps/BattleFrontier_Lounge1/scripts.pory"

# 5 "data/maps/BattleFrontier_Lounge1/scripts.pory"

# 6 "data/maps/BattleFrontier_Lounge1/scripts.pory"
BattleFrontier_Lounge1_EventScript_Breeder::
# 7 "data/maps/BattleFrontier_Lounge1/scripts.pory"
# 4 "data/maps/BattleFrontier_Lounge1/scripts.pory"
# 8 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	lock
# 9 "data/maps/BattleFrontier_Lounge1/scripts.pory"
# 5 "data/maps/BattleFrontier_Lounge1/scripts.pory"
# 10 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	faceplayer
# 11 "data/maps/BattleFrontier_Lounge1/scripts.pory"
# 6 "data/maps/BattleFrontier_Lounge1/scripts.pory"
# 12 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	goto_if_unset FLAG_MET_BATTLE_FRONTIER_BREEDER, BattleFrontier_Lounge1_EventScript_Breeder_2
# 13 "data/maps/BattleFrontier_Lounge1/scripts.pory"
BattleFrontier_Lounge1_EventScript_Breeder_1:
# 14 "data/maps/BattleFrontier_Lounge1/scripts.pory"
# 9 "data/maps/BattleFrontier_Lounge1/scripts.pory"
# 15 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	goto_if_set FLAG_MET_BATTLE_FRONTIER_BREEDER, BattleFrontier_Lounge1_EventScript_Breeder_5
# 16 "data/maps/BattleFrontier_Lounge1/scripts.pory"
BattleFrontier_Lounge1_EventScript_Breeder_4:
# 17 "data/maps/BattleFrontier_Lounge1/scripts.pory"
# 12 "data/maps/BattleFrontier_Lounge1/scripts.pory"
# 18 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	setflag FLAG_MET_BATTLE_FRONTIER_BREEDER
# 19 "data/maps/BattleFrontier_Lounge1/scripts.pory"
# 13 "data/maps/BattleFrontier_Lounge1/scripts.pory"
# 20 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	goto BattleFrontier_Lounge1_EventScript_ChooseMonToShowBreeder
# 21 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	end
# 22 "data/maps/BattleFrontier_Lounge1/scripts.pory"

# 23 "data/maps/BattleFrontier_Lounge1/scripts.pory"
BattleFrontier_Lounge1_EventScript_Breeder_2:
# 24 "data/maps/BattleFrontier_Lounge1/scripts.pory"
# 7 "data/maps/BattleFrontier_Lounge1/scripts.pory"
# 25 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	call BattleFrontier_Lounge1_EventScript_BreederIntro
# 26 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	goto BattleFrontier_Lounge1_EventScript_Breeder_1
# 27 "data/maps/BattleFrontier_Lounge1/scripts.pory"

# 28 "data/maps/BattleFrontier_Lounge1/scripts.pory"
BattleFrontier_Lounge1_EventScript_Breeder_5:
# 29 "data/maps/BattleFrontier_Lounge1/scripts.pory"
# 10 "data/maps/BattleFrontier_Lounge1/scripts.pory"
# 30 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	call BattleFrontier_Lounge1_EventScript_AlreadyMetBreeder
# 31 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	goto BattleFrontier_Lounge1_EventScript_Breeder_4
# 32 "data/maps/BattleFrontier_Lounge1/scripts.pory"

# 33 "data/maps/BattleFrontier_Lounge1/scripts.pory"

# 34 "data/maps/BattleFrontier_Lounge1/scripts.pory"
BattleFrontier_Lounge1_EventScript_ChooseMonToShowBreeder::
# 35 "data/maps/BattleFrontier_Lounge1/scripts.pory"
# 18 "data/maps/BattleFrontier_Lounge1/scripts.pory"
# 36 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	chooseboxmon
# 37 "data/maps/BattleFrontier_Lounge1/scripts.pory"
# 19 "data/maps/BattleFrontier_Lounge1/scripts.pory"
# 38 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	waitstate
# 39 "data/maps/BattleFrontier_Lounge1/scripts.pory"
# 20 "data/maps/BattleFrontier_Lounge1/scripts.pory"
# 40 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
# 41 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	goto_if_ne BattleFrontier_Lounge1_EventScript_ChooseMonToShowBreeder_2
# 42 "data/maps/BattleFrontier_Lounge1/scripts.pory"
BattleFrontier_Lounge1_EventScript_ChooseMonToShowBreeder_1:
# 43 "data/maps/BattleFrontier_Lounge1/scripts.pory"
# 23 "data/maps/BattleFrontier_Lounge1/scripts.pory"
# 44 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
# 45 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	goto_if_eq BattleFrontier_Lounge1_EventScript_ChooseMonToShowBreeder_5
# 46 "data/maps/BattleFrontier_Lounge1/scripts.pory"
BattleFrontier_Lounge1_EventScript_ChooseMonToShowBreeder_4:
# 47 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	end
# 48 "data/maps/BattleFrontier_Lounge1/scripts.pory"

# 49 "data/maps/BattleFrontier_Lounge1/scripts.pory"
BattleFrontier_Lounge1_EventScript_ChooseMonToShowBreeder_2:
# 50 "data/maps/BattleFrontier_Lounge1/scripts.pory"
# 21 "data/maps/BattleFrontier_Lounge1/scripts.pory"
# 51 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	goto BattleFrontier_Lounge1_EventScript_ShowMonToBreeder
# 52 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	goto BattleFrontier_Lounge1_EventScript_ChooseMonToShowBreeder_1
# 53 "data/maps/BattleFrontier_Lounge1/scripts.pory"

# 54 "data/maps/BattleFrontier_Lounge1/scripts.pory"
BattleFrontier_Lounge1_EventScript_ChooseMonToShowBreeder_5:
# 55 "data/maps/BattleFrontier_Lounge1/scripts.pory"
# 24 "data/maps/BattleFrontier_Lounge1/scripts.pory"
# 56 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	goto BattleFrontier_Lounge1_EventScript_CancelMonSelect
# 57 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	goto BattleFrontier_Lounge1_EventScript_ChooseMonToShowBreeder_4
# 58 "data/maps/BattleFrontier_Lounge1/scripts.pory"

# 59 "data/maps/BattleFrontier_Lounge1/scripts.pory"

# 60 "data/maps/BattleFrontier_Lounge1/scripts.pory"
BattleFrontier_Lounge1_EventScript_BreederIntro::
# 61 "data/maps/BattleFrontier_Lounge1/scripts.pory"
# 30 "data/maps/BattleFrontier_Lounge1/scripts.pory"
# 62 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	msgbox BattleFrontier_Lounge1_Text_PokemonBreederIntro, MSGBOX_DEFAULT
# 63 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	return
# 64 "data/maps/BattleFrontier_Lounge1/scripts.pory"

# 65 "data/maps/BattleFrontier_Lounge1/scripts.pory"

# 66 "data/maps/BattleFrontier_Lounge1/scripts.pory"
BattleFrontier_Lounge1_EventScript_AlreadyMetBreeder::
# 67 "data/maps/BattleFrontier_Lounge1/scripts.pory"
# 35 "data/maps/BattleFrontier_Lounge1/scripts.pory"
# 68 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	msgbox BattleFrontier_Lounge1_Text_LetsLookAtYourPokemon, MSGBOX_DEFAULT
# 69 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	return
# 70 "data/maps/BattleFrontier_Lounge1/scripts.pory"

# 71 "data/maps/BattleFrontier_Lounge1/scripts.pory"

# 72 "data/maps/BattleFrontier_Lounge1/scripts.pory"
BattleFrontier_Lounge1_EventScript_ShowMonToBreeder::
# 73 "data/maps/BattleFrontier_Lounge1/scripts.pory"
# 40 "data/maps/BattleFrontier_Lounge1/scripts.pory"
# 74 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 75 "data/maps/BattleFrontier_Lounge1/scripts.pory"
# 41 "data/maps/BattleFrontier_Lounge1/scripts.pory"
# 76 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	compare VAR_RESULT, SPECIES_EGG
# 77 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	goto_if_eq BattleFrontier_Lounge1_EventScript_ShowMonToBreeder_2
# 78 "data/maps/BattleFrontier_Lounge1/scripts.pory"
BattleFrontier_Lounge1_EventScript_ShowMonToBreeder_1:
# 79 "data/maps/BattleFrontier_Lounge1/scripts.pory"
# 44 "data/maps/BattleFrontier_Lounge1/scripts.pory"
# 80 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	special BufferVarsForIVRater
# 81 "data/maps/BattleFrontier_Lounge1/scripts.pory"
# 45 "data/maps/BattleFrontier_Lounge1/scripts.pory"
# 82 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	compare VAR_0x8005, 90
# 83 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	goto_if_le BattleFrontier_Lounge1_EventScript_ShowMonToBreeder_5
# 84 "data/maps/BattleFrontier_Lounge1/scripts.pory"
BattleFrontier_Lounge1_EventScript_ShowMonToBreeder_4:
# 85 "data/maps/BattleFrontier_Lounge1/scripts.pory"
# 48 "data/maps/BattleFrontier_Lounge1/scripts.pory"
# 86 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	compare VAR_0x8005, 120
# 87 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	goto_if_le BattleFrontier_Lounge1_EventScript_ShowMonToBreeder_8
# 88 "data/maps/BattleFrontier_Lounge1/scripts.pory"
BattleFrontier_Lounge1_EventScript_ShowMonToBreeder_7:
# 89 "data/maps/BattleFrontier_Lounge1/scripts.pory"
# 51 "data/maps/BattleFrontier_Lounge1/scripts.pory"
# 90 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	compare VAR_0x8005, 150
# 91 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	goto_if_le BattleFrontier_Lounge1_EventScript_ShowMonToBreeder_11
# 92 "data/maps/BattleFrontier_Lounge1/scripts.pory"
BattleFrontier_Lounge1_EventScript_ShowMonToBreeder_10:
# 93 "data/maps/BattleFrontier_Lounge1/scripts.pory"
# 54 "data/maps/BattleFrontier_Lounge1/scripts.pory"
# 94 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	compare VAR_0x8005, 151
# 95 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	goto_if_ge BattleFrontier_Lounge1_EventScript_ShowMonToBreeder_14
# 96 "data/maps/BattleFrontier_Lounge1/scripts.pory"
BattleFrontier_Lounge1_EventScript_ShowMonToBreeder_13:
# 97 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	end
# 98 "data/maps/BattleFrontier_Lounge1/scripts.pory"

# 99 "data/maps/BattleFrontier_Lounge1/scripts.pory"
BattleFrontier_Lounge1_EventScript_ShowMonToBreeder_2:
# 100 "data/maps/BattleFrontier_Lounge1/scripts.pory"
# 42 "data/maps/BattleFrontier_Lounge1/scripts.pory"
# 101 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	goto BattleFrontier_Lounge1_EventScript_ShowEggToBreeder
# 102 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	goto BattleFrontier_Lounge1_EventScript_ShowMonToBreeder_1
# 103 "data/maps/BattleFrontier_Lounge1/scripts.pory"

# 104 "data/maps/BattleFrontier_Lounge1/scripts.pory"
BattleFrontier_Lounge1_EventScript_ShowMonToBreeder_5:
# 105 "data/maps/BattleFrontier_Lounge1/scripts.pory"
# 46 "data/maps/BattleFrontier_Lounge1/scripts.pory"
# 106 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	goto BattleFrontier_Lounge1_EventScript_AverageTotalIVs
# 107 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	goto BattleFrontier_Lounge1_EventScript_ShowMonToBreeder_4
# 108 "data/maps/BattleFrontier_Lounge1/scripts.pory"

# 109 "data/maps/BattleFrontier_Lounge1/scripts.pory"
BattleFrontier_Lounge1_EventScript_ShowMonToBreeder_8:
# 110 "data/maps/BattleFrontier_Lounge1/scripts.pory"
# 49 "data/maps/BattleFrontier_Lounge1/scripts.pory"
# 111 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	goto BattleFrontier_Lounge1_EventScript_AboveAverageTotalIVs
# 112 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	goto BattleFrontier_Lounge1_EventScript_ShowMonToBreeder_7
# 113 "data/maps/BattleFrontier_Lounge1/scripts.pory"

# 114 "data/maps/BattleFrontier_Lounge1/scripts.pory"
BattleFrontier_Lounge1_EventScript_ShowMonToBreeder_11:
# 115 "data/maps/BattleFrontier_Lounge1/scripts.pory"
# 52 "data/maps/BattleFrontier_Lounge1/scripts.pory"
# 116 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	goto BattleFrontier_Lounge1_EventScript_HighTotalIVs
# 117 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	goto BattleFrontier_Lounge1_EventScript_ShowMonToBreeder_10
# 118 "data/maps/BattleFrontier_Lounge1/scripts.pory"

# 119 "data/maps/BattleFrontier_Lounge1/scripts.pory"
BattleFrontier_Lounge1_EventScript_ShowMonToBreeder_14:
# 120 "data/maps/BattleFrontier_Lounge1/scripts.pory"
# 55 "data/maps/BattleFrontier_Lounge1/scripts.pory"
# 121 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	goto BattleFrontier_Lounge1_EventScript_VeryHighTotalIVs
# 122 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	goto BattleFrontier_Lounge1_EventScript_ShowMonToBreeder_13
# 123 "data/maps/BattleFrontier_Lounge1/scripts.pory"

# 124 "data/maps/BattleFrontier_Lounge1/scripts.pory"

# 125 "data/maps/BattleFrontier_Lounge1/scripts.pory"
BattleFrontier_Lounge1_EventScript_ShowEggToBreeder::
# 126 "data/maps/BattleFrontier_Lounge1/scripts.pory"
# 61 "data/maps/BattleFrontier_Lounge1/scripts.pory"
# 127 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	msgbox BattleFrontier_Lounge1_Text_EvenICantTell, MSGBOX_DEFAULT
# 128 "data/maps/BattleFrontier_Lounge1/scripts.pory"
# 62 "data/maps/BattleFrontier_Lounge1/scripts.pory"
# 129 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	goto BattleFrontier_Lounge1_EventScript_ChooseMonToShowBreeder
# 130 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	end
# 131 "data/maps/BattleFrontier_Lounge1/scripts.pory"

# 132 "data/maps/BattleFrontier_Lounge1/scripts.pory"

# 133 "data/maps/BattleFrontier_Lounge1/scripts.pory"
BattleFrontier_Lounge1_EventScript_HighestIVStat::
# 134 "data/maps/BattleFrontier_Lounge1/scripts.pory"
# 67 "data/maps/BattleFrontier_Lounge1/scripts.pory"
# 135 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	compare VAR_0x8006, STAT_HP
# 136 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	goto_if_eq BattleFrontier_Lounge1_EventScript_HighestIVStat_2
# 137 "data/maps/BattleFrontier_Lounge1/scripts.pory"
BattleFrontier_Lounge1_EventScript_HighestIVStat_1:
# 138 "data/maps/BattleFrontier_Lounge1/scripts.pory"
# 70 "data/maps/BattleFrontier_Lounge1/scripts.pory"
# 139 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	compare VAR_0x8006, STAT_ATK
# 140 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	goto_if_eq BattleFrontier_Lounge1_EventScript_HighestIVStat_5
# 141 "data/maps/BattleFrontier_Lounge1/scripts.pory"
BattleFrontier_Lounge1_EventScript_HighestIVStat_4:
# 142 "data/maps/BattleFrontier_Lounge1/scripts.pory"
# 73 "data/maps/BattleFrontier_Lounge1/scripts.pory"
# 143 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	compare VAR_0x8006, STAT_DEF
# 144 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	goto_if_eq BattleFrontier_Lounge1_EventScript_HighestIVStat_8
# 145 "data/maps/BattleFrontier_Lounge1/scripts.pory"
BattleFrontier_Lounge1_EventScript_HighestIVStat_7:
# 146 "data/maps/BattleFrontier_Lounge1/scripts.pory"
# 76 "data/maps/BattleFrontier_Lounge1/scripts.pory"
# 147 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	compare VAR_0x8006, STAT_SPEED
# 148 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	goto_if_eq BattleFrontier_Lounge1_EventScript_HighestIVStat_11
# 149 "data/maps/BattleFrontier_Lounge1/scripts.pory"
BattleFrontier_Lounge1_EventScript_HighestIVStat_10:
# 150 "data/maps/BattleFrontier_Lounge1/scripts.pory"
# 79 "data/maps/BattleFrontier_Lounge1/scripts.pory"
# 151 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	compare VAR_0x8006, STAT_SPATK
# 152 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	goto_if_eq BattleFrontier_Lounge1_EventScript_HighestIVStat_14
# 153 "data/maps/BattleFrontier_Lounge1/scripts.pory"
BattleFrontier_Lounge1_EventScript_HighestIVStat_13:
# 154 "data/maps/BattleFrontier_Lounge1/scripts.pory"
# 82 "data/maps/BattleFrontier_Lounge1/scripts.pory"
# 155 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	compare VAR_0x8006, STAT_SPDEF
# 156 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	goto_if_eq BattleFrontier_Lounge1_EventScript_HighestIVStat_17
# 157 "data/maps/BattleFrontier_Lounge1/scripts.pory"
BattleFrontier_Lounge1_EventScript_HighestIVStat_16:
# 158 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	end
# 159 "data/maps/BattleFrontier_Lounge1/scripts.pory"

# 160 "data/maps/BattleFrontier_Lounge1/scripts.pory"
BattleFrontier_Lounge1_EventScript_HighestIVStat_2:
# 161 "data/maps/BattleFrontier_Lounge1/scripts.pory"
# 68 "data/maps/BattleFrontier_Lounge1/scripts.pory"
# 162 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	goto BattleFrontier_Lounge1_EventScript_HighestIVHP
# 163 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	goto BattleFrontier_Lounge1_EventScript_HighestIVStat_1
# 164 "data/maps/BattleFrontier_Lounge1/scripts.pory"

# 165 "data/maps/BattleFrontier_Lounge1/scripts.pory"
BattleFrontier_Lounge1_EventScript_HighestIVStat_5:
# 166 "data/maps/BattleFrontier_Lounge1/scripts.pory"
# 71 "data/maps/BattleFrontier_Lounge1/scripts.pory"
# 167 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	goto BattleFrontier_Lounge1_EventScript_HighestIVAtk
# 168 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	goto BattleFrontier_Lounge1_EventScript_HighestIVStat_4
# 169 "data/maps/BattleFrontier_Lounge1/scripts.pory"

# 170 "data/maps/BattleFrontier_Lounge1/scripts.pory"
BattleFrontier_Lounge1_EventScript_HighestIVStat_8:
# 171 "data/maps/BattleFrontier_Lounge1/scripts.pory"
# 74 "data/maps/BattleFrontier_Lounge1/scripts.pory"
# 172 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	goto BattleFrontier_Lounge1_EventScript_HighestIVDef
# 173 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	goto BattleFrontier_Lounge1_EventScript_HighestIVStat_7
# 174 "data/maps/BattleFrontier_Lounge1/scripts.pory"

# 175 "data/maps/BattleFrontier_Lounge1/scripts.pory"
BattleFrontier_Lounge1_EventScript_HighestIVStat_11:
# 176 "data/maps/BattleFrontier_Lounge1/scripts.pory"
# 77 "data/maps/BattleFrontier_Lounge1/scripts.pory"
# 177 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	goto BattleFrontier_Lounge1_EventScript_HighestIVSpeed
# 178 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	goto BattleFrontier_Lounge1_EventScript_HighestIVStat_10
# 179 "data/maps/BattleFrontier_Lounge1/scripts.pory"

# 180 "data/maps/BattleFrontier_Lounge1/scripts.pory"
BattleFrontier_Lounge1_EventScript_HighestIVStat_14:
# 181 "data/maps/BattleFrontier_Lounge1/scripts.pory"
# 80 "data/maps/BattleFrontier_Lounge1/scripts.pory"
# 182 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	goto BattleFrontier_Lounge1_EventScript_HighestIVSpAtk
# 183 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	goto BattleFrontier_Lounge1_EventScript_HighestIVStat_13
# 184 "data/maps/BattleFrontier_Lounge1/scripts.pory"

# 185 "data/maps/BattleFrontier_Lounge1/scripts.pory"
BattleFrontier_Lounge1_EventScript_HighestIVStat_17:
# 186 "data/maps/BattleFrontier_Lounge1/scripts.pory"
# 83 "data/maps/BattleFrontier_Lounge1/scripts.pory"
# 187 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	goto BattleFrontier_Lounge1_EventScript_HighestIVSpDef
# 188 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	goto BattleFrontier_Lounge1_EventScript_HighestIVStat_16
# 189 "data/maps/BattleFrontier_Lounge1/scripts.pory"

# 190 "data/maps/BattleFrontier_Lounge1/scripts.pory"

# 191 "data/maps/BattleFrontier_Lounge1/scripts.pory"
BattleFrontier_Lounge1_EventScript_HighestIVValue::
# 192 "data/maps/BattleFrontier_Lounge1/scripts.pory"
# 89 "data/maps/BattleFrontier_Lounge1/scripts.pory"
# 193 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	compare VAR_0x8007, 15
# 194 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	goto_if_le BattleFrontier_Lounge1_EventScript_HighestIVValue_2
# 195 "data/maps/BattleFrontier_Lounge1/scripts.pory"
BattleFrontier_Lounge1_EventScript_HighestIVValue_1:
# 196 "data/maps/BattleFrontier_Lounge1/scripts.pory"
# 92 "data/maps/BattleFrontier_Lounge1/scripts.pory"
# 197 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	compare VAR_0x8007, 25
# 198 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	goto_if_le BattleFrontier_Lounge1_EventScript_HighestIVValue_5
# 199 "data/maps/BattleFrontier_Lounge1/scripts.pory"
BattleFrontier_Lounge1_EventScript_HighestIVValue_4:
# 200 "data/maps/BattleFrontier_Lounge1/scripts.pory"
# 95 "data/maps/BattleFrontier_Lounge1/scripts.pory"
# 201 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	compare VAR_0x8007, 30
# 202 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	goto_if_le BattleFrontier_Lounge1_EventScript_HighestIVValue_8
# 203 "data/maps/BattleFrontier_Lounge1/scripts.pory"
BattleFrontier_Lounge1_EventScript_HighestIVValue_7:
# 204 "data/maps/BattleFrontier_Lounge1/scripts.pory"
# 98 "data/maps/BattleFrontier_Lounge1/scripts.pory"
# 205 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	compare VAR_0x8007, 31
# 206 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	goto_if_ge BattleFrontier_Lounge1_EventScript_HighestIVValue_11
# 207 "data/maps/BattleFrontier_Lounge1/scripts.pory"
BattleFrontier_Lounge1_EventScript_HighestIVValue_10:
# 208 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	end
# 209 "data/maps/BattleFrontier_Lounge1/scripts.pory"

# 210 "data/maps/BattleFrontier_Lounge1/scripts.pory"
BattleFrontier_Lounge1_EventScript_HighestIVValue_2:
# 211 "data/maps/BattleFrontier_Lounge1/scripts.pory"
# 90 "data/maps/BattleFrontier_Lounge1/scripts.pory"
# 212 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	goto BattleFrontier_Lounge1_EventScript_HighestIVLow
# 213 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	goto BattleFrontier_Lounge1_EventScript_HighestIVValue_1
# 214 "data/maps/BattleFrontier_Lounge1/scripts.pory"

# 215 "data/maps/BattleFrontier_Lounge1/scripts.pory"
BattleFrontier_Lounge1_EventScript_HighestIVValue_5:
# 216 "data/maps/BattleFrontier_Lounge1/scripts.pory"
# 93 "data/maps/BattleFrontier_Lounge1/scripts.pory"
# 217 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	goto BattleFrontier_Lounge1_EventScript_HighestIVMid
# 218 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	goto BattleFrontier_Lounge1_EventScript_HighestIVValue_4
# 219 "data/maps/BattleFrontier_Lounge1/scripts.pory"

# 220 "data/maps/BattleFrontier_Lounge1/scripts.pory"
BattleFrontier_Lounge1_EventScript_HighestIVValue_8:
# 221 "data/maps/BattleFrontier_Lounge1/scripts.pory"
# 96 "data/maps/BattleFrontier_Lounge1/scripts.pory"
# 222 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	goto BattleFrontier_Lounge1_EventScript_HighestIVHigh
# 223 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	goto BattleFrontier_Lounge1_EventScript_HighestIVValue_7
# 224 "data/maps/BattleFrontier_Lounge1/scripts.pory"

# 225 "data/maps/BattleFrontier_Lounge1/scripts.pory"
BattleFrontier_Lounge1_EventScript_HighestIVValue_11:
# 226 "data/maps/BattleFrontier_Lounge1/scripts.pory"
# 99 "data/maps/BattleFrontier_Lounge1/scripts.pory"
# 227 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	goto BattleFrontier_Lounge1_EventScript_HighestIVMax
# 228 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	goto BattleFrontier_Lounge1_EventScript_HighestIVValue_10
# 229 "data/maps/BattleFrontier_Lounge1/scripts.pory"

# 230 "data/maps/BattleFrontier_Lounge1/scripts.pory"

# 231 "data/maps/BattleFrontier_Lounge1/scripts.pory"
BattleFrontier_Lounge1_EventScript_EndBreederComments::
# 232 "data/maps/BattleFrontier_Lounge1/scripts.pory"
# 105 "data/maps/BattleFrontier_Lounge1/scripts.pory"
# 233 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	release
# 234 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	end
# 235 "data/maps/BattleFrontier_Lounge1/scripts.pory"

# 236 "data/maps/BattleFrontier_Lounge1/scripts.pory"

# 237 "data/maps/BattleFrontier_Lounge1/scripts.pory"
BattleFrontier_Lounge1_EventScript_AverageTotalIVs::
# 238 "data/maps/BattleFrontier_Lounge1/scripts.pory"
# 110 "data/maps/BattleFrontier_Lounge1/scripts.pory"
# 239 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	msgbox BattleFrontier_Lounge1_Text_AverageAbility, MSGBOX_DEFAULT
# 240 "data/maps/BattleFrontier_Lounge1/scripts.pory"
# 111 "data/maps/BattleFrontier_Lounge1/scripts.pory"
# 241 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	goto BattleFrontier_Lounge1_EventScript_HighestIVStat
# 242 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	end
# 243 "data/maps/BattleFrontier_Lounge1/scripts.pory"

# 244 "data/maps/BattleFrontier_Lounge1/scripts.pory"

# 245 "data/maps/BattleFrontier_Lounge1/scripts.pory"
BattleFrontier_Lounge1_EventScript_AboveAverageTotalIVs::
# 246 "data/maps/BattleFrontier_Lounge1/scripts.pory"
# 116 "data/maps/BattleFrontier_Lounge1/scripts.pory"
# 247 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	msgbox BattleFrontier_Lounge1_Text_BetterThanAverageAbility, MSGBOX_DEFAULT
# 248 "data/maps/BattleFrontier_Lounge1/scripts.pory"
# 117 "data/maps/BattleFrontier_Lounge1/scripts.pory"
# 249 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	goto BattleFrontier_Lounge1_EventScript_HighestIVStat
# 250 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	end
# 251 "data/maps/BattleFrontier_Lounge1/scripts.pory"

# 252 "data/maps/BattleFrontier_Lounge1/scripts.pory"

# 253 "data/maps/BattleFrontier_Lounge1/scripts.pory"
BattleFrontier_Lounge1_EventScript_HighTotalIVs::
# 254 "data/maps/BattleFrontier_Lounge1/scripts.pory"
# 122 "data/maps/BattleFrontier_Lounge1/scripts.pory"
# 255 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	msgbox BattleFrontier_Lounge1_Text_ImpressiveAbility, MSGBOX_DEFAULT
# 256 "data/maps/BattleFrontier_Lounge1/scripts.pory"
# 123 "data/maps/BattleFrontier_Lounge1/scripts.pory"
# 257 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	goto BattleFrontier_Lounge1_EventScript_HighestIVStat
# 258 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	end
# 259 "data/maps/BattleFrontier_Lounge1/scripts.pory"

# 260 "data/maps/BattleFrontier_Lounge1/scripts.pory"

# 261 "data/maps/BattleFrontier_Lounge1/scripts.pory"
BattleFrontier_Lounge1_EventScript_VeryHighTotalIVs::
# 262 "data/maps/BattleFrontier_Lounge1/scripts.pory"
# 128 "data/maps/BattleFrontier_Lounge1/scripts.pory"
# 263 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	msgbox BattleFrontier_Lounge1_Text_OutstandingAbility, MSGBOX_DEFAULT
# 264 "data/maps/BattleFrontier_Lounge1/scripts.pory"
# 129 "data/maps/BattleFrontier_Lounge1/scripts.pory"
# 265 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	goto BattleFrontier_Lounge1_EventScript_HighestIVStat
# 266 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	end
# 267 "data/maps/BattleFrontier_Lounge1/scripts.pory"

# 268 "data/maps/BattleFrontier_Lounge1/scripts.pory"

# 269 "data/maps/BattleFrontier_Lounge1/scripts.pory"
BattleFrontier_Lounge1_EventScript_HighestIVHP::
# 270 "data/maps/BattleFrontier_Lounge1/scripts.pory"
# 134 "data/maps/BattleFrontier_Lounge1/scripts.pory"
# 271 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	msgbox BattleFrontier_Lounge1_Text_BestAspectHP, MSGBOX_DEFAULT
# 272 "data/maps/BattleFrontier_Lounge1/scripts.pory"
# 135 "data/maps/BattleFrontier_Lounge1/scripts.pory"
# 273 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	goto BattleFrontier_Lounge1_EventScript_HighestIVValue
# 274 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	end
# 275 "data/maps/BattleFrontier_Lounge1/scripts.pory"

# 276 "data/maps/BattleFrontier_Lounge1/scripts.pory"

# 277 "data/maps/BattleFrontier_Lounge1/scripts.pory"
BattleFrontier_Lounge1_EventScript_HighestIVAtk::
# 278 "data/maps/BattleFrontier_Lounge1/scripts.pory"
# 140 "data/maps/BattleFrontier_Lounge1/scripts.pory"
# 279 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	msgbox BattleFrontier_Lounge1_Text_BestAspectAtk, MSGBOX_DEFAULT
# 280 "data/maps/BattleFrontier_Lounge1/scripts.pory"
# 141 "data/maps/BattleFrontier_Lounge1/scripts.pory"
# 281 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	goto BattleFrontier_Lounge1_EventScript_HighestIVValue
# 282 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	end
# 283 "data/maps/BattleFrontier_Lounge1/scripts.pory"

# 284 "data/maps/BattleFrontier_Lounge1/scripts.pory"

# 285 "data/maps/BattleFrontier_Lounge1/scripts.pory"
BattleFrontier_Lounge1_EventScript_HighestIVDef::
# 286 "data/maps/BattleFrontier_Lounge1/scripts.pory"
# 146 "data/maps/BattleFrontier_Lounge1/scripts.pory"
# 287 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	msgbox BattleFrontier_Lounge1_Text_BestAspectDef, MSGBOX_DEFAULT
# 288 "data/maps/BattleFrontier_Lounge1/scripts.pory"
# 147 "data/maps/BattleFrontier_Lounge1/scripts.pory"
# 289 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	goto BattleFrontier_Lounge1_EventScript_HighestIVValue
# 290 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	end
# 291 "data/maps/BattleFrontier_Lounge1/scripts.pory"

# 292 "data/maps/BattleFrontier_Lounge1/scripts.pory"

# 293 "data/maps/BattleFrontier_Lounge1/scripts.pory"
BattleFrontier_Lounge1_EventScript_HighestIVSpeed::
# 294 "data/maps/BattleFrontier_Lounge1/scripts.pory"
# 152 "data/maps/BattleFrontier_Lounge1/scripts.pory"
# 295 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	msgbox BattleFrontier_Lounge1_Text_BestAspectSpeed, MSGBOX_DEFAULT
# 296 "data/maps/BattleFrontier_Lounge1/scripts.pory"
# 153 "data/maps/BattleFrontier_Lounge1/scripts.pory"
# 297 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	goto BattleFrontier_Lounge1_EventScript_HighestIVValue
# 298 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	end
# 299 "data/maps/BattleFrontier_Lounge1/scripts.pory"

# 300 "data/maps/BattleFrontier_Lounge1/scripts.pory"

# 301 "data/maps/BattleFrontier_Lounge1/scripts.pory"
BattleFrontier_Lounge1_EventScript_HighestIVSpAtk::
# 302 "data/maps/BattleFrontier_Lounge1/scripts.pory"
# 158 "data/maps/BattleFrontier_Lounge1/scripts.pory"
# 303 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	msgbox BattleFrontier_Lounge1_Text_BestAspectSpAtk, MSGBOX_DEFAULT
# 304 "data/maps/BattleFrontier_Lounge1/scripts.pory"
# 159 "data/maps/BattleFrontier_Lounge1/scripts.pory"
# 305 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	goto BattleFrontier_Lounge1_EventScript_HighestIVValue
# 306 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	end
# 307 "data/maps/BattleFrontier_Lounge1/scripts.pory"

# 308 "data/maps/BattleFrontier_Lounge1/scripts.pory"

# 309 "data/maps/BattleFrontier_Lounge1/scripts.pory"
BattleFrontier_Lounge1_EventScript_HighestIVSpDef::
# 310 "data/maps/BattleFrontier_Lounge1/scripts.pory"
# 164 "data/maps/BattleFrontier_Lounge1/scripts.pory"
# 311 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	msgbox BattleFrontier_Lounge1_Text_BestAspectSpDef, MSGBOX_DEFAULT
# 312 "data/maps/BattleFrontier_Lounge1/scripts.pory"
# 165 "data/maps/BattleFrontier_Lounge1/scripts.pory"
# 313 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	goto BattleFrontier_Lounge1_EventScript_HighestIVValue
# 314 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	end
# 315 "data/maps/BattleFrontier_Lounge1/scripts.pory"

# 316 "data/maps/BattleFrontier_Lounge1/scripts.pory"

# 317 "data/maps/BattleFrontier_Lounge1/scripts.pory"
BattleFrontier_Lounge1_EventScript_HighestIVLow::
# 318 "data/maps/BattleFrontier_Lounge1/scripts.pory"
# 170 "data/maps/BattleFrontier_Lounge1/scripts.pory"
# 319 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	msgbox BattleFrontier_Lounge1_Text_StatRelativelyGood, MSGBOX_DEFAULT
# 320 "data/maps/BattleFrontier_Lounge1/scripts.pory"
# 171 "data/maps/BattleFrontier_Lounge1/scripts.pory"
# 321 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	goto BattleFrontier_Lounge1_EventScript_EndBreederComments
# 322 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	end
# 323 "data/maps/BattleFrontier_Lounge1/scripts.pory"

# 324 "data/maps/BattleFrontier_Lounge1/scripts.pory"

# 325 "data/maps/BattleFrontier_Lounge1/scripts.pory"
BattleFrontier_Lounge1_EventScript_HighestIVMid::
# 326 "data/maps/BattleFrontier_Lounge1/scripts.pory"
# 176 "data/maps/BattleFrontier_Lounge1/scripts.pory"
# 327 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	msgbox BattleFrontier_Lounge1_Text_StatImpressive, MSGBOX_DEFAULT
# 328 "data/maps/BattleFrontier_Lounge1/scripts.pory"
# 177 "data/maps/BattleFrontier_Lounge1/scripts.pory"
# 329 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	goto BattleFrontier_Lounge1_EventScript_EndBreederComments
# 330 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	end
# 331 "data/maps/BattleFrontier_Lounge1/scripts.pory"

# 332 "data/maps/BattleFrontier_Lounge1/scripts.pory"

# 333 "data/maps/BattleFrontier_Lounge1/scripts.pory"
BattleFrontier_Lounge1_EventScript_HighestIVHigh::
# 334 "data/maps/BattleFrontier_Lounge1/scripts.pory"
# 182 "data/maps/BattleFrontier_Lounge1/scripts.pory"
# 335 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	msgbox BattleFrontier_Lounge1_Text_StatOutstanding, MSGBOX_DEFAULT
# 336 "data/maps/BattleFrontier_Lounge1/scripts.pory"
# 183 "data/maps/BattleFrontier_Lounge1/scripts.pory"
# 337 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	goto BattleFrontier_Lounge1_EventScript_EndBreederComments
# 338 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	end
# 339 "data/maps/BattleFrontier_Lounge1/scripts.pory"

# 340 "data/maps/BattleFrontier_Lounge1/scripts.pory"

# 341 "data/maps/BattleFrontier_Lounge1/scripts.pory"
BattleFrontier_Lounge1_EventScript_HighestIVMax::
# 342 "data/maps/BattleFrontier_Lounge1/scripts.pory"
# 188 "data/maps/BattleFrontier_Lounge1/scripts.pory"
# 343 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	msgbox BattleFrontier_Lounge1_Text_StatFlawless, MSGBOX_DEFAULT
# 344 "data/maps/BattleFrontier_Lounge1/scripts.pory"
# 189 "data/maps/BattleFrontier_Lounge1/scripts.pory"
# 345 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	goto BattleFrontier_Lounge1_EventScript_EndBreederComments
# 346 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	end
# 347 "data/maps/BattleFrontier_Lounge1/scripts.pory"

# 348 "data/maps/BattleFrontier_Lounge1/scripts.pory"

# 349 "data/maps/BattleFrontier_Lounge1/scripts.pory"
BattleFrontier_Lounge1_EventScript_CancelMonSelect::
# 350 "data/maps/BattleFrontier_Lounge1/scripts.pory"
# 194 "data/maps/BattleFrontier_Lounge1/scripts.pory"
# 351 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	msgbox BattleFrontier_Lounge1_Text_NoTimeForMyAdvice, MSGBOX_DEFAULT
# 352 "data/maps/BattleFrontier_Lounge1/scripts.pory"
# 195 "data/maps/BattleFrontier_Lounge1/scripts.pory"
# 353 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	release
# 354 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	end
# 355 "data/maps/BattleFrontier_Lounge1/scripts.pory"

# 356 "data/maps/BattleFrontier_Lounge1/scripts.pory"

# 357 "data/maps/BattleFrontier_Lounge1/scripts.pory"
BattleFrontier_Lounge1_EventScript_Boy1::
# 358 "data/maps/BattleFrontier_Lounge1/scripts.pory"
# 200 "data/maps/BattleFrontier_Lounge1/scripts.pory"
# 359 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	msgbox BattleFrontier_Lounge1_Text_SaidMyMonIsOutstanding, MSGBOX_NPC
# 360 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	end
# 361 "data/maps/BattleFrontier_Lounge1/scripts.pory"

# 362 "data/maps/BattleFrontier_Lounge1/scripts.pory"

# 363 "data/maps/BattleFrontier_Lounge1/scripts.pory"
BattleFrontier_Lounge1_EventScript_Boy2::
# 364 "data/maps/BattleFrontier_Lounge1/scripts.pory"
# 205 "data/maps/BattleFrontier_Lounge1/scripts.pory"
# 365 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	msgbox BattleFrontier_Lounge1_Text_DidntDoAnythingSpecialRaisingIt, MSGBOX_NPC
# 366 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	end
# 367 "data/maps/BattleFrontier_Lounge1/scripts.pory"

# 368 "data/maps/BattleFrontier_Lounge1/scripts.pory"

# 369 "data/maps/BattleFrontier_Lounge1/scripts.pory"
BattleFrontier_Lounge1_Text_PokemonBreederIntro::
# 370 "data/maps/BattleFrontier_Lounge1/scripts.pory"
# 209 "data/maps/BattleFrontier_Lounge1/scripts.pory"
# 371 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "For 70 years I have raised POKéMON!\n"
# 372 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "I am the man they revere as\l"
# 373 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "the legendary top POKéMON BREEDER!\p"
# 374 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "If you ever become as seasoned as me,\n"
# 375 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "you'll see the abilities of POKéMON\l"
# 376 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "at a glance.\p"
# 377 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "You're a TRAINER. Doesn't it interest\n"
# 378 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "you to know your own POKéMON's\l"
# 379 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "abilities?\p"
# 380 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "Here!\n"
# 381 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "Let's have a look at your POKéMON!$"
# 382 "data/maps/BattleFrontier_Lounge1/scripts.pory"

# 383 "data/maps/BattleFrontier_Lounge1/scripts.pory"
BattleFrontier_Lounge1_Text_AverageAbility::
# 384 "data/maps/BattleFrontier_Lounge1/scripts.pory"
# 223 "data/maps/BattleFrontier_Lounge1/scripts.pory"
# 385 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "…Hmm…\p"
# 386 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "This one, overall, I would describe\n"
# 387 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "as being of average ability.$"
# 388 "data/maps/BattleFrontier_Lounge1/scripts.pory"

# 389 "data/maps/BattleFrontier_Lounge1/scripts.pory"
BattleFrontier_Lounge1_Text_BetterThanAverageAbility::
# 390 "data/maps/BattleFrontier_Lounge1/scripts.pory"
# 229 "data/maps/BattleFrontier_Lounge1/scripts.pory"
# 391 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "…Hmm…\p"
# 392 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "This one, overall, I would describe as\n"
# 393 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "having better-than-average ability.$"
# 394 "data/maps/BattleFrontier_Lounge1/scripts.pory"

# 395 "data/maps/BattleFrontier_Lounge1/scripts.pory"
BattleFrontier_Lounge1_Text_ImpressiveAbility::
# 396 "data/maps/BattleFrontier_Lounge1/scripts.pory"
# 235 "data/maps/BattleFrontier_Lounge1/scripts.pory"
# 397 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "…Hmm…\p"
# 398 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "This one, overall, I would say is\n"
# 399 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "quite impressive in ability!$"
# 400 "data/maps/BattleFrontier_Lounge1/scripts.pory"

# 401 "data/maps/BattleFrontier_Lounge1/scripts.pory"
BattleFrontier_Lounge1_Text_OutstandingAbility::
# 402 "data/maps/BattleFrontier_Lounge1/scripts.pory"
# 241 "data/maps/BattleFrontier_Lounge1/scripts.pory"
# 403 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "…Hmm…\p"
# 404 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "This one, overall, I would say is\n"
# 405 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "wonderfully outstanding in ability!$"
# 406 "data/maps/BattleFrontier_Lounge1/scripts.pory"

# 407 "data/maps/BattleFrontier_Lounge1/scripts.pory"
BattleFrontier_Lounge1_Text_BestAspectHP::
# 408 "data/maps/BattleFrontier_Lounge1/scripts.pory"
# 247 "data/maps/BattleFrontier_Lounge1/scripts.pory"
# 409 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "Incidentally, the best aspect of it,\n"
# 410 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "I would say, is its HP…$"
# 411 "data/maps/BattleFrontier_Lounge1/scripts.pory"

# 412 "data/maps/BattleFrontier_Lounge1/scripts.pory"
BattleFrontier_Lounge1_Text_BestAspectAtk::
# 413 "data/maps/BattleFrontier_Lounge1/scripts.pory"
# 252 "data/maps/BattleFrontier_Lounge1/scripts.pory"
# 414 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "Incidentally, the best aspect of it,\n"
# 415 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "I would say, is its ATTACK…$"
# 416 "data/maps/BattleFrontier_Lounge1/scripts.pory"

# 417 "data/maps/BattleFrontier_Lounge1/scripts.pory"
BattleFrontier_Lounge1_Text_BestAspectDef::
# 418 "data/maps/BattleFrontier_Lounge1/scripts.pory"
# 257 "data/maps/BattleFrontier_Lounge1/scripts.pory"
# 419 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "Incidentally, the best aspect of it,\n"
# 420 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "I would say, is its DEFENSE…$"
# 421 "data/maps/BattleFrontier_Lounge1/scripts.pory"

# 422 "data/maps/BattleFrontier_Lounge1/scripts.pory"
BattleFrontier_Lounge1_Text_BestAspectSpAtk::
# 423 "data/maps/BattleFrontier_Lounge1/scripts.pory"
# 262 "data/maps/BattleFrontier_Lounge1/scripts.pory"
# 424 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "Incidentally, the best aspect of it,\n"
# 425 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "I would say, is its SPECIAL ATTACK…$"
# 426 "data/maps/BattleFrontier_Lounge1/scripts.pory"

# 427 "data/maps/BattleFrontier_Lounge1/scripts.pory"
BattleFrontier_Lounge1_Text_BestAspectSpDef::
# 428 "data/maps/BattleFrontier_Lounge1/scripts.pory"
# 267 "data/maps/BattleFrontier_Lounge1/scripts.pory"
# 429 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "Incidentally, the best aspect of it,\n"
# 430 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "I would say, is its SPECIAL DEFENSE…$"
# 431 "data/maps/BattleFrontier_Lounge1/scripts.pory"

# 432 "data/maps/BattleFrontier_Lounge1/scripts.pory"
BattleFrontier_Lounge1_Text_BestAspectSpeed::
# 433 "data/maps/BattleFrontier_Lounge1/scripts.pory"
# 272 "data/maps/BattleFrontier_Lounge1/scripts.pory"
# 434 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "Incidentally, the best aspect of it,\n"
# 435 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "I would say, is its SPEED…$"
# 436 "data/maps/BattleFrontier_Lounge1/scripts.pory"

# 437 "data/maps/BattleFrontier_Lounge1/scripts.pory"
BattleFrontier_Lounge1_Text_StatRelativelyGood::
# 438 "data/maps/BattleFrontier_Lounge1/scripts.pory"
# 277 "data/maps/BattleFrontier_Lounge1/scripts.pory"
# 439 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "That stat is relatively good.\n"
# 440 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "…Hm… That's how I call it.$"
# 441 "data/maps/BattleFrontier_Lounge1/scripts.pory"

# 442 "data/maps/BattleFrontier_Lounge1/scripts.pory"
BattleFrontier_Lounge1_Text_StatImpressive::
# 443 "data/maps/BattleFrontier_Lounge1/scripts.pory"
# 282 "data/maps/BattleFrontier_Lounge1/scripts.pory"
# 444 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "That stat is quite impressive.\n"
# 445 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "…Hm… That's how I call it.$"
# 446 "data/maps/BattleFrontier_Lounge1/scripts.pory"

# 447 "data/maps/BattleFrontier_Lounge1/scripts.pory"
BattleFrontier_Lounge1_Text_StatOutstanding::
# 448 "data/maps/BattleFrontier_Lounge1/scripts.pory"
# 287 "data/maps/BattleFrontier_Lounge1/scripts.pory"
# 449 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "That stat is outstanding!\n"
# 450 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "…Hm… That's how I call it.$"
# 451 "data/maps/BattleFrontier_Lounge1/scripts.pory"

# 452 "data/maps/BattleFrontier_Lounge1/scripts.pory"
BattleFrontier_Lounge1_Text_StatFlawless::
# 453 "data/maps/BattleFrontier_Lounge1/scripts.pory"
# 292 "data/maps/BattleFrontier_Lounge1/scripts.pory"
# 454 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "It's flawless! A thing of perfection!\n"
# 455 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "…Hm… That's how I call it.$"
# 456 "data/maps/BattleFrontier_Lounge1/scripts.pory"

# 457 "data/maps/BattleFrontier_Lounge1/scripts.pory"
BattleFrontier_Lounge1_Text_NoTimeForMyAdvice::
# 458 "data/maps/BattleFrontier_Lounge1/scripts.pory"
# 297 "data/maps/BattleFrontier_Lounge1/scripts.pory"
# 459 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "What?\n"
# 460 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "You have no time for my advice?\p"
# 461 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "You should always be eager to learn\n"
# 462 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "from the experiences of your elders!$"
# 463 "data/maps/BattleFrontier_Lounge1/scripts.pory"

# 464 "data/maps/BattleFrontier_Lounge1/scripts.pory"
BattleFrontier_Lounge1_Text_HaveBusinessNeedsTending::
# 465 "data/maps/BattleFrontier_Lounge1/scripts.pory"
# 304 "data/maps/BattleFrontier_Lounge1/scripts.pory"
# 466 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "Yes, what is it now?\p"
# 467 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "I have business that needs tending!\n"
# 468 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "Save it for next time!$"
# 469 "data/maps/BattleFrontier_Lounge1/scripts.pory"

# 470 "data/maps/BattleFrontier_Lounge1/scripts.pory"
BattleFrontier_Lounge1_Text_LetsLookAtYourPokemon::
# 471 "data/maps/BattleFrontier_Lounge1/scripts.pory"
# 310 "data/maps/BattleFrontier_Lounge1/scripts.pory"
# 472 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "Ah, youngster! Do your POKéMON's\n"
# 473 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "abilities intrigue you?\p"
# 474 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "Here, here!\n"
# 475 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "Let's have a look at your POKéMON!$"
# 476 "data/maps/BattleFrontier_Lounge1/scripts.pory"

# 477 "data/maps/BattleFrontier_Lounge1/scripts.pory"
BattleFrontier_Lounge1_Text_EvenICantTell::
# 478 "data/maps/BattleFrontier_Lounge1/scripts.pory"
# 317 "data/maps/BattleFrontier_Lounge1/scripts.pory"
# 479 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "An expert I am, but even I can't tell\n"
# 480 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "anything about an unhatched POKéMON!\p"
# 481 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "Show me a POKéMON!\n"
# 482 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "A POKéMON is what I need to see!$"
# 483 "data/maps/BattleFrontier_Lounge1/scripts.pory"

# 484 "data/maps/BattleFrontier_Lounge1/scripts.pory"
BattleFrontier_Lounge1_Text_SaidMyMonIsOutstanding::
# 485 "data/maps/BattleFrontier_Lounge1/scripts.pory"
# 324 "data/maps/BattleFrontier_Lounge1/scripts.pory"
# 486 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "He said my POKéMON is outstanding!\n"
# 487 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "I'm glad I raised it carefully!$"
# 488 "data/maps/BattleFrontier_Lounge1/scripts.pory"

# 489 "data/maps/BattleFrontier_Lounge1/scripts.pory"
BattleFrontier_Lounge1_Text_DidntDoAnythingSpecialRaisingIt::
# 490 "data/maps/BattleFrontier_Lounge1/scripts.pory"
# 329 "data/maps/BattleFrontier_Lounge1/scripts.pory"
# 491 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "He said my POKéMON is outstanding!\n"
# 492 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "But I didn't do anything special\l"
# 493 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "raising it…$"
