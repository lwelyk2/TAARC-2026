Hamtaro_AcornParkCave_MapScripts::
	.byte 0


AcornParkCaveMenu::
# 4 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	dynmultichoice 1, 1, FALSE, 4, 0, DYN_MULTICHOICE_CB_NONE, gText_Hamha, gText_HifHif, gText_TackQ, gText_DigDig
# 5 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	switch VAR_RESULT
# 6 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	case 0, AcornParkCaveMenu_2
# 10 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	case 1, AcornParkCaveMenu_3
# 14 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	case 2, AcornParkCaveMenu_4
# 18 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	case 3, AcornParkCaveMenu_5
	return

AcornParkCaveMenu_2:
# 7 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	call Common_EventScript_Hamha
# 8 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	release
	end

AcornParkCaveMenu_3:
# 11 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	call Common_EventScript_HifHif
# 12 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	release
	end

AcornParkCaveMenu_4:
# 15 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	call Common_EventScript_TackQ
# 16 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	release
	end

AcornParkCaveMenu_5:
# 19 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	call AcornParkCaveDigDig
	return


AcornParkCaveDigDig::
# 25 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 26 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	compare VAR_TEMP_0, VAR_TEMP_3
	goto_if_gt AcornParkCaveDigDig_2
# 42 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	compare VAR_TEMP_0, VAR_TEMP_3
	goto_if_lt AcornParkCaveDigDig_3
AcornParkCaveDigDig_1:
# 59 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	compare VAR_TEMP_1, VAR_TEMP_4
	goto_if_gt AcornParkCaveDigDig_7
# 75 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	compare VAR_TEMP_1, VAR_TEMP_4
	goto_if_lt AcornParkCaveDigDig_8
AcornParkCaveDigDig_6:
# 92 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	call Common_EventScript_DigDig
	return

AcornParkCaveDigDig_2:
# 27 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	subvar VAR_TEMP_0, VAR_TEMP_3
# 28 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	switch VAR_TEMP_0
# 29 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	case 1, AcornParkCaveDigDig_12
# 33 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	case 2, AcornParkCaveDigDig_13
# 37 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	case 3, AcornParkCaveDigDig_14
	goto AcornParkCaveDigDig_1

AcornParkCaveDigDig_3:
# 43 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	subvar VAR_TEMP_3, VAR_TEMP_0
# 44 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	switch VAR_TEMP_3
# 45 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	case 1, AcornParkCaveDigDig_16
# 49 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	case 2, AcornParkCaveDigDig_17
# 53 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	case 3, AcornParkCaveDigDig_18
	goto AcornParkCaveDigDig_1

AcornParkCaveDigDig_7:
# 60 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	subvar VAR_TEMP_1, VAR_TEMP_4
# 61 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	switch VAR_TEMP_1
# 62 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	case 1, AcornParkCaveDigDig_20
# 66 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	case 2, AcornParkCaveDigDig_21
# 70 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	case 3, AcornParkCaveDigDig_22
	goto AcornParkCaveDigDig_6

AcornParkCaveDigDig_8:
# 76 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	subvar VAR_TEMP_4, VAR_TEMP_1
# 77 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	switch VAR_TEMP_4
# 78 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	case 1, AcornParkCaveDigDig_24
# 82 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	case 2, AcornParkCaveDigDig_25
# 86 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	case 3, AcornParkCaveDigDig_26
	goto AcornParkCaveDigDig_6

AcornParkCaveDigDig_12:
# 30 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	applymovement LOCALID_PLAYER, AcornParkCaveDigDig_Movement_0
# 31 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	waitmovement
	goto AcornParkCaveDigDig_1

AcornParkCaveDigDig_13:
# 34 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	applymovement LOCALID_PLAYER, AcornParkCaveDigDig_Movement_1
# 35 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	waitmovement
	goto AcornParkCaveDigDig_1

AcornParkCaveDigDig_14:
# 38 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	applymovement LOCALID_PLAYER, AcornParkCaveDigDig_Movement_2
# 39 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	waitmovement
	goto AcornParkCaveDigDig_1

AcornParkCaveDigDig_16:
# 46 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	applymovement LOCALID_PLAYER, AcornParkCaveDigDig_Movement_3
# 47 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	waitmovement
	goto AcornParkCaveDigDig_1

AcornParkCaveDigDig_17:
# 50 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	applymovement LOCALID_PLAYER, AcornParkCaveDigDig_Movement_4
# 51 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	waitmovement
	goto AcornParkCaveDigDig_1

AcornParkCaveDigDig_18:
# 54 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	applymovement LOCALID_PLAYER, AcornParkCaveDigDig_Movement_5
# 55 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	waitmovement
	goto AcornParkCaveDigDig_1

