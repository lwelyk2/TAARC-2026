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


AcornPathSouthPanda::
# 31 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	lock
# 32 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	dynmultichoice 1, 1, FALSE, 4, 0, DYN_MULTICHOICE_CB_NONE, gText_Hamha, gText_HifHif, gText_TackQ, gText_DigDig
# 33 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	switch VAR_RESULT
# 34 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	case 0, AcornPathSouthPanda_3
# 36 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	case 1, AcornPathSouthPanda_4
# 41 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	case 2, AcornPathSouthPanda_5
# 45 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	case 3, AcornPathSouthPanda_6
AcornPathSouthPanda_1:
# 51 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	getobjectfacingdirection LOCALID_PLAYER, VAR_TEMP_1
# 52 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	switch VAR_TEMP_1
# 53 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	case DIR_EAST, AcornPathSouthPanda_9
# 60 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	case DIR_WEST, AcornPathSouthPanda_10
AcornPathSouthPanda_7:
# 70 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	call Common_EventScript_Hamha
# 71 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	applymovement LOCALID_PLAYER, AcornPathSouthPanda_Movement_2
# 72 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	waitmovement
# 73 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	applymovement LOCALID_PANDA, AcornPathSouthPanda_Movement_3
# 74 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	waitmovement
# 75 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	createfieldmugshot MUGSHOT_PANDA, EMOTE_NORMAL
# 76 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	setspeaker AcornPathSouthPanda_Text_2
# 77 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	msgbox AcornPathSouthPanda_Text_3
# 78 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	applymovement LOCALID_PANDA, AcornPathSouthPanda_Movement_4
# 79 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	waitmovement
# 80 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	createfieldmugshot MUGSHOT_PANDA, EMOTE_NORMAL
# 81 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	setspeaker AcornPathSouthPanda_Text_2
# 82 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	message AcornPathSouthPanda_Text_4
# 83 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	applymovement LOCALID_PANDA, AcornPathSouthPanda_Movement_3
# 84 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	waitmessage
# 85 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	waitbuttonpress
# 86 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	closemessage
# 87 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	createfieldmugshot MUGSHOT_PANDA, EMOTE_NORMAL
# 88 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	setspeaker AcornPathSouthPanda_Text_2
# 89 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	message AcornPathSouthPanda_Text_5
# 90 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	applymovement LOCALID_PANDA, AcornParkSouthShockie
# 91 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	waitmessage
# 92 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	waitbuttonpress
# 93 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	closemessage
# 94 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	removefieldmugshot
	checkitem ITEM_TM_ASTONISH, 1
# 0 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq AcornPathSouthPanda_13
AcornPathSouthPanda_12:
	checkitem ITEM_HAMMER
# 0 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne AcornPathSouthPanda_16
# 156 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	createfieldmugshot MUGSHOT_PANDA, EMOTE_NORMAL
# 157 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	setspeaker AcornPathSouthPanda_Text_2
# 158 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	msgbox AcornPathSouthPanda_Text_10
# 159 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	applymovement LOCALID_PANDA, AcornPathSouthPanda_Movement_4
# 160 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	waitmovement
# 161 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	release
	end

AcornPathSouthPanda_3:
	goto AcornPathSouthPanda_1

AcornPathSouthPanda_4:
# 37 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	call Common_EventScript_HifHif
# 38 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	msgbox AcornPathSouthPanda_Text_0
# 39 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	release
	end

AcornPathSouthPanda_5:
# 42 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	call Common_EventScript_TackQ
# 43 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	release
	end

AcornPathSouthPanda_6:
# 46 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	call Common_EventScript_DigDig
# 47 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	msgbox AcornPathSouthPanda_Text_1
# 48 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	release
	end

AcornPathSouthPanda_9:
# 54 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	applymovement LOCALID_PLAYER, AcornPathSouthPanda_Movement_0
# 59 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	waitmovement
	goto AcornPathSouthPanda_7

AcornPathSouthPanda_10:
# 61 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	applymovement LOCALID_PLAYER, AcornPathSouthPanda_Movement_1
# 66 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	waitmovement
	goto AcornPathSouthPanda_7

