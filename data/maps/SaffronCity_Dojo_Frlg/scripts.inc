SaffronCity_Dojo_Frlg_MapScripts::
	.byte 0


SaffronCity_Dojo_EventScript_TriggerMasterBattleLeft::
# 4 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	lockall
# 5 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_SAFFRON_CITY_DOJO, 1
# 6 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	applymovement LOCALID_KARATE_MASTER, Common_Movement_WalkInPlaceFasterLeft
# 7 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	waitmovement 0
# 8 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	releaseall
	end


SaffronCity_Dojo_EventScript_TriggerMasterBattleRight::
# 13 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	lockall
# 14 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_SAFFRON_CITY_DOJO, 1
# 15 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	applymovement LOCALID_KARATE_MASTER, Common_Movement_WalkInPlaceFasterRight
# 16 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	waitmovement 0
# 17 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	releaseall
	end


SaffronCity_Dojo_EventScript_HitmonleeBall::
# 22 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	lock
# 23 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	faceplayer
# 24 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	goto_if_set FLAG_GOT_HITMON_FROM_DOJO, SaffronCity_Dojo_EventScript_HitmonleeBall_2
SaffronCity_Dojo_EventScript_HitmonleeBall_1:
# 27 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	showmonpic SPECIES_HITMONLEE, 10, 3
# 28 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_HITMONLEE
# 29 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	applymovement LOCALID_KARATE_MASTER, Common_Movement_WalkInPlaceFasterUp
# 30 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	waitmovement 0
# 31 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 32 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	msgbox SaffronCity_Dojo_Text_YouWantHitmonlee, MSGBOX_YESNO
# 33 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	call EventScript_RestorePrevTextColor
# 34 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq SaffronCity_Dojo_EventScript_HitmonleeBall_5
SaffronCity_Dojo_EventScript_HitmonleeBall_4:
# 37 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	hidemonpic
# 38 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	release
	end

SaffronCity_Dojo_EventScript_HitmonleeBall_2:
# 25 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	goto SaffronCity_Dojo_EventScript_AlreadyGotHitmon
	goto SaffronCity_Dojo_EventScript_HitmonleeBall_1

SaffronCity_Dojo_EventScript_HitmonleeBall_5:
# 35 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	goto SaffronCity_Dojo_EventScript_GiveHitmon
	goto SaffronCity_Dojo_EventScript_HitmonleeBall_4


SaffronCity_Dojo_EventScript_AlreadyGotHitmon::
# 43 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	msgbox SaffronCity_Dojo_Text_BetterNotGetGreedy
# 44 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	release
	end


SaffronCity_Dojo_EventScript_HitmonchanBall::
# 49 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	lock
# 50 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	faceplayer
# 51 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	goto_if_set FLAG_GOT_HITMON_FROM_DOJO, SaffronCity_Dojo_EventScript_HitmonchanBall_2
SaffronCity_Dojo_EventScript_HitmonchanBall_1:
# 54 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	showmonpic SPECIES_HITMONCHAN, 10, 3
# 55 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_HITMONCHAN
# 56 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	applymovement LOCALID_KARATE_MASTER, Common_Movement_WalkInPlaceFasterUp
# 57 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	waitmovement 0
# 58 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 59 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	msgbox SaffronCity_Dojo_Text_YouWantHitmonchan, MSGBOX_YESNO
# 60 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	call EventScript_RestorePrevTextColor
# 61 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq SaffronCity_Dojo_EventScript_HitmonchanBall_5
SaffronCity_Dojo_EventScript_HitmonchanBall_4:
# 64 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	hidemonpic
# 65 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	release
	end

SaffronCity_Dojo_EventScript_HitmonchanBall_2:
# 52 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	goto SaffronCity_Dojo_EventScript_AlreadyGotHitmon
	goto SaffronCity_Dojo_EventScript_HitmonchanBall_1

SaffronCity_Dojo_EventScript_HitmonchanBall_5:
# 62 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	goto SaffronCity_Dojo_EventScript_GiveHitmon
	goto SaffronCity_Dojo_EventScript_HitmonchanBall_4


SaffronCity_Dojo_EventScript_GiveHitmon::
# 70 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	hidemonpic
# 71 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	givemon VAR_TEMP_1, 25
# 72 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq SaffronCity_Dojo_EventScript_GiveHitmon_2
SaffronCity_Dojo_EventScript_GiveHitmon_1:
# 75 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq SaffronCity_Dojo_EventScript_GiveHitmon_5
SaffronCity_Dojo_EventScript_GiveHitmon_4:
# 78 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq SaffronCity_Dojo_EventScript_GiveHitmon_8
SaffronCity_Dojo_EventScript_GiveHitmon_7:
# 81 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	release
	end

SaffronCity_Dojo_EventScript_GiveHitmon_2:
# 73 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	goto SaffronCity_Dojo_EventScript_ReceivedHitmonParty
	goto SaffronCity_Dojo_EventScript_GiveHitmon_1