AcornParkCaveDigDig_20:
# 63 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	applymovement LOCALID_PLAYER, AcornParkCaveDigDig_Movement_6
# 64 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	waitmovement
	goto AcornParkCaveDigDig_6

AcornParkCaveDigDig_21:
# 67 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	applymovement LOCALID_PLAYER, AcornParkCaveDigDig_Movement_7
# 68 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	waitmovement
	goto AcornParkCaveDigDig_6

AcornParkCaveDigDig_22:
# 71 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	applymovement LOCALID_PLAYER, AcornParkCaveDigDig_Movement_8
# 72 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	waitmovement
	goto AcornParkCaveDigDig_6

AcornParkCaveDigDig_24:
# 79 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	applymovement LOCALID_PLAYER, AcornParkCaveDigDig_Movement_9
# 80 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	waitmovement
	goto AcornParkCaveDigDig_6

AcornParkCaveDigDig_25:
# 83 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	applymovement LOCALID_PLAYER, AcornParkCaveDigDig_Movement_10
# 84 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	waitmovement
	goto AcornParkCaveDigDig_6

AcornParkCaveDigDig_26:
# 87 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	applymovement LOCALID_PLAYER, AcornParkCaveDigDig_Movement_11
# 88 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	waitmovement
	goto AcornParkCaveDigDig_6


AcornParkCaveBottomLeft::
# 97 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	lock
# 98 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	setvar VAR_TEMP_3, 3
# 99 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	setvar VAR_TEMP_4, 17
# 100 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	call AcornParkCaveMenu
# 101 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	goto_if_set FLAG_DAILY_ROUTE_114_RECEIVED_BERRY, AcornParkCaveBottomLeft_2
# 104 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	setflag FLAG_DAILY_ROUTE_114_RECEIVED_BERRY
# 105 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	giveitem ITEM_ORAN_BERRY
AcornParkCaveBottomLeft_1:
# 107 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	release
	end

AcornParkCaveBottomLeft_2:
# 102 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	msgbox AcornParkCaveBottomLeft_Text_0
	goto AcornParkCaveBottomLeft_1


AcornParkCaveMiddle::
# 112 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	lock
# 113 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	setvar VAR_TEMP_3, 10
# 114 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	setvar VAR_TEMP_4, 12
# 115 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	call AcornParkCaveMenu
# 116 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	msgbox AcornParkCaveBottomLeft_Text_0
# 117 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	release
	end


AcornParkCaveBottomRight::
# 123 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	lock
# 124 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	setvar VAR_TEMP_3, 17
# 125 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	setvar VAR_TEMP_4, 18
# 126 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	call AcornParkCaveMenu
# 127 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	msgbox AcornParkCaveBottomLeft_Text_0
# 128 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	release
	end


AcornParkCaveRight::
# 133 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	lock
# 134 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	setvar VAR_TEMP_3, 16
# 135 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	setvar VAR_TEMP_4, 12
# 136 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	call AcornParkCaveMenu
# 137 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	msgbox AcornParkCaveBottomLeft_Text_0
# 138 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	release
	end


AcornParkCaveUpperRight::
# 143 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	lock
# 144 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	setvar VAR_TEMP_3, 14
# 145 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	setvar VAR_TEMP_4, 5
# 146 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	call AcornParkCaveMenu
# 147 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	msgbox AcornParkCaveBottomLeft_Text_0
# 148 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	release
	end


AcornParkCaveUpperLeft::
# 153 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	lock
# 154 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	setvar VAR_TEMP_3, 7
# 155 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	setvar VAR_TEMP_4, 5
# 156 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	call AcornParkCaveMenu
# 157 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	msgbox AcornParkCaveBottomLeft_Text_0
# 158 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	release
	end


AcornParkCaveLeft::
# 163 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	lock
# 164 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	setvar VAR_TEMP_3, 4
# 165 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	setvar VAR_TEMP_4, 11
# 166 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	call AcornParkCaveMenu
# 167 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	goto_if_set FLAG_DAILY_ROUTE_111_RECEIVED_BERRY, AcornParkCaveLeft_2
# 170 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	setflag FLAG_DAILY_ROUTE_111_RECEIVED_BERRY
# 171 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	giveitem ITEM_SITRUS_BERRY
AcornParkCaveLeft_1:
# 173 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	release
	end

AcornParkCaveLeft_2:
# 168 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	msgbox AcornParkCaveBottomLeft_Text_0
	goto AcornParkCaveLeft_1


