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
	lockall
# 19 "data/maps/IntroRoom/scripts.pory"
	applymovement LOCALID_PLAYER, IntroCutscene_Movement_0
# 23 "data/maps/IntroRoom/scripts.pory"
	createfieldmugshot MUGSHOT_BOSS, EMOTE_NORMAL
# 24 "data/maps/IntroRoom/scripts.pory"
	setspeaker IntroCutscene_Text_0
# 25 "data/maps/IntroRoom/scripts.pory"
	message IntroCutscene_Text_1
# 26 "data/maps/IntroRoom/scripts.pory"
	applymovement LOCALID_PLAYER, IntroCutscene_Movement_1
# 27 "data/maps/IntroRoom/scripts.pory"
	applymovement LOCALID_BOSS, IntroCutscene_Movement_2
# 31 "data/maps/IntroRoom/scripts.pory"
	waitmovement
# 32 "data/maps/IntroRoom/scripts.pory"
	waitbuttonpress
# 33 "data/maps/IntroRoom/scripts.pory"
	message IntroCutscene_Text_2
# 34 "data/maps/IntroRoom/scripts.pory"
	applymovement LOCALID_PLAYER, IntroCutscene_Movement_1
# 35 "data/maps/IntroRoom/scripts.pory"
	applymovement LOCALID_BOSS, IntroCutscene_Movement_3
# 41 "data/maps/IntroRoom/scripts.pory"
	waitmovement
# 42 "data/maps/IntroRoom/scripts.pory"
	waitbuttonpress
# 43 "data/maps/IntroRoom/scripts.pory"
	message IntroCutscene_Text_3
# 44 "data/maps/IntroRoom/scripts.pory"
	applymovement LOCALID_PLAYER, IntroCutscene_Movement_1
# 45 "data/maps/IntroRoom/scripts.pory"
	applymovement LOCALID_BOSS, IntroCutscene_Movement_4
# 48 "data/maps/IntroRoom/scripts.pory"
	waitmovement
# 49 "data/maps/IntroRoom/scripts.pory"
	waitbuttonpress
# 50 "data/maps/IntroRoom/scripts.pory"
	message IntroCutscene_Text_4
# 51 "data/maps/IntroRoom/scripts.pory"
	applymovement LOCALID_PLAYER, IntroCutscene_Movement_1
# 52 "data/maps/IntroRoom/scripts.pory"
	applymovement LOCALID_BOSS, IntroCutscene_Movement_5
# 57 "data/maps/IntroRoom/scripts.pory"
	waitmovement
# 58 "data/maps/IntroRoom/scripts.pory"
	waitbuttonpress
# 59 "data/maps/IntroRoom/scripts.pory"
	createfieldmugshot MUGSHOT_BOSS, EMOTE_NORMAL
# 60 "data/maps/IntroRoom/scripts.pory"
	setspeaker IntroCutscene_Text_0
# 61 "data/maps/IntroRoom/scripts.pory"
	message IntroCutscene_Text_5
# 62 "data/maps/IntroRoom/scripts.pory"
	applymovement LOCALID_PLAYER, IntroCutscene_Movement_6
# 63 "data/maps/IntroRoom/scripts.pory"
	waitmovement LOCALID_PLAYER
# 64 "data/maps/IntroRoom/scripts.pory"
	createfieldmugshot MUGSHOT_BOSS, EMOTE_NORMAL
# 65 "data/maps/IntroRoom/scripts.pory"
	applymovement LOCALID_BOSS, IntroCutscene_Movement_7
# 76 "data/maps/IntroRoom/scripts.pory"
	waitmovement LOCALID_BOSS
# 77 "data/maps/IntroRoom/scripts.pory"
	waitmessage
# 78 "data/maps/IntroRoom/scripts.pory"
	waitbuttonpress
# 79 "data/maps/IntroRoom/scripts.pory"
	applymovement LOCALID_PLAYER, IntroCutscene_Movement_6
# 80 "data/maps/IntroRoom/scripts.pory"
	waitmovement LOCALID_PLAYER
# 81 "data/maps/IntroRoom/scripts.pory"
	createfieldmugshot MUGSHOT_BOSS, EMOTE_NORMAL
# 82 "data/maps/IntroRoom/scripts.pory"
	setspeaker IntroCutscene_Text_0
