# 1 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"

# 2 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
Route12_FishingHouse_Frlg_MapScripts::
# 3 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	.byte 0
# 4 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"

# 5 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"

# 6 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
Route12_FishingHouse_EventScript_FishingGuruBrother::
# 7 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
# 4 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
# 8 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	lock
# 9 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
# 5 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
# 10 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	faceplayer
# 11 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
# 6 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
# 12 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	goto_if_set FLAG_GOT_SUPER_ROD, Route12_FishingHouse_EventScript_FishingGuruBrother_2
# 13 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
Route12_FishingHouse_EventScript_FishingGuruBrother_1:
# 14 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
# 9 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
# 15 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	msgbox Route12_FishingHouse_Text_DoYouLikeToFish, MSGBOX_YESNO
# 16 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
# 10 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
# 17 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	compare VAR_RESULT, YES
# 18 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	goto_if_eq Route12_FishingHouse_EventScript_FishingGuruBrother_5
# 19 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
Route12_FishingHouse_EventScript_FishingGuruBrother_4:
# 20 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
# 13 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
# 21 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	msgbox Route12_FishingHouse_Text_OhThatsDisappointing
# 22 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
# 14 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
# 23 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	release
# 24 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	end
# 25 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"

# 26 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
Route12_FishingHouse_EventScript_FishingGuruBrother_2:
# 27 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
# 7 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
# 28 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	goto Route12_FishingHouse_EventScript_CheckMagikarpRecord
# 29 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	goto Route12_FishingHouse_EventScript_FishingGuruBrother_1
# 30 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"

# 31 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
Route12_FishingHouse_EventScript_FishingGuruBrother_5:
# 32 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
# 11 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
# 33 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	goto Route12_FishingHouse_EventScript_GiveSuperRod
# 34 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	goto Route12_FishingHouse_EventScript_FishingGuruBrother_4
# 35 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"

# 36 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"

# 37 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
Route12_FishingHouse_EventScript_GiveSuperRod::
# 38 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
# 19 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
# 39 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	checkitemspace ITEM_SUPER_ROD
# 40 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
# 20 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
# 41 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	compare VAR_RESULT, FALSE
# 42 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	goto_if_eq Route12_FishingHouse_EventScript_GiveSuperRod_2
# 43 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
Route12_FishingHouse_EventScript_GiveSuperRod_1:
# 44 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
# 23 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
# 45 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	additem ITEM_SUPER_ROD
# 46 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
# 24 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
# 47 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	msgbox Route12_FishingHouse_Text_TakeThisAndFish
# 48 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
# 25 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
# 49 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	msgreceiveditem Route12_FishingHouse_Text_ReceivedSuperRod, ITEM_SUPER_ROD
# 50 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
# 26 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
# 51 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	setflag FLAG_GOT_SUPER_ROD
# 52 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
# 27 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
# 53 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	msgbox Route12_FishingHouse_Text_IfYouCatchBigMagikarpShowMe
# 54 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
# 28 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
# 55 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	release
# 56 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	end
# 57 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"

# 58 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
Route12_FishingHouse_EventScript_GiveSuperRod_2:
# 59 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
# 21 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
# 60 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	goto Route12_FishingHouse_EventScript_NoRoomForSuperRod
# 61 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	goto Route12_FishingHouse_EventScript_GiveSuperRod_1
# 62 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"

# 63 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"

# 64 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
Route12_FishingHouse_EventScript_NoRoomForSuperRod::
# 65 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
# 33 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
# 66 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	msgbox Route12_FishingHouse_Text_NoRoomForGift
# 67 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
# 34 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
# 68 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	release
# 69 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	end
# 70 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"

# 71 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"

