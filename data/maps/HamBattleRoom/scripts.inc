HamBattleRoom_MapScripts::
# 2 "data/maps/HamBattleRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, HamBattleRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

HamBattleRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/HamBattleRoom/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, BattleRoomEndingCutscene
	.2byte 0


BattleRoomEndingCutscene::
# 8 "data/maps/HamBattleRoom/scripts.pory"
	setvar VAR_TEMP_0, 1
# 9 "data/maps/HamBattleRoom/scripts.pory"
	goto_if_set FLAG_BEAT_GAME, BattleRoomEndingCutscene_2
# 12 "data/maps/HamBattleRoom/scripts.pory"
	createfieldmugshot MUGSHOT_BOSS, EMOTE_NORMAL
# 13 "data/maps/HamBattleRoom/scripts.pory"
	setspeaker BattleRoomEndingCutscene_Text_0
# 14 "data/maps/HamBattleRoom/scripts.pory"
	msgbox BattleRoomEndingCutscene_Text_1
# 15 "data/maps/HamBattleRoom/scripts.pory"
	applymovement LOCALID_BOSS_BATTLEROOM, BattleRoomEndingCutscene_Movement_0
# 16 "data/maps/HamBattleRoom/scripts.pory"
	applymovement LOCALID_PLAYER, BattleRoomEndingCutscene_Movement_0
# 17 "data/maps/HamBattleRoom/scripts.pory"
	waitmovement
# 18 "data/maps/HamBattleRoom/scripts.pory"
	createfieldmugshot MUGSHOT_BOSS, EMOTE_NORMAL
# 19 "data/maps/HamBattleRoom/scripts.pory"
	setspeaker BattleRoomEndingCutscene_Text_0
# 20 "data/maps/HamBattleRoom/scripts.pory"
	msgbox BattleRoomEndingCutscene_Text_2
# 21 "data/maps/HamBattleRoom/scripts.pory"
	applymovement LOCALID_SHOPKEEPER, BattleRoomEndingCutscene_Movement_1
# 22 "data/maps/HamBattleRoom/scripts.pory"
	waitmovement
# 23 "data/maps/HamBattleRoom/scripts.pory"
	createfieldmugshot MUGSHOT_SHOPKEEPER, EMOTE_NORMAL
# 24 "data/maps/HamBattleRoom/scripts.pory"
	setspeaker BattleRoomEndingCutscene_Text_3
# 25 "data/maps/HamBattleRoom/scripts.pory"
	msgbox BattleRoomEndingCutscene_Text_4
# 26 "data/maps/HamBattleRoom/scripts.pory"
	applymovement LOCALID_BOSS_BATTLEROOM, BattleRoomEndingCutscene_Movement_2
# 27 "data/maps/HamBattleRoom/scripts.pory"
	applymovement LOCALID_PLAYER, BattleRoomEndingCutscene_Movement_3
# 28 "data/maps/HamBattleRoom/scripts.pory"
	createfieldmugshot MUGSHOT_BOSS, EMOTE_NORMAL
# 29 "data/maps/HamBattleRoom/scripts.pory"
	setspeaker BattleRoomEndingCutscene_Text_0
# 30 "data/maps/HamBattleRoom/scripts.pory"
	msgbox BattleRoomEndingCutscene_Text_5
# 31 "data/maps/HamBattleRoom/scripts.pory"
	applymovement LOCALID_BOSS_BATTLEROOM, BattleRoomEndingCutscene_Movement_4
# 32 "data/maps/HamBattleRoom/scripts.pory"
	applymovement LOCALID_PLAYER, BattleRoomEndingCutscene_Movement_5
# 33 "data/maps/HamBattleRoom/scripts.pory"
	waitmovement
# 34 "data/maps/HamBattleRoom/scripts.pory"
	applymovement LOCALID_PLAYER, BattleRoomEndingCutscene_Movement_6
# 35 "data/maps/HamBattleRoom/scripts.pory"
	applymovement LOCALID_BOSS_BATTLEROOM, BattleRoomEndingCutscene_Movement_7
# 36 "data/maps/HamBattleRoom/scripts.pory"
	waitmovement
# 37 "data/maps/HamBattleRoom/scripts.pory"
	createfieldmugshot MUGSHOT_BOSS, EMOTE_NORMAL
# 38 "data/maps/HamBattleRoom/scripts.pory"
	setspeaker BattleRoomEndingCutscene_Text_0
# 39 "data/maps/HamBattleRoom/scripts.pory"
	msgbox BattleRoomEndingCutscene_Text_6
# 40 "data/maps/HamBattleRoom/scripts.pory"
	call Common_EventScript_YepP
# 41 "data/maps/HamBattleRoom/scripts.pory"
	setflag FLAG_BEAT_GAME
# 42 "data/maps/HamBattleRoom/scripts.pory"
	warp MAP_JUNGLE_GYM, 4, 8
