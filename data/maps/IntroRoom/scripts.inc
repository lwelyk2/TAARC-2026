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
	setflag FLAG_HIDE_WORKING_PANDA
# 22 "data/maps/IntroRoom/scripts.pory"
	setflag FLAG_RECEIVED_RUNNING_SHOES
# 23 "data/maps/IntroRoom/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 24 "data/maps/IntroRoom/scripts.pory"
	lockall
# 25 "data/maps/IntroRoom/scripts.pory"
	applymovement LOCALID_PLAYER, IntroCutscene_Movement_0
# 29 "data/maps/IntroRoom/scripts.pory"
	createfieldmugshot MUGSHOT_BOSS, EMOTE_NORMAL
# 30 "data/maps/IntroRoom/scripts.pory"
	setspeaker IntroCutscene_Text_0
# 31 "data/maps/IntroRoom/scripts.pory"
	message IntroCutscene_Text_1
# 32 "data/maps/IntroRoom/scripts.pory"
	applymovement LOCALID_PLAYER, IntroCutscene_Movement_1
# 33 "data/maps/IntroRoom/scripts.pory"
	applymovement LOCALID_BOSS, IntroCutscene_Movement_2
# 37 "data/maps/IntroRoom/scripts.pory"
	waitmovement
# 38 "data/maps/IntroRoom/scripts.pory"
	waitbuttonpress
# 39 "data/maps/IntroRoom/scripts.pory"
	message IntroCutscene_Text_2
# 40 "data/maps/IntroRoom/scripts.pory"
	applymovement LOCALID_PLAYER, IntroCutscene_Movement_1
# 41 "data/maps/IntroRoom/scripts.pory"
	applymovement LOCALID_BOSS, IntroCutscene_Movement_3
# 47 "data/maps/IntroRoom/scripts.pory"
	waitmovement
# 48 "data/maps/IntroRoom/scripts.pory"
	waitbuttonpress
# 49 "data/maps/IntroRoom/scripts.pory"
	message IntroCutscene_Text_3
# 50 "data/maps/IntroRoom/scripts.pory"
	applymovement LOCALID_PLAYER, IntroCutscene_Movement_1
# 51 "data/maps/IntroRoom/scripts.pory"
	applymovement LOCALID_BOSS, IntroCutscene_Movement_4
# 54 "data/maps/IntroRoom/scripts.pory"
	waitmovement
# 55 "data/maps/IntroRoom/scripts.pory"
	waitbuttonpress
# 56 "data/maps/IntroRoom/scripts.pory"
	message IntroCutscene_Text_4
# 57 "data/maps/IntroRoom/scripts.pory"
	applymovement LOCALID_PLAYER, IntroCutscene_Movement_1
# 58 "data/maps/IntroRoom/scripts.pory"
	applymovement LOCALID_BOSS, IntroCutscene_Movement_5
# 63 "data/maps/IntroRoom/scripts.pory"
	waitmovement
# 64 "data/maps/IntroRoom/scripts.pory"
	waitbuttonpress
# 65 "data/maps/IntroRoom/scripts.pory"
	createfieldmugshot MUGSHOT_BOSS, EMOTE_NORMAL
# 66 "data/maps/IntroRoom/scripts.pory"
	setspeaker IntroCutscene_Text_0
# 67 "data/maps/IntroRoom/scripts.pory"
	message IntroCutscene_Text_5
# 68 "data/maps/IntroRoom/scripts.pory"
	applymovement LOCALID_PLAYER, IntroCutscene_Movement_6
# 69 "data/maps/IntroRoom/scripts.pory"
	waitmovement LOCALID_PLAYER
# 70 "data/maps/IntroRoom/scripts.pory"
	createfieldmugshot MUGSHOT_BOSS, EMOTE_NORMAL
# 71 "data/maps/IntroRoom/scripts.pory"
	applymovement LOCALID_BOSS, IntroCutscene_Movement_7
