# 1 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"

# 2 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
SSAnne_Kitchen_Frlg_MapScripts::
# 3 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
	.byte 0
# 4 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"

# 5 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"

# 6 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
SSAnne_Kitchen_EventScript_Chef1::
# 7 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
# 4 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
# 8 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
	msgbox SSAnne_Kitchen_Text_BusyOutOfTheWay, MSGBOX_NPC
# 9 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
	end
# 10 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"

# 11 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"

# 12 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
SSAnne_Kitchen_EventScript_Chef2::
# 13 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
# 9 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
# 14 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
	msgbox SSAnne_Kitchen_Text_SawOddBerryInTrash, MSGBOX_NPC
# 15 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
	end
# 16 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"

# 17 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"

# 18 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
SSAnne_Kitchen_EventScript_Chef3::
# 19 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
# 14 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
# 20 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
	msgbox SSAnne_Kitchen_Text_SoBusyImDizzy, MSGBOX_NPC
# 21 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
	end
# 22 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"

# 23 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"

# 24 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
SSAnne_Kitchen_EventScript_Chef4::
# 25 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
# 19 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
# 26 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
	lock
# 27 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
# 20 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
# 28 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
	faceplayer
# 29 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
# 21 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
# 30 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
	msgbox SSAnne_Kitchen_Text_IAmLeChefMainCourseIs
# 31 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
# 22 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
# 32 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
	random 3
# 33 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
# 23 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
# 34 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
	copyvar VAR_0x8008, VAR_RESULT
# 35 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
# 24 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
# 36 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
	compare VAR_0x8008, 0
# 37 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
	goto_if_eq SSAnne_Kitchen_EventScript_Chef4_2
# 38 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
SSAnne_Kitchen_EventScript_Chef4_1:
# 39 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
# 27 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
# 40 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
	compare VAR_0x8008, 1
# 41 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
	goto_if_eq SSAnne_Kitchen_EventScript_Chef4_5
# 42 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
SSAnne_Kitchen_EventScript_Chef4_4:
# 43 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
# 30 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
# 44 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
	compare VAR_0x8008, 2
# 45 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
	goto_if_eq SSAnne_Kitchen_EventScript_Chef4_8
# 46 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
SSAnne_Kitchen_EventScript_Chef4_7:
# 47 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
# 33 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
# 48 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
	release
# 49 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
	end
# 50 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"

# 51 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
SSAnne_Kitchen_EventScript_Chef4_2:
# 52 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
# 25 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
# 53 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
	call SSAnne_Kitchen_EventScript_SalmonDuSalad
# 54 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
	goto SSAnne_Kitchen_EventScript_Chef4_1
# 55 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"

# 56 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
SSAnne_Kitchen_EventScript_Chef4_5:
# 57 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
# 28 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
# 58 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
	call SSAnne_Kitchen_EventScript_EelsAuBarbecue
# 59 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
	goto SSAnne_Kitchen_EventScript_Chef4_4
# 60 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"

# 61 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
SSAnne_Kitchen_EventScript_Chef4_8:
# 62 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
# 31 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
# 63 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
	call SSAnne_Kitchen_EventScript_PrimeBeefsteak
# 64 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
	goto SSAnne_Kitchen_EventScript_Chef4_7
# 65 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"

# 66 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"

# 67 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
SSAnne_Kitchen_EventScript_SalmonDuSalad::
# 68 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
# 38 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
# 69 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
	msgbox SSAnne_Kitchen_Text_SalmonDuSalad
# 70 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
	return
# 71 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"

# 72 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"

# 73 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
SSAnne_Kitchen_EventScript_EelsAuBarbecue::
# 74 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
# 43 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
# 75 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
	msgbox SSAnne_Kitchen_Text_EelsAuBarbecue
# 76 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
	return
# 77 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"

# 78 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"

# 79 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
SSAnne_Kitchen_EventScript_PrimeBeefsteak::
# 80 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
# 48 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
# 81 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
	msgbox SSAnne_Kitchen_Text_PrimeBeefsteak
