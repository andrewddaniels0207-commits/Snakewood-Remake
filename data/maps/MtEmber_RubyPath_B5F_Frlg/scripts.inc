# 1 "data/maps/MtEmber_RubyPath_B5F_Frlg/scripts.pory"

# 2 "data/maps/MtEmber_RubyPath_B5F_Frlg/scripts.pory"
MtEmber_RubyPath_B5F_Frlg_MapScripts::
# 3 "data/maps/MtEmber_RubyPath_B5F_Frlg/scripts.pory"
	.byte 0
# 4 "data/maps/MtEmber_RubyPath_B5F_Frlg/scripts.pory"

# 5 "data/maps/MtEmber_RubyPath_B5F_Frlg/scripts.pory"

# 6 "data/maps/MtEmber_RubyPath_B5F_Frlg/scripts.pory"
MtEmber_RubyPath_B5F_EventScript_BrailleMessage::
# 7 "data/maps/MtEmber_RubyPath_B5F_Frlg/scripts.pory"
# 4 "data/maps/MtEmber_RubyPath_B5F_Frlg/scripts.pory"
# 8 "data/maps/MtEmber_RubyPath_B5F_Frlg/scripts.pory"
	lockall
# 9 "data/maps/MtEmber_RubyPath_B5F_Frlg/scripts.pory"
# 5 "data/maps/MtEmber_RubyPath_B5F_Frlg/scripts.pory"
# 10 "data/maps/MtEmber_RubyPath_B5F_Frlg/scripts.pory"
	setvar VAR_0x8005, 130
# 11 "data/maps/MtEmber_RubyPath_B5F_Frlg/scripts.pory"
# 6 "data/maps/MtEmber_RubyPath_B5F_Frlg/scripts.pory"
# 12 "data/maps/MtEmber_RubyPath_B5F_Frlg/scripts.pory"
	braillemessage_wait Braille_Text_Everything
# 13 "data/maps/MtEmber_RubyPath_B5F_Frlg/scripts.pory"
# 7 "data/maps/MtEmber_RubyPath_B5F_Frlg/scripts.pory"
# 14 "data/maps/MtEmber_RubyPath_B5F_Frlg/scripts.pory"
	braillemessage_wait Braille_Text_HasMeaning1
# 15 "data/maps/MtEmber_RubyPath_B5F_Frlg/scripts.pory"
# 8 "data/maps/MtEmber_RubyPath_B5F_Frlg/scripts.pory"
# 16 "data/maps/MtEmber_RubyPath_B5F_Frlg/scripts.pory"
	braillemessage_wait Braille_Text_Existence
# 17 "data/maps/MtEmber_RubyPath_B5F_Frlg/scripts.pory"
# 9 "data/maps/MtEmber_RubyPath_B5F_Frlg/scripts.pory"
# 18 "data/maps/MtEmber_RubyPath_B5F_Frlg/scripts.pory"
	braillemessage_wait Braille_Text_HasMeaning2
# 19 "data/maps/MtEmber_RubyPath_B5F_Frlg/scripts.pory"
# 10 "data/maps/MtEmber_RubyPath_B5F_Frlg/scripts.pory"
# 20 "data/maps/MtEmber_RubyPath_B5F_Frlg/scripts.pory"
	braillemessage_wait Braille_Text_BeingAlive
# 21 "data/maps/MtEmber_RubyPath_B5F_Frlg/scripts.pory"
# 11 "data/maps/MtEmber_RubyPath_B5F_Frlg/scripts.pory"
# 22 "data/maps/MtEmber_RubyPath_B5F_Frlg/scripts.pory"
	braillemessage_wait Braille_Text_HasMeaning3
# 23 "data/maps/MtEmber_RubyPath_B5F_Frlg/scripts.pory"
# 12 "data/maps/MtEmber_RubyPath_B5F_Frlg/scripts.pory"
# 24 "data/maps/MtEmber_RubyPath_B5F_Frlg/scripts.pory"
	braillemessage_wait Braille_Text_HaveDreams
# 25 "data/maps/MtEmber_RubyPath_B5F_Frlg/scripts.pory"
# 13 "data/maps/MtEmber_RubyPath_B5F_Frlg/scripts.pory"
# 26 "data/maps/MtEmber_RubyPath_B5F_Frlg/scripts.pory"
	braillemsgbox Braille_Text_UsePower
# 27 "data/maps/MtEmber_RubyPath_B5F_Frlg/scripts.pory"
# 14 "data/maps/MtEmber_RubyPath_B5F_Frlg/scripts.pory"
# 28 "data/maps/MtEmber_RubyPath_B5F_Frlg/scripts.pory"
	releaseall
# 29 "data/maps/MtEmber_RubyPath_B5F_Frlg/scripts.pory"
	end
