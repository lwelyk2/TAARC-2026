Hamtaro_AcornParkSouth_MapScripts::
# 2 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, AcornPark_LadderCheck
	.byte 0


AcornPark_LadderCheck::
# 6 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	goto_if_set FLAG_GAVE_PANDA_HAMMER, AcornPark_LadderCheck_2
AcornPark_LadderCheck_1:
	return

AcornPark_LadderCheck_2:
# 7 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	call AcornPark_FixLadder
	goto AcornPark_LadderCheck_1


AcornPark_FixLadder::
# 13 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	setmetatile 4, 5, 0x0DA, FALSE
# 14 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	setmetatile 4, 6, 0x0E2, FALSE
# 15 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	setmetatile 4, 7, 0x0EA, FALSE
# 16 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	setmetatile 4, 8, 0x0F2, FALSE
# 17 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	setmetatile 4, 9, 0x0FA, FALSE
# 18 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	setmetatile 5, 5, 0x0DB, FALSE
# 19 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	setmetatile 5, 6, 0x0E3, FALSE
# 20 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	setmetatile 5, 7, 0x0EB, FALSE
# 21 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	setmetatile 5, 8, 0x0F3, FALSE
# 22 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	setmetatile 5, 9, 0x0FB, FALSE
# 23 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	setmetatile 6, 5, 0x0DC, FALSE
# 24 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	setmetatile 6, 6, 0x0E4, FALSE
# 25 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	setmetatile 6, 7, 0x0EC, FALSE
# 26 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	setmetatile 6, 8, 0x0F4, FALSE
# 27 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	setmetatile 6, 9, 0x0FC, FALSE
	return


AcornParkSouthSoccerHam::
# 31 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	lock
# 32 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	dynmultipush gText_Hamha, 0
# 33 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	dynmultipush gText_HifHif, 1
# 34 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	dynmultipush gText_TackQ, 2
# 35 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	dynmultipush gText_DigDig, 3
	checkitem ITEM_TM_ASTONISH
# 0 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne AcornParkSouthSoccerHam_2
# 39 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	dynmultipush AcornParkSouthQuestionMarks, 4
AcornParkSouthSoccerHam_1:
# 41 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	dynmultistack 1, 1, FALSE, 5, 0, 0, DYN_MULTICHOICE_CB_NONE
# 42 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	switch VAR_RESULT
# 43 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	case 0, AcornParkSouthSoccerHam_7
# 47 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	case 1, AcornParkSouthSoccerHam_8
# 52 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	case 2, AcornParkSouthSoccerHam_9
# 62 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	case 3, AcornParkSouthSoccerHam_10
# 79 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	case 4, AcornParkSouthSoccerHam_11
AcornParkSouthSoccerHam_5:
# 123 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	goto_if_set FLAG_FOUGHT_SOCCER_HAM, AcornParkSouthSoccerHam_12
# 132 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	createfieldmugshot MUGSHOT_SOCCER_HAM, EMOTE_NORMAL
# 133 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	msgbox AcornParkSouthSoccerHam_Text_12
# 134 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	applymovement LOCALID_SOCCER_HAM, AcornParkSouthSoccerHam_Movement_0
# 135 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	waitmovement
# 136 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	release
	end

AcornParkSouthSoccerHam_2:
# 37 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	dynmultipush AcornParkSouthShockieText, 4
	goto AcornParkSouthSoccerHam_1

AcornParkSouthSoccerHam_7:
# 44 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	call Common_EventScript_MoveToFront
# 45 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	call Common_EventScript_Hamha
	goto AcornParkSouthSoccerHam_5

AcornParkSouthSoccerHam_8:
# 48 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	call Common_EventScript_HifHif
# 49 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	msgbox AcornParkSouthSoccerHam_Text_0
# 50 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	release
	end

AcornParkSouthSoccerHam_9:
# 53 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	call Common_EventScript_MoveToFront
# 54 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	call Common_EventScript_TackQ
# 55 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	applymovement LOCALID_SOCCER_HAM, AcornParkSouthSoccerHam_Movement_0
# 56 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	createfieldmugshot MUGSHOT_SOCCER_HAM, EMOTE_NORMAL
# 57 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	msgbox AcornParkSouthSoccerHam_Text_1
# 58 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	applymovement LOCALID_SOCCER_HAM, AcornParkSouthSoccerHam_Movement_1
# 59 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	waitmovement
# 60 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	release
	end