# 43 "data/maps/HamBattleRoom/scripts.pory"
	waitstate
# 44 "data/maps/HamBattleRoom/scripts.pory"
	releaseall
	return

BattleRoomEndingCutscene_2:
	end


BattleRoom_ShopkeeperHam::
# 48 "data/maps/HamBattleRoom/scripts.pory"
	lock
# 49 "data/maps/HamBattleRoom/scripts.pory"
	dynmultipush gText_Hamha, 0
# 50 "data/maps/HamBattleRoom/scripts.pory"
	dynmultipush gText_HifHif, 1
# 51 "data/maps/HamBattleRoom/scripts.pory"
	dynmultipush gText_TackQ, 2
# 52 "data/maps/HamBattleRoom/scripts.pory"
	dynmultipush gText_DigDig, 3
	checkitem ITEM_TM_UPROAR
# 0 "data/maps/HamBattleRoom/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne BattleRoom_ShopkeeperHam_2
# 56 "data/maps/HamBattleRoom/scripts.pory"
	dynmultipush AcornParkSouthQuestionMarks, 4
BattleRoom_ShopkeeperHam_1:
# 58 "data/maps/HamBattleRoom/scripts.pory"
	dynmultistack 1, 1, FALSE, 5, 0, 0, DYN_MULTICHOICE_CB_NONE
	return

BattleRoom_ShopkeeperHam_2:
# 54 "data/maps/HamBattleRoom/scripts.pory"
	dynmultipush AcornParkSouthDingBang, 4
	goto BattleRoom_ShopkeeperHam_1


# 15 "data/maps/HamBattleRoom/scripts.pory"
BattleRoomEndingCutscene_Movement_0:
# 15 "data/maps/HamBattleRoom/scripts.pory"
	walk_left
# 15 "data/maps/HamBattleRoom/scripts.pory"
	walk_left
# 15 "data/maps/HamBattleRoom/scripts.pory"
	walk_left
# 15 "data/maps/HamBattleRoom/scripts.pory"
	walk_up
# 15 "data/maps/HamBattleRoom/scripts.pory"
	walk_up
	step_end

# 21 "data/maps/HamBattleRoom/scripts.pory"
BattleRoomEndingCutscene_Movement_1:
# 21 "data/maps/HamBattleRoom/scripts.pory"
	walk_in_place_up
	step_end

# 26 "data/maps/HamBattleRoom/scripts.pory"
BattleRoomEndingCutscene_Movement_2:
# 26 "data/maps/HamBattleRoom/scripts.pory"
	face_right
	step_end

# 27 "data/maps/HamBattleRoom/scripts.pory"
BattleRoomEndingCutscene_Movement_3:
# 27 "data/maps/HamBattleRoom/scripts.pory"
	face_left
	step_end

# 31 "data/maps/HamBattleRoom/scripts.pory"
BattleRoomEndingCutscene_Movement_4:
# 31 "data/maps/HamBattleRoom/scripts.pory"
	walk_down
# 31 "data/maps/HamBattleRoom/scripts.pory"
	walk_down
# 31 "data/maps/HamBattleRoom/scripts.pory"
	walk_down
# 31 "data/maps/HamBattleRoom/scripts.pory"
	walk_down
# 31 "data/maps/HamBattleRoom/scripts.pory"
	walk_down
# 31 "data/maps/HamBattleRoom/scripts.pory"
	walk_down
# 31 "data/maps/HamBattleRoom/scripts.pory"
	walk_down
# 31 "data/maps/HamBattleRoom/scripts.pory"
	walk_down
# 31 "data/maps/HamBattleRoom/scripts.pory"
	walk_down
# 31 "data/maps/HamBattleRoom/scripts.pory"
	walk_left
# 31 "data/maps/HamBattleRoom/scripts.pory"
	walk_left
# 31 "data/maps/HamBattleRoom/scripts.pory"
	walk_left
# 31 "data/maps/HamBattleRoom/scripts.pory"
	walk_left
# 31 "data/maps/HamBattleRoom/scripts.pory"
	walk_left
# 31 "data/maps/HamBattleRoom/scripts.pory"
	walk_left
# 31 "data/maps/HamBattleRoom/scripts.pory"
	walk_left
	step_end

# 32 "data/maps/HamBattleRoom/scripts.pory"
BattleRoomEndingCutscene_Movement_5:
# 32 "data/maps/HamBattleRoom/scripts.pory"
	walk_left
# 32 "data/maps/HamBattleRoom/scripts.pory"
	walk_left
# 32 "data/maps/HamBattleRoom/scripts.pory"
	walk_left
# 32 "data/maps/HamBattleRoom/scripts.pory"
	walk_down
# 32 "data/maps/HamBattleRoom/scripts.pory"
	walk_down
# 32 "data/maps/HamBattleRoom/scripts.pory"
	walk_down
