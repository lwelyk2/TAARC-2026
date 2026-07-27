HamHamClubhouse_MapScripts::
	.byte 0


ClubhouseBoss::
# 6 "data/maps/HamHamClubhouse/scripts.pory"
	lock
# 7 "data/maps/HamHamClubhouse/scripts.pory"
	faceplayer
# 8 "data/maps/HamHamClubhouse/scripts.pory"
	createfieldmugshot MUGSHOT_BOSS, EMOTE_NORMAL
# 9 "data/maps/HamHamClubhouse/scripts.pory"
	msgbox ClubhouseBoss_Text_0
# 10 "data/maps/HamHamClubhouse/scripts.pory"
	release
	end


ClubhouseBoss_Text_0:
# 9 "data/maps/HamHamClubhouse/scripts.pory"
	.string "Hamtaro! You're late! Everyone else has\n"
	.string "already left!$"
