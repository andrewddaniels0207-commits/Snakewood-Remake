# 1 "data/maps/RustboroCity_Flat1_2F/scripts.pory"

# 2 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
RustboroCity_Flat1_2F_MapScripts::
# 3 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.byte 0
# 4 "data/maps/RustboroCity_Flat1_2F/scripts.pory"

# 5 "data/maps/RustboroCity_Flat1_2F/scripts.pory"

# 6 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
RustboroCity_Flat1_2F_EventScript_WaldasDad::
# 7 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
# 4 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
# 8 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	lock
# 9 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
# 5 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
# 10 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	faceplayer
# 11 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
# 6 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
# 12 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	specialvar VAR_RESULT, TryBufferWaldaPhrase
# 13 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
# 7 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
# 14 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	compare VAR_RESULT, FALSE
# 15 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	goto_if_eq RustboroCity_Flat1_2F_EventScript_WaldasDad_2
# 16 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
RustboroCity_Flat1_2F_EventScript_WaldasDad_1:
# 17 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
# 10 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
# 18 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	compare VAR_RESULT, TRUE
# 19 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	goto_if_eq RustboroCity_Flat1_2F_EventScript_WaldasDad_4
# 20 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	return
# 21 "data/maps/RustboroCity_Flat1_2F/scripts.pory"

# 22 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
RustboroCity_Flat1_2F_EventScript_WaldasDad_2:
# 23 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
# 8 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
# 24 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	goto RustboroCity_Flat1_2F_EventScript_WaldasDadFirstPhrase
# 25 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	goto RustboroCity_Flat1_2F_EventScript_WaldasDad_1
# 26 "data/maps/RustboroCity_Flat1_2F/scripts.pory"

# 27 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
RustboroCity_Flat1_2F_EventScript_WaldasDad_4:
# 28 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
# 11 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
# 29 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	goto RustboroCity_Flat1_2F_EventScript_WaldasDadNewPhrase
# 30 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	return
# 31 "data/maps/RustboroCity_Flat1_2F/scripts.pory"

# 32 "data/maps/RustboroCity_Flat1_2F/scripts.pory"

# 33 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
RustboroCity_Flat1_2F_EventScript_GivePhrase::
# 34 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
# 16 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
# 35 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	special DoWaldaNamingScreen
# 36 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
# 17 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
# 37 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	waitstate
# 38 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
# 18 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
# 39 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	compare VAR_0x8004, 1
# 40 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	goto_if_eq RustboroCity_Flat1_2F_EventScript_GivePhrase_2
# 41 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
RustboroCity_Flat1_2F_EventScript_GivePhrase_1:
# 42 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
# 21 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
# 43 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	compare VAR_0x8004, 2
# 44 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	goto_if_eq RustboroCity_Flat1_2F_EventScript_GivePhrase_5
# 45 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
RustboroCity_Flat1_2F_EventScript_GivePhrase_4:
# 46 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
# 24 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
# 47 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	specialvar VAR_RESULT, TryGetWallpaperWithWaldaPhrase
# 48 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
# 25 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
# 49 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	compare VAR_RESULT, TRUE
# 50 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	goto_if_eq RustboroCity_Flat1_2F_EventScript_GivePhrase_8
# 51 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
RustboroCity_Flat1_2F_EventScript_GivePhrase_7:
# 52 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
# 28 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
# 53 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	compare VAR_RESULT, FALSE
# 54 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	goto_if_eq RustboroCity_Flat1_2F_EventScript_GivePhrase_11
# 55 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
RustboroCity_Flat1_2F_EventScript_GivePhrase_10:
# 56 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	end
# 57 "data/maps/RustboroCity_Flat1_2F/scripts.pory"

# 58 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
RustboroCity_Flat1_2F_EventScript_GivePhrase_2:
# 59 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
# 19 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
# 60 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	goto RustboroCity_Flat1_2F_EventScript_CancelGivePhrase
# 61 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	goto RustboroCity_Flat1_2F_EventScript_GivePhrase_1
# 62 "data/maps/RustboroCity_Flat1_2F/scripts.pory"

