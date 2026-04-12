# 1 "data/maps/TrainerHill_Roof/scripts.pory"

# 2 "data/maps/TrainerHill_Roof/scripts.pory"
TrainerHill_Roof_MapScripts::
# 3 "data/maps/TrainerHill_Roof/scripts.pory"
# 2 "data/maps/TrainerHill_Roof/scripts.pory"
# 4 "data/maps/TrainerHill_Roof/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, TrainerHill_OnResume
# 5 "data/maps/TrainerHill_Roof/scripts.pory"
# 3 "data/maps/TrainerHill_Roof/scripts.pory"
# 6 "data/maps/TrainerHill_Roof/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, TrainerHill_OnFrame
# 7 "data/maps/TrainerHill_Roof/scripts.pory"
	.byte 0
# 8 "data/maps/TrainerHill_Roof/scripts.pory"

# 9 "data/maps/TrainerHill_Roof/scripts.pory"

# 10 "data/maps/TrainerHill_Roof/scripts.pory"
TrainerHill_Roof_EventScript_Owner::
# 11 "data/maps/TrainerHill_Roof/scripts.pory"
# 7 "data/maps/TrainerHill_Roof/scripts.pory"
# 12 "data/maps/TrainerHill_Roof/scripts.pory"
	trainerhill_settrainerflags
# 13 "data/maps/TrainerHill_Roof/scripts.pory"
# 8 "data/maps/TrainerHill_Roof/scripts.pory"
# 14 "data/maps/TrainerHill_Roof/scripts.pory"
	lock
# 15 "data/maps/TrainerHill_Roof/scripts.pory"
# 9 "data/maps/TrainerHill_Roof/scripts.pory"
# 16 "data/maps/TrainerHill_Roof/scripts.pory"
	faceplayer
# 17 "data/maps/TrainerHill_Roof/scripts.pory"
# 10 "data/maps/TrainerHill_Roof/scripts.pory"
# 18 "data/maps/TrainerHill_Roof/scripts.pory"
	trainerhill_getownerstate
# 19 "data/maps/TrainerHill_Roof/scripts.pory"
# 11 "data/maps/TrainerHill_Roof/scripts.pory"
# 20 "data/maps/TrainerHill_Roof/scripts.pory"
	switch VAR_RESULT
# 21 "data/maps/TrainerHill_Roof/scripts.pory"
# 12 "data/maps/TrainerHill_Roof/scripts.pory"
# 22 "data/maps/TrainerHill_Roof/scripts.pory"
	case 0, TrainerHill_Roof_EventScript_Owner_2
# 23 "data/maps/TrainerHill_Roof/scripts.pory"
# 14 "data/maps/TrainerHill_Roof/scripts.pory"
# 24 "data/maps/TrainerHill_Roof/scripts.pory"
	case 1, TrainerHill_Roof_EventScript_Owner_3
# 25 "data/maps/TrainerHill_Roof/scripts.pory"
# 16 "data/maps/TrainerHill_Roof/scripts.pory"
# 26 "data/maps/TrainerHill_Roof/scripts.pory"
	case 2, TrainerHill_Roof_EventScript_Owner_4
# 27 "data/maps/TrainerHill_Roof/scripts.pory"
	return
# 28 "data/maps/TrainerHill_Roof/scripts.pory"

# 29 "data/maps/TrainerHill_Roof/scripts.pory"
TrainerHill_Roof_EventScript_Owner_2:
# 30 "data/maps/TrainerHill_Roof/scripts.pory"
# 13 "data/maps/TrainerHill_Roof/scripts.pory"
# 31 "data/maps/TrainerHill_Roof/scripts.pory"
	goto TrainerHill_Roof_EventScript_Arrived
# 32 "data/maps/TrainerHill_Roof/scripts.pory"
	return
# 33 "data/maps/TrainerHill_Roof/scripts.pory"

