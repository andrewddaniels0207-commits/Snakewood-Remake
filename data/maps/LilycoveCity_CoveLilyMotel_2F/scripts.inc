# 1 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"

# 2 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
LilycoveCity_CoveLilyMotel_2F_MapScripts::
# 3 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.byte 0
# 4 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"

# 5 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"

# 6 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
LilycoveCity_CoveLilyMotel_2F_EventScript_GameDesigner::
# 7 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
# 4 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
# 8 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	lock
# 9 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
# 5 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
# 10 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	faceplayer
# 11 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
# 6 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
# 12 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	goto_if_unset FLAG_TEMP_2, LilycoveCity_CoveLilyMotel_2F_EventScript_GameDesigner_2
# 13 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
LilycoveCity_CoveLilyMotel_2F_EventScript_GameDesigner_1:
# 14 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
# 9 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
# 15 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	goto_if_set FLAG_TEMP_2, LilycoveCity_CoveLilyMotel_2F_EventScript_GameDesigner_5
# 16 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
LilycoveCity_CoveLilyMotel_2F_EventScript_GameDesigner_4:
# 17 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
# 12 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
# 18 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	specialvar VAR_RESULT, HasAllHoennMons
# 19 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
# 13 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
# 20 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	compare VAR_RESULT, TRUE
# 21 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	goto_if_eq LilycoveCity_CoveLilyMotel_2F_EventScript_GameDesigner_8
# 22 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
LilycoveCity_CoveLilyMotel_2F_EventScript_GameDesigner_7:
# 23 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
# 16 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
# 24 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	release
# 25 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	end
# 26 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"

# 27 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
LilycoveCity_CoveLilyMotel_2F_EventScript_GameDesigner_2:
# 28 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
# 7 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
# 29 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	call LilycoveCity_CoveLilyMotel_2F_EventScript_ShowMeCompletedDex
# 30 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	goto LilycoveCity_CoveLilyMotel_2F_EventScript_GameDesigner_1
# 31 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"

# 32 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
LilycoveCity_CoveLilyMotel_2F_EventScript_GameDesigner_5:
# 33 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
# 10 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
# 34 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	call LilycoveCity_CoveLilyMotel_2F_EventScript_ShowDiploma
# 35 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	goto LilycoveCity_CoveLilyMotel_2F_EventScript_GameDesigner_4
# 36 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"

# 37 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
LilycoveCity_CoveLilyMotel_2F_EventScript_GameDesigner_8:
# 38 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
# 14 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
# 39 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	goto LilycoveCity_CoveLilyMotel_2F_EventScript_AllHoennMonsFanfare
# 40 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	goto LilycoveCity_CoveLilyMotel_2F_EventScript_GameDesigner_7
# 41 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"

# 42 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"

# 43 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
LilycoveCity_CoveLilyMotel_2F_EventScript_ShowMeCompletedDex::
# 44 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
# 21 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
# 45 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	msgbox LilycoveCity_CoveLilyMotel_2F_Text_ShowMeCompletedDex, MSGBOX_DEFAULT
# 46 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	return
# 47 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"

# 48 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"

# 49 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
LilycoveCity_CoveLilyMotel_2F_EventScript_AllHoennMonsFanfare::
# 50 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
# 26 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
# 51 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	setflag FLAG_TEMP_2
# 52 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
# 27 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
# 53 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 54 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
# 28 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
# 55 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	waitfanfare
# 56 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
# 29 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
# 57 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	goto LilycoveCity_CoveLilyMotel_2F_EventScript_ShowDiploma
# 58 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	end
# 59 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"

# 60 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"

# 61 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
LilycoveCity_CoveLilyMotel_2F_EventScript_ShowDiploma::
# 62 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
# 34 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
# 63 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	message LilycoveCity_CoveLilyMotel_2F_Text_FilledPokedexGiveYouThis
# 64 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
# 35 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
# 65 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	waitmessage
# 66 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
# 36 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
# 67 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 68 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
# 37 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
# 69 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	special Special_ShowDiploma
# 70 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
# 38 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
# 71 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	waitstate
# 72 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
# 39 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
# 73 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	release
# 74 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	end
# 75 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"