# 82 "data/maps/IntroRoom/scripts.pory"
	waitmovement LOCALID_BOSS
# 83 "data/maps/IntroRoom/scripts.pory"
	waitmessage
# 84 "data/maps/IntroRoom/scripts.pory"
	waitbuttonpress
# 85 "data/maps/IntroRoom/scripts.pory"
	applymovement LOCALID_PLAYER, IntroCutscene_Movement_6
# 86 "data/maps/IntroRoom/scripts.pory"
	waitmovement LOCALID_PLAYER
# 87 "data/maps/IntroRoom/scripts.pory"
	createfieldmugshot MUGSHOT_BOSS, EMOTE_NORMAL
# 88 "data/maps/IntroRoom/scripts.pory"
	setspeaker IntroCutscene_Text_0
# 89 "data/maps/IntroRoom/scripts.pory"
	applymovement LOCALID_BOSS, IntroCutscene_Movement_8
# 90 "data/maps/IntroRoom/scripts.pory"
	message IntroCutscene_Text_6
# 91 "data/maps/IntroRoom/scripts.pory"
	waitmovement
# 92 "data/maps/IntroRoom/scripts.pory"
	waitse
# 93 "data/maps/IntroRoom/scripts.pory"
	waitmessage
# 94 "data/maps/IntroRoom/scripts.pory"
	playse SE_PIN
# 95 "data/maps/IntroRoom/scripts.pory"
	applymovement LOCALID_PLAYER, IntroCutscene_Movement_9
# 100 "data/maps/IntroRoom/scripts.pory"
	waitse
# 101 "data/maps/IntroRoom/scripts.pory"
	applymovement LOCALID_BOSS, IntroCutscene_Movement_10
# 102 "data/maps/IntroRoom/scripts.pory"
	waitmovement LOCALID_BOSS
# 103 "data/maps/IntroRoom/scripts.pory"
	turnobject LOCALID_BOSS, DIR_NORTH
# 104 "data/maps/IntroRoom/scripts.pory"
	waitbuttonpress
# 105 "data/maps/IntroRoom/scripts.pory"
	createfieldmugshot MUGSHOT_BOSS, EMOTE_NORMAL
# 106 "data/maps/IntroRoom/scripts.pory"
	setspeaker IntroCutscene_Text_0
# 107 "data/maps/IntroRoom/scripts.pory"
	message IntroCutscene_Text_7
# 108 "data/maps/IntroRoom/scripts.pory"
	applymovement LOCALID_BOSS, IntroCutscene_Movement_11
# 114 "data/maps/IntroRoom/scripts.pory"
	waitmovement LOCALID_BOSS
# 115 "data/maps/IntroRoom/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_WEST
# 116 "data/maps/IntroRoom/scripts.pory"
	applymovement LOCALID_BOSS, IntroCutscene_Movement_12
# 124 "data/maps/IntroRoom/scripts.pory"
	waitmovement LOCALID_BOSS
# 125 "data/maps/IntroRoom/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 126 "data/maps/IntroRoom/scripts.pory"
	waitmessage
# 127 "data/maps/IntroRoom/scripts.pory"
	waitbuttonpress
# 128 "data/maps/IntroRoom/scripts.pory"
	givemon SPECIES_HAMTARO, 6, ITEM_SITRUS_BERRY
# 129 "data/maps/IntroRoom/scripts.pory"
	message IntroCutscene_Text_8
# 130 "data/maps/IntroRoom/scripts.pory"
	setflag FLAG_USED_ROOM_1_KEY
# 131 "data/maps/IntroRoom/scripts.pory"
	waitmessage
# 132 "data/maps/IntroRoom/scripts.pory"
	waitbuttonpress
# 133 "data/maps/IntroRoom/scripts.pory"
	closemessage
# 134 "data/maps/IntroRoom/scripts.pory"
	call IntroBattleHandler
