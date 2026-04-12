# 1 "data/maps/BattleFrontier_Lounge5/scripts.pory"

# 2 "data/maps/BattleFrontier_Lounge5/scripts.pory"
BattleFrontier_Lounge5_MapScripts::
# 3 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.byte 0
# 4 "data/maps/BattleFrontier_Lounge5/scripts.pory"

# 5 "data/maps/BattleFrontier_Lounge5/scripts.pory"

# 6 "data/maps/BattleFrontier_Lounge5/scripts.pory"
BattleFrontier_Lounge5_EventScript_NatureGirl::
# 7 "data/maps/BattleFrontier_Lounge5/scripts.pory"
# 4 "data/maps/BattleFrontier_Lounge5/scripts.pory"
# 8 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	lock
# 9 "data/maps/BattleFrontier_Lounge5/scripts.pory"
# 5 "data/maps/BattleFrontier_Lounge5/scripts.pory"
# 10 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	faceplayer
# 11 "data/maps/BattleFrontier_Lounge5/scripts.pory"
# 6 "data/maps/BattleFrontier_Lounge5/scripts.pory"
# 12 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	msgbox BattleFrontier_Lounge5_Text_NatureGirlGreeting, MSGBOX_YESNO
# 13 "data/maps/BattleFrontier_Lounge5/scripts.pory"
# 7 "data/maps/BattleFrontier_Lounge5/scripts.pory"
# 14 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	compare VAR_RESULT, NO
# 15 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	goto_if_eq BattleFrontier_Lounge5_EventScript_NatureGirl_2
# 16 "data/maps/BattleFrontier_Lounge5/scripts.pory"
BattleFrontier_Lounge5_EventScript_NatureGirl_1:
# 17 "data/maps/BattleFrontier_Lounge5/scripts.pory"
# 10 "data/maps/BattleFrontier_Lounge5/scripts.pory"
# 18 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	chooseboxmon
# 19 "data/maps/BattleFrontier_Lounge5/scripts.pory"
# 11 "data/maps/BattleFrontier_Lounge5/scripts.pory"
# 20 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	waitstate
# 21 "data/maps/BattleFrontier_Lounge5/scripts.pory"
# 12 "data/maps/BattleFrontier_Lounge5/scripts.pory"
# 22 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	lock
# 23 "data/maps/BattleFrontier_Lounge5/scripts.pory"
# 13 "data/maps/BattleFrontier_Lounge5/scripts.pory"
# 24 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	faceplayer
# 25 "data/maps/BattleFrontier_Lounge5/scripts.pory"
# 14 "data/maps/BattleFrontier_Lounge5/scripts.pory"
# 26 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
# 27 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	goto_if_eq BattleFrontier_Lounge5_EventScript_NatureGirl_5
# 28 "data/maps/BattleFrontier_Lounge5/scripts.pory"
BattleFrontier_Lounge5_EventScript_NatureGirl_4:
# 29 "data/maps/BattleFrontier_Lounge5/scripts.pory"
# 17 "data/maps/BattleFrontier_Lounge5/scripts.pory"
# 30 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 31 "data/maps/BattleFrontier_Lounge5/scripts.pory"
# 18 "data/maps/BattleFrontier_Lounge5/scripts.pory"
# 32 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	compare VAR_RESULT, SPECIES_EGG
# 33 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	goto_if_eq BattleFrontier_Lounge5_EventScript_NatureGirl_8
# 34 "data/maps/BattleFrontier_Lounge5/scripts.pory"
BattleFrontier_Lounge5_EventScript_NatureGirl_7:
# 35 "data/maps/BattleFrontier_Lounge5/scripts.pory"
# 21 "data/maps/BattleFrontier_Lounge5/scripts.pory"
# 36 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	special ShowNatureGirlMessage
# 37 "data/maps/BattleFrontier_Lounge5/scripts.pory"
# 22 "data/maps/BattleFrontier_Lounge5/scripts.pory"
# 38 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	waitmessage
# 39 "data/maps/BattleFrontier_Lounge5/scripts.pory"
# 23 "data/maps/BattleFrontier_Lounge5/scripts.pory"
# 40 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	waitbuttonpress
# 41 "data/maps/BattleFrontier_Lounge5/scripts.pory"
# 24 "data/maps/BattleFrontier_Lounge5/scripts.pory"
# 42 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	release
# 43 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	end
# 44 "data/maps/BattleFrontier_Lounge5/scripts.pory"

