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
	goto_if_set FLAG_GOT_SNOOZER, Clubhouse_CheckForPanda_4
	goto Clubhouse_CheckForPanda_1

Clubhouse_CheckForPanda_4:
# 11 "data/maps/HamHamClubhouse/scripts.pory"
	call Clubhouse_PandaWork
	goto Clubhouse_CheckForPanda_1


Clubhouse_PandaWork::
# 18 "data/maps/HamHamClubhouse/scripts.pory"
	setmetatile 2, 2, 0x0D5, FALSE
# 19 "data/maps/HamHamClubhouse/scripts.pory"
	setmetatile 3, 2, 0x0D6, FALSE
# 20 "data/maps/HamHamClubhouse/scripts.pory"
	setmetatile 4, 2, 0x0D7, FALSE
# 21 "data/maps/HamHamClubhouse/scripts.pory"
	setmetatile 2, 3, 0x0DD, FALSE
# 22 "data/maps/HamHamClubhouse/scripts.pory"
	setmetatile 3, 3, 0x0DE, FALSE
# 23 "data/maps/HamHamClubhouse/scripts.pory"
	setmetatile 4, 3, 0x0DF, FALSE
	return


Clubhouse_IntroCutscene::
# 27 "data/maps/HamHamClubhouse/scripts.pory"
	goto_if_set FLAG_INTRO_DONE, Clubhouse_IntroCutscene_1
# 30 "data/maps/HamHamClubhouse/scripts.pory"
	setvar VAR_TEMP_0, 1
# 31 "data/maps/HamHamClubhouse/scripts.pory"
	setflag FLAG_INTRO_DONE
# 32 "data/maps/HamHamClubhouse/scripts.pory"
	lock
# 33 "data/maps/HamHamClubhouse/scripts.pory"
	applymovement LOCALID_BOSS_BLOCKING, Clubhouse_IntroCutscene_Movement_0
# 34 "data/maps/HamHamClubhouse/scripts.pory"
	applymovement LOCALID_PLAYER, Clubhouse_IntroCutscene_Movement_1
# 35 "data/maps/HamHamClubhouse/scripts.pory"
	turnobject LOCALID_BOSS, DIR_SOUTH
# 36 "data/maps/HamHamClubhouse/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 37 "data/maps/HamHamClubhouse/scripts.pory"
	waitmovement LOCALID_BOSS_BLOCKING
# 38 "data/maps/HamHamClubhouse/scripts.pory"
	createfieldmugshot MUGSHOT_BOSS, EMOTE_NORMAL
# 39 "data/maps/HamHamClubhouse/scripts.pory"
	setspeaker Clubhouse_IntroCutscene_Text_0
# 40 "data/maps/HamHamClubhouse/scripts.pory"
	msgbox Clubhouse_IntroCutscene_Text_1
# 41 "data/maps/HamHamClubhouse/scripts.pory"
	release
	return

Clubhouse_IntroCutscene_1:
# 28 "data/maps/HamHamClubhouse/scripts.pory"
	setvar VAR_TEMP_0, 1
	return


ClubhouseBlockingBoss::
# 46 "data/maps/HamHamClubhouse/scripts.pory"
	lock
# 47 "data/maps/HamHamClubhouse/scripts.pory"
	dynmultichoice 1, 1, FALSE, 4, 0, DYN_MULTICHOICE_CB_NONE, gText_Hamha, gText_HifHif, gText_TackQ, gText_DigDig
# 48 "data/maps/HamHamClubhouse/scripts.pory"
	switch VAR_RESULT
# 49 "data/maps/HamHamClubhouse/scripts.pory"
	case 0, ClubhouseBlockingBoss_3
# 54 "data/maps/HamHamClubhouse/scripts.pory"
	case 1, ClubhouseBlockingBoss_4
# 59 "data/maps/HamHamClubhouse/scripts.pory"
	case 2, ClubhouseBlockingBoss_5
# 68 "data/maps/HamHamClubhouse/scripts.pory"
	case 3, ClubhouseBlockingBoss_6
ClubhouseBlockingBoss_1:
# 77 "data/maps/HamHamClubhouse/scripts.pory"
	createfieldmugshot MUGSHOT_BOSS, EMOTE_NORMAL
# 78 "data/maps/HamHamClubhouse/scripts.pory"
	setspeaker Clubhouse_IntroCutscene_Text_0
# 79 "data/maps/HamHamClubhouse/scripts.pory"
	msgbox ClubhouseBlockingBoss_Text_4
# 80 "data/maps/HamHamClubhouse/scripts.pory"
	release
	end

ClubhouseBlockingBoss_3:
# 50 "data/maps/HamHamClubhouse/scripts.pory"
	call Common_EventScript_MoveToFront
# 51 "data/maps/HamHamClubhouse/scripts.pory"
	call Common_EventScript_Hamha
# 52 "data/maps/HamHamClubhouse/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
	goto ClubhouseBlockingBoss_1

ClubhouseBlockingBoss_4:
# 55 "data/maps/HamHamClubhouse/scripts.pory"
	call Common_EventScript_HifHif