AcornParkSouthSoccerHam_10:
# 63 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	call Common_EventScript_DigDig
# 64 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	getobjectfacingdirection LOCALID_PLAYER, VAR_TEMP_1
# 65 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	switch VAR_TEMP_1
# 66 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	case DIR_EAST, AcornParkSouthSoccerHam_17
# 69 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	case DIR_WEST, AcornParkSouthSoccerHam_18
AcornParkSouthSoccerHam_15:
# 75 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	createfieldmugshot MUGSHOT_SOCCER_HAM, EMOTE_NORMAL
# 76 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	msgbox AcornParkSouthSoccerHam_Text_2
# 77 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	release
	end

AcornParkSouthSoccerHam_11:
# 80 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	setspeaker AcornParkSouthSoccerHam_Text_3
# 81 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	createfieldmugshot MUGSHOT_HAMTARO, EMOTE_NORMAL
# 82 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	message AcornParkSouthSoccerHam_Text_4
# 83 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	applymovement LOCALID_PLAYER, AcornParkSouthSoccerHam_Movement_4
# 84 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	waitmovement
# 85 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	waitmessage
# 86 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	waitbuttonpress
# 87 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	goto_if_set FLAG_FOUGHT_SOCCER_HAM, AcornParkSouthSoccerHam_21
	checkitem ITEM_TM_ASTONISH
# 0 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne AcornParkSouthSoccerHam_23
	goto AcornParkSouthSoccerHam_5

AcornParkSouthSoccerHam_12:
# 124 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	createfieldmugshot MUGSHOT_SOCCER_HAM, EMOTE_NORMAL
# 125 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	msgbox AcornParkSouthSoccerHam_Text_10
# 126 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	applymovement LOCALID_SOCCER_HAM, AcornParkSouthSoccerHam_Movement_8
# 127 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	waitmovement
# 128 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	createfieldmugshot MUGSHOT_SOCCER_HAM, EMOTE_NORMAL
# 129 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	msgbox AcornParkSouthSoccerHam_Text_11
# 130 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	call SoccerHamBattleHandler
	return

AcornParkSouthSoccerHam_17:
# 67 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	applymovement LOCALID_PLAYER, AcornParkSouthSoccerHam_Movement_2
# 68 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	waitmovement
	goto AcornParkSouthSoccerHam_15

AcornParkSouthSoccerHam_18:
# 70 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	applymovement LOCALID_PLAYER, AcornParkSouthSoccerHam_Movement_3
# 71 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	waitmovement
	goto AcornParkSouthSoccerHam_15

AcornParkSouthSoccerHam_21:
	goto AcornParkSouthSoccerHam_5

AcornParkSouthSoccerHam_23:
# 91 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	createfieldmugshot MUGSHOT_SOCCER_HAM, EMOTE_NORMAL
# 92 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	msgbox AcornParkSouthSoccerHam_Text_5
# 93 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	applymovement LOCALID_SOCCER_HAM, AcornParkSouthSoccerHam_Movement_5
# 94 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	playse SE_PIN
# 95 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	waitmovement
# 96 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	waitse
# 97 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	createfieldmugshot MUGSHOT_SOCCER_HAM, EMOTE_NORMAL
# 98 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	msgbox AcornParkSouthSoccerHam_Text_6
# 100 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	waitmovement
# 101 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	removefieldmugshot
# 102 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	setspeaker SP_NAME_NONE
# 103 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	message AcornParkSouthSoccerHam_Text_7
# 104 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	playse MUS_RG_OBTAIN_KEY_ITEM
# 105 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	additem ITEM_TM_THIEF, 1
# 106 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	applymovement LOCALID_PLAYER, AcornParkSouthDictionary
# 107 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	waitmovement
# 108 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	waitse
# 109 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	waitmessage
# 110 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	waitbuttonpress
# 111 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	closemessage
# 112 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	applymovement LOCALID_PLAYER, AcornParkSouthSoccerHam_Movement_6
# 113 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	waitmovement
# 114 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	createfieldmugshot MUGSHOT_SOCCER_HAM, EMOTE_NORMAL
# 115 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	msgbox AcornParkSouthSoccerHam_Text_8
# 116 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	applymovement LOCALID_SOCCER_HAM, AcornParkSouthSoccerHam_Movement_7
# 117 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	waitmovement
# 118 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	createfieldmugshot MUGSHOT_SOCCER_HAM, EMOTE_NORMAL
# 119 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	msgbox AcornParkSouthSoccerHam_Text_9
# 120 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	call SoccerHamBattleHandler
	goto AcornParkSouthSoccerHam_5


