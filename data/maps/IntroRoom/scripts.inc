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
	createfieldmugshot MUGSHOT_BOSS, EMOTE_NORMAL
# 57 "data/maps/IntroRoom/scripts.pory"
	setspeaker IntroCutscene_Text_0
# 58 "data/maps/IntroRoom/scripts.pory"
	message IntroCutscene_Text_5
# 59 "data/maps/IntroRoom/scripts.pory"
	applymovement LOCALID_PLAYER, IntroCutscene_Movement_6
# 60 "data/maps/IntroRoom/scripts.pory"
	waitmovement LOCALID_PLAYER
# 61 "data/maps/IntroRoom/scripts.pory"
	createfieldmugshot MUGSHOT_BOSS, EMOTE_NORMAL
# 62 "data/maps/IntroRoom/scripts.pory"
	applymovement LOCALID_BOSS, IntroCutscene_Movement_7
# 73 "data/maps/IntroRoom/scripts.pory"
	waitmovement LOCALID_BOSS
# 74 "data/maps/IntroRoom/scripts.pory"
	waitmessage
# 75 "data/maps/IntroRoom/scripts.pory"
	waitbuttonpress
# 76 "data/maps/IntroRoom/scripts.pory"
	applymovement LOCALID_PLAYER, IntroCutscene_Movement_6
# 77 "data/maps/IntroRoom/scripts.pory"
	waitmovement LOCALID_PLAYER
# 78 "data/maps/IntroRoom/scripts.pory"
	createfieldmugshot MUGSHOT_BOSS, EMOTE_NORMAL
# 79 "data/maps/IntroRoom/scripts.pory"
	setspeaker IntroCutscene_Text_0
# 80 "data/maps/IntroRoom/scripts.pory"
	applymovement LOCALID_BOSS, IntroCutscene_Movement_8
# 81 "data/maps/IntroRoom/scripts.pory"
	message IntroCutscene_Text_6
# 82 "data/maps/IntroRoom/scripts.pory"
	waitmovement
# 83 "data/maps/IntroRoom/scripts.pory"
	waitse
# 84 "data/maps/IntroRoom/scripts.pory"
	waitmessage
# 85 "data/maps/IntroRoom/scripts.pory"
	applymovement LOCALID_PLAYER, IntroCutscene_Movement_9
# 90 "data/maps/IntroRoom/scripts.pory"
	applymovement LOCALID_BOSS, IntroCutscene_Movement_10
# 91 "data/maps/IntroRoom/scripts.pory"
	waitmovement LOCALID_BOSS
# 92 "data/maps/IntroRoom/scripts.pory"
	turnobject LOCALID_BOSS, DIR_NORTH
# 93 "data/maps/IntroRoom/scripts.pory"
	waitbuttonpress
# 94 "data/maps/IntroRoom/scripts.pory"
	createfieldmugshot MUGSHOT_BOSS, EMOTE_NORMAL
# 95 "data/maps/IntroRoom/scripts.pory"
	setspeaker IntroCutscene_Text_0
# 96 "data/maps/IntroRoom/scripts.pory"
	message IntroCutscene_Text_7
# 97 "data/maps/IntroRoom/scripts.pory"
	applymovement LOCALID_BOSS, IntroCutscene_Movement_11
# 103 "data/maps/IntroRoom/scripts.pory"
	waitmovement LOCALID_BOSS
# 104 "data/maps/IntroRoom/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_WEST
# 105 "data/maps/IntroRoom/scripts.pory"
	applymovement LOCALID_BOSS, IntroCutscene_Movement_12
# 113 "data/maps/IntroRoom/scripts.pory"
	waitmovement LOCALID_BOSS
# 114 "data/maps/IntroRoom/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 115 "data/maps/IntroRoom/scripts.pory"
	waitmessage
# 116 "data/maps/IntroRoom/scripts.pory"
	waitbuttonpress
# 117 "data/maps/IntroRoom/scripts.pory"
	givemon SPECIES_HAMTARO, 5, ITEM_SITRUS_BERRY
# 118 "data/maps/IntroRoom/scripts.pory"
	message IntroCutscene_Text_8
# 119 "data/maps/IntroRoom/scripts.pory"
	setflag FLAG_USED_ROOM_1_KEY
# 120 "data/maps/IntroRoom/scripts.pory"
	waitmessage
# 121 "data/maps/IntroRoom/scripts.pory"
	waitbuttonpress
# 122 "data/maps/IntroRoom/scripts.pory"
	closemessage
# 123 "data/maps/IntroRoom/scripts.pory"
	call IntroBattleHandler
# 124 "data/maps/IntroRoom/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 125 "data/maps/IntroRoom/scripts.pory"
	createfieldmugshot MUGSHOT_BOSS, EMOTE_NORMAL
