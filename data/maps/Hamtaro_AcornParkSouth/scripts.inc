Hamtaro_AcornParkSouth_MapScripts::
# 2 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, AcornPark_LadderCheck
	.byte 0


AcornPark_LadderCheck::
# 6 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	goto_if_set FLAG_GAVE_PANDA_HAMMER, AcornPark_LadderCheck_2
AcornPark_LadderCheck_1:
	return

AcornPark_LadderCheck_2:
# 7 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	call AcornPark_FixLadder
	goto AcornPark_LadderCheck_1


AcornPark_FixLadder::
# 13 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	setmetatile 4, 5, 0x0DA, FALSE
# 14 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	setmetatile 4, 6, 0x0E2, FALSE
# 15 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	setmetatile 4, 7, 0x0EA, FALSE
# 16 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	setmetatile 4, 8, 0x0F2, FALSE
# 17 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	setmetatile 4, 9, 0x0FA, FALSE
# 18 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	setmetatile 5, 5, 0x0DB, FALSE
# 19 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	setmetatile 5, 6, 0x0E3, FALSE
# 20 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	setmetatile 5, 7, 0x0EB, FALSE
# 21 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	setmetatile 5, 8, 0x0F3, FALSE
# 22 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	setmetatile 5, 9, 0x0FB, FALSE
# 23 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	setmetatile 6, 5, 0x0DC, FALSE
# 24 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	setmetatile 6, 6, 0x0E4, FALSE
# 25 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	setmetatile 6, 7, 0x0EC, FALSE
# 26 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	setmetatile 6, 8, 0x0F4, FALSE
# 27 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	setmetatile 6, 9, 0x0FC, FALSE
	return


AcornPathSouthPanda::
# 31 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	lock
# 32 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	getobjectfacingdirection LOCALID_PLAYER, VAR_TEMP_1
# 33 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	switch VAR_TEMP_1
# 34 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	case DIR_EAST, AcornPathSouthPanda_3
# 41 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	case DIR_WEST, AcornPathSouthPanda_4
AcornPathSouthPanda_1:
# 51 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	playmoncry SPECIES_HAMTARO, CRY_MODE_ENCOUNTER
# 52 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	createfieldmugshot MUGSHOT_HAMTARO, EMOTE_NORMAL
# 53 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	setspeaker AcornPathSouthPanda_Text_0
# 54 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	message AcornPathSouthPanda_Text_1
# 55 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	applymovement LOCALID_PLAYER, AcornParkSouthHamha
# 56 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	waitmovement LOCALID_PLAYER
# 57 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	waitmessage
# 58 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	waitbuttonpress
# 59 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	closemessage
# 60 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	applymovement LOCALID_PLAYER, AcornPathSouthPanda_Movement_2
# 61 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	waitmovement
# 62 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	applymovement LOCALID_PANDA, AcornPathSouthPanda_Movement_3
# 63 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	waitmovement
# 64 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	createfieldmugshot MUGSHOT_PANDA, EMOTE_NORMAL
# 65 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	setspeaker AcornPathSouthPanda_Text_2
# 66 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	msgbox AcornPathSouthPanda_Text_3
# 67 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	applymovement LOCALID_PANDA, AcornPathSouthPanda_Movement_4
# 68 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	waitmovement
# 69 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	createfieldmugshot MUGSHOT_PANDA, EMOTE_NORMAL
# 70 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	setspeaker AcornPathSouthPanda_Text_2
# 71 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	message AcornPathSouthPanda_Text_4
# 72 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	applymovement LOCALID_PANDA, AcornPathSouthPanda_Movement_3
# 73 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	waitmessage
# 74 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	waitbuttonpress
# 75 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	closemessage
# 76 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	createfieldmugshot MUGSHOT_PANDA, EMOTE_NORMAL
# 77 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	setspeaker AcornPathSouthPanda_Text_2
# 78 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	message AcornPathSouthPanda_Text_5
# 79 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	applymovement LOCALID_PANDA, AcornParkSouthShockie
# 80 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	waitmessage
# 81 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	waitbuttonpress
# 82 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	closemessage
# 83 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	removefieldmugshot
	checkitem ITEM_TM_ASTONISH, 1
