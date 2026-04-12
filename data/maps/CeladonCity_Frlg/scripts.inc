# 1 "data/maps/CeladonCity_Frlg/scripts.pory"

# 2 "data/maps/CeladonCity_Frlg/scripts.pory"
CeladonCity_Frlg_MapScripts::
# 3 "data/maps/CeladonCity_Frlg/scripts.pory"
# 2 "data/maps/CeladonCity_Frlg/scripts.pory"
# 4 "data/maps/CeladonCity_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, CeladonCity_OnTransition
# 5 "data/maps/CeladonCity_Frlg/scripts.pory"
	.byte 0
# 6 "data/maps/CeladonCity_Frlg/scripts.pory"

# 7 "data/maps/CeladonCity_Frlg/scripts.pory"

# 8 "data/maps/CeladonCity_Frlg/scripts.pory"
CeladonCity_OnTransition::
# 9 "data/maps/CeladonCity_Frlg/scripts.pory"
# 6 "data/maps/CeladonCity_Frlg/scripts.pory"
# 10 "data/maps/CeladonCity_Frlg/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_CELADON_CITY
# 11 "data/maps/CeladonCity_Frlg/scripts.pory"
	end
# 12 "data/maps/CeladonCity_Frlg/scripts.pory"

# 13 "data/maps/CeladonCity_Frlg/scripts.pory"

# 14 "data/maps/CeladonCity_Frlg/scripts.pory"
CeladonCity_EventScript_LittleGirl::
# 15 "data/maps/CeladonCity_Frlg/scripts.pory"
# 11 "data/maps/CeladonCity_Frlg/scripts.pory"
# 16 "data/maps/CeladonCity_Frlg/scripts.pory"
	msgbox CeladonCity_Text_GotMyKoffingInCinnabar, MSGBOX_NPC
# 17 "data/maps/CeladonCity_Frlg/scripts.pory"
	end
# 18 "data/maps/CeladonCity_Frlg/scripts.pory"

# 19 "data/maps/CeladonCity_Frlg/scripts.pory"

# 20 "data/maps/CeladonCity_Frlg/scripts.pory"
CeladonCity_EventScript_OldMan1::
# 21 "data/maps/CeladonCity_Frlg/scripts.pory"
# 16 "data/maps/CeladonCity_Frlg/scripts.pory"
# 22 "data/maps/CeladonCity_Frlg/scripts.pory"
	lock
# 23 "data/maps/CeladonCity_Frlg/scripts.pory"
# 17 "data/maps/CeladonCity_Frlg/scripts.pory"
# 24 "data/maps/CeladonCity_Frlg/scripts.pory"
	msgbox CeladonCity_Text_GymIsGreatFullOfWomen
# 25 "data/maps/CeladonCity_Frlg/scripts.pory"
# 18 "data/maps/CeladonCity_Frlg/scripts.pory"
# 26 "data/maps/CeladonCity_Frlg/scripts.pory"
	release
# 27 "data/maps/CeladonCity_Frlg/scripts.pory"
	end
# 28 "data/maps/CeladonCity_Frlg/scripts.pory"

# 29 "data/maps/CeladonCity_Frlg/scripts.pory"

# 30 "data/maps/CeladonCity_Frlg/scripts.pory"
CeladonCity_EventScript_Woman::
# 31 "data/maps/CeladonCity_Frlg/scripts.pory"
# 23 "data/maps/CeladonCity_Frlg/scripts.pory"
# 32 "data/maps/CeladonCity_Frlg/scripts.pory"
	msgbox CeladonCity_Text_GameCornerIsBadForCitysImage, MSGBOX_NPC
# 33 "data/maps/CeladonCity_Frlg/scripts.pory"
	end
# 34 "data/maps/CeladonCity_Frlg/scripts.pory"

# 35 "data/maps/CeladonCity_Frlg/scripts.pory"

# 36 "data/maps/CeladonCity_Frlg/scripts.pory"
CeladonCity_EventScript_OldMan2::
# 37 "data/maps/CeladonCity_Frlg/scripts.pory"
# 28 "data/maps/CeladonCity_Frlg/scripts.pory"
# 38 "data/maps/CeladonCity_Frlg/scripts.pory"
	msgbox CeladonCity_Text_BlewItAllAtSlots, MSGBOX_NPC
# 39 "data/maps/CeladonCity_Frlg/scripts.pory"
	end
# 40 "data/maps/CeladonCity_Frlg/scripts.pory"

