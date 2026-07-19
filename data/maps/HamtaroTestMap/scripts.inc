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
	giveitem ITEM_TM_TACKLE, 1
# 12 "data/maps/HamtaroTestMap/scripts.pory"
	giveitem ITEM_TM_SCRATCH, 1
# 13 "data/maps/HamtaroTestMap/scripts.pory"
	giveitem ITEM_TM_BODY_SLAM, 1
# 14 "data/maps/HamtaroTestMap/scripts.pory"
	giveitem ITEM_TM_BITE, 1
# 15 "data/maps/HamtaroTestMap/scripts.pory"
	giveitem ITEM_TM_SING, 1
# 16 "data/maps/HamtaroTestMap/scripts.pory"
	giveitem ITEM_TM_DISABLE, 1
# 17 "data/maps/HamtaroTestMap/scripts.pory"
	giveitem ITEM_TM_WATER_GUN, 1
# 18 "data/maps/HamtaroTestMap/scripts.pory"
	giveitem ITEM_TM_BULK_UP, 1
# 19 "data/maps/HamtaroTestMap/scripts.pory"
	giveitem ITEM_TM_DIG, 1
# 20 "data/maps/HamtaroTestMap/scripts.pory"
	giveitem ITEM_TM_RAGE, 1
# 21 "data/maps/HamtaroTestMap/scripts.pory"
	giveitem ITEM_TM_DOUBLE_TEAM, 1
# 22 "data/maps/HamtaroTestMap/scripts.pory"
	giveitem ITEM_TM_MINIMIZE, 1
# 23 "data/maps/HamtaroTestMap/scripts.pory"
	giveitem ITEM_TM_CONFUSE_RAY, 1
# 24 "data/maps/HamtaroTestMap/scripts.pory"
	giveitem ITEM_TM_LOVELY_KISS, 1
# 25 "data/maps/HamtaroTestMap/scripts.pory"
	giveitem ITEM_TM_REST, 1
# 26 "data/maps/HamtaroTestMap/scripts.pory"
	giveitem ITEM_TM_SUBSTITUTE, 1
# 27 "data/maps/HamtaroTestMap/scripts.pory"
	giveitem ITEM_TM_THIEF, 1
# 28 "data/maps/HamtaroTestMap/scripts.pory"
	giveitem ITEM_TM_SCARY_FACE, 1
# 29 "data/maps/HamtaroTestMap/scripts.pory"
	giveitem ITEM_TM_LOCK_ON, 1
# 30 "data/maps/HamtaroTestMap/scripts.pory"
	giveitem ITEM_TM_MILK_DRINK, 1
# 31 "data/maps/HamtaroTestMap/scripts.pory"
	giveitem ITEM_TM_ATTRACT, 1
# 32 "data/maps/HamtaroTestMap/scripts.pory"
	giveitem ITEM_TM_ENCORE, 1
# 33 "data/maps/HamtaroTestMap/scripts.pory"
	giveitem ITEM_TM_UPROAR, 1
# 34 "data/maps/HamtaroTestMap/scripts.pory"
	giveitem ITEM_TM_ASTONISH, 1
# 35 "data/maps/HamtaroTestMap/scripts.pory"
	giveitem ITEM_TM_ROCK_POLISH, 1
# 36 "data/maps/HamtaroTestMap/scripts.pory"
	giveitem ITEM_TM_SWITCHEROO, 1
# 37 "data/maps/HamtaroTestMap/scripts.pory"
	giveitem ITEM_TM_ACID_SPRAY, 1
# 38 "data/maps/HamtaroTestMap/scripts.pory"
	removefieldmugshot
# 39 "data/maps/HamtaroTestMap/scripts.pory"
	release
	end


BijouTalk::
# 44 "data/maps/HamtaroTestMap/scripts.pory"
	lock
# 45 "data/maps/HamtaroTestMap/scripts.pory"
	faceplayer
# 46 "data/maps/HamtaroTestMap/scripts.pory"
	createfieldmugshot MUGSHOT_BIJOU, EMOTE_NORMAL
