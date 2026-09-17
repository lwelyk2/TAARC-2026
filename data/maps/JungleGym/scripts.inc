JungleGym_MapScripts::
# 2 "data/maps/JungleGym/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, JungleGym_HidePlayer
# 3 "data/maps/JungleGym/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, JungleGym_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

JungleGym_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 4 "data/maps/JungleGym/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, JungleGym_Credits
	.2byte 0


JungleGym_HidePlayer::
# 8 "data/maps/JungleGym/scripts.pory"
	hideplayer
# 9 "data/maps/JungleGym/scripts.pory"
	special SpawnCameraObject
	return


JungleGym_Credits::
# 13 "data/maps/JungleGym/scripts.pory"
	setvar VAR_TEMP_0, 1
# 14 "data/maps/JungleGym/scripts.pory"
	hideplayer
# 15 "data/maps/JungleGym/scripts.pory"
	special SpawnCameraObject
# 16 "data/maps/JungleGym/scripts.pory"
	createfieldmugshot MUGSHOT_PASHMINA, EMOTE_NORMAL
# 17 "data/maps/JungleGym/scripts.pory"
	setspeaker JungleGym_Credits_Text_0
# 18 "data/maps/JungleGym/scripts.pory"
	msgbox JungleGym_Credits_Text_1
# 19 "data/maps/JungleGym/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, JungleGym_Credits_Movement_0
# 20 "data/maps/JungleGym/scripts.pory"
	waitmovement
# 21 "data/maps/JungleGym/scripts.pory"
	createfieldmugshot MUGSHOT_PENELOPE, EMOTE_NORMAL
# 22 "data/maps/JungleGym/scripts.pory"
	setspeaker JungleGym_Credits_Text_2
# 23 "data/maps/JungleGym/scripts.pory"
	msgbox JungleGym_Credits_Text_3
# 24 "data/maps/JungleGym/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, JungleGym_Credits_Movement_1
# 25 "data/maps/JungleGym/scripts.pory"
	waitmovement
# 26 "data/maps/JungleGym/scripts.pory"
	createfieldmugshot MUGSHOT_SANDY, EMOTE_NORMAL
# 27 "data/maps/JungleGym/scripts.pory"
	setspeaker JungleGym_Credits_Text_4
# 28 "data/maps/JungleGym/scripts.pory"
	msgbox JungleGym_Credits_Text_5
# 29 "data/maps/JungleGym/scripts.pory"
	warp MAP_HAMTARO_BROKEN_TV, 19, 12
# 30 "data/maps/JungleGym/scripts.pory"
	waitstate
# 31 "data/maps/JungleGym/scripts.pory"
	releaseall
	return


# 19 "data/maps/JungleGym/scripts.pory"
JungleGym_Credits_Movement_0:
# 19 "data/maps/JungleGym/scripts.pory"
	walk_fast_right
# 19 "data/maps/JungleGym/scripts.pory"
	walk_fast_right
# 19 "data/maps/JungleGym/scripts.pory"
	walk_fast_right
# 19 "data/maps/JungleGym/scripts.pory"
	walk_fast_right
# 19 "data/maps/JungleGym/scripts.pory"
	walk_fast_right
# 19 "data/maps/JungleGym/scripts.pory"
	walk_fast_right
# 19 "data/maps/JungleGym/scripts.pory"
	walk_fast_right
# 19 "data/maps/JungleGym/scripts.pory"
	walk_fast_right
# 19 "data/maps/JungleGym/scripts.pory"
	walk_fast_right
	step_end

# 24 "data/maps/JungleGym/scripts.pory"
JungleGym_Credits_Movement_1:
# 24 "data/maps/JungleGym/scripts.pory"
	walk_fast_right
# 24 "data/maps/JungleGym/scripts.pory"
	walk_fast_right
# 24 "data/maps/JungleGym/scripts.pory"
	walk_fast_right
# 24 "data/maps/JungleGym/scripts.pory"
	walk_fast_right
	step_end

JungleGym_Credits_Text_0:
# 17 "data/maps/JungleGym/scripts.pory"
	.string "Pashmina$"

JungleGym_Credits_Text_1:
# 18 "data/maps/JungleGym/scripts.pory"
	.string "Graphics either directly from or based\n"
	.string "on the graphics from Hamtaro HamHams\l"
	.string "Unite, also some from HamHam\l"
	.string "Heartbreak.$"

JungleGym_Credits_Text_2:
# 22 "data/maps/JungleGym/scripts.pory"
	.string "Penelope$"

JungleGym_Credits_Text_3:
# 23 "data/maps/JungleGym/scripts.pory"
	.string "Big shout out to Jayman357 on The\n"
	.string "Spriters Resource for ripping so much\l"
	.string "of these games. The unused HamHams\l"
	.string "Unite-styled Broski, Pepper, Spat, and\l"
	.string "Harmony sprites in the repo are by him\l"
	.string "as well.$"

JungleGym_Credits_Text_4:
# 27 "data/maps/JungleGym/scripts.pory"
	.string "Sandy$"

JungleGym_Credits_Text_5:
# 28 "data/maps/JungleGym/scripts.pory"
	.string "The Music was created using PORYDAW\n"
	.string "and Piano MIDIs of the Hamtaro music by\l"
	.string "Th3Gavst3r and Altissimo from\l"
	.string "NinSheetMusic.$"
