AquaHideout_B1F_MapScripts::
# 2 "data/maps/AquaHideout_B1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, AquaHideout_B1F_OnResume
# 3 "data/maps/AquaHideout_B1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, AquaHideout_B1F_OnTransition
	.byte 0


AquaHideout_B1F_OnResume::
# 7 "data/maps/AquaHideout_B1F/scripts.pory"
	goto_if_set FLAG_SYS_CTRL_OBJ_DELETE, AquaHideout_B1F_OnResume_2
AquaHideout_B1F_OnResume_1:
	end

AquaHideout_B1F_OnResume_2:
# 8 "data/maps/AquaHideout_B1F/scripts.pory"
	call AquaHideout_B1F_EventScript_TryRemoveElectrode
	goto AquaHideout_B1F_OnResume_1


AquaHideout_B1F_EventScript_TryRemoveElectrode::
# 14 "data/maps/AquaHideout_B1F/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 15 "data/maps/AquaHideout_B1F/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_ne AquaHideout_B1F_EventScript_TryRemoveElectrode_2
AquaHideout_B1F_EventScript_TryRemoveElectrode_1:
# 18 "data/maps/AquaHideout_B1F/scripts.pory"
	removeobject VAR_LAST_TALKED
	return

AquaHideout_B1F_EventScript_TryRemoveElectrode_2:
# 16 "data/maps/AquaHideout_B1F/scripts.pory"
	goto Common_EventScript_NopReturn
	goto AquaHideout_B1F_EventScript_TryRemoveElectrode_1


AquaHideout_B1F_OnTransition::
# 23 "data/maps/AquaHideout_B1F/scripts.pory"
	goto_if_unset FLAG_DEFEATED_ELECTRODE_1_AQUA_HIDEOUT, AquaHideout_B1F_OnTransition_2
AquaHideout_B1F_OnTransition_1:
# 26 "data/maps/AquaHideout_B1F/scripts.pory"
	goto_if_unset FLAG_DEFEATED_ELECTRODE_2_AQUA_HIDEOUT, AquaHideout_B1F_OnTransition_5
AquaHideout_B1F_OnTransition_4:
	end

AquaHideout_B1F_OnTransition_2:
# 24 "data/maps/AquaHideout_B1F/scripts.pory"
	call AquaHideout_B1F_EventScript_ShowElectrode1
	goto AquaHideout_B1F_OnTransition_1

AquaHideout_B1F_OnTransition_5:
# 27 "data/maps/AquaHideout_B1F/scripts.pory"
	call AquaHideout_B1F_EventScript_ShowElectrode2
	goto AquaHideout_B1F_OnTransition_4


AquaHideout_B1F_EventScript_ShowElectrode1::
# 33 "data/maps/AquaHideout_B1F/scripts.pory"
	clearflag FLAG_HIDE_AQUA_HIDEOUT_B1F_ELECTRODE_1
	return


AquaHideout_B1F_EventScript_ShowElectrode2::
# 38 "data/maps/AquaHideout_B1F/scripts.pory"
	clearflag FLAG_HIDE_AQUA_HIDEOUT_B1F_ELECTRODE_2
	return


AquaHideout_B1F_EventScript_Electrode1::
# 43 "data/maps/AquaHideout_B1F/scripts.pory"
	lock
# 44 "data/maps/AquaHideout_B1F/scripts.pory"
	faceplayer
# 45 "data/maps/AquaHideout_B1F/scripts.pory"
	setwildbattle SPECIES_ELECTRODE, 30
# 46 "data/maps/AquaHideout_B1F/scripts.pory"
	waitse
# 47 "data/maps/AquaHideout_B1F/scripts.pory"
	playmoncry SPECIES_ELECTRODE, CRY_MODE_ENCOUNTER
# 48 "data/maps/AquaHideout_B1F/scripts.pory"
	delay 40
# 49 "data/maps/AquaHideout_B1F/scripts.pory"
	waitmoncry
# 50 "data/maps/AquaHideout_B1F/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 51 "data/maps/AquaHideout_B1F/scripts.pory"
	dowildbattle
# 52 "data/maps/AquaHideout_B1F/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 53 "data/maps/AquaHideout_B1F/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 54 "data/maps/AquaHideout_B1F/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq AquaHideout_B1F_EventScript_Electrode1_2
AquaHideout_B1F_EventScript_Electrode1_1:
# 57 "data/maps/AquaHideout_B1F/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq AquaHideout_B1F_EventScript_Electrode1_5
AquaHideout_B1F_EventScript_Electrode1_4:
# 60 "data/maps/AquaHideout_B1F/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq AquaHideout_B1F_EventScript_Electrode1_8
AquaHideout_B1F_EventScript_Electrode1_7:
# 63 "data/maps/AquaHideout_B1F/scripts.pory"
	setflag FLAG_DEFEATED_ELECTRODE_1_AQUA_HIDEOUT
