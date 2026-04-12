# 1 "data/maps/MeteorFalls_StevensCave/scripts.pory"

# 2 "data/maps/MeteorFalls_StevensCave/scripts.pory"
MeteorFalls_StevensCave_MapScripts::
# 3 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	.byte 0
# 4 "data/maps/MeteorFalls_StevensCave/scripts.pory"

# 5 "data/maps/MeteorFalls_StevensCave/scripts.pory"

# 6 "data/maps/MeteorFalls_StevensCave/scripts.pory"
MeteorFalls_StevensCave_EventScript_Steven::
# 7 "data/maps/MeteorFalls_StevensCave/scripts.pory"
# 4 "data/maps/MeteorFalls_StevensCave/scripts.pory"
# 8 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	lock
# 9 "data/maps/MeteorFalls_StevensCave/scripts.pory"
# 5 "data/maps/MeteorFalls_StevensCave/scripts.pory"
# 10 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	goto_if_set FLAG_DEFEATED_METEOR_FALLS_STEVEN, MeteorFalls_StevensCave_EventScript_Steven_2
# 11 "data/maps/MeteorFalls_StevensCave/scripts.pory"
MeteorFalls_StevensCave_EventScript_Steven_1:
# 12 "data/maps/MeteorFalls_StevensCave/scripts.pory"
# 8 "data/maps/MeteorFalls_StevensCave/scripts.pory"
# 13 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	waitse
# 14 "data/maps/MeteorFalls_StevensCave/scripts.pory"
# 9 "data/maps/MeteorFalls_StevensCave/scripts.pory"
# 15 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	playse SE_PIN
# 16 "data/maps/MeteorFalls_StevensCave/scripts.pory"
# 10 "data/maps/MeteorFalls_StevensCave/scripts.pory"
# 17 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	applymovement LOCALID_METEOR_FALLS_STEVEN, Common_Movement_ExclamationMark
# 18 "data/maps/MeteorFalls_StevensCave/scripts.pory"
# 11 "data/maps/MeteorFalls_StevensCave/scripts.pory"
# 19 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	waitmovement 0
# 20 "data/maps/MeteorFalls_StevensCave/scripts.pory"
# 12 "data/maps/MeteorFalls_StevensCave/scripts.pory"
# 21 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	applymovement LOCALID_METEOR_FALLS_STEVEN, Common_Movement_Delay48
# 22 "data/maps/MeteorFalls_StevensCave/scripts.pory"
# 13 "data/maps/MeteorFalls_StevensCave/scripts.pory"
# 23 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	waitmovement 0
# 24 "data/maps/MeteorFalls_StevensCave/scripts.pory"
# 14 "data/maps/MeteorFalls_StevensCave/scripts.pory"
# 25 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	applymovement LOCALID_METEOR_FALLS_STEVEN, Common_Movement_FacePlayer
# 26 "data/maps/MeteorFalls_StevensCave/scripts.pory"
# 15 "data/maps/MeteorFalls_StevensCave/scripts.pory"
# 27 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	waitmovement 0
# 28 "data/maps/MeteorFalls_StevensCave/scripts.pory"
# 16 "data/maps/MeteorFalls_StevensCave/scripts.pory"
# 29 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	msgbox MeteorFalls_StevensCave_Text_ShouldKnowHowGoodIAmExpectWorst, MSGBOX_DEFAULT
# 30 "data/maps/MeteorFalls_StevensCave/scripts.pory"
# 17 "data/maps/MeteorFalls_StevensCave/scripts.pory"
# 31 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	trainerbattle_no_intro TRAINER_STEVEN, MeteorFalls_StevensCave_Text_StevenDefeat
# 32 "data/maps/MeteorFalls_StevensCave/scripts.pory"
# 18 "data/maps/MeteorFalls_StevensCave/scripts.pory"
# 33 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	msgbox MeteorFalls_StevensCave_Text_MyPredictionCameTrue, MSGBOX_DEFAULT
# 34 "data/maps/MeteorFalls_StevensCave/scripts.pory"
# 19 "data/maps/MeteorFalls_StevensCave/scripts.pory"
# 35 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	setflag FLAG_DEFEATED_METEOR_FALLS_STEVEN
# 36 "data/maps/MeteorFalls_StevensCave/scripts.pory"
# 20 "data/maps/MeteorFalls_StevensCave/scripts.pory"
# 37 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	release
# 38 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	end
# 39 "data/maps/MeteorFalls_StevensCave/scripts.pory"