# 82 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
	return
# 83 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"

# 84 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"

# 85 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
SSAnne_Kitchen_EventScript_Chef5::
# 86 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
# 53 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
# 87 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
	msgbox SSAnne_Kitchen_Text_PeelSpudsEveryDay, MSGBOX_NPC
# 88 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
	end
# 89 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"

# 90 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"

# 91 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
SSAnne_Kitchen_EventScript_Chef6::
# 92 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
# 58 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
# 93 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
	msgbox SSAnne_Kitchen_Text_HearAboutSnorlaxItsAGlutton, MSGBOX_NPC
# 94 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
	end
# 95 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"

# 96 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"

# 97 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
SSAnne_Kitchen_EventScript_Chef7::
# 98 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
# 63 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
# 99 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
	msgbox SSAnne_Kitchen_Text_OnlyGetToPeelOnions, MSGBOX_NPC
# 100 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
	end
# 101 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"

# 102 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"

# 103 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
SSAnne_Kitchen_Text_BusyOutOfTheWay::
# 104 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
# 67 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
# 105 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
	.string "You, mon petit!\n"
# 106 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
	.string "We're busy here!\l"
# 107 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
	.string "Out of the way!$"
# 108 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"

# 109 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
SSAnne_Kitchen_Text_SawOddBerryInTrash::
# 110 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
# 73 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
# 111 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
	.string "I saw an odd BERRY in the trash.\n"
# 112 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
	.string "I wonder what that was?$"
# 113 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"

# 114 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
SSAnne_Kitchen_Text_SoBusyImDizzy::
# 115 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
# 78 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
# 116 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
	.string "I'm so busy I'm getting dizzy!\n"
# 117 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
	.string "You have to give me room here!$"
# 118 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"

# 119 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
SSAnne_Kitchen_Text_PeelSpudsEveryDay::
# 120 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
# 83 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
# 121 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
	.string "Hum-de-hum-de-ho…\p"
# 122 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
	.string "I peel spuds every day!\n"
# 123 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
	.string "Hum-hum…$"
# 124 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"

# 125 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
SSAnne_Kitchen_Text_HearAboutSnorlaxItsAGlutton::
# 126 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
# 89 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
# 127 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
	.string "Did you hear about SNORLAX?\n"
# 128 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
	.string "It's a glutton.\p"
# 129 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
	.string "No other POKéMON eats and sleeps\n"
# 130 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
	.string "the way SNORLAX can and does!$"
# 131 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"

# 132 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
SSAnne_Kitchen_Text_OnlyGetToPeelOnions::
# 133 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
# 96 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
# 134 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
	.string "Snivel… Sniff…\p"
# 135 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
	.string "I only get to peel onions…\n"
# 136 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
	.string "Snivel…$"
# 137 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"

# 138 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
SSAnne_Kitchen_Text_IAmLeChefMainCourseIs::
# 139 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
# 102 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
# 140 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
	.string "Er-hem!\n"
# 141 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
	.string "Indeed I am le CHEF!\p"
# 142 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
	.string "Le main course is$"
# 143 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"

# 144 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
SSAnne_Kitchen_Text_SalmonDuSalad::
# 145 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
# 108 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
# 146 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
	.string "Salmon du Salad!\p"
# 147 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
	.string "Les guests may gripe it's fish\n"
# 148 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
	.string "again, however!$"
# 149 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"

# 150 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
SSAnne_Kitchen_Text_EelsAuBarbecue::
# 151 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
# 114 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
# 152 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
	.string "Eels au Barbecue!\p"
# 153 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
	.string "Les guests will mutiny, I fear.$"
# 154 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"

# 155 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
SSAnne_Kitchen_Text_PrimeBeefsteak::
# 156 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
# 119 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
# 157 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
	.string "Prime Beefsteak!\p"
# 158 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
	.string "But, have I enough fillets du\n"
# 159 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
	.string "beef?$"
