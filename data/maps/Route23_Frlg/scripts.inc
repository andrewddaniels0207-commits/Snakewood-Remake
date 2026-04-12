# 1 "data/maps/Route23_Frlg/scripts.pory"

# 2 "data/maps/Route23_Frlg/scripts.pory"
Route23_Frlg_MapScripts::
# 3 "data/maps/Route23_Frlg/scripts.pory"
# 2 "data/maps/Route23_Frlg/scripts.pory"
# 4 "data/maps/Route23_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route23_OnTransition
# 5 "data/maps/Route23_Frlg/scripts.pory"
	.byte 0
# 6 "data/maps/Route23_Frlg/scripts.pory"

# 7 "data/maps/Route23_Frlg/scripts.pory"

# 8 "data/maps/Route23_Frlg/scripts.pory"
Route23_OnTransition::
# 9 "data/maps/Route23_Frlg/scripts.pory"
# 6 "data/maps/Route23_Frlg/scripts.pory"
# 10 "data/maps/Route23_Frlg/scripts.pory"
	clearflag FLAG_HIDE_VICTORY_ROAD_3F_BOULDER
# 11 "data/maps/Route23_Frlg/scripts.pory"
# 7 "data/maps/Route23_Frlg/scripts.pory"
# 12 "data/maps/Route23_Frlg/scripts.pory"
	setflag FLAG_HIDE_VICTORY_ROAD_2F_BOULDER
# 13 "data/maps/Route23_Frlg/scripts.pory"
# 8 "data/maps/Route23_Frlg/scripts.pory"
# 14 "data/maps/Route23_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_VICTORY_ROAD_1F, 0
# 15 "data/maps/Route23_Frlg/scripts.pory"
# 9 "data/maps/Route23_Frlg/scripts.pory"
# 16 "data/maps/Route23_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_VICTORY_ROAD_2F_BOULDER1, 0
# 17 "data/maps/Route23_Frlg/scripts.pory"
# 10 "data/maps/Route23_Frlg/scripts.pory"
# 18 "data/maps/Route23_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_VICTORY_ROAD_2F_BOULDER2, 0
# 19 "data/maps/Route23_Frlg/scripts.pory"
# 11 "data/maps/Route23_Frlg/scripts.pory"
# 20 "data/maps/Route23_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_VICTORY_ROAD_3F, 0
# 21 "data/maps/Route23_Frlg/scripts.pory"
	end
# 22 "data/maps/Route23_Frlg/scripts.pory"

# 23 "data/maps/Route23_Frlg/scripts.pory"

# 24 "data/maps/Route23_Frlg/scripts.pory"
Route23_EventScript_CascadeBadgeGuard::
# 25 "data/maps/Route23_Frlg/scripts.pory"
# 16 "data/maps/Route23_Frlg/scripts.pory"
# 26 "data/maps/Route23_Frlg/scripts.pory"
	lock
# 27 "data/maps/Route23_Frlg/scripts.pory"
# 17 "data/maps/Route23_Frlg/scripts.pory"
# 28 "data/maps/Route23_Frlg/scripts.pory"
	faceplayer
# 29 "data/maps/Route23_Frlg/scripts.pory"
# 18 "data/maps/Route23_Frlg/scripts.pory"
# 30 "data/maps/Route23_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 2
# 31 "data/maps/Route23_Frlg/scripts.pory"
# 19 "data/maps/Route23_Frlg/scripts.pory"
# 32 "data/maps/Route23_Frlg/scripts.pory"
	bufferstdstring STR_VAR_1, STDSTRING_CASCADE_BADGE
# 33 "data/maps/Route23_Frlg/scripts.pory"
# 20 "data/maps/Route23_Frlg/scripts.pory"
# 34 "data/maps/Route23_Frlg/scripts.pory"
	goto Route23_EventScript_BadgeGuard
# 35 "data/maps/Route23_Frlg/scripts.pory"
	end
# 36 "data/maps/Route23_Frlg/scripts.pory"

# 37 "data/maps/Route23_Frlg/scripts.pory"

# 38 "data/maps/Route23_Frlg/scripts.pory"
Route23_EventScript_ThunderBadgeGuard::
# 39 "data/maps/Route23_Frlg/scripts.pory"
# 25 "data/maps/Route23_Frlg/scripts.pory"
# 40 "data/maps/Route23_Frlg/scripts.pory"
	lock