# 56 "data/maps/HamHamClubhouse/scripts.pory"
	msgbox ClubhouseBlockingBoss_Text_0
# 57 "data/maps/HamHamClubhouse/scripts.pory"
	release
	end

ClubhouseBlockingBoss_5:
# 60 "data/maps/HamHamClubhouse/scripts.pory"
	call Common_EventScript_MoveToFront
# 61 "data/maps/HamHamClubhouse/scripts.pory"
	call Common_EventScript_TackQ
# 62 "data/maps/HamHamClubhouse/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 63 "data/maps/HamHamClubhouse/scripts.pory"
	createfieldmugshot MUGSHOT_BOSS, EMOTE_NORMAL
# 64 "data/maps/HamHamClubhouse/scripts.pory"
	setspeaker Clubhouse_IntroCutscene_Text_0
# 65 "data/maps/HamHamClubhouse/scripts.pory"
	msgbox ClubhouseBlockingBoss_Text_1
# 66 "data/maps/HamHamClubhouse/scripts.pory"
	release
	end

ClubhouseBlockingBoss_6:
# 69 "data/maps/HamHamClubhouse/scripts.pory"
	call Common_EventScript_DigDig
# 70 "data/maps/HamHamClubhouse/scripts.pory"
	msgbox ClubhouseBlockingBoss_Text_2
# 71 "data/maps/HamHamClubhouse/scripts.pory"
	createfieldmugshot MUGSHOT_BOSS, EMOTE_NORMAL
# 72 "data/maps/HamHamClubhouse/scripts.pory"
	setspeaker Clubhouse_IntroCutscene_Text_0
# 73 "data/maps/HamHamClubhouse/scripts.pory"
	msgbox ClubhouseBlockingBoss_Text_3
# 74 "data/maps/HamHamClubhouse/scripts.pory"
	release
	end


ClubhouseBoss::
# 85 "data/maps/HamHamClubhouse/scripts.pory"
	lock
# 86 "data/maps/HamHamClubhouse/scripts.pory"
	dynmultichoice 1, 1, FALSE, 4, 0, DYN_MULTICHOICE_CB_NONE, gText_Hamha, gText_HifHif, gText_TackQ, gText_DigDig
# 87 "data/maps/HamHamClubhouse/scripts.pory"
	switch VAR_RESULT
# 88 "data/maps/HamHamClubhouse/scripts.pory"
	case 0, ClubhouseBoss_3
# 94 "data/maps/HamHamClubhouse/scripts.pory"
	case 1, ClubhouseBoss_4
# 99 "data/maps/HamHamClubhouse/scripts.pory"
	case 2, ClubhouseBoss_5
# 110 "data/maps/HamHamClubhouse/scripts.pory"
	case 3, ClubhouseBoss_6
ClubhouseBoss_1:
# 120 "data/maps/HamHamClubhouse/scripts.pory"
	createfieldmugshot MUGSHOT_BOSS, EMOTE_NORMAL
# 121 "data/maps/HamHamClubhouse/scripts.pory"
	setspeaker Clubhouse_IntroCutscene_Text_0
# 122 "data/maps/HamHamClubhouse/scripts.pory"
	goto_if_set FLAG_NEED_SNOOZER, ClubhouseBoss_8
# 142 "data/maps/HamHamClubhouse/scripts.pory"
	msgbox ClubhouseBlockingBoss_Text_4
ClubhouseBoss_7:
# 144 "data/maps/HamHamClubhouse/scripts.pory"
	release
	end

ClubhouseBoss_3:
# 89 "data/maps/HamHamClubhouse/scripts.pory"
	call Common_EventScript_MoveToFront
# 90 "data/maps/HamHamClubhouse/scripts.pory"
	call Common_EventScript_Hamha
# 91 "data/maps/HamHamClubhouse/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 92 "data/maps/HamHamClubhouse/scripts.pory"
	waitmovement
	goto ClubhouseBoss_1

ClubhouseBoss_4:
# 95 "data/maps/HamHamClubhouse/scripts.pory"
	call Common_EventScript_HifHif
# 96 "data/maps/HamHamClubhouse/scripts.pory"
	msgbox ClubhouseBlockingBoss_Text_0
# 97 "data/maps/HamHamClubhouse/scripts.pory"
	release
	end

ClubhouseBoss_5:
# 100 "data/maps/HamHamClubhouse/scripts.pory"
	call Common_EventScript_MoveToFront
# 101 "data/maps/HamHamClubhouse/scripts.pory"
	call Common_EventScript_TackQ
# 102 "data/maps/HamHamClubhouse/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 103 "data/maps/HamHamClubhouse/scripts.pory"
	applymovement LOCALID_BOSS_SITTING, ClubhouseBoss_Movement_0
# 104 "data/maps/HamHamClubhouse/scripts.pory"
	waitmovement
# 105 "data/maps/HamHamClubhouse/scripts.pory"
	createfieldmugshot MUGSHOT_BOSS, EMOTE_NORMAL
# 106 "data/maps/HamHamClubhouse/scripts.pory"
	setspeaker Clubhouse_IntroCutscene_Text_0