# 126 "data/maps/IntroRoom/scripts.pory"
	setspeaker IntroCutscene_Text_0
# 127 "data/maps/IntroRoom/scripts.pory"
	switch VAR_RESULT
# 128 "data/maps/IntroRoom/scripts.pory"
	case B_OUTCOME_WON, IntroCutscene_3
# 130 "data/maps/IntroRoom/scripts.pory"
	case B_OUTCOME_RAN, IntroCutscene_4
# 134 "data/maps/IntroRoom/scripts.pory"
	case B_OUTCOME_LOST, IntroCutscene_5
IntroCutscene_1:
# 138 "data/maps/IntroRoom/scripts.pory"
	message IntroCutscene_Text_12
# 139 "data/maps/IntroRoom/scripts.pory"
	waitmessage
# 140 "data/maps/IntroRoom/scripts.pory"
	waitbuttonpress
# 141 "data/maps/IntroRoom/scripts.pory"
	closemessage
# 142 "data/maps/IntroRoom/scripts.pory"
	applymovement LOCALID_BOSS, IntroCutscene_Movement_13
# 143 "data/maps/IntroRoom/scripts.pory"
	waitmovement
# 144 "data/maps/IntroRoom/scripts.pory"
	applymovement LOCALID_PLAYER, IntroCutscene_Movement_13
# 145 "data/maps/IntroRoom/scripts.pory"
	waitmovement
# 146 "data/maps/IntroRoom/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_SOUTH
# 147 "data/maps/IntroRoom/scripts.pory"
	additem ITEM_TM_TACKLE, 1
# 148 "data/maps/IntroRoom/scripts.pory"
	additem ITEM_TM_YAWN, 1
# 149 "data/maps/IntroRoom/scripts.pory"
	additem ITEM_TM_DIG, 1
# 150 "data/maps/IntroRoom/scripts.pory"
	message IntroCutscene_Text_13
# 151 "data/maps/IntroRoom/scripts.pory"
	waitse
# 152 "data/maps/IntroRoom/scripts.pory"
	waitmessage
# 153 "data/maps/IntroRoom/scripts.pory"
	waitbuttonpress
# 154 "data/maps/IntroRoom/scripts.pory"
	message IntroCutscene_Text_14
# 155 "data/maps/IntroRoom/scripts.pory"
	waitmessage
# 156 "data/maps/IntroRoom/scripts.pory"
	waitbuttonpress
# 157 "data/maps/IntroRoom/scripts.pory"
	closemessage
# 158 "data/maps/IntroRoom/scripts.pory"
	msgbox IntroCutscene_Text_15
# 159 "data/maps/IntroRoom/scripts.pory"
	applymovement LOCALID_PLAYER, IntroCutscene_Movement_14
# 160 "data/maps/IntroRoom/scripts.pory"
	waitmovement
	end

IntroCutscene_3:
# 129 "data/maps/IntroRoom/scripts.pory"
	msgbox IntroCutscene_Text_9
	goto IntroCutscene_1

IntroCutscene_4:
# 131 "data/maps/IntroRoom/scripts.pory"
	msgbox IntroCutscene_Text_10
# 132 "data/maps/IntroRoom/scripts.pory"
	special HealPlayerParty
# 133 "data/maps/IntroRoom/scripts.pory"
	call IntroBattleHandler
	goto IntroCutscene_1

IntroCutscene_5:
# 135 "data/maps/IntroRoom/scripts.pory"
	msgbox IntroCutscene_Text_11
	end


IntroBattleHandler::
# 165 "data/maps/IntroRoom/scripts.pory"
	setflag FLAG_NO_WHITEOUT
# 166 "data/maps/IntroRoom/scripts.pory"
	setwildbattle SPECIES_BOSS, 5
# 167 "data/maps/IntroRoom/scripts.pory"
	dowildbattle
	return


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

# 59 "data/maps/IntroRoom/scripts.pory"
IntroCutscene_Movement_6:
# 59 "data/maps/IntroRoom/scripts.pory"
	emote_double_exclamation_mark
# 59 "data/maps/IntroRoom/scripts.pory"
	delay_16
	step_end

# 62 "data/maps/IntroRoom/scripts.pory"
IntroCutscene_Movement_7:
# 63 "data/maps/IntroRoom/scripts.pory"
	walk_left
# 64 "data/maps/IntroRoom/scripts.pory"
	walk_left
# 65 "data/maps/IntroRoom/scripts.pory"
	walk_down
# 66 "data/maps/IntroRoom/scripts.pory"
	walk_down
# 67 "data/maps/IntroRoom/scripts.pory"
	walk_down
# 68 "data/maps/IntroRoom/scripts.pory"
	walk_down
# 69 "data/maps/IntroRoom/scripts.pory"
	walk_right
# 70 "data/maps/IntroRoom/scripts.pory"
	walk_right