# 63 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
RustboroCity_Flat1_2F_EventScript_GivePhrase_5:
# 64 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
# 22 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
# 65 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	goto RustboroCity_Flat1_2F_EventScript_CancelGiveFirstPhrase
# 66 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	goto RustboroCity_Flat1_2F_EventScript_GivePhrase_4
# 67 "data/maps/RustboroCity_Flat1_2F/scripts.pory"

# 68 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
RustboroCity_Flat1_2F_EventScript_GivePhrase_8:
# 69 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
# 26 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
# 70 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	goto RustboroCity_Flat1_2F_EventScript_WaldaLikesPhrase
# 71 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	goto RustboroCity_Flat1_2F_EventScript_GivePhrase_7
# 72 "data/maps/RustboroCity_Flat1_2F/scripts.pory"

# 73 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
RustboroCity_Flat1_2F_EventScript_GivePhrase_11:
# 74 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
# 29 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
# 75 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	goto RustboroCity_Flat1_2F_EventScript_WaldaDoesntLikePhrase
# 76 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	goto RustboroCity_Flat1_2F_EventScript_GivePhrase_10
# 77 "data/maps/RustboroCity_Flat1_2F/scripts.pory"

# 78 "data/maps/RustboroCity_Flat1_2F/scripts.pory"

# 79 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
RustboroCity_Flat1_2F_EventScript_WaldasDadFirstPhrase::
# 80 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
# 35 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
# 81 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	msgbox RustboroCity_Flat1_2F_Text_HelloDoYouKnowFunnyPhrase, MSGBOX_YESNO
# 82 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
# 36 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
# 83 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	compare VAR_RESULT, NO
# 84 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	goto_if_eq RustboroCity_Flat1_2F_EventScript_WaldasDadFirstPhrase_2
# 85 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
RustboroCity_Flat1_2F_EventScript_WaldasDadFirstPhrase_1:
# 86 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
# 39 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
# 87 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	msgbox RustboroCity_Flat1_2F_Text_WonderfulLetsHearSuggestion, MSGBOX_DEFAULT
# 88 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
# 40 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
# 89 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	goto RustboroCity_Flat1_2F_EventScript_GivePhrase
# 90 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	return
# 91 "data/maps/RustboroCity_Flat1_2F/scripts.pory"

# 92 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
RustboroCity_Flat1_2F_EventScript_WaldasDadFirstPhrase_2:
# 93 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
# 37 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
# 94 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	goto RustboroCity_Flat1_2F_EventScript_DeclineGivePhrase
# 95 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	goto RustboroCity_Flat1_2F_EventScript_WaldasDadFirstPhrase_1
# 96 "data/maps/RustboroCity_Flat1_2F/scripts.pory"

# 97 "data/maps/RustboroCity_Flat1_2F/scripts.pory"

# 98 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
RustboroCity_Flat1_2F_EventScript_WaldasDadNewPhrase::
# 99 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
# 44 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
# 100 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	msgbox RustboroCity_Flat1_2F_Text_BeenSayingXDoYouKnowBetterPhrase, MSGBOX_YESNO
# 101 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
# 45 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
# 102 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	compare VAR_RESULT, NO
# 103 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	goto_if_eq RustboroCity_Flat1_2F_EventScript_WaldasDadNewPhrase_2
# 104 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
RustboroCity_Flat1_2F_EventScript_WaldasDadNewPhrase_1:
# 105 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
# 48 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
# 106 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	msgbox RustboroCity_Flat1_2F_Text_WonderfulLetsHearSuggestion, MSGBOX_DEFAULT
# 107 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
# 49 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
# 108 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	goto RustboroCity_Flat1_2F_EventScript_GivePhrase
# 109 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	return
# 110 "data/maps/RustboroCity_Flat1_2F/scripts.pory"