# 107 "data/maps/HamHamClubhouse/scripts.pory"
	msgbox ClubhouseBlockingBoss_Text_1
# 108 "data/maps/HamHamClubhouse/scripts.pory"
	release
	end

ClubhouseBoss_6:
# 111 "data/maps/HamHamClubhouse/scripts.pory"
	call Common_EventScript_DigDig
# 112 "data/maps/HamHamClubhouse/scripts.pory"
	msgbox ClubhouseBlockingBoss_Text_2
# 113 "data/maps/HamHamClubhouse/scripts.pory"
	faceplayer
# 114 "data/maps/HamHamClubhouse/scripts.pory"
	createfieldmugshot MUGSHOT_BOSS, EMOTE_NORMAL
# 115 "data/maps/HamHamClubhouse/scripts.pory"
	setspeaker Clubhouse_IntroCutscene_Text_0
# 116 "data/maps/HamHamClubhouse/scripts.pory"
	msgbox ClubhouseBlockingBoss_Text_3
# 117 "data/maps/HamHamClubhouse/scripts.pory"
	release
	end

ClubhouseBoss_8:
# 123 "data/maps/HamHamClubhouse/scripts.pory"
	faceplayer
# 124 "data/maps/HamHamClubhouse/scripts.pory"
	msgbox ClubhouseBoss_Text_0
	checkitem ITEM_TM_UPROAR
# 0 "data/maps/HamHamClubhouse/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq ClubhouseBoss_11
	goto ClubhouseBoss_7

ClubhouseBoss_11:
# 126 "data/maps/HamHamClubhouse/scripts.pory"
	applymovement LOCALID_PLAYER, ClubhouseBoss_Movement_1
# 127 "data/maps/HamHamClubhouse/scripts.pory"
	waitmovement
# 128 "data/maps/HamHamClubhouse/scripts.pory"
	setspeaker SP_NAME_NONE
# 129 "data/maps/HamHamClubhouse/scripts.pory"
	message ClubhouseBoss_Text_1
# 130 "data/maps/HamHamClubhouse/scripts.pory"
	playse MUS_RG_OBTAIN_KEY_ITEM
# 131 "data/maps/HamHamClubhouse/scripts.pory"
	additem ITEM_TM_UPROAR, 1
# 132 "data/maps/HamHamClubhouse/scripts.pory"
	applymovement LOCALID_PLAYER, ClubhouseBoss_Movement_2
# 133 "data/maps/HamHamClubhouse/scripts.pory"
	waitmovement
# 134 "data/maps/HamHamClubhouse/scripts.pory"
	waitse
# 135 "data/maps/HamHamClubhouse/scripts.pory"
	waitmessage
# 136 "data/maps/HamHamClubhouse/scripts.pory"
	waitbuttonpress
# 137 "data/maps/HamHamClubhouse/scripts.pory"
	closemessage
# 138 "data/maps/HamHamClubhouse/scripts.pory"
	applymovement LOCALID_PLAYER, ClubhouseBoss_Movement_3
# 139 "data/maps/HamHamClubhouse/scripts.pory"
	waitmovement
	goto ClubhouseBoss_7


HamHamClubhouse_PandaWorking::
# 149 "data/maps/HamHamClubhouse/scripts.pory"
	lock
# 150 "data/maps/HamHamClubhouse/scripts.pory"
	dynmultichoice 1, 1, FALSE, 4, 0, DYN_MULTICHOICE_CB_NONE, gText_Hamha, gText_HifHif, gText_TackQ, gText_DigDig
# 151 "data/maps/HamHamClubhouse/scripts.pory"
	switch VAR_RESULT
# 152 "data/maps/HamHamClubhouse/scripts.pory"
	case 0, HamHamClubhouse_PandaWorking_3
# 157 "data/maps/HamHamClubhouse/scripts.pory"
	case 1, HamHamClubhouse_PandaWorking_4
# 162 "data/maps/HamHamClubhouse/scripts.pory"
	case 2, HamHamClubhouse_PandaWorking_5
# 172 "data/maps/HamHamClubhouse/scripts.pory"
	case 3, HamHamClubhouse_PandaWorking_6
HamHamClubhouse_PandaWorking_1:
# 183 "data/maps/HamHamClubhouse/scripts.pory"
	faceplayer
# 184 "data/maps/HamHamClubhouse/scripts.pory"
	createfieldmugshot MUGSHOT_PANDA, EMOTE_NORMAL
# 185 "data/maps/HamHamClubhouse/scripts.pory"
	setspeaker HamHamClubhouse_PandaWorking_Text_1
# 186 "data/maps/HamHamClubhouse/scripts.pory"
	msgbox HamHamClubhouse_PandaWorking_Text_4
# 187 "data/maps/HamHamClubhouse/scripts.pory"
	applymovement LOCALID_PANDA_WORKING, ClubhouseBoss_Movement_3
# 188 "data/maps/HamHamClubhouse/scripts.pory"
	release
	end

HamHamClubhouse_PandaWorking_3:
# 153 "data/maps/HamHamClubhouse/scripts.pory"
	call Common_EventScript_MoveToFront