# 71 "data/maps/IntroRoom/scripts.pory"
	walk_up
	step_end

# 80 "data/maps/IntroRoom/scripts.pory"
IntroCutscene_Movement_8:
# 80 "data/maps/IntroRoom/scripts.pory"
	tackq
# 80 "data/maps/IntroRoom/scripts.pory"
	delay_16
	step_end

# 85 "data/maps/IntroRoom/scripts.pory"
IntroCutscene_Movement_9:
# 86 "data/maps/IntroRoom/scripts.pory"
	emote_exclamation_mark
# 87 "data/maps/IntroRoom/scripts.pory"
	delay_16
# 88 "data/maps/IntroRoom/scripts.pory"
	face_down
	step_end

# 90 "data/maps/IntroRoom/scripts.pory"
IntroCutscene_Movement_10:
# 90 "data/maps/IntroRoom/scripts.pory"
	walk_down
	step_end

# 97 "data/maps/IntroRoom/scripts.pory"
IntroCutscene_Movement_11:
# 98 "data/maps/IntroRoom/scripts.pory"
	walk_left
# 99 "data/maps/IntroRoom/scripts.pory"
	walk_left
# 100 "data/maps/IntroRoom/scripts.pory"
	walk_up
# 101 "data/maps/IntroRoom/scripts.pory"
	walk_up
	step_end

# 105 "data/maps/IntroRoom/scripts.pory"
IntroCutscene_Movement_12:
# 106 "data/maps/IntroRoom/scripts.pory"
	walk_up
# 107 "data/maps/IntroRoom/scripts.pory"
	walk_up
# 108 "data/maps/IntroRoom/scripts.pory"
	walk_up
# 109 "data/maps/IntroRoom/scripts.pory"
	walk_right
# 110 "data/maps/IntroRoom/scripts.pory"
	walk_right
# 111 "data/maps/IntroRoom/scripts.pory"
	walk_down
	step_end

# 142 "data/maps/IntroRoom/scripts.pory"
IntroCutscene_Movement_13:
# 142 "data/maps/IntroRoom/scripts.pory"
	emote_x
# 142 "data/maps/IntroRoom/scripts.pory"
	delay_16
	step_end

# 159 "data/maps/IntroRoom/scripts.pory"
IntroCutscene_Movement_14:
# 159 "data/maps/IntroRoom/scripts.pory"
	yepp
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
# 58 "data/maps/IntroRoom/scripts.pory"
	.string "Hey, Hamtaro! Stop falling asleep while\nI'm talking to you!$"

IntroCutscene_Text_6:
# 81 "data/maps/IntroRoom/scripts.pory"
	.string "{COLOR RED}TACK-Q!{PLAY_SE SE_M_COMET_PUNCH}$"

IntroCutscene_Text_7:
# 96 "data/maps/IntroRoom/scripts.pory"
	.string "Now, as I was saying, we need\nto find a new, more exciting way to\luse Ham-chat!$"

IntroCutscene_Text_8:
# 118 "data/maps/IntroRoom/scripts.pory"
	.string "It hit me when I saw a video game!\pWe'll have a tournament where strength,\ncunning, and knowledge of hamchat are \lthe key to victory!\pHere, let's give it a shot!$"

IntroCutscene_Text_9:
# 129 "data/maps/IntroRoom/scripts.pory"
	.string "Wow, you're really good at this HAMTARO!$"

IntroCutscene_Text_10:
# 131 "data/maps/IntroRoom/scripts.pory"
	.string "Come on HAMTARO, it's not fun if you\ngive up right away.\pLet's do it again for real this time!$"

IntroCutscene_Text_11:
# 135 "data/maps/IntroRoom/scripts.pory"
	.string "Only makes sense that I'd win this\nfirst one since I invented it.\pYou'll get better with practice.$"

IntroCutscene_Text_12:
# 138 "data/maps/IntroRoom/scripts.pory"
	.string "Now, let me give you a new\nHamchat Dictionary.\pThis has the words you just used and\nthe ones you saw me use.$"

IntroCutscene_Text_13:
# 150 "data/maps/IntroRoom/scripts.pory"
	.string "You received the Hamchat Dictionary!{PLAY_SE MUS_RG_OBTAIN_KEY_ITEM}$"

IntroCutscene_Text_14:
# 154 "data/maps/IntroRoom/scripts.pory"
	.string "Use it to learn new Hamchat and to\nremember the ones you already know.\pYou can have up to four hamchat ready\nfor a battle at once.$"

IntroCutscene_Text_15:
# 158 "data/maps/IntroRoom/scripts.pory"
	.string "You learned {COLOR RED}HAMHA{COLOR DARK_GRAY},{COLOR RED}BLAHH{COLOR DARK_GRAY}, \nand {COLOR RED}TACK-Q{COLOR DARK_GRAY}!$"
