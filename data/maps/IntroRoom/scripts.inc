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
	setflag VAR_TEMP_0
# 16 "data/maps/IntroRoom/scripts.pory"
	setflag FLAG_NOT_GOT_PANDA
# 17 "data/maps/IntroRoom/scripts.pory"
	setflag FLAG_HIDDEN_OXNARD
# 18 "data/maps/IntroRoom/scripts.pory"
	setflag FLAG_HIDE_SNOOZER
# 19 "data/maps/IntroRoom/scripts.pory"
	setflag FLAG_HIDE_CLUBHOUSE_OXNARD
# 20 "data/maps/IntroRoom/scripts.pory"
	setflag FLAG_HIDE_CLUBHOUSE_PANDA
# 21 "data/maps/IntroRoom/scripts.pory"
	lockall
# 22 "data/maps/IntroRoom/scripts.pory"
	applymovement LOCALID_PLAYER, IntroCutscene_Movement_0
# 26 "data/maps/IntroRoom/scripts.pory"
	createfieldmugshot MUGSHOT_BOSS, EMOTE_NORMAL
# 27 "data/maps/IntroRoom/scripts.pory"
	setspeaker IntroCutscene_Text_0
# 28 "data/maps/IntroRoom/scripts.pory"
	message IntroCutscene_Text_1
# 29 "data/maps/IntroRoom/scripts.pory"
	applymovement LOCALID_PLAYER, IntroCutscene_Movement_1
# 30 "data/maps/IntroRoom/scripts.pory"
	applymovement LOCALID_BOSS, IntroCutscene_Movement_2
# 34 "data/maps/IntroRoom/scripts.pory"
	waitmovement
# 35 "data/maps/IntroRoom/scripts.pory"
	waitbuttonpress
# 36 "data/maps/IntroRoom/scripts.pory"
	message IntroCutscene_Text_2
# 37 "data/maps/IntroRoom/scripts.pory"
	applymovement LOCALID_PLAYER, IntroCutscene_Movement_1
# 38 "data/maps/IntroRoom/scripts.pory"
	applymovement LOCALID_BOSS, IntroCutscene_Movement_3
# 44 "data/maps/IntroRoom/scripts.pory"
	waitmovement
# 45 "data/maps/IntroRoom/scripts.pory"
	waitbuttonpress
# 46 "data/maps/IntroRoom/scripts.pory"
	message IntroCutscene_Text_3
# 47 "data/maps/IntroRoom/scripts.pory"
	applymovement LOCALID_PLAYER, IntroCutscene_Movement_1
# 48 "data/maps/IntroRoom/scripts.pory"
	applymovement LOCALID_BOSS, IntroCutscene_Movement_4
# 51 "data/maps/IntroRoom/scripts.pory"
	waitmovement
# 52 "data/maps/IntroRoom/scripts.pory"
	waitbuttonpress
# 53 "data/maps/IntroRoom/scripts.pory"
	message IntroCutscene_Text_4
# 54 "data/maps/IntroRoom/scripts.pory"
	applymovement LOCALID_PLAYER, IntroCutscene_Movement_1
# 55 "data/maps/IntroRoom/scripts.pory"
	applymovement LOCALID_BOSS, IntroCutscene_Movement_5
# 60 "data/maps/IntroRoom/scripts.pory"
	waitmovement
# 61 "data/maps/IntroRoom/scripts.pory"
	waitbuttonpress
# 62 "data/maps/IntroRoom/scripts.pory"
	createfieldmugshot MUGSHOT_BOSS, EMOTE_NORMAL
# 63 "data/maps/IntroRoom/scripts.pory"
	setspeaker IntroCutscene_Text_0
# 64 "data/maps/IntroRoom/scripts.pory"
	message IntroCutscene_Text_5
# 65 "data/maps/IntroRoom/scripts.pory"
	applymovement LOCALID_PLAYER, IntroCutscene_Movement_6
# 66 "data/maps/IntroRoom/scripts.pory"
	waitmovement LOCALID_PLAYER