# 76 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"

# 77 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
LilycoveCity_CoveLilyMotel_2F_EventScript_Programmer::
# 78 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
# 44 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
# 79 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	msgbox LilycoveCity_CoveLilyMotel_2F_Text_ImTheProgrammer, MSGBOX_NPC
# 80 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	end
# 81 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"

# 82 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"

# 83 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
LilycoveCity_CoveLilyMotel_2F_EventScript_GraphicArtist::
# 84 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
# 49 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
# 85 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	msgbox LilycoveCity_CoveLilyMotel_2F_Text_ImTheGraphicArtist, MSGBOX_NPC
# 86 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	end
# 87 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"

# 88 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"

# 89 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
LilycoveCity_CoveLilyMotel_2F_EventScript_FatMan::
# 90 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
# 54 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
# 91 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	msgbox LilycoveCity_CoveLilyMotel_2F_Text_GirlsAreCute, MSGBOX_NPC
# 92 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	end
# 93 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"

# 94 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"

# 95 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
LilycoveCity_CoveLilyMotel_2F_EventScript_Woman::
# 96 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
# 59 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
# 97 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	msgbox LilycoveCity_CoveLilyMotel_2F_Text_SeaBreezeTicklesHeart, MSGBOX_NPC
# 98 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	end
# 99 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"

# 100 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"

# 101 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
LilycoveCity_CoveLilyMotel_2F_EventScript_GameBoyKid::
# 102 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
# 64 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
# 103 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	msgbox LilycoveCity_CoveLilyMotel_2F_Text_NeverLeaveWithoutGameBoy, MSGBOX_NPC
# 104 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	end
# 105 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"

# 106 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"

# 107 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
LilycoveCity_CoveLilyMotel_2F_EventScript_Scott::
# 108 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
# 69 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
# 109 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	lock
# 110 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
# 70 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
# 111 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	faceplayer
# 112 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
# 71 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
# 113 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	goto_if_set FLAG_MET_SCOTT_IN_LILYCOVE, LilycoveCity_CoveLilyMotel_2F_EventScript_Scott_2
# 114 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
LilycoveCity_CoveLilyMotel_2F_EventScript_Scott_1:
# 115 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
# 74 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
# 116 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	msgbox LilycoveCity_CoveLilyMotel_2F_Text_SnoozingPreferBattles, MSGBOX_DEFAULT
# 117 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
# 75 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
# 118 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	addvar VAR_SCOTT_STATE, 1
# 119 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
# 76 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
# 120 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	setflag FLAG_MET_SCOTT_IN_LILYCOVE
# 121 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
# 77 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
# 122 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	release
# 123 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	end
# 124 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"

# 125 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
LilycoveCity_CoveLilyMotel_2F_EventScript_Scott_2:
# 126 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
# 72 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
# 127 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	goto LilycoveCity_CoveLilyMotel_2F_EventScript_MetScott
# 128 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	goto LilycoveCity_CoveLilyMotel_2F_EventScript_Scott_1
# 129 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"

# 130 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"

# 131 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
LilycoveCity_CoveLilyMotel_2F_EventScript_MetScott::
# 132 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
# 82 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
# 133 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	msgbox LilycoveCity_CoveLilyMotel_2F_Text_ContestsDoTakeStrategy, MSGBOX_DEFAULT
# 134 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
# 83 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
# 135 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	release
# 136 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	end
# 137 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"

# 138 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"

