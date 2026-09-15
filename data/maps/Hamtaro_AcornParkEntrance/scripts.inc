Hamtaro_AcornParkEntrance_MapScripts::
	.byte 0


TestingScratch::
# 4 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	setflag FLAG_HIDDEN_OXNARD
	return


AcornParkEntranceOxnard::
# 8 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	lock
# 9 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	faceplayer
# 10 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	dynmultichoice 1, 1, FALSE, 4, 0, DYN_MULTICHOICE_CB_NONE, gText_Hamha, gText_TackQ, gText_DigDig
# 11 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	switch VAR_RESULT
# 12 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	case 0, AcornParkEntranceOxnard_3
# 81 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	case 1, AcornParkEntranceOxnard_4
# 92 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	case 2, AcornParkEntranceOxnard_5
AcornParkEntranceOxnard_1:
# 97 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	release
	end

AcornParkEntranceOxnard_3:
# 13 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	call Common_EventScript_MoveToFront
# 14 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	call Common_EventScript_Hamha
# 15 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	applymovement LOCALID_PLAYER, AcornParkEntranceOxnard_Movement_0
# 16 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	waitmovement
# 17 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	createfieldmugshot MUGSHOT_OXNARD, EMOTE_NORMAL
# 18 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	setspeaker AcornParkEntranceOxnard_Text_0
# 19 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	message AcornParkEntranceOxnard_Text_1
# 20 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	waitmessage
# 21 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	waitbuttonpress
# 22 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	applymovement LOCALID_OXNARDOW, AcornParkEntranceOxnard_Movement_1
# 23 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	message AcornParkEntranceOxnard_Text_2
# 24 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	waitmessage
# 25 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	waitbuttonpress
# 26 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	waitmovement
# 27 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	closemessage
# 28 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	checkitem ITEM_TM_TEARFUL_LOOK
# 29 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq AcornParkEntranceOxnard_7
AcornParkEntranceOxnard_6:
# 43 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	applymovement LOCALID_OXNARDOW, AcornParkEntranceOxnard_Movement_4
# 44 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	waitmovement
# 45 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	checkitem ITEM_SUNFLOWER_SEED
# 46 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne AcornParkEntranceOxnard_10
AcornParkEntranceOxnard_9:
	goto AcornParkEntranceOxnard_1

AcornParkEntranceOxnard_4:
# 82 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	call Common_EventScript_MoveToFront
# 83 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	call Common_EventScript_TackQ
# 84 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	applymovement LOCALID_OXNARDOW, AcornParkEntranceOxnard_Movement_7
# 85 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	createfieldmugshot MUGSHOT_OXNARD, EMOTE_NORMAL
# 86 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	setspeaker AcornParkEntranceOxnard_Text_0
# 87 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	message AcornParkEntranceOxnard_Text_9
# 88 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	waitbuttonpress
# 89 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	closemessage
# 90 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	applymovement LOCALID_OXNARDOW, AcornParkEntranceOxnard_Movement_4
	goto AcornParkEntranceOxnard_1

AcornParkEntranceOxnard_5:
# 93 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	call Common_EventScript_DigDig
# 94 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	applymovement LOCALID_PLAYER, AcornParkEntranceOxnard_Movement_8
	goto AcornParkEntranceOxnard_1

AcornParkEntranceOxnard_7:
# 30 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	setspeaker SP_NAME_NONE
# 31 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	message AcornParkEntranceOxnard_Text_3
# 32 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	applymovement LOCALID_PLAYER, AcornParkEntranceOxnard_Movement_2
# 33 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	waitmovement
# 34 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	playse MUS_RG_OBTAIN_KEY_ITEM
# 35 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	additem ITEM_TM_TEARFUL_LOOK, 1
# 36 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	applymovement LOCALID_PLAYER, AcornParkEntranceOxnard_Movement_3
# 37 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	waitmessage
# 38 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	waitbuttonpress
# 39 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	closemessage
# 40 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	applymovement LOCALID_PLAYER, AcornParkEntranceOxnard_Movement_0
# 41 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	waitmovement
	goto AcornParkEntranceOxnard_6

AcornParkEntranceOxnard_10:
# 47 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	createfieldmugshot MUGSHOT_OXNARD, EMOTE_NORMAL
# 48 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	setspeaker AcornParkEntranceOxnard_Text_0
# 49 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	applymovement LOCALID_OXNARDOW, AcornParkEntranceOxnard_Movement_5
# 50 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	msgbox AcornParkEntranceOxnard_Text_4
# 51 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	setspeaker NULL
# 52 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	removefieldmugshot
# 53 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	msgbox AcornParkEntranceOxnard_Text_5, MSGBOX_YESNO
# 54 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne AcornParkEntranceOxnard_12
# 72 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	call Common_EventScript_NoP
# 73 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	applymovement LOCALID_PLAYER, AcornParkEntranceOxnard_Movement_0
# 74 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	waitmovement
# 75 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	createfieldmugshot MUGSHOT_OXNARD, EMOTE_NORMAL
# 76 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	setspeaker AcornParkEntranceOxnard_Text_0
# 77 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	msgbox AcornParkEntranceOxnard_Text_8
	goto AcornParkEntranceOxnard_9

