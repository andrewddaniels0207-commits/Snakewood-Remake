SaffronCity_CopycatsHouse_1F_Frlg_MapScripts::
	.byte 0


SaffronCity_CopycatsHouse_1F_EventScript_CopycatsMom::
# 4 "data/maps/SaffronCity_CopycatsHouse_1F_Frlg/scripts.pory"
	msgbox SaffronCity_CopycatsHouse_1F_Text_DaughterIsSelfCentered, MSGBOX_NPC
	end


SaffronCity_CopycatsHouse_1F_EventScript_CopycatsDad::
# 9 "data/maps/SaffronCity_CopycatsHouse_1F_Frlg/scripts.pory"
	msgbox SaffronCity_CopycatsHouse_1F_Text_DaughterLikesToMimicPeople, MSGBOX_NPC
	end


SaffronCity_CopycatsHouse_1F_EventScript_Chansey::
# 14 "data/maps/SaffronCity_CopycatsHouse_1F_Frlg/scripts.pory"
	lock
# 15 "data/maps/SaffronCity_CopycatsHouse_1F_Frlg/scripts.pory"
	faceplayer
# 16 "data/maps/SaffronCity_CopycatsHouse_1F_Frlg/scripts.pory"
	waitse
# 17 "data/maps/SaffronCity_CopycatsHouse_1F_Frlg/scripts.pory"
	playmoncry SPECIES_CHANSEY, CRY_MODE_NORMAL
# 18 "data/maps/SaffronCity_CopycatsHouse_1F_Frlg/scripts.pory"
	msgbox SaffronCity_CopycatsHouse_1F_Text_Chansey
# 19 "data/maps/SaffronCity_CopycatsHouse_1F_Frlg/scripts.pory"
	waitmoncry
# 20 "data/maps/SaffronCity_CopycatsHouse_1F_Frlg/scripts.pory"
	release
	end


SaffronCity_CopycatsHouse_1F_Text_DaughterIsSelfCentered::
# 24 "data/maps/SaffronCity_CopycatsHouse_1F_Frlg/scripts.pory"
	.string "My daughter is so self-centered.\n"
	.string "She has but a few friends.$"

SaffronCity_CopycatsHouse_1F_Text_DaughterLikesToMimicPeople::
# 29 "data/maps/SaffronCity_CopycatsHouse_1F_Frlg/scripts.pory"
	.string "My daughter likes to mimic people.\n"
	.string "It's rather vexing.\p"
	.string "Her mimicry has earned her the\n"
	.string "nickname COPYCAT around here.$"

SaffronCity_CopycatsHouse_1F_Text_Chansey::
# 36 "data/maps/SaffronCity_CopycatsHouse_1F_Frlg/scripts.pory"
	.string "CHANSEY: Chaan! Sii!$"