# 41 "data/maps/Route23_Frlg/scripts.pory"
# 26 "data/maps/Route23_Frlg/scripts.pory"
# 42 "data/maps/Route23_Frlg/scripts.pory"
	faceplayer
# 43 "data/maps/Route23_Frlg/scripts.pory"
# 27 "data/maps/Route23_Frlg/scripts.pory"
# 44 "data/maps/Route23_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 3
# 45 "data/maps/Route23_Frlg/scripts.pory"
# 28 "data/maps/Route23_Frlg/scripts.pory"
# 46 "data/maps/Route23_Frlg/scripts.pory"
	bufferstdstring STR_VAR_1, STDSTRING_THUNDER_BADGE
# 47 "data/maps/Route23_Frlg/scripts.pory"
# 29 "data/maps/Route23_Frlg/scripts.pory"
# 48 "data/maps/Route23_Frlg/scripts.pory"
	goto Route23_EventScript_BadgeGuard
# 49 "data/maps/Route23_Frlg/scripts.pory"
	end
# 50 "data/maps/Route23_Frlg/scripts.pory"

# 51 "data/maps/Route23_Frlg/scripts.pory"

# 52 "data/maps/Route23_Frlg/scripts.pory"
Route23_EventScript_RainbowBadgeGuard::
# 53 "data/maps/Route23_Frlg/scripts.pory"
# 34 "data/maps/Route23_Frlg/scripts.pory"
# 54 "data/maps/Route23_Frlg/scripts.pory"
	lock
# 55 "data/maps/Route23_Frlg/scripts.pory"
# 35 "data/maps/Route23_Frlg/scripts.pory"
# 56 "data/maps/Route23_Frlg/scripts.pory"
	faceplayer
# 57 "data/maps/Route23_Frlg/scripts.pory"
# 36 "data/maps/Route23_Frlg/scripts.pory"
# 58 "data/maps/Route23_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 4
# 59 "data/maps/Route23_Frlg/scripts.pory"
# 37 "data/maps/Route23_Frlg/scripts.pory"
# 60 "data/maps/Route23_Frlg/scripts.pory"
	bufferstdstring STR_VAR_1, STDSTRING_RAINBOW_BADGE
# 61 "data/maps/Route23_Frlg/scripts.pory"
# 38 "data/maps/Route23_Frlg/scripts.pory"
# 62 "data/maps/Route23_Frlg/scripts.pory"
	goto Route23_EventScript_BadgeGuard
# 63 "data/maps/Route23_Frlg/scripts.pory"
	end
# 64 "data/maps/Route23_Frlg/scripts.pory"

# 65 "data/maps/Route23_Frlg/scripts.pory"

# 66 "data/maps/Route23_Frlg/scripts.pory"
Route23_EventScript_SoulBadgeGuard::
# 67 "data/maps/Route23_Frlg/scripts.pory"
# 43 "data/maps/Route23_Frlg/scripts.pory"
# 68 "data/maps/Route23_Frlg/scripts.pory"
	lock
# 69 "data/maps/Route23_Frlg/scripts.pory"
# 44 "data/maps/Route23_Frlg/scripts.pory"
# 70 "data/maps/Route23_Frlg/scripts.pory"
	faceplayer
# 71 "data/maps/Route23_Frlg/scripts.pory"
# 45 "data/maps/Route23_Frlg/scripts.pory"
# 72 "data/maps/Route23_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 5
# 73 "data/maps/Route23_Frlg/scripts.pory"
# 46 "data/maps/Route23_Frlg/scripts.pory"
# 74 "data/maps/Route23_Frlg/scripts.pory"
	bufferstdstring STR_VAR_1, STDSTRING_SOUL_BADGE
# 75 "data/maps/Route23_Frlg/scripts.pory"
# 47 "data/maps/Route23_Frlg/scripts.pory"
# 76 "data/maps/Route23_Frlg/scripts.pory"
	goto Route23_EventScript_BadgeGuard
# 77 "data/maps/Route23_Frlg/scripts.pory"
	end