AcornParkCaveSoccerHam::
# 178 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	lock
# 179 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	dynmultichoice 1, 1, FALSE, 4, 0, DYN_MULTICHOICE_CB_NONE, gText_Hamha, gText_HifHif, gText_TackQ, gText_DigDig
# 180 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	switch VAR_RESULT
# 181 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	case 0, AcornParkCaveSoccerHam_3
# 191 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	case 1, AcornParkCaveSoccerHam_4
# 196 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	case 2, AcornParkCaveSoccerHam_5
# 208 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	case 3, AcornParkCaveSoccerHam_6
AcornParkCaveSoccerHam_1:
# 214 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	release
	end

AcornParkCaveSoccerHam_3:
# 182 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	call Common_EventScript_MoveToFront
# 183 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	call Common_EventScript_Hamha
	checkitem ITEM_HAMMER
# 0 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne AcornParkCaveSoccerHam_7
# 186 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	goto_if_set FLAG_GOT_PANDA, AcornParkCaveSoccerHam_8
# 189 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	call HamhaSoccerHamNoHammer
	goto AcornParkCaveSoccerHam_1

AcornParkCaveSoccerHam_4:
# 192 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	call Common_EventScript_HifHif
# 193 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	msgbox AcornParkCaveSoccerHam_Text_0
# 194 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	release
	end

AcornParkCaveSoccerHam_5:
# 197 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	call Common_EventScript_MoveToFront
# 198 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	call Common_EventScript_TackQ
	checkitem ITEM_HAMMER
# 0 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne AcornParkCaveSoccerHam_13
# 201 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	goto_if_set FLAG_GOT_PANDA, AcornParkCaveSoccerHam_14
# 204 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	call TackQSoccerHamNoHammer
AcornParkCaveSoccerHam_12:
# 206 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	release
	end

AcornParkCaveSoccerHam_6:
# 209 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	setvar VAR_TEMP_3, 10
# 210 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	setvar VAR_TEMP_4, 12
# 211 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	call AcornParkCaveDigDig
	goto AcornParkCaveSoccerHam_1

AcornParkCaveSoccerHam_7:
# 185 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	call HamhaSoccerHamGotHammer
	goto AcornParkCaveSoccerHam_1

AcornParkCaveSoccerHam_8:
# 187 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	call HamhaSoccerHamGotHammer
	goto AcornParkCaveSoccerHam_1

AcornParkCaveSoccerHam_13:
# 200 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	call TackQSoccerHamGotHammer
	goto AcornParkCaveSoccerHam_12

AcornParkCaveSoccerHam_14:
# 202 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	call TackQSoccerHamGotHammer
	goto AcornParkCaveSoccerHam_12


HamhaSoccerHamGotHammer::
# 219 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	msgbox HamhaSoccerHamGotHammer_Text_0
	return


HamhaSoccerHamNoHammer::
# 223 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	msgbox HamhaSoccerHamNoHammer_Text_0
	return


TackQSoccerHamNoHammer::
# 228 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	msgbox TackQSoccerHamNoHammer_Text_0
	return


TackQSoccerHamGotHammer::
# 233 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	msgbox TackQSoccerHamGotHammer_Text_0
	return


AcornParkCaveDresser::
# 238 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	lock
# 239 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	dynmultichoice 1, 1, FALSE, 4, 0, DYN_MULTICHOICE_CB_NONE, gText_Hamha, gText_HifHif, gText_TackQ, gText_DigDig
# 240 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	switch VAR_RESULT
# 241 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	case 0, AcornParkCaveDresser_2
# 245 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	case 1, AcornParkCaveDresser_3
# 250 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	case 2, AcornParkCaveDresser_4
# 275 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	case 3, AcornParkCaveDresser_5
	return

AcornParkCaveDresser_2:
# 242 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	call Common_EventScript_Hamha
# 243 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	release
	end

AcornParkCaveDresser_3:
# 246 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	call Common_EventScript_HifHif
# 247 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	msgbox AcornParkCaveDresser_Text_0
# 248 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	release
	end

AcornParkCaveDresser_4:
# 251 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	call Common_EventScript_MoveToFront
# 252 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	call Common_EventScript_TackQ
	checkitem ITEM_HAMMER
# 0 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne AcornParkCaveDresser_6
# 256 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	goto_if_set FLAG_GOT_PANDA, AcornParkCaveDresser_7
# 260 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	msgbox AcornParkCaveDresser_Text_1
# 261 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	giveitem ITEM_HAMMER
# 262 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	msgbox AcornParkCaveDresser_Text_2
# 263 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	applymovement LOCALID_PLAYER, AcornParkCaveDresser_Movement_0
# 264 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	playse SE_PIN
# 265 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	waitmovement
# 266 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	waitse
# 267 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	applymovement LOCALID_PLAYER, AcornParkCaveDresser_Movement_1
# 268 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	waitmovement
# 269 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	applymovement LOCALID_SOCCER_HAM, AcornParkCaveDresser_Movement_2
# 270 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	waitmovement
# 271 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	msgbox AcornParkCaveDresser_Text_3
# 272 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	release
	end

