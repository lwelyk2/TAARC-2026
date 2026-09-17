HamHamClubhouse_MapScripts::
# 5 "data/maps/HamHamClubhouse/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Clubhouse_CheckForPanda
# 2 "data/maps/HamHamClubhouse/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, HamHamClubhouse_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

HamHamClubhouse_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/HamHamClubhouse/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, Clubhouse_IntroCutscene
	.2byte 0


Clubhouse_CheckForPanda::
# 9 "data/maps/HamHamClubhouse/scripts.pory"
	goto_if_set FLAG_GAVE_PANDA_HAMMER, Clubhouse_CheckForPanda_2
Clubhouse_CheckForPanda_1:
	return

Clubhouse_CheckForPanda_2:
# 10 "data/maps/HamHamClubhouse/scripts.pory"
	goto_if_set FLAG_BEAT_GAME, Clubhouse_CheckForPanda_4
# 13 "data/maps/HamHamClubhouse/scripts.pory"
	call Clubhouse_PandaWork
	goto Clubhouse_CheckForPanda_1

Clubhouse_CheckForPanda_4:
	return


Clubhouse_PandaWork::
# 20 "data/maps/HamHamClubhouse/scripts.pory"
	setmetatile 2, 2, 0x0D5, FALSE
# 21 "data/maps/HamHamClubhouse/scripts.pory"
	setmetatile 3, 2, 0x0D6, FALSE
# 22 "data/maps/HamHamClubhouse/scripts.pory"
	setmetatile 4, 2, 0x0D7, FALSE
# 23 "data/maps/HamHamClubhouse/scripts.pory"
	setmetatile 2, 3, 0x0DD, FALSE
# 24 "data/maps/HamHamClubhouse/scripts.pory"
	setmetatile 3, 3, 0x0DE, FALSE
# 25 "data/maps/HamHamClubhouse/scripts.pory"
	setmetatile 4, 3, 0x0DF, FALSE
	return


Clubhouse_IntroCutscene::
# 29 "data/maps/HamHamClubhouse/scripts.pory"
	goto_if_set FLAG_INTRO_DONE, Clubhouse_IntroCutscene_1
# 32 "data/maps/HamHamClubhouse/scripts.pory"
	setvar VAR_TEMP_0, 1
# 33 "data/maps/HamHamClubhouse/scripts.pory"
	setflag FLAG_INTRO_DONE
# 34 "data/maps/HamHamClubhouse/scripts.pory"
	lock
# 35 "data/maps/HamHamClubhouse/scripts.pory"
	applymovement LOCALID_BOSS_BLOCKING, Clubhouse_IntroCutscene_Movement_0
# 36 "data/maps/HamHamClubhouse/scripts.pory"
	applymovement LOCALID_PLAYER, Clubhouse_IntroCutscene_Movement_1
# 37 "data/maps/HamHamClubhouse/scripts.pory"
	turnobject LOCALID_BOSS, DIR_SOUTH
# 38 "data/maps/HamHamClubhouse/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 39 "data/maps/HamHamClubhouse/scripts.pory"
	waitmovement LOCALID_BOSS_BLOCKING
# 40 "data/maps/HamHamClubhouse/scripts.pory"
	createfieldmugshot MUGSHOT_BOSS, EMOTE_NORMAL
# 41 "data/maps/HamHamClubhouse/scripts.pory"
	setspeaker Clubhouse_IntroCutscene_Text_0
# 42 "data/maps/HamHamClubhouse/scripts.pory"
	msgbox Clubhouse_IntroCutscene_Text_1
# 43 "data/maps/HamHamClubhouse/scripts.pory"
	release
	return

Clubhouse_IntroCutscene_1:
# 30 "data/maps/HamHamClubhouse/scripts.pory"
	setvar VAR_TEMP_0, 1
	return


ClubhouseBlockingBoss::
# 48 "data/maps/HamHamClubhouse/scripts.pory"
	lock
# 49 "data/maps/HamHamClubhouse/scripts.pory"
	dynmultichoice 1, 1, FALSE, 4, 0, DYN_MULTICHOICE_CB_NONE, gText_Hamha, gText_HifHif, gText_TackQ, gText_DigDig
# 50 "data/maps/HamHamClubhouse/scripts.pory"
	switch VAR_RESULT
# 51 "data/maps/HamHamClubhouse/scripts.pory"
	case 0, ClubhouseBlockingBoss_3
# 56 "data/maps/HamHamClubhouse/scripts.pory"
	case 1, ClubhouseBlockingBoss_4
# 61 "data/maps/HamHamClubhouse/scripts.pory"
	case 2, ClubhouseBlockingBoss_5
# 70 "data/maps/HamHamClubhouse/scripts.pory"
	case 3, ClubhouseBlockingBoss_6
ClubhouseBlockingBoss_1:
# 79 "data/maps/HamHamClubhouse/scripts.pory"
	createfieldmugshot MUGSHOT_BOSS, EMOTE_NORMAL
# 80 "data/maps/HamHamClubhouse/scripts.pory"
	setspeaker Clubhouse_IntroCutscene_Text_0
# 81 "data/maps/HamHamClubhouse/scripts.pory"
	msgbox ClubhouseBlockingBoss_Text_4