AcornPathSouthPanda_13:
# 96 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	applymovement LOCALID_PLAYER, AcornParkSouthShockie
# 97 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	waitmovement
# 98 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	setspeaker SP_NAME_NONE
# 99 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	message AcornPathSouthPanda_Text_6
# 100 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	playse MUS_RG_OBTAIN_KEY_ITEM
# 101 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	additem ITEM_TM_ASTONISH, 1
# 102 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	applymovement LOCALID_PLAYER, AcornParkSouthDictionary
# 103 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	waitmovement
# 104 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	waitse
# 105 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	waitmessage
# 106 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	waitbuttonpress
# 107 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	closemessage
# 108 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	applymovement LOCALID_PLAYER, AcornPathSouthPanda_Movement_2
# 109 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	waitmovement
	goto AcornPathSouthPanda_12

AcornPathSouthPanda_16:
# 112 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	createfieldmugshot MUGSHOT_PANDA, EMOTE_NORMAL
# 113 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	setspeaker AcornPathSouthPanda_Text_2
# 114 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	applymovement LOCALID_PANDA, AcornPathSouthPanda_Movement_5
# 115 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	msgbox AcornPathSouthPanda_Text_7
# 116 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	applymovement LOCALID_PANDA, AcornPathSouthPanda_Movement_4
# 117 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	waitmovement
# 118 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	applymovement LOCALID_PLAYER, AcornPathSouthPanda_Movement_6
# 123 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	waitmovement
# 124 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	fadescreen FADE_TO_BLACK
# 125 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	playse SE_M_EARTHQUAKE
# 126 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	waitse
# 127 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	playse SE_M_DIG
# 128 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	waitse
# 129 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	playse SE_M_CUT
# 130 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	waitse
# 131 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	call AcornPark_FixLadder
# 132 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	special DrawWholeMapView
# 133 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 134 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	setspeaker AcornPathSouthPanda_Text_2
# 135 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	createfieldmugshot MUGSHOT_PANDA, EMOTE_NORMAL
# 136 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	msgbox AcornPathSouthPanda_Text_8
# 137 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	applymovement LOCALID_PANDA, AcornPathSouthPanda_Movement_7
# 141 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	applymovement LOCALID_PLAYER, AcornPathSouthPanda_Movement_8
# 144 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	waitmovement
# 145 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	setspeaker AcornPathSouthPanda_Text_2
# 146 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	createfieldmugshot MUGSHOT_PANDA, EMOTE_NORMAL
# 147 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	msgbox AcornPathSouthPanda_Text_9
# 148 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	applymovement LOCALID_PANDA, AcornPathSouthPanda_Movement_9
# 151 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	waitmovement
# 152 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	removeobject LOCALID_PANDA
# 153 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	release
	end


AcornParkSouthSnoozer::
# 168 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	lock
# 169 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	dynmultipush gText_Hamha, 0
# 170 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	dynmultipush gText_HifHif, 1
# 171 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	dynmultipush gText_TackQ, 2
# 172 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	dynmultipush gText_DigDig, 3
	checkitem ITEM_TM_UPROAR
# 0 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne AcornParkSouthSnoozer_2
AcornParkSouthSnoozer_1:
# 176 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	dynmultistack 1, 1, FALSE, 5, 0, DYN_MULTICHOICE_CB_NONE, DYN_MULTICHOICE_CB_NONE
# 177 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	switch VAR_RESULT
# 178 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	case 0, AcornParkSouthSnoozer_6
# 185 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	case 1, AcornParkSouthSnoozer_7
# 193 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	case 2, AcornParkSouthSnoozer_8
# 223 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	case 3, AcornParkSouthSnoozer_9
# 227 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	case 4, AcornParkSouthSnoozer_10
AcornParkSouthSnoozer_4:
# 243 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	release
	end

AcornParkSouthSnoozer_2:
# 174 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	dynmultipush AcornParkSouthDingBang, 4
	goto AcornParkSouthSnoozer_1

AcornParkSouthSnoozer_6:
# 179 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	call Common_EventScript_Hamha
# 180 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	createfieldmugshot MUGSHOT_SNOOZER, EMOTE_NORMAL
# 181 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	setspeaker AcornParkSouthSnoozer_Text_0
# 182 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	msgbox AcornParkSouthSnoozer_Text_1
	goto AcornParkSouthSnoozer_4

