# 1 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 2 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_MapScripts::
# 3 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
# 2 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
# 4 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, RustboroCity_DevonCorp_1F_OnTransition
# 5 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.byte 0
# 6 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 7 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 8 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_OnTransition::
# 9 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
# 6 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
# 10 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	goto_if_unset FLAG_RETURNED_DEVON_GOODS, RustboroCity_DevonCorp_1F_OnTransition_2
# 11 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_OnTransition_1:
# 12 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	end
# 13 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 14 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_OnTransition_2:
# 15 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
# 7 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
# 16 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	call RustboroCity_DevonCorp_1F_EventScript_BlockStairs
# 17 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	goto RustboroCity_DevonCorp_1F_OnTransition_1
# 18 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 19 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 20 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_EventScript_BlockStairs::
# 21 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
# 13 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
# 22 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	setobjectxyperm LOCALID_DEVON_CORP_STAIR_GUARD, 14, 2
# 23 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
# 14 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
# 24 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	setobjectmovementtype LOCALID_DEVON_CORP_STAIR_GUARD, MOVEMENT_TYPE_FACE_DOWN
# 25 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	return
# 26 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 27 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 28 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_EventScript_Employee::
# 29 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
# 19 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
# 30 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	lock
# 31 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
# 20 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
# 32 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	faceplayer
# 33 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
# 21 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
# 34 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	goto_if_set FLAG_RETURNED_DEVON_GOODS, RustboroCity_DevonCorp_1F_EventScript_Employee_2
# 35 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_EventScript_Employee_1:
# 36 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
# 24 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
# 37 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	goto_if_set FLAG_DEVON_GOODS_STOLEN, RustboroCity_DevonCorp_1F_EventScript_Employee_5
# 38 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_EventScript_Employee_4:
# 39 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
# 27 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
# 40 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	msgbox RustboroCity_DevonCorp_1F_Text_ThoseShoesAreOurProduct, MSGBOX_DEFAULT
# 41 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
# 28 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
# 42 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	release
# 43 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	end
# 44 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 45 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_EventScript_Employee_2:
# 46 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
# 22 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
# 47 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	goto RustboroCity_DevonCorp_1F_EventScript_GoodsRecovered
# 48 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	goto RustboroCity_DevonCorp_1F_EventScript_Employee_1
# 49 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 50 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_EventScript_Employee_5:
# 51 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
# 25 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
# 52 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	goto RustboroCity_DevonCorp_1F_EventScript_RobberWasntBright
# 53 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	goto RustboroCity_DevonCorp_1F_EventScript_Employee_4
# 54 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 55 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 56 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_EventScript_RobberWasntBright::
# 57 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
# 33 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
# 58 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	msgbox RustboroCity_DevonCorp_1F_Text_RobberWasntVeryBright, MSGBOX_DEFAULT
# 59 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
# 34 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
# 60 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	release
# 61 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	end
# 62 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 63 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 64 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_EventScript_GoodsRecovered::
# 65 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
# 39 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
# 66 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	msgbox RustboroCity_DevonCorp_1F_Text_SoundsLikeStolenGoodsRecovered, MSGBOX_DEFAULT
# 67 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
# 40 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
# 68 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	release
# 69 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	end
# 70 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 71 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 72 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_EventScript_StairGuard::
# 73 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
# 45 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
# 74 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	lock
# 75 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
# 46 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
# 76 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	faceplayer
# 77 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
# 47 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
# 78 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	goto_if_set FLAG_RETURNED_DEVON_GOODS, RustboroCity_DevonCorp_1F_EventScript_StairGuard_2
# 79 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_EventScript_StairGuard_1:
# 80 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
# 50 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
# 81 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	goto_if_set FLAG_RECOVERED_DEVON_GOODS, RustboroCity_DevonCorp_1F_EventScript_StairGuard_5
# 82 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_EventScript_StairGuard_4:
# 83 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
# 53 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
# 84 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	goto_if_set FLAG_DEVON_GOODS_STOLEN, RustboroCity_DevonCorp_1F_EventScript_StairGuard_8
# 85 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_EventScript_StairGuard_7:
# 86 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
# 56 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
# 87 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	msgbox RustboroCity_DevonCorp_1F_Text_OnlyAuthorizedPeopleEnter, MSGBOX_DEFAULT
# 88 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
# 57 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
# 89 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	release
# 90 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	end
# 91 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 92 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_EventScript_StairGuard_2:
# 93 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
# 48 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
# 94 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	goto RustboroCity_DevonCorp_1F_EventScript_AlwaysWelcome
# 95 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	goto RustboroCity_DevonCorp_1F_EventScript_StairGuard_1
# 96 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 97 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_EventScript_StairGuard_5:
# 98 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
# 51 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
# 99 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	goto RustboroCity_DevonCorp_1F_EventScript_GotRobbed
# 100 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	goto RustboroCity_DevonCorp_1F_EventScript_StairGuard_4
# 101 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 102 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_EventScript_StairGuard_8:
# 103 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
# 54 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
# 104 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	goto RustboroCity_DevonCorp_1F_EventScript_GotRobbed
# 105 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	goto RustboroCity_DevonCorp_1F_EventScript_StairGuard_7
# 106 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 107 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 108 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_EventScript_AlwaysWelcome::
# 109 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
# 62 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
# 110 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	msgbox RustboroCity_DevonCorp_1F_Text_YoureAlwaysWelcomeHere, MSGBOX_DEFAULT
# 111 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
# 63 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
# 112 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	release
# 113 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	end
# 114 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 115 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 116 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_EventScript_GotRobbed::
# 117 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
# 68 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
# 118 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	msgbox RustboroCity_DevonCorp_1F_Text_HowCouldWeGetRobbed, MSGBOX_DEFAULT
# 119 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
# 69 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
# 120 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	release
# 121 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	end
# 122 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 123 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 124 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_EventScript_Greeter::
# 125 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
# 74 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
# 126 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	lock
# 127 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
# 75 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
# 128 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	faceplayer
# 129 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
# 76 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
# 130 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	goto_if_set FLAG_RETURNED_DEVON_GOODS, RustboroCity_DevonCorp_1F_EventScript_Greeter_2
# 131 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_EventScript_Greeter_1:
# 132 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
# 79 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
# 133 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	goto_if_set FLAG_RECOVERED_DEVON_GOODS, RustboroCity_DevonCorp_1F_EventScript_Greeter_5
# 134 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_EventScript_Greeter_4:
# 135 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
# 82 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
# 136 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	goto_if_set FLAG_DEVON_GOODS_STOLEN, RustboroCity_DevonCorp_1F_EventScript_Greeter_8
# 137 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_EventScript_Greeter_7:
# 138 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
# 85 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
# 139 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	msgbox RustboroCity_DevonCorp_1F_Text_WelcomeToDevonCorp, MSGBOX_DEFAULT
# 140 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
# 86 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
# 141 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	release
# 142 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	end
# 143 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 144 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_EventScript_Greeter_2:
# 145 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
# 77 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
# 146 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	goto RustboroCity_DevonCorp_1F_EventScript_WelcomeToDevonCorp
# 147 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	goto RustboroCity_DevonCorp_1F_EventScript_Greeter_1
# 148 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 149 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_EventScript_Greeter_5:
# 150 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
# 80 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
# 151 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	goto RustboroCity_DevonCorp_1F_EventScript_StaffGotRobbed
# 152 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	goto RustboroCity_DevonCorp_1F_EventScript_Greeter_4
# 153 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 154 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_EventScript_Greeter_8:
# 155 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
# 83 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
# 156 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	goto RustboroCity_DevonCorp_1F_EventScript_StaffGotRobbed
# 157 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	goto RustboroCity_DevonCorp_1F_EventScript_Greeter_7
# 158 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 159 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 160 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_EventScript_WelcomeToDevonCorp::
# 161 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
# 91 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
# 162 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	msgbox RustboroCity_DevonCorp_1F_Text_WelcomeToDevonCorp, MSGBOX_DEFAULT
# 163 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
# 92 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
# 164 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	release
# 165 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	end
# 166 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 167 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 168 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_EventScript_StaffGotRobbed::
# 169 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
# 97 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
# 170 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	msgbox RustboroCity_DevonCorp_1F_Text_StaffGotRobbed, MSGBOX_DEFAULT
# 171 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
# 98 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
# 172 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	release
# 173 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	end
# 174 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 175 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 176 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_EventScript_RocksMetalDisplay::
# 177 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
# 103 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
# 178 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	msgbox RustboroCity_DevonCorp_1F_Text_RocksMetalDisplay, MSGBOX_SIGN
# 179 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	end
# 180 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 181 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 182 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_EventScript_ProductsDisplay::
# 183 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
# 108 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
# 184 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	msgbox RustboroCity_DevonCorp_1F_Text_ProductDisplay, MSGBOX_SIGN
# 185 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	end
# 186 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 187 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 188 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_Text_WelcomeToDevonCorp::
# 189 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
# 112 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
# 190 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "Hello and welcome to the DEVON\n"
# 191 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "CORPORATION.\p"
# 192 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "We're proud producers of items and\n"
# 193 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "medicine that enhance your life.$"
# 194 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 195 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_Text_StaffGotRobbed::
# 196 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
# 119 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
# 197 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "One of our research staff stupidly\n"
# 198 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "got robbed of an important parcel.$"
# 199 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 200 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_Text_ThoseShoesAreOurProduct::
# 201 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
# 124 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
# 202 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "Hey, those RUNNING SHOES!\n"
# 203 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "They're one of our products!\p"
# 204 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "It makes me happy when I see someone\n"
# 205 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "using something we made.$"
# 206 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 207 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_Text_RobberWasntVeryBright::
# 208 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
# 131 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
# 209 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "That stolen parcel…\p"
# 210 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "Well, sure it's important, but it's not\n"
# 211 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "anything that anyone can use.\p"
# 212 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "In my estimation, that robber must not\n"
# 213 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "have been very bright.$"
# 214 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 215 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_Text_SoundsLikeStolenGoodsRecovered::
# 216 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
# 139 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
# 217 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "It sounds like they've recovered\n"
# 218 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "the ripped-off DEVON GOODS.$"
# 219 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 220 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_Text_OnlyAuthorizedPeopleEnter::
# 221 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
# 144 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
# 222 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "I'm sorry, only authorized people\n"
# 223 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "are allowed to enter here.$"
# 224 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 225 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_Text_HowCouldWeGetRobbed::
# 226 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
# 149 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
# 227 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "It's beyond stupid.\n"
# 228 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "How could we get robbed?$"
# 229 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 230 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_Text_YoureAlwaysWelcomeHere::
# 231 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
# 154 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
# 232 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "Hi, there!\n"
# 233 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "You're always welcome here!$"
# 234 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 235 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_Text_RocksMetalDisplay::
# 236 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
# 159 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
# 237 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "Samples of rocks and metal are\n"
# 238 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "displayed in the glass case.\p"
# 239 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "There's a panel with some writing\n"
# 240 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "on it…\p"
# 241 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "“DEVON CORPORATION got its start as\n"
# 242 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "a producer of stones from quarries.\p"
# 243 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "“The company also produced iron from\n"
# 244 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "filings in the sand.\p"
# 245 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "“From that humble start as a producer\n"
# 246 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "of raw materials, DEVON developed.\p"
# 247 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "“DEVON is now a manufacturer of a wide\n"
# 248 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "range of industrial products.”$"
# 249 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 250 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_Text_ProductDisplay::
# 251 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
# 174 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
# 252 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "Prototypes and test products fill\n"
# 253 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "the glass display case.\p"
# 254 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "There's a panel with a description…\p"
# 255 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "“In addition to industrial products,\n"
# 256 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "DEVON now markets sundries and\l"
# 257 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "pharmaceuticals for better lifestyles.\p"
# 258 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "“Recently, DEVON has begun marketing\n"
# 259 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "tools for POKéMON TRAINERS, including\l"
# 260 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "POKé BALLS and POKéNAV systems.”$"