# 34 "data/maps/TrainerHill_Roof/scripts.pory"
TrainerHill_Roof_EventScript_Owner_3:
# 35 "data/maps/TrainerHill_Roof/scripts.pory"
# 15 "data/maps/TrainerHill_Roof/scripts.pory"
# 36 "data/maps/TrainerHill_Roof/scripts.pory"
	goto TrainerHill_Roof_EventScript_GivePrize
# 37 "data/maps/TrainerHill_Roof/scripts.pory"
	return
# 38 "data/maps/TrainerHill_Roof/scripts.pory"

# 39 "data/maps/TrainerHill_Roof/scripts.pory"
TrainerHill_Roof_EventScript_Owner_4:
# 40 "data/maps/TrainerHill_Roof/scripts.pory"
# 17 "data/maps/TrainerHill_Roof/scripts.pory"
# 41 "data/maps/TrainerHill_Roof/scripts.pory"
	goto TrainerHill_Roof_EventScript_AlreadyReceivedPrize
# 42 "data/maps/TrainerHill_Roof/scripts.pory"
	return
# 43 "data/maps/TrainerHill_Roof/scripts.pory"

# 44 "data/maps/TrainerHill_Roof/scripts.pory"

# 45 "data/maps/TrainerHill_Roof/scripts.pory"
TrainerHill_Roof_EventScript_Arrived::
# 46 "data/maps/TrainerHill_Roof/scripts.pory"
# 22 "data/maps/TrainerHill_Roof/scripts.pory"
# 47 "data/maps/TrainerHill_Roof/scripts.pory"
	msgbox TrainerHill_Roof_Text_YouFinallyCameBravo, MSGBOX_DEFAULT
# 48 "data/maps/TrainerHill_Roof/scripts.pory"
	return
# 49 "data/maps/TrainerHill_Roof/scripts.pory"

# 50 "data/maps/TrainerHill_Roof/scripts.pory"

# 51 "data/maps/TrainerHill_Roof/scripts.pory"
TrainerHill_Roof_EventScript_GivePrize::
# 52 "data/maps/TrainerHill_Roof/scripts.pory"
# 26 "data/maps/TrainerHill_Roof/scripts.pory"
# 53 "data/maps/TrainerHill_Roof/scripts.pory"
	trainerhill_giveprize
# 54 "data/maps/TrainerHill_Roof/scripts.pory"
# 27 "data/maps/TrainerHill_Roof/scripts.pory"
# 55 "data/maps/TrainerHill_Roof/scripts.pory"
	switch VAR_RESULT
# 56 "data/maps/TrainerHill_Roof/scripts.pory"
# 28 "data/maps/TrainerHill_Roof/scripts.pory"
# 57 "data/maps/TrainerHill_Roof/scripts.pory"
	case 0, TrainerHill_Roof_EventScript_GivePrize_2
# 58 "data/maps/TrainerHill_Roof/scripts.pory"
# 30 "data/maps/TrainerHill_Roof/scripts.pory"
# 59 "data/maps/TrainerHill_Roof/scripts.pory"
	case 1, TrainerHill_Roof_EventScript_GivePrize_3
# 60 "data/maps/TrainerHill_Roof/scripts.pory"
# 32 "data/maps/TrainerHill_Roof/scripts.pory"
# 61 "data/maps/TrainerHill_Roof/scripts.pory"
	case 2, TrainerHill_Roof_EventScript_GivePrize_4
# 62 "data/maps/TrainerHill_Roof/scripts.pory"
	return
# 63 "data/maps/TrainerHill_Roof/scripts.pory"

# 64 "data/maps/TrainerHill_Roof/scripts.pory"
TrainerHill_Roof_EventScript_GivePrize_2:
# 65 "data/maps/TrainerHill_Roof/scripts.pory"
# 29 "data/maps/TrainerHill_Roof/scripts.pory"
# 66 "data/maps/TrainerHill_Roof/scripts.pory"
	goto TrainerHill_Roof_EventScript_ReceivePrize
# 67 "data/maps/TrainerHill_Roof/scripts.pory"
	return
# 68 "data/maps/TrainerHill_Roof/scripts.pory"