# 83 "data/maps/IntroRoom/scripts.pory"
	applymovement LOCALID_BOSS, IntroCutscene_Movement_8
# 84 "data/maps/IntroRoom/scripts.pory"
	message IntroCutscene_Text_6
# 85 "data/maps/IntroRoom/scripts.pory"
	waitmovement
# 86 "data/maps/IntroRoom/scripts.pory"
	waitse
# 87 "data/maps/IntroRoom/scripts.pory"
	waitmessage
# 88 "data/maps/IntroRoom/scripts.pory"
	playse SE_PIN
# 89 "data/maps/IntroRoom/scripts.pory"
	applymovement LOCALID_PLAYER, IntroCutscene_Movement_9
# 94 "data/maps/IntroRoom/scripts.pory"
	waitse
# 95 "data/maps/IntroRoom/scripts.pory"
	applymovement LOCALID_BOSS, IntroCutscene_Movement_10
# 96 "data/maps/IntroRoom/scripts.pory"
	waitmovement LOCALID_BOSS
# 97 "data/maps/IntroRoom/scripts.pory"
	turnobject LOCALID_BOSS, DIR_NORTH
# 98 "data/maps/IntroRoom/scripts.pory"
	waitbuttonpress
# 99 "data/maps/IntroRoom/scripts.pory"
	createfieldmugshot MUGSHOT_BOSS, EMOTE_NORMAL
# 100 "data/maps/IntroRoom/scripts.pory"
	setspeaker IntroCutscene_Text_0
# 101 "data/maps/IntroRoom/scripts.pory"
	message IntroCutscene_Text_7
# 102 "data/maps/IntroRoom/scripts.pory"
	applymovement LOCALID_BOSS, IntroCutscene_Movement_11
# 108 "data/maps/IntroRoom/scripts.pory"
	waitmovement LOCALID_BOSS
# 109 "data/maps/IntroRoom/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_WEST
# 110 "data/maps/IntroRoom/scripts.pory"
	applymovement LOCALID_BOSS, IntroCutscene_Movement_12
# 118 "data/maps/IntroRoom/scripts.pory"
	waitmovement LOCALID_BOSS
# 119 "data/maps/IntroRoom/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 120 "data/maps/IntroRoom/scripts.pory"
	waitmessage
# 121 "data/maps/IntroRoom/scripts.pory"
	waitbuttonpress
# 122 "data/maps/IntroRoom/scripts.pory"
	givemon SPECIES_HAMTARO, 100, ITEM_SITRUS_BERRY
# 123 "data/maps/IntroRoom/scripts.pory"
	message IntroCutscene_Text_8
# 124 "data/maps/IntroRoom/scripts.pory"
	setflag FLAG_USED_ROOM_1_KEY
# 125 "data/maps/IntroRoom/scripts.pory"
	waitmessage
# 126 "data/maps/IntroRoom/scripts.pory"
	waitbuttonpress
# 127 "data/maps/IntroRoom/scripts.pory"
	closemessage
# 128 "data/maps/IntroRoom/scripts.pory"
	call IntroBattleHandler
# 129 "data/maps/IntroRoom/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 130 "data/maps/IntroRoom/scripts.pory"
	createfieldmugshot MUGSHOT_BOSS, EMOTE_NORMAL
# 131 "data/maps/IntroRoom/scripts.pory"
	setspeaker IntroCutscene_Text_0
# 132 "data/maps/IntroRoom/scripts.pory"
	switch VAR_RESULT
# 133 "data/maps/IntroRoom/scripts.pory"
	case B_OUTCOME_WON, IntroCutscene_3
# 135 "data/maps/IntroRoom/scripts.pory"
	case B_OUTCOME_RAN, IntroCutscene_4
# 139 "data/maps/IntroRoom/scripts.pory"
	case B_OUTCOME_LOST, IntroCutscene_5
IntroCutscene_1:
# 143 "data/maps/IntroRoom/scripts.pory"
	message IntroCutscene_Text_12
# 144 "data/maps/IntroRoom/scripts.pory"
	waitmessage
# 145 "data/maps/IntroRoom/scripts.pory"
	waitbuttonpress
# 146 "data/maps/IntroRoom/scripts.pory"
	closemessage