# 64 "data/maps/AquaHideout_B1F/scripts.pory"
	release
	end

AquaHideout_B1F_EventScript_Electrode1_2:
# 55 "data/maps/AquaHideout_B1F/scripts.pory"
	goto AquaHideout_B1F_EventScript_DefeatedElectrode1
	goto AquaHideout_B1F_EventScript_Electrode1_1

AquaHideout_B1F_EventScript_Electrode1_5:
# 58 "data/maps/AquaHideout_B1F/scripts.pory"
	goto AquaHideout_B1F_EventScript_DefeatedElectrode1
	goto AquaHideout_B1F_EventScript_Electrode1_4

AquaHideout_B1F_EventScript_Electrode1_8:
# 61 "data/maps/AquaHideout_B1F/scripts.pory"
	goto AquaHideout_B1F_EventScript_DefeatedElectrode1
	goto AquaHideout_B1F_EventScript_Electrode1_7


AquaHideout_B1F_EventScript_DefeatedElectrode1::
# 69 "data/maps/AquaHideout_B1F/scripts.pory"
	setflag FLAG_DEFEATED_ELECTRODE_1_AQUA_HIDEOUT
# 70 "data/maps/AquaHideout_B1F/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	end


AquaHideout_B1F_EventScript_Electrode2::
# 75 "data/maps/AquaHideout_B1F/scripts.pory"
	lock
# 76 "data/maps/AquaHideout_B1F/scripts.pory"
	faceplayer
# 77 "data/maps/AquaHideout_B1F/scripts.pory"
	setwildbattle SPECIES_ELECTRODE, 30
# 78 "data/maps/AquaHideout_B1F/scripts.pory"
	waitse
# 79 "data/maps/AquaHideout_B1F/scripts.pory"
	playmoncry SPECIES_ELECTRODE, CRY_MODE_ENCOUNTER
# 80 "data/maps/AquaHideout_B1F/scripts.pory"
	delay 40
# 81 "data/maps/AquaHideout_B1F/scripts.pory"
	waitmoncry
# 82 "data/maps/AquaHideout_B1F/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 83 "data/maps/AquaHideout_B1F/scripts.pory"
	dowildbattle
# 84 "data/maps/AquaHideout_B1F/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 85 "data/maps/AquaHideout_B1F/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 86 "data/maps/AquaHideout_B1F/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq AquaHideout_B1F_EventScript_Electrode2_2
AquaHideout_B1F_EventScript_Electrode2_1:
# 89 "data/maps/AquaHideout_B1F/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq AquaHideout_B1F_EventScript_Electrode2_5
AquaHideout_B1F_EventScript_Electrode2_4:
# 92 "data/maps/AquaHideout_B1F/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq AquaHideout_B1F_EventScript_Electrode2_8
AquaHideout_B1F_EventScript_Electrode2_7:
# 95 "data/maps/AquaHideout_B1F/scripts.pory"
	setflag FLAG_DEFEATED_ELECTRODE_2_AQUA_HIDEOUT
# 96 "data/maps/AquaHideout_B1F/scripts.pory"
	release
	end

AquaHideout_B1F_EventScript_Electrode2_2:
# 87 "data/maps/AquaHideout_B1F/scripts.pory"
	goto AquaHideout_B1F_EventScript_DefeatedElectrode2
	goto AquaHideout_B1F_EventScript_Electrode2_1

AquaHideout_B1F_EventScript_Electrode2_5:
# 90 "data/maps/AquaHideout_B1F/scripts.pory"
	goto AquaHideout_B1F_EventScript_DefeatedElectrode2
	goto AquaHideout_B1F_EventScript_Electrode2_4

AquaHideout_B1F_EventScript_Electrode2_8:
# 93 "data/maps/AquaHideout_B1F/scripts.pory"
	goto AquaHideout_B1F_EventScript_DefeatedElectrode2
	goto AquaHideout_B1F_EventScript_Electrode2_7


AquaHideout_B1F_EventScript_DefeatedElectrode2::
# 101 "data/maps/AquaHideout_B1F/scripts.pory"
	setflag FLAG_DEFEATED_ELECTRODE_2_AQUA_HIDEOUT
# 102 "data/maps/AquaHideout_B1F/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	end


AquaHideout_B1F_EventScript_Grunt2::
# 107 "data/maps/AquaHideout_B1F/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_AQUA_HIDEOUT_2, AquaHideout_B1F_Text_Grunt2Intro, AquaHideout_B1F_Text_Grunt2Defeat, AquaHideout_B1F_EventScript_Grunt2Defeated
# 108 "data/maps/AquaHideout_B1F/scripts.pory"
	msgbox AquaHideout_B1F_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
	end


AquaHideout_B1F_EventScript_Grunt2Defeated::
# 113 "data/maps/AquaHideout_B1F/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 114 "data/maps/AquaHideout_B1F/scripts.pory"
	waitmovement 0
