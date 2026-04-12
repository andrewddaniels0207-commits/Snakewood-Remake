# 1 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"

# 2 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
FiveIsland_RocketWarehouse_Frlg_MapScripts::
# 3 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 2 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 4 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, FiveIsland_RocketWarehouse_OnLoad
# 5 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 3 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 6 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, FiveIsland_RocketWarehouse_OnTransition
# 7 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.byte 0
# 8 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"

# 9 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"

# 10 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
FiveIsland_RocketWarehouse_OnTransition::
# 11 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 7 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 12 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_FIVE_ISLAND_ROCKET_WAREHOUSE
# 13 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	end
# 14 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"

# 15 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"

# 16 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
FiveIsland_RocketWarehouse_OnLoad::
# 17 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 12 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 18 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	call_if_defeated TRAINER_TEAM_ROCKET_ADMIN, FiveIsland_RocketWarehouse_EventScript_SetArrowsForReEntry
# 19 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	end
# 20 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"

# 21 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"

# 22 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
FiveIsland_RocketWarehouse_EventScript_SetArrowsForReEntry::
# 23 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 17 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 24 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	setmetatile 26, 20, METATILE_SilphCo_Arrow_Up, 0
# 25 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 18 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 26 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	setmetatile 27, 20, METATILE_SilphCo_Arrow_Up, 0
# 27 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	return
# 28 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"

# 29 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"

# 30 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
FiveIsland_RocketWarehouse_EventScript_Cage::
# 31 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 23 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 32 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	lockall
# 33 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 24 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 34 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	goto_if_set FLAG_DEFEATED_ROCKETS_IN_WAREHOUSE, FiveIsland_RocketWarehouse_EventScript_Cage_2
# 35 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
FiveIsland_RocketWarehouse_EventScript_Cage_1:
# 36 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 27 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 37 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	msgbox FiveIsland_RocketWarehouse_Text_ManyMonsLockedInPen
# 38 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 28 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 39 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	releaseall
# 40 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	end
# 41 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"

# 42 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
FiveIsland_RocketWarehouse_EventScript_Cage_2:
# 43 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 25 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 44 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	goto FiveIsland_RocketWarehouse_EventScript_CageUnlocked
# 45 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	goto FiveIsland_RocketWarehouse_EventScript_Cage_1
# 46 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"

# 47 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"

# 48 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
FiveIsland_RocketWarehouse_EventScript_CageUnlocked::
# 49 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 33 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 50 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	msgbox FiveIsland_RocketWarehouse_Text_PenUnlockedMonsFled
# 51 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 34 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 52 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	releaseall
# 53 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	end
# 54 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"

# 55 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"

# 56 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
FiveIsland_RocketWarehouse_EventScript_Computer::
# 57 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 39 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 58 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	msgbox FiveIsland_RocketWarehouse_Text_ReportWithGraphsAndText, MSGBOX_SIGN
# 59 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	end
# 60 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"

# 61 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"

# 62 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
FiveIsland_RocketWarehouse_EventScript_Admin2Trigger::
# 63 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 44 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 64 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	lockall
# 65 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 45 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 66 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	applymovement LOCALID_WAREHOUSE_ADMIN2, Common_Movement_WalkInPlaceFasterLeft
# 67 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 46 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 68 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	waitmovement 0
# 69 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 47 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 70 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_ROCKET_WAREHOUSE, 1
# 71 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 48 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 72 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	releaseall
# 73 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	end
# 74 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"

# 75 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"

# 76 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
FiveIsland_RocketWarehouse_EventScript_Gideon::
# 77 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 53 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 78 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	trainerbattle_single TRAINER_SCIENTIST_GIDEON, FiveIsland_RocketWarehouse_Text_GideonIntro, FiveIsland_RocketWarehouse_Text_GideonDefeat, FiveIsland_RocketWarehouse_EventScript_DefeatedGideon
# 79 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 54 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 80 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	goto_if_set FLAG_IS_CHAMPION, FiveIsland_RocketWarehouse_EventScript_Gideon_2
# 81 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
FiveIsland_RocketWarehouse_EventScript_Gideon_1:
# 82 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 57 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 83 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	msgbox FiveIsland_RocketWarehouse_Text_GetLostLeaveMeBe, MSGBOX_AUTOCLOSE
# 84 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	end
# 85 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"