# 135 "data/maps/IntroRoom/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 136 "data/maps/IntroRoom/scripts.pory"
	createfieldmugshot MUGSHOT_BOSS, EMOTE_NORMAL
# 137 "data/maps/IntroRoom/scripts.pory"
	setspeaker IntroCutscene_Text_0
# 138 "data/maps/IntroRoom/scripts.pory"
	switch VAR_RESULT
# 139 "data/maps/IntroRoom/scripts.pory"
	case B_OUTCOME_WON, IntroCutscene_3
# 141 "data/maps/IntroRoom/scripts.pory"
	case B_OUTCOME_RAN, IntroCutscene_4
# 145 "data/maps/IntroRoom/scripts.pory"
	case B_OUTCOME_LOST, IntroCutscene_5
IntroCutscene_1:
# 149 "data/maps/IntroRoom/scripts.pory"
	message IntroCutscene_Text_12
# 150 "data/maps/IntroRoom/scripts.pory"
	waitmessage
# 151 "data/maps/IntroRoom/scripts.pory"
	waitbuttonpress
# 152 "data/maps/IntroRoom/scripts.pory"
	closemessage
# 153 "data/maps/IntroRoom/scripts.pory"
	applymovement LOCALID_BOSS, IntroCutscene_Movement_13
# 154 "data/maps/IntroRoom/scripts.pory"
	waitmovement
# 155 "data/maps/IntroRoom/scripts.pory"
	applymovement LOCALID_PLAYER, IntroCutscene_Movement_14
# 156 "data/maps/IntroRoom/scripts.pory"
	waitmovement
# 157 "data/maps/IntroRoom/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_SOUTH
# 158 "data/maps/IntroRoom/scripts.pory"
	additem ITEM_TM_TACKLE, 1
# 159 "data/maps/IntroRoom/scripts.pory"
	additem ITEM_TM_YAWN, 1
# 160 "data/maps/IntroRoom/scripts.pory"
	additem ITEM_TM_DIG, 1
# 161 "data/maps/IntroRoom/scripts.pory"
	message IntroCutscene_Text_13
# 162 "data/maps/IntroRoom/scripts.pory"
	applymovement LOCALID_PLAYER, IntroCutscene_Movement_15
# 163 "data/maps/IntroRoom/scripts.pory"
	waitse
# 164 "data/maps/IntroRoom/scripts.pory"
	waitmessage
# 165 "data/maps/IntroRoom/scripts.pory"
	waitbuttonpress
# 166 "data/maps/IntroRoom/scripts.pory"
	message IntroCutscene_Text_14
# 167 "data/maps/IntroRoom/scripts.pory"
	waitmessage
# 168 "data/maps/IntroRoom/scripts.pory"
	waitbuttonpress
# 169 "data/maps/IntroRoom/scripts.pory"
	closemessage
# 170 "data/maps/IntroRoom/scripts.pory"
	message IntroCutscene_Text_15
# 171 "data/maps/IntroRoom/scripts.pory"
	applymovement LOCALID_PLAYER, IntroCutscene_Movement_15
# 172 "data/maps/IntroRoom/scripts.pory"
	waitmessage
# 173 "data/maps/IntroRoom/scripts.pory"
	waitbuttonpress
# 174 "data/maps/IntroRoom/scripts.pory"
	closemessage
# 175 "data/maps/IntroRoom/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 176 "data/maps/IntroRoom/scripts.pory"
	waitmovement
# 177 "data/maps/IntroRoom/scripts.pory"
	createfieldmugshot MUGSHOT_BOSS, EMOTE_NORMAL
# 178 "data/maps/IntroRoom/scripts.pory"
	setspeaker IntroCutscene_Text_0
# 179 "data/maps/IntroRoom/scripts.pory"
	message IntroCutscene_Text_16
# 180 "data/maps/IntroRoom/scripts.pory"
	waitmessage
# 181 "data/maps/IntroRoom/scripts.pory"
	waitbuttonpress
