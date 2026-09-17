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
# 46 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	case 1, AcornParkSouthSoccerHam_8
# 51 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	case 2, AcornParkSouthSoccerHam_9
# 59 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	case 3, AcornParkSouthSoccerHam_10
# 75 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	case 4, AcornParkSouthSoccerHam_11
AcornParkSouthSoccerHam_5:
# 107 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	goto_if_set FLAG_FOUGHT_SOCCER_HAM, AcornParkSouthSoccerHam_12
# 114 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	msgbox AcornParkSouthSoccerHam_Text_10
# 115 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	applymovement LOCALID_SOCCER_HAM, AcornParkSouthSoccerHam_Movement_0
# 116 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	waitmovement
# 117 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	release
	end

AcornParkSouthSoccerHam_2:
# 37 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	dynmultipush AcornParkSouthShockieText, 4
	goto AcornParkSouthSoccerHam_1

AcornParkSouthSoccerHam_7:
# 44 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	call Common_EventScript_MoveToFront
	goto AcornParkSouthSoccerHam_5

AcornParkSouthSoccerHam_8:
# 47 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	call Common_EventScript_HifHif
# 48 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	msgbox AcornParkSouthSoccerHam_Text_0
# 49 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	release
	end

AcornParkSouthSoccerHam_9:
# 52 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	call Common_EventScript_MoveToFront
# 53 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	call Common_EventScript_TackQ
# 54 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	applymovement LOCALID_SOCCER_HAM, AcornParkSouthSoccerHam_Movement_0
# 55 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	msgbox AcornParkSouthSoccerHam_Text_1
# 56 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	applymovement LOCALID_SOCCER_HAM, AcornParkSouthSoccerHam_Movement_1
# 57 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	release
	end

AcornParkSouthSoccerHam_10:
# 60 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	call Common_EventScript_DigDig
# 61 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	getobjectfacingdirection LOCALID_PLAYER, VAR_TEMP_1
# 62 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	switch VAR_TEMP_1
# 63 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	case DIR_EAST, AcornParkSouthSoccerHam_17
# 66 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	case DIR_WEST, AcornParkSouthSoccerHam_18
AcornParkSouthSoccerHam_15:
# 72 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	msgbox AcornParkSouthSoccerHam_Text_2
# 73 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	release
	end

AcornParkSouthSoccerHam_11:
# 76 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	goto_if_set FLAG_FOUGHT_SOCCER_HAM, AcornParkSouthSoccerHam_21
	checkitem ITEM_TM_ASTONISH
# 0 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne AcornParkSouthSoccerHam_23
	goto AcornParkSouthSoccerHam_5

AcornParkSouthSoccerHam_12:
# 108 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	msgbox AcornParkSouthSoccerHam_Text_8
# 109 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	applymovement LOCALID_SOCCER_HAM, AcornParkSouthSoccerHam_Movement_6
# 110 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	waitmovement
# 111 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	msgbox AcornParkSouthSoccerHam_Text_9
# 112 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	call SoccerHamBattleHandler
	return

AcornParkSouthSoccerHam_17:
# 64 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	applymovement LOCALID_PLAYER, AcornParkSouthSoccerHam_Movement_2
# 65 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	waitmovement
	goto AcornParkSouthSoccerHam_15

AcornParkSouthSoccerHam_18:
# 67 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	applymovement LOCALID_PLAYER, AcornParkSouthSoccerHam_Movement_3
# 68 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	waitmovement
	goto AcornParkSouthSoccerHam_15

AcornParkSouthSoccerHam_21:
	goto AcornParkSouthSoccerHam_5