# 41 "data/maps/CeladonCity_Frlg/scripts.pory"

# 42 "data/maps/CeladonCity_Frlg/scripts.pory"
CeladonCity_EventScript_SoftboiledTutor::
# 43 "data/maps/CeladonCity_Frlg/scripts.pory"
# 33 "data/maps/CeladonCity_Frlg/scripts.pory"
# 44 "data/maps/CeladonCity_Frlg/scripts.pory"
	goto EventScript_SoftboiledTutor
# 45 "data/maps/CeladonCity_Frlg/scripts.pory"
	end
# 46 "data/maps/CeladonCity_Frlg/scripts.pory"

# 47 "data/maps/CeladonCity_Frlg/scripts.pory"

# 48 "data/maps/CeladonCity_Frlg/scripts.pory"
CeladonCity_EventScript_FatMan::
# 49 "data/maps/CeladonCity_Frlg/scripts.pory"
# 38 "data/maps/CeladonCity_Frlg/scripts.pory"
# 50 "data/maps/CeladonCity_Frlg/scripts.pory"
	lock
# 51 "data/maps/CeladonCity_Frlg/scripts.pory"
# 39 "data/maps/CeladonCity_Frlg/scripts.pory"
# 52 "data/maps/CeladonCity_Frlg/scripts.pory"
	faceplayer
# 53 "data/maps/CeladonCity_Frlg/scripts.pory"
# 40 "data/maps/CeladonCity_Frlg/scripts.pory"
# 54 "data/maps/CeladonCity_Frlg/scripts.pory"
	msgbox CeladonCity_Text_MyTrustedPalPoliwrath
# 55 "data/maps/CeladonCity_Frlg/scripts.pory"
# 41 "data/maps/CeladonCity_Frlg/scripts.pory"
# 56 "data/maps/CeladonCity_Frlg/scripts.pory"
	closemessage
# 57 "data/maps/CeladonCity_Frlg/scripts.pory"
# 42 "data/maps/CeladonCity_Frlg/scripts.pory"
# 58 "data/maps/CeladonCity_Frlg/scripts.pory"
	applymovement LOCALID_CELADON_FAT_MAN, Common_Movement_FaceOriginalDirection
# 59 "data/maps/CeladonCity_Frlg/scripts.pory"
# 43 "data/maps/CeladonCity_Frlg/scripts.pory"
# 60 "data/maps/CeladonCity_Frlg/scripts.pory"
	waitmovement 0
# 61 "data/maps/CeladonCity_Frlg/scripts.pory"
# 44 "data/maps/CeladonCity_Frlg/scripts.pory"
# 62 "data/maps/CeladonCity_Frlg/scripts.pory"
	release
# 63 "data/maps/CeladonCity_Frlg/scripts.pory"
	end
# 64 "data/maps/CeladonCity_Frlg/scripts.pory"

# 65 "data/maps/CeladonCity_Frlg/scripts.pory"

# 66 "data/maps/CeladonCity_Frlg/scripts.pory"
CeladonCity_EventScript_Poliwrath::
# 67 "data/maps/CeladonCity_Frlg/scripts.pory"
# 49 "data/maps/CeladonCity_Frlg/scripts.pory"
# 68 "data/maps/CeladonCity_Frlg/scripts.pory"
	lock
# 69 "data/maps/CeladonCity_Frlg/scripts.pory"
# 50 "data/maps/CeladonCity_Frlg/scripts.pory"
# 70 "data/maps/CeladonCity_Frlg/scripts.pory"
	faceplayer
# 71 "data/maps/CeladonCity_Frlg/scripts.pory"
# 51 "data/maps/CeladonCity_Frlg/scripts.pory"
# 72 "data/maps/CeladonCity_Frlg/scripts.pory"
	waitse
# 73 "data/maps/CeladonCity_Frlg/scripts.pory"
# 52 "data/maps/CeladonCity_Frlg/scripts.pory"
# 74 "data/maps/CeladonCity_Frlg/scripts.pory"
	playmoncry SPECIES_POLIWRATH, CRY_MODE_NORMAL
# 75 "data/maps/CeladonCity_Frlg/scripts.pory"
# 53 "data/maps/CeladonCity_Frlg/scripts.pory"
# 76 "data/maps/CeladonCity_Frlg/scripts.pory"
	msgbox CeladonCity_Text_Poliwrath
