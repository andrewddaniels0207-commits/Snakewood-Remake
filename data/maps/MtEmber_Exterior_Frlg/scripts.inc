MtEmber_Exterior_Frlg_MapScripts::
# 2 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MtEmber_Exterior_OnTransition
# 3 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, MtEmber_Exterior_OnLoad
	.byte 0


MtEmber_Exterior_OnTransition::
# 7 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_MT_EMBER_EXTERIOR
# 8 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_MT_EMBER_EXTERIOR, 2
	goto_if_eq MtEmber_Exterior_OnTransition_2
MtEmber_Exterior_OnTransition_1:
	end

MtEmber_Exterior_OnTransition_2:
# 9 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	call MtEmber_Exterior_EventScript_RocketsFaceDown
	goto MtEmber_Exterior_OnTransition_1


MtEmber_Exterior_EventScript_RocketsFaceDown::
# 15 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	setobjectmovementtype LOCALID_MT_EMBER_GRUNT1, MOVEMENT_TYPE_FACE_DOWN
# 16 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	setobjectmovementtype LOCALID_MT_EMBER_GRUNT2, MOVEMENT_TYPE_FACE_DOWN
	return


MtEmber_Exterior_OnLoad::
# 21 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 4
	goto_if_ge MtEmber_Exterior_OnLoad_2
MtEmber_Exterior_OnLoad_1:
	end

MtEmber_Exterior_OnLoad_2:
# 22 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	call MtEmber_Exterior_EventScript_OpenCave
	goto MtEmber_Exterior_OnLoad_1


MtEmber_Exterior_EventScript_OpenCave::
# 28 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	setmetatile 42, 39, METATILE_MtEmber_CaveEntrance, 0
	return


MtEmber_Exterior_EventScript_Grunt1::
# 33 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	lock
# 34 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	goto_if_defeated TRAINER_TEAM_ROCKET_GRUNT_43, MtEmber_Exterior_EventScript_Grunt1Defeated
# 35 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 4
	goto_if_eq MtEmber_Exterior_EventScript_Grunt1_2
MtEmber_Exterior_EventScript_Grunt1_1:
# 38 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	msgbox MtEmber_Exterior_Text_WellTryDiggingHere
# 39 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	release
	end

MtEmber_Exterior_EventScript_Grunt1_2:
# 36 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	goto MtEmber_Exterior_EventScript_BattleGrunt1
	goto MtEmber_Exterior_EventScript_Grunt1_1


MtEmber_Exterior_EventScript_Grunt1Defeated::
# 44 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	msgbox MtEmber_Exterior_Text_Grunt1PostBattle
# 45 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	release
	end


MtEmber_Exterior_EventScript_BattleGrunt1::
# 50 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	applymovement LOCALID_MT_EMBER_GRUNT1, Common_Movement_FacePlayer
# 51 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	waitmovement 0
# 52 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_ROCKET, 0
# 53 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	msgbox MtEmber_Exterior_Text_Grunt1Intro
# 54 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	trainerbattle_no_intro TRAINER_TEAM_ROCKET_GRUNT_43, MtEmber_Exterior_Text_Grunt1Defeat
# 55 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	msgbox MtEmber_Exterior_Text_Grunt1PostBattle
# 56 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	goto_if_defeated TRAINER_TEAM_ROCKET_GRUNT_44, MtEmber_Exterior_EventScript_DefeatedBothGrunts
# 57 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	release
	end


MtEmber_Exterior_EventScript_DefeatedBothGrunts::
# 62 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	msgbox MtEmber_Exterior_Text_WellRegroupDontStepInsideThere
# 63 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	closemessage
# 64 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 65 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	removeobject LOCALID_MT_EMBER_GRUNT1
# 66 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	removeobject LOCALID_MT_EMBER_GRUNT2
# 67 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 68 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	release
	end


MtEmber_Exterior_EventScript_Grunt2::
# 73 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	lock
# 74 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	faceplayer
# 75 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	goto_if_defeated TRAINER_TEAM_ROCKET_GRUNT_44, MtEmber_Exterior_EventScript_DefeatedGrunt2
# 76 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 4
	goto_if_eq MtEmber_Exterior_EventScript_Grunt2_2
MtEmber_Exterior_EventScript_Grunt2_1:
# 79 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	msgbox MtEmber_Exterior_Text_YoureInTheWayGetLost
# 80 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	closemessage
# 81 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	applymovement LOCALID_MT_EMBER_GRUNT2, Common_Movement_FaceOriginalDirection
# 82 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	waitmovement 0
# 83 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	release
	end

