# 1 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"

# 2 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
FiveIsland_WaterLabyrinth_Frlg_MapScripts::
# 3 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	.byte 0
# 4 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"

# 5 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"

# 6 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
FiveIsland_WaterLabyrinth_EventScript_EggGentleman::
# 7 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
# 4 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
# 8 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	lock
# 9 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
# 5 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
# 10 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	faceplayer
# 11 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
# 6 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
# 12 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	goto_if_set FLAG_GOT_TOGEPI_EGG, FiveIsland_WaterLabyrinth_EventScript_EggGentleman_2
# 13 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
FiveIsland_WaterLabyrinth_EventScript_EggGentleman_1:
# 14 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
# 9 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
# 15 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	goto_if_set FLAG_NO_ROOM_FOR_TOGEPI_EGG, FiveIsland_WaterLabyrinth_EventScript_EggGentleman_5
# 16 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
FiveIsland_WaterLabyrinth_EventScript_EggGentleman_4:
# 17 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
# 12 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
# 18 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	msgbox FiveIsland_WaterLabyrinth_Text_LetMeTakeLookAtMons
# 19 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
# 13 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
# 20 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	specialvar VAR_RESULT, GetLeadMonFriendship
# 21 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
# 14 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
# 22 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	compare VAR_RESULT, 6
# 23 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	goto_if_eq FiveIsland_WaterLabyrinth_EventScript_EggGentleman_8
# 24 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
FiveIsland_WaterLabyrinth_EventScript_EggGentleman_7:
# 25 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
# 17 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
# 26 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	msgbox FiveIsland_WaterLabyrinth_Text_HmmISeeIsee
# 27 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
# 18 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
# 28 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	release
# 29 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	end
# 30 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"

# 31 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
FiveIsland_WaterLabyrinth_EventScript_EggGentleman_2:
# 32 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
# 7 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
# 33 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	goto FiveIsland_WaterLabyrinth_EventScript_PostEggComment
# 34 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	goto FiveIsland_WaterLabyrinth_EventScript_EggGentleman_1
# 35 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"

# 36 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
FiveIsland_WaterLabyrinth_EventScript_EggGentleman_5:
# 37 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
# 10 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
# 38 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	goto FiveIsland_WaterLabyrinth_EventScript_ReturnForEgg
# 39 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	goto FiveIsland_WaterLabyrinth_EventScript_EggGentleman_4
# 40 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"

# 41 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
FiveIsland_WaterLabyrinth_EventScript_EggGentleman_8:
# 42 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
# 15 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
# 43 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	goto FiveIsland_WaterLabyrinth_EventScript_LeadMonMaxFriendship
# 44 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	goto FiveIsland_WaterLabyrinth_EventScript_EggGentleman_7
# 45 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"

# 46 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"

# 47 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
FiveIsland_WaterLabyrinth_EventScript_MonDaisyComment::
# 48 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
# 23 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
# 49 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	famechecker FAMECHECKER_DAISY, 2
# 50 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
# 24 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
# 51 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	msgbox FiveIsland_WaterLabyrinth_Text_CuteMonRemindsMeOfDaisy
# 52 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
# 25 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
# 53 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	release
# 54 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	end
# 55 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"

# 56 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"

# 57 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
FiveIsland_WaterLabyrinth_EventScript_LeadMonMaxFriendship::
# 58 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
# 30 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
# 59 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	msgbox FiveIsland_WaterLabyrinth_Text_TreatMonRightHaveThis
# 60 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
# 31 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
# 61 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	goto FiveIsland_WaterLabyrinth_EventScript_TryGiveEgg
# 62 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	end
# 63 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"

# 64 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"