# 86 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
FiveIsland_RocketWarehouse_EventScript_Gideon_2:
# 87 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 55 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 88 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	goto FiveIsland_RocketWarehouse_EventScript_MentionGiovannisKid
# 89 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	goto FiveIsland_RocketWarehouse_EventScript_Gideon_1
# 90 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"

# 91 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"

# 92 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
FiveIsland_RocketWarehouse_EventScript_MentionGiovannisKid::
# 93 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 62 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 94 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	famechecker FAMECHECKER_GIOVANNI, 5
# 95 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 63 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 96 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	msgbox FiveIsland_RocketWarehouse_Text_GiovannisKidHasRedHair, MSGBOX_AUTOCLOSE
# 97 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	end
# 98 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"

# 99 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"

# 100 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
FiveIsland_RocketWarehouse_EventScript_DefeatedGideon::
# 101 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 68 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 102 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	msgbox FiveIsland_RocketWarehouse_Text_GideonPostBattle
# 103 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 69 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 104 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	setflag FLAG_RECOVERED_SAPPHIRE
# 105 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 70 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 106 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	giveitem ITEM_SAPPHIRE
# 107 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 71 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 108 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	release
# 109 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	end
# 110 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"

# 111 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"

# 112 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
FiveIsland_RocketWarehouse_EventScript_Grunt2::
# 113 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 76 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 114 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_47, FiveIsland_RocketWarehouse_Text_Grunt2Intro, FiveIsland_RocketWarehouse_Text_Grunt2Defeat
# 115 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 77 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 116 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	msgbox FiveIsland_RocketWarehouse_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
# 117 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	end
# 118 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"

# 119 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"

# 120 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
FiveIsland_RocketWarehouse_EventScript_Grunt3::
# 121 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 82 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 122 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_48, FiveIsland_RocketWarehouse_Text_Grunt3Intro, FiveIsland_RocketWarehouse_Text_Grunt3Defeat
# 123 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 83 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 124 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	msgbox FiveIsland_RocketWarehouse_Text_Grunt3PostBattle, MSGBOX_AUTOCLOSE
# 125 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	end
# 126 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"

# 127 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"

# 128 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
FiveIsland_RocketWarehouse_EventScript_Admin2::
# 129 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 88 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 130 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_ADMIN_2, FiveIsland_RocketWarehouse_Text_Admin2Intro, FiveIsland_RocketWarehouse_Text_Admin2Defeat, FiveIsland_RocketWarehouse_EventScript_DefeatedAdmin2
# 131 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 89 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 132 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	msgbox FiveIsland_RocketWarehouse_Text_Admin2PostBattle, MSGBOX_AUTOCLOSE
# 133 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	end
# 134 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"

# 135 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"

# 136 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
FiveIsland_RocketWarehouse_EventScript_DefeatedAdmin2::
# 137 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 94 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 138 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	getplayerxy PLAYER_X_POS, PLAYER_Y_POS
# 139 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 95 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 140 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	compare PLAYER_X_POS, 24
# 141 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	goto_if_le FiveIsland_RocketWarehouse_EventScript_DefeatedAdmin2_2
# 142 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
FiveIsland_RocketWarehouse_EventScript_DefeatedAdmin2_1:
# 143 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 98 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 144 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	msgbox FiveIsland_RocketWarehouse_Text_Admin2PostBattle
# 145 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 99 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 146 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	closemessage
# 147 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 100 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 148 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	fadescreen FADE_TO_BLACK
# 149 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 101 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 150 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	removeobject LOCALID_WAREHOUSE_GRUNT2
# 151 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 102 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 152 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	removeobject LOCALID_WAREHOUSE_GRUNT3
# 153 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 103 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 154 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	removeobject LOCALID_WAREHOUSE_ADMIN2
# 155 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 104 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 156 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	removeobject LOCALID_WAREHOUSE_ADMIN1
# 157 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 105 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 158 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	setflag FLAG_HIDE_FIVE_ISLAND_ROCKETS
# 159 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 106 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 160 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 161 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 107 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 162 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_ROCKET_WAREHOUSE, 1
# 163 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 108 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 164 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	setflag FLAG_DEFEATED_ROCKETS_IN_WAREHOUSE
# 165 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 109 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 166 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	release
# 167 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	end
# 168 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"

