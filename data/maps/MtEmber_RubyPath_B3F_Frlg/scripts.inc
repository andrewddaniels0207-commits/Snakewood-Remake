MtEmber_RubyPath_B3F_Frlg_MapScripts::
	.byte 0


MtEmber_RubyPath_B5F_EventScript_Ruby::
# 4 "data/maps/MtEmber_RubyPath_B3F_Frlg/scripts.pory"
	lock
# 5 "data/maps/MtEmber_RubyPath_B3F_Frlg/scripts.pory"
	faceplayer
# 6 "data/maps/MtEmber_RubyPath_B3F_Frlg/scripts.pory"
	setflag FLAG_GOT_RUBY
# 7 "data/maps/MtEmber_RubyPath_B3F_Frlg/scripts.pory"
	removeobject LOCALID_RUBY
# 8 "data/maps/MtEmber_RubyPath_B3F_Frlg/scripts.pory"
	giveitem_msg MtEmber_RubyPath_B3F_Text_FoundARuby, ITEM_RUBY, 1, MUS_RG_OBTAIN_KEY_ITEM
# 9 "data/maps/MtEmber_RubyPath_B3F_Frlg/scripts.pory"
	release
	end


MtEmber_RubyPath_B3F_Text_FoundARuby::
# 13 "data/maps/MtEmber_RubyPath_B3F_Frlg/scripts.pory"
	.string "{PLAYER} found a RUBY!$"