# 72 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
Route12_FishingHouse_EventScript_CheckMagikarpRecord::
# 73 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
# 39 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
# 74 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	setvar VAR_0x8004, SPECIES_MAGIKARP
# 75 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
# 40 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
# 76 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	specialvar VAR_RESULT, DoesPlayerPartyContainSpecies
# 77 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
# 41 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
# 78 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	compare VAR_RESULT, FALSE
# 79 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	goto_if_eq Route12_FishingHouse_EventScript_CheckMagikarpRecord_2
# 80 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
Route12_FishingHouse_EventScript_CheckMagikarpRecord_1:
# 81 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
# 44 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
# 82 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	special GetMagikarpSizeRecordInfo
# 83 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
# 45 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
# 84 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	msgbox Route12_FishingHouse_Text_OhMagikarpAllowMeToSee
# 85 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
# 46 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
# 86 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	special ChoosePartyMon
# 87 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
# 47 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
# 88 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	waitstate
# 89 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
# 48 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
# 90 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	copyvar VAR_RESULT, VAR_0x8004
# 91 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
# 49 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
# 92 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	compare VAR_RESULT, PARTY_SIZE
# 93 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	goto_if_ge Route12_FishingHouse_EventScript_CheckMagikarpRecord_5
# 94 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
Route12_FishingHouse_EventScript_CheckMagikarpRecord_4:
# 95 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
# 52 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
# 96 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	special CompareMagikarpSize
# 97 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
# 53 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
# 98 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	compare VAR_RESULT, 1
# 99 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	goto_if_eq Route12_FishingHouse_EventScript_CheckMagikarpRecord_8
# 100 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
Route12_FishingHouse_EventScript_CheckMagikarpRecord_7:
# 101 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
# 56 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
# 102 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	compare VAR_RESULT, 2
# 103 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	goto_if_eq Route12_FishingHouse_EventScript_CheckMagikarpRecord_11
# 104 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
Route12_FishingHouse_EventScript_CheckMagikarpRecord_10:
# 105 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
# 59 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
# 106 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	compare VAR_RESULT, 3
# 107 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	goto_if_eq Route12_FishingHouse_EventScript_CheckMagikarpRecord_14
# 108 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
Route12_FishingHouse_EventScript_CheckMagikarpRecord_13:
# 109 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
# 62 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
# 110 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	compare VAR_RESULT, 4
# 111 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	goto_if_eq Route12_FishingHouse_EventScript_CheckMagikarpRecord_17
# 112 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
Route12_FishingHouse_EventScript_CheckMagikarpRecord_16:
# 113 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
# 65 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
# 114 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	release
# 115 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	end
# 116 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"

# 117 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
Route12_FishingHouse_EventScript_CheckMagikarpRecord_2:
# 118 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
# 42 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
# 119 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	goto Route12_FishingHouse_EventScript_NoMagikarpInParty
# 120 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	goto Route12_FishingHouse_EventScript_CheckMagikarpRecord_1
# 121 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"

# 122 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
Route12_FishingHouse_EventScript_CheckMagikarpRecord_5:
# 123 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
# 50 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
# 124 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	goto Route12_FishingHouse_EventScript_CancelShowMon
# 125 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	goto Route12_FishingHouse_EventScript_CheckMagikarpRecord_4
# 126 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"

# 127 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
Route12_FishingHouse_EventScript_CheckMagikarpRecord_8:
# 128 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
# 54 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
# 129 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	goto Route12_FishingHouse_EventScript_NotMagikarp
# 130 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	goto Route12_FishingHouse_EventScript_CheckMagikarpRecord_7
# 131 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"

# 132 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
Route12_FishingHouse_EventScript_CheckMagikarpRecord_11:
# 133 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
# 57 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
# 134 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	goto Route12_FishingHouse_EventScript_NotRecordMagikarp
# 135 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	goto Route12_FishingHouse_EventScript_CheckMagikarpRecord_10
# 136 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"

