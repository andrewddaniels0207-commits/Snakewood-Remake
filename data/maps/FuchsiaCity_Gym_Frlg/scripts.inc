# 1 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"

# 2 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
FuchsiaCity_Gym_Frlg_MapScripts::
# 3 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.byte 0
# 4 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"

# 5 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"

# 6 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
FuchsiaCity_Gym_EventScript_Koga::
# 7 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
# 4 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
# 8 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	famechecker FAMECHECKER_KOGA, FCPICKSTATE_COLORED, UpdatePickStateFromSpecialVar8005
# 9 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
# 5 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
# 10 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	trainerbattle_single TRAINER_LEADER_KOGA, FuchsiaCity_Gym_Text_KogaIntro, FuchsiaCity_Gym_Text_KogaDefeat, FuchsiaCity_Gym_EventScript_DefeatedKoga, NO_MUSIC
# 11 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
# 6 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
# 12 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	goto_if_unset FLAG_GOT_TM06_FROM_KOGA, FuchsiaCity_Gym_EventScript_Koga_2
# 13 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
FuchsiaCity_Gym_EventScript_Koga_1:
# 14 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
# 9 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
# 15 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	msgbox FuchsiaCity_Gym_Text_KogaPostBattle
# 16 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
# 10 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
# 17 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	release
# 18 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	end
# 19 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"

# 20 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
FuchsiaCity_Gym_EventScript_Koga_2:
# 21 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
# 7 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
# 22 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	goto FuchsiaCity_Gym_EventScript_GiveTM06
# 23 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	goto FuchsiaCity_Gym_EventScript_Koga_1
# 24 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"

# 25 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"

# 26 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
FuchsiaCity_Gym_EventScript_DefeatedKoga::
# 27 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
# 15 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
# 28 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	famechecker FAMECHECKER_KOGA, 1
# 29 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
# 16 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
# 30 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	clearflag FLAG_HIDE_FAME_CHECKER_KOGA_JOURNAL
# 31 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
# 17 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
# 32 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	setflag FLAG_DEFEATED_KOGA
# 33 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
# 18 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
# 34 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	setflag FLAG_BADGE05_GET
# 35 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
# 19 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
# 36 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	set_gym_trainers_frlg 5
# 37 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
# 20 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
# 38 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	goto FuchsiaCity_Gym_EventScript_GiveTM06
# 39 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	end
# 40 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"

# 41 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"

# 42 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
FuchsiaCity_Gym_EventScript_GiveTM06::
# 43 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
# 25 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
# 44 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	msgbox FuchsiaCity_Gym_Text_KogaExplainSoulBadge
# 45 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
# 26 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
# 46 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	checkitemspace ITEM_TM06
# 47 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
# 27 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
# 48 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	compare VAR_RESULT, FALSE
# 49 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	goto_if_eq FuchsiaCity_Gym_EventScript_GiveTM06_2
# 50 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
FuchsiaCity_Gym_EventScript_GiveTM06_1:
# 51 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
# 30 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
# 52 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	giveitem_msg FuchsiaCity_Gym_Text_ReceivedTM06FromKoga, ITEM_TM06
# 53 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
# 31 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
# 54 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	setflag FLAG_GOT_TM06_FROM_KOGA
# 55 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
# 32 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
# 56 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	msgbox FuchsiaCity_Gym_Text_KogaExplainTM06
# 57 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
# 33 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
# 58 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	release
# 59 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	end
# 60 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"

# 61 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
FuchsiaCity_Gym_EventScript_GiveTM06_2:
# 62 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
# 28 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
# 63 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	goto FuchsiaCity_Gym_EventScript_NoRoomForTM06
# 64 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	goto FuchsiaCity_Gym_EventScript_GiveTM06_1
# 65 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"

# 66 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"

# 67 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
FuchsiaCity_Gym_EventScript_NoRoomForTM06::
# 68 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
# 38 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
# 69 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	msgbox FuchsiaCity_Gym_Text_MakeSpaceForThis
# 70 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
# 39 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
# 71 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	release
# 72 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	end
# 73 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"

# 74 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"

# 75 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
FuchsiaCity_Gym_EventScript_Phil::
# 76 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
# 44 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
# 77 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	trainerbattle_single TRAINER_TAMER_PHIL, FuchsiaCity_Gym_Text_PhilIntro, FuchsiaCity_Gym_Text_PhilDefeat
# 78 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
# 45 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
# 79 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	msgbox FuchsiaCity_Gym_Text_PhilPostBattle, MSGBOX_AUTOCLOSE
# 80 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	end
# 81 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"

