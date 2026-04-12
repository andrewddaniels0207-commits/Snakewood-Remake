# 1 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"

# 2 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
FourIsland_PokemonDayCare_Frlg_MapScripts::
# 3 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	.byte 0
# 4 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"

# 5 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"

# 6 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
FourIsland_PokemonDayCare_EventScript_DaycareWoman::
# 7 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 4 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 8 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	lock
# 9 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 5 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 10 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	faceplayer
# 11 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 6 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 12 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	specialvar VAR_RESULT, GetDaycareState
# 13 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 7 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 14 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	compare VAR_RESULT, DAYCARE_EGG_WAITING
# 15 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	goto_if_eq FourIsland_PokemonDayCare_EventScript_DaycareWoman_2
# 16 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
FourIsland_PokemonDayCare_EventScript_DaycareWoman_1:
# 17 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 10 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 18 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	compare VAR_RESULT, DAYCARE_ONE_MON
# 19 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	goto_if_eq FourIsland_PokemonDayCare_EventScript_DaycareWoman_5
# 20 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
FourIsland_PokemonDayCare_EventScript_DaycareWoman_4:
# 21 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 13 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 22 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	compare VAR_RESULT, DAYCARE_TWO_MONS
# 23 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	goto_if_eq FourIsland_PokemonDayCare_EventScript_DaycareWoman_8
# 24 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
FourIsland_PokemonDayCare_EventScript_DaycareWoman_7:
# 25 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 16 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 26 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	msgbox DayCare_Text_WouldYouLikeUsToRaiseMon, MSGBOX_YESNO
# 27 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 17 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 28 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	compare VAR_RESULT, YES
# 29 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	goto_if_eq FourIsland_PokemonDayCare_EventScript_DaycareWoman_11
# 30 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
FourIsland_PokemonDayCare_EventScript_DaycareWoman_10:
# 31 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 20 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 32 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	msgbox DayCare_Text_FineThenComeAgain
# 33 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 21 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 34 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	release
# 35 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	end
# 36 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"

# 37 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
FourIsland_PokemonDayCare_EventScript_DaycareWoman_2:
# 38 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 8 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 39 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	goto FourIsland_PokemonDayCare_EggWaiting
# 40 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	goto FourIsland_PokemonDayCare_EventScript_DaycareWoman_1
# 41 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"

# 42 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
FourIsland_PokemonDayCare_EventScript_DaycareWoman_5:
# 43 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 11 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 44 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	goto FourIsland_PokemonDayCare_OneMonInDaycare
# 45 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	goto FourIsland_PokemonDayCare_EventScript_DaycareWoman_4
# 46 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"

# 47 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
FourIsland_PokemonDayCare_EventScript_DaycareWoman_8:
# 48 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 14 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 49 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	goto FourIsland_PokemonDayCare_TwoMonsInDaycare
# 50 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	goto FourIsland_PokemonDayCare_EventScript_DaycareWoman_7
# 51 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"

# 52 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
FourIsland_PokemonDayCare_EventScript_DaycareWoman_11:
# 53 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 18 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 54 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	goto FourIsland_PokemonDayCare_GiveMonToRaise
# 55 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	goto FourIsland_PokemonDayCare_EventScript_DaycareWoman_10
# 56 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"

# 57 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"

# 58 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
FourIsland_PokemonDayCare_GiveMonToRaise::
# 59 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 26 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 60 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	specialvar VAR_RESULT, CountPartyNonEggMons
# 61 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 27 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 62 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	compare VAR_RESULT, 1
# 63 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	goto_if_eq FourIsland_PokemonDayCare_GiveMonToRaise_2
# 64 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
FourIsland_PokemonDayCare_GiveMonToRaise_1:
# 65 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 30 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 66 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	msgbox DayCare_Text_WhichMonShouldWeRaise
# 67 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 31 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 68 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	fadescreen FADE_TO_BLACK
# 69 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 32 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 70 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	special ChooseSendDaycareMon
# 71 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 33 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 72 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	waitstate
# 73 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 34 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 74 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	compare VAR_0x8004, PARTY_SIZE
# 75 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	goto_if_ge FourIsland_PokemonDayCare_GiveMonToRaise_5
# 76 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
FourIsland_PokemonDayCare_GiveMonToRaise_4:
# 77 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 37 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 78 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	specialvar VAR_RESULT, CountPartyAliveNonEggMons_IgnoreVar0x8004Slot
# 79 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 38 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 80 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	compare VAR_RESULT, 0
# 81 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	goto_if_eq FourIsland_PokemonDayCare_GiveMonToRaise_8
# 82 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
FourIsland_PokemonDayCare_GiveMonToRaise_7:
# 83 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 41 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 84 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	specialvar VAR_0x8005, GetSelectedMonNicknameAndSpecies
# 85 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 42 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 86 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	waitse
# 87 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 43 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 88 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	playmoncry VAR_0x8005, CRY_MODE_NORMAL
# 89 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 44 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 90 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	msgbox DayCare_Text_WellRaiseYourMon
# 91 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 45 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 92 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	waitmoncry
# 93 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 46 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 94 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	special StoreSelectedPokemonInDaycare
# 95 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 47 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 96 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	callnative UpdateFollowingPokemon
# 97 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 48 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 98 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	incrementgamestat GAME_STAT_USED_DAYCARE
# 99 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 49 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 100 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	specialvar VAR_RESULT, GetDaycareState
# 101 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 50 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 102 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	compare VAR_RESULT, DAYCARE_ONE_MON
# 103 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	goto_if_eq FourIsland_PokemonDayCare_GiveMonToRaise_11
# 104 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
FourIsland_PokemonDayCare_GiveMonToRaise_10:
# 105 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 53 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 106 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	release
# 107 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	end
# 108 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"

