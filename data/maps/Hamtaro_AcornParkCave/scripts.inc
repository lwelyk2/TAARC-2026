Hamtaro_AcornParkCave_MapScripts::
	.byte 0


AcornParkCaveDigDig::
# 4 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 5 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	compare VAR_TEMP_0, VAR_TEMP_3
	goto_if_gt AcornParkCaveDigDig_2
# 21 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	compare VAR_TEMP_0, VAR_TEMP_3
	goto_if_lt AcornParkCaveDigDig_3
AcornParkCaveDigDig_1:
# 38 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	compare VAR_TEMP_1, VAR_TEMP_4
	goto_if_gt AcornParkCaveDigDig_7
# 54 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	compare VAR_TEMP_1, VAR_TEMP_4
	goto_if_lt AcornParkCaveDigDig_8
AcornParkCaveDigDig_6:
# 71 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	call Common_EventScript_DigDig
	return

AcornParkCaveDigDig_2:
# 6 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	subvar VAR_TEMP_0, VAR_TEMP_3
# 7 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	switch VAR_TEMP_0
# 8 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	case 1, AcornParkCaveDigDig_12
# 12 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	case 2, AcornParkCaveDigDig_13
# 16 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	case 3, AcornParkCaveDigDig_14
	goto AcornParkCaveDigDig_1

AcornParkCaveDigDig_3:
# 22 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	subvar VAR_TEMP_3, VAR_TEMP_0
# 23 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	switch VAR_TEMP_3
# 24 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	case 1, AcornParkCaveDigDig_16
# 28 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	case 2, AcornParkCaveDigDig_17
# 32 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	case 3, AcornParkCaveDigDig_18
	goto AcornParkCaveDigDig_1

AcornParkCaveDigDig_7:
# 39 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	subvar VAR_TEMP_1, VAR_TEMP_4
# 40 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	switch VAR_TEMP_1
# 41 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	case 1, AcornParkCaveDigDig_20
# 45 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	case 2, AcornParkCaveDigDig_21
# 49 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	case 3, AcornParkCaveDigDig_22
	goto AcornParkCaveDigDig_6

AcornParkCaveDigDig_8:
# 55 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	subvar VAR_TEMP_4, VAR_TEMP_1
# 56 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	switch VAR_TEMP_4
# 57 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	case 1, AcornParkCaveDigDig_24
# 61 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	case 2, AcornParkCaveDigDig_25
# 65 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	case 3, AcornParkCaveDigDig_26
	goto AcornParkCaveDigDig_6

AcornParkCaveDigDig_12:
# 9 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	applymovement LOCALID_PLAYER, AcornParkCaveDigDig_Movement_0
# 10 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	waitmovement
	goto AcornParkCaveDigDig_1

AcornParkCaveDigDig_13:
# 13 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	applymovement LOCALID_PLAYER, AcornParkCaveDigDig_Movement_1
# 14 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	waitmovement
	goto AcornParkCaveDigDig_1

AcornParkCaveDigDig_14:
# 17 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	applymovement LOCALID_PLAYER, AcornParkCaveDigDig_Movement_2
# 18 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	waitmovement
	goto AcornParkCaveDigDig_1

AcornParkCaveDigDig_16:
# 25 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	applymovement LOCALID_PLAYER, AcornParkCaveDigDig_Movement_3
# 26 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	waitmovement
	goto AcornParkCaveDigDig_1

AcornParkCaveDigDig_17:
# 29 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	applymovement LOCALID_PLAYER, AcornParkCaveDigDig_Movement_4
# 30 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	waitmovement
	goto AcornParkCaveDigDig_1

AcornParkCaveDigDig_18:
# 33 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	applymovement LOCALID_PLAYER, AcornParkCaveDigDig_Movement_5
# 34 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	waitmovement
	goto AcornParkCaveDigDig_1

AcornParkCaveDigDig_20:
# 42 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	applymovement LOCALID_PLAYER, AcornParkCaveDigDig_Movement_6
# 43 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	waitmovement
	goto AcornParkCaveDigDig_6

AcornParkCaveDigDig_21:
# 46 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	applymovement LOCALID_PLAYER, AcornParkCaveDigDig_Movement_7
# 47 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	waitmovement
	goto AcornParkCaveDigDig_6

AcornParkCaveDigDig_22:
# 50 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	applymovement LOCALID_PLAYER, AcornParkCaveDigDig_Movement_8
# 51 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	waitmovement
	goto AcornParkCaveDigDig_6

