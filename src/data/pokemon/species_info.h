#include "constants/abilities.h"
#include "constants/teaching_types.h"
#include "species_info/shared_dex_text.h"
#include "species_info/shared_front_pic_anims.h"

// Macros for ease of use.

#define EVOLUTION(...) (const struct Evolution[]) { __VA_ARGS__, { EVOLUTIONS_END }, }
#define CONDITIONS(...) ((const struct EvolutionParam[]) { __VA_ARGS__, {CONDITIONS_END} })

#define ANIM_FRAMES(...) (const union AnimCmd *const[]) { sAnim_GeneralFrame0, (const union AnimCmd[]) { __VA_ARGS__ ANIMCMD_END, }, }

#if P_FOOTPRINTS
#define FOOTPRINT(sprite) .footprint = gMonFootprint_## sprite,
#else
#define FOOTPRINT(sprite)
#endif

#if B_ENEMY_MON_SHADOW_STYLE >= GEN_4 && P_GBA_STYLE_SPECIES_GFX == FALSE
#define SHADOW(x, y, size)  .enemyShadowXOffset = x, .enemyShadowYOffset = y, .enemyShadowSize = size,
#define NO_SHADOW           .suppressEnemyShadow = TRUE,
#else
#define SHADOW(x, y, size)  .enemyShadowXOffset = 0, .enemyShadowYOffset = 0, .enemyShadowSize = 0,
#define NO_SHADOW           .suppressEnemyShadow = FALSE,
#endif

#define SIZE_32x32 1
#define SIZE_64x64 0

// Set .compressed = OW_GFX_COMPRESS
#define COMP OW_GFX_COMPRESS

#if OW_POKEMON_OBJECT_EVENTS
#if OW_PKMN_OBJECTS_SHARE_PALETTES == FALSE
#define OVERWORLD_PAL(...)                                  \
    .overworldPalette = DEFAULT(NULL, __VA_ARGS__),         \
    .overworldShinyPalette = DEFAULT_2(NULL, __VA_ARGS__),
#if P_GENDER_DIFFERENCES
#define OVERWORLD_PAL_FEMALE(...)                                 \
    .overworldPaletteFemale = DEFAULT(NULL, __VA_ARGS__),         \
    .overworldShinyPaletteFemale = DEFAULT_2(NULL, __VA_ARGS__),
#else
#define OVERWORLD_PAL_FEMALE(...)
#endif //P_GENDER_DIFFERENCES
#else
#define OVERWORLD_PAL(...)
#define OVERWORLD_PAL_FEMALE(...)
#endif //OW_PKMN_OBJECTS_SHARE_PALETTES == FALSE

#define OVERWORLD_DATA(picTable, _size, shadow, _tracks, _anims)                                                                     \
{                                                                                                                                       \
    .tileTag = TAG_NONE,                                                                                                                \
    .paletteTag = OBJ_EVENT_PAL_TAG_DYNAMIC,                                                                                            \
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,                                                                                     \
    .size = (_size == SIZE_32x32 ? 512 : 2048),                                                                                         \
    .width = (_size == SIZE_32x32 ? 32 : 64),                                                                                           \
    .height = (_size == SIZE_32x32 ? 32 : 64),                                                                                          \
    .paletteSlot = PALSLOT_NPC_1,                                                                                                       \
    .shadowSize = shadow,                                                                                                               \
    .inanimate = FALSE,                                                                                                                 \
    .compressed = COMP,                                                                                                                 \
    .tracks = _tracks,                                                                                                                  \
    .oam = (_size == SIZE_32x32 ? &gObjectEventBaseOam_32x32 : &gObjectEventBaseOam_64x64),                                             \
    .subspriteTables = (_size == SIZE_32x32 ? sOamTables_32x32 : sOamTables_64x64),                                                     \
    .anims = _anims,                                                                                                                    \
    .images = picTable,                                                                                                                 \
}

#define OVERWORLD(objEventPic, _size, shadow, _tracks, _anims, ...)                                 \
    .overworldData = OVERWORLD_DATA(objEventPic, _size, shadow, _tracks, _anims),                   \
    OVERWORLD_PAL(__VA_ARGS__)

#if P_GENDER_DIFFERENCES
#define OVERWORLD_FEMALE(objEventPic, _size, shadow, _tracks, _anims, ...)                          \
    .overworldDataFemale = OVERWORLD_DATA(objEventPic, _size, shadow, _tracks, _anims),             \
    OVERWORLD_PAL_FEMALE(__VA_ARGS__)
#else
#define OVERWORLD_FEMALE(...)
#endif //P_GENDER_DIFFERENCES

#else
#define OVERWORLD(...)
#define OVERWORLD_FEMALE(...)
#define OVERWORLD_PAL(...)
#define OVERWORLD_PAL_FEMALE(...)
#endif //OW_POKEMON_OBJECT_EVENTS

// Maximum value for a female Pokémon is 254 (MON_FEMALE) which is 100% female.
// 255 (MON_GENDERLESS) is reserved for genderless Pokémon.
#define PERCENT_FEMALE(percent) min(254, ((percent * 255) / 100))

#define MON_TYPES(type1, ...) { type1, DEFAULT(type1, __VA_ARGS__) }
#define MON_EGG_GROUPS(group1, ...) { group1, DEFAULT(group1, __VA_ARGS__) }

#define FLIP    0
#define NO_FLIP 1