# 65 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
FiveIsland_WaterLabyrinth_EventScript_TryGiveEgg::
# 66 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
# 36 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
# 67 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	getpartysize
# 68 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
# 37 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
# 69 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	compare VAR_RESULT, PARTY_SIZE
# 70 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	goto_if_eq FiveIsland_WaterLabyrinth_EventScript_TryGiveEgg_2
# 71 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
FiveIsland_WaterLabyrinth_EventScript_TryGiveEgg_1:
# 72 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
# 40 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
# 73 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	setflag FLAG_GOT_TOGEPI_EGG
# 74 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
# 41 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
# 75 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	giveegg SPECIES_TOGEPI
# 76 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
# 42 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
# 77 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 78 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
# 43 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
# 79 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 80 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
# 44 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
# 81 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	message FiveIsland_WaterLabyrinth_Text_ReceivedEggFromMan
# 82 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
# 45 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
# 83 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	waitfanfare
# 84 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
# 46 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
# 85 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	waitmessage
# 86 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
# 47 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
# 87 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	call EventScript_RestorePrevTextColor
# 88 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
# 48 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
# 89 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	goto FiveIsland_WaterLabyrinth_EventScript_PostEggComment
# 90 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	end
# 91 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"

# 92 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
FiveIsland_WaterLabyrinth_EventScript_TryGiveEgg_2:
# 93 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
# 38 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
# 94 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	goto FiveIsland_WaterLabyrinth_EventScript_NoRoomForEgg
# 95 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	goto FiveIsland_WaterLabyrinth_EventScript_TryGiveEgg_1
# 96 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"

# 97 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"

# 98 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
FiveIsland_WaterLabyrinth_EventScript_PostEggComment::
# 99 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
# 53 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
# 100 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_TOGEPI
# 101 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
# 54 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
# 102 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	setvar VAR_0x8004, SPECIES_TOGEPI
# 103 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
# 55 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
# 104 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	specialvar VAR_RESULT, PlayerPartyContainsSpeciesWithPlayerID
# 105 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
# 56 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
# 106 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	compare VAR_RESULT, TRUE
# 107 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	goto_if_eq FiveIsland_WaterLabyrinth_EventScript_PostEggComment_2
# 108 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
FiveIsland_WaterLabyrinth_EventScript_PostEggComment_1:
# 109 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
# 59 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
# 110 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_TOGETIC
# 111 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
# 60 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
# 112 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	setvar VAR_0x8004, SPECIES_TOGETIC
# 113 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
# 61 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
# 114 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	specialvar VAR_RESULT, PlayerPartyContainsSpeciesWithPlayerID
# 115 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
# 62 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
# 116 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	compare VAR_RESULT, TRUE
# 117 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	goto_if_eq FiveIsland_WaterLabyrinth_EventScript_PostEggComment_5
# 118 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
FiveIsland_WaterLabyrinth_EventScript_PostEggComment_4:
# 119 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
# 65 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
# 120 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	msgbox FiveIsland_WaterLabyrinth_Text_GladIMetSomeoneLikeYou
# 121 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
# 66 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
# 122 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	release
# 123 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	end
# 124 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"

# 125 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
FiveIsland_WaterLabyrinth_EventScript_PostEggComment_2:
# 126 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
# 57 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
# 127 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	goto FiveIsland_WaterLabyrinth_EventScript_MonDaisyComment
# 128 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	goto FiveIsland_WaterLabyrinth_EventScript_PostEggComment_1
# 129 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"

# 130 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
FiveIsland_WaterLabyrinth_EventScript_PostEggComment_5:
# 131 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
# 63 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
# 132 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	goto FiveIsland_WaterLabyrinth_EventScript_MonDaisyComment
# 133 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	goto FiveIsland_WaterLabyrinth_EventScript_PostEggComment_4
# 134 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"

# 135 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"

# 136 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
FiveIsland_WaterLabyrinth_EventScript_NoRoomForEgg::
# 137 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
# 71 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
# 138 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	setflag FLAG_NO_ROOM_FOR_TOGEPI_EGG
# 139 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
# 72 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
# 140 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	msgbox FiveIsland_WaterLabyrinth_Text_DontHaveSpaceInYourParty
# 141 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
# 73 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
# 142 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	release
# 143 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	end
# 144 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"

# 145 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"