# 77 "data/maps/CeladonCity_Frlg/scripts.pory"
# 54 "data/maps/CeladonCity_Frlg/scripts.pory"
# 78 "data/maps/CeladonCity_Frlg/scripts.pory"
	closemessage
# 79 "data/maps/CeladonCity_Frlg/scripts.pory"
# 55 "data/maps/CeladonCity_Frlg/scripts.pory"
# 80 "data/maps/CeladonCity_Frlg/scripts.pory"
	waitmoncry
# 81 "data/maps/CeladonCity_Frlg/scripts.pory"
# 56 "data/maps/CeladonCity_Frlg/scripts.pory"
# 82 "data/maps/CeladonCity_Frlg/scripts.pory"
	applymovement LOCALID_CELADON_POLIWRATH, Common_Movement_FaceOriginalDirection
# 83 "data/maps/CeladonCity_Frlg/scripts.pory"
# 57 "data/maps/CeladonCity_Frlg/scripts.pory"
# 84 "data/maps/CeladonCity_Frlg/scripts.pory"
	waitmovement 0
# 85 "data/maps/CeladonCity_Frlg/scripts.pory"
# 58 "data/maps/CeladonCity_Frlg/scripts.pory"
# 86 "data/maps/CeladonCity_Frlg/scripts.pory"
	release
# 87 "data/maps/CeladonCity_Frlg/scripts.pory"
	end
# 88 "data/maps/CeladonCity_Frlg/scripts.pory"

# 89 "data/maps/CeladonCity_Frlg/scripts.pory"

# 90 "data/maps/CeladonCity_Frlg/scripts.pory"
CeladonCity_EventScript_RocketGrunt1::
# 91 "data/maps/CeladonCity_Frlg/scripts.pory"
# 63 "data/maps/CeladonCity_Frlg/scripts.pory"
# 92 "data/maps/CeladonCity_Frlg/scripts.pory"
	msgbox CeladonCity_Text_KeepOutOfTeamRocketsWay, MSGBOX_NPC
# 93 "data/maps/CeladonCity_Frlg/scripts.pory"
	end
# 94 "data/maps/CeladonCity_Frlg/scripts.pory"

# 95 "data/maps/CeladonCity_Frlg/scripts.pory"

# 96 "data/maps/CeladonCity_Frlg/scripts.pory"
CeladonCity_EventScript_RocketGrunt2::
# 97 "data/maps/CeladonCity_Frlg/scripts.pory"
# 68 "data/maps/CeladonCity_Frlg/scripts.pory"
# 98 "data/maps/CeladonCity_Frlg/scripts.pory"
	msgbox CeladonCity_Text_GetLostOrIllPunchYou, MSGBOX_NPC
# 99 "data/maps/CeladonCity_Frlg/scripts.pory"
	end
# 100 "data/maps/CeladonCity_Frlg/scripts.pory"

# 101 "data/maps/CeladonCity_Frlg/scripts.pory"

# 102 "data/maps/CeladonCity_Frlg/scripts.pory"
CeladonCity_EventScript_Boy::
# 103 "data/maps/CeladonCity_Frlg/scripts.pory"
# 73 "data/maps/CeladonCity_Frlg/scripts.pory"
# 104 "data/maps/CeladonCity_Frlg/scripts.pory"
	msgbox CeladonCity_Text_ScaldedTongueOnTea, MSGBOX_NPC
# 105 "data/maps/CeladonCity_Frlg/scripts.pory"
	end
# 106 "data/maps/CeladonCity_Frlg/scripts.pory"

# 107 "data/maps/CeladonCity_Frlg/scripts.pory"

# 108 "data/maps/CeladonCity_Frlg/scripts.pory"
CeladonCity_EventScript_SilphCoScientist::
# 109 "data/maps/CeladonCity_Frlg/scripts.pory"
# 78 "data/maps/CeladonCity_Frlg/scripts.pory"
# 110 "data/maps/CeladonCity_Frlg/scripts.pory"
	msgbox CeladonCity_Text_SomeoneStoleSilphScope, MSGBOX_NPC
# 111 "data/maps/CeladonCity_Frlg/scripts.pory"
	end
# 112 "data/maps/CeladonCity_Frlg/scripts.pory"

# 113 "data/maps/CeladonCity_Frlg/scripts.pory"