# 111 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
RustboroCity_Flat1_2F_EventScript_WaldasDadNewPhrase_2:
# 112 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
# 46 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
# 113 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	goto RustboroCity_Flat1_2F_EventScript_DeclineGivePhrase
# 114 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	goto RustboroCity_Flat1_2F_EventScript_WaldasDadNewPhrase_1
# 115 "data/maps/RustboroCity_Flat1_2F/scripts.pory"

# 116 "data/maps/RustboroCity_Flat1_2F/scripts.pory"

# 117 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
RustboroCity_Flat1_2F_EventScript_DeclineGivePhrase::
# 118 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
# 53 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
# 119 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	msgbox RustboroCity_Flat1_2F_Text_OhIsThatRight, MSGBOX_DEFAULT
# 120 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
# 54 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
# 121 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	release
# 122 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	end
# 123 "data/maps/RustboroCity_Flat1_2F/scripts.pory"

# 124 "data/maps/RustboroCity_Flat1_2F/scripts.pory"

# 125 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
RustboroCity_Flat1_2F_EventScript_CancelGivePhrase::
# 126 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
# 59 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
# 127 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	msgbox RustboroCity_Flat1_2F_Text_OhYouDontKnowAny, MSGBOX_DEFAULT
# 128 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
# 60 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
# 129 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	release
# 130 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	end
# 131 "data/maps/RustboroCity_Flat1_2F/scripts.pory"

# 132 "data/maps/RustboroCity_Flat1_2F/scripts.pory"

# 133 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
RustboroCity_Flat1_2F_EventScript_CancelGiveFirstPhrase::
# 134 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
# 65 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
# 135 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	msgbox RustboroCity_Flat1_2F_Text_ThinkOfMyOwnPhrase, MSGBOX_DEFAULT
# 136 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
# 66 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
# 137 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	call RustboroCity_Flat1_2F_EventScript_WaldasDadFaceWalda
# 138 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
# 67 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
# 139 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	msgbox RustboroCity_Flat1_2F_Text_ShesNotSmilingAtAll2, MSGBOX_DEFAULT
# 140 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
# 68 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
# 141 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	release
# 142 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	end
# 143 "data/maps/RustboroCity_Flat1_2F/scripts.pory"

# 144 "data/maps/RustboroCity_Flat1_2F/scripts.pory"

# 145 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
RustboroCity_Flat1_2F_EventScript_WaldaLikesPhrase::
# 146 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
# 73 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
# 147 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	msgbox RustboroCity_Flat1_2F_Text_LetsGiveItATry2, MSGBOX_DEFAULT
# 148 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
# 74 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
# 149 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	call RustboroCity_Flat1_2F_EventScript_WaldasDadFaceWalda
# 150 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
# 75 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
# 151 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	msgbox RustboroCity_Flat1_2F_Text_OhShesLaughing, MSGBOX_DEFAULT
# 152 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
# 76 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
# 153 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	applymovement LOCALID_WALDAS_DAD, Common_Movement_FacePlayer
# 154 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
# 77 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
# 155 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	waitmovement 0
# 156 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
# 78 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
# 157 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	msgbox RustboroCity_Flat1_2F_Text_ThankYouIllGiveYouWallpaper, MSGBOX_DEFAULT
# 158 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
# 79 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
# 159 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	release
# 160 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	end
# 161 "data/maps/RustboroCity_Flat1_2F/scripts.pory"

# 162 "data/maps/RustboroCity_Flat1_2F/scripts.pory"

# 163 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
RustboroCity_Flat1_2F_EventScript_WaldaDoesntLikePhrase::
# 164 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
# 84 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
# 165 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	msgbox RustboroCity_Flat1_2F_Text_LetsGiveItATry, MSGBOX_DEFAULT
# 166 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
# 85 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
# 167 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	call RustboroCity_Flat1_2F_EventScript_WaldasDadFaceWalda
# 168 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
# 86 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
# 169 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	msgbox RustboroCity_Flat1_2F_Text_ShesNotSmilingAtAll, MSGBOX_DEFAULT
# 170 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
# 87 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
# 171 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	release
# 172 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	end
# 173 "data/maps/RustboroCity_Flat1_2F/scripts.pory"

