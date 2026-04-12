Route23_Frlg_MapScripts::
# 2 "data/maps/Route23_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route23_OnTransition
	.byte 0


Route23_OnTransition::
# 6 "data/maps/Route23_Frlg/scripts.pory"
	clearflag FLAG_HIDE_VICTORY_ROAD_3F_BOULDER
# 7 "data/maps/Route23_Frlg/scripts.pory"
	setflag FLAG_HIDE_VICTORY_ROAD_2F_BOULDER
# 8 "data/maps/Route23_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_VICTORY_ROAD_1F, 0
# 9 "data/maps/Route23_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_VICTORY_ROAD_2F_BOULDER1, 0
# 10 "data/maps/Route23_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_VICTORY_ROAD_2F_BOULDER2, 0
# 11 "data/maps/Route23_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_VICTORY_ROAD_3F, 0
	end


Route23_EventScript_CascadeBadgeGuard::
# 16 "data/maps/Route23_Frlg/scripts.pory"
	lock
# 17 "data/maps/Route23_Frlg/scripts.pory"
	faceplayer
# 18 "data/maps/Route23_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 2
# 19 "data/maps/Route23_Frlg/scripts.pory"
	bufferstdstring STR_VAR_1, STDSTRING_CASCADE_BADGE
# 20 "data/maps/Route23_Frlg/scripts.pory"
	goto Route23_EventScript_BadgeGuard
	end


Route23_EventScript_ThunderBadgeGuard::
# 25 "data/maps/Route23_Frlg/scripts.pory"
	lock
# 26 "data/maps/Route23_Frlg/scripts.pory"
	faceplayer
# 27 "data/maps/Route23_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 3
# 28 "data/maps/Route23_Frlg/scripts.pory"
	bufferstdstring STR_VAR_1, STDSTRING_THUNDER_BADGE
# 29 "data/maps/Route23_Frlg/scripts.pory"
	goto Route23_EventScript_BadgeGuard
	end


Route23_EventScript_RainbowBadgeGuard::
# 34 "data/maps/Route23_Frlg/scripts.pory"
	lock
# 35 "data/maps/Route23_Frlg/scripts.pory"
	faceplayer
# 36 "data/maps/Route23_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 4
# 37 "data/maps/Route23_Frlg/scripts.pory"
	bufferstdstring STR_VAR_1, STDSTRING_RAINBOW_BADGE
# 38 "data/maps/Route23_Frlg/scripts.pory"
	goto Route23_EventScript_BadgeGuard
	end


Route23_EventScript_SoulBadgeGuard::
# 43 "data/maps/Route23_Frlg/scripts.pory"
	lock
# 44 "data/maps/Route23_Frlg/scripts.pory"
	faceplayer
# 45 "data/maps/Route23_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 5
# 46 "data/maps/Route23_Frlg/scripts.pory"
	bufferstdstring STR_VAR_1, STDSTRING_SOUL_BADGE
# 47 "data/maps/Route23_Frlg/scripts.pory"
	goto Route23_EventScript_BadgeGuard
	end


Route23_EventScript_MarshBadgeGuard::
# 52 "data/maps/Route23_Frlg/scripts.pory"
	lock
# 53 "data/maps/Route23_Frlg/scripts.pory"
	faceplayer
# 54 "data/maps/Route23_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 6
# 55 "data/maps/Route23_Frlg/scripts.pory"
	bufferstdstring STR_VAR_1, STDSTRING_MARSH_BADGE
# 56 "data/maps/Route23_Frlg/scripts.pory"
	goto Route23_EventScript_BadgeGuard
	end


Route23_EventScript_VolcanoBadgeGuard::
# 61 "data/maps/Route23_Frlg/scripts.pory"
	lock
# 62 "data/maps/Route23_Frlg/scripts.pory"
	faceplayer
# 63 "data/maps/Route23_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 7
# 64 "data/maps/Route23_Frlg/scripts.pory"
	bufferstdstring STR_VAR_1, STDSTRING_VOLCANO_BADGE
# 65 "data/maps/Route23_Frlg/scripts.pory"
	goto Route23_EventScript_BadgeGuard
	end


Route23_EventScript_EarthBadgeGuard::
# 70 "data/maps/Route23_Frlg/scripts.pory"
	lock
# 71 "data/maps/Route23_Frlg/scripts.pory"
	faceplayer
# 72 "data/maps/Route23_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 8
# 73 "data/maps/Route23_Frlg/scripts.pory"
	bufferstdstring STR_VAR_1, STDSTRING_EARTH_BADGE
# 74 "data/maps/Route23_Frlg/scripts.pory"
	goto Route23_EventScript_BadgeGuard
	end


Route23_EventScript_CascadeBadgeGuardTrigger::
# 79 "data/maps/Route23_Frlg/scripts.pory"
	lockall
