CeladonCity_Frlg_MapScripts::
# 2 "data/maps/CeladonCity_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, CeladonCity_OnTransition
	.byte 0


CeladonCity_OnTransition::
# 6 "data/maps/CeladonCity_Frlg/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_CELADON_CITY
	end


CeladonCity_EventScript_LittleGirl::
# 11 "data/maps/CeladonCity_Frlg/scripts.pory"
	msgbox CeladonCity_Text_GotMyKoffingInCinnabar, MSGBOX_NPC
	end


CeladonCity_EventScript_OldMan1::
# 16 "data/maps/CeladonCity_Frlg/scripts.pory"
	lock
# 17 "data/maps/CeladonCity_Frlg/scripts.pory"
	msgbox CeladonCity_Text_GymIsGreatFullOfWomen
# 18 "data/maps/CeladonCity_Frlg/scripts.pory"
	release
	end


CeladonCity_EventScript_Woman::
# 23 "data/maps/CeladonCity_Frlg/scripts.pory"
	msgbox CeladonCity_Text_GameCornerIsBadForCitysImage, MSGBOX_NPC
	end


CeladonCity_EventScript_OldMan2::
# 28 "data/maps/CeladonCity_Frlg/scripts.pory"
	msgbox CeladonCity_Text_BlewItAllAtSlots, MSGBOX_NPC
	end


CeladonCity_EventScript_SoftboiledTutor::
# 33 "data/maps/CeladonCity_Frlg/scripts.pory"
	goto EventScript_SoftboiledTutor
	end


CeladonCity_EventScript_FatMan::
# 38 "data/maps/CeladonCity_Frlg/scripts.pory"
	lock
# 39 "data/maps/CeladonCity_Frlg/scripts.pory"
	faceplayer
# 40 "data/maps/CeladonCity_Frlg/scripts.pory"
	msgbox CeladonCity_Text_MyTrustedPalPoliwrath
# 41 "data/maps/CeladonCity_Frlg/scripts.pory"
	closemessage
# 42 "data/maps/CeladonCity_Frlg/scripts.pory"
	applymovement LOCALID_CELADON_FAT_MAN, Common_Movement_FaceOriginalDirection
# 43 "data/maps/CeladonCity_Frlg/scripts.pory"
	waitmovement 0
# 44 "data/maps/CeladonCity_Frlg/scripts.pory"
	release
	end


CeladonCity_EventScript_Poliwrath::
# 49 "data/maps/CeladonCity_Frlg/scripts.pory"
	lock
# 50 "data/maps/CeladonCity_Frlg/scripts.pory"
	faceplayer
# 51 "data/maps/CeladonCity_Frlg/scripts.pory"
	waitse
# 52 "data/maps/CeladonCity_Frlg/scripts.pory"
	playmoncry SPECIES_POLIWRATH, CRY_MODE_NORMAL
# 53 "data/maps/CeladonCity_Frlg/scripts.pory"
	msgbox CeladonCity_Text_Poliwrath
# 54 "data/maps/CeladonCity_Frlg/scripts.pory"
	closemessage
# 55 "data/maps/CeladonCity_Frlg/scripts.pory"
	waitmoncry
# 56 "data/maps/CeladonCity_Frlg/scripts.pory"
	applymovement LOCALID_CELADON_POLIWRATH, Common_Movement_FaceOriginalDirection
# 57 "data/maps/CeladonCity_Frlg/scripts.pory"
	waitmovement 0
# 58 "data/maps/CeladonCity_Frlg/scripts.pory"
	release
	end


CeladonCity_EventScript_RocketGrunt1::
# 63 "data/maps/CeladonCity_Frlg/scripts.pory"
	msgbox CeladonCity_Text_KeepOutOfTeamRocketsWay, MSGBOX_NPC
	end


CeladonCity_EventScript_RocketGrunt2::
# 68 "data/maps/CeladonCity_Frlg/scripts.pory"
	msgbox CeladonCity_Text_GetLostOrIllPunchYou, MSGBOX_NPC
	end


CeladonCity_EventScript_Boy::
# 73 "data/maps/CeladonCity_Frlg/scripts.pory"
	msgbox CeladonCity_Text_ScaldedTongueOnTea, MSGBOX_NPC
	end