MtEmber_Exterior_EventScript_Grunt2_2:
# 77 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	goto MtEmber_Exterior_EventScript_BattleGrunt2
	goto MtEmber_Exterior_EventScript_Grunt2_1


MtEmber_Exterior_EventScript_DefeatedGrunt2::
# 88 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	msgbox MtEmber_Exterior_Text_Grunt2PostBattle
# 89 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	release
	end


MtEmber_Exterior_EventScript_BattleGrunt2::
# 94 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_ROCKET, 0
# 95 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	msgbox MtEmber_Exterior_Text_Grunt2Intro
# 96 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	trainerbattle_no_intro TRAINER_TEAM_ROCKET_GRUNT_44, MtEmber_Exterior_Text_Grunt2Defeat
# 97 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	msgbox MtEmber_Exterior_Text_Grunt2PostBattle
# 98 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	goto_if_defeated TRAINER_TEAM_ROCKET_GRUNT_43, MtEmber_Exterior_EventScript_DefeatedBothGrunts
# 99 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	release
	end


MtEmber_Exterior_EventScript_RocketPasswordScene::
# 104 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	lockall
# 105 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 106 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	msgbox MtEmber_Exterior_Text_PunchedThroughAtLast
# 107 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	message MtEmber_Exterior_Text_WhatsPasswordAgain
# 108 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	waitmessage
# 109 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	playse SE_PIN
# 110 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	applymovement LOCALID_MT_EMBER_GRUNT2, Common_Movement_QuestionMark
# 111 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	waitmovement 0
# 112 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	waitbuttonpress
# 113 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	msgbox MtEmber_Exterior_Text_FirstPasswordGoldeen
# 114 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	applymovement LOCALID_MT_EMBER_GRUNT1, Common_Movement_WalkInPlaceFasterDown
# 115 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	waitmovement 0
# 116 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	playse SE_PIN
# 117 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	applymovement LOCALID_MT_EMBER_GRUNT1, Common_Movement_ExclamationMark
# 118 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	waitmovement 0
# 119 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	applymovement LOCALID_MT_EMBER_GRUNT1, Common_Movement_Delay48
# 120 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	waitmovement 0
# 121 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	applymovement LOCALID_MT_EMBER_GRUNT2, Common_Movement_WalkInPlaceFasterDown
# 122 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	waitmovement 0
# 123 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	call MtEmber_Exterior_EventScript_RocketsFaceDown
# 124 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	msgbox MtEmber_Exterior_Text_SnoopsBeenListeningIn
# 125 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_MT_EMBER_EXTERIOR, 2
# 126 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	releaseall
	end


MtEmber_Exterior_EventScript_Logan::
# 131 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	trainerbattle_single TRAINER_PKMN_RANGER_LOGAN, MtEmber_Exterior_Text_LoganIntro, MtEmber_Exterior_Text_LoganDefeat
# 132 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	msgbox MtEmber_Exterior_Text_LoganPostBattle, MSGBOX_AUTOCLOSE
	end


MtEmber_Exterior_EventScript_Beth::
# 137 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	trainerbattle_single TRAINER_PKMN_RANGER_BETH, MtEmber_Exterior_Text_BethIntro, MtEmber_Exterior_Text_BethDefeat
# 138 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	msgbox MtEmber_Exterior_Text_BethPostBattle, MSGBOX_AUTOCLOSE
	end


MtEmber_Exterior_EventScript_Jocelyn::
# 143 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	trainerbattle_single TRAINER_CRUSH_GIRL_JOCELYN, MtEmber_Exterior_Text_JocelynIntro, MtEmber_Exterior_Text_JocelynDefeat
# 144 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	msgbox MtEmber_Exterior_Text_JocelynPostBattle, MSGBOX_AUTOCLOSE
	end


Text_ExplosionTeach::
# 148 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	.string "Can you imagine?\n"
	.string "If this volcano were to erupt?\p"
	.string "The explosion would be the end of\n"
	.string "us. How terrifying is that?\p"
	.string "While we're terrified, would you\n"
	.string "like me to teach EXPLOSION?$"

Text_ExplosionDeclined::
# 157 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	.string "Yeah, you're right.\n"
	.string "It is too terrifying.$"

