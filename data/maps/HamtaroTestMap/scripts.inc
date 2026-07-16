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
	release
	end


BossTalk::
# 28 "data/maps/HamtaroTestMap/scripts.pory"
	lock
# 29 "data/maps/HamtaroTestMap/scripts.pory"
	faceplayer
# 30 "data/maps/HamtaroTestMap/scripts.pory"
	createfieldmugshot MUGSHOT_BOSS, EMOTE_NORMAL
# 31 "data/maps/HamtaroTestMap/scripts.pory"
	playmoncry SPECIES_HAMTARO, CRY_MODE_ENCOUNTER
# 32 "data/maps/HamtaroTestMap/scripts.pory"
	msgbox BossTalk_Text_0
# 33 "data/maps/HamtaroTestMap/scripts.pory"
	removefieldmugshot
# 34 "data/maps/HamtaroTestMap/scripts.pory"
	release
	end


HamtaroTalk_Text_0:
# 10 "data/maps/HamtaroTestMap/scripts.pory"
	.string "Hamha! My name is Hamtaro!$"

BijouTalk_Text_0:
# 21 "data/maps/HamtaroTestMap/scripts.pory"
	.string "Hamha! My name is Bijou!$"

BossTalk_Text_0:
# 32 "data/maps/HamtaroTestMap/scripts.pory"
	.string "Hamha! My name is Boss!$"
