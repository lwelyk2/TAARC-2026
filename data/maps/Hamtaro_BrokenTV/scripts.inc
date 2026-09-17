Hamtaro_BrokenTV_MapScripts::
# 2 "data/maps/Hamtaro_BrokenTV/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, BrokenTV_HidePlayer
# 3 "data/maps/Hamtaro_BrokenTV/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Hamtaro_BrokenTV_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Hamtaro_BrokenTV_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 4 "data/maps/Hamtaro_BrokenTV/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, BrokenTV_Credits
	.2byte 0


BrokenTV_HidePlayer::
# 8 "data/maps/Hamtaro_BrokenTV/scripts.pory"
	hideplayer
# 9 "data/maps/Hamtaro_BrokenTV/scripts.pory"
	special SpawnCameraObject
	return


BrokenTV_Credits::
# 13 "data/maps/Hamtaro_BrokenTV/scripts.pory"
	setvar VAR_TEMP_0, 1
# 14 "data/maps/Hamtaro_BrokenTV/scripts.pory"
	hideplayer
# 15 "data/maps/Hamtaro_BrokenTV/scripts.pory"
	special SpawnCameraObject
# 16 "data/maps/Hamtaro_BrokenTV/scripts.pory"
	createfieldmugshot MUGSHOT_BIJOU, EMOTE_NORMAL
# 17 "data/maps/Hamtaro_BrokenTV/scripts.pory"
	setspeaker BrokenTV_Credits_Text_0
# 18 "data/maps/Hamtaro_BrokenTV/scripts.pory"
	msgbox BrokenTV_Credits_Text_1
# 19 "data/maps/Hamtaro_BrokenTV/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, BrokenTV_Credits_Movement_0
# 20 "data/maps/Hamtaro_BrokenTV/scripts.pory"
	waitmovement
# 21 "data/maps/Hamtaro_BrokenTV/scripts.pory"
	createfieldmugshot MUGSHOT_DEXTER, EMOTE_NORMAL
# 22 "data/maps/Hamtaro_BrokenTV/scripts.pory"
	setspeaker BrokenTV_Credits_Text_2
# 23 "data/maps/Hamtaro_BrokenTV/scripts.pory"
	msgbox BrokenTV_Credits_Text_3
# 24 "data/maps/Hamtaro_BrokenTV/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, BrokenTV_Credits_Movement_1
# 25 "data/maps/Hamtaro_BrokenTV/scripts.pory"
	waitmovement
# 26 "data/maps/Hamtaro_BrokenTV/scripts.pory"
	createfieldmugshot MUGSHOT_HOWDY, EMOTE_NORMAL
# 27 "data/maps/Hamtaro_BrokenTV/scripts.pory"
	setspeaker BrokenTV_Credits_Text_4
# 28 "data/maps/Hamtaro_BrokenTV/scripts.pory"
	msgbox BrokenTV_Credits_Text_5
# 29 "data/maps/Hamtaro_BrokenTV/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, BrokenTV_Credits_Movement_2
# 30 "data/maps/Hamtaro_BrokenTV/scripts.pory"
	waitmovement
# 31 "data/maps/Hamtaro_BrokenTV/scripts.pory"
	createfieldmugshot MUGSHOT_CAPPY, EMOTE_NORMAL
# 32 "data/maps/Hamtaro_BrokenTV/scripts.pory"
	setspeaker BrokenTV_Credits_Text_6
# 33 "data/maps/Hamtaro_BrokenTV/scripts.pory"
	msgbox BrokenTV_Credits_Text_7
# 34 "data/maps/Hamtaro_BrokenTV/scripts.pory"
	warp MAP_HAM_HAM_CLUBHOUSE, 0
# 35 "data/maps/Hamtaro_BrokenTV/scripts.pory"
	waitstate
# 36 "data/maps/Hamtaro_BrokenTV/scripts.pory"
	releaseall
	return


# 19 "data/maps/Hamtaro_BrokenTV/scripts.pory"
BrokenTV_Credits_Movement_0:
# 19 "data/maps/Hamtaro_BrokenTV/scripts.pory"
	walk_diag_northwest
# 19 "data/maps/Hamtaro_BrokenTV/scripts.pory"
	walk_diag_northwest
# 19 "data/maps/Hamtaro_BrokenTV/scripts.pory"
	walk_diag_northwest
# 19 "data/maps/Hamtaro_BrokenTV/scripts.pory"
	walk_diag_northwest
# 19 "data/maps/Hamtaro_BrokenTV/scripts.pory"
	walk_diag_northwest
# 19 "data/maps/Hamtaro_BrokenTV/scripts.pory"
	walk_diag_northwest
# 19 "data/maps/Hamtaro_BrokenTV/scripts.pory"
	walk_diag_northwest
# 19 "data/maps/Hamtaro_BrokenTV/scripts.pory"
	walk_diag_northwest
	step_end

# 24 "data/maps/Hamtaro_BrokenTV/scripts.pory"
BrokenTV_Credits_Movement_1:
# 24 "data/maps/Hamtaro_BrokenTV/scripts.pory"
	walk_diag_southwest