# 169 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
FiveIsland_RocketWarehouse_EventScript_DefeatedAdmin2_2:
# 170 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 96 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 171 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	call FiveIsland_RocketWarehouse_EventScript_PlayerFaceAdmin2
# 172 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	goto FiveIsland_RocketWarehouse_EventScript_DefeatedAdmin2_1
# 173 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"

# 174 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"

# 175 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
FiveIsland_RocketWarehouse_EventScript_PlayerFaceAdmin2::
# 176 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 114 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 177 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 178 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 115 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 179 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	waitmovement 0
# 180 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	return
# 181 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"

# 182 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"

# 183 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
FiveIsland_RocketWarehouse_EventScript_Grunt1::
# 184 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 120 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 185 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_42, FiveIsland_RocketWarehouse_Text_Grunt1Intro, FiveIsland_RocketWarehouse_Text_Grunt1Defeat
# 186 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 121 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 187 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	msgbox FiveIsland_RocketWarehouse_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
# 188 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	end
# 189 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"

# 190 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"

# 191 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
FiveIsland_RocketWarehouse_EventScript_Admin1::
# 192 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 126 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 193 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_ADMIN, FiveIsland_RocketWarehouse_Text_Admin1Intro, FiveIsland_RocketWarehouse_Text_Admin1Defeat, FiveIsland_RocketWarehouse_EventScript_DefeatedAdmin1
# 194 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 127 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 195 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	msgbox FiveIsland_RocketWarehouse_Text_MadeItSoYouCanComeBackThrough, MSGBOX_AUTOCLOSE
# 196 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	end
# 197 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"

# 198 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"