# 78 "data/maps/Route23_Frlg/scripts.pory"

# 79 "data/maps/Route23_Frlg/scripts.pory"

# 80 "data/maps/Route23_Frlg/scripts.pory"
Route23_EventScript_MarshBadgeGuard::
# 81 "data/maps/Route23_Frlg/scripts.pory"
# 52 "data/maps/Route23_Frlg/scripts.pory"
# 82 "data/maps/Route23_Frlg/scripts.pory"
	lock
# 83 "data/maps/Route23_Frlg/scripts.pory"
# 53 "data/maps/Route23_Frlg/scripts.pory"
# 84 "data/maps/Route23_Frlg/scripts.pory"
	faceplayer
# 85 "data/maps/Route23_Frlg/scripts.pory"
# 54 "data/maps/Route23_Frlg/scripts.pory"
# 86 "data/maps/Route23_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 6
# 87 "data/maps/Route23_Frlg/scripts.pory"
# 55 "data/maps/Route23_Frlg/scripts.pory"
# 88 "data/maps/Route23_Frlg/scripts.pory"
	bufferstdstring STR_VAR_1, STDSTRING_MARSH_BADGE
# 89 "data/maps/Route23_Frlg/scripts.pory"
# 56 "data/maps/Route23_Frlg/scripts.pory"
# 90 "data/maps/Route23_Frlg/scripts.pory"
	goto Route23_EventScript_BadgeGuard
# 91 "data/maps/Route23_Frlg/scripts.pory"
	end
# 92 "data/maps/Route23_Frlg/scripts.pory"

# 93 "data/maps/Route23_Frlg/scripts.pory"

# 94 "data/maps/Route23_Frlg/scripts.pory"
Route23_EventScript_VolcanoBadgeGuard::
# 95 "data/maps/Route23_Frlg/scripts.pory"
# 61 "data/maps/Route23_Frlg/scripts.pory"
# 96 "data/maps/Route23_Frlg/scripts.pory"
	lock
# 97 "data/maps/Route23_Frlg/scripts.pory"
# 62 "data/maps/Route23_Frlg/scripts.pory"
# 98 "data/maps/Route23_Frlg/scripts.pory"
	faceplayer
# 99 "data/maps/Route23_Frlg/scripts.pory"
# 63 "data/maps/Route23_Frlg/scripts.pory"
# 100 "data/maps/Route23_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 7
# 101 "data/maps/Route23_Frlg/scripts.pory"
# 64 "data/maps/Route23_Frlg/scripts.pory"
# 102 "data/maps/Route23_Frlg/scripts.pory"
	bufferstdstring STR_VAR_1, STDSTRING_VOLCANO_BADGE
# 103 "data/maps/Route23_Frlg/scripts.pory"
# 65 "data/maps/Route23_Frlg/scripts.pory"
# 104 "data/maps/Route23_Frlg/scripts.pory"
	goto Route23_EventScript_BadgeGuard
# 105 "data/maps/Route23_Frlg/scripts.pory"
	end
# 106 "data/maps/Route23_Frlg/scripts.pory"

# 107 "data/maps/Route23_Frlg/scripts.pory"

# 108 "data/maps/Route23_Frlg/scripts.pory"
Route23_EventScript_EarthBadgeGuard::
# 109 "data/maps/Route23_Frlg/scripts.pory"
# 70 "data/maps/Route23_Frlg/scripts.pory"
# 110 "data/maps/Route23_Frlg/scripts.pory"
	lock
# 111 "data/maps/Route23_Frlg/scripts.pory"
# 71 "data/maps/Route23_Frlg/scripts.pory"
# 112 "data/maps/Route23_Frlg/scripts.pory"
	faceplayer
# 113 "data/maps/Route23_Frlg/scripts.pory"
# 72 "data/maps/Route23_Frlg/scripts.pory"
# 114 "data/maps/Route23_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 8
# 115 "data/maps/Route23_Frlg/scripts.pory"
# 73 "data/maps/Route23_Frlg/scripts.pory"
# 116 "data/maps/Route23_Frlg/scripts.pory"
	bufferstdstring STR_VAR_1, STDSTRING_EARTH_BADGE
