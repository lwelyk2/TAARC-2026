Hamtaro_AcornParkEntrance_MapScripts::
	.byte 0


AcornParkEntranceOxnard::
# 4 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	lock
# 5 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	faceplayer
# 6 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	dynmultichoice 1, 1, FALSE, 4, 0, DYN_MULTICHOICE_CB_NONE, gText_Hamha, gText_HifHif, gText_TackQ, gText_DigDig
# 7 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	switch VAR_RESULT
# 8 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	case 0, AcornParkEntranceOxnard_3
# 11 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	case 1, AcornParkEntranceOxnard_4
# 14 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	case 2, AcornParkEntranceOxnard_5
# 17 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	case 3, AcornParkEntranceOxnard_6
AcornParkEntranceOxnard_1:
# 21 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	release
	end

AcornParkEntranceOxnard_3:
# 9 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	call Common_EventScript_Hamha
	goto AcornParkEntranceOxnard_1

AcornParkEntranceOxnard_4:
# 12 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	call Common_EventScript_HifHif
	goto AcornParkEntranceOxnard_1

AcornParkEntranceOxnard_5:
# 15 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	call Common_EventScript_TackQ
	goto AcornParkEntranceOxnard_1

AcornParkEntranceOxnard_6:
# 18 "data/maps/Hamtaro_AcornParkEntrance/scripts.pory"
	call Common_EventScript_DigDig
	goto AcornParkEntranceOxnard_1