AcornParkSouthSoccerHam_23:
# 80 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	msgbox AcornParkSouthSoccerHam_Text_3
# 81 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	applymovement LOCALID_SOCCER_HAM, AcornParkSouthSoccerHam_Movement_4
# 82 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	playse SE_PIN
# 83 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	waitmovement
# 84 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	waitse
# 85 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	msgbox AcornParkSouthSoccerHam_Text_4
# 87 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	waitmovement
# 88 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	setspeaker SP_NAME_NONE
# 89 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	message AcornParkSouthSoccerHam_Text_5
# 90 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	playse MUS_RG_OBTAIN_KEY_ITEM
# 91 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	additem ITEM_TM_THIEF, 1
# 92 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	applymovement LOCALID_PLAYER, AcornParkSouthDictionary
# 93 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	waitmovement
# 94 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	waitse
# 95 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	waitmessage
# 96 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	waitbuttonpress
# 97 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	closemessage
# 98 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	applymovement LOCALID_PLAYER, AcornParkSouthSoccerHam_Movement_5
# 99 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	waitmovement
# 100 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	msgbox AcornParkSouthSoccerHam_Text_6
# 101 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	applymovement LOCALID_SOCCER_HAM, AcornParkSouthSoccerHam_Movement_6
# 102 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	waitmovement
# 103 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	msgbox AcornParkSouthSoccerHam_Text_7
# 104 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	call SoccerHamBattleHandler
	goto AcornParkSouthSoccerHam_5


SoccerHamBattleHandler::
# 125 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	setflag FLAG_FOUGHT_SOCCER_HAM
# 126 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	setflag FLAG_NO_WHITEOUT
# 127 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	setwildbattle SPECIES_STRAWBERRY_SOCCER_HAM, 5, ITEM_LEFTOVERS
# 128 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	dowildbattle
# 129 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 130 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	switch VAR_RESULT
# 131 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	case B_OUTCOME_WON, SoccerHamBattleHandler_3
# 138 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	case B_OUTCOME_RAN, SoccerHamBattleHandler_4
# 143 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	case B_OUTCOME_LOST, SoccerHamBattleHandler_5
SoccerHamBattleHandler_1:
	return

SoccerHamBattleHandler_3:
# 132 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	msgbox SoccerHamBattleHandler_Text_0
# 133 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	applymovement LOCALID_SOCCER_HAM, SoccerHamBattleHandler_Movement_0
# 134 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	waitmovement LOCALID_SOCCER_HAM
# 135 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	playse SE_EXIT
# 136 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	removeobject LOCALID_SOCCER_HAM
# 137 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	waitse
	goto SoccerHamBattleHandler_1

SoccerHamBattleHandler_4:
# 139 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	msgbox SoccerHamBattleHandler_Text_1
# 140 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	special HealPlayerParty
# 141 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	release
	end

SoccerHamBattleHandler_5:
# 144 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	msgbox SoccerHamBattleHandler_Text_2
# 145 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	release
	end


AcornPathSouthPanda::
# 152 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	lock
# 153 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	dynmultichoice 1, 1, FALSE, 4, 0, DYN_MULTICHOICE_CB_NONE, gText_Hamha, gText_HifHif, gText_TackQ, gText_DigDig
# 154 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	switch VAR_RESULT
# 155 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	case 0, AcornPathSouthPanda_3
# 158 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	case 1, AcornPathSouthPanda_4
# 163 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	case 2, AcornPathSouthPanda_5
# 175 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	case 3, AcornPathSouthPanda_6
AcornPathSouthPanda_1:
# 181 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	call Common_EventScript_Hamha
# 182 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	applymovement LOCALID_PLAYER, AcornParkSouthSoccerHam_Movement_5
# 183 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	waitmovement
# 184 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	applymovement LOCALID_PANDA, AcornParkSouthSoccerHam_Movement_1
# 185 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	waitmovement
# 186 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	createfieldmugshot MUGSHOT_PANDA, EMOTE_NORMAL
# 187 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	setspeaker AcornPathSouthPanda_Text_1
# 188 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	msgbox AcornPathSouthPanda_Text_4
# 189 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	applymovement LOCALID_PANDA, AcornParkSouthSoccerHam_Movement_0
# 190 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	waitmovement
# 191 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	createfieldmugshot MUGSHOT_PANDA, EMOTE_NORMAL
# 192 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	setspeaker AcornPathSouthPanda_Text_1
# 193 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	message AcornPathSouthPanda_Text_5
# 194 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	applymovement LOCALID_PANDA, AcornParkSouthSoccerHam_Movement_1
# 195 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	waitmessage
# 196 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	waitbuttonpress
# 197 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	closemessage
# 198 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	createfieldmugshot MUGSHOT_PANDA, EMOTE_NORMAL
# 199 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	setspeaker AcornPathSouthPanda_Text_1
# 200 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	message AcornPathSouthPanda_Text_6
# 201 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	applymovement LOCALID_PANDA, AcornParkSouthShockie
# 202 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	waitmessage
# 203 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	waitbuttonpress
# 204 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	closemessage
# 205 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
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
# 269 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	createfieldmugshot MUGSHOT_PANDA, EMOTE_NORMAL
# 270 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	setspeaker AcornPathSouthPanda_Text_1
# 271 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	msgbox AcornPathSouthPanda_Text_11
# 272 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	applymovement LOCALID_PANDA, AcornParkSouthSoccerHam_Movement_0
# 273 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	waitmovement
# 274 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	release
	end

