HamHamClubhouse_MapScripts::
# 2 "data/maps/HamHamClubhouse/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, HamHamClubhouse_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

HamHamClubhouse_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/HamHamClubhouse/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, Clubhouse_IntroCutscene
	.2byte 0


Clubhouse_IntroCutscene::
# 8 "data/maps/HamHamClubhouse/scripts.pory"
	goto_if_set FLAG_INTRO_DONE, Clubhouse_IntroCutscene_1
# 11 "data/maps/HamHamClubhouse/scripts.pory"
	setvar VAR_TEMP_0, 1
# 12 "data/maps/HamHamClubhouse/scripts.pory"
	setflag FLAG_INTRO_DONE
# 13 "data/maps/HamHamClubhouse/scripts.pory"
	lock
# 14 "data/maps/HamHamClubhouse/scripts.pory"
	applymovement LOCALID_BOSS_BLOCKING, Clubhouse_IntroCutscene_Movement_0
# 15 "data/maps/HamHamClubhouse/scripts.pory"
	applymovement LOCALID_PLAYER, Clubhouse_IntroCutscene_Movement_1
# 16 "data/maps/HamHamClubhouse/scripts.pory"
	turnobject LOCALID_BOSS, DIR_SOUTH
# 17 "data/maps/HamHamClubhouse/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 18 "data/maps/HamHamClubhouse/scripts.pory"
	waitmovement LOCALID_BOSS_BLOCKING
# 19 "data/maps/HamHamClubhouse/scripts.pory"
	createfieldmugshot MUGSHOT_BOSS, EMOTE_NORMAL
# 20 "data/maps/HamHamClubhouse/scripts.pory"
	setspeaker Clubhouse_IntroCutscene_Text_0
# 21 "data/maps/HamHamClubhouse/scripts.pory"
	msgbox Clubhouse_IntroCutscene_Text_1
# 22 "data/maps/HamHamClubhouse/scripts.pory"
	release
	return

Clubhouse_IntroCutscene_1:
# 9 "data/maps/HamHamClubhouse/scripts.pory"
	setvar VAR_TEMP_0, 1
	return


ClubhouseBlockingBoss::
# 27 "data/maps/HamHamClubhouse/scripts.pory"
	lock
# 28 "data/maps/HamHamClubhouse/scripts.pory"
	dynmultichoice 1, 1, FALSE, 4, 0, DYN_MULTICHOICE_CB_NONE, gText_Hamha, gText_TackQ, gText_DigDig
# 29 "data/maps/HamHamClubhouse/scripts.pory"
	switch VAR_RESULT
# 30 "data/maps/HamHamClubhouse/scripts.pory"
	case 0, ClubhouseBlockingBoss_3
# 53 "data/maps/HamHamClubhouse/scripts.pory"
	case 1, ClubhouseBlockingBoss_4
# 80 "data/maps/HamHamClubhouse/scripts.pory"
	case 2, ClubhouseBlockingBoss_5
ClubhouseBlockingBoss_1:
# 89 "data/maps/HamHamClubhouse/scripts.pory"
	createfieldmugshot MUGSHOT_BOSS, EMOTE_NORMAL
# 90 "data/maps/HamHamClubhouse/scripts.pory"
	setspeaker Clubhouse_IntroCutscene_Text_0
# 91 "data/maps/HamHamClubhouse/scripts.pory"
	msgbox ClubhouseBlockingBoss_Text_3
# 92 "data/maps/HamHamClubhouse/scripts.pory"
	release
	end

ClubhouseBlockingBoss_3:
# 31 "data/maps/HamHamClubhouse/scripts.pory"
	getobjectfacingdirection LOCALID_PLAYER, VAR_TEMP_1
# 32 "data/maps/HamHamClubhouse/scripts.pory"
	switch VAR_TEMP_1
# 33 "data/maps/HamHamClubhouse/scripts.pory"
	case DIR_EAST, ClubhouseBlockingBoss_8
