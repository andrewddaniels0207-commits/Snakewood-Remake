TrainerHill_Roof_MapScripts::
# 2 "data/maps/TrainerHill_Roof/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, TrainerHill_OnResume
# 3 "data/maps/TrainerHill_Roof/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, TrainerHill_OnFrame
	.byte 0


TrainerHill_Roof_EventScript_Owner::
# 7 "data/maps/TrainerHill_Roof/scripts.pory"
	trainerhill_settrainerflags
# 8 "data/maps/TrainerHill_Roof/scripts.pory"
	lock
# 9 "data/maps/TrainerHill_Roof/scripts.pory"
	faceplayer
# 10 "data/maps/TrainerHill_Roof/scripts.pory"
	trainerhill_getownerstate
# 11 "data/maps/TrainerHill_Roof/scripts.pory"
	switch VAR_RESULT
# 12 "data/maps/TrainerHill_Roof/scripts.pory"
	case 0, TrainerHill_Roof_EventScript_Owner_2
# 14 "data/maps/TrainerHill_Roof/scripts.pory"
	case 1, TrainerHill_Roof_EventScript_Owner_3
# 16 "data/maps/TrainerHill_Roof/scripts.pory"
	case 2, TrainerHill_Roof_EventScript_Owner_4
	return

TrainerHill_Roof_EventScript_Owner_2:
# 13 "data/maps/TrainerHill_Roof/scripts.pory"
	goto TrainerHill_Roof_EventScript_Arrived
	return

TrainerHill_Roof_EventScript_Owner_3:
# 15 "data/maps/TrainerHill_Roof/scripts.pory"
	goto TrainerHill_Roof_EventScript_GivePrize
	return

TrainerHill_Roof_EventScript_Owner_4:
# 17 "data/maps/TrainerHill_Roof/scripts.pory"
	goto TrainerHill_Roof_EventScript_AlreadyReceivedPrize
	return


TrainerHill_Roof_EventScript_Arrived::
# 22 "data/maps/TrainerHill_Roof/scripts.pory"
	msgbox TrainerHill_Roof_Text_YouFinallyCameBravo, MSGBOX_DEFAULT
	return


TrainerHill_Roof_EventScript_GivePrize::
# 26 "data/maps/TrainerHill_Roof/scripts.pory"
	trainerhill_giveprize
# 27 "data/maps/TrainerHill_Roof/scripts.pory"
	switch VAR_RESULT
# 28 "data/maps/TrainerHill_Roof/scripts.pory"
	case 0, TrainerHill_Roof_EventScript_GivePrize_2
# 30 "data/maps/TrainerHill_Roof/scripts.pory"
	case 1, TrainerHill_Roof_EventScript_GivePrize_3
# 32 "data/maps/TrainerHill_Roof/scripts.pory"
	case 2, TrainerHill_Roof_EventScript_GivePrize_4
	return

TrainerHill_Roof_EventScript_GivePrize_2:
# 29 "data/maps/TrainerHill_Roof/scripts.pory"
	goto TrainerHill_Roof_EventScript_ReceivePrize
	return

TrainerHill_Roof_EventScript_GivePrize_3:
# 31 "data/maps/TrainerHill_Roof/scripts.pory"
	goto TrainerHill_Roof_EventScript_NoRoomForPrize
	return

TrainerHill_Roof_EventScript_GivePrize_4:
# 33 "data/maps/TrainerHill_Roof/scripts.pory"
	goto TrainerHill_Roof_EventScript_CheckFinalTime
	return


TrainerHill_Roof_EventScript_ReceivePrize::
# 38 "data/maps/TrainerHill_Roof/scripts.pory"
	msgbox TrainerHill_Roof_Text_HaveTheMostMarvelousGift, MSGBOX_DEFAULT
# 39 "data/maps/TrainerHill_Roof/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 40 "data/maps/TrainerHill_Roof/scripts.pory"
	message gText_ObtainedTheItem