# 47 "data/maps/HamtaroTestMap/scripts.pory"
	playmoncry SPECIES_HAMTARO, CRY_MODE_ENCOUNTER
# 48 "data/maps/HamtaroTestMap/scripts.pory"
	msgbox BijouTalk_Text_0
# 49 "data/maps/HamtaroTestMap/scripts.pory"
	removefieldmugshot
# 50 "data/maps/HamtaroTestMap/scripts.pory"
	createfieldmugshot MUGSHOT_CAPPY, EMOTE_NORMAL
# 51 "data/maps/HamtaroTestMap/scripts.pory"
	msgbox BijouTalk_Text_1
# 52 "data/maps/HamtaroTestMap/scripts.pory"
	removefieldmugshot
# 53 "data/maps/HamtaroTestMap/scripts.pory"
	createfieldmugshot MUGSHOT_DEXTER, EMOTE_NORMAL
# 54 "data/maps/HamtaroTestMap/scripts.pory"
	msgbox BijouTalk_Text_2
# 55 "data/maps/HamtaroTestMap/scripts.pory"
	removefieldmugshot
# 56 "data/maps/HamtaroTestMap/scripts.pory"
	createfieldmugshot MUGSHOT_HOWDY, EMOTE_NORMAL
# 57 "data/maps/HamtaroTestMap/scripts.pory"
	msgbox BijouTalk_Text_3
# 58 "data/maps/HamtaroTestMap/scripts.pory"
	removefieldmugshot
# 59 "data/maps/HamtaroTestMap/scripts.pory"
	createfieldmugshot MUGSHOT_JINGLE, EMOTE_NORMAL
# 60 "data/maps/HamtaroTestMap/scripts.pory"
	msgbox BijouTalk_Text_4
# 61 "data/maps/HamtaroTestMap/scripts.pory"
	removefieldmugshot
# 62 "data/maps/HamtaroTestMap/scripts.pory"
	createfieldmugshot MUGSHOT_MAXWELL, EMOTE_NORMAL
# 63 "data/maps/HamtaroTestMap/scripts.pory"
	msgbox BijouTalk_Text_5
# 64 "data/maps/HamtaroTestMap/scripts.pory"
	removefieldmugshot
# 65 "data/maps/HamtaroTestMap/scripts.pory"
	createfieldmugshot MUGSHOT_OXNARD, EMOTE_NORMAL
# 66 "data/maps/HamtaroTestMap/scripts.pory"
	msgbox BijouTalk_Text_6
# 67 "data/maps/HamtaroTestMap/scripts.pory"
	removefieldmugshot
# 68 "data/maps/HamtaroTestMap/scripts.pory"
	createfieldmugshot MUGSHOT_PANDA, EMOTE_NORMAL
# 69 "data/maps/HamtaroTestMap/scripts.pory"
	msgbox BijouTalk_Text_7
# 70 "data/maps/HamtaroTestMap/scripts.pory"
	removefieldmugshot
# 71 "data/maps/HamtaroTestMap/scripts.pory"
	createfieldmugshot MUGSHOT_PASHMINA, EMOTE_NORMAL
# 72 "data/maps/HamtaroTestMap/scripts.pory"
	msgbox BijouTalk_Text_8
# 73 "data/maps/HamtaroTestMap/scripts.pory"
	removefieldmugshot
# 74 "data/maps/HamtaroTestMap/scripts.pory"
	createfieldmugshot MUGSHOT_PENELOPE, EMOTE_NORMAL
# 75 "data/maps/HamtaroTestMap/scripts.pory"
	msgbox BijouTalk_Text_9
# 76 "data/maps/HamtaroTestMap/scripts.pory"
	removefieldmugshot
# 77 "data/maps/HamtaroTestMap/scripts.pory"
	createfieldmugshot MUGSHOT_SANDY, EMOTE_NORMAL
# 78 "data/maps/HamtaroTestMap/scripts.pory"
	msgbox BijouTalk_Text_10