# 45 "data/maps/BattleFrontier_Lounge5/scripts.pory"
BattleFrontier_Lounge5_EventScript_NatureGirl_2:
# 46 "data/maps/BattleFrontier_Lounge5/scripts.pory"
# 8 "data/maps/BattleFrontier_Lounge5/scripts.pory"
# 47 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	goto BattleFrontier_Lounge5_EventScript_NatureGirlNoneShown
# 48 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	goto BattleFrontier_Lounge5_EventScript_NatureGirl_1
# 49 "data/maps/BattleFrontier_Lounge5/scripts.pory"

# 50 "data/maps/BattleFrontier_Lounge5/scripts.pory"
BattleFrontier_Lounge5_EventScript_NatureGirl_5:
# 51 "data/maps/BattleFrontier_Lounge5/scripts.pory"
# 15 "data/maps/BattleFrontier_Lounge5/scripts.pory"
# 52 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	goto BattleFrontier_Lounge5_EventScript_NatureGirlNoneShown
# 53 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	goto BattleFrontier_Lounge5_EventScript_NatureGirl_4
# 54 "data/maps/BattleFrontier_Lounge5/scripts.pory"

# 55 "data/maps/BattleFrontier_Lounge5/scripts.pory"
BattleFrontier_Lounge5_EventScript_NatureGirl_8:
# 56 "data/maps/BattleFrontier_Lounge5/scripts.pory"
# 19 "data/maps/BattleFrontier_Lounge5/scripts.pory"
# 57 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	goto BattleFrontier_Lounge5_EventScript_NatureGirlEgg
# 58 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	goto BattleFrontier_Lounge5_EventScript_NatureGirl_7
# 59 "data/maps/BattleFrontier_Lounge5/scripts.pory"

# 60 "data/maps/BattleFrontier_Lounge5/scripts.pory"

# 61 "data/maps/BattleFrontier_Lounge5/scripts.pory"
BattleFrontier_Lounge5_EventScript_NatureGirlEgg::
# 62 "data/maps/BattleFrontier_Lounge5/scripts.pory"
# 29 "data/maps/BattleFrontier_Lounge5/scripts.pory"
# 63 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	msgbox BattleFrontier_Lounge5_Text_NatureGirlEgg, MSGBOX_DEFAULT
# 64 "data/maps/BattleFrontier_Lounge5/scripts.pory"
# 30 "data/maps/BattleFrontier_Lounge5/scripts.pory"
# 65 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	release
# 66 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	end
# 67 "data/maps/BattleFrontier_Lounge5/scripts.pory"

# 68 "data/maps/BattleFrontier_Lounge5/scripts.pory"

# 69 "data/maps/BattleFrontier_Lounge5/scripts.pory"
BattleFrontier_Lounge5_EventScript_NatureGirlNoneShown::
# 70 "data/maps/BattleFrontier_Lounge5/scripts.pory"
# 35 "data/maps/BattleFrontier_Lounge5/scripts.pory"
# 71 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	msgbox BattleFrontier_Lounge5_Text_NatureGirlNoneShown, MSGBOX_DEFAULT
# 72 "data/maps/BattleFrontier_Lounge5/scripts.pory"
# 36 "data/maps/BattleFrontier_Lounge5/scripts.pory"
# 73 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	release
# 74 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	end
# 75 "data/maps/BattleFrontier_Lounge5/scripts.pory"

# 76 "data/maps/BattleFrontier_Lounge5/scripts.pory"

# 77 "data/maps/BattleFrontier_Lounge5/scripts.pory"
BattleFrontier_Lounge5_EventScript_Gentleman::
# 78 "data/maps/BattleFrontier_Lounge5/scripts.pory"
# 41 "data/maps/BattleFrontier_Lounge5/scripts.pory"
# 79 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	msgbox BattleFrontier_Lounge5_Text_LadyClaimsSheUnderstandsPokemon, MSGBOX_NPC
# 80 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	end
# 81 "data/maps/BattleFrontier_Lounge5/scripts.pory"

# 82 "data/maps/BattleFrontier_Lounge5/scripts.pory"

# 83 "data/maps/BattleFrontier_Lounge5/scripts.pory"
BattleFrontier_Lounge5_EventScript_BlackBelt::
# 84 "data/maps/BattleFrontier_Lounge5/scripts.pory"
# 46 "data/maps/BattleFrontier_Lounge5/scripts.pory"
# 85 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	msgbox BattleFrontier_Lounge5_Text_GirlSayingSomethingProfound, MSGBOX_NPC
# 86 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	end
# 87 "data/maps/BattleFrontier_Lounge5/scripts.pory"

# 88 "data/maps/BattleFrontier_Lounge5/scripts.pory"

