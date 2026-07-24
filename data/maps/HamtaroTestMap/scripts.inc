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
	additem ITEM_TM_TACKLE, 1
# 12 "data/maps/HamtaroTestMap/scripts.pory"
	additem ITEM_TM_SCRATCH, 1
# 13 "data/maps/HamtaroTestMap/scripts.pory"
	additem ITEM_TM_BODY_SLAM, 1
# 14 "data/maps/HamtaroTestMap/scripts.pory"
	additem ITEM_TM_BITE, 1
# 15 "data/maps/HamtaroTestMap/scripts.pory"
	additem ITEM_TM_SING, 1
# 16 "data/maps/HamtaroTestMap/scripts.pory"
	additem ITEM_TM_DISABLE, 1
# 17 "data/maps/HamtaroTestMap/scripts.pory"
	additem ITEM_TM_WATER_GUN, 1
# 18 "data/maps/HamtaroTestMap/scripts.pory"
	additem ITEM_TM_BULK_UP, 1
# 19 "data/maps/HamtaroTestMap/scripts.pory"
	additem ITEM_TM_DIG, 1
# 20 "data/maps/HamtaroTestMap/scripts.pory"
	additem ITEM_TM_RAGE, 1
# 21 "data/maps/HamtaroTestMap/scripts.pory"
	additem ITEM_TM_DOUBLE_TEAM, 1
# 22 "data/maps/HamtaroTestMap/scripts.pory"
	additem ITEM_TM_MINIMIZE, 1
# 23 "data/maps/HamtaroTestMap/scripts.pory"
	additem ITEM_TM_CONFUSE_RAY, 1
# 24 "data/maps/HamtaroTestMap/scripts.pory"
	additem ITEM_TM_LOVELY_KISS, 1
# 25 "data/maps/HamtaroTestMap/scripts.pory"
	additem ITEM_TM_REST, 1
# 26 "data/maps/HamtaroTestMap/scripts.pory"
	additem ITEM_TM_SUBSTITUTE, 1
# 27 "data/maps/HamtaroTestMap/scripts.pory"
	additem ITEM_TM_THIEF, 1
# 28 "data/maps/HamtaroTestMap/scripts.pory"
	additem ITEM_TM_SCARY_FACE, 1
# 29 "data/maps/HamtaroTestMap/scripts.pory"
	additem ITEM_TM_LOCK_ON, 1
# 30 "data/maps/HamtaroTestMap/scripts.pory"
	additem ITEM_TM_MILK_DRINK, 1
# 31 "data/maps/HamtaroTestMap/scripts.pory"
	additem ITEM_TM_ATTRACT, 1
# 32 "data/maps/HamtaroTestMap/scripts.pory"
	additem ITEM_TM_ENCORE, 1
# 33 "data/maps/HamtaroTestMap/scripts.pory"
	additem ITEM_TM_UPROAR, 1
# 34 "data/maps/HamtaroTestMap/scripts.pory"
	additem ITEM_TM_ASTONISH, 1
# 35 "data/maps/HamtaroTestMap/scripts.pory"
	additem ITEM_TM_ROCK_POLISH, 1
# 36 "data/maps/HamtaroTestMap/scripts.pory"
	additem ITEM_TM_SWITCHEROO, 1
# 37 "data/maps/HamtaroTestMap/scripts.pory"
	additem ITEM_TM_ACID_SPRAY, 1
# 38 "data/maps/HamtaroTestMap/scripts.pory"
	givemon SPECIES_HAMTARO, 5
# 39 "data/maps/HamtaroTestMap/scripts.pory"
	removefieldmugshot
# 40 "data/maps/HamtaroTestMap/scripts.pory"
	release
	end


BijouTalk::
# 45 "data/maps/HamtaroTestMap/scripts.pory"
	lock
# 46 "data/maps/HamtaroTestMap/scripts.pory"
	faceplayer
# 47 "data/maps/HamtaroTestMap/scripts.pory"
	getplayerxycoordsvar VAR_TEMP_1, VAR_TEMP_2
# 48 "data/maps/HamtaroTestMap/scripts.pory"
	hideplayer
# 49 "data/maps/HamtaroTestMap/scripts.pory"
	setobjectxycoords LOCAL_HAMTARO_HAMHA, VAR_TEMP_1, VAR_TEMP_2