# 114 "data/maps/CeladonCity_Frlg/scripts.pory"
CeladonCity_EventScript_TrainerTips1::
# 115 "data/maps/CeladonCity_Frlg/scripts.pory"
# 83 "data/maps/CeladonCity_Frlg/scripts.pory"
# 116 "data/maps/CeladonCity_Frlg/scripts.pory"
	msgbox CeladonCity_Text_ExplainXAccuracyDireHit, MSGBOX_SIGN
# 117 "data/maps/CeladonCity_Frlg/scripts.pory"
	end
# 118 "data/maps/CeladonCity_Frlg/scripts.pory"

# 119 "data/maps/CeladonCity_Frlg/scripts.pory"

# 120 "data/maps/CeladonCity_Frlg/scripts.pory"
CeladonCity_EventScript_CitySign::
# 121 "data/maps/CeladonCity_Frlg/scripts.pory"
# 88 "data/maps/CeladonCity_Frlg/scripts.pory"
# 122 "data/maps/CeladonCity_Frlg/scripts.pory"
	msgbox CeladonCity_Text_CitySign, MSGBOX_SIGN
# 123 "data/maps/CeladonCity_Frlg/scripts.pory"
	end
# 124 "data/maps/CeladonCity_Frlg/scripts.pory"

# 125 "data/maps/CeladonCity_Frlg/scripts.pory"

# 126 "data/maps/CeladonCity_Frlg/scripts.pory"
CeladonCity_EventScript_GymSign::
# 127 "data/maps/CeladonCity_Frlg/scripts.pory"
# 93 "data/maps/CeladonCity_Frlg/scripts.pory"
# 128 "data/maps/CeladonCity_Frlg/scripts.pory"
	lockall
# 129 "data/maps/CeladonCity_Frlg/scripts.pory"
# 94 "data/maps/CeladonCity_Frlg/scripts.pory"
# 130 "data/maps/CeladonCity_Frlg/scripts.pory"
	famechecker FAMECHECKER_ERIKA, 0
# 131 "data/maps/CeladonCity_Frlg/scripts.pory"
# 95 "data/maps/CeladonCity_Frlg/scripts.pory"
# 132 "data/maps/CeladonCity_Frlg/scripts.pory"
	msgbox CeladonCity_Text_GymSign
# 133 "data/maps/CeladonCity_Frlg/scripts.pory"
# 96 "data/maps/CeladonCity_Frlg/scripts.pory"
# 134 "data/maps/CeladonCity_Frlg/scripts.pory"
	releaseall
# 135 "data/maps/CeladonCity_Frlg/scripts.pory"
	end
# 136 "data/maps/CeladonCity_Frlg/scripts.pory"

# 137 "data/maps/CeladonCity_Frlg/scripts.pory"

# 138 "data/maps/CeladonCity_Frlg/scripts.pory"
CeladonCity_EventScript_MansionSign::
# 139 "data/maps/CeladonCity_Frlg/scripts.pory"
# 101 "data/maps/CeladonCity_Frlg/scripts.pory"
# 140 "data/maps/CeladonCity_Frlg/scripts.pory"
	msgbox CeladonCity_Text_MansionSign, MSGBOX_SIGN
# 141 "data/maps/CeladonCity_Frlg/scripts.pory"
	end
# 142 "data/maps/CeladonCity_Frlg/scripts.pory"

# 143 "data/maps/CeladonCity_Frlg/scripts.pory"

# 144 "data/maps/CeladonCity_Frlg/scripts.pory"
CeladonCity_EventScript_DeptStoreSign::
# 145 "data/maps/CeladonCity_Frlg/scripts.pory"
# 106 "data/maps/CeladonCity_Frlg/scripts.pory"
# 146 "data/maps/CeladonCity_Frlg/scripts.pory"
	msgbox CeladonCity_Text_DeptStoreSign, MSGBOX_SIGN
# 147 "data/maps/CeladonCity_Frlg/scripts.pory"
	end
# 148 "data/maps/CeladonCity_Frlg/scripts.pory"

# 149 "data/maps/CeladonCity_Frlg/scripts.pory"

# 150 "data/maps/CeladonCity_Frlg/scripts.pory"
CeladonCity_EventScript_TrainerTips2::
# 151 "data/maps/CeladonCity_Frlg/scripts.pory"
# 111 "data/maps/CeladonCity_Frlg/scripts.pory"
# 152 "data/maps/CeladonCity_Frlg/scripts.pory"
	msgbox CeladonCity_Text_GuardSpecProtectsFromStatus, MSGBOX_SIGN
# 153 "data/maps/CeladonCity_Frlg/scripts.pory"
	end