# 182 "data/maps/IntroRoom/scripts.pory"
	applymovement LOCALID_BOSS, IntroCutscene_Movement_16
# 183 "data/maps/IntroRoom/scripts.pory"
	playse SE_PIN
# 184 "data/maps/IntroRoom/scripts.pory"
	waitmovement
# 185 "data/maps/IntroRoom/scripts.pory"
	waitse
# 186 "data/maps/IntroRoom/scripts.pory"
	message IntroCutscene_Text_17
# 187 "data/maps/IntroRoom/scripts.pory"
	waitmessage
# 188 "data/maps/IntroRoom/scripts.pory"
	waitbuttonpress
# 189 "data/maps/IntroRoom/scripts.pory"
	applymovement LOCALID_BOSS, IntroCutscene_Movement_17
# 193 "data/maps/IntroRoom/scripts.pory"
	applymovement LOCALID_PLAYER, IntroCutscene_Movement_18
# 199 "data/maps/IntroRoom/scripts.pory"
	waitmovement LOCALID_BOSS
# 200 "data/maps/IntroRoom/scripts.pory"
	playse SE_EXIT
# 201 "data/maps/IntroRoom/scripts.pory"
	removeobject LOCALID_BOSS
# 202 "data/maps/IntroRoom/scripts.pory"
	waitse
# 203 "data/maps/IntroRoom/scripts.pory"
	waitmovement LOCALID_PLAYER
# 204 "data/maps/IntroRoom/scripts.pory"
	warp MAP_HAM_HAM_CLUBHOUSE, 0
# 205 "data/maps/IntroRoom/scripts.pory"
	waitstate
# 206 "data/maps/IntroRoom/scripts.pory"
	releaseall
	end

IntroCutscene_3:
# 140 "data/maps/IntroRoom/scripts.pory"
	msgbox IntroCutscene_Text_9
	goto IntroCutscene_1

IntroCutscene_4:
# 142 "data/maps/IntroRoom/scripts.pory"
	msgbox IntroCutscene_Text_10
# 143 "data/maps/IntroRoom/scripts.pory"
	special HealPlayerParty
# 144 "data/maps/IntroRoom/scripts.pory"
	call IntroBattleHandler
	goto IntroCutscene_1

IntroCutscene_5:
# 146 "data/maps/IntroRoom/scripts.pory"
	msgbox IntroCutscene_Text_11
	end


IntroBattleHandler::
# 211 "data/maps/IntroRoom/scripts.pory"
	setflag FLAG_NO_WHITEOUT
# 212 "data/maps/IntroRoom/scripts.pory"
	setwildbattle SPECIES_BOSS, 5
# 213 "data/maps/IntroRoom/scripts.pory"
	dowildbattle
	return


# 9 "data/maps/IntroRoom/scripts.pory"
IntroRoom_TurnHamtaro_Movement_0:
# 10 "data/maps/IntroRoom/scripts.pory"
	face_up
	step_end

# 25 "data/maps/IntroRoom/scripts.pory"
IntroCutscene_Movement_0:
# 26 "data/maps/IntroRoom/scripts.pory"
	face_up
# 27 "data/maps/IntroRoom/scripts.pory"
	emote_double_exclamation_mark
	step_end

# 32 "data/maps/IntroRoom/scripts.pory"
IntroCutscene_Movement_1:
# 32 "data/maps/IntroRoom/scripts.pory"
	emote_double_exclamation_mark
	step_end

# 33 "data/maps/IntroRoom/scripts.pory"
IntroCutscene_Movement_2:
# 34 "data/maps/IntroRoom/scripts.pory"
	walk_left
# 35 "data/maps/IntroRoom/scripts.pory"
	walk_left
	step_end

# 41 "data/maps/IntroRoom/scripts.pory"
IntroCutscene_Movement_3:
# 42 "data/maps/IntroRoom/scripts.pory"
	walk_right
# 43 "data/maps/IntroRoom/scripts.pory"
	walk_right
