RustboroCity_DevonCorp_1F_MapScripts::
# 2 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, RustboroCity_DevonCorp_1F_OnTransition
	.byte 0


RustboroCity_DevonCorp_1F_OnTransition::
# 6 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	goto_if_unset FLAG_RETURNED_DEVON_GOODS, RustboroCity_DevonCorp_1F_OnTransition_2
RustboroCity_DevonCorp_1F_OnTransition_1:
	end

RustboroCity_DevonCorp_1F_OnTransition_2:
# 7 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	call RustboroCity_DevonCorp_1F_EventScript_BlockStairs
	goto RustboroCity_DevonCorp_1F_OnTransition_1


RustboroCity_DevonCorp_1F_EventScript_BlockStairs::
# 13 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	setobjectxyperm LOCALID_DEVON_CORP_STAIR_GUARD, 14, 2
# 14 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	setobjectmovementtype LOCALID_DEVON_CORP_STAIR_GUARD, MOVEMENT_TYPE_FACE_DOWN
	return


RustboroCity_DevonCorp_1F_EventScript_Employee::
# 19 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	lock
# 20 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	faceplayer
# 21 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	goto_if_set FLAG_RETURNED_DEVON_GOODS, RustboroCity_DevonCorp_1F_EventScript_Employee_2
RustboroCity_DevonCorp_1F_EventScript_Employee_1:
# 24 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	goto_if_set FLAG_DEVON_GOODS_STOLEN, RustboroCity_DevonCorp_1F_EventScript_Employee_5
RustboroCity_DevonCorp_1F_EventScript_Employee_4:
# 27 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	msgbox RustboroCity_DevonCorp_1F_Text_ThoseShoesAreOurProduct, MSGBOX_DEFAULT
# 28 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	release
	end

RustboroCity_DevonCorp_1F_EventScript_Employee_2:
# 22 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	goto RustboroCity_DevonCorp_1F_EventScript_GoodsRecovered
	goto RustboroCity_DevonCorp_1F_EventScript_Employee_1

RustboroCity_DevonCorp_1F_EventScript_Employee_5:
# 25 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	goto RustboroCity_DevonCorp_1F_EventScript_RobberWasntBright
	goto RustboroCity_DevonCorp_1F_EventScript_Employee_4


RustboroCity_DevonCorp_1F_EventScript_RobberWasntBright::
# 33 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	msgbox RustboroCity_DevonCorp_1F_Text_RobberWasntVeryBright, MSGBOX_DEFAULT
# 34 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	release
	end


RustboroCity_DevonCorp_1F_EventScript_GoodsRecovered::
# 39 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	msgbox RustboroCity_DevonCorp_1F_Text_SoundsLikeStolenGoodsRecovered, MSGBOX_DEFAULT
# 40 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	release
	end


RustboroCity_DevonCorp_1F_EventScript_StairGuard::
# 45 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	lock
# 46 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	faceplayer
# 47 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	goto_if_set FLAG_RETURNED_DEVON_GOODS, RustboroCity_DevonCorp_1F_EventScript_StairGuard_2
RustboroCity_DevonCorp_1F_EventScript_StairGuard_1:
# 50 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	goto_if_set FLAG_RECOVERED_DEVON_GOODS, RustboroCity_DevonCorp_1F_EventScript_StairGuard_5
RustboroCity_DevonCorp_1F_EventScript_StairGuard_4:
# 53 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	goto_if_set FLAG_DEVON_GOODS_STOLEN, RustboroCity_DevonCorp_1F_EventScript_StairGuard_8
RustboroCity_DevonCorp_1F_EventScript_StairGuard_7:
# 56 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	msgbox RustboroCity_DevonCorp_1F_Text_OnlyAuthorizedPeopleEnter, MSGBOX_DEFAULT
# 57 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	release
	end

RustboroCity_DevonCorp_1F_EventScript_StairGuard_2:
# 48 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	goto RustboroCity_DevonCorp_1F_EventScript_AlwaysWelcome
	goto RustboroCity_DevonCorp_1F_EventScript_StairGuard_1

RustboroCity_DevonCorp_1F_EventScript_StairGuard_5:
# 51 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	goto RustboroCity_DevonCorp_1F_EventScript_GotRobbed
	goto RustboroCity_DevonCorp_1F_EventScript_StairGuard_4

RustboroCity_DevonCorp_1F_EventScript_StairGuard_8:
# 54 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	goto RustboroCity_DevonCorp_1F_EventScript_GotRobbed
	goto RustboroCity_DevonCorp_1F_EventScript_StairGuard_7


RustboroCity_DevonCorp_1F_EventScript_AlwaysWelcome::
# 62 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	msgbox RustboroCity_DevonCorp_1F_Text_YoureAlwaysWelcomeHere, MSGBOX_DEFAULT
# 63 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	release
	end


RustboroCity_DevonCorp_1F_EventScript_GotRobbed::
# 68 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	msgbox RustboroCity_DevonCorp_1F_Text_HowCouldWeGetRobbed, MSGBOX_DEFAULT
# 69 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	release
	end