AcornPathSouthPanda_3:
# 156 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	call Common_EventScript_MoveToFront
	goto AcornPathSouthPanda_1

AcornPathSouthPanda_4:
# 159 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	call Common_EventScript_HifHif
# 160 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	msgbox AcornPathSouthPanda_Text_0
# 161 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	release
	end

AcornPathSouthPanda_5:
# 164 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	call Common_EventScript_MoveToFront
# 165 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	call Common_EventScript_TackQ
# 166 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	applymovement LOCALID_PANDA, AcornPathSouthPanda_Movement_0
# 167 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	waitmovement
# 168 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	createfieldmugshot MUGSHOT_PANDA, EMOTE_NORMAL
# 169 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	setspeaker AcornPathSouthPanda_Text_1
# 170 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	msgbox AcornPathSouthPanda_Text_2
# 171 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	applymovement LOCALID_PANDA, AcornParkSouthSoccerHam_Movement_5
# 172 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	waitmovement
# 173 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	release
	end

AcornPathSouthPanda_6:
# 176 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	call Common_EventScript_DigDig
# 177 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	msgbox AcornPathSouthPanda_Text_3
# 178 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	release
	end

AcornPathSouthPanda_8:
# 207 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	applymovement LOCALID_PLAYER, AcornParkSouthShockie
# 208 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	waitmovement
# 209 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	setspeaker SP_NAME_NONE
# 210 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	message AcornPathSouthPanda_Text_7
# 211 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	playse MUS_RG_OBTAIN_KEY_ITEM
# 212 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	additem ITEM_TM_ASTONISH, 1
# 213 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	applymovement LOCALID_PLAYER, AcornParkSouthDictionary
# 214 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	waitmovement
# 215 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	waitse
# 216 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	waitmessage
# 217 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	waitbuttonpress
# 218 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	closemessage
# 219 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	applymovement LOCALID_PLAYER, AcornParkSouthSoccerHam_Movement_5
# 220 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	waitmovement
	goto AcornPathSouthPanda_7

AcornPathSouthPanda_11:
# 223 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	createfieldmugshot MUGSHOT_PANDA, EMOTE_NORMAL
# 224 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	setspeaker AcornPathSouthPanda_Text_1
# 225 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	applymovement LOCALID_PANDA, AcornParkSouthSoccerHam_Movement_4
# 226 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	msgbox AcornPathSouthPanda_Text_8
# 227 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	applymovement LOCALID_PANDA, AcornParkSouthSoccerHam_Movement_0
# 228 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	waitmovement
# 229 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	applymovement LOCALID_PLAYER, AcornPathSouthPanda_Movement_1
# 234 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	waitmovement
# 235 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	fadescreen FADE_TO_BLACK
# 236 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	playse SE_M_EARTHQUAKE
# 237 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	waitse
# 238 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	playse SE_M_DIG
# 239 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	waitse
# 240 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	playse SE_M_CUT
# 241 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	waitse
# 242 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	call AcornPark_FixLadder
# 243 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	special DrawWholeMapView
# 244 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 245 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	setspeaker AcornPathSouthPanda_Text_1
# 246 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	createfieldmugshot MUGSHOT_PANDA, EMOTE_NORMAL
# 247 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	msgbox AcornPathSouthPanda_Text_9
# 248 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	applymovement LOCALID_PANDA, AcornPathSouthPanda_Movement_2
# 252 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	applymovement LOCALID_PLAYER, AcornPathSouthPanda_Movement_3
# 255 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	waitmovement
# 256 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	setspeaker AcornPathSouthPanda_Text_1
# 257 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	createfieldmugshot MUGSHOT_PANDA, EMOTE_NORMAL
# 258 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	msgbox AcornPathSouthPanda_Text_10
# 259 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	applymovement LOCALID_PLAYER, AcornPathSouthPanda_Movement_4
# 260 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	applymovement LOCALID_PANDA, AcornPathSouthPanda_Movement_5
# 263 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	waitmovement
# 264 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	removeobject LOCALID_PANDA
# 265 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	setflag FLAG_NEED_SNOOZER
# 266 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	release
	end