# 40 "data/maps/HamHamClubhouse/scripts.pory"
	case DIR_WEST, ClubhouseBlockingBoss_9
ClubhouseBlockingBoss_6:
# 50 "data/maps/HamHamClubhouse/scripts.pory"
	call Common_EventScript_Hamha
# 51 "data/maps/HamHamClubhouse/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
	goto ClubhouseBlockingBoss_1

ClubhouseBlockingBoss_4:
# 54 "data/maps/HamHamClubhouse/scripts.pory"
	getobjectfacingdirection LOCALID_PLAYER, VAR_TEMP_1
# 55 "data/maps/HamHamClubhouse/scripts.pory"
	switch VAR_TEMP_1
# 56 "data/maps/HamHamClubhouse/scripts.pory"
	case DIR_EAST, ClubhouseBlockingBoss_13
# 63 "data/maps/HamHamClubhouse/scripts.pory"
	case DIR_WEST, ClubhouseBlockingBoss_14
ClubhouseBlockingBoss_11:
# 73 "data/maps/HamHamClubhouse/scripts.pory"
	call Common_EventScript_TackQ
# 74 "data/maps/HamHamClubhouse/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 75 "data/maps/HamHamClubhouse/scripts.pory"
	createfieldmugshot MUGSHOT_BOSS, EMOTE_NORMAL
# 76 "data/maps/HamHamClubhouse/scripts.pory"
	setspeaker Clubhouse_IntroCutscene_Text_0
# 77 "data/maps/HamHamClubhouse/scripts.pory"
	msgbox ClubhouseBlockingBoss_Text_0
# 78 "data/maps/HamHamClubhouse/scripts.pory"
	release
	end

ClubhouseBlockingBoss_5:
# 81 "data/maps/HamHamClubhouse/scripts.pory"
	call Common_EventScript_DigDig
# 82 "data/maps/HamHamClubhouse/scripts.pory"
	msgbox ClubhouseBlockingBoss_Text_1
# 83 "data/maps/HamHamClubhouse/scripts.pory"
	createfieldmugshot MUGSHOT_BOSS, EMOTE_NORMAL
# 84 "data/maps/HamHamClubhouse/scripts.pory"
	setspeaker Clubhouse_IntroCutscene_Text_0
# 85 "data/maps/HamHamClubhouse/scripts.pory"
	msgbox ClubhouseBlockingBoss_Text_2
# 86 "data/maps/HamHamClubhouse/scripts.pory"
	release
	end

ClubhouseBlockingBoss_8:
# 34 "data/maps/HamHamClubhouse/scripts.pory"
	applymovement LOCALID_PLAYER, ClubhouseBlockingBoss_Movement_0
# 39 "data/maps/HamHamClubhouse/scripts.pory"
	waitmovement
	goto ClubhouseBlockingBoss_6

ClubhouseBlockingBoss_9:
# 41 "data/maps/HamHamClubhouse/scripts.pory"
	applymovement LOCALID_PLAYER, ClubhouseBlockingBoss_Movement_1
# 46 "data/maps/HamHamClubhouse/scripts.pory"
	waitmovement
	goto ClubhouseBlockingBoss_6

ClubhouseBlockingBoss_13:
# 57 "data/maps/HamHamClubhouse/scripts.pory"
	applymovement LOCALID_PLAYER, ClubhouseBlockingBoss_Movement_0
# 62 "data/maps/HamHamClubhouse/scripts.pory"
	waitmovement
	goto ClubhouseBlockingBoss_11

ClubhouseBlockingBoss_14:
# 64 "data/maps/HamHamClubhouse/scripts.pory"
	applymovement LOCALID_PLAYER, ClubhouseBlockingBoss_Movement_1
# 69 "data/maps/HamHamClubhouse/scripts.pory"
	waitmovement
	goto ClubhouseBlockingBoss_11


ClubhouseBoss::
# 97 "data/maps/HamHamClubhouse/scripts.pory"
	lock
# 98 "data/maps/HamHamClubhouse/scripts.pory"
	faceplayer
