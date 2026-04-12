# 1 "data/maps/SealedChamber_OuterRoom/scripts.pory"

# 2 "data/maps/SealedChamber_OuterRoom/scripts.pory"
SealedChamber_OuterRoom_MapScripts::
# 3 "data/maps/SealedChamber_OuterRoom/scripts.pory"
# 2 "data/maps/SealedChamber_OuterRoom/scripts.pory"
# 4 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, SealedChamber_OuterRoom_OnResume
# 5 "data/maps/SealedChamber_OuterRoom/scripts.pory"
# 3 "data/maps/SealedChamber_OuterRoom/scripts.pory"
# 6 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SealedChamber_OuterRoom_OnTransition
# 7 "data/maps/SealedChamber_OuterRoom/scripts.pory"
# 4 "data/maps/SealedChamber_OuterRoom/scripts.pory"
# 8 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, SealedChamber_OuterRoom_OnLoad
# 9 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	.byte 0
# 10 "data/maps/SealedChamber_OuterRoom/scripts.pory"

# 11 "data/maps/SealedChamber_OuterRoom/scripts.pory"

# 12 "data/maps/SealedChamber_OuterRoom/scripts.pory"
SealedChamber_OuterRoom_OnResume::
# 13 "data/maps/SealedChamber_OuterRoom/scripts.pory"
# 8 "data/maps/SealedChamber_OuterRoom/scripts.pory"
# 14 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	setdivewarp MAP_UNDERWATER_SEALED_CHAMBER, 12, 44
# 15 "data/maps/SealedChamber_OuterRoom/scripts.pory"
# 9 "data/maps/SealedChamber_OuterRoom/scripts.pory"
# 16 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	setescapewarp MAP_UNDERWATER_SEALED_CHAMBER, 12, 44
# 17 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	end
# 18 "data/maps/SealedChamber_OuterRoom/scripts.pory"

# 19 "data/maps/SealedChamber_OuterRoom/scripts.pory"

# 20 "data/maps/SealedChamber_OuterRoom/scripts.pory"
SealedChamber_OuterRoom_OnTransition::
# 21 "data/maps/SealedChamber_OuterRoom/scripts.pory"
# 14 "data/maps/SealedChamber_OuterRoom/scripts.pory"
# 22 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	setflag FLAG_LANDMARK_SEALED_CHAMBER
# 23 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	end
# 24 "data/maps/SealedChamber_OuterRoom/scripts.pory"

# 25 "data/maps/SealedChamber_OuterRoom/scripts.pory"

# 26 "data/maps/SealedChamber_OuterRoom/scripts.pory"
SealedChamber_OuterRoom_OnLoad::
# 27 "data/maps/SealedChamber_OuterRoom/scripts.pory"
# 19 "data/maps/SealedChamber_OuterRoom/scripts.pory"
# 28 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	goto_if_unset FLAG_SYS_BRAILLE_DIG, SealedChamber_OuterRoom_OnLoad_2
# 29 "data/maps/SealedChamber_OuterRoom/scripts.pory"
SealedChamber_OuterRoom_OnLoad_1:
# 30 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	end
# 31 "data/maps/SealedChamber_OuterRoom/scripts.pory"

# 32 "data/maps/SealedChamber_OuterRoom/scripts.pory"
SealedChamber_OuterRoom_OnLoad_2:
# 33 "data/maps/SealedChamber_OuterRoom/scripts.pory"
# 20 "data/maps/SealedChamber_OuterRoom/scripts.pory"
# 34 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	call SealedChamber_OuterRoom_EventScript_CloseInnerRoomEntrance
# 35 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	goto SealedChamber_OuterRoom_OnLoad_1
# 36 "data/maps/SealedChamber_OuterRoom/scripts.pory"

# 37 "data/maps/SealedChamber_OuterRoom/scripts.pory"

