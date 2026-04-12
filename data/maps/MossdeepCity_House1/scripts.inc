# 1 "data/maps/MossdeepCity_House1/scripts.pory"

# 2 "data/maps/MossdeepCity_House1/scripts.pory"
MossdeepCity_House1_MapScripts::
# 3 "data/maps/MossdeepCity_House1/scripts.pory"
	.byte 0
# 4 "data/maps/MossdeepCity_House1/scripts.pory"

# 5 "data/maps/MossdeepCity_House1/scripts.pory"

# 6 "data/maps/MossdeepCity_House1/scripts.pory"
MossdeepCity_House1_EventScript_BlackBelt::
# 7 "data/maps/MossdeepCity_House1/scripts.pory"
# 4 "data/maps/MossdeepCity_House1/scripts.pory"
# 8 "data/maps/MossdeepCity_House1/scripts.pory"
	lock
# 9 "data/maps/MossdeepCity_House1/scripts.pory"
# 5 "data/maps/MossdeepCity_House1/scripts.pory"
# 10 "data/maps/MossdeepCity_House1/scripts.pory"
	faceplayer
# 11 "data/maps/MossdeepCity_House1/scripts.pory"
# 6 "data/maps/MossdeepCity_House1/scripts.pory"
# 12 "data/maps/MossdeepCity_House1/scripts.pory"
	bufferleadmonspeciesname STR_VAR_1
# 13 "data/maps/MossdeepCity_House1/scripts.pory"
# 7 "data/maps/MossdeepCity_House1/scripts.pory"
# 14 "data/maps/MossdeepCity_House1/scripts.pory"
	msgbox MossdeepCity_House1_Text_HmmYourPokemon, MSGBOX_DEFAULT
# 15 "data/maps/MossdeepCity_House1/scripts.pory"
# 8 "data/maps/MossdeepCity_House1/scripts.pory"
# 16 "data/maps/MossdeepCity_House1/scripts.pory"
	specialvar VAR_RESULT, GetPokeblockNameByMonNature
# 17 "data/maps/MossdeepCity_House1/scripts.pory"
# 9 "data/maps/MossdeepCity_House1/scripts.pory"
# 18 "data/maps/MossdeepCity_House1/scripts.pory"
	compare VAR_RESULT, 0
# 19 "data/maps/MossdeepCity_House1/scripts.pory"
	goto_if_eq MossdeepCity_House1_EventScript_BlackBelt_2
# 20 "data/maps/MossdeepCity_House1/scripts.pory"
MossdeepCity_House1_EventScript_BlackBelt_1:
# 21 "data/maps/MossdeepCity_House1/scripts.pory"
# 12 "data/maps/MossdeepCity_House1/scripts.pory"
# 22 "data/maps/MossdeepCity_House1/scripts.pory"
	msgbox MossdeepCity_House1_Text_ItLikesXPokeblocks, MSGBOX_DEFAULT
# 23 "data/maps/MossdeepCity_House1/scripts.pory"
# 13 "data/maps/MossdeepCity_House1/scripts.pory"
# 24 "data/maps/MossdeepCity_House1/scripts.pory"
	release
# 25 "data/maps/MossdeepCity_House1/scripts.pory"
	end
# 26 "data/maps/MossdeepCity_House1/scripts.pory"

# 27 "data/maps/MossdeepCity_House1/scripts.pory"
MossdeepCity_House1_EventScript_BlackBelt_2:
# 28 "data/maps/MossdeepCity_House1/scripts.pory"
# 10 "data/maps/MossdeepCity_House1/scripts.pory"
# 29 "data/maps/MossdeepCity_House1/scripts.pory"
	goto MossdeepCity_House1_EventScript_NeutralNature
# 30 "data/maps/MossdeepCity_House1/scripts.pory"
	goto MossdeepCity_House1_EventScript_BlackBelt_1
# 31 "data/maps/MossdeepCity_House1/scripts.pory"

# 32 "data/maps/MossdeepCity_House1/scripts.pory"

