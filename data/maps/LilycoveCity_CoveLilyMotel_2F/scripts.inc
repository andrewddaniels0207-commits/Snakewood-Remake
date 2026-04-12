LilycoveCity_CoveLilyMotel_2F_MapScripts::
	.byte 0


LilycoveCity_CoveLilyMotel_2F_EventScript_GameDesigner::
# 4 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	lock
# 5 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	faceplayer
# 6 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	goto_if_unset FLAG_TEMP_2, LilycoveCity_CoveLilyMotel_2F_EventScript_GameDesigner_2
LilycoveCity_CoveLilyMotel_2F_EventScript_GameDesigner_1:
# 9 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	goto_if_set FLAG_TEMP_2, LilycoveCity_CoveLilyMotel_2F_EventScript_GameDesigner_5
LilycoveCity_CoveLilyMotel_2F_EventScript_GameDesigner_4:
# 12 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	specialvar VAR_RESULT, HasAllHoennMons
# 13 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq LilycoveCity_CoveLilyMotel_2F_EventScript_GameDesigner_8
LilycoveCity_CoveLilyMotel_2F_EventScript_GameDesigner_7:
# 16 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	release
	end

LilycoveCity_CoveLilyMotel_2F_EventScript_GameDesigner_2:
# 7 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	call LilycoveCity_CoveLilyMotel_2F_EventScript_ShowMeCompletedDex
	goto LilycoveCity_CoveLilyMotel_2F_EventScript_GameDesigner_1

LilycoveCity_CoveLilyMotel_2F_EventScript_GameDesigner_5:
# 10 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	call LilycoveCity_CoveLilyMotel_2F_EventScript_ShowDiploma
	goto LilycoveCity_CoveLilyMotel_2F_EventScript_GameDesigner_4

LilycoveCity_CoveLilyMotel_2F_EventScript_GameDesigner_8:
# 14 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	goto LilycoveCity_CoveLilyMotel_2F_EventScript_AllHoennMonsFanfare
	goto LilycoveCity_CoveLilyMotel_2F_EventScript_GameDesigner_7


LilycoveCity_CoveLilyMotel_2F_EventScript_ShowMeCompletedDex::
# 21 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	msgbox LilycoveCity_CoveLilyMotel_2F_Text_ShowMeCompletedDex, MSGBOX_DEFAULT
	return


LilycoveCity_CoveLilyMotel_2F_EventScript_AllHoennMonsFanfare::
# 26 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	setflag FLAG_TEMP_2
# 27 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 28 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	waitfanfare
# 29 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	goto LilycoveCity_CoveLilyMotel_2F_EventScript_ShowDiploma
	end


LilycoveCity_CoveLilyMotel_2F_EventScript_ShowDiploma::
# 34 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	message LilycoveCity_CoveLilyMotel_2F_Text_FilledPokedexGiveYouThis
# 35 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	waitmessage
# 36 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 37 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	special Special_ShowDiploma
# 38 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	waitstate
# 39 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	release
	end


LilycoveCity_CoveLilyMotel_2F_EventScript_Programmer::
# 44 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	msgbox LilycoveCity_CoveLilyMotel_2F_Text_ImTheProgrammer, MSGBOX_NPC
	end


LilycoveCity_CoveLilyMotel_2F_EventScript_GraphicArtist::
# 49 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	msgbox LilycoveCity_CoveLilyMotel_2F_Text_ImTheGraphicArtist, MSGBOX_NPC
	end


LilycoveCity_CoveLilyMotel_2F_EventScript_FatMan::
# 54 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	msgbox LilycoveCity_CoveLilyMotel_2F_Text_GirlsAreCute, MSGBOX_NPC
	end


LilycoveCity_CoveLilyMotel_2F_EventScript_Woman::
# 59 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	msgbox LilycoveCity_CoveLilyMotel_2F_Text_SeaBreezeTicklesHeart, MSGBOX_NPC
	end


LilycoveCity_CoveLilyMotel_2F_EventScript_GameBoyKid::
# 64 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	msgbox LilycoveCity_CoveLilyMotel_2F_Text_NeverLeaveWithoutGameBoy, MSGBOX_NPC
	end