# 44 "data/maps/IntroRoom/scripts.pory"
	walk_right
# 45 "data/maps/IntroRoom/scripts.pory"
	walk_right
	step_end

# 51 "data/maps/IntroRoom/scripts.pory"
IntroCutscene_Movement_4:
# 52 "data/maps/IntroRoom/scripts.pory"
	face_down
	step_end

# 58 "data/maps/IntroRoom/scripts.pory"
IntroCutscene_Movement_5:
# 59 "data/maps/IntroRoom/scripts.pory"
	walk_left
# 60 "data/maps/IntroRoom/scripts.pory"
	walk_left
# 61 "data/maps/IntroRoom/scripts.pory"
	walk_down
	step_end

# 68 "data/maps/IntroRoom/scripts.pory"
IntroCutscene_Movement_6:
# 68 "data/maps/IntroRoom/scripts.pory"
	emote_double_exclamation_mark
# 68 "data/maps/IntroRoom/scripts.pory"
	delay_16
	step_end

# 71 "data/maps/IntroRoom/scripts.pory"
IntroCutscene_Movement_7:
# 72 "data/maps/IntroRoom/scripts.pory"
	walk_left
# 73 "data/maps/IntroRoom/scripts.pory"
	walk_left
# 74 "data/maps/IntroRoom/scripts.pory"
	walk_down
# 75 "data/maps/IntroRoom/scripts.pory"
	walk_down
# 76 "data/maps/IntroRoom/scripts.pory"
	walk_down
# 77 "data/maps/IntroRoom/scripts.pory"
	walk_down
# 78 "data/maps/IntroRoom/scripts.pory"
	walk_right
# 79 "data/maps/IntroRoom/scripts.pory"
	walk_right
# 80 "data/maps/IntroRoom/scripts.pory"
	walk_up
	step_end

# 89 "data/maps/IntroRoom/scripts.pory"
IntroCutscene_Movement_8:
# 89 "data/maps/IntroRoom/scripts.pory"
	tackq
# 89 "data/maps/IntroRoom/scripts.pory"
	delay_16
	step_end

# 95 "data/maps/IntroRoom/scripts.pory"
IntroCutscene_Movement_9:
# 96 "data/maps/IntroRoom/scripts.pory"
	emote_exclamation_mark
# 97 "data/maps/IntroRoom/scripts.pory"
	delay_16
# 98 "data/maps/IntroRoom/scripts.pory"
	face_down
	step_end

# 101 "data/maps/IntroRoom/scripts.pory"
IntroCutscene_Movement_10:
# 101 "data/maps/IntroRoom/scripts.pory"
	walk_down
	step_end

# 108 "data/maps/IntroRoom/scripts.pory"
IntroCutscene_Movement_11:
# 109 "data/maps/IntroRoom/scripts.pory"
	walk_left
# 110 "data/maps/IntroRoom/scripts.pory"
	walk_left
# 111 "data/maps/IntroRoom/scripts.pory"
	walk_up
# 112 "data/maps/IntroRoom/scripts.pory"
	walk_up
	step_end

# 116 "data/maps/IntroRoom/scripts.pory"
IntroCutscene_Movement_12:
# 117 "data/maps/IntroRoom/scripts.pory"
	walk_up
# 118 "data/maps/IntroRoom/scripts.pory"
	walk_up
# 119 "data/maps/IntroRoom/scripts.pory"
	walk_up
# 120 "data/maps/IntroRoom/scripts.pory"
	walk_right
# 121 "data/maps/IntroRoom/scripts.pory"
	walk_right
# 122 "data/maps/IntroRoom/scripts.pory"
	walk_down
	step_end

# 153 "data/maps/IntroRoom/scripts.pory"
IntroCutscene_Movement_13:
# 153 "data/maps/IntroRoom/scripts.pory"
	emote_x
# 153 "data/maps/IntroRoom/scripts.pory"
	delay_16