# 67 "data/maps/IntroRoom/scripts.pory"
	createfieldmugshot MUGSHOT_BOSS, EMOTE_NORMAL
# 68 "data/maps/IntroRoom/scripts.pory"
	applymovement LOCALID_BOSS, IntroCutscene_Movement_7
# 79 "data/maps/IntroRoom/scripts.pory"
	waitmovement LOCALID_BOSS
# 80 "data/maps/IntroRoom/scripts.pory"
	waitmessage
# 81 "data/maps/IntroRoom/scripts.pory"
	waitbuttonpress
# 82 "data/maps/IntroRoom/scripts.pory"
	applymovement LOCALID_PLAYER, IntroCutscene_Movement_6
# 83 "data/maps/IntroRoom/scripts.pory"
	waitmovement LOCALID_PLAYER
# 84 "data/maps/IntroRoom/scripts.pory"
	createfieldmugshot MUGSHOT_BOSS, EMOTE_NORMAL
# 85 "data/maps/IntroRoom/scripts.pory"
	setspeaker IntroCutscene_Text_0
# 86 "data/maps/IntroRoom/scripts.pory"
	applymovement LOCALID_BOSS, IntroCutscene_Movement_8
# 87 "data/maps/IntroRoom/scripts.pory"
	message IntroCutscene_Text_6
# 88 "data/maps/IntroRoom/scripts.pory"
	waitmovement
# 89 "data/maps/IntroRoom/scripts.pory"
	waitse
# 90 "data/maps/IntroRoom/scripts.pory"
	waitmessage
# 91 "data/maps/IntroRoom/scripts.pory"
	playse SE_PIN
# 92 "data/maps/IntroRoom/scripts.pory"
	applymovement LOCALID_PLAYER, IntroCutscene_Movement_9
# 97 "data/maps/IntroRoom/scripts.pory"
	waitse
# 98 "data/maps/IntroRoom/scripts.pory"
	applymovement LOCALID_BOSS, IntroCutscene_Movement_10
# 99 "data/maps/IntroRoom/scripts.pory"
	waitmovement LOCALID_BOSS
# 100 "data/maps/IntroRoom/scripts.pory"
	turnobject LOCALID_BOSS, DIR_NORTH
# 101 "data/maps/IntroRoom/scripts.pory"
	waitbuttonpress
# 102 "data/maps/IntroRoom/scripts.pory"
	createfieldmugshot MUGSHOT_BOSS, EMOTE_NORMAL
# 103 "data/maps/IntroRoom/scripts.pory"
	setspeaker IntroCutscene_Text_0
# 104 "data/maps/IntroRoom/scripts.pory"
	message IntroCutscene_Text_7
# 105 "data/maps/IntroRoom/scripts.pory"
	applymovement LOCALID_BOSS, IntroCutscene_Movement_11
# 111 "data/maps/IntroRoom/scripts.pory"
	waitmovement LOCALID_BOSS
# 112 "data/maps/IntroRoom/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_WEST
# 113 "data/maps/IntroRoom/scripts.pory"
	applymovement LOCALID_BOSS, IntroCutscene_Movement_12
# 121 "data/maps/IntroRoom/scripts.pory"
	waitmovement LOCALID_BOSS
# 122 "data/maps/IntroRoom/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 123 "data/maps/IntroRoom/scripts.pory"
	waitmessage
# 124 "data/maps/IntroRoom/scripts.pory"
	waitbuttonpress
# 125 "data/maps/IntroRoom/scripts.pory"
	givemon SPECIES_HAMTARO, 100, ITEM_SITRUS_BERRY
# 126 "data/maps/IntroRoom/scripts.pory"
	message IntroCutscene_Text_8
# 127 "data/maps/IntroRoom/scripts.pory"
	setflag FLAG_USED_ROOM_1_KEY
# 128 "data/maps/IntroRoom/scripts.pory"
	waitmessage
# 129 "data/maps/IntroRoom/scripts.pory"
	waitbuttonpress