# 38 "data/maps/SealedChamber_OuterRoom/scripts.pory"
SealedChamber_OuterRoom_EventScript_CloseInnerRoomEntrance::
# 39 "data/maps/SealedChamber_OuterRoom/scripts.pory"
# 26 "data/maps/SealedChamber_OuterRoom/scripts.pory"
# 40 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	setmetatile 9, 1, METATILE_Cave_EntranceCover, TRUE
# 41 "data/maps/SealedChamber_OuterRoom/scripts.pory"
# 27 "data/maps/SealedChamber_OuterRoom/scripts.pory"
# 42 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	setmetatile 10, 1, METATILE_Cave_EntranceCover, TRUE
# 43 "data/maps/SealedChamber_OuterRoom/scripts.pory"
# 28 "data/maps/SealedChamber_OuterRoom/scripts.pory"
# 44 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	setmetatile 11, 1, METATILE_Cave_EntranceCover, TRUE
# 45 "data/maps/SealedChamber_OuterRoom/scripts.pory"
# 29 "data/maps/SealedChamber_OuterRoom/scripts.pory"
# 46 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	setmetatile 9, 2, METATILE_Cave_SealedChamberBraille_Mid, TRUE
# 47 "data/maps/SealedChamber_OuterRoom/scripts.pory"
# 30 "data/maps/SealedChamber_OuterRoom/scripts.pory"
# 48 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	setmetatile 10, 2, METATILE_Cave_SealedChamberBraille_Mid, TRUE
# 49 "data/maps/SealedChamber_OuterRoom/scripts.pory"
# 31 "data/maps/SealedChamber_OuterRoom/scripts.pory"
# 50 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	setmetatile 11, 2, METATILE_Cave_SealedChamberBraille_Mid, TRUE
# 51 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	return
# 52 "data/maps/SealedChamber_OuterRoom/scripts.pory"

# 53 "data/maps/SealedChamber_OuterRoom/scripts.pory"

# 54 "data/maps/SealedChamber_OuterRoom/scripts.pory"
SealedChamber_OuterRoom_EventScript_BrailleABC::
# 55 "data/maps/SealedChamber_OuterRoom/scripts.pory"
# 36 "data/maps/SealedChamber_OuterRoom/scripts.pory"
# 56 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	lockall
# 57 "data/maps/SealedChamber_OuterRoom/scripts.pory"
# 37 "data/maps/SealedChamber_OuterRoom/scripts.pory"
# 58 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	braillemsgbox SealedChamber_OuterRoom_Braille_ABC
# 59 "data/maps/SealedChamber_OuterRoom/scripts.pory"
# 38 "data/maps/SealedChamber_OuterRoom/scripts.pory"
# 60 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	releaseall
# 61 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	end
# 62 "data/maps/SealedChamber_OuterRoom/scripts.pory"

# 63 "data/maps/SealedChamber_OuterRoom/scripts.pory"

# 64 "data/maps/SealedChamber_OuterRoom/scripts.pory"
SealedChamber_OuterRoom_EventScript_BrailleGHI::
# 65 "data/maps/SealedChamber_OuterRoom/scripts.pory"
# 43 "data/maps/SealedChamber_OuterRoom/scripts.pory"
# 66 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	lockall
# 67 "data/maps/SealedChamber_OuterRoom/scripts.pory"
# 44 "data/maps/SealedChamber_OuterRoom/scripts.pory"
# 68 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	braillemsgbox SealedChamber_OuterRoom_Braille_GHI
# 69 "data/maps/SealedChamber_OuterRoom/scripts.pory"
# 45 "data/maps/SealedChamber_OuterRoom/scripts.pory"
# 70 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	releaseall
# 71 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	end
# 72 "data/maps/SealedChamber_OuterRoom/scripts.pory"

# 73 "data/maps/SealedChamber_OuterRoom/scripts.pory"

# 74 "data/maps/SealedChamber_OuterRoom/scripts.pory"
SealedChamber_OuterRoom_EventScript_BrailleMNO::
# 75 "data/maps/SealedChamber_OuterRoom/scripts.pory"
# 50 "data/maps/SealedChamber_OuterRoom/scripts.pory"
# 76 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	lockall
# 77 "data/maps/SealedChamber_OuterRoom/scripts.pory"
# 51 "data/maps/SealedChamber_OuterRoom/scripts.pory"
# 78 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	braillemsgbox SealedChamber_OuterRoom_Braille_MNO
# 79 "data/maps/SealedChamber_OuterRoom/scripts.pory"
# 52 "data/maps/SealedChamber_OuterRoom/scripts.pory"
# 80 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	releaseall
# 81 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	end
# 82 "data/maps/SealedChamber_OuterRoom/scripts.pory"

# 83 "data/maps/SealedChamber_OuterRoom/scripts.pory"

# 84 "data/maps/SealedChamber_OuterRoom/scripts.pory"
SealedChamber_OuterRoom_EventScript_BrailleTUV::
# 85 "data/maps/SealedChamber_OuterRoom/scripts.pory"
# 57 "data/maps/SealedChamber_OuterRoom/scripts.pory"
# 86 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	lockall
# 87 "data/maps/SealedChamber_OuterRoom/scripts.pory"
# 58 "data/maps/SealedChamber_OuterRoom/scripts.pory"
# 88 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	braillemsgbox SealedChamber_OuterRoom_Braille_TUV
# 89 "data/maps/SealedChamber_OuterRoom/scripts.pory"
# 59 "data/maps/SealedChamber_OuterRoom/scripts.pory"
# 90 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	releaseall
# 91 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	end
# 92 "data/maps/SealedChamber_OuterRoom/scripts.pory"

