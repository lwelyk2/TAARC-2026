IntroRoom_MapScripts::
# 2 "data/maps/IntroRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, IntroRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

IntroRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/IntroRoom/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, IntroCutscene
	.2byte 0


IntroCutscene::
# 8 "data/maps/IntroRoom/scripts.pory"
	lockall
# 9 "data/maps/IntroRoom/scripts.pory"
	applymovement LOCALID_PLAYER, IntroCutscene_Movement_0
# 12 "data/maps/IntroRoom/scripts.pory"
	setvar VAR_TEMP_0, 1
# 13 "data/maps/IntroRoom/scripts.pory"
	applymovement LOCALID_PLAYER, IntroCutscene_Movement_1
# 14 "data/maps/IntroRoom/scripts.pory"
	waitmovement LOCALID_PLAYER
# 15 "data/maps/IntroRoom/scripts.pory"
	createfieldmugshot MUGSHOT_BOSS, EMOTE_NORMAL
# 16 "data/maps/IntroRoom/scripts.pory"
	setspeaker IntroCutscene_Text_0
# 17 "data/maps/IntroRoom/scripts.pory"
	msgbox IntroCutscene_Text_1
# 18 "data/maps/IntroRoom/scripts.pory"
	applymovement LOCALID_PLAYER, IntroCutscene_Movement_2
# 19 "data/maps/IntroRoom/scripts.pory"
	waitmovement LOCALID_PLAYER
# 20 "data/maps/IntroRoom/scripts.pory"
	createfieldmugshot MUGSHOT_BOSS, EMOTE_NORMAL
# 21 "data/maps/IntroRoom/scripts.pory"
	setspeaker IntroCutscene_Text_0
# 22 "data/maps/IntroRoom/scripts.pory"
	msgbox IntroCutscene_Text_2
# 23 "data/maps/IntroRoom/scripts.pory"
	applymovement LOCALID_PLAYER, IntroCutscene_Movement_2
# 24 "data/maps/IntroRoom/scripts.pory"
	waitmovement LOCALID_PLAYER
# 25 "data/maps/IntroRoom/scripts.pory"
	applymovement LOCALID_BOSS, IntroCutscene_Movement_3
# 37 "data/maps/IntroRoom/scripts.pory"
	waitmovement LOCALID_BOSS
# 38 "data/maps/IntroRoom/scripts.pory"
	applymovement LOCALID_PLAYER, IntroCutscene_Movement_2
# 39 "data/maps/IntroRoom/scripts.pory"
	waitmovement LOCALID_PLAYER
# 40 "data/maps/IntroRoom/scripts.pory"
	createfieldmugshot MUGSHOT_BOSS, EMOTE_NORMAL
# 41 "data/maps/IntroRoom/scripts.pory"
	setspeaker IntroCutscene_Text_0
# 42 "data/maps/IntroRoom/scripts.pory"
	message IntroCutscene_Text_3
# 43 "data/maps/IntroRoom/scripts.pory"
	applymovement LOCALID_BOSS, IntroCutscene_Movement_4
# 44 "data/maps/IntroRoom/scripts.pory"
	waitmessage
# 45 "data/maps/IntroRoom/scripts.pory"
	waitbuttonpress
# 46 "data/maps/IntroRoom/scripts.pory"
	closemessage
# 47 "data/maps/IntroRoom/scripts.pory"
	applymovement LOCALID_PLAYER, IntroCutscene_Movement_5
	end


# 9 "data/maps/IntroRoom/scripts.pory"
IntroCutscene_Movement_0:
# 10 "data/maps/IntroRoom/scripts.pory"
	face_up
	step_end

# 13 "data/maps/IntroRoom/scripts.pory"
IntroCutscene_Movement_1:
# 13 "data/maps/IntroRoom/scripts.pory"
	emote_double_exclamation_mark
# 13 "data/maps/IntroRoom/scripts.pory"
	delay_16
# 13 "data/maps/IntroRoom/scripts.pory"
	delay_16
	step_end

# 18 "data/maps/IntroRoom/scripts.pory"
IntroCutscene_Movement_2:
# 18 "data/maps/IntroRoom/scripts.pory"
	emote_double_exclamation_mark
# 18 "data/maps/IntroRoom/scripts.pory"
	delay_16
	step_end

# 25 "data/maps/IntroRoom/scripts.pory"
IntroCutscene_Movement_3:
# 26 "data/maps/IntroRoom/scripts.pory"
	walk_left
# 27 "data/maps/IntroRoom/scripts.pory"
	walk_left
# 28 "data/maps/IntroRoom/scripts.pory"
	walk_down
# 29 "data/maps/IntroRoom/scripts.pory"
	walk_down
# 30 "data/maps/IntroRoom/scripts.pory"
	walk_down
# 31 "data/maps/IntroRoom/scripts.pory"
	walk_down
# 32 "data/maps/IntroRoom/scripts.pory"
	walk_down
# 33 "data/maps/IntroRoom/scripts.pory"
	walk_right
# 34 "data/maps/IntroRoom/scripts.pory"
	walk_right
# 35 "data/maps/IntroRoom/scripts.pory"
	walk_up
	step_end

# 43 "data/maps/IntroRoom/scripts.pory"
IntroCutscene_Movement_4:
# 43 "data/maps/IntroRoom/scripts.pory"
	tackq
	step_end

# 47 "data/maps/IntroRoom/scripts.pory"
IntroCutscene_Movement_5:
# 48 "data/maps/IntroRoom/scripts.pory"
	emote_exclamation_mark
# 49 "data/maps/IntroRoom/scripts.pory"
	delay_16
# 50 "data/maps/IntroRoom/scripts.pory"
	face_down
	step_end

IntroCutscene_Text_0:
# 16 "data/maps/IntroRoom/scripts.pory"
	.string "Boss$"

IntroCutscene_Text_1:
# 17 "data/maps/IntroRoom/scripts.pory"
	.string "Hey, Hamtaro! Wake up already!$"

IntroCutscene_Text_2:
# 22 "data/maps/IntroRoom/scripts.pory"
	.string "Hamtaro! I need your help!$"

IntroCutscene_Text_3:
# 42 "data/maps/IntroRoom/scripts.pory"
	.string "{COLOR RED}TACK-Q!$"