# 130 "data/maps/IntroRoom/scripts.pory"
	closemessage
# 131 "data/maps/IntroRoom/scripts.pory"
	call IntroBattleHandler
# 132 "data/maps/IntroRoom/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 133 "data/maps/IntroRoom/scripts.pory"
	createfieldmugshot MUGSHOT_BOSS, EMOTE_NORMAL
# 134 "data/maps/IntroRoom/scripts.pory"
	setspeaker IntroCutscene_Text_0
# 135 "data/maps/IntroRoom/scripts.pory"
	switch VAR_RESULT
# 136 "data/maps/IntroRoom/scripts.pory"
	case B_OUTCOME_WON, IntroCutscene_3
# 138 "data/maps/IntroRoom/scripts.pory"
	case B_OUTCOME_RAN, IntroCutscene_4
# 142 "data/maps/IntroRoom/scripts.pory"
	case B_OUTCOME_LOST, IntroCutscene_5
IntroCutscene_1:
# 146 "data/maps/IntroRoom/scripts.pory"
	message IntroCutscene_Text_12
# 147 "data/maps/IntroRoom/scripts.pory"
	waitmessage
# 148 "data/maps/IntroRoom/scripts.pory"
	waitbuttonpress
# 149 "data/maps/IntroRoom/scripts.pory"
	closemessage
# 150 "data/maps/IntroRoom/scripts.pory"
	applymovement LOCALID_BOSS, IntroCutscene_Movement_13
# 151 "data/maps/IntroRoom/scripts.pory"
	waitmovement
# 152 "data/maps/IntroRoom/scripts.pory"
	applymovement LOCALID_PLAYER, IntroCutscene_Movement_14
# 153 "data/maps/IntroRoom/scripts.pory"
	waitmovement
# 154 "data/maps/IntroRoom/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_SOUTH
# 155 "data/maps/IntroRoom/scripts.pory"
	additem ITEM_TM_TACKLE, 1
# 156 "data/maps/IntroRoom/scripts.pory"
	additem ITEM_TM_YAWN, 1
# 157 "data/maps/IntroRoom/scripts.pory"
	additem ITEM_TM_DIG, 1
# 158 "data/maps/IntroRoom/scripts.pory"
	message IntroCutscene_Text_13
# 159 "data/maps/IntroRoom/scripts.pory"
	applymovement LOCALID_PLAYER, IntroCutscene_Movement_15
# 160 "data/maps/IntroRoom/scripts.pory"
	waitse
# 161 "data/maps/IntroRoom/scripts.pory"
	waitmessage
# 162 "data/maps/IntroRoom/scripts.pory"
	waitbuttonpress
# 163 "data/maps/IntroRoom/scripts.pory"
	message IntroCutscene_Text_14
# 164 "data/maps/IntroRoom/scripts.pory"
	waitmessage
# 165 "data/maps/IntroRoom/scripts.pory"
	waitbuttonpress
# 166 "data/maps/IntroRoom/scripts.pory"
	closemessage
# 167 "data/maps/IntroRoom/scripts.pory"
	message IntroCutscene_Text_15
# 168 "data/maps/IntroRoom/scripts.pory"
	applymovement LOCALID_PLAYER, IntroCutscene_Movement_15
# 169 "data/maps/IntroRoom/scripts.pory"
	waitmessage
# 170 "data/maps/IntroRoom/scripts.pory"
	waitbuttonpress
# 171 "data/maps/IntroRoom/scripts.pory"
	closemessage
# 172 "data/maps/IntroRoom/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 173 "data/maps/IntroRoom/scripts.pory"
	waitmovement
# 174 "data/maps/IntroRoom/scripts.pory"
	createfieldmugshot MUGSHOT_BOSS, EMOTE_NORMAL
# 175 "data/maps/IntroRoom/scripts.pory"
	setspeaker IntroCutscene_Text_0
# 176 "data/maps/IntroRoom/scripts.pory"
	message IntroCutscene_Text_16
