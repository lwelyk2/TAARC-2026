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
	createfieldmugshot MUGSHOT_BIJOU, EMOTE_NORMAL
# 48 "data/maps/HamtaroTestMap/scripts.pory"
	playmoncry SPECIES_HAMTARO, CRY_MODE_ENCOUNTER
# 49 "data/maps/HamtaroTestMap/scripts.pory"
	msgbox BijouTalk_Text_0
# 50 "data/maps/HamtaroTestMap/scripts.pory"
	removefieldmugshot
# 51 "data/maps/HamtaroTestMap/scripts.pory"
	createfieldmugshot MUGSHOT_CAPPY, EMOTE_NORMAL
# 52 "data/maps/HamtaroTestMap/scripts.pory"
	msgbox BijouTalk_Text_1
# 53 "data/maps/HamtaroTestMap/scripts.pory"
	removefieldmugshot
# 54 "data/maps/HamtaroTestMap/scripts.pory"
	createfieldmugshot MUGSHOT_DEXTER, EMOTE_NORMAL
# 55 "data/maps/HamtaroTestMap/scripts.pory"
	msgbox BijouTalk_Text_2
# 56 "data/maps/HamtaroTestMap/scripts.pory"
	removefieldmugshot
# 57 "data/maps/HamtaroTestMap/scripts.pory"
	createfieldmugshot MUGSHOT_HOWDY, EMOTE_NORMAL
# 58 "data/maps/HamtaroTestMap/scripts.pory"
	msgbox BijouTalk_Text_3
# 59 "data/maps/HamtaroTestMap/scripts.pory"
	removefieldmugshot
# 60 "data/maps/HamtaroTestMap/scripts.pory"
	createfieldmugshot MUGSHOT_JINGLE, EMOTE_NORMAL
# 61 "data/maps/HamtaroTestMap/scripts.pory"
	msgbox BijouTalk_Text_4
# 62 "data/maps/HamtaroTestMap/scripts.pory"
	removefieldmugshot
# 63 "data/maps/HamtaroTestMap/scripts.pory"
	createfieldmugshot MUGSHOT_MAXWELL, EMOTE_NORMAL
# 64 "data/maps/HamtaroTestMap/scripts.pory"
	msgbox BijouTalk_Text_5
# 65 "data/maps/HamtaroTestMap/scripts.pory"
	removefieldmugshot
# 66 "data/maps/HamtaroTestMap/scripts.pory"
	createfieldmugshot MUGSHOT_OXNARD, EMOTE_NORMAL
# 67 "data/maps/HamtaroTestMap/scripts.pory"
	msgbox BijouTalk_Text_6
# 68 "data/maps/HamtaroTestMap/scripts.pory"
	removefieldmugshot
# 69 "data/maps/HamtaroTestMap/scripts.pory"
	createfieldmugshot MUGSHOT_PANDA, EMOTE_NORMAL
# 70 "data/maps/HamtaroTestMap/scripts.pory"
	msgbox BijouTalk_Text_7
# 71 "data/maps/HamtaroTestMap/scripts.pory"
	removefieldmugshot
# 72 "data/maps/HamtaroTestMap/scripts.pory"
	createfieldmugshot MUGSHOT_PASHMINA, EMOTE_NORMAL
# 73 "data/maps/HamtaroTestMap/scripts.pory"
	msgbox BijouTalk_Text_8
# 74 "data/maps/HamtaroTestMap/scripts.pory"
	removefieldmugshot
# 75 "data/maps/HamtaroTestMap/scripts.pory"
	createfieldmugshot MUGSHOT_PENELOPE, EMOTE_NORMAL
# 76 "data/maps/HamtaroTestMap/scripts.pory"
	msgbox BijouTalk_Text_9
# 77 "data/maps/HamtaroTestMap/scripts.pory"
	removefieldmugshot
# 78 "data/maps/HamtaroTestMap/scripts.pory"
	createfieldmugshot MUGSHOT_SANDY, EMOTE_NORMAL
# 79 "data/maps/HamtaroTestMap/scripts.pory"
	msgbox BijouTalk_Text_10
# 80 "data/maps/HamtaroTestMap/scripts.pory"
	removefieldmugshot
# 81 "data/maps/HamtaroTestMap/scripts.pory"
	createfieldmugshot MUGSHOT_SNOOZER, EMOTE_NORMAL