# 199 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
FiveIsland_RocketWarehouse_EventScript_DefeatedAdmin1::
# 200 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 132 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 201 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	getplayerxy PLAYER_X_POS, PLAYER_Y_POS
# 202 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 133 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 203 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 204 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 134 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 205 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	compare VAR_RESULT, DIR_NORTH
# 206 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	goto_if_eq FiveIsland_RocketWarehouse_EventScript_DefeatedAdmin1_2
# 207 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
FiveIsland_RocketWarehouse_EventScript_DefeatedAdmin1_1:
# 208 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 137 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 209 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	msgbox FiveIsland_RocketWarehouse_Text_Admin1PostBattle
# 210 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 138 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 211 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	closemessage
# 212 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 139 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 213 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	compare PLAYER_X_POS, 24
# 214 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	goto_if_le FiveIsland_RocketWarehouse_EventScript_DefeatedAdmin1_5
# 215 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
FiveIsland_RocketWarehouse_EventScript_DefeatedAdmin1_4:
# 216 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 142 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 217 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	compare PLAYER_X_POS, 25
# 218 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	goto_if_eq FiveIsland_RocketWarehouse_EventScript_DefeatedAdmin1_8
# 219 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
FiveIsland_RocketWarehouse_EventScript_DefeatedAdmin1_7:
# 220 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 145 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 221 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	compare PLAYER_X_POS, 26
# 222 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	goto_if_eq FiveIsland_RocketWarehouse_EventScript_DefeatedAdmin1_11
# 223 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
FiveIsland_RocketWarehouse_EventScript_DefeatedAdmin1_10:
# 224 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 148 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 225 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	compare PLAYER_X_POS, 27
# 226 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	goto_if_eq FiveIsland_RocketWarehouse_EventScript_DefeatedAdmin1_14
# 227 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
FiveIsland_RocketWarehouse_EventScript_DefeatedAdmin1_13:
# 228 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 151 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 229 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	playse SE_PIN
# 230 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 152 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 231 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	call FiveIsland_RocketWarehouse_EventScript_SetArrowsForReEntry
# 232 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 153 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 233 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	special DrawWholeMapView
# 234 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 154 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 235 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	waitse
# 236 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 155 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 237 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	compare PLAYER_X_POS, 24
# 238 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	goto_if_le FiveIsland_RocketWarehouse_EventScript_DefeatedAdmin1_17
# 239 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
FiveIsland_RocketWarehouse_EventScript_DefeatedAdmin1_16:
# 240 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 158 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 241 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	compare PLAYER_X_POS, 25
# 242 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	goto_if_eq FiveIsland_RocketWarehouse_EventScript_DefeatedAdmin1_20
# 243 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
FiveIsland_RocketWarehouse_EventScript_DefeatedAdmin1_19:
# 244 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 161 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 245 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	compare PLAYER_X_POS, 26
# 246 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	goto_if_eq FiveIsland_RocketWarehouse_EventScript_DefeatedAdmin1_23
# 247 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
FiveIsland_RocketWarehouse_EventScript_DefeatedAdmin1_22:
# 248 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 164 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 249 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	compare PLAYER_X_POS, 27
# 250 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	goto_if_eq FiveIsland_RocketWarehouse_EventScript_DefeatedAdmin1_26
# 251 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
FiveIsland_RocketWarehouse_EventScript_DefeatedAdmin1_25:
# 252 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 167 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 253 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	msgbox FiveIsland_RocketWarehouse_Text_MadeItSoYouCanComeBackThrough
# 254 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 168 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 255 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	release
# 256 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	end
# 257 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"

# 258 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
FiveIsland_RocketWarehouse_EventScript_DefeatedAdmin1_2:
# 259 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 135 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 260 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	call FiveIsland_RocketWarehouse_EventScript_PlayerFaceAdmin1
# 261 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	goto FiveIsland_RocketWarehouse_EventScript_DefeatedAdmin1_1
# 262 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"

# 263 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
FiveIsland_RocketWarehouse_EventScript_DefeatedAdmin1_5:
# 264 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 140 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 265 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	call FiveIsland_RocketWarehouse_EventScript_AdminWalkToSwitchFar
# 266 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	goto FiveIsland_RocketWarehouse_EventScript_DefeatedAdmin1_4
# 267 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"

# 268 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
FiveIsland_RocketWarehouse_EventScript_DefeatedAdmin1_8:
# 269 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 143 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 270 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	call FiveIsland_RocketWarehouse_EventScript_AdminWalkToSwitch
# 271 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	goto FiveIsland_RocketWarehouse_EventScript_DefeatedAdmin1_7
# 272 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"

# 273 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
FiveIsland_RocketWarehouse_EventScript_DefeatedAdmin1_11:
# 274 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 146 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 275 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	call FiveIsland_RocketWarehouse_EventScript_AdminFaceSwitch
# 276 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	goto FiveIsland_RocketWarehouse_EventScript_DefeatedAdmin1_10
# 277 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"

# 278 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
FiveIsland_RocketWarehouse_EventScript_DefeatedAdmin1_14:
# 279 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 149 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 280 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	call FiveIsland_RocketWarehouse_EventScript_AdminFaceSwitch
# 281 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	goto FiveIsland_RocketWarehouse_EventScript_DefeatedAdmin1_13
# 282 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"

# 283 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
FiveIsland_RocketWarehouse_EventScript_DefeatedAdmin1_17:
# 284 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 156 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 285 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	call FiveIsland_RocketWarehouse_EventScript_AdminFacePlayerLeft
# 286 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	goto FiveIsland_RocketWarehouse_EventScript_DefeatedAdmin1_16
# 287 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"