# 147 "data/maps/IntroRoom/scripts.pory"
	applymovement LOCALID_BOSS, IntroCutscene_Movement_13
# 148 "data/maps/IntroRoom/scripts.pory"
	waitmovement
# 149 "data/maps/IntroRoom/scripts.pory"
	applymovement LOCALID_PLAYER, IntroCutscene_Movement_14
# 150 "data/maps/IntroRoom/scripts.pory"
	waitmovement
# 151 "data/maps/IntroRoom/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_SOUTH
# 152 "data/maps/IntroRoom/scripts.pory"
	additem ITEM_TM_TACKLE, 1
# 153 "data/maps/IntroRoom/scripts.pory"
	additem ITEM_TM_YAWN, 1
# 154 "data/maps/IntroRoom/scripts.pory"
	additem ITEM_TM_DIG, 1
# 155 "data/maps/IntroRoom/scripts.pory"
	message IntroCutscene_Text_13
# 156 "data/maps/IntroRoom/scripts.pory"
	applymovement LOCALID_PLAYER, IntroCutscene_Movement_15
# 157 "data/maps/IntroRoom/scripts.pory"
	waitse
# 158 "data/maps/IntroRoom/scripts.pory"
	waitmessage
# 159 "data/maps/IntroRoom/scripts.pory"
	waitbuttonpress
# 160 "data/maps/IntroRoom/scripts.pory"
	message IntroCutscene_Text_14
# 161 "data/maps/IntroRoom/scripts.pory"
	waitmessage
# 162 "data/maps/IntroRoom/scripts.pory"
	waitbuttonpress
# 163 "data/maps/IntroRoom/scripts.pory"
	closemessage
# 164 "data/maps/IntroRoom/scripts.pory"
	message IntroCutscene_Text_15
# 165 "data/maps/IntroRoom/scripts.pory"
	applymovement LOCALID_PLAYER, IntroCutscene_Movement_15
# 166 "data/maps/IntroRoom/scripts.pory"
	waitmessage
# 167 "data/maps/IntroRoom/scripts.pory"
	waitbuttonpress
# 168 "data/maps/IntroRoom/scripts.pory"
	closemessage
# 169 "data/maps/IntroRoom/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 170 "data/maps/IntroRoom/scripts.pory"
	waitmovement
# 171 "data/maps/IntroRoom/scripts.pory"
	createfieldmugshot MUGSHOT_BOSS, EMOTE_NORMAL
# 172 "data/maps/IntroRoom/scripts.pory"
	setspeaker IntroCutscene_Text_0
# 173 "data/maps/IntroRoom/scripts.pory"
	message IntroCutscene_Text_16
# 174 "data/maps/IntroRoom/scripts.pory"
	waitmessage
# 175 "data/maps/IntroRoom/scripts.pory"
	waitbuttonpress
# 176 "data/maps/IntroRoom/scripts.pory"
	applymovement LOCALID_BOSS, IntroCutscene_Movement_16
# 177 "data/maps/IntroRoom/scripts.pory"
	playse SE_PIN
# 178 "data/maps/IntroRoom/scripts.pory"
	waitmovement
# 179 "data/maps/IntroRoom/scripts.pory"
	waitse
# 180 "data/maps/IntroRoom/scripts.pory"
	message IntroCutscene_Text_17
# 181 "data/maps/IntroRoom/scripts.pory"
	waitmessage
# 182 "data/maps/IntroRoom/scripts.pory"
	waitbuttonpress
# 183 "data/maps/IntroRoom/scripts.pory"
	applymovement LOCALID_BOSS, IntroCutscene_Movement_17
# 187 "data/maps/IntroRoom/scripts.pory"
	applymovement LOCALID_PLAYER, IntroCutscene_Movement_18
# 193 "data/maps/IntroRoom/scripts.pory"
	waitmovement LOCALID_BOSS
# 194 "data/maps/IntroRoom/scripts.pory"
	playse SE_EXIT
# 195 "data/maps/IntroRoom/scripts.pory"
	removeobject LOCALID_BOSS
# 196 "data/maps/IntroRoom/scripts.pory"
	waitse
# 197 "data/maps/IntroRoom/scripts.pory"
	waitmovement LOCALID_PLAYER
# 198 "data/maps/IntroRoom/scripts.pory"
	warp MAP_HAM_HAM_CLUBHOUSE, 0