# 82 "data/maps/HamHamClubhouse/scripts.pory"
	release
	end

ClubhouseBlockingBoss_3:
# 52 "data/maps/HamHamClubhouse/scripts.pory"
	call Common_EventScript_MoveToFront
# 53 "data/maps/HamHamClubhouse/scripts.pory"
	call Common_EventScript_Hamha
# 54 "data/maps/HamHamClubhouse/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
	goto ClubhouseBlockingBoss_1

ClubhouseBlockingBoss_4:
# 57 "data/maps/HamHamClubhouse/scripts.pory"
	call Common_EventScript_HifHif
# 58 "data/maps/HamHamClubhouse/scripts.pory"
	msgbox ClubhouseBlockingBoss_Text_0
# 59 "data/maps/HamHamClubhouse/scripts.pory"
	release
	end

ClubhouseBlockingBoss_5:
# 62 "data/maps/HamHamClubhouse/scripts.pory"
	call Common_EventScript_MoveToFront
# 63 "data/maps/HamHamClubhouse/scripts.pory"
	call Common_EventScript_TackQ
# 64 "data/maps/HamHamClubhouse/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 65 "data/maps/HamHamClubhouse/scripts.pory"
	createfieldmugshot MUGSHOT_BOSS, EMOTE_NORMAL
# 66 "data/maps/HamHamClubhouse/scripts.pory"
	setspeaker Clubhouse_IntroCutscene_Text_0
# 67 "data/maps/HamHamClubhouse/scripts.pory"
	msgbox ClubhouseBlockingBoss_Text_1
# 68 "data/maps/HamHamClubhouse/scripts.pory"
	release
	end

ClubhouseBlockingBoss_6:
# 71 "data/maps/HamHamClubhouse/scripts.pory"
	call Common_EventScript_DigDig
# 72 "data/maps/HamHamClubhouse/scripts.pory"
	msgbox ClubhouseBlockingBoss_Text_2
# 73 "data/maps/HamHamClubhouse/scripts.pory"
	createfieldmugshot MUGSHOT_BOSS, EMOTE_NORMAL
# 74 "data/maps/HamHamClubhouse/scripts.pory"
	setspeaker Clubhouse_IntroCutscene_Text_0
# 75 "data/maps/HamHamClubhouse/scripts.pory"
	msgbox ClubhouseBlockingBoss_Text_3
# 76 "data/maps/HamHamClubhouse/scripts.pory"
	release
	end


ClubhouseBoss::
# 87 "data/maps/HamHamClubhouse/scripts.pory"
	lock
# 88 "data/maps/HamHamClubhouse/scripts.pory"
	dynmultichoice 1, 1, FALSE, 4, 0, DYN_MULTICHOICE_CB_NONE, gText_Hamha, gText_HifHif, gText_TackQ, gText_DigDig
# 89 "data/maps/HamHamClubhouse/scripts.pory"
	switch VAR_RESULT
# 90 "data/maps/HamHamClubhouse/scripts.pory"
	case 0, ClubhouseBoss_3
# 96 "data/maps/HamHamClubhouse/scripts.pory"
	case 1, ClubhouseBoss_4
# 101 "data/maps/HamHamClubhouse/scripts.pory"
	case 2, ClubhouseBoss_5
# 112 "data/maps/HamHamClubhouse/scripts.pory"
	case 3, ClubhouseBoss_6
ClubhouseBoss_1:
# 122 "data/maps/HamHamClubhouse/scripts.pory"
	createfieldmugshot MUGSHOT_BOSS, EMOTE_NORMAL
# 123 "data/maps/HamHamClubhouse/scripts.pory"
	setspeaker Clubhouse_IntroCutscene_Text_0
# 124 "data/maps/HamHamClubhouse/scripts.pory"
	goto_if_set FLAG_NEED_SNOOZER, ClubhouseBoss_8
# 145 "data/maps/HamHamClubhouse/scripts.pory"
	msgbox ClubhouseBlockingBoss_Text_4
ClubhouseBoss_7:
# 147 "data/maps/HamHamClubhouse/scripts.pory"
	release
	end

ClubhouseBoss_3:
# 91 "data/maps/HamHamClubhouse/scripts.pory"
	call Common_EventScript_MoveToFront
# 92 "data/maps/HamHamClubhouse/scripts.pory"
	call Common_EventScript_Hamha
# 93 "data/maps/HamHamClubhouse/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 94 "data/maps/HamHamClubhouse/scripts.pory"
	waitmovement
	goto ClubhouseBoss_1

ClubhouseBoss_4:
# 97 "data/maps/HamHamClubhouse/scripts.pory"
	call Common_EventScript_HifHif
# 98 "data/maps/HamHamClubhouse/scripts.pory"
	msgbox ClubhouseBlockingBoss_Text_0
# 99 "data/maps/HamHamClubhouse/scripts.pory"
	release
	end

ClubhouseBoss_5:
# 102 "data/maps/HamHamClubhouse/scripts.pory"
	call Common_EventScript_MoveToFront
# 103 "data/maps/HamHamClubhouse/scripts.pory"
	call Common_EventScript_TackQ
