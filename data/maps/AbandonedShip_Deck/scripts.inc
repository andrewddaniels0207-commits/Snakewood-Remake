AbandonedShip_Deck_MapScripts::
# 2 "data/maps/AbandonedShip_Deck/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, AbandonedShip_Deck_OnTransition
	.byte 0


AbandonedShip_Deck_OnTransition::
# 6 "data/maps/AbandonedShip_Deck/scripts.pory"
	setflag FLAG_LANDMARK_ABANDONED_SHIP
	end