SaffronCity_Dojo_EventScript_GiveHitmon_5:
# 76 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	goto SaffronCity_Dojo_EventScript_ReceivedHitmonPC
	goto SaffronCity_Dojo_EventScript_GiveHitmon_4

SaffronCity_Dojo_EventScript_GiveHitmon_8:
# 79 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
	goto SaffronCity_Dojo_EventScript_GiveHitmon_7


SaffronCity_Dojo_EventScript_ReceivedHitmonParty::
# 86 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	removeobject VAR_LAST_TALKED
# 87 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_TEMP_1
# 88 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 89 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	message SaffronCity_Dojo_Text_ReceivedMonFromKarateMaster
# 90 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	waitmessage
# 91 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	waitfanfare
# 92 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	setflag FLAG_GOT_HITMON_FROM_DOJO
# 93 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 94 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq SaffronCity_Dojo_EventScript_ReceivedHitmonParty_2
SaffronCity_Dojo_EventScript_ReceivedHitmonParty_1:
# 97 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 98 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 99 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	goto SaffronCity_Dojo_EventScript_EndGiveMon
	end

SaffronCity_Dojo_EventScript_ReceivedHitmonParty_2:
# 95 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	goto SaffronCity_Dojo_EventScript_EndGiveMon
	goto SaffronCity_Dojo_EventScript_ReceivedHitmonParty_1


SaffronCity_Dojo_EventScript_ReceivedHitmonPC::
# 104 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	removeobject VAR_LAST_TALKED
# 105 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_TEMP_1
# 106 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 107 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	message SaffronCity_Dojo_Text_ReceivedMonFromKarateMaster
# 108 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	waitmessage
# 109 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	waitfanfare
# 110 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	setflag FLAG_GOT_HITMON_FROM_DOJO
# 111 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 112 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq SaffronCity_Dojo_EventScript_ReceivedHitmonPC_2
SaffronCity_Dojo_EventScript_ReceivedHitmonPC_1:
# 115 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
# 116 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	goto SaffronCity_Dojo_EventScript_TransferredHitmonToPC
	end

SaffronCity_Dojo_EventScript_ReceivedHitmonPC_2:
# 113 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	goto SaffronCity_Dojo_EventScript_TransferredHitmonToPC
	goto SaffronCity_Dojo_EventScript_ReceivedHitmonPC_1


SaffronCity_Dojo_EventScript_TransferredHitmonToPC::
# 121 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	call Common_EventScript_TransferredToPC
# 122 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	goto SaffronCity_Dojo_EventScript_EndGiveMon
	end


SaffronCity_Dojo_EventScript_EndGiveMon::
# 127 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	release
	end


SaffronCity_Dojo_EventScript_Statue::
# 132 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	msgbox SaffronCity_Dojo_Text_FightingDojo, MSGBOX_SIGN
	end


SaffronCity_Dojo_EventScript_LeftScroll::
# 137 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	msgbox SaffronCity_Dojo_Text_EnemiesOnEverySide, MSGBOX_SIGN
	end


SaffronCity_Dojo_EventScript_RightScroll::
# 142 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	msgbox SaffronCity_Dojo_Text_GoesAroundComesAround, MSGBOX_SIGN
	end


SaffronCity_Dojo_EventScript_Hitoshi::
# 147 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	trainerbattle_single TRAINER_BLACK_BELT_HITOSHI, SaffronCity_Dojo_Text_HitoshiIntro, SaffronCity_Dojo_Text_HitoshiDefeat
# 148 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	msgbox SaffronCity_Dojo_Text_HitoshiPostBattle, MSGBOX_AUTOCLOSE
	end


SaffronCity_Dojo_EventScript_Hideki::
# 153 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	trainerbattle_single TRAINER_BLACK_BELT_HIDEKI, SaffronCity_Dojo_Text_HidekiIntro, SaffronCity_Dojo_Text_HidekiDefeat
# 154 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	msgbox SaffronCity_Dojo_Text_HidekiPostBattle, MSGBOX_AUTOCLOSE
	end


SaffronCity_Dojo_EventScript_Aaron::
# 159 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	trainerbattle_single TRAINER_BLACK_BELT_AARON, SaffronCity_Dojo_Text_AaronIntro, SaffronCity_Dojo_Text_AaronDefeat
# 160 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	msgbox SaffronCity_Dojo_Text_AaronPostBattle, MSGBOX_AUTOCLOSE
	end


SaffronCity_Dojo_EventScript_Mike::
# 165 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	trainerbattle_single TRAINER_BLACK_BELT_MIKE, SaffronCity_Dojo_Text_MikeIntro, SaffronCity_Dojo_Text_MikeDefeat
# 166 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	msgbox SaffronCity_Dojo_Text_MikePostBattle, MSGBOX_AUTOCLOSE
	end


SaffronCity_Dojo_EventScript_MasterKoichi::
# 171 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	trainerbattle_single TRAINER_BLACK_BELT_KOICHI, SaffronCity_Dojo_Text_MasterKoichiIntro, SaffronCity_Dojo_Text_MasterKoichiDefeat, SaffronCity_Dojo_EventScript_DefeatedMasterKoichi
# 172 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	goto_if_set FLAG_GOT_HITMON_FROM_DOJO, SaffronCity_Dojo_EventScript_MasterKoichi_2
SaffronCity_Dojo_EventScript_MasterKoichi_1:
# 175 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	msgbox SaffronCity_Dojo_Text_ChoosePrizedFightingMon, MSGBOX_AUTOCLOSE
	end