# 79 "data/maps/HamtaroTestMap/scripts.pory"
	removefieldmugshot
# 80 "data/maps/HamtaroTestMap/scripts.pory"
	createfieldmugshot MUGSHOT_SNOOZER, EMOTE_NORMAL
# 81 "data/maps/HamtaroTestMap/scripts.pory"
	msgbox BijouTalk_Text_11
# 82 "data/maps/HamtaroTestMap/scripts.pory"
	removefieldmugshot
# 83 "data/maps/HamtaroTestMap/scripts.pory"
	createfieldmugshot MUGSHOT_STAN, EMOTE_NORMAL
# 84 "data/maps/HamtaroTestMap/scripts.pory"
	msgbox BijouTalk_Text_12
# 85 "data/maps/HamtaroTestMap/scripts.pory"
	removefieldmugshot
# 86 "data/maps/HamtaroTestMap/scripts.pory"
	release
	end


BossTalk::
# 91 "data/maps/HamtaroTestMap/scripts.pory"
	lock
# 92 "data/maps/HamtaroTestMap/scripts.pory"
	faceplayer
# 93 "data/maps/HamtaroTestMap/scripts.pory"
	createfieldmugshot MUGSHOT_BOSS, EMOTE_NORMAL
# 94 "data/maps/HamtaroTestMap/scripts.pory"
	playmoncry SPECIES_HAMTARO, CRY_MODE_ENCOUNTER
# 95 "data/maps/HamtaroTestMap/scripts.pory"
	msgbox BossTalk_Text_0
# 96 "data/maps/HamtaroTestMap/scripts.pory"
	removefieldmugshot
# 97 "data/maps/HamtaroTestMap/scripts.pory"
	release
	end


HamtaroTalk_Text_0:
# 10 "data/maps/HamtaroTestMap/scripts.pory"
	.string "Hamha! My name is Hamtaro!$"

BijouTalk_Text_0:
# 48 "data/maps/HamtaroTestMap/scripts.pory"
	.string "Hamha! My name is Bijou!$"

BijouTalk_Text_1:
# 51 "data/maps/HamtaroTestMap/scripts.pory"
	.string "Hamha! My name is Cappy!$"

BijouTalk_Text_2:
# 54 "data/maps/HamtaroTestMap/scripts.pory"
	.string "Hamha! My name is Dexter!$"

BijouTalk_Text_3:
# 57 "data/maps/HamtaroTestMap/scripts.pory"
	.string "Hamha! My name is Howdy!$"

BijouTalk_Text_4:
# 60 "data/maps/HamtaroTestMap/scripts.pory"
	.string "Hamha! My name is Jingle!$"

BijouTalk_Text_5:
# 63 "data/maps/HamtaroTestMap/scripts.pory"
	.string "Hamha! My name is Maxwell!$"

BijouTalk_Text_6:
# 66 "data/maps/HamtaroTestMap/scripts.pory"
	.string "Hamha! My name is Oxnard!$"

BijouTalk_Text_7:
# 69 "data/maps/HamtaroTestMap/scripts.pory"
	.string "Hamha! My name is Panda!$"

BijouTalk_Text_8:
# 72 "data/maps/HamtaroTestMap/scripts.pory"
	.string "Hamha! My name is Pashmina!$"

BijouTalk_Text_9:
# 75 "data/maps/HamtaroTestMap/scripts.pory"
	.string "Hamha! My name is Penelope!$"

BijouTalk_Text_10:
# 78 "data/maps/HamtaroTestMap/scripts.pory"
	.string "Hamha! My name is Sandy!$"

BijouTalk_Text_11:
# 81 "data/maps/HamtaroTestMap/scripts.pory"
	.string "Hamha! My name is Snoozer!$"

BijouTalk_Text_12:
# 84 "data/maps/HamtaroTestMap/scripts.pory"
	.string "Hamha! My name is Stan!$"

BossTalk_Text_0:
# 95 "data/maps/HamtaroTestMap/scripts.pory"
	.string "Hamha! My name is Boss!$"