# 69 "data/maps/TrainerHill_Roof/scripts.pory"
TrainerHill_Roof_EventScript_GivePrize_3:
# 70 "data/maps/TrainerHill_Roof/scripts.pory"
# 31 "data/maps/TrainerHill_Roof/scripts.pory"
# 71 "data/maps/TrainerHill_Roof/scripts.pory"
	goto TrainerHill_Roof_EventScript_NoRoomForPrize
# 72 "data/maps/TrainerHill_Roof/scripts.pory"
	return
# 73 "data/maps/TrainerHill_Roof/scripts.pory"

# 74 "data/maps/TrainerHill_Roof/scripts.pory"
TrainerHill_Roof_EventScript_GivePrize_4:
# 75 "data/maps/TrainerHill_Roof/scripts.pory"
# 33 "data/maps/TrainerHill_Roof/scripts.pory"
# 76 "data/maps/TrainerHill_Roof/scripts.pory"
	goto TrainerHill_Roof_EventScript_CheckFinalTime
# 77 "data/maps/TrainerHill_Roof/scripts.pory"
	return
# 78 "data/maps/TrainerHill_Roof/scripts.pory"

# 79 "data/maps/TrainerHill_Roof/scripts.pory"

# 80 "data/maps/TrainerHill_Roof/scripts.pory"
TrainerHill_Roof_EventScript_ReceivePrize::
# 81 "data/maps/TrainerHill_Roof/scripts.pory"
# 38 "data/maps/TrainerHill_Roof/scripts.pory"
# 82 "data/maps/TrainerHill_Roof/scripts.pory"
	msgbox TrainerHill_Roof_Text_HaveTheMostMarvelousGift, MSGBOX_DEFAULT
# 83 "data/maps/TrainerHill_Roof/scripts.pory"
# 39 "data/maps/TrainerHill_Roof/scripts.pory"
# 84 "data/maps/TrainerHill_Roof/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 85 "data/maps/TrainerHill_Roof/scripts.pory"
# 40 "data/maps/TrainerHill_Roof/scripts.pory"
# 86 "data/maps/TrainerHill_Roof/scripts.pory"
	message gText_ObtainedTheItem
# 87 "data/maps/TrainerHill_Roof/scripts.pory"
# 41 "data/maps/TrainerHill_Roof/scripts.pory"
# 88 "data/maps/TrainerHill_Roof/scripts.pory"
	waitfanfare
# 89 "data/maps/TrainerHill_Roof/scripts.pory"
# 42 "data/maps/TrainerHill_Roof/scripts.pory"
# 90 "data/maps/TrainerHill_Roof/scripts.pory"
	waitmessage
# 91 "data/maps/TrainerHill_Roof/scripts.pory"
# 43 "data/maps/TrainerHill_Roof/scripts.pory"
# 92 "data/maps/TrainerHill_Roof/scripts.pory"
	goto TrainerHill_Roof_EventScript_CheckFinalTime
# 93 "data/maps/TrainerHill_Roof/scripts.pory"
	return
# 94 "data/maps/TrainerHill_Roof/scripts.pory"

# 95 "data/maps/TrainerHill_Roof/scripts.pory"

# 96 "data/maps/TrainerHill_Roof/scripts.pory"
TrainerHill_Roof_EventScript_NoRoomForPrize::
# 97 "data/maps/TrainerHill_Roof/scripts.pory"
# 47 "data/maps/TrainerHill_Roof/scripts.pory"
# 98 "data/maps/TrainerHill_Roof/scripts.pory"
	msgbox TrainerHill_Roof_Text_HaveTheMostMarvelousGift, MSGBOX_DEFAULT
# 99 "data/maps/TrainerHill_Roof/scripts.pory"
# 48 "data/maps/TrainerHill_Roof/scripts.pory"
# 100 "data/maps/TrainerHill_Roof/scripts.pory"
	msgbox gText_TheBagIsFull, MSGBOX_DEFAULT