# 89 "data/maps/BattleFrontier_Lounge5/scripts.pory"
BattleFrontier_Lounge5_EventScript_LittleBoy::
# 90 "data/maps/BattleFrontier_Lounge5/scripts.pory"
# 51 "data/maps/BattleFrontier_Lounge5/scripts.pory"
# 91 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	msgbox BattleFrontier_Lounge5_Text_GirlPlaysAtRedHouseALot, MSGBOX_NPC
# 92 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	end
# 93 "data/maps/BattleFrontier_Lounge5/scripts.pory"

# 94 "data/maps/BattleFrontier_Lounge5/scripts.pory"

# 95 "data/maps/BattleFrontier_Lounge5/scripts.pory"
BattleFrontier_Lounge5_Text_NatureGirlGreeting::
# 96 "data/maps/BattleFrontier_Lounge5/scripts.pory"
# 55 "data/maps/BattleFrontier_Lounge5/scripts.pory"
# 97 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "Ehehe!\n"
# 98 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "I can tell what POKéMON are thinking!\p"
# 99 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "Please!\n"
# 100 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "Can I see your POKéMON?$"
# 101 "data/maps/BattleFrontier_Lounge5/scripts.pory"

# 102 "data/maps/BattleFrontier_Lounge5/scripts.pory"
BattleFrontier_Lounge5_Text_NatureGirlNoneShown::
# 103 "data/maps/BattleFrontier_Lounge5/scripts.pory"
# 62 "data/maps/BattleFrontier_Lounge5/scripts.pory"
# 104 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "Boo!\n"
# 105 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "Cheapie!$"
# 106 "data/maps/BattleFrontier_Lounge5/scripts.pory"

# 107 "data/maps/BattleFrontier_Lounge5/scripts.pory"
BattleFrontier_Lounge5_Text_NatureGirlAttackHighAttackLow::
# 108 "data/maps/BattleFrontier_Lounge5/scripts.pory"
# 67 "data/maps/BattleFrontier_Lounge5/scripts.pory"
# 109 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "Hmhm…\p"
# 110 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "This one says it likes to battle!\n"
# 111 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "It will battle even if it has a lot\l"
# 112 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "of ouchies!$"
# 113 "data/maps/BattleFrontier_Lounge5/scripts.pory"

# 114 "data/maps/BattleFrontier_Lounge5/scripts.pory"
BattleFrontier_Lounge5_Text_NatureGirlAttackHighDefenseLow::
# 115 "data/maps/BattleFrontier_Lounge5/scripts.pory"
# 74 "data/maps/BattleFrontier_Lounge5/scripts.pory"
# 116 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "Hmhm…\p"
# 117 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "This one says it likes to battle!\n"
# 118 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "But if it gets enough ouchies,\l"
# 119 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "it will worry about itself!$"
# 120 "data/maps/BattleFrontier_Lounge5/scripts.pory"

# 121 "data/maps/BattleFrontier_Lounge5/scripts.pory"
BattleFrontier_Lounge5_Text_NatureGirlAttackHighSupportLow::
# 122 "data/maps/BattleFrontier_Lounge5/scripts.pory"
# 81 "data/maps/BattleFrontier_Lounge5/scripts.pory"
# 123 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "Hmhm…\p"
# 124 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "This one says it likes to battle!\n"
# 125 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "But if it gets enough ouchies,\l"
# 126 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "it will turn sneaky!$"
# 127 "data/maps/BattleFrontier_Lounge5/scripts.pory"

# 128 "data/maps/BattleFrontier_Lounge5/scripts.pory"
BattleFrontier_Lounge5_Text_NatureGirlDefenseHighAttackLow::
# 129 "data/maps/BattleFrontier_Lounge5/scripts.pory"
# 88 "data/maps/BattleFrontier_Lounge5/scripts.pory"
# 130 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "Hmhm…\p"
# 131 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "This one says it looks after itself!\n"
# 132 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "But if it gets enough ouchies,\l"
# 133 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "it will hit back!$"
# 134 "data/maps/BattleFrontier_Lounge5/scripts.pory"

# 135 "data/maps/BattleFrontier_Lounge5/scripts.pory"
BattleFrontier_Lounge5_Text_NatureGirlDefenseHighDefenseLow::
# 136 "data/maps/BattleFrontier_Lounge5/scripts.pory"
# 95 "data/maps/BattleFrontier_Lounge5/scripts.pory"
# 137 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "Hmhm…\p"
# 138 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "This one says it looks after itself!\n"
# 139 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "It says it worries about itself whether\l"
# 140 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "or not it has a lot of ouchies!$"
# 141 "data/maps/BattleFrontier_Lounge5/scripts.pory"

