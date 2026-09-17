HamHamClubhouse_Ending_MapScripts::
# 2 "data/maps/HamHamClubhouse_Ending/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, HamHamClubhouse_Ending_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

HamHamClubhouse_Ending_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/HamHamClubhouse_Ending/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, EndingCutscene
	.2byte 0


EndingCutscene::
# 8 "data/maps/HamHamClubhouse_Ending/scripts.pory"
	setflag VAR_TEMP_0
# 9 "data/maps/HamHamClubhouse_Ending/scripts.pory"
	lockall
# 10 "data/maps/HamHamClubhouse_Ending/scripts.pory"
	createfieldmugshot MUGSHOT_BOSS, EMOTE_NORMAL
# 11 "data/maps/HamHamClubhouse_Ending/scripts.pory"
	setspeaker EndingCutscene_Text_0
# 12 "data/maps/HamHamClubhouse_Ending/scripts.pory"
	msgbox EndingCutscene_Text_1
# 13 "data/maps/HamHamClubhouse_Ending/scripts.pory"
	applymovement LOCALID_PASHMINA_ENDING, EndingCutscene_Movement_0
# 14 "data/maps/HamHamClubhouse_Ending/scripts.pory"
	setspeaker EndingCutscene_Text_2
# 15 "data/maps/HamHamClubhouse_Ending/scripts.pory"
	createfieldmugshot MUGSHOT_PASHMINA, EMOTE_NORMAL
# 16 "data/maps/HamHamClubhouse_Ending/scripts.pory"
	msgbox EndingCutscene_Text_3
# 17 "data/maps/HamHamClubhouse_Ending/scripts.pory"
	applymovement LOCALID_PASHMINA_ENDING, EndingCutscene_Movement_1
# 18 "data/maps/HamHamClubhouse_Ending/scripts.pory"
	createfieldmugshot MUGSHOT_BOSS, EMOTE_NORMAL
# 19 "data/maps/HamHamClubhouse_Ending/scripts.pory"
	setspeaker EndingCutscene_Text_0
# 20 "data/maps/HamHamClubhouse_Ending/scripts.pory"
	msgbox EndingCutscene_Text_4
# 21 "data/maps/HamHamClubhouse_Ending/scripts.pory"
	applymovement LOCALID_BOSS_ENDING, EndingCutscene_Movement_2
# 22 "data/maps/HamHamClubhouse_Ending/scripts.pory"
	applymovement LOCALID_PLAYER, EndingCutscene_Movement_3
# 23 "data/maps/HamHamClubhouse_Ending/scripts.pory"
	waitmovement LOCALID_BOSS
# 24 "data/maps/HamHamClubhouse_Ending/scripts.pory"
	playse SE_EXIT
# 25 "data/maps/HamHamClubhouse_Ending/scripts.pory"
	removeobject LOCALID_BOSS
# 26 "data/maps/HamHamClubhouse_Ending/scripts.pory"
	waitse
# 27 "data/maps/HamHamClubhouse_Ending/scripts.pory"
	waitmovement LOCALID_PLAYER
# 28 "data/maps/HamHamClubhouse_Ending/scripts.pory"
	warp MAP_HAM_BATTLE_ROOM, 0
# 29 "data/maps/HamHamClubhouse_Ending/scripts.pory"
	waitstate
# 30 "data/maps/HamHamClubhouse_Ending/scripts.pory"
	releaseall
	return


# 13 "data/maps/HamHamClubhouse_Ending/scripts.pory"
EndingCutscene_Movement_0:
# 13 "data/maps/HamHamClubhouse_Ending/scripts.pory"
	walk_up
	step_end

# 17 "data/maps/HamHamClubhouse_Ending/scripts.pory"
EndingCutscene_Movement_1:
# 17 "data/maps/HamHamClubhouse_Ending/scripts.pory"
	lock_facing_direction
# 17 "data/maps/HamHamClubhouse_Ending/scripts.pory"
	walk_down
	step_end