# 154 "data/maps/CeladonCity_Frlg/scripts.pory"

# 155 "data/maps/CeladonCity_Frlg/scripts.pory"

# 156 "data/maps/CeladonCity_Frlg/scripts.pory"
CeladonCity_EventScript_PrizeExchangeSign::
# 157 "data/maps/CeladonCity_Frlg/scripts.pory"
# 116 "data/maps/CeladonCity_Frlg/scripts.pory"
# 158 "data/maps/CeladonCity_Frlg/scripts.pory"
	msgbox CeladonCity_Text_PrizeExchangeSign, MSGBOX_SIGN
# 159 "data/maps/CeladonCity_Frlg/scripts.pory"
	end
# 160 "data/maps/CeladonCity_Frlg/scripts.pory"

# 161 "data/maps/CeladonCity_Frlg/scripts.pory"

# 162 "data/maps/CeladonCity_Frlg/scripts.pory"
CeladonCity_EventScript_GameCornerSign::
# 163 "data/maps/CeladonCity_Frlg/scripts.pory"
# 121 "data/maps/CeladonCity_Frlg/scripts.pory"
# 164 "data/maps/CeladonCity_Frlg/scripts.pory"
	msgbox CeladonCity_Text_GameCornerSign, MSGBOX_SIGN
# 165 "data/maps/CeladonCity_Frlg/scripts.pory"
	end
# 166 "data/maps/CeladonCity_Frlg/scripts.pory"

# 167 "data/maps/CeladonCity_Frlg/scripts.pory"

# 168 "data/maps/CeladonCity_Frlg/scripts.pory"
CeladonCity_Text_GotMyKoffingInCinnabar::
# 169 "data/maps/CeladonCity_Frlg/scripts.pory"
# 125 "data/maps/CeladonCity_Frlg/scripts.pory"
# 170 "data/maps/CeladonCity_Frlg/scripts.pory"
	.string "I got my KOFFING in CINNABAR.\p"
# 171 "data/maps/CeladonCity_Frlg/scripts.pory"
	.string "It's usually nice, but it breathes\n"
# 172 "data/maps/CeladonCity_Frlg/scripts.pory"
	.string "poison when it's angry.$"
# 173 "data/maps/CeladonCity_Frlg/scripts.pory"

# 174 "data/maps/CeladonCity_Frlg/scripts.pory"
CeladonCity_Text_GymIsGreatFullOfWomen::
# 175 "data/maps/CeladonCity_Frlg/scripts.pory"
# 131 "data/maps/CeladonCity_Frlg/scripts.pory"
# 176 "data/maps/CeladonCity_Frlg/scripts.pory"
	.string "Heheh! This GYM is great!\n"
# 177 "data/maps/CeladonCity_Frlg/scripts.pory"
	.string "It's full of women!$"
# 178 "data/maps/CeladonCity_Frlg/scripts.pory"

# 179 "data/maps/CeladonCity_Frlg/scripts.pory"
CeladonCity_Text_GameCornerIsBadForCitysImage::
# 180 "data/maps/CeladonCity_Frlg/scripts.pory"
# 136 "data/maps/CeladonCity_Frlg/scripts.pory"
# 181 "data/maps/CeladonCity_Frlg/scripts.pory"
	.string "CELADON takes pride in its efforts\n"
# 182 "data/maps/CeladonCity_Frlg/scripts.pory"
	.string "to keep the city beautiful.\p"
# 183 "data/maps/CeladonCity_Frlg/scripts.pory"
	.string "That's why the new GAME CORNER is\n"
# 184 "data/maps/CeladonCity_Frlg/scripts.pory"
	.string "bad for our city's image.$"
# 185 "data/maps/CeladonCity_Frlg/scripts.pory"

# 186 "data/maps/CeladonCity_Frlg/scripts.pory"
CeladonCity_Text_BlewItAllAtSlots::
# 187 "data/maps/CeladonCity_Frlg/scripts.pory"
# 143 "data/maps/CeladonCity_Frlg/scripts.pory"
# 188 "data/maps/CeladonCity_Frlg/scripts.pory"
	.string "Moan…\n"
# 189 "data/maps/CeladonCity_Frlg/scripts.pory"
	.string "I blew it all at the slots!\p"
# 190 "data/maps/CeladonCity_Frlg/scripts.pory"
	.string "I knew I should have cashed in my\n"
# 191 "data/maps/CeladonCity_Frlg/scripts.pory"
	.string "COINS for prizes!$"