# 82 "data/maps/HamtaroTestMap/scripts.pory"
	msgbox BijouTalk_Text_11
# 83 "data/maps/HamtaroTestMap/scripts.pory"
	removefieldmugshot
# 84 "data/maps/HamtaroTestMap/scripts.pory"
	createfieldmugshot MUGSHOT_STAN, EMOTE_NORMAL
# 85 "data/maps/HamtaroTestMap/scripts.pory"
	msgbox BijouTalk_Text_12
# 86 "data/maps/HamtaroTestMap/scripts.pory"
	removefieldmugshot
# 87 "data/maps/HamtaroTestMap/scripts.pory"
	release
	end


ScoochieTest::
# 91 "data/maps/HamtaroTestMap/scripts.pory"
	lock
# 92 "data/maps/HamtaroTestMap/scripts.pory"
	applymovement LOCALID_PLAYER, Scoochie
# 93 "data/maps/HamtaroTestMap/scripts.pory"
	waitmovement LOCALID_PLAYER
# 94 "data/maps/HamtaroTestMap/scripts.pory"
	release
	end


CappyTalk::
# 99 "data/maps/HamtaroTestMap/scripts.pory"
	lock
# 100 "data/maps/HamtaroTestMap/scripts.pory"
	faceplayer
# 101 "data/maps/HamtaroTestMap/scripts.pory"
	playmoncry SPECIES_HAMTARO, CRY_MODE_ENCOUNTER
# 102 "data/maps/HamtaroTestMap/scripts.pory"
	applymovement LOCALID_PLAYER, Hamha
# 103 "data/maps/HamtaroTestMap/scripts.pory"
	waitmovement LOCALID_PLAYER
# 104 "data/maps/HamtaroTestMap/scripts.pory"
	msgbox CappyTalk_Text_0
# 105 "data/maps/HamtaroTestMap/scripts.pory"
	applymovement LOCALID_PLAYER, HifHif
# 106 "data/maps/HamtaroTestMap/scripts.pory"
	waitmovement LOCALID_PLAYER
# 107 "data/maps/HamtaroTestMap/scripts.pory"
	msgbox CappyTalk_Text_1
# 108 "data/maps/HamtaroTestMap/scripts.pory"
	applymovement LOCALID_PLAYER, TackQ
# 109 "data/maps/HamtaroTestMap/scripts.pory"
	waitmovement LOCALID_PLAYER
# 110 "data/maps/HamtaroTestMap/scripts.pory"
	msgbox CappyTalk_Text_2
# 111 "data/maps/HamtaroTestMap/scripts.pory"
	applymovement LOCALID_PLAYER, DigDig
# 112 "data/maps/HamtaroTestMap/scripts.pory"
	waitmovement LOCALID_PLAYER
# 113 "data/maps/HamtaroTestMap/scripts.pory"
	msgbox CappyTalk_Text_3
# 114 "data/maps/HamtaroTestMap/scripts.pory"
	applymovement LOCALID_PLAYER, YepP
# 115 "data/maps/HamtaroTestMap/scripts.pory"
	waitmovement LOCALID_PLAYER
# 116 "data/maps/HamtaroTestMap/scripts.pory"
	msgbox CappyTalk_Text_4
# 117 "data/maps/HamtaroTestMap/scripts.pory"
	applymovement LOCALID_PLAYER, NoP
# 118 "data/maps/HamtaroTestMap/scripts.pory"
	waitmovement LOCALID_PLAYER
# 119 "data/maps/HamtaroTestMap/scripts.pory"
	msgbox CappyTalk_Text_5
# 120 "data/maps/HamtaroTestMap/scripts.pory"
	facetogether
# 121 "data/maps/HamtaroTestMap/scripts.pory"
	createfieldmugshot MUGSHOT_CAPPY, EMOTE_NORMAL
# 122 "data/maps/HamtaroTestMap/scripts.pory"
	msgbox BijouTalk_Text_1
# 123 "data/maps/HamtaroTestMap/scripts.pory"
	removefieldmugshot
# 124 "data/maps/HamtaroTestMap/scripts.pory"
	release
	end


# 128 "data/maps/HamtaroTestMap/scripts.pory"
Hamha:
# 129 "data/maps/HamtaroTestMap/scripts.pory"
	hamha
	step_end

# 131 "data/maps/HamtaroTestMap/scripts.pory"
HifHif:
# 132 "data/maps/HamtaroTestMap/scripts.pory"
	hifhif
	step_end

