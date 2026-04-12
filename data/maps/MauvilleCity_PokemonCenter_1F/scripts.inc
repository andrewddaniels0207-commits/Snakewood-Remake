# 1 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"

# 2 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
MauvilleCity_PokemonCenter_1F_MapScripts::
# 3 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
# 2 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
# 4 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MauvilleCity_PokemonCenter_1F_OnTransition
# 5 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
# 3 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
# 6 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
# 7 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.byte 0
# 8 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"

# 9 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"

# 10 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
MauvilleCity_PokemonCenter_1F_OnTransition::
# 11 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
# 7 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
# 12 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_MAUVILLE_CITY
# 13 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
# 8 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
# 14 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_UpdateBrineyLocation
# 15 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
# 9 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
# 16 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	goto MauvilleCity_PokemonCenter_1F_EventScript_SetMauvilleOldManGfx
# 17 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	end
# 18 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"

# 19 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"

# 20 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
MauvilleCity_PokemonCenter_1F_EventScript_SetMauvilleOldManGfx::
# 21 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
# 14 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
# 22 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	special SetMauvilleOldManObjEventGfx
# 23 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	end
# 24 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"

# 25 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"

# 26 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
MauvilleCity_PokemonCenter_1F_EventScript_Nurse::
# 27 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
# 19 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
# 28 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x800B, LOCALID_MAUVILLE_NURSE
# 29 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
# 20 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
# 30 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 31 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
# 21 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
# 32 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	waitmessage
# 33 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
# 22 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
# 34 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	waitbuttonpress
# 35 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
# 23 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
# 36 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	release
# 37 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	end
# 38 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"

# 39 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"

# 40 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
MauvilleCity_PokemonCenter_1F_EventScript_Woman1::
# 41 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
# 28 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
# 42 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	msgbox MauvilleCity_PokemonCenter_1F_Text_ManOverThereSaysWeirdThings, MSGBOX_NPC
# 43 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	end
# 44 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"

# 45 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"

# 46 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
MauvilleCity_PokemonCenter_1F_EventScript_Woman2::
# 47 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
# 33 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
# 48 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	msgbox MauvilleCity_PokemonCenter_1F_Text_MyDataUpdatedFromRecordCorner, MSGBOX_NPC
# 49 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	end
# 50 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"

# 51 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"

# 52 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
MauvilleCity_PokemonCenter_1F_EventScript_Youngster::
# 53 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
# 38 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
# 54 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	msgbox MauvilleCity_PokemonCenter_1F_Text_RecordCornerSoundsFun, MSGBOX_NPC
# 55 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	end
# 56 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"

# 57 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"

# 58 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
MauvilleCity_PokemonCenter_1F_Text_ManOverThereSaysWeirdThings::
# 59 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
# 42 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
# 60 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.string "That man over there, he says weird\n"
# 61 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.string "things!\p"
# 62 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.string "He's funny in a weird way.\n"
# 63 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.string "I doubt I'll forget about him!$"
# 64 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"

# 65 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
MauvilleCity_PokemonCenter_1F_Text_MyDataUpdatedFromRecordCorner::
# 66 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
# 49 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
# 67 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.string "When I accessed the RECORD CORNER,\n"
# 68 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.string "the data for what's hot in DEWFORD\l"
# 69 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.string "got updated.\p"
# 70 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.string "Now that bit of data is the same\n"
# 71 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.string "as my friend's!$"
# 72 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"

# 73 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
MauvilleCity_PokemonCenter_1F_Text_RecordCornerSoundsFun::
# 74 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
# 57 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
# 75 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.string "A RECORD CORNER opened upstairs in\n"
# 76 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.string "the POKéMON CENTER.\p"
# 77 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.string "I don't know what it's about, but it\n"
# 78 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.string "sounds fun. I'll go check it out!$"