# 80 "data/maps/Route23_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 2
# 81 "data/maps/Route23_Frlg/scripts.pory"
	setvar VAR_0x8009, LOCALID_CASCADE_BADGE_GUARD
# 82 "data/maps/Route23_Frlg/scripts.pory"
	bufferstdstring STR_VAR_1, STDSTRING_CASCADE_BADGE
# 83 "data/maps/Route23_Frlg/scripts.pory"
	goto Route23_EventScript_BadgeGuardTrigger
	end


Route23_EventScript_ThunderBadgeGuardTrigger::
# 88 "data/maps/Route23_Frlg/scripts.pory"
	lockall
# 89 "data/maps/Route23_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 3
# 90 "data/maps/Route23_Frlg/scripts.pory"
	setvar VAR_0x8009, LOCALID_THUNDER_BADGE_GUARD
# 91 "data/maps/Route23_Frlg/scripts.pory"
	bufferstdstring STR_VAR_1, STDSTRING_THUNDER_BADGE
# 92 "data/maps/Route23_Frlg/scripts.pory"
	goto Route23_EventScript_BadgeGuardTrigger
	end


Route23_EventScript_RainbowBadgeGuardTrigger::
# 97 "data/maps/Route23_Frlg/scripts.pory"
	lockall
# 98 "data/maps/Route23_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 4
# 99 "data/maps/Route23_Frlg/scripts.pory"
	setvar VAR_0x8009, LOCALID_RAINBOW_BADGE_GUARD
# 100 "data/maps/Route23_Frlg/scripts.pory"
	bufferstdstring STR_VAR_1, STDSTRING_RAINBOW_BADGE
# 101 "data/maps/Route23_Frlg/scripts.pory"
	goto Route23_EventScript_BadgeGuardTrigger
	end


Route23_EventScript_SoulBadgeGuardTrigger::
# 106 "data/maps/Route23_Frlg/scripts.pory"
	lockall
# 107 "data/maps/Route23_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 5
# 108 "data/maps/Route23_Frlg/scripts.pory"
	setvar VAR_0x8009, LOCALID_SOUL_BADGE_GUARD
# 109 "data/maps/Route23_Frlg/scripts.pory"
	bufferstdstring STR_VAR_1, STDSTRING_SOUL_BADGE
# 110 "data/maps/Route23_Frlg/scripts.pory"
	goto Route23_EventScript_BadgeGuardTrigger
	end


Route23_EventScript_MarshBadgeGuardTrigger::
# 115 "data/maps/Route23_Frlg/scripts.pory"
	lockall
# 116 "data/maps/Route23_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 6
# 117 "data/maps/Route23_Frlg/scripts.pory"
	setvar VAR_0x8009, LOCALID_MARSH_BADGE_GUARD
# 118 "data/maps/Route23_Frlg/scripts.pory"
	bufferstdstring STR_VAR_1, STDSTRING_MARSH_BADGE
# 119 "data/maps/Route23_Frlg/scripts.pory"
	goto Route23_EventScript_BadgeGuardTrigger
	end


Route23_EventScript_VolcanoBadgeGuardTrigger::
# 124 "data/maps/Route23_Frlg/scripts.pory"
	lockall
# 125 "data/maps/Route23_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 7
# 126 "data/maps/Route23_Frlg/scripts.pory"
	setvar VAR_0x8009, LOCALID_VOLCANO_BADGE_GUARD
# 127 "data/maps/Route23_Frlg/scripts.pory"
	bufferstdstring STR_VAR_1, STDSTRING_VOLCANO_BADGE
# 128 "data/maps/Route23_Frlg/scripts.pory"
	goto Route23_EventScript_BadgeGuardTrigger
	end


Route23_EventScript_EarthBadgeGuardTrigger::
# 133 "data/maps/Route23_Frlg/scripts.pory"
	lockall
# 134 "data/maps/Route23_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 8
# 135 "data/maps/Route23_Frlg/scripts.pory"
	setvar VAR_0x8009, LOCALID_EARTH_BADGE_GUARD
# 136 "data/maps/Route23_Frlg/scripts.pory"
	bufferstdstring STR_VAR_1, STDSTRING_EARTH_BADGE
# 137 "data/maps/Route23_Frlg/scripts.pory"
	goto Route23_EventScript_BadgeGuardTrigger
	end


Route23_EventScript_VictoryRoadGateSign::
# 142 "data/maps/Route23_Frlg/scripts.pory"
	msgbox Route23_Text_VictoryRoadGateSign, MSGBOX_SIGN
	end


Route23_Text_VictoryRoadGateSign::
# 146 "data/maps/Route23_Frlg/scripts.pory"
	.string "VICTORY ROAD GATE -\n"
	.string "POKéMON LEAGUE$"