# 99 "data/maps/HamHamClubhouse/scripts.pory"
	createfieldmugshot MUGSHOT_BOSS, EMOTE_NORMAL
# 100 "data/maps/HamHamClubhouse/scripts.pory"
	msgbox ClubhouseBoss_Text_0
# 101 "data/maps/HamHamClubhouse/scripts.pory"
	release
	end


# 14 "data/maps/HamHamClubhouse/scripts.pory"
Clubhouse_IntroCutscene_Movement_0:
# 14 "data/maps/HamHamClubhouse/scripts.pory"
	walk_down
# 14 "data/maps/HamHamClubhouse/scripts.pory"
	walk_right
# 14 "data/maps/HamHamClubhouse/scripts.pory"
	walk_right
# 14 "data/maps/HamHamClubhouse/scripts.pory"
	walk_left
# 14 "data/maps/HamHamClubhouse/scripts.pory"
	walk_left
# 14 "data/maps/HamHamClubhouse/scripts.pory"
	walk_up
# 14 "data/maps/HamHamClubhouse/scripts.pory"
	walk_up
# 14 "data/maps/HamHamClubhouse/scripts.pory"
	walk_down
	step_end

# 15 "data/maps/HamHamClubhouse/scripts.pory"
Clubhouse_IntroCutscene_Movement_1:
# 15 "data/maps/HamHamClubhouse/scripts.pory"
	delay_16
# 15 "data/maps/HamHamClubhouse/scripts.pory"
	walk_down
# 15 "data/maps/HamHamClubhouse/scripts.pory"
	walk_down
# 15 "data/maps/HamHamClubhouse/scripts.pory"
	face_up
	step_end

# 34 "data/maps/HamHamClubhouse/scripts.pory"
ClubhouseBlockingBoss_Movement_0:
# 35 "data/maps/HamHamClubhouse/scripts.pory"
	walk_down
# 36 "data/maps/HamHamClubhouse/scripts.pory"
	walk_right
# 37 "data/maps/HamHamClubhouse/scripts.pory"
	face_up
	step_end

# 41 "data/maps/HamHamClubhouse/scripts.pory"
ClubhouseBlockingBoss_Movement_1:
# 42 "data/maps/HamHamClubhouse/scripts.pory"
	walk_down
# 43 "data/maps/HamHamClubhouse/scripts.pory"
	walk_left
# 44 "data/maps/HamHamClubhouse/scripts.pory"
	face_up
	step_end

Clubhouse_IntroCutscene_Text_0:
# 20 "data/maps/HamHamClubhouse/scripts.pory"
	.string "Boss$"

Clubhouse_IntroCutscene_Text_1:
# 21 "data/maps/HamHamClubhouse/scripts.pory"
	.string "Alright! I think everyone's playing\nin Acorn Park as usual, so you should\llook for them there and see if you can\llearn somet new Hamchat while you're\lat it!$"

ClubhouseBlockingBoss_Text_0:
# 77 "data/maps/HamHamClubhouse/scripts.pory"
	.string "Hey! We're not doing a battle right now!\pDon't {COLOR RED}TACK-Q{COLOR DARK_GRAY} me!$"

ClubhouseBlockingBoss_Text_1:
# 82 "data/maps/HamHamClubhouse/scripts.pory"
	.string "Nothing there...$"

ClubhouseBlockingBoss_Text_2:
# 85 "data/maps/HamHamClubhouse/scripts.pory"
	.string "I appreciate the enthusiasm Hamtaro,\nbut let's let PANDA do all the\lrenovations.$"

ClubhouseBlockingBoss_Text_3:
# 91 "data/maps/HamHamClubhouse/scripts.pory"
	.string "Hamtaro, keep looking for everyone,\nit's no fun without the whole gang!$"

ClubhouseBoss_Text_0:
# 100 "data/maps/HamHamClubhouse/scripts.pory"
	.string "Hamtaro! You're late! Everyone else has\n"
	.string "already left!$"
