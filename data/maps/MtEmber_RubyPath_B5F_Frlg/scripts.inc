MtEmber_RubyPath_B5F_Frlg_MapScripts::
	.byte 0


MtEmber_RubyPath_B5F_EventScript_BrailleMessage::
# 4 "data/maps/MtEmber_RubyPath_B5F_Frlg/scripts.pory"
	lockall
# 5 "data/maps/MtEmber_RubyPath_B5F_Frlg/scripts.pory"
	setvar VAR_0x8005, 130
# 6 "data/maps/MtEmber_RubyPath_B5F_Frlg/scripts.pory"
	braillemessage_wait Braille_Text_Everything
# 7 "data/maps/MtEmber_RubyPath_B5F_Frlg/scripts.pory"
	braillemessage_wait Braille_Text_HasMeaning1
# 8 "data/maps/MtEmber_RubyPath_B5F_Frlg/scripts.pory"
	braillemessage_wait Braille_Text_Existence
# 9 "data/maps/MtEmber_RubyPath_B5F_Frlg/scripts.pory"
	braillemessage_wait Braille_Text_HasMeaning2
# 10 "data/maps/MtEmber_RubyPath_B5F_Frlg/scripts.pory"
	braillemessage_wait Braille_Text_BeingAlive
# 11 "data/maps/MtEmber_RubyPath_B5F_Frlg/scripts.pory"
	braillemessage_wait Braille_Text_HasMeaning3
# 12 "data/maps/MtEmber_RubyPath_B5F_Frlg/scripts.pory"
	braillemessage_wait Braille_Text_HaveDreams
# 13 "data/maps/MtEmber_RubyPath_B5F_Frlg/scripts.pory"
	braillemsgbox Braille_Text_UsePower
# 14 "data/maps/MtEmber_RubyPath_B5F_Frlg/scripts.pory"
	releaseall
	end