# 192 "data/maps/CeladonCity_Frlg/scripts.pory"

# 193 "data/maps/CeladonCity_Frlg/scripts.pory"
CeladonCity_Text_MyTrustedPalPoliwrath::
# 194 "data/maps/CeladonCity_Frlg/scripts.pory"
# 150 "data/maps/CeladonCity_Frlg/scripts.pory"
# 195 "data/maps/CeladonCity_Frlg/scripts.pory"
	.string "This is my trusted pal, POLIWRATH.\p"
# 196 "data/maps/CeladonCity_Frlg/scripts.pory"
	.string "It evolved from a POLIWHIRL when\n"
# 197 "data/maps/CeladonCity_Frlg/scripts.pory"
	.string "I used a WATER STONE.$"
# 198 "data/maps/CeladonCity_Frlg/scripts.pory"

# 199 "data/maps/CeladonCity_Frlg/scripts.pory"
CeladonCity_Text_Poliwrath::
# 200 "data/maps/CeladonCity_Frlg/scripts.pory"
# 156 "data/maps/CeladonCity_Frlg/scripts.pory"
# 201 "data/maps/CeladonCity_Frlg/scripts.pory"
	.string "POLIWRATH: Ribi ribit!$"
# 202 "data/maps/CeladonCity_Frlg/scripts.pory"

# 203 "data/maps/CeladonCity_Frlg/scripts.pory"
CeladonCity_Text_GetLostOrIllPunchYou::
# 204 "data/maps/CeladonCity_Frlg/scripts.pory"
# 160 "data/maps/CeladonCity_Frlg/scripts.pory"
# 205 "data/maps/CeladonCity_Frlg/scripts.pory"
	.string "What are you staring at?\n"
# 206 "data/maps/CeladonCity_Frlg/scripts.pory"
	.string "Get lost, or I'll punch you.$"
# 207 "data/maps/CeladonCity_Frlg/scripts.pory"

# 208 "data/maps/CeladonCity_Frlg/scripts.pory"
CeladonCity_Text_KeepOutOfTeamRocketsWay::
# 209 "data/maps/CeladonCity_Frlg/scripts.pory"
# 165 "data/maps/CeladonCity_Frlg/scripts.pory"
# 210 "data/maps/CeladonCity_Frlg/scripts.pory"
	.string "Keep out of TEAM ROCKET's way!$"
# 211 "data/maps/CeladonCity_Frlg/scripts.pory"

# 212 "data/maps/CeladonCity_Frlg/scripts.pory"
CeladonCity_Text_ExplainXAccuracyDireHit::
# 213 "data/maps/CeladonCity_Frlg/scripts.pory"
# 169 "data/maps/CeladonCity_Frlg/scripts.pory"
# 214 "data/maps/CeladonCity_Frlg/scripts.pory"
	.string "TRAINER TIPS\p"
# 215 "data/maps/CeladonCity_Frlg/scripts.pory"
	.string "X ACCURACY boosts the accuracy of\n"
# 216 "data/maps/CeladonCity_Frlg/scripts.pory"
	.string "techniques.\p"
# 217 "data/maps/CeladonCity_Frlg/scripts.pory"
	.string "DIRE HIT jacks up the likelihood\n"
# 218 "data/maps/CeladonCity_Frlg/scripts.pory"
	.string "of critical hits.\p"
# 219 "data/maps/CeladonCity_Frlg/scripts.pory"
	.string "Get your items at the CELADON\n"
# 220 "data/maps/CeladonCity_Frlg/scripts.pory"
	.string "DEPT. STORE!$"
# 221 "data/maps/CeladonCity_Frlg/scripts.pory"

# 222 "data/maps/CeladonCity_Frlg/scripts.pory"
CeladonCity_Text_CitySign::
# 223 "data/maps/CeladonCity_Frlg/scripts.pory"
# 179 "data/maps/CeladonCity_Frlg/scripts.pory"
# 224 "data/maps/CeladonCity_Frlg/scripts.pory"
	.string "CELADON CITY\n"
# 225 "data/maps/CeladonCity_Frlg/scripts.pory"
	.string "The City of Rainbow Dreams$"
# 226 "data/maps/CeladonCity_Frlg/scripts.pory"