# 154 "data/maps/HamHamClubhouse/scripts.pory"
	call Common_EventScript_Hamha
# 155 "data/maps/HamHamClubhouse/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
	goto HamHamClubhouse_PandaWorking_1

HamHamClubhouse_PandaWorking_4:
# 158 "data/maps/HamHamClubhouse/scripts.pory"
	call Common_EventScript_HifHif
# 159 "data/maps/HamHamClubhouse/scripts.pory"
	msgbox HamHamClubhouse_PandaWorking_Text_0
# 160 "data/maps/HamHamClubhouse/scripts.pory"
	release
	end

HamHamClubhouse_PandaWorking_5:
# 163 "data/maps/HamHamClubhouse/scripts.pory"
	call Common_EventScript_MoveToFront
# 164 "data/maps/HamHamClubhouse/scripts.pory"
	call Common_EventScript_TackQ
# 165 "data/maps/HamHamClubhouse/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 166 "data/maps/HamHamClubhouse/scripts.pory"
	faceplayer
# 167 "data/maps/HamHamClubhouse/scripts.pory"
	createfieldmugshot MUGSHOT_PANDA, EMOTE_NORMAL
# 168 "data/maps/HamHamClubhouse/scripts.pory"
	setspeaker HamHamClubhouse_PandaWorking_Text_1
# 169 "data/maps/HamHamClubhouse/scripts.pory"
	msgbox HamHamClubhouse_PandaWorking_Text_2
# 170 "data/maps/HamHamClubhouse/scripts.pory"
	release
	end

HamHamClubhouse_PandaWorking_6:
# 173 "data/maps/HamHamClubhouse/scripts.pory"
	call Common_EventScript_DigDig
# 174 "data/maps/HamHamClubhouse/scripts.pory"
	msgbox ClubhouseBlockingBoss_Text_2
# 175 "data/maps/HamHamClubhouse/scripts.pory"
	faceplayer
# 176 "data/maps/HamHamClubhouse/scripts.pory"
	createfieldmugshot MUGSHOT_PANDA, EMOTE_NORMAL
# 177 "data/maps/HamHamClubhouse/scripts.pory"
	setspeaker HamHamClubhouse_PandaWorking_Text_1
# 178 "data/maps/HamHamClubhouse/scripts.pory"
	msgbox HamHamClubhouse_PandaWorking_Text_3
# 179 "data/maps/HamHamClubhouse/scripts.pory"
	applymovement LOCALID_PANDA_WORKING, ClubhouseBoss_Movement_3
# 180 "data/maps/HamHamClubhouse/scripts.pory"
	release
	end


Clubhouse_Oxnard::
# 193 "data/maps/HamHamClubhouse/scripts.pory"
	lock
# 194 "data/maps/HamHamClubhouse/scripts.pory"
	dynmultichoice 1, 1, FALSE, 4, 0, DYN_MULTICHOICE_CB_NONE, gText_Hamha, gText_HifHif, gText_TackQ, gText_DigDig
# 195 "data/maps/HamHamClubhouse/scripts.pory"
	switch VAR_RESULT
# 196 "data/maps/HamHamClubhouse/scripts.pory"
	case 0, Clubhouse_Oxnard_3
# 201 "data/maps/HamHamClubhouse/scripts.pory"
	case 1, Clubhouse_Oxnard_4
# 206 "data/maps/HamHamClubhouse/scripts.pory"
	case 2, Clubhouse_Oxnard_5
# 216 "data/maps/HamHamClubhouse/scripts.pory"
	case 3, Clubhouse_Oxnard_6
Clubhouse_Oxnard_1:
# 222 "data/maps/HamHamClubhouse/scripts.pory"
	faceplayer
# 223 "data/maps/HamHamClubhouse/scripts.pory"
	createfieldmugshot MUGSHOT_OXNARD, EMOTE_NORMAL
# 224 "data/maps/HamHamClubhouse/scripts.pory"
	setspeaker Clubhouse_Oxnard_Text_1
# 225 "data/maps/HamHamClubhouse/scripts.pory"
	msgbox Clubhouse_Oxnard_Text_3
# 226 "data/maps/HamHamClubhouse/scripts.pory"
	release
	end

Clubhouse_Oxnard_3:
# 197 "data/maps/HamHamClubhouse/scripts.pory"
	call Common_EventScript_MoveToFront
# 198 "data/maps/HamHamClubhouse/scripts.pory"
	call Common_EventScript_Hamha
# 199 "data/maps/HamHamClubhouse/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
	goto Clubhouse_Oxnard_1

Clubhouse_Oxnard_4:
# 202 "data/maps/HamHamClubhouse/scripts.pory"
	call Common_EventScript_HifHif
# 203 "data/maps/HamHamClubhouse/scripts.pory"
	msgbox Clubhouse_Oxnard_Text_0
# 204 "data/maps/HamHamClubhouse/scripts.pory"
	release
	end

Clubhouse_Oxnard_5:
# 207 "data/maps/HamHamClubhouse/scripts.pory"
	call Common_EventScript_MoveToFront