# 199 "data/maps/IntroRoom/scripts.pory"
	waitstate
# 200 "data/maps/IntroRoom/scripts.pory"
	releaseall
	end

IntroCutscene_3:
# 134 "data/maps/IntroRoom/scripts.pory"
	msgbox IntroCutscene_Text_9
	goto IntroCutscene_1

IntroCutscene_4:
# 136 "data/maps/IntroRoom/scripts.pory"
	msgbox IntroCutscene_Text_10
# 137 "data/maps/IntroRoom/scripts.pory"
	special HealPlayerParty
# 138 "data/maps/IntroRoom/scripts.pory"
	call IntroBattleHandler
	goto IntroCutscene_1

IntroCutscene_5:
# 140 "data/maps/IntroRoom/scripts.pory"
	msgbox IntroCutscene_Text_11
	end


IntroBattleHandler::
# 205 "data/maps/IntroRoom/scripts.pory"
	setflag FLAG_NO_WHITEOUT
# 206 "data/maps/IntroRoom/scripts.pory"
	setwildbattle SPECIES_BOSS, 5
# 207 "data/maps/IntroRoom/scripts.pory"
	dowildbattle
	return


# 9 "data/maps/IntroRoom/scripts.pory"
IntroRoom_TurnHamtaro_Movement_0:
# 10 "data/maps/IntroRoom/scripts.pory"
	face_up
	step_end

# 19 "data/maps/IntroRoom/scripts.pory"
IntroCutscene_Movement_0:
# 20 "data/maps/IntroRoom/scripts.pory"
	face_up
# 21 "data/maps/IntroRoom/scripts.pory"
	emote_double_exclamation_mark
	step_end

# 26 "data/maps/IntroRoom/scripts.pory"
IntroCutscene_Movement_1:
# 26 "data/maps/IntroRoom/scripts.pory"
	emote_double_exclamation_mark
	step_end

# 27 "data/maps/IntroRoom/scripts.pory"
IntroCutscene_Movement_2:
# 28 "data/maps/IntroRoom/scripts.pory"
	walk_left
# 29 "data/maps/IntroRoom/scripts.pory"
	walk_left
	step_end

# 35 "data/maps/IntroRoom/scripts.pory"
IntroCutscene_Movement_3:
# 36 "data/maps/IntroRoom/scripts.pory"
	walk_right
# 37 "data/maps/IntroRoom/scripts.pory"
	walk_right
# 38 "data/maps/IntroRoom/scripts.pory"
	walk_right
# 39 "data/maps/IntroRoom/scripts.pory"
	walk_right
	step_end

# 45 "data/maps/IntroRoom/scripts.pory"
IntroCutscene_Movement_4:
# 46 "data/maps/IntroRoom/scripts.pory"
	face_down
	step_end

# 52 "data/maps/IntroRoom/scripts.pory"
IntroCutscene_Movement_5:
# 53 "data/maps/IntroRoom/scripts.pory"
	walk_left
# 54 "data/maps/IntroRoom/scripts.pory"
	walk_left
# 55 "data/maps/IntroRoom/scripts.pory"
	walk_down
	step_end

# 62 "data/maps/IntroRoom/scripts.pory"
IntroCutscene_Movement_6:
# 62 "data/maps/IntroRoom/scripts.pory"
	emote_double_exclamation_mark
# 62 "data/maps/IntroRoom/scripts.pory"
	delay_16
	step_end

# 65 "data/maps/IntroRoom/scripts.pory"
IntroCutscene_Movement_7:
# 66 "data/maps/IntroRoom/scripts.pory"
	walk_left
# 67 "data/maps/IntroRoom/scripts.pory"
	walk_left
# 68 "data/maps/IntroRoom/scripts.pory"
	walk_down
# 69 "data/maps/IntroRoom/scripts.pory"
	walk_down
# 70 "data/maps/IntroRoom/scripts.pory"
	walk_down
# 71 "data/maps/IntroRoom/scripts.pory"
	walk_down
# 72 "data/maps/IntroRoom/scripts.pory"
	walk_right
# 73 "data/maps/IntroRoom/scripts.pory"
	walk_right
# 74 "data/maps/IntroRoom/scripts.pory"
	walk_up
	step_end