# 139 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
LilycoveCity_CoveLilyMotel_2F_Text_ShowMeCompletedDex::
# 140 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
# 87 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
# 141 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "I'm the GAME DESIGNER.\p"
# 142 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "Oh, is that right?\n"
# 143 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "You're working on a POKéDEX?\p"
# 144 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "It's tough trying to complete it,\n"
# 145 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "but don't give up.\p"
# 146 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "If you do complete it, please come\n"
# 147 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "show me.$"
# 148 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"

# 149 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
LilycoveCity_CoveLilyMotel_2F_Text_FilledPokedexGiveYouThis::
# 150 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
# 97 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
# 151 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "Wow! That's awesome!\n"
# 152 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "Yep, it's totally awesome!\p"
# 153 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "This POKéDEX is completely filled!\n"
# 154 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "You really must love POKéMON!\p"
# 155 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "I'm so impressed!\p"
# 156 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "Let me give you something in\n"
# 157 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "recognition of your feat!$"
# 158 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"

# 159 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
LilycoveCity_CoveLilyMotel_2F_Text_ImTheProgrammer::
# 160 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
# 107 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
# 161 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "Me? You're talking to me?\n"
# 162 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "I'm the PROGRAMMER.\p"
# 163 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "I wonder what the SLOTS are\n"
# 164 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "like here.$"
# 165 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"

# 166 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
LilycoveCity_CoveLilyMotel_2F_Text_ImTheGraphicArtist::
# 167 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
# 114 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
# 168 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "I'm the GRAPHIC ARTIST! Aren't the\n"
# 169 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "POKéMON of HOENN interesting?$"
# 170 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"

# 171 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
LilycoveCity_CoveLilyMotel_2F_Text_GirlsAreCute::
# 172 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
# 119 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
# 173 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "The girl TUBERS, they're cute, hey?\n"
# 174 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "To battle against a cute TUBER…\p"
# 175 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "Whoop, it's so awesome!\p"
# 176 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "And the TWINS! Aren't they cute?\n"
# 177 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "A 2-on-2 battle with TWINS…\p"
# 178 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "Whoop, it's unbearably fun!$"
# 179 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"

# 180 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
LilycoveCity_CoveLilyMotel_2F_Text_SeaBreezeTicklesHeart::
# 181 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
# 128 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
# 182 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "The sea breeze tickles my heart.\n"
# 183 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "It feels wonderful here!$"
# 184 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"

# 185 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
LilycoveCity_CoveLilyMotel_2F_Text_NeverLeaveWithoutGameBoy::
# 186 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
# 133 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
# 187 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "You never know when and where\n"
# 188 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "people will challenge you.\p"
# 189 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "That's why I never leave home without\n"
# 190 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "my GAME BOY ADVANCE.$"
# 191 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"

# 192 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
LilycoveCity_CoveLilyMotel_2F_Text_SnoozingPreferBattles::
# 193 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
# 140 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
# 194 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "SCOTT: … … … … …\n"
# 195 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "… … … … … Zzz…\p"
# 196 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "… … … … … Huh?!\n"
# 197 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "Oh, sorry, sorry! I was snoozing!\p"
# 198 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "I came to check out this POKéMON\n"
# 199 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "CONTEST thing.\p"
# 200 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "I have to admit, it does look quite\n"
# 201 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "entertaining, but…\p"
# 202 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "Consider me a purist--I prefer\n"
# 203 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "battles and tough TRAINERS.\p"
# 204 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "But that's just me.\p"
# 205 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "{PLAYER}{KUN}, I hope you'll enjoy everything\n"
# 206 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "like the GYMS, CONTESTS, BATTLE TENT,\l"
# 207 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "the whole works!$"
# 208 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"

# 209 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
LilycoveCity_CoveLilyMotel_2F_Text_ContestsDoTakeStrategy::
# 210 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
# 157 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
# 211 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "SCOTT: I think it does take strategy\n"
# 212 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "to win a CONTEST.\p"
# 213 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "Devising CONTEST strategies is one way\n"
# 214 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "of becoming a better TRAINER, I'd say.$"