# 32 "data/maps/HamBattleRoom/scripts.pory"
	walk_left
# 32 "data/maps/HamBattleRoom/scripts.pory"
	walk_left
# 32 "data/maps/HamBattleRoom/scripts.pory"
	walk_left
# 32 "data/maps/HamBattleRoom/scripts.pory"
	walk_left
# 32 "data/maps/HamBattleRoom/scripts.pory"
	walk_left
# 32 "data/maps/HamBattleRoom/scripts.pory"
	walk_left
# 32 "data/maps/HamBattleRoom/scripts.pory"
	walk_left
# 32 "data/maps/HamBattleRoom/scripts.pory"
	walk_left
# 32 "data/maps/HamBattleRoom/scripts.pory"
	walk_left
# 32 "data/maps/HamBattleRoom/scripts.pory"
	walk_left
# 32 "data/maps/HamBattleRoom/scripts.pory"
	walk_left
# 32 "data/maps/HamBattleRoom/scripts.pory"
	walk_left
# 32 "data/maps/HamBattleRoom/scripts.pory"
	walk_left
# 32 "data/maps/HamBattleRoom/scripts.pory"
	walk_left
# 32 "data/maps/HamBattleRoom/scripts.pory"
	walk_left
# 32 "data/maps/HamBattleRoom/scripts.pory"
	walk_left
# 32 "data/maps/HamBattleRoom/scripts.pory"
	walk_left
# 32 "data/maps/HamBattleRoom/scripts.pory"
	walk_left
# 32 "data/maps/HamBattleRoom/scripts.pory"
	walk_left
# 32 "data/maps/HamBattleRoom/scripts.pory"
	walk_left
# 32 "data/maps/HamBattleRoom/scripts.pory"
	walk_left
# 32 "data/maps/HamBattleRoom/scripts.pory"
	walk_down
# 32 "data/maps/HamBattleRoom/scripts.pory"
	walk_down
# 32 "data/maps/HamBattleRoom/scripts.pory"
	walk_down
# 32 "data/maps/HamBattleRoom/scripts.pory"
	walk_down
# 32 "data/maps/HamBattleRoom/scripts.pory"
	walk_down
	step_end

# 34 "data/maps/HamBattleRoom/scripts.pory"
BattleRoomEndingCutscene_Movement_6:
# 34 "data/maps/HamBattleRoom/scripts.pory"
	walk_right
# 34 "data/maps/HamBattleRoom/scripts.pory"
	walk_right
# 34 "data/maps/HamBattleRoom/scripts.pory"
	walk_right
# 34 "data/maps/HamBattleRoom/scripts.pory"
	walk_right
# 34 "data/maps/HamBattleRoom/scripts.pory"
	walk_right
# 34 "data/maps/HamBattleRoom/scripts.pory"
	walk_right
# 34 "data/maps/HamBattleRoom/scripts.pory"
	walk_right
	step_end

# 35 "data/maps/HamBattleRoom/scripts.pory"
BattleRoomEndingCutscene_Movement_7:
# 35 "data/maps/HamBattleRoom/scripts.pory"
	walk_left
# 35 "data/maps/HamBattleRoom/scripts.pory"
	walk_left
# 35 "data/maps/HamBattleRoom/scripts.pory"
	walk_left
# 35 "data/maps/HamBattleRoom/scripts.pory"
	walk_left
# 35 "data/maps/HamBattleRoom/scripts.pory"
	walk_left
# 35 "data/maps/HamBattleRoom/scripts.pory"
	walk_left
# 35 "data/maps/HamBattleRoom/scripts.pory"
	walk_left
	step_end

BattleRoomEndingCutscene_Text_0:
# 13 "data/maps/HamBattleRoom/scripts.pory"
	.string "Boss$"

BattleRoomEndingCutscene_Text_1:
# 14 "data/maps/HamBattleRoom/scripts.pory"
	.string "Here it is! The HamHam Arena!\pFollow me, I'll give you the grand tour!$"

BattleRoomEndingCutscene_Text_2:
# 20 "data/maps/HamBattleRoom/scripts.pory"
	.string "This guy here helps arrange the\nmatches between everyone, he's very\lfancy.$"

BattleRoomEndingCutscene_Text_3:
# 24 "data/maps/HamBattleRoom/scripts.pory"
	.string "Attendant$"

BattleRoomEndingCutscene_Text_4:
# 25 "data/maps/HamBattleRoom/scripts.pory"
	.string "You're too kind, sir.$"

BattleRoomEndingCutscene_Text_5:
# 30 "data/maps/HamBattleRoom/scripts.pory"
	.string "Alright, instead of going around and\nshowing you everything, let's test\l it out!\pThat's the best way to learn something!$"

BattleRoomEndingCutscene_Text_6:
# 39 "data/maps/HamBattleRoom/scripts.pory"
	.string "You ready to battle HAMTARO?$"