SoccerHamBattleHandler::
# 144 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	setflag FLAG_FOUGHT_SOCCER_HAM
# 145 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	setflag FLAG_NO_WHITEOUT
# 146 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	setwildbattle SPECIES_STRAWBERRY_SOCCER_HAM, 5, ITEM_LEFTOVERS
# 147 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	dowildbattle
# 148 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 149 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	switch VAR_RESULT
# 150 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	case B_OUTCOME_WON, SoccerHamBattleHandler_3
# 160 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	case B_OUTCOME_RAN, SoccerHamBattleHandler_4
# 166 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	case B_OUTCOME_LOST, SoccerHamBattleHandler_5
	return

SoccerHamBattleHandler_3:
# 151 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	createfieldmugshot MUGSHOT_SOCCER_HAM, EMOTE_NORMAL
# 152 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	msgbox SoccerHamBattleHandler_Text_0
# 153 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	fadescreen FADE_TO_BLACK
# 154 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	playse SE_EXIT
# 155 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	removeobject LOCALID_SOCCER_HAM
# 156 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	waitse
# 157 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 158 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	release
	end

SoccerHamBattleHandler_4:
# 161 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	createfieldmugshot MUGSHOT_SOCCER_HAM, EMOTE_NORMAL
# 162 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	msgbox SoccerHamBattleHandler_Text_1
# 163 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	special HealPlayerParty
# 164 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	release
	end

SoccerHamBattleHandler_5:
# 167 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	createfieldmugshot MUGSHOT_SOCCER_HAM, EMOTE_NORMAL
# 168 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	msgbox SoccerHamBattleHandler_Text_2
# 169 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	release
	end


AcornPathSouthPanda::
# 176 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	lock
# 177 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	dynmultichoice 1, 1, FALSE, 4, 0, DYN_MULTICHOICE_CB_NONE, gText_Hamha, gText_HifHif, gText_TackQ, gText_DigDig
# 178 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	switch VAR_RESULT
# 179 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	case 0, AcornPathSouthPanda_3
# 182 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	case 1, AcornPathSouthPanda_4
# 187 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	case 2, AcornPathSouthPanda_5
# 199 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	case 3, AcornPathSouthPanda_6
AcornPathSouthPanda_1:
# 205 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	call Common_EventScript_Hamha
# 206 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	applymovement LOCALID_PLAYER, AcornParkSouthSoccerHam_Movement_6
# 207 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	waitmovement
# 208 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	applymovement LOCALID_PANDA, AcornParkSouthSoccerHam_Movement_1
# 209 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	waitmovement
# 210 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	createfieldmugshot MUGSHOT_PANDA, EMOTE_NORMAL
# 211 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	setspeaker AcornPathSouthPanda_Text_1
# 212 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	msgbox AcornPathSouthPanda_Text_4
# 213 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	applymovement LOCALID_PANDA, AcornParkSouthSoccerHam_Movement_0
# 214 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	waitmovement
# 215 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	createfieldmugshot MUGSHOT_PANDA, EMOTE_NORMAL
# 216 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	setspeaker AcornPathSouthPanda_Text_1
# 217 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	message AcornPathSouthPanda_Text_5
# 218 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	applymovement LOCALID_PANDA, AcornParkSouthSoccerHam_Movement_1
# 219 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	waitmessage
# 220 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	waitbuttonpress
# 221 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	closemessage
# 222 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	createfieldmugshot MUGSHOT_PANDA, EMOTE_NORMAL
# 223 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	setspeaker AcornPathSouthPanda_Text_1
# 224 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	message AcornPathSouthPanda_Text_6
# 225 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	applymovement LOCALID_PANDA, AcornParkSouthShockie
# 226 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	waitmessage
# 227 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	waitbuttonpress
# 228 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	closemessage
# 229 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	removefieldmugshot
	checkitem ITEM_TM_ASTONISH, 1