# 24 "data/maps/Hamtaro_BrokenTV/scripts.pory"
	walk_diag_southwest
# 24 "data/maps/Hamtaro_BrokenTV/scripts.pory"
	walk_fast_left
# 24 "data/maps/Hamtaro_BrokenTV/scripts.pory"
	walk_fast_left
# 24 "data/maps/Hamtaro_BrokenTV/scripts.pory"
	walk_fast_left
# 24 "data/maps/Hamtaro_BrokenTV/scripts.pory"
	walk_fast_left
# 24 "data/maps/Hamtaro_BrokenTV/scripts.pory"
	walk_fast_left
# 24 "data/maps/Hamtaro_BrokenTV/scripts.pory"
	walk_fast_left
# 24 "data/maps/Hamtaro_BrokenTV/scripts.pory"
	walk_fast_left
	step_end

# 29 "data/maps/Hamtaro_BrokenTV/scripts.pory"
BrokenTV_Credits_Movement_2:
# 29 "data/maps/Hamtaro_BrokenTV/scripts.pory"
	walk_diag_southeast
# 29 "data/maps/Hamtaro_BrokenTV/scripts.pory"
	walk_diag_southeast
# 29 "data/maps/Hamtaro_BrokenTV/scripts.pory"
	walk_diag_southeast
# 29 "data/maps/Hamtaro_BrokenTV/scripts.pory"
	walk_diag_southeast
# 29 "data/maps/Hamtaro_BrokenTV/scripts.pory"
	walk_diag_southeast
# 29 "data/maps/Hamtaro_BrokenTV/scripts.pory"
	walk_diag_southeast
# 29 "data/maps/Hamtaro_BrokenTV/scripts.pory"
	walk_fast_down
# 29 "data/maps/Hamtaro_BrokenTV/scripts.pory"
	walk_fast_down
# 29 "data/maps/Hamtaro_BrokenTV/scripts.pory"
	walk_fast_down
# 29 "data/maps/Hamtaro_BrokenTV/scripts.pory"
	walk_fast_down
# 29 "data/maps/Hamtaro_BrokenTV/scripts.pory"
	walk_fast_down
# 29 "data/maps/Hamtaro_BrokenTV/scripts.pory"
	walk_fast_down
# 29 "data/maps/Hamtaro_BrokenTV/scripts.pory"
	walk_fast_down
	step_end

BrokenTV_Credits_Text_0:
# 17 "data/maps/Hamtaro_BrokenTV/scripts.pory"
	.string "Bijou$"

BrokenTV_Credits_Text_1:
# 18 "data/maps/Hamtaro_BrokenTV/scripts.pory"
	.string "The field mugshot system is from\n"
	.string "mudskipper13, and the TM/HM case code\l"
	.string "was from agsmgmaster64's FRLG Items\l"
	.string "Expansion.$"

BrokenTV_Credits_Text_2:
# 22 "data/maps/Hamtaro_BrokenTV/scripts.pory"
	.string "Dexter$"

BrokenTV_Credits_Text_3:
# 23 "data/maps/Hamtaro_BrokenTV/scripts.pory"
	.string "Thanks to Kasen in the Team Aqua's\n"
	.string "Hideout discord for pointing out my\l"
	.string "stupid mistake that took a lot of time.$"

BrokenTV_Credits_Text_4:
# 27 "data/maps/Hamtaro_BrokenTV/scripts.pory"
	.string "Howdy$"

BrokenTV_Credits_Text_5:
# 28 "data/maps/Hamtaro_BrokenTV/scripts.pory"
	.string "Thanks to everyone who works on the\n"
	.string "Pokeemerald Expansion and for the Team\l"
	.string "Aqua's Hideout for getting me to\l"
	.string "actually sort of finish a gen 3 project\l"
	.string "with this one.$"

BrokenTV_Credits_Text_6:
# 32 "data/maps/Hamtaro_BrokenTV/scripts.pory"
	.string "Cappy$"

BrokenTV_Credits_Text_7:
# 33 "data/maps/Hamtaro_BrokenTV/scripts.pory"
	.string "Okay, that's the ending!\p"
	.string "Due to changing the idea of this a few\n"
	.string "times and a variety of real life issues\l"
	.string "this is rushed and unfinished, but I\l"
	.string "wanted to get something out the door.\p"
	.string "I love the old Hamtaro gameboy color\n"
	.string "games and may revisit this idea if I\l"
	.string "ever do a sequel to my GBC hack and do\l"
	.string "the goofy corrupted sd card mixing up\l"
	.string "the ROMs concept again.\p"
	.string "You'll be kicked back to the Clubhouse\n"
	.string "now and if I had time you'll be able to\l"
	.string "talk to the receptionist in the arena\l"
	.string "to fight whatever HamHam you want.\p"
	.string "Probably not worth it, didn't do too\n"
	.string "many moves and my ideas for this was\l"
	.string "more around using Hamtaro features for\l"
	.string "overworld navigation.\p"
	.string "Anyway, thanks for playing!$"
