BattleFrontier_Lounge5_MapScripts::
	.byte 0


BattleFrontier_Lounge5_EventScript_NatureGirl::
# 4 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	lock
# 5 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	faceplayer
# 6 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	msgbox BattleFrontier_Lounge5_Text_NatureGirlGreeting, MSGBOX_YESNO
# 7 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq BattleFrontier_Lounge5_EventScript_NatureGirl_2
BattleFrontier_Lounge5_EventScript_NatureGirl_1:
# 10 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	chooseboxmon
# 11 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	waitstate
# 12 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	lock
# 13 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	faceplayer
# 14 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq BattleFrontier_Lounge5_EventScript_NatureGirl_5
BattleFrontier_Lounge5_EventScript_NatureGirl_4:
# 17 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 18 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	compare VAR_RESULT, SPECIES_EGG
	goto_if_eq BattleFrontier_Lounge5_EventScript_NatureGirl_8
BattleFrontier_Lounge5_EventScript_NatureGirl_7:
# 21 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	special ShowNatureGirlMessage
# 22 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	waitmessage
# 23 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	waitbuttonpress
# 24 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	release
	end

BattleFrontier_Lounge5_EventScript_NatureGirl_2:
# 8 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	goto BattleFrontier_Lounge5_EventScript_NatureGirlNoneShown
	goto BattleFrontier_Lounge5_EventScript_NatureGirl_1

BattleFrontier_Lounge5_EventScript_NatureGirl_5:
# 15 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	goto BattleFrontier_Lounge5_EventScript_NatureGirlNoneShown
	goto BattleFrontier_Lounge5_EventScript_NatureGirl_4

BattleFrontier_Lounge5_EventScript_NatureGirl_8:
# 19 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	goto BattleFrontier_Lounge5_EventScript_NatureGirlEgg
	goto BattleFrontier_Lounge5_EventScript_NatureGirl_7


BattleFrontier_Lounge5_EventScript_NatureGirlEgg::
# 29 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	msgbox BattleFrontier_Lounge5_Text_NatureGirlEgg, MSGBOX_DEFAULT
# 30 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	release
	end


BattleFrontier_Lounge5_EventScript_NatureGirlNoneShown::
# 35 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	msgbox BattleFrontier_Lounge5_Text_NatureGirlNoneShown, MSGBOX_DEFAULT
# 36 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	release
	end


BattleFrontier_Lounge5_EventScript_Gentleman::
# 41 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	msgbox BattleFrontier_Lounge5_Text_LadyClaimsSheUnderstandsPokemon, MSGBOX_NPC
	end


BattleFrontier_Lounge5_EventScript_BlackBelt::
# 46 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	msgbox BattleFrontier_Lounge5_Text_GirlSayingSomethingProfound, MSGBOX_NPC
	end


BattleFrontier_Lounge5_EventScript_LittleBoy::
# 51 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	msgbox BattleFrontier_Lounge5_Text_GirlPlaysAtRedHouseALot, MSGBOX_NPC
	end


BattleFrontier_Lounge5_Text_NatureGirlGreeting::
# 55 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "Ehehe!\n"
	.string "I can tell what POKéMON are thinking!\p"
	.string "Please!\n"
	.string "Can I see your POKéMON?$"

BattleFrontier_Lounge5_Text_NatureGirlNoneShown::
# 62 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "Boo!\n"
	.string "Cheapie!$"

BattleFrontier_Lounge5_Text_NatureGirlAttackHighAttackLow::
# 67 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "Hmhm…\p"
	.string "This one says it likes to battle!\n"
	.string "It will battle even if it has a lot\l"
	.string "of ouchies!$"

BattleFrontier_Lounge5_Text_NatureGirlAttackHighDefenseLow::
# 74 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "Hmhm…\p"
	.string "This one says it likes to battle!\n"
	.string "But if it gets enough ouchies,\l"
	.string "it will worry about itself!$"

BattleFrontier_Lounge5_Text_NatureGirlAttackHighSupportLow::
# 81 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "Hmhm…\p"
	.string "This one says it likes to battle!\n"
	.string "But if it gets enough ouchies,\l"
	.string "it will turn sneaky!$"

BattleFrontier_Lounge5_Text_NatureGirlDefenseHighAttackLow::
# 88 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "Hmhm…\p"
	.string "This one says it looks after itself!\n"
	.string "But if it gets enough ouchies,\l"
	.string "it will hit back!$"

BattleFrontier_Lounge5_Text_NatureGirlDefenseHighDefenseLow::
# 95 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "Hmhm…\p"
	.string "This one says it looks after itself!\n"
	.string "It says it worries about itself whether\l"
	.string "or not it has a lot of ouchies!$"

BattleFrontier_Lounge5_Text_NatureGirlDefenseHighSupportLow::
# 102 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "Hmhm…\p"
	.string "This one says it looks after itself!\n"
	.string "But if it gets enough ouchies,\l"
	.string "it will turn sneaky!$"

BattleFrontier_Lounge5_Text_NatureGirlSupportHighAttackLow::
# 109 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "Hmhm…\p"
	.string "This one says it likes to be sneaky!\n"
	.string "But if it gets enough ouchies,\l"
	.string "it will hit back!$"

BattleFrontier_Lounge5_Text_NatureGirlSupportHighDefenseLow::
# 116 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "Hmhm…\p"
	.string "This one says it likes to be sneaky!\n"
	.string "But if it gets enough ouchies,\l"
	.string "it will worry about itself!$"

BattleFrontier_Lounge5_Text_NatureGirlSupportHighSupportLow::
# 123 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "Hmhm…\p"
	.string "This one says it likes to be sneaky!\n"
	.string "It says it likes to be sneaky even\l"
	.string "if it has a lot of ouchies!$"

BattleFrontier_Lounge5_Text_NatureGirlEgg::
# 130 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "That's silly! An EGG is asleep!\n"
	.string "I can't talk to it!$"

BattleFrontier_Lounge5_Text_LadyClaimsSheUnderstandsPokemon::
# 135 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "How charming!\n"
	.string "That little lady claims she can\l"
	.string "understand POKéMON!$"

BattleFrontier_Lounge5_Text_GirlSayingSomethingProfound::
# 141 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "I have this feeling that the little girl\n"
	.string "is saying something profound.$"

BattleFrontier_Lounge5_Text_GirlPlaysAtRedHouseALot::
# 146 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "I know something!\p"
	.string "That little girl plays at the red house\n"
	.string "a lot!$"