# 0 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq AcornPathSouthPanda_8
AcornPathSouthPanda_7:
	checkitem ITEM_HAMMER
# 0 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne AcornPathSouthPanda_11
# 296 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	createfieldmugshot MUGSHOT_PANDA, EMOTE_NORMAL
# 297 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	setspeaker AcornPathSouthPanda_Text_1
# 298 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	msgbox AcornPathSouthPanda_Text_11
# 299 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	applymovement LOCALID_PANDA, AcornParkSouthSoccerHam_Movement_0
# 300 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	waitmovement
# 301 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	release
	end

AcornPathSouthPanda_3:
# 180 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	call Common_EventScript_MoveToFront
	goto AcornPathSouthPanda_1

AcornPathSouthPanda_4:
# 183 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	call Common_EventScript_HifHif
# 184 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	msgbox AcornPathSouthPanda_Text_0
# 185 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	release
	end

AcornPathSouthPanda_5:
# 188 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	call Common_EventScript_MoveToFront
# 189 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	call Common_EventScript_TackQ
# 190 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	applymovement LOCALID_PANDA, AcornPathSouthPanda_Movement_0
# 191 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	waitmovement
# 192 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	createfieldmugshot MUGSHOT_PANDA, EMOTE_NORMAL
# 193 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	setspeaker AcornPathSouthPanda_Text_1
# 194 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	msgbox AcornPathSouthPanda_Text_2
# 195 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	applymovement LOCALID_PANDA, AcornParkSouthSoccerHam_Movement_6
# 196 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	waitmovement
# 197 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	release
	end

AcornPathSouthPanda_6:
# 200 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	call Common_EventScript_DigDig
# 201 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	msgbox AcornPathSouthPanda_Text_3
# 202 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	release
	end

AcornPathSouthPanda_8:
# 231 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	applymovement LOCALID_PLAYER, AcornParkSouthShockie
# 232 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	waitmovement
# 233 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	setspeaker SP_NAME_NONE
# 234 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	message AcornPathSouthPanda_Text_7
# 235 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	playse MUS_RG_OBTAIN_KEY_ITEM
# 236 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	additem ITEM_TM_ASTONISH, 1
# 237 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	applymovement LOCALID_PLAYER, AcornParkSouthDictionary
# 238 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	waitmovement
# 239 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	waitse
# 240 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	waitmessage
# 241 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	waitbuttonpress
# 242 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	closemessage
# 243 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	applymovement LOCALID_PLAYER, AcornParkSouthSoccerHam_Movement_6
# 244 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	waitmovement
	goto AcornPathSouthPanda_7

AcornPathSouthPanda_11:
# 247 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	createfieldmugshot MUGSHOT_PANDA, EMOTE_NORMAL
# 248 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	setspeaker AcornPathSouthPanda_Text_1
# 249 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	applymovement LOCALID_PANDA, AcornParkSouthSoccerHam_Movement_5
# 250 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	msgbox AcornPathSouthPanda_Text_8
# 251 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	applymovement LOCALID_PANDA, AcornParkSouthSoccerHam_Movement_0
# 252 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	waitmovement
# 253 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	applymovement LOCALID_PLAYER, AcornPathSouthPanda_Movement_1
# 258 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	waitmovement
# 259 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	fadescreen FADE_TO_BLACK
# 260 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	playse SE_M_EARTHQUAKE
# 261 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	waitse
# 262 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	playse SE_M_DIG
# 263 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	waitse
# 264 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	playse SE_M_CUT
# 265 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	waitse
# 266 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	call AcornPark_FixLadder
# 267 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	special DrawWholeMapView
# 268 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 269 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	setspeaker AcornPathSouthPanda_Text_1
# 270 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	createfieldmugshot MUGSHOT_PANDA, EMOTE_NORMAL
# 271 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	msgbox AcornPathSouthPanda_Text_9
# 272 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	applymovement LOCALID_PANDA, AcornPathSouthPanda_Movement_2
# 276 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	applymovement LOCALID_PLAYER, AcornPathSouthPanda_Movement_3
# 279 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	waitmovement
# 280 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	setspeaker AcornPathSouthPanda_Text_1
# 281 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	createfieldmugshot MUGSHOT_PANDA, EMOTE_NORMAL
# 282 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	msgbox AcornPathSouthPanda_Text_10
# 283 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	applymovement LOCALID_PLAYER, AcornPathSouthPanda_Movement_4
# 284 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	applymovement LOCALID_PANDA, AcornPathSouthPanda_Movement_5
# 287 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	waitmovement
# 288 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	removeobject LOCALID_PANDA
# 289 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	setflag FLAG_NEED_SNOOZER
# 290 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	setflag FLAG_GOT_PANDA
# 291 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	clearflag FLAG_HIDE_WORKING_PANDA
# 292 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	clearflag FLAG_NOT_GOT_PANDA
# 293 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	release
	end