# 21 "data/maps/HamHamClubhouse_Ending/scripts.pory"
EndingCutscene_Movement_2:
# 21 "data/maps/HamHamClubhouse_Ending/scripts.pory"
	walk_left
# 21 "data/maps/HamHamClubhouse_Ending/scripts.pory"
	walk_left
# 21 "data/maps/HamHamClubhouse_Ending/scripts.pory"
	walk_left
# 21 "data/maps/HamHamClubhouse_Ending/scripts.pory"
	walk_left
# 21 "data/maps/HamHamClubhouse_Ending/scripts.pory"
	walk_left
# 21 "data/maps/HamHamClubhouse_Ending/scripts.pory"
	walk_left
# 21 "data/maps/HamHamClubhouse_Ending/scripts.pory"
	walk_left
# 21 "data/maps/HamHamClubhouse_Ending/scripts.pory"
	walk_left
# 21 "data/maps/HamHamClubhouse_Ending/scripts.pory"
	walk_left
# 21 "data/maps/HamHamClubhouse_Ending/scripts.pory"
	delay_16
# 21 "data/maps/HamHamClubhouse_Ending/scripts.pory"
	delay_16
# 21 "data/maps/HamHamClubhouse_Ending/scripts.pory"
	walk_up
# 21 "data/maps/HamHamClubhouse_Ending/scripts.pory"
	walk_up
# 21 "data/maps/HamHamClubhouse_Ending/scripts.pory"
	walk_up
	step_end

# 22 "data/maps/HamHamClubhouse_Ending/scripts.pory"
EndingCutscene_Movement_3:
# 22 "data/maps/HamHamClubhouse_Ending/scripts.pory"
	walk_down
# 22 "data/maps/HamHamClubhouse_Ending/scripts.pory"
	walk_down
# 22 "data/maps/HamHamClubhouse_Ending/scripts.pory"
	walk_left
# 22 "data/maps/HamHamClubhouse_Ending/scripts.pory"
	walk_left
# 22 "data/maps/HamHamClubhouse_Ending/scripts.pory"
	walk_left
# 22 "data/maps/HamHamClubhouse_Ending/scripts.pory"
	walk_left
# 22 "data/maps/HamHamClubhouse_Ending/scripts.pory"
	walk_left
# 22 "data/maps/HamHamClubhouse_Ending/scripts.pory"
	walk_left
# 22 "data/maps/HamHamClubhouse_Ending/scripts.pory"
	walk_left
# 22 "data/maps/HamHamClubhouse_Ending/scripts.pory"
	walk_left
# 22 "data/maps/HamHamClubhouse_Ending/scripts.pory"
	walk_left
# 22 "data/maps/HamHamClubhouse_Ending/scripts.pory"
	walk_up
# 22 "data/maps/HamHamClubhouse_Ending/scripts.pory"
	walk_up
# 22 "data/maps/HamHamClubhouse_Ending/scripts.pory"
	walk_up
	step_end

EndingCutscene_Text_0:
# 11 "data/maps/HamHamClubhouse_Ending/scripts.pory"
	.string "Boss$"

EndingCutscene_Text_1:
# 12 "data/maps/HamHamClubhouse_Ending/scripts.pory"
	.string "HAMTARO! You're back!\pThanks to all your hard work, everyone\nis back at the clubhouse and we have\lour new arena built!$"

EndingCutscene_Text_2:
# 14 "data/maps/HamHamClubhouse_Ending/scripts.pory"
	.string "Pashmina$"

EndingCutscene_Text_3:
# 16 "data/maps/HamHamClubhouse_Ending/scripts.pory"
	.string "That's right HAMTARO, this was all\npossible thanks to you!$"

EndingCutscene_Text_4:
# 20 "data/maps/HamHamClubhouse_Ending/scripts.pory"
	.string "Come on HAMTARO, let's go look at\nPANDA's handiwork!$"
