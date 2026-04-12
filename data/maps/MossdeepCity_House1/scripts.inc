MossdeepCity_House1_MapScripts::
	.byte 0


MossdeepCity_House1_EventScript_BlackBelt::
# 4 "data/maps/MossdeepCity_House1/scripts.pory"
	lock
# 5 "data/maps/MossdeepCity_House1/scripts.pory"
	faceplayer
# 6 "data/maps/MossdeepCity_House1/scripts.pory"
	bufferleadmonspeciesname STR_VAR_1
# 7 "data/maps/MossdeepCity_House1/scripts.pory"
	msgbox MossdeepCity_House1_Text_HmmYourPokemon, MSGBOX_DEFAULT
# 8 "data/maps/MossdeepCity_House1/scripts.pory"
	specialvar VAR_RESULT, GetPokeblockNameByMonNature
# 9 "data/maps/MossdeepCity_House1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MossdeepCity_House1_EventScript_BlackBelt_2
MossdeepCity_House1_EventScript_BlackBelt_1:
# 12 "data/maps/MossdeepCity_House1/scripts.pory"
	msgbox MossdeepCity_House1_Text_ItLikesXPokeblocks, MSGBOX_DEFAULT
# 13 "data/maps/MossdeepCity_House1/scripts.pory"
	release
	end

MossdeepCity_House1_EventScript_BlackBelt_2:
# 10 "data/maps/MossdeepCity_House1/scripts.pory"
	goto MossdeepCity_House1_EventScript_NeutralNature
	goto MossdeepCity_House1_EventScript_BlackBelt_1


MossdeepCity_House1_EventScript_NeutralNature::
# 18 "data/maps/MossdeepCity_House1/scripts.pory"
	msgbox MossdeepCity_House1_Text_DoesntLikeOrDislikePokeblocks, MSGBOX_DEFAULT
# 19 "data/maps/MossdeepCity_House1/scripts.pory"
	release
	end


MossdeepCity_House1_EventScript_Woman::
# 24 "data/maps/MossdeepCity_House1/scripts.pory"
	msgbox MossdeepCity_House1_Text_HusbandCanTellPokeblockMonLikes, MSGBOX_NPC
	end


MossdeepCity_House1_Text_HmmYourPokemon::
# 28 "data/maps/MossdeepCity_House1/scripts.pory"
	.string "Hmm!\n"
	.string "Your {STR_VAR_1}…$"

MossdeepCity_House1_Text_ItLikesXPokeblocks::
# 33 "data/maps/MossdeepCity_House1/scripts.pory"
	.string "It likes {STR_VAR_1}S,\n"
	.string "doesn't it?\p"
	.string "No, I'm positive of it! It definitely\n"
	.string "likes {STR_VAR_1}S!$"

MossdeepCity_House1_Text_DoesntLikeOrDislikePokeblocks::
# 40 "data/maps/MossdeepCity_House1/scripts.pory"
	.string "It doesn't appear to like or dislike\n"
	.string "any {POKEBLOCK}S.$"

MossdeepCity_House1_Text_HusbandCanTellPokeblockMonLikes::
# 45 "data/maps/MossdeepCity_House1/scripts.pory"
	.string "My husband can tell what kind of\n"
	.string "{POKEBLOCK}S a POKéMON likes at a glance.$"