# 83 "data/maps/IntroRoom/scripts.pory"
IntroCutscene_Movement_8:
# 83 "data/maps/IntroRoom/scripts.pory"
	tackq
# 83 "data/maps/IntroRoom/scripts.pory"
	delay_16
	step_end

# 89 "data/maps/IntroRoom/scripts.pory"
IntroCutscene_Movement_9:
# 90 "data/maps/IntroRoom/scripts.pory"
	emote_exclamation_mark
# 91 "data/maps/IntroRoom/scripts.pory"
	delay_16
# 92 "data/maps/IntroRoom/scripts.pory"
	face_down
	step_end

# 95 "data/maps/IntroRoom/scripts.pory"
IntroCutscene_Movement_10:
# 95 "data/maps/IntroRoom/scripts.pory"
	walk_down
	step_end

# 102 "data/maps/IntroRoom/scripts.pory"
IntroCutscene_Movement_11:
# 103 "data/maps/IntroRoom/scripts.pory"
	walk_left
# 104 "data/maps/IntroRoom/scripts.pory"
	walk_left
# 105 "data/maps/IntroRoom/scripts.pory"
	walk_up
# 106 "data/maps/IntroRoom/scripts.pory"
	walk_up
	step_end

# 110 "data/maps/IntroRoom/scripts.pory"
IntroCutscene_Movement_12:
# 111 "data/maps/IntroRoom/scripts.pory"
	walk_up
# 112 "data/maps/IntroRoom/scripts.pory"
	walk_up
# 113 "data/maps/IntroRoom/scripts.pory"
	walk_up
# 114 "data/maps/IntroRoom/scripts.pory"
	walk_right
# 115 "data/maps/IntroRoom/scripts.pory"
	walk_right
# 116 "data/maps/IntroRoom/scripts.pory"
	walk_down
	step_end

# 147 "data/maps/IntroRoom/scripts.pory"
IntroCutscene_Movement_13:
# 147 "data/maps/IntroRoom/scripts.pory"
	emote_x
# 147 "data/maps/IntroRoom/scripts.pory"
	delay_16
# 147 "data/maps/IntroRoom/scripts.pory"
	delay_16
# 147 "data/maps/IntroRoom/scripts.pory"
	delay_16
	step_end

# 149 "data/maps/IntroRoom/scripts.pory"
IntroCutscene_Movement_14:
# 149 "data/maps/IntroRoom/scripts.pory"
	emote_x
# 149 "data/maps/IntroRoom/scripts.pory"
	delay_16
	step_end

# 156 "data/maps/IntroRoom/scripts.pory"
IntroCutscene_Movement_15:
# 156 "data/maps/IntroRoom/scripts.pory"
	yepp
	step_end

# 176 "data/maps/IntroRoom/scripts.pory"
IntroCutscene_Movement_16:
# 176 "data/maps/IntroRoom/scripts.pory"
	emote_exclamation_mark
# 176 "data/maps/IntroRoom/scripts.pory"
	delay_16
	step_end

# 183 "data/maps/IntroRoom/scripts.pory"
IntroCutscene_Movement_17:
# 184 "data/maps/IntroRoom/scripts.pory"
	walk_down
# 185 "data/maps/IntroRoom/scripts.pory"
	walk_right
# 185 "data/maps/IntroRoom/scripts.pory"
	walk_right
# 185 "data/maps/IntroRoom/scripts.pory"
	walk_right
# 185 "data/maps/IntroRoom/scripts.pory"
	walk_right
# 185 "data/maps/IntroRoom/scripts.pory"
	walk_right
# 185 "data/maps/IntroRoom/scripts.pory"
	walk_right
# 185 "data/maps/IntroRoom/scripts.pory"
	walk_right
# 185 "data/maps/IntroRoom/scripts.pory"
	walk_right
# 185 "data/maps/IntroRoom/scripts.pory"
	walk_right
# 185 "data/maps/IntroRoom/scripts.pory"
	walk_right
# 185 "data/maps/IntroRoom/scripts.pory"
	walk_right
# 185 "data/maps/IntroRoom/scripts.pory"
	walk_right
# 185 "data/maps/IntroRoom/scripts.pory"
	walk_right
# 185 "data/maps/IntroRoom/scripts.pory"
	walk_right