# 174 "data/maps/RustboroCity_Flat1_2F/scripts.pory"

# 175 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
RustboroCity_Flat1_2F_EventScript_WaldasDadFaceWalda::
# 176 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
# 92 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
# 177 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	turnobject LOCALID_WALDAS_DAD, DIR_EAST
# 178 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	return
# 179 "data/maps/RustboroCity_Flat1_2F/scripts.pory"

# 180 "data/maps/RustboroCity_Flat1_2F/scripts.pory"

# 181 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
RustboroCity_Flat1_2F_EventScript_WaldasMom::
# 182 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
# 97 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
# 183 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	msgbox RustboroCity_Flat1_2F_Text_ComingUpWithMealsIsHard, MSGBOX_NPC
# 184 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	end
# 185 "data/maps/RustboroCity_Flat1_2F/scripts.pory"

# 186 "data/maps/RustboroCity_Flat1_2F/scripts.pory"

# 187 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
RustboroCity_Flat1_2F_EventScript_PokeDoll::
# 188 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
# 102 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
# 189 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	msgbox RustboroCity_Flat1_2F_Text_ItsAPokemonPlushDoll, MSGBOX_SIGN
# 190 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	end
# 191 "data/maps/RustboroCity_Flat1_2F/scripts.pory"

# 192 "data/maps/RustboroCity_Flat1_2F/scripts.pory"

# 193 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
RustboroCity_Flat1_2F_Text_ComingUpWithMealsIsHard::
# 194 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
# 106 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
# 195 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "Oh, it's so hard every day…\p"
# 196 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "What's hard?\n"
# 197 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "You need to ask?\p"
# 198 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "It's trying to figure out what to\n"
# 199 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "make for meals every day.\p"
# 200 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "It really isn't easy coming up with\n"
# 201 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "meals every day.$"
# 202 "data/maps/RustboroCity_Flat1_2F/scripts.pory"

# 203 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
RustboroCity_Flat1_2F_Text_HelloDoYouKnowFunnyPhrase::
# 204 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
# 116 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
# 205 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "Oh, hello!\n"
# 206 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "Welcome to the PEPPER household.\p"
# 207 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "I have a question for you.\n"
# 208 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "Have you ever baby-sat?\p"
# 209 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "You see, I'm a new father, so raising\n"
# 210 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "a child is all new to me.\p"
# 211 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "And I have a problem. My daughter\n"
# 212 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "WALDA doesn't laugh enough.\p"
# 213 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "I think she'd laugh for me if I told\n"
# 214 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "her something funny.\p"
# 215 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "Do you know of a funny word or\n"
# 216 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "phrase you can tell me?$"
# 217 "data/maps/RustboroCity_Flat1_2F/scripts.pory"

# 218 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
RustboroCity_Flat1_2F_Text_BeenSayingXDoYouKnowBetterPhrase::
# 219 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
# 131 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
# 220 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "I've been saying “{STR_VAR_1}”\n"
# 221 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "to amuse her lately.\p"
# 222 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "Do you know of a better word or\n"
# 223 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "a phrase that might work?$"
# 224 "data/maps/RustboroCity_Flat1_2F/scripts.pory"

# 225 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
RustboroCity_Flat1_2F_Text_WonderfulLetsHearSuggestion::
# 226 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
# 138 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
# 227 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "Oh, that's wonderful.\n"
# 228 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "So, let's hear it, your suggestion.$"
# 229 "data/maps/RustboroCity_Flat1_2F/scripts.pory"

# 230 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
RustboroCity_Flat1_2F_Text_OhIsThatRight::
# 231 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
# 143 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
# 232 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "Oh, is that right?\p"
# 233 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "Well, if you come up with a good\n"
# 234 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "suggestion, I'm all ears.$"
# 235 "data/maps/RustboroCity_Flat1_2F/scripts.pory"