# 0 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq AcornPathSouthPanda_7
AcornPathSouthPanda_6:
	checkitem ITEM_HAMMER
# 0 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne AcornPathSouthPanda_10
# 145 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	createfieldmugshot MUGSHOT_PANDA, EMOTE_NORMAL
# 146 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	setspeaker AcornPathSouthPanda_Text_2
# 147 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	msgbox AcornPathSouthPanda_Text_10
# 148 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	applymovement LOCALID_PANDA, AcornPathSouthPanda_Movement_4
# 149 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	waitmovement
# 150 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	release
	end

AcornPathSouthPanda_3:
# 35 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	applymovement LOCALID_PLAYER, AcornPathSouthPanda_Movement_0
# 40 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	waitmovement
	goto AcornPathSouthPanda_1

AcornPathSouthPanda_4:
# 42 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	applymovement LOCALID_PLAYER, AcornPathSouthPanda_Movement_1
# 47 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	waitmovement
	goto AcornPathSouthPanda_1

AcornPathSouthPanda_7:
# 85 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	applymovement LOCALID_PLAYER, AcornParkSouthShockie
# 86 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	waitmovement
# 87 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	setspeaker SP_NAME_NONE
# 88 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	message AcornPathSouthPanda_Text_6
# 89 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	playse MUS_RG_OBTAIN_KEY_ITEM
# 90 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	waitse
# 91 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	additem ITEM_TM_ASTONISH, 1
# 92 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	applymovement LOCALID_PLAYER, AcornParkSouthDictionary
# 93 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	waitmovement
# 94 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	waitmessage
# 95 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	waitbuttonpress
# 96 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	closemessage
# 97 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	applymovement LOCALID_PLAYER, AcornPathSouthPanda_Movement_2
# 98 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	waitmovement
	goto AcornPathSouthPanda_6

AcornPathSouthPanda_10:
# 101 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	createfieldmugshot MUGSHOT_PANDA, EMOTE_NORMAL
# 102 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	setspeaker AcornPathSouthPanda_Text_2
# 103 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	applymovement LOCALID_PANDA, AcornPathSouthPanda_Movement_5
# 104 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	msgbox AcornPathSouthPanda_Text_7
# 105 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	applymovement LOCALID_PANDA, AcornPathSouthPanda_Movement_4
# 106 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	waitmovement
# 107 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	applymovement LOCALID_PLAYER, AcornPathSouthPanda_Movement_6
# 112 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	waitmovement
# 113 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	fadescreen FADE_TO_BLACK
# 114 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	playse SE_M_EARTHQUAKE
# 115 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	waitse
# 116 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	playse SE_M_DIG
# 117 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	waitse
# 118 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	playse SE_M_CUT
# 119 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	waitse
# 120 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	call AcornPark_FixLadder
# 121 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	special DrawWholeMapView
# 122 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 123 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	setspeaker AcornPathSouthPanda_Text_2
# 124 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	createfieldmugshot MUGSHOT_PANDA, EMOTE_NORMAL
# 125 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	msgbox AcornPathSouthPanda_Text_8
# 126 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	applymovement LOCALID_PANDA, AcornPathSouthPanda_Movement_7
# 130 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	applymovement LOCALID_PLAYER, AcornPathSouthPanda_Movement_8
# 133 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	waitmovement
# 134 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	setspeaker AcornPathSouthPanda_Text_2
# 135 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	createfieldmugshot MUGSHOT_PANDA, EMOTE_NORMAL
# 136 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	msgbox AcornPathSouthPanda_Text_9
# 137 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	applymovement LOCALID_PANDA, AcornPathSouthPanda_Movement_9
# 140 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	waitmovement
# 141 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	removeobject LOCALID_PANDA
# 142 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	release
	end


AcornParkSouthSnoozer::
# 157 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	lock
# 158 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	applymovement LOCALID_PLAYER, EmoteTest
# 159 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	waitmovement LOCALID_PLAYER
# 160 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	release
	end


# 164 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
AcornParkSouthHamha:
# 165 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	hamha
	step_end