# 288 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
FiveIsland_RocketWarehouse_EventScript_DefeatedAdmin1_20:
# 289 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 159 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 290 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	call FiveIsland_RocketWarehouse_EventScript_AdminFacePlayerLeft
# 291 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	goto FiveIsland_RocketWarehouse_EventScript_DefeatedAdmin1_19
# 292 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"

# 293 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
FiveIsland_RocketWarehouse_EventScript_DefeatedAdmin1_23:
# 294 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 162 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 295 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	call FiveIsland_RocketWarehouse_EventScript_AdminFacePlayerLeft
# 296 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	goto FiveIsland_RocketWarehouse_EventScript_DefeatedAdmin1_22
# 297 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"

# 298 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
FiveIsland_RocketWarehouse_EventScript_DefeatedAdmin1_26:
# 299 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 165 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 300 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	call FiveIsland_RocketWarehouse_EventScript_AdminFacePlayerDown
# 301 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	goto FiveIsland_RocketWarehouse_EventScript_DefeatedAdmin1_25
# 302 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"

# 303 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"

# 304 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
FiveIsland_RocketWarehouse_EventScript_PlayerFaceAdmin1::
# 305 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 173 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 306 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	compare PLAYER_X_POS, 27
# 307 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	goto_if_eq FiveIsland_RocketWarehouse_EventScript_PlayerFaceAdmin1_2
# 308 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
FiveIsland_RocketWarehouse_EventScript_PlayerFaceAdmin1_1:
# 309 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 176 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 310 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 311 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 177 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 312 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	waitmovement 0
# 313 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	return
# 314 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"

# 315 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
FiveIsland_RocketWarehouse_EventScript_PlayerFaceAdmin1_2:
# 316 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 174 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 317 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	goto Common_EventScript_NopReturn
# 318 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	goto FiveIsland_RocketWarehouse_EventScript_PlayerFaceAdmin1_1
# 319 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"

# 320 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"

# 321 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
FiveIsland_RocketWarehouse_EventScript_AdminWalkToSwitchFar::
# 322 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 182 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 323 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	applymovement LOCALID_WAREHOUSE_ADMIN1, FiveIsland_RocketWarehouse_Movement_AdminWalkToSwitchFar
# 324 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 183 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 325 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	waitmovement 0
# 326 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	return
# 327 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"

# 328 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"

# 329 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
FiveIsland_RocketWarehouse_EventScript_AdminWalkToSwitch::
# 330 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 188 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 331 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	applymovement LOCALID_WAREHOUSE_ADMIN1, FiveIsland_RocketWarehouse_Movement_AdminWalkToSwitch
# 332 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 189 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 333 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	waitmovement 0
# 334 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	return
# 335 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"

# 336 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"

# 337 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
FiveIsland_RocketWarehouse_EventScript_AdminFaceSwitch::
# 338 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 194 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 339 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	applymovement LOCALID_WAREHOUSE_ADMIN1, Common_Movement_WalkInPlaceFasterUp
# 340 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 195 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 341 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	waitmovement 0
# 342 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	return
# 343 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"

# 344 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"

# 345 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
FiveIsland_RocketWarehouse_EventScript_AdminFacePlayerLeft::
# 346 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 200 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 347 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	applymovement LOCALID_WAREHOUSE_ADMIN1, Common_Movement_WalkInPlaceFasterLeft
# 348 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 201 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 349 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	waitmovement 0
# 350 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	return
# 351 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"

# 352 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"

# 353 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
FiveIsland_RocketWarehouse_EventScript_AdminFacePlayerDown::
# 354 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 206 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 355 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	applymovement LOCALID_WAREHOUSE_ADMIN1, Common_Movement_WalkInPlaceFasterDown
# 356 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 207 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 357 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	waitmovement 0
# 358 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	return
# 359 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"

# 360 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"

