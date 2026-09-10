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


ClubhouseBoss::
# 27 "data/maps/HamHamClubhouse/scripts.pory"
	lock
# 28 "data/maps/HamHamClubhouse/scripts.pory"
	faceplayer
# 29 "data/maps/HamHamClubhouse/scripts.pory"
	createfieldmugshot MUGSHOT_BOSS, EMOTE_NORMAL
# 30 "data/maps/HamHamClubhouse/scripts.pory"
	msgbox ClubhouseBoss_Text_0
# 31 "data/maps/HamHamClubhouse/scripts.pory"
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

Clubhouse_IntroCutscene_Text_0:
# 20 "data/maps/HamHamClubhouse/scripts.pory"
	.string "Boss$"

Clubhouse_IntroCutscene_Text_1:
# 21 "data/maps/HamHamClubhouse/scripts.pory"
	.string "Alright! I think everyone's playing\nin Acorn Park as usual, so you should\llook for them there and see if you can\llearn somet new Hamchat while you're\lat it!$"

ClubhouseBoss_Text_0:
# 30 "data/maps/HamHamClubhouse/scripts.pory"
	.string "Hamtaro! You're late! Everyone else has\n"
	.string "already left!$"