# 208 "data/maps/HamHamClubhouse/scripts.pory"
	call Common_EventScript_TackQ
# 209 "data/maps/HamHamClubhouse/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 210 "data/maps/HamHamClubhouse/scripts.pory"
	faceplayer
# 211 "data/maps/HamHamClubhouse/scripts.pory"
	createfieldmugshot MUGSHOT_OXNARD, EMOTE_NORMAL
# 212 "data/maps/HamHamClubhouse/scripts.pory"
	setspeaker Clubhouse_Oxnard_Text_1
# 213 "data/maps/HamHamClubhouse/scripts.pory"
	msgbox Clubhouse_Oxnard_Text_2
# 214 "data/maps/HamHamClubhouse/scripts.pory"
	release
	end

Clubhouse_Oxnard_6:
# 217 "data/maps/HamHamClubhouse/scripts.pory"
	call Common_EventScript_DigDig
# 218 "data/maps/HamHamClubhouse/scripts.pory"
	msgbox ClubhouseBlockingBoss_Text_2
# 219 "data/maps/HamHamClubhouse/scripts.pory"
	release
	end


Clubhouse_Panda::
# 232 "data/maps/HamHamClubhouse/scripts.pory"
	lock
# 233 "data/maps/HamHamClubhouse/scripts.pory"
	dynmultichoice 1, 1, FALSE, 4, 0, DYN_MULTICHOICE_CB_NONE, gText_Hamha, gText_HifHif, gText_TackQ, gText_DigDig
# 234 "data/maps/HamHamClubhouse/scripts.pory"
	switch VAR_RESULT
# 235 "data/maps/HamHamClubhouse/scripts.pory"
	case 0, Clubhouse_Panda_3
# 240 "data/maps/HamHamClubhouse/scripts.pory"
	case 1, Clubhouse_Panda_4
# 245 "data/maps/HamHamClubhouse/scripts.pory"
	case 2, Clubhouse_Panda_5
# 255 "data/maps/HamHamClubhouse/scripts.pory"
	case 3, Clubhouse_Panda_6
Clubhouse_Panda_1:
# 261 "data/maps/HamHamClubhouse/scripts.pory"
	faceplayer
# 262 "data/maps/HamHamClubhouse/scripts.pory"
	createfieldmugshot MUGSHOT_PANDA, EMOTE_NORMAL
# 263 "data/maps/HamHamClubhouse/scripts.pory"
	setspeaker HamHamClubhouse_PandaWorking_Text_1
# 264 "data/maps/HamHamClubhouse/scripts.pory"
	msgbox Clubhouse_Panda_Text_1
# 265 "data/maps/HamHamClubhouse/scripts.pory"
	release
	end

Clubhouse_Panda_3:
# 236 "data/maps/HamHamClubhouse/scripts.pory"
	call Common_EventScript_MoveToFront
# 237 "data/maps/HamHamClubhouse/scripts.pory"
	call Common_EventScript_Hamha
# 238 "data/maps/HamHamClubhouse/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
	goto Clubhouse_Panda_1

Clubhouse_Panda_4:
# 241 "data/maps/HamHamClubhouse/scripts.pory"
	call Common_EventScript_HifHif
# 242 "data/maps/HamHamClubhouse/scripts.pory"
	msgbox HamHamClubhouse_PandaWorking_Text_0
# 243 "data/maps/HamHamClubhouse/scripts.pory"
	release
	end

Clubhouse_Panda_5:
# 246 "data/maps/HamHamClubhouse/scripts.pory"
	call Common_EventScript_MoveToFront
# 247 "data/maps/HamHamClubhouse/scripts.pory"
	call Common_EventScript_TackQ
# 248 "data/maps/HamHamClubhouse/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 249 "data/maps/HamHamClubhouse/scripts.pory"
	faceplayer
# 250 "data/maps/HamHamClubhouse/scripts.pory"
	createfieldmugshot MUGSHOT_PANDA, EMOTE_NORMAL
# 251 "data/maps/HamHamClubhouse/scripts.pory"
	setspeaker HamHamClubhouse_PandaWorking_Text_1
# 252 "data/maps/HamHamClubhouse/scripts.pory"
	msgbox Clubhouse_Panda_Text_0
# 253 "data/maps/HamHamClubhouse/scripts.pory"
	release
	end

Clubhouse_Panda_6:
# 256 "data/maps/HamHamClubhouse/scripts.pory"
	call Common_EventScript_DigDig
# 257 "data/maps/HamHamClubhouse/scripts.pory"
	msgbox ClubhouseBlockingBoss_Text_2
# 258 "data/maps/HamHamClubhouse/scripts.pory"
	release
	end


Clubhouse_Snoozer::
# 271 "data/maps/HamHamClubhouse/scripts.pory"
	lock
# 272 "data/maps/HamHamClubhouse/scripts.pory"
	dynmultipush gText_Hamha, 0
# 273 "data/maps/HamHamClubhouse/scripts.pory"
	dynmultipush gText_HifHif, 1
# 274 "data/maps/HamHamClubhouse/scripts.pory"
	dynmultipush gText_TackQ, 2