# 153 "data/maps/IntroRoom/scripts.pory"
	delay_16
# 153 "data/maps/IntroRoom/scripts.pory"
	delay_16
	step_end

# 155 "data/maps/IntroRoom/scripts.pory"
IntroCutscene_Movement_14:
# 155 "data/maps/IntroRoom/scripts.pory"
	emote_x
# 155 "data/maps/IntroRoom/scripts.pory"
	delay_16
	step_end

# 162 "data/maps/IntroRoom/scripts.pory"
IntroCutscene_Movement_15:
# 162 "data/maps/IntroRoom/scripts.pory"
	yepp
	step_end

# 182 "data/maps/IntroRoom/scripts.pory"
IntroCutscene_Movement_16:
# 182 "data/maps/IntroRoom/scripts.pory"
	emote_exclamation_mark
# 182 "data/maps/IntroRoom/scripts.pory"
	delay_16
	step_end

# 189 "data/maps/IntroRoom/scripts.pory"
IntroCutscene_Movement_17:
# 190 "data/maps/IntroRoom/scripts.pory"
	walk_down
# 191 "data/maps/IntroRoom/scripts.pory"
	walk_right
# 191 "data/maps/IntroRoom/scripts.pory"
	walk_right
# 191 "data/maps/IntroRoom/scripts.pory"
	walk_right
# 191 "data/maps/IntroRoom/scripts.pory"
	walk_right
# 191 "data/maps/IntroRoom/scripts.pory"
	walk_right
# 191 "data/maps/IntroRoom/scripts.pory"
	walk_right
# 191 "data/maps/IntroRoom/scripts.pory"
	walk_right
# 191 "data/maps/IntroRoom/scripts.pory"
	walk_right
# 191 "data/maps/IntroRoom/scripts.pory"
	walk_right
# 191 "data/maps/IntroRoom/scripts.pory"
	walk_right
# 191 "data/maps/IntroRoom/scripts.pory"
	walk_right
# 191 "data/maps/IntroRoom/scripts.pory"
	walk_right
# 191 "data/maps/IntroRoom/scripts.pory"
	walk_right
# 191 "data/maps/IntroRoom/scripts.pory"
	walk_right
# 191 "data/maps/IntroRoom/scripts.pory"
	walk_right
# 191 "data/maps/IntroRoom/scripts.pory"
	walk_right
# 191 "data/maps/IntroRoom/scripts.pory"
	walk_right
	step_end

# 193 "data/maps/IntroRoom/scripts.pory"
IntroCutscene_Movement_18:
# 194 "data/maps/IntroRoom/scripts.pory"
	delay_16
# 195 "data/maps/IntroRoom/scripts.pory"
	delay_16
# 196 "data/maps/IntroRoom/scripts.pory"
	walk_up
# 197 "data/maps/IntroRoom/scripts.pory"
	walk_right
# 197 "data/maps/IntroRoom/scripts.pory"
	walk_right
# 197 "data/maps/IntroRoom/scripts.pory"
	walk_right
# 197 "data/maps/IntroRoom/scripts.pory"
	walk_right
# 197 "data/maps/IntroRoom/scripts.pory"
	walk_right
# 197 "data/maps/IntroRoom/scripts.pory"
	walk_right
# 197 "data/maps/IntroRoom/scripts.pory"
	walk_right
# 197 "data/maps/IntroRoom/scripts.pory"
	walk_right
# 197 "data/maps/IntroRoom/scripts.pory"
	walk_right
# 197 "data/maps/IntroRoom/scripts.pory"
	walk_right
# 197 "data/maps/IntroRoom/scripts.pory"
	walk_right
# 197 "data/maps/IntroRoom/scripts.pory"
	walk_right
# 197 "data/maps/IntroRoom/scripts.pory"
	walk_right
# 197 "data/maps/IntroRoom/scripts.pory"
	walk_right
# 197 "data/maps/IntroRoom/scripts.pory"
	walk_right