AcornParkSouthSnoozer_7:
# 186 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	call Common_EventScript_HifHif
# 187 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	msgbox AcornParkSouthSnoozer_Text_2
# 188 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	createfieldmugshot MUGSHOT_SNOOZER, EMOTE_NORMAL
# 189 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	setspeaker AcornParkSouthSnoozer_Text_0
# 190 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	msgbox AcornParkSouthSnoozer_Text_1
	goto AcornParkSouthSnoozer_4

AcornParkSouthSnoozer_8:
# 194 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	call Common_EventScript_TackQ
# 195 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	createfieldmugshot MUGSHOT_SNOOZER, EMOTE_NORMAL
# 196 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	setspeaker AcornParkSouthSnoozer_Text_0
	checkitem ITEM_TM_REST
# 0 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne AcornParkSouthSnoozer_12
# 201 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	msgbox AcornParkSouthSnoozer_Text_3
# 205 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	setspeaker SP_NAME_NONE
# 206 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	message AcornParkSouthSnoozer_Text_4
# 207 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	playse MUS_RG_OBTAIN_KEY_ITEM
# 208 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	additem ITEM_TM_REST, 1
# 209 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	applymovement LOCALID_PLAYER, AcornParkSouthDictionary
# 210 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	waitmovement
# 211 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	waitse
# 212 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	waitmessage
# 213 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	waitbuttonpress
# 214 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	closemessage
# 215 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	applymovement LOCALID_PLAYER, AcornPathSouthPanda_Movement_2
# 216 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	waitmovement
AcornParkSouthSnoozer_11:
# 218 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	msgbox AcornParkSouthSnoozer_Text_5
# 219 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	applymovement LOCALID_PLAYER, AcornParkSouthSnoozer_Movement_0
# 220 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	waitmovement
# 221 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	msgbox AcornParkSouthSnoozer_Text_6
	goto AcornParkSouthSnoozer_4

AcornParkSouthSnoozer_9:
# 224 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	call Common_EventScript_DigDig
# 225 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	msgbox AcornParkSouthSnoozer_Text_7
	goto AcornParkSouthSnoozer_4

AcornParkSouthSnoozer_10:
# 229 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	msgbox AcornParkSouthSnoozer_Text_8
# 230 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	applymovement LOCALID_SNOOZER, AcornPathSouthPanda_Movement_4
# 233 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	waitmovement
# 234 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	createfieldmugshot MUGSHOT_SNOOZER, EMOTE_NORMAL
# 235 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	setspeaker AcornParkSouthSnoozer_Text_0
# 236 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	msgbox AcornParkSouthSnoozer_Text_9
# 237 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	applymovement LOCALID_SNOOZER, AcornParkSouthSnoozer_Movement_1
# 240 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	waitmovement
	goto AcornParkSouthSnoozer_4

AcornParkSouthSnoozer_12:
# 198 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	msgbox AcornParkSouthSnoozer_Text_1
	goto AcornParkSouthSnoozer_11


# 247 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
AcornParkSouthHamha:
# 248 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	hamha
	step_end

# 251 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
AcornParkSouthShockie:
# 252 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	delay_16
# 253 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	delay_16
# 254 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	shockie
	step_end

# 257 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
AcornParkSouthDictionary:
# 258 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	delay_8
# 259 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	emote_x
	step_end

# 262 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
EmoteTest:
# 263 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	emote_x
# 264 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	delay_16
# 265 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	delay_16
# 266 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	delay_16
# 267 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	emote_exclamation_mark
# 268 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	delay_16
# 269 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	delay_16
# 270 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	delay_16
# 271 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	emote_question_mark
# 272 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	delay_16
# 273 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	delay_16
# 274 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	delay_16
# 275 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	emote_heart
# 276 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	delay_16
# 277 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	delay_16
# 278 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	delay_16
# 279 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	emote_double_exclamation_mark
# 280 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	delay_16
# 281 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	delay_16
# 282 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	delay_16
	step_end

# 54 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
AcornPathSouthPanda_Movement_0:
# 55 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	walk_down
# 56 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	walk_right
# 57 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	face_up
	step_end

# 61 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
AcornPathSouthPanda_Movement_1:
# 62 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	walk_down
# 63 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	walk_left
# 64 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	face_up
	step_end

# 71 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
AcornPathSouthPanda_Movement_2:
# 71 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	face_up
	step_end