AcornParkSouthSnoozer::
# 281 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	lock
# 282 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	dynmultipush gText_Hamha, 0
# 283 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	dynmultipush gText_HifHif, 1
# 284 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	dynmultipush gText_TackQ, 2
# 285 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	dynmultipush gText_DigDig, 3
	checkitem ITEM_TM_UPROAR
# 0 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne AcornParkSouthSnoozer_2
# 289 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	dynmultipush AcornParkSouthQuestionMarks, 4
AcornParkSouthSnoozer_1:
# 291 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	dynmultistack 1, 1, FALSE, 5, 0, 0, DYN_MULTICHOICE_CB_NONE
# 292 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	switch VAR_RESULT
# 293 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	case 0, AcornParkSouthSnoozer_7
# 300 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	case 1, AcornParkSouthSnoozer_8
# 308 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	case 2, AcornParkSouthSnoozer_9
# 338 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	case 3, AcornParkSouthSnoozer_10
# 342 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	case 4, AcornParkSouthSnoozer_11
AcornParkSouthSnoozer_5:
# 372 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	release
	end

AcornParkSouthSnoozer_2:
# 287 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	dynmultipush AcornParkSouthDingBang, 4
	goto AcornParkSouthSnoozer_1

AcornParkSouthSnoozer_7:
# 294 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	call Common_EventScript_Hamha
# 295 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	createfieldmugshot MUGSHOT_SNOOZER, EMOTE_NORMAL
# 296 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	setspeaker AcornParkSouthSnoozer_Text_0
# 297 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	msgbox AcornParkSouthSnoozer_Text_1
	goto AcornParkSouthSnoozer_5

AcornParkSouthSnoozer_8:
# 301 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	call Common_EventScript_HifHif
# 302 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	msgbox AcornParkSouthSnoozer_Text_2
# 303 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	createfieldmugshot MUGSHOT_SNOOZER, EMOTE_NORMAL
# 304 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	setspeaker AcornParkSouthSnoozer_Text_0
# 305 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	msgbox AcornParkSouthSnoozer_Text_1
	goto AcornParkSouthSnoozer_5

AcornParkSouthSnoozer_9:
# 309 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	call Common_EventScript_TackQ
# 310 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	createfieldmugshot MUGSHOT_SNOOZER, EMOTE_NORMAL
# 311 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	setspeaker AcornParkSouthSnoozer_Text_0
	checkitem ITEM_TM_REST
# 0 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne AcornParkSouthSnoozer_13
# 316 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	msgbox AcornParkSouthSnoozer_Text_3
# 320 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	setspeaker SP_NAME_NONE
# 321 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	message AcornParkSouthSnoozer_Text_4
# 322 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	playse MUS_RG_OBTAIN_KEY_ITEM
# 323 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	additem ITEM_TM_REST, 1
# 324 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	applymovement LOCALID_PLAYER, AcornParkSouthDictionary
# 325 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	waitmovement
# 326 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	waitse
# 327 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	waitmessage
# 328 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	waitbuttonpress
# 329 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	closemessage
# 330 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	applymovement LOCALID_PLAYER, AcornParkSouthSoccerHam_Movement_5
# 331 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	waitmovement
AcornParkSouthSnoozer_12:
# 333 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	msgbox AcornParkSouthSnoozer_Text_5
# 334 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	applymovement LOCALID_PLAYER, AcornPathSouthPanda_Movement_0
# 335 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	waitmovement
# 336 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	msgbox AcornParkSouthSnoozer_Text_6
	goto AcornParkSouthSnoozer_5

AcornParkSouthSnoozer_10:
# 339 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	call Common_EventScript_DigDig
# 340 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	msgbox AcornParkSouthSnoozer_Text_7
	goto AcornParkSouthSnoozer_5

