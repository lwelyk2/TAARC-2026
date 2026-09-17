HamBattleRoom_MapScripts::
	.byte 0


BattleRoom_ShopkeeperHam::
# 4 "data/maps/HamBattleRoom/scripts.pory"
	lock
# 5 "data/maps/HamBattleRoom/scripts.pory"
	dynmultipush gText_Hamha, 0
# 6 "data/maps/HamBattleRoom/scripts.pory"
	dynmultipush gText_HifHif, 1
# 7 "data/maps/HamBattleRoom/scripts.pory"
	dynmultipush gText_TackQ, 2
# 8 "data/maps/HamBattleRoom/scripts.pory"
	dynmultipush gText_DigDig, 3
	checkitem ITEM_TM_UPROAR
# 0 "data/maps/HamBattleRoom/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne BattleRoom_ShopkeeperHam_2
# 12 "data/maps/HamBattleRoom/scripts.pory"
	dynmultipush AcornParkSouthQuestionMarks, 4
BattleRoom_ShopkeeperHam_1:
# 14 "data/maps/HamBattleRoom/scripts.pory"
	dynmultistack 1, 1, FALSE, 5, 0, 0, DYN_MULTICHOICE_CB_NONE
	return

BattleRoom_ShopkeeperHam_2:
# 10 "data/maps/HamBattleRoom/scripts.pory"
	dynmultipush AcornParkSouthDingBang, 4
	goto BattleRoom_ShopkeeperHam_1