Text_ExplosionWhichMon::
# 162 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	.string "You're terribly brave!\p"
	.string "Which POKéMON should I teach\n"
	.string "EXPLOSION?$"

Text_ExplosionTaught::
# 168 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	.string "Using EXPLOSION while on this\n"
	.string "volcano…\p"
	.string "What a terrifying thrill!$"

MtEmber_Exterior_Text_WellTryDiggingHere::
# 174 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	.string "Over here.\n"
	.string "We'll try digging here.\p"
	.string "That treasure the ADMINS've been\n"
	.string "talking about should be here.$"

MtEmber_Exterior_Text_YoureInTheWayGetLost::
# 181 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	.string "What the…?\n"
	.string "You're in the way. Get lost.$"

MtEmber_Exterior_Text_PunchedThroughAtLast::
# 186 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	.string "Whew, punched through at last.\n"
	.string "Let's go treasure hunting!$"

MtEmber_Exterior_Text_WhatsPasswordAgain::
# 191 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	.string "Any treasure we find, we haul back\n"
	.string "to the WAREHOUSE, understood?\p"
	.string "…Oh, and what're the passwords?\n"
	.string "At the ROCKET WAREHOUSE, I mean.$"

MtEmber_Exterior_Text_FirstPasswordGoldeen::
# 198 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	.string "What, you forgot the password?\n"
	.string "There're actually two.\p"
	.string "The first one's “GOLDEEN need\n"
	.string "log.”\p"
	.string "And the second one is…$"

MtEmber_Exterior_Text_SnoopsBeenListeningIn::
# 206 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	.string "Hey!\n"
	.string "This snoop's been listening in!$"

MtEmber_Exterior_Text_Grunt1Intro::
# 211 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	.string "You've been eavesdropping on us,\n"
	.string "haven't you?$"

MtEmber_Exterior_Text_Grunt1Defeat::
# 216 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	.string "Huh, what?$"

MtEmber_Exterior_Text_Grunt1PostBattle::
# 220 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	.string "Why'd you have to win?$"

MtEmber_Exterior_Text_Grunt2Intro::
# 224 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	.string "Trying to horn in on our treasure?\n"
	.string "Don't bet on it!$"

MtEmber_Exterior_Text_Grunt2Defeat::
# 229 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	.string "Wait!\n"
	.string "But how?$"

MtEmber_Exterior_Text_Grunt2PostBattle::
# 234 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	.string "Develop amnesia conveniently and\n"
	.string "forget everything you heard!$"

MtEmber_Exterior_Text_WellRegroupDontStepInsideThere::
# 239 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	.string "What a setback…\n"
	.string "We'll have to regroup.\p"
	.string "You! Don't even think about taking\n"
	.string "a step inside here!\p"
	.string "If you know what's good for you,\n"
	.string "don't even think about this!$"

MtEmber_Exterior_Text_LoganIntro::
# 248 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	.string "An active volcano is one that's\n"
	.string "erupting, or about to.$"

MtEmber_Exterior_Text_LoganDefeat::
# 253 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	.string "Whew… That was hot!\n"
	.string "Sweat's erupting from me!$"

MtEmber_Exterior_Text_LoganPostBattle::
# 258 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	.string "They say there're over 1,500\n"
	.string "active volcanoes in the world.\p"
	.string "Just thinking about them makes me\n"
	.string "feel all hot and gooey inside!$"

MtEmber_Exterior_Text_BethIntro::
# 265 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	.string "Do you know how caves form inside\n"
	.string "volcanoes?$"

MtEmber_Exterior_Text_BethDefeat::
# 270 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	.string "Atchah!\n"
	.string "You're shockingly good!$"

MtEmber_Exterior_Text_BethPostBattle::
# 275 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	.string "When lava at the surface of magma\n"
	.string "hardens, and the magma inside flows\l"
	.string "out, caverns are left behind.$"

MtEmber_Exterior_Text_JocelynIntro::
# 281 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	.string "I've been in training so I can mend\n"
	.string "my broken heart…\p"
	.string "It toughened me up physically at\n"
	.string "least! Hi-yah!$"

MtEmber_Exterior_Text_JocelynDefeat::
# 288 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	.string "I think I tried to overdo it…$"

MtEmber_Exterior_Text_JocelynPostBattle::
# 292 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	.string "The way you battle, it reminds me\n"
	.string "of the guy who dumped me…$"