# 236 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
RustboroCity_Flat1_2F_Text_LetsGiveItATry2::
# 237 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
# 149 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
# 238 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "Ah, I see.\n"
# 239 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "Well, let's give it a try, shall we?$"
# 240 "data/maps/RustboroCity_Flat1_2F/scripts.pory"

# 241 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
RustboroCity_Flat1_2F_Text_OhShesLaughing::
# 242 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
# 154 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
# 243 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "{STR_VAR_1}.\n"
# 244 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "{STR_VAR_1}.\p"
# 245 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "Oh, yes! She's laughing!\n"
# 246 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "Oh, I am as delighted as she!$"
# 247 "data/maps/RustboroCity_Flat1_2F/scripts.pory"

# 248 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
RustboroCity_Flat1_2F_Text_LetsGiveItATry::
# 249 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
# 161 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
# 250 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "Ah, I see.\n"
# 251 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "Well, let's give it a try, shall we?$"
# 252 "data/maps/RustboroCity_Flat1_2F/scripts.pory"

# 253 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
RustboroCity_Flat1_2F_Text_ShesNotSmilingAtAll::
# 254 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
# 166 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
# 255 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "{STR_VAR_1}.\n"
# 256 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "{STR_VAR_1}.\p"
# 257 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "Hmmm… She's not smiling at all.\n"
# 258 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "Maybe WALDA is one serious child…$"
# 259 "data/maps/RustboroCity_Flat1_2F/scripts.pory"

# 260 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
RustboroCity_Flat1_2F_Text_ThinkOfMyOwnPhrase::
# 261 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
# 173 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
# 262 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "Oh, so you don't know any good words.\n"
# 263 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "I'd better think for myself, then.\p"
# 264 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "Hmm…\n"
# 265 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "How about “{STR_VAR_1}”?\l"
# 266 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "Let's see if that will work.$"
# 267 "data/maps/RustboroCity_Flat1_2F/scripts.pory"

# 268 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
RustboroCity_Flat1_2F_Text_ShesNotSmilingAtAll2::
# 269 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
# 181 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
# 270 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "{STR_VAR_1}.\n"
# 271 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "{STR_VAR_1}.\p"
# 272 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "Hmmm… She's not smiling at all.\n"
# 273 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "Maybe WALDA is one serious child…$"
# 274 "data/maps/RustboroCity_Flat1_2F/scripts.pory"

# 275 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
RustboroCity_Flat1_2F_Text_OhYouDontKnowAny::
# 276 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
# 188 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
# 277 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "Oh, so you don't know any good words.\n"
# 278 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "I guess I'll try to amuse her with\l"
# 279 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "the saying I used before.\p"
# 280 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "Anyways, if you have a good suggestion,\n"
# 281 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "don't hesitate in telling me, okay?$"
# 282 "data/maps/RustboroCity_Flat1_2F/scripts.pory"

# 283 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
RustboroCity_Flat1_2F_Text_ThankYouIllGiveYouWallpaper::
# 284 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
# 196 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
# 285 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "Thank you!\p"
# 286 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "Thanks to you, my darling WALDA\n"
# 287 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "laughed for me!\p"
# 288 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "Actually, I may not look all that\n"
# 289 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "special, but I'm one of DEVON\l"
# 290 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "CORPORATION's top researchers.\p"
# 291 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "So, how about I do something in return\n"
# 292 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "for you?\p"
# 293 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "I know, I'll add some new wallpaper\n"
# 294 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "patterns for the BOXES in the PC\l"
# 295 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "POKéMON Storage System.\p"
# 296 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "In the wallpaper pattern menu,\n"
# 297 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "select “FRIENDS.”\p"
# 298 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "That will give you access to the new\n"
# 299 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "wallpaper patterns.$"
# 300 "data/maps/RustboroCity_Flat1_2F/scripts.pory"

# 301 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
RustboroCity_Flat1_2F_Text_ItsAPokemonPlushDoll::
# 302 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
# 214 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
# 303 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "It's a POKéMON plush DOLL!$"
