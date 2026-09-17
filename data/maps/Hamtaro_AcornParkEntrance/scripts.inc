Hamtaro_AcornParkEntrance_MapScripts::
	.byte 0


AcornParkEntranceOxnard::
# 4 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	lock
# 5 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	faceplayer
# 6 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	dynmultichoice 1, 1, FALSE, 4, 0, DYN_MULTICHOICE_CB_NONE, gText_Hamha, gText_TackQ, gText_DigDig
# 7 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	switch VAR_RESULT
# 8 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	case 0, AcornParkEntranceOxnard_3
# 78 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	case 1, AcornParkEntranceOxnard_4
# 89 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	case 2, AcornParkEntranceOxnard_5
AcornParkEntranceOxnard_1:
# 94 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	release
	end

AcornParkEntranceOxnard_3:
# 9 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	call Common_EventScript_MoveToFront
# 10 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	call Common_EventScript_Hamha
# 11 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	applymovement LOCALID_PLAYER, AcornParkEntranceOxnard_Movement_0
# 12 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	waitmovement
# 13 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	createfieldmugshot MUGSHOT_OXNARD, EMOTE_NORMAL
# 14 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	setspeaker AcornParkEntranceOxnard_Text_0
# 15 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	message AcornParkEntranceOxnard_Text_1
# 16 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	waitmessage
# 17 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	waitbuttonpress
# 18 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	applymovement LOCALID_OXNARDOW, AcornParkEntranceOxnard_Movement_1
# 19 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	message AcornParkEntranceOxnard_Text_2
# 20 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	waitmessage
# 21 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	waitbuttonpress
# 22 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	waitmovement
# 23 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	closemessage
# 24 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	checkitem ITEM_TM_TEARFUL_LOOK
# 25 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq AcornParkEntranceOxnard_7
AcornParkEntranceOxnard_6:
# 39 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	applymovement LOCALID_OXNARDOW, AcornParkEntranceOxnard_Movement_4
# 40 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	waitmovement
# 41 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	checkitem ITEM_SUNFLOWER_SEED
# 42 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne AcornParkEntranceOxnard_10
AcornParkEntranceOxnard_9:
	goto AcornParkEntranceOxnard_1

AcornParkEntranceOxnard_4:
# 79 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	call Common_EventScript_MoveToFront
# 80 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	call Common_EventScript_TackQ
# 81 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	applymovement LOCALID_OXNARDOW, AcornParkEntranceOxnard_Movement_7
# 82 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	createfieldmugshot MUGSHOT_OXNARD, EMOTE_NORMAL
# 83 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	setspeaker AcornParkEntranceOxnard_Text_0
# 84 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	message AcornParkEntranceOxnard_Text_9
# 85 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	waitbuttonpress
# 86 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	closemessage
# 87 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	applymovement LOCALID_OXNARDOW, AcornParkEntranceOxnard_Movement_4
	goto AcornParkEntranceOxnard_1

AcornParkEntranceOxnard_5:
# 90 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	call Common_EventScript_DigDig
# 91 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	applymovement LOCALID_PLAYER, AcornParkEntranceOxnard_Movement_8
	goto AcornParkEntranceOxnard_1

AcornParkEntranceOxnard_7:
# 26 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	setspeaker SP_NAME_NONE
# 27 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	message AcornParkEntranceOxnard_Text_3
# 28 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	applymovement LOCALID_PLAYER, AcornParkEntranceOxnard_Movement_2
# 29 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	waitmovement
# 30 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	playse MUS_RG_OBTAIN_KEY_ITEM
# 31 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	additem ITEM_TM_TEARFUL_LOOK, 1
# 32 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	applymovement LOCALID_PLAYER, AcornParkEntranceOxnard_Movement_3
# 33 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	waitmessage
# 34 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	waitbuttonpress
# 35 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	closemessage
# 36 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	applymovement LOCALID_PLAYER, AcornParkEntranceOxnard_Movement_0
# 37 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	waitmovement
	goto AcornParkEntranceOxnard_6

AcornParkEntranceOxnard_10:
# 43 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	createfieldmugshot MUGSHOT_OXNARD, EMOTE_NORMAL
# 44 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	setspeaker AcornParkEntranceOxnard_Text_0
# 45 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	applymovement LOCALID_OXNARDOW, AcornParkEntranceOxnard_Movement_5
# 46 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	msgbox AcornParkEntranceOxnard_Text_4
# 47 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	setspeaker NULL
# 48 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	removefieldmugshot
# 49 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	msgbox AcornParkEntranceOxnard_Text_5, MSGBOX_YESNO
# 50 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne AcornParkEntranceOxnard_12
# 69 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	call Common_EventScript_NoP
# 70 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	applymovement LOCALID_PLAYER, AcornParkEntranceOxnard_Movement_0
# 71 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	waitmovement
# 72 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	createfieldmugshot MUGSHOT_OXNARD, EMOTE_NORMAL
# 73 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	setspeaker AcornParkEntranceOxnard_Text_0
# 74 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	msgbox AcornParkEntranceOxnard_Text_8
	goto AcornParkEntranceOxnard_9