# 137 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
Route12_FishingHouse_EventScript_CheckMagikarpRecord_14:
# 138 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
# 60 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
# 139 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	goto Route12_FishingHouse_EventScript_NewRecordMagikarp
# 140 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	goto Route12_FishingHouse_EventScript_CheckMagikarpRecord_13
# 141 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"

# 142 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
Route12_FishingHouse_EventScript_CheckMagikarpRecord_17:
# 143 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
# 63 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
# 144 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	goto Route12_FishingHouse_EventScript_TieRecordMagikarp
# 145 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	goto Route12_FishingHouse_EventScript_CheckMagikarpRecord_16
# 146 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"

# 147 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"

# 148 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
Route12_FishingHouse_EventScript_NoMagikarpInParty::
# 149 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
# 70 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
# 150 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	msgbox Route12_FishingHouse_Text_TryFishingBringMeMagikarp
# 151 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
# 71 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
# 152 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	release
# 153 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	end
# 154 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"

# 155 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"

# 156 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
Route12_FishingHouse_EventScript_CancelShowMon::
# 157 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
# 76 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
# 158 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	release
# 159 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	end
# 160 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"

# 161 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"

# 162 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
Route12_FishingHouse_EventScript_NotMagikarp::
# 163 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
# 81 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
# 164 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	msgbox Route12_FishingHouse_Text_DoesntLookLikeMagikarp
# 165 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
# 82 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
# 166 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	release
# 167 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	end
# 168 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"

# 169 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"

# 170 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
Route12_FishingHouse_EventScript_NotRecordMagikarp::
# 171 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
# 87 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
# 172 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	goto_if_unset FLAG_GOT_RECORD_SETTING_MAGIKARP, Route12_FishingHouse_EventScript_NotRecordMagikarp_2
# 173 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
Route12_FishingHouse_EventScript_NotRecordMagikarp_1:
# 174 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
# 90 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
# 175 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	msgbox Route12_FishingHouse_Text_HmmXInchesDoesntMeasureUp
# 176 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
# 91 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
# 177 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	release
# 178 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	end
# 179 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"

# 180 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
Route12_FishingHouse_EventScript_NotRecordMagikarp_2:
# 181 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
# 88 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
# 182 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	goto Route12_FishingHouse_EventScript_NewRecordMagikarp
# 183 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	goto Route12_FishingHouse_EventScript_NotRecordMagikarp_1
# 184 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"

# 185 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"

# 186 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
Route12_FishingHouse_EventScript_TieRecordMagikarp::
# 187 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
# 96 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
# 188 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	goto_if_unset FLAG_GOT_RECORD_SETTING_MAGIKARP, Route12_FishingHouse_EventScript_TieRecordMagikarp_2
# 189 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
Route12_FishingHouse_EventScript_TieRecordMagikarp_1:
# 190 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
# 99 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
# 191 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	msgbox Route12_FishingHouse_Text_HuhXInchesSameSizeAsLast
# 192 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
# 100 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
# 193 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	release
# 194 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	end
# 195 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"

# 196 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
Route12_FishingHouse_EventScript_TieRecordMagikarp_2:
# 197 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
# 97 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
# 198 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	goto Route12_FishingHouse_EventScript_NewRecordMagikarp
# 199 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	goto Route12_FishingHouse_EventScript_TieRecordMagikarp_1
# 200 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"

# 201 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"

# 202 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
Route12_FishingHouse_EventScript_NewRecordMagikarp::
# 203 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
# 105 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
# 204 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	setflag FLAG_GOT_RECORD_SETTING_MAGIKARP
# 205 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
# 106 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
# 206 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	msgbox Route12_FishingHouse_Text_WhoaXInchesTakeThis
# 207 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
# 107 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
# 208 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	giveitem ITEM_NET_BALL
# 209 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
# 108 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
# 210 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	compare VAR_RESULT, FALSE
# 211 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	goto_if_eq Route12_FishingHouse_EventScript_NewRecordMagikarp_2
# 212 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
Route12_FishingHouse_EventScript_NewRecordMagikarp_1:
# 213 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
# 111 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
# 214 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	msgbox Route12_FishingHouse_Text_LookForwardToGreaterRecords
# 215 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
# 112 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
# 216 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	release
# 217 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	end
# 218 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"