# 115 "data/maps/AquaHideout_B1F/scripts.pory"
	msgbox AquaHideout_B1F_Text_Grunt2PostBattle, MSGBOX_DEFAULT
# 116 "data/maps/AquaHideout_B1F/scripts.pory"
	release
	end


AquaHideout_B1F_EventScript_Grunt3::
# 121 "data/maps/AquaHideout_B1F/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_AQUA_HIDEOUT_3, AquaHideout_B1F_Text_Grunt3Intro, AquaHideout_B1F_Text_Grunt3Defeat, AquaHideout_B1F_EventScript_Grunt3Defeated
# 122 "data/maps/AquaHideout_B1F/scripts.pory"
	msgbox AquaHideout_B1F_Text_Grunt3PostBattle, MSGBOX_AUTOCLOSE
	end


AquaHideout_B1F_EventScript_Grunt3Defeated::
# 127 "data/maps/AquaHideout_B1F/scripts.pory"
	msgbox AquaHideout_B1F_Text_Grunt3PostBattle, MSGBOX_DEFAULT
# 128 "data/maps/AquaHideout_B1F/scripts.pory"
	release
	end


AquaHideout_B1F_EventScript_Grunt5::
# 133 "data/maps/AquaHideout_B1F/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_AQUA_HIDEOUT_5, AquaHideout_B1F_Text_Grunt5Intro, AquaHideout_B1F_Text_Grunt5Defeat
# 134 "data/maps/AquaHideout_B1F/scripts.pory"
	msgbox AquaHideout_B1F_Text_Grunt5PostBattle, MSGBOX_AUTOCLOSE
	end


AquaHideout_B1F_EventScript_Grunt7::
# 139 "data/maps/AquaHideout_B1F/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_AQUA_HIDEOUT_7, AquaHideout_B1F_Text_Grunt7Intro, AquaHideout_B1F_Text_Grunt7Defeat
# 140 "data/maps/AquaHideout_B1F/scripts.pory"
	msgbox AquaHideout_B1F_Text_Grunt7PostBattle, MSGBOX_AUTOCLOSE
	end


AquaHideout_B1F_Text_Grunt2Intro::
# 144 "data/maps/AquaHideout_B1F/scripts.pory"
	.string "If you want to know the secret about\n"
	.string "our HIDEOUT, you have me to beat!$"

AquaHideout_B1F_Text_Grunt2Defeat::
# 149 "data/maps/AquaHideout_B1F/scripts.pory"
	.string "I can't win at all…$"

AquaHideout_B1F_Text_Grunt2PostBattle::
# 153 "data/maps/AquaHideout_B1F/scripts.pory"
	.string "Our HIDEOUT's secret?\p"
	.string "Well, let's just say…\n"
	.string "There's a submarine at the far end!\p"
	.string "But, by now…\n"
	.string "Kekekeke…$"

AquaHideout_B1F_Text_Grunt3Intro::
# 161 "data/maps/AquaHideout_B1F/scripts.pory"
	.string "Fuel supply loaded A-OK!\n"
	.string "In-cruise snacks loaded A-OK!\p"
	.string "Nothing left to do but KO a pesky\n"
	.string "meddler!$"

AquaHideout_B1F_Text_Grunt3Defeat::
# 168 "data/maps/AquaHideout_B1F/scripts.pory"
	.string "I took a serious licking!$"

AquaHideout_B1F_Text_Grunt3PostBattle::
# 172 "data/maps/AquaHideout_B1F/scripts.pory"
	.string "Humph!\n"
	.string "This was supposed to happen!\p"
	.string "My mission was to just hold you up!$"

AquaHideout_B1F_Text_Grunt5Intro::
# 178 "data/maps/AquaHideout_B1F/scripts.pory"
	.string "Yawn… Keeping watch over the\n"
	.string "HIDEOUT bores me. I'll take you on.$"

AquaHideout_B1F_Text_Grunt5Defeat::
# 183 "data/maps/AquaHideout_B1F/scripts.pory"
	.string "Yawn…\n"
	.string "Oh, I lost…$"

AquaHideout_B1F_Text_Grunt5PostBattle::
# 188 "data/maps/AquaHideout_B1F/scripts.pory"
	.string "If you scurry too much, other TEAM\n"
	.string "AQUA members might get you.$"

AquaHideout_B1F_Text_Grunt7Intro::
# 193 "data/maps/AquaHideout_B1F/scripts.pory"
	.string "Hey!\n"
	.string "You there!\p"
	.string "Which do you think is cooler?\n"
	.string "TEAM AQUA's uniform or TEAM MAGMA's?$"

AquaHideout_B1F_Text_Grunt7Defeat::
# 200 "data/maps/AquaHideout_B1F/scripts.pory"
	.string "I lost in a cool way…$"

AquaHideout_B1F_Text_Grunt7PostBattle::
# 204 "data/maps/AquaHideout_B1F/scripts.pory"
	.string "If you have a cool uniform, you look\n"
	.string "good even in a loss, don't you think?$"
