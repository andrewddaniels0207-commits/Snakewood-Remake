# 1 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 2 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_MapScripts::
# 3 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 2 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 4 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, BattleFrontier_OutsideEast_OnResume
# 5 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 3 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 6 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, BattleFrontier_OutsideEast_OnTransition
# 7 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.byte 0
# 8 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 9 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 10 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_OnResume::
# 11 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 7 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 12 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	goto_if_set FLAG_SYS_CTRL_OBJ_DELETE, BattleFrontier_OutsideEast_OnResume_2
# 13 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_OnResume_1:
# 14 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	end
# 15 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 16 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_OnResume_2:
# 17 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 8 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 18 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	call BattleFrontier_OutsideEast_EventScript_TryRemoveSudowoodo
# 19 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	goto BattleFrontier_OutsideEast_OnResume_1
# 20 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 21 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 22 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_EventScript_TryRemoveSudowoodo::
# 23 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 14 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 24 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 25 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 15 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 26 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
# 27 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	goto_if_ne BattleFrontier_OutsideEast_EventScript_TryRemoveSudowoodo_2
# 28 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_EventScript_TryRemoveSudowoodo_1:
# 29 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 18 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 30 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	removeobject VAR_LAST_TALKED
# 31 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	return
# 32 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 33 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_EventScript_TryRemoveSudowoodo_2:
# 34 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 16 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 35 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	goto Common_EventScript_NopReturn
# 36 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	goto BattleFrontier_OutsideEast_EventScript_TryRemoveSudowoodo_1
# 37 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 38 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 39 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_OnTransition::
# 40 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 23 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 41 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	setvar VAR_BRAVO_TRAINER_BATTLE_TOWER_ON, 0
# 42 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 24 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 43 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	setflag FLAG_HIDE_BATTLE_TOWER_REPORTER
# 44 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 25 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 45 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	goto_if_unset FLAG_DEFEATED_SUDOWOODO, BattleFrontier_OutsideEast_OnTransition_2
# 46 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_OnTransition_1:
# 47 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	end
# 48 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 49 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_OnTransition_2:
# 50 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 26 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 51 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	call BattleFrontier_OutsideEast_EventScript_ShowSudowoodo
# 52 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	goto BattleFrontier_OutsideEast_OnTransition_1
# 53 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 54 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 55 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_EventScript_ShowSudowoodo::
# 56 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 32 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 57 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	clearflag FLAG_HIDE_BATTLE_FRONTIER_SUDOWOODO
# 58 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	return
# 59 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 60 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 61 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_EventScript_BattleTowerSign::
# 62 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 37 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 63 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	msgbox BattleFrontier_OutsideEast_Text_BattleTowerSign, MSGBOX_SIGN
# 64 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	end
# 65 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 66 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 67 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_EventScript_BattlePalaceSign::
# 68 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 42 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 69 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	msgbox BattleFrontier_OutsideEast_Text_BattlePalaceSign, MSGBOX_SIGN
# 70 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	end
# 71 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 72 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 73 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_EventScript_BattleArenaSign::
# 74 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 47 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 75 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	msgbox BattleFrontier_OutsideEast_Text_BattleArenaSign, MSGBOX_SIGN
# 76 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	end
# 77 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 78 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 79 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_EventScript_BattlePyramidSign::
# 80 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 52 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 81 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	msgbox BattleFrontier_OutsideEast_Text_BattlePyramidSign, MSGBOX_SIGN
# 82 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	end
# 83 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 84 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 85 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_EventScript_NinjaBoy::
# 86 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 57 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 87 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	msgbox BattleFrontier_OutsideEast_Text_BattleTowerFeelsSpecial, MSGBOX_NPC
# 88 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	end
# 89 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 90 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 91 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_EventScript_Man1::
# 92 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 62 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 93 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	msgbox BattleFrontier_OutsideEast_Text_ConquerLeagueAndFrontier, MSGBOX_NPC
# 94 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	end
# 95 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 96 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 97 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_EventScript_Hiker::
# 98 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 67 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 99 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	msgbox BattleFrontier_OutsideEast_Text_PyramidTooHarsh, MSGBOX_NPC
# 100 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	end
# 101 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 102 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 103 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_EventScript_HexManiac::
# 104 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 72 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 105 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	msgbox BattleFrontier_OutsideEast_Text_ThriveInDarkness, MSGBOX_NPC
# 106 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	end
# 107 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 108 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 109 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_EventScript_BlackBelt1::
# 110 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 77 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 111 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	msgbox BattleFrontier_OutsideEast_Text_PutTogetherUltimateTeam, MSGBOX_NPC
# 112 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	end
# 113 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 114 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 115 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_EventScript_Cook::
# 116 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 82 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 117 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	lock
# 118 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 83 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 119 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	msgbox BattleFrontier_OutsideEast_Text_BelieveInYouBuddy, MSGBOX_DEFAULT
# 120 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 84 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 121 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	release
# 122 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	end
# 123 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 124 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 125 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_EventScript_Zigzagoon::
# 126 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 89 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 127 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	lock
# 128 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 90 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 129 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	faceplayer
# 130 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 91 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 131 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	waitse
# 132 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 92 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 133 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	playmoncry SPECIES_ZIGZAGOON, CRY_MODE_NORMAL
# 134 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 93 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 135 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	msgbox BattleFrontier_OutsideEast_Text_ZigzagoonLooksVacant, MSGBOX_DEFAULT
# 136 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 94 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 137 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	waitmoncry
# 138 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 95 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 139 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	release
# 140 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	end
# 141 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 142 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 143 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_EventScript_RichBoy::
# 144 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 100 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 145 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	msgbox BattleFrontier_OutsideEast_Text_PeopleCallMeBusybody, MSGBOX_NPC
# 146 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	end
# 147 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 148 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 149 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_EventScript_ExpertF::
# 150 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 105 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 151 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	msgbox BattleFrontier_OutsideEast_Text_OnceBeatGymLeader, MSGBOX_NPC
# 152 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	end
# 153 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 154 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 155 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_EventScript_TriathleteF::
# 156 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 110 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 157 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	msgbox BattleFrontier_OutsideEast_Text_FastOnBikeAndBattles, MSGBOX_NPC
# 158 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	end
# 159 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 160 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 161 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_EventScript_Twin::
# 162 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 115 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 163 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	msgbox BattleFrontier_OutsideEast_Text_BetterThanDaddyAtPokemon, MSGBOX_NPC
# 164 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	end
# 165 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 166 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 167 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_EventScript_Man2::
# 168 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 120 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 169 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	lock
# 170 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 121 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 171 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	msgbox BattleFrontier_OutsideEast_Text_GoRackUpSomeWinsForDaddy, MSGBOX_DEFAULT
# 172 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 122 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 173 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	release
# 174 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	end
# 175 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 176 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 177 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_EventScript_TriathleteM::
# 178 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 127 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 179 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	msgbox BattleFrontier_OutsideEast_Text_DidScottBringYouHere, MSGBOX_NPC
# 180 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	end
# 181 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 182 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 183 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_EventScript_Sudowoodo::
# 184 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 132 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 185 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	lock
# 186 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 133 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 187 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	faceplayer
# 188 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 134 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 189 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	waitse
# 190 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 135 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 191 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	playse SE_SUDOWOODO_SHAKE
# 192 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 136 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 193 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	applymovement LOCALID_FRONTIER_SUDOWOODO, BattleFrontier_OutsideEast_Movement_SudowoodoShake
# 194 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 137 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 195 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	waitmovement 0
# 196 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 138 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 197 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	release
# 198 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	end
# 199 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 200 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 201 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_EventScript_WaterSudowoodo::
# 202 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 143 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 203 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	lock
# 204 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 144 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 205 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	faceplayer
# 206 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 145 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 207 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	special DoWateringBerryTreeAnim
# 208 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 146 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 209 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	waitstate
# 210 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 147 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 211 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	waitse
# 212 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 148 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 213 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	playse SE_SUDOWOODO_SHAKE
# 214 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 149 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 215 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	applymovement LOCALID_FRONTIER_SUDOWOODO, BattleFrontier_OutsideEast_Movement_SudowoodoShake
# 216 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 150 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 217 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	waitmovement 0
# 218 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 151 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 219 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	msgbox gText_Sudowoodo_Attacked, MSGBOX_DEFAULT
# 220 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 152 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 221 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	closemessage
# 222 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 153 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 223 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	waitse
# 224 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 154 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 225 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	playmoncry SPECIES_SUDOWOODO, CRY_MODE_ENCOUNTER
# 226 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 155 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 227 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	delay 40
# 228 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 156 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 229 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	waitmoncry
# 230 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 157 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 231 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	setvar VAR_LAST_TALKED, LOCALID_FRONTIER_SUDOWOODO
# 232 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 158 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 233 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	setwildbattle SPECIES_SUDOWOODO, 40
# 234 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 159 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 235 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 236 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 160 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 237 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	dowildbattle
# 238 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 161 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 239 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 240 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 162 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 241 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 242 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 163 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 243 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
# 244 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	goto_if_eq BattleFrontier_OutsideEast_EventScript_WaterSudowoodo_2
# 245 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_EventScript_WaterSudowoodo_1:
# 246 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 166 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 247 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
# 248 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	goto_if_eq BattleFrontier_OutsideEast_EventScript_WaterSudowoodo_5
# 249 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_EventScript_WaterSudowoodo_4:
# 250 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 169 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 251 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
# 252 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	goto_if_eq BattleFrontier_OutsideEast_EventScript_WaterSudowoodo_8
# 253 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_EventScript_WaterSudowoodo_7:
# 254 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 172 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 255 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	setflag FLAG_DEFEATED_SUDOWOODO
# 256 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 173 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 257 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	release
# 258 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	end
# 259 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 260 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_EventScript_WaterSudowoodo_2:
# 261 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 164 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 262 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	goto BattleFrontier_OutsideEast_EventScript_DefeatedSudowoodo
# 263 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	goto BattleFrontier_OutsideEast_EventScript_WaterSudowoodo_1
# 264 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 265 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_EventScript_WaterSudowoodo_5:
# 266 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 167 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 267 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	goto BattleFrontier_OutsideEast_EventScript_DefeatedSudowoodo
# 268 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	goto BattleFrontier_OutsideEast_EventScript_WaterSudowoodo_4
# 269 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 270 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_EventScript_WaterSudowoodo_8:
# 271 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 170 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 272 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	goto BattleFrontier_OutsideEast_EventScript_DefeatedSudowoodo
# 273 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	goto BattleFrontier_OutsideEast_EventScript_WaterSudowoodo_7
# 274 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 275 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 276 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_EventScript_DefeatedSudowoodo::
# 277 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 178 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 278 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	setflag FLAG_DEFEATED_SUDOWOODO
# 279 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 179 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 280 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
# 281 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	end
# 282 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 283 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 284 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 183 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 285 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_Movement_SudowoodoShake:
# 286 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 184 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 287 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	face_right
# 288 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 185 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 289 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	delay_8
# 290 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 186 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 291 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	face_down
# 292 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 187 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 293 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	delay_8
# 294 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 188 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 295 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	face_left
# 296 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 189 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 297 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	delay_8
# 298 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 190 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 299 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	face_down
# 300 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 191 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 301 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	delay_8
# 302 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 192 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 303 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	face_right
# 304 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 193 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 305 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	delay_8
# 306 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 194 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 307 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	face_down
# 308 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 195 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 309 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	delay_8
# 310 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 196 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 311 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	face_left
# 312 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 197 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 313 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	delay_8
# 314 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 198 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 315 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	face_down
# 316 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 199 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 317 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	step_end
# 318 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 319 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_EventScript_Maniac1::
# 320 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 203 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 321 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	msgbox BattleFrontier_OutsideEast_Text_HeardPrettyGirlAtBattleArena, MSGBOX_NPC
# 322 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	end
# 323 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 324 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 325 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_EventScript_Girl::
# 326 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 208 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 327 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	msgbox BattleFrontier_OutsideEast_Text_SometimesImportantOldManInThere, MSGBOX_NPC
# 328 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	end
# 329 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 330 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 331 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_EventScript_PsychicM::
# 332 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 213 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 333 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	msgbox BattleFrontier_OutsideEast_Text_LegendOfBattlePyramid, MSGBOX_NPC
# 334 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	end
# 335 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 336 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 337 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_EventScript_Man3::
# 338 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 218 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 339 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	msgbox BattleFrontier_OutsideEast_Text_GotWipedOut, MSGBOX_NPC
# 340 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	end
# 341 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 342 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 343 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_EventScript_Woman1::
# 344 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 223 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 345 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	msgbox BattleFrontier_OutsideEast_Text_ToughTrainerInBattleTower, MSGBOX_NPC
# 346 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	end
# 347 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 348 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 349 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_EventScript_Woman2::
# 350 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 228 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 351 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	msgbox BattleFrontier_OutsideEast_Text_EnoughBattlePointsForDoll, MSGBOX_NPC
# 352 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	end
# 353 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 354 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 355 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_EventScript_BlackBelt2::
# 356 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 233 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 357 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	msgbox BattleFrontier_OutsideEast_Text_LikeToHaveNameRecordedHere, MSGBOX_NPC
# 358 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	end
# 359 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 360 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 361 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_EventScript_Maniac2::
# 362 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 238 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 363 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	lock
# 364 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 239 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 365 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	msgbox BattleFrontier_OutsideEast_Text_CanDoAnythingWithYou, MSGBOX_DEFAULT
# 366 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 240 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 367 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	release
# 368 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	end
# 369 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 370 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 371 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_EventScript_Woman3::
# 372 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 245 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 373 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	lock
# 374 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 246 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 375 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	msgbox BattleFrontier_OutsideEast_Text_PowerOfOurLoveWillOvercome, MSGBOX_DEFAULT
# 376 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 247 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 377 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	release
# 378 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	end
# 379 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 380 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 381 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_EventScript_RankingHallSign::
# 382 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 252 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 383 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	msgbox BattleFrontier_OutsideEast_Text_RankingHallSign, MSGBOX_SIGN
# 384 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	end
# 385 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 386 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 387 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_EventScript_ExchangeCornerSign::
# 388 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 257 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 389 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	msgbox BattleFrontier_OutsideEast_Text_ExchangeCornerSign, MSGBOX_SIGN
# 390 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	end
# 391 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 392 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 393 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_EventScript_Gentleman::
# 394 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 262 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 395 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	msgbox BattleFrontier_OutsideEast_Text_FrontierNotExclusivelyForToughTrainers, MSGBOX_NPC
# 396 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	end
# 397 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 398 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 399 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_EventScript_OldWoman::
# 400 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 267 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 401 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	lock
# 402 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 268 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 403 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	faceplayer
# 404 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 269 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 405 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	goto_if_set FLAG_DEFEATED_SUDOWOODO, BattleFrontier_OutsideEast_EventScript_OldWoman_2
# 406 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_EventScript_OldWoman_1:
# 407 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 272 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 408 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	msgbox BattleFrontier_OutsideEast_Text_OddTreeHereSeemsToWiggle, MSGBOX_DEFAULT
# 409 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 273 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 410 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	release
# 411 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	end
# 412 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 413 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_EventScript_OldWoman_2:
# 414 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 270 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 415 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	goto BattleFrontier_OutsideEast_EventScript_OldWomanSudowoodoGone
# 416 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	goto BattleFrontier_OutsideEast_EventScript_OldWoman_1
# 417 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 418 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 419 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_EventScript_OldWomanSudowoodoGone::
# 420 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 278 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 421 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	msgbox BattleFrontier_OutsideEast_Text_OnceAnOddTreePastHere, MSGBOX_DEFAULT
# 422 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 279 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 423 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	release
# 424 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	end
# 425 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 426 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 427 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_EventScript_Camper::
# 428 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 284 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 429 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	msgbox BattleFrontier_OutsideEast_Text_StickyMonWithLongTail, MSGBOX_NPC
# 430 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	end
# 431 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 432 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 433 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_Text_BattleTowerSign::
# 434 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 288 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 435 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "This is the BATTLE TOWER!\n"
# 436 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Keep the win streak as the toughest\l"
# 437 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "TRAINER!$"
# 438 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 439 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_Text_BattlePalaceSign::
# 440 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 294 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 441 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "This is the BATTLE PALACE!\n"
# 442 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Keep your eyes on POKéMON battles!$"
# 443 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 444 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_Text_BattleArenaSign::
# 445 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 299 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 446 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "This is the BATTLE ARENA!\n"
# 447 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Let the toughest teams gather!$"
# 448 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 449 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_Text_BattlePyramidSign::
# 450 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 304 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 451 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "This is the BATTLE PYRAMID!\n"
# 452 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Advance through the Battle Quest!$"
# 453 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 454 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_Text_RankingHallSign::
# 455 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 309 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 456 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "BATTLE FRONTIER RANKING HALL\n"
# 457 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Set your sights on new records!$"
# 458 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 459 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_Text_ExchangeCornerSign::
# 460 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 314 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 461 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "BATTLE POINT EXCHANGE SERVICE CORNER\n"
# 462 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Exchange your Battle Points!$"
# 463 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 464 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_Text_BattleTowerFeelsSpecial::
# 465 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 319 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 466 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Wow!\n"
# 467 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "It's huge!\p"
# 468 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "The BATTLE TOWER feels special.\n"
# 469 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "It's different from the others.$"
# 470 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 471 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_Text_ConquerLeagueAndFrontier::
# 472 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 326 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 473 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "My grand ambition is to conquer both\n"
# 474 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "the BATTLE FRONTIER and the POKéMON\l"
# 475 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "LEAGUE.\p"
# 476 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "And if my dream comes true…\p"
# 477 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "I… I'm going to ask MIMI next door\n"
# 478 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "if she will be friends with me!$"
# 479 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 480 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_Text_PyramidTooHarsh::
# 481 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 335 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 482 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "The BATTLE PYRAMID's too harsh!\n"
# 483 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "I just can't make it to the top!\p"
# 484 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Since I'm out of options, maybe I can\n"
# 485 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "climb the outside…$"
# 486 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 487 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_Text_ThriveInDarkness::
# 488 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 342 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 489 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "I thrive in darkness…\n"
# 490 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Yes… What is worthy of me?\l"
# 491 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "None other than the BATTLE PYRAMID…\p"
# 492 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "What say you to wandering in darkness\n"
# 493 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "and in utter and total desperation?$"
# 494 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 495 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_Text_PutTogetherUltimateTeam::
# 496 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 350 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 497 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "I didn't sleep for a week, but then\n"
# 498 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "I put together the ultimate team!\p"
# 499 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "I can't see myself losing, no joke.\n"
# 500 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "We're storming the BATTLE ARENA!$"
# 501 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 502 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_Text_DidScottBringYouHere::
# 503 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 357 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 504 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Did SCOTT bring you here, too?\n"
# 505 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "What is it with that guy?\p"
# 506 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "It sounds like he really does know\n"
# 507 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "how to spot talented TRAINERS, but…\p"
# 508 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "I've never seen him battling in person\n"
# 509 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "ever.$"
# 510 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 511 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_Text_BelieveInYouBuddy::
# 512 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 366 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 513 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "ZIGG!\n"
# 514 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "I believe in you, little buddy!\p"
# 515 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "I'll make my little ZIGG any favorite\n"
# 516 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "tasty treats you like if you win!$"
# 517 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 518 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_Text_ZigzagoonLooksVacant::
# 519 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 373 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 520 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "ZIGZAGOON looks vacant…$"
# 521 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 522 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_Text_PeopleCallMeBusybody::
# 523 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 377 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 524 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "People call me a busybody,\n"
# 525 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "but I can't help it.\p"
# 526 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Your hat's on crooked!\n"
# 527 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Oh, no, trash on the ground!\l"
# 528 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Oops, it's almost dinnertime!\p"
# 529 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "I don't know if I can stand to just\n"
# 530 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "watch at the BATTLE PALACE…$"
# 531 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 532 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_Text_OnceBeatGymLeader::
# 533 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 387 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 534 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "I may not look that impressive now,\n"
# 535 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "but I once beat a GYM LEADER.\p"
# 536 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Who knows, maybe I should give it\n"
# 537 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "another shot at glory.$"
# 538 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 539 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_Text_FastOnBikeAndBattles::
# 540 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 394 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 541 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "I'm fast on my BIKE, and that goes for\n"
# 542 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "the way I battle, too.\p"
# 543 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "I win matches in the blink of\n"
# 544 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "an eye!$"
# 545 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 546 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_Text_BetterThanDaddyAtPokemon::
# 547 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 401 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 548 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "I'm better than my daddy\n"
# 549 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "at POKéMON.$"
# 550 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 551 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_Text_GoRackUpSomeWinsForDaddy::
# 552 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 406 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 553 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Go on, my baby sweetie!\n"
# 554 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Go rack up some wins for Daddy!\p"
# 555 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "You're just like your mother,\n"
# 556 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "so you'll be dominating!$"
# 557 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 558 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_Text_HeardPrettyGirlAtBattleArena::
# 559 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 413 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 560 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "It wasn't easy getting here,\n"
# 561 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "but I'd heard about this knockout\l"
# 562 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "pretty girl at the BATTLE ARENA.\p"
# 563 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Instead of her, do you know what\n"
# 564 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "I found?\p"
# 565 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "A whole teeming mob of sweaty,\n"
# 566 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "stinky, and primitive martial artists!$"
# 567 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 568 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_Text_SometimesImportantOldManInThere::
# 569 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 423 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 570 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "I sometimes see this really important-\n"
# 571 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "looking old man going in there.\p"
# 572 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "He has these really awesome POKéMON.\n"
# 573 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "He seems really nice, though.$"
# 574 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 575 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_Text_LegendOfBattlePyramid::
# 576 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 430 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 577 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Do you know it?\n"
# 578 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "The legend of the BATTLE PYRAMID?\p"
# 579 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "When there comes a confident TRAINER\n"
# 580 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "reaching for the golden pinnacle,\l"
# 581 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "there shall appear a man among men.\p"
# 582 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Don't know that legend?\n"
# 583 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Well, of course not!\l"
# 584 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "I just made it up!\p"
# 585 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "What's it supposed to mean?\n"
# 586 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "That, my friend, I can't say!$"
# 587 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 588 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_Text_GotWipedOut::
# 589 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 443 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 590 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Man! Oh man!\n"
# 591 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "I've never lost once before!\p"
# 592 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "But I got wiped out with no saving\n"
# 593 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "grace at all!\p"
# 594 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "And then I'm told I don't have any\n"
# 595 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "talent?! Man!$"
# 596 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 597 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_Text_ToughTrainerInBattleTower::
# 598 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 452 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 599 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "This guy ran into a horribly tough\n"
# 600 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "TRAINER while he was on the BATTLE\l"
# 601 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "TOWER challenge.\p"
# 602 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Now look at him…\p"
# 603 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "You need to be cautious if you ever\n"
# 604 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "decide to go to the BATTLE TOWER.$"
# 605 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 606 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_Text_EnoughBattlePointsForDoll::
# 607 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 461 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 608 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Yes!\n"
# 609 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "I've finally got enough Battle Points!\p"
# 610 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "I guess I'll trade for another giant\n"
# 611 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "plush DOLL!$"
# 612 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 613 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_Text_LikeToHaveNameRecordedHere::
# 614 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 468 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 615 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Oh, yeah, okay!\n"
# 616 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "So this is the RANKING HALL!\p"
# 617 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "I'd like to go down in history as\n"
# 618 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "a super champ and have my name\l"
# 619 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "recorded here for posterity.$"
# 620 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 621 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_Text_CanDoAnythingWithYou::
# 622 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 476 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 623 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "With you by my side, I can do anything.$"
# 624 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 625 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_Text_PowerOfOurLoveWillOvercome::
# 626 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 480 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 627 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Ooh, darling, you are so wonderful!\p"
# 628 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Ooh, I just can't wait anymore!\p"
# 629 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Let's go to a MULTI BATTLE ROOM\n"
# 630 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "right this instant!\p"
# 631 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "If we get together in the BATTLE SALON,\n"
# 632 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "the power of our love will overcome\l"
# 633 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "everyone we meet.\p"
# 634 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Why, before us, darling, everything\n"
# 635 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "will topple like dominoes!$"
# 636 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 637 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_Text_FrontierNotExclusivelyForToughTrainers::
# 638 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 492 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 639 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "The BATTLE FRONTIER isn't exclusively\n"
# 640 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "for tough TRAINERS.\p"
# 641 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Many people with special abilities\n"
# 642 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "have been invited, it seems.\p"
# 643 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "That man SCOTT…\p"
# 644 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "He may have built this place to serve\n"
# 645 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "a bigger objective…$"
# 646 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 647 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_Text_OddTreeHereSeemsToWiggle::
# 648 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 502 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 649 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Excuse me, young one.\n"
# 650 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Have you good eyesight?\p"
# 651 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "There is an odd tree past here, and to\n"
# 652 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "my tired eyes it seems to wiggle.$"
# 653 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 654 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_Text_OnceAnOddTreePastHere::
# 655 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 509 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 656 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Excuse me, young one.\n"
# 657 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Have you a good memory?\p"
# 658 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "I have this feeling there once was\n"
# 659 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "an odd tree past here.$"
# 660 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 661 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_Text_StickyMonWithLongTail::
# 662 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 516 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
# 663 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "I…\n"
# 664 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "I saw it!\p"
# 665 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "There was a sticky sort of a POKéMON\n"
# 666 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "with a long tail up ahead!\p"
# 667 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "It was hiding under a boulder, and\n"
# 668 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "it kept staring at me!$"