# 361 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 211 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 362 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
FiveIsland_RocketWarehouse_Movement_AdminWalkToSwitchFar:
# 363 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 212 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 364 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	walk_right
# 365 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 213 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 366 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	walk_right
# 367 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 214 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 368 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	walk_in_place_faster_up
# 369 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 215 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 370 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	step_end
# 371 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"

# 372 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 218 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 373 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
FiveIsland_RocketWarehouse_Movement_AdminWalkToSwitch:
# 374 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 219 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 375 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	walk_right
# 376 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 220 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 377 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	walk_in_place_faster_up
# 378 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 221 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 379 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	step_end
# 380 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"

# 381 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
FiveIsland_RocketWarehouse_Text_ManyMonsLockedInPen::
# 382 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 224 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 383 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "There are many POKéMON locked\n"
# 384 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "away in the pen…$"
# 385 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"

# 386 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
FiveIsland_RocketWarehouse_Text_PenUnlockedMonsFled::
# 387 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 229 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 388 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "The pen door is unlocked.\n"
# 389 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "The POKéMON appear to have fled.$"
# 390 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"

# 391 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
FiveIsland_RocketWarehouse_Text_Grunt2Intro::
# 392 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 234 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 393 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "Did you come here knowing it's\n"
# 394 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "TEAM ROCKET's WAREHOUSE?$"
# 395 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"

# 396 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
FiveIsland_RocketWarehouse_Text_Grunt2Defeat::
# 397 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 239 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 398 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "What do you think you're doing?!$"
# 399 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"

# 400 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
FiveIsland_RocketWarehouse_Text_Grunt2PostBattle::
# 401 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 243 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 402 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "TEAM ROCKET broke up?\n"
# 403 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "What planet are you from?$"
# 404 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"

# 405 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
FiveIsland_RocketWarehouse_Text_Grunt1Intro::
# 406 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 248 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 407 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "Oh, now your POKéMON look strong.\n"
# 408 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "You're willing to sell them?\p"
# 409 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "Oh?\n"
# 410 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "You wanted to battle?$"
# 411 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"

# 412 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
FiveIsland_RocketWarehouse_Text_Grunt1Defeat::
# 413 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 255 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 414 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "Oh, but…\n"
# 415 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "Too much!$"
# 416 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"

# 417 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
FiveIsland_RocketWarehouse_Text_Grunt1PostBattle::
# 418 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 260 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 419 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "We can give you a great price.\n"
# 420 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "Sell us your POKéMON!$"
# 421 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"

# 422 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
FiveIsland_RocketWarehouse_Text_Grunt3Intro::
# 423 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 265 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 424 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "I got word about you from the\n"
# 425 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "others.\p"
# 426 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "But there's no way a kid like you'd\n"
# 427 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "know our BOSS GIOVANNI!$"
# 428 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"

# 429 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
FiveIsland_RocketWarehouse_Text_Grunt3Defeat::
# 430 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 272 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 431 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "Don't…you…dare…laugh…$"
# 432 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"

# 433 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
FiveIsland_RocketWarehouse_Text_Grunt3PostBattle::
# 434 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 276 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 435 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "Don't mess in the doings of adults,\n"
# 436 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "you jumped-up pip-squeak!$"
# 437 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"

# 438 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
FiveIsland_RocketWarehouse_Text_Admin1Intro::
# 439 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 281 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 440 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "I don't know or care if what I'm\n"
# 441 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "doing is right or wrong…\p"
# 442 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "I just put my faith in GIOVANNI\n"
# 443 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "and do as I am told.$"
# 444 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"

# 445 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
FiveIsland_RocketWarehouse_Text_Admin1Defeat::
# 446 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 288 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 447 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "I…\n"
# 448 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "I'm shattered…$"
# 449 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"

# 450 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
FiveIsland_RocketWarehouse_Text_Admin1PostBattle::
# 451 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 293 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 452 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "You're doing things according to\n"
# 453 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "your beliefs and morals.\p"
# 454 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "I understand now…$"
# 455 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"