# 82 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"

# 83 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
FuchsiaCity_Gym_EventScript_Edgar::
# 84 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
# 50 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
# 85 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	trainerbattle_single TRAINER_TAMER_EDGAR, FuchsiaCity_Gym_Text_EdgarIntro, FuchsiaCity_Gym_Text_EdgarDefeat
# 86 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
# 51 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
# 87 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	msgbox FuchsiaCity_Gym_Text_EdgarPostBattle, MSGBOX_AUTOCLOSE
# 88 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	end
# 89 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"

# 90 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"

# 91 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
FuchsiaCity_Gym_EventScript_Kirk::
# 92 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
# 56 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
# 93 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	trainerbattle_single TRAINER_JUGGLER_KIRK, FuchsiaCity_Gym_Text_KirkIntro, FuchsiaCity_Gym_Text_KirkDefeat
# 94 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
# 57 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
# 95 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	famechecker FAMECHECKER_KOGA, 2
# 96 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
# 58 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
# 97 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	msgbox FuchsiaCity_Gym_Text_KirkPostBattle, MSGBOX_AUTOCLOSE
# 98 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	end
# 99 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"

# 100 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"

# 101 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
FuchsiaCity_Gym_EventScript_Shawn::
# 102 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
# 63 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
# 103 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	trainerbattle_single TRAINER_JUGGLER_SHAWN, FuchsiaCity_Gym_Text_ShawnIntro, FuchsiaCity_Gym_Text_ShawnDefeat
# 104 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
# 64 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
# 105 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	msgbox FuchsiaCity_Gym_Text_ShawnPostBattle, MSGBOX_AUTOCLOSE
# 106 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	end
# 107 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"

# 108 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"

# 109 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
FuchsiaCity_Gym_EventScript_Kayden::
# 110 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
# 69 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
# 111 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	trainerbattle_single TRAINER_JUGGLER_KAYDEN, FuchsiaCity_Gym_Text_KaydenIntro, FuchsiaCity_Gym_Text_KaydenDefeat
# 112 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
# 70 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
# 113 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	msgbox FuchsiaCity_Gym_Text_KaydenPostBattle, MSGBOX_AUTOCLOSE
# 114 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	end
# 115 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"

# 116 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"

# 117 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
FuchsiaCity_Gym_EventScript_Nate::
# 118 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
# 75 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
# 119 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	trainerbattle_single TRAINER_JUGGLER_NATE, FuchsiaCity_Gym_Text_NateIntro, FuchsiaCity_Gym_Text_NateDefeat
# 120 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
# 76 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
# 121 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	msgbox FuchsiaCity_Gym_Text_NatePostBattle, MSGBOX_AUTOCLOSE
# 122 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	end
# 123 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"

# 124 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"

# 125 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
FuchsiaCity_Gym_EventScript_GymGuy::
# 126 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
# 81 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
# 127 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	lock
# 128 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
# 82 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
# 129 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	faceplayer
# 130 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
# 83 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
# 131 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	goto_if_set FLAG_DEFEATED_KOGA, FuchsiaCity_Gym_EventScript_GymGuy_2
# 132 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
FuchsiaCity_Gym_EventScript_GymGuy_1:
# 133 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
# 86 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
# 134 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	msgbox FuchsiaCity_Gym_Text_GymGuyAdvice
# 135 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
# 87 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
# 136 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	release
# 137 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	end
# 138 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"

# 139 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
FuchsiaCity_Gym_EventScript_GymGuy_2:
# 140 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
# 84 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
# 141 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	goto FuchsiaCity_Gym_EventScript_GymGuyPostVictory
# 142 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	goto FuchsiaCity_Gym_EventScript_GymGuy_1
# 143 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"

# 144 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"

# 145 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
FuchsiaCity_Gym_EventScript_GymGuyPostVictory::
# 146 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
# 92 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
# 147 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	msgbox FuchsiaCity_Gym_Text_GymGuyPostVictory
# 148 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
# 93 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
# 149 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	release
# 150 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	end
# 151 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"

# 152 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"

# 153 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
FuchsiaCity_Gym_EventScript_GymStatue::
# 154 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
# 98 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
# 155 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	lockall
# 156 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
# 99 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
# 157 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	goto_if_set FLAG_BADGE05_GET, FuchsiaCity_Gym_EventScript_GymStatue_2
# 158 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
FuchsiaCity_Gym_EventScript_GymStatue_1:
# 159 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
# 102 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
# 160 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	msgbox FuchsiaCity_Gym_Text_GymStatue
# 161 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
# 103 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
# 162 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	releaseall
# 163 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	end
# 164 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"