CeladonCity_EventScript_SilphCoScientist::
# 78 "data/maps/CeladonCity_Frlg/scripts.pory"
	msgbox CeladonCity_Text_SomeoneStoleSilphScope, MSGBOX_NPC
	end


CeladonCity_EventScript_TrainerTips1::
# 83 "data/maps/CeladonCity_Frlg/scripts.pory"
	msgbox CeladonCity_Text_ExplainXAccuracyDireHit, MSGBOX_SIGN
	end


CeladonCity_EventScript_CitySign::
# 88 "data/maps/CeladonCity_Frlg/scripts.pory"
	msgbox CeladonCity_Text_CitySign, MSGBOX_SIGN
	end


CeladonCity_EventScript_GymSign::
# 93 "data/maps/CeladonCity_Frlg/scripts.pory"
	lockall
# 94 "data/maps/CeladonCity_Frlg/scripts.pory"
	famechecker FAMECHECKER_ERIKA, 0
# 95 "data/maps/CeladonCity_Frlg/scripts.pory"
	msgbox CeladonCity_Text_GymSign
# 96 "data/maps/CeladonCity_Frlg/scripts.pory"
	releaseall
	end


CeladonCity_EventScript_MansionSign::
# 101 "data/maps/CeladonCity_Frlg/scripts.pory"
	msgbox CeladonCity_Text_MansionSign, MSGBOX_SIGN
	end


CeladonCity_EventScript_DeptStoreSign::
# 106 "data/maps/CeladonCity_Frlg/scripts.pory"
	msgbox CeladonCity_Text_DeptStoreSign, MSGBOX_SIGN
	end


CeladonCity_EventScript_TrainerTips2::
# 111 "data/maps/CeladonCity_Frlg/scripts.pory"
	msgbox CeladonCity_Text_GuardSpecProtectsFromStatus, MSGBOX_SIGN
	end


CeladonCity_EventScript_PrizeExchangeSign::
# 116 "data/maps/CeladonCity_Frlg/scripts.pory"
	msgbox CeladonCity_Text_PrizeExchangeSign, MSGBOX_SIGN
	end


CeladonCity_EventScript_GameCornerSign::
# 121 "data/maps/CeladonCity_Frlg/scripts.pory"
	msgbox CeladonCity_Text_GameCornerSign, MSGBOX_SIGN
	end


CeladonCity_Text_GotMyKoffingInCinnabar::
# 125 "data/maps/CeladonCity_Frlg/scripts.pory"
	.string "I got my KOFFING in CINNABAR.\p"
	.string "It's usually nice, but it breathes\n"
	.string "poison when it's angry.$"

CeladonCity_Text_GymIsGreatFullOfWomen::
# 131 "data/maps/CeladonCity_Frlg/scripts.pory"
	.string "Heheh! This GYM is great!\n"
	.string "It's full of women!$"

CeladonCity_Text_GameCornerIsBadForCitysImage::
# 136 "data/maps/CeladonCity_Frlg/scripts.pory"
	.string "CELADON takes pride in its efforts\n"
	.string "to keep the city beautiful.\p"
	.string "That's why the new GAME CORNER is\n"
	.string "bad for our city's image.$"

CeladonCity_Text_BlewItAllAtSlots::
# 143 "data/maps/CeladonCity_Frlg/scripts.pory"
	.string "Moan…\n"
	.string "I blew it all at the slots!\p"
	.string "I knew I should have cashed in my\n"
	.string "COINS for prizes!$"

CeladonCity_Text_MyTrustedPalPoliwrath::
# 150 "data/maps/CeladonCity_Frlg/scripts.pory"
	.string "This is my trusted pal, POLIWRATH.\p"
	.string "It evolved from a POLIWHIRL when\n"
	.string "I used a WATER STONE.$"

CeladonCity_Text_Poliwrath::
# 156 "data/maps/CeladonCity_Frlg/scripts.pory"
	.string "POLIWRATH: Ribi ribit!$"

CeladonCity_Text_GetLostOrIllPunchYou::
# 160 "data/maps/CeladonCity_Frlg/scripts.pory"
	.string "What are you staring at?\n"
	.string "Get lost, or I'll punch you.$"