# 275 "data/maps/HamHamClubhouse/scripts.pory"
	dynmultipush gText_DigDig, 3
	checkitem ITEM_TM_UPROAR
# 0 "data/maps/HamHamClubhouse/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Clubhouse_Snoozer_2
# 279 "data/maps/HamHamClubhouse/scripts.pory"
	dynmultipush AcornParkSouthQuestionMarks, 4
Clubhouse_Snoozer_1:
# 281 "data/maps/HamHamClubhouse/scripts.pory"
	dynmultistack 1, 1, FALSE, 5, 0, 0, DYN_MULTICHOICE_CB_NONE
# 282 "data/maps/HamHamClubhouse/scripts.pory"
	switch VAR_RESULT
# 283 "data/maps/HamHamClubhouse/scripts.pory"
	case 0, Clubhouse_Snoozer_7
# 290 "data/maps/HamHamClubhouse/scripts.pory"
	case 1, Clubhouse_Snoozer_8
# 298 "data/maps/HamHamClubhouse/scripts.pory"
	case 2, Clubhouse_Snoozer_9
# 310 "data/maps/HamHamClubhouse/scripts.pory"
	case 3, Clubhouse_Snoozer_10
# 314 "data/maps/HamHamClubhouse/scripts.pory"
	case 4, Clubhouse_Snoozer_11
Clubhouse_Snoozer_5:
# 340 "data/maps/HamHamClubhouse/scripts.pory"
	release
	end

Clubhouse_Snoozer_2:
# 277 "data/maps/HamHamClubhouse/scripts.pory"
	dynmultipush AcornParkSouthDingBang, 4
	goto Clubhouse_Snoozer_1

Clubhouse_Snoozer_7:
# 284 "data/maps/HamHamClubhouse/scripts.pory"
	call Common_EventScript_Hamha
# 285 "data/maps/HamHamClubhouse/scripts.pory"
	createfieldmugshot MUGSHOT_SNOOZER, EMOTE_NORMAL
# 286 "data/maps/HamHamClubhouse/scripts.pory"
	setspeaker Clubhouse_Snoozer_Text_0
# 287 "data/maps/HamHamClubhouse/scripts.pory"
	msgbox Clubhouse_Snoozer_Text_1
	goto Clubhouse_Snoozer_5

Clubhouse_Snoozer_8:
# 291 "data/maps/HamHamClubhouse/scripts.pory"
	call Common_EventScript_HifHif
# 292 "data/maps/HamHamClubhouse/scripts.pory"
	msgbox Clubhouse_Snoozer_Text_2
# 293 "data/maps/HamHamClubhouse/scripts.pory"
	createfieldmugshot MUGSHOT_SNOOZER, EMOTE_NORMAL
# 294 "data/maps/HamHamClubhouse/scripts.pory"
	setspeaker Clubhouse_Snoozer_Text_0
# 295 "data/maps/HamHamClubhouse/scripts.pory"
	msgbox Clubhouse_Snoozer_Text_1
	goto Clubhouse_Snoozer_5

Clubhouse_Snoozer_9:
# 299 "data/maps/HamHamClubhouse/scripts.pory"
	call Common_EventScript_TackQ
# 300 "data/maps/HamHamClubhouse/scripts.pory"
	createfieldmugshot MUGSHOT_SNOOZER, EMOTE_NORMAL
# 301 "data/maps/HamHamClubhouse/scripts.pory"
	setspeaker Clubhouse_Snoozer_Text_0
# 302 "data/maps/HamHamClubhouse/scripts.pory"
	msgbox Clubhouse_Snoozer_Text_1
# 303 "data/maps/HamHamClubhouse/scripts.pory"
	removefieldmugshot
# 304 "data/maps/HamHamClubhouse/scripts.pory"
	setspeaker NULL
# 305 "data/maps/HamHamClubhouse/scripts.pory"
	msgbox Clubhouse_Snoozer_Text_3
# 306 "data/maps/HamHamClubhouse/scripts.pory"
	applymovement LOCALID_PLAYER, ClubhouseBoss_Movement_0
# 307 "data/maps/HamHamClubhouse/scripts.pory"
	waitmovement
# 308 "data/maps/HamHamClubhouse/scripts.pory"
	msgbox Clubhouse_Snoozer_Text_4
	goto Clubhouse_Snoozer_5

Clubhouse_Snoozer_10:
# 311 "data/maps/HamHamClubhouse/scripts.pory"
	call Common_EventScript_DigDig
# 312 "data/maps/HamHamClubhouse/scripts.pory"
	msgbox Clubhouse_Snoozer_Text_5
	goto Clubhouse_Snoozer_5

Clubhouse_Snoozer_11:
	checkitem ITEM_TM_UPROAR
# 0 "data/maps/HamHamClubhouse/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Clubhouse_Snoozer_12
	goto Clubhouse_Snoozer_5

Clubhouse_Snoozer_12:
# 317 "data/maps/HamHamClubhouse/scripts.pory"
	createfieldmugshot MUGSHOT_HAMTARO, EMOTE_NORMAL
# 318 "data/maps/HamHamClubhouse/scripts.pory"
	setspeaker Clubhouse_Snoozer_Text_6