# 134 "data/maps/HamtaroTestMap/scripts.pory"
TackQ:
# 135 "data/maps/HamtaroTestMap/scripts.pory"
	tackq
	step_end

# 137 "data/maps/HamtaroTestMap/scripts.pory"
DigDig:
# 138 "data/maps/HamtaroTestMap/scripts.pory"
	digdig
	step_end

# 140 "data/maps/HamtaroTestMap/scripts.pory"
YepP:
# 141 "data/maps/HamtaroTestMap/scripts.pory"
	yepp
	step_end

# 143 "data/maps/HamtaroTestMap/scripts.pory"
NoP:
# 144 "data/maps/HamtaroTestMap/scripts.pory"
	nopp
	step_end

# 146 "data/maps/HamtaroTestMap/scripts.pory"
Scoochie:
# 147 "data/maps/HamtaroTestMap/scripts.pory"
	player_run_up
# 148 "data/maps/HamtaroTestMap/scripts.pory"
	player_run_up
# 149 "data/maps/HamtaroTestMap/scripts.pory"
	player_run_up
# 150 "data/maps/HamtaroTestMap/scripts.pory"
	player_run_up
# 151 "data/maps/HamtaroTestMap/scripts.pory"
	player_run_up
# 152 "data/maps/HamtaroTestMap/scripts.pory"
	player_run_up
	step_end

HamtaroTalk_Text_0:
# 10 "data/maps/HamtaroTestMap/scripts.pory"
	.string "Hamha! My name is Hamtaro!$"

BijouTalk_Text_0:
# 49 "data/maps/HamtaroTestMap/scripts.pory"
	.string "Hamha! My name is Bijou!$"

BijouTalk_Text_1:
# 52 "data/maps/HamtaroTestMap/scripts.pory"
	.string "Hamha! My name is Cappy!$"

BijouTalk_Text_2:
# 55 "data/maps/HamtaroTestMap/scripts.pory"
	.string "Hamha! My name is Dexter!$"

BijouTalk_Text_3:
# 58 "data/maps/HamtaroTestMap/scripts.pory"
	.string "Hamha! My name is Howdy!$"

BijouTalk_Text_4:
# 61 "data/maps/HamtaroTestMap/scripts.pory"
	.string "Hamha! My name is Jingle!$"

BijouTalk_Text_5:
# 64 "data/maps/HamtaroTestMap/scripts.pory"
	.string "Hamha! My name is Maxwell!$"

BijouTalk_Text_6:
# 67 "data/maps/HamtaroTestMap/scripts.pory"
	.string "Hamha! My name is Oxnard!$"

BijouTalk_Text_7:
# 70 "data/maps/HamtaroTestMap/scripts.pory"
	.string "Hamha! My name is Panda!$"

BijouTalk_Text_8:
# 73 "data/maps/HamtaroTestMap/scripts.pory"
	.string "Hamha! My name is Pashmina!$"

BijouTalk_Text_9:
# 76 "data/maps/HamtaroTestMap/scripts.pory"
	.string "Hamha! My name is Penelope!$"

BijouTalk_Text_10:
# 79 "data/maps/HamtaroTestMap/scripts.pory"
	.string "Hamha! My name is Sandy!$"

BijouTalk_Text_11:
# 82 "data/maps/HamtaroTestMap/scripts.pory"
	.string "Hamha! My name is Snoozer!$"

BijouTalk_Text_12:
# 85 "data/maps/HamtaroTestMap/scripts.pory"
	.string "Hamha! My name is Stan!$"

CappyTalk_Text_0:
# 104 "data/maps/HamtaroTestMap/scripts.pory"
	.string "I just hamhad$"

CappyTalk_Text_1:
# 107 "data/maps/HamtaroTestMap/scripts.pory"
	.string "I just hifhifed$"

CappyTalk_Text_2:
# 110 "data/maps/HamtaroTestMap/scripts.pory"
	.string "I just tackqed$"

CappyTalk_Text_3:
# 113 "data/maps/HamtaroTestMap/scripts.pory"
	.string "I just digdigged$"

CappyTalk_Text_4:
# 116 "data/maps/HamtaroTestMap/scripts.pory"
	.string "I just Yep-Ped$"

CappyTalk_Text_5:
# 119 "data/maps/HamtaroTestMap/scripts.pory"
	.string "I just No-Ped$"
