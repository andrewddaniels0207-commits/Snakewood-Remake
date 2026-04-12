SealedChamber_OuterRoom_MapScripts::
# 2 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, SealedChamber_OuterRoom_OnResume
# 3 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SealedChamber_OuterRoom_OnTransition
# 4 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, SealedChamber_OuterRoom_OnLoad
	.byte 0


SealedChamber_OuterRoom_OnResume::
# 8 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	setdivewarp MAP_UNDERWATER_SEALED_CHAMBER, 12, 44
# 9 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	setescapewarp MAP_UNDERWATER_SEALED_CHAMBER, 12, 44
	end


SealedChamber_OuterRoom_OnTransition::
# 14 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	setflag FLAG_LANDMARK_SEALED_CHAMBER
	end


SealedChamber_OuterRoom_OnLoad::
# 19 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	goto_if_unset FLAG_SYS_BRAILLE_DIG, SealedChamber_OuterRoom_OnLoad_2
SealedChamber_OuterRoom_OnLoad_1:
	end

SealedChamber_OuterRoom_OnLoad_2:
# 20 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	call SealedChamber_OuterRoom_EventScript_CloseInnerRoomEntrance
	goto SealedChamber_OuterRoom_OnLoad_1


SealedChamber_OuterRoom_EventScript_CloseInnerRoomEntrance::
# 26 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	setmetatile 9, 1, METATILE_Cave_EntranceCover, TRUE
# 27 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	setmetatile 10, 1, METATILE_Cave_EntranceCover, TRUE
# 28 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	setmetatile 11, 1, METATILE_Cave_EntranceCover, TRUE
# 29 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	setmetatile 9, 2, METATILE_Cave_SealedChamberBraille_Mid, TRUE
# 30 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	setmetatile 10, 2, METATILE_Cave_SealedChamberBraille_Mid, TRUE
# 31 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	setmetatile 11, 2, METATILE_Cave_SealedChamberBraille_Mid, TRUE
	return


SealedChamber_OuterRoom_EventScript_BrailleABC::
# 36 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	lockall
# 37 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	braillemsgbox SealedChamber_OuterRoom_Braille_ABC
# 38 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	releaseall
	end


SealedChamber_OuterRoom_EventScript_BrailleGHI::
# 43 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	lockall
# 44 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	braillemsgbox SealedChamber_OuterRoom_Braille_GHI
# 45 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	releaseall
	end


SealedChamber_OuterRoom_EventScript_BrailleMNO::
# 50 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	lockall
# 51 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	braillemsgbox SealedChamber_OuterRoom_Braille_MNO
# 52 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	releaseall
	end


SealedChamber_OuterRoom_EventScript_BrailleTUV::
# 57 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	lockall
# 58 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	braillemsgbox SealedChamber_OuterRoom_Braille_TUV
# 59 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	releaseall
	end


SealedChamber_OuterRoom_EventScript_BrailleDEF::
# 64 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	lockall
# 65 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	braillemsgbox SealedChamber_OuterRoom_Braille_DEF
# 66 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	releaseall
	end


SealedChamber_OuterRoom_EventScript_BrailleJKL::
# 71 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	lockall
# 72 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	braillemsgbox SealedChamber_OuterRoom_Braille_JKL
# 73 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	releaseall
	end


SealedChamber_OuterRoom_EventScript_BraillePQRS::
# 78 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	lockall
# 79 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	braillemsgbox SealedChamber_OuterRoom_Braille_PQRS
# 80 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	releaseall
	end


SealedChamber_OuterRoom_EventScript_BraillePeriod::
# 85 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	lockall
# 86 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	braillemsgbox SealedChamber_OuterRoom_Braille_Period
# 87 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	releaseall
	end


SealedChamber_OuterRoom_EventScript_BrailleWXYZ::
# 92 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	lockall
# 93 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	braillemsgbox SealedChamber_OuterRoom_Braille_WXYZ
# 94 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	releaseall
	end


SealedChamber_OuterRoom_EventScript_BrailleComma::
# 99 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	lockall
# 100 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	braillemsgbox SealedChamber_OuterRoom_Braille_Comma
# 101 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	releaseall
	end


SealedChamber_OuterRoom_EventScript_InnerRoomEntranceWall::
# 106 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	lockall
# 107 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	goto_if_set FLAG_SYS_BRAILLE_DIG, SealedChamber_OuterRoom_EventScript_InnerRoomEntranceWall_2
SealedChamber_OuterRoom_EventScript_InnerRoomEntranceWall_1:
# 110 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	braillemsgbox SealedChamber_OuterRoom_Braille_DigHere
# 111 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	releaseall
	end

SealedChamber_OuterRoom_EventScript_InnerRoomEntranceWall_2:
# 108 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	goto SealedChamber_OuterRoom_EventScript_HoleInWall
	goto SealedChamber_OuterRoom_EventScript_InnerRoomEntranceWall_1


SealedChamber_OuterRoom_EventScript_HoleInWall::
# 116 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	msgbox gText_BigHoleInTheWall, MSGBOX_DEFAULT
# 117 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	releaseall
	end


SealedChamber_OuterRoom_EventScript_BrailleDigHere::
# 122 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	lockall
# 123 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	braillemsgbox SealedChamber_OuterRoom_Braille_DigHere
# 124 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	releaseall
	end