# 197 "data/maps/IntroRoom/scripts.pory"
	walk_right
# 197 "data/maps/IntroRoom/scripts.pory"
	walk_right
	step_end

IntroCutscene_Text_0:
# 30 "data/maps/IntroRoom/scripts.pory"
	.string "Boss$"

IntroCutscene_Text_1:
# 31 "data/maps/IntroRoom/scripts.pory"
	.string "... and the dance parties just aren't\nas popular anymore.$"

IntroCutscene_Text_2:
# 39 "data/maps/IntroRoom/scripts.pory"
	.string "So, I got to thinking, Ham-chat's still\ncool, but how else can we use it?$"

IntroCutscene_Text_3:
# 49 "data/maps/IntroRoom/scripts.pory"
	.string "So that's when I...$"

IntroCutscene_Text_4:
# 56 "data/maps/IntroRoom/scripts.pory"
	.string "...wait...$"

IntroCutscene_Text_5:
# 67 "data/maps/IntroRoom/scripts.pory"
	.string "Hey, Hamtaro! Stop falling asleep while\nI'm talking to you!$"

IntroCutscene_Text_6:
# 90 "data/maps/IntroRoom/scripts.pory"
	.string "{COLOR RED}TACK-Q!{PLAY_SE SE_M_COMET_PUNCH}$"

IntroCutscene_Text_7:
# 107 "data/maps/IntroRoom/scripts.pory"
	.string "Now, as I was saying, we need\nto find a new, more exciting way to\luse Ham-chat!$"

IntroCutscene_Text_8:
# 129 "data/maps/IntroRoom/scripts.pory"
	.string "It hit me when I saw a video game!\pWe'll have a tournament where strength,\ncunning, and knowledge of hamchat are \lthe key to victory!\pHere, let's give it a shot!$"

IntroCutscene_Text_9:
# 140 "data/maps/IntroRoom/scripts.pory"
	.string "Wow, you're really good at this HAMTARO!$"

IntroCutscene_Text_10:
# 142 "data/maps/IntroRoom/scripts.pory"
	.string "Come on HAMTARO, it's not fun if you\ngive up right away.\pLet's do it again for real this time!$"

IntroCutscene_Text_11:
# 146 "data/maps/IntroRoom/scripts.pory"
	.string "Only makes sense that I'd win this\nfirst one since I invented it.\pYou'll get better with practice.$"

IntroCutscene_Text_12:
# 149 "data/maps/IntroRoom/scripts.pory"
	.string "Now, let me give you a new\nHamchat Dictionary.\pThis has the words you just used and\nthe ones you saw me use.$"

IntroCutscene_Text_13:
# 161 "data/maps/IntroRoom/scripts.pory"
	.string "{PLAY_SE MUS_RG_OBTAIN_KEY_ITEM}You received the Hamchat Dictionary!$"

IntroCutscene_Text_14:
# 166 "data/maps/IntroRoom/scripts.pory"
	.string "Use it to learn new Hamchat and to\nremember the ones you already know.\pYou can have up to four hamchat ready\nfor a battle at once.$"

IntroCutscene_Text_15:
# 170 "data/maps/IntroRoom/scripts.pory"
	.string "You learned {COLOR RED}HAMHA{COLOR DARK_GRAY}, {COLOR RED}BLAHH{COLOR DARK_GRAY}, \nand {COLOR RED}TACK-Q{COLOR DARK_GRAY}!$"

IntroCutscene_Text_16:
# 179 "data/maps/IntroRoom/scripts.pory"
	.string "Great! You should be good to get\nto get started now!\pI need your help to get everyone\nback to the clubhouse so we can\lget the tournament started!$"

IntroCutscene_Text_17:
# 186 "data/maps/IntroRoom/scripts.pory"
	.string "Oh! And we need PANDA's help to remodel\nthis room for the new tournament!\pCome on Hamtaro, let's get going!$"