# 104 "data/maps/HamHamClubhouse/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 105 "data/maps/HamHamClubhouse/scripts.pory"
	applymovement LOCALID_BOSS_SITTING, ClubhouseBoss_Movement_0
# 106 "data/maps/HamHamClubhouse/scripts.pory"
	waitmovement
# 107 "data/maps/HamHamClubhouse/scripts.pory"
	createfieldmugshot MUGSHOT_BOSS, EMOTE_NORMAL
# 108 "data/maps/HamHamClubhouse/scripts.pory"
	setspeaker Clubhouse_IntroCutscene_Text_0
# 109 "data/maps/HamHamClubhouse/scripts.pory"
	msgbox ClubhouseBlockingBoss_Text_1
# 110 "data/maps/HamHamClubhouse/scripts.pory"
	release
	end

ClubhouseBoss_6:
# 113 "data/maps/HamHamClubhouse/scripts.pory"
	call Common_EventScript_DigDig
# 114 "data/maps/HamHamClubhouse/scripts.pory"
	msgbox ClubhouseBlockingBoss_Text_2
# 115 "data/maps/HamHamClubhouse/scripts.pory"
	faceplayer
# 116 "data/maps/HamHamClubhouse/scripts.pory"
	createfieldmugshot MUGSHOT_BOSS, EMOTE_NORMAL
# 117 "data/maps/HamHamClubhouse/scripts.pory"
	setspeaker Clubhouse_IntroCutscene_Text_0
# 118 "data/maps/HamHamClubhouse/scripts.pory"
	msgbox ClubhouseBlockingBoss_Text_3
# 119 "data/maps/HamHamClubhouse/scripts.pory"
	release
	end

ClubhouseBoss_8:
# 125 "data/maps/HamHamClubhouse/scripts.pory"
	applymovement LOCALID_BOSS_SITTING, ClubhouseBoss_Movement_0
# 126 "data/maps/HamHamClubhouse/scripts.pory"
	waitmovement
# 127 "data/maps/HamHamClubhouse/scripts.pory"
	msgbox ClubhouseBoss_Text_0
	checkitem ITEM_TM_UPROAR
# 0 "data/maps/HamHamClubhouse/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq ClubhouseBoss_11
	goto ClubhouseBoss_7

ClubhouseBoss_11:
# 129 "data/maps/HamHamClubhouse/scripts.pory"
	applymovement LOCALID_PLAYER, ClubhouseBoss_Movement_1
# 130 "data/maps/HamHamClubhouse/scripts.pory"
	waitmovement
# 131 "data/maps/HamHamClubhouse/scripts.pory"
	setspeaker SP_NAME_NONE
# 132 "data/maps/HamHamClubhouse/scripts.pory"
	message ClubhouseBoss_Text_1
# 133 "data/maps/HamHamClubhouse/scripts.pory"
	playse MUS_RG_OBTAIN_KEY_ITEM
# 134 "data/maps/HamHamClubhouse/scripts.pory"
	additem ITEM_TM_UPROAR, 1
# 135 "data/maps/HamHamClubhouse/scripts.pory"
	applymovement LOCALID_PLAYER, ClubhouseBoss_Movement_2
# 136 "data/maps/HamHamClubhouse/scripts.pory"
	waitmovement
# 137 "data/maps/HamHamClubhouse/scripts.pory"
	waitse
# 138 "data/maps/HamHamClubhouse/scripts.pory"
	waitmessage
# 139 "data/maps/HamHamClubhouse/scripts.pory"
	waitbuttonpress
# 140 "data/maps/HamHamClubhouse/scripts.pory"
	closemessage
# 141 "data/maps/HamHamClubhouse/scripts.pory"
	applymovement LOCALID_PLAYER, ClubhouseBoss_Movement_3
# 142 "data/maps/HamHamClubhouse/scripts.pory"
	waitmovement
	goto ClubhouseBoss_7


HamHamClubhouse_PandaWorking::
# 152 "data/maps/HamHamClubhouse/scripts.pory"
	lock
# 153 "data/maps/HamHamClubhouse/scripts.pory"
	dynmultichoice 1, 1, FALSE, 4, 0, DYN_MULTICHOICE_CB_NONE, gText_Hamha, gText_HifHif, gText_TackQ, gText_DigDig
# 154 "data/maps/HamHamClubhouse/scripts.pory"
	switch VAR_RESULT
# 155 "data/maps/HamHamClubhouse/scripts.pory"
	case 0, HamHamClubhouse_PandaWorking_3
# 160 "data/maps/HamHamClubhouse/scripts.pory"
	case 1, HamHamClubhouse_PandaWorking_4
# 165 "data/maps/HamHamClubhouse/scripts.pory"
	case 2, HamHamClubhouse_PandaWorking_5
# 175 "data/maps/HamHamClubhouse/scripts.pory"
	case 3, HamHamClubhouse_PandaWorking_6
HamHamClubhouse_PandaWorking_1:
# 186 "data/maps/HamHamClubhouse/scripts.pory"
	faceplayer
# 187 "data/maps/HamHamClubhouse/scripts.pory"
	createfieldmugshot MUGSHOT_PANDA, EMOTE_NORMAL
# 188 "data/maps/HamHamClubhouse/scripts.pory"
	setspeaker HamHamClubhouse_PandaWorking_Text_1