# 73 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
AcornPathSouthPanda_Movement_3:
# 73 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	walk_in_place_down
	step_end

# 78 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
AcornPathSouthPanda_Movement_4:
# 78 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	walk_in_place_up
	step_end

# 114 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
AcornPathSouthPanda_Movement_5:
# 114 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	emote_exclamation_mark
	step_end

# 118 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
AcornPathSouthPanda_Movement_6:
# 119 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	lock_facing_direction
# 120 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	walk_down
# 121 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	unlock_facing_direction
	step_end

# 137 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
AcornPathSouthPanda_Movement_7:
# 138 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	walk_up
# 138 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	walk_up
# 138 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	walk_up
# 138 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	walk_up
# 138 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	walk_up
# 138 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	walk_up
# 139 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	walk_down
	step_end

# 141 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
AcornPathSouthPanda_Movement_8:
# 142 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	walk_up
# 142 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	walk_up
	step_end

# 148 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
AcornPathSouthPanda_Movement_9:
# 149 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	walk_left
# 149 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	walk_left
# 149 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	walk_left
# 149 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	walk_left
# 149 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	walk_left
# 149 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	walk_left
	step_end

# 219 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
AcornParkSouthSnoozer_Movement_0:
# 219 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	face_down
	step_end

# 237 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
AcornParkSouthSnoozer_Movement_1:
# 238 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	walk_in_place_left
	step_end

AcornPathSouthPanda_Text_0:
# 38 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	.string "Smells like PANDA!$"

AcornPathSouthPanda_Text_1:
# 47 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	.string "Nothing there...$"

AcornPathSouthPanda_Text_2:
# 76 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	.string "Panda$"

AcornPathSouthPanda_Text_3:
# 77 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	.string "Hey Hamtaro, I'm glad you're here!\pI needed to get some extra parts,\nbut I came by this morning and saw this!$"

AcornPathSouthPanda_Text_4:
# 82 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	.string "The ladder is broken!$"

AcornPathSouthPanda_Text_5:
# 89 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	.string "I was completely {COLOR RED}SHOCKIE{COLOR DARK_GRAY}!$"

AcornPathSouthPanda_Text_6:
# 99 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	.string "You learned {COLOR RED}Shockie!$"

AcornPathSouthPanda_Text_7:
# 115 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	.string "My Hammer! I've been looking all over\n"
	.string "for that!\p"
	.string "Thanks Hamtaro, now I can fix this\n"
	.string "ladder! Stand back and I'll get to work!$"

AcornPathSouthPanda_Text_8:
# 136 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	.string "And that should do it!$"

AcornPathSouthPanda_Text_9:
# 147 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	.string "It works! Thanks for your help Hamtaro!\n"
	.string "I'll see you at the clubhouse later!$"

AcornPathSouthPanda_Text_10:
# 158 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	.string "I can fix this, but my hammer is missing\n"
	.string "too!\p"
	.string "If you find it, can you bring it to me?$"

AcornParkSouthSnoozer_Text_0:
# 181 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	.string "Snoozer$"

AcornParkSouthSnoozer_Text_1:
# 182 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	.string "Zzzzzzzzzzzzzzzzzzzz...$"

AcornParkSouthSnoozer_Text_2:
# 187 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	.string "Smells like Snoozer$"

AcornParkSouthSnoozer_Text_3:
# 201 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	.string "Zzzzz... I'm {COLOR RED}Zuzuzu$"

AcornParkSouthSnoozer_Text_4:
# 206 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	.string "You learned {COLOR RED}Zuzuzu!$"

AcornParkSouthSnoozer_Text_5:
# 218 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	.string "He's still asleep...$"

AcornParkSouthSnoozer_Text_6:
# 221 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	.string "How did he sleep through that?!?!$"

AcornParkSouthSnoozer_Text_7:
# 225 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	.string "There's a little bit of dirt on Snoozer\n"
	.string "now, but he's still sleeping through it.$"

AcornParkSouthSnoozer_Text_8:
# 229 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	.string "DingBang!$"

AcornParkSouthSnoozer_Text_9:
# 236 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	.string "Huh? what's going on? Why is it so noisy...$"

AcornParkSouthDingBang::
# 285 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	.string "DingBang$"