RustboroCity_DevonCorp_1F_EventScript_Greeter::
# 74 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	lock
# 75 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	faceplayer
# 76 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	goto_if_set FLAG_RETURNED_DEVON_GOODS, RustboroCity_DevonCorp_1F_EventScript_Greeter_2
RustboroCity_DevonCorp_1F_EventScript_Greeter_1:
# 79 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	goto_if_set FLAG_RECOVERED_DEVON_GOODS, RustboroCity_DevonCorp_1F_EventScript_Greeter_5
RustboroCity_DevonCorp_1F_EventScript_Greeter_4:
# 82 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	goto_if_set FLAG_DEVON_GOODS_STOLEN, RustboroCity_DevonCorp_1F_EventScript_Greeter_8
RustboroCity_DevonCorp_1F_EventScript_Greeter_7:
# 85 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	msgbox RustboroCity_DevonCorp_1F_Text_WelcomeToDevonCorp, MSGBOX_DEFAULT
# 86 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	release
	end

RustboroCity_DevonCorp_1F_EventScript_Greeter_2:
# 77 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	goto RustboroCity_DevonCorp_1F_EventScript_WelcomeToDevonCorp
	goto RustboroCity_DevonCorp_1F_EventScript_Greeter_1

RustboroCity_DevonCorp_1F_EventScript_Greeter_5:
# 80 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	goto RustboroCity_DevonCorp_1F_EventScript_StaffGotRobbed
	goto RustboroCity_DevonCorp_1F_EventScript_Greeter_4

RustboroCity_DevonCorp_1F_EventScript_Greeter_8:
# 83 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	goto RustboroCity_DevonCorp_1F_EventScript_StaffGotRobbed
	goto RustboroCity_DevonCorp_1F_EventScript_Greeter_7


RustboroCity_DevonCorp_1F_EventScript_WelcomeToDevonCorp::
# 91 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	msgbox RustboroCity_DevonCorp_1F_Text_WelcomeToDevonCorp, MSGBOX_DEFAULT
# 92 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	release
	end


RustboroCity_DevonCorp_1F_EventScript_StaffGotRobbed::
# 97 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	msgbox RustboroCity_DevonCorp_1F_Text_StaffGotRobbed, MSGBOX_DEFAULT
# 98 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	release
	end


RustboroCity_DevonCorp_1F_EventScript_RocksMetalDisplay::
# 103 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	msgbox RustboroCity_DevonCorp_1F_Text_RocksMetalDisplay, MSGBOX_SIGN
	end


RustboroCity_DevonCorp_1F_EventScript_ProductsDisplay::
# 108 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	msgbox RustboroCity_DevonCorp_1F_Text_ProductDisplay, MSGBOX_SIGN
	end


RustboroCity_DevonCorp_1F_Text_WelcomeToDevonCorp::
# 112 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "Hello and welcome to the DEVON\n"
	.string "CORPORATION.\p"
	.string "We're proud producers of items and\n"
	.string "medicine that enhance your life.$"

RustboroCity_DevonCorp_1F_Text_StaffGotRobbed::
# 119 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "One of our research staff stupidly\n"
	.string "got robbed of an important parcel.$"

RustboroCity_DevonCorp_1F_Text_ThoseShoesAreOurProduct::
# 124 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "Hey, those RUNNING SHOES!\n"
	.string "They're one of our products!\p"
	.string "It makes me happy when I see someone\n"
	.string "using something we made.$"

RustboroCity_DevonCorp_1F_Text_RobberWasntVeryBright::
# 131 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "That stolen parcel…\p"
	.string "Well, sure it's important, but it's not\n"
	.string "anything that anyone can use.\p"
	.string "In my estimation, that robber must not\n"
	.string "have been very bright.$"

RustboroCity_DevonCorp_1F_Text_SoundsLikeStolenGoodsRecovered::
# 139 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "It sounds like they've recovered\n"
	.string "the ripped-off DEVON GOODS.$"

RustboroCity_DevonCorp_1F_Text_OnlyAuthorizedPeopleEnter::
# 144 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "I'm sorry, only authorized people\n"
	.string "are allowed to enter here.$"

RustboroCity_DevonCorp_1F_Text_HowCouldWeGetRobbed::
# 149 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "It's beyond stupid.\n"
	.string "How could we get robbed?$"

RustboroCity_DevonCorp_1F_Text_YoureAlwaysWelcomeHere::
# 154 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "Hi, there!\n"
	.string "You're always welcome here!$"

RustboroCity_DevonCorp_1F_Text_RocksMetalDisplay::
# 159 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "Samples of rocks and metal are\n"
	.string "displayed in the glass case.\p"
	.string "There's a panel with some writing\n"
	.string "on it…\p"
	.string "“DEVON CORPORATION got its start as\n"
	.string "a producer of stones from quarries.\p"
	.string "“The company also produced iron from\n"
	.string "filings in the sand.\p"
	.string "“From that humble start as a producer\n"
	.string "of raw materials, DEVON developed.\p"
	.string "“DEVON is now a manufacturer of a wide\n"
	.string "range of industrial products.”$"

RustboroCity_DevonCorp_1F_Text_ProductDisplay::
# 174 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "Prototypes and test products fill\n"
	.string "the glass display case.\p"
	.string "There's a panel with a description…\p"
	.string "“In addition to industrial products,\n"
	.string "DEVON now markets sundries and\l"
	.string "pharmaceuticals for better lifestyles.\p"
	.string "“Recently, DEVON has begun marketing\n"
	.string "tools for POKéMON TRAINERS, including\l"
	.string "POKé BALLS and POKéNAV systems.”$"