# 189 "data/maps/HamHamClubhouse/scripts.pory"
	msgbox HamHamClubhouse_PandaWorking_Text_4
# 190 "data/maps/HamHamClubhouse/scripts.pory"
	applymovement LOCALID_PANDA_WORKING, ClubhouseBoss_Movement_3
# 191 "data/maps/HamHamClubhouse/scripts.pory"
	release
	end

HamHamClubhouse_PandaWorking_3:
# 156 "data/maps/HamHamClubhouse/scripts.pory"
	call Common_EventScript_MoveToFront
# 157 "data/maps/HamHamClubhouse/scripts.pory"
	call Common_EventScript_Hamha
# 158 "data/maps/HamHamClubhouse/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
	goto HamHamClubhouse_PandaWorking_1

HamHamClubhouse_PandaWorking_4:
# 161 "data/maps/HamHamClubhouse/scripts.pory"
	call Common_EventScript_HifHif
# 162 "data/maps/HamHamClubhouse/scripts.pory"
	msgbox HamHamClubhouse_PandaWorking_Text_0
# 163 "data/maps/HamHamClubhouse/scripts.pory"
	release
	end

HamHamClubhouse_PandaWorking_5:
# 166 "data/maps/HamHamClubhouse/scripts.pory"
	call Common_EventScript_MoveToFront
# 167 "data/maps/HamHamClubhouse/scripts.pory"
	call Common_EventScript_TackQ
# 168 "data/maps/HamHamClubhouse/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 169 "data/maps/HamHamClubhouse/scripts.pory"
	faceplayer
# 170 "data/maps/HamHamClubhouse/scripts.pory"
	createfieldmugshot MUGSHOT_PANDA, EMOTE_NORMAL
# 171 "data/maps/HamHamClubhouse/scripts.pory"
	setspeaker HamHamClubhouse_PandaWorking_Text_1
# 172 "data/maps/HamHamClubhouse/scripts.pory"
	msgbox HamHamClubhouse_PandaWorking_Text_2
# 173 "data/maps/HamHamClubhouse/scripts.pory"
	release
	end

HamHamClubhouse_PandaWorking_6:
# 176 "data/maps/HamHamClubhouse/scripts.pory"
	call Common_EventScript_DigDig
# 177 "data/maps/HamHamClubhouse/scripts.pory"
	msgbox ClubhouseBlockingBoss_Text_2
# 178 "data/maps/HamHamClubhouse/scripts.pory"
	faceplayer
# 179 "data/maps/HamHamClubhouse/scripts.pory"
	createfieldmugshot MUGSHOT_PANDA, EMOTE_NORMAL
# 180 "data/maps/HamHamClubhouse/scripts.pory"
	setspeaker HamHamClubhouse_PandaWorking_Text_1
# 181 "data/maps/HamHamClubhouse/scripts.pory"
	msgbox HamHamClubhouse_PandaWorking_Text_3
# 182 "data/maps/HamHamClubhouse/scripts.pory"
	applymovement LOCALID_PANDA_WORKING, ClubhouseBoss_Movement_3
# 183 "data/maps/HamHamClubhouse/scripts.pory"
	release
	end


Clubhouse_Oxnard::
# 196 "data/maps/HamHamClubhouse/scripts.pory"
	lock
# 197 "data/maps/HamHamClubhouse/scripts.pory"
	dynmultichoice 1, 1, FALSE, 4, 0, DYN_MULTICHOICE_CB_NONE, gText_Hamha, gText_HifHif, gText_TackQ, gText_DigDig
# 198 "data/maps/HamHamClubhouse/scripts.pory"
	switch VAR_RESULT
# 199 "data/maps/HamHamClubhouse/scripts.pory"
	case 0, Clubhouse_Oxnard_3
# 204 "data/maps/HamHamClubhouse/scripts.pory"
	case 1, Clubhouse_Oxnard_4
# 209 "data/maps/HamHamClubhouse/scripts.pory"
	case 2, Clubhouse_Oxnard_5
# 219 "data/maps/HamHamClubhouse/scripts.pory"
	case 3, Clubhouse_Oxnard_6
Clubhouse_Oxnard_1:
# 225 "data/maps/HamHamClubhouse/scripts.pory"
	faceplayer
# 226 "data/maps/HamHamClubhouse/scripts.pory"
	createfieldmugshot MUGSHOT_OXNARD, EMOTE_NORMAL
# 227 "data/maps/HamHamClubhouse/scripts.pory"
	setspeaker Clubhouse_Oxnard_Text_1
# 228 "data/maps/HamHamClubhouse/scripts.pory"
	msgbox Clubhouse_Oxnard_Text_3
# 229 "data/maps/HamHamClubhouse/scripts.pory"
	release
	end

Clubhouse_Oxnard_3:
# 200 "data/maps/HamHamClubhouse/scripts.pory"
	call Common_EventScript_MoveToFront
# 201 "data/maps/HamHamClubhouse/scripts.pory"
	call Common_EventScript_Hamha
# 202 "data/maps/HamHamClubhouse/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
	goto Clubhouse_Oxnard_1

Clubhouse_Oxnard_4:
# 205 "data/maps/HamHamClubhouse/scripts.pory"
	call Common_EventScript_HifHif
