SixIsland_PatternBush_Frlg_MapScripts::
# 2 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SixIsland_PatternBush_OnTransition
	.byte 0


SixIsland_PatternBush_OnTransition::
# 6 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_SIX_ISLAND_PATTERN_BUSH
# 7 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
# 8 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	compare VAR_TEMP_1, 50
	goto_if_ge SixIsland_PatternBush_OnTransition_2
SixIsland_PatternBush_OnTransition_1:
# 11 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	compare VAR_TEMP_1, 49
	goto_if_le SixIsland_PatternBush_OnTransition_5
SixIsland_PatternBush_OnTransition_4:
	end

SixIsland_PatternBush_OnTransition_2:
# 9 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	call SixIsland_PatternBush_EventScript_SetEscapeRightExit
	goto SixIsland_PatternBush_OnTransition_1

SixIsland_PatternBush_OnTransition_5:
# 12 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	call SixIsland_PatternBush_EventScript_SetEscapeLeftExit
	goto SixIsland_PatternBush_OnTransition_4


SixIsland_PatternBush_EventScript_SetEscapeRightExit::
# 18 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	setescapewarp MAP_SIX_ISLAND_GREEN_PATH, 255, 64, 10
	return


SixIsland_PatternBush_EventScript_SetEscapeLeftExit::
# 23 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	setescapewarp MAP_SIX_ISLAND_GREEN_PATH, 255, 45, 10
	return


SixIsland_PatternBush_EventScript_Bethany::
# 28 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	trainerbattle_single TRAINER_PKMN_BREEDER_BETHANY, SixIsland_PatternBush_Text_BethanyIntro, SixIsland_PatternBush_Text_BethanyDefeat
# 29 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	msgbox SixIsland_PatternBush_Text_BethanyPostBattle, MSGBOX_AUTOCLOSE
	end


SixIsland_PatternBush_EventScript_Allison::
# 34 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	trainerbattle_single TRAINER_PKMN_BREEDER_ALLISON, SixIsland_PatternBush_Text_AllisonIntro, SixIsland_PatternBush_Text_AllisonDefeat
# 35 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	msgbox SixIsland_PatternBush_Text_AllisonPostBattle, MSGBOX_AUTOCLOSE
	end


SixIsland_PatternBush_EventScript_Garret::
# 40 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	trainerbattle_single TRAINER_BUG_CATCHER_GARRET, SixIsland_PatternBush_Text_GarretIntro, SixIsland_PatternBush_Text_GarretDefeat
# 41 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	msgbox SixIsland_PatternBush_Text_GarretPostBattle, MSGBOX_AUTOCLOSE
	end


SixIsland_PatternBush_EventScript_Jonah::
# 46 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	trainerbattle_single TRAINER_BUG_CATCHER_JONAH, SixIsland_PatternBush_Text_JonahIntro, SixIsland_PatternBush_Text_JonahDefeat
# 47 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	msgbox SixIsland_PatternBush_Text_JonahPostBattle, MSGBOX_AUTOCLOSE
	end


SixIsland_PatternBush_EventScript_Vance::
# 52 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	trainerbattle_single TRAINER_BUG_CATCHER_VANCE, SixIsland_PatternBush_Text_VanceIntro, SixIsland_PatternBush_Text_VanceDefeat
# 53 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	msgbox SixIsland_PatternBush_Text_VancePostBattle, MSGBOX_AUTOCLOSE
	end


SixIsland_PatternBush_EventScript_Nash::
# 58 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	trainerbattle_single TRAINER_YOUNGSTER_NASH, SixIsland_PatternBush_Text_NashIntro, SixIsland_PatternBush_Text_NashDefeat
# 59 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	msgbox SixIsland_PatternBush_Text_NashPostBattle, MSGBOX_AUTOCLOSE
	end


SixIsland_PatternBush_EventScript_Cordell::
# 64 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	trainerbattle_single TRAINER_YOUNGSTER_CORDELL, SixIsland_PatternBush_Text_CordellIntro, SixIsland_PatternBush_Text_CordellDefeat
# 65 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	msgbox SixIsland_PatternBush_Text_CordellPostBattle, MSGBOX_AUTOCLOSE
	end