# 93 "data/maps/SealedChamber_OuterRoom/scripts.pory"

# 94 "data/maps/SealedChamber_OuterRoom/scripts.pory"
SealedChamber_OuterRoom_EventScript_BrailleDEF::
# 95 "data/maps/SealedChamber_OuterRoom/scripts.pory"
# 64 "data/maps/SealedChamber_OuterRoom/scripts.pory"
# 96 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	lockall
# 97 "data/maps/SealedChamber_OuterRoom/scripts.pory"
# 65 "data/maps/SealedChamber_OuterRoom/scripts.pory"
# 98 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	braillemsgbox SealedChamber_OuterRoom_Braille_DEF
# 99 "data/maps/SealedChamber_OuterRoom/scripts.pory"
# 66 "data/maps/SealedChamber_OuterRoom/scripts.pory"
# 100 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	releaseall
# 101 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	end
# 102 "data/maps/SealedChamber_OuterRoom/scripts.pory"

# 103 "data/maps/SealedChamber_OuterRoom/scripts.pory"

# 104 "data/maps/SealedChamber_OuterRoom/scripts.pory"
SealedChamber_OuterRoom_EventScript_BrailleJKL::
# 105 "data/maps/SealedChamber_OuterRoom/scripts.pory"
# 71 "data/maps/SealedChamber_OuterRoom/scripts.pory"
# 106 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	lockall
# 107 "data/maps/SealedChamber_OuterRoom/scripts.pory"
# 72 "data/maps/SealedChamber_OuterRoom/scripts.pory"
# 108 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	braillemsgbox SealedChamber_OuterRoom_Braille_JKL
# 109 "data/maps/SealedChamber_OuterRoom/scripts.pory"
# 73 "data/maps/SealedChamber_OuterRoom/scripts.pory"
# 110 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	releaseall
# 111 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	end
# 112 "data/maps/SealedChamber_OuterRoom/scripts.pory"

# 113 "data/maps/SealedChamber_OuterRoom/scripts.pory"

# 114 "data/maps/SealedChamber_OuterRoom/scripts.pory"
SealedChamber_OuterRoom_EventScript_BraillePQRS::
# 115 "data/maps/SealedChamber_OuterRoom/scripts.pory"
# 78 "data/maps/SealedChamber_OuterRoom/scripts.pory"
# 116 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	lockall
# 117 "data/maps/SealedChamber_OuterRoom/scripts.pory"
# 79 "data/maps/SealedChamber_OuterRoom/scripts.pory"
# 118 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	braillemsgbox SealedChamber_OuterRoom_Braille_PQRS
# 119 "data/maps/SealedChamber_OuterRoom/scripts.pory"
# 80 "data/maps/SealedChamber_OuterRoom/scripts.pory"
# 120 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	releaseall
# 121 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	end
# 122 "data/maps/SealedChamber_OuterRoom/scripts.pory"

# 123 "data/maps/SealedChamber_OuterRoom/scripts.pory"

# 124 "data/maps/SealedChamber_OuterRoom/scripts.pory"
SealedChamber_OuterRoom_EventScript_BraillePeriod::
# 125 "data/maps/SealedChamber_OuterRoom/scripts.pory"
# 85 "data/maps/SealedChamber_OuterRoom/scripts.pory"
# 126 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	lockall
# 127 "data/maps/SealedChamber_OuterRoom/scripts.pory"
# 86 "data/maps/SealedChamber_OuterRoom/scripts.pory"
# 128 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	braillemsgbox SealedChamber_OuterRoom_Braille_Period
# 129 "data/maps/SealedChamber_OuterRoom/scripts.pory"
# 87 "data/maps/SealedChamber_OuterRoom/scripts.pory"
# 130 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	releaseall
# 131 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	end
# 132 "data/maps/SealedChamber_OuterRoom/scripts.pory"

# 133 "data/maps/SealedChamber_OuterRoom/scripts.pory"

# 134 "data/maps/SealedChamber_OuterRoom/scripts.pory"
SealedChamber_OuterRoom_EventScript_BrailleWXYZ::
# 135 "data/maps/SealedChamber_OuterRoom/scripts.pory"
# 92 "data/maps/SealedChamber_OuterRoom/scripts.pory"
# 136 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	lockall
# 137 "data/maps/SealedChamber_OuterRoom/scripts.pory"
# 93 "data/maps/SealedChamber_OuterRoom/scripts.pory"
# 138 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	braillemsgbox SealedChamber_OuterRoom_Braille_WXYZ
# 139 "data/maps/SealedChamber_OuterRoom/scripts.pory"
# 94 "data/maps/SealedChamber_OuterRoom/scripts.pory"
# 140 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	releaseall
# 141 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	end
# 142 "data/maps/SealedChamber_OuterRoom/scripts.pory"