# 177 "data/maps/IntroRoom/scripts.pory"
	waitmessage
# 178 "data/maps/IntroRoom/scripts.pory"
	waitbuttonpress
# 179 "data/maps/IntroRoom/scripts.pory"
	applymovement LOCALID_BOSS, IntroCutscene_Movement_16
# 180 "data/maps/IntroRoom/scripts.pory"
	playse SE_PIN
# 181 "data/maps/IntroRoom/scripts.pory"
	waitmovement
# 182 "data/maps/IntroRoom/scripts.pory"
	waitse
# 183 "data/maps/IntroRoom/scripts.pory"
	message IntroCutscene_Text_17
# 184 "data/maps/IntroRoom/scripts.pory"
	waitmessage
# 185 "data/maps/IntroRoom/scripts.pory"
	waitbuttonpress
# 186 "data/maps/IntroRoom/scripts.pory"
	applymovement LOCALID_BOSS, IntroCutscene_Movement_17
# 190 "data/maps/IntroRoom/scripts.pory"
	applymovement LOCALID_PLAYER, IntroCutscene_Movement_18
# 196 "data/maps/IntroRoom/scripts.pory"
	waitmovement LOCALID_BOSS
# 197 "data/maps/IntroRoom/scripts.pory"
	playse SE_EXIT
# 198 "data/maps/IntroRoom/scripts.pory"
	removeobject LOCALID_BOSS
# 199 "data/maps/IntroRoom/scripts.pory"
	waitse
# 200 "data/maps/IntroRoom/scripts.pory"
	waitmovement LOCALID_PLAYER
# 201 "data/maps/IntroRoom/scripts.pory"
	warp MAP_HAM_HAM_CLUBHOUSE, 0
# 202 "data/maps/IntroRoom/scripts.pory"
	waitstate
# 203 "data/maps/IntroRoom/scripts.pory"
	releaseall
	end

IntroCutscene_3:
# 137 "data/maps/IntroRoom/scripts.pory"
	msgbox IntroCutscene_Text_9
	goto IntroCutscene_1

IntroCutscene_4:
# 139 "data/maps/IntroRoom/scripts.pory"
	msgbox IntroCutscene_Text_10
# 140 "data/maps/IntroRoom/scripts.pory"
	special HealPlayerParty
# 141 "data/maps/IntroRoom/scripts.pory"
	call IntroBattleHandler
	goto IntroCutscene_1

IntroCutscene_5:
# 143 "data/maps/IntroRoom/scripts.pory"
	msgbox IntroCutscene_Text_11
	end


IntroBattleHandler::
# 208 "data/maps/IntroRoom/scripts.pory"
	setflag FLAG_NO_WHITEOUT
# 209 "data/maps/IntroRoom/scripts.pory"
	setwildbattle SPECIES_BOSS, 5
# 210 "data/maps/IntroRoom/scripts.pory"
	dowildbattle
	return


# 9 "data/maps/IntroRoom/scripts.pory"
IntroRoom_TurnHamtaro_Movement_0:
# 10 "data/maps/IntroRoom/scripts.pory"
	face_up
	step_end

# 22 "data/maps/IntroRoom/scripts.pory"
IntroCutscene_Movement_0:
# 23 "data/maps/IntroRoom/scripts.pory"
	face_up
# 24 "data/maps/IntroRoom/scripts.pory"
	emote_double_exclamation_mark
	step_end

# 29 "data/maps/IntroRoom/scripts.pory"
IntroCutscene_Movement_1:
# 29 "data/maps/IntroRoom/scripts.pory"
	emote_double_exclamation_mark
	step_end

# 30 "data/maps/IntroRoom/scripts.pory"
IntroCutscene_Movement_2:
# 31 "data/maps/IntroRoom/scripts.pory"
	walk_left
# 32 "data/maps/IntroRoom/scripts.pory"
	walk_left
	step_end