# 168 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
AcornParkSouthShockie:
# 169 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	delay_16
# 170 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	delay_16
# 171 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	shockie
	step_end

# 174 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
AcornParkSouthDictionary:
# 175 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	delay_8
# 176 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	emote_x
	step_end

# 179 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
EmoteTest:
# 180 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	emote_x
# 181 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	delay_16
# 182 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	delay_16
# 183 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	delay_16
# 184 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	emote_exclamation_mark
# 185 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	delay_16
# 186 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	delay_16
# 187 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	delay_16
# 188 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	emote_question_mark
# 189 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	delay_16
# 190 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	delay_16
# 191 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	delay_16
# 192 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	emote_heart
# 193 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	delay_16
# 194 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	delay_16
# 195 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	delay_16
# 196 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	emote_double_exclamation_mark
# 197 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	delay_16
# 198 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	delay_16
# 199 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	delay_16
	step_end

# 35 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
AcornPathSouthPanda_Movement_0:
# 36 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	walk_down
# 37 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	walk_right
# 38 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	face_up
	step_end

# 42 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
AcornPathSouthPanda_Movement_1:
# 43 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	walk_down
# 44 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	walk_left
# 45 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	face_up
	step_end

# 60 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
AcornPathSouthPanda_Movement_2:
# 60 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	face_up
	step_end

# 62 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
AcornPathSouthPanda_Movement_3:
# 62 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	walk_in_place_down
	step_end

# 67 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
AcornPathSouthPanda_Movement_4:
# 67 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	walk_in_place_up
	step_end

# 103 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
AcornPathSouthPanda_Movement_5:
# 103 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	emote_exclamation_mark
	step_end

# 107 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
AcornPathSouthPanda_Movement_6:
# 108 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	lock_facing_direction
# 109 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	walk_down
# 110 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	unlock_facing_direction
	step_end

# 126 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
AcornPathSouthPanda_Movement_7:
# 127 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	walk_up
# 127 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	walk_up
# 127 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	walk_up
# 127 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	walk_up
# 127 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	walk_up
# 127 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	walk_up
# 128 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	walk_down
	step_end

# 130 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
AcornPathSouthPanda_Movement_8:
# 131 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	walk_up
# 131 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	walk_up
	step_end

# 137 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
AcornPathSouthPanda_Movement_9:
# 138 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	walk_left
# 138 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	walk_left
# 138 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	walk_left
# 138 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	walk_left
# 138 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	walk_left
# 138 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	walk_left
	step_end

AcornPathSouthPanda_Text_0:
# 53 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	.string "Hamtaro$"

AcornPathSouthPanda_Text_1:
# 54 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	.string "{COLOR RED}Hamha!$"

AcornPathSouthPanda_Text_2:
# 65 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	.string "Panda$"

AcornPathSouthPanda_Text_3:
# 66 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	.string "Hey Hamtaro, I'm glad you're here!\pI needed to get some extra parts,\nbut I came by this morning and saw this!$"

AcornPathSouthPanda_Text_4:
# 71 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	.string "The ladder is broken!$"

AcornPathSouthPanda_Text_5:
# 78 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	.string "I was completely {COLOR RED}SHOCKIE{COLOR DARK_GRAY}!$"

AcornPathSouthPanda_Text_6:
# 88 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	.string "You learned {COLOR RED}Shockie!$"

AcornPathSouthPanda_Text_7:
# 104 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	.string "My Hammer! I've been looking all over\n"
	.string "for that!\p"
	.string "Thanks Hamtaro, now I can fix this\n"
	.string "ladder! Stand back and I'll get to work!$"

AcornPathSouthPanda_Text_8:
# 125 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	.string "And that should do it!$"

AcornPathSouthPanda_Text_9:
# 136 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	.string "It works! Thanks for your help Hamtaro!\n"
	.string "I'll see you at the clubhouse later!$"

AcornPathSouthPanda_Text_10:
# 147 "data/maps/Hamtaro_AcornParkSouth/scripts.pory"
	.string "I can fix this, but my hammer is missing\n"
	.string "too!\p"
	.string "If you find it, can you bring it to me?$"