# 41 "data/maps/TrainerHill_Roof/scripts.pory"
	waitfanfare
# 42 "data/maps/TrainerHill_Roof/scripts.pory"
	waitmessage
# 43 "data/maps/TrainerHill_Roof/scripts.pory"
	goto TrainerHill_Roof_EventScript_CheckFinalTime
	return


TrainerHill_Roof_EventScript_NoRoomForPrize::
# 47 "data/maps/TrainerHill_Roof/scripts.pory"
	msgbox TrainerHill_Roof_Text_HaveTheMostMarvelousGift, MSGBOX_DEFAULT
# 48 "data/maps/TrainerHill_Roof/scripts.pory"
	msgbox gText_TheBagIsFull, MSGBOX_DEFAULT
# 49 "data/maps/TrainerHill_Roof/scripts.pory"
	msgbox TrainerHill_Roof_Text_FullUpBeBackLaterForThis, MSGBOX_DEFAULT
# 50 "data/maps/TrainerHill_Roof/scripts.pory"
	goto TrainerHill_Roof_EventScript_CheckFinalTime
	return


TrainerHill_Roof_EventScript_CheckFinalTime::
# 54 "data/maps/TrainerHill_Roof/scripts.pory"
	trainerhill_finaltime
# 55 "data/maps/TrainerHill_Roof/scripts.pory"
	switch VAR_RESULT
# 56 "data/maps/TrainerHill_Roof/scripts.pory"
	case 0, TrainerHill_Roof_EventScript_CheckFinalTime_2
# 58 "data/maps/TrainerHill_Roof/scripts.pory"
	case 1, TrainerHill_Roof_EventScript_CheckFinalTime_3
# 60 "data/maps/TrainerHill_Roof/scripts.pory"
	case 2, TrainerHill_Roof_EventScript_CheckFinalTime_4
	return

TrainerHill_Roof_EventScript_CheckFinalTime_2:
# 57 "data/maps/TrainerHill_Roof/scripts.pory"
	goto TrainerHill_Roof_EventScript_NewRecord
	return

TrainerHill_Roof_EventScript_CheckFinalTime_3:
# 59 "data/maps/TrainerHill_Roof/scripts.pory"
	goto TrainerHill_Roof_EventScript_NoNewRecord
	return

TrainerHill_Roof_EventScript_CheckFinalTime_4:
# 61 "data/maps/TrainerHill_Roof/scripts.pory"
	goto TrainerHill_Roof_EventScript_EndSpeakToOwner
	return


TrainerHill_Roof_EventScript_NewRecord::
# 66 "data/maps/TrainerHill_Roof/scripts.pory"
	msgbox TrainerHill_Roof_Text_GotHereMarvelouslyQuickly, MSGBOX_DEFAULT
# 67 "data/maps/TrainerHill_Roof/scripts.pory"
	goto TrainerHill_Roof_EventScript_EndSpeakToOwner
	end


TrainerHill_Roof_EventScript_NoNewRecord::
# 72 "data/maps/TrainerHill_Roof/scripts.pory"
	msgbox TrainerHill_Roof_Text_YouWerentVeryQuick, MSGBOX_DEFAULT
# 73 "data/maps/TrainerHill_Roof/scripts.pory"
	goto TrainerHill_Roof_EventScript_EndSpeakToOwner
	end


TrainerHill_Roof_EventScript_EndSpeakToOwner::
# 78 "data/maps/TrainerHill_Roof/scripts.pory"
	msgbox TrainerHill_Roof_Text_ArriveZippierNextTime, MSGBOX_DEFAULT
# 79 "data/maps/TrainerHill_Roof/scripts.pory"
	release
	end


TrainerHill_Roof_EventScript_AlreadyReceivedPrize::
# 84 "data/maps/TrainerHill_Roof/scripts.pory"
	msgbox TrainerHill_Roof_Text_ArriveZippierNextTime, MSGBOX_DEFAULT
# 85 "data/maps/TrainerHill_Roof/scripts.pory"
	release
	end