# 206 "data/maps/HamHamClubhouse/scripts.pory"
	msgbox Clubhouse_Oxnard_Text_0
# 207 "data/maps/HamHamClubhouse/scripts.pory"
	release
	end

Clubhouse_Oxnard_5:
# 210 "data/maps/HamHamClubhouse/scripts.pory"
	call Common_EventScript_MoveToFront
# 211 "data/maps/HamHamClubhouse/scripts.pory"
	call Common_EventScript_TackQ
# 212 "data/maps/HamHamClubhouse/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 213 "data/maps/HamHamClubhouse/scripts.pory"
	faceplayer
# 214 "data/maps/HamHamClubhouse/scripts.pory"
	createfieldmugshot MUGSHOT_OXNARD, EMOTE_NORMAL
# 215 "data/maps/HamHamClubhouse/scripts.pory"
	setspeaker Clubhouse_Oxnard_Text_1
# 216 "data/maps/HamHamClubhouse/scripts.pory"
	msgbox Clubhouse_Oxnard_Text_2
# 217 "data/maps/HamHamClubhouse/scripts.pory"
	release
	end

Clubhouse_Oxnard_6:
# 220 "data/maps/HamHamClubhouse/scripts.pory"
	call Common_EventScript_DigDig
# 221 "data/maps/HamHamClubhouse/scripts.pory"
	msgbox ClubhouseBlockingBoss_Text_2
# 222 "data/maps/HamHamClubhouse/scripts.pory"
	release
	end


Clubhouse_Panda::
# 235 "data/maps/HamHamClubhouse/scripts.pory"
	lock
# 236 "data/maps/HamHamClubhouse/scripts.pory"
	dynmultichoice 1, 1, FALSE, 4, 0, DYN_MULTICHOICE_CB_NONE, gText_Hamha, gText_HifHif, gText_TackQ, gText_DigDig
# 237 "data/maps/HamHamClubhouse/scripts.pory"
	switch VAR_RESULT
# 238 "data/maps/HamHamClubhouse/scripts.pory"
	case 0, Clubhouse_Panda_3
# 243 "data/maps/HamHamClubhouse/scripts.pory"
	case 1, Clubhouse_Panda_4
# 248 "data/maps/HamHamClubhouse/scripts.pory"
	case 2, Clubhouse_Panda_5
# 258 "data/maps/HamHamClubhouse/scripts.pory"
	case 3, Clubhouse_Panda_6
Clubhouse_Panda_1:
# 264 "data/maps/HamHamClubhouse/scripts.pory"
	faceplayer
# 265 "data/maps/HamHamClubhouse/scripts.pory"
	createfieldmugshot MUGSHOT_PANDA, EMOTE_NORMAL
# 266 "data/maps/HamHamClubhouse/scripts.pory"
	setspeaker HamHamClubhouse_PandaWorking_Text_1
# 267 "data/maps/HamHamClubhouse/scripts.pory"
	msgbox Clubhouse_Panda_Text_1
# 268 "data/maps/HamHamClubhouse/scripts.pory"
	release
	end

Clubhouse_Panda_3:
# 239 "data/maps/HamHamClubhouse/scripts.pory"
	call Common_EventScript_MoveToFront
# 240 "data/maps/HamHamClubhouse/scripts.pory"
	call Common_EventScript_Hamha
# 241 "data/maps/HamHamClubhouse/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
	goto Clubhouse_Panda_1

Clubhouse_Panda_4:
# 244 "data/maps/HamHamClubhouse/scripts.pory"
	call Common_EventScript_HifHif
# 245 "data/maps/HamHamClubhouse/scripts.pory"
	msgbox HamHamClubhouse_PandaWorking_Text_0
# 246 "data/maps/HamHamClubhouse/scripts.pory"
	release
	end

Clubhouse_Panda_5:
# 249 "data/maps/HamHamClubhouse/scripts.pory"
	call Common_EventScript_MoveToFront
# 250 "data/maps/HamHamClubhouse/scripts.pory"
	call Common_EventScript_TackQ
# 251 "data/maps/HamHamClubhouse/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 252 "data/maps/HamHamClubhouse/scripts.pory"
	faceplayer
# 253 "data/maps/HamHamClubhouse/scripts.pory"
	createfieldmugshot MUGSHOT_PANDA, EMOTE_NORMAL
# 254 "data/maps/HamHamClubhouse/scripts.pory"
	setspeaker HamHamClubhouse_PandaWorking_Text_1
# 255 "data/maps/HamHamClubhouse/scripts.pory"
	msgbox Clubhouse_Panda_Text_0
# 256 "data/maps/HamHamClubhouse/scripts.pory"
	release
	end

Clubhouse_Panda_6:
# 259 "data/maps/HamHamClubhouse/scripts.pory"
	call Common_EventScript_DigDig
# 260 "data/maps/HamHamClubhouse/scripts.pory"
	msgbox ClubhouseBlockingBoss_Text_2
# 261 "data/maps/HamHamClubhouse/scripts.pory"
	release
	end


Clubhouse_Snoozer::
# 274 "data/maps/HamHamClubhouse/scripts.pory"
	lock
