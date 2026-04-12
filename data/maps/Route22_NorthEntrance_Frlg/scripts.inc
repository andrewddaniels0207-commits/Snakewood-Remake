# 1 "data/maps/Route22_NorthEntrance_Frlg/scripts.pory"

# 2 "data/maps/Route22_NorthEntrance_Frlg/scripts.pory"
Route22_NorthEntrance_Frlg_MapScripts::
# 3 "data/maps/Route22_NorthEntrance_Frlg/scripts.pory"
	.byte 0
# 4 "data/maps/Route22_NorthEntrance_Frlg/scripts.pory"

# 5 "data/maps/Route22_NorthEntrance_Frlg/scripts.pory"

# 6 "data/maps/Route22_NorthEntrance_Frlg/scripts.pory"
Route22_NorthEntrance_EventScript_BoulderBadgeGuard::
# 7 "data/maps/Route22_NorthEntrance_Frlg/scripts.pory"
# 4 "data/maps/Route22_NorthEntrance_Frlg/scripts.pory"
# 8 "data/maps/Route22_NorthEntrance_Frlg/scripts.pory"
	lock
# 9 "data/maps/Route22_NorthEntrance_Frlg/scripts.pory"
# 5 "data/maps/Route22_NorthEntrance_Frlg/scripts.pory"
# 10 "data/maps/Route22_NorthEntrance_Frlg/scripts.pory"
	faceplayer
# 11 "data/maps/Route22_NorthEntrance_Frlg/scripts.pory"
# 6 "data/maps/Route22_NorthEntrance_Frlg/scripts.pory"
# 12 "data/maps/Route22_NorthEntrance_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 1
# 13 "data/maps/Route22_NorthEntrance_Frlg/scripts.pory"
# 7 "data/maps/Route22_NorthEntrance_Frlg/scripts.pory"
# 14 "data/maps/Route22_NorthEntrance_Frlg/scripts.pory"
	bufferstdstring STR_VAR_1, STDSTRING_BOULDER_BADGE
# 15 "data/maps/Route22_NorthEntrance_Frlg/scripts.pory"
# 8 "data/maps/Route22_NorthEntrance_Frlg/scripts.pory"
# 16 "data/maps/Route22_NorthEntrance_Frlg/scripts.pory"
	goto Route22_NorthEntrance_EventScript_BadgeGuard
# 17 "data/maps/Route22_NorthEntrance_Frlg/scripts.pory"
	end
# 18 "data/maps/Route22_NorthEntrance_Frlg/scripts.pory"

# 19 "data/maps/Route22_NorthEntrance_Frlg/scripts.pory"

# 20 "data/maps/Route22_NorthEntrance_Frlg/scripts.pory"
Route22_NorthEntrance_EventScript_BoulderBadgeGuardTrigger::
# 21 "data/maps/Route22_NorthEntrance_Frlg/scripts.pory"
# 13 "data/maps/Route22_NorthEntrance_Frlg/scripts.pory"
# 22 "data/maps/Route22_NorthEntrance_Frlg/scripts.pory"
	lockall
# 23 "data/maps/Route22_NorthEntrance_Frlg/scripts.pory"
# 14 "data/maps/Route22_NorthEntrance_Frlg/scripts.pory"
# 24 "data/maps/Route22_NorthEntrance_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 1
# 25 "data/maps/Route22_NorthEntrance_Frlg/scripts.pory"
# 15 "data/maps/Route22_NorthEntrance_Frlg/scripts.pory"
# 26 "data/maps/Route22_NorthEntrance_Frlg/scripts.pory"
	setvar VAR_0x8009, 1
# 27 "data/maps/Route22_NorthEntrance_Frlg/scripts.pory"
# 16 "data/maps/Route22_NorthEntrance_Frlg/scripts.pory"
# 28 "data/maps/Route22_NorthEntrance_Frlg/scripts.pory"
	bufferstdstring STR_VAR_1, STDSTRING_BOULDER_BADGE
# 29 "data/maps/Route22_NorthEntrance_Frlg/scripts.pory"
# 17 "data/maps/Route22_NorthEntrance_Frlg/scripts.pory"
# 30 "data/maps/Route22_NorthEntrance_Frlg/scripts.pory"
	goto Route23_EventScript_BadgeGuardTrigger
# 31 "data/maps/Route22_NorthEntrance_Frlg/scripts.pory"
	end