AcornParkCaveDresser_5:
# 276 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	call AcornParkCaveDigDig
	return

AcornParkCaveDresser_6:
# 254 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	release
	end

AcornParkCaveDresser_7:
# 257 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	release
	end


# 30 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
AcornParkCaveDigDig_Movement_0:
# 30 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	walk_left
	step_end

# 34 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
AcornParkCaveDigDig_Movement_1:
# 34 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	walk_left
# 34 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	walk_left
	step_end

# 38 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
AcornParkCaveDigDig_Movement_2:
# 38 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	walk_left
# 38 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	walk_left
# 38 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	walk_left
	step_end

# 46 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
AcornParkCaveDigDig_Movement_3:
# 46 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	walk_right
	step_end

# 50 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
AcornParkCaveDigDig_Movement_4:
# 50 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	walk_right
# 50 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	walk_right
	step_end

# 54 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
AcornParkCaveDigDig_Movement_5:
# 54 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	walk_right
# 54 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	walk_right
# 54 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	walk_right
	step_end

# 63 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
AcornParkCaveDigDig_Movement_6:
# 63 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	walk_up
	step_end

# 67 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
AcornParkCaveDigDig_Movement_7:
# 67 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	walk_up
# 67 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	walk_up
	step_end

# 71 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
AcornParkCaveDigDig_Movement_8:
# 71 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	walk_up
# 71 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	walk_up
# 71 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	walk_up
	step_end

# 79 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
AcornParkCaveDigDig_Movement_9:
# 79 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	walk_down
	step_end

# 83 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
AcornParkCaveDigDig_Movement_10:
# 83 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	walk_down
# 83 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	walk_down
	step_end

# 87 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
AcornParkCaveDigDig_Movement_11:
# 87 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	walk_down
# 87 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	walk_down
# 87 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	walk_down
	step_end

# 263 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
AcornParkCaveDresser_Movement_0:
# 263 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	emote_exclamation_mark
# 263 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	delay_16
	step_end

# 267 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
AcornParkCaveDresser_Movement_1:
# 267 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	walk_down
# 267 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	walk_down
# 267 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	walk_down
# 267 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	walk_down
# 267 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	walk_down
# 267 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	walk_down
# 267 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	walk_down
# 267 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	walk_down
# 267 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	walk_right
# 267 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	walk_right
# 267 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	walk_right
# 267 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	walk_right
# 267 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	walk_right
# 267 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	walk_right
# 267 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	walk_right
# 267 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	walk_up
# 267 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	face_up
	step_end

# 269 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
AcornParkCaveDresser_Movement_2:
# 269 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	walk_in_place_right
	step_end

AcornParkCaveBottomLeft_Text_0:
# 102 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	.string "Nothing here...$"

AcornParkCaveSoccerHam_Text_0:
# 193 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	.string "Smells like strawberries.\pAnd sweat.\pAnd crime.$"

HamhaSoccerHamGotHammer_Text_0:
# 219 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	.string "You may have found that hammer, but\nyour silly Ham-battles will never be as\lpopular as the great sport of straw-\l-berry soccer!$"

HamhaSoccerHamNoHammer_Text_0:
# 223 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	.string "You'll never find that hammer!\pI've hidden it so perfectly that\nno one will ever find it.\pNot even I could find it at this point!$"

TackQSoccerHamNoHammer_Text_0:
# 228 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	.string "Tack-Q all you want! I'll never tell you\nwhere that hammer is!$"

TackQSoccerHamGotHammer_Text_0:
# 233 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	.string "Look, you got your hammer already, cut\nit out with the Tack-Qs.$"

AcornParkCaveDresser_Text_0:
# 247 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	.string "Smells like old socks, but also faintly\nof PANDA.$"

AcornParkCaveDresser_Text_1:
# 260 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	.string "The bottom draw pops open and sticking\nout between some old socks you see\lPANDA's hammer!$"

AcornParkCaveDresser_Text_2:
# 262 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	.string "Hey you!$"

AcornParkCaveDresser_Text_3:
# 271 "data/maps/Hamtaro_AcornParkCave/scripts.pory"
	.string "Look I know I took that hammer and all,\nbut it's pretty rude to go through a\lhamster's sock drawer.\pWho knows what I could keep in there?$"