# 117 "data/maps/Route23_Frlg/scripts.pory"
# 74 "data/maps/Route23_Frlg/scripts.pory"
# 118 "data/maps/Route23_Frlg/scripts.pory"
	goto Route23_EventScript_BadgeGuard
# 119 "data/maps/Route23_Frlg/scripts.pory"
	end
# 120 "data/maps/Route23_Frlg/scripts.pory"

# 121 "data/maps/Route23_Frlg/scripts.pory"

# 122 "data/maps/Route23_Frlg/scripts.pory"
Route23_EventScript_CascadeBadgeGuardTrigger::
# 123 "data/maps/Route23_Frlg/scripts.pory"
# 79 "data/maps/Route23_Frlg/scripts.pory"
# 124 "data/maps/Route23_Frlg/scripts.pory"
	lockall
# 125 "data/maps/Route23_Frlg/scripts.pory"
# 80 "data/maps/Route23_Frlg/scripts.pory"
# 126 "data/maps/Route23_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 2
# 127 "data/maps/Route23_Frlg/scripts.pory"
# 81 "data/maps/Route23_Frlg/scripts.pory"
# 128 "data/maps/Route23_Frlg/scripts.pory"
	setvar VAR_0x8009, LOCALID_CASCADE_BADGE_GUARD
# 129 "data/maps/Route23_Frlg/scripts.pory"
# 82 "data/maps/Route23_Frlg/scripts.pory"
# 130 "data/maps/Route23_Frlg/scripts.pory"
	bufferstdstring STR_VAR_1, STDSTRING_CASCADE_BADGE
# 131 "data/maps/Route23_Frlg/scripts.pory"
# 83 "data/maps/Route23_Frlg/scripts.pory"
# 132 "data/maps/Route23_Frlg/scripts.pory"
	goto Route23_EventScript_BadgeGuardTrigger
# 133 "data/maps/Route23_Frlg/scripts.pory"
	end
# 134 "data/maps/Route23_Frlg/scripts.pory"

# 135 "data/maps/Route23_Frlg/scripts.pory"

# 136 "data/maps/Route23_Frlg/scripts.pory"
Route23_EventScript_ThunderBadgeGuardTrigger::
# 137 "data/maps/Route23_Frlg/scripts.pory"
# 88 "data/maps/Route23_Frlg/scripts.pory"
# 138 "data/maps/Route23_Frlg/scripts.pory"
	lockall
# 139 "data/maps/Route23_Frlg/scripts.pory"
# 89 "data/maps/Route23_Frlg/scripts.pory"
# 140 "data/maps/Route23_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 3
# 141 "data/maps/Route23_Frlg/scripts.pory"
# 90 "data/maps/Route23_Frlg/scripts.pory"
# 142 "data/maps/Route23_Frlg/scripts.pory"
	setvar VAR_0x8009, LOCALID_THUNDER_BADGE_GUARD
# 143 "data/maps/Route23_Frlg/scripts.pory"
# 91 "data/maps/Route23_Frlg/scripts.pory"
# 144 "data/maps/Route23_Frlg/scripts.pory"
	bufferstdstring STR_VAR_1, STDSTRING_THUNDER_BADGE
# 145 "data/maps/Route23_Frlg/scripts.pory"
# 92 "data/maps/Route23_Frlg/scripts.pory"
# 146 "data/maps/Route23_Frlg/scripts.pory"
	goto Route23_EventScript_BadgeGuardTrigger
# 147 "data/maps/Route23_Frlg/scripts.pory"
	end
# 148 "data/maps/Route23_Frlg/scripts.pory"

# 149 "data/maps/Route23_Frlg/scripts.pory"

# 150 "data/maps/Route23_Frlg/scripts.pory"
Route23_EventScript_RainbowBadgeGuardTrigger::
# 151 "data/maps/Route23_Frlg/scripts.pory"
# 97 "data/maps/Route23_Frlg/scripts.pory"
# 152 "data/maps/Route23_Frlg/scripts.pory"
	lockall
# 153 "data/maps/Route23_Frlg/scripts.pory"
# 98 "data/maps/Route23_Frlg/scripts.pory"
# 154 "data/maps/Route23_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 4
# 155 "data/maps/Route23_Frlg/scripts.pory"
# 99 "data/maps/Route23_Frlg/scripts.pory"
# 156 "data/maps/Route23_Frlg/scripts.pory"
	setvar VAR_0x8009, LOCALID_RAINBOW_BADGE_GUARD