# 38 "data/maps/IntroRoom/scripts.pory"
IntroCutscene_Movement_3:
# 39 "data/maps/IntroRoom/scripts.pory"
	walk_right
# 40 "data/maps/IntroRoom/scripts.pory"
	walk_right
# 41 "data/maps/IntroRoom/scripts.pory"
	walk_right
# 42 "data/maps/IntroRoom/scripts.pory"
	walk_right
	step_end

# 48 "data/maps/IntroRoom/scripts.pory"
IntroCutscene_Movement_4:
# 49 "data/maps/IntroRoom/scripts.pory"
	face_down
	step_end

# 55 "data/maps/IntroRoom/scripts.pory"
IntroCutscene_Movement_5:
# 56 "data/maps/IntroRoom/scripts.pory"
	walk_left
# 57 "data/maps/IntroRoom/scripts.pory"
	walk_left
# 58 "data/maps/IntroRoom/scripts.pory"
	walk_down
	step_end

# 65 "data/maps/IntroRoom/scripts.pory"
IntroCutscene_Movement_6:
# 65 "data/maps/IntroRoom/scripts.pory"
	emote_double_exclamation_mark
# 65 "data/maps/IntroRoom/scripts.pory"
	delay_16
	step_end

# 68 "data/maps/IntroRoom/scripts.pory"
IntroCutscene_Movement_7:
# 69 "data/maps/IntroRoom/scripts.pory"
	walk_left
# 70 "data/maps/IntroRoom/scripts.pory"
	walk_left
# 71 "data/maps/IntroRoom/scripts.pory"
	walk_down
# 72 "data/maps/IntroRoom/scripts.pory"
	walk_down
# 73 "data/maps/IntroRoom/scripts.pory"
	walk_down
# 74 "data/maps/IntroRoom/scripts.pory"
	walk_down
# 75 "data/maps/IntroRoom/scripts.pory"
	walk_right
# 76 "data/maps/IntroRoom/scripts.pory"
	walk_right
# 77 "data/maps/IntroRoom/scripts.pory"
	walk_up
	step_end

# 86 "data/maps/IntroRoom/scripts.pory"
IntroCutscene_Movement_8:
# 86 "data/maps/IntroRoom/scripts.pory"
	tackq
# 86 "data/maps/IntroRoom/scripts.pory"
	delay_16
	step_end

# 92 "data/maps/IntroRoom/scripts.pory"
IntroCutscene_Movement_9:
# 93 "data/maps/IntroRoom/scripts.pory"
	emote_exclamation_mark
# 94 "data/maps/IntroRoom/scripts.pory"
	delay_16
# 95 "data/maps/IntroRoom/scripts.pory"
	face_down
	step_end

# 98 "data/maps/IntroRoom/scripts.pory"
IntroCutscene_Movement_10:
# 98 "data/maps/IntroRoom/scripts.pory"
	walk_down
	step_end

# 105 "data/maps/IntroRoom/scripts.pory"
IntroCutscene_Movement_11:
# 106 "data/maps/IntroRoom/scripts.pory"
	walk_left
# 107 "data/maps/IntroRoom/scripts.pory"
	walk_left
# 108 "data/maps/IntroRoom/scripts.pory"
	walk_up
# 109 "data/maps/IntroRoom/scripts.pory"
	walk_up
	step_end

# 113 "data/maps/IntroRoom/scripts.pory"
IntroCutscene_Movement_12:
# 114 "data/maps/IntroRoom/scripts.pory"
	walk_up
# 115 "data/maps/IntroRoom/scripts.pory"
	walk_up
# 116 "data/maps/IntroRoom/scripts.pory"
	walk_up
# 117 "data/maps/IntroRoom/scripts.pory"
	walk_right
# 118 "data/maps/IntroRoom/scripts.pory"
	walk_right
# 119 "data/maps/IntroRoom/scripts.pory"
	walk_down
	step_end

# 150 "data/maps/IntroRoom/scripts.pory"
IntroCutscene_Movement_13:
# 150 "data/maps/IntroRoom/scripts.pory"
	emote_x