SixIsland_PatternBush_EventScript_Dalia::
# 70 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	trainerbattle_single TRAINER_LASS_DALIA, SixIsland_PatternBush_Text_DaliaIntro, SixIsland_PatternBush_Text_DaliaDefeat
# 71 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	msgbox SixIsland_PatternBush_Text_DaliaPostBattle, MSGBOX_AUTOCLOSE
	end


SixIsland_PatternBush_EventScript_Joana::
# 76 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	trainerbattle_single TRAINER_LASS_JOANA, SixIsland_PatternBush_Text_JoanaIntro, SixIsland_PatternBush_Text_JoanaDefeat
# 77 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	msgbox SixIsland_PatternBush_Text_JoanaPostBattle, MSGBOX_AUTOCLOSE
	end


SixIsland_PatternBush_EventScript_Riley::
# 82 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	trainerbattle_single TRAINER_CAMPER_RILEY, SixIsland_PatternBush_Text_RileyIntro, SixIsland_PatternBush_Text_RileyDefeat
# 83 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	msgbox SixIsland_PatternBush_Text_RileyPostBattle, MSGBOX_AUTOCLOSE
	end


SixIsland_PatternBush_EventScript_Marcy::
# 88 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	trainerbattle_single TRAINER_PICNICKER_MARCY, SixIsland_PatternBush_Text_MarcyIntro, SixIsland_PatternBush_Text_MarcyDefeat
# 89 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	msgbox SixIsland_PatternBush_Text_MarcyPostBattle, MSGBOX_AUTOCLOSE
	end


SixIsland_PatternBush_EventScript_Layton::
# 94 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	trainerbattle_single TRAINER_RUIN_MANIAC_LAYTON, SixIsland_PatternBush_Text_LaytonIntro, SixIsland_PatternBush_Text_LaytonDefeat
# 95 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	msgbox SixIsland_PatternBush_Text_LaytonPostBattle, MSGBOX_AUTOCLOSE
	end


SixIsland_PatternBush_Text_BethanyIntro::
# 99 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	.string "I'm curious, how do you raise your\n"
	.string "POKéMON?$"

SixIsland_PatternBush_Text_BethanyDefeat::
# 104 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	.string "You raise your POKéMON with a\n"
	.string "whole lot of love!$"

SixIsland_PatternBush_Text_BethanyPostBattle::
# 109 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	.string "In the same way your mother raised\n"
	.string "you full of love, you should raise\l"
	.string "your POKéMON.$"

SixIsland_PatternBush_Text_AllisonIntro::
# 115 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	.string "I'm working to preserve the natural\n"
	.string "ecology of POKéMON here.$"

SixIsland_PatternBush_Text_AllisonDefeat::
# 120 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	.string "Oh, for someone so young, you are\n"
	.string "tremendous!$"

SixIsland_PatternBush_Text_AllisonPostBattle::
# 125 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	.string "I'm not saying that you shouldn't\n"
	.string "catch POKéMON.\p"
	.string "I just want people to raise their\n"
	.string "POKéMON responsibly.$"

SixIsland_PatternBush_Text_GarretIntro::
# 132 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	.string "I caught a BUG POKéMON that lives\n"
	.string "only around here!$"

SixIsland_PatternBush_Text_GarretDefeat::
# 137 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	.string "Heheh…\n"
	.string "Isn't my POKéMON awesome?$"

SixIsland_PatternBush_Text_GarretPostBattle::
# 142 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	.string "There's a girl near the BUSH who\n"
	.string "measures HERACROSS for TRAINERS.$"

SixIsland_PatternBush_Text_JonahIntro::
# 147 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	.string "You know, it just doesn't feel right\n"
	.string "if I don't use BUG POKéMON.$"

SixIsland_PatternBush_Text_JonahDefeat::
# 152 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	.string "It's okay, losing is a fun part of\n"
	.string "POKéMON's appeal, too.$"

SixIsland_PatternBush_Text_JonahPostBattle::
# 157 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	.string "By the way, “appeal” is a weird\n"
	.string "word, if you think about it.\p"
	.string "Like, is it like an orange peel?\n"
	.string "Or like a ringing bell?$"