# 157 "data/maps/Route23_Frlg/scripts.pory"
# 100 "data/maps/Route23_Frlg/scripts.pory"
# 158 "data/maps/Route23_Frlg/scripts.pory"
	bufferstdstring STR_VAR_1, STDSTRING_RAINBOW_BADGE
# 159 "data/maps/Route23_Frlg/scripts.pory"
# 101 "data/maps/Route23_Frlg/scripts.pory"
# 160 "data/maps/Route23_Frlg/scripts.pory"
	goto Route23_EventScript_BadgeGuardTrigger
# 161 "data/maps/Route23_Frlg/scripts.pory"
	end
# 162 "data/maps/Route23_Frlg/scripts.pory"

# 163 "data/maps/Route23_Frlg/scripts.pory"

# 164 "data/maps/Route23_Frlg/scripts.pory"
Route23_EventScript_SoulBadgeGuardTrigger::
# 165 "data/maps/Route23_Frlg/scripts.pory"
# 106 "data/maps/Route23_Frlg/scripts.pory"
# 166 "data/maps/Route23_Frlg/scripts.pory"
	lockall
# 167 "data/maps/Route23_Frlg/scripts.pory"
# 107 "data/maps/Route23_Frlg/scripts.pory"
# 168 "data/maps/Route23_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 5
# 169 "data/maps/Route23_Frlg/scripts.pory"
# 108 "data/maps/Route23_Frlg/scripts.pory"
# 170 "data/maps/Route23_Frlg/scripts.pory"
	setvar VAR_0x8009, LOCALID_SOUL_BADGE_GUARD
# 171 "data/maps/Route23_Frlg/scripts.pory"
# 109 "data/maps/Route23_Frlg/scripts.pory"
# 172 "data/maps/Route23_Frlg/scripts.pory"
	bufferstdstring STR_VAR_1, STDSTRING_SOUL_BADGE
# 173 "data/maps/Route23_Frlg/scripts.pory"
# 110 "data/maps/Route23_Frlg/scripts.pory"
# 174 "data/maps/Route23_Frlg/scripts.pory"
	goto Route23_EventScript_BadgeGuardTrigger
# 175 "data/maps/Route23_Frlg/scripts.pory"
	end
# 176 "data/maps/Route23_Frlg/scripts.pory"

# 177 "data/maps/Route23_Frlg/scripts.pory"

# 178 "data/maps/Route23_Frlg/scripts.pory"
Route23_EventScript_MarshBadgeGuardTrigger::
# 179 "data/maps/Route23_Frlg/scripts.pory"
# 115 "data/maps/Route23_Frlg/scripts.pory"
# 180 "data/maps/Route23_Frlg/scripts.pory"
	lockall
# 181 "data/maps/Route23_Frlg/scripts.pory"
# 116 "data/maps/Route23_Frlg/scripts.pory"
# 182 "data/maps/Route23_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 6
# 183 "data/maps/Route23_Frlg/scripts.pory"
# 117 "data/maps/Route23_Frlg/scripts.pory"
# 184 "data/maps/Route23_Frlg/scripts.pory"
	setvar VAR_0x8009, LOCALID_MARSH_BADGE_GUARD
# 185 "data/maps/Route23_Frlg/scripts.pory"
# 118 "data/maps/Route23_Frlg/scripts.pory"
# 186 "data/maps/Route23_Frlg/scripts.pory"
	bufferstdstring STR_VAR_1, STDSTRING_MARSH_BADGE
# 187 "data/maps/Route23_Frlg/scripts.pory"
# 119 "data/maps/Route23_Frlg/scripts.pory"
# 188 "data/maps/Route23_Frlg/scripts.pory"
	goto Route23_EventScript_BadgeGuardTrigger
# 189 "data/maps/Route23_Frlg/scripts.pory"
	end
# 190 "data/maps/Route23_Frlg/scripts.pory"

# 191 "data/maps/Route23_Frlg/scripts.pory"