# 219 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
Route12_FishingHouse_EventScript_NewRecordMagikarp_2:
# 220 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
# 109 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
# 221 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	goto Route12_FishingHouse_EventScript_NoRoomForNetBall
# 222 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	goto Route12_FishingHouse_EventScript_NewRecordMagikarp_1
# 223 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"

# 224 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"

# 225 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
Route12_FishingHouse_EventScript_NoRoomForNetBall::
# 226 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
# 117 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
# 227 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	msgbox Route12_FishingHouse_Text_NoRoomForGift
# 228 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
# 118 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
# 229 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	release
# 230 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	end
# 231 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"

# 232 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"

# 233 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
Route12_FishingHouse_EventScript_MagikarpRecordSign::
# 234 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
# 123 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
# 235 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	lockall
# 236 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
# 124 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
# 237 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	goto_if_set FLAG_GOT_RECORD_SETTING_MAGIKARP, Route12_FishingHouse_EventScript_MagikarpRecordSign_2
# 238 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
Route12_FishingHouse_EventScript_MagikarpRecordSign_1:
# 239 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
# 127 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
# 240 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	msgbox Route12_FishingHouse_Text_BlankChartOfSomeSort
# 241 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
# 128 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
# 242 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	releaseall
# 243 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	end
# 244 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"

# 245 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
Route12_FishingHouse_EventScript_MagikarpRecordSign_2:
# 246 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
# 125 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
# 247 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	goto Route12_FishingHouse_EventScript_MagikarpRecordSignRecordSet
# 248 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	goto Route12_FishingHouse_EventScript_MagikarpRecordSign_1
# 249 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"

# 250 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"

# 251 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
Route12_FishingHouse_EventScript_MagikarpRecordSignRecordSet::
# 252 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
# 133 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
# 253 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	special GetMagikarpSizeRecordInfo
# 254 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
# 134 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
# 255 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	msgbox Route12_FishingHouse_Text_MostGiganticMagikarpXInches
# 256 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
# 135 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
# 257 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	releaseall
# 258 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	end
# 259 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"

# 260 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"

# 261 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
Route12_FishingHouse_Text_DoYouLikeToFish::
# 262 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
# 139 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
# 263 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	.string "I'm the FISHING GURU's younger\n"
# 264 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	.string "brother.\p"
# 265 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	.string "I simply looove fishing!\n"
# 266 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	.string "I can't bear to go without.\p"
# 267 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	.string "Tell me, do you like to fish?$"
# 268 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"

# 269 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
Route12_FishingHouse_Text_TakeThisAndFish::
# 270 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
# 147 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
# 271 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	.string "Grand! I like your style.\n"
# 272 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	.string "I think we can be friends.\p"
# 273 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	.string "Take this and fish, young friend!$"
# 274 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"

# 275 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
Route12_FishingHouse_Text_ReceivedSuperRod::
# 276 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
# 153 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
# 277 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	.string "{PLAYER} received a SUPER ROD from\n"
# 278 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	.string "the FISHING GURU's brother.$"
# 279 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"

# 280 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
Route12_FishingHouse_Text_IfYouCatchBigMagikarpShowMe::
# 281 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
# 158 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
# 282 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	.string "Fishing is a way of life!\n"
# 283 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	.string "It is like the finest poetry.\p"
# 284 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	.string "From the seas to rivers, go out\n"
# 285 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	.string "and land the big one, my friend.\p"
# 286 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	.string "Now, I have a request.\p"
# 287 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	.string "If you catch a big MAGIKARP \n"
# 288 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	.string "with that ROD, I want to see it.\p"
# 289 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	.string "As much as I love to fish, I also\n"
# 290 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	.string "love seeing gigantic MAGIKARP.$"
# 291 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"