# 101 "data/maps/TrainerHill_Roof/scripts.pory"
# 49 "data/maps/TrainerHill_Roof/scripts.pory"
# 102 "data/maps/TrainerHill_Roof/scripts.pory"
	msgbox TrainerHill_Roof_Text_FullUpBeBackLaterForThis, MSGBOX_DEFAULT
# 103 "data/maps/TrainerHill_Roof/scripts.pory"
# 50 "data/maps/TrainerHill_Roof/scripts.pory"
# 104 "data/maps/TrainerHill_Roof/scripts.pory"
	goto TrainerHill_Roof_EventScript_CheckFinalTime
# 105 "data/maps/TrainerHill_Roof/scripts.pory"
	return
# 106 "data/maps/TrainerHill_Roof/scripts.pory"

# 107 "data/maps/TrainerHill_Roof/scripts.pory"

# 108 "data/maps/TrainerHill_Roof/scripts.pory"
TrainerHill_Roof_EventScript_CheckFinalTime::
# 109 "data/maps/TrainerHill_Roof/scripts.pory"
# 54 "data/maps/TrainerHill_Roof/scripts.pory"
# 110 "data/maps/TrainerHill_Roof/scripts.pory"
	trainerhill_finaltime
# 111 "data/maps/TrainerHill_Roof/scripts.pory"
# 55 "data/maps/TrainerHill_Roof/scripts.pory"
# 112 "data/maps/TrainerHill_Roof/scripts.pory"
	switch VAR_RESULT
# 113 "data/maps/TrainerHill_Roof/scripts.pory"
# 56 "data/maps/TrainerHill_Roof/scripts.pory"
# 114 "data/maps/TrainerHill_Roof/scripts.pory"
	case 0, TrainerHill_Roof_EventScript_CheckFinalTime_2
# 115 "data/maps/TrainerHill_Roof/scripts.pory"
# 58 "data/maps/TrainerHill_Roof/scripts.pory"
# 116 "data/maps/TrainerHill_Roof/scripts.pory"
	case 1, TrainerHill_Roof_EventScript_CheckFinalTime_3
# 117 "data/maps/TrainerHill_Roof/scripts.pory"
# 60 "data/maps/TrainerHill_Roof/scripts.pory"
# 118 "data/maps/TrainerHill_Roof/scripts.pory"
	case 2, TrainerHill_Roof_EventScript_CheckFinalTime_4
# 119 "data/maps/TrainerHill_Roof/scripts.pory"
	return
# 120 "data/maps/TrainerHill_Roof/scripts.pory"

# 121 "data/maps/TrainerHill_Roof/scripts.pory"
TrainerHill_Roof_EventScript_CheckFinalTime_2:
# 122 "data/maps/TrainerHill_Roof/scripts.pory"
# 57 "data/maps/TrainerHill_Roof/scripts.pory"
# 123 "data/maps/TrainerHill_Roof/scripts.pory"
	goto TrainerHill_Roof_EventScript_NewRecord
# 124 "data/maps/TrainerHill_Roof/scripts.pory"
	return
# 125 "data/maps/TrainerHill_Roof/scripts.pory"

# 126 "data/maps/TrainerHill_Roof/scripts.pory"
TrainerHill_Roof_EventScript_CheckFinalTime_3:
# 127 "data/maps/TrainerHill_Roof/scripts.pory"
# 59 "data/maps/TrainerHill_Roof/scripts.pory"
# 128 "data/maps/TrainerHill_Roof/scripts.pory"
	goto TrainerHill_Roof_EventScript_NoNewRecord
# 129 "data/maps/TrainerHill_Roof/scripts.pory"
	return
# 130 "data/maps/TrainerHill_Roof/scripts.pory"

# 131 "data/maps/TrainerHill_Roof/scripts.pory"
TrainerHill_Roof_EventScript_CheckFinalTime_4:
# 132 "data/maps/TrainerHill_Roof/scripts.pory"
# 61 "data/maps/TrainerHill_Roof/scripts.pory"
# 133 "data/maps/TrainerHill_Roof/scripts.pory"
	goto TrainerHill_Roof_EventScript_EndSpeakToOwner