AcornParkSouthSnoozer_11:
	checkitem ITEM_TM_UPROAR
# 0 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne AcornParkSouthSnoozer_16
	goto AcornParkSouthSnoozer_5

AcornParkSouthSnoozer_13:
# 313 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	msgbox AcornParkSouthSnoozer_Text_1
	goto AcornParkSouthSnoozer_12

AcornParkSouthSnoozer_16:
# 345 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	createfieldmugshot MUGSHOT_HAMTARO, EMOTE_NORMAL
# 346 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	setspeaker AcornParkSouthSnoozer_Text_8
# 347 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	message AcornParkSouthSnoozer_Text_9
# 348 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	applymovement LOCALID_PLAYER, AcornParkSouthSnoozer_Movement_0
# 349 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	waitmovement
# 350 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	waitmessage
# 351 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	waitbuttonpress
# 352 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	applymovement LOCALID_SNOOZER, AcornParkSouthSoccerHam_Movement_0
# 355 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	waitmovement
# 356 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	createfieldmugshot MUGSHOT_SNOOZER, EMOTE_NORMAL
# 357 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	setspeaker AcornParkSouthSnoozer_Text_0
# 358 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	msgbox AcornParkSouthSnoozer_Text_10
# 359 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	applymovement LOCALID_SNOOZER, AcornParkSouthSnoozer_Movement_1
# 362 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	waitmovement
# 363 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	msgbox AcornParkSouthSnoozer_Text_11
# 364 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	fadescreen FADE_TO_BLACK
# 365 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	setflag FLAG_GOT_SNOOZER
# 366 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	playse SE_EXIT
# 367 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	waitse
# 368 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	fadescreen FADE_FROM_BLACK
	goto AcornParkSouthSnoozer_5


AcornPark_OxnardsSunflowerSeed::
# 377 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	lock
# 378 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	dynmultichoice 1, 1, FALSE, 4, 0, DYN_MULTICHOICE_CB_NONE, gText_Hamha, gText_HifHif, gText_TackQ, gText_DigDig
# 379 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	switch VAR_RESULT
# 380 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	case 0, AcornPark_OxnardsSunflowerSeed_2
# 384 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	case 1, AcornPark_OxnardsSunflowerSeed_3
# 390 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	case 2, AcornPark_OxnardsSunflowerSeed_4
# 394 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	case 3, AcornPark_OxnardsSunflowerSeed_5
	return

AcornPark_OxnardsSunflowerSeed_2:
# 381 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	call Common_EventScript_Hamha
# 382 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	release
	end

AcornPark_OxnardsSunflowerSeed_3:
# 385 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	call Common_EventScript_HifHif
# 386 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	giveitem ITEM_SUNFLOWER_SEED
# 387 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	removeobject LOCALID_SEED
# 388 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	release
	end

AcornPark_OxnardsSunflowerSeed_4:
# 391 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	call Common_EventScript_TackQ
# 392 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	release
	end

AcornPark_OxnardsSunflowerSeed_5:
# 395 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	call Common_EventScript_DigDig
# 396 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	msgbox AcornPark_OxnardsSunflowerSeed_Text_0
# 397 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	release
	end


# 403 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
AcornParkSouthHamha:
# 404 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	hamha
	step_end

# 407 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
AcornParkSouthShockie:
# 408 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	delay_16
# 409 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	delay_16
# 410 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	shockie
	step_end

# 413 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
AcornParkSouthDictionary:
# 414 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	delay_8
# 415 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	emote_x
	step_end

# 418 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
EmoteTest:
# 419 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	emote_x
# 420 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	delay_16
# 421 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	delay_16
# 422 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	delay_16
# 423 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	emote_exclamation_mark
# 424 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	delay_16
# 425 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	delay_16
# 426 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	delay_16
# 427 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	emote_question_mark
# 428 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	delay_16
# 429 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	delay_16
# 430 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	delay_16
# 431 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	emote_heart
# 432 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	delay_16
# 433 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	delay_16
# 434 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	delay_16
# 435 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	emote_double_exclamation_mark
# 436 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	delay_16
# 437 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	delay_16
# 438 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	delay_16
	step_end