AcornParkSouthSnoozer::
# 308 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	lock
# 309 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	dynmultipush gText_Hamha, 0
# 310 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	dynmultipush gText_HifHif, 1
# 311 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	dynmultipush gText_TackQ, 2
# 312 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	dynmultipush gText_DigDig, 3
	checkitem ITEM_TM_UPROAR
# 0 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne AcornParkSouthSnoozer_2
# 316 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	dynmultipush AcornParkSouthQuestionMarks, 4
AcornParkSouthSnoozer_1:
# 318 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	dynmultistack 1, 1, FALSE, 5, 0, 0, DYN_MULTICHOICE_CB_NONE
# 319 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	switch VAR_RESULT
# 320 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	case 0, AcornParkSouthSnoozer_7
# 327 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	case 1, AcornParkSouthSnoozer_8
# 335 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	case 2, AcornParkSouthSnoozer_9
# 365 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	case 3, AcornParkSouthSnoozer_10
# 369 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	case 4, AcornParkSouthSnoozer_11
AcornParkSouthSnoozer_5:
# 399 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	release
	end

AcornParkSouthSnoozer_2:
# 314 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	dynmultipush AcornParkSouthDingBang, 4
	goto AcornParkSouthSnoozer_1

AcornParkSouthSnoozer_7:
# 321 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	call Common_EventScript_Hamha
# 322 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	createfieldmugshot MUGSHOT_SNOOZER, EMOTE_NORMAL
# 323 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	setspeaker AcornParkSouthSnoozer_Text_0
# 324 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	msgbox AcornParkSouthSnoozer_Text_1
	goto AcornParkSouthSnoozer_5

AcornParkSouthSnoozer_8:
# 328 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	call Common_EventScript_HifHif
# 329 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	msgbox AcornParkSouthSnoozer_Text_2
# 330 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	createfieldmugshot MUGSHOT_SNOOZER, EMOTE_NORMAL
# 331 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	setspeaker AcornParkSouthSnoozer_Text_0
# 332 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	msgbox AcornParkSouthSnoozer_Text_1
	goto AcornParkSouthSnoozer_5

AcornParkSouthSnoozer_9:
# 336 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	call Common_EventScript_TackQ
# 337 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	createfieldmugshot MUGSHOT_SNOOZER, EMOTE_NORMAL
# 338 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	setspeaker AcornParkSouthSnoozer_Text_0
	checkitem ITEM_TM_REST
# 0 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne AcornParkSouthSnoozer_13
# 343 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	msgbox AcornParkSouthSnoozer_Text_3
# 347 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	setspeaker SP_NAME_NONE
# 348 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	message AcornParkSouthSnoozer_Text_4
# 349 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	playse MUS_RG_OBTAIN_KEY_ITEM
# 350 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	additem ITEM_TM_REST, 1
# 351 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	applymovement LOCALID_PLAYER, AcornParkSouthDictionary
# 352 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	waitmovement
# 353 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	waitse
# 354 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	waitmessage
# 355 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	waitbuttonpress
# 356 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	closemessage
# 357 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	applymovement LOCALID_PLAYER, AcornParkSouthSoccerHam_Movement_6
# 358 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	waitmovement
AcornParkSouthSnoozer_12:
# 360 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	msgbox AcornParkSouthSnoozer_Text_5
# 361 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	applymovement LOCALID_PLAYER, AcornPathSouthPanda_Movement_0
# 362 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	waitmovement
# 363 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	msgbox AcornParkSouthSnoozer_Text_6
	goto AcornParkSouthSnoozer_5

AcornParkSouthSnoozer_10:
# 366 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	call Common_EventScript_DigDig
# 367 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	msgbox AcornParkSouthSnoozer_Text_7
	goto AcornParkSouthSnoozer_5