# 50 "data/maps/HamtaroTestMap/scripts.pory"
	applymovement LOCAL_HAMTARO_HAMHA, ANIM_HAMHA
# 51 "data/maps/HamtaroTestMap/scripts.pory"
	waitmovetocomplete LOCAL_HAMTARO_HAMHA
# 52 "data/maps/HamtaroTestMap/scripts.pory"
	hideobject LOCAL_HAMTARO_HAMHA
# 53 "data/maps/HamtaroTestMap/scripts.pory"
	showplayer
# 54 "data/maps/HamtaroTestMap/scripts.pory"
	createfieldmugshot MUGSHOT_BIJOU, EMOTE_NORMAL
# 55 "data/maps/HamtaroTestMap/scripts.pory"
	playmoncry SPECIES_HAMTARO, CRY_MODE_ENCOUNTER
# 56 "data/maps/HamtaroTestMap/scripts.pory"
	msgbox BijouTalk_Text_0
# 57 "data/maps/HamtaroTestMap/scripts.pory"
	removefieldmugshot
# 58 "data/maps/HamtaroTestMap/scripts.pory"
	createfieldmugshot MUGSHOT_CAPPY, EMOTE_NORMAL
# 59 "data/maps/HamtaroTestMap/scripts.pory"
	msgbox BijouTalk_Text_1
# 60 "data/maps/HamtaroTestMap/scripts.pory"
	removefieldmugshot
# 61 "data/maps/HamtaroTestMap/scripts.pory"
	createfieldmugshot MUGSHOT_DEXTER, EMOTE_NORMAL
# 62 "data/maps/HamtaroTestMap/scripts.pory"
	msgbox BijouTalk_Text_2
# 63 "data/maps/HamtaroTestMap/scripts.pory"
	removefieldmugshot
# 64 "data/maps/HamtaroTestMap/scripts.pory"
	createfieldmugshot MUGSHOT_HOWDY, EMOTE_NORMAL
# 65 "data/maps/HamtaroTestMap/scripts.pory"
	msgbox BijouTalk_Text_3
# 66 "data/maps/HamtaroTestMap/scripts.pory"
	removefieldmugshot
# 67 "data/maps/HamtaroTestMap/scripts.pory"
	createfieldmugshot MUGSHOT_JINGLE, EMOTE_NORMAL
# 68 "data/maps/HamtaroTestMap/scripts.pory"
	msgbox BijouTalk_Text_4
# 69 "data/maps/HamtaroTestMap/scripts.pory"
	removefieldmugshot
# 70 "data/maps/HamtaroTestMap/scripts.pory"
	createfieldmugshot MUGSHOT_MAXWELL, EMOTE_NORMAL
# 71 "data/maps/HamtaroTestMap/scripts.pory"
	msgbox BijouTalk_Text_5
# 72 "data/maps/HamtaroTestMap/scripts.pory"
	removefieldmugshot
# 73 "data/maps/HamtaroTestMap/scripts.pory"
	createfieldmugshot MUGSHOT_OXNARD, EMOTE_NORMAL
# 74 "data/maps/HamtaroTestMap/scripts.pory"
	msgbox BijouTalk_Text_6
# 75 "data/maps/HamtaroTestMap/scripts.pory"
	removefieldmugshot
# 76 "data/maps/HamtaroTestMap/scripts.pory"
	createfieldmugshot MUGSHOT_PANDA, EMOTE_NORMAL
# 77 "data/maps/HamtaroTestMap/scripts.pory"
	msgbox BijouTalk_Text_7
# 78 "data/maps/HamtaroTestMap/scripts.pory"
	removefieldmugshot
# 79 "data/maps/HamtaroTestMap/scripts.pory"
	createfieldmugshot MUGSHOT_PASHMINA, EMOTE_NORMAL
# 80 "data/maps/HamtaroTestMap/scripts.pory"
	msgbox BijouTalk_Text_8
# 81 "data/maps/HamtaroTestMap/scripts.pory"
	removefieldmugshot
# 82 "data/maps/HamtaroTestMap/scripts.pory"
	createfieldmugshot MUGSHOT_PENELOPE, EMOTE_NORMAL
# 83 "data/maps/HamtaroTestMap/scripts.pory"
	msgbox BijouTalk_Text_9
# 84 "data/maps/HamtaroTestMap/scripts.pory"
	removefieldmugshot