# 54 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
AcornParkSouthSoccerHam_Movement_0:
# 54 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	walk_in_place_up
	step_end

# 56 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
AcornParkSouthSoccerHam_Movement_1:
# 56 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	walk_in_place_down
	step_end

# 64 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
AcornParkSouthSoccerHam_Movement_2:
# 64 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	face_left
	step_end

# 67 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
AcornParkSouthSoccerHam_Movement_3:
# 67 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	face_right
	step_end

# 81 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
AcornParkSouthSoccerHam_Movement_4:
# 81 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	emote_exclamation_mark
	step_end

# 98 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
AcornParkSouthSoccerHam_Movement_5:
# 98 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	face_up
	step_end

# 101 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
AcornParkSouthSoccerHam_Movement_6:
# 101 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	walk_in_place_right
	step_end

# 133 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
SoccerHamBattleHandler_Movement_0:
# 133 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	walk_up
	step_end

# 166 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
AcornPathSouthPanda_Movement_0:
# 166 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	face_down
	step_end

# 229 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
AcornPathSouthPanda_Movement_1:
# 230 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	lock_facing_direction
# 231 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	walk_down
# 232 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	unlock_facing_direction
	step_end

# 248 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
AcornPathSouthPanda_Movement_2:
# 249 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	walk_up
# 249 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	walk_up
# 249 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	walk_up
# 249 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	walk_up
# 249 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	walk_up
# 249 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	walk_up
# 250 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	walk_down
	step_end

# 252 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
AcornPathSouthPanda_Movement_3:
# 253 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	walk_up
# 253 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	walk_up
	step_end

# 259 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
AcornPathSouthPanda_Movement_4:
# 259 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	walk_down
# 259 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	walk_down
# 259 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	walk_right
# 259 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	walk_right
# 259 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	face_down
	step_end

# 260 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
AcornPathSouthPanda_Movement_5:
# 261 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	walk_down
# 261 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	walk_down
# 261 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	walk_down
# 261 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	walk_down
# 261 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	walk_down
# 261 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	walk_down
# 261 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	walk_down
# 261 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	walk_down
# 261 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	walk_down
# 261 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	walk_down
# 261 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	walk_down
# 261 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	walk_down
	step_end

# 348 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
AcornParkSouthSnoozer_Movement_0:
# 348 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	dingbang
	step_end

# 359 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
AcornParkSouthSnoozer_Movement_1:
# 360 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	walk_in_place_left
	step_end

AcornParkSouthSoccerHam_Text_0:
# 48 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	.string "Smells like strawberries...\pand sweat.$"

AcornParkSouthSoccerHam_Text_1:
# 55 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	.string "Ha! You think that would hurt me?\pI'm made of tougher stuff than that!$"

AcornParkSouthSoccerHam_Text_2:
# 72 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	.string "Hahaha! You think I'd hide it there?\nerrr... I mean.\pWhy are you digging here? You're just\nmaking a mess!$"

AcornParkSouthSoccerHam_Text_3:
# 80 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	.string "Huh? SHOCKIE?\pOh, the ladder? Yeah that's a strange\none. I wonder who could have done that?\pI think that Hamster should spend more\ntime keeping track of his hammer and\lless time helping other Hamsters make\lnew sports that are worse than\lStrawberry Soccer.$"

AcornParkSouthSoccerHam_Text_4:
# 85 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	.string "Uhh I mean, assuming he had a hammer.\pThat he lost.\pAnd wasn't stolen.\pI mean you'd have to be a real {COLOR RED}DELIN-Q{COLOR DARK_GRAY}\nto do something like steal a tool.$"

AcornParkSouthSoccerHam_Text_5:
# 89 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	.string "You learned {COLOR RED}DELIN-Q!$"

AcornParkSouthSoccerHam_Text_6:
# 100 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	.string "What, who are you calling DELIN-Q?\pThat's it!$"

AcornParkSouthSoccerHam_Text_7:
# 103 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	.string "It's time for me to teach you a lesson!$"

AcornParkSouthSoccerHam_Text_8:
# 108 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	.string "Well, well, well. It seems you didn't learn\nyour lesson the last time.$"

AcornParkSouthSoccerHam_Text_9:
# 111 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	.string "Get ready for a beating!$"

