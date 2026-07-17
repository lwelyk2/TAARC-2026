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
	removefieldmugshot
# 12 "data/maps/HamtaroTestMap/scripts.pory"
	release
	end


BijouTalk::
# 17 "data/maps/HamtaroTestMap/scripts.pory"
	lock
# 18 "data/maps/HamtaroTestMap/scripts.pory"
	faceplayer
# 19 "data/maps/HamtaroTestMap/scripts.pory"
	createfieldmugshot MUGSHOT_BIJOU, EMOTE_NORMAL
# 20 "data/maps/HamtaroTestMap/scripts.pory"
	playmoncry SPECIES_HAMTARO, CRY_MODE_ENCOUNTER
# 21 "data/maps/HamtaroTestMap/scripts.pory"
	msgbox BijouTalk_Text_0
# 22 "data/maps/HamtaroTestMap/scripts.pory"
	removefieldmugshot
# 23 "data/maps/HamtaroTestMap/scripts.pory"
	createfieldmugshot MUGSHOT_CAPPY, EMOTE_NORMAL
# 24 "data/maps/HamtaroTestMap/scripts.pory"
	msgbox BijouTalk_Text_1
# 25 "data/maps/HamtaroTestMap/scripts.pory"
	removefieldmugshot
# 26 "data/maps/HamtaroTestMap/scripts.pory"
	createfieldmugshot MUGSHOT_DEXTER, EMOTE_NORMAL
# 27 "data/maps/HamtaroTestMap/scripts.pory"
	msgbox BijouTalk_Text_2
# 28 "data/maps/HamtaroTestMap/scripts.pory"
	removefieldmugshot
# 29 "data/maps/HamtaroTestMap/scripts.pory"
	createfieldmugshot MUGSHOT_HOWDY, EMOTE_NORMAL
# 30 "data/maps/HamtaroTestMap/scripts.pory"
	msgbox BijouTalk_Text_3
# 31 "data/maps/HamtaroTestMap/scripts.pory"
	removefieldmugshot
# 32 "data/maps/HamtaroTestMap/scripts.pory"
	createfieldmugshot MUGSHOT_JINGLE, EMOTE_NORMAL
# 33 "data/maps/HamtaroTestMap/scripts.pory"
	msgbox BijouTalk_Text_4
# 34 "data/maps/HamtaroTestMap/scripts.pory"
	removefieldmugshot
# 35 "data/maps/HamtaroTestMap/scripts.pory"
	createfieldmugshot MUGSHOT_MAXWELL, EMOTE_NORMAL
# 36 "data/maps/HamtaroTestMap/scripts.pory"
	msgbox BijouTalk_Text_5
# 37 "data/maps/HamtaroTestMap/scripts.pory"
	removefieldmugshot
# 38 "data/maps/HamtaroTestMap/scripts.pory"
	createfieldmugshot MUGSHOT_OXNARD, EMOTE_NORMAL
# 39 "data/maps/HamtaroTestMap/scripts.pory"
	msgbox BijouTalk_Text_6
# 40 "data/maps/HamtaroTestMap/scripts.pory"
	removefieldmugshot
# 41 "data/maps/HamtaroTestMap/scripts.pory"
	createfieldmugshot MUGSHOT_PANDA, EMOTE_NORMAL
# 42 "data/maps/HamtaroTestMap/scripts.pory"
	msgbox BijouTalk_Text_7
# 43 "data/maps/HamtaroTestMap/scripts.pory"
	removefieldmugshot
# 44 "data/maps/HamtaroTestMap/scripts.pory"
	createfieldmugshot MUGSHOT_PASHMINA, EMOTE_NORMAL
# 45 "data/maps/HamtaroTestMap/scripts.pory"
	msgbox BijouTalk_Text_8
# 46 "data/maps/HamtaroTestMap/scripts.pory"
	removefieldmugshot
# 47 "data/maps/HamtaroTestMap/scripts.pory"
	createfieldmugshot MUGSHOT_PENELOPE, EMOTE_NORMAL
# 48 "data/maps/HamtaroTestMap/scripts.pory"
	msgbox BijouTalk_Text_9
# 49 "data/maps/HamtaroTestMap/scripts.pory"
	removefieldmugshot
