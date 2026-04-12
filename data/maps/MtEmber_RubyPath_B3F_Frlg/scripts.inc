# 1 "data/maps/MtEmber_RubyPath_B3F_Frlg/scripts.pory"

# 2 "data/maps/MtEmber_RubyPath_B3F_Frlg/scripts.pory"
MtEmber_RubyPath_B3F_Frlg_MapScripts::
# 3 "data/maps/MtEmber_RubyPath_B3F_Frlg/scripts.pory"
	.byte 0
# 4 "data/maps/MtEmber_RubyPath_B3F_Frlg/scripts.pory"

# 5 "data/maps/MtEmber_RubyPath_B3F_Frlg/scripts.pory"

# 6 "data/maps/MtEmber_RubyPath_B3F_Frlg/scripts.pory"
MtEmber_RubyPath_B5F_EventScript_Ruby::
# 7 "data/maps/MtEmber_RubyPath_B3F_Frlg/scripts.pory"
# 4 "data/maps/MtEmber_RubyPath_B3F_Frlg/scripts.pory"
# 8 "data/maps/MtEmber_RubyPath_B3F_Frlg/scripts.pory"
	lock
# 9 "data/maps/MtEmber_RubyPath_B3F_Frlg/scripts.pory"
# 5 "data/maps/MtEmber_RubyPath_B3F_Frlg/scripts.pory"
# 10 "data/maps/MtEmber_RubyPath_B3F_Frlg/scripts.pory"
	faceplayer
# 11 "data/maps/MtEmber_RubyPath_B3F_Frlg/scripts.pory"
# 6 "data/maps/MtEmber_RubyPath_B3F_Frlg/scripts.pory"
# 12 "data/maps/MtEmber_RubyPath_B3F_Frlg/scripts.pory"
	setflag FLAG_GOT_RUBY
# 13 "data/maps/MtEmber_RubyPath_B3F_Frlg/scripts.pory"
# 7 "data/maps/MtEmber_RubyPath_B3F_Frlg/scripts.pory"
# 14 "data/maps/MtEmber_RubyPath_B3F_Frlg/scripts.pory"
	removeobject LOCALID_RUBY
# 15 "data/maps/MtEmber_RubyPath_B3F_Frlg/scripts.pory"
# 8 "data/maps/MtEmber_RubyPath_B3F_Frlg/scripts.pory"
# 16 "data/maps/MtEmber_RubyPath_B3F_Frlg/scripts.pory"
	giveitem_msg MtEmber_RubyPath_B3F_Text_FoundARuby, ITEM_RUBY, 1, MUS_RG_OBTAIN_KEY_ITEM
# 17 "data/maps/MtEmber_RubyPath_B3F_Frlg/scripts.pory"
# 9 "data/maps/MtEmber_RubyPath_B3F_Frlg/scripts.pory"
# 18 "data/maps/MtEmber_RubyPath_B3F_Frlg/scripts.pory"
	release
# 19 "data/maps/MtEmber_RubyPath_B3F_Frlg/scripts.pory"
	end
# 20 "data/maps/MtEmber_RubyPath_B3F_Frlg/scripts.pory"

# 21 "data/maps/MtEmber_RubyPath_B3F_Frlg/scripts.pory"

# 22 "data/maps/MtEmber_RubyPath_B3F_Frlg/scripts.pory"
MtEmber_RubyPath_B3F_Text_FoundARuby::
# 23 "data/maps/MtEmber_RubyPath_B3F_Frlg/scripts.pory"
# 13 "data/maps/MtEmber_RubyPath_B3F_Frlg/scripts.pory"
# 24 "data/maps/MtEmber_RubyPath_B3F_Frlg/scripts.pory"
	.string "{PLAYER} found a RUBY!$"
