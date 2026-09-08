IntroRoom_MapScripts::
# 2 "data/maps/IntroRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, IntroRoom_TurnHamtaro
# 3 "data/maps/IntroRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, IntroRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

IntroRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 4 "data/maps/IntroRoom/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, IntroCutscene
	.2byte 0


IntroRoom_TurnHamtaro::
# 9 "data/maps/IntroRoom/scripts.pory"
	applymovement LOCALID_PLAYER, IntroRoom_TurnHamtaro_Movement_0
	end


IntroCutscene::
# 15 "data/maps/IntroRoom/scripts.pory"
	lockall
# 16 "data/maps/IntroRoom/scripts.pory"
	applymovement LOCALID_PLAYER, IntroCutscene_Movement_0
# 20 "data/maps/IntroRoom/scripts.pory"
	createfieldmugshot MUGSHOT_BOSS, EMOTE_NORMAL
# 21 "data/maps/IntroRoom/scripts.pory"
	setspeaker IntroCutscene_Text_0
# 22 "data/maps/IntroRoom/scripts.pory"
	message IntroCutscene_Text_1
# 23 "data/maps/IntroRoom/scripts.pory"
	applymovement LOCALID_PLAYER, IntroCutscene_Movement_1
# 24 "data/maps/IntroRoom/scripts.pory"
	applymovement LOCALID_BOSS, IntroCutscene_Movement_2
# 28 "data/maps/IntroRoom/scripts.pory"
	waitmovement
# 29 "data/maps/IntroRoom/scripts.pory"
	waitbuttonpress
# 30 "data/maps/IntroRoom/scripts.pory"
	message IntroCutscene_Text_2
# 31 "data/maps/IntroRoom/scripts.pory"
	applymovement LOCALID_PLAYER, IntroCutscene_Movement_1
# 32 "data/maps/IntroRoom/scripts.pory"
	applymovement LOCALID_BOSS, IntroCutscene_Movement_3
# 38 "data/maps/IntroRoom/scripts.pory"
	waitmovement
# 39 "data/maps/IntroRoom/scripts.pory"
	waitbuttonpress
# 40 "data/maps/IntroRoom/scripts.pory"
	message IntroCutscene_Text_3
# 41 "data/maps/IntroRoom/scripts.pory"
	applymovement LOCALID_PLAYER, IntroCutscene_Movement_1
# 42 "data/maps/IntroRoom/scripts.pory"
	applymovement LOCALID_BOSS, IntroCutscene_Movement_4
# 45 "data/maps/IntroRoom/scripts.pory"
	waitmovement
# 46 "data/maps/IntroRoom/scripts.pory"
	waitbuttonpress
# 47 "data/maps/IntroRoom/scripts.pory"
	message IntroCutscene_Text_4
# 48 "data/maps/IntroRoom/scripts.pory"
	applymovement LOCALID_PLAYER, IntroCutscene_Movement_1
# 49 "data/maps/IntroRoom/scripts.pory"
	applymovement LOCALID_BOSS, IntroCutscene_Movement_5
# 54 "data/maps/IntroRoom/scripts.pory"
	waitmovement
# 55 "data/maps/IntroRoom/scripts.pory"
	waitbuttonpress
# 56 "data/maps/IntroRoom/scripts.pory"
	message IntroCutscene_Text_5
# 57 "data/maps/IntroRoom/scripts.pory"
	applymovement LOCALID_PLAYER, IntroCutscene_Movement_6
# 58 "data/maps/IntroRoom/scripts.pory"
	waitmovement LOCALID_PLAYER
# 59 "data/maps/IntroRoom/scripts.pory"
	createfieldmugshot MUGSHOT_BOSS, EMOTE_NORMAL
# 60 "data/maps/IntroRoom/scripts.pory"
	applymovement LOCALID_BOSS, IntroCutscene_Movement_7
# 71 "data/maps/IntroRoom/scripts.pory"
	waitmovement LOCALID_BOSS
# 72 "data/maps/IntroRoom/scripts.pory"
	waitmessage
# 73 "data/maps/IntroRoom/scripts.pory"
	waitbuttonpress
# 74 "data/maps/IntroRoom/scripts.pory"
	applymovement LOCALID_PLAYER, IntroCutscene_Movement_6
# 75 "data/maps/IntroRoom/scripts.pory"
	waitmovement LOCALID_PLAYER
# 76 "data/maps/IntroRoom/scripts.pory"
	createfieldmugshot MUGSHOT_BOSS, EMOTE_NORMAL
# 77 "data/maps/IntroRoom/scripts.pory"
	setspeaker IntroCutscene_Text_0
# 78 "data/maps/IntroRoom/scripts.pory"
	message IntroCutscene_Text_6
# 79 "data/maps/IntroRoom/scripts.pory"
	applymovement LOCALID_BOSS, IntroCutscene_Movement_8
# 80 "data/maps/IntroRoom/scripts.pory"
	playse SE_M_ROCK_THROW
# 81 "data/maps/IntroRoom/scripts.pory"
	waitmovement
# 82 "data/maps/IntroRoom/scripts.pory"
	waitse