# 275 "data/maps/HamHamClubhouse/scripts.pory"
	dynmultipush gText_Hamha, 0
# 276 "data/maps/HamHamClubhouse/scripts.pory"
	dynmultipush gText_HifHif, 1
# 277 "data/maps/HamHamClubhouse/scripts.pory"
	dynmultipush gText_TackQ, 2
# 278 "data/maps/HamHamClubhouse/scripts.pory"
	dynmultipush gText_DigDig, 3
	checkitem ITEM_TM_UPROAR
# 0 "data/maps/HamHamClubhouse/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Clubhouse_Snoozer_2
# 282 "data/maps/HamHamClubhouse/scripts.pory"
	dynmultipush AcornParkSouthQuestionMarks, 4
Clubhouse_Snoozer_1:
# 284 "data/maps/HamHamClubhouse/scripts.pory"
	dynmultistack 1, 1, FALSE, 5, 0, 0, DYN_MULTICHOICE_CB_NONE
# 285 "data/maps/HamHamClubhouse/scripts.pory"
	switch VAR_RESULT
# 286 "data/maps/HamHamClubhouse/scripts.pory"
	case 0, Clubhouse_Snoozer_7
# 293 "data/maps/HamHamClubhouse/scripts.pory"
	case 1, Clubhouse_Snoozer_8
# 301 "data/maps/HamHamClubhouse/scripts.pory"
	case 2, Clubhouse_Snoozer_9
# 313 "data/maps/HamHamClubhouse/scripts.pory"
	case 3, Clubhouse_Snoozer_10
# 317 "data/maps/HamHamClubhouse/scripts.pory"
	case 4, Clubhouse_Snoozer_11
Clubhouse_Snoozer_5:
# 343 "data/maps/HamHamClubhouse/scripts.pory"
	release
	end

Clubhouse_Snoozer_2:
# 280 "data/maps/HamHamClubhouse/scripts.pory"
	dynmultipush AcornParkSouthDingBang, 4
	goto Clubhouse_Snoozer_1

Clubhouse_Snoozer_7:
# 287 "data/maps/HamHamClubhouse/scripts.pory"
	call Common_EventScript_Hamha
# 288 "data/maps/HamHamClubhouse/scripts.pory"
	createfieldmugshot MUGSHOT_SNOOZER, EMOTE_NORMAL
# 289 "data/maps/HamHamClubhouse/scripts.pory"
	setspeaker Clubhouse_Snoozer_Text_0
# 290 "data/maps/HamHamClubhouse/scripts.pory"
	msgbox Clubhouse_Snoozer_Text_1
	goto Clubhouse_Snoozer_5

Clubhouse_Snoozer_8:
# 294 "data/maps/HamHamClubhouse/scripts.pory"
	call Common_EventScript_HifHif
# 295 "data/maps/HamHamClubhouse/scripts.pory"
	msgbox Clubhouse_Snoozer_Text_2
# 296 "data/maps/HamHamClubhouse/scripts.pory"
	createfieldmugshot MUGSHOT_SNOOZER, EMOTE_NORMAL
# 297 "data/maps/HamHamClubhouse/scripts.pory"
	setspeaker Clubhouse_Snoozer_Text_0
# 298 "data/maps/HamHamClubhouse/scripts.pory"
	msgbox Clubhouse_Snoozer_Text_1
	goto Clubhouse_Snoozer_5

Clubhouse_Snoozer_9:
# 302 "data/maps/HamHamClubhouse/scripts.pory"
	call Common_EventScript_TackQ
# 303 "data/maps/HamHamClubhouse/scripts.pory"
	createfieldmugshot MUGSHOT_SNOOZER, EMOTE_NORMAL
# 304 "data/maps/HamHamClubhouse/scripts.pory"
	setspeaker Clubhouse_Snoozer_Text_0
# 305 "data/maps/HamHamClubhouse/scripts.pory"
	msgbox Clubhouse_Snoozer_Text_1
# 306 "data/maps/HamHamClubhouse/scripts.pory"
	removefieldmugshot
# 307 "data/maps/HamHamClubhouse/scripts.pory"
	setspeaker NULL
# 308 "data/maps/HamHamClubhouse/scripts.pory"
	msgbox Clubhouse_Snoozer_Text_3
# 309 "data/maps/HamHamClubhouse/scripts.pory"
	applymovement LOCALID_PLAYER, ClubhouseBoss_Movement_0
# 310 "data/maps/HamHamClubhouse/scripts.pory"
	waitmovement
# 311 "data/maps/HamHamClubhouse/scripts.pory"
	msgbox Clubhouse_Snoozer_Text_4
	goto Clubhouse_Snoozer_5

Clubhouse_Snoozer_10:
# 314 "data/maps/HamHamClubhouse/scripts.pory"
	call Common_EventScript_DigDig
# 315 "data/maps/HamHamClubhouse/scripts.pory"
	msgbox Clubhouse_Snoozer_Text_5
	goto Clubhouse_Snoozer_5

Clubhouse_Snoozer_11:
	checkitem ITEM_TM_UPROAR
# 0 "data/maps/HamHamClubhouse/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Clubhouse_Snoozer_12
	goto Clubhouse_Snoozer_5