# 50 "data/maps/HamtaroTestMap/scripts.pory"
	createfieldmugshot MUGSHOT_SANDY, EMOTE_NORMAL
# 51 "data/maps/HamtaroTestMap/scripts.pory"
	msgbox BijouTalk_Text_10
# 52 "data/maps/HamtaroTestMap/scripts.pory"
	removefieldmugshot
# 53 "data/maps/HamtaroTestMap/scripts.pory"
	createfieldmugshot MUGSHOT_SNOOZER, EMOTE_NORMAL
# 54 "data/maps/HamtaroTestMap/scripts.pory"
	msgbox BijouTalk_Text_11
# 55 "data/maps/HamtaroTestMap/scripts.pory"
	removefieldmugshot
# 56 "data/maps/HamtaroTestMap/scripts.pory"
	createfieldmugshot MUGSHOT_STAN, EMOTE_NORMAL
# 57 "data/maps/HamtaroTestMap/scripts.pory"
	msgbox BijouTalk_Text_12
# 58 "data/maps/HamtaroTestMap/scripts.pory"
	removefieldmugshot
# 59 "data/maps/HamtaroTestMap/scripts.pory"
	release
	end


BossTalk::
# 64 "data/maps/HamtaroTestMap/scripts.pory"
	lock
# 65 "data/maps/HamtaroTestMap/scripts.pory"
	faceplayer
# 66 "data/maps/HamtaroTestMap/scripts.pory"
	createfieldmugshot MUGSHOT_BOSS, EMOTE_NORMAL
# 67 "data/maps/HamtaroTestMap/scripts.pory"
	playmoncry SPECIES_HAMTARO, CRY_MODE_ENCOUNTER
# 68 "data/maps/HamtaroTestMap/scripts.pory"
	msgbox BossTalk_Text_0
# 69 "data/maps/HamtaroTestMap/scripts.pory"
	removefieldmugshot
# 70 "data/maps/HamtaroTestMap/scripts.pory"
	release
	end


HamtaroTalk_Text_0:
# 10 "data/maps/HamtaroTestMap/scripts.pory"
	.string "Hamha! My name is Hamtaro!$"

BijouTalk_Text_0:
# 21 "data/maps/HamtaroTestMap/scripts.pory"
	.string "Hamha! My name is Bijou!$"

BijouTalk_Text_1:
# 24 "data/maps/HamtaroTestMap/scripts.pory"
	.string "Hamha! My name is Cappy!$"

BijouTalk_Text_2:
# 27 "data/maps/HamtaroTestMap/scripts.pory"
	.string "Hamha! My name is Dexter!$"

BijouTalk_Text_3:
# 30 "data/maps/HamtaroTestMap/scripts.pory"
	.string "Hamha! My name is Howdy!$"

BijouTalk_Text_4:
# 33 "data/maps/HamtaroTestMap/scripts.pory"
	.string "Hamha! My name is Jingle!$"

BijouTalk_Text_5:
# 36 "data/maps/HamtaroTestMap/scripts.pory"
	.string "Hamha! My name is Maxwell!$"

BijouTalk_Text_6:
# 39 "data/maps/HamtaroTestMap/scripts.pory"
	.string "Hamha! My name is Oxnard!$"

BijouTalk_Text_7:
# 42 "data/maps/HamtaroTestMap/scripts.pory"
	.string "Hamha! My name is Panda!$"

BijouTalk_Text_8:
# 45 "data/maps/HamtaroTestMap/scripts.pory"
	.string "Hamha! My name is Pashmina!$"

BijouTalk_Text_9:
# 48 "data/maps/HamtaroTestMap/scripts.pory"
	.string "Hamha! My name is Penelope!$"

BijouTalk_Text_10:
# 51 "data/maps/HamtaroTestMap/scripts.pory"
	.string "Hamha! My name is Sandy!$"

BijouTalk_Text_11:
# 54 "data/maps/HamtaroTestMap/scripts.pory"
	.string "Hamha! My name is Snoozer!$"

BijouTalk_Text_12:
# 57 "data/maps/HamtaroTestMap/scripts.pory"
	.string "Hamha! My name is Stan!$"

BossTalk_Text_0:
# 68 "data/maps/HamtaroTestMap/scripts.pory"
	.string "Hamha! My name is Boss!$"