# 83 "data/maps/IntroRoom/scripts.pory"
	waitmessage
# 84 "data/maps/IntroRoom/scripts.pory"
	applymovement LOCALID_PLAYER, IntroCutscene_Movement_9
# 89 "data/maps/IntroRoom/scripts.pory"
	applymovement LOCALID_BOSS, IntroCutscene_Movement_10
# 90 "data/maps/IntroRoom/scripts.pory"
	waitmovement LOCALID_BOSS
# 91 "data/maps/IntroRoom/scripts.pory"
	turnobject LOCALID_BOSS, DIR_NORTH
# 92 "data/maps/IntroRoom/scripts.pory"
	waitbuttonpress
# 93 "data/maps/IntroRoom/scripts.pory"
	createfieldmugshot MUGSHOT_BOSS, EMOTE_NORMAL
# 94 "data/maps/IntroRoom/scripts.pory"
	setspeaker IntroCutscene_Text_0
# 95 "data/maps/IntroRoom/scripts.pory"
	message IntroCutscene_Text_7
# 96 "data/maps/IntroRoom/scripts.pory"
	applymovement LOCALID_BOSS, IntroCutscene_Movement_11
# 108 "data/maps/IntroRoom/scripts.pory"
	waitmovement LOCALID_BOSS
# 109 "data/maps/IntroRoom/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 110 "data/maps/IntroRoom/scripts.pory"
	waitmessage
# 111 "data/maps/IntroRoom/scripts.pory"
	waitbuttonpress
# 112 "data/maps/IntroRoom/scripts.pory"
	givemon SPECIES_HAMTARO, 5, ITEM_SITRUS_BERRY
# 113 "data/maps/IntroRoom/scripts.pory"
	additem ITEM_TM_TACKLE, 1
# 114 "data/maps/IntroRoom/scripts.pory"
	additem ITEM_TM_DIG, 1
# 115 "data/maps/IntroRoom/scripts.pory"
	additem ITEM_TM_SCRATCH, 1
# 116 "data/maps/IntroRoom/scripts.pory"
	message IntroCutscene_Text_8
# 117 "data/maps/IntroRoom/scripts.pory"
	setflag FLAG_USED_ROOM_1_KEY
# 118 "data/maps/IntroRoom/scripts.pory"
	waitmessage
# 119 "data/maps/IntroRoom/scripts.pory"
	waitbuttonpress
# 120 "data/maps/IntroRoom/scripts.pory"
	closemessage
# 121 "data/maps/IntroRoom/scripts.pory"
	setflag FLAG_NO_WHITEOUT
# 122 "data/maps/IntroRoom/scripts.pory"
	setwildbattle SPECIES_BOSS, 5
# 123 "data/maps/IntroRoom/scripts.pory"
	dowildbattle
# 124 "data/maps/IntroRoom/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 126 "data/maps/IntroRoom/scripts.pory"
	switch VAR_RESULT
# 127 "data/maps/IntroRoom/scripts.pory"
	case B_OUTCOME_WON, IntroCutscene_3
# 130 "data/maps/IntroRoom/scripts.pory"
	case B_OUTCOME_RAN, IntroCutscene_4
# 133 "data/maps/IntroRoom/scripts.pory"
	case B_OUTCOME_PLAYER_TELEPORTED, IntroCutscene_5
	end

IntroCutscene_3:
# 128 "data/maps/IntroRoom/scripts.pory"
	msgbox IntroCutscene_Text_9
	end

IntroCutscene_4:
# 131 "data/maps/IntroRoom/scripts.pory"
	msgbox IntroCutscene_Text_10
	end

IntroCutscene_5:
# 134 "data/maps/IntroRoom/scripts.pory"
	msgbox IntroCutscene_Text_10
	end


# 9 "data/maps/IntroRoom/scripts.pory"
IntroRoom_TurnHamtaro_Movement_0:
# 10 "data/maps/IntroRoom/scripts.pory"
	face_up
	step_end

# 16 "data/maps/IntroRoom/scripts.pory"
IntroCutscene_Movement_0:
# 17 "data/maps/IntroRoom/scripts.pory"
	face_up
# 18 "data/maps/IntroRoom/scripts.pory"
	emote_double_exclamation_mark
	step_end

# 23 "data/maps/IntroRoom/scripts.pory"
IntroCutscene_Movement_1:
# 23 "data/maps/IntroRoom/scripts.pory"
	emote_double_exclamation_mark
	step_end

# 24 "data/maps/IntroRoom/scripts.pory"
IntroCutscene_Movement_2:
# 25 "data/maps/IntroRoom/scripts.pory"
	walk_left
# 26 "data/maps/IntroRoom/scripts.pory"
	walk_left
	step_end

# 32 "data/maps/IntroRoom/scripts.pory"
IntroCutscene_Movement_3:
# 33 "data/maps/IntroRoom/scripts.pory"
	walk_right
# 34 "data/maps/IntroRoom/scripts.pory"
	walk_right
# 35 "data/maps/IntroRoom/scripts.pory"
	walk_right
# 36 "data/maps/IntroRoom/scripts.pory"
	walk_right
	step_end