Clubhouse_Snoozer_12:
# 320 "data/maps/HamHamClubhouse/scripts.pory"
	createfieldmugshot MUGSHOT_HAMTARO, EMOTE_NORMAL
# 321 "data/maps/HamHamClubhouse/scripts.pory"
	setspeaker Clubhouse_Snoozer_Text_6
# 322 "data/maps/HamHamClubhouse/scripts.pory"
	message Clubhouse_Snoozer_Text_7
# 323 "data/maps/HamHamClubhouse/scripts.pory"
	applymovement LOCALID_PLAYER, ClubhouseBoss_Movement_1
# 324 "data/maps/HamHamClubhouse/scripts.pory"
	waitmovement
# 325 "data/maps/HamHamClubhouse/scripts.pory"
	waitmessage
# 326 "data/maps/HamHamClubhouse/scripts.pory"
	waitbuttonpress
# 327 "data/maps/HamHamClubhouse/scripts.pory"
	applymovement LOCALID_CLUB_SNOOZER, Clubhouse_Snoozer_Movement_0
# 330 "data/maps/HamHamClubhouse/scripts.pory"
	waitmovement
# 331 "data/maps/HamHamClubhouse/scripts.pory"
	createfieldmugshot MUGSHOT_SNOOZER, EMOTE_NORMAL
# 332 "data/maps/HamHamClubhouse/scripts.pory"
	setspeaker Clubhouse_Snoozer_Text_0
# 333 "data/maps/HamHamClubhouse/scripts.pory"
	msgbox Clubhouse_Snoozer_Text_8
# 334 "data/maps/HamHamClubhouse/scripts.pory"
	applymovement LOCALID_CLUB_SNOOZER, Clubhouse_Snoozer_Movement_1
# 337 "data/maps/HamHamClubhouse/scripts.pory"
	waitmovement
# 338 "data/maps/HamHamClubhouse/scripts.pory"
	msgbox Clubhouse_Snoozer_Text_9
# 339 "data/maps/HamHamClubhouse/scripts.pory"
	applymovement LOCALID_CLUB_SNOOZER, ClubhouseBoss_Movement_0
	goto Clubhouse_Snoozer_5


# 35 "data/maps/HamHamClubhouse/scripts.pory"
Clubhouse_IntroCutscene_Movement_0:
# 35 "data/maps/HamHamClubhouse/scripts.pory"
	walk_down
# 35 "data/maps/HamHamClubhouse/scripts.pory"
	walk_right
# 35 "data/maps/HamHamClubhouse/scripts.pory"
	walk_right
# 35 "data/maps/HamHamClubhouse/scripts.pory"
	walk_left
# 35 "data/maps/HamHamClubhouse/scripts.pory"
	walk_left
# 35 "data/maps/HamHamClubhouse/scripts.pory"
	walk_up
# 35 "data/maps/HamHamClubhouse/scripts.pory"
	walk_up
# 35 "data/maps/HamHamClubhouse/scripts.pory"
	walk_down
	step_end

# 36 "data/maps/HamHamClubhouse/scripts.pory"
Clubhouse_IntroCutscene_Movement_1:
# 36 "data/maps/HamHamClubhouse/scripts.pory"
	delay_16
# 36 "data/maps/HamHamClubhouse/scripts.pory"
	walk_down
# 36 "data/maps/HamHamClubhouse/scripts.pory"
	walk_down
# 36 "data/maps/HamHamClubhouse/scripts.pory"
	face_up
	step_end

# 105 "data/maps/HamHamClubhouse/scripts.pory"
ClubhouseBoss_Movement_0:
# 105 "data/maps/HamHamClubhouse/scripts.pory"
	face_down
	step_end

# 129 "data/maps/HamHamClubhouse/scripts.pory"
ClubhouseBoss_Movement_1:
# 129 "data/maps/HamHamClubhouse/scripts.pory"
	dingbang
	step_end

# 135 "data/maps/HamHamClubhouse/scripts.pory"
ClubhouseBoss_Movement_2:
# 135 "data/maps/HamHamClubhouse/scripts.pory"
	emote_x
	step_end

# 141 "data/maps/HamHamClubhouse/scripts.pory"
ClubhouseBoss_Movement_3:
# 141 "data/maps/HamHamClubhouse/scripts.pory"
	face_up
	step_end

# 327 "data/maps/HamHamClubhouse/scripts.pory"
Clubhouse_Snoozer_Movement_0:
# 328 "data/maps/HamHamClubhouse/scripts.pory"
	walk_in_place_up
	step_end

# 334 "data/maps/HamHamClubhouse/scripts.pory"
Clubhouse_Snoozer_Movement_1:
# 335 "data/maps/HamHamClubhouse/scripts.pory"
	walk_in_place_left
	step_end

Clubhouse_IntroCutscene_Text_0:
# 41 "data/maps/HamHamClubhouse/scripts.pory"
	.string "Boss$"

Clubhouse_IntroCutscene_Text_1:
# 42 "data/maps/HamHamClubhouse/scripts.pory"
	.string "Alright! I think everyone's playing\nin Acorn Park as usual, so you should\llook for them there and see if you can\llearn some new Hamchat while you're\lat it!$"