AcornParkSouthSnoozer_11:
	checkitem ITEM_TM_UPROAR
# 0 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne AcornParkSouthSnoozer_16
	goto AcornParkSouthSnoozer_5

AcornParkSouthSnoozer_13:
# 340 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	msgbox AcornParkSouthSnoozer_Text_1
	goto AcornParkSouthSnoozer_12

AcornParkSouthSnoozer_16:
# 372 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	createfieldmugshot MUGSHOT_HAMTARO, EMOTE_NORMAL
# 373 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	setspeaker AcornParkSouthSoccerHam_Text_3
# 374 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	message AcornParkSouthSnoozer_Text_8
# 375 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	applymovement LOCALID_PLAYER, AcornParkSouthSnoozer_Movement_0
# 376 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	waitmovement
# 377 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	waitmessage
# 378 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	waitbuttonpress
# 379 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	applymovement LOCALID_SNOOZER, AcornParkSouthSoccerHam_Movement_0
# 382 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	waitmovement
# 383 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	createfieldmugshot MUGSHOT_SNOOZER, EMOTE_NORMAL
# 384 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	setspeaker AcornParkSouthSnoozer_Text_0
# 385 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	msgbox AcornParkSouthSnoozer_Text_9
# 386 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	applymovement LOCALID_SNOOZER, AcornParkSouthSoccerHam_Movement_7
# 389 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	waitmovement
# 390 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	msgbox AcornParkSouthSnoozer_Text_10
# 391 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	fadescreen FADE_TO_BLACK
# 392 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	removeobject LOCALID_SNOOZER
# 393 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	playse SE_EXIT
# 394 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	waitse
# 395 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	fadescreen FADE_FROM_BLACK
	goto AcornParkSouthSnoozer_5


AcornPark_OxnardsSunflowerSeed::
# 404 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	lock
# 405 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	dynmultichoice 1, 1, FALSE, 4, 0, DYN_MULTICHOICE_CB_NONE, gText_Hamha, gText_HifHif, gText_TackQ, gText_DigDig
# 406 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	switch VAR_RESULT
# 407 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	case 0, AcornPark_OxnardsSunflowerSeed_2
# 411 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	case 1, AcornPark_OxnardsSunflowerSeed_3
# 417 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	case 2, AcornPark_OxnardsSunflowerSeed_4
# 421 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	case 3, AcornPark_OxnardsSunflowerSeed_5
	return

AcornPark_OxnardsSunflowerSeed_2:
# 408 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	call Common_EventScript_Hamha
# 409 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	release
	end

AcornPark_OxnardsSunflowerSeed_3:
# 412 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	call Common_EventScript_HifHif
# 413 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	giveitem ITEM_SUNFLOWER_SEED
# 414 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	removeobject LOCALID_SEED
# 415 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	release
	end

AcornPark_OxnardsSunflowerSeed_4:
# 418 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	call Common_EventScript_TackQ
# 419 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	release
	end

AcornPark_OxnardsSunflowerSeed_5:
# 422 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	call Common_EventScript_DigDig
# 423 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	msgbox AcornPark_OxnardsSunflowerSeed_Text_0
# 424 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	release
	end


# 430 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
AcornParkSouthHamha:
# 431 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	hamha
	step_end

# 434 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
AcornParkSouthShockie:
# 435 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	delay_16
# 436 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	delay_16
# 437 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	shockie
	step_end

# 440 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
AcornParkSouthDictionary:
# 441 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	delay_8
# 442 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	emote_x
	step_end

# 445 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
EmoteTest:
# 446 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	emote_x
# 447 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	delay_16
# 448 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	delay_16
# 449 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	delay_16
# 450 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	emote_exclamation_mark
# 451 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	delay_16
# 452 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	delay_16
# 453 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	delay_16
# 454 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	emote_question_mark
# 455 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	delay_16
# 456 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	delay_16
# 457 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	delay_16
# 458 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	emote_heart
# 459 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	delay_16
# 460 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	delay_16
# 461 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	delay_16
# 462 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	emote_double_exclamation_mark
# 463 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	delay_16
# 464 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	delay_16
# 465 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	delay_16
	step_end

# 55 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
AcornParkSouthSoccerHam_Movement_0:
# 55 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	walk_in_place_up
	step_end