# 143 "data/maps/SealedChamber_OuterRoom/scripts.pory"

# 144 "data/maps/SealedChamber_OuterRoom/scripts.pory"
SealedChamber_OuterRoom_EventScript_BrailleComma::
# 145 "data/maps/SealedChamber_OuterRoom/scripts.pory"
# 99 "data/maps/SealedChamber_OuterRoom/scripts.pory"
# 146 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	lockall
# 147 "data/maps/SealedChamber_OuterRoom/scripts.pory"
# 100 "data/maps/SealedChamber_OuterRoom/scripts.pory"
# 148 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	braillemsgbox SealedChamber_OuterRoom_Braille_Comma
# 149 "data/maps/SealedChamber_OuterRoom/scripts.pory"
# 101 "data/maps/SealedChamber_OuterRoom/scripts.pory"
# 150 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	releaseall
# 151 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	end
# 152 "data/maps/SealedChamber_OuterRoom/scripts.pory"

# 153 "data/maps/SealedChamber_OuterRoom/scripts.pory"

# 154 "data/maps/SealedChamber_OuterRoom/scripts.pory"
SealedChamber_OuterRoom_EventScript_InnerRoomEntranceWall::
# 155 "data/maps/SealedChamber_OuterRoom/scripts.pory"
# 106 "data/maps/SealedChamber_OuterRoom/scripts.pory"
# 156 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	lockall
# 157 "data/maps/SealedChamber_OuterRoom/scripts.pory"
# 107 "data/maps/SealedChamber_OuterRoom/scripts.pory"
# 158 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	goto_if_set FLAG_SYS_BRAILLE_DIG, SealedChamber_OuterRoom_EventScript_InnerRoomEntranceWall_2
# 159 "data/maps/SealedChamber_OuterRoom/scripts.pory"
SealedChamber_OuterRoom_EventScript_InnerRoomEntranceWall_1:
# 160 "data/maps/SealedChamber_OuterRoom/scripts.pory"
# 110 "data/maps/SealedChamber_OuterRoom/scripts.pory"
# 161 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	braillemsgbox SealedChamber_OuterRoom_Braille_DigHere
# 162 "data/maps/SealedChamber_OuterRoom/scripts.pory"
# 111 "data/maps/SealedChamber_OuterRoom/scripts.pory"
# 163 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	releaseall
# 164 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	end
# 165 "data/maps/SealedChamber_OuterRoom/scripts.pory"

# 166 "data/maps/SealedChamber_OuterRoom/scripts.pory"
SealedChamber_OuterRoom_EventScript_InnerRoomEntranceWall_2:
# 167 "data/maps/SealedChamber_OuterRoom/scripts.pory"
# 108 "data/maps/SealedChamber_OuterRoom/scripts.pory"
# 168 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	goto SealedChamber_OuterRoom_EventScript_HoleInWall
# 169 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	goto SealedChamber_OuterRoom_EventScript_InnerRoomEntranceWall_1
# 170 "data/maps/SealedChamber_OuterRoom/scripts.pory"

# 171 "data/maps/SealedChamber_OuterRoom/scripts.pory"

# 172 "data/maps/SealedChamber_OuterRoom/scripts.pory"
SealedChamber_OuterRoom_EventScript_HoleInWall::
# 173 "data/maps/SealedChamber_OuterRoom/scripts.pory"
# 116 "data/maps/SealedChamber_OuterRoom/scripts.pory"
# 174 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	msgbox gText_BigHoleInTheWall, MSGBOX_DEFAULT
# 175 "data/maps/SealedChamber_OuterRoom/scripts.pory"
# 117 "data/maps/SealedChamber_OuterRoom/scripts.pory"
# 176 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	releaseall
# 177 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	end
# 178 "data/maps/SealedChamber_OuterRoom/scripts.pory"

# 179 "data/maps/SealedChamber_OuterRoom/scripts.pory"

# 180 "data/maps/SealedChamber_OuterRoom/scripts.pory"
SealedChamber_OuterRoom_EventScript_BrailleDigHere::
# 181 "data/maps/SealedChamber_OuterRoom/scripts.pory"
# 122 "data/maps/SealedChamber_OuterRoom/scripts.pory"
# 182 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	lockall
# 183 "data/maps/SealedChamber_OuterRoom/scripts.pory"
# 123 "data/maps/SealedChamber_OuterRoom/scripts.pory"
# 184 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	braillemsgbox SealedChamber_OuterRoom_Braille_DigHere
# 185 "data/maps/SealedChamber_OuterRoom/scripts.pory"
# 124 "data/maps/SealedChamber_OuterRoom/scripts.pory"
# 186 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	releaseall
# 187 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	end