AcornParkSouthSoccerHam_Text_10:
# 114 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	.string "Ham-howdy! You must be one of those\nHamHams who are always around here\lhaving adventures.\pYou should give up on this stupid new\nHam-battle idea and play some good old\lstrawberry soccer!$"

SoccerHamBattleHandler_Text_0:
# 132 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	.string "No way! You can't beat me! Not with\nall of my training!$"

SoccerHamBattleHandler_Text_1:
# 139 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	.string "Ha! That's right, run away little Ham!$"

SoccerHamBattleHandler_Text_2:
# 144 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	.string "I'm still the best!\pWho needs this ham-battle nonsense?\pI got all the strength I need from\nplaying strawberry soccer.$"

AcornPathSouthPanda_Text_0:
# 160 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	.string "Smells like PANDA!$"

AcornPathSouthPanda_Text_1:
# 169 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	.string "Panda$"

AcornPathSouthPanda_Text_2:
# 170 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	.string "Ow! Hamtaro, why would you do that?$"

AcornPathSouthPanda_Text_3:
# 177 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	.string "Nothing there...$"

AcornPathSouthPanda_Text_4:
# 188 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	.string "Hey Hamtaro, I'm glad you're here!\pI needed to get some extra parts,\nbut I came by this morning and saw this!$"

AcornPathSouthPanda_Text_5:
# 193 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	.string "The ladder is broken!$"

AcornPathSouthPanda_Text_6:
# 200 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	.string "I was completely {COLOR RED}SHOCKIE{COLOR DARK_GRAY}!$"

AcornPathSouthPanda_Text_7:
# 210 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	.string "You learned {COLOR RED}Shockie!$"

AcornPathSouthPanda_Text_8:
# 226 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	.string "My Hammer! I've been looking all over\n"
	.string "for that!\p"
	.string "Thanks Hamtaro, now I can fix this\n"
	.string "ladder! Stand back and I'll get to work!$"

AcornPathSouthPanda_Text_9:
# 247 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	.string "And that should do it!$"

AcornPathSouthPanda_Text_10:
# 258 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	.string "It works and I got the parts I needed!\p"
	.string "Thanks for your help Hamtaro! I'll see\n"
	.string "you at the clubhouse later!$"

AcornPathSouthPanda_Text_11:
# 271 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	.string "I can fix this, but my hammer is missing\n"
	.string "too!\p"
	.string "If you find it, can you bring it to me?$"

AcornParkSouthSnoozer_Text_0:
# 296 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	.string "Snoozer$"

AcornParkSouthSnoozer_Text_1:
# 297 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	.string "Zzzzzzzzzzzzzzzzzzzz...$"

AcornParkSouthSnoozer_Text_2:
# 302 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	.string "Smells like Snoozer$"

AcornParkSouthSnoozer_Text_3:
# 316 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	.string "Zzzzz... I'm {COLOR RED}Zuzuzu$"

AcornParkSouthSnoozer_Text_4:
# 321 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	.string "You learned {COLOR RED}Zuzuzu!$"

AcornParkSouthSnoozer_Text_5:
# 333 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	.string "He's still asleep...$"

AcornParkSouthSnoozer_Text_6:
# 336 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	.string "How did he sleep through that?!?!$"

AcornParkSouthSnoozer_Text_7:
# 340 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	.string "There's a little bit of dirt on Snoozer\n"
	.string "now, but he's still sleeping through it.$"

AcornParkSouthSnoozer_Text_8:
# 346 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	.string "Hamtaro$"

AcornParkSouthSnoozer_Text_9:
# 347 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	.string "DingBang!$"

AcornParkSouthSnoozer_Text_10:
# 358 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	.string "Huh? what's going on?\pWhy is it so noisy...$"

AcornParkSouthSnoozer_Text_11:
# 363 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	.string "Oh, back to the clubhouse?\pSure thing. I guess I can do that...$"

AcornPark_OxnardsSunflowerSeed_Text_0:
# 396 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	.string "Nothing here...$"

AcornParkSouthDingBang::
# 441 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	.string "DingBang$"

AcornParkSouthShockieText::
# 444 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	.string "{COLOR RED}Shockie$"

AcornParkSouthQuestionMarks::
# 447 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	.string "?????$"