# 58 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
AcornParkSouthSoccerHam_Movement_1:
# 58 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	walk_in_place_down
	step_end

# 67 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
AcornParkSouthSoccerHam_Movement_2:
# 67 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	face_left
	step_end

# 70 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
AcornParkSouthSoccerHam_Movement_3:
# 70 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	face_right
	step_end

# 83 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
AcornParkSouthSoccerHam_Movement_4:
# 83 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	shockie
	step_end

# 93 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
AcornParkSouthSoccerHam_Movement_5:
# 93 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	emote_exclamation_mark
	step_end

# 112 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
AcornParkSouthSoccerHam_Movement_6:
# 112 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	face_up
	step_end

# 116 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
AcornParkSouthSoccerHam_Movement_7:
# 116 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	walk_in_place_left
	step_end

# 126 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
AcornParkSouthSoccerHam_Movement_8:
# 126 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	walk_in_place_right
	step_end

# 190 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
AcornPathSouthPanda_Movement_0:
# 190 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	face_down
	step_end

# 253 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
AcornPathSouthPanda_Movement_1:
# 254 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	lock_facing_direction
# 255 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	walk_down
# 256 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	unlock_facing_direction
	step_end

# 272 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
AcornPathSouthPanda_Movement_2:
# 273 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	walk_up
# 273 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	walk_up
# 273 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	walk_up
# 273 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	walk_up
# 273 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	walk_up
# 273 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	walk_up
# 274 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	walk_down
	step_end

# 276 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
AcornPathSouthPanda_Movement_3:
# 277 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	walk_up
# 277 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	walk_up
	step_end

# 283 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
AcornPathSouthPanda_Movement_4:
# 283 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	walk_down
# 283 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	walk_down
# 283 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	walk_right
# 283 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	walk_right
# 283 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	face_down
	step_end

# 284 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
AcornPathSouthPanda_Movement_5:
# 285 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	walk_down
# 285 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	walk_down
# 285 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	walk_down
# 285 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	walk_down
# 285 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	walk_down
# 285 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	walk_down
# 285 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	walk_down
# 285 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	walk_down
# 285 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	walk_down
# 285 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	walk_down
# 285 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	walk_down
# 285 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	walk_down
	step_end

# 375 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
AcornParkSouthSnoozer_Movement_0:
# 375 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	dingbang
	step_end

AcornParkSouthSoccerHam_Text_0:
# 49 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	.string "Smells like strawberries...\pand sweat.$"

AcornParkSouthSoccerHam_Text_1:
# 57 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	.string "Ha! You think that would hurt me?\pI'm made of tougher stuff than that!$"

AcornParkSouthSoccerHam_Text_2:
# 76 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	.string "Hahaha! You think I'd hide it there?\nerrr... I mean.\pWhy are you digging here? You're just\nmaking a mess!$"

AcornParkSouthSoccerHam_Text_3:
# 80 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	.string "Hamtaro$"

AcornParkSouthSoccerHam_Text_4:
# 82 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	.string "{COLOR RED}SHOCKIE!$"

AcornParkSouthSoccerHam_Text_5:
# 92 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	.string "Huh? SHOCKIE?\pOh, the ladder? Yeah that's a strange\none. I wonder who could have done that?\pI think that Hamster should spend more\ntime keeping track of his hammer and\lless time helping other Hamsters make\lnew sports that are worse than\lStrawberry Soccer.$"

AcornParkSouthSoccerHam_Text_6:
# 98 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	.string "Uhh I mean, assuming he had a hammer.\pThat he lost.\pAnd wasn't stolen.\pI mean you'd have to be a real {COLOR RED}DELIN-Q{COLOR DARK_GRAY}\nto do something like steal a tool.$"

AcornParkSouthSoccerHam_Text_7:
# 103 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	.string "You learned {COLOR RED}DELIN-Q!$"

AcornParkSouthSoccerHam_Text_8:
# 115 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	.string "What, who are you calling DELIN-Q?\pThat's it!$"

AcornParkSouthSoccerHam_Text_9:
# 119 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	.string "It's time for me to teach you a lesson!$"

AcornParkSouthSoccerHam_Text_10:
# 125 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	.string "Well, well, well. It seems you didn't learn\nyour lesson the last time.$"