# 85 "data/maps/HamtaroTestMap/scripts.pory"
	createfieldmugshot MUGSHOT_SANDY, EMOTE_NORMAL
# 86 "data/maps/HamtaroTestMap/scripts.pory"
	msgbox BijouTalk_Text_10
# 87 "data/maps/HamtaroTestMap/scripts.pory"
	removefieldmugshot
# 88 "data/maps/HamtaroTestMap/scripts.pory"
	createfieldmugshot MUGSHOT_SNOOZER, EMOTE_NORMAL
# 89 "data/maps/HamtaroTestMap/scripts.pory"
	msgbox BijouTalk_Text_11
# 90 "data/maps/HamtaroTestMap/scripts.pory"
	removefieldmugshot
# 91 "data/maps/HamtaroTestMap/scripts.pory"
	createfieldmugshot MUGSHOT_STAN, EMOTE_NORMAL
# 92 "data/maps/HamtaroTestMap/scripts.pory"
	msgbox BijouTalk_Text_12
# 93 "data/maps/HamtaroTestMap/scripts.pory"
	removefieldmugshot
# 94 "data/maps/HamtaroTestMap/scripts.pory"
	release
	end


BossTalk::
# 99 "data/maps/HamtaroTestMap/scripts.pory"
	lock
# 100 "data/maps/HamtaroTestMap/scripts.pory"
	faceplayer
# 101 "data/maps/HamtaroTestMap/scripts.pory"
	createfieldmugshot MUGSHOT_BOSS, EMOTE_NORMAL
# 102 "data/maps/HamtaroTestMap/scripts.pory"
	playmoncry SPECIES_HAMTARO, CRY_MODE_ENCOUNTER
# 103 "data/maps/HamtaroTestMap/scripts.pory"
	msgbox BossTalk_Text_0
# 104 "data/maps/HamtaroTestMap/scripts.pory"
	removefieldmugshot
# 105 "data/maps/HamtaroTestMap/scripts.pory"
	release
	end


HamtaroTalk_Text_0:
# 10 "data/maps/HamtaroTestMap/scripts.pory"
	.string "Hamha! My name is Hamtaro!$"

BijouTalk_Text_0:
# 56 "data/maps/HamtaroTestMap/scripts.pory"
	.string "Hamha! My name is Bijou!$"

BijouTalk_Text_1:
# 59 "data/maps/HamtaroTestMap/scripts.pory"
	.string "Hamha! My name is Cappy!$"

BijouTalk_Text_2:
# 62 "data/maps/HamtaroTestMap/scripts.pory"
	.string "Hamha! My name is Dexter!$"

BijouTalk_Text_3:
# 65 "data/maps/HamtaroTestMap/scripts.pory"
	.string "Hamha! My name is Howdy!$"

BijouTalk_Text_4:
# 68 "data/maps/HamtaroTestMap/scripts.pory"
	.string "Hamha! My name is Jingle!$"

BijouTalk_Text_5:
# 71 "data/maps/HamtaroTestMap/scripts.pory"
	.string "Hamha! My name is Maxwell!$"

BijouTalk_Text_6:
# 74 "data/maps/HamtaroTestMap/scripts.pory"
	.string "Hamha! My name is Oxnard!$"

BijouTalk_Text_7:
# 77 "data/maps/HamtaroTestMap/scripts.pory"
	.string "Hamha! My name is Panda!$"

BijouTalk_Text_8:
# 80 "data/maps/HamtaroTestMap/scripts.pory"
	.string "Hamha! My name is Pashmina!$"

BijouTalk_Text_9:
# 83 "data/maps/HamtaroTestMap/scripts.pory"
	.string "Hamha! My name is Penelope!$"

BijouTalk_Text_10:
# 86 "data/maps/HamtaroTestMap/scripts.pory"
	.string "Hamha! My name is Sandy!$"

BijouTalk_Text_11:
# 89 "data/maps/HamtaroTestMap/scripts.pory"
	.string "Hamha! My name is Snoozer!$"

BijouTalk_Text_12:
# 92 "data/maps/HamtaroTestMap/scripts.pory"
	.string "Hamha! My name is Stan!$"

BossTalk_Text_0:
# 103 "data/maps/HamtaroTestMap/scripts.pory"
	.string "Hamha! My name is Boss!$"