# 319 "data/maps/HamHamClubhouse/scripts.pory"
	message Clubhouse_Snoozer_Text_7
# 320 "data/maps/HamHamClubhouse/scripts.pory"
	applymovement LOCALID_PLAYER, ClubhouseBoss_Movement_1
# 321 "data/maps/HamHamClubhouse/scripts.pory"
	waitmovement
# 322 "data/maps/HamHamClubhouse/scripts.pory"
	waitmessage
# 323 "data/maps/HamHamClubhouse/scripts.pory"
	waitbuttonpress
# 324 "data/maps/HamHamClubhouse/scripts.pory"
	applymovement LOCALID_CLUB_SNOOZER, Clubhouse_Snoozer_Movement_0
# 327 "data/maps/HamHamClubhouse/scripts.pory"
	waitmovement
# 328 "data/maps/HamHamClubhouse/scripts.pory"
	createfieldmugshot MUGSHOT_SNOOZER, EMOTE_NORMAL
# 329 "data/maps/HamHamClubhouse/scripts.pory"
	setspeaker Clubhouse_Snoozer_Text_0
# 330 "data/maps/HamHamClubhouse/scripts.pory"
	msgbox Clubhouse_Snoozer_Text_8
# 331 "data/maps/HamHamClubhouse/scripts.pory"
	applymovement LOCALID_CLUB_SNOOZER, Clubhouse_Snoozer_Movement_1
# 334 "data/maps/HamHamClubhouse/scripts.pory"
	waitmovement
# 335 "data/maps/HamHamClubhouse/scripts.pory"
	msgbox Clubhouse_Snoozer_Text_9
# 336 "data/maps/HamHamClubhouse/scripts.pory"
	applymovement LOCALID_CLUB_SNOOZER, ClubhouseBoss_Movement_0
	goto Clubhouse_Snoozer_5


# 33 "data/maps/HamHamClubhouse/scripts.pory"
Clubhouse_IntroCutscene_Movement_0:
# 33 "data/maps/HamHamClubhouse/scripts.pory"
	walk_down
# 33 "data/maps/HamHamClubhouse/scripts.pory"
	walk_right
# 33 "data/maps/HamHamClubhouse/scripts.pory"
	walk_right
# 33 "data/maps/HamHamClubhouse/scripts.pory"
	walk_left
# 33 "data/maps/HamHamClubhouse/scripts.pory"
	walk_left
# 33 "data/maps/HamHamClubhouse/scripts.pory"
	walk_up
# 33 "data/maps/HamHamClubhouse/scripts.pory"
	walk_up
# 33 "data/maps/HamHamClubhouse/scripts.pory"
	walk_down
	step_end

# 34 "data/maps/HamHamClubhouse/scripts.pory"
Clubhouse_IntroCutscene_Movement_1:
# 34 "data/maps/HamHamClubhouse/scripts.pory"
	delay_16
# 34 "data/maps/HamHamClubhouse/scripts.pory"
	walk_down
# 34 "data/maps/HamHamClubhouse/scripts.pory"
	walk_down
# 34 "data/maps/HamHamClubhouse/scripts.pory"
	face_up
	step_end

# 103 "data/maps/HamHamClubhouse/scripts.pory"
ClubhouseBoss_Movement_0:
# 103 "data/maps/HamHamClubhouse/scripts.pory"
	face_down
	step_end

# 126 "data/maps/HamHamClubhouse/scripts.pory"
ClubhouseBoss_Movement_1:
# 126 "data/maps/HamHamClubhouse/scripts.pory"
	dingbang
	step_end

# 132 "data/maps/HamHamClubhouse/scripts.pory"
ClubhouseBoss_Movement_2:
# 132 "data/maps/HamHamClubhouse/scripts.pory"
	emote_x
	step_end

# 138 "data/maps/HamHamClubhouse/scripts.pory"
ClubhouseBoss_Movement_3:
# 138 "data/maps/HamHamClubhouse/scripts.pory"
	face_up
	step_end

# 324 "data/maps/HamHamClubhouse/scripts.pory"
Clubhouse_Snoozer_Movement_0:
# 325 "data/maps/HamHamClubhouse/scripts.pory"
	walk_in_place_up
	step_end

# 331 "data/maps/HamHamClubhouse/scripts.pory"
Clubhouse_Snoozer_Movement_1:
# 332 "data/maps/HamHamClubhouse/scripts.pory"
	walk_in_place_left
	step_end

Clubhouse_IntroCutscene_Text_0:
# 39 "data/maps/HamHamClubhouse/scripts.pory"
	.string "Boss$"

Clubhouse_IntroCutscene_Text_1:
# 40 "data/maps/HamHamClubhouse/scripts.pory"
	.string "Alright! I think everyone's playing\nin Acorn Park as usual, so you should\llook for them there and see if you can\llearn somet new Hamchat while you're\lat it!$"

ClubhouseBlockingBoss_Text_0:
# 56 "data/maps/HamHamClubhouse/scripts.pory"
	.string "Smells like BOSS$"