# 33 "data/maps/MossdeepCity_House1/scripts.pory"
MossdeepCity_House1_EventScript_NeutralNature::
# 34 "data/maps/MossdeepCity_House1/scripts.pory"
# 18 "data/maps/MossdeepCity_House1/scripts.pory"
# 35 "data/maps/MossdeepCity_House1/scripts.pory"
	msgbox MossdeepCity_House1_Text_DoesntLikeOrDislikePokeblocks, MSGBOX_DEFAULT
# 36 "data/maps/MossdeepCity_House1/scripts.pory"
# 19 "data/maps/MossdeepCity_House1/scripts.pory"
# 37 "data/maps/MossdeepCity_House1/scripts.pory"
	release
# 38 "data/maps/MossdeepCity_House1/scripts.pory"
	end
# 39 "data/maps/MossdeepCity_House1/scripts.pory"

# 40 "data/maps/MossdeepCity_House1/scripts.pory"

# 41 "data/maps/MossdeepCity_House1/scripts.pory"
MossdeepCity_House1_EventScript_Woman::
# 42 "data/maps/MossdeepCity_House1/scripts.pory"
# 24 "data/maps/MossdeepCity_House1/scripts.pory"
# 43 "data/maps/MossdeepCity_House1/scripts.pory"
	msgbox MossdeepCity_House1_Text_HusbandCanTellPokeblockMonLikes, MSGBOX_NPC
# 44 "data/maps/MossdeepCity_House1/scripts.pory"
	end
# 45 "data/maps/MossdeepCity_House1/scripts.pory"

# 46 "data/maps/MossdeepCity_House1/scripts.pory"

# 47 "data/maps/MossdeepCity_House1/scripts.pory"
MossdeepCity_House1_Text_HmmYourPokemon::
# 48 "data/maps/MossdeepCity_House1/scripts.pory"
# 28 "data/maps/MossdeepCity_House1/scripts.pory"
# 49 "data/maps/MossdeepCity_House1/scripts.pory"
	.string "Hmm!\n"
# 50 "data/maps/MossdeepCity_House1/scripts.pory"
	.string "Your {STR_VAR_1}…$"
# 51 "data/maps/MossdeepCity_House1/scripts.pory"

# 52 "data/maps/MossdeepCity_House1/scripts.pory"
MossdeepCity_House1_Text_ItLikesXPokeblocks::
# 53 "data/maps/MossdeepCity_House1/scripts.pory"
# 33 "data/maps/MossdeepCity_House1/scripts.pory"
# 54 "data/maps/MossdeepCity_House1/scripts.pory"
	.string "It likes {STR_VAR_1}S,\n"
# 55 "data/maps/MossdeepCity_House1/scripts.pory"
	.string "doesn't it?\p"
# 56 "data/maps/MossdeepCity_House1/scripts.pory"
	.string "No, I'm positive of it! It definitely\n"
# 57 "data/maps/MossdeepCity_House1/scripts.pory"
	.string "likes {STR_VAR_1}S!$"
# 58 "data/maps/MossdeepCity_House1/scripts.pory"

# 59 "data/maps/MossdeepCity_House1/scripts.pory"
MossdeepCity_House1_Text_DoesntLikeOrDislikePokeblocks::
# 60 "data/maps/MossdeepCity_House1/scripts.pory"
# 40 "data/maps/MossdeepCity_House1/scripts.pory"
# 61 "data/maps/MossdeepCity_House1/scripts.pory"
	.string "It doesn't appear to like or dislike\n"
# 62 "data/maps/MossdeepCity_House1/scripts.pory"
	.string "any {POKEBLOCK}S.$"
# 63 "data/maps/MossdeepCity_House1/scripts.pory"

# 64 "data/maps/MossdeepCity_House1/scripts.pory"
MossdeepCity_House1_Text_HusbandCanTellPokeblockMonLikes::
# 65 "data/maps/MossdeepCity_House1/scripts.pory"
# 45 "data/maps/MossdeepCity_House1/scripts.pory"
# 66 "data/maps/MossdeepCity_House1/scripts.pory"
	.string "My husband can tell what kind of\n"
# 67 "data/maps/MossdeepCity_House1/scripts.pory"
	.string "{POKEBLOCK}S a POKéMON likes at a glance.$"