# 192 "data/maps/Route23_Frlg/scripts.pory"
Route23_EventScript_VolcanoBadgeGuardTrigger::
# 193 "data/maps/Route23_Frlg/scripts.pory"
# 124 "data/maps/Route23_Frlg/scripts.pory"
# 194 "data/maps/Route23_Frlg/scripts.pory"
	lockall
# 195 "data/maps/Route23_Frlg/scripts.pory"
# 125 "data/maps/Route23_Frlg/scripts.pory"
# 196 "data/maps/Route23_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 7
# 197 "data/maps/Route23_Frlg/scripts.pory"
# 126 "data/maps/Route23_Frlg/scripts.pory"
# 198 "data/maps/Route23_Frlg/scripts.pory"
	setvar VAR_0x8009, LOCALID_VOLCANO_BADGE_GUARD
# 199 "data/maps/Route23_Frlg/scripts.pory"
# 127 "data/maps/Route23_Frlg/scripts.pory"
# 200 "data/maps/Route23_Frlg/scripts.pory"
	bufferstdstring STR_VAR_1, STDSTRING_VOLCANO_BADGE
# 201 "data/maps/Route23_Frlg/scripts.pory"
# 128 "data/maps/Route23_Frlg/scripts.pory"
# 202 "data/maps/Route23_Frlg/scripts.pory"
	goto Route23_EventScript_BadgeGuardTrigger
# 203 "data/maps/Route23_Frlg/scripts.pory"
	end
# 204 "data/maps/Route23_Frlg/scripts.pory"

# 205 "data/maps/Route23_Frlg/scripts.pory"

# 206 "data/maps/Route23_Frlg/scripts.pory"
Route23_EventScript_EarthBadgeGuardTrigger::
# 207 "data/maps/Route23_Frlg/scripts.pory"
# 133 "data/maps/Route23_Frlg/scripts.pory"
# 208 "data/maps/Route23_Frlg/scripts.pory"
	lockall
# 209 "data/maps/Route23_Frlg/scripts.pory"
# 134 "data/maps/Route23_Frlg/scripts.pory"
# 210 "data/maps/Route23_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 8
# 211 "data/maps/Route23_Frlg/scripts.pory"
# 135 "data/maps/Route23_Frlg/scripts.pory"
# 212 "data/maps/Route23_Frlg/scripts.pory"
	setvar VAR_0x8009, LOCALID_EARTH_BADGE_GUARD
# 213 "data/maps/Route23_Frlg/scripts.pory"
# 136 "data/maps/Route23_Frlg/scripts.pory"
# 214 "data/maps/Route23_Frlg/scripts.pory"
	bufferstdstring STR_VAR_1, STDSTRING_EARTH_BADGE
# 215 "data/maps/Route23_Frlg/scripts.pory"
# 137 "data/maps/Route23_Frlg/scripts.pory"
# 216 "data/maps/Route23_Frlg/scripts.pory"
	goto Route23_EventScript_BadgeGuardTrigger
# 217 "data/maps/Route23_Frlg/scripts.pory"
	end
# 218 "data/maps/Route23_Frlg/scripts.pory"

# 219 "data/maps/Route23_Frlg/scripts.pory"

# 220 "data/maps/Route23_Frlg/scripts.pory"
Route23_EventScript_VictoryRoadGateSign::
# 221 "data/maps/Route23_Frlg/scripts.pory"
# 142 "data/maps/Route23_Frlg/scripts.pory"
# 222 "data/maps/Route23_Frlg/scripts.pory"
	msgbox Route23_Text_VictoryRoadGateSign, MSGBOX_SIGN
# 223 "data/maps/Route23_Frlg/scripts.pory"
	end
# 224 "data/maps/Route23_Frlg/scripts.pory"

# 225 "data/maps/Route23_Frlg/scripts.pory"

# 226 "data/maps/Route23_Frlg/scripts.pory"
Route23_Text_VictoryRoadGateSign::
# 227 "data/maps/Route23_Frlg/scripts.pory"
# 146 "data/maps/Route23_Frlg/scripts.pory"
# 228 "data/maps/Route23_Frlg/scripts.pory"
	.string "VICTORY ROAD GATE -\n"
# 229 "data/maps/Route23_Frlg/scripts.pory"
	.string "POKéMON LEAGUE$"