SixIsland_PatternBush_Text_VanceIntro::
# 164 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	.string "Yeah, yeah, yeah!\n"
	.string "Look at all the BUG POKéMON!$"

SixIsland_PatternBush_Text_VanceDefeat::
# 169 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	.string "I got beat while I was still busy\n"
	.string "celebrating!$"

SixIsland_PatternBush_Text_VancePostBattle::
# 174 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	.string "I'm going to bring my little brother\n"
	.string "here next time.$"

SixIsland_PatternBush_Text_NashIntro::
# 179 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	.string "Look, look! There are funny\n"
	.string "patterns on the ground.$"

SixIsland_PatternBush_Text_NashDefeat::
# 184 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	.string "Super awesome!$"

SixIsland_PatternBush_Text_NashPostBattle::
# 188 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	.string "The funny patterns on the ground…\p"
	.string "They look like the patterns on my\n"
	.string "grandpa's clothes.$"

SixIsland_PatternBush_Text_CordellIntro::
# 194 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	.string "I bet you think I'm just some guy,\n"
	.string "don't you, eh?$"

SixIsland_PatternBush_Text_CordellDefeat::
# 199 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	.string "I bet you think I'm weak,\n"
	.string "don't you, eh?$"

SixIsland_PatternBush_Text_CordellPostBattle::
# 204 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	.string "Ayup, you townies come around all\n"
	.string "so dandy with a hat that flashy…\p"
	.string "How about giving me that?$"

SixIsland_PatternBush_Text_DaliaIntro::
# 210 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	.string "Take a deep breath.\n"
	.string "Isn't the air delicious?$"

SixIsland_PatternBush_Text_DaliaDefeat::
# 215 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	.string "If you'd like, I can teach you how\n"
	.string "to breathe properly.$"

SixIsland_PatternBush_Text_DaliaPostBattle::
# 220 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	.string "First, exhale.\n"
	.string "Blow everything out.\p"
	.string "When you can't exhale anymore,\n"
	.string "inhale the clean air!\p"
	.string "Isn't it refreshing?$"

SixIsland_PatternBush_Text_JoanaIntro::
# 228 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	.string "I love BUG POKéMON.\n"
	.string "That's why I'm here all the time.\p"
	.string "Am I the only girl like that?$"

SixIsland_PatternBush_Text_JoanaDefeat::
# 234 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	.string "I lost, but I'm still laughing.\n"
	.string "Am I the only girl like that?$"

SixIsland_PatternBush_Text_JoanaPostBattle::
# 239 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	.string "I'm going to keep on collecting\n"
	.string "BUG POKéMON.\p"
	.string "Am I the only girl like that?$"

SixIsland_PatternBush_Text_RileyIntro::
# 245 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	.string "This is a good spot.\n"
	.string "I'll pitch my tent here.$"

SixIsland_PatternBush_Text_RileyDefeat::
# 250 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	.string "Wimped out…$"

SixIsland_PatternBush_Text_RileyPostBattle::
# 254 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	.string "I'm going to observe the night sky\n"
	.string "here.$"

SixIsland_PatternBush_Text_MarcyIntro::
# 259 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	.string "Oh, yuck!\n"
	.string "I think a bug stung me!$"

SixIsland_PatternBush_Text_MarcyDefeat::
# 264 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	.string "It wasn't a bug.\n"
	.string "I cut my shin on some grass.$"

SixIsland_PatternBush_Text_MarcyPostBattle::
# 269 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	.string "A little cut like that…\n"
	.string "A little spit's enough to cure it!$"

SixIsland_PatternBush_Text_LaytonIntro::
# 274 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	.string "Have you noticed something odd\n"
	.string "about these parts?$"

SixIsland_PatternBush_Text_LaytonDefeat::
# 279 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	.string "Have you taken a good look around\n"
	.string "your feet?$"

SixIsland_PatternBush_Text_LaytonPostBattle::
# 284 "data/maps/SixIsland_PatternBush_Frlg/scripts.pory"
	.string "There are places here in PATTERN\n"
	.string "BUSH where grass won't grow.\p"
	.string "What could be the cause of such\n"
	.string "a phenomenon?$"