AcornParkEntranceOxnard_12:
# 55 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	call Common_EventScript_YepP
# 56 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	applymovement LOCALID_PLAYER, AcornParkEntranceOxnard_Movement_0
# 57 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	waitmovement
# 58 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	clearflag FLAG_HIDDEN_OXNARD
# 59 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	removeobject LOCALID_OXNARDOW
# 60 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	delay 1
# 61 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	addobject LOCALID_OXNARD, MAP_HAMTARO_ACORN_PARK_ENTRANCE
# 62 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	delay 1
# 63 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	createfieldmugshot MUGSHOT_OXNARD, EMOTE_NORMAL
# 64 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	setspeaker AcornParkEntranceOxnard_Text_0
# 65 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	msgbox AcornParkEntranceOxnard_Text_6
# 66 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	msgbox AcornParkEntranceOxnard_Text_7
# 67 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	applymovement LOCALID_OXNARD, AcornParkEntranceOxnard_Movement_6
# 68 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	waitmovement
# 69 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	setflag FLAG_GOT_OXNARD
# 70 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	removeobject LOCALID_OXNARD
	goto AcornParkEntranceOxnard_9


# 15 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
AcornParkEntranceOxnard_Movement_0:
# 15 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	face_up
	step_end

# 22 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
AcornParkEntranceOxnard_Movement_1:
# 22 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	walk_in_place_up
# 22 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	walk_in_place_up
# 22 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	walk_in_place_up
# 22 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	walk_in_place_up
	step_end

# 32 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
AcornParkEntranceOxnard_Movement_2:
# 32 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	bluhoo
	step_end

# 36 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
AcornParkEntranceOxnard_Movement_3:
# 36 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	emote_x
	step_end

# 43 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
AcornParkEntranceOxnard_Movement_4:
# 43 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	walk_in_place_down
	step_end

# 49 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
AcornParkEntranceOxnard_Movement_5:
# 49 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	emote_exclamation_mark
	step_end

# 67 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
AcornParkEntranceOxnard_Movement_6:
# 67 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	walk_left
# 67 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	walk_left
# 67 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	walk_down
# 67 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	walk_down
# 67 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	walk_down
# 67 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	walk_down
# 67 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	walk_down
# 67 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	walk_down
# 67 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	walk_down
# 67 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	walk_down
	step_end

# 84 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
AcornParkEntranceOxnard_Movement_7:
# 84 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	walk_in_place_left
# 84 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	walk_in_place_left
# 84 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	walk_in_place_left
# 84 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	walk_in_place_left
	step_end

# 94 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
AcornParkEntranceOxnard_Movement_8:
# 94 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	face_down
	step_end

AcornParkEntranceOxnard_Text_0:
# 18 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	.string "Oxnard$"

AcornParkEntranceOxnard_Text_1:
# 19 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	.string "oh... Hi HAMTARO...\pDid you need something?\pOh... I don't think I can go back to\nthe clubhouse right now... Y'see...\lI lost my sunflower seed...$"

AcornParkEntranceOxnard_Text_2:
# 23 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	.string "I'm just too... {COLOR RED}BLUHOO{COLOR DARK_GRAY} right now.$"

AcornParkEntranceOxnard_Text_3:
# 31 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	.string "You learned {COLOR RED}Bluhoo!$"

AcornParkEntranceOxnard_Text_4:
# 50 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	.string "Hamtaro! That smell, is it my \nsunflower seed?$"

AcornParkEntranceOxnard_Text_5:
# 53 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	.string "Give OXNARD the sunflower seed?$"

AcornParkEntranceOxnard_Text_6:
# 65 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	.string "Thank you so much Hamtaro!$"

AcornParkEntranceOxnard_Text_7:
# 66 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	.string "BOSS wants to do a tournament?\pThere's fighting?\pSounds scary, but since you helped\nfind my sunflower seed I guess I'll try.\pSee you at the clubhouse HAMTARO!$"

AcornParkEntranceOxnard_Text_8:
# 77 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	.string "Oh... okay...$"

AcornParkEntranceOxnard_Text_9:
# 87 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	.string "Owww.... why did you do that HAMTARO?\nWhat did I do to you???\lwhy would you do that?$"