ClubhouseBlockingBoss_Text_0:
# 58 "data/maps/HamHamClubhouse/scripts.pory"
	.string "Smells like BOSS$"

ClubhouseBlockingBoss_Text_1:
# 67 "data/maps/HamHamClubhouse/scripts.pory"
	.string "Hey! We're not doing a battle right now!\pDon't {COLOR RED}TACK-Q{COLOR DARK_GRAY} me!$"

ClubhouseBlockingBoss_Text_2:
# 72 "data/maps/HamHamClubhouse/scripts.pory"
	.string "Nothing there...$"

ClubhouseBlockingBoss_Text_3:
# 75 "data/maps/HamHamClubhouse/scripts.pory"
	.string "I appreciate the enthusiasm Hamtaro,\nbut let's let PANDA do all the\lrenovations.$"

ClubhouseBlockingBoss_Text_4:
# 81 "data/maps/HamHamClubhouse/scripts.pory"
	.string "Hamtaro, keep looking for everyone,\nit's no fun without the whole gang!$"

ClubhouseBoss_Text_0:
# 127 "data/maps/HamHamClubhouse/scripts.pory"
	.string "I hope PANDA finishes up soon, it's\nso {COLOR RED}DINGBANG{COLOR DARK_GRAY} in here while he's working.$"

ClubhouseBoss_Text_1:
# 132 "data/maps/HamHamClubhouse/scripts.pory"
	.string "You learned {COLOR RED}Dingbang!$"

HamHamClubhouse_PandaWorking_Text_0:
# 162 "data/maps/HamHamClubhouse/scripts.pory"
	.string "Smells like PANDA$"

HamHamClubhouse_PandaWorking_Text_1:
# 171 "data/maps/HamHamClubhouse/scripts.pory"
	.string "Panda$"

HamHamClubhouse_PandaWorking_Text_2:
# 172 "data/maps/HamHamClubhouse/scripts.pory"
	.string "Hamtaro! I can handle the construction.\pSee if BOSS needs help with something.$"

HamHamClubhouse_PandaWorking_Text_3:
# 181 "data/maps/HamHamClubhouse/scripts.pory"
	.string "Thanks HAMTARO, but I can handle all\nthe renovations.\pMaybe see if BOSS needs help.$"

HamHamClubhouse_PandaWorking_Text_4:
# 189 "data/maps/HamHamClubhouse/scripts.pory"
	.string "Hey HAMTARO, I'm hard at work on the\nnew arena room.\pYou should see if BOSS needs help\nwith anything.$"

Clubhouse_Oxnard_Text_0:
# 206 "data/maps/HamHamClubhouse/scripts.pory"
	.string "Smells like OXNARD$"

Clubhouse_Oxnard_Text_1:
# 215 "data/maps/HamHamClubhouse/scripts.pory"
	.string "Oxnard$"

Clubhouse_Oxnard_Text_2:
# 216 "data/maps/HamHamClubhouse/scripts.pory"
	.string "Hamtaro, why would you do that???$"

Clubhouse_Oxnard_Text_3:
# 228 "data/maps/HamHamClubhouse/scripts.pory"
	.string "Hey HAMTARO! Thanks for finding my\nsunflower seed earlier!$"

Clubhouse_Panda_Text_0:
# 255 "data/maps/HamHamClubhouse/scripts.pory"
	.string "Hamtaro! You gotta save it for the\narena!$"

Clubhouse_Panda_Text_1:
# 267 "data/maps/HamHamClubhouse/scripts.pory"
	.string "Hey HAMTARO, thanks for all your help\ntoday!$"

Clubhouse_Snoozer_Text_0:
# 289 "data/maps/HamHamClubhouse/scripts.pory"
	.string "Snoozer$"

Clubhouse_Snoozer_Text_1:
# 290 "data/maps/HamHamClubhouse/scripts.pory"
	.string "Zzzzzzzzzzzzzzzzzzzz...$"

Clubhouse_Snoozer_Text_2:
# 295 "data/maps/HamHamClubhouse/scripts.pory"
	.string "Smells like Snoozer$"

Clubhouse_Snoozer_Text_3:
# 308 "data/maps/HamHamClubhouse/scripts.pory"
	.string "He's still asleep...$"

Clubhouse_Snoozer_Text_4:
# 311 "data/maps/HamHamClubhouse/scripts.pory"
	.string "How did he sleep through that?!?!$"

Clubhouse_Snoozer_Text_5:
# 315 "data/maps/HamHamClubhouse/scripts.pory"
	.string "There's a little bit of dirt on Snoozer\n"
	.string "now, but he's still sleeping through it.$"

Clubhouse_Snoozer_Text_6:
# 321 "data/maps/HamHamClubhouse/scripts.pory"
	.string "Hamtaro$"

Clubhouse_Snoozer_Text_7:
# 322 "data/maps/HamHamClubhouse/scripts.pory"
	.string "DingBang!$"

Clubhouse_Snoozer_Text_8:
# 333 "data/maps/HamHamClubhouse/scripts.pory"
	.string "Huh? what's going on?\nWhy is it so noisy?$"

Clubhouse_Snoozer_Text_9:
# 338 "data/maps/HamHamClubhouse/scripts.pory"
	.string "Oh, I'm in the clubhouse now...$"