# 456 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
FiveIsland_RocketWarehouse_Text_MadeItSoYouCanComeBackThrough::
# 457 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 299 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 458 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "I've made it so you can come back\n"
# 459 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "in through there.\p"
# 460 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "Why don't you go get rested and\n"
# 461 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "refreshed for what lies ahead?\p"
# 462 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "The ADMIN after me outranks me\n"
# 463 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "thoroughly as a TRAINER.\p"
# 464 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "You'd better steel yourself for one\n"
# 465 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "harsh challenge.$"
# 466 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"

# 467 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
FiveIsland_RocketWarehouse_Text_Admin2Intro::
# 468 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 310 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 469 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "That's quite enough of you \n"
# 470 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "playing the hero, kid.\p"
# 471 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "Spreading lies about how TEAM\n"
# 472 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "ROCKET has disbanded…\p"
# 473 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "It's such an obvious attempt to\n"
# 474 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "cause confusion in our ranks.\p"
# 475 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "Fortunately, we're not so ignorant\n"
# 476 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "to fall for the lies of a child!\p"
# 477 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "And now, I'll show you how scary\n"
# 478 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "an angry adult can be!$"
# 479 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"

# 480 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
FiveIsland_RocketWarehouse_Text_Admin2Defeat::
# 481 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 323 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 482 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "Urgh…\n"
# 483 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "You were too strong…\p"
# 484 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "…\n"
# 485 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "Th-that's GIOVANNI's BADGE!\p"
# 486 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "So it's true?\n"
# 487 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "TEAM ROCKET really has disbanded?$"
# 488 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"

# 489 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
FiveIsland_RocketWarehouse_Text_Admin2PostBattle::
# 490 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 332 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 491 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "We will abandon this WAREHOUSE…\p"
# 492 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "But don't think this is over.\n"
# 493 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "I won't let this be the end.\p"
# 494 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "I will find GIOVANNI.\n"
# 495 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "And I will resurrect TEAM ROCKET!\l"
# 496 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "I will…\p"
# 497 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "Until then, farewell!$"
# 498 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"

# 499 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
FiveIsland_RocketWarehouse_Text_ReportWithGraphsAndText::
# 500 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 342 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 501 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "A report with graphs and text is on\n"
# 502 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "the PC monitor.\p"
# 503 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "“The Influence of Magnetic Waves\n"
# 504 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "on POKéMON Evolution”…\p"
# 505 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "… … … … … …\p"
# 506 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "It's too difficult to understand…$"
# 507 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"

# 508 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
FiveIsland_RocketWarehouse_Text_GideonIntro::
# 509 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 351 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 510 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "I almost managed to sell the\n"
# 511 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "SAPPHIRE for huge money…\p"
# 512 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "Then, you just had to come along\n"
# 513 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "and blow the whole deal apart!\p"
# 514 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "Fufu… Fufufufu…\n"
# 515 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "There's no forgiveness for you!$"
# 516 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"

# 517 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
FiveIsland_RocketWarehouse_Text_GideonDefeat::
# 518 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 360 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 519 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "Gah! Darn!\n"
# 520 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "Darn! Darn!$"
# 521 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"

# 522 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
FiveIsland_RocketWarehouse_Text_GideonPostBattle::
# 523 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 365 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 524 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "If I can't sell it, it's worthless!\n"
# 525 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "Go ahead, take it!$"
# 526 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"

# 527 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
FiveIsland_RocketWarehouse_Text_GetLostLeaveMeBe::
# 528 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 370 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 529 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "What do you want now?\n"
# 530 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "Go on, get lost, leave me be.$"
# 531 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"

# 532 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
FiveIsland_RocketWarehouse_Text_GiovannisKidHasRedHair::
# 533 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 375 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
# 534 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "What, you again?\p"
# 535 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "You… You're not GIOVANNI's kid,\n"
# 536 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "are you?\p"
# 537 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "No, that can't be right!\n"
# 538 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "GIOVANNI's kid has red hair.\p"
# 539 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "You don't have any reasons for\n"
# 540 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "bugging me. Leave me alone!$"