# 142 "data/maps/BattleFrontier_Lounge5/scripts.pory"
BattleFrontier_Lounge5_Text_NatureGirlDefenseHighSupportLow::
# 143 "data/maps/BattleFrontier_Lounge5/scripts.pory"
# 102 "data/maps/BattleFrontier_Lounge5/scripts.pory"
# 144 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "Hmhm…\p"
# 145 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "This one says it looks after itself!\n"
# 146 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "But if it gets enough ouchies,\l"
# 147 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "it will turn sneaky!$"
# 148 "data/maps/BattleFrontier_Lounge5/scripts.pory"

# 149 "data/maps/BattleFrontier_Lounge5/scripts.pory"
BattleFrontier_Lounge5_Text_NatureGirlSupportHighAttackLow::
# 150 "data/maps/BattleFrontier_Lounge5/scripts.pory"
# 109 "data/maps/BattleFrontier_Lounge5/scripts.pory"
# 151 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "Hmhm…\p"
# 152 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "This one says it likes to be sneaky!\n"
# 153 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "But if it gets enough ouchies,\l"
# 154 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "it will hit back!$"
# 155 "data/maps/BattleFrontier_Lounge5/scripts.pory"

# 156 "data/maps/BattleFrontier_Lounge5/scripts.pory"
BattleFrontier_Lounge5_Text_NatureGirlSupportHighDefenseLow::
# 157 "data/maps/BattleFrontier_Lounge5/scripts.pory"
# 116 "data/maps/BattleFrontier_Lounge5/scripts.pory"
# 158 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "Hmhm…\p"
# 159 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "This one says it likes to be sneaky!\n"
# 160 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "But if it gets enough ouchies,\l"
# 161 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "it will worry about itself!$"
# 162 "data/maps/BattleFrontier_Lounge5/scripts.pory"

# 163 "data/maps/BattleFrontier_Lounge5/scripts.pory"
BattleFrontier_Lounge5_Text_NatureGirlSupportHighSupportLow::
# 164 "data/maps/BattleFrontier_Lounge5/scripts.pory"
# 123 "data/maps/BattleFrontier_Lounge5/scripts.pory"
# 165 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "Hmhm…\p"
# 166 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "This one says it likes to be sneaky!\n"
# 167 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "It says it likes to be sneaky even\l"
# 168 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "if it has a lot of ouchies!$"
# 169 "data/maps/BattleFrontier_Lounge5/scripts.pory"

# 170 "data/maps/BattleFrontier_Lounge5/scripts.pory"
BattleFrontier_Lounge5_Text_NatureGirlEgg::
# 171 "data/maps/BattleFrontier_Lounge5/scripts.pory"
# 130 "data/maps/BattleFrontier_Lounge5/scripts.pory"
# 172 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "That's silly! An EGG is asleep!\n"
# 173 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "I can't talk to it!$"
# 174 "data/maps/BattleFrontier_Lounge5/scripts.pory"

# 175 "data/maps/BattleFrontier_Lounge5/scripts.pory"
BattleFrontier_Lounge5_Text_LadyClaimsSheUnderstandsPokemon::
# 176 "data/maps/BattleFrontier_Lounge5/scripts.pory"
# 135 "data/maps/BattleFrontier_Lounge5/scripts.pory"
# 177 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "How charming!\n"
# 178 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "That little lady claims she can\l"
# 179 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "understand POKéMON!$"
# 180 "data/maps/BattleFrontier_Lounge5/scripts.pory"

# 181 "data/maps/BattleFrontier_Lounge5/scripts.pory"
BattleFrontier_Lounge5_Text_GirlSayingSomethingProfound::
# 182 "data/maps/BattleFrontier_Lounge5/scripts.pory"
# 141 "data/maps/BattleFrontier_Lounge5/scripts.pory"
# 183 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "I have this feeling that the little girl\n"
# 184 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "is saying something profound.$"
# 185 "data/maps/BattleFrontier_Lounge5/scripts.pory"

# 186 "data/maps/BattleFrontier_Lounge5/scripts.pory"
BattleFrontier_Lounge5_Text_GirlPlaysAtRedHouseALot::
# 187 "data/maps/BattleFrontier_Lounge5/scripts.pory"
# 146 "data/maps/BattleFrontier_Lounge5/scripts.pory"
# 188 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "I know something!\p"
# 189 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "That little girl plays at the red house\n"
# 190 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "a lot!$"