# 150 "data/maps/IntroRoom/scripts.pory"
	delay_16
# 150 "data/maps/IntroRoom/scripts.pory"
	delay_16
# 150 "data/maps/IntroRoom/scripts.pory"
	delay_16
	step_end

# 152 "data/maps/IntroRoom/scripts.pory"
IntroCutscene_Movement_14:
# 152 "data/maps/IntroRoom/scripts.pory"
	emote_x
# 152 "data/maps/IntroRoom/scripts.pory"
	delay_16
	step_end

# 159 "data/maps/IntroRoom/scripts.pory"
IntroCutscene_Movement_15:
# 159 "data/maps/IntroRoom/scripts.pory"
	yepp
	step_end

# 179 "data/maps/IntroRoom/scripts.pory"
IntroCutscene_Movement_16:
# 179 "data/maps/IntroRoom/scripts.pory"
	emote_exclamation_mark
# 179 "data/maps/IntroRoom/scripts.pory"
	delay_16
	step_end

# 186 "data/maps/IntroRoom/scripts.pory"
IntroCutscene_Movement_17:
# 187 "data/maps/IntroRoom/scripts.pory"
	walk_down
# 188 "data/maps/IntroRoom/scripts.pory"
	walk_right
# 188 "data/maps/IntroRoom/scripts.pory"
	walk_right
# 188 "data/maps/IntroRoom/scripts.pory"
	walk_right
# 188 "data/maps/IntroRoom/scripts.pory"
	walk_right
# 188 "data/maps/IntroRoom/scripts.pory"
	walk_right
# 188 "data/maps/IntroRoom/scripts.pory"
	walk_right
# 188 "data/maps/IntroRoom/scripts.pory"
	walk_right
# 188 "data/maps/IntroRoom/scripts.pory"
	walk_right
# 188 "data/maps/IntroRoom/scripts.pory"
	walk_right
# 188 "data/maps/IntroRoom/scripts.pory"
	walk_right
# 188 "data/maps/IntroRoom/scripts.pory"
	walk_right
# 188 "data/maps/IntroRoom/scripts.pory"
	walk_right
# 188 "data/maps/IntroRoom/scripts.pory"
	walk_right
# 188 "data/maps/IntroRoom/scripts.pory"
	walk_right
# 188 "data/maps/IntroRoom/scripts.pory"
	walk_right
# 188 "data/maps/IntroRoom/scripts.pory"
	walk_right
# 188 "data/maps/IntroRoom/scripts.pory"
	walk_right
	step_end

# 190 "data/maps/IntroRoom/scripts.pory"
IntroCutscene_Movement_18:
# 191 "data/maps/IntroRoom/scripts.pory"
	delay_16
# 192 "data/maps/IntroRoom/scripts.pory"
	delay_16
# 193 "data/maps/IntroRoom/scripts.pory"
	walk_up
# 194 "data/maps/IntroRoom/scripts.pory"
	walk_right
# 194 "data/maps/IntroRoom/scripts.pory"
	walk_right
# 194 "data/maps/IntroRoom/scripts.pory"
	walk_right
# 194 "data/maps/IntroRoom/scripts.pory"
	walk_right
# 194 "data/maps/IntroRoom/scripts.pory"
	walk_right
# 194 "data/maps/IntroRoom/scripts.pory"
	walk_right
# 194 "data/maps/IntroRoom/scripts.pory"
	walk_right
# 194 "data/maps/IntroRoom/scripts.pory"
	walk_right
# 194 "data/maps/IntroRoom/scripts.pory"
	walk_right
# 194 "data/maps/IntroRoom/scripts.pory"
	walk_right
# 194 "data/maps/IntroRoom/scripts.pory"
	walk_right
# 194 "data/maps/IntroRoom/scripts.pory"
	walk_right
# 194 "data/maps/IntroRoom/scripts.pory"
	walk_right
# 194 "data/maps/IntroRoom/scripts.pory"
	walk_right