# 109 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
FourIsland_PokemonDayCare_GiveMonToRaise_2:
# 110 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 28 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 111 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	goto FourIsland_PokemonDayCare_OnlyOneMonInParty
# 112 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	goto FourIsland_PokemonDayCare_GiveMonToRaise_1
# 113 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"

# 114 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
FourIsland_PokemonDayCare_GiveMonToRaise_5:
# 115 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 35 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 116 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	goto FourIsland_PokemonDayCare_ComeAgain
# 117 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	goto FourIsland_PokemonDayCare_GiveMonToRaise_4
# 118 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"

# 119 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
FourIsland_PokemonDayCare_GiveMonToRaise_8:
# 120 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 39 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 121 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	goto FourIsland_PokemonDayCare_OnlyOneAliveMonInParty
# 122 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	goto FourIsland_PokemonDayCare_GiveMonToRaise_7
# 123 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"

# 124 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
FourIsland_PokemonDayCare_GiveMonToRaise_11:
# 125 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 51 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 126 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	goto FourIsland_PokemonDayCare_CanRaiseOneMore
# 127 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	goto FourIsland_PokemonDayCare_GiveMonToRaise_10
# 128 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"

# 129 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"

# 130 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
FourIsland_PokemonDayCare_ComeAgain::
# 131 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 58 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 132 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	msgbox DayCare_Text_ComeAgain
# 133 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 59 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 134 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	release
# 135 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	end
# 136 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"

# 137 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"

# 138 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
FourIsland_PokemonDayCare_CanRaiseOneMore::
# 139 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 64 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 140 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	msgbox DayCare_Text_WeCanRaiseOneMore, MSGBOX_YESNO
# 141 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 65 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 142 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	compare VAR_RESULT, YES
# 143 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	goto_if_eq FourIsland_PokemonDayCare_CanRaiseOneMore_2
# 144 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
FourIsland_PokemonDayCare_CanRaiseOneMore_1:
# 145 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 68 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 146 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	goto FourIsland_PokemonDayCare_ComeAgain
# 147 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	end
# 148 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"

# 149 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
FourIsland_PokemonDayCare_CanRaiseOneMore_2:
# 150 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 66 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 151 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	goto FourIsland_PokemonDayCare_GiveMonToRaise
# 152 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	goto FourIsland_PokemonDayCare_CanRaiseOneMore_1
# 153 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"

# 154 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"

# 155 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
FourIsland_PokemonDayCare_OnlyOneMonInParty::
# 156 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 73 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 157 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	msgbox DayCare_Text_YouHaveJustOneMon
# 158 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 74 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 159 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	release
# 160 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	end
# 161 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"

# 162 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"

# 163 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
FourIsland_PokemonDayCare_OnlyOneAliveMonInParty::
# 164 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 79 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 165 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	msgbox DayCare_Text_WhatWillYouBattleWith
# 166 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 80 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 167 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	release
# 168 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	end
# 169 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"

# 170 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"

# 171 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
FourIsland_PokemonDayCare_EggWaiting::
# 172 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 85 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 173 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	msgbox DayCare_Text_HusbandWasLookingForYou
# 174 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 86 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 175 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	release
# 176 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	end
# 177 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"

# 178 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"

# 179 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
FourIsland_PokemonDayCare_MonHasGrownXLevels::
# 180 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 91 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 181 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	msgbox DayCare_Text_YourMonHasGrownXLevels
# 182 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	return
# 183 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"

# 184 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"