const struct SpeciesInfo gSpeciesInfo[] =
{
    [SPECIES_NONE] =
    {
        .speciesName = _("??????????"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_NONE,
        .categoryName = _("Unknown"),
        .height = 0,
        .weight = 0,
        .description = gFallbackPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_CircledQuestionMark,
        .frontPicSize = MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = 12,
        .frontAnimFrames = sAnims_TwoFramePlaceHolder,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_CircledQuestionMark,
        .backPicSize = MON_COORDS_SIZE(40, 40),
        .backPicYOffset = 12,
        .backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_CircledQuestionMark,
        .shinyPalette = gMonShinyPalette_CircledQuestionMark,
        .iconSprite = gMonIcon_QuestionMark,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        FOOTPRINT(QuestionMark)
        SHADOW(-1, 0, SHADOW_SIZE_M)
    #if OW_POKEMON_OBJECT_EVENTS
        .overworldData = {
            .tileTag = TAG_NONE,
            .paletteTag = OBJ_EVENT_PAL_TAG_SUBSTITUTE,
            .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
            .size = 512,
            .width = 32,
            .height = 32,
            .paletteSlot = PALSLOT_NPC_1,
            .shadowSize = SHADOW_SIZE_M,
            .inanimate = FALSE,
            .compressed = COMP,
            .tracks = TRACKS_FOOT,
            .oam = &gObjectEventBaseOam_32x32,
            .subspriteTables = sOamTables_32x32,
            .anims = sAnimTable_Following,
            .images = sPicTable_Substitute,
        },
    #endif
        .levelUpLearnset = sNoneLevelUpLearnset,
        .teachableLearnset = sNoneTeachableLearnset,
        .eggMoveLearnset = sNoneEggMoveLearnset,
    },

    #include "species_info/gen_1_families.h"
    #include "species_info/gen_2_families.h"
    #include "species_info/gen_3_families.h"
    #include "species_info/gen_4_families.h"
    #include "species_info/gen_5_families.h"
    #include "species_info/gen_6_families.h"
    #include "species_info/gen_7_families.h"
    #include "species_info/gen_8_families.h"
    #include "species_info/gen_9_families.h"

    [SPECIES_EGG] =
    {
        .frontPic = gMonFrontPic_Egg,
        .frontPicSize = MON_COORDS_SIZE(24, 24),
        .frontPicYOffset = 20,
        .backPic = gMonFrontPic_Egg,
        .backPicSize = MON_COORDS_SIZE(24, 24),
        .backPicYOffset = 20,
        .palette = gMonPalette_Egg,
        .shinyPalette = gMonPalette_Egg,
        .iconSprite = gMonIcon_Egg,
        .iconPalIndex = 1,
    },

    /* You may add any custom species below this point based on the following structure: */

    /*
    [SPECIES_NONE] =
    {
        .baseHP        = 1,
        .baseAttack    = 1,
        .baseDefense   = 1,
        .baseSpeed     = 1,
        .baseSpAttack  = 1,
        .baseSpDefense = 1,
        .types = MON_TYPES(TYPE_MYSTERY),
        .catchRate = 255,
        .expYield = 67,
        .evYield_HP = 1,
        .evYield_Defense = 1,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_NONE, ABILITY_CURSED_BODY, ABILITY_DAMP },
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("??????????"),
        .cryId = CRY_NONE,
        .natDexNum = NATIONAL_DEX_NONE,
        .categoryName = _("Unknown"),
        .height = 0,
        .weight = 0,
        .description = COMPOUND_STRING(
            "This is a newly discovered Pokémon.\n"
            "It is currently under investigation.\n"
            "No detailed information is available\n"
            "at this time."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_CircledQuestionMark,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_None,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_CircledQuestionMark,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 7,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_CircledQuestionMark,
        .frontPicSizeFemale = MON_COORDS_SIZE(64, 64),
        .backPicFemale = gMonBackPic_CircledQuestionMarkF,
        .backPicSizeFemale = MON_COORDS_SIZE(64, 64),
        .paletteFemale = gMonPalette_CircledQuestionMarkF,
        .shinyPaletteFemale = gMonShinyPalette_CircledQuestionMarkF,
        .iconSpriteFemale = gMonIcon_QuestionMarkF,
        .iconPalIndexFemale = 1,
#endif //P_GENDER_DIFFERENCES
        .backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_CircledQuestionMark,
        .shinyPalette = gMonShinyPalette_CircledQuestionMark,
        .iconSprite = gMonIcon_QuestionMark,
        .iconPalIndex = 0,
        FOOTPRINT(QuestionMark)
        .levelUpLearnset = sNoneLevelUpLearnset,
        .teachableLearnset = sNoneTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 100, SPECIES_NONE},
                                {EVO_ITEM, ITEM_MOOMOO_MILK, SPECIES_NONE}),
        //.formSpeciesIdTable = sNoneFormSpeciesIdTable,
        //.formChangeTable = sNoneFormChangeTable,
        //.perfectIVCount = NUM_STATS,
    },
    */
    
    [SPECIES_HAMTARO] =
    {
        .baseHP        = 85,
        .baseAttack    = 90,
        .baseDefense   = 85,
        .baseSpeed     = 100,
        .baseSpAttack  = 65,
        .baseSpDefense = 65,
        .types = MON_TYPES(TYPE_NORMAL),
        .catchRate = 255,
        .expYield = 67,
        .evYield_HP = 1,
        .evYield_Defense = 1,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(0),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_GLUTTONY, ABILITY_CHEEK_POUCH, ABILITY_TECHNICIAN },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Hamtaro"),
        .cryId = CRY_HAMTARO,
        .natDexNum = NATIONAL_DEX_HAMTARO,
        .categoryName = _("Hamster"),
        .height = 1,
        .weight = 1,
        .description = COMPOUND_STRING(
            "Hamtaro is an energetic hamster\n"
            "who is always there to lend a\n"
            "hand to his friends and go on\n"
            "new adventures!"),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Hamtaro,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 50),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Hamtaro,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Hamtaro,
        .shinyPalette = gMonShinyPalette_Hamtaro,
        .iconSprite = gMonIcon_Hamtaro,
        .iconPalIndex =5,
        FOOTPRINT(QuestionMark)
        .levelUpLearnset = sHamtaroLevelUpLearnset,
        .teachableLearnset = sHamtaroTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 100, SPECIES_NONE},
                                {EVO_ITEM, ITEM_MOOMOO_MILK, SPECIES_NONE}),
        OVERWORLD(
            sPicTable_Hamtaro,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following_Asym,
            gOverworldPalette_Hamtaro,
            gShinyOverworldPalette_Hamtaro
        )
    },
    
    [SPECIES_HAMTARO_TOUGH] =
    {
        .baseHP        = 85,
        .baseAttack    = 90,
        .baseDefense   = 85,
        .baseSpeed     = 100,
        .baseSpAttack  = 65,
        .baseSpDefense = 65,
        .types = MON_TYPES(TYPE_NORMAL, TYPE_GROUND),
        .catchRate = 255,
        .expYield = 67,
        .evYield_HP = 1,
        .evYield_Defense = 1,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(0),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_GLUTTONY, ABILITY_CHEEK_POUCH, ABILITY_TECHNICIAN },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Hamtaro"),
        .cryId = CRY_HAMTARO,
        .natDexNum = NATIONAL_DEX_HAMTARO,
        .categoryName = _("Hamster"),
        .height = 1,
        .weight = 1,
        .description = COMPOUND_STRING(
            "Hamtaro is a real TOUGH guy, and\n"
            "isn't afraid of anything. He can\n"
            "beat up anyone he wants, but he's\n"
            "here to protect his friends."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Hamtaro,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 50),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Hamtaro,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Hamtaro,
        .shinyPalette = gMonShinyPalette_Hamtaro,
        .iconSprite = gMonIcon_Hamtaro,
        .iconPalIndex =5,
        FOOTPRINT(QuestionMark)
        .levelUpLearnset = sHamtaroLevelUpLearnset,
        .teachableLearnset = sHamtaroTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 100, SPECIES_NONE},
                                {EVO_ITEM, ITEM_MOOMOO_MILK, SPECIES_NONE}),
        OVERWORLD(
            sPicTable_Hamtaro,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following_Asym,
            gOverworldPalette_Hamtaro,
            gShinyOverworldPalette_Hamtaro
        )
    },
    
    [SPECIES_HAMTARO_CUTE] =
    {
        .baseHP        = 85,
        .baseAttack    = 90,
        .baseDefense   = 85,
        .baseSpeed     = 100,
        .baseSpAttack  = 65,
        .baseSpDefense = 65,
        .types = MON_TYPES(TYPE_NORMAL, TYPE_FAIRY),
        .catchRate = 255,
        .expYield = 67,
        .evYield_HP = 1,
        .evYield_Defense = 1,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(0),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_GLUTTONY, ABILITY_CHEEK_POUCH, ABILITY_TECHNICIAN },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Hamtaro"),
        .cryId = CRY_HAMTARO,
        .natDexNum = NATIONAL_DEX_HAMTARO,
        .categoryName = _("Hamster"),
        .height = 1,
        .weight = 1,
        .description = COMPOUND_STRING(
            "Hamtaro is a real cutie and\n"
            "everyone loves him!\n"
            "He's too cute for words, and\n"
            "everyone loves him!"),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Hamtaro,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 50),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Hamtaro,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Hamtaro,
        .shinyPalette = gMonShinyPalette_Hamtaro,
        .iconSprite = gMonIcon_Hamtaro,
        .iconPalIndex =5,
        FOOTPRINT(QuestionMark)
        .levelUpLearnset = sHamtaroLevelUpLearnset,
        .teachableLearnset = sHamtaroTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 100, SPECIES_NONE},
                                {EVO_ITEM, ITEM_MOOMOO_MILK, SPECIES_NONE}),
        OVERWORLD(
            sPicTable_Hamtaro,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following_Asym,
            gOverworldPalette_Hamtaro,
            gShinyOverworldPalette_Hamtaro
        )
    },
    
    [SPECIES_HAMTARO_COOL] =
    {
        .baseHP        = 85,
        .baseAttack    = 90,
        .baseDefense   = 85,
        .baseSpeed     = 100,
        .baseSpAttack  = 65,
        .baseSpDefense = 65,
        .types = MON_TYPES(TYPE_NORMAL, TYPE_FIRE),
        .catchRate = 255,
        .expYield = 67,
        .evYield_HP = 1,
        .evYield_Defense = 1,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(0),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_GLUTTONY, ABILITY_CHEEK_POUCH, ABILITY_TECHNICIAN },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Hamtaro"),
        .cryId = CRY_HAMTARO,
        .natDexNum = NATIONAL_DEX_HAMTARO,
        .categoryName = _("Hamster"),
        .height = 1,
        .weight = 1,
        .description = COMPOUND_STRING(
            "Hamtaro is a real cool hombre.\n"
            "Ladies and gentlehams don't know\n"
            "if they want him or want to be\n"
            "him. Coolest hamster in town."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Hamtaro,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 50),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Hamtaro,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Hamtaro,
        .shinyPalette = gMonShinyPalette_Hamtaro,
        .iconSprite = gMonIcon_Hamtaro,
        .iconPalIndex =5,
        FOOTPRINT(QuestionMark)
        .levelUpLearnset = sHamtaroLevelUpLearnset,
        .teachableLearnset = sHamtaroTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 100, SPECIES_NONE},
                                {EVO_ITEM, ITEM_MOOMOO_MILK, SPECIES_NONE}),
        OVERWORLD(
            sPicTable_Hamtaro,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following_Asym,
            gOverworldPalette_Hamtaro,
            gShinyOverworldPalette_Hamtaro
        )
    },
    
    [SPECIES_HAMTARO_SMART] =
    {
        .baseHP        = 85,
        .baseAttack    = 90,
        .baseDefense   = 85,
        .baseSpeed     = 100,
        .baseSpAttack  = 65,
        .baseSpDefense = 65,
        .types = MON_TYPES(TYPE_NORMAL, TYPE_GRASS),
        .catchRate = 255,
        .expYield = 67,
        .evYield_HP = 1,
        .evYield_Defense = 1,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(0),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_GLUTTONY, ABILITY_CHEEK_POUCH, ABILITY_TECHNICIAN },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Hamtaro"),
        .cryId = CRY_HAMTARO,
        .natDexNum = NATIONAL_DEX_HAMTARO,
        .categoryName = _("Hamster"),
        .height = 1,
        .weight = 1,
        .description = COMPOUND_STRING(
            "Hamtaro is a genius. One of the\n"
            "smartest hamsters around, and\n"
            "he uses his big brain to help out\n"
            "his friends and hamsterkind."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Hamtaro,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 50),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Hamtaro,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Hamtaro,
        .shinyPalette = gMonShinyPalette_Hamtaro,
        .iconSprite = gMonIcon_Hamtaro,
        .iconPalIndex =5,
        FOOTPRINT(QuestionMark)
        .levelUpLearnset = sHamtaroLevelUpLearnset,
        .teachableLearnset = sHamtaroTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 100, SPECIES_NONE},
                                {EVO_ITEM, ITEM_MOOMOO_MILK, SPECIES_NONE}),
        OVERWORLD(
            sPicTable_Hamtaro,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following_Asym,
            gOverworldPalette_Hamtaro,
            gShinyOverworldPalette_Hamtaro
        )
    },
    
    [SPECIES_HAMTARO_BEAUTIFUL] =
    {
        .baseHP        = 85,
        .baseAttack    = 90,
        .baseDefense   = 85,
        .baseSpeed     = 100,
        .baseSpAttack  = 65,
        .baseSpDefense = 65,
        .types = MON_TYPES(TYPE_NORMAL, TYPE_WATER),
        .catchRate = 255,
        .expYield = 67,
        .evYield_HP = 1,
        .evYield_Defense = 1,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(0),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_GLUTTONY, ABILITY_CHEEK_POUCH, ABILITY_TECHNICIAN },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Hamtaro"),
        .cryId = CRY_HAMTARO,
        .natDexNum = NATIONAL_DEX_HAMTARO,
        .categoryName = _("Hamster"),
        .height = 1,
        .weight = 1,
        .description = COMPOUND_STRING(
            "Hamtaro is a true beauty to\n"
            "behold. His elegance and grace\n"
            "are an inspiration to not just\n"
            "his friends, but all hamsters."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Hamtaro,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 50),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Hamtaro,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Hamtaro,
        .shinyPalette = gMonShinyPalette_Hamtaro,
        .iconSprite = gMonIcon_Hamtaro,
        .iconPalIndex =5,
        FOOTPRINT(QuestionMark)
        .levelUpLearnset = sHamtaroLevelUpLearnset,
        .teachableLearnset = sHamtaroTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 100, SPECIES_NONE},
                                {EVO_ITEM, ITEM_MOOMOO_MILK, SPECIES_NONE}),
        OVERWORLD(
            sPicTable_Hamtaro,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following_Asym,
            gOverworldPalette_Hamtaro,
            gShinyOverworldPalette_Hamtaro
        )
    },
    
    [SPECIES_BIJOU] =
    {
        .baseHP        = 85,
        .baseAttack    = 90,
        .baseDefense   = 85,
        .baseSpeed     = 100,
        .baseSpAttack  = 65,
        .baseSpDefense = 65,
        .types = MON_TYPES(TYPE_WATER),
        .catchRate = 255,
        .expYield = 67,
        .evYield_HP = 1,
        .evYield_Defense = 1,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(100),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_GLUTTONY, ABILITY_CHEEK_POUCH, ABILITY_TECHNICIAN },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Bijou"),
        .cryId = CRY_HAMTARO,
        .natDexNum = NATIONAL_DEX_HAMTARO,
        .categoryName = _("Hamster"),
        .height = 1,
        .weight = 1,
        .description = COMPOUND_STRING(
            "An elegant, unworldly hamster,\n"
            "Bijou is kind and generous to all\n"
            "of her friends and anyone she\n"
            "meets who needs a helping paw."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Hamtaro,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 50),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Hamtaro,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Hamtaro,
        .shinyPalette = gMonShinyPalette_Hamtaro,
        .iconSprite = gMonIcon_Hamtaro,
        .iconPalIndex =5,
        FOOTPRINT(QuestionMark)
        .levelUpLearnset = sHamtaroLevelUpLearnset,
        .teachableLearnset = sHamtaroTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 100, SPECIES_NONE},
                                {EVO_ITEM, ITEM_MOOMOO_MILK, SPECIES_NONE}),
        OVERWORLD(
            sPicTable_Hamtaro,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following_Asym,
            gOverworldPalette_Hamtaro,
            gShinyOverworldPalette_Hamtaro
        )
    },
    
    [SPECIES_OXNARD] =
    {
        .baseHP        = 85,
        .baseAttack    = 90,
        .baseDefense   = 85,
        .baseSpeed     = 100,
        .baseSpAttack  = 65,
        .baseSpDefense = 65,
        .types = MON_TYPES(TYPE_NORMAL),
        .catchRate = 255,
        .expYield = 67,
        .evYield_HP = 1,
        .evYield_Defense = 1,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(0),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_GLUTTONY, ABILITY_CHEEK_POUCH, ABILITY_TECHNICIAN },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Oxnard"),
        .cryId = CRY_HAMTARO,
        .natDexNum = NATIONAL_DEX_HAMTARO,
        .categoryName = _("Hamster"),
        .height = 1,
        .weight = 1,
        .description = COMPOUND_STRING(
            "All hamsters love sunflower seeds,\n"
            "but Oxnard loves them more than\n"
            "most. Sometimes Pepper worries that\n"
            "he'll leave her for one."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Hamtaro,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 50),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Hamtaro,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Hamtaro,
        .shinyPalette = gMonShinyPalette_Hamtaro,
        .iconSprite = gMonIcon_Hamtaro,
        .iconPalIndex =5,
        FOOTPRINT(QuestionMark)
        .levelUpLearnset = sHamtaroLevelUpLearnset,
        .teachableLearnset = sHamtaroTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 100, SPECIES_NONE},
                                {EVO_ITEM, ITEM_MOOMOO_MILK, SPECIES_NONE}),
        OVERWORLD(
            sPicTable_Hamtaro,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following_Asym,
            gOverworldPalette_Hamtaro,
            gShinyOverworldPalette_Hamtaro
        )
    },
    
    [SPECIES_BOSS] =
    {
        .baseHP        = 85,
        .baseAttack    = 90,
        .baseDefense   = 85,
        .baseSpeed     = 100,
        .baseSpAttack  = 65,
        .baseSpDefense = 65,
        .types = MON_TYPES(TYPE_GROUND),
        .catchRate = 255,
        .expYield = 67,
        .evYield_HP = 1,
        .evYield_Defense = 1,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(0),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_GLUTTONY, ABILITY_CHEEK_POUCH, ABILITY_TECHNICIAN },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Boss"),
        .cryId = CRY_HAMTARO,
        .natDexNum = NATIONAL_DEX_HAMTARO,
        .categoryName = _("Hamster"),
        .height = 1,
        .weight = 1,
        .description = COMPOUND_STRING(
            "Boss is kind of the boss of the,\n"
            "Ham-Hams. A field Hamster who made\n"
            "the clubhouse, Boss works hard and\n"
            "is a dependable leader."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Hamtaro,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 50),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Hamtaro,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Hamtaro,
        .shinyPalette = gMonShinyPalette_Hamtaro,
        .iconSprite = gMonIcon_Hamtaro,
        .iconPalIndex =5,
        FOOTPRINT(QuestionMark)
        .levelUpLearnset = sHamtaroLevelUpLearnset,
        .teachableLearnset = sHamtaroTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 100, SPECIES_NONE},
                                {EVO_ITEM, ITEM_MOOMOO_MILK, SPECIES_NONE}),
        OVERWORLD(
            sPicTable_Hamtaro,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following_Asym,
            gOverworldPalette_Hamtaro,
            gShinyOverworldPalette_Hamtaro
        )
    },
    
    [SPECIES_MAXWELL] =
    {
        .baseHP        = 85,
        .baseAttack    = 90,
        .baseDefense   = 85,
        .baseSpeed     = 100,
        .baseSpAttack  = 65,
        .baseSpDefense = 65,
        .types = MON_TYPES(TYPE_GRASS),
        .catchRate = 255,
        .expYield = 67,
        .evYield_HP = 1,
        .evYield_Defense = 1,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(0),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_GLUTTONY, ABILITY_CHEEK_POUCH, ABILITY_TECHNICIAN },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Maxwell"),
        .cryId = CRY_HAMTARO,
        .natDexNum = NATIONAL_DEX_HAMTARO,
        .categoryName = _("Hamster"),
        .height = 1,
        .weight = 1,
        .description = COMPOUND_STRING(
            "A voracious reader, Maxwell is the\n"
            "one all the other Ham-Hams go to\n"
            "with any of their questions about\n"
            "the world around them."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Hamtaro,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 50),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Hamtaro,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Hamtaro,
        .shinyPalette = gMonShinyPalette_Hamtaro,
        .iconSprite = gMonIcon_Hamtaro,
        .iconPalIndex =5,
        FOOTPRINT(QuestionMark)
        .levelUpLearnset = sHamtaroLevelUpLearnset,
        .teachableLearnset = sHamtaroTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 100, SPECIES_NONE},
                                {EVO_ITEM, ITEM_MOOMOO_MILK, SPECIES_NONE}),
        OVERWORLD(
            sPicTable_Hamtaro,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following_Asym,
            gOverworldPalette_Hamtaro,
            gShinyOverworldPalette_Hamtaro
        )
    },
    
    [SPECIES_CAPPY] =
    {
        .baseHP        = 85,
        .baseAttack    = 90,
        .baseDefense   = 85,
        .baseSpeed     = 100,
        .baseSpAttack  = 65,
        .baseSpDefense = 65,
        .types = MON_TYPES(TYPE_FIRE),
        .catchRate = 255,
        .expYield = 67,
        .evYield_HP = 1,
        .evYield_Defense = 1,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(0),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_GLUTTONY, ABILITY_CHEEK_POUCH, ABILITY_TECHNICIAN },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Cappy"),
        .cryId = CRY_HAMTARO,
        .natDexNum = NATIONAL_DEX_HAMTARO,
        .categoryName = _("Hamster"),
        .height = 1,
        .weight = 1,
        .description = COMPOUND_STRING(
            "Cappy is always on the lookout for\n"
            "cool new hats (or other things that\n"
            "he can wear on his head). He's also\n"
            "one of the best hide-and-seek hiders."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Hamtaro,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 50),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Hamtaro,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Hamtaro,
        .shinyPalette = gMonShinyPalette_Hamtaro,
        .iconSprite = gMonIcon_Hamtaro,
        .iconPalIndex =5,
        FOOTPRINT(QuestionMark)
        .levelUpLearnset = sHamtaroLevelUpLearnset,
        .teachableLearnset = sHamtaroTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 100, SPECIES_NONE},
                                {EVO_ITEM, ITEM_MOOMOO_MILK, SPECIES_NONE}),
        OVERWORLD(
            sPicTable_Hamtaro,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following_Asym,
            gOverworldPalette_Hamtaro,
            gShinyOverworldPalette_Hamtaro
        )
    },
    
    
    [SPECIES_PASHMINA] =
    {
        .baseHP        = 85,
        .baseAttack    = 90,
        .baseDefense   = 85,
        .baseSpeed     = 100,
        .baseSpAttack  = 65,
        .baseSpDefense = 65,
        .types = MON_TYPES(TYPE_FAIRY, TYPE_WATER),
        .catchRate = 255,
        .expYield = 67,
        .evYield_HP = 1,
        .evYield_Defense = 1,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(0),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_GLUTTONY, ABILITY_CHEEK_POUCH, ABILITY_TECHNICIAN },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Pashmina"),
        .cryId = CRY_HAMTARO,
        .natDexNum = NATIONAL_DEX_HAMTARO,
        .categoryName = _("Hamster"),
        .height = 1,
        .weight = 1,
        .description = COMPOUND_STRING(
            "A sweetheart known for her beauty\n"
            "and love of cute scarves.\n"
            "Pashmina's very close to Penelope\n"
            "who she treats as a younger sister."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Hamtaro,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 50),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Hamtaro,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Hamtaro,
        .shinyPalette = gMonShinyPalette_Hamtaro,
        .iconSprite = gMonIcon_Hamtaro,
        .iconPalIndex =5,
        FOOTPRINT(QuestionMark)
        .levelUpLearnset = sHamtaroLevelUpLearnset,
        .teachableLearnset = sHamtaroTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 100, SPECIES_NONE},
                                {EVO_ITEM, ITEM_MOOMOO_MILK, SPECIES_NONE}),
        OVERWORLD(
            sPicTable_Hamtaro,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following_Asym,
            gOverworldPalette_Hamtaro,
            gShinyOverworldPalette_Hamtaro
        )
    },
    
    [SPECIES_PENELOPE] =
    {
        .baseHP        = 85,
        .baseAttack    = 90,
        .baseDefense   = 85,
        .baseSpeed     = 100,
        .baseSpAttack  = 65,
        .baseSpDefense = 65,
        .types = MON_TYPES(TYPE_FAIRY),
        .catchRate = 255,
        .expYield = 67,
        .evYield_HP = 1,
        .evYield_Defense = 1,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(0),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_GLUTTONY, ABILITY_CHEEK_POUCH, ABILITY_TECHNICIAN },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Penelope"),
        .cryId = CRY_HAMTARO,
        .natDexNum = NATIONAL_DEX_HAMTARO,
        .categoryName = _("Hamster"),
        .height = 1,
        .weight = 1,
        .description = COMPOUND_STRING(
            "The youngest HamHam, Pashmina is\n"
            "seldom seen without her signature\n"
            "yellow blanket or away from her big\n"
            "sister Pashmina."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Hamtaro,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 50),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Hamtaro,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Hamtaro,
        .shinyPalette = gMonShinyPalette_Hamtaro,
        .iconSprite = gMonIcon_Hamtaro,
        .iconPalIndex =5,
        FOOTPRINT(QuestionMark)
        .levelUpLearnset = sHamtaroLevelUpLearnset,
        .teachableLearnset = sHamtaroTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 100, SPECIES_NONE},
                                {EVO_ITEM, ITEM_MOOMOO_MILK, SPECIES_NONE}),
        OVERWORLD(
            sPicTable_Hamtaro,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following_Asym,
            gOverworldPalette_Hamtaro,
            gShinyOverworldPalette_Hamtaro
        )
    },
    
    [SPECIES_HOWDY] =
    {
        .baseHP        = 85,
        .baseAttack    = 90,
        .baseDefense   = 85,
        .baseSpeed     = 100,
        .baseSpAttack  = 65,
        .baseSpDefense = 65,
        .types = MON_TYPES(TYPE_GROUND),
        .catchRate = 255,
        .expYield = 67,
        .evYield_HP = 1,
        .evYield_Defense = 1,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(0),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_GLUTTONY, ABILITY_CHEEK_POUCH, ABILITY_TECHNICIAN },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Howdy"),
        .cryId = CRY_HAMTARO,
        .natDexNum = NATIONAL_DEX_HAMTARO,
        .categoryName = _("Hamster"),
        .height = 1,
        .weight = 1,
        .description = COMPOUND_STRING(
            "Howdy's a hard-working hamster,\n"
            "who likes to joke around.\n"
            "He and Dexter are frequent\n"
            "rivals for Pashmina's affection."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Hamtaro,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 50),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Hamtaro,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Hamtaro,
        .shinyPalette = gMonShinyPalette_Hamtaro,
        .iconSprite = gMonIcon_Hamtaro,
        .iconPalIndex =5,
        FOOTPRINT(QuestionMark)
        .levelUpLearnset = sHamtaroLevelUpLearnset,
        .teachableLearnset = sHamtaroTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 100, SPECIES_NONE},
                                {EVO_ITEM, ITEM_MOOMOO_MILK, SPECIES_NONE}),
        OVERWORLD(
            sPicTable_Hamtaro,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following_Asym,
            gOverworldPalette_Hamtaro,
            gShinyOverworldPalette_Hamtaro
        )
    },
    
    [SPECIES_DEXTER] =
    {
        .baseHP        = 85,
        .baseAttack    = 90,
        .baseDefense   = 85,
        .baseSpeed     = 100,
        .baseSpAttack  = 65,
        .baseSpDefense = 65,
        .types = MON_TYPES(TYPE_GRASS),
        .catchRate = 255,
        .expYield = 67,
        .evYield_HP = 1,
        .evYield_Defense = 1,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(0),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_GLUTTONY, ABILITY_CHEEK_POUCH, ABILITY_TECHNICIAN },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Dexter"),
        .cryId = CRY_HAMTARO,
        .natDexNum = NATIONAL_DEX_HAMTARO,
        .categoryName = _("Hamster"),
        .height = 1,
        .weight = 1,
        .description = COMPOUND_STRING(
            "Dexter is a dapper, gentlemanly\n"
            "hamster with a good education.\n"
            "He has a huge crush on Pashmina\n"
            "and fights with Howdy over her."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Hamtaro,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 50),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Hamtaro,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Hamtaro,
        .shinyPalette = gMonShinyPalette_Hamtaro,
        .iconSprite = gMonIcon_Hamtaro,
        .iconPalIndex =5,
        FOOTPRINT(QuestionMark)
        .levelUpLearnset = sHamtaroLevelUpLearnset,
        .teachableLearnset = sHamtaroTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 100, SPECIES_NONE},
                                {EVO_ITEM, ITEM_MOOMOO_MILK, SPECIES_NONE}),
        OVERWORLD(
            sPicTable_Hamtaro,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following_Asym,
            gOverworldPalette_Hamtaro,
            gShinyOverworldPalette_Hamtaro
        )
    },
    
    [SPECIES_SANDY] =
    {
        .baseHP        = 85,
        .baseAttack    = 90,
        .baseDefense   = 85,
        .baseSpeed     = 100,
        .baseSpAttack  = 65,
        .baseSpDefense = 65,
        .types = MON_TYPES(TYPE_WATER, TYPE_FIRE),
        .catchRate = 255,
        .expYield = 67,
        .evYield_HP = 1,
        .evYield_Defense = 1,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(0),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_GLUTTONY, ABILITY_CHEEK_POUCH, ABILITY_TECHNICIAN },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Sandy"),
        .cryId = CRY_HAMTARO,
        .natDexNum = NATIONAL_DEX_HAMTARO,
        .categoryName = _("Hamster"),
        .height = 1,
        .weight = 1,
        .description = COMPOUND_STRING(
            "An athletic hamster skilled in\n"
            "gymnastics, Sandy has to spend a\n"
            "lot of her free time keeping an\n"
            "eye on her twin brother Stan."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Hamtaro,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 50),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Hamtaro,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Hamtaro,
        .shinyPalette = gMonShinyPalette_Hamtaro,
        .iconSprite = gMonIcon_Hamtaro,
        .iconPalIndex =5,
        FOOTPRINT(QuestionMark)
        .levelUpLearnset = sHamtaroLevelUpLearnset,
        .teachableLearnset = sHamtaroTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 100, SPECIES_NONE},
                                {EVO_ITEM, ITEM_MOOMOO_MILK, SPECIES_NONE}),
        OVERWORLD(
            sPicTable_Hamtaro,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following_Asym,
            gOverworldPalette_Hamtaro,
            gShinyOverworldPalette_Hamtaro
        )
    },
    
    [SPECIES_STAN] =
    {
        .baseHP        = 85,
        .baseAttack    = 90,
        .baseDefense   = 85,
        .baseSpeed     = 100,
        .baseSpAttack  = 65,
        .baseSpDefense = 65,
        .types = MON_TYPES(TYPE_FIRE),
        .catchRate = 255,
        .expYield = 67,
        .evYield_HP = 1,
        .evYield_Defense = 1,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(0),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_GLUTTONY, ABILITY_CHEEK_POUCH, ABILITY_TECHNICIAN },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Stan"),
        .cryId = CRY_HAMTARO,
        .natDexNum = NATIONAL_DEX_HAMTARO,
        .categoryName = _("Hamster"),
        .height = 1,
        .weight = 1,
        .description = COMPOUND_STRING(
            "Stan is a flirtatious hamster who\n"
            "spends his days trying to avoid his\n"
            "twin sister Sandy so he can hit on\n"
            "her friends in peace."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Hamtaro,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 50),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Hamtaro,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Hamtaro,
        .shinyPalette = gMonShinyPalette_Hamtaro,
        .iconSprite = gMonIcon_Hamtaro,
        .iconPalIndex =5,
        FOOTPRINT(QuestionMark)
        .levelUpLearnset = sHamtaroLevelUpLearnset,
        .teachableLearnset = sHamtaroTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 100, SPECIES_NONE},
                                {EVO_ITEM, ITEM_MOOMOO_MILK, SPECIES_NONE}),
        OVERWORLD(
            sPicTable_Hamtaro,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following_Asym,
            gOverworldPalette_Hamtaro,
            gShinyOverworldPalette_Hamtaro
        )
    },
    
    
    [SPECIES_PANDA] =
    {
        .baseHP        = 85,
        .baseAttack    = 90,
        .baseDefense   = 85,
        .baseSpeed     = 100,
        .baseSpAttack  = 65,
        .baseSpDefense = 65,
        .types = MON_TYPES(TYPE_GRASS, TYPE_GROUND),
        .catchRate = 255,
        .expYield = 67,
        .evYield_HP = 1,
        .evYield_Defense = 1,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(0),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_GLUTTONY, ABILITY_CHEEK_POUCH, ABILITY_TECHNICIAN },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Panda"),
        .cryId = CRY_HAMTARO,
        .natDexNum = NATIONAL_DEX_HAMTARO,
        .categoryName = _("Hamster"),
        .height = 1,
        .weight = 1,
        .description = COMPOUND_STRING(
            "Panda is a black and white handy-\n"
            "-hamster who builds and maintains\n"
            "many of the things and buildings\n"
            "the HamHams use."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Hamtaro,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 50),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Hamtaro,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Hamtaro,
        .shinyPalette = gMonShinyPalette_Hamtaro,
        .iconSprite = gMonIcon_Hamtaro,
        .iconPalIndex =5,
        FOOTPRINT(QuestionMark)
        .levelUpLearnset = sHamtaroLevelUpLearnset,
        .teachableLearnset = sHamtaroTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 100, SPECIES_NONE},
                                {EVO_ITEM, ITEM_MOOMOO_MILK, SPECIES_NONE}),
        OVERWORLD(
            sPicTable_Hamtaro,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following_Asym,
            gOverworldPalette_Hamtaro,
            gShinyOverworldPalette_Hamtaro
        )
    },

    [SPECIES_SNOOZER] =
    {
        .baseHP        = 85,
        .baseAttack    = 90,
        .baseDefense   = 85,
        .baseSpeed     = 100,
        .baseSpAttack  = 65,
        .baseSpDefense = 65,
        .types = MON_TYPES(TYPE_NORMAL),
        .catchRate = 255,
        .expYield = 67,
        .evYield_HP = 1,
        .evYield_Defense = 1,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(0),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_GLUTTONY, ABILITY_CHEEK_POUCH, ABILITY_TECHNICIAN },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Snoozer"),
        .cryId = CRY_HAMTARO,
        .natDexNum = NATIONAL_DEX_HAMTARO,
        .categoryName = _("Hamster"),
        .height = 1,
        .weight = 1,
        .description = COMPOUND_STRING(
            "Zzzzzzzzzzzzzzzzzzzzz....\n"
            "...............................\n"
            "Snoozer sleeps a lot, but is the\n"
            "second in command of the HamHams."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Hamtaro,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 50),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Hamtaro,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Hamtaro,
        .shinyPalette = gMonShinyPalette_Hamtaro,
        .iconSprite = gMonIcon_Hamtaro,
        .iconPalIndex =5,
        FOOTPRINT(QuestionMark)
        .levelUpLearnset = sHamtaroLevelUpLearnset,
        .teachableLearnset = sHamtaroTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 100, SPECIES_NONE},
                                {EVO_ITEM, ITEM_MOOMOO_MILK, SPECIES_NONE}),
        OVERWORLD(
            sPicTable_Hamtaro,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following_Asym,
            gOverworldPalette_Hamtaro,
            gShinyOverworldPalette_Hamtaro
        )
    },

    
    [SPECIES_JINGLE] =
    {
        .baseHP        = 85,
        .baseAttack    = 90,
        .baseDefense   = 85,
        .baseSpeed     = 100,
        .baseSpAttack  = 65,
        .baseSpDefense = 65,
        .types = MON_TYPES(TYPE_GRASS),
        .catchRate = 255,
        .expYield = 67,
        .evYield_HP = 1,
        .evYield_Defense = 1,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(0),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_GLUTTONY, ABILITY_CHEEK_POUCH, ABILITY_TECHNICIAN },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Jingle"),
        .cryId = CRY_HAMTARO,
        .natDexNum = NATIONAL_DEX_HAMTARO,
        .categoryName = _("Hamster"),
        .height = 1,
        .weight = 1,
        .description = COMPOUND_STRING(
            "Not officially a member of the Ham-\n"
            "Ham Gang, Jingle is a traveling\n"
            "musician who often joins the crew\n"
            "on their adventures."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Hamtaro,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 50),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Hamtaro,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Hamtaro,
        .shinyPalette = gMonShinyPalette_Hamtaro,
        .iconSprite = gMonIcon_Hamtaro,
        .iconPalIndex =5,
        FOOTPRINT(QuestionMark)
        .levelUpLearnset = sHamtaroLevelUpLearnset,
        .teachableLearnset = sHamtaroTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 100, SPECIES_NONE},
                                {EVO_ITEM, ITEM_MOOMOO_MILK, SPECIES_NONE}),
        OVERWORLD(
            sPicTable_Hamtaro,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following_Asym,
            gOverworldPalette_Hamtaro,
            gShinyOverworldPalette_Hamtaro
        )
    },

    
    [SPECIES_PEPPER] =
    {
        .baseHP        = 85,
        .baseAttack    = 90,
        .baseDefense   = 85,
        .baseSpeed     = 100,
        .baseSpAttack  = 65,
        .baseSpDefense = 65,
        .types = MON_TYPES(TYPE_FAIRY, TYPE_GROUND),
        .catchRate = 255,
        .expYield = 67,
        .evYield_HP = 1,
        .evYield_Defense = 1,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(0),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_GLUTTONY, ABILITY_CHEEK_POUCH, ABILITY_TECHNICIAN },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Pepper"),
        .cryId = CRY_HAMTARO,
        .natDexNum = NATIONAL_DEX_HAMTARO,
        .categoryName = _("Hamster"),
        .height = 1,
        .weight = 1,
        .description = COMPOUND_STRING(
            "A more rural hamster, Pepper lives\n"
            "on a farm and thinks of the Ham-Hams\n"
            "as some city slickers, but is good\n"
            "friends with them, especially Oxnard."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Hamtaro,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 50),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Hamtaro,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Hamtaro,
        .shinyPalette = gMonShinyPalette_Hamtaro,
        .iconSprite = gMonIcon_Hamtaro,
        .iconPalIndex =5,
        FOOTPRINT(QuestionMark)
        .levelUpLearnset = sHamtaroLevelUpLearnset,
        .teachableLearnset = sHamtaroTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 100, SPECIES_NONE},
                                {EVO_ITEM, ITEM_MOOMOO_MILK, SPECIES_NONE}),
        OVERWORLD(
            sPicTable_Hamtaro,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following_Asym,
            gOverworldPalette_Hamtaro,
            gShinyOverworldPalette_Hamtaro
        )
    },

    
    [SPECIES_LAPIS] =
    {
        .baseHP        = 85,
        .baseAttack    = 90,
        .baseDefense   = 85,
        .baseSpeed     = 100,
        .baseSpAttack  = 65,
        .baseSpDefense = 65,
        .types = MON_TYPES(TYPE_FIRE, TYPE_WATER),
        .catchRate = 255,
        .expYield = 67,
        .evYield_HP = 1,
        .evYield_Defense = 1,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(0),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_GLUTTONY, ABILITY_CHEEK_POUCH, ABILITY_TECHNICIAN },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Lapis"),
        .cryId = CRY_HAMTARO,
        .natDexNum = NATIONAL_DEX_HAMTARO,
        .categoryName = _("Hamster"),
        .height = 1,
        .weight = 1,
        .description = COMPOUND_STRING(
            "Lapis a hamster who literally has\n"
            "magical powers.\n"
            "She also literally has a sister\n"
            "named Lazuli."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Hamtaro,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 50),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Hamtaro,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Hamtaro,
        .shinyPalette = gMonShinyPalette_Hamtaro,
        .iconSprite = gMonIcon_Hamtaro,
        .iconPalIndex =5,
        FOOTPRINT(QuestionMark)
        .levelUpLearnset = sHamtaroLevelUpLearnset,
        .teachableLearnset = sHamtaroTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 100, SPECIES_NONE},
                                {EVO_ITEM, ITEM_MOOMOO_MILK, SPECIES_NONE}),
        OVERWORLD(
            sPicTable_Hamtaro,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following_Asym,
            gOverworldPalette_Hamtaro,
            gShinyOverworldPalette_Hamtaro
        )
    },

    
    [SPECIES_LAZULI] =
    {
        .baseHP        = 85,
        .baseAttack    = 90,
        .baseDefense   = 85,
        .baseSpeed     = 100,
        .baseSpAttack  = 65,
        .baseSpDefense = 65,
        .types = MON_TYPES(TYPE_FIRE, TYPE_WATER),
        .catchRate = 255,
        .expYield = 67,
        .evYield_HP = 1,
        .evYield_Defense = 1,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(0),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_GLUTTONY, ABILITY_CHEEK_POUCH, ABILITY_TECHNICIAN },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Lazuli"),
        .cryId = CRY_HAMTARO,
        .natDexNum = NATIONAL_DEX_HAMTARO,
        .categoryName = _("Hamster"),
        .height = 1,
        .weight = 1,
        .description = COMPOUND_STRING(
            "Lazuli is a creative hamster who\n"
            "possesses the following things:\n"
            "magical powers, a blue purse, a bow\n"
            "a sister named Lapis."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Hamtaro,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 50),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Hamtaro,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Hamtaro,
        .shinyPalette = gMonShinyPalette_Hamtaro,
        .iconSprite = gMonIcon_Hamtaro,
        .iconPalIndex =5,
        FOOTPRINT(QuestionMark)
        .levelUpLearnset = sHamtaroLevelUpLearnset,
        .teachableLearnset = sHamtaroTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 100, SPECIES_NONE},
                                {EVO_ITEM, ITEM_MOOMOO_MILK, SPECIES_NONE}),
        OVERWORLD(
            sPicTable_Hamtaro,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following_Asym,
            gOverworldPalette_Hamtaro,
            gShinyOverworldPalette_Hamtaro
        )
    },

    
    [SPECIES_HARMONY] =
    {
        .baseHP        = 85,
        .baseAttack    = 90,
        .baseDefense   = 85,
        .baseSpeed     = 100,
        .baseSpAttack  = 65,
        .baseSpDefense = 65,
        .types = MON_TYPES(TYPE_FAIRY),
        .catchRate = 255,
        .expYield = 67,
        .evYield_HP = 1,
        .evYield_Defense = 1,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(0),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_GLUTTONY, ABILITY_CHEEK_POUCH, ABILITY_TECHNICIAN },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Harmony"),
        .cryId = CRY_HAMTARO,
        .natDexNum = NATIONAL_DEX_HAMTARO,
        .categoryName = _("Hamster"),
        .height = 1,
        .weight = 1,
        .description = COMPOUND_STRING(
            "Harmony an angel tasked with helping\n"
            "protect and restore love and friend-\n"
            "-ship's between Hamsters.\n"
            "She's literally an angel."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Hamtaro,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 50),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Hamtaro,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Hamtaro,
        .shinyPalette = gMonShinyPalette_Hamtaro,
        .iconSprite = gMonIcon_Hamtaro,
        .iconPalIndex =5,
        FOOTPRINT(QuestionMark)
        .levelUpLearnset = sHamtaroLevelUpLearnset,
        .teachableLearnset = sHamtaroTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 100, SPECIES_NONE},
                                {EVO_ITEM, ITEM_MOOMOO_MILK, SPECIES_NONE}),
        OVERWORLD(
            sPicTable_Hamtaro,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following_Asym,
            gOverworldPalette_Hamtaro,
            gShinyOverworldPalette_Hamtaro
        )
    },

    
    [SPECIES_SPAT] =
    {
        .baseHP        = 85,
        .baseAttack    = 90,
        .baseDefense   = 85,
        .baseSpeed     = 100,
        .baseSpAttack  = 65,
        .baseSpDefense = 65,
        .types = MON_TYPES(TYPE_DARK),
        .catchRate = 255,
        .expYield = 67,
        .evYield_HP = 1,
        .evYield_Defense = 1,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(0),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_GLUTTONY, ABILITY_CHEEK_POUCH, ABILITY_TECHNICIAN },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Spat"),
        .cryId = CRY_HAMTARO,
        .natDexNum = NATIONAL_DEX_HAMTARO,
        .categoryName = _("Hamster"),
        .height = 1,
        .weight = 1,
        .description = COMPOUND_STRING(
            "Spat is a villainous devil hamster\n"
            "who works to destroy love and also\n"
            "friendship between all Hamsters.\n"
            "He and Harmony don't get along."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Hamtaro,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 50),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Hamtaro,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Hamtaro,
        .shinyPalette = gMonShinyPalette_Hamtaro,
        .iconSprite = gMonIcon_Hamtaro,
        .iconPalIndex =5,
        FOOTPRINT(QuestionMark)
        .levelUpLearnset = sHamtaroLevelUpLearnset,
        .teachableLearnset = sHamtaroTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 100, SPECIES_NONE},
                                {EVO_ITEM, ITEM_MOOMOO_MILK, SPECIES_NONE}),
        OVERWORLD(
            sPicTable_Hamtaro,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following_Asym,
            gOverworldPalette_Hamtaro,
            gShinyOverworldPalette_Hamtaro
        )
    },

    
    [SPECIES_BARETTE] =
    {
        .baseHP        = 85,
        .baseAttack    = 90,
        .baseDefense   = 85,
        .baseSpeed     = 100,
        .baseSpAttack  = 65,
        .baseSpDefense = 65,
        .types = MON_TYPES(TYPE_FAIRY),
        .catchRate = 255,
        .expYield = 67,
        .evYield_HP = 1,
        .evYield_Defense = 1,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(0),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_GLUTTONY, ABILITY_CHEEK_POUCH, ABILITY_TECHNICIAN },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Barrette"),
        .cryId = CRY_HAMTARO,
        .natDexNum = NATIONAL_DEX_HAMTARO,
        .categoryName = _("Hamster"),
        .height = 1,
        .weight = 1,
        .description = COMPOUND_STRING(
            "Barette is a hamster who loves to knit.\n"
            "She and her boyfriend Seamore also\n"
            "run the photo studio in the Ham-Ham\n"
            "Clubhouse."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Hamtaro,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 50),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Hamtaro,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Hamtaro,
        .shinyPalette = gMonShinyPalette_Hamtaro,
        .iconSprite = gMonIcon_Hamtaro,
        .iconPalIndex =5,
        FOOTPRINT(QuestionMark)
        .levelUpLearnset = sHamtaroLevelUpLearnset,
        .teachableLearnset = sHamtaroTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 100, SPECIES_NONE},
                                {EVO_ITEM, ITEM_MOOMOO_MILK, SPECIES_NONE}),
        OVERWORLD(
            sPicTable_Hamtaro,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following_Asym,
            gOverworldPalette_Hamtaro,
            gShinyOverworldPalette_Hamtaro
        )
    },

    
    [SPECIES_SEAMORE] =
    {
        .baseHP        = 85,
        .baseAttack    = 90,
        .baseDefense   = 85,
        .baseSpeed     = 100,
        .baseSpAttack  = 65,
        .baseSpDefense = 65,
        .types = MON_TYPES(TYPE_FIRE, TYPE_GROUND),
        .catchRate = 255,
        .expYield = 67,
        .evYield_HP = 1,
        .evYield_Defense = 1,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(0),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_GLUTTONY, ABILITY_CHEEK_POUCH, ABILITY_TECHNICIAN },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Seamore"),
        .cryId = CRY_HAMTARO,
        .natDexNum = NATIONAL_DEX_HAMTARO,
        .categoryName = _("Hamster"),
        .height = 1,
        .weight = 1,
        .description = COMPOUND_STRING(
            "Seamore is a hamster who loves to\n"
            "swim, which he can do thanks to the\n"
            "turtle shell he wears on his back.\n"
            "It's unclear how that helps."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Hamtaro,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 50),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Hamtaro,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Hamtaro,
        .shinyPalette = gMonShinyPalette_Hamtaro,
        .iconSprite = gMonIcon_Hamtaro,
        .iconPalIndex =5,
        FOOTPRINT(QuestionMark)
        .levelUpLearnset = sHamtaroLevelUpLearnset,
        .teachableLearnset = sHamtaroTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 100, SPECIES_NONE},
                                {EVO_ITEM, ITEM_MOOMOO_MILK, SPECIES_NONE}),
        OVERWORLD(
            sPicTable_Hamtaro,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following_Asym,
            gOverworldPalette_Hamtaro,
            gShinyOverworldPalette_Hamtaro
        )
    },

    
    [SPECIES_HERK_Q_HAM] =
    {
        .baseHP        = 85,
        .baseAttack    = 90,
        .baseDefense   = 85,
        .baseSpeed     = 100,
        .baseSpAttack  = 65,
        .baseSpDefense = 65,
        .types = MON_TYPES(TYPE_GROUND),
        .catchRate = 255,
        .expYield = 67,
        .evYield_HP = 1,
        .evYield_Defense = 1,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(0),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_GLUTTONY, ABILITY_CHEEK_POUCH, ABILITY_TECHNICIAN },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Jolly"),
        .cryId = CRY_HAMTARO,
        .natDexNum = NATIONAL_DEX_HAMTARO,
        .categoryName = _("Hamster"),
        .height = 1,
        .weight = 1,
        .description = COMPOUND_STRING(
            "This guy is really tough.\n"
            "He's sooooooooooo tough.\n"
            "Everyone wants to be as strong\n"
            "as he is."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Hamtaro,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 50),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Hamtaro,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Hamtaro,
        .shinyPalette = gMonShinyPalette_Hamtaro,
        .iconSprite = gMonIcon_Hamtaro,
        .iconPalIndex =5,
        FOOTPRINT(QuestionMark)
        .levelUpLearnset = sHamtaroLevelUpLearnset,
        .teachableLearnset = sHamtaroTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 100, SPECIES_NONE},
                                {EVO_ITEM, ITEM_MOOMOO_MILK, SPECIES_NONE}),
        OVERWORLD(
            sPicTable_Hamtaro,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following_Asym,
            gOverworldPalette_Hamtaro,
            gShinyOverworldPalette_Hamtaro
        )
    },

    
    [SPECIES_TEENIE_GIRL] =
    {
        .baseHP        = 85,
        .baseAttack    = 90,
        .baseDefense   = 85,
        .baseSpeed     = 100,
        .baseSpAttack  = 65,
        .baseSpDefense = 65,
        .types = MON_TYPES(TYPE_FAIRY),
        .catchRate = 255,
        .expYield = 67,
        .evYield_HP = 1,
        .evYield_Defense = 1,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(0),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_GLUTTONY, ABILITY_CHEEK_POUCH, ABILITY_TECHNICIAN },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Pinkie"),
        .cryId = CRY_HAMTARO,
        .natDexNum = NATIONAL_DEX_HAMTARO,
        .categoryName = _("Hamster"),
        .height = 1,
        .weight = 1,
        .description = COMPOUND_STRING(
            "Pinkie is a small, pink hamster who\n"
            "wants a boyfriend who is bigger than\n"
            "her. Thankfully she's small enough\n"
            "that it won't be hard to find one."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Hamtaro,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 50),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Hamtaro,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Hamtaro,
        .shinyPalette = gMonShinyPalette_Hamtaro,
        .iconSprite = gMonIcon_Hamtaro,
        .iconPalIndex =5,
        FOOTPRINT(QuestionMark)
        .levelUpLearnset = sHamtaroLevelUpLearnset,
        .teachableLearnset = sHamtaroTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 100, SPECIES_NONE},
                                {EVO_ITEM, ITEM_MOOMOO_MILK, SPECIES_NONE}),
        OVERWORLD(
            sPicTable_Hamtaro,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following_Asym,
            gOverworldPalette_Hamtaro,
            gShinyOverworldPalette_Hamtaro
        )
    },
  
    
    [SPECIES_BALLAD_HAM] =
    {
        .baseHP        = 85,
        .baseAttack    = 90,
        .baseDefense   = 85,
        .baseSpeed     = 100,
        .baseSpAttack  = 65,
        .baseSpDefense = 65,
        .types = MON_TYPES(TYPE_WATER),
        .catchRate = 255,
        .expYield = 67,
        .evYield_HP = 1,
        .evYield_Defense = 1,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(0),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_GLUTTONY, ABILITY_CHEEK_POUCH, ABILITY_TECHNICIAN },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Odette"),
        .cryId = CRY_HAMTARO,
        .natDexNum = NATIONAL_DEX_HAMTARO,
        .categoryName = _("Hamster"),
        .height = 1,
        .weight = 1,
        .description = COMPOUND_STRING(
            "Odette is a trained ballerina who\n"
            "loves to dance, but can get annoyed\n"
            "by people wanting her to do it too\n"
            "much."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Hamtaro,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 50),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Hamtaro,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Hamtaro,
        .shinyPalette = gMonShinyPalette_Hamtaro,
        .iconSprite = gMonIcon_Hamtaro,
        .iconPalIndex =5,
        FOOTPRINT(QuestionMark)
        .levelUpLearnset = sHamtaroLevelUpLearnset,
        .teachableLearnset = sHamtaroTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 100, SPECIES_NONE},
                                {EVO_ITEM, ITEM_MOOMOO_MILK, SPECIES_NONE}),
        OVERWORLD(
            sPicTable_Hamtaro,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following_Asym,
            gOverworldPalette_Hamtaro,
            gShinyOverworldPalette_Hamtaro
        )
    },
 

    
    [SPECIES_DOCTOR_HAM] =
    {
        .baseHP        = 85,
        .baseAttack    = 90,
        .baseDefense   = 85,
        .baseSpeed     = 100,
        .baseSpAttack  = 65,
        .baseSpDefense = 65,
        .types = MON_TYPES(TYPE_GRASS),
        .catchRate = 255,
        .expYield = 67,
        .evYield_HP = 1,
        .evYield_Defense = 1,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(0),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_GLUTTONY, ABILITY_CHEEK_POUCH, ABILITY_TECHNICIAN },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Frankie"),
        .cryId = CRY_HAMTARO,
        .natDexNum = NATIONAL_DEX_HAMTARO,
        .categoryName = _("Hamster"),
        .height = 1,
        .weight = 1,
        .description = COMPOUND_STRING(
            "Doctor\n"
            "Doctor\n"
            "Doctor\n"
            "Doctor."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Hamtaro,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 50),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Hamtaro,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Hamtaro,
        .shinyPalette = gMonShinyPalette_Hamtaro,
        .iconSprite = gMonIcon_Hamtaro,
        .iconPalIndex =5,
        FOOTPRINT(QuestionMark)
        .levelUpLearnset = sHamtaroLevelUpLearnset,
        .teachableLearnset = sHamtaroTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 100, SPECIES_NONE},
                                {EVO_ITEM, ITEM_MOOMOO_MILK, SPECIES_NONE}),
        OVERWORLD(
            sPicTable_Hamtaro,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following_Asym,
            gOverworldPalette_Hamtaro,
            gShinyOverworldPalette_Hamtaro
        )
    },
 
    
    [SPECIES_BROSKI] =
    {
        .baseHP        = 85,
        .baseAttack    = 90,
        .baseDefense   = 85,
        .baseSpeed     = 100,
        .baseSpAttack  = 65,
        .baseSpDefense = 65,
        .types = MON_TYPES(TYPE_FIRE),
        .catchRate = 255,
        .expYield = 67,
        .evYield_HP = 1,
        .evYield_Defense = 1,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(0),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_GLUTTONY, ABILITY_CHEEK_POUCH, ABILITY_TECHNICIAN },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Broski"),
        .cryId = CRY_HAMTARO,
        .natDexNum = NATIONAL_DEX_HAMTARO,
        .categoryName = _("Hamster"),
        .height = 1,
        .weight = 1,
        .description = COMPOUND_STRING(
            "Broski is a a really cool surfer Ham\n"
            "who loves the beach.\n"
            "He's actually a bit of a poser, but\n"
            "he's hoping no one notices."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Hamtaro,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 50),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Hamtaro,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Hamtaro,
        .shinyPalette = gMonShinyPalette_Hamtaro,
        .iconSprite = gMonIcon_Hamtaro,
        .iconPalIndex =5,
        FOOTPRINT(QuestionMark)
        .levelUpLearnset = sHamtaroLevelUpLearnset,
        .teachableLearnset = sHamtaroTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 100, SPECIES_NONE},
                                {EVO_ITEM, ITEM_MOOMOO_MILK, SPECIES_NONE}),
        OVERWORLD(
            sPicTable_Hamtaro,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following_Asym,
            gOverworldPalette_Hamtaro,
            gShinyOverworldPalette_Hamtaro
        )
    },

    
    [SPECIES_NURSE] =
    {
        .baseHP        = 85,
        .baseAttack    = 90,
        .baseDefense   = 85,
        .baseSpeed     = 100,
        .baseSpAttack  = 65,
        .baseSpDefense = 65,
        .types = MON_TYPES(TYPE_GRASS, TYPE_FAIRY),
        .catchRate = 255,
        .expYield = 67,
        .evYield_HP = 1,
        .evYield_Defense = 1,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(0),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_GLUTTONY, ABILITY_CHEEK_POUCH, ABILITY_TECHNICIAN },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Joy"),
        .cryId = CRY_HAMTARO,
        .natDexNum = NATIONAL_DEX_HAMTARO,
        .categoryName = _("Hamster"),
        .height = 1,
        .weight = 1,
        .description = COMPOUND_STRING(
            "Helloooooooooo Nurse.\n"
            "N\n"
            "ur\n"
            "se."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Hamtaro,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 50),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Hamtaro,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Hamtaro,
        .shinyPalette = gMonShinyPalette_Hamtaro,
        .iconSprite = gMonIcon_Hamtaro,
        .iconPalIndex =5,
        FOOTPRINT(QuestionMark)
        .levelUpLearnset = sHamtaroLevelUpLearnset,
        .teachableLearnset = sHamtaroTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 100, SPECIES_NONE},
                                {EVO_ITEM, ITEM_MOOMOO_MILK, SPECIES_NONE}),
        OVERWORLD(
            sPicTable_Hamtaro,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following_Asym,
            gOverworldPalette_Hamtaro,
            gShinyOverworldPalette_Hamtaro
        )
    },

    
    [SPECIES_SUN_BATHER_HAM] =
    {
        .baseHP        = 85,
        .baseAttack    = 90,
        .baseDefense   = 85,
        .baseSpeed     = 100,
        .baseSpAttack  = 65,
        .baseSpDefense = 65,
        .types = MON_TYPES(TYPE_WATER, TYPE_GROUND),
        .catchRate = 255,
        .expYield = 67,
        .evYield_HP = 1,
        .evYield_Defense = 1,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(0),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_GLUTTONY, ABILITY_CHEEK_POUCH, ABILITY_TECHNICIAN },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Mela"),
        .cryId = CRY_HAMTARO,
        .natDexNum = NATIONAL_DEX_HAMTARO,
        .categoryName = _("Hamster"),
        .height = 1,
        .weight = 1,
        .description = COMPOUND_STRING(
            "Mela loves to sunbathe and has a\n"
            "sense of adventure.\n"
            "For some reason, she thinks that\n"
            "olive oil is used for sunbathing."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Hamtaro,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 50),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Hamtaro,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Hamtaro,
        .shinyPalette = gMonShinyPalette_Hamtaro,
        .iconSprite = gMonIcon_Hamtaro,
        .iconPalIndex =5,
        FOOTPRINT(QuestionMark)
        .levelUpLearnset = sHamtaroLevelUpLearnset,
        .teachableLearnset = sHamtaroTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 100, SPECIES_NONE},
                                {EVO_ITEM, ITEM_MOOMOO_MILK, SPECIES_NONE}),
        OVERWORLD(
            sPicTable_Hamtaro,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following_Asym,
            gOverworldPalette_Hamtaro,
            gShinyOverworldPalette_Hamtaro
        )
    },
 
    
    [SPECIES_STRAWBERRY_SOCCER_HAM] =
    {
        .baseHP        = 85,
        .baseAttack    = 90,
        .baseDefense   = 85,
        .baseSpeed     = 100,
        .baseSpAttack  = 65,
        .baseSpDefense = 65,
        .types = MON_TYPES(TYPE_FIRE, TYPE_GROUND),
        .catchRate = 255,
        .expYield = 67,
        .evYield_HP = 1,
        .evYield_Defense = 1,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(0),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_GLUTTONY, ABILITY_CHEEK_POUCH, ABILITY_TECHNICIAN },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("GoGo"),
        .cryId = CRY_HAMTARO,
        .natDexNum = NATIONAL_DEX_HAMTARO,
        .categoryName = _("Hamster"),
        .height = 1,
        .weight = 1,
        .description = COMPOUND_STRING(
            "Gogo is a great strawberry soccer\n"
            "coach who used to play pro until\n"
            "he tore his ACL in the big match\n"
            "and had to retire."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Hamtaro,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 50),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Hamtaro,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Hamtaro,
        .shinyPalette = gMonShinyPalette_Hamtaro,
        .iconSprite = gMonIcon_Hamtaro,
        .iconPalIndex =5,
        FOOTPRINT(QuestionMark)
        .levelUpLearnset = sHamtaroLevelUpLearnset,
        .teachableLearnset = sHamtaroTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 100, SPECIES_NONE},
                                {EVO_ITEM, ITEM_MOOMOO_MILK, SPECIES_NONE}),
        OVERWORLD(
            sPicTable_Hamtaro,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following_Asym,
            gOverworldPalette_Hamtaro,
            gShinyOverworldPalette_Hamtaro
        )
    },
                      
};

const struct EggData gEggDatas[EGG_ID_COUNT] =
{
#include "egg_data.h"
};