# 227 "data/maps/CeladonCity_Frlg/scripts.pory"
CeladonCity_Text_GymSign::
# 228 "data/maps/CeladonCity_Frlg/scripts.pory"
# 184 "data/maps/CeladonCity_Frlg/scripts.pory"
# 229 "data/maps/CeladonCity_Frlg/scripts.pory"
	.string "CELADON CITY POKéMON GYM\n"
# 230 "data/maps/CeladonCity_Frlg/scripts.pory"
	.string "LEADER: ERIKA\l"
# 231 "data/maps/CeladonCity_Frlg/scripts.pory"
	.string "The Nature-Loving Princess!$"
# 232 "data/maps/CeladonCity_Frlg/scripts.pory"

# 233 "data/maps/CeladonCity_Frlg/scripts.pory"
CeladonCity_Text_MansionSign::
# 234 "data/maps/CeladonCity_Frlg/scripts.pory"
# 190 "data/maps/CeladonCity_Frlg/scripts.pory"
# 235 "data/maps/CeladonCity_Frlg/scripts.pory"
	.string "CELADON MANSION$"
# 236 "data/maps/CeladonCity_Frlg/scripts.pory"

# 237 "data/maps/CeladonCity_Frlg/scripts.pory"
CeladonCity_Text_DeptStoreSign::
# 238 "data/maps/CeladonCity_Frlg/scripts.pory"
# 194 "data/maps/CeladonCity_Frlg/scripts.pory"
# 239 "data/maps/CeladonCity_Frlg/scripts.pory"
	.string "Find what you need at the\n"
# 240 "data/maps/CeladonCity_Frlg/scripts.pory"
	.string "CELADON DEPT. STORE!$"
# 241 "data/maps/CeladonCity_Frlg/scripts.pory"

# 242 "data/maps/CeladonCity_Frlg/scripts.pory"
CeladonCity_Text_GuardSpecProtectsFromStatus::
# 243 "data/maps/CeladonCity_Frlg/scripts.pory"
# 199 "data/maps/CeladonCity_Frlg/scripts.pory"
# 244 "data/maps/CeladonCity_Frlg/scripts.pory"
	.string "TRAINER TIPS\p"
# 245 "data/maps/CeladonCity_Frlg/scripts.pory"
	.string "GUARD SPEC. protects POKéMON\n"
# 246 "data/maps/CeladonCity_Frlg/scripts.pory"
	.string "from status-reduction moves during\l"
# 247 "data/maps/CeladonCity_Frlg/scripts.pory"
	.string "battle.\p"
# 248 "data/maps/CeladonCity_Frlg/scripts.pory"
	.string "Get your items at the\n"
# 249 "data/maps/CeladonCity_Frlg/scripts.pory"
	.string "CELADON DEPT. STORE!$"
# 250 "data/maps/CeladonCity_Frlg/scripts.pory"

# 251 "data/maps/CeladonCity_Frlg/scripts.pory"
CeladonCity_Text_PrizeExchangeSign::
# 252 "data/maps/CeladonCity_Frlg/scripts.pory"
# 208 "data/maps/CeladonCity_Frlg/scripts.pory"
# 253 "data/maps/CeladonCity_Frlg/scripts.pory"
	.string "COINS exchanged for prizes!\n"
# 254 "data/maps/CeladonCity_Frlg/scripts.pory"
	.string "PRIZE EXCHANGE$"
# 255 "data/maps/CeladonCity_Frlg/scripts.pory"

# 256 "data/maps/CeladonCity_Frlg/scripts.pory"
CeladonCity_Text_GameCornerSign::
# 257 "data/maps/CeladonCity_Frlg/scripts.pory"
# 213 "data/maps/CeladonCity_Frlg/scripts.pory"
# 258 "data/maps/CeladonCity_Frlg/scripts.pory"
	.string "ROCKET GAME CORNER\n"
# 259 "data/maps/CeladonCity_Frlg/scripts.pory"
	.string "The playground for grown-ups!$"
# 260 "data/maps/CeladonCity_Frlg/scripts.pory"

# 261 "data/maps/CeladonCity_Frlg/scripts.pory"
CeladonCity_Text_ScaldedTongueOnTea::
# 262 "data/maps/CeladonCity_Frlg/scripts.pory"
# 218 "data/maps/CeladonCity_Frlg/scripts.pory"
# 263 "data/maps/CeladonCity_Frlg/scripts.pory"
	.string "Aaaagh, ow…\n"
# 264 "data/maps/CeladonCity_Frlg/scripts.pory"
	.string "I scalded my tongue!\p"