# 194 "data/maps/IntroRoom/scripts.pory"
	walk_right
# 194 "data/maps/IntroRoom/scripts.pory"
	walk_right
# 194 "data/maps/IntroRoom/scripts.pory"
	walk_right
	step_end

IntroCutscene_Text_0:
# 27 "data/maps/IntroRoom/scripts.pory"
	.string "Boss$"

IntroCutscene_Text_1:
# 28 "data/maps/IntroRoom/scripts.pory"
	.string "... and the dance parties just aren't\nas popular anymore.$"

IntroCutscene_Text_2:
# 36 "data/maps/IntroRoom/scripts.pory"
	.string "So, I got to thinking, Ham-chat's still\ncool, but how else can we use it?$"

IntroCutscene_Text_3:
# 46 "data/maps/IntroRoom/scripts.pory"
	.string "So that's when I...$"

IntroCutscene_Text_4:
# 53 "data/maps/IntroRoom/scripts.pory"
	.string "...wait...$"

IntroCutscene_Text_5:
# 64 "data/maps/IntroRoom/scripts.pory"
	.string "Hey, Hamtaro! Stop falling asleep while\nI'm talking to you!$"

IntroCutscene_Text_6:
# 87 "data/maps/IntroRoom/scripts.pory"
	.string "{COLOR RED}TACK-Q!{PLAY_SE SE_M_COMET_PUNCH}$"

IntroCutscene_Text_7:
# 104 "data/maps/IntroRoom/scripts.pory"
	.string "Now, as I was saying, we need\nto find a new, more exciting way to\luse Ham-chat!$"

IntroCutscene_Text_8:
# 126 "data/maps/IntroRoom/scripts.pory"
	.string "It hit me when I saw a video game!\pWe'll have a tournament where strength,\ncunning, and knowledge of hamchat are \lthe key to victory!\pHere, let's give it a shot!$"

IntroCutscene_Text_9:
# 137 "data/maps/IntroRoom/scripts.pory"
	.string "Wow, you're really good at this HAMTARO!$"

IntroCutscene_Text_10:
# 139 "data/maps/IntroRoom/scripts.pory"
	.string "Come on HAMTARO, it's not fun if you\ngive up right away.\pLet's do it again for real this time!$"

IntroCutscene_Text_11:
# 143 "data/maps/IntroRoom/scripts.pory"
	.string "Only makes sense that I'd win this\nfirst one since I invented it.\pYou'll get better with practice.$"

IntroCutscene_Text_12:
# 146 "data/maps/IntroRoom/scripts.pory"
	.string "Now, let me give you a new\nHamchat Dictionary.\pThis has the words you just used and\nthe ones you saw me use.$"

IntroCutscene_Text_13:
# 158 "data/maps/IntroRoom/scripts.pory"
	.string "{PLAY_SE MUS_RG_OBTAIN_KEY_ITEM}You received the Hamchat Dictionary!$"

IntroCutscene_Text_14:
# 163 "data/maps/IntroRoom/scripts.pory"
	.string "Use it to learn new Hamchat and to\nremember the ones you already know.\pYou can have up to four hamchat ready\nfor a battle at once.$"

IntroCutscene_Text_15:
# 167 "data/maps/IntroRoom/scripts.pory"
	.string "You learned {COLOR RED}HAMHA{COLOR DARK_GRAY},{COLOR RED}BLAHH{COLOR DARK_GRAY}, \nand {COLOR RED}TACK-Q{COLOR DARK_GRAY}!$"

IntroCutscene_Text_16:
# 176 "data/maps/IntroRoom/scripts.pory"
	.string "Great! You should be good to get\nto get started now!\pI need your help to get everyone\nback to the clubhouse so we can\lget the tournament started!$"

IntroCutscene_Text_17:
# 183 "data/maps/IntroRoom/scripts.pory"
	.string "Oh! And we need PANDA's help to remodel\nthis room for the new tournament!\pCome on Hamtaro, let's get going!$"