SaffronCity_Dojo_EventScript_MasterKoichi_2:
# 173 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	goto SaffronCity_Dojo_EventScript_MasterKoichiAlreadyGotHitmon
	goto SaffronCity_Dojo_EventScript_MasterKoichi_1


SaffronCity_Dojo_EventScript_MasterKoichiAlreadyGotHitmon::
# 180 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	msgbox SaffronCity_Dojo_Text_StayAndTrainWithUs
# 181 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	release
	end


SaffronCity_Dojo_EventScript_DefeatedMasterKoichi::
# 186 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_SAFFRON_CITY_DOJO, 1
# 187 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	release
	end


SaffronCity_Dojo_Text_MasterKoichiIntro::
# 191 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	.string "Grunt!\p"
	.string "I am the KARATE MASTER!\n"
	.string "I am the LEADER here!\p"
	.string "You wish to challenge us?\n"
	.string "Expect no mercy!\p"
	.string "Fwaaa!$"

SaffronCity_Dojo_Text_MasterKoichiDefeat::
# 200 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	.string "Hwa!\n"
	.string "Arrgh! Beaten!$"

SaffronCity_Dojo_Text_ChoosePrizedFightingMon::
# 205 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	.string "Indeed, I have lost!\p"
	.string "But, I beseech you, do not take\n"
	.string "our emblem as your trophy!\p"
	.string "In return, I will give you a prized\n"
	.string "FIGHTING POKéMON!\p"
	.string "Choose whichever one you like!$"

SaffronCity_Dojo_Text_StayAndTrainWithUs::
# 214 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	.string "Grunt!\n"
	.string "Stay and train at karate with us!$"

SaffronCity_Dojo_Text_MikeIntro::
# 219 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	.string "Hoargh!\n"
	.string "Take your shoes off!$"

SaffronCity_Dojo_Text_MikeDefeat::
# 224 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	.string "I give up!$"

SaffronCity_Dojo_Text_MikePostBattle::
# 228 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	.string "You wait 'til you see our MASTER!\n"
	.string "I'm a small fry compared to him!$"

SaffronCity_Dojo_Text_HidekiIntro::
# 233 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	.string "I hear you're good!\n"
	.string "Show me!$"

SaffronCity_Dojo_Text_HidekiDefeat::
# 238 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	.string "Judge!\n"
	.string "One point!$"

SaffronCity_Dojo_Text_HidekiPostBattle::
# 243 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	.string "Our MASTER is a pro fighter.\n"
	.string "Be prepared to lose!$"

SaffronCity_Dojo_Text_AaronIntro::
# 248 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	.string "Hiyah!\n"
	.string "I have no fear for anything tough!\p"
	.string "I shatter boulders for training\n"
	.string "every day!$"

SaffronCity_Dojo_Text_AaronDefeat::
# 255 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	.string "Yow!\n"
	.string "Stubbed fingers!$"

SaffronCity_Dojo_Text_AaronPostBattle::
# 260 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	.string "The only thing that frightens us is\n"
	.string "psychic power!$"

SaffronCity_Dojo_Text_HitoshiIntro::
# 265 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	.string "Hwaah!\p"
	.string "You're trespassing in our\n"
	.string "FIGHTING DOJO!$"

SaffronCity_Dojo_Text_HitoshiDefeat::
# 271 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	.string "Oof!\n"
	.string "I give up!$"

SaffronCity_Dojo_Text_HitoshiPostBattle::
# 276 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	.string "The prime fighters across the land\n"
	.string "train here.$"

SaffronCity_Dojo_Text_YouWantHitmonlee::
# 281 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	.string "You want the hard-kicking\n"
	.string "HITMONLEE?$"

SaffronCity_Dojo_Text_ReceivedMonFromKarateMaster::
# 286 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	.string "{PLAYER} received the {STR_VAR_1}\n"
	.string "from the KARATE MASTER.$"

SaffronCity_Dojo_Text_YouWantHitmonchan::
# 291 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	.string "You want the piston-punching\n"
	.string "HITMONCHAN?$"

SaffronCity_Dojo_Text_ReceivedMonFromKarateMaster2::
# 296 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	.string "{PLAYER}は　カラテ　だいおう　から\n"
	.string "{STR_VAR_1}を　もらった！$"

SaffronCity_Dojo_Text_BetterNotGetGreedy::
# 301 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	.string "Better not get greedy…$"

SaffronCity_Dojo_Text_EnemiesOnEverySide::
# 305 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	.string "Enemies on every side!$"

SaffronCity_Dojo_Text_GoesAroundComesAround::
# 309 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	.string "What goes around comes around.$"

SaffronCity_Dojo_Text_FightingDojo::
# 313 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	.string "FIGHTING DOJO$"
