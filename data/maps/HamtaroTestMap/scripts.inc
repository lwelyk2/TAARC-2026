HamtaroTestMap_MapScripts::
	.byte 0


HamtaroTalk::
# 6 "data/maps/HamtaroTestMap/scripts.pory"
	lock
# 7 "data/maps/HamtaroTestMap/scripts.pory"
	faceplayer
# 8 "data/maps/HamtaroTestMap/scripts.pory"
	createfieldmugshot MUGSHOT_HAMTARO, EMOTE_NORMAL
# 9 "data/maps/HamtaroTestMap/scripts.pory"
	playmoncry SPECIES_HAMTARO, CRY_MODE_ENCOUNTER
# 10 "data/maps/HamtaroTestMap/scripts.pory"
	msgbox HamtaroTalk_Text_0
# 11 "data/maps/HamtaroTestMap/scripts.pory"
	giveitem ITEM_TM_BULK_UP, 1
# 12 "data/maps/HamtaroTestMap/scripts.pory"
	giveitem ITEM_TM_DRAGON_CLAW, 1
# 13 "data/maps/HamtaroTestMap/scripts.pory"
	giveitem ITEM_TM_WATER_PULSE, 1
# 14 "data/maps/HamtaroTestMap/scripts.pory"
	giveitem ITEM_TM_CALM_MIND, 1
# 15 "data/maps/HamtaroTestMap/scripts.pory"
	giveitem ITEM_TM_ROAR, 1
# 16 "data/maps/HamtaroTestMap/scripts.pory"
	giveitem ITEM_TM_TOXIC, 1
# 17 "data/maps/HamtaroTestMap/scripts.pory"
	giveitem ITEM_TM_HAIL, 1
# 18 "data/maps/HamtaroTestMap/scripts.pory"
	giveitem ITEM_TM_BULLET_SEED, 1
# 19 "data/maps/HamtaroTestMap/scripts.pory"
	giveitem ITEM_TM_SUNNY_DAY, 1
# 20 "data/maps/HamtaroTestMap/scripts.pory"
	giveitem ITEM_TM_IRON_TAIL, 1
# 21 "data/maps/HamtaroTestMap/scripts.pory"
	giveitem ITEM_TM_DIG, 1
# 22 "data/maps/HamtaroTestMap/scripts.pory"
	giveitem ITEM_POTION, 1
# 23 "data/maps/HamtaroTestMap/scripts.pory"
	giveitem ITEM_LEPPA_BERRY, 1
# 24 "data/maps/HamtaroTestMap/scripts.pory"
	giveitem ITEM_ASPEAR_BERRY, 1
# 25 "data/maps/HamtaroTestMap/scripts.pory"
	giveitem ITEM_CHERI_BERRY, 1
# 26 "data/maps/HamtaroTestMap/scripts.pory"
	giveitem ITEM_EON_TICKET, 1
# 27 "data/maps/HamtaroTestMap/scripts.pory"
	removefieldmugshot
# 28 "data/maps/HamtaroTestMap/scripts.pory"
	release
	end


BijouTalk::
# 33 "data/maps/HamtaroTestMap/scripts.pory"
	lock
# 34 "data/maps/HamtaroTestMap/scripts.pory"
	faceplayer
# 35 "data/maps/HamtaroTestMap/scripts.pory"
	createfieldmugshot MUGSHOT_BIJOU, EMOTE_NORMAL
# 36 "data/maps/HamtaroTestMap/scripts.pory"
	playmoncry SPECIES_HAMTARO, CRY_MODE_ENCOUNTER
# 37 "data/maps/HamtaroTestMap/scripts.pory"
	msgbox BijouTalk_Text_0
# 38 "data/maps/HamtaroTestMap/scripts.pory"
	removefieldmugshot
# 39 "data/maps/HamtaroTestMap/scripts.pory"
	release
	end


BossTalk::
# 44 "data/maps/HamtaroTestMap/scripts.pory"
	lock
# 45 "data/maps/HamtaroTestMap/scripts.pory"
	faceplayer
# 46 "data/maps/HamtaroTestMap/scripts.pory"
	createfieldmugshot MUGSHOT_BOSS, EMOTE_NORMAL
# 47 "data/maps/HamtaroTestMap/scripts.pory"
	playmoncry SPECIES_HAMTARO, CRY_MODE_ENCOUNTER
# 48 "data/maps/HamtaroTestMap/scripts.pory"
	msgbox BossTalk_Text_0
# 49 "data/maps/HamtaroTestMap/scripts.pory"
	removefieldmugshot
# 50 "data/maps/HamtaroTestMap/scripts.pory"
	release
	end


HamtaroTalk_Text_0:
# 10 "data/maps/HamtaroTestMap/scripts.pory"
	.string "Hamha! My name is Hamtaro!$"

BijouTalk_Text_0:
# 37 "data/maps/HamtaroTestMap/scripts.pory"
	.string "Hamha! My name is Bijou!$"

BossTalk_Text_0:
# 48 "data/maps/HamtaroTestMap/scripts.pory"
	.string "Hamha! My name is Boss!$"