# 185 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
FourIsland_PokemonDayCare_DisplayLevelsGained::
# 186 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 96 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 187 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	specialvar VAR_RESULT, GetNumLevelsGainedFromDaycare
# 188 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 97 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 189 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	compare VAR_RESULT, 0
# 190 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	goto_if_ne FourIsland_PokemonDayCare_DisplayLevelsGained_2
# 191 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
FourIsland_PokemonDayCare_DisplayLevelsGained_1:
# 192 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	return
# 193 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"

# 194 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
FourIsland_PokemonDayCare_DisplayLevelsGained_2:
# 195 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 98 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 196 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	call FourIsland_PokemonDayCare_MonHasGrownXLevels
# 197 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	goto FourIsland_PokemonDayCare_DisplayLevelsGained_1
# 198 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"

# 199 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"

# 200 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
FourIsland_PokemonDayCare_OneMonInDaycare::
# 201 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 104 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 202 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	msgbox DayCare_Text_GoodToSeeYou
# 203 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 105 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 204 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	setvar VAR_0x8004, 0
# 205 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 106 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 206 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	call FourIsland_PokemonDayCare_DisplayLevelsGained
# 207 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 107 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 208 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	msgbox DayCare_Text_WeCanRaiseOneMore, MSGBOX_YESNO
# 209 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 108 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 210 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	compare VAR_RESULT, YES
# 211 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	goto_if_eq FourIsland_PokemonDayCare_OneMonInDaycare_2
# 212 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
FourIsland_PokemonDayCare_OneMonInDaycare_1:
# 213 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 111 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 214 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	msgbox DayCare_Text_TakeYourMonBack, MSGBOX_YESNO
# 215 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 112 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 216 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	compare VAR_RESULT, YES
# 217 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	goto_if_eq FourIsland_PokemonDayCare_OneMonInDaycare_5
# 218 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
FourIsland_PokemonDayCare_OneMonInDaycare_4:
# 219 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 115 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 220 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	goto FourIsland_PokemonDayCare_ComeAgain
# 221 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	end
# 222 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"

# 223 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
FourIsland_PokemonDayCare_OneMonInDaycare_2:
# 224 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 109 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 225 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	goto FourIsland_PokemonDayCare_GiveMonToRaise
# 226 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	goto FourIsland_PokemonDayCare_OneMonInDaycare_1
# 227 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"

# 228 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
FourIsland_PokemonDayCare_OneMonInDaycare_5:
# 229 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 113 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 230 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	goto FourIsland_PokemonDayCare_TryRetrieveMon
# 231 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	goto FourIsland_PokemonDayCare_OneMonInDaycare_4
# 232 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"

# 233 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"

# 234 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
FourIsland_PokemonDayCare_TryRetrieveMon::
# 235 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 120 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 236 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	specialvar VAR_RESULT, CalculatePlayerPartyCount
# 237 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 121 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 238 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	compare VAR_RESULT, PARTY_SIZE
# 239 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	goto_if_eq FourIsland_PokemonDayCare_TryRetrieveMon_2
# 240 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
FourIsland_PokemonDayCare_TryRetrieveMon_1:
# 241 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 124 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 242 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	specialvar VAR_RESULT, GetDaycareState
# 243 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 125 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 244 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	setvar VAR_0x8004, 0
# 245 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 126 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 246 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	compare VAR_RESULT, DAYCARE_ONE_MON
# 247 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	goto_if_eq FourIsland_PokemonDayCare_TryRetrieveMon_5
# 248 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
FourIsland_PokemonDayCare_TryRetrieveMon_4:
# 249 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 129 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 250 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	special ShowDaycareLevelMenu
# 251 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 130 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 252 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	waitstate
# 253 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 131 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 254 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	copyvar VAR_0x8004, VAR_RESULT
# 255 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 132 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 256 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	compare VAR_RESULT, DAYCARE_EXITED_LEVEL_MENU
# 257 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	goto_if_eq FourIsland_PokemonDayCare_TryRetrieveMon_8
# 258 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
FourIsland_PokemonDayCare_TryRetrieveMon_7:
# 259 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 135 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 260 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	goto FourIsland_PokemonDayCare_CostPrompt
# 261 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	end
# 262 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"

# 263 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
FourIsland_PokemonDayCare_TryRetrieveMon_2:
# 264 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 122 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 265 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	goto FourIsland_PokemonDayCare_NoRoomInParty
# 266 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	goto FourIsland_PokemonDayCare_TryRetrieveMon_1
# 267 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"