AcornParkEntranceOxnard_12:
# 51 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	call Common_EventScript_YepP
# 52 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	applymovement LOCALID_PLAYER, AcornParkEntranceOxnard_Movement_0
# 53 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	waitmovement
# 54 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	clearflag FLAG_HIDDEN_OXNARD
# 55 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	removeobject LOCALID_OXNARDOW
# 56 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	delay 1
# 57 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	addobject LOCALID_OXNARD, MAP_HAMTARO_ACORN_PARK_ENTRANCE
# 58 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	delay 1
# 59 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	createfieldmugshot MUGSHOT_OXNARD, EMOTE_NORMAL
# 60 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	setspeaker AcornParkEntranceOxnard_Text_0
# 61 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	msgbox AcornParkEntranceOxnard_Text_6
# 62 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	msgbox AcornParkEntranceOxnard_Text_7
# 63 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	applymovement LOCALID_OXNARD, AcornParkEntranceOxnard_Movement_6
# 64 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	waitmovement
# 65 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	setflag FLAG_GOT_OXNARD
# 66 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	removeobject LOCALID_OXNARD
# 67 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	setflag FLAG_GOT_EVERYONE
	goto AcornParkEntranceOxnard_9


# 11 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
AcornParkEntranceOxnard_Movement_0:
# 11 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	face_up
	step_end

# 18 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
AcornParkEntranceOxnard_Movement_1:
# 18 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	walk_in_place_up
# 18 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	walk_in_place_up
# 18 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	walk_in_place_up
# 18 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	walk_in_place_up
	step_end

# 28 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
AcornParkEntranceOxnard_Movement_2:
# 28 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	bluhoo
	step_end

# 32 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
AcornParkEntranceOxnard_Movement_3:
# 32 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	emote_x
	step_end

# 39 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
AcornParkEntranceOxnard_Movement_4:
# 39 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	walk_in_place_down
	step_end

# 45 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
AcornParkEntranceOxnard_Movement_5:
# 45 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	emote_exclamation_mark
	step_end

# 63 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
AcornParkEntranceOxnard_Movement_6:
# 63 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	walk_left
# 63 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	walk_left
# 63 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	walk_down
# 63 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	walk_down
# 63 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	walk_down
# 63 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	walk_down
# 63 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	walk_down
# 63 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	walk_down
# 63 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	walk_down
# 63 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	walk_down
	step_end

# 81 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
AcornParkEntranceOxnard_Movement_7:
# 81 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	walk_in_place_left
# 81 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	walk_in_place_left
# 81 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	walk_in_place_left
# 81 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	walk_in_place_left
	step_end

# 91 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
AcornParkEntranceOxnard_Movement_8:
# 91 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	face_down
	step_end

AcornParkEntranceOxnard_Text_0:
# 14 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	.string "Oxnard$"

AcornParkEntranceOxnard_Text_1:
# 15 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	.string "oh... Hi HAMTARO...\pDid you need something?\pOh... I don't think I can go back to\nthe clubhouse right now... Y'see...\lI lost my sunflower seed...$"

AcornParkEntranceOxnard_Text_2:
# 19 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	.string "I'm just too... {COLOR RED}BLUHOO{COLOR DARK_GRAY} right now.$"

AcornParkEntranceOxnard_Text_3:
# 27 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	.string "You learned {COLOR RED}Bluhoo!$"

AcornParkEntranceOxnard_Text_4:
# 46 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	.string "Hamtaro! That smell, is it my \nsunflower seed?$"

AcornParkEntranceOxnard_Text_5:
# 49 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	.string "Give OXNARD the sunflower seed?$"

AcornParkEntranceOxnard_Text_6:
# 61 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	.string "Thank you so much Hamtaro!$"

AcornParkEntranceOxnard_Text_7:
# 62 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	.string "BOSS wants to do a tournament?\pThere's fighting?\pSounds scary, but since you helped\nfind my sunflower seed I guess I'll try.\pSee you at the clubhouse HAMTARO!$"

AcornParkEntranceOxnard_Text_8:
# 74 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	.string "Oh... okay...$"

AcornParkEntranceOxnard_Text_9:
# 84 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	.string "Owww.... why did you do that HAMTARO?\nWhat did I do to you???\lwhy would you do that?$"