# 146 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
FiveIsland_WaterLabyrinth_EventScript_ReturnForEgg::
# 147 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
# 78 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
# 148 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	goto FiveIsland_WaterLabyrinth_EventScript_TryGiveEgg
# 149 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	end
# 150 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"

# 151 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"

# 152 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
FiveIsland_WaterLabyrinth_Text_LetMeTakeLookAtMons::
# 153 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
# 82 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
# 154 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	.string "You travel all over the place,\n"
# 155 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	.string "don't you?\p"
# 156 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	.string "You're not driving your POKéMON\n"
# 157 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	.string "too harshly, are you?\p"
# 158 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	.string "Let me take a look.\n"
# 159 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	.string "… … …   … … …$"
# 160 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"

# 161 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
FiveIsland_WaterLabyrinth_Text_HmmISeeIsee::
# 162 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
# 91 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
# 163 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	.string "Ah, hmm…\n"
# 164 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	.string "I see, I see…$"
# 165 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"

# 166 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
FiveIsland_WaterLabyrinth_Text_TreatMonRightHaveThis::
# 167 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
# 96 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
# 168 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	.string "Oh, impressive.\n"
# 169 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	.string "You treat your POKéMON right.\p"
# 170 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	.string "I think you can be entrusted with\n"
# 171 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	.string "this.\p"
# 172 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	.string "Please, I'd like you to have this.$"
# 173 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"

# 174 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
FiveIsland_WaterLabyrinth_Text_ReceivedEggFromMan::
# 175 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
# 104 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
# 176 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	.string "{PLAYER} received an EGG\n"
# 177 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	.string "from the man!$"
# 178 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"

# 179 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
FiveIsland_WaterLabyrinth_Text_DontHaveSpaceInYourParty::
# 180 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
# 109 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
# 181 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	.string "…Unfortunately, you don't have\n"
# 182 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	.string "space for this in your party.\p"
# 183 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	.string "You'd better come back for it\n"
# 184 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	.string "another time.$"
# 185 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"

# 186 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
FiveIsland_WaterLabyrinth_Text_YouveComeBackForTheEgg::
# 187 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
# 116 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
# 188 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	.string "やあ\n"
# 189 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	.string "タマゴを　もらいに\l"
# 190 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	.string "きて　くれたんだね$"
# 191 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"

# 192 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
FiveIsland_WaterLabyrinth_Text_GladIMetSomeoneLikeYou::
# 193 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
# 122 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
# 194 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	.string "I received that EGG while I was\n"
# 195 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	.string "traveling.\p"
# 196 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	.string "I'm glad I met someone like you.$"
# 197 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"

# 198 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
FiveIsland_WaterLabyrinth_Text_CuteMonRemindsMeOfDaisy::
# 199 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
# 128 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
# 200 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	.string "Oh, hello.\n"
# 201 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	.string "That's a cute {STR_VAR_2}.\p"
# 202 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	.string "Seeing it reminds me of a sweet \n"
# 203 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	.string "little girl I met while traveling.\p"
# 204 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	.string "She was gently grooming POKéMON…\n"
# 205 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	.string "She was a little angel.\p"
# 206 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	.string "That little girl's name…\n"
# 207 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	.string "I think it was DAISY.$"
# 208 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"

# 209 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
FiveIsland_WaterLabyrinth_Text_AlizeIntro::
# 210 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
# 139 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
# 211 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	.string "This is an excellent environment\n"
# 212 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	.string "for raising POKéMON.$"
# 213 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"

# 214 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
FiveIsland_WaterLabyrinth_Text_AlizeDefeat::
# 215 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
# 144 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
# 216 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	.string "Your POKéMON are growing up\n"
# 217 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	.string "admirably well!$"
# 218 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"

# 219 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
FiveIsland_WaterLabyrinth_Text_AlizePostBattle::
# 220 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
# 149 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
# 221 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	.string "You know, I think you have the\n"
# 222 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	.string "talent to be a good BREEDER.$"