# 268 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
FourIsland_PokemonDayCare_TryRetrieveMon_5:
# 269 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 127 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 270 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	goto FourIsland_PokemonDayCare_CostPrompt
# 271 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	goto FourIsland_PokemonDayCare_TryRetrieveMon_4
# 272 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"

# 273 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
FourIsland_PokemonDayCare_TryRetrieveMon_8:
# 274 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 133 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 275 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	goto FourIsland_PokemonDayCare_ComeAgain
# 276 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	goto FourIsland_PokemonDayCare_TryRetrieveMon_7
# 277 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"

# 278 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"

# 279 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
FourIsland_PokemonDayCare_CostPrompt::
# 280 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 140 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 281 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	special GetDaycareCost
# 282 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 141 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 283 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	msgbox DayCare_Text_ItWillCostX, MSGBOX_YESNO
# 284 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 142 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 285 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	compare VAR_RESULT, YES
# 286 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	goto_if_eq FourIsland_PokemonDayCare_CostPrompt_2
# 287 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
FourIsland_PokemonDayCare_CostPrompt_1:
# 288 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 145 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 289 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	goto FourIsland_PokemonDayCare_ComeAgain
# 290 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	end
# 291 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"

# 292 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
FourIsland_PokemonDayCare_CostPrompt_2:
# 293 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 143 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 294 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	goto FourIsland_PokemonDayCare_CheckEnoughMoney
# 295 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	goto FourIsland_PokemonDayCare_CostPrompt_1
# 296 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"

# 297 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"

# 298 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
FourIsland_PokemonDayCare_CheckEnoughMoney::
# 299 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 150 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 300 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	specialvar VAR_RESULT, IsEnoughForCostInVar0x8005
# 301 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 151 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 302 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	compare VAR_RESULT, TRUE
# 303 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	goto_if_eq FourIsland_PokemonDayCare_CheckEnoughMoney_2
# 304 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
FourIsland_PokemonDayCare_CheckEnoughMoney_1:
# 305 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 154 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 306 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	msgbox DayCare_Text_NotEnoughMoney
# 307 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 155 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 308 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	release
# 309 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	end
# 310 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"

# 311 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
FourIsland_PokemonDayCare_CheckEnoughMoney_2:
# 312 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 152 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 313 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	goto FourIsland_PokemonDayCare_RetrieveMon
# 314 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	goto FourIsland_PokemonDayCare_CheckEnoughMoney_1
# 315 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"

# 316 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"

# 317 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
FourIsland_PokemonDayCare_RetrieveMon::
# 318 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 160 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 319 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	applymovement LOCALID_FOUR_ISLAND_DAYCARE_WOMAN, FourIsland_PokemonDayCare_Movement_RetrieveMon
# 320 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 161 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 321 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	waitmovement 0
# 322 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 162 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 323 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	specialvar VAR_RESULT, TakePokemonFromDaycare
# 324 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 163 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 325 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	special SubtractMoneyFromVar0x8005
# 326 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 164 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 327 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	playse SE_SHOP
# 328 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 165 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 329 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	msgbox DayCare_Text_HeresYourMon
# 330 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 166 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 331 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	waitse
# 332 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 167 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 333 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	playmoncry VAR_RESULT, CRY_MODE_NORMAL
# 334 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 168 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 335 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 336 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 169 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 337 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	msgbox DayCare_Text_TookBackMon
# 338 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 170 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 339 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	call EventScript_RestorePrevTextColor
# 340 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 171 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 341 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	waitmoncry
# 342 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 172 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 343 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	specialvar VAR_RESULT, GetDaycareState
# 344 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 173 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 345 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	compare VAR_RESULT, DAYCARE_ONE_MON
# 346 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	goto_if_eq FourIsland_PokemonDayCare_RetrieveMon_2
# 347 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
FourIsland_PokemonDayCare_RetrieveMon_1:
# 348 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 176 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 349 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	goto FourIsland_PokemonDayCare_ComeAgain
# 350 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	end
# 351 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"

# 352 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
FourIsland_PokemonDayCare_RetrieveMon_2:
# 353 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 174 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 354 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	goto FourIsland_PokemonDayCare_AskRetrieveOtherMon
# 355 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	goto FourIsland_PokemonDayCare_RetrieveMon_1
# 356 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"

# 357 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"

# 358 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
FourIsland_PokemonDayCare_AskRetrieveOtherMon::
# 359 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 181 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 360 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	msgbox DayCare_Text_TakeOtherOneBackToo, MSGBOX_YESNO
# 361 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 182 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 362 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	compare VAR_RESULT, YES
# 363 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	goto_if_eq FourIsland_PokemonDayCare_AskRetrieveOtherMon_2
# 364 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
FourIsland_PokemonDayCare_AskRetrieveOtherMon_1:
# 365 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 185 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 366 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	goto FourIsland_PokemonDayCare_ComeAgain
# 367 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	end
# 368 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"