# 165 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
FuchsiaCity_Gym_EventScript_GymStatue_2:
# 166 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
# 100 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
# 167 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	goto FuchsiaCity_Gym_EventScript_GymStatuePostVictory
# 168 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	goto FuchsiaCity_Gym_EventScript_GymStatue_1
# 169 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"

# 170 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"

# 171 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
FuchsiaCity_Gym_EventScript_GymStatuePostVictory::
# 172 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
# 108 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
# 173 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	msgbox FuchsiaCity_Gym_Text_GymStatuePlayerWon
# 174 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
# 109 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
# 175 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	releaseall
# 176 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	end
# 177 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"

# 178 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"

# 179 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
FuchsiaCity_Gym_Text_KogaIntro::
# 180 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
# 113 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
# 181 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "KOGA: Fwahahaha!\p"
# 182 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "A mere child like you dares to\n"
# 183 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "challenge me?\p"
# 184 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "The very idea makes me shiver\n"
# 185 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "with mirth!\p"
# 186 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "Very well, I shall show you true\n"
# 187 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "terror as a ninja master.\p"
# 188 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "Poison brings steady doom.\n"
# 189 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "Sleep renders foes helpless.\p"
# 190 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "Despair to the creeping horror of\n"
# 191 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "POISON-type POKéMON!{PLAY_BGM}{MUS_RG_ENCOUNTER_GYM_LEADER}$"
# 192 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"

# 193 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
FuchsiaCity_Gym_Text_KogaDefeat::
# 194 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
# 127 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
# 195 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "Humph!\n"
# 196 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "You have proven your worth!\p"
# 197 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "Here!\n"
# 198 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "Take the SOULBADGE!$"
# 199 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"

# 200 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
FuchsiaCity_Gym_Text_KogaPostBattle::
# 201 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
# 134 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
# 202 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "When afflicted by TOXIC, a POKéMON\n"
# 203 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "suffers more and more.\p"
# 204 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "It suffers worsening damage as the\n"
# 205 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "battle wears on!\p"
# 206 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "It will surely terrorize foes!$"
# 207 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"

# 208 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
FuchsiaCity_Gym_Text_KogaExplainSoulBadge::
# 209 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
# 142 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
# 210 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "Now that you have the SOULBADGE,\n"
# 211 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "the DEFENSE of your POKéMON rises.\p"
# 212 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "It also lets you SURF outside of\n"
# 213 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "battle.\p"
# 214 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "Ah!\n"
# 215 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "Take this, too!$"
# 216 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"

# 217 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
FuchsiaCity_Gym_Text_ReceivedTM06FromKoga::
# 218 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
# 151 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
# 219 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "{PLAYER} received TM06\n"
# 220 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "from KOGA.$"
# 221 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"

# 222 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
FuchsiaCity_Gym_Text_KogaExplainTM06::
# 223 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
# 156 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
# 224 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "Sealed within that TM06 lies\n"
# 225 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "TOXIC!\p"
# 226 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "It is a secret technique dating\n"
# 227 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "back some four hundred years.$"
# 228 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"

# 229 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
FuchsiaCity_Gym_Text_MakeSpaceForThis::
# 230 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
# 163 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
# 231 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "Make space for this, child!$"
# 232 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"

# 233 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
FuchsiaCity_Gym_Text_KaydenIntro::
# 234 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
# 167 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
# 235 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "Strength isn't the key for POKéMON.\n"
# 236 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "Do you understand this?\p"
# 237 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "POKéMON is about strategy!\p"
# 238 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "I'll show you how strategy can\n"
# 239 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "beat brute strength.$"
# 240 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"

# 241 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
FuchsiaCity_Gym_Text_KaydenDefeat::
# 242 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
# 175 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
# 243 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "What?\n"
# 244 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "Extraordinary!$"
# 245 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"

# 246 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
FuchsiaCity_Gym_Text_KaydenPostBattle::
# 247 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
# 180 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
# 248 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "So, you mix brawn with brains?\n"
# 249 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "Good strategy!\p"
# 250 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "That's remarkable for a child\n"
# 251 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "TRAINER.$"
# 252 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"

# 253 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
FuchsiaCity_Gym_Text_KirkIntro::
# 254 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
# 187 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
# 255 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "I was a magician once upon a time.\p"
# 256 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "But I dreamt of becoming a ninja,\n"
# 257 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "so I joined this GYM.$"
# 258 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"