# 185 "data/maps/IntroRoom/scripts.pory"
	walk_right
# 185 "data/maps/IntroRoom/scripts.pory"
	walk_right
# 185 "data/maps/IntroRoom/scripts.pory"
	walk_right
	step_end

# 187 "data/maps/IntroRoom/scripts.pory"
IntroCutscene_Movement_18:
# 188 "data/maps/IntroRoom/scripts.pory"
	delay_16
# 189 "data/maps/IntroRoom/scripts.pory"
	delay_16
# 190 "data/maps/IntroRoom/scripts.pory"
	walk_up
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

IntroCutscene_Text_0:
# 24 "data/maps/IntroRoom/scripts.pory"
	.string "Boss$"

IntroCutscene_Text_1:
# 25 "data/maps/IntroRoom/scripts.pory"
	.string "... and the dance parties just aren't\nas popular anymore.$"

IntroCutscene_Text_2:
# 33 "data/maps/IntroRoom/scripts.pory"
	.string "So, I got to thinking, Ham-chat's still\ncool, but how else can we use it?$"

IntroCutscene_Text_3:
# 43 "data/maps/IntroRoom/scripts.pory"
	.string "So that's when I...$"

IntroCutscene_Text_4:
# 50 "data/maps/IntroRoom/scripts.pory"
	.string "...wait...$"

IntroCutscene_Text_5:
# 61 "data/maps/IntroRoom/scripts.pory"
	.string "Hey, Hamtaro! Stop falling asleep while\nI'm talking to you!$"

IntroCutscene_Text_6:
# 84 "data/maps/IntroRoom/scripts.pory"
	.string "{COLOR RED}TACK-Q!{PLAY_SE SE_M_COMET_PUNCH}$"

IntroCutscene_Text_7:
# 101 "data/maps/IntroRoom/scripts.pory"
	.string "Now, as I was saying, we need\nto find a new, more exciting way to\luse Ham-chat!$"

IntroCutscene_Text_8:
# 123 "data/maps/IntroRoom/scripts.pory"
	.string "It hit me when I saw a video game!\pWe'll have a tournament where strength,\ncunning, and knowledge of hamchat are \lthe key to victory!\pHere, let's give it a shot!$"

IntroCutscene_Text_9:
# 134 "data/maps/IntroRoom/scripts.pory"
	.string "Wow, you're really good at this HAMTARO!$"

IntroCutscene_Text_10:
# 136 "data/maps/IntroRoom/scripts.pory"
	.string "Come on HAMTARO, it's not fun if you\ngive up right away.\pLet's do it again for real this time!$"

IntroCutscene_Text_11:
# 140 "data/maps/IntroRoom/scripts.pory"
	.string "Only makes sense that I'd win this\nfirst one since I invented it.\pYou'll get better with practice.$"

IntroCutscene_Text_12:
# 143 "data/maps/IntroRoom/scripts.pory"
	.string "Now, let me give you a new\nHamchat Dictionary.\pThis has the words you just used and\nthe ones you saw me use.$"

IntroCutscene_Text_13:
# 155 "data/maps/IntroRoom/scripts.pory"
	.string "{PLAY_SE MUS_RG_OBTAIN_KEY_ITEM}You received the Hamchat Dictionary!$"

IntroCutscene_Text_14:
# 160 "data/maps/IntroRoom/scripts.pory"
	.string "Use it to learn new Hamchat and to\nremember the ones you already know.\pYou can have up to four hamchat ready\nfor a battle at once.$"

IntroCutscene_Text_15:
# 164 "data/maps/IntroRoom/scripts.pory"
	.string "You learned {COLOR RED}HAMHA{COLOR DARK_GRAY},{COLOR RED}BLAHH{COLOR DARK_GRAY}, \nand {COLOR RED}TACK-Q{COLOR DARK_GRAY}!$"

IntroCutscene_Text_16:
# 173 "data/maps/IntroRoom/scripts.pory"
	.string "Great! You should be good to get\nto get started now!\pI need your help to get everyone\nback to the clubhouse so we can\lget the tournament started!$"

IntroCutscene_Text_17:
# 180 "data/maps/IntroRoom/scripts.pory"
	.string "Oh! And we need PANDA's help to remodel\nthis room for the new tournament!\pCome on Hamtaro, let's get going!$"