AcornParkSouthSoccerHam_Text_11:
# 129 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	.string "Get ready for a beating!$"

AcornParkSouthSoccerHam_Text_12:
# 133 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	.string "Ham-howdy! You must be one of those\nHamHams who are always around here\lhaving adventures.\pYou should give up on this stupid new\nHam-battle idea and play some good old\lstrawberry soccer!$"

SoccerHamBattleHandler_Text_0:
# 152 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	.string "No way! You can't beat me! Not with\nall of my training!\pYou'll never get that hammer though!$"

SoccerHamBattleHandler_Text_1:
# 162 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	.string "Ha! That's right, run away little Ham!$"

SoccerHamBattleHandler_Text_2:
# 168 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	.string "I'm still the best!\pWho needs this ham-battle nonsense?\pI got all the strength I need from\nplaying strawberry soccer.$"

AcornPathSouthPanda_Text_0:
# 184 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	.string "Smells like PANDA!$"

AcornPathSouthPanda_Text_1:
# 193 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	.string "Panda$"

AcornPathSouthPanda_Text_2:
# 194 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	.string "Ow! Hamtaro, why would you do that?$"

AcornPathSouthPanda_Text_3:
# 201 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	.string "Nothing there...$"

AcornPathSouthPanda_Text_4:
# 212 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	.string "Hey Hamtaro, I'm glad you're here!\pI needed to get some extra parts,\nbut I came by this morning and saw this!$"

AcornPathSouthPanda_Text_5:
# 217 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	.string "The ladder is broken!$"

AcornPathSouthPanda_Text_6:
# 224 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	.string "I was completely {COLOR RED}SHOCKIE{COLOR DARK_GRAY}!$"

AcornPathSouthPanda_Text_7:
# 234 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	.string "You learned {COLOR RED}Shockie!$"

AcornPathSouthPanda_Text_8:
# 250 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	.string "My Hammer! I've been looking all over\n"
	.string "for that!\p"
	.string "Thanks Hamtaro, now I can fix this\n"
	.string "ladder! Stand back and I'll get to work!$"

AcornPathSouthPanda_Text_9:
# 271 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	.string "And that should do it!$"

AcornPathSouthPanda_Text_10:
# 282 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	.string "It works and I got the parts I needed!\p"
	.string "Thanks for your help Hamtaro! I'll see\n"
	.string "you at the clubhouse later!$"

AcornPathSouthPanda_Text_11:
# 298 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	.string "I can fix this, but my hammer is missing\n"
	.string "too!\p"
	.string "If you find it, can you bring it to me?$"

AcornParkSouthSnoozer_Text_0:
# 323 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	.string "Snoozer$"

AcornParkSouthSnoozer_Text_1:
# 324 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	.string "Zzzzzzzzzzzzzzzzzzzz...$"

AcornParkSouthSnoozer_Text_2:
# 329 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	.string "Smells like Snoozer$"

AcornParkSouthSnoozer_Text_3:
# 343 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	.string "Zzzzz... I'm {COLOR RED}Zuzuzu$"

AcornParkSouthSnoozer_Text_4:
# 348 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	.string "You learned {COLOR RED}Zuzuzu!$"

AcornParkSouthSnoozer_Text_5:
# 360 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	.string "He's still asleep...$"

AcornParkSouthSnoozer_Text_6:
# 363 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	.string "How did he sleep through that?!?!$"

AcornParkSouthSnoozer_Text_7:
# 367 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	.string "There's a little bit of dirt on Snoozer\n"
	.string "now, but he's still sleeping through it.$"

AcornParkSouthSnoozer_Text_8:
# 374 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	.string "DingBang!$"

AcornParkSouthSnoozer_Text_9:
# 385 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	.string "Huh? what's going on?\pWhy is it so noisy...$"

AcornParkSouthSnoozer_Text_10:
# 390 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	.string "Oh, back to the clubhouse?\pSure thing. I guess I can do that...$"

AcornPark_OxnardsSunflowerSeed_Text_0:
# 423 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	.string "Nothing here...$"

AcornParkSouthDingBang::
# 468 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	.string "{COLOR RED}DINGBANG$"

AcornParkSouthShockieText::
# 471 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	.string "{COLOR RED}SHOCKIE$"

AcornParkSouthQuestionMarks::
# 474 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	.string "?????$"