# 134 "data/maps/TrainerHill_Roof/scripts.pory"
	return
# 135 "data/maps/TrainerHill_Roof/scripts.pory"

# 136 "data/maps/TrainerHill_Roof/scripts.pory"

# 137 "data/maps/TrainerHill_Roof/scripts.pory"
TrainerHill_Roof_EventScript_NewRecord::
# 138 "data/maps/TrainerHill_Roof/scripts.pory"
# 66 "data/maps/TrainerHill_Roof/scripts.pory"
# 139 "data/maps/TrainerHill_Roof/scripts.pory"
	msgbox TrainerHill_Roof_Text_GotHereMarvelouslyQuickly, MSGBOX_DEFAULT
# 140 "data/maps/TrainerHill_Roof/scripts.pory"
# 67 "data/maps/TrainerHill_Roof/scripts.pory"
# 141 "data/maps/TrainerHill_Roof/scripts.pory"
	goto TrainerHill_Roof_EventScript_EndSpeakToOwner
# 142 "data/maps/TrainerHill_Roof/scripts.pory"
	end
# 143 "data/maps/TrainerHill_Roof/scripts.pory"

# 144 "data/maps/TrainerHill_Roof/scripts.pory"

# 145 "data/maps/TrainerHill_Roof/scripts.pory"
TrainerHill_Roof_EventScript_NoNewRecord::
# 146 "data/maps/TrainerHill_Roof/scripts.pory"
# 72 "data/maps/TrainerHill_Roof/scripts.pory"
# 147 "data/maps/TrainerHill_Roof/scripts.pory"
	msgbox TrainerHill_Roof_Text_YouWerentVeryQuick, MSGBOX_DEFAULT
# 148 "data/maps/TrainerHill_Roof/scripts.pory"
# 73 "data/maps/TrainerHill_Roof/scripts.pory"
# 149 "data/maps/TrainerHill_Roof/scripts.pory"
	goto TrainerHill_Roof_EventScript_EndSpeakToOwner
# 150 "data/maps/TrainerHill_Roof/scripts.pory"
	end
# 151 "data/maps/TrainerHill_Roof/scripts.pory"

# 152 "data/maps/TrainerHill_Roof/scripts.pory"

# 153 "data/maps/TrainerHill_Roof/scripts.pory"
TrainerHill_Roof_EventScript_EndSpeakToOwner::
# 154 "data/maps/TrainerHill_Roof/scripts.pory"
# 78 "data/maps/TrainerHill_Roof/scripts.pory"
# 155 "data/maps/TrainerHill_Roof/scripts.pory"
	msgbox TrainerHill_Roof_Text_ArriveZippierNextTime, MSGBOX_DEFAULT
# 156 "data/maps/TrainerHill_Roof/scripts.pory"
# 79 "data/maps/TrainerHill_Roof/scripts.pory"
# 157 "data/maps/TrainerHill_Roof/scripts.pory"
	release
# 158 "data/maps/TrainerHill_Roof/scripts.pory"
	end
# 159 "data/maps/TrainerHill_Roof/scripts.pory"

# 160 "data/maps/TrainerHill_Roof/scripts.pory"

# 161 "data/maps/TrainerHill_Roof/scripts.pory"
TrainerHill_Roof_EventScript_AlreadyReceivedPrize::
# 162 "data/maps/TrainerHill_Roof/scripts.pory"
# 84 "data/maps/TrainerHill_Roof/scripts.pory"
# 163 "data/maps/TrainerHill_Roof/scripts.pory"
	msgbox TrainerHill_Roof_Text_ArriveZippierNextTime, MSGBOX_DEFAULT
# 164 "data/maps/TrainerHill_Roof/scripts.pory"
# 85 "data/maps/TrainerHill_Roof/scripts.pory"
# 165 "data/maps/TrainerHill_Roof/scripts.pory"
	release
# 166 "data/maps/TrainerHill_Roof/scripts.pory"
	end