# 265 "data/maps/CeladonCity_Frlg/scripts.pory"
	.string "This nice old lady in the MANSION\n"
# 266 "data/maps/CeladonCity_Frlg/scripts.pory"
	.string "gave me some TEA.\p"
# 267 "data/maps/CeladonCity_Frlg/scripts.pory"
	.string "But it was boiling hot!\n"
# 268 "data/maps/CeladonCity_Frlg/scripts.pory"
	.string "Gotta cool it to drink it.$"
# 269 "data/maps/CeladonCity_Frlg/scripts.pory"

# 270 "data/maps/CeladonCity_Frlg/scripts.pory"
Text_SoftboiledTeach::
# 271 "data/maps/CeladonCity_Frlg/scripts.pory"
# 227 "data/maps/CeladonCity_Frlg/scripts.pory"
# 272 "data/maps/CeladonCity_Frlg/scripts.pory"
	.string "Hello, there!\p"
# 273 "data/maps/CeladonCity_Frlg/scripts.pory"
	.string "I've seen you about, but I never\n"
# 274 "data/maps/CeladonCity_Frlg/scripts.pory"
	.string "had a chance to chat.\p"
# 275 "data/maps/CeladonCity_Frlg/scripts.pory"
	.string "It must be good luck that brought\n"
# 276 "data/maps/CeladonCity_Frlg/scripts.pory"
	.string "us together finally.\p"
# 277 "data/maps/CeladonCity_Frlg/scripts.pory"
	.string "I'd like to celebrate by teaching\n"
# 278 "data/maps/CeladonCity_Frlg/scripts.pory"
	.string "you the move SOFTBOILED.$"
# 279 "data/maps/CeladonCity_Frlg/scripts.pory"

# 280 "data/maps/CeladonCity_Frlg/scripts.pory"
Text_SoftboiledDeclined::
# 281 "data/maps/CeladonCity_Frlg/scripts.pory"
# 237 "data/maps/CeladonCity_Frlg/scripts.pory"
# 282 "data/maps/CeladonCity_Frlg/scripts.pory"
	.string "I'll always be keeping an eye out\n"
# 283 "data/maps/CeladonCity_Frlg/scripts.pory"
	.string "for you.\p"
# 284 "data/maps/CeladonCity_Frlg/scripts.pory"
	.string "I hope we can chat again.$"
# 285 "data/maps/CeladonCity_Frlg/scripts.pory"

# 286 "data/maps/CeladonCity_Frlg/scripts.pory"
Text_SoftboiledWhichMon::
# 287 "data/maps/CeladonCity_Frlg/scripts.pory"
# 243 "data/maps/CeladonCity_Frlg/scripts.pory"
# 288 "data/maps/CeladonCity_Frlg/scripts.pory"
	.string "So, who's the POKéMON that gets\n"
# 289 "data/maps/CeladonCity_Frlg/scripts.pory"
	.string "the chance to learn SOFTBOILED?$"
# 290 "data/maps/CeladonCity_Frlg/scripts.pory"

# 291 "data/maps/CeladonCity_Frlg/scripts.pory"
Text_SoftboiledTaught::
# 292 "data/maps/CeladonCity_Frlg/scripts.pory"
# 248 "data/maps/CeladonCity_Frlg/scripts.pory"
# 293 "data/maps/CeladonCity_Frlg/scripts.pory"
	.string "I wish you the best of luck!$"
# 294 "data/maps/CeladonCity_Frlg/scripts.pory"

# 295 "data/maps/CeladonCity_Frlg/scripts.pory"
CeladonCity_Text_SomeoneStoleSilphScope::
# 296 "data/maps/CeladonCity_Frlg/scripts.pory"
# 252 "data/maps/CeladonCity_Frlg/scripts.pory"
# 297 "data/maps/CeladonCity_Frlg/scripts.pory"
	.string "Oh, what am I to do…\p"
# 298 "data/maps/CeladonCity_Frlg/scripts.pory"
	.string "Someone stole our SILPH SCOPE.\p"
# 299 "data/maps/CeladonCity_Frlg/scripts.pory"
	.string "The thief came running this way,\n"
# 300 "data/maps/CeladonCity_Frlg/scripts.pory"
	.string "I'm sure of it.\p"
# 301 "data/maps/CeladonCity_Frlg/scripts.pory"
	.string "But I lost sight of him!\n"
# 302 "data/maps/CeladonCity_Frlg/scripts.pory"
	.string "Where'd he go?$"