# 369 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
FourIsland_PokemonDayCare_AskRetrieveOtherMon_2:
# 370 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 183 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 371 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	goto FourIsland_PokemonDayCare_TryRetrieveMon
# 372 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	goto FourIsland_PokemonDayCare_AskRetrieveOtherMon_1
# 373 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"

# 374 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"

# 375 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
FourIsland_PokemonDayCare_NoRoomInParty::
# 376 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 190 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 377 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	msgbox DayCare_Text_YourPartyIsFull
# 378 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 191 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 379 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	release
# 380 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	end
# 381 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"

# 382 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"

# 383 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 195 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 384 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
FourIsland_PokemonDayCare_Movement_RetrieveMon:
# 385 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 196 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 386 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	delay_16
# 387 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 197 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 388 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	delay_16
# 389 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 198 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 390 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	face_right
# 391 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 199 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 392 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	delay_16
# 393 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 200 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 394 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	delay_16
# 395 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 201 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 396 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	face_left
# 397 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 202 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 398 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	delay_16
# 399 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 203 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 400 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	delay_16
# 401 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 204 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 402 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	face_up
# 403 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 205 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 404 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	walk_slow_up
# 405 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 206 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 406 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	set_invisible
# 407 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 207 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 408 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	delay_16
# 409 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 208 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 410 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	delay_16
# 411 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 209 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 412 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	delay_16
# 413 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 210 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 414 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	delay_16
# 415 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 211 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 416 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	delay_16
# 417 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 212 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 418 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	face_down
# 419 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 213 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 420 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	set_visible
# 421 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 214 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 422 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	walk_slow_down
# 423 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 215 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 424 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	step_end
# 425 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"

# 426 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
FourIsland_PokemonDayCare_EventScript_UnusedEnd::
# 427 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	end
# 428 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"

# 429 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"

# 430 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
FourIsland_PokemonDayCare_TwoMonsInDaycare::
# 431 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 223 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 432 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	msgbox DayCare_Text_GoodToSeeYou
# 433 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 224 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 434 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	setvar VAR_0x8004, 0
# 435 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 225 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 436 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	call FourIsland_PokemonDayCare_DisplayLevelsGained
# 437 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 226 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 438 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	setvar VAR_0x8004, 1
# 439 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 227 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 440 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	call FourIsland_PokemonDayCare_DisplayLevelsGained
# 441 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 228 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 442 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	msgbox DayCare_Text_TakeYourMonBack, MSGBOX_YESNO
# 443 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 229 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 444 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	compare VAR_RESULT, YES
# 445 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	goto_if_eq FourIsland_PokemonDayCare_TwoMonsInDaycare_2
# 446 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
FourIsland_PokemonDayCare_TwoMonsInDaycare_1:
# 447 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 232 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 448 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	msgbox DayCare_Text_ComeAgain
# 449 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 233 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 450 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	release
# 451 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	end
# 452 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"

# 453 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
FourIsland_PokemonDayCare_TwoMonsInDaycare_2:
# 454 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 230 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 455 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	goto FourIsland_PokemonDayCare_TryRetrieveMon
# 456 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	goto FourIsland_PokemonDayCare_TwoMonsInDaycare_1
# 457 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"

# 458 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"

# 459 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
FourIsland_PokemonDayCare_EventScript_UnusedRetrieveMon::
# 460 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 238 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 461 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	special ShowDaycareLevelMenu
# 462 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 239 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 463 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	waitstate
# 464 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 240 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 465 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	compare VAR_RESULT, 2
# 466 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	goto_if_eq FourIsland_PokemonDayCare_EventScript_UnusedRetrieveMon_2
# 467 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
FourIsland_PokemonDayCare_EventScript_UnusedRetrieveMon_1:
# 468 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 243 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 469 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	copyvar VAR_0x8004, VAR_RESULT
# 470 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 244 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 471 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	specialvar VAR_RESULT, TakePokemonFromDaycare
# 472 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 245 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 473 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	msgbox DayCare_Text_HeresYourMon
# 474 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 246 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 475 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	msgbox DayCare_Text_ComeAgain
# 476 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 247 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 477 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	release
# 478 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	end
# 479 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"

# 480 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
FourIsland_PokemonDayCare_EventScript_UnusedRetrieveMon_2:
# 481 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 241 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
# 482 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	goto FourIsland_PokemonDayCare_ComeAgain
# 483 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	goto FourIsland_PokemonDayCare_EventScript_UnusedRetrieveMon_1