# 292 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
Route12_FishingHouse_Text_OhThatsDisappointing::
# 293 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
# 170 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
# 294 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	.string "Oh…\n"
# 295 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	.string "That's so disappointing…$"
# 296 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"

# 297 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
Route12_FishingHouse_Text_TryFishingBringMeMagikarp::
# 298 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
# 175 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
# 299 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	.string "Hello there, {PLAYER}!\n"
# 300 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	.string "Have you been fishing?\p"
# 301 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	.string "Try fishing with the SUPER ROD in\n"
# 302 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	.string "any body of water.\p"
# 303 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	.string "You'll find different POKéMON in\n"
# 304 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	.string "different places.\p"
# 305 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	.string "Oh, and don't forget to bring me\n"
# 306 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	.string "gigantic MAGIKARP.$"
# 307 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"

# 308 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
Route12_FishingHouse_Text_OhMagikarpAllowMeToSee::
# 309 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
# 186 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
# 310 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	.string "Oh? {PLAYER}?\n"
# 311 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	.string "Why, if it isn't a MAGIKARP!\p"
# 312 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	.string "Allow me to see it, quick!$"
# 313 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"

# 314 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
Route12_FishingHouse_Text_WhoaXInchesTakeThis::
# 315 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
# 192 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
# 316 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	.string "… … …Whoa!\n"
# 317 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	.string "{STR_VAR_2} inches!\p"
# 318 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	.string "You have a rare appreciation for\n"
# 319 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	.string "the fine, poetic aspects of fishing!\p"
# 320 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	.string "You must take this.\n"
# 321 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	.string "I insist!$"
# 322 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"

# 323 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
Route12_FishingHouse_Text_LookForwardToGreaterRecords::
# 324 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
# 201 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
# 325 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	.string "I'll look forward to seeing greater\n"
# 326 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	.string "records from you!$"
# 327 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"

# 328 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
Route12_FishingHouse_Text_HuhXInchesSameSizeAsLast::
# 329 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
# 206 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
# 330 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	.string "Huh?\n"
# 331 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	.string "{STR_VAR_2} inches?\p"
# 332 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	.string "This is the same size as the one\n"
# 333 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	.string "I saw before.$"
# 334 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"

# 335 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
Route12_FishingHouse_Text_HmmXInchesDoesntMeasureUp::
# 336 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
# 213 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
# 337 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	.string "Hmm…\n"
# 338 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	.string "This one is {STR_VAR_2} inches long.\p"
# 339 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	.string "It doesn't measure up to the\n"
# 340 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	.string "{STR_VAR_3}-inch one you brought before.$"
# 341 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"

# 342 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
Route12_FishingHouse_Text_DoesntLookLikeMagikarp::
# 343 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
# 220 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
# 344 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	.string "Uh… That doesn't look much like\n"
# 345 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	.string "a MAGIKARP.$"
# 346 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"

# 347 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
Route12_FishingHouse_Text_NoRoomForGift::
# 348 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
# 225 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
# 349 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	.string "Oh, no!\p"
# 350 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	.string "I had a gift for you, but you have\n"
# 351 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	.string "no room for it.$"
# 352 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"

# 353 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
Route12_FishingHouse_Text_MostGiganticMagikarpXInches::
# 354 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
# 231 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
# 355 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	.string "The most gigantic MAGIKARP\n"
# 356 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	.string "I have ever witnessed…\p"
# 357 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	.string "{STR_VAR_3} inches!$"
# 358 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"

# 359 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
Route12_FishingHouse_Text_BlankChartOfSomeSort::
# 360 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
# 237 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
# 361 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	.string "It's a blank chart of some sort.\p"
# 362 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	.string "It has spaces for writing in\n"
# 363 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	.string "records of some kind.$"