# 42 "data/maps/IntroRoom/scripts.pory"
IntroCutscene_Movement_4:
# 43 "data/maps/IntroRoom/scripts.pory"
	face_down
	step_end

# 49 "data/maps/IntroRoom/scripts.pory"
IntroCutscene_Movement_5:
# 50 "data/maps/IntroRoom/scripts.pory"
	walk_left
# 51 "data/maps/IntroRoom/scripts.pory"
	walk_left
# 52 "data/maps/IntroRoom/scripts.pory"
	walk_down
	step_end

# 57 "data/maps/IntroRoom/scripts.pory"
IntroCutscene_Movement_6:
# 57 "data/maps/IntroRoom/scripts.pory"
	emote_double_exclamation_mark
# 57 "data/maps/IntroRoom/scripts.pory"
	delay_16
	step_end

# 60 "data/maps/IntroRoom/scripts.pory"
IntroCutscene_Movement_7:
# 61 "data/maps/IntroRoom/scripts.pory"
	walk_left
# 62 "data/maps/IntroRoom/scripts.pory"
	walk_left
# 63 "data/maps/IntroRoom/scripts.pory"
	walk_down
# 64 "data/maps/IntroRoom/scripts.pory"
	walk_down
# 65 "data/maps/IntroRoom/scripts.pory"
	walk_down
# 66 "data/maps/IntroRoom/scripts.pory"
	walk_down
# 67 "data/maps/IntroRoom/scripts.pory"
	walk_right
# 68 "data/maps/IntroRoom/scripts.pory"
	walk_right
# 69 "data/maps/IntroRoom/scripts.pory"
	walk_up
	step_end

# 79 "data/maps/IntroRoom/scripts.pory"
IntroCutscene_Movement_8:
# 79 "data/maps/IntroRoom/scripts.pory"
	tackq
# 79 "data/maps/IntroRoom/scripts.pory"
	delay_16
	step_end

# 84 "data/maps/IntroRoom/scripts.pory"
IntroCutscene_Movement_9:
# 85 "data/maps/IntroRoom/scripts.pory"
	emote_exclamation_mark
# 86 "data/maps/IntroRoom/scripts.pory"
	delay_16
# 87 "data/maps/IntroRoom/scripts.pory"
	face_down
	step_end

# 89 "data/maps/IntroRoom/scripts.pory"
IntroCutscene_Movement_10:
# 89 "data/maps/IntroRoom/scripts.pory"
	walk_down
	step_end

# 96 "data/maps/IntroRoom/scripts.pory"
IntroCutscene_Movement_11:
# 97 "data/maps/IntroRoom/scripts.pory"
	walk_left
# 98 "data/maps/IntroRoom/scripts.pory"
	walk_left
# 99 "data/maps/IntroRoom/scripts.pory"
	walk_up
# 100 "data/maps/IntroRoom/scripts.pory"
	walk_up
# 101 "data/maps/IntroRoom/scripts.pory"
	walk_up
# 102 "data/maps/IntroRoom/scripts.pory"
	walk_up
# 103 "data/maps/IntroRoom/scripts.pory"
	walk_up
# 104 "data/maps/IntroRoom/scripts.pory"
	walk_right
# 105 "data/maps/IntroRoom/scripts.pory"
	walk_right
# 106 "data/maps/IntroRoom/scripts.pory"
	walk_down
	step_end

IntroCutscene_Text_0:
# 21 "data/maps/IntroRoom/scripts.pory"
	.string "Boss$"

IntroCutscene_Text_1:
# 22 "data/maps/IntroRoom/scripts.pory"
	.string "... and the dance parties just aren't\nas popular anymore.$"

IntroCutscene_Text_2:
# 30 "data/maps/IntroRoom/scripts.pory"
	.string "So, I got to thinking, Ham-chat's still\ncool, but how else can we use it?$"

IntroCutscene_Text_3:
# 40 "data/maps/IntroRoom/scripts.pory"
	.string "So that's when I...$"

IntroCutscene_Text_4:
# 47 "data/maps/IntroRoom/scripts.pory"
	.string "...wait...$"

IntroCutscene_Text_5:
# 56 "data/maps/IntroRoom/scripts.pory"
	.string "Hey, Hamtaro! Stop falling asleep while\nI'm talking to you!$"

IntroCutscene_Text_6:
# 78 "data/maps/IntroRoom/scripts.pory"
	.string "{COLOR RED}TACK-Q!$"

IntroCutscene_Text_7:
# 95 "data/maps/IntroRoom/scripts.pory"
	.string "Now, as I was saying, we need\nto find a new, more exciting way to\luse Ham-chat!$"

IntroCutscene_Text_8:
# 116 "data/maps/IntroRoom/scripts.pory"
	.string "It hit me when I saw a video game!\pWe'll have a tournament where strength,\ncunning, and knowledge of hamchat are the key to victory!\pHere, let's give it a shot!$"

IntroCutscene_Text_9:
# 128 "data/maps/IntroRoom/scripts.pory"
	.string "You won!$"

IntroCutscene_Text_10:
# 131 "data/maps/IntroRoom/scripts.pory"
	.string "You ran away!$"