# 40 "data/maps/MeteorFalls_StevensCave/scripts.pory"
MeteorFalls_StevensCave_EventScript_Steven_2:
# 41 "data/maps/MeteorFalls_StevensCave/scripts.pory"
# 6 "data/maps/MeteorFalls_StevensCave/scripts.pory"
# 42 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	goto MeteorFalls_StevensCave_EventScript_Defeated
# 43 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	goto MeteorFalls_StevensCave_EventScript_Steven_1
# 44 "data/maps/MeteorFalls_StevensCave/scripts.pory"

# 45 "data/maps/MeteorFalls_StevensCave/scripts.pory"

# 46 "data/maps/MeteorFalls_StevensCave/scripts.pory"
MeteorFalls_StevensCave_EventScript_Defeated::
# 47 "data/maps/MeteorFalls_StevensCave/scripts.pory"
# 25 "data/maps/MeteorFalls_StevensCave/scripts.pory"
# 48 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	applymovement LOCALID_METEOR_FALLS_STEVEN, Common_Movement_FacePlayer
# 49 "data/maps/MeteorFalls_StevensCave/scripts.pory"
# 26 "data/maps/MeteorFalls_StevensCave/scripts.pory"
# 50 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	waitmovement 0
# 51 "data/maps/MeteorFalls_StevensCave/scripts.pory"
# 27 "data/maps/MeteorFalls_StevensCave/scripts.pory"
# 52 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	msgbox MeteorFalls_StevensCave_Text_MyPredictionCameTrue, MSGBOX_DEFAULT
# 53 "data/maps/MeteorFalls_StevensCave/scripts.pory"
# 28 "data/maps/MeteorFalls_StevensCave/scripts.pory"
# 54 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	release
# 55 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	end
# 56 "data/maps/MeteorFalls_StevensCave/scripts.pory"

# 57 "data/maps/MeteorFalls_StevensCave/scripts.pory"

# 58 "data/maps/MeteorFalls_StevensCave/scripts.pory"
MeteorFalls_StevensCave_Text_ShouldKnowHowGoodIAmExpectWorst::
# 59 "data/maps/MeteorFalls_StevensCave/scripts.pory"
# 32 "data/maps/MeteorFalls_StevensCave/scripts.pory"
# 60 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	.string "STEVEN: Oh, wow, {PLAYER}{KUN}.\n"
# 61 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	.string "I'm amazed you knew where to find me.\p"
# 62 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	.string "Do you, uh…maybe think of me as\n"
# 63 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	.string "just a rock maniac?\p"
# 64 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	.string "No, that can't be right.\p"
# 65 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	.string "We battled alongside each other at\n"
# 66 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	.string "the SOOTOPOLIS SPACE CENTER.\p"
# 67 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	.string "You should have a very good idea\n"
# 68 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	.string "about how good I am.\p"
# 69 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	.string "Okay, {PLAYER}{KUN}, if you're going to mount\n"
# 70 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	.string "a serious challenge, expect the worst!$"
# 71 "data/maps/MeteorFalls_StevensCave/scripts.pory"

# 72 "data/maps/MeteorFalls_StevensCave/scripts.pory"
MeteorFalls_StevensCave_Text_StevenDefeat::
# 73 "data/maps/MeteorFalls_StevensCave/scripts.pory"
# 46 "data/maps/MeteorFalls_StevensCave/scripts.pory"
# 74 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	.string "You…\n"
# 75 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	.string "I had no idea you'd become so strong…$"
# 76 "data/maps/MeteorFalls_StevensCave/scripts.pory"

# 77 "data/maps/MeteorFalls_StevensCave/scripts.pory"
MeteorFalls_StevensCave_Text_MyPredictionCameTrue::
# 78 "data/maps/MeteorFalls_StevensCave/scripts.pory"
# 51 "data/maps/MeteorFalls_StevensCave/scripts.pory"
# 79 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	.string "STEVEN: Come to think of it, ever since\n"
# 80 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	.string "our paths first crossed in GRANITE\l"
# 81 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	.string "CAVE in DEWFORD, I had this feeling.\p"
# 82 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	.string "I thought that you would eventually\n"
# 83 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	.string "become the CHAMPION.\p"
# 84 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	.string "My predictions usually come true.\p"
# 85 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	.string "And where will you go from here?\p"
# 86 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	.string "… … … … … …\n"
# 87 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	.string "… … … … … …\p"
# 88 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	.string "Fufufu, even I couldn't tell you that.$"