CeladonCity_Text_KeepOutOfTeamRocketsWay::
# 165 "data/maps/CeladonCity_Frlg/scripts.pory"
	.string "Keep out of TEAM ROCKET's way!$"

CeladonCity_Text_ExplainXAccuracyDireHit::
# 169 "data/maps/CeladonCity_Frlg/scripts.pory"
	.string "TRAINER TIPS\p"
	.string "X ACCURACY boosts the accuracy of\n"
	.string "techniques.\p"
	.string "DIRE HIT jacks up the likelihood\n"
	.string "of critical hits.\p"
	.string "Get your items at the CELADON\n"
	.string "DEPT. STORE!$"

CeladonCity_Text_CitySign::
# 179 "data/maps/CeladonCity_Frlg/scripts.pory"
	.string "CELADON CITY\n"
	.string "The City of Rainbow Dreams$"

CeladonCity_Text_GymSign::
# 184 "data/maps/CeladonCity_Frlg/scripts.pory"
	.string "CELADON CITY POKéMON GYM\n"
	.string "LEADER: ERIKA\l"
	.string "The Nature-Loving Princess!$"

CeladonCity_Text_MansionSign::
# 190 "data/maps/CeladonCity_Frlg/scripts.pory"
	.string "CELADON MANSION$"

CeladonCity_Text_DeptStoreSign::
# 194 "data/maps/CeladonCity_Frlg/scripts.pory"
	.string "Find what you need at the\n"
	.string "CELADON DEPT. STORE!$"

CeladonCity_Text_GuardSpecProtectsFromStatus::
# 199 "data/maps/CeladonCity_Frlg/scripts.pory"
	.string "TRAINER TIPS\p"
	.string "GUARD SPEC. protects POKéMON\n"
	.string "from status-reduction moves during\l"
	.string "battle.\p"
	.string "Get your items at the\n"
	.string "CELADON DEPT. STORE!$"

CeladonCity_Text_PrizeExchangeSign::
# 208 "data/maps/CeladonCity_Frlg/scripts.pory"
	.string "COINS exchanged for prizes!\n"
	.string "PRIZE EXCHANGE$"

CeladonCity_Text_GameCornerSign::
# 213 "data/maps/CeladonCity_Frlg/scripts.pory"
	.string "ROCKET GAME CORNER\n"
	.string "The playground for grown-ups!$"

CeladonCity_Text_ScaldedTongueOnTea::
# 218 "data/maps/CeladonCity_Frlg/scripts.pory"
	.string "Aaaagh, ow…\n"
	.string "I scalded my tongue!\p"
	.string "This nice old lady in the MANSION\n"
	.string "gave me some TEA.\p"
	.string "But it was boiling hot!\n"
	.string "Gotta cool it to drink it.$"

Text_SoftboiledTeach::
# 227 "data/maps/CeladonCity_Frlg/scripts.pory"
	.string "Hello, there!\p"
	.string "I've seen you about, but I never\n"
	.string "had a chance to chat.\p"
	.string "It must be good luck that brought\n"
	.string "us together finally.\p"
	.string "I'd like to celebrate by teaching\n"
	.string "you the move SOFTBOILED.$"

Text_SoftboiledDeclined::
# 237 "data/maps/CeladonCity_Frlg/scripts.pory"
	.string "I'll always be keeping an eye out\n"
	.string "for you.\p"
	.string "I hope we can chat again.$"

Text_SoftboiledWhichMon::
# 243 "data/maps/CeladonCity_Frlg/scripts.pory"
	.string "So, who's the POKéMON that gets\n"
	.string "the chance to learn SOFTBOILED?$"

Text_SoftboiledTaught::
# 248 "data/maps/CeladonCity_Frlg/scripts.pory"
	.string "I wish you the best of luck!$"

CeladonCity_Text_SomeoneStoleSilphScope::
# 252 "data/maps/CeladonCity_Frlg/scripts.pory"
	.string "Oh, what am I to do…\p"
	.string "Someone stole our SILPH SCOPE.\p"
	.string "The thief came running this way,\n"
	.string "I'm sure of it.\p"
	.string "But I lost sight of him!\n"
	.string "Where'd he go?$"