LilycoveCity_CoveLilyMotel_2F_EventScript_Scott::
# 69 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	lock
# 70 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	faceplayer
# 71 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	goto_if_set FLAG_MET_SCOTT_IN_LILYCOVE, LilycoveCity_CoveLilyMotel_2F_EventScript_Scott_2
LilycoveCity_CoveLilyMotel_2F_EventScript_Scott_1:
# 74 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	msgbox LilycoveCity_CoveLilyMotel_2F_Text_SnoozingPreferBattles, MSGBOX_DEFAULT
# 75 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	addvar VAR_SCOTT_STATE, 1
# 76 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	setflag FLAG_MET_SCOTT_IN_LILYCOVE
# 77 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	release
	end

LilycoveCity_CoveLilyMotel_2F_EventScript_Scott_2:
# 72 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	goto LilycoveCity_CoveLilyMotel_2F_EventScript_MetScott
	goto LilycoveCity_CoveLilyMotel_2F_EventScript_Scott_1


LilycoveCity_CoveLilyMotel_2F_EventScript_MetScott::
# 82 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	msgbox LilycoveCity_CoveLilyMotel_2F_Text_ContestsDoTakeStrategy, MSGBOX_DEFAULT
# 83 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	release
	end


LilycoveCity_CoveLilyMotel_2F_Text_ShowMeCompletedDex::
# 87 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "I'm the GAME DESIGNER.\p"
	.string "Oh, is that right?\n"
	.string "You're working on a POKéDEX?\p"
	.string "It's tough trying to complete it,\n"
	.string "but don't give up.\p"
	.string "If you do complete it, please come\n"
	.string "show me.$"

LilycoveCity_CoveLilyMotel_2F_Text_FilledPokedexGiveYouThis::
# 97 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "Wow! That's awesome!\n"
	.string "Yep, it's totally awesome!\p"
	.string "This POKéDEX is completely filled!\n"
	.string "You really must love POKéMON!\p"
	.string "I'm so impressed!\p"
	.string "Let me give you something in\n"
	.string "recognition of your feat!$"

LilycoveCity_CoveLilyMotel_2F_Text_ImTheProgrammer::
# 107 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "Me? You're talking to me?\n"
	.string "I'm the PROGRAMMER.\p"
	.string "I wonder what the SLOTS are\n"
	.string "like here.$"

LilycoveCity_CoveLilyMotel_2F_Text_ImTheGraphicArtist::
# 114 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "I'm the GRAPHIC ARTIST! Aren't the\n"
	.string "POKéMON of HOENN interesting?$"

LilycoveCity_CoveLilyMotel_2F_Text_GirlsAreCute::
# 119 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "The girl TUBERS, they're cute, hey?\n"
	.string "To battle against a cute TUBER…\p"
	.string "Whoop, it's so awesome!\p"
	.string "And the TWINS! Aren't they cute?\n"
	.string "A 2-on-2 battle with TWINS…\p"
	.string "Whoop, it's unbearably fun!$"

LilycoveCity_CoveLilyMotel_2F_Text_SeaBreezeTicklesHeart::
# 128 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "The sea breeze tickles my heart.\n"
	.string "It feels wonderful here!$"

LilycoveCity_CoveLilyMotel_2F_Text_NeverLeaveWithoutGameBoy::
# 133 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "You never know when and where\n"
	.string "people will challenge you.\p"
	.string "That's why I never leave home without\n"
	.string "my GAME BOY ADVANCE.$"

LilycoveCity_CoveLilyMotel_2F_Text_SnoozingPreferBattles::
# 140 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "SCOTT: … … … … …\n"
	.string "… … … … … Zzz…\p"
	.string "… … … … … Huh?!\n"
	.string "Oh, sorry, sorry! I was snoozing!\p"
	.string "I came to check out this POKéMON\n"
	.string "CONTEST thing.\p"
	.string "I have to admit, it does look quite\n"
	.string "entertaining, but…\p"
	.string "Consider me a purist--I prefer\n"
	.string "battles and tough TRAINERS.\p"
	.string "But that's just me.\p"
	.string "{PLAYER}{KUN}, I hope you'll enjoy everything\n"
	.string "like the GYMS, CONTESTS, BATTLE TENT,\l"
	.string "the whole works!$"

LilycoveCity_CoveLilyMotel_2F_Text_ContestsDoTakeStrategy::
# 157 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "SCOTT: I think it does take strategy\n"
	.string "to win a CONTEST.\p"
	.string "Devising CONTEST strategies is one way\n"
	.string "of becoming a better TRAINER, I'd say.$"