AcornParkCaveDigDig_24:
# 58 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	applymovement LOCALID_PLAYER, AcornParkCaveDigDig_Movement_9
# 59 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	waitmovement
	goto AcornParkCaveDigDig_6

AcornParkCaveDigDig_25:
# 62 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	applymovement LOCALID_PLAYER, AcornParkCaveDigDig_Movement_10
# 63 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	waitmovement
	goto AcornParkCaveDigDig_6

AcornParkCaveDigDig_26:
# 66 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	applymovement LOCALID_PLAYER, AcornParkCaveDigDig_Movement_11
# 67 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	waitmovement
	goto AcornParkCaveDigDig_6


AcornParkCaveBottomLeft::
# 76 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	lock
# 77 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	dynmultichoice 1, 1, FALSE, 4, 0, DYN_MULTICHOICE_CB_NONE, gText_Hamha, gText_TackQ, gText_DigDig
# 78 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	switch VAR_RESULT
# 79 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	case 0, AcornParkCaveBottomLeft_3
# 82 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	case 1, AcornParkCaveBottomLeft_4
# 85 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	case 2, AcornParkCaveBottomLeft_5
AcornParkCaveBottomLeft_1:
# 92 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	release
	return

AcornParkCaveBottomLeft_3:
# 80 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	call Common_EventScript_Hamha
	goto AcornParkCaveBottomLeft_1

AcornParkCaveBottomLeft_4:
# 83 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	call Common_EventScript_TackQ
	goto AcornParkCaveBottomLeft_1

AcornParkCaveBottomLeft_5:
# 86 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	setvar VAR_TEMP_3, 3
# 87 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	setvar VAR_TEMP_4, 17
# 88 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	call AcornParkCaveDigDig
# 89 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	msgbox AcornParkCaveBottomLeft_Text_0
	goto AcornParkCaveBottomLeft_1


AcornParkCaveMiddle::
# 96 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	lock
# 97 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	dynmultichoice 1, 1, FALSE, 4, 0, DYN_MULTICHOICE_CB_NONE, gText_Hamha, gText_TackQ, gText_DigDig
# 98 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	switch VAR_RESULT
# 99 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	case 0, AcornParkCaveMiddle_3
# 102 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	case 1, AcornParkCaveMiddle_4
# 105 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	case 2, AcornParkCaveMiddle_5
AcornParkCaveMiddle_1:
# 112 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	release
	return

AcornParkCaveMiddle_3:
# 100 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	call Common_EventScript_Hamha
	goto AcornParkCaveMiddle_1

AcornParkCaveMiddle_4:
# 103 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	call Common_EventScript_TackQ
	goto AcornParkCaveMiddle_1

AcornParkCaveMiddle_5:
# 106 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	setvar VAR_TEMP_3, 10
# 107 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	setvar VAR_TEMP_4, 12
# 108 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	call AcornParkCaveDigDig
# 109 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	msgbox AcornParkCaveBottomLeft_Text_0
	goto AcornParkCaveMiddle_1


# 9 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
AcornParkCaveDigDig_Movement_0:
# 9 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	walk_left
	step_end

# 13 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
AcornParkCaveDigDig_Movement_1:
# 13 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	walk_left
# 13 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	walk_left
	step_end

# 17 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
AcornParkCaveDigDig_Movement_2:
# 17 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	walk_left
# 17 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	walk_left
# 17 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	walk_left
	step_end

# 25 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
AcornParkCaveDigDig_Movement_3:
# 25 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	walk_right
	step_end

# 29 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
AcornParkCaveDigDig_Movement_4:
# 29 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	walk_right
# 29 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	walk_right
	step_end

# 33 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
AcornParkCaveDigDig_Movement_5:
# 33 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	walk_right
# 33 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	walk_right
# 33 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	walk_right
	step_end

# 42 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
AcornParkCaveDigDig_Movement_6:
# 42 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	walk_up
	step_end

# 46 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
AcornParkCaveDigDig_Movement_7:
# 46 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	walk_up
# 46 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	walk_up
	step_end

# 50 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
AcornParkCaveDigDig_Movement_8:
# 50 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	walk_up
# 50 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	walk_up
# 50 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	walk_up
	step_end

# 58 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
AcornParkCaveDigDig_Movement_9:
# 58 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	walk_down
	step_end

# 62 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
AcornParkCaveDigDig_Movement_10:
# 62 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	walk_down
# 62 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	walk_down
	step_end

# 66 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
AcornParkCaveDigDig_Movement_11:
# 66 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	walk_down
# 66 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	walk_down
# 66 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	walk_down
	step_end

AcornParkCaveBottomLeft_Text_0:
# 89 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	.string "Nothing here...$"