ClubhouseBlockingBoss_Text_1:
# 65 "data/maps/HamHamClubhouse/scripts.pory"
	.string "Hey! We're not doing a battle right now!\pDon't {COLOR RED}TACK-Q{COLOR DARK_GRAY} me!$"

ClubhouseBlockingBoss_Text_2:
# 70 "data/maps/HamHamClubhouse/scripts.pory"
	.string "Nothing there...$"

ClubhouseBlockingBoss_Text_3:
# 73 "data/maps/HamHamClubhouse/scripts.pory"
	.string "I appreciate the enthusiasm Hamtaro,\nbut let's let PANDA do all the\lrenovations.$"

ClubhouseBlockingBoss_Text_4:
# 79 "data/maps/HamHamClubhouse/scripts.pory"
	.string "Hamtaro, keep looking for everyone,\nit's no fun without the whole gang!$"

ClubhouseBoss_Text_0:
# 124 "data/maps/HamHamClubhouse/scripts.pory"
	.string "I hope PANDA finishes up soon, it's\nso {COLOR RED}DINGBANG{COLOR DARK_GRAY} in here while he's working.$"

ClubhouseBoss_Text_1:
# 129 "data/maps/HamHamClubhouse/scripts.pory"
	.string "You learned {COLOR RED}Dingbang!$"

HamHamClubhouse_PandaWorking_Text_0:
# 159 "data/maps/HamHamClubhouse/scripts.pory"
	.string "Smells like PANDA$"

HamHamClubhouse_PandaWorking_Text_1:
# 168 "data/maps/HamHamClubhouse/scripts.pory"
	.string "Panda$"

HamHamClubhouse_PandaWorking_Text_2:
# 169 "data/maps/HamHamClubhouse/scripts.pory"
	.string "Hamtaro! I can handle the construction.\pSee if BOSS needs help with something.$"

HamHamClubhouse_PandaWorking_Text_3:
# 178 "data/maps/HamHamClubhouse/scripts.pory"
	.string "Thanks HAMTARO, but I can handle all\nthe renovations.\pMaybe see if BOSS needs help.$"

HamHamClubhouse_PandaWorking_Text_4:
# 186 "data/maps/HamHamClubhouse/scripts.pory"
	.string "Hey HAMTARO, I'm hard at work on the\nnew arena room.\pYou should see if BOSS needs help\nwith anything.$"

Clubhouse_Oxnard_Text_0:
# 203 "data/maps/HamHamClubhouse/scripts.pory"
	.string "Smells like OXNARD$"

Clubhouse_Oxnard_Text_1:
# 212 "data/maps/HamHamClubhouse/scripts.pory"
	.string "Oxnard$"

Clubhouse_Oxnard_Text_2:
# 213 "data/maps/HamHamClubhouse/scripts.pory"
	.string "Hamtaro, why would you do that???$"

Clubhouse_Oxnard_Text_3:
# 225 "data/maps/HamHamClubhouse/scripts.pory"
	.string "Hey HAMTARO! Thanks for finding my\nsunflower seed earlier!$"

Clubhouse_Panda_Text_0:
# 252 "data/maps/HamHamClubhouse/scripts.pory"
	.string "Hamtaro! You gotta save it for the\narena!$"

Clubhouse_Panda_Text_1:
# 264 "data/maps/HamHamClubhouse/scripts.pory"
	.string "Hey HAMTARO, thanks for all your help\ntoday!$"

Clubhouse_Snoozer_Text_0:
# 286 "data/maps/HamHamClubhouse/scripts.pory"
	.string "Snoozer$"

Clubhouse_Snoozer_Text_1:
# 287 "data/maps/HamHamClubhouse/scripts.pory"
	.string "Zzzzzzzzzzzzzzzzzzzz...$"

Clubhouse_Snoozer_Text_2:
# 292 "data/maps/HamHamClubhouse/scripts.pory"
	.string "Smells like Snoozer$"

Clubhouse_Snoozer_Text_3:
# 305 "data/maps/HamHamClubhouse/scripts.pory"
	.string "He's still asleep...$"

Clubhouse_Snoozer_Text_4:
# 308 "data/maps/HamHamClubhouse/scripts.pory"
	.string "How did he sleep through that?!?!$"

Clubhouse_Snoozer_Text_5:
# 312 "data/maps/HamHamClubhouse/scripts.pory"
	.string "There's a little bit of dirt on Snoozer\n"
	.string "now, but he's still sleeping through it.$"

Clubhouse_Snoozer_Text_6:
# 318 "data/maps/HamHamClubhouse/scripts.pory"
	.string "Hamtaro$"

Clubhouse_Snoozer_Text_7:
# 319 "data/maps/HamHamClubhouse/scripts.pory"
	.string "DingBang!$"

Clubhouse_Snoozer_Text_8:
# 330 "data/maps/HamHamClubhouse/scripts.pory"
	.string "Huh? what's going on?\nWhy is it so noisy?$"

Clubhouse_Snoozer_Text_9:
# 335 "data/maps/HamHamClubhouse/scripts.pory"
	.string "Oh, I'm in the clubhouse now...$"