# 259 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
FuchsiaCity_Gym_Text_KirkDefeat::
# 260 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
# 193 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
# 261 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "I'm done for!$"
# 262 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"

# 263 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
FuchsiaCity_Gym_Text_KirkPostBattle::
# 264 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
# 197 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
# 265 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "Even though I've lost, I will keep\n"
# 266 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "training according to the teachings\l"
# 267 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "of KOGA, my ninja master.$"
# 268 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"

# 269 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
FuchsiaCity_Gym_Text_NateIntro::
# 270 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
# 203 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
# 271 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "Let's see you beat my special\n"
# 272 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "techniques!$"
# 273 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"

# 274 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
FuchsiaCity_Gym_Text_NateDefeat::
# 275 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
# 208 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
# 276 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "You had me fooled!$"
# 277 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"

# 278 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
FuchsiaCity_Gym_Text_NatePostBattle::
# 279 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
# 212 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
# 280 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "I like poison and sleep techniques,\n"
# 281 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "as they linger after battle!$"
# 282 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"

# 283 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
FuchsiaCity_Gym_Text_PhilIntro::
# 284 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
# 217 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
# 285 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "Stop right there!\p"
# 286 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "The famed invisible walls of\n"
# 287 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "FUCHSIA GYM have you frustrated?$"
# 288 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"

# 289 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
FuchsiaCity_Gym_Text_PhilDefeat::
# 290 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
# 223 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
# 291 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "Whoa!\n"
# 292 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "You've got it!$"
# 293 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"

# 294 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
FuchsiaCity_Gym_Text_PhilPostBattle::
# 295 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
# 228 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
# 296 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "You impressed me!\n"
# 297 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "Here's a hint!\p"
# 298 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "Look very closely for gaps in the\n"
# 299 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "invisible walls!$"
# 300 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"

# 301 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
FuchsiaCity_Gym_Text_EdgarIntro::
# 302 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
# 235 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
# 303 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "I also study the way of the ninja\n"
# 304 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "with Master KOGA!\p"
# 305 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "Ninja have a long history of using\n"
# 306 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "animals!$"
# 307 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"

# 308 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
FuchsiaCity_Gym_Text_EdgarDefeat::
# 309 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
# 242 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
# 310 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "Awoo!$"
# 311 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"

# 312 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
FuchsiaCity_Gym_Text_EdgarPostBattle::
# 313 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
# 246 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
# 314 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "I still have much to learn.$"
# 315 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"

# 316 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
FuchsiaCity_Gym_Text_ShawnIntro::
# 317 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
# 250 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
# 318 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "Master KOGA comes from a long line\n"
# 319 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "of ninjas.\p"
# 320 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "What did you descend from?$"
# 321 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"

# 322 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
FuchsiaCity_Gym_Text_ShawnDefeat::
# 323 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
# 256 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
# 324 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "You're more skilled than I'd\n"
# 325 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "thought!$"
# 326 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"

# 327 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
FuchsiaCity_Gym_Text_ShawnPostBattle::
# 328 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
# 261 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
# 329 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "Where there is light, there is\n"
# 330 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "shadow!\p"
# 331 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "Light and shadow!\n"
# 332 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "Which do you choose?$"
# 333 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"

# 334 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
FuchsiaCity_Gym_Text_GymGuyAdvice::
# 335 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
# 268 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
# 336 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "Yo!\n"
# 337 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "Champ in the making!\p"
# 338 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "FUCHSIA GYM is a tricked-up place.\n"
# 339 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "It's riddled with invisible walls!\p"
# 340 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "KOGA might appear close, but he's\n"
# 341 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "blocked off.\p"
# 342 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "You have to find gaps in the walls\n"
# 343 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "to reach him.$"
# 344 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"

# 345 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
FuchsiaCity_Gym_Text_GymGuyPostVictory::
# 346 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
# 279 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
# 347 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "It's amazing how ninja can terrify,\n"
# 348 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "even now!$"
# 349 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"

# 350 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
FuchsiaCity_Gym_Text_GymStatue::
# 351 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
# 284 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
# 352 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "FUCHSIA POKéMON GYM\n"
# 353 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "LEADER: KOGA\p"
# 354 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "WINNING TRAINERS:\n"
# 355 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "{RIVAL}$"
# 356 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"

# 357 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
FuchsiaCity_Gym_Text_GymStatuePlayerWon::
# 358 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
# 291 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
# 359 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "FUCHSIA POKéMON GYM\n"
# 360 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "LEADER: KOGA\p"
# 361 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "WINNING TRAINERS:\n"
# 362 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "{RIVAL}, {PLAYER}$"
